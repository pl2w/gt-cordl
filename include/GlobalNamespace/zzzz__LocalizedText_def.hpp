#pragma once
// IWYU pragma private; include "GlobalNamespace/LocalizedText.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__ELocale_def.hpp"
#include "GlobalNamespace/zzzz__TextComponentLegacySupportStore_def.hpp"
#include "UnityEngine/Localization/Components/zzzz__LocalizeStringEvent_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(LocalizedText)
namespace GlobalNamespace {
struct ELocale;
}
namespace GlobalNamespace {
struct LocalisationFontPair;
}
namespace GlobalNamespace {
struct LocalizedText__OnLocaleChanged_d__12;
}
namespace GlobalNamespace {
struct LocalizedText__UpdateString_d__11;
}
namespace GlobalNamespace {
struct TextComponentLegacySupportStore;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace GlobalNamespace {
class LocalizedText;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::LocalizedText*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LocalizedText*, "", "LocalizedText");
// [DisallowMultipleComponent]
// Dependencies ELocale, TextComponentLegacySupportStore, UnityEngine.Localization.Components.LocalizeStringEvent
namespace GlobalNamespace {
// Is value type: false
// CS Name: LocalizedText
class CORDL_TYPE LocalizedText : public ::UnityEngine::Localization::Components::LocalizeStringEvent {
public:
// Declarations
using _OnLocaleChanged_d__12 = ::GlobalNamespace::LocalizedText__OnLocaleChanged_d__12;

using _UpdateString_d__11 = ::GlobalNamespace::LocalizedText__UpdateString_d__11;

 __declspec(property(get=get_TextComponent)) ::GlobalNamespace::TextComponentLegacySupportStore  TextComponent;

/// @brief Field _cachedELocalesList, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__cachedELocalesList, put=setStaticF__cachedELocalesList)) ::System::Collections::Generic::List_1<::GlobalNamespace::ELocale>*  _cachedELocalesList;

/// @brief Field _isLocalized, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get__isLocalized, put=__cordl_internal_set__isLocalized)) bool  _isLocalized;

/// @brief Field _isNewKey, offset 0x41, size 0x1 
 __declspec(property(get=__cordl_internal_get__isNewKey, put=__cordl_internal_set__isNewKey)) bool  _isNewKey;

/// @brief Field _localisationFontsOverrides, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__localisationFontsOverrides, put=__cordl_internal_set__localisationFontsOverrides)) ::System::Collections::Generic::List_1<::GlobalNamespace::LocalisationFontPair>*  _localisationFontsOverrides;

/// @brief Field _newKeyName, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__newKeyName, put=__cordl_internal_set__newKeyName)) ::StringW  _newKeyName;

/// @brief Field _previewLocale, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__previewLocale, put=__cordl_internal_set__previewLocale)) ::GlobalNamespace::ELocale  _previewLocale;

/// @brief Field _textComponent, offset 0x60, size 0x20 
 __declspec(property(get=__cordl_internal_get__textComponent, put=__cordl_internal_set__textComponent)) ::GlobalNamespace::TextComponentLegacySupportStore  _textComponent;

/// @brief Method Awake, addr 0x5a6921c, size 0x1a0, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method GetLocalizedFonts, addr 0x5a6953c, size 0x1f4, virtual false, abstract: false, final false
inline bool GetLocalizedFonts(::by_ref<::GlobalNamespace::LocalisationFontPair>  fontData) ;

/// @brief Method HasFontOverrides, addr 0x5a68e78, size 0x50, virtual false, abstract: false, final false
inline bool HasFontOverrides() ;

static inline ::GlobalNamespace::LocalizedText* New_ctor() ;

/// [AsyncStateMachine(typeof(LocalizedText::<OnLocaleChanged>d__12))]
/// @brief Method OnLocaleChanged, addr 0x5a6947c, size 0xc0, virtual false, abstract: false, final false
inline void OnLocaleChanged(::StringW  newText) ;

/// [AsyncStateMachine(typeof(LocalizedText::<UpdateString>d__11))]
/// @brief Method UpdateString, addr 0x5a693bc, size 0xc0, virtual true, abstract: false, final false
inline void UpdateString(::StringW  value) ;

/// [CompilerGenerated]
/// @brief Method <Awake>b__10_0, addr 0x5a69850, size 0x4, virtual false, abstract: false, final false
inline void _Awake_b__10_0(::StringW  val) ;

constexpr bool const& __cordl_internal_get__isLocalized() const;

constexpr bool& __cordl_internal_get__isLocalized() ;

constexpr bool const& __cordl_internal_get__isNewKey() const;

constexpr bool& __cordl_internal_get__isNewKey() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::LocalisationFontPair>* const& __cordl_internal_get__localisationFontsOverrides() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::LocalisationFontPair>*& __cordl_internal_get__localisationFontsOverrides() ;

constexpr ::StringW const& __cordl_internal_get__newKeyName() const;

constexpr ::StringW& __cordl_internal_get__newKeyName() ;

constexpr ::GlobalNamespace::ELocale const& __cordl_internal_get__previewLocale() const;

constexpr ::GlobalNamespace::ELocale& __cordl_internal_get__previewLocale() ;

constexpr ::GlobalNamespace::TextComponentLegacySupportStore const& __cordl_internal_get__textComponent() const;

constexpr ::GlobalNamespace::TextComponentLegacySupportStore& __cordl_internal_get__textComponent() ;

constexpr void __cordl_internal_set__isLocalized(bool  value) ;

constexpr void __cordl_internal_set__isNewKey(bool  value) ;

constexpr void __cordl_internal_set__localisationFontsOverrides(::System::Collections::Generic::List_1<::GlobalNamespace::LocalisationFontPair>*  value) ;

constexpr void __cordl_internal_set__newKeyName(::StringW  value) ;

constexpr void __cordl_internal_set__previewLocale(::GlobalNamespace::ELocale  value) ;

constexpr void __cordl_internal_set__textComponent(::GlobalNamespace::TextComponentLegacySupportStore  value) ;

/// [CompilerGenerated]
/// [DebuggerHidden]
/// @brief Method <>n__0, addr 0x5a69854, size 0x8, virtual false, abstract: false, final false
inline void __n__0(::StringW  value) ;

/// @brief Method .ctor, addr 0x5a69730, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::List_1<::GlobalNamespace::ELocale>* getStaticF__cachedELocalesList() ;

/// @brief Method get_TextComponent, addr 0x5a68ec8, size 0x6c, virtual false, abstract: false, final false
inline ::GlobalNamespace::TextComponentLegacySupportStore get_TextComponent() ;

static inline void setStaticF__cachedELocalesList(::System::Collections::Generic::List_1<::GlobalNamespace::ELocale>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocalizedText() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocalizedText", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LocalizedText(LocalizedText && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocalizedText", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocalizedText(LocalizedText const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3091};

/// [SerializeField]
/// @brief Field _isLocalized, offset: 0x40, size: 0x1, def value: None
 bool  ____isLocalized;

/// [SerializeField]
/// @brief Field _isNewKey, offset: 0x41, size: 0x1, def value: None
 bool  ____isNewKey;

/// [SerializeField]
/// @brief Field _newKeyName, offset: 0x48, size: 0x8, def value: None
 ::StringW  ____newKeyName;

/// [SerializeField]
/// @brief Field _previewLocale, offset: 0x50, size: 0x4, def value: None
 ::GlobalNamespace::ELocale  ____previewLocale;

/// [SerializeField]
/// @brief Field _localisationFontsOverrides, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::LocalisationFontPair>*  ____localisationFontsOverrides;

/// @brief Field _textComponent, offset: 0x60, size: 0x20, def value: None
 ::GlobalNamespace::TextComponentLegacySupportStore  ____textComponent;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LocalizedText, ____isLocalized) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalizedText, ____isNewKey) == 0x41, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalizedText, ____newKeyName) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalizedText, ____previewLocale) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalizedText, ____localisationFontsOverrides) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalizedText, ____textComponent) == 0x60, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LocalizedText) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
