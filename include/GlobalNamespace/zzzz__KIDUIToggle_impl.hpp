#pragma once
// IWYU pragma private; include "GlobalNamespace/KIDUIToggle.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/UI/zzzz__ColorBlock_impl.hpp"
#include "UnityEngine/UI/zzzz__Slider_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "GlobalNamespace/zzzz__KIDUIToggle_def.hpp"
#include "GlobalNamespace/zzzz__ControllerBehaviour_def.hpp"
#include "GlobalNamespace/zzzz__KIDUIToggle_def.hpp"
#include "GlobalNamespace/zzzz__UXSettings_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Coroutine_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::KIDUIToggle.get_CurrentValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::KIDUIToggle::*)()>(&::GlobalNamespace::KIDUIToggle::get_CurrentValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a4ab98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIToggle*>(),
                        {"get_CurrentValue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUIToggle.set_CurrentValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUIToggle::*)(bool)>(&::GlobalNamespace::KIDUIToggle::set_CurrentValue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a4aba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIToggle*>(),
                        {"set_CurrentValue", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUIToggle.get_IsOn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::KIDUIToggle::*)()>(&::GlobalNamespace::KIDUIToggle::get_IsOn)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a4aba8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIToggle*>(),
                        {"get_IsOn", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUIToggle.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUIToggle::*)()>(&::GlobalNamespace::KIDUIToggle::Awake)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x5a4abb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::KIDUIToggle*>(),
                    {::i2c::class_of<::GlobalNamespace::KIDUIToggle*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUIToggle.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUIToggle::*)()>(&::GlobalNamespace::KIDUIToggle::Start)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5a4adb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::KIDUIToggle*>(),
                    {::i2c::class_of<::GlobalNamespace::KIDUIToggle*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUIToggle.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUIToggle::*)()>(&::GlobalNamespace::KIDUIToggle::OnEnable)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5a4addc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::KIDUIToggle*>(),
                    {::i2c::class_of<::GlobalNamespace::KIDUIToggle*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUIToggle.OnPointerDown
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUIToggle::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::GlobalNamespace::KIDUIToggle::OnPointerDown)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5a4b030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::KIDUIToggle*>(),
                    {::i2c::class_of<::GlobalNamespace::KIDUIToggle*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUIToggle.OnPointerEnter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUIToggle::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::GlobalNamespace::KIDUIToggle::OnPointerEnter)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5a4b08c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::KIDUIToggle*>(),
                    {::i2c::class_of<::GlobalNamespace::KIDUIToggle*>(), 34}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUIToggle.OnPointerExit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUIToggle::*)(::UnityEngine::EventSystems::PointerEventData*)>(&::GlobalNamespace::KIDUIToggle::OnPointerExit)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5a4b154;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::KIDUIToggle*>(),
                    {::i2c::class_of<::GlobalNamespace::KIDUIToggle*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUIToggle.SetupToggleComponent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUIToggle::*)()>(&::GlobalNamespace::KIDUIToggle::SetupToggleComponent)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5a4b218;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::KIDUIToggle*>(),
                    {::i2c::class_of<::GlobalNamespace::KIDUIToggle*>(), 56}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUIToggle.SetupSliderComponent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUIToggle::*)()>(&::GlobalNamespace::KIDUIToggle::SetupSliderComponent)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5a4b2cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::KIDUIToggle*>(),
                    {::i2c::class_of<::GlobalNamespace::KIDUIToggle*>(), 57}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUIToggle.RegisterOnChangeEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUIToggle::*)(::System::Action*)>(&::GlobalNamespace::KIDUIToggle::RegisterOnChangeEvent)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5a4b39c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIToggle*>(),
                        {"RegisterOnChangeEvent", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUIToggle.UnregisterOnChangeEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUIToggle::*)(::System::Action*)>(&::GlobalNamespace::KIDUIToggle::UnregisterOnChangeEvent)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5a4b474;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIToggle*>(),
                        {"UnregisterOnChangeEvent", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUIToggle.RegisterToggleOnEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUIToggle::*)(::System::Action*)>(&::GlobalNamespace::KIDUIToggle::RegisterToggleOnEvent)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5a4b54c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIToggle*>(),
                        {"RegisterToggleOnEvent", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUIToggle.UnregisterToggleOnEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUIToggle::*)(::System::Action*)>(&::GlobalNamespace::KIDUIToggle::UnregisterToggleOnEvent)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5a4b624;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIToggle*>(),
                        {"UnregisterToggleOnEvent", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUIToggle.RegisterToggleOffEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUIToggle::*)(::System::Action*)>(&::GlobalNamespace::KIDUIToggle::RegisterToggleOffEvent)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5a4b6fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIToggle*>(),
                        {"RegisterToggleOffEvent", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUIToggle.UnregisterToggleOffEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUIToggle::*)(::System::Action*)>(&::GlobalNamespace::KIDUIToggle::UnregisterToggleOffEvent)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x5a4b7d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIToggle*>(),
                        {"UnregisterToggleOffEvent", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUIToggle.SetColors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUIToggle::*)()>(&::GlobalNamespace::KIDUIToggle::SetColors)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5a4b364;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIToggle*>(),
                        {"SetColors", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUIToggle.Toggle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUIToggle::*)()>(&::GlobalNamespace::KIDUIToggle::Toggle)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5a4b06c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIToggle*>(),
                        {"Toggle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUIToggle.SetValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUIToggle::*)(bool)>(&::GlobalNamespace::KIDUIToggle::SetValue)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5a4bafc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIToggle*>(),
                        {"SetValue", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUIToggle.SetStateAndStartAnimation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUIToggle::*)(bool, bool)>(&::GlobalNamespace::KIDUIToggle::SetStateAndStartAnimation)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x5a4b8ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIToggle*>(),
                        {"SetStateAndStartAnimation", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUIToggle.AnimateSlider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::KIDUIToggle::*)()>(&::GlobalNamespace::KIDUIToggle::AnimateSlider)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5a4bb20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIToggle*>(),
                        {"AnimateSlider", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUIToggle.PostUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUIToggle::*)()>(&::GlobalNamespace::KIDUIToggle::PostUpdate)> {
  constexpr static std::size_t size = 0x520;
  constexpr static std::size_t addrs = 0x5a4bbb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIToggle*>(),
                        {"PostUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUIToggle.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUIToggle::*)()>(&::GlobalNamespace::KIDUIToggle::LateUpdate)> {
  constexpr static std::size_t size = 0x3f4;
  constexpr static std::size_t addrs = 0x5a4c188;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIToggle*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUIToggle.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUIToggle::*)()>(&::GlobalNamespace::KIDUIToggle::OnDisable)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x5a4c57c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIToggle*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUIToggle.SetDisabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUIToggle::*)(bool)>(&::GlobalNamespace::KIDUIToggle::SetDisabled)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5a4c710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIToggle*>(),
                        {"SetDisabled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUIToggle.SetNormal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUIToggle::*)()>(&::GlobalNamespace::KIDUIToggle::SetNormal)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5a4b16c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIToggle*>(),
                        {"SetNormal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUIToggle.SetSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUIToggle::*)()>(&::GlobalNamespace::KIDUIToggle::SetSelected)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5a4c8d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIToggle*>(),
                        {"SetSelected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUIToggle.SetHighlighted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUIToggle::*)()>(&::GlobalNamespace::KIDUIToggle::SetHighlighted)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5a4b0a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIToggle*>(),
                        {"SetHighlighted", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUIToggle.SetPressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUIToggle::*)()>(&::GlobalNamespace::KIDUIToggle::SetPressed)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5a4c980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIToggle*>(),
                        {"SetPressed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUIToggle.SetSwitchColors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUIToggle::*)(::UnityEngine::Color, ::UnityEngine::Color, ::UnityEngine::Color)>(&::GlobalNamespace::KIDUIToggle::SetSwitchColors)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5a4c7a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIToggle*>(),
                        {"SetSwitchColors", {}, {::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUIToggle.SetBorderSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUIToggle::*)(float_t)>(&::GlobalNamespace::KIDUIToggle::SetBorderSize)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5a4c814;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIToggle*>(),
                        {"SetBorderSize", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUIToggle.SetBackgroundActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUIToggle::*)(bool)>(&::GlobalNamespace::KIDUIToggle::SetBackgroundActive)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5a4c868;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIToggle*>(),
                        {"SetBackgroundActive", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUIToggle.SetBackgroundLocksActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUIToggle::*)(bool)>(&::GlobalNamespace::KIDUIToggle::SetBackgroundLocksActive)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5a4ca2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIToggle*>(),
                        {"SetBackgroundLocksActive", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUIToggle._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUIToggle::*)()>(&::GlobalNamespace::KIDUIToggle::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5a4cae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIToggle*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::KIDUIToggle::__cordl_internal_get__initValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initValue;
}
constexpr float_t const& GlobalNamespace::KIDUIToggle::__cordl_internal_get__initValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initValue;
}
constexpr void GlobalNamespace::KIDUIToggle::__cordl_internal_set__initValue(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____initValue = value;
}
constexpr ::UnityW<::UnityEngine::UI::Image>& GlobalNamespace::KIDUIToggle::__cordl_internal_get__borderImg()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____borderImg;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& GlobalNamespace::KIDUIToggle::__cordl_internal_get__borderImg() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____borderImg;
}
constexpr void GlobalNamespace::KIDUIToggle::__cordl_internal_set__borderImg(::UnityW<::UnityEngine::UI::Image>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____borderImg = value;
}
constexpr float_t& GlobalNamespace::KIDUIToggle::__cordl_internal_get__borderHeightRatio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____borderHeightRatio;
}
constexpr float_t const& GlobalNamespace::KIDUIToggle::__cordl_internal_get__borderHeightRatio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____borderHeightRatio;
}
constexpr void GlobalNamespace::KIDUIToggle::__cordl_internal_set__borderHeightRatio(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____borderHeightRatio = value;
}
constexpr ::UnityW<::UnityEngine::UI::Image>& GlobalNamespace::KIDUIToggle::__cordl_internal_get__fillImg()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fillImg;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& GlobalNamespace::KIDUIToggle::__cordl_internal_get__fillImg() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fillImg;
}
constexpr void GlobalNamespace::KIDUIToggle::__cordl_internal_set__fillImg(::UnityW<::UnityEngine::UI::Image>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fillImg = value;
}
constexpr ::UnityW<::UnityEngine::UI::Image>& GlobalNamespace::KIDUIToggle::__cordl_internal_get__fillInactiveImg()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fillInactiveImg;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& GlobalNamespace::KIDUIToggle::__cordl_internal_get__fillInactiveImg() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fillInactiveImg;
}
constexpr void GlobalNamespace::KIDUIToggle::__cordl_internal_set__fillInactiveImg(::UnityW<::UnityEngine::UI::Image>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fillInactiveImg = value;
}
constexpr ::UnityW<::UnityEngine::UI::Image>& GlobalNamespace::KIDUIToggle::__cordl_internal_get__handleImg()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handleImg;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& GlobalNamespace::KIDUIToggle::__cordl_internal_get__handleImg() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handleImg;
}
constexpr void GlobalNamespace::KIDUIToggle::__cordl_internal_set__handleImg(::UnityW<::UnityEngine::UI::Image>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____handleImg = value;
}
constexpr ::UnityW<::UnityEngine::UI::Image>& GlobalNamespace::KIDUIToggle::__cordl_internal_get__lockIcon()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lockIcon;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& GlobalNamespace::KIDUIToggle::__cordl_internal_get__lockIcon() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lockIcon;
}
constexpr void GlobalNamespace::KIDUIToggle::__cordl_internal_set__lockIcon(::UnityW<::UnityEngine::UI::Image>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lockIcon = value;
}
constexpr ::UnityW<::UnityEngine::UI::Image>& GlobalNamespace::KIDUIToggle::__cordl_internal_get__unlockIcon()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____unlockIcon;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& GlobalNamespace::KIDUIToggle::__cordl_internal_get__unlockIcon() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____unlockIcon;
}
constexpr void GlobalNamespace::KIDUIToggle::__cordl_internal_set__unlockIcon(::UnityW<::UnityEngine::UI::Image>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____unlockIcon = value;
}
constexpr ::UnityW<::UnityEngine::UI::Image>& GlobalNamespace::KIDUIToggle::__cordl_internal_get__handleLockIcon()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handleLockIcon;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& GlobalNamespace::KIDUIToggle::__cordl_internal_get__handleLockIcon() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handleLockIcon;
}
constexpr void GlobalNamespace::KIDUIToggle::__cordl_internal_set__handleLockIcon(::UnityW<::UnityEngine::UI::Image>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____handleLockIcon = value;
}
constexpr ::UnityW<::UnityEngine::UI::Image>& GlobalNamespace::KIDUIToggle::__cordl_internal_get__handleUnlockIcon()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handleUnlockIcon;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& GlobalNamespace::KIDUIToggle::__cordl_internal_get__handleUnlockIcon() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handleUnlockIcon;
}
constexpr void GlobalNamespace::KIDUIToggle::__cordl_internal_set__handleUnlockIcon(::UnityW<::UnityEngine::UI::Image>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____handleUnlockIcon = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::KIDUIToggle::__cordl_internal_get__lockActiveColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lockActiveColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::KIDUIToggle::__cordl_internal_get__lockActiveColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lockActiveColor;
}
constexpr void GlobalNamespace::KIDUIToggle::__cordl_internal_set__lockActiveColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lockActiveColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::KIDUIToggle::__cordl_internal_get__lockInactiveColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lockInactiveColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::KIDUIToggle::__cordl_internal_get__lockInactiveColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lockInactiveColor;
}
constexpr void GlobalNamespace::KIDUIToggle::__cordl_internal_set__lockInactiveColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lockInactiveColor = value;
}
constexpr ::UnityW<::UnityEngine::RectTransform>& GlobalNamespace::KIDUIToggle::__cordl_internal_get__borderImgRef()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____borderImgRef;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& GlobalNamespace::KIDUIToggle::__cordl_internal_get__borderImgRef() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____borderImgRef;
}
constexpr void GlobalNamespace::KIDUIToggle::__cordl_internal_set__borderImgRef(::UnityW<::UnityEngine::RectTransform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____borderImgRef = value;
}
constexpr ::UnityW<::GlobalNamespace::UXSettings>& GlobalNamespace::KIDUIToggle::__cordl_internal_get__cbUXSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cbUXSettings;
}
constexpr ::UnityW<::GlobalNamespace::UXSettings> const& GlobalNamespace::KIDUIToggle::__cordl_internal_get__cbUXSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cbUXSettings;
}
constexpr void GlobalNamespace::KIDUIToggle::__cordl_internal_set__cbUXSettings(::UnityW<::GlobalNamespace::UXSettings>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cbUXSettings = value;
}
constexpr float_t& GlobalNamespace::KIDUIToggle::__cordl_internal_get__animationDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____animationDuration;
}
constexpr float_t const& GlobalNamespace::KIDUIToggle::__cordl_internal_get__animationDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____animationDuration;
}
constexpr void GlobalNamespace::KIDUIToggle::__cordl_internal_set__animationDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____animationDuration = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::KIDUIToggle::__cordl_internal_get__toggleEase()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____toggleEase;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::KIDUIToggle::__cordl_internal_get__toggleEase() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____toggleEase;
}
constexpr void GlobalNamespace::KIDUIToggle::__cordl_internal_set__toggleEase(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____toggleEase = value;
}
constexpr ::UnityEngine::UI::ColorBlock& GlobalNamespace::KIDUIToggle::__cordl_internal_get__fillColors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fillColors;
}
constexpr ::UnityEngine::UI::ColorBlock const& GlobalNamespace::KIDUIToggle::__cordl_internal_get__fillColors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____fillColors;
}
constexpr void GlobalNamespace::KIDUIToggle::__cordl_internal_set__fillColors(::UnityEngine::UI::ColorBlock  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____fillColors = value;
}
constexpr ::UnityEngine::UI::ColorBlock& GlobalNamespace::KIDUIToggle::__cordl_internal_get__borderColors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____borderColors;
}
constexpr ::UnityEngine::UI::ColorBlock const& GlobalNamespace::KIDUIToggle::__cordl_internal_get__borderColors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____borderColors;
}
constexpr void GlobalNamespace::KIDUIToggle::__cordl_internal_set__borderColors(::UnityEngine::UI::ColorBlock  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____borderColors = value;
}
constexpr float_t& GlobalNamespace::KIDUIToggle::__cordl_internal_get__normalBorderSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____normalBorderSize;
}
constexpr float_t const& GlobalNamespace::KIDUIToggle::__cordl_internal_get__normalBorderSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____normalBorderSize;
}
constexpr void GlobalNamespace::KIDUIToggle::__cordl_internal_set__normalBorderSize(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____normalBorderSize = value;
}
constexpr float_t& GlobalNamespace::KIDUIToggle::__cordl_internal_get__disabledBorderSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disabledBorderSize;
}
constexpr float_t const& GlobalNamespace::KIDUIToggle::__cordl_internal_get__disabledBorderSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disabledBorderSize;
}
constexpr void GlobalNamespace::KIDUIToggle::__cordl_internal_set__disabledBorderSize(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____disabledBorderSize = value;
}
constexpr float_t& GlobalNamespace::KIDUIToggle::__cordl_internal_get__highlightedBorderSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____highlightedBorderSize;
}
constexpr float_t const& GlobalNamespace::KIDUIToggle::__cordl_internal_get__highlightedBorderSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____highlightedBorderSize;
}
constexpr void GlobalNamespace::KIDUIToggle::__cordl_internal_set__highlightedBorderSize(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____highlightedBorderSize = value;
}
constexpr float_t& GlobalNamespace::KIDUIToggle::__cordl_internal_get__pressedBorderSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pressedBorderSize;
}
constexpr float_t const& GlobalNamespace::KIDUIToggle::__cordl_internal_get__pressedBorderSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____pressedBorderSize;
}
constexpr void GlobalNamespace::KIDUIToggle::__cordl_internal_set__pressedBorderSize(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____pressedBorderSize = value;
}
constexpr float_t& GlobalNamespace::KIDUIToggle::__cordl_internal_get__selectedBorderSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selectedBorderSize;
}
constexpr float_t const& GlobalNamespace::KIDUIToggle::__cordl_internal_get__selectedBorderSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____selectedBorderSize;
}
constexpr void GlobalNamespace::KIDUIToggle::__cordl_internal_set__selectedBorderSize(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____selectedBorderSize = value;
}
constexpr ::UnityEngine::UI::ColorBlock& GlobalNamespace::KIDUIToggle::__cordl_internal_get__handleColors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handleColors;
}
constexpr ::UnityEngine::UI::ColorBlock const& GlobalNamespace::KIDUIToggle::__cordl_internal_get__handleColors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____handleColors;
}
constexpr void GlobalNamespace::KIDUIToggle::__cordl_internal_set__handleColors(::UnityEngine::UI::ColorBlock  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____handleColors = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::KIDUIToggle::__cordl_internal_get__onToggleOn()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onToggleOn;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::KIDUIToggle::__cordl_internal_get__onToggleOn() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onToggleOn;
}
constexpr void GlobalNamespace::KIDUIToggle::__cordl_internal_set__onToggleOn(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onToggleOn = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::KIDUIToggle::__cordl_internal_get__onToggleOff()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onToggleOff;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::KIDUIToggle::__cordl_internal_get__onToggleOff() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onToggleOff;
}
constexpr void GlobalNamespace::KIDUIToggle::__cordl_internal_set__onToggleOff(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onToggleOff = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& GlobalNamespace::KIDUIToggle::__cordl_internal_get__onToggleChanged()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onToggleChanged;
}
constexpr ::UnityEngine::Events::UnityEvent* const& GlobalNamespace::KIDUIToggle::__cordl_internal_get__onToggleChanged() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onToggleChanged;
}
constexpr void GlobalNamespace::KIDUIToggle::__cordl_internal_set__onToggleChanged(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onToggleChanged = value;
}
constexpr bool& GlobalNamespace::KIDUIToggle::__cordl_internal_get__previousValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____previousValue;
}
constexpr bool const& GlobalNamespace::KIDUIToggle::__cordl_internal_get__previousValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____previousValue;
}
constexpr void GlobalNamespace::KIDUIToggle::__cordl_internal_set__previousValue(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____previousValue = value;
}
constexpr bool& GlobalNamespace::KIDUIToggle::__cordl_internal_get__isDisabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isDisabled;
}
constexpr bool const& GlobalNamespace::KIDUIToggle::__cordl_internal_get__isDisabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isDisabled;
}
constexpr void GlobalNamespace::KIDUIToggle::__cordl_internal_set__isDisabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isDisabled = value;
}
constexpr ::UnityEngine::Coroutine*& GlobalNamespace::KIDUIToggle::__cordl_internal_get__animationCoroutine()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____animationCoroutine;
}
constexpr ::UnityEngine::Coroutine* const& GlobalNamespace::KIDUIToggle::__cordl_internal_get__animationCoroutine() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____animationCoroutine;
}
constexpr void GlobalNamespace::KIDUIToggle::__cordl_internal_set__animationCoroutine(::UnityEngine::Coroutine*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____animationCoroutine = value;
}
constexpr bool& GlobalNamespace::KIDUIToggle::__cordl_internal_get__CurrentValue_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CurrentValue_k__BackingField;
}
constexpr bool const& GlobalNamespace::KIDUIToggle::__cordl_internal_get__CurrentValue_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CurrentValue_k__BackingField;
}
constexpr void GlobalNamespace::KIDUIToggle::__cordl_internal_set__CurrentValue_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CurrentValue_k__BackingField = value;
}
constexpr ::UnityW<::GlobalNamespace::ControllerBehaviour>& GlobalNamespace::KIDUIToggle::__cordl_internal_get_controllerBehaviour()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___controllerBehaviour;
}
constexpr ::UnityW<::GlobalNamespace::ControllerBehaviour> const& GlobalNamespace::KIDUIToggle::__cordl_internal_get_controllerBehaviour() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___controllerBehaviour;
}
constexpr void GlobalNamespace::KIDUIToggle::__cordl_internal_set_controllerBehaviour(::UnityW<::GlobalNamespace::ControllerBehaviour>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___controllerBehaviour = value;
}
constexpr bool& GlobalNamespace::KIDUIToggle::__cordl_internal_get_inside()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inside;
}
constexpr bool const& GlobalNamespace::KIDUIToggle::__cordl_internal_get_inside() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___inside;
}
constexpr void GlobalNamespace::KIDUIToggle::__cordl_internal_set_inside(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___inside = value;
}
inline void GlobalNamespace::KIDUIToggle::setStaticF__triggeredThisFrame(bool  value)  {
::cordl_internals::setStaticField<bool, "_triggeredThisFrame", ::GlobalNamespace::KIDUIToggle*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::KIDUIToggle::getStaticF__triggeredThisFrame()  {
return ::cordl_internals::getStaticField<bool, "_triggeredThisFrame", ::GlobalNamespace::KIDUIToggle*>();
}
inline void GlobalNamespace::KIDUIToggle::setStaticF__canTrigger(bool  value)  {
::cordl_internals::setStaticField<bool, "_canTrigger", ::GlobalNamespace::KIDUIToggle*>(std::forward<bool>(value));
}
inline bool GlobalNamespace::KIDUIToggle::getStaticF__canTrigger()  {
return ::cordl_internals::getStaticField<bool, "_canTrigger", ::GlobalNamespace::KIDUIToggle*>();
}
inline bool GlobalNamespace::KIDUIToggle::get_CurrentValue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIToggle*>(),
                        {"get_CurrentValue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::KIDUIToggle::set_CurrentValue(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIToggle*>(),
                        {"set_CurrentValue", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::KIDUIToggle::get_IsOn()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIToggle*>(),
                        {"get_IsOn", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::KIDUIToggle::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::KIDUIToggle*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KIDUIToggle::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::KIDUIToggle*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KIDUIToggle::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::KIDUIToggle*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KIDUIToggle::OnPointerDown(::UnityEngine::EventSystems::PointerEventData*  eventData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::KIDUIToggle*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventData);
}
inline void GlobalNamespace::KIDUIToggle::OnPointerEnter(::UnityEngine::EventSystems::PointerEventData*  pointerEventData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::KIDUIToggle*>(), 34}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pointerEventData);
}
inline void GlobalNamespace::KIDUIToggle::OnPointerExit(::UnityEngine::EventSystems::PointerEventData*  pointerEventData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::KIDUIToggle*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pointerEventData);
}
inline void GlobalNamespace::KIDUIToggle::SetupToggleComponent()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::KIDUIToggle*>(), 56}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KIDUIToggle::SetupSliderComponent()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::KIDUIToggle*>(), 57}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KIDUIToggle::RegisterOnChangeEvent(::System::Action*  onChange)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIToggle*>(),
                        {"RegisterOnChangeEvent", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, onChange);
}
inline void GlobalNamespace::KIDUIToggle::UnregisterOnChangeEvent(::System::Action*  onChange)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIToggle*>(),
                        {"UnregisterOnChangeEvent", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, onChange);
}
inline void GlobalNamespace::KIDUIToggle::RegisterToggleOnEvent(::System::Action*  onToggle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIToggle*>(),
                        {"RegisterToggleOnEvent", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, onToggle);
}
inline void GlobalNamespace::KIDUIToggle::UnregisterToggleOnEvent(::System::Action*  onToggle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIToggle*>(),
                        {"UnregisterToggleOnEvent", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, onToggle);
}
inline void GlobalNamespace::KIDUIToggle::RegisterToggleOffEvent(::System::Action*  onToggle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIToggle*>(),
                        {"RegisterToggleOffEvent", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, onToggle);
}
inline void GlobalNamespace::KIDUIToggle::UnregisterToggleOffEvent(::System::Action*  onToggle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIToggle*>(),
                        {"UnregisterToggleOffEvent", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, onToggle);
}
inline void GlobalNamespace::KIDUIToggle::SetColors()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIToggle*>(),
                        {"SetColors", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KIDUIToggle::Toggle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIToggle*>(),
                        {"Toggle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KIDUIToggle::SetValue(bool  newValue)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIToggle*>(),
                        {"SetValue", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newValue);
}
inline void GlobalNamespace::KIDUIToggle::SetStateAndStartAnimation(bool  state, bool  skipAnim)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIToggle*>(),
                        {"SetStateAndStartAnimation", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state, skipAnim);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::KIDUIToggle::AnimateSlider()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIToggle*>(),
                        {"AnimateSlider", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void GlobalNamespace::KIDUIToggle::PostUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIToggle*>(),
                        {"PostUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KIDUIToggle::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIToggle*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KIDUIToggle::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIToggle*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KIDUIToggle::SetDisabled(bool  isLockedButEnabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIToggle*>(),
                        {"SetDisabled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isLockedButEnabled);
}
inline void GlobalNamespace::KIDUIToggle::SetNormal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIToggle*>(),
                        {"SetNormal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KIDUIToggle::SetSelected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIToggle*>(),
                        {"SetSelected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KIDUIToggle::SetHighlighted()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIToggle*>(),
                        {"SetHighlighted", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KIDUIToggle::SetPressed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIToggle*>(),
                        {"SetPressed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KIDUIToggle::SetSwitchColors(::UnityEngine::Color  borderColor, ::UnityEngine::Color  handleColor, ::UnityEngine::Color  fillColor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIToggle*>(),
                        {"SetSwitchColors", {}, {::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, borderColor, handleColor, fillColor);
}
inline void GlobalNamespace::KIDUIToggle::SetBorderSize(float_t  borderScale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIToggle*>(),
                        {"SetBorderSize", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, borderScale);
}
inline void GlobalNamespace::KIDUIToggle::SetBackgroundActive(bool  isActive)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIToggle*>(),
                        {"SetBackgroundActive", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isActive);
}
inline void GlobalNamespace::KIDUIToggle::SetBackgroundLocksActive(bool  isActive)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIToggle*>(),
                        {"SetBackgroundLocksActive", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isActive);
}
inline void GlobalNamespace::KIDUIToggle::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIToggle*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::KIDUIToggle* GlobalNamespace::KIDUIToggle::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::KIDUIToggle*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::KIDUIToggle::KIDUIToggle()   {
}
//  Writing Method size for method: ::GlobalNamespace::KIDUIToggle__AnimateSlider_d__54._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUIToggle__AnimateSlider_d__54::*)(int32_t)>(&::GlobalNamespace::KIDUIToggle__AnimateSlider_d__54::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5a4bb8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIToggle__AnimateSlider_d__54*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUIToggle__AnimateSlider_d__54.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUIToggle__AnimateSlider_d__54::*)()>(&::GlobalNamespace::KIDUIToggle__AnimateSlider_d__54::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a4cc38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIToggle__AnimateSlider_d__54*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUIToggle__AnimateSlider_d__54.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::KIDUIToggle__AnimateSlider_d__54::*)()>(&::GlobalNamespace::KIDUIToggle__AnimateSlider_d__54::MoveNext)> {
  constexpr static std::size_t size = 0x3b0;
  constexpr static std::size_t addrs = 0x5a4cc3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIToggle__AnimateSlider_d__54*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUIToggle__AnimateSlider_d__54.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::KIDUIToggle__AnimateSlider_d__54::*)()>(&::GlobalNamespace::KIDUIToggle__AnimateSlider_d__54::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a4cfec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIToggle__AnimateSlider_d__54*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUIToggle__AnimateSlider_d__54.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUIToggle__AnimateSlider_d__54::*)()>(&::GlobalNamespace::KIDUIToggle__AnimateSlider_d__54::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5a4cff4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIToggle__AnimateSlider_d__54*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUIToggle__AnimateSlider_d__54.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::GlobalNamespace::KIDUIToggle__AnimateSlider_d__54::*)()>(&::GlobalNamespace::KIDUIToggle__AnimateSlider_d__54::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a4d02c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIToggle__AnimateSlider_d__54*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::KIDUIToggle__AnimateSlider_d__54::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::KIDUIToggle__AnimateSlider_d__54::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void GlobalNamespace::KIDUIToggle__AnimateSlider_d__54::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& GlobalNamespace::KIDUIToggle__AnimateSlider_d__54::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& GlobalNamespace::KIDUIToggle__AnimateSlider_d__54::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void GlobalNamespace::KIDUIToggle__AnimateSlider_d__54::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::UnityW<::GlobalNamespace::KIDUIToggle>& GlobalNamespace::KIDUIToggle__AnimateSlider_d__54::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::KIDUIToggle> const& GlobalNamespace::KIDUIToggle__AnimateSlider_d__54::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::KIDUIToggle__AnimateSlider_d__54::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::KIDUIToggle>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr float_t& GlobalNamespace::KIDUIToggle__AnimateSlider_d__54::__cordl_internal_get__startValue_5__2()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startValue_5__2;
}
constexpr float_t const& GlobalNamespace::KIDUIToggle__AnimateSlider_d__54::__cordl_internal_get__startValue_5__2() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startValue_5__2;
}
constexpr void GlobalNamespace::KIDUIToggle__AnimateSlider_d__54::__cordl_internal_set__startValue_5__2(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____startValue_5__2 = value;
}
constexpr float_t& GlobalNamespace::KIDUIToggle__AnimateSlider_d__54::__cordl_internal_get__endValue_5__3()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____endValue_5__3;
}
constexpr float_t const& GlobalNamespace::KIDUIToggle__AnimateSlider_d__54::__cordl_internal_get__endValue_5__3() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____endValue_5__3;
}
constexpr void GlobalNamespace::KIDUIToggle__AnimateSlider_d__54::__cordl_internal_set__endValue_5__3(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____endValue_5__3 = value;
}
constexpr float_t& GlobalNamespace::KIDUIToggle__AnimateSlider_d__54::__cordl_internal_get__time_5__4()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____time_5__4;
}
constexpr float_t const& GlobalNamespace::KIDUIToggle__AnimateSlider_d__54::__cordl_internal_get__time_5__4() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____time_5__4;
}
constexpr void GlobalNamespace::KIDUIToggle__AnimateSlider_d__54::__cordl_internal_set__time_5__4(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____time_5__4 = value;
}
inline void GlobalNamespace::KIDUIToggle__AnimateSlider_d__54::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIToggle__AnimateSlider_d__54*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::KIDUIToggle__AnimateSlider_d__54::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIToggle__AnimateSlider_d__54*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::KIDUIToggle__AnimateSlider_d__54::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIToggle__AnimateSlider_d__54*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::KIDUIToggle__AnimateSlider_d__54::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIToggle__AnimateSlider_d__54*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void GlobalNamespace::KIDUIToggle__AnimateSlider_d__54::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIToggle__AnimateSlider_d__54*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::KIDUIToggle__AnimateSlider_d__54::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIToggle__AnimateSlider_d__54*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::GlobalNamespace::KIDUIToggle__AnimateSlider_d__54* GlobalNamespace::KIDUIToggle__AnimateSlider_d__54::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::KIDUIToggle__AnimateSlider_d__54*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  GlobalNamespace::KIDUIToggle__AnimateSlider_d__54::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* GlobalNamespace::KIDUIToggle__AnimateSlider_d__54::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  GlobalNamespace::KIDUIToggle__AnimateSlider_d__54::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::KIDUIToggle__AnimateSlider_d__54::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  GlobalNamespace::KIDUIToggle__AnimateSlider_d__54::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::KIDUIToggle__AnimateSlider_d__54::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::KIDUIToggle__AnimateSlider_d__54::KIDUIToggle__AnimateSlider_d__54()   {
}
//  Writing Method size for method: ::GlobalNamespace::KIDUIToggle___c__DisplayClass49_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUIToggle___c__DisplayClass49_0::*)()>(&::GlobalNamespace::KIDUIToggle___c__DisplayClass49_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a4b8a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIToggle___c__DisplayClass49_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUIToggle___c__DisplayClass49_0._UnregisterToggleOffEvent_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUIToggle___c__DisplayClass49_0::*)()>(&::GlobalNamespace::KIDUIToggle___c__DisplayClass49_0::_UnregisterToggleOffEvent_b__0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5a4cc1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIToggle___c__DisplayClass49_0*>(),
                        {"<UnregisterToggleOffEvent>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action*& GlobalNamespace::KIDUIToggle___c__DisplayClass49_0::__cordl_internal_get_onToggle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onToggle;
}
constexpr ::System::Action* const& GlobalNamespace::KIDUIToggle___c__DisplayClass49_0::__cordl_internal_get_onToggle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onToggle;
}
constexpr void GlobalNamespace::KIDUIToggle___c__DisplayClass49_0::__cordl_internal_set_onToggle(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onToggle = value;
}
inline void GlobalNamespace::KIDUIToggle___c__DisplayClass49_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIToggle___c__DisplayClass49_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KIDUIToggle___c__DisplayClass49_0::_UnregisterToggleOffEvent_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIToggle___c__DisplayClass49_0*>(),
                        {"<UnregisterToggleOffEvent>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::KIDUIToggle___c__DisplayClass49_0* GlobalNamespace::KIDUIToggle___c__DisplayClass49_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::KIDUIToggle___c__DisplayClass49_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::KIDUIToggle___c__DisplayClass49_0::KIDUIToggle___c__DisplayClass49_0()   {
}
//  Writing Method size for method: ::GlobalNamespace::KIDUIToggle___c__DisplayClass48_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUIToggle___c__DisplayClass48_0::*)()>(&::GlobalNamespace::KIDUIToggle___c__DisplayClass48_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a4b7cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIToggle___c__DisplayClass48_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUIToggle___c__DisplayClass48_0._RegisterToggleOffEvent_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUIToggle___c__DisplayClass48_0::*)()>(&::GlobalNamespace::KIDUIToggle___c__DisplayClass48_0::_RegisterToggleOffEvent_b__0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5a4cc00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIToggle___c__DisplayClass48_0*>(),
                        {"<RegisterToggleOffEvent>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action*& GlobalNamespace::KIDUIToggle___c__DisplayClass48_0::__cordl_internal_get_onToggle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onToggle;
}
constexpr ::System::Action* const& GlobalNamespace::KIDUIToggle___c__DisplayClass48_0::__cordl_internal_get_onToggle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onToggle;
}
constexpr void GlobalNamespace::KIDUIToggle___c__DisplayClass48_0::__cordl_internal_set_onToggle(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onToggle = value;
}
inline void GlobalNamespace::KIDUIToggle___c__DisplayClass48_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIToggle___c__DisplayClass48_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KIDUIToggle___c__DisplayClass48_0::_RegisterToggleOffEvent_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIToggle___c__DisplayClass48_0*>(),
                        {"<RegisterToggleOffEvent>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::KIDUIToggle___c__DisplayClass48_0* GlobalNamespace::KIDUIToggle___c__DisplayClass48_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::KIDUIToggle___c__DisplayClass48_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::KIDUIToggle___c__DisplayClass48_0::KIDUIToggle___c__DisplayClass48_0()   {
}
//  Writing Method size for method: ::GlobalNamespace::KIDUIToggle___c__DisplayClass47_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUIToggle___c__DisplayClass47_0::*)()>(&::GlobalNamespace::KIDUIToggle___c__DisplayClass47_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a4b6f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIToggle___c__DisplayClass47_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUIToggle___c__DisplayClass47_0._UnregisterToggleOnEvent_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUIToggle___c__DisplayClass47_0::*)()>(&::GlobalNamespace::KIDUIToggle___c__DisplayClass47_0::_UnregisterToggleOnEvent_b__0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5a4cbe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIToggle___c__DisplayClass47_0*>(),
                        {"<UnregisterToggleOnEvent>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action*& GlobalNamespace::KIDUIToggle___c__DisplayClass47_0::__cordl_internal_get_onToggle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onToggle;
}
constexpr ::System::Action* const& GlobalNamespace::KIDUIToggle___c__DisplayClass47_0::__cordl_internal_get_onToggle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onToggle;
}
constexpr void GlobalNamespace::KIDUIToggle___c__DisplayClass47_0::__cordl_internal_set_onToggle(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onToggle = value;
}
inline void GlobalNamespace::KIDUIToggle___c__DisplayClass47_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIToggle___c__DisplayClass47_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KIDUIToggle___c__DisplayClass47_0::_UnregisterToggleOnEvent_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIToggle___c__DisplayClass47_0*>(),
                        {"<UnregisterToggleOnEvent>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::KIDUIToggle___c__DisplayClass47_0* GlobalNamespace::KIDUIToggle___c__DisplayClass47_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::KIDUIToggle___c__DisplayClass47_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::KIDUIToggle___c__DisplayClass47_0::KIDUIToggle___c__DisplayClass47_0()   {
}
//  Writing Method size for method: ::GlobalNamespace::KIDUIToggle___c__DisplayClass46_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUIToggle___c__DisplayClass46_0::*)()>(&::GlobalNamespace::KIDUIToggle___c__DisplayClass46_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a4b61c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIToggle___c__DisplayClass46_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUIToggle___c__DisplayClass46_0._RegisterToggleOnEvent_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUIToggle___c__DisplayClass46_0::*)()>(&::GlobalNamespace::KIDUIToggle___c__DisplayClass46_0::_RegisterToggleOnEvent_b__0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5a4cbc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIToggle___c__DisplayClass46_0*>(),
                        {"<RegisterToggleOnEvent>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action*& GlobalNamespace::KIDUIToggle___c__DisplayClass46_0::__cordl_internal_get_onToggle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onToggle;
}
constexpr ::System::Action* const& GlobalNamespace::KIDUIToggle___c__DisplayClass46_0::__cordl_internal_get_onToggle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onToggle;
}
constexpr void GlobalNamespace::KIDUIToggle___c__DisplayClass46_0::__cordl_internal_set_onToggle(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onToggle = value;
}
inline void GlobalNamespace::KIDUIToggle___c__DisplayClass46_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIToggle___c__DisplayClass46_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KIDUIToggle___c__DisplayClass46_0::_RegisterToggleOnEvent_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIToggle___c__DisplayClass46_0*>(),
                        {"<RegisterToggleOnEvent>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::KIDUIToggle___c__DisplayClass46_0* GlobalNamespace::KIDUIToggle___c__DisplayClass46_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::KIDUIToggle___c__DisplayClass46_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::KIDUIToggle___c__DisplayClass46_0::KIDUIToggle___c__DisplayClass46_0()   {
}
//  Writing Method size for method: ::GlobalNamespace::KIDUIToggle___c__DisplayClass45_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUIToggle___c__DisplayClass45_0::*)()>(&::GlobalNamespace::KIDUIToggle___c__DisplayClass45_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a4b544;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIToggle___c__DisplayClass45_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUIToggle___c__DisplayClass45_0._UnregisterOnChangeEvent_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUIToggle___c__DisplayClass45_0::*)()>(&::GlobalNamespace::KIDUIToggle___c__DisplayClass45_0::_UnregisterOnChangeEvent_b__0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5a4cbac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIToggle___c__DisplayClass45_0*>(),
                        {"<UnregisterOnChangeEvent>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action*& GlobalNamespace::KIDUIToggle___c__DisplayClass45_0::__cordl_internal_get_onChange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onChange;
}
constexpr ::System::Action* const& GlobalNamespace::KIDUIToggle___c__DisplayClass45_0::__cordl_internal_get_onChange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onChange;
}
constexpr void GlobalNamespace::KIDUIToggle___c__DisplayClass45_0::__cordl_internal_set_onChange(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onChange = value;
}
inline void GlobalNamespace::KIDUIToggle___c__DisplayClass45_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIToggle___c__DisplayClass45_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KIDUIToggle___c__DisplayClass45_0::_UnregisterOnChangeEvent_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIToggle___c__DisplayClass45_0*>(),
                        {"<UnregisterOnChangeEvent>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::KIDUIToggle___c__DisplayClass45_0* GlobalNamespace::KIDUIToggle___c__DisplayClass45_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::KIDUIToggle___c__DisplayClass45_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::KIDUIToggle___c__DisplayClass45_0::KIDUIToggle___c__DisplayClass45_0()   {
}
//  Writing Method size for method: ::GlobalNamespace::KIDUIToggle___c__DisplayClass44_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUIToggle___c__DisplayClass44_0::*)()>(&::GlobalNamespace::KIDUIToggle___c__DisplayClass44_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a4b46c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIToggle___c__DisplayClass44_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::KIDUIToggle___c__DisplayClass44_0._RegisterOnChangeEvent_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::KIDUIToggle___c__DisplayClass44_0::*)()>(&::GlobalNamespace::KIDUIToggle___c__DisplayClass44_0::_RegisterOnChangeEvent_b__0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5a4cb90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIToggle___c__DisplayClass44_0*>(),
                        {"<RegisterOnChangeEvent>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Action*& GlobalNamespace::KIDUIToggle___c__DisplayClass44_0::__cordl_internal_get_onChange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onChange;
}
constexpr ::System::Action* const& GlobalNamespace::KIDUIToggle___c__DisplayClass44_0::__cordl_internal_get_onChange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___onChange;
}
constexpr void GlobalNamespace::KIDUIToggle___c__DisplayClass44_0::__cordl_internal_set_onChange(::System::Action*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___onChange = value;
}
inline void GlobalNamespace::KIDUIToggle___c__DisplayClass44_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIToggle___c__DisplayClass44_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::KIDUIToggle___c__DisplayClass44_0::_RegisterOnChangeEvent_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::KIDUIToggle___c__DisplayClass44_0*>(),
                        {"<RegisterOnChangeEvent>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::KIDUIToggle___c__DisplayClass44_0* GlobalNamespace::KIDUIToggle___c__DisplayClass44_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::KIDUIToggle___c__DisplayClass44_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::KIDUIToggle___c__DisplayClass44_0::KIDUIToggle___c__DisplayClass44_0()   {
}
