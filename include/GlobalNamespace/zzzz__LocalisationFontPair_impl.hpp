#pragma once
// IWYU pragma private; include "GlobalNamespace/LocalisationFontPair.hpp"
#include "GlobalNamespace/zzzz__LocalisationFontPair_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "TMPro/zzzz__TMP_FontAsset_def.hpp"
#include "UnityEngine/Localization/zzzz__Locale_def.hpp"
#include "UnityEngine/zzzz__Font_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LocalisationFontPair.ContainsLocale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::LocalisationFontPair::*)(::UnityEngine::Localization::Locale*)>(&::GlobalNamespace::LocalisationFontPair::ContainsLocale)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5a63f04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalisationFontPair>(),
                        {"ContainsLocale", {}, {::i2c::type_of<::UnityEngine::Localization::Locale*>()}}
                    )));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::LocalisationFontPair::ContainsLocale(::UnityEngine::Localization::Locale*  locale)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalisationFontPair>(),
                        {"ContainsLocale", {}, {::i2c::type_of<::UnityEngine::Localization::Locale*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, locale);
}
// Ctor Parameters [CppParam { name: "locales", ty: "::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Localization::Locale>>*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "fontAsset", ty: "::UnityW<::TMPro::TMP_FontAsset>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "legacyFontAsset", ty: "::UnityW<::UnityEngine::Font>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "charSpacing", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "lineSpacing", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "fontSize", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::LocalisationFontPair::LocalisationFontPair(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Localization::Locale>>*  locales, ::UnityW<::TMPro::TMP_FontAsset>  fontAsset, ::UnityW<::UnityEngine::Font>  legacyFontAsset, float_t  charSpacing, float_t  lineSpacing, float_t  fontSize) noexcept  {
this->locales = locales;
this->fontAsset = fontAsset;
this->legacyFontAsset = legacyFontAsset;
this->charSpacing = charSpacing;
this->lineSpacing = lineSpacing;
this->fontSize = fontSize;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LocalisationFontPair::LocalisationFontPair()   {
}
