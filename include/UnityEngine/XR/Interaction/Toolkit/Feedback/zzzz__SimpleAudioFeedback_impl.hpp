#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Feedback/SimpleAudioFeedback.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Feedback/zzzz__SimpleAudioFeedback_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__IXRInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__IXRInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/zzzz__UnityObjectReferenceCache_2_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__HoverEnterEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__HoverExitEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__SelectEnterEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__SelectExitEventArgs_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback.get_audioSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AudioSource> (::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::get_audioSource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4cd30c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback*>(),
                        {"get_audioSource", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback.set_audioSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::*)(::UnityEngine::AudioSource*)>(&::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::set_audioSource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4cd314;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback*>(),
                        {"set_audioSource", {}, {::i2c::type_of<::UnityEngine::AudioSource*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback.get_playSelectEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::get_playSelectEntered)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4cd31c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback*>(),
                        {"get_playSelectEntered", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback.set_playSelectEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::set_playSelectEntered)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4cd324;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback*>(),
                        {"set_playSelectEntered", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback.get_selectEnteredClip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AudioClip> (::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::get_selectEnteredClip)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4cd32c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback*>(),
                        {"get_selectEnteredClip", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback.set_selectEnteredClip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::*)(::UnityEngine::AudioClip*)>(&::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::set_selectEnteredClip)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4cd334;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback*>(),
                        {"set_selectEnteredClip", {}, {::i2c::type_of<::UnityEngine::AudioClip*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback.get_playSelectExited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::get_playSelectExited)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4cd33c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback*>(),
                        {"get_playSelectExited", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback.set_playSelectExited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::set_playSelectExited)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4cd344;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback*>(),
                        {"set_playSelectExited", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback.get_selectExitedClip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AudioClip> (::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::get_selectExitedClip)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4cd34c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback*>(),
                        {"get_selectExitedClip", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback.set_selectExitedClip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::*)(::UnityEngine::AudioClip*)>(&::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::set_selectExitedClip)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4cd354;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback*>(),
                        {"set_selectExitedClip", {}, {::i2c::type_of<::UnityEngine::AudioClip*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback.get_playSelectCanceled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::get_playSelectCanceled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4cd35c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback*>(),
                        {"get_playSelectCanceled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback.set_playSelectCanceled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::set_playSelectCanceled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4cd364;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback*>(),
                        {"set_playSelectCanceled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback.get_selectCanceledClip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AudioClip> (::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::get_selectCanceledClip)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4cd36c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback*>(),
                        {"get_selectCanceledClip", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback.set_selectCanceledClip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::*)(::UnityEngine::AudioClip*)>(&::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::set_selectCanceledClip)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4cd374;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback*>(),
                        {"set_selectCanceledClip", {}, {::i2c::type_of<::UnityEngine::AudioClip*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback.get_playHoverEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::get_playHoverEntered)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4cd37c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback*>(),
                        {"get_playHoverEntered", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback.set_playHoverEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::set_playHoverEntered)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4cd384;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback*>(),
                        {"set_playHoverEntered", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback.get_hoverEnteredClip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AudioClip> (::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::get_hoverEnteredClip)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4cd38c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback*>(),
                        {"get_hoverEnteredClip", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback.set_hoverEnteredClip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::*)(::UnityEngine::AudioClip*)>(&::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::set_hoverEnteredClip)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4cd394;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback*>(),
                        {"set_hoverEnteredClip", {}, {::i2c::type_of<::UnityEngine::AudioClip*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback.get_playHoverExited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::get_playHoverExited)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4cd39c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback*>(),
                        {"get_playHoverExited", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback.set_playHoverExited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::set_playHoverExited)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4cd3a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback*>(),
                        {"set_playHoverExited", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback.get_hoverExitedClip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AudioClip> (::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::get_hoverExitedClip)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4cd3ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback*>(),
                        {"get_hoverExitedClip", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback.set_hoverExitedClip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::*)(::UnityEngine::AudioClip*)>(&::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::set_hoverExitedClip)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4cd3b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback*>(),
                        {"set_hoverExitedClip", {}, {::i2c::type_of<::UnityEngine::AudioClip*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback.get_playHoverCanceled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::get_playHoverCanceled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4cd3bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback*>(),
                        {"get_playHoverCanceled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback.set_playHoverCanceled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::set_playHoverCanceled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4cd3c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback*>(),
                        {"set_playHoverCanceled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback.get_hoverCanceledClip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AudioClip> (::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::get_hoverCanceledClip)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4cd3cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback*>(),
                        {"get_hoverCanceledClip", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback.set_hoverCanceledClip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::*)(::UnityEngine::AudioClip*)>(&::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::set_hoverCanceledClip)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4cd3d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback*>(),
                        {"set_hoverCanceledClip", {}, {::i2c::type_of<::UnityEngine::AudioClip*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback.get_allowHoverAudioWhileSelecting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::get_allowHoverAudioWhileSelecting)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4cd3dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback*>(),
                        {"get_allowHoverAudioWhileSelecting", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback.set_allowHoverAudioWhileSelecting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::set_allowHoverAudioWhileSelecting)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4cd3e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback*>(),
                        {"set_allowHoverAudioWhileSelecting", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::Reset)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb4cd3ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::Awake)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0xb4cd3f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::OnEnable)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb4cd628;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::OnDisable)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb4cdad8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback.GetInteractorSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor* (::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::GetInteractorSource)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb4cd644;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback*>(),
                        {"GetInteractorSource", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback.SetInteractorSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::SetInteractorSource)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xb4cdf34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback*>(),
                        {"SetInteractorSource", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback.PlayAudio
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::*)(::UnityEngine::AudioClip*)>(&::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::PlayAudio)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xb4ce054;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback*>(),
                        {"PlayAudio", {}, {::i2c::type_of<::UnityEngine::AudioClip*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback.CreateAudioSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::CreateAudioSource)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xb4cd570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback*>(),
                        {"CreateAudioSource", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback.Subscribe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::Subscribe)> {
  constexpr static std::size_t size = 0x440;
  constexpr static std::size_t addrs = 0xb4cd698;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback*>(),
                        {"Subscribe", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback.Unsubscribe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::Unsubscribe)> {
  constexpr static std::size_t size = 0x440;
  constexpr static std::size_t addrs = 0xb4cdaf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback*>(),
                        {"Unsubscribe", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback.OnSelectEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::*)(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::OnSelectEntered)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb4ce118;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback*>(),
                        {"OnSelectEntered", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback.OnSelectExited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::*)(::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::OnSelectExited)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xb4ce12c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback*>(),
                        {"OnSelectExited", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback.OnHoverEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::*)(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::OnHoverEntered)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xb4ce194;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback*>(),
                        {"OnHoverEntered", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback.OnHoverExited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::*)(::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::OnHoverExited)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xb4ce238;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback*>(),
                        {"OnHoverExited", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback.IsHoverAudioAllowed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::IsHoverAudioAllowed)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb4ce208;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback*>(),
                        {"IsHoverAudioAllowed", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback.IsSelecting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::IsSelecting)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xb4ce2d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback*>(),
                        {"IsSelecting", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xb4ce3c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::__cordl_internal_get_m_InteractorSourceObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InteractorSourceObject;
}
constexpr ::UnityW<::UnityEngine::Object> const& UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::__cordl_internal_get_m_InteractorSourceObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InteractorSourceObject;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::__cordl_internal_set_m_InteractorSourceObject(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_InteractorSourceObject = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::__cordl_internal_get_m_AudioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AudioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::__cordl_internal_get_m_AudioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AudioSource;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::__cordl_internal_set_m_AudioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AudioSource = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::__cordl_internal_get_m_PlaySelectEntered()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PlaySelectEntered;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::__cordl_internal_get_m_PlaySelectEntered() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PlaySelectEntered;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::__cordl_internal_set_m_PlaySelectEntered(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PlaySelectEntered = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::__cordl_internal_get_m_SelectEnteredClip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SelectEnteredClip;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::__cordl_internal_get_m_SelectEnteredClip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SelectEnteredClip;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::__cordl_internal_set_m_SelectEnteredClip(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SelectEnteredClip = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::__cordl_internal_get_m_PlaySelectExited()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PlaySelectExited;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::__cordl_internal_get_m_PlaySelectExited() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PlaySelectExited;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::__cordl_internal_set_m_PlaySelectExited(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PlaySelectExited = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::__cordl_internal_get_m_SelectExitedClip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SelectExitedClip;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::__cordl_internal_get_m_SelectExitedClip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SelectExitedClip;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::__cordl_internal_set_m_SelectExitedClip(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SelectExitedClip = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::__cordl_internal_get_m_PlaySelectCanceled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PlaySelectCanceled;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::__cordl_internal_get_m_PlaySelectCanceled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PlaySelectCanceled;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::__cordl_internal_set_m_PlaySelectCanceled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PlaySelectCanceled = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::__cordl_internal_get_m_SelectCanceledClip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SelectCanceledClip;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::__cordl_internal_get_m_SelectCanceledClip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SelectCanceledClip;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::__cordl_internal_set_m_SelectCanceledClip(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SelectCanceledClip = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::__cordl_internal_get_m_PlayHoverEntered()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PlayHoverEntered;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::__cordl_internal_get_m_PlayHoverEntered() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PlayHoverEntered;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::__cordl_internal_set_m_PlayHoverEntered(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PlayHoverEntered = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::__cordl_internal_get_m_HoverEnteredClip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HoverEnteredClip;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::__cordl_internal_get_m_HoverEnteredClip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HoverEnteredClip;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::__cordl_internal_set_m_HoverEnteredClip(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HoverEnteredClip = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::__cordl_internal_get_m_PlayHoverExited()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PlayHoverExited;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::__cordl_internal_get_m_PlayHoverExited() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PlayHoverExited;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::__cordl_internal_set_m_PlayHoverExited(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PlayHoverExited = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::__cordl_internal_get_m_HoverExitedClip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HoverExitedClip;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::__cordl_internal_get_m_HoverExitedClip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HoverExitedClip;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::__cordl_internal_set_m_HoverExitedClip(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HoverExitedClip = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::__cordl_internal_get_m_PlayHoverCanceled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PlayHoverCanceled;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::__cordl_internal_get_m_PlayHoverCanceled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PlayHoverCanceled;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::__cordl_internal_set_m_PlayHoverCanceled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PlayHoverCanceled = value;
}
constexpr ::UnityW<::UnityEngine::AudioClip>& UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::__cordl_internal_get_m_HoverCanceledClip()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HoverCanceledClip;
}
constexpr ::UnityW<::UnityEngine::AudioClip> const& UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::__cordl_internal_get_m_HoverCanceledClip() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HoverCanceledClip;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::__cordl_internal_set_m_HoverCanceledClip(::UnityW<::UnityEngine::AudioClip>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HoverCanceledClip = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::__cordl_internal_get_m_AllowHoverAudioWhileSelecting()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AllowHoverAudioWhileSelecting;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::__cordl_internal_get_m_AllowHoverAudioWhileSelecting() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AllowHoverAudioWhileSelecting;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::__cordl_internal_set_m_AllowHoverAudioWhileSelecting(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AllowHoverAudioWhileSelecting = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*,::UnityW<::UnityEngine::Object>>*& UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::__cordl_internal_get_m_InteractorSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InteractorSource;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*,::UnityW<::UnityEngine::Object>>* const& UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::__cordl_internal_get_m_InteractorSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InteractorSource;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::__cordl_internal_set_m_InteractorSource(::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*,::UnityW<::UnityEngine::Object>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_InteractorSource = value;
}
inline ::UnityW<::UnityEngine::AudioSource> UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::get_audioSource()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback*>(),
                        {"get_audioSource", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioSource>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::set_audioSource(::UnityEngine::AudioSource*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback*>(),
                        {"set_audioSource", {}, {::i2c::type_of<::UnityEngine::AudioSource*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::get_playSelectEntered()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback*>(),
                        {"get_playSelectEntered", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::set_playSelectEntered(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback*>(),
                        {"set_playSelectEntered", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::AudioClip> UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::get_selectEnteredClip()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback*>(),
                        {"get_selectEnteredClip", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioClip>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::set_selectEnteredClip(::UnityEngine::AudioClip*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback*>(),
                        {"set_selectEnteredClip", {}, {::i2c::type_of<::UnityEngine::AudioClip*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::get_playSelectExited()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback*>(),
                        {"get_playSelectExited", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::set_playSelectExited(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback*>(),
                        {"set_playSelectExited", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::AudioClip> UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::get_selectExitedClip()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback*>(),
                        {"get_selectExitedClip", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioClip>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::set_selectExitedClip(::UnityEngine::AudioClip*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback*>(),
                        {"set_selectExitedClip", {}, {::i2c::type_of<::UnityEngine::AudioClip*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::get_playSelectCanceled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback*>(),
                        {"get_playSelectCanceled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::set_playSelectCanceled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback*>(),
                        {"set_playSelectCanceled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::AudioClip> UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::get_selectCanceledClip()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback*>(),
                        {"get_selectCanceledClip", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioClip>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::set_selectCanceledClip(::UnityEngine::AudioClip*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback*>(),
                        {"set_selectCanceledClip", {}, {::i2c::type_of<::UnityEngine::AudioClip*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::get_playHoverEntered()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback*>(),
                        {"get_playHoverEntered", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::set_playHoverEntered(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback*>(),
                        {"set_playHoverEntered", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::AudioClip> UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::get_hoverEnteredClip()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback*>(),
                        {"get_hoverEnteredClip", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioClip>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::set_hoverEnteredClip(::UnityEngine::AudioClip*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback*>(),
                        {"set_hoverEnteredClip", {}, {::i2c::type_of<::UnityEngine::AudioClip*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::get_playHoverExited()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback*>(),
                        {"get_playHoverExited", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::set_playHoverExited(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback*>(),
                        {"set_playHoverExited", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::AudioClip> UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::get_hoverExitedClip()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback*>(),
                        {"get_hoverExitedClip", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioClip>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::set_hoverExitedClip(::UnityEngine::AudioClip*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback*>(),
                        {"set_hoverExitedClip", {}, {::i2c::type_of<::UnityEngine::AudioClip*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::get_playHoverCanceled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback*>(),
                        {"get_playHoverCanceled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::set_playHoverCanceled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback*>(),
                        {"set_playHoverCanceled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::AudioClip> UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::get_hoverCanceledClip()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback*>(),
                        {"get_hoverCanceledClip", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioClip>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::set_hoverCanceledClip(::UnityEngine::AudioClip*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback*>(),
                        {"set_hoverCanceledClip", {}, {::i2c::type_of<::UnityEngine::AudioClip*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::get_allowHoverAudioWhileSelecting()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback*>(),
                        {"get_allowHoverAudioWhileSelecting", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::set_allowHoverAudioWhileSelecting(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback*>(),
                        {"set_allowHoverAudioWhileSelecting", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor* UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::GetInteractorSource()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback*>(),
                        {"GetInteractorSource", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::SetInteractorSource(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback*>(),
                        {"SetInteractorSource", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor);
}
inline void UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::PlayAudio(::UnityEngine::AudioClip*  clip)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback*>(),
                        {"PlayAudio", {}, {::i2c::type_of<::UnityEngine::AudioClip*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, clip);
}
inline void UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::CreateAudioSource()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback*>(),
                        {"CreateAudioSource", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::Subscribe(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback*>(),
                        {"Subscribe", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor);
}
inline void UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::Unsubscribe(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback*>(),
                        {"Unsubscribe", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor);
}
inline void UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::OnSelectEntered(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback*>(),
                        {"OnSelectEntered", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::OnSelectExited(::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback*>(),
                        {"OnSelectExited", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::OnHoverEntered(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback*>(),
                        {"OnHoverEntered", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::OnHoverExited(::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback*>(),
                        {"OnHoverExited", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::IsHoverAudioAllowed(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  interactable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback*>(),
                        {"IsHoverAudioAllowed", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, interactor, interactable);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::IsSelecting(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  interactable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback*>(),
                        {"IsSelecting", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, interactor, interactable);
}
inline void UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback* UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback::SimpleAudioFeedback()   {
}
