#pragma once
// IWYU pragma private; include "Oculus/Interaction/UITheme.hpp"
#include "Oculus/Interaction/zzzz__UITheme_ElementColors_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "Oculus/Interaction/zzzz__UITheme_def.hpp"
#include "Oculus/Interaction/zzzz__UITheme_ElementColors_def.hpp"
#include "TMPro/zzzz__TMP_FontAsset_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__RuntimeAnimatorController_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::UITheme.get_ThemeVersion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Oculus::Interaction::UITheme::*)()>(&::Oculus::Interaction::UITheme::get_ThemeVersion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa42abb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UITheme*>(),
                        {"get_ThemeVersion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::UITheme._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::UITheme::*)()>(&::Oculus::Interaction::UITheme::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa42abb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UITheme*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Oculus::Interaction::UITheme::__cordl_internal_get__themeVersion()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____themeVersion;
}
constexpr int32_t const& Oculus::Interaction::UITheme::__cordl_internal_get__themeVersion() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____themeVersion;
}
constexpr void Oculus::Interaction::UITheme::__cordl_internal_set__themeVersion(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____themeVersion = value;
}
constexpr ::UnityEngine::Color& Oculus::Interaction::UITheme::__cordl_internal_get_backplateColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___backplateColor;
}
constexpr ::UnityEngine::Color const& Oculus::Interaction::UITheme::__cordl_internal_get_backplateColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___backplateColor;
}
constexpr void Oculus::Interaction::UITheme::__cordl_internal_set_backplateColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___backplateColor = value;
}
constexpr ::UnityW<::UnityEngine::Material>& Oculus::Interaction::UITheme::__cordl_internal_get_backplateGradientMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___backplateGradientMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& Oculus::Interaction::UITheme::__cordl_internal_get_backplateGradientMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___backplateGradientMaterial;
}
constexpr void Oculus::Interaction::UITheme::__cordl_internal_set_backplateGradientMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___backplateGradientMaterial = value;
}
constexpr ::UnityEngine::Color& Oculus::Interaction::UITheme::__cordl_internal_get_buttonPlateColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonPlateColor;
}
constexpr ::UnityEngine::Color const& Oculus::Interaction::UITheme::__cordl_internal_get_buttonPlateColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___buttonPlateColor;
}
constexpr void Oculus::Interaction::UITheme::__cordl_internal_set_buttonPlateColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___buttonPlateColor = value;
}
constexpr ::UnityEngine::Color& Oculus::Interaction::UITheme::__cordl_internal_get_sectionPlateColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sectionPlateColor;
}
constexpr ::UnityEngine::Color const& Oculus::Interaction::UITheme::__cordl_internal_get_sectionPlateColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sectionPlateColor;
}
constexpr void Oculus::Interaction::UITheme::__cordl_internal_set_sectionPlateColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sectionPlateColor = value;
}
constexpr ::UnityEngine::Color& Oculus::Interaction::UITheme::__cordl_internal_get_tooltipColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tooltipColor;
}
constexpr ::UnityEngine::Color const& Oculus::Interaction::UITheme::__cordl_internal_get_tooltipColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tooltipColor;
}
constexpr void Oculus::Interaction::UITheme::__cordl_internal_set_tooltipColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tooltipColor = value;
}
constexpr ::UnityEngine::Color& Oculus::Interaction::UITheme::__cordl_internal_get_textPrimaryColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textPrimaryColor;
}
constexpr ::UnityEngine::Color const& Oculus::Interaction::UITheme::__cordl_internal_get_textPrimaryColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textPrimaryColor;
}
constexpr void Oculus::Interaction::UITheme::__cordl_internal_set_textPrimaryColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textPrimaryColor = value;
}
constexpr ::UnityEngine::Color& Oculus::Interaction::UITheme::__cordl_internal_get_textSecondaryColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textSecondaryColor;
}
constexpr ::UnityEngine::Color const& Oculus::Interaction::UITheme::__cordl_internal_get_textSecondaryColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textSecondaryColor;
}
constexpr void Oculus::Interaction::UITheme::__cordl_internal_set_textSecondaryColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textSecondaryColor = value;
}
constexpr ::UnityEngine::Color& Oculus::Interaction::UITheme::__cordl_internal_get_textPrimaryInvertedColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textPrimaryInvertedColor;
}
constexpr ::UnityEngine::Color const& Oculus::Interaction::UITheme::__cordl_internal_get_textPrimaryInvertedColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textPrimaryInvertedColor;
}
constexpr void Oculus::Interaction::UITheme::__cordl_internal_set_textPrimaryInvertedColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textPrimaryInvertedColor = value;
}
constexpr ::UnityEngine::Color& Oculus::Interaction::UITheme::__cordl_internal_get_textSecondaryInvertedColor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textSecondaryInvertedColor;
}
constexpr ::UnityEngine::Color const& Oculus::Interaction::UITheme::__cordl_internal_get_textSecondaryInvertedColor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textSecondaryInvertedColor;
}
constexpr void Oculus::Interaction::UITheme::__cordl_internal_set_textSecondaryInvertedColor(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textSecondaryInvertedColor = value;
}
constexpr ::GlobalNamespace::UITheme_ElementColors& Oculus::Interaction::UITheme::__cordl_internal_get_primaryButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___primaryButton;
}
constexpr ::GlobalNamespace::UITheme_ElementColors const& Oculus::Interaction::UITheme::__cordl_internal_get_primaryButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___primaryButton;
}
constexpr void Oculus::Interaction::UITheme::__cordl_internal_set_primaryButton(::GlobalNamespace::UITheme_ElementColors  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___primaryButton = value;
}
constexpr ::GlobalNamespace::UITheme_ElementColors& Oculus::Interaction::UITheme::__cordl_internal_get_secondaryButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___secondaryButton;
}
constexpr ::GlobalNamespace::UITheme_ElementColors const& Oculus::Interaction::UITheme::__cordl_internal_get_secondaryButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___secondaryButton;
}
constexpr void Oculus::Interaction::UITheme::__cordl_internal_set_secondaryButton(::GlobalNamespace::UITheme_ElementColors  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___secondaryButton = value;
}
constexpr ::GlobalNamespace::UITheme_ElementColors& Oculus::Interaction::UITheme::__cordl_internal_get_borderlessButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___borderlessButton;
}
constexpr ::GlobalNamespace::UITheme_ElementColors const& Oculus::Interaction::UITheme::__cordl_internal_get_borderlessButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___borderlessButton;
}
constexpr void Oculus::Interaction::UITheme::__cordl_internal_set_borderlessButton(::GlobalNamespace::UITheme_ElementColors  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___borderlessButton = value;
}
constexpr ::GlobalNamespace::UITheme_ElementColors& Oculus::Interaction::UITheme::__cordl_internal_get_destructiveButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___destructiveButton;
}
constexpr ::GlobalNamespace::UITheme_ElementColors const& Oculus::Interaction::UITheme::__cordl_internal_get_destructiveButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___destructiveButton;
}
constexpr void Oculus::Interaction::UITheme::__cordl_internal_set_destructiveButton(::GlobalNamespace::UITheme_ElementColors  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___destructiveButton = value;
}
constexpr ::UnityW<::TMPro::TMP_FontAsset>& Oculus::Interaction::UITheme::__cordl_internal_get_textFontBold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textFontBold;
}
constexpr ::UnityW<::TMPro::TMP_FontAsset> const& Oculus::Interaction::UITheme::__cordl_internal_get_textFontBold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textFontBold;
}
constexpr void Oculus::Interaction::UITheme::__cordl_internal_set_textFontBold(::UnityW<::TMPro::TMP_FontAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textFontBold = value;
}
constexpr ::UnityW<::TMPro::TMP_FontAsset>& Oculus::Interaction::UITheme::__cordl_internal_get_textFontMedium()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textFontMedium;
}
constexpr ::UnityW<::TMPro::TMP_FontAsset> const& Oculus::Interaction::UITheme::__cordl_internal_get_textFontMedium() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textFontMedium;
}
constexpr void Oculus::Interaction::UITheme::__cordl_internal_set_textFontMedium(::UnityW<::TMPro::TMP_FontAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textFontMedium = value;
}
constexpr ::UnityW<::TMPro::TMP_FontAsset>& Oculus::Interaction::UITheme::__cordl_internal_get_textFontRegular()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textFontRegular;
}
constexpr ::UnityW<::TMPro::TMP_FontAsset> const& Oculus::Interaction::UITheme::__cordl_internal_get_textFontRegular() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___textFontRegular;
}
constexpr void Oculus::Interaction::UITheme::__cordl_internal_set_textFontRegular(::UnityW<::TMPro::TMP_FontAsset>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___textFontRegular = value;
}
constexpr ::UnityW<::UnityEngine::RuntimeAnimatorController>& Oculus::Interaction::UITheme::__cordl_internal_get_acPrimaryButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___acPrimaryButton;
}
constexpr ::UnityW<::UnityEngine::RuntimeAnimatorController> const& Oculus::Interaction::UITheme::__cordl_internal_get_acPrimaryButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___acPrimaryButton;
}
constexpr void Oculus::Interaction::UITheme::__cordl_internal_set_acPrimaryButton(::UnityW<::UnityEngine::RuntimeAnimatorController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___acPrimaryButton = value;
}
constexpr ::UnityW<::UnityEngine::RuntimeAnimatorController>& Oculus::Interaction::UITheme::__cordl_internal_get_acSecondaryButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___acSecondaryButton;
}
constexpr ::UnityW<::UnityEngine::RuntimeAnimatorController> const& Oculus::Interaction::UITheme::__cordl_internal_get_acSecondaryButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___acSecondaryButton;
}
constexpr void Oculus::Interaction::UITheme::__cordl_internal_set_acSecondaryButton(::UnityW<::UnityEngine::RuntimeAnimatorController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___acSecondaryButton = value;
}
constexpr ::UnityW<::UnityEngine::RuntimeAnimatorController>& Oculus::Interaction::UITheme::__cordl_internal_get_acBorderlessButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___acBorderlessButton;
}
constexpr ::UnityW<::UnityEngine::RuntimeAnimatorController> const& Oculus::Interaction::UITheme::__cordl_internal_get_acBorderlessButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___acBorderlessButton;
}
constexpr void Oculus::Interaction::UITheme::__cordl_internal_set_acBorderlessButton(::UnityW<::UnityEngine::RuntimeAnimatorController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___acBorderlessButton = value;
}
constexpr ::UnityW<::UnityEngine::RuntimeAnimatorController>& Oculus::Interaction::UITheme::__cordl_internal_get_acDestructiveButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___acDestructiveButton;
}
constexpr ::UnityW<::UnityEngine::RuntimeAnimatorController> const& Oculus::Interaction::UITheme::__cordl_internal_get_acDestructiveButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___acDestructiveButton;
}
constexpr void Oculus::Interaction::UITheme::__cordl_internal_set_acDestructiveButton(::UnityW<::UnityEngine::RuntimeAnimatorController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___acDestructiveButton = value;
}
constexpr ::UnityW<::UnityEngine::RuntimeAnimatorController>& Oculus::Interaction::UITheme::__cordl_internal_get_acToggleButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___acToggleButton;
}
constexpr ::UnityW<::UnityEngine::RuntimeAnimatorController> const& Oculus::Interaction::UITheme::__cordl_internal_get_acToggleButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___acToggleButton;
}
constexpr void Oculus::Interaction::UITheme::__cordl_internal_set_acToggleButton(::UnityW<::UnityEngine::RuntimeAnimatorController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___acToggleButton = value;
}
constexpr ::UnityW<::UnityEngine::RuntimeAnimatorController>& Oculus::Interaction::UITheme::__cordl_internal_get_acToggleBorderlessButton()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___acToggleBorderlessButton;
}
constexpr ::UnityW<::UnityEngine::RuntimeAnimatorController> const& Oculus::Interaction::UITheme::__cordl_internal_get_acToggleBorderlessButton() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___acToggleBorderlessButton;
}
constexpr void Oculus::Interaction::UITheme::__cordl_internal_set_acToggleBorderlessButton(::UnityW<::UnityEngine::RuntimeAnimatorController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___acToggleBorderlessButton = value;
}
constexpr ::UnityW<::UnityEngine::RuntimeAnimatorController>& Oculus::Interaction::UITheme::__cordl_internal_get_acToggleSwitch()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___acToggleSwitch;
}
constexpr ::UnityW<::UnityEngine::RuntimeAnimatorController> const& Oculus::Interaction::UITheme::__cordl_internal_get_acToggleSwitch() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___acToggleSwitch;
}
constexpr void Oculus::Interaction::UITheme::__cordl_internal_set_acToggleSwitch(::UnityW<::UnityEngine::RuntimeAnimatorController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___acToggleSwitch = value;
}
constexpr ::UnityW<::UnityEngine::RuntimeAnimatorController>& Oculus::Interaction::UITheme::__cordl_internal_get_acToggleCheckboxRadio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___acToggleCheckboxRadio;
}
constexpr ::UnityW<::UnityEngine::RuntimeAnimatorController> const& Oculus::Interaction::UITheme::__cordl_internal_get_acToggleCheckboxRadio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___acToggleCheckboxRadio;
}
constexpr void Oculus::Interaction::UITheme::__cordl_internal_set_acToggleCheckboxRadio(::UnityW<::UnityEngine::RuntimeAnimatorController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___acToggleCheckboxRadio = value;
}
constexpr ::UnityW<::UnityEngine::RuntimeAnimatorController>& Oculus::Interaction::UITheme::__cordl_internal_get_acTextInputField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___acTextInputField;
}
constexpr ::UnityW<::UnityEngine::RuntimeAnimatorController> const& Oculus::Interaction::UITheme::__cordl_internal_get_acTextInputField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___acTextInputField;
}
constexpr void Oculus::Interaction::UITheme::__cordl_internal_set_acTextInputField(::UnityW<::UnityEngine::RuntimeAnimatorController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___acTextInputField = value;
}
constexpr ::StringW& Oculus::Interaction::UITheme::__cordl_internal_get_colorPath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colorPath;
}
constexpr ::StringW const& Oculus::Interaction::UITheme::__cordl_internal_get_colorPath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___colorPath;
}
constexpr void Oculus::Interaction::UITheme::__cordl_internal_set_colorPath(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___colorPath = value;
}
inline int32_t Oculus::Interaction::UITheme::get_ThemeVersion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UITheme*>(),
                        {"get_ThemeVersion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Oculus::Interaction::UITheme::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UITheme*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::UITheme* Oculus::Interaction::UITheme::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::UITheme*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::UITheme::UITheme()   {
}
