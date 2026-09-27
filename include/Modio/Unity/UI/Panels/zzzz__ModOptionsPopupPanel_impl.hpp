#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Panels/ModOptionsPopupPanel.hpp"
#include "Modio/Unity/UI/Panels/zzzz__ModioPanelBase_impl.hpp"
#include "Modio/Unity/UI/Panels/zzzz__ModOptionsPopupPanel_def.hpp"
#include "Modio/Unity/UI/Components/Selectables/zzzz__ModioUIButton_def.hpp"
#include "Modio/Unity/UI/Components/zzzz__ModioUIMod_def.hpp"
#include "Modio/Unity/UI/Panels/zzzz__ModioPopupPositioning_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModOptionsPopupPanel.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::ModOptionsPopupPanel::*)()>(&::Modio::Unity::UI::Panels::ModOptionsPopupPanel::Awake)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x9fac29c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Unity::UI::Panels::ModOptionsPopupPanel*>(),
                    {::i2c::class_of<::Modio::Unity::UI::Panels::ModOptionsPopupPanel*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModOptionsPopupPanel.OpenPanel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::ModOptionsPopupPanel::*)(::Modio::Unity::UI::Components::ModioUIMod*)>(&::Modio::Unity::UI::Panels::ModOptionsPopupPanel::OpenPanel)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x9fac2fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModOptionsPopupPanel*>(),
                        {"OpenPanel", {}, {::i2c::type_of<::Modio::Unity::UI::Components::ModioUIMod*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModOptionsPopupPanel.OnLostFocus
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::ModOptionsPopupPanel::*)()>(&::Modio::Unity::UI::Panels::ModOptionsPopupPanel::OnLostFocus)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x9fac448;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Unity::UI::Panels::ModOptionsPopupPanel*>(),
                    {::i2c::class_of<::Modio::Unity::UI::Panels::ModOptionsPopupPanel*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModOptionsPopupPanel.FocusedPanelLateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::ModOptionsPopupPanel::*)()>(&::Modio::Unity::UI::Panels::ModOptionsPopupPanel::FocusedPanelLateUpdate)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x9fac4d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::Unity::UI::Panels::ModOptionsPopupPanel*>(),
                    {::i2c::class_of<::Modio::Unity::UI::Panels::ModOptionsPopupPanel*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::UI::Panels::ModOptionsPopupPanel._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::UI::Panels::ModOptionsPopupPanel::*)()>(&::Modio::Unity::UI::Panels::ModOptionsPopupPanel::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9fac564;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModOptionsPopupPanel*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Modio::Unity::UI::Components::ModioUIMod>& Modio::Unity::UI::Panels::ModOptionsPopupPanel::__cordl_internal_get__modioUIMod()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____modioUIMod;
}
constexpr ::UnityW<::Modio::Unity::UI::Components::ModioUIMod> const& Modio::Unity::UI::Panels::ModOptionsPopupPanel::__cordl_internal_get__modioUIMod() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____modioUIMod;
}
constexpr void Modio::Unity::UI::Panels::ModOptionsPopupPanel::__cordl_internal_set__modioUIMod(::UnityW<::Modio::Unity::UI::Components::ModioUIMod>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____modioUIMod = value;
}
constexpr ::UnityW<::UnityEngine::RectTransform>& Modio::Unity::UI::Panels::ModOptionsPopupPanel::__cordl_internal_get__rectToPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rectToPosition;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& Modio::Unity::UI::Panels::ModOptionsPopupPanel::__cordl_internal_get__rectToPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rectToPosition;
}
constexpr void Modio::Unity::UI::Panels::ModOptionsPopupPanel::__cordl_internal_set__rectToPosition(::UnityW<::UnityEngine::RectTransform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rectToPosition = value;
}
constexpr ::UnityW<::UnityEngine::RectTransform>& Modio::Unity::UI::Panels::ModOptionsPopupPanel::__cordl_internal_get__rectToPositionWithin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rectToPositionWithin;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& Modio::Unity::UI::Panels::ModOptionsPopupPanel::__cordl_internal_get__rectToPositionWithin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____rectToPositionWithin;
}
constexpr void Modio::Unity::UI::Panels::ModOptionsPopupPanel::__cordl_internal_set__rectToPositionWithin(::UnityW<::UnityEngine::RectTransform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____rectToPositionWithin = value;
}
constexpr ::UnityW<::Modio::Unity::UI::Panels::ModioPopupPositioning>& Modio::Unity::UI::Panels::ModOptionsPopupPanel::__cordl_internal_get__popupPositioning()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____popupPositioning;
}
constexpr ::UnityW<::Modio::Unity::UI::Panels::ModioPopupPositioning> const& Modio::Unity::UI::Panels::ModOptionsPopupPanel::__cordl_internal_get__popupPositioning() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____popupPositioning;
}
constexpr void Modio::Unity::UI::Panels::ModOptionsPopupPanel::__cordl_internal_set__popupPositioning(::UnityW<::Modio::Unity::UI::Panels::ModioPopupPositioning>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____popupPositioning = value;
}
constexpr ::UnityW<::Modio::Unity::UI::Components::Selectables::ModioUIButton>& Modio::Unity::UI::Panels::ModOptionsPopupPanel::__cordl_internal_get__buttonToHighlight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buttonToHighlight;
}
constexpr ::UnityW<::Modio::Unity::UI::Components::Selectables::ModioUIButton> const& Modio::Unity::UI::Panels::ModOptionsPopupPanel::__cordl_internal_get__buttonToHighlight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____buttonToHighlight;
}
constexpr void Modio::Unity::UI::Panels::ModOptionsPopupPanel::__cordl_internal_set__buttonToHighlight(::UnityW<::Modio::Unity::UI::Components::Selectables::ModioUIButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____buttonToHighlight = value;
}
inline void Modio::Unity::UI::Panels::ModOptionsPopupPanel::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Unity::UI::Panels::ModOptionsPopupPanel*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Panels::ModOptionsPopupPanel::OpenPanel(::Modio::Unity::UI::Components::ModioUIMod*  modUI)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModOptionsPopupPanel*>(),
                        {"OpenPanel", {}, {::i2c::type_of<::Modio::Unity::UI::Components::ModioUIMod*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, modUI);
}
inline void Modio::Unity::UI::Panels::ModOptionsPopupPanel::OnLostFocus()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Unity::UI::Panels::ModOptionsPopupPanel*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Panels::ModOptionsPopupPanel::FocusedPanelLateUpdate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::Unity::UI::Panels::ModOptionsPopupPanel*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::UI::Panels::ModOptionsPopupPanel::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::UI::Panels::ModOptionsPopupPanel*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Modio::Unity::UI::Panels::ModOptionsPopupPanel* Modio::Unity::UI::Panels::ModOptionsPopupPanel::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::UI::Panels::ModOptionsPopupPanel*>());
}
// Ctor Parameters []
constexpr ::Modio::Unity::UI::Panels::ModOptionsPopupPanel::ModOptionsPopupPanel()   {
}
