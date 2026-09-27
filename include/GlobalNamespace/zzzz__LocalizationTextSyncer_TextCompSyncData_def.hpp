#pragma once
// IWYU pragma private; include "GlobalNamespace/LocalizationTextSyncer_TextCompSyncData.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(LocalizationTextSyncer_TextCompSyncData)
namespace GlobalNamespace {
struct LocalisationFontPair;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace TMPro {
class TMP_Text;
}
// Forward declare root types
namespace GlobalNamespace {
struct LocalizationTextSyncer_TextCompSyncData;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::LocalizationTextSyncer_TextCompSyncData);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LocalizationTextSyncer_TextCompSyncData, "", "LocalizationTextSyncer/TextCompSyncData");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: LocalizationTextSyncer/TextCompSyncData
struct CORDL_TYPE LocalizationTextSyncer_TextCompSyncData {
public:
// Declarations
/// @brief Method GetOverrideForLanguage, addr 0x5a68b9c, size 0x144, virtual false, abstract: false, final false
inline bool GetOverrideForLanguage(::by_ref<::GlobalNamespace::LocalisationFontPair>  fontData) ;

// Ctor Parameters []
// @brief default ctor
constexpr LocalizationTextSyncer_TextCompSyncData() ;

// Ctor Parameters [CppParam { name: "textComponent", ty: "::UnityW<::TMPro::TMP_Text>", modifiers: "", def_value: None, comment: None }, CppParam { name: "overrideLanguageSettings", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_fontOverrides", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::LocalisationFontPair>*", modifiers: "", def_value: None, comment: None }]
constexpr LocalizationTextSyncer_TextCompSyncData(::UnityW<::TMPro::TMP_Text>  textComponent, bool  overrideLanguageSettings, ::System::Collections::Generic::List_1<::GlobalNamespace::LocalisationFontPair>*  _fontOverrides) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3085};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field textComponent, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  textComponent;

/// @brief Field overrideLanguageSettings, offset: 0x8, size: 0x1, def value: None
 bool  overrideLanguageSettings;

/// @brief Field _fontOverrides, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::LocalisationFontPair>*  _fontOverrides;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LocalizationTextSyncer_TextCompSyncData, textComponent) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalizationTextSyncer_TextCompSyncData, overrideLanguageSettings) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalizationTextSyncer_TextCompSyncData, _fontOverrides) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LocalizationTextSyncer_TextCompSyncData) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
