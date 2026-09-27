#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/XRBaseControllerInteractor.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__TargetPriorityMode_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__XRBaseInteractor_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRBaseControllerInteractor_InputTriggerType_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRBaseControllerInteractor_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__IXRActivateInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__IXRHoverInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__XRBaseInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__IXRActivateInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__IXRInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__TargetPriorityMode_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/Pooling/zzzz__LinkedPool_1_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__ActivateEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__DeactivateEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__HoverEnterEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__HoverExitEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__SelectEnterEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__SelectExitEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRBaseControllerInteractor_InputTriggerType_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRBaseController_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRInteractionUpdateOrder_UpdatePhase_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.get_playAudioClipOnSelectEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_playAudioClipOnSelectEnter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb405390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"get_playAudioClipOnSelectEnter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.get_audioClipForOnSelectEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AudioClip> (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_audioClipForOnSelectEnter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb405398;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"get_audioClipForOnSelectEnter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.get_AudioClipForOnSelectEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AudioClip> (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_AudioClipForOnSelectEnter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4053a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"get_AudioClipForOnSelectEnter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.set_AudioClipForOnSelectEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)(::UnityEngine::AudioClip*)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_AudioClipForOnSelectEnter)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb4053a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"set_AudioClipForOnSelectEnter", {}, {::i2c::type_of<::UnityEngine::AudioClip*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.get_playAudioClipOnSelectExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_playAudioClipOnSelectExit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4053ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"get_playAudioClipOnSelectExit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.get_audioClipForOnSelectExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AudioClip> (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_audioClipForOnSelectExit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4053b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"get_audioClipForOnSelectExit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.get_AudioClipForOnSelectExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AudioClip> (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_AudioClipForOnSelectExit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4053bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"get_AudioClipForOnSelectExit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.set_AudioClipForOnSelectExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)(::UnityEngine::AudioClip*)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_AudioClipForOnSelectExit)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb4053c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"set_AudioClipForOnSelectExit", {}, {::i2c::type_of<::UnityEngine::AudioClip*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.get_playAudioClipOnHoverEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_playAudioClipOnHoverEnter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4053c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"get_playAudioClipOnHoverEnter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.get_audioClipForOnHoverEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AudioClip> (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_audioClipForOnHoverEnter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4053d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"get_audioClipForOnHoverEnter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.get_AudioClipForOnHoverEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AudioClip> (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_AudioClipForOnHoverEnter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4053d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"get_AudioClipForOnHoverEnter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.set_AudioClipForOnHoverEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)(::UnityEngine::AudioClip*)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_AudioClipForOnHoverEnter)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb4053e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"set_AudioClipForOnHoverEnter", {}, {::i2c::type_of<::UnityEngine::AudioClip*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.get_playAudioClipOnHoverExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_playAudioClipOnHoverExit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4053e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"get_playAudioClipOnHoverExit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.get_audioClipForOnHoverExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AudioClip> (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_audioClipForOnHoverExit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4053ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"get_audioClipForOnHoverExit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.get_AudioClipForOnHoverExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AudioClip> (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_AudioClipForOnHoverExit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4053f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"get_AudioClipForOnHoverExit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.set_AudioClipForOnHoverExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)(::UnityEngine::AudioClip*)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_AudioClipForOnHoverExit)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb4053fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"set_AudioClipForOnHoverExit", {}, {::i2c::type_of<::UnityEngine::AudioClip*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.get_playHapticsOnSelectEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_playHapticsOnSelectEnter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb405400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"get_playHapticsOnSelectEnter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.get_playHapticsOnSelectExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_playHapticsOnSelectExit)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb405408;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"get_playHapticsOnSelectExit", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.get_playHapticsOnHoverEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_playHapticsOnHoverEnter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb405410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"get_playHapticsOnHoverEnter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.get_validTargets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable>>* (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_validTargets)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb405418;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(), 99}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.get_selectActionTrigger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::XRBaseControllerInteractor_InputTriggerType (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_selectActionTrigger)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb405420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"get_selectActionTrigger", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.set_selectActionTrigger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)(::GlobalNamespace::XRBaseControllerInteractor_InputTriggerType)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_selectActionTrigger)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb405428;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"set_selectActionTrigger", {}, {::i2c::type_of<::GlobalNamespace::XRBaseControllerInteractor_InputTriggerType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.get_hideControllerOnSelect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_hideControllerOnSelect)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb405430;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"get_hideControllerOnSelect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.set_hideControllerOnSelect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_hideControllerOnSelect)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xb405438;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"set_hideControllerOnSelect", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.get_allowHoveredActivate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_allowHoveredActivate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4054d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"get_allowHoveredActivate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.set_allowHoveredActivate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_allowHoveredActivate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4054e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"set_allowHoveredActivate", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.get_targetPriorityMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactors::TargetPriorityMode (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_targetPriorityMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4054e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(), 61}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.set_targetPriorityMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::TargetPriorityMode)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_targetPriorityMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4054f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(), 62}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.get_playAudioClipOnSelectEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_playAudioClipOnSelectEntered)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4054f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"get_playAudioClipOnSelectEntered", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.set_playAudioClipOnSelectEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_playAudioClipOnSelectEntered)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb405500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"set_playAudioClipOnSelectEntered", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.get_audioClipForOnSelectEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AudioClip> (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_audioClipForOnSelectEntered)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb405508;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"get_audioClipForOnSelectEntered", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.set_audioClipForOnSelectEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)(::UnityEngine::AudioClip*)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_audioClipForOnSelectEntered)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb405510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"set_audioClipForOnSelectEntered", {}, {::i2c::type_of<::UnityEngine::AudioClip*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.get_playAudioClipOnSelectExited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_playAudioClipOnSelectExited)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb405520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"get_playAudioClipOnSelectExited", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.set_playAudioClipOnSelectExited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_playAudioClipOnSelectExited)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb405528;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"set_playAudioClipOnSelectExited", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.get_audioClipForOnSelectExited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AudioClip> (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_audioClipForOnSelectExited)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb405530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"get_audioClipForOnSelectExited", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.set_audioClipForOnSelectExited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)(::UnityEngine::AudioClip*)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_audioClipForOnSelectExited)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb405538;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"set_audioClipForOnSelectExited", {}, {::i2c::type_of<::UnityEngine::AudioClip*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.get_playAudioClipOnSelectCanceled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_playAudioClipOnSelectCanceled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb405548;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"get_playAudioClipOnSelectCanceled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.set_playAudioClipOnSelectCanceled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_playAudioClipOnSelectCanceled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb405550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"set_playAudioClipOnSelectCanceled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.get_audioClipForOnSelectCanceled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AudioClip> (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_audioClipForOnSelectCanceled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb405558;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"get_audioClipForOnSelectCanceled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.set_audioClipForOnSelectCanceled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)(::UnityEngine::AudioClip*)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_audioClipForOnSelectCanceled)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb405560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"set_audioClipForOnSelectCanceled", {}, {::i2c::type_of<::UnityEngine::AudioClip*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.get_playAudioClipOnHoverEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_playAudioClipOnHoverEntered)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb405570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"get_playAudioClipOnHoverEntered", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.set_playAudioClipOnHoverEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_playAudioClipOnHoverEntered)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb405578;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"set_playAudioClipOnHoverEntered", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.get_audioClipForOnHoverEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AudioClip> (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_audioClipForOnHoverEntered)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb405580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"get_audioClipForOnHoverEntered", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.set_audioClipForOnHoverEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)(::UnityEngine::AudioClip*)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_audioClipForOnHoverEntered)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb405588;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"set_audioClipForOnHoverEntered", {}, {::i2c::type_of<::UnityEngine::AudioClip*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.get_playAudioClipOnHoverExited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_playAudioClipOnHoverExited)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb405598;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"get_playAudioClipOnHoverExited", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.set_playAudioClipOnHoverExited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_playAudioClipOnHoverExited)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4055a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"set_playAudioClipOnHoverExited", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.get_audioClipForOnHoverExited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AudioClip> (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_audioClipForOnHoverExited)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4055a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"get_audioClipForOnHoverExited", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.set_audioClipForOnHoverExited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)(::UnityEngine::AudioClip*)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_audioClipForOnHoverExited)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb4055b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"set_audioClipForOnHoverExited", {}, {::i2c::type_of<::UnityEngine::AudioClip*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.get_playAudioClipOnHoverCanceled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_playAudioClipOnHoverCanceled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4055c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"get_playAudioClipOnHoverCanceled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.set_playAudioClipOnHoverCanceled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_playAudioClipOnHoverCanceled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4055c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"set_playAudioClipOnHoverCanceled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.get_audioClipForOnHoverCanceled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AudioClip> (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_audioClipForOnHoverCanceled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4055d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"get_audioClipForOnHoverCanceled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.set_audioClipForOnHoverCanceled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)(::UnityEngine::AudioClip*)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_audioClipForOnHoverCanceled)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb4055d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"set_audioClipForOnHoverCanceled", {}, {::i2c::type_of<::UnityEngine::AudioClip*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.get_allowHoverAudioWhileSelecting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_allowHoverAudioWhileSelecting)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4055e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"get_allowHoverAudioWhileSelecting", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.set_allowHoverAudioWhileSelecting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_allowHoverAudioWhileSelecting)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4055f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"set_allowHoverAudioWhileSelecting", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.get_playHapticsOnSelectEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_playHapticsOnSelectEntered)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4055f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"get_playHapticsOnSelectEntered", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.set_playHapticsOnSelectEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_playHapticsOnSelectEntered)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb405600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"set_playHapticsOnSelectEntered", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.get_hapticSelectEnterIntensity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_hapticSelectEnterIntensity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb405608;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"get_hapticSelectEnterIntensity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.set_hapticSelectEnterIntensity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_hapticSelectEnterIntensity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb405610;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"set_hapticSelectEnterIntensity", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.get_hapticSelectEnterDuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_hapticSelectEnterDuration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb405618;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"get_hapticSelectEnterDuration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.set_hapticSelectEnterDuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_hapticSelectEnterDuration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb405620;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"set_hapticSelectEnterDuration", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.get_playHapticsOnSelectExited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_playHapticsOnSelectExited)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb405628;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"get_playHapticsOnSelectExited", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.set_playHapticsOnSelectExited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_playHapticsOnSelectExited)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb405630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"set_playHapticsOnSelectExited", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.get_hapticSelectExitIntensity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_hapticSelectExitIntensity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb405638;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"get_hapticSelectExitIntensity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.set_hapticSelectExitIntensity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_hapticSelectExitIntensity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb405640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"set_hapticSelectExitIntensity", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.get_hapticSelectExitDuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_hapticSelectExitDuration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb405648;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"get_hapticSelectExitDuration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.set_hapticSelectExitDuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_hapticSelectExitDuration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb405650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"set_hapticSelectExitDuration", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.get_playHapticsOnSelectCanceled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_playHapticsOnSelectCanceled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb405658;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"get_playHapticsOnSelectCanceled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.set_playHapticsOnSelectCanceled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_playHapticsOnSelectCanceled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb405660;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"set_playHapticsOnSelectCanceled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.get_hapticSelectCancelIntensity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_hapticSelectCancelIntensity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb405668;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"get_hapticSelectCancelIntensity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.set_hapticSelectCancelIntensity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_hapticSelectCancelIntensity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb405670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"set_hapticSelectCancelIntensity", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.get_hapticSelectCancelDuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_hapticSelectCancelDuration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb405678;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"get_hapticSelectCancelDuration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.set_hapticSelectCancelDuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_hapticSelectCancelDuration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb405680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"set_hapticSelectCancelDuration", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.get_playHapticsOnHoverEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_playHapticsOnHoverEntered)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb405688;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"get_playHapticsOnHoverEntered", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.set_playHapticsOnHoverEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_playHapticsOnHoverEntered)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb405690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"set_playHapticsOnHoverEntered", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.get_hapticHoverEnterIntensity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_hapticHoverEnterIntensity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb405698;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"get_hapticHoverEnterIntensity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.set_hapticHoverEnterIntensity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_hapticHoverEnterIntensity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4056a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"set_hapticHoverEnterIntensity", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.get_hapticHoverEnterDuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_hapticHoverEnterDuration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4056a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"get_hapticHoverEnterDuration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.set_hapticHoverEnterDuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_hapticHoverEnterDuration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4056b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"set_hapticHoverEnterDuration", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.get_playHapticsOnHoverExited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_playHapticsOnHoverExited)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4056b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"get_playHapticsOnHoverExited", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.set_playHapticsOnHoverExited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_playHapticsOnHoverExited)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4056c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"set_playHapticsOnHoverExited", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.get_hapticHoverExitIntensity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_hapticHoverExitIntensity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4056c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"get_hapticHoverExitIntensity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.set_hapticHoverExitIntensity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_hapticHoverExitIntensity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4056d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"set_hapticHoverExitIntensity", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.get_hapticHoverExitDuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_hapticHoverExitDuration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4056d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"get_hapticHoverExitDuration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.set_hapticHoverExitDuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_hapticHoverExitDuration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4056e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"set_hapticHoverExitDuration", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.get_playHapticsOnHoverCanceled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_playHapticsOnHoverCanceled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4056e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"get_playHapticsOnHoverCanceled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.set_playHapticsOnHoverCanceled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_playHapticsOnHoverCanceled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4056f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"set_playHapticsOnHoverCanceled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.get_hapticHoverCancelIntensity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_hapticHoverCancelIntensity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4056f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"get_hapticHoverCancelIntensity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.set_hapticHoverCancelIntensity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_hapticHoverCancelIntensity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb405700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"set_hapticHoverCancelIntensity", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.get_hapticHoverCancelDuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_hapticHoverCancelDuration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb405708;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"get_hapticHoverCancelDuration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.set_hapticHoverCancelDuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)(float_t)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_hapticHoverCancelDuration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb405710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"set_hapticHoverCancelDuration", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.get_allowHoverHapticsWhileSelecting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_allowHoverHapticsWhileSelecting)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb405718;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"get_allowHoverHapticsWhileSelecting", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.set_allowHoverHapticsWhileSelecting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_allowHoverHapticsWhileSelecting)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb405720;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"set_allowHoverHapticsWhileSelecting", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.get_allowActivate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_allowActivate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb405728;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"get_allowActivate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.set_allowActivate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_allowActivate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb405730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"set_allowActivate", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.get_xrController
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController> (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_xrController)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb405738;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"get_xrController", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.set_xrController
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::XRBaseController*)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_xrController)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xb405740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"set_xrController", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.CreateActivateEventArgs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs* (*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::CreateActivateEventArgs)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb4057e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"CreateActivateEventArgs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.CreateDeactivateEventArgs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs* (*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::CreateDeactivateEventArgs)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb405840;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"CreateDeactivateEventArgs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::Awake)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0xb40589c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(), 52}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.OnXRControllerChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::OnXRControllerChanged)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb405b48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(), 100}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.PreprocessInteractor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)(::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::PreprocessInteractor)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xb405b4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(), 68}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.ProcessInteractor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)(::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::ProcessInteractor)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xb405c24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(), 69}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.SendActivateEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable*>*)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::SendActivateEvent)> {
  constexpr static std::size_t size = 0x344;
  constexpr static std::size_t addrs = 0xb405d54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"SendActivateEvent", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.SendDeactivateEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable*>*)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::SendDeactivateEvent)> {
  constexpr static std::size_t size = 0x344;
  constexpr static std::size_t addrs = 0xb406098;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"SendDeactivateEvent", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.get_isSelectActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_isSelectActive)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0xb4063fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(), 60}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.get_isUISelectActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_isUISelectActive)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xb4065f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(), 101}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.get_uiScrollValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_uiScrollValue)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xb406678;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"get_uiScrollValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.get_shouldActivate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_shouldActivate)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xb406734;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(), 102}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.get_shouldDeactivate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_shouldDeactivate)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xb4067dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(), 103}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.GetActivateTargets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable*>*)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::GetActivateTargets)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0xb406884;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(), 104}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.OnSelectEntering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::OnSelectEntering)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb406c0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(), 76}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.OnSelectExiting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::OnSelectExiting)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xb406dac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(), 78}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.OnHoverEntering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::OnHoverEntering)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb406ee8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(), 72}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.OnHoverExiting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::OnHoverExiting)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0xb40705c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(), 74}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.CanPlayHoverAudio
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::CanPlayHoverAudio)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xb407030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"CanPlayHoverAudio", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.CanPlayHoverHaptics
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::CanPlayHoverHaptics)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xb407004;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"CanPlayHoverHaptics", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.SendHapticImpulse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)(float_t, float_t)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::SendHapticImpulse)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xb406d00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"SendHapticImpulse", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.PlayAudio
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)(::UnityEngine::AudioClip*)>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::PlayAudio)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xb4071e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(), 105}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.CreateEffectsAudioSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::CreateEffectsAudioSource)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xb405ab4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"CreateEffectsAudioSource", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.HandleSelecting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::HandleSelecting)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xb406c68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"HandleSelecting", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.HandleDeselecting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::HandleDeselecting)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xb406e54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"HandleDeselecting", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::_ctor)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0xb4072a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor.UnityEngine_XR_Interaction_Toolkit_Interactors_IXRInteractor_get_transform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::*)()>(&::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::UnityEngine_XR_Interaction_Toolkit_Interactors_IXRInteractor_get_transform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb40751c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactors.IXRInteractor.get_transform", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable>>*& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get__validTargets_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____validTargets_k__BackingField;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable>>* const& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get__validTargets_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____validTargets_k__BackingField;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_set__validTargets_k__BackingField(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____validTargets_k__BackingField = value;
}
constexpr ::GlobalNamespace::XRBaseControllerInteractor_InputTriggerType& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_SelectActionTrigger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SelectActionTrigger;
}
constexpr ::GlobalNamespace::XRBaseControllerInteractor_InputTriggerType const& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_SelectActionTrigger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SelectActionTrigger;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_set_m_SelectActionTrigger(::GlobalNamespace::XRBaseControllerInteractor_InputTriggerType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SelectActionTrigger = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_HideControllerOnSelect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HideControllerOnSelect;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_HideControllerOnSelect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HideControllerOnSelect;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_set_m_HideControllerOnSelect(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HideControllerOnSelect = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_AllowHoveredActivate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AllowHoveredActivate;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_AllowHoveredActivate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AllowHoveredActivate;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_set_m_AllowHoveredActivate(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AllowHoveredActivate = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::TargetPriorityMode& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_TargetPriorityMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TargetPriorityMode;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::TargetPriorityMode const& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_TargetPriorityMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TargetPriorityMode;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_set_m_TargetPriorityMode(::UnityEngine::XR::Interaction::Toolkit::Interactors::TargetPriorityMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TargetPriorityMode = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_PlayAudioClipOnSelectEntered()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PlayAudioClipOnSelectEntered;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_PlayAudioClipOnSelectEntered() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PlayAudioClipOnSelectEntered;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_set_m_PlayAudioClipOnSelectEntered(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PlayAudioClipOnSelectEntered = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_AudioClipForOnSelectEntered()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AudioClipForOnSelectEntered;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_AudioClipForOnSelectEntered() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AudioClipForOnSelectEntered;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_set_m_AudioClipForOnSelectEntered(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AudioClipForOnSelectEntered = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_PlayAudioClipOnSelectExited()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PlayAudioClipOnSelectExited;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_PlayAudioClipOnSelectExited() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PlayAudioClipOnSelectExited;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_set_m_PlayAudioClipOnSelectExited(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PlayAudioClipOnSelectExited = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_AudioClipForOnSelectExited()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AudioClipForOnSelectExited;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_AudioClipForOnSelectExited() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AudioClipForOnSelectExited;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_set_m_AudioClipForOnSelectExited(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AudioClipForOnSelectExited = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_PlayAudioClipOnSelectCanceled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PlayAudioClipOnSelectCanceled;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_PlayAudioClipOnSelectCanceled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PlayAudioClipOnSelectCanceled;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_set_m_PlayAudioClipOnSelectCanceled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PlayAudioClipOnSelectCanceled = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_AudioClipForOnSelectCanceled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AudioClipForOnSelectCanceled;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_AudioClipForOnSelectCanceled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AudioClipForOnSelectCanceled;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_set_m_AudioClipForOnSelectCanceled(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AudioClipForOnSelectCanceled = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_PlayAudioClipOnHoverEntered()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PlayAudioClipOnHoverEntered;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_PlayAudioClipOnHoverEntered() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PlayAudioClipOnHoverEntered;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_set_m_PlayAudioClipOnHoverEntered(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PlayAudioClipOnHoverEntered = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_AudioClipForOnHoverEntered()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AudioClipForOnHoverEntered;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_AudioClipForOnHoverEntered() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AudioClipForOnHoverEntered;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_set_m_AudioClipForOnHoverEntered(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AudioClipForOnHoverEntered = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_PlayAudioClipOnHoverExited()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PlayAudioClipOnHoverExited;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_PlayAudioClipOnHoverExited() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PlayAudioClipOnHoverExited;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_set_m_PlayAudioClipOnHoverExited(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PlayAudioClipOnHoverExited = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_AudioClipForOnHoverExited()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AudioClipForOnHoverExited;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_AudioClipForOnHoverExited() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AudioClipForOnHoverExited;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_set_m_AudioClipForOnHoverExited(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AudioClipForOnHoverExited = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_PlayAudioClipOnHoverCanceled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PlayAudioClipOnHoverCanceled;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_PlayAudioClipOnHoverCanceled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PlayAudioClipOnHoverCanceled;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_set_m_PlayAudioClipOnHoverCanceled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PlayAudioClipOnHoverCanceled = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_AudioClipForOnHoverCanceled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AudioClipForOnHoverCanceled;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_AudioClipForOnHoverCanceled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AudioClipForOnHoverCanceled;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_set_m_AudioClipForOnHoverCanceled(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AudioClipForOnHoverCanceled = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_AllowHoverAudioWhileSelecting()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AllowHoverAudioWhileSelecting;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_AllowHoverAudioWhileSelecting() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AllowHoverAudioWhileSelecting;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_set_m_AllowHoverAudioWhileSelecting(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AllowHoverAudioWhileSelecting = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_PlayHapticsOnSelectEntered()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PlayHapticsOnSelectEntered;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_PlayHapticsOnSelectEntered() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PlayHapticsOnSelectEntered;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_set_m_PlayHapticsOnSelectEntered(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PlayHapticsOnSelectEntered = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_HapticSelectEnterIntensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HapticSelectEnterIntensity;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_HapticSelectEnterIntensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HapticSelectEnterIntensity;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_set_m_HapticSelectEnterIntensity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HapticSelectEnterIntensity = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_HapticSelectEnterDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HapticSelectEnterDuration;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_HapticSelectEnterDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HapticSelectEnterDuration;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_set_m_HapticSelectEnterDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HapticSelectEnterDuration = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_PlayHapticsOnSelectExited()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PlayHapticsOnSelectExited;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_PlayHapticsOnSelectExited() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PlayHapticsOnSelectExited;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_set_m_PlayHapticsOnSelectExited(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PlayHapticsOnSelectExited = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_HapticSelectExitIntensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HapticSelectExitIntensity;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_HapticSelectExitIntensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HapticSelectExitIntensity;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_set_m_HapticSelectExitIntensity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HapticSelectExitIntensity = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_HapticSelectExitDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HapticSelectExitDuration;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_HapticSelectExitDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HapticSelectExitDuration;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_set_m_HapticSelectExitDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HapticSelectExitDuration = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_PlayHapticsOnSelectCanceled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PlayHapticsOnSelectCanceled;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_PlayHapticsOnSelectCanceled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PlayHapticsOnSelectCanceled;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_set_m_PlayHapticsOnSelectCanceled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PlayHapticsOnSelectCanceled = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_HapticSelectCancelIntensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HapticSelectCancelIntensity;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_HapticSelectCancelIntensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HapticSelectCancelIntensity;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_set_m_HapticSelectCancelIntensity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HapticSelectCancelIntensity = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_HapticSelectCancelDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HapticSelectCancelDuration;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_HapticSelectCancelDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HapticSelectCancelDuration;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_set_m_HapticSelectCancelDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HapticSelectCancelDuration = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_PlayHapticsOnHoverEntered()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PlayHapticsOnHoverEntered;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_PlayHapticsOnHoverEntered() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PlayHapticsOnHoverEntered;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_set_m_PlayHapticsOnHoverEntered(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PlayHapticsOnHoverEntered = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_HapticHoverEnterIntensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HapticHoverEnterIntensity;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_HapticHoverEnterIntensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HapticHoverEnterIntensity;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_set_m_HapticHoverEnterIntensity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HapticHoverEnterIntensity = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_HapticHoverEnterDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HapticHoverEnterDuration;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_HapticHoverEnterDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HapticHoverEnterDuration;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_set_m_HapticHoverEnterDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HapticHoverEnterDuration = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_PlayHapticsOnHoverExited()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PlayHapticsOnHoverExited;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_PlayHapticsOnHoverExited() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PlayHapticsOnHoverExited;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_set_m_PlayHapticsOnHoverExited(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PlayHapticsOnHoverExited = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_HapticHoverExitIntensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HapticHoverExitIntensity;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_HapticHoverExitIntensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HapticHoverExitIntensity;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_set_m_HapticHoverExitIntensity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HapticHoverExitIntensity = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_HapticHoverExitDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HapticHoverExitDuration;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_HapticHoverExitDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HapticHoverExitDuration;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_set_m_HapticHoverExitDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HapticHoverExitDuration = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_PlayHapticsOnHoverCanceled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PlayHapticsOnHoverCanceled;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_PlayHapticsOnHoverCanceled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PlayHapticsOnHoverCanceled;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_set_m_PlayHapticsOnHoverCanceled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PlayHapticsOnHoverCanceled = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_HapticHoverCancelIntensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HapticHoverCancelIntensity;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_HapticHoverCancelIntensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HapticHoverCancelIntensity;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_set_m_HapticHoverCancelIntensity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HapticHoverCancelIntensity = value;
}
constexpr float_t& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_HapticHoverCancelDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HapticHoverCancelDuration;
}
constexpr float_t const& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_HapticHoverCancelDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HapticHoverCancelDuration;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_set_m_HapticHoverCancelDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HapticHoverCancelDuration = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_AllowHoverHapticsWhileSelecting()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AllowHoverHapticsWhileSelecting;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_AllowHoverHapticsWhileSelecting() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AllowHoverHapticsWhileSelecting;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_set_m_AllowHoverHapticsWhileSelecting(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AllowHoverHapticsWhileSelecting = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_AllowActivate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AllowActivate;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_AllowActivate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AllowActivate;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_set_m_AllowActivate(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AllowActivate = value;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController>& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_Controller()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Controller;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController> const& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_Controller() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Controller;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_set_m_Controller(::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Controller = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs*>*& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_ActivateEventArgs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ActivateEventArgs;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs*>* const& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_ActivateEventArgs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ActivateEventArgs;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_set_m_ActivateEventArgs(::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ActivateEventArgs = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs*>*& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_DeactivateEventArgs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DeactivateEventArgs;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs*>* const& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_DeactivateEventArgs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_DeactivateEventArgs;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_set_m_DeactivateEventArgs(::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_DeactivateEventArgs = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_ToggleSelectActive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ToggleSelectActive;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_ToggleSelectActive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ToggleSelectActive;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_set_m_ToggleSelectActive(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ToggleSelectActive = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_ToggleSelectDeactivatedThisFrame()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ToggleSelectDeactivatedThisFrame;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_ToggleSelectDeactivatedThisFrame() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ToggleSelectDeactivatedThisFrame;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_set_m_ToggleSelectDeactivatedThisFrame(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ToggleSelectDeactivatedThisFrame = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_WaitingForSelectDeactivate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_WaitingForSelectDeactivate;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_WaitingForSelectDeactivate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_WaitingForSelectDeactivate;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_set_m_WaitingForSelectDeactivate(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_WaitingForSelectDeactivate = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_EffectsAudioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EffectsAudioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_get_m_EffectsAudioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EffectsAudioSource;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::__cordl_internal_set_m_EffectsAudioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_EffectsAudioSource = value;
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::setStaticF_s_ActivateTargets(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable*>*, "s_ActivateTargets", ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(std::forward<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable*>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable*>* UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::getStaticF_s_ActivateTargets()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable*>*, "s_ActivateTargets", ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>();
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_playAudioClipOnSelectEnter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"get_playAudioClipOnSelectEnter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::AudioClip> UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_audioClipForOnSelectEnter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"get_audioClipForOnSelectEnter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioClip>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::AudioClip> UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_AudioClipForOnSelectEnter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"get_AudioClipForOnSelectEnter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioClip>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_AudioClipForOnSelectEnter(::UnityEngine::AudioClip*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"set_AudioClipForOnSelectEnter", {}, {::i2c::type_of<::UnityEngine::AudioClip*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_playAudioClipOnSelectExit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"get_playAudioClipOnSelectExit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::AudioClip> UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_audioClipForOnSelectExit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"get_audioClipForOnSelectExit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioClip>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::AudioClip> UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_AudioClipForOnSelectExit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"get_AudioClipForOnSelectExit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioClip>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_AudioClipForOnSelectExit(::UnityEngine::AudioClip*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"set_AudioClipForOnSelectExit", {}, {::i2c::type_of<::UnityEngine::AudioClip*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_playAudioClipOnHoverEnter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"get_playAudioClipOnHoverEnter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::AudioClip> UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_audioClipForOnHoverEnter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"get_audioClipForOnHoverEnter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioClip>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::AudioClip> UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_AudioClipForOnHoverEnter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"get_AudioClipForOnHoverEnter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioClip>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_AudioClipForOnHoverEnter(::UnityEngine::AudioClip*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"set_AudioClipForOnHoverEnter", {}, {::i2c::type_of<::UnityEngine::AudioClip*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_playAudioClipOnHoverExit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"get_playAudioClipOnHoverExit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::AudioClip> UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_audioClipForOnHoverExit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"get_audioClipForOnHoverExit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioClip>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::AudioClip> UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_AudioClipForOnHoverExit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"get_AudioClipForOnHoverExit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioClip>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_AudioClipForOnHoverExit(::UnityEngine::AudioClip*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"set_AudioClipForOnHoverExit", {}, {::i2c::type_of<::UnityEngine::AudioClip*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_playHapticsOnSelectEnter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"get_playHapticsOnSelectEnter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_playHapticsOnSelectExit()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"get_playHapticsOnSelectExit", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_playHapticsOnHoverEnter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"get_playHapticsOnHoverEnter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable>>* UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_validTargets()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(), 99}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable>>*>(this, ___internal_method);
}
inline ::GlobalNamespace::XRBaseControllerInteractor_InputTriggerType UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_selectActionTrigger()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"get_selectActionTrigger", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::XRBaseControllerInteractor_InputTriggerType>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_selectActionTrigger(::GlobalNamespace::XRBaseControllerInteractor_InputTriggerType  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"set_selectActionTrigger", {}, {::i2c::type_of<::GlobalNamespace::XRBaseControllerInteractor_InputTriggerType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_hideControllerOnSelect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"get_hideControllerOnSelect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_hideControllerOnSelect(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"set_hideControllerOnSelect", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_allowHoveredActivate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"get_allowHoveredActivate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_allowHoveredActivate(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"set_allowHoveredActivate", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::TargetPriorityMode UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_targetPriorityMode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(), 61}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Interactors::TargetPriorityMode>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_targetPriorityMode(::UnityEngine::XR::Interaction::Toolkit::Interactors::TargetPriorityMode  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(), 62}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_playAudioClipOnSelectEntered()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"get_playAudioClipOnSelectEntered", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_playAudioClipOnSelectEntered(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"set_playAudioClipOnSelectEntered", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::AudioClip> UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_audioClipForOnSelectEntered()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"get_audioClipForOnSelectEntered", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioClip>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_audioClipForOnSelectEntered(::UnityEngine::AudioClip*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"set_audioClipForOnSelectEntered", {}, {::i2c::type_of<::UnityEngine::AudioClip*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_playAudioClipOnSelectExited()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"get_playAudioClipOnSelectExited", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_playAudioClipOnSelectExited(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"set_playAudioClipOnSelectExited", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::AudioClip> UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_audioClipForOnSelectExited()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"get_audioClipForOnSelectExited", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioClip>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_audioClipForOnSelectExited(::UnityEngine::AudioClip*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"set_audioClipForOnSelectExited", {}, {::i2c::type_of<::UnityEngine::AudioClip*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_playAudioClipOnSelectCanceled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"get_playAudioClipOnSelectCanceled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_playAudioClipOnSelectCanceled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"set_playAudioClipOnSelectCanceled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::AudioClip> UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_audioClipForOnSelectCanceled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"get_audioClipForOnSelectCanceled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioClip>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_audioClipForOnSelectCanceled(::UnityEngine::AudioClip*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"set_audioClipForOnSelectCanceled", {}, {::i2c::type_of<::UnityEngine::AudioClip*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_playAudioClipOnHoverEntered()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"get_playAudioClipOnHoverEntered", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_playAudioClipOnHoverEntered(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"set_playAudioClipOnHoverEntered", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::AudioClip> UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_audioClipForOnHoverEntered()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"get_audioClipForOnHoverEntered", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioClip>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_audioClipForOnHoverEntered(::UnityEngine::AudioClip*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"set_audioClipForOnHoverEntered", {}, {::i2c::type_of<::UnityEngine::AudioClip*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_playAudioClipOnHoverExited()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"get_playAudioClipOnHoverExited", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_playAudioClipOnHoverExited(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"set_playAudioClipOnHoverExited", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::AudioClip> UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_audioClipForOnHoverExited()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"get_audioClipForOnHoverExited", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioClip>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_audioClipForOnHoverExited(::UnityEngine::AudioClip*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"set_audioClipForOnHoverExited", {}, {::i2c::type_of<::UnityEngine::AudioClip*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_playAudioClipOnHoverCanceled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"get_playAudioClipOnHoverCanceled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_playAudioClipOnHoverCanceled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"set_playAudioClipOnHoverCanceled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::AudioClip> UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_audioClipForOnHoverCanceled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"get_audioClipForOnHoverCanceled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioClip>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_audioClipForOnHoverCanceled(::UnityEngine::AudioClip*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"set_audioClipForOnHoverCanceled", {}, {::i2c::type_of<::UnityEngine::AudioClip*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_allowHoverAudioWhileSelecting()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"get_allowHoverAudioWhileSelecting", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_allowHoverAudioWhileSelecting(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"set_allowHoverAudioWhileSelecting", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_playHapticsOnSelectEntered()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"get_playHapticsOnSelectEntered", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_playHapticsOnSelectEntered(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"set_playHapticsOnSelectEntered", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_hapticSelectEnterIntensity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"get_hapticSelectEnterIntensity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_hapticSelectEnterIntensity(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"set_hapticSelectEnterIntensity", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_hapticSelectEnterDuration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"get_hapticSelectEnterDuration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_hapticSelectEnterDuration(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"set_hapticSelectEnterDuration", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_playHapticsOnSelectExited()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"get_playHapticsOnSelectExited", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_playHapticsOnSelectExited(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"set_playHapticsOnSelectExited", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_hapticSelectExitIntensity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"get_hapticSelectExitIntensity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_hapticSelectExitIntensity(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"set_hapticSelectExitIntensity", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_hapticSelectExitDuration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"get_hapticSelectExitDuration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_hapticSelectExitDuration(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"set_hapticSelectExitDuration", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_playHapticsOnSelectCanceled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"get_playHapticsOnSelectCanceled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_playHapticsOnSelectCanceled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"set_playHapticsOnSelectCanceled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_hapticSelectCancelIntensity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"get_hapticSelectCancelIntensity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_hapticSelectCancelIntensity(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"set_hapticSelectCancelIntensity", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_hapticSelectCancelDuration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"get_hapticSelectCancelDuration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_hapticSelectCancelDuration(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"set_hapticSelectCancelDuration", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_playHapticsOnHoverEntered()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"get_playHapticsOnHoverEntered", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_playHapticsOnHoverEntered(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"set_playHapticsOnHoverEntered", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_hapticHoverEnterIntensity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"get_hapticHoverEnterIntensity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_hapticHoverEnterIntensity(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"set_hapticHoverEnterIntensity", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_hapticHoverEnterDuration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"get_hapticHoverEnterDuration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_hapticHoverEnterDuration(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"set_hapticHoverEnterDuration", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_playHapticsOnHoverExited()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"get_playHapticsOnHoverExited", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_playHapticsOnHoverExited(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"set_playHapticsOnHoverExited", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_hapticHoverExitIntensity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"get_hapticHoverExitIntensity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_hapticHoverExitIntensity(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"set_hapticHoverExitIntensity", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_hapticHoverExitDuration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"get_hapticHoverExitDuration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_hapticHoverExitDuration(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"set_hapticHoverExitDuration", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_playHapticsOnHoverCanceled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"get_playHapticsOnHoverCanceled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_playHapticsOnHoverCanceled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"set_playHapticsOnHoverCanceled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_hapticHoverCancelIntensity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"get_hapticHoverCancelIntensity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_hapticHoverCancelIntensity(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"set_hapticHoverCancelIntensity", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_hapticHoverCancelDuration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"get_hapticHoverCancelDuration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_hapticHoverCancelDuration(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"set_hapticHoverCancelDuration", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_allowHoverHapticsWhileSelecting()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"get_allowHoverHapticsWhileSelecting", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_allowHoverHapticsWhileSelecting(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"set_allowHoverHapticsWhileSelecting", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_allowActivate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"get_allowActivate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_allowActivate(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"set_allowActivate", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController> UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_xrController()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"get_xrController", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::set_xrController(::UnityEngine::XR::Interaction::Toolkit::XRBaseController*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"set_xrController", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseController*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs* UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::CreateActivateEventArgs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"CreateActivateEventArgs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs*>(nullptr, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs* UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::CreateDeactivateEventArgs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"CreateDeactivateEventArgs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs*>(nullptr, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(), 52}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::OnXRControllerChanged()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(), 100}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::PreprocessInteractor(::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase  updatePhase)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(), 68}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, updatePhase);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::ProcessInteractor(::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase  updatePhase)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(), 69}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, updatePhase);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::SendActivateEvent(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable*>*  targets)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"SendActivateEvent", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targets);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::SendDeactivateEvent(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable*>*  targets)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"SendDeactivateEvent", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targets);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_isSelectActive()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(), 60}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_isUISelectActive()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(), 101}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_uiScrollValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"get_uiScrollValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_shouldActivate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(), 102}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::get_shouldDeactivate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(), 103}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::GetActivateTargets(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable*>*  targets)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(), 104}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targets);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::OnSelectEntering(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(), 76}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::OnSelectExiting(::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(), 78}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::OnHoverEntering(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(), 72}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::OnHoverExiting(::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*  args)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(), 74}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::CanPlayHoverAudio(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*  hoveredInteractable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"CanPlayHoverAudio", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, hoveredInteractable);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::CanPlayHoverHaptics(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*  hoveredInteractable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"CanPlayHoverHaptics", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, hoveredInteractable);
}
inline bool UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::SendHapticImpulse(float_t  amplitude, float_t  duration)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"SendHapticImpulse", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, amplitude, duration);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::PlayAudio(::UnityEngine::AudioClip*  audioClip)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(), 105}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, audioClip);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::CreateEffectsAudioSource()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"CreateEffectsAudioSource", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::HandleSelecting()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"HandleSelecting", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::HandleDeselecting()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"HandleDeselecting", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::UnityEngine_XR_Interaction_Toolkit_Interactors_IXRInteractor_get_transform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>(),
                        {"UnityEngine.XR.Interaction.Toolkit.Interactors.IXRInteractor.get_transform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor* UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*>());
}
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRActivateInteractor"
constexpr  UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::operator ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRActivateInteractor*() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRActivateInteractor*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRActivateInteractor"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRActivateInteractor* UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::i___UnityEngine__XR__Interaction__Toolkit__Interactors__IXRActivateInteractor() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRActivateInteractor*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor"
constexpr  UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::operator ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor* UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::i___UnityEngine__XR__Interaction__Toolkit__Interactors__IXRInteractor() noexcept {
return static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor::XRBaseControllerInteractor()   {
}
