#pragma once
// IWYU pragma private; include "GlobalNamespace/SITouchscreenButtonContainer.hpp"
#include "GlobalNamespace/zzzz__SITouchscreenButton_SITouchscreenButtonType_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SITouchscreenButtonContainer_def.hpp"
#include "GlobalNamespace/zzzz__ITouchScreenStation_def.hpp"
#include "GlobalNamespace/zzzz__SITouchscreenButton_SITouchscreenButtonType_def.hpp"
#include "GlobalNamespace/zzzz__SITouchscreenButton_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "UnityEngine/UI/zzzz__Image_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SITouchscreenButtonContainer.get_isUsable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SITouchscreenButtonContainer::*)()>(&::GlobalNamespace::SITouchscreenButtonContainer::get_isUsable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5af6ca4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITouchscreenButtonContainer*>(),
                        {"get_isUsable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITouchscreenButtonContainer.set_isUsable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SITouchscreenButtonContainer::*)(bool)>(&::GlobalNamespace::SITouchscreenButtonContainer::set_isUsable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5af6cac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITouchscreenButtonContainer*>(),
                        {"set_isUsable", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITouchscreenButtonContainer.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SITouchscreenButtonContainer::*)()>(&::GlobalNamespace::SITouchscreenButtonContainer::Start)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x5af6cb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITouchscreenButtonContainer*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITouchscreenButtonContainer.OnToggleStateChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SITouchscreenButtonContainer::*)(::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType, int32_t, int32_t, bool)>(&::GlobalNamespace::SITouchscreenButtonContainer::OnToggleStateChanged)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5af6eb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITouchscreenButtonContainer*>(),
                        {"OnToggleStateChanged", {}, {::i2c::type_of<::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITouchscreenButtonContainer.UpdateToggleVisual
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SITouchscreenButtonContainer::*)()>(&::GlobalNamespace::SITouchscreenButtonContainer::UpdateToggleVisual)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5af6ebc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITouchscreenButtonContainer*>(),
                        {"UpdateToggleVisual", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITouchscreenButtonContainer.UpdateToggleVisual
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SITouchscreenButtonContainer::*)(bool)>(&::GlobalNamespace::SITouchscreenButtonContainer::UpdateToggleVisual)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5af6df0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITouchscreenButtonContainer*>(),
                        {"UpdateToggleVisual", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITouchscreenButtonContainer.SetUsable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SITouchscreenButtonContainer::*)(bool)>(&::GlobalNamespace::SITouchscreenButtonContainer::SetUsable)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5af17e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITouchscreenButtonContainer*>(),
                        {"SetUsable", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SITouchscreenButtonContainer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SITouchscreenButtonContainer::*)()>(&::GlobalNamespace::SITouchscreenButtonContainer::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5af6ed4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITouchscreenButtonContainer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType& GlobalNamespace::SITouchscreenButtonContainer::__cordl_internal_get_type()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___type;
}
constexpr ::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType const& GlobalNamespace::SITouchscreenButtonContainer::__cordl_internal_get_type() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___type;
}
constexpr void GlobalNamespace::SITouchscreenButtonContainer::__cordl_internal_set_type(::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___type = value;
}
constexpr ::StringW& GlobalNamespace::SITouchscreenButtonContainer::__cordl_internal_get_buttonTextString()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonTextString;
}
constexpr ::StringW const& GlobalNamespace::SITouchscreenButtonContainer::__cordl_internal_get_buttonTextString() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonTextString;
}
constexpr void GlobalNamespace::SITouchscreenButtonContainer::__cordl_internal_set_buttonTextString(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buttonTextString = value;
}
constexpr int32_t& GlobalNamespace::SITouchscreenButtonContainer::__cordl_internal_get_data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr int32_t const& GlobalNamespace::SITouchscreenButtonContainer::__cordl_internal_get_data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___data;
}
constexpr void GlobalNamespace::SITouchscreenButtonContainer::__cordl_internal_set_data(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___data = value;
}
constexpr ::UnityW<::UnityEngine::RectTransform>& GlobalNamespace::SITouchscreenButtonContainer::__cordl_internal_get_backGround()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___backGround;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& GlobalNamespace::SITouchscreenButtonContainer::__cordl_internal_get_backGround() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___backGround;
}
constexpr void GlobalNamespace::SITouchscreenButtonContainer::__cordl_internal_set_backGround(::UnityW<::UnityEngine::RectTransform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___backGround = value;
}
constexpr ::UnityW<::UnityEngine::RectTransform>& GlobalNamespace::SITouchscreenButtonContainer::__cordl_internal_get_backgroundShadow()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___backgroundShadow;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& GlobalNamespace::SITouchscreenButtonContainer::__cordl_internal_get_backgroundShadow() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___backgroundShadow;
}
constexpr void GlobalNamespace::SITouchscreenButtonContainer::__cordl_internal_set_backgroundShadow(::UnityW<::UnityEngine::RectTransform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___backgroundShadow = value;
}
constexpr ::UnityW<::UnityEngine::UI::Image>& GlobalNamespace::SITouchscreenButtonContainer::__cordl_internal_get_foreGround()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___foreGround;
}
constexpr ::UnityW<::UnityEngine::UI::Image> const& GlobalNamespace::SITouchscreenButtonContainer::__cordl_internal_get_foreGround() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___foreGround;
}
constexpr void GlobalNamespace::SITouchscreenButtonContainer::__cordl_internal_set_foreGround(::UnityW<::UnityEngine::UI::Image>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___foreGround = value;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& GlobalNamespace::SITouchscreenButtonContainer::__cordl_internal_get_buttonText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonText;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& GlobalNamespace::SITouchscreenButtonContainer::__cordl_internal_get_buttonText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonText;
}
constexpr void GlobalNamespace::SITouchscreenButtonContainer::__cordl_internal_set_buttonText(::UnityW<::TMPro::TextMeshProUGUI>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buttonText = value;
}
constexpr ::GlobalNamespace::ITouchScreenStation*& GlobalNamespace::SITouchscreenButtonContainer::__cordl_internal_get_station()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___station;
}
constexpr ::GlobalNamespace::ITouchScreenStation* const& GlobalNamespace::SITouchscreenButtonContainer::__cordl_internal_get_station() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___station;
}
constexpr void GlobalNamespace::SITouchscreenButtonContainer::__cordl_internal_set_station(::GlobalNamespace::ITouchScreenStation*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___station = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::SITouchscreenButtonContainer::__cordl_internal_get_toggleOnColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toggleOnColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::SITouchscreenButtonContainer::__cordl_internal_get_toggleOnColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toggleOnColor;
}
constexpr void GlobalNamespace::SITouchscreenButtonContainer::__cordl_internal_set_toggleOnColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___toggleOnColor = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::SITouchscreenButtonContainer::__cordl_internal_get_toggleOffColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toggleOffColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::SITouchscreenButtonContainer::__cordl_internal_get_toggleOffColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toggleOffColor;
}
constexpr void GlobalNamespace::SITouchscreenButtonContainer::__cordl_internal_set_toggleOffColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___toggleOffColor = value;
}
constexpr ::StringW& GlobalNamespace::SITouchscreenButtonContainer::__cordl_internal_get_toggleOnText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toggleOnText;
}
constexpr ::StringW const& GlobalNamespace::SITouchscreenButtonContainer::__cordl_internal_get_toggleOnText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toggleOnText;
}
constexpr void GlobalNamespace::SITouchscreenButtonContainer::__cordl_internal_set_toggleOnText(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___toggleOnText = value;
}
constexpr ::StringW& GlobalNamespace::SITouchscreenButtonContainer::__cordl_internal_get_toggleOffText()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toggleOffText;
}
constexpr ::StringW const& GlobalNamespace::SITouchscreenButtonContainer::__cordl_internal_get_toggleOffText() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toggleOffText;
}
constexpr void GlobalNamespace::SITouchscreenButtonContainer::__cordl_internal_set_toggleOffText(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___toggleOffText = value;
}
constexpr ::UnityW<::GlobalNamespace::SITouchscreenButton>& GlobalNamespace::SITouchscreenButtonContainer::__cordl_internal_get_button()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___button;
}
constexpr ::UnityW<::GlobalNamespace::SITouchscreenButton> const& GlobalNamespace::SITouchscreenButtonContainer::__cordl_internal_get_button() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___button;
}
constexpr void GlobalNamespace::SITouchscreenButtonContainer::__cordl_internal_set_button(::UnityW<::GlobalNamespace::SITouchscreenButton>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___button = value;
}
constexpr bool& GlobalNamespace::SITouchscreenButtonContainer::__cordl_internal_get_autoConfigure()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autoConfigure;
}
constexpr bool const& GlobalNamespace::SITouchscreenButtonContainer::__cordl_internal_get_autoConfigure() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___autoConfigure;
}
constexpr void GlobalNamespace::SITouchscreenButtonContainer::__cordl_internal_set_autoConfigure(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___autoConfigure = value;
}
constexpr bool& GlobalNamespace::SITouchscreenButtonContainer::__cordl_internal_get__isUsable_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isUsable_k__BackingField;
}
constexpr bool const& GlobalNamespace::SITouchscreenButtonContainer::__cordl_internal_get__isUsable_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isUsable_k__BackingField;
}
constexpr void GlobalNamespace::SITouchscreenButtonContainer::__cordl_internal_set__isUsable_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isUsable_k__BackingField = value;
}
constexpr ::UnityEngine::Color& GlobalNamespace::SITouchscreenButtonContainer::__cordl_internal_get__cachedForegroundColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cachedForegroundColor;
}
constexpr ::UnityEngine::Color const& GlobalNamespace::SITouchscreenButtonContainer::__cordl_internal_get__cachedForegroundColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cachedForegroundColor;
}
constexpr void GlobalNamespace::SITouchscreenButtonContainer::__cordl_internal_set__cachedForegroundColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cachedForegroundColor = value;
}
inline bool GlobalNamespace::SITouchscreenButtonContainer::get_isUsable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITouchscreenButtonContainer*>(),
                        {"get_isUsable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::SITouchscreenButtonContainer::set_isUsable(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITouchscreenButtonContainer*>(),
                        {"set_isUsable", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::SITouchscreenButtonContainer::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITouchscreenButtonContainer*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SITouchscreenButtonContainer::OnToggleStateChanged(::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType  type, int32_t  data, int32_t  actorNr, bool  isToggledOn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITouchscreenButtonContainer*>(),
                        {"OnToggleStateChanged", {}, {::i2c::type_of<::GlobalNamespace::SITouchscreenButton_SITouchscreenButtonType>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, data, actorNr, isToggledOn);
}
inline void GlobalNamespace::SITouchscreenButtonContainer::UpdateToggleVisual()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITouchscreenButtonContainer*>(),
                        {"UpdateToggleVisual", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SITouchscreenButtonContainer::UpdateToggleVisual(bool  isToggledOn)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITouchscreenButtonContainer*>(),
                        {"UpdateToggleVisual", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isToggledOn);
}
inline void GlobalNamespace::SITouchscreenButtonContainer::SetUsable(bool  newIsUsable)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITouchscreenButtonContainer*>(),
                        {"SetUsable", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newIsUsable);
}
inline void GlobalNamespace::SITouchscreenButtonContainer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SITouchscreenButtonContainer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SITouchscreenButtonContainer* GlobalNamespace::SITouchscreenButtonContainer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SITouchscreenButtonContainer*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SITouchscreenButtonContainer::SITouchscreenButtonContainer()   {
}
