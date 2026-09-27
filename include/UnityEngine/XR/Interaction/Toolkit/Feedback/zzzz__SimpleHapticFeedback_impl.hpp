#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Feedback/SimpleHapticFeedback.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Feedback/zzzz__SimpleHapticFeedback_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Feedback/zzzz__HapticImpulseData_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Haptics/zzzz__HapticImpulsePlayer_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__IXRInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__IXRInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Utilities/zzzz__UnityObjectReferenceCache_2_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__HoverEnterEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__HoverExitEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__SelectEnterEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__SelectExitEventArgs_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback.get_hapticImpulsePlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulsePlayer> (::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::get_hapticImpulsePlayer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4ce488;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback*>(),
                        {"get_hapticImpulsePlayer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback.set_hapticImpulsePlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::*)(::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulsePlayer*)>(&::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::set_hapticImpulsePlayer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4ce490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback*>(),
                        {"set_hapticImpulsePlayer", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulsePlayer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback.get_playSelectEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::get_playSelectEntered)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4ce498;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback*>(),
                        {"get_playSelectEntered", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback.set_playSelectEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::set_playSelectEntered)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4ce4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback*>(),
                        {"set_playSelectEntered", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback.get_selectEnteredData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Feedback::HapticImpulseData* (::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::get_selectEnteredData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4ce4a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback*>(),
                        {"get_selectEnteredData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback.set_selectEnteredData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::*)(::UnityEngine::XR::Interaction::Toolkit::Feedback::HapticImpulseData*)>(&::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::set_selectEnteredData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4ce4b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback*>(),
                        {"set_selectEnteredData", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::HapticImpulseData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback.get_playSelectExited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::get_playSelectExited)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4ce4b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback*>(),
                        {"get_playSelectExited", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback.set_playSelectExited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::set_playSelectExited)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4ce4c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback*>(),
                        {"set_playSelectExited", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback.get_selectExitedData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Feedback::HapticImpulseData* (::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::get_selectExitedData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4ce4c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback*>(),
                        {"get_selectExitedData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback.set_selectExitedData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::*)(::UnityEngine::XR::Interaction::Toolkit::Feedback::HapticImpulseData*)>(&::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::set_selectExitedData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4ce4d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback*>(),
                        {"set_selectExitedData", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::HapticImpulseData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback.get_playSelectCanceled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::get_playSelectCanceled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4ce4d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback*>(),
                        {"get_playSelectCanceled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback.set_playSelectCanceled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::set_playSelectCanceled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4ce4e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback*>(),
                        {"set_playSelectCanceled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback.get_selectCanceledData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Feedback::HapticImpulseData* (::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::get_selectCanceledData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4ce4e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback*>(),
                        {"get_selectCanceledData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback.set_selectCanceledData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::*)(::UnityEngine::XR::Interaction::Toolkit::Feedback::HapticImpulseData*)>(&::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::set_selectCanceledData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4ce4f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback*>(),
                        {"set_selectCanceledData", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::HapticImpulseData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback.get_playHoverEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::get_playHoverEntered)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4ce4f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback*>(),
                        {"get_playHoverEntered", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback.set_playHoverEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::set_playHoverEntered)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4ce500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback*>(),
                        {"set_playHoverEntered", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback.get_hoverEnteredData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Feedback::HapticImpulseData* (::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::get_hoverEnteredData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4ce508;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback*>(),
                        {"get_hoverEnteredData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback.set_hoverEnteredData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::*)(::UnityEngine::XR::Interaction::Toolkit::Feedback::HapticImpulseData*)>(&::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::set_hoverEnteredData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4ce510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback*>(),
                        {"set_hoverEnteredData", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::HapticImpulseData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback.get_playHoverExited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::get_playHoverExited)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4ce518;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback*>(),
                        {"get_playHoverExited", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback.set_playHoverExited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::set_playHoverExited)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4ce520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback*>(),
                        {"set_playHoverExited", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback.get_hoverExitedData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Feedback::HapticImpulseData* (::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::get_hoverExitedData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4ce528;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback*>(),
                        {"get_hoverExitedData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback.set_hoverExitedData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::*)(::UnityEngine::XR::Interaction::Toolkit::Feedback::HapticImpulseData*)>(&::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::set_hoverExitedData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4ce530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback*>(),
                        {"set_hoverExitedData", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::HapticImpulseData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback.get_playHoverCanceled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::get_playHoverCanceled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4ce538;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback*>(),
                        {"get_playHoverCanceled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback.set_playHoverCanceled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::set_playHoverCanceled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4ce540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback*>(),
                        {"set_playHoverCanceled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback.get_hoverCanceledData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Feedback::HapticImpulseData* (::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::get_hoverCanceledData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4ce548;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback*>(),
                        {"get_hoverCanceledData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback.set_hoverCanceledData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::*)(::UnityEngine::XR::Interaction::Toolkit::Feedback::HapticImpulseData*)>(&::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::set_hoverCanceledData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4ce550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback*>(),
                        {"set_hoverCanceledData", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::HapticImpulseData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback.get_allowHoverHapticsWhileSelecting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::get_allowHoverHapticsWhileSelecting)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4ce558;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback*>(),
                        {"get_allowHoverHapticsWhileSelecting", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback.set_allowHoverHapticsWhileSelecting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::set_allowHoverHapticsWhileSelecting)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4ce560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback*>(),
                        {"set_allowHoverHapticsWhileSelecting", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::Reset)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb4ce568;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::Awake)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0xb4ce56c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::OnEnable)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb4ce714;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::OnDisable)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb4cebc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback.GetInteractorSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor* (::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::GetInteractorSource)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb4ce730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback*>(),
                        {"GetInteractorSource", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback.SetInteractorSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::SetInteractorSource)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xb4cf020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback*>(),
                        {"SetInteractorSource", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback.SendHapticImpulse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::*)(::UnityEngine::XR::Interaction::Toolkit::Feedback::HapticImpulseData*)>(&::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::SendHapticImpulse)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xb4cf140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback*>(),
                        {"SendHapticImpulse", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::HapticImpulseData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback.SendHapticImpulse
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::*)(float_t, float_t, float_t)>(&::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::SendHapticImpulse)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xb4cf158;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback*>(),
                        {"SendHapticImpulse", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback.CreateHapticImpulsePlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::CreateHapticImpulsePlayer)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb4ce6ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback*>(),
                        {"CreateHapticImpulsePlayer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback.Subscribe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::Subscribe)> {
  constexpr static std::size_t size = 0x440;
  constexpr static std::size_t addrs = 0xb4ce784;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback*>(),
                        {"Subscribe", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback.Unsubscribe
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*)>(&::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::Unsubscribe)> {
  constexpr static std::size_t size = 0x440;
  constexpr static std::size_t addrs = 0xb4cebe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback*>(),
                        {"Unsubscribe", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback.OnSelectEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::*)(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::OnSelectEntered)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xb4cf1fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback*>(),
                        {"OnSelectEntered", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback.OnSelectExited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::*)(::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::OnSelectExited)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb4cf21c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback*>(),
                        {"OnSelectExited", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback.OnHoverEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::*)(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::OnHoverEntered)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb4cf29c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback*>(),
                        {"OnHoverEntered", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback.OnHoverExited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::*)(::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::OnHoverExited)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb4cf34c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback*>(),
                        {"OnHoverExited", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback.IsHoverHapticsAllowed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::IsHoverHapticsAllowed)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xb4cf31c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback*>(),
                        {"IsHoverHapticsAllowed", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback.IsSelecting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*)>(&::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::IsSelecting)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xb4cf3fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback*>(),
                        {"IsSelecting", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::_ctor)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0xb4cf4f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Object>& UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::__cordl_internal_get_m_InteractorSourceObject()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InteractorSourceObject;
}
constexpr ::UnityW<::UnityEngine::Object> const& UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::__cordl_internal_get_m_InteractorSourceObject() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InteractorSourceObject;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::__cordl_internal_set_m_InteractorSourceObject(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_InteractorSourceObject = value;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulsePlayer>& UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::__cordl_internal_get_m_HapticImpulsePlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HapticImpulsePlayer;
}
constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulsePlayer> const& UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::__cordl_internal_get_m_HapticImpulsePlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HapticImpulsePlayer;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::__cordl_internal_set_m_HapticImpulsePlayer(::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulsePlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HapticImpulsePlayer = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::__cordl_internal_get_m_PlaySelectEntered()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PlaySelectEntered;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::__cordl_internal_get_m_PlaySelectEntered() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PlaySelectEntered;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::__cordl_internal_set_m_PlaySelectEntered(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PlaySelectEntered = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Feedback::HapticImpulseData*& UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::__cordl_internal_get_m_SelectEnteredData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SelectEnteredData;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Feedback::HapticImpulseData* const& UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::__cordl_internal_get_m_SelectEnteredData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SelectEnteredData;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::__cordl_internal_set_m_SelectEnteredData(::UnityEngine::XR::Interaction::Toolkit::Feedback::HapticImpulseData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SelectEnteredData = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::__cordl_internal_get_m_PlaySelectExited()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PlaySelectExited;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::__cordl_internal_get_m_PlaySelectExited() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PlaySelectExited;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::__cordl_internal_set_m_PlaySelectExited(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PlaySelectExited = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Feedback::HapticImpulseData*& UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::__cordl_internal_get_m_SelectExitedData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SelectExitedData;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Feedback::HapticImpulseData* const& UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::__cordl_internal_get_m_SelectExitedData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SelectExitedData;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::__cordl_internal_set_m_SelectExitedData(::UnityEngine::XR::Interaction::Toolkit::Feedback::HapticImpulseData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SelectExitedData = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::__cordl_internal_get_m_PlaySelectCanceled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PlaySelectCanceled;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::__cordl_internal_get_m_PlaySelectCanceled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PlaySelectCanceled;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::__cordl_internal_set_m_PlaySelectCanceled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PlaySelectCanceled = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Feedback::HapticImpulseData*& UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::__cordl_internal_get_m_SelectCanceledData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SelectCanceledData;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Feedback::HapticImpulseData* const& UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::__cordl_internal_get_m_SelectCanceledData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SelectCanceledData;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::__cordl_internal_set_m_SelectCanceledData(::UnityEngine::XR::Interaction::Toolkit::Feedback::HapticImpulseData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SelectCanceledData = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::__cordl_internal_get_m_PlayHoverEntered()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PlayHoverEntered;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::__cordl_internal_get_m_PlayHoverEntered() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PlayHoverEntered;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::__cordl_internal_set_m_PlayHoverEntered(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PlayHoverEntered = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Feedback::HapticImpulseData*& UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::__cordl_internal_get_m_HoverEnteredData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HoverEnteredData;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Feedback::HapticImpulseData* const& UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::__cordl_internal_get_m_HoverEnteredData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HoverEnteredData;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::__cordl_internal_set_m_HoverEnteredData(::UnityEngine::XR::Interaction::Toolkit::Feedback::HapticImpulseData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HoverEnteredData = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::__cordl_internal_get_m_PlayHoverExited()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PlayHoverExited;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::__cordl_internal_get_m_PlayHoverExited() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PlayHoverExited;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::__cordl_internal_set_m_PlayHoverExited(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PlayHoverExited = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Feedback::HapticImpulseData*& UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::__cordl_internal_get_m_HoverExitedData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HoverExitedData;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Feedback::HapticImpulseData* const& UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::__cordl_internal_get_m_HoverExitedData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HoverExitedData;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::__cordl_internal_set_m_HoverExitedData(::UnityEngine::XR::Interaction::Toolkit::Feedback::HapticImpulseData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HoverExitedData = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::__cordl_internal_get_m_PlayHoverCanceled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PlayHoverCanceled;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::__cordl_internal_get_m_PlayHoverCanceled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PlayHoverCanceled;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::__cordl_internal_set_m_PlayHoverCanceled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PlayHoverCanceled = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Feedback::HapticImpulseData*& UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::__cordl_internal_get_m_HoverCanceledData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HoverCanceledData;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Feedback::HapticImpulseData* const& UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::__cordl_internal_get_m_HoverCanceledData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HoverCanceledData;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::__cordl_internal_set_m_HoverCanceledData(::UnityEngine::XR::Interaction::Toolkit::Feedback::HapticImpulseData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HoverCanceledData = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::__cordl_internal_get_m_AllowHoverHapticsWhileSelecting()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AllowHoverHapticsWhileSelecting;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::__cordl_internal_get_m_AllowHoverHapticsWhileSelecting() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_AllowHoverHapticsWhileSelecting;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::__cordl_internal_set_m_AllowHoverHapticsWhileSelecting(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_AllowHoverHapticsWhileSelecting = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*,::UnityW<::UnityEngine::Object>>*& UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::__cordl_internal_get_m_InteractorSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InteractorSource;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*,::UnityW<::UnityEngine::Object>>* const& UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::__cordl_internal_get_m_InteractorSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_InteractorSource;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::__cordl_internal_set_m_InteractorSource(::UnityEngine::XR::Interaction::Toolkit::Utilities::UnityObjectReferenceCache_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*,::UnityW<::UnityEngine::Object>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_InteractorSource = value;
}
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulsePlayer> UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::get_hapticImpulsePlayer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback*>(),
                        {"get_hapticImpulsePlayer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulsePlayer>>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::set_hapticImpulsePlayer(::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulsePlayer*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback*>(),
                        {"set_hapticImpulsePlayer", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulsePlayer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::get_playSelectEntered()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback*>(),
                        {"get_playSelectEntered", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::set_playSelectEntered(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback*>(),
                        {"set_playSelectEntered", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Feedback::HapticImpulseData* UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::get_selectEnteredData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback*>(),
                        {"get_selectEnteredData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Feedback::HapticImpulseData*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::set_selectEnteredData(::UnityEngine::XR::Interaction::Toolkit::Feedback::HapticImpulseData*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback*>(),
                        {"set_selectEnteredData", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::HapticImpulseData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::get_playSelectExited()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback*>(),
                        {"get_playSelectExited", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::set_playSelectExited(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback*>(),
                        {"set_playSelectExited", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Feedback::HapticImpulseData* UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::get_selectExitedData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback*>(),
                        {"get_selectExitedData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Feedback::HapticImpulseData*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::set_selectExitedData(::UnityEngine::XR::Interaction::Toolkit::Feedback::HapticImpulseData*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback*>(),
                        {"set_selectExitedData", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::HapticImpulseData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::get_playSelectCanceled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback*>(),
                        {"get_playSelectCanceled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::set_playSelectCanceled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback*>(),
                        {"set_playSelectCanceled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Feedback::HapticImpulseData* UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::get_selectCanceledData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback*>(),
                        {"get_selectCanceledData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Feedback::HapticImpulseData*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::set_selectCanceledData(::UnityEngine::XR::Interaction::Toolkit::Feedback::HapticImpulseData*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback*>(),
                        {"set_selectCanceledData", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::HapticImpulseData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::get_playHoverEntered()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback*>(),
                        {"get_playHoverEntered", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::set_playHoverEntered(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback*>(),
                        {"set_playHoverEntered", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Feedback::HapticImpulseData* UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::get_hoverEnteredData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback*>(),
                        {"get_hoverEnteredData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Feedback::HapticImpulseData*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::set_hoverEnteredData(::UnityEngine::XR::Interaction::Toolkit::Feedback::HapticImpulseData*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback*>(),
                        {"set_hoverEnteredData", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::HapticImpulseData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::get_playHoverExited()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback*>(),
                        {"get_playHoverExited", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::set_playHoverExited(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback*>(),
                        {"set_playHoverExited", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Feedback::HapticImpulseData* UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::get_hoverExitedData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback*>(),
                        {"get_hoverExitedData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Feedback::HapticImpulseData*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::set_hoverExitedData(::UnityEngine::XR::Interaction::Toolkit::Feedback::HapticImpulseData*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback*>(),
                        {"set_hoverExitedData", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::HapticImpulseData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::get_playHoverCanceled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback*>(),
                        {"get_playHoverCanceled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::set_playHoverCanceled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback*>(),
                        {"set_playHoverCanceled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Feedback::HapticImpulseData* UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::get_hoverCanceledData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback*>(),
                        {"get_hoverCanceledData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Feedback::HapticImpulseData*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::set_hoverCanceledData(::UnityEngine::XR::Interaction::Toolkit::Feedback::HapticImpulseData*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback*>(),
                        {"set_hoverCanceledData", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::HapticImpulseData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::get_allowHoverHapticsWhileSelecting()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback*>(),
                        {"get_allowHoverHapticsWhileSelecting", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::set_allowHoverHapticsWhileSelecting(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback*>(),
                        {"set_allowHoverHapticsWhileSelecting", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor* UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::GetInteractorSource()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback*>(),
                        {"GetInteractorSource", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::SetInteractorSource(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback*>(),
                        {"SetInteractorSource", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::SendHapticImpulse(::UnityEngine::XR::Interaction::Toolkit::Feedback::HapticImpulseData*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback*>(),
                        {"SendHapticImpulse", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::HapticImpulseData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, data);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::SendHapticImpulse(float_t  amplitude, float_t  duration, float_t  frequency)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback*>(),
                        {"SendHapticImpulse", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, amplitude, duration, frequency);
}
inline void UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::CreateHapticImpulsePlayer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback*>(),
                        {"CreateHapticImpulsePlayer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::Subscribe(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback*>(),
                        {"Subscribe", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor);
}
inline void UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::Unsubscribe(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback*>(),
                        {"Unsubscribe", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, interactor);
}
inline void UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::OnSelectEntered(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback*>(),
                        {"OnSelectEntered", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::OnSelectExited(::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback*>(),
                        {"OnSelectExited", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::OnHoverEntered(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback*>(),
                        {"OnHoverEntered", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::OnHoverExited(::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback*>(),
                        {"OnHoverExited", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::IsHoverHapticsAllowed(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  interactable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback*>(),
                        {"IsHoverHapticsAllowed", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, interactor, interactable);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::IsSelecting(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  interactable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback*>(),
                        {"IsSelecting", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>(), ::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, interactor, interactable);
}
inline void UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback* UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback::SimpleHapticFeedback()   {
}
