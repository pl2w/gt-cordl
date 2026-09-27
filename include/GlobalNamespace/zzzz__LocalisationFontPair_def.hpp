#pragma once
// IWYU pragma private; include "GlobalNamespace/LocalisationFontPair.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(LocalisationFontPair)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace TMPro {
class TMP_FontAsset;
}
namespace UnityEngine::Localization {
class Locale;
}
namespace UnityEngine {
class Font;
}
// Forward declare root types
namespace GlobalNamespace {
struct LocalisationFontPair;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LocalisationFontPair);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LocalisationFontPair, "", "LocalisationFontPair");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: LocalisationFontPair
struct CORDL_TYPE LocalisationFontPair {
public:
// Declarations
/// @brief Method ContainsLocale, addr 0x5a63f04, size 0x10c, virtual false, abstract: false, final false
inline bool ContainsLocale(::UnityEngine::Localization::Locale*  locale) ;

// Ctor Parameters []
// @brief default ctor
constexpr LocalisationFontPair() ;

// Ctor Parameters [CppParam { name: "locales", ty: "::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Localization::Locale>>*", modifiers: "", def_value: None, comment: None }, CppParam { name: "fontAsset", ty: "::UnityW<::TMPro::TMP_FontAsset>", modifiers: "", def_value: None, comment: None }, CppParam { name: "legacyFontAsset", ty: "::UnityW<::UnityEngine::Font>", modifiers: "", def_value: None, comment: None }, CppParam { name: "charSpacing", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "lineSpacing", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "fontSize", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr LocalisationFontPair(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Localization::Locale>>*  locales, ::UnityW<::TMPro::TMP_FontAsset>  fontAsset, ::UnityW<::UnityEngine::Font>  legacyFontAsset, float_t  charSpacing, float_t  lineSpacing, float_t  fontSize) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3076};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field locales, offset: 0x0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Localization::Locale>>*  locales;

/// @brief Field fontAsset, offset: 0x8, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_FontAsset>  fontAsset;

/// @brief Field legacyFontAsset, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Font>  legacyFontAsset;

/// @brief Field charSpacing, offset: 0x18, size: 0x4, def value: None
 float_t  charSpacing;

/// @brief Field lineSpacing, offset: 0x1c, size: 0x4, def value: None
 float_t  lineSpacing;

/// @brief Field fontSize, offset: 0x20, size: 0x4, def value: None
 float_t  fontSize;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LocalisationFontPair, locales) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalisationFontPair, fontAsset) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalisationFontPair, legacyFontAsset) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalisationFontPair, charSpacing) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalisationFontPair, lineSpacing) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalisationFontPair, fontSize) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LocalisationFontPair) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
