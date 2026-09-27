#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/Selectables/ModioUIToggleDeactivateWhenPanelLostFocus.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Modio/Unity/UI/Components/Selectables/zzzz__ModioUIToggleDeactivateWhenPanelLostFocus_def.hpp"
#include "Modio/Unity/UI/Panels/zzzz__ModioPanelBase_def.hpp"
#include "UnityEngine/UI/zzzz__Toggle_def.hpp"
//  Writing Method size for method: ::Modio::Unity::UI::Components::Selectables::ModioUIToggleDeactivateWhenPanelLostFocus.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::Selectables::ModioUIToggleDeactivateWhenPanelLostFocus::*)()>(&::Modio::Unity::UI::Components::Selectables::ModioUIToggleDeactivateWhenPanelLostFocus::Awake)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x9fc288c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::Selectables::ModioUIToggleDeactivateWhenPanelLostFocus*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::Selectables::ModioUIToggleDeactivateWhenPanelLostFocus.OnValueChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::Selectables::ModioUIToggleDeactivateWhenPanelLostFocus::*)(bool)>(&::Modio::Unity::UI::Components::Selectables::ModioUIToggleDeactivateWhenPanelLostFocus::OnValueChanged)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x9fc2964;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::Selectables::ModioUIToggleDeactivateWhenPanelLostFocus*>(),
                        {"OnValueChanged", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::Selectables::ModioUIToggleDeactivateWhenPanelLostFocus.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::Selectables::ModioUIToggleDeactivateWhenPanelLostFocus::*)()>(&::Modio::Unity::UI::Components::Selectables::ModioUIToggleDeactivateWhenPanelLostFocus::OnDestroy)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x9fc2a88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::Selectables::ModioUIToggleDeactivateWhenPanelLostFocus*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::Selectables::ModioUIToggleDeactivateWhenPanelLostFocus.PanelChangedFocus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::Selectables::ModioUIToggleDeactivateWhenPanelLostFocus::*)(bool)>(&::Modio::Unity::UI::Components::Selectables::ModioUIToggleDeactivateWhenPanelLostFocus::PanelChangedFocus)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x9fc2b58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::Selectables::ModioUIToggleDeactivateWhenPanelLostFocus*>(),
                        {"PanelChangedFocus", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Components::Selectables::ModioUIToggleDeactivateWhenPanelLostFocus._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Components::Selectables::ModioUIToggleDeactivateWhenPanelLostFocus::*)()>(&::Modio::Unity::UI::Components::Selectables::ModioUIToggleDeactivateWhenPanelLostFocus::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fc2b7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::Selectables::ModioUIToggleDeactivateWhenPanelLostFocus*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Modio::Unity::UI::Panels::ModioPanelBase>& Modio::Unity::UI::Components::Selectables::ModioUIToggleDeactivateWhenPanelLostFocus::__cordl_internal_get__panel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____panel;
}
constexpr ::UnityW<::Modio::Unity::UI::Panels::ModioPanelBase> const& Modio::Unity::UI::Components::Selectables::ModioUIToggleDeactivateWhenPanelLostFocus::__cordl_internal_get__panel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____panel;
}
constexpr void Modio::Unity::UI::Components::Selectables::ModioUIToggleDeactivateWhenPanelLostFocus::__cordl_internal_set__panel(::UnityW<::Modio::Unity::UI::Panels::ModioPanelBase>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____panel = value;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle>& Modio::Unity::UI::Components::Selectables::ModioUIToggleDeactivateWhenPanelLostFocus::__cordl_internal_get__toggle()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____toggle;
}
constexpr ::UnityW<::UnityEngine::UI::Toggle> const& Modio::Unity::UI::Components::Selectables::ModioUIToggleDeactivateWhenPanelLostFocus::__cordl_internal_get__toggle() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____toggle;
}
constexpr void Modio::Unity::UI::Components::Selectables::ModioUIToggleDeactivateWhenPanelLostFocus::__cordl_internal_set__toggle(::UnityW<::UnityEngine::UI::Toggle>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____toggle = value;
}
inline void Modio::Unity::UI::Components::Selectables::ModioUIToggleDeactivateWhenPanelLostFocus::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::Selectables::ModioUIToggleDeactivateWhenPanelLostFocus*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Components::Selectables::ModioUIToggleDeactivateWhenPanelLostFocus::OnValueChanged(bool  isOn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::Selectables::ModioUIToggleDeactivateWhenPanelLostFocus*>(),
                        {"OnValueChanged", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isOn);
}
inline void Modio::Unity::UI::Components::Selectables::ModioUIToggleDeactivateWhenPanelLostFocus::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::Selectables::ModioUIToggleDeactivateWhenPanelLostFocus*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Components::Selectables::ModioUIToggleDeactivateWhenPanelLostFocus::PanelChangedFocus(bool  hasFocus)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::Selectables::ModioUIToggleDeactivateWhenPanelLostFocus*>(),
                        {"PanelChangedFocus", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hasFocus);
}
inline void Modio::Unity::UI::Components::Selectables::ModioUIToggleDeactivateWhenPanelLostFocus::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Components::Selectables::ModioUIToggleDeactivateWhenPanelLostFocus*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Unity::UI::Components::Selectables::ModioUIToggleDeactivateWhenPanelLostFocus* Modio::Unity::UI::Components::Selectables::ModioUIToggleDeactivateWhenPanelLostFocus::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UI::Components::Selectables::ModioUIToggleDeactivateWhenPanelLostFocus*>());
}
// Ctor Parameters []
constexpr ::Modio::Unity::UI::Components::Selectables::ModioUIToggleDeactivateWhenPanelLostFocus::ModioUIToggleDeactivateWhenPanelLostFocus()   {
}
