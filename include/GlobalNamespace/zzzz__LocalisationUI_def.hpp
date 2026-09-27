#pragma once
// IWYU pragma private; include "GlobalNamespace/LocalisationUI.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Collections/Generic/zzzz__KeyValuePair_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LocalisationUI)
namespace GlobalNamespace {
class KIDUIButton;
}
namespace GlobalNamespace {
class LocalisationUI___c__DisplayClass21_0;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace TMPro {
class TMP_FontAsset;
}
namespace TMPro {
class TMP_Text;
}
namespace UnityEngine::Localization {
class Locale;
}
namespace UnityEngine {
class Sprite;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class LocalisationUI;
}
namespace GlobalNamespace {
class LocalisationUI___c__DisplayClass21_0;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::LocalisationUI*);
MARK_REF_T(::GlobalNamespace::LocalisationUI___c__DisplayClass21_0*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LocalisationUI*, "", "LocalisationUI");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LocalisationUI___c__DisplayClass21_0*, "", "LocalisationUI/<>c__DisplayClass21_0");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: LocalisationUI
class CORDL_TYPE LocalisationUI : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c__DisplayClass21_0 = ::GlobalNamespace::LocalisationUI___c__DisplayClass21_0;

/// @brief Field _activeButton, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__activeButton, put=__cordl_internal_set__activeButton)) ::UnityW<::GlobalNamespace::KIDUIButton>  _activeButton;

/// @brief Field _activeSprite, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__activeSprite, put=__cordl_internal_set__activeSprite)) ::UnityW<::UnityEngine::Sprite>  _activeSprite;

/// @brief Field _confirmBtnTxt, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__confirmBtnTxt, put=__cordl_internal_set__confirmBtnTxt)) ::UnityW<::TMPro::TMP_Text>  _confirmBtnTxt;

/// @brief Field _defaultFont, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__defaultFont, put=__cordl_internal_set__defaultFont)) ::UnityW<::TMPro::TMP_FontAsset>  _defaultFont;

/// @brief Field _hasConstructedUI, offset 0x78, size 0x1 
 __declspec(property(get=__cordl_internal_get__hasConstructedUI, put=__cordl_internal_set__hasConstructedUI)) bool  _hasConstructedUI;

/// @brief Field _inactiveSprite, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__inactiveSprite, put=__cordl_internal_set__inactiveSprite)) ::UnityW<::UnityEngine::Sprite>  _inactiveSprite;

/// @brief Field _instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__instance, put=setStaticF__instance)) ::UnityW<::GlobalNamespace::LocalisationUI>  _instance;

/// @brief Field _japaneseFont, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__japaneseFont, put=__cordl_internal_set__japaneseFont)) ::UnityW<::TMPro::TMP_FontAsset>  _japaneseFont;

/// @brief Field _languageButtonGridTransform, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__languageButtonGridTransform, put=__cordl_internal_set__languageButtonGridTransform)) ::UnityW<::UnityEngine::Transform>  _languageButtonGridTransform;

/// @brief Field _languageButtonPrefab, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__languageButtonPrefab, put=__cordl_internal_set__languageButtonPrefab)) ::UnityW<::GlobalNamespace::KIDUIButton>  _languageButtonPrefab;

/// @brief Field _languageButtons, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__languageButtons, put=__cordl_internal_set__languageButtons)) ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::KIDUIButton>>*  _languageButtons;

/// @brief Field _titleTxt, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__titleTxt, put=__cordl_internal_set__titleTxt)) ::UnityW<::TMPro::TMP_Text>  _titleTxt;

/// @brief Field _uiTransform, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__uiTransform, put=__cordl_internal_set__uiTransform)) ::UnityW<::UnityEngine::Transform>  _uiTransform;

/// @brief Method Awake, addr 0x5a677ec, size 0xcc, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CheckSelectedLanguage, addr 0x5a67cdc, size 0x218, virtual false, abstract: false, final false
inline void CheckSelectedLanguage() ;

/// @brief Method ConstructLocalisationUI, addr 0x5a678d0, size 0x40c, virtual false, abstract: false, final false
inline void ConstructLocalisationUI() ;

/// @brief Method GetUITransform, addr 0x5a671ac, size 0x184, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Transform> GetUITransform() ;

static inline ::GlobalNamespace::LocalisationUI* New_ctor() ;

/// @brief Method OnContinueButtonPressed, addr 0x5a681b0, size 0x68, virtual false, abstract: false, final false
inline void OnContinueButtonPressed() ;

/// @brief Method OnDisable, addr 0x5a67fb4, size 0xa0, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5a67ef4, size 0xc0, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnLanguageButtonPressed, addr 0x5a68054, size 0x15c, virtual false, abstract: false, final false
inline void OnLanguageButtonPressed(::GlobalNamespace::KIDUIButton*  objRef, int32_t  languageIndex) ;

/// @brief Method OnLanguageChanged, addr 0x5a68220, size 0x1c8, virtual false, abstract: false, final false
inline void OnLanguageChanged() ;

/// @brief Method Start, addr 0x5a678b8, size 0x18, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::UnityW<::GlobalNamespace::KIDUIButton> const& __cordl_internal_get__activeButton() const;

constexpr ::UnityW<::GlobalNamespace::KIDUIButton>& __cordl_internal_get__activeButton() ;

constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get__activeSprite() const;

constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get__activeSprite() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get__confirmBtnTxt() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get__confirmBtnTxt() ;

constexpr ::UnityW<::TMPro::TMP_FontAsset> const& __cordl_internal_get__defaultFont() const;

constexpr ::UnityW<::TMPro::TMP_FontAsset>& __cordl_internal_get__defaultFont() ;

constexpr bool const& __cordl_internal_get__hasConstructedUI() const;

constexpr bool& __cordl_internal_get__hasConstructedUI() ;

constexpr ::UnityW<::UnityEngine::Sprite> const& __cordl_internal_get__inactiveSprite() const;

constexpr ::UnityW<::UnityEngine::Sprite>& __cordl_internal_get__inactiveSprite() ;

constexpr ::UnityW<::TMPro::TMP_FontAsset> const& __cordl_internal_get__japaneseFont() const;

constexpr ::UnityW<::TMPro::TMP_FontAsset>& __cordl_internal_get__japaneseFont() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__languageButtonGridTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__languageButtonGridTransform() ;

constexpr ::UnityW<::GlobalNamespace::KIDUIButton> const& __cordl_internal_get__languageButtonPrefab() const;

constexpr ::UnityW<::GlobalNamespace::KIDUIButton>& __cordl_internal_get__languageButtonPrefab() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::KIDUIButton>>* const& __cordl_internal_get__languageButtons() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::KIDUIButton>>*& __cordl_internal_get__languageButtons() ;

constexpr ::UnityW<::TMPro::TMP_Text> const& __cordl_internal_get__titleTxt() const;

constexpr ::UnityW<::TMPro::TMP_Text>& __cordl_internal_get__titleTxt() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__uiTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__uiTransform() ;

constexpr void __cordl_internal_set__activeButton(::UnityW<::GlobalNamespace::KIDUIButton>  value) ;

constexpr void __cordl_internal_set__activeSprite(::UnityW<::UnityEngine::Sprite>  value) ;

constexpr void __cordl_internal_set__confirmBtnTxt(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set__defaultFont(::UnityW<::TMPro::TMP_FontAsset>  value) ;

constexpr void __cordl_internal_set__hasConstructedUI(bool  value) ;

constexpr void __cordl_internal_set__inactiveSprite(::UnityW<::UnityEngine::Sprite>  value) ;

constexpr void __cordl_internal_set__japaneseFont(::UnityW<::TMPro::TMP_FontAsset>  value) ;

constexpr void __cordl_internal_set__languageButtonGridTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__languageButtonPrefab(::UnityW<::GlobalNamespace::KIDUIButton>  value) ;

constexpr void __cordl_internal_set__languageButtons(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::KIDUIButton>>*  value) ;

constexpr void __cordl_internal_set__titleTxt(::UnityW<::TMPro::TMP_Text>  value) ;

constexpr void __cordl_internal_set__uiTransform(::UnityW<::UnityEngine::Transform>  value) ;

/// @brief Method .ctor, addr 0x5a683e8, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::GlobalNamespace::LocalisationUI> getStaticF__instance() ;

/// @brief Method get_Instance, addr 0x5a677a4, size 0x48, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::LocalisationUI> get_Instance() ;

static inline void setStaticF__instance(::UnityW<::GlobalNamespace::LocalisationUI>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocalisationUI() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocalisationUI", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LocalisationUI(LocalisationUI && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocalisationUI", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocalisationUI(LocalisationUI const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3081};

/// [Header("Text Components")]
/// [SerializeField]
/// @brief Field _titleTxt, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ____titleTxt;

/// [SerializeField]
/// @brief Field _confirmBtnTxt, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_Text>  ____confirmBtnTxt;

/// [Header("UI Setup")]
/// [SerializeField]
/// @brief Field _languageButtonPrefab, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::KIDUIButton>  ____languageButtonPrefab;

/// [SerializeField]
/// @brief Field _languageButtonGridTransform, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____languageButtonGridTransform;

/// [SerializeField]
/// @brief Field _activeSprite, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Sprite>  ____activeSprite;

/// [SerializeField]
/// @brief Field _inactiveSprite, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Sprite>  ____inactiveSprite;

/// [SerializeField]
/// @brief Field _defaultFont, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_FontAsset>  ____defaultFont;

/// [SerializeField]
/// @brief Field _japaneseFont, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::TMPro::TMP_FontAsset>  ____japaneseFont;

/// @brief Field _uiTransform, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____uiTransform;

/// @brief Field _activeButton, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::KIDUIButton>  ____activeButton;

/// @brief Field _languageButtons, offset: 0x70, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::KIDUIButton>>*  ____languageButtons;

/// @brief Field _hasConstructedUI, offset: 0x78, size: 0x1, def value: None
 bool  ____hasConstructedUI;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LocalisationUI, ____titleTxt) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalisationUI, ____confirmBtnTxt) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalisationUI, ____languageButtonPrefab) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalisationUI, ____languageButtonGridTransform) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalisationUI, ____activeSprite) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalisationUI, ____inactiveSprite) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalisationUI, ____defaultFont) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalisationUI, ____japaneseFont) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalisationUI, ____uiTransform) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalisationUI, ____activeButton) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalisationUI, ____languageButtons) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalisationUI, ____hasConstructedUI) == 0x78, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LocalisationUI) == 0x80, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Collections.Generic.KeyValuePair`2<TKey, TValue>, System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: LocalisationUI/<>c__DisplayClass21_0
class CORDL_TYPE LocalisationUI___c__DisplayClass21_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::LocalisationUI>  __4__this;

/// @brief Field item, offset 0x10, size 0x10 
 __declspec(property(get=__cordl_internal_get_item, put=__cordl_internal_set_item)) ::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityW<::UnityEngine::Localization::Locale>>  item;

/// @brief Field newButton, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_newButton, put=__cordl_internal_set_newButton)) ::UnityW<::GlobalNamespace::KIDUIButton>  newButton;

static inline ::GlobalNamespace::LocalisationUI___c__DisplayClass21_0* New_ctor() ;

/// @brief Method <ConstructLocalisationUI>b__0, addr 0x5a68470, size 0x4c, virtual false, abstract: false, final false
inline void _ConstructLocalisationUI_b__0() ;

constexpr ::UnityW<::GlobalNamespace::LocalisationUI> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::LocalisationUI>& __cordl_internal_get___4__this() ;

constexpr ::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityW<::UnityEngine::Localization::Locale>> const& __cordl_internal_get_item() const;

constexpr ::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityW<::UnityEngine::Localization::Locale>>& __cordl_internal_get_item() ;

constexpr ::UnityW<::GlobalNamespace::KIDUIButton> const& __cordl_internal_get_newButton() const;

constexpr ::UnityW<::GlobalNamespace::KIDUIButton>& __cordl_internal_get_newButton() ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::LocalisationUI>  value) ;

constexpr void __cordl_internal_set_item(::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityW<::UnityEngine::Localization::Locale>>  value) ;

constexpr void __cordl_internal_set_newButton(::UnityW<::GlobalNamespace::KIDUIButton>  value) ;

/// @brief Method .ctor, addr 0x5a68218, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocalisationUI___c__DisplayClass21_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocalisationUI___c__DisplayClass21_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LocalisationUI___c__DisplayClass21_0(LocalisationUI___c__DisplayClass21_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocalisationUI___c__DisplayClass21_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocalisationUI___c__DisplayClass21_0(LocalisationUI___c__DisplayClass21_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3080};

/// @brief Field item, offset: 0x10, size: 0x10, def value: None
 ::System::Collections::Generic::KeyValuePair_2<int32_t,::UnityW<::UnityEngine::Localization::Locale>>  ___item;

/// @brief Field newButton, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::KIDUIButton>  ___newButton;

/// @brief Field <>4__this, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::LocalisationUI>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LocalisationUI___c__DisplayClass21_0, ___item) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalisationUI___c__DisplayClass21_0, ___newButton) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalisationUI___c__DisplayClass21_0, _____4__this) == 0x28, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LocalisationUI___c__DisplayClass21_0) == 0x30, "Size mismatch!");

} // namespace end def GlobalNamespace
