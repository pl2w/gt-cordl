#pragma once
// IWYU pragma private; include "Oculus/Interaction/UITheme.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/zzzz__UITheme_ElementColors_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UITheme)
namespace GlobalNamespace {
struct UITheme_ElementColors;
}
namespace TMPro {
class TMP_FontAsset;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class RuntimeAnimatorController;
}
// Forward declare root types
namespace Oculus::Interaction {
class UITheme;
}
// Write type traits
MARK_REF_T(::Oculus::Interaction::UITheme*);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::UITheme*, "Oculus.Interaction", "UITheme");
// Dependencies Oculus.Interaction.UITheme::ElementColors, UnityEngine.Color, UnityEngine.ScriptableObject
namespace Oculus::Interaction {
// Is value type: false
// CS Name: Oculus.Interaction.UITheme
class CORDL_TYPE UITheme : public ::UnityEngine::ScriptableObject {
public:
// Declarations
using ElementColors = ::GlobalNamespace::UITheme_ElementColors;

 __declspec(property(get=get_ThemeVersion)) int32_t  ThemeVersion;

/// @brief Field _themeVersion, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get__themeVersion, put=__cordl_internal_set__themeVersion)) int32_t  _themeVersion;

/// @brief Field acBorderlessButton, offset 0x210, size 0x8 
 __declspec(property(get=__cordl_internal_get_acBorderlessButton, put=__cordl_internal_set_acBorderlessButton)) ::UnityW<::UnityEngine::RuntimeAnimatorController>  acBorderlessButton;

/// @brief Field acDestructiveButton, offset 0x218, size 0x8 
 __declspec(property(get=__cordl_internal_get_acDestructiveButton, put=__cordl_internal_set_acDestructiveButton)) ::UnityW<::UnityEngine::RuntimeAnimatorController>  acDestructiveButton;

/// @brief Field acPrimaryButton, offset 0x200, size 0x8 
 __declspec(property(get=__cordl_internal_get_acPrimaryButton, put=__cordl_internal_set_acPrimaryButton)) ::UnityW<::UnityEngine::RuntimeAnimatorController>  acPrimaryButton;

/// @brief Field acSecondaryButton, offset 0x208, size 0x8 
 __declspec(property(get=__cordl_internal_get_acSecondaryButton, put=__cordl_internal_set_acSecondaryButton)) ::UnityW<::UnityEngine::RuntimeAnimatorController>  acSecondaryButton;

/// @brief Field acTextInputField, offset 0x240, size 0x8 
 __declspec(property(get=__cordl_internal_get_acTextInputField, put=__cordl_internal_set_acTextInputField)) ::UnityW<::UnityEngine::RuntimeAnimatorController>  acTextInputField;

/// @brief Field acToggleBorderlessButton, offset 0x228, size 0x8 
 __declspec(property(get=__cordl_internal_get_acToggleBorderlessButton, put=__cordl_internal_set_acToggleBorderlessButton)) ::UnityW<::UnityEngine::RuntimeAnimatorController>  acToggleBorderlessButton;

/// @brief Field acToggleButton, offset 0x220, size 0x8 
 __declspec(property(get=__cordl_internal_get_acToggleButton, put=__cordl_internal_set_acToggleButton)) ::UnityW<::UnityEngine::RuntimeAnimatorController>  acToggleButton;

/// @brief Field acToggleCheckboxRadio, offset 0x238, size 0x8 
 __declspec(property(get=__cordl_internal_get_acToggleCheckboxRadio, put=__cordl_internal_set_acToggleCheckboxRadio)) ::UnityW<::UnityEngine::RuntimeAnimatorController>  acToggleCheckboxRadio;

/// @brief Field acToggleSwitch, offset 0x230, size 0x8 
 __declspec(property(get=__cordl_internal_get_acToggleSwitch, put=__cordl_internal_set_acToggleSwitch)) ::UnityW<::UnityEngine::RuntimeAnimatorController>  acToggleSwitch;

/// @brief Field backplateColor, offset 0x1c, size 0x10 
 __declspec(property(get=__cordl_internal_get_backplateColor, put=__cordl_internal_set_backplateColor)) ::UnityEngine::Color  backplateColor;

/// @brief Field backplateGradientMaterial, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_backplateGradientMaterial, put=__cordl_internal_set_backplateGradientMaterial)) ::UnityW<::UnityEngine::Material>  backplateGradientMaterial;

/// @brief Field borderlessButton, offset 0x148, size 0x50 
 __declspec(property(get=__cordl_internal_get_borderlessButton, put=__cordl_internal_set_borderlessButton)) ::GlobalNamespace::UITheme_ElementColors  borderlessButton;

/// @brief Field buttonPlateColor, offset 0x38, size 0x10 
 __declspec(property(get=__cordl_internal_get_buttonPlateColor, put=__cordl_internal_set_buttonPlateColor)) ::UnityEngine::Color  buttonPlateColor;

/// @brief Field colorPath, offset 0x248, size 0x8 
 __declspec(property(get=__cordl_internal_get_colorPath, put=__cordl_internal_set_colorPath)) ::StringW  colorPath;

/// @brief Field destructiveButton, offset 0x198, size 0x50 
 __declspec(property(get=__cordl_internal_get_destructiveButton, put=__cordl_internal_set_destructiveButton)) ::GlobalNamespace::UITheme_ElementColors  destructiveButton;

/// @brief Field primaryButton, offset 0xa8, size 0x50 
 __declspec(property(get=__cordl_internal_get_primaryButton, put=__cordl_internal_set_primaryButton)) ::GlobalNamespace::UITheme_ElementColors  primaryButton;

/// @brief Field secondaryButton, offset 0xf8, size 0x50 
 __declspec(property(get=__cordl_internal_get_secondaryButton, put=__cordl_internal_set_secondaryButton)) ::GlobalNamespace::UITheme_ElementColors  secondaryButton;

/// @brief Field sectionPlateColor, offset 0x48, size 0x10 
 __declspec(property(get=__cordl_internal_get_sectionPlateColor, put=__cordl_internal_set_sectionPlateColor)) ::UnityEngine::Color  sectionPlateColor;

/// @brief Field textFontBold, offset 0x1e8, size 0x8 
 __declspec(property(get=__cordl_internal_get_textFontBold, put=__cordl_internal_set_textFontBold)) ::UnityW<::TMPro::TMP_FontAsset>  textFontBold;

/// @brief Field textFontMedium, offset 0x1f0, size 0x8 
 __declspec(property(get=__cordl_internal_get_textFontMedium, put=__cordl_internal_set_textFontMedium)) ::UnityW<::TMPro::TMP_FontAsset>  textFontMedium;

/// @brief Field textFontRegular, offset 0x1f8, size 0x8 
 __declspec(property(get=__cordl_internal_get_textFontRegular, put=__cordl_internal_set_textFontRegular)) ::UnityW<::TMPro::TMP_FontAsset>  textFontRegular;

/// @brief Field textPrimaryColor, offset 0x68, size 0x10 
 __declspec(property(get=__cordl_internal_get_textPrimaryColor, put=__cordl_internal_set_textPrimaryColor)) ::UnityEngine::Color  textPrimaryColor;

/// @brief Field textPrimaryInvertedColor, offset 0x88, size 0x10 
 __declspec(property(get=__cordl_internal_get_textPrimaryInvertedColor, put=__cordl_internal_set_textPrimaryInvertedColor)) ::UnityEngine::Color  textPrimaryInvertedColor;

/// @brief Field textSecondaryColor, offset 0x78, size 0x10 
 __declspec(property(get=__cordl_internal_get_textSecondaryColor, put=__cordl_internal_set_textSecondaryColor)) ::UnityEngine::Color  textSecondaryColor;

/// @brief Field textSecondaryInvertedColor, offset 0x98, size 0x10 
 __declspec(property(get=__cordl_internal_get_textSecondaryInvertedColor, put=__cordl_internal_set_textSecondaryInvertedColor)) ::UnityEngine::Color  textSecondaryInvertedColor;

/// @brief Field tooltipColor, offset 0x58, size 0x10 
 __declspec(property(get=__cordl_internal_get_tooltipColor, put=__cordl_internal_set_tooltipColor)) ::UnityEngine::Color  tooltipColor;

static inline ::Oculus::Interaction::UITheme* New_ctor() ;

constexpr int32_t const& __cordl_internal_get__themeVersion() const;

constexpr int32_t& __cordl_internal_get__themeVersion() ;

constexpr ::UnityW<::UnityEngine::RuntimeAnimatorController> const& __cordl_internal_get_acBorderlessButton() const;

constexpr ::UnityW<::UnityEngine::RuntimeAnimatorController>& __cordl_internal_get_acBorderlessButton() ;

constexpr ::UnityW<::UnityEngine::RuntimeAnimatorController> const& __cordl_internal_get_acDestructiveButton() const;

constexpr ::UnityW<::UnityEngine::RuntimeAnimatorController>& __cordl_internal_get_acDestructiveButton() ;

constexpr ::UnityW<::UnityEngine::RuntimeAnimatorController> const& __cordl_internal_get_acPrimaryButton() const;

constexpr ::UnityW<::UnityEngine::RuntimeAnimatorController>& __cordl_internal_get_acPrimaryButton() ;

constexpr ::UnityW<::UnityEngine::RuntimeAnimatorController> const& __cordl_internal_get_acSecondaryButton() const;

constexpr ::UnityW<::UnityEngine::RuntimeAnimatorController>& __cordl_internal_get_acSecondaryButton() ;

constexpr ::UnityW<::UnityEngine::RuntimeAnimatorController> const& __cordl_internal_get_acTextInputField() const;

constexpr ::UnityW<::UnityEngine::RuntimeAnimatorController>& __cordl_internal_get_acTextInputField() ;

constexpr ::UnityW<::UnityEngine::RuntimeAnimatorController> const& __cordl_internal_get_acToggleBorderlessButton() const;

constexpr ::UnityW<::UnityEngine::RuntimeAnimatorController>& __cordl_internal_get_acToggleBorderlessButton() ;

constexpr ::UnityW<::UnityEngine::RuntimeAnimatorController> const& __cordl_internal_get_acToggleButton() const;

constexpr ::UnityW<::UnityEngine::RuntimeAnimatorController>& __cordl_internal_get_acToggleButton() ;

constexpr ::UnityW<::UnityEngine::RuntimeAnimatorController> const& __cordl_internal_get_acToggleCheckboxRadio() const;

constexpr ::UnityW<::UnityEngine::RuntimeAnimatorController>& __cordl_internal_get_acToggleCheckboxRadio() ;

constexpr ::UnityW<::UnityEngine::RuntimeAnimatorController> const& __cordl_internal_get_acToggleSwitch() const;

constexpr ::UnityW<::UnityEngine::RuntimeAnimatorController>& __cordl_internal_get_acToggleSwitch() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_backplateColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_backplateColor() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_backplateGradientMaterial() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_backplateGradientMaterial() ;

constexpr ::GlobalNamespace::UITheme_ElementColors const& __cordl_internal_get_borderlessButton() const;

constexpr ::GlobalNamespace::UITheme_ElementColors& __cordl_internal_get_borderlessButton() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_buttonPlateColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_buttonPlateColor() ;

constexpr ::StringW const& __cordl_internal_get_colorPath() const;

constexpr ::StringW& __cordl_internal_get_colorPath() ;

constexpr ::GlobalNamespace::UITheme_ElementColors const& __cordl_internal_get_destructiveButton() const;

constexpr ::GlobalNamespace::UITheme_ElementColors& __cordl_internal_get_destructiveButton() ;

constexpr ::GlobalNamespace::UITheme_ElementColors const& __cordl_internal_get_primaryButton() const;

constexpr ::GlobalNamespace::UITheme_ElementColors& __cordl_internal_get_primaryButton() ;

constexpr ::GlobalNamespace::UITheme_ElementColors const& __cordl_internal_get_secondaryButton() const;

constexpr ::GlobalNamespace::UITheme_ElementColors& __cordl_internal_get_secondaryButton() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_sectionPlateColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_sectionPlateColor() ;

constexpr ::UnityW<::TMPro::TMP_FontAsset> const& __cordl_internal_get_textFontBold() const;

constexpr ::UnityW<::TMPro::TMP_FontAsset>& __cordl_internal_get_textFontBold() ;

constexpr ::UnityW<::TMPro::TMP_FontAsset> const& __cordl_internal_get_textFontMedium() const;

constexpr ::UnityW<::TMPro::TMP_FontAsset>& __cordl_internal_get_textFontMedium() ;

constexpr ::UnityW<::TMPro::TMP_FontAsset> const& __cordl_internal_get_textFontRegular() const;

constexpr ::UnityW<::TMPro::TMP_FontAsset>& __cordl_internal_get_textFontRegular() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_textPrimaryColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_textPrimaryColor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_textPrimaryInvertedColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_textPrimaryInvertedColor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_textSecondaryColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_textSecondaryColor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_textSecondaryInvertedColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_textSecondaryInvertedColor() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_tooltipColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_tooltipColor() ;

constexpr void __cordl_internal_set__themeVersion(int32_t  value) ;

constexpr void __cordl_internal_set_acBorderlessButton(::UnityW<::UnityEngine::RuntimeAnimatorController>  value) ;

constexpr void __cordl_internal_set_acDestructiveButton(::UnityW<::UnityEngine::RuntimeAnimatorController>  value) ;

constexpr void __cordl_internal_set_acPrimaryButton(::UnityW<::UnityEngine::RuntimeAnimatorController>  value) ;

constexpr void __cordl_internal_set_acSecondaryButton(::UnityW<::UnityEngine::RuntimeAnimatorController>  value) ;

constexpr void __cordl_internal_set_acTextInputField(::UnityW<::UnityEngine::RuntimeAnimatorController>  value) ;

constexpr void __cordl_internal_set_acToggleBorderlessButton(::UnityW<::UnityEngine::RuntimeAnimatorController>  value) ;

constexpr void __cordl_internal_set_acToggleButton(::UnityW<::UnityEngine::RuntimeAnimatorController>  value) ;

constexpr void __cordl_internal_set_acToggleCheckboxRadio(::UnityW<::UnityEngine::RuntimeAnimatorController>  value) ;

constexpr void __cordl_internal_set_acToggleSwitch(::UnityW<::UnityEngine::RuntimeAnimatorController>  value) ;

constexpr void __cordl_internal_set_backplateColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_backplateGradientMaterial(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_borderlessButton(::GlobalNamespace::UITheme_ElementColors  value) ;

constexpr void __cordl_internal_set_buttonPlateColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_colorPath(::StringW  value) ;

constexpr void __cordl_internal_set_destructiveButton(::GlobalNamespace::UITheme_ElementColors  value) ;

constexpr void __cordl_internal_set_primaryButton(::GlobalNamespace::UITheme_ElementColors  value) ;

constexpr void __cordl_internal_set_secondaryButton(::GlobalNamespace::UITheme_ElementColors  value) ;

constexpr void __cordl_internal_set_sectionPlateColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_textFontBold(::UnityW<::TMPro::TMP_FontAsset>  value) ;

constexpr void __cordl_internal_set_textFontMedium(::UnityW<::TMPro::TMP_FontAsset>  value) ;

constexpr void __cordl_internal_set_textFontRegular(::UnityW<::TMPro::TMP_FontAsset>  value) ;

constexpr void __cordl_internal_set_textPrimaryColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_textPrimaryInvertedColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_textSecondaryColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_textSecondaryInvertedColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_tooltipColor(::UnityEngine::Color  value) ;

/// @brief Method .ctor, addr 0xa42abb8, size 0x60, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ThemeVersion, addr 0xa42abb0, size 0x8, virtual false, abstract: false, final false
inline int32_t get_ThemeVersion() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UITheme() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UITheme", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UITheme(UITheme && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UITheme", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UITheme(UITheme const& ) = delete;

/// @brief Field CurrentThemeVersion offset 0xffffffff size 0x4
static constexpr int32_t  CurrentThemeVersion{static_cast<int32_t>(0x2)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28252};

/// [SerializeField]
/// [HideInInspector]
/// @brief Field _themeVersion, offset: 0x18, size: 0x4, def value: None
 int32_t  ____themeVersion;

/// @brief Field backplateColor, offset: 0x1c, size: 0x10, def value: None
 ::UnityEngine::Color  ___backplateColor;

/// @brief Field backplateGradientMaterial, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___backplateGradientMaterial;

/// @brief Field buttonPlateColor, offset: 0x38, size: 0x10, def value: None
 ::UnityEngine::Color  ___buttonPlateColor;

/// @brief Field sectionPlateColor, offset: 0x48, size: 0x10, def value: None
 ::UnityEngine::Color  ___sectionPlateColor;

/// @brief Field tooltipColor, offset: 0x58, size: 0x10, def value: None
 ::UnityEngine::Color  ___tooltipColor;

/// [Header("Shared")]
/// @brief Field textPrimaryColor, offset: 0x68, size: 0x10, def value: None
 ::UnityEngine::Color  ___textPrimaryColor;

/// @brief Field textSecondaryColor, offset: 0x78, size: 0x10, def value: None
 ::UnityEngine::Color  ___textSecondaryColor;

/// @brief Field textPrimaryInvertedColor, offset: 0x88, size: 0x10, def value: None
 ::UnityEngine::Color  ___textPrimaryInvertedColor;

/// @brief Field textSecondaryInvertedColor, offset: 0x98, size: 0x10, def value: None
 ::UnityEngine::Color  ___textSecondaryInvertedColor;

/// [Header("Per Element Type Color")]
/// @brief Field primaryButton, offset: 0xa8, size: 0x50, def value: None
 ::GlobalNamespace::UITheme_ElementColors  ___primaryButton;

/// @brief Field secondaryButton, offset: 0xf8, size: 0x50, def value: None
 ::GlobalNamespace::UITheme_ElementColors  ___secondaryButton;

/// @brief Field borderlessButton, offset: 0x148, size: 0x50, def value: None
 ::GlobalNamespace::UITheme_ElementColors  ___borderlessButton;

/// @brief Field destructiveButton, offset: 0x198, size: 0x50, def value: None
 ::GlobalNamespace::UITheme_ElementColors  ___destructiveButton;

/// [Header("Fonts")]
/// @brief Field textFontBold, offset: 0x1e8, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_FontAsset>  ___textFontBold;

/// @brief Field textFontMedium, offset: 0x1f0, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_FontAsset>  ___textFontMedium;

/// @brief Field textFontRegular, offset: 0x1f8, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_FontAsset>  ___textFontRegular;

/// [Header("Animators")]
/// @brief Field acPrimaryButton, offset: 0x200, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RuntimeAnimatorController>  ___acPrimaryButton;

/// @brief Field acSecondaryButton, offset: 0x208, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RuntimeAnimatorController>  ___acSecondaryButton;

/// @brief Field acBorderlessButton, offset: 0x210, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RuntimeAnimatorController>  ___acBorderlessButton;

/// @brief Field acDestructiveButton, offset: 0x218, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RuntimeAnimatorController>  ___acDestructiveButton;

/// @brief Field acToggleButton, offset: 0x220, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RuntimeAnimatorController>  ___acToggleButton;

/// @brief Field acToggleBorderlessButton, offset: 0x228, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RuntimeAnimatorController>  ___acToggleBorderlessButton;

/// @brief Field acToggleSwitch, offset: 0x230, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RuntimeAnimatorController>  ___acToggleSwitch;

/// @brief Field acToggleCheckboxRadio, offset: 0x238, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RuntimeAnimatorController>  ___acToggleCheckboxRadio;

/// @brief Field acTextInputField, offset: 0x240, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RuntimeAnimatorController>  ___acTextInputField;

/// [Space(10)]
/// @brief Field colorPath, offset: 0x248, size: 0x8, def value: None
 ::StringW  ___colorPath;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::UITheme, ____themeVersion) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::UITheme, ___backplateColor) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::UITheme, ___backplateGradientMaterial) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::UITheme, ___buttonPlateColor) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::UITheme, ___sectionPlateColor) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::UITheme, ___tooltipColor) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::UITheme, ___textPrimaryColor) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::UITheme, ___textSecondaryColor) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::UITheme, ___textPrimaryInvertedColor) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::UITheme, ___textSecondaryInvertedColor) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::UITheme, ___primaryButton) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::UITheme, ___secondaryButton) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::UITheme, ___borderlessButton) == 0x148, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::UITheme, ___destructiveButton) == 0x198, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::UITheme, ___textFontBold) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::UITheme, ___textFontMedium) == 0x1f0, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::UITheme, ___textFontRegular) == 0x1f8, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::UITheme, ___acPrimaryButton) == 0x200, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::UITheme, ___acSecondaryButton) == 0x208, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::UITheme, ___acBorderlessButton) == 0x210, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::UITheme, ___acDestructiveButton) == 0x218, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::UITheme, ___acToggleButton) == 0x220, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::UITheme, ___acToggleBorderlessButton) == 0x228, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::UITheme, ___acToggleSwitch) == 0x230, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::UITheme, ___acToggleCheckboxRadio) == 0x238, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::UITheme, ___acTextInputField) == 0x240, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::UITheme, ___colorPath) == 0x248, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::UITheme) == 0x250, "Size mismatch!");

} // namespace end def Oculus::Interaction
