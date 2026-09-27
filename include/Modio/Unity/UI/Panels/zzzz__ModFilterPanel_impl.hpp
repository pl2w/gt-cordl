#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Panels/ModFilterPanel.hpp"
#include "Modio/Unity/UI/Panels/zzzz__ModioPanelBase_impl.hpp"
#include "Modio/Unity/UI/Panels/zzzz__ModFilterPanel_def.hpp"
#include "Modio/Unity/UI/Components/zzzz__ModioUIFilterDisplay_def.hpp"
#include "Modio/Unity/UI/Panels/zzzz__ModioPanelBase_GainedFocusCause_def.hpp"
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModFilterPanel.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::ModFilterPanel::*)()>(&::Modio::Unity::UI::Panels::ModFilterPanel::Awake)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x9fa5f08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Unity::UI::Panels::ModFilterPanel*>(),
                    {::i2c::class_of<::Modio::Unity::UI::Panels::ModFilterPanel*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModFilterPanel.CancelPressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::ModFilterPanel::*)()>(&::Modio::Unity::UI::Panels::ModFilterPanel::CancelPressed)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x9fa5f68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Unity::UI::Panels::ModFilterPanel*>(),
                    {::i2c::class_of<::Modio::Unity::UI::Panels::ModFilterPanel*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModFilterPanel.DoDefaultSelection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::ModFilterPanel::*)()>(&::Modio::Unity::UI::Panels::ModFilterPanel::DoDefaultSelection)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9fa5f8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Unity::UI::Panels::ModFilterPanel*>(),
                    {::i2c::class_of<::Modio::Unity::UI::Panels::ModFilterPanel*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModFilterPanel.OnGainedFocus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::ModFilterPanel::*)(::GlobalNamespace::ModioPanelBase_GainedFocusCause)>(&::Modio::Unity::UI::Panels::ModFilterPanel::OnGainedFocus)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x9fa60dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Unity::UI::Panels::ModFilterPanel*>(),
                    {::i2c::class_of<::Modio::Unity::UI::Panels::ModFilterPanel*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModFilterPanel.OnLostFocus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::ModFilterPanel::*)()>(&::Modio::Unity::UI::Panels::ModFilterPanel::OnLostFocus)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x9fa61d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Unity::UI::Panels::ModFilterPanel*>(),
                    {::i2c::class_of<::Modio::Unity::UI::Panels::ModFilterPanel*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModFilterPanel._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::ModFilterPanel::*)()>(&::Modio::Unity::UI::Panels::ModFilterPanel::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fa62b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModFilterPanel*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Modio::Unity::UI::Components::ModioUIFilterDisplay>& Modio::Unity::UI::Panels::ModFilterPanel::__cordl_internal_get__filterDisplay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____filterDisplay;
}
constexpr ::UnityW<::Modio::Unity::UI::Components::ModioUIFilterDisplay> const& Modio::Unity::UI::Panels::ModFilterPanel::__cordl_internal_get__filterDisplay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____filterDisplay;
}
constexpr void Modio::Unity::UI::Panels::ModFilterPanel::__cordl_internal_set__filterDisplay(::UnityW<::Modio::Unity::UI::Components::ModioUIFilterDisplay>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____filterDisplay = value;
}
inline void Modio::Unity::UI::Panels::ModFilterPanel::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Unity::UI::Panels::ModFilterPanel*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Panels::ModFilterPanel::CancelPressed()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Unity::UI::Panels::ModFilterPanel*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Panels::ModFilterPanel::DoDefaultSelection()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Unity::UI::Panels::ModFilterPanel*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Panels::ModFilterPanel::OnGainedFocus(::GlobalNamespace::ModioPanelBase_GainedFocusCause  selectionBehaviour)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Unity::UI::Panels::ModFilterPanel*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, selectionBehaviour);
}
inline void Modio::Unity::UI::Panels::ModFilterPanel::OnLostFocus()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Unity::UI::Panels::ModFilterPanel*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Panels::ModFilterPanel::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModFilterPanel*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Unity::UI::Panels::ModFilterPanel* Modio::Unity::UI::Panels::ModFilterPanel::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UI::Panels::ModFilterPanel*>());
}
// Ctor Parameters []
constexpr ::Modio::Unity::UI::Panels::ModFilterPanel::ModFilterPanel()   {
}
