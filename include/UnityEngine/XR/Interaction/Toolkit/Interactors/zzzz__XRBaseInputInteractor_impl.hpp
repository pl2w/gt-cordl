#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Interactors/XRBaseInputInteractor.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__TargetPriorityMode_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__XRBaseInputInteractor_InputCompatibilityMode_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__XRBaseInputInteractor_InputTriggerType_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__XRBaseInteractor_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__XRBaseInputInteractor_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Feedback/zzzz__SimpleAudioFeedback_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Feedback/zzzz__SimpleHapticFeedback_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Haptics/zzzz__HapticImpulsePlayer_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Readers/zzzz__XRInputButtonReader_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Readers/zzzz__XRInputValueReader_1_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Readers/zzzz__XRInputValueReader_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__IXRActivateInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__IXRHoverInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__IXRActivateInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__IXRInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__TargetPriorityMode_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__XRBaseInputInteractor_InputCompatibilityMode_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__XRBaseInputInteractor_InputTriggerType_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__XRBaseInputInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/Pooling/zzzz__LinkedPool_1_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__ActivateEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__DeactivateEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__HoverEnterEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__HoverExitEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__SelectEnterEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__SelectExitEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRBaseController_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRInteractionUpdateOrder_UpdatePhase_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.get_selectInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::get_selectInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb465d84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"get_selectInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.set_selectInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::set_selectInput)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb465d8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"set_selectInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.get_activateInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::get_activateInput)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb465da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"get_activateInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.set_activateInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::set_activateInput)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb465da8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"set_activateInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.get_selectActionTrigger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::XRBaseInputInteractor_InputTriggerType (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::get_selectActionTrigger)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb465dbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"get_selectActionTrigger", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.set_selectActionTrigger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)(::GlobalNamespace::XRBaseInputInteractor_InputTriggerType)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::set_selectActionTrigger)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb465dc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"set_selectActionTrigger", {}, {::i2c::type_of<::GlobalNamespace::XRBaseInputInteractor_InputTriggerType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.get_allowHoveredActivate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::get_allowHoveredActivate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb465dcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"get_allowHoveredActivate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.set_allowHoveredActivate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::set_allowHoveredActivate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb465dd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"set_allowHoveredActivate", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.get_targetPriorityMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactors::TargetPriorityMode (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::get_targetPriorityMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb465ddc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(), 61}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.set_targetPriorityMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::TargetPriorityMode)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::set_targetPriorityMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb465de4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(), 62}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.get_allowActivate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::get_allowActivate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb465dec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"get_allowActivate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.set_allowActivate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::set_allowActivate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb465df4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"set_allowActivate", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.get_isSelectActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::get_isSelectActive)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xb465dfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(), 60}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.get_shouldActivate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::get_shouldActivate)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb465e7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(), 99}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.get_shouldDeactivate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::get_shouldDeactivate)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb465ec4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(), 100}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.get_logicalSelectState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState* (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::get_logicalSelectState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb465f0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"get_logicalSelectState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.get_logicalActivateState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState* (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::get_logicalActivateState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb465f14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"get_logicalActivateState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.get_buttonReaders
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>* (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::get_buttonReaders)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb465f1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"get_buttonReaders", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.get_valueReaders
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader*>* (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::get_valueReaders)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb465f24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"get_valueReaders", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::Awake)> {
  constexpr static std::size_t size = 0x404;
  constexpr static std::size_t addrs = 0xb4616a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(), 52}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::OnEnable)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0xb461ae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(), 53}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::OnDisable)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0xb461d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(), 54}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.PreprocessInteractor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)(::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::PreprocessInteractor)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0xb4622fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(), 68}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.ProcessInteractor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)(::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::ProcessInteractor)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xb4669b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(), 69}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.SetInputProperty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)(::by_ref<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>, ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::SetInputProperty)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb460f38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"SetInputProperty", {}, {::i2c::type_of<::by_ref<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.SendActivateEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable*>*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::SendActivateEvent)> {
  constexpr static std::size_t size = 0x344;
  constexpr static std::size_t addrs = 0xb466ad4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"SendActivateEvent", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.SendDeactivateEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable*>*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::SendDeactivateEvent)> {
  constexpr static std::size_t size = 0x344;
  constexpr static std::size_t addrs = 0xb466e18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"SendDeactivateEvent", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.GetActivateTargets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable*>*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::GetActivateTargets)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0xb46715c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(), 101}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.OnSelectEntering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::OnSelectEntering)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xb464450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(), 76}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.OnSelectExiting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::OnSelectExiting)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0xb464868;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(), 78}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.SendHapticImpulse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)(float_t, float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::SendHapticImpulse)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xb467820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"SendHapticImpulse", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.PlayAudio
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)(::UnityEngine::AudioClip*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::PlayAudio)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xb4678e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(), 102}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.GetOrCreateAudioSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::GetOrCreateAudioSource)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xb4679a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"GetOrCreateAudioSource", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.GetOrCreateHapticImpulsePlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::GetOrCreateHapticImpulsePlayer)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xb4678b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"GetOrCreateHapticImpulsePlayer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.GetOrCreateAndMigrateAudioFeedback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::GetOrCreateAndMigrateAudioFeedback)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0xb4660ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"GetOrCreateAndMigrateAudioFeedback", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.GetOrCreateAndMigrateHapticFeedback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::GetOrCreateAndMigrateHapticFeedback)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0xb466248;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"GetOrCreateAndMigrateHapticFeedback", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.get_hideControllerOnSelect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::get_hideControllerOnSelect)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb467a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"get_hideControllerOnSelect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.set_hideControllerOnSelect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::set_hideControllerOnSelect)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xb467a68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"set_hideControllerOnSelect", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.get_inputCompatibilityMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::XRBaseInputInteractor_InputCompatibilityMode (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::get_inputCompatibilityMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb467b0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"get_inputCompatibilityMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.set_inputCompatibilityMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)(::GlobalNamespace::XRBaseInputInteractor_InputCompatibilityMode)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::set_inputCompatibilityMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb467b14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"set_inputCompatibilityMode", {}, {::i2c::type_of<::GlobalNamespace::XRBaseInputInteractor_InputCompatibilityMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.get_forceDeprecatedInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::get_forceDeprecatedInput)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb466948;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"get_forceDeprecatedInput", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.set_forceDeprecatedInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::set_forceDeprecatedInput)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xb467b1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"set_forceDeprecatedInput", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.get_xrController
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController> (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::get_xrController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb467b3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"get_xrController", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.set_xrController
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::XRBaseController*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::set_xrController)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xb466008;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"set_xrController", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.get_isUISelectActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::get_isUISelectActive)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xb467b44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(), 103}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.get_uiScrollValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::get_uiScrollValue)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xb467bcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"get_uiScrollValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.get_playAudioClipOnSelectEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::get_playAudioClipOnSelectEntered)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb467c88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"get_playAudioClipOnSelectEntered", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.set_playAudioClipOnSelectEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::set_playAudioClipOnSelectEntered)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xb467c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"set_playAudioClipOnSelectEntered", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.get_audioClipForOnSelectEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AudioClip> (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::get_audioClipForOnSelectEntered)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb467d14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"get_audioClipForOnSelectEntered", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.set_audioClipForOnSelectEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)(::UnityEngine::AudioClip*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::set_audioClipForOnSelectEntered)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xb467d1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"set_audioClipForOnSelectEntered", {}, {::i2c::type_of<::UnityEngine::AudioClip*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.get_playAudioClipOnSelectExited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::get_playAudioClipOnSelectExited)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb467dc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"get_playAudioClipOnSelectExited", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.set_playAudioClipOnSelectExited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::set_playAudioClipOnSelectExited)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xb467dc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"set_playAudioClipOnSelectExited", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.get_audioClipForOnSelectExited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AudioClip> (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::get_audioClipForOnSelectExited)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb467e4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"get_audioClipForOnSelectExited", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.set_audioClipForOnSelectExited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)(::UnityEngine::AudioClip*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::set_audioClipForOnSelectExited)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xb467e54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"set_audioClipForOnSelectExited", {}, {::i2c::type_of<::UnityEngine::AudioClip*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.get_playAudioClipOnSelectCanceled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::get_playAudioClipOnSelectCanceled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb467ef8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"get_playAudioClipOnSelectCanceled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.set_playAudioClipOnSelectCanceled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::set_playAudioClipOnSelectCanceled)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xb467f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"set_playAudioClipOnSelectCanceled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.get_audioClipForOnSelectCanceled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AudioClip> (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::get_audioClipForOnSelectCanceled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb467f84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"get_audioClipForOnSelectCanceled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.set_audioClipForOnSelectCanceled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)(::UnityEngine::AudioClip*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::set_audioClipForOnSelectCanceled)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xb467f8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"set_audioClipForOnSelectCanceled", {}, {::i2c::type_of<::UnityEngine::AudioClip*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.get_playAudioClipOnHoverEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::get_playAudioClipOnHoverEntered)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb468030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"get_playAudioClipOnHoverEntered", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.set_playAudioClipOnHoverEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::set_playAudioClipOnHoverEntered)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xb468038;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"set_playAudioClipOnHoverEntered", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.get_audioClipForOnHoverEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AudioClip> (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::get_audioClipForOnHoverEntered)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4680bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"get_audioClipForOnHoverEntered", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.set_audioClipForOnHoverEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)(::UnityEngine::AudioClip*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::set_audioClipForOnHoverEntered)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xb4680c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"set_audioClipForOnHoverEntered", {}, {::i2c::type_of<::UnityEngine::AudioClip*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.get_playAudioClipOnHoverExited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::get_playAudioClipOnHoverExited)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb468168;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"get_playAudioClipOnHoverExited", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.set_playAudioClipOnHoverExited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::set_playAudioClipOnHoverExited)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xb468170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"set_playAudioClipOnHoverExited", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.get_audioClipForOnHoverExited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AudioClip> (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::get_audioClipForOnHoverExited)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4681f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"get_audioClipForOnHoverExited", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.set_audioClipForOnHoverExited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)(::UnityEngine::AudioClip*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::set_audioClipForOnHoverExited)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xb4681fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"set_audioClipForOnHoverExited", {}, {::i2c::type_of<::UnityEngine::AudioClip*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.get_playAudioClipOnHoverCanceled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::get_playAudioClipOnHoverCanceled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4682a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"get_playAudioClipOnHoverCanceled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.set_playAudioClipOnHoverCanceled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::set_playAudioClipOnHoverCanceled)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xb4682a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"set_playAudioClipOnHoverCanceled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.get_audioClipForOnHoverCanceled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AudioClip> (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::get_audioClipForOnHoverCanceled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb46832c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"get_audioClipForOnHoverCanceled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.set_audioClipForOnHoverCanceled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)(::UnityEngine::AudioClip*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::set_audioClipForOnHoverCanceled)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xb468334;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"set_audioClipForOnHoverCanceled", {}, {::i2c::type_of<::UnityEngine::AudioClip*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.get_allowHoverAudioWhileSelecting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::get_allowHoverAudioWhileSelecting)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4683d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"get_allowHoverAudioWhileSelecting", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.set_allowHoverAudioWhileSelecting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::set_allowHoverAudioWhileSelecting)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xb4683e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"set_allowHoverAudioWhileSelecting", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.get_playHapticsOnSelectEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::get_playHapticsOnSelectEntered)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb468464;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"get_playHapticsOnSelectEntered", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.set_playHapticsOnSelectEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::set_playHapticsOnSelectEntered)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xb46846c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"set_playHapticsOnSelectEntered", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.get_hapticSelectEnterIntensity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::get_hapticSelectEnterIntensity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4684f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"get_hapticSelectEnterIntensity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.set_hapticSelectEnterIntensity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::set_hapticSelectEnterIntensity)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xb4684f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"set_hapticSelectEnterIntensity", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.get_hapticSelectEnterDuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::get_hapticSelectEnterDuration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4685d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"get_hapticSelectEnterDuration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.set_hapticSelectEnterDuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::set_hapticSelectEnterDuration)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xb4685dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"set_hapticSelectEnterDuration", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.get_playHapticsOnSelectExited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::get_playHapticsOnSelectExited)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4686b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"get_playHapticsOnSelectExited", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.set_playHapticsOnSelectExited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::set_playHapticsOnSelectExited)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xb4686c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"set_playHapticsOnSelectExited", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.get_hapticSelectExitIntensity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::get_hapticSelectExitIntensity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb468744;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"get_hapticSelectExitIntensity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.set_hapticSelectExitIntensity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::set_hapticSelectExitIntensity)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xb46874c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"set_hapticSelectExitIntensity", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.get_hapticSelectExitDuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::get_hapticSelectExitDuration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb468828;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"get_hapticSelectExitDuration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.set_hapticSelectExitDuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::set_hapticSelectExitDuration)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xb468830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"set_hapticSelectExitDuration", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.get_playHapticsOnSelectCanceled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::get_playHapticsOnSelectCanceled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb46890c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"get_playHapticsOnSelectCanceled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.set_playHapticsOnSelectCanceled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::set_playHapticsOnSelectCanceled)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xb468914;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"set_playHapticsOnSelectCanceled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.get_hapticSelectCancelIntensity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::get_hapticSelectCancelIntensity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb468998;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"get_hapticSelectCancelIntensity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.set_hapticSelectCancelIntensity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::set_hapticSelectCancelIntensity)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xb4689a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"set_hapticSelectCancelIntensity", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.get_hapticSelectCancelDuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::get_hapticSelectCancelDuration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb468a7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"get_hapticSelectCancelDuration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.set_hapticSelectCancelDuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::set_hapticSelectCancelDuration)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xb468a84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"set_hapticSelectCancelDuration", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.get_playHapticsOnHoverEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::get_playHapticsOnHoverEntered)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb468b60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"get_playHapticsOnHoverEntered", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.set_playHapticsOnHoverEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::set_playHapticsOnHoverEntered)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xb468b68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"set_playHapticsOnHoverEntered", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.get_hapticHoverEnterIntensity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::get_hapticHoverEnterIntensity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb468bec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"get_hapticHoverEnterIntensity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.set_hapticHoverEnterIntensity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::set_hapticHoverEnterIntensity)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xb468bf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"set_hapticHoverEnterIntensity", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.get_hapticHoverEnterDuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::get_hapticHoverEnterDuration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb468cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"get_hapticHoverEnterDuration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.set_hapticHoverEnterDuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::set_hapticHoverEnterDuration)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xb468cd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"set_hapticHoverEnterDuration", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.get_playHapticsOnHoverExited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::get_playHapticsOnHoverExited)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb468db4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"get_playHapticsOnHoverExited", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.set_playHapticsOnHoverExited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::set_playHapticsOnHoverExited)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xb468dbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"set_playHapticsOnHoverExited", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.get_hapticHoverExitIntensity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::get_hapticHoverExitIntensity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb468e40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"get_hapticHoverExitIntensity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.set_hapticHoverExitIntensity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::set_hapticHoverExitIntensity)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xb468e48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"set_hapticHoverExitIntensity", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.get_hapticHoverExitDuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::get_hapticHoverExitDuration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb468f24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"get_hapticHoverExitDuration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.set_hapticHoverExitDuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::set_hapticHoverExitDuration)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xb468f2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"set_hapticHoverExitDuration", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.get_playHapticsOnHoverCanceled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::get_playHapticsOnHoverCanceled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb469008;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"get_playHapticsOnHoverCanceled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.set_playHapticsOnHoverCanceled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::set_playHapticsOnHoverCanceled)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xb469010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"set_playHapticsOnHoverCanceled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.get_hapticHoverCancelIntensity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::get_hapticHoverCancelIntensity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb469094;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"get_hapticHoverCancelIntensity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.set_hapticHoverCancelIntensity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::set_hapticHoverCancelIntensity)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xb46909c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"set_hapticHoverCancelIntensity", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.get_hapticHoverCancelDuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::get_hapticHoverCancelDuration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb469178;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"get_hapticHoverCancelDuration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.set_hapticHoverCancelDuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::set_hapticHoverCancelDuration)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xb469180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"set_hapticHoverCancelDuration", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.get_allowHoverHapticsWhileSelecting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::get_allowHoverHapticsWhileSelecting)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb46925c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"get_allowHoverHapticsWhileSelecting", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.set_allowHoverHapticsWhileSelecting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::set_allowHoverHapticsWhileSelecting)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xb469264;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"set_allowHoverHapticsWhileSelecting", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.OnXRControllerChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::OnXRControllerChanged)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xb4692e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(), 104}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.WarnMixedInputConfiguration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::WarnMixedInputConfiguration)> {
  constexpr static std::size_t size = 0x3c0;
  constexpr static std::size_t addrs = 0xb466580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"WarnMixedInputConfiguration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.CreateEffectsAudioSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::CreateEffectsAudioSource)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb469354;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"CreateEffectsAudioSource", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.CanPlayHoverAudio
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::CanPlayHoverAudio)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb469358;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"CanPlayHoverAudio", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.CanPlayHoverHaptics
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::CanPlayHoverHaptics)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb4693f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"CanPlayHoverHaptics", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.HandleSelecting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::HandleSelecting)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb46941c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"HandleSelecting", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.HandleDeselecting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::HandleDeselecting)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb469420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"HandleDeselecting", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.OnHoverEntering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::OnHoverEntering)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb469424;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(), 72}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.OnHoverExiting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::OnHoverExiting)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb469508;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(), 74}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.CreateActivateEventArgs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs* (*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::CreateActivateEventArgs)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb469678;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"CreateActivateEventArgs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.CreateDeactivateEventArgs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs* (*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::CreateDeactivateEventArgs)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb4696cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"CreateDeactivateEventArgs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::_ctor)> {
  constexpr static std::size_t size = 0x420;
  constexpr static std::size_t addrs = 0xb465964;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor.UnityEngine_XR_Interaction_Toolkit_Interactors_IXRInteractor_get_transform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::UnityEngine_XR_Interaction_Toolkit_Interactors_IXRInteractor_get_transform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb469c78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactors.IXRInteractor.get_transform", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_get_m_SelectInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SelectInput;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_get_m_SelectInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SelectInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_set_m_SelectInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SelectInput = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_get_m_ActivateInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ActivateInput;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_get_m_ActivateInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ActivateInput;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_set_m_ActivateInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ActivateInput = value;
}
constexpr ::GlobalNamespace::XRBaseInputInteractor_InputTriggerType& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_get_m_SelectActionTrigger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SelectActionTrigger;
}
constexpr ::GlobalNamespace::XRBaseInputInteractor_InputTriggerType const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_get_m_SelectActionTrigger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SelectActionTrigger;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_set_m_SelectActionTrigger(::GlobalNamespace::XRBaseInputInteractor_InputTriggerType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SelectActionTrigger = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_get_m_AllowHoveredActivate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AllowHoveredActivate;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_get_m_AllowHoveredActivate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AllowHoveredActivate;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_set_m_AllowHoveredActivate(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AllowHoveredActivate = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::TargetPriorityMode& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_get_m_TargetPriorityMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TargetPriorityMode;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::TargetPriorityMode const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_get_m_TargetPriorityMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TargetPriorityMode;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_set_m_TargetPriorityMode(::UnityEngine::XR::Interaction::Toolkit::Interactors::TargetPriorityMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TargetPriorityMode = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_get_m_AllowActivate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AllowActivate;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_get_m_AllowActivate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AllowActivate;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_set_m_AllowActivate(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AllowActivate = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>*& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_get__buttonReaders_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buttonReaders_k__BackingField;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>* const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_get__buttonReaders_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buttonReaders_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_set__buttonReaders_k__BackingField(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____buttonReaders_k__BackingField = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader*>*& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_get__valueReaders_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____valueReaders_k__BackingField;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader*>* const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_get__valueReaders_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____valueReaders_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_set__valueReaders_k__BackingField(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____valueReaders_k__BackingField = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs*>*& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_get_m_ActivateEventArgs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ActivateEventArgs;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs*>* const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_get_m_ActivateEventArgs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ActivateEventArgs;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_set_m_ActivateEventArgs(::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ActivateEventArgs = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs*>*& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_get_m_DeactivateEventArgs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DeactivateEventArgs;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs*>* const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_get_m_DeactivateEventArgs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DeactivateEventArgs;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_set_m_DeactivateEventArgs(::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_DeactivateEventArgs = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState*& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_get_m_LogicalSelectState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LogicalSelectState;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState* const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_get_m_LogicalSelectState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LogicalSelectState;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_set_m_LogicalSelectState(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LogicalSelectState = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState*& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_get_m_LogicalActivateState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LogicalActivateState;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState* const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_get_m_LogicalActivateState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LogicalActivateState;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_set_m_LogicalActivateState(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LogicalActivateState = value;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback>& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_get_m_AudioFeedback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AudioFeedback;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback> const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_get_m_AudioFeedback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AudioFeedback;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_set_m_AudioFeedback(::UnityW<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AudioFeedback = value;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback>& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_get_m_HapticFeedback()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HapticFeedback;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback> const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_get_m_HapticFeedback() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HapticFeedback;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_set_m_HapticFeedback(::UnityW<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HapticFeedback = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_get_m_AudioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AudioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_get_m_AudioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AudioSource;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_set_m_AudioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AudioSource = value;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulsePlayer>& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_get_m_HapticImpulsePlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HapticImpulsePlayer;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulsePlayer> const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_get_m_HapticImpulsePlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HapticImpulsePlayer;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_set_m_HapticImpulsePlayer(::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulsePlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HapticImpulsePlayer = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_get_m_HideControllerOnSelect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HideControllerOnSelect;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_get_m_HideControllerOnSelect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HideControllerOnSelect;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_set_m_HideControllerOnSelect(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HideControllerOnSelect = value;
}
constexpr ::GlobalNamespace::XRBaseInputInteractor_InputCompatibilityMode& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_get_m_InputCompatibilityMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InputCompatibilityMode;
}
constexpr ::GlobalNamespace::XRBaseInputInteractor_InputCompatibilityMode const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_get_m_InputCompatibilityMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InputCompatibilityMode;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_set_m_InputCompatibilityMode(::GlobalNamespace::XRBaseInputInteractor_InputCompatibilityMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_InputCompatibilityMode = value;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController>& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_get_m_Controller()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Controller;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController> const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_get_m_Controller() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Controller;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_set_m_Controller(::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Controller = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_get_m_HasXRController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HasXRController;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_get_m_HasXRController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HasXRController;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_set_m_HasXRController(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HasXRController = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_get_m_PlayAudioClipOnSelectEntered()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PlayAudioClipOnSelectEntered;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_get_m_PlayAudioClipOnSelectEntered() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PlayAudioClipOnSelectEntered;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_set_m_PlayAudioClipOnSelectEntered(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PlayAudioClipOnSelectEntered = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_get_m_AudioClipForOnSelectEntered()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AudioClipForOnSelectEntered;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_get_m_AudioClipForOnSelectEntered() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AudioClipForOnSelectEntered;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_set_m_AudioClipForOnSelectEntered(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AudioClipForOnSelectEntered = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_get_m_PlayAudioClipOnSelectExited()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PlayAudioClipOnSelectExited;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_get_m_PlayAudioClipOnSelectExited() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PlayAudioClipOnSelectExited;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_set_m_PlayAudioClipOnSelectExited(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PlayAudioClipOnSelectExited = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_get_m_AudioClipForOnSelectExited()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AudioClipForOnSelectExited;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_get_m_AudioClipForOnSelectExited() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AudioClipForOnSelectExited;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_set_m_AudioClipForOnSelectExited(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AudioClipForOnSelectExited = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_get_m_PlayAudioClipOnSelectCanceled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PlayAudioClipOnSelectCanceled;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_get_m_PlayAudioClipOnSelectCanceled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PlayAudioClipOnSelectCanceled;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_set_m_PlayAudioClipOnSelectCanceled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PlayAudioClipOnSelectCanceled = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_get_m_AudioClipForOnSelectCanceled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AudioClipForOnSelectCanceled;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_get_m_AudioClipForOnSelectCanceled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AudioClipForOnSelectCanceled;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_set_m_AudioClipForOnSelectCanceled(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AudioClipForOnSelectCanceled = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_get_m_PlayAudioClipOnHoverEntered()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PlayAudioClipOnHoverEntered;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_get_m_PlayAudioClipOnHoverEntered() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PlayAudioClipOnHoverEntered;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_set_m_PlayAudioClipOnHoverEntered(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PlayAudioClipOnHoverEntered = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_get_m_AudioClipForOnHoverEntered()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AudioClipForOnHoverEntered;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_get_m_AudioClipForOnHoverEntered() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AudioClipForOnHoverEntered;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_set_m_AudioClipForOnHoverEntered(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AudioClipForOnHoverEntered = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_get_m_PlayAudioClipOnHoverExited()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PlayAudioClipOnHoverExited;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_get_m_PlayAudioClipOnHoverExited() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PlayAudioClipOnHoverExited;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_set_m_PlayAudioClipOnHoverExited(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PlayAudioClipOnHoverExited = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_get_m_AudioClipForOnHoverExited()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AudioClipForOnHoverExited;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_get_m_AudioClipForOnHoverExited() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AudioClipForOnHoverExited;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_set_m_AudioClipForOnHoverExited(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AudioClipForOnHoverExited = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_get_m_PlayAudioClipOnHoverCanceled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PlayAudioClipOnHoverCanceled;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_get_m_PlayAudioClipOnHoverCanceled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PlayAudioClipOnHoverCanceled;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_set_m_PlayAudioClipOnHoverCanceled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PlayAudioClipOnHoverCanceled = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_get_m_AudioClipForOnHoverCanceled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AudioClipForOnHoverCanceled;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_get_m_AudioClipForOnHoverCanceled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AudioClipForOnHoverCanceled;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_set_m_AudioClipForOnHoverCanceled(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AudioClipForOnHoverCanceled = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_get_m_AllowHoverAudioWhileSelecting()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AllowHoverAudioWhileSelecting;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_get_m_AllowHoverAudioWhileSelecting() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AllowHoverAudioWhileSelecting;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_set_m_AllowHoverAudioWhileSelecting(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AllowHoverAudioWhileSelecting = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_get_m_PlayHapticsOnSelectEntered()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PlayHapticsOnSelectEntered;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_get_m_PlayHapticsOnSelectEntered() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PlayHapticsOnSelectEntered;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_set_m_PlayHapticsOnSelectEntered(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PlayHapticsOnSelectEntered = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_get_m_HapticSelectEnterIntensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HapticSelectEnterIntensity;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_get_m_HapticSelectEnterIntensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HapticSelectEnterIntensity;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_set_m_HapticSelectEnterIntensity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HapticSelectEnterIntensity = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_get_m_HapticSelectEnterDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HapticSelectEnterDuration;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_get_m_HapticSelectEnterDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HapticSelectEnterDuration;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_set_m_HapticSelectEnterDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HapticSelectEnterDuration = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_get_m_PlayHapticsOnSelectExited()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PlayHapticsOnSelectExited;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_get_m_PlayHapticsOnSelectExited() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PlayHapticsOnSelectExited;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_set_m_PlayHapticsOnSelectExited(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PlayHapticsOnSelectExited = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_get_m_HapticSelectExitIntensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HapticSelectExitIntensity;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_get_m_HapticSelectExitIntensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HapticSelectExitIntensity;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_set_m_HapticSelectExitIntensity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HapticSelectExitIntensity = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_get_m_HapticSelectExitDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HapticSelectExitDuration;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_get_m_HapticSelectExitDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HapticSelectExitDuration;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_set_m_HapticSelectExitDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HapticSelectExitDuration = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_get_m_PlayHapticsOnSelectCanceled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PlayHapticsOnSelectCanceled;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_get_m_PlayHapticsOnSelectCanceled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PlayHapticsOnSelectCanceled;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_set_m_PlayHapticsOnSelectCanceled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PlayHapticsOnSelectCanceled = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_get_m_HapticSelectCancelIntensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HapticSelectCancelIntensity;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_get_m_HapticSelectCancelIntensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HapticSelectCancelIntensity;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_set_m_HapticSelectCancelIntensity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HapticSelectCancelIntensity = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_get_m_HapticSelectCancelDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HapticSelectCancelDuration;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_get_m_HapticSelectCancelDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HapticSelectCancelDuration;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_set_m_HapticSelectCancelDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HapticSelectCancelDuration = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_get_m_PlayHapticsOnHoverEntered()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PlayHapticsOnHoverEntered;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_get_m_PlayHapticsOnHoverEntered() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PlayHapticsOnHoverEntered;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_set_m_PlayHapticsOnHoverEntered(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PlayHapticsOnHoverEntered = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_get_m_HapticHoverEnterIntensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HapticHoverEnterIntensity;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_get_m_HapticHoverEnterIntensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HapticHoverEnterIntensity;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_set_m_HapticHoverEnterIntensity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HapticHoverEnterIntensity = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_get_m_HapticHoverEnterDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HapticHoverEnterDuration;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_get_m_HapticHoverEnterDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HapticHoverEnterDuration;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_set_m_HapticHoverEnterDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HapticHoverEnterDuration = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_get_m_PlayHapticsOnHoverExited()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PlayHapticsOnHoverExited;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_get_m_PlayHapticsOnHoverExited() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PlayHapticsOnHoverExited;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_set_m_PlayHapticsOnHoverExited(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PlayHapticsOnHoverExited = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_get_m_HapticHoverExitIntensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HapticHoverExitIntensity;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_get_m_HapticHoverExitIntensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HapticHoverExitIntensity;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_set_m_HapticHoverExitIntensity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HapticHoverExitIntensity = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_get_m_HapticHoverExitDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HapticHoverExitDuration;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_get_m_HapticHoverExitDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HapticHoverExitDuration;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_set_m_HapticHoverExitDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HapticHoverExitDuration = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_get_m_PlayHapticsOnHoverCanceled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PlayHapticsOnHoverCanceled;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_get_m_PlayHapticsOnHoverCanceled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PlayHapticsOnHoverCanceled;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_set_m_PlayHapticsOnHoverCanceled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PlayHapticsOnHoverCanceled = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_get_m_HapticHoverCancelIntensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HapticHoverCancelIntensity;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_get_m_HapticHoverCancelIntensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HapticHoverCancelIntensity;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_set_m_HapticHoverCancelIntensity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HapticHoverCancelIntensity = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_get_m_HapticHoverCancelDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HapticHoverCancelDuration;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_get_m_HapticHoverCancelDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HapticHoverCancelDuration;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_set_m_HapticHoverCancelDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HapticHoverCancelDuration = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_get_m_AllowHoverHapticsWhileSelecting()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AllowHoverHapticsWhileSelecting;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_get_m_AllowHoverHapticsWhileSelecting() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AllowHoverHapticsWhileSelecting;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::__cordl_internal_set_m_AllowHoverHapticsWhileSelecting(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AllowHoverHapticsWhileSelecting = value;
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::setStaticF_s_ActivateTargets(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable*>*, "s_ActivateTargets", ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(std::forward<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable*>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable*>* UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::getStaticF_s_ActivateTargets()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable*>*, "s_ActivateTargets", ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>();
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::get_selectInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"get_selectInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::set_selectInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"set_selectInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::get_activateInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"get_activateInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::set_activateInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"set_activateInput", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::XRBaseInputInteractor_InputTriggerType UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::get_selectActionTrigger()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"get_selectActionTrigger", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::XRBaseInputInteractor_InputTriggerType>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::set_selectActionTrigger(::GlobalNamespace::XRBaseInputInteractor_InputTriggerType  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"set_selectActionTrigger", {}, {::i2c::type_of<::GlobalNamespace::XRBaseInputInteractor_InputTriggerType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::get_allowHoveredActivate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"get_allowHoveredActivate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::set_allowHoveredActivate(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"set_allowHoveredActivate", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::TargetPriorityMode UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::get_targetPriorityMode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(), 61}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Interactors::TargetPriorityMode>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::set_targetPriorityMode(::UnityEngine::XR::Interaction::Toolkit::Interactors::TargetPriorityMode  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(), 62}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::get_allowActivate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"get_allowActivate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::set_allowActivate(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"set_allowActivate", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::get_isSelectActive()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(), 60}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::get_shouldActivate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(), 99}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::get_shouldDeactivate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(), 100}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState* UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::get_logicalSelectState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"get_logicalSelectState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState*>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState* UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::get_logicalActivateState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"get_logicalActivateState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState*>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>* UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::get_buttonReaders()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"get_buttonReaders", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader*>* UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::get_valueReaders()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"get_valueReaders", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader*>*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(), 52}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(), 53}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(), 54}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::PreprocessInteractor(::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase  updatePhase)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(), 68}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, updatePhase);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::ProcessInteractor(::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase  updatePhase)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(), 69}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, updatePhase);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::SetInputProperty(::by_ref<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>  property, ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"SetInputProperty", {}, {::i2c::type_of<::by_ref<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, property, value);
}
template<typename TValue>
requires(::cordl_internals::value_type_constraint<TValue> && ::cordl_internals::default_constructor_constraint<TValue>)
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::SetInputProperty(::by_ref<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<TValue>*>  property, ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<TValue>*  value)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                    {"SetInputProperty", {::i2c::class_of<TValue>()}, {::i2c::type_of<::by_ref<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<TValue>*>>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<TValue>*>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<TValue>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, property, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::SendActivateEvent(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable*>*  targets)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"SendActivateEvent", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targets);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::SendDeactivateEvent(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable*>*  targets)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"SendDeactivateEvent", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targets);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::GetActivateTargets(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable*>*  targets)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(), 101}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targets);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::OnSelectEntering(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(), 76}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::OnSelectExiting(::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(), 78}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::SendHapticImpulse(float_t  amplitude, float_t  duration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"SendHapticImpulse", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, amplitude, duration);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::PlayAudio(::UnityEngine::AudioClip*  audioClip)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(), 102}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, audioClip);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::GetOrCreateAudioSource()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"GetOrCreateAudioSource", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::GetOrCreateHapticImpulsePlayer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"GetOrCreateHapticImpulsePlayer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::GetOrCreateAndMigrateAudioFeedback()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"GetOrCreateAndMigrateAudioFeedback", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::GetOrCreateAndMigrateHapticFeedback()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"GetOrCreateAndMigrateHapticFeedback", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::get_hideControllerOnSelect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"get_hideControllerOnSelect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::set_hideControllerOnSelect(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"set_hideControllerOnSelect", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::XRBaseInputInteractor_InputCompatibilityMode UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::get_inputCompatibilityMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"get_inputCompatibilityMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::XRBaseInputInteractor_InputCompatibilityMode>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::set_inputCompatibilityMode(::GlobalNamespace::XRBaseInputInteractor_InputCompatibilityMode  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"set_inputCompatibilityMode", {}, {::i2c::type_of<::GlobalNamespace::XRBaseInputInteractor_InputCompatibilityMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::get_forceDeprecatedInput()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"get_forceDeprecatedInput", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::set_forceDeprecatedInput(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"set_forceDeprecatedInput", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController> UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::get_xrController()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"get_xrController", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::set_xrController(::UnityEngine::XR::Interaction::Toolkit::XRBaseController*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"set_xrController", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::get_isUISelectActive()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(), 103}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::get_uiScrollValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"get_uiScrollValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::get_playAudioClipOnSelectEntered()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"get_playAudioClipOnSelectEntered", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::set_playAudioClipOnSelectEntered(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"set_playAudioClipOnSelectEntered", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::AudioClip> UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::get_audioClipForOnSelectEntered()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"get_audioClipForOnSelectEntered", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioClip>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::set_audioClipForOnSelectEntered(::UnityEngine::AudioClip*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"set_audioClipForOnSelectEntered", {}, {::i2c::type_of<::UnityEngine::AudioClip*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::get_playAudioClipOnSelectExited()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"get_playAudioClipOnSelectExited", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::set_playAudioClipOnSelectExited(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"set_playAudioClipOnSelectExited", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::AudioClip> UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::get_audioClipForOnSelectExited()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"get_audioClipForOnSelectExited", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioClip>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::set_audioClipForOnSelectExited(::UnityEngine::AudioClip*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"set_audioClipForOnSelectExited", {}, {::i2c::type_of<::UnityEngine::AudioClip*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::get_playAudioClipOnSelectCanceled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"get_playAudioClipOnSelectCanceled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::set_playAudioClipOnSelectCanceled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"set_playAudioClipOnSelectCanceled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::AudioClip> UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::get_audioClipForOnSelectCanceled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"get_audioClipForOnSelectCanceled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioClip>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::set_audioClipForOnSelectCanceled(::UnityEngine::AudioClip*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"set_audioClipForOnSelectCanceled", {}, {::i2c::type_of<::UnityEngine::AudioClip*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::get_playAudioClipOnHoverEntered()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"get_playAudioClipOnHoverEntered", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::set_playAudioClipOnHoverEntered(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"set_playAudioClipOnHoverEntered", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::AudioClip> UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::get_audioClipForOnHoverEntered()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"get_audioClipForOnHoverEntered", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioClip>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::set_audioClipForOnHoverEntered(::UnityEngine::AudioClip*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"set_audioClipForOnHoverEntered", {}, {::i2c::type_of<::UnityEngine::AudioClip*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::get_playAudioClipOnHoverExited()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"get_playAudioClipOnHoverExited", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::set_playAudioClipOnHoverExited(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"set_playAudioClipOnHoverExited", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::AudioClip> UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::get_audioClipForOnHoverExited()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"get_audioClipForOnHoverExited", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioClip>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::set_audioClipForOnHoverExited(::UnityEngine::AudioClip*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"set_audioClipForOnHoverExited", {}, {::i2c::type_of<::UnityEngine::AudioClip*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::get_playAudioClipOnHoverCanceled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"get_playAudioClipOnHoverCanceled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::set_playAudioClipOnHoverCanceled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"set_playAudioClipOnHoverCanceled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::AudioClip> UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::get_audioClipForOnHoverCanceled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"get_audioClipForOnHoverCanceled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioClip>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::set_audioClipForOnHoverCanceled(::UnityEngine::AudioClip*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"set_audioClipForOnHoverCanceled", {}, {::i2c::type_of<::UnityEngine::AudioClip*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::get_allowHoverAudioWhileSelecting()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"get_allowHoverAudioWhileSelecting", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::set_allowHoverAudioWhileSelecting(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"set_allowHoverAudioWhileSelecting", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::get_playHapticsOnSelectEntered()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"get_playHapticsOnSelectEntered", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::set_playHapticsOnSelectEntered(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"set_playHapticsOnSelectEntered", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::get_hapticSelectEnterIntensity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"get_hapticSelectEnterIntensity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::set_hapticSelectEnterIntensity(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"set_hapticSelectEnterIntensity", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::get_hapticSelectEnterDuration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"get_hapticSelectEnterDuration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::set_hapticSelectEnterDuration(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"set_hapticSelectEnterDuration", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::get_playHapticsOnSelectExited()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"get_playHapticsOnSelectExited", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::set_playHapticsOnSelectExited(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"set_playHapticsOnSelectExited", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::get_hapticSelectExitIntensity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"get_hapticSelectExitIntensity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::set_hapticSelectExitIntensity(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"set_hapticSelectExitIntensity", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::get_hapticSelectExitDuration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"get_hapticSelectExitDuration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::set_hapticSelectExitDuration(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"set_hapticSelectExitDuration", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::get_playHapticsOnSelectCanceled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"get_playHapticsOnSelectCanceled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::set_playHapticsOnSelectCanceled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"set_playHapticsOnSelectCanceled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::get_hapticSelectCancelIntensity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"get_hapticSelectCancelIntensity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::set_hapticSelectCancelIntensity(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"set_hapticSelectCancelIntensity", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::get_hapticSelectCancelDuration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"get_hapticSelectCancelDuration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::set_hapticSelectCancelDuration(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"set_hapticSelectCancelDuration", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::get_playHapticsOnHoverEntered()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"get_playHapticsOnHoverEntered", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::set_playHapticsOnHoverEntered(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"set_playHapticsOnHoverEntered", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::get_hapticHoverEnterIntensity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"get_hapticHoverEnterIntensity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::set_hapticHoverEnterIntensity(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"set_hapticHoverEnterIntensity", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::get_hapticHoverEnterDuration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"get_hapticHoverEnterDuration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::set_hapticHoverEnterDuration(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"set_hapticHoverEnterDuration", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::get_playHapticsOnHoverExited()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"get_playHapticsOnHoverExited", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::set_playHapticsOnHoverExited(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"set_playHapticsOnHoverExited", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::get_hapticHoverExitIntensity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"get_hapticHoverExitIntensity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::set_hapticHoverExitIntensity(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"set_hapticHoverExitIntensity", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::get_hapticHoverExitDuration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"get_hapticHoverExitDuration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::set_hapticHoverExitDuration(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"set_hapticHoverExitDuration", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::get_playHapticsOnHoverCanceled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"get_playHapticsOnHoverCanceled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::set_playHapticsOnHoverCanceled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"set_playHapticsOnHoverCanceled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::get_hapticHoverCancelIntensity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"get_hapticHoverCancelIntensity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::set_hapticHoverCancelIntensity(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"set_hapticHoverCancelIntensity", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::get_hapticHoverCancelDuration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"get_hapticHoverCancelDuration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::set_hapticHoverCancelDuration(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"set_hapticHoverCancelDuration", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::get_allowHoverHapticsWhileSelecting()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"get_allowHoverHapticsWhileSelecting", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::set_allowHoverHapticsWhileSelecting(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"set_allowHoverHapticsWhileSelecting", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::OnXRControllerChanged()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(), 104}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::WarnMixedInputConfiguration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"WarnMixedInputConfiguration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::CreateEffectsAudioSource()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"CreateEffectsAudioSource", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::CanPlayHoverAudio(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*  hoveredInteractable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"CanPlayHoverAudio", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, hoveredInteractable);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::CanPlayHoverHaptics(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*  hoveredInteractable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"CanPlayHoverHaptics", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, hoveredInteractable);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::HandleSelecting()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"HandleSelecting", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::HandleDeselecting()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"HandleDeselecting", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::OnHoverEntering(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(), 72}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::OnHoverExiting(::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(), 74}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline ::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs* UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::CreateActivateEventArgs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"CreateActivateEventArgs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs*>(nullptr, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs* UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::CreateDeactivateEventArgs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"CreateDeactivateEventArgs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs*>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::UnityEngine_XR_Interaction_Toolkit_Interactors_IXRInteractor_get_transform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactors.IXRInteractor.get_transform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor* UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*>());
}
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRActivateInteractor"
constexpr  UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::operator ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRActivateInteractor*() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRActivateInteractor*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRActivateInteractor"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRActivateInteractor* UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::i___UnityEngine__XR__Interaction__Toolkit__Interactors__IXRActivateInteractor() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRActivateInteractor*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor"
constexpr  UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::operator ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor* UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::i___UnityEngine__XR__Interaction__Toolkit__Interactors__IXRInteractor() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor::XRBaseInputInteractor()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor___c::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb469e28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor___c._OnEnable_b__52_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor___c::*)(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor___c::_OnEnable_b__52_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb469e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor___c*>(),
                        {"<OnEnable>b__52_0", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor___c._OnEnable_b__52_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor___c::*)(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor___c::_OnEnable_b__52_1)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb469e44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor___c*>(),
                        {"<OnEnable>b__52_1", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor___c._OnDisable_b__53_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor___c::*)(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor___c::_OnDisable_b__53_0)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb469e58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor___c*>(),
                        {"<OnDisable>b__53_0", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor___c._OnDisable_b__53_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor___c::*)(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor___c::_OnDisable_b__53_1)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb469e6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor___c*>(),
                        {"<OnDisable>b__53_1", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor___c.__ctor_b__229_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs* (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor___c::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor___c::__ctor_b__229_0)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb469e80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor___c*>(),
                        {"<.ctor>b__229_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor___c.__ctor_b__229_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs* (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor___c::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor___c::__ctor_b__229_1)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb469ed4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor___c*>(),
                        {"<.ctor>b__229_1", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor___c::setStaticF___9(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor___c*  value)  {
::cordl_internals::setStaticField<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor___c*, "<>9", ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor___c*>(std::forward<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor___c*>(value));
}
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor___c* UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor___c*, "<>9", ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor___c*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor___c::setStaticF___9__52_0(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>*, "<>9__52_0", ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor___c*>(std::forward<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>*>(value));
}
inline ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>* UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor___c::getStaticF___9__52_0()  {
return ::cordl_internals::getStaticField<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>*, "<>9__52_0", ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor___c*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor___c::setStaticF___9__52_1(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader*>*, "<>9__52_1", ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor___c*>(std::forward<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader*>*>(value));
}
inline ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader*>* UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor___c::getStaticF___9__52_1()  {
return ::cordl_internals::getStaticField<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader*>*, "<>9__52_1", ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor___c*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor___c::setStaticF___9__53_0(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>*, "<>9__53_0", ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor___c*>(std::forward<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>*>(value));
}
inline ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>* UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor___c::getStaticF___9__53_0()  {
return ::cordl_internals::getStaticField<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>*, "<>9__53_0", ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor___c*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor___c::setStaticF___9__53_1(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader*>*, "<>9__53_1", ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor___c*>(std::forward<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader*>*>(value));
}
inline ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader*>* UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor___c::getStaticF___9__53_1()  {
return ::cordl_internals::getStaticField<::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader*>*, "<>9__53_1", ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor___c*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor___c::setStaticF___9__229_0(::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs*>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs*>*, "<>9__229_0", ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor___c*>(std::forward<::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs*>*>(value));
}
inline ::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs*>* UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor___c::getStaticF___9__229_0()  {
return ::cordl_internals::getStaticField<::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs*>*, "<>9__229_0", ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor___c*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor___c::setStaticF___9__229_1(::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs*>*  value)  {
::cordl_internals::setStaticField<::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs*>*, "<>9__229_1", ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor___c*>(std::forward<::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs*>*>(value));
}
inline ::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs*>* UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor___c::getStaticF___9__229_1()  {
return ::cordl_internals::getStaticField<::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs*>*, "<>9__229_1", ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor___c*>();
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor___c::_OnEnable_b__52_0(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor___c*>(),
                        {"<OnEnable>b__52_0", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor___c::_OnEnable_b__52_1(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor___c*>(),
                        {"<OnEnable>b__52_1", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor___c::_OnDisable_b__53_0(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor___c*>(),
                        {"<OnDisable>b__53_0", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor___c::_OnDisable_b__53_1(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader*  reader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor___c*>(),
                        {"<OnDisable>b__53_1", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, reader);
}
inline ::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs* UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor___c::__ctor_b__229_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor___c*>(),
                        {"<.ctor>b__229_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs*>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs* UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor___c::__ctor_b__229_1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor___c*>(),
                        {"<.ctor>b__229_1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs*>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor___c* UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor___c::XRBaseInputInteractor___c()   {
}
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState.get_active
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState::get_active)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb469c80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState*>(),
                        {"get_active", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState.set_active
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState::set_active)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb469c88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState*>(),
                        {"set_active", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState.get_mode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::XRBaseInputInteractor_InputTriggerType (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState::get_mode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb469c90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState*>(),
                        {"get_mode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState.set_mode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState::*)(::GlobalNamespace::XRBaseInputInteractor_InputTriggerType)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState::set_mode)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb465e64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState*>(),
                        {"set_mode", {}, {::i2c::type_of<::GlobalNamespace::XRBaseInputInteractor_InputTriggerType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState.get_isPerformed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState::get_isPerformed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb469d2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState*>(),
                        {"get_isPerformed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState.set_isPerformed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState::set_isPerformed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb469d34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState*>(),
                        {"set_isPerformed", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState.get_wasPerformedThisFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState::get_wasPerformedThisFrame)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb469d3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState*>(),
                        {"get_wasPerformedThisFrame", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState.set_wasPerformedThisFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState::set_wasPerformedThisFrame)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb469d44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState*>(),
                        {"set_wasPerformedThisFrame", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState.get_wasCompletedThisFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState::get_wasCompletedThisFrame)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb469d4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState*>(),
                        {"get_wasCompletedThisFrame", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState.set_wasCompletedThisFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState::set_wasCompletedThisFrame)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb469d54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState*>(),
                        {"set_wasCompletedThisFrame", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState.UpdateInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState::*)(bool, bool, bool, bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState::UpdateInput)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xb466964;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState*>(),
                        {"UpdateInput", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState.UpdateInput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState::*)(bool, bool, bool, bool, float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState::UpdateInput)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb469d5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState*>(),
                        {"UpdateInput", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState.UpdateHasSelection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState::UpdateHasSelection)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xb467690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState*>(),
                        {"UpdateHasSelection", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState.Refresh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState::Refresh)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xb469c98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState*>(),
                        {"Refresh", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState.get_wasUnperformedThisFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState::get_wasUnperformedThisFrame)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb469db8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState*>(),
                        {"get_wasUnperformedThisFrame", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb469720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState::__cordl_internal_get__active_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____active_k__BackingField;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState::__cordl_internal_get__active_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____active_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState::__cordl_internal_set__active_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____active_k__BackingField = value;
}
constexpr ::GlobalNamespace::XRBaseInputInteractor_InputTriggerType& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState::__cordl_internal_get_m_Mode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Mode;
}
constexpr ::GlobalNamespace::XRBaseInputInteractor_InputTriggerType const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState::__cordl_internal_get_m_Mode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Mode;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState::__cordl_internal_set_m_Mode(::GlobalNamespace::XRBaseInputInteractor_InputTriggerType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Mode = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState::__cordl_internal_get__isPerformed_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isPerformed_k__BackingField;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState::__cordl_internal_get__isPerformed_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isPerformed_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState::__cordl_internal_set__isPerformed_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isPerformed_k__BackingField = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState::__cordl_internal_get__wasPerformedThisFrame_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____wasPerformedThisFrame_k__BackingField;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState::__cordl_internal_get__wasPerformedThisFrame_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____wasPerformedThisFrame_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState::__cordl_internal_set__wasPerformedThisFrame_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____wasPerformedThisFrame_k__BackingField = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState::__cordl_internal_get__wasCompletedThisFrame_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____wasCompletedThisFrame_k__BackingField;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState::__cordl_internal_get__wasCompletedThisFrame_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____wasCompletedThisFrame_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState::__cordl_internal_set__wasCompletedThisFrame_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____wasCompletedThisFrame_k__BackingField = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState::__cordl_internal_get_m_HasSelection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HasSelection;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState::__cordl_internal_get_m_HasSelection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HasSelection;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState::__cordl_internal_set_m_HasSelection(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HasSelection = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState::__cordl_internal_get_m_TimeAtPerformed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TimeAtPerformed;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState::__cordl_internal_get_m_TimeAtPerformed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TimeAtPerformed;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState::__cordl_internal_set_m_TimeAtPerformed(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TimeAtPerformed = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState::__cordl_internal_get_m_TimeAtCompleted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TimeAtCompleted;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState::__cordl_internal_get_m_TimeAtCompleted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TimeAtCompleted;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState::__cordl_internal_set_m_TimeAtCompleted(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TimeAtCompleted = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState::__cordl_internal_get_m_ToggleActive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ToggleActive;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState::__cordl_internal_get_m_ToggleActive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ToggleActive;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState::__cordl_internal_set_m_ToggleActive(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ToggleActive = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState::__cordl_internal_get_m_ToggleDeactivatedThisFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ToggleDeactivatedThisFrame;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState::__cordl_internal_get_m_ToggleDeactivatedThisFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ToggleDeactivatedThisFrame;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState::__cordl_internal_set_m_ToggleDeactivatedThisFrame(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ToggleDeactivatedThisFrame = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState::__cordl_internal_get_m_WaitingForDeactivate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_WaitingForDeactivate;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState::__cordl_internal_get_m_WaitingForDeactivate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_WaitingForDeactivate;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState::__cordl_internal_set_m_WaitingForDeactivate(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_WaitingForDeactivate = value;
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState::get_active()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState*>(),
                        {"get_active", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState::set_active(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState*>(),
                        {"set_active", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::XRBaseInputInteractor_InputTriggerType UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState::get_mode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState*>(),
                        {"get_mode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::XRBaseInputInteractor_InputTriggerType>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState::set_mode(::GlobalNamespace::XRBaseInputInteractor_InputTriggerType  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState*>(),
                        {"set_mode", {}, {::i2c::type_of<::GlobalNamespace::XRBaseInputInteractor_InputTriggerType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState::get_isPerformed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState*>(),
                        {"get_isPerformed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState::set_isPerformed(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState*>(),
                        {"set_isPerformed", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState::get_wasPerformedThisFrame()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState*>(),
                        {"get_wasPerformedThisFrame", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState::set_wasPerformedThisFrame(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState*>(),
                        {"set_wasPerformedThisFrame", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState::get_wasCompletedThisFrame()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState*>(),
                        {"get_wasCompletedThisFrame", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState::set_wasCompletedThisFrame(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState*>(),
                        {"set_wasCompletedThisFrame", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState::UpdateInput(bool  performed, bool  performedThisFrame, bool  completedThisFrame, bool  hasSelection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState*>(),
                        {"UpdateInput", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, performed, performedThisFrame, completedThisFrame, hasSelection);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState::UpdateInput(bool  performed, bool  performedThisFrame, bool  completedThisFrame, bool  hasSelection, float_t  realtime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState*>(),
                        {"UpdateInput", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, performed, performedThisFrame, completedThisFrame, hasSelection, realtime);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState::UpdateHasSelection(bool  hasSelection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState*>(),
                        {"UpdateHasSelection", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hasSelection);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState::Refresh()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState*>(),
                        {"Refresh", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState::get_wasUnperformedThisFrame()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState*>(),
                        {"get_wasUnperformedThisFrame", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState* UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState::XRBaseInputInteractor_LogicalInputState()   {
}
