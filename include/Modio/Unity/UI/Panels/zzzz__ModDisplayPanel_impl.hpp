#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Panels/ModDisplayPanel.hpp"
#include "Modio/Unity/UI/Panels/zzzz__ModioPanelBase_impl.hpp"
#include "Modio/Unity/UI/Panels/zzzz__ModDisplayPanel_def.hpp"
#include "Modio/Mods/zzzz__Mod_def.hpp"
#include "Modio/Unity/UI/Components/zzzz__ModioUIMod_def.hpp"
#include "Modio/Unity/UI/Panels/zzzz__ModioPanelBase_GainedFocusCause_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_def.hpp"
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModDisplayPanel.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::ModDisplayPanel::*)()>(&::Modio::Unity::UI::Panels::ModDisplayPanel::Awake)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x9fa5a74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Unity::UI::Panels::ModDisplayPanel*>(),
                    {::i2c::class_of<::Modio::Unity::UI::Panels::ModDisplayPanel*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModDisplayPanel.OnGainedFocus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::ModDisplayPanel::*)(::GlobalNamespace::ModioPanelBase_GainedFocusCause)>(&::Modio::Unity::UI::Panels::ModDisplayPanel::OnGainedFocus)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x9fa5ad4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Unity::UI::Panels::ModDisplayPanel*>(),
                    {::i2c::class_of<::Modio::Unity::UI::Panels::ModDisplayPanel*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModDisplayPanel.OnLostFocus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::ModDisplayPanel::*)()>(&::Modio::Unity::UI::Panels::ModDisplayPanel::OnLostFocus)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x9fa5c48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Unity::UI::Panels::ModDisplayPanel*>(),
                    {::i2c::class_of<::Modio::Unity::UI::Panels::ModDisplayPanel*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModDisplayPanel.OpenPanel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::ModDisplayPanel::*)(::Modio::Mods::Mod*)>(&::Modio::Unity::UI::Panels::ModDisplayPanel::OpenPanel)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x9fa5d74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModDisplayPanel*>(),
                        {"OpenPanel", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModDisplayPanel.ReportPressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::ModDisplayPanel::*)()>(&::Modio::Unity::UI::Panels::ModDisplayPanel::ReportPressed)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9fa5da8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModDisplayPanel*>(),
                        {"ReportPressed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModDisplayPanel.MoreOptionsPressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::ModDisplayPanel::*)()>(&::Modio::Unity::UI::Panels::ModDisplayPanel::MoreOptionsPressed)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9fa5e78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModDisplayPanel*>(),
                        {"MoreOptionsPressed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModDisplayPanel.MoreFromCreatorPressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::ModDisplayPanel::*)()>(&::Modio::Unity::UI::Panels::ModDisplayPanel::MoreFromCreatorPressed)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x9fa5e90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModDisplayPanel*>(),
                        {"MoreFromCreatorPressed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModDisplayPanel._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::ModDisplayPanel::*)()>(&::Modio::Unity::UI::Panels::ModDisplayPanel::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fa5f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModDisplayPanel*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Modio::Unity::UI::Components::ModioUIMod>& Modio::Unity::UI::Panels::ModDisplayPanel::__cordl_internal_get__modioUIMod()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____modioUIMod;
}
constexpr ::UnityW<::Modio::Unity::UI::Components::ModioUIMod> const& Modio::Unity::UI::Panels::ModDisplayPanel::__cordl_internal_get__modioUIMod() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____modioUIMod;
}
constexpr void Modio::Unity::UI::Panels::ModDisplayPanel::__cordl_internal_set__modioUIMod(::UnityW<::Modio::Unity::UI::Components::ModioUIMod>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____modioUIMod = value;
}
constexpr ::UnityEngine::Events::UnityEvent*& Modio::Unity::UI::Panels::ModDisplayPanel::__cordl_internal_get__onMoreOptionsPressed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onMoreOptionsPressed;
}
constexpr ::UnityEngine::Events::UnityEvent* const& Modio::Unity::UI::Panels::ModDisplayPanel::__cordl_internal_get__onMoreOptionsPressed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____onMoreOptionsPressed;
}
constexpr void Modio::Unity::UI::Panels::ModDisplayPanel::__cordl_internal_set__onMoreOptionsPressed(::UnityEngine::Events::UnityEvent*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____onMoreOptionsPressed = value;
}
inline void Modio::Unity::UI::Panels::ModDisplayPanel::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Unity::UI::Panels::ModDisplayPanel*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Panels::ModDisplayPanel::OnGainedFocus(::GlobalNamespace::ModioPanelBase_GainedFocusCause  selectionBehaviour)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Unity::UI::Panels::ModDisplayPanel*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, selectionBehaviour);
}
inline void Modio::Unity::UI::Panels::ModDisplayPanel::OnLostFocus()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Unity::UI::Panels::ModDisplayPanel*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Panels::ModDisplayPanel::OpenPanel(::Modio::Mods::Mod*  mod)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModDisplayPanel*>(),
                        {"OpenPanel", {}, {::i2c::type_of<::Modio::Mods::Mod*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mod);
}
inline void Modio::Unity::UI::Panels::ModDisplayPanel::ReportPressed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModDisplayPanel*>(),
                        {"ReportPressed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Panels::ModDisplayPanel::MoreOptionsPressed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModDisplayPanel*>(),
                        {"MoreOptionsPressed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Panels::ModDisplayPanel::MoreFromCreatorPressed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModDisplayPanel*>(),
                        {"MoreFromCreatorPressed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Panels::ModDisplayPanel::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModDisplayPanel*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Unity::UI::Panels::ModDisplayPanel* Modio::Unity::UI::Panels::ModDisplayPanel::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UI::Panels::ModDisplayPanel*>());
}
// Ctor Parameters []
constexpr ::Modio::Unity::UI::Panels::ModDisplayPanel::ModDisplayPanel()   {
}
