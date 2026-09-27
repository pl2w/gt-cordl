#pragma once
// IWYU pragma private; include "GlobalNamespace/LocalizationTextSyncer_TextCompSyncData.hpp"
#include "GlobalNamespace/zzzz__LocalizationTextSyncer_TextCompSyncData_def.hpp"
#include "GlobalNamespace/zzzz__LocalisationFontPair_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "TMPro/zzzz__TMP_Text_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LocalizationTextSyncer_TextCompSyncData.GetOverrideForLanguage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::LocalizationTextSyncer_TextCompSyncData::*)(::by_ref<::GlobalNamespace::LocalisationFontPair>)>(&::GlobalNamespace::LocalizationTextSyncer_TextCompSyncData::GetOverrideForLanguage)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5a68b9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalizationTextSyncer_TextCompSyncData>(),
                        {"GetOverrideForLanguage", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::LocalisationFontPair>>()}}
                    )));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::LocalizationTextSyncer_TextCompSyncData::GetOverrideForLanguage(::by_ref<::GlobalNamespace::LocalisationFontPair>  fontData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LocalizationTextSyncer_TextCompSyncData>(),
                        {"GetOverrideForLanguage", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::LocalisationFontPair>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, fontData);
}
// Ctor Parameters [CppParam { name: "textComponent", ty: "::UnityW<::TMPro::TMP_Text>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "overrideLanguageSettings", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_fontOverrides", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::LocalisationFontPair>*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::LocalizationTextSyncer_TextCompSyncData::LocalizationTextSyncer_TextCompSyncData(::UnityW<::TMPro::TMP_Text>  textComponent, bool  overrideLanguageSettings, ::System::Collections::Generic::List_1<::GlobalNamespace::LocalisationFontPair>*  _fontOverrides) noexcept  {
this->textComponent = textComponent;
this->overrideLanguageSettings = overrideLanguageSettings;
this->_fontOverrides = _fontOverrides;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LocalizationTextSyncer_TextCompSyncData::LocalizationTextSyncer_TextCompSyncData()   {
}
