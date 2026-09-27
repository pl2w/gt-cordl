#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Interactables/Visuals/XRTintInteractableVisual.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/Visuals/zzzz__XRTintInteractableVisual_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/Visuals/zzzz__XRTintInteractableVisual_ShaderPropertyLookup_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__IXRHoverInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__IXRInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__IXRSelectInteractable_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__HoverEnterEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__HoverExitEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__SelectEnterEventArgs_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__SelectExitEventArgs_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual.get_tintColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual::get_tintColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb4a0db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual*>(),
                        {"get_tintColor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual.set_tintColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual::*)(::UnityEngine::Color)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual::set_tintColor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xb4a0dbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual*>(),
                        {"set_tintColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual.get_tintOnHover
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual::get_tintOnHover)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4a0dc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual*>(),
                        {"get_tintOnHover", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual.set_tintOnHover
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual::set_tintOnHover)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4a0dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual*>(),
                        {"set_tintOnHover", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual.get_tintOnSelection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual::get_tintOnSelection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4a0dd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual*>(),
                        {"get_tintOnSelection", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual.set_tintOnSelection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual::set_tintOnSelection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4a0de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual*>(),
                        {"set_tintOnSelection", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual.get_tintRenderers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>* (::UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual::get_tintRenderers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4a0de8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual*>(),
                        {"get_tintRenderers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual.set_tintRenderers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual::*)(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual::set_tintRenderers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb4a0df0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual*>(),
                        {"set_tintRenderers", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual::Awake)> {
  constexpr static std::size_t size = 0x770;
  constexpr static std::size_t addrs = 0xb4a0df8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual::OnDestroy)> {
  constexpr static std::size_t size = 0x42c;
  constexpr static std::size_t addrs = 0xb4a1568;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual.SetTint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual::*)(bool)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual::SetTint)> {
  constexpr static std::size_t size = 0x508;
  constexpr static std::size_t addrs = 0xb4a1994;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual.GetEmissionEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual::GetEmissionEnabled)> {
  constexpr static std::size_t size = 0x3f4;
  constexpr static std::size_t addrs = 0xb4a1e9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual*>(),
                    {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual.OnFirstHoverEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual::*)(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual::OnFirstHoverEntered)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb4a2290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual*>(),
                        {"OnFirstHoverEntered", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual.OnLastHoverExited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual::*)(::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual::OnLastHoverExited)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xb4a22ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual*>(),
                        {"OnLastHoverExited", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual.OnFirstSelectEntered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual::*)(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual::OnFirstSelectEntered)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xb4a2390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual*>(),
                        {"OnFirstSelectEntered", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual.OnLastSelectExited
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual::*)(::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*)>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual::OnLastSelectExited)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xb4a23ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual*>(),
                        {"OnLastSelectExited", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual::*)()>(&::UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xb4a2490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Color& UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual::__cordl_internal_get_m_TintColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TintColor;
}
constexpr ::UnityEngine::Color const& UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual::__cordl_internal_get_m_TintColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TintColor;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual::__cordl_internal_set_m_TintColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TintColor = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual::__cordl_internal_get_m_TintOnHover()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TintOnHover;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual::__cordl_internal_get_m_TintOnHover() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TintOnHover;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual::__cordl_internal_set_m_TintOnHover(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TintOnHover = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual::__cordl_internal_get_m_TintOnSelection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TintOnSelection;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual::__cordl_internal_get_m_TintOnSelection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TintOnSelection;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual::__cordl_internal_set_m_TintOnSelection(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TintOnSelection = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*& UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual::__cordl_internal_get_m_TintRenderers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TintRenderers;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>* const& UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual::__cordl_internal_get_m_TintRenderers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TintRenderers;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual::__cordl_internal_set_m_TintRenderers(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TintRenderers = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*& UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual::__cordl_internal_get_m_Interactable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Interactable;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable* const& UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual::__cordl_internal_get_m_Interactable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_Interactable;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual::__cordl_internal_set_m_Interactable(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_Interactable = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*& UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual::__cordl_internal_get_m_HoverInteractable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HoverInteractable;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable* const& UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual::__cordl_internal_get_m_HoverInteractable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HoverInteractable;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual::__cordl_internal_set_m_HoverInteractable(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HoverInteractable = value;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*& UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual::__cordl_internal_get_m_SelectInteractable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SelectInteractable;
}
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable* const& UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual::__cordl_internal_get_m_SelectInteractable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_SelectInteractable;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual::__cordl_internal_set_m_SelectInteractable(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_SelectInteractable = value;
}
constexpr ::UnityEngine::MaterialPropertyBlock*& UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual::__cordl_internal_get_m_TintPropertyBlock()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TintPropertyBlock;
}
constexpr ::UnityEngine::MaterialPropertyBlock* const& UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual::__cordl_internal_get_m_TintPropertyBlock() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_TintPropertyBlock;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual::__cordl_internal_set_m_TintPropertyBlock(::UnityEngine::MaterialPropertyBlock*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_TintPropertyBlock = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual::__cordl_internal_get_m_EmissionEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EmissionEnabled;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual::__cordl_internal_get_m_EmissionEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_EmissionEnabled;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual::__cordl_internal_set_m_EmissionEnabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_EmissionEnabled = value;
}
constexpr bool& UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual::__cordl_internal_get_m_HasLoggedMaterialInstance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HasLoggedMaterialInstance;
}
constexpr bool const& UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual::__cordl_internal_get_m_HasLoggedMaterialInstance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_HasLoggedMaterialInstance;
}
constexpr void UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual::__cordl_internal_set_m_HasLoggedMaterialInstance(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_HasLoggedMaterialInstance = value;
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual::setStaticF_s_Materials(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*, "s_Materials", ::UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual*>(std::forward<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*>(value));
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>* UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual::getStaticF_s_Materials()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*, "s_Materials", ::UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual*>();
}
inline ::UnityEngine::Color UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual::get_tintColor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual*>(),
                        {"get_tintColor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual::set_tintColor(::UnityEngine::Color  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual*>(),
                        {"set_tintColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual::get_tintOnHover()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual*>(),
                        {"get_tintOnHover", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual::set_tintOnHover(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual*>(),
                        {"set_tintOnHover", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual::get_tintOnSelection()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual*>(),
                        {"get_tintOnSelection", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual::set_tintOnSelection(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual*>(),
                        {"set_tintOnSelection", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>* UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual::get_tintRenderers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual*>(),
                        {"get_tintRenderers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual::set_tintRenderers(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual*>(),
                        {"set_tintRenderers", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Renderer>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual::SetTint(bool  on)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, on);
}
inline bool UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual::GetEmissionEnabled()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual::OnFirstHoverEntered(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual*>(),
                        {"OnFirstHoverEntered", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual::OnLastHoverExited(::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual*>(),
                        {"OnLastHoverExited", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual::OnFirstSelectEntered(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual*>(),
                        {"OnFirstSelectEntered", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual::OnLastSelectExited(::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual*>(),
                        {"OnLastSelectExited", {}, {::i2c::type_of<::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, args);
}
inline void UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual* UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::Visuals::XRTintInteractableVisual::XRTintInteractableVisual()   {
}
