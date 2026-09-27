#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayFabTitleDataTextDisplay.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(PlayFabTitleDataTextDisplay)
namespace GlobalNamespace {
class IBuildValidation;
}
namespace PlayFab {
class PlayFabError;
}
namespace TMPro {
class TextMeshPro;
}
namespace UnityEngine::Localization {
class LocalizedString;
}
// Forward declare root types
namespace GlobalNamespace {
class PlayFabTitleDataTextDisplay;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::PlayFabTitleDataTextDisplay*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlayFabTitleDataTextDisplay*, "", "PlayFabTitleDataTextDisplay");
// Dependencies UnityEngine.Color, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: PlayFabTitleDataTextDisplay
class CORDL_TYPE PlayFabTitleDataTextDisplay : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field _cachedText, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__cachedText, put=__cordl_internal_set__cachedText)) ::StringW  _cachedText;

/// @brief Field _fallbackLocalizedText, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__fallbackLocalizedText, put=__cordl_internal_set__fallbackLocalizedText)) ::UnityEngine::Localization::LocalizedString*  _fallbackLocalizedText;

/// @brief Field _hasRegisteredCallback, offset 0x60, size 0x1 
 __declspec(property(get=__cordl_internal_get__hasRegisteredCallback, put=__cordl_internal_set__hasRegisteredCallback)) bool  _hasRegisteredCallback;

/// @brief Field defaultTextColor, offset 0x38, size 0x10 
 __declspec(property(get=__cordl_internal_get_defaultTextColor, put=__cordl_internal_set_defaultTextColor)) ::UnityEngine::Color  defaultTextColor;

/// @brief Field fallbackText, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_fallbackText, put=__cordl_internal_set_fallbackText)) ::StringW  fallbackText;

/// @brief Field newUpdateColor, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_newUpdateColor, put=__cordl_internal_set_newUpdateColor)) ::UnityEngine::Color  newUpdateColor;

 __declspec(property(get=get_playFabKeyValue)) ::StringW  playFabKeyValue;

/// @brief Field playfabKey, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_playfabKey, put=__cordl_internal_set_playfabKey)) ::StringW  playfabKey;

/// @brief Field textBox, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_textBox, put=__cordl_internal_set_textBox)) ::UnityW<::TMPro::TextMeshPro>  textBox;

/// @brief Convert operator to "::GlobalNamespace::IBuildValidation"
constexpr operator  ::GlobalNamespace::IBuildValidation*() noexcept;

/// @brief Method BuildValidationCheck, addr 0x59a328c, size 0xb8, virtual true, abstract: false, final true
inline bool BuildValidationCheck() ;

/// @brief Method ChangeTitleDataAtRuntime, addr 0x59a3344, size 0x27c, virtual false, abstract: false, final false
inline void ChangeTitleDataAtRuntime(::StringW  newTitleDataKey) ;

static inline ::GlobalNamespace::PlayFabTitleDataTextDisplay* New_ctor() ;

/// @brief Method OnDestroy, addr 0x59a31b8, size 0xd4, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x59a2aa0, size 0xac, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x59a2970, size 0x130, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnLanguageChanged, addr 0x59a2e04, size 0x180, virtual false, abstract: false, final false
inline void OnLanguageChanged() ;

/// @brief Method OnNewTitleDataAdded, addr 0x59a310c, size 0xac, virtual false, abstract: false, final false
inline void OnNewTitleDataAdded(::StringW  key) ;

/// @brief Method OnPlayFabError, addr 0x59a2b4c, size 0x2b8, virtual false, abstract: false, final false
inline void OnPlayFabError(::PlayFab::PlayFabError*  error) ;

/// @brief Method OnTitleDataRequestComplete, addr 0x59a2f84, size 0x188, virtual false, abstract: false, final false
inline void OnTitleDataRequestComplete(::StringW  titleDataResult) ;

/// @brief Method Start, addr 0x59a2678, size 0x2f8, virtual false, abstract: false, final false
inline void Start() ;

constexpr ::StringW const& __cordl_internal_get__cachedText() const;

constexpr ::StringW& __cordl_internal_get__cachedText() ;

constexpr ::UnityEngine::Localization::LocalizedString* const& __cordl_internal_get__fallbackLocalizedText() const;

constexpr ::UnityEngine::Localization::LocalizedString*& __cordl_internal_get__fallbackLocalizedText() ;

constexpr bool const& __cordl_internal_get__hasRegisteredCallback() const;

constexpr bool& __cordl_internal_get__hasRegisteredCallback() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_defaultTextColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_defaultTextColor() ;

constexpr ::StringW const& __cordl_internal_get_fallbackText() const;

constexpr ::StringW& __cordl_internal_get_fallbackText() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_newUpdateColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_newUpdateColor() ;

constexpr ::StringW const& __cordl_internal_get_playfabKey() const;

constexpr ::StringW& __cordl_internal_get_playfabKey() ;

constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get_textBox() const;

constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get_textBox() ;

constexpr void __cordl_internal_set__cachedText(::StringW  value) ;

constexpr void __cordl_internal_set__fallbackLocalizedText(::UnityEngine::Localization::LocalizedString*  value) ;

constexpr void __cordl_internal_set__hasRegisteredCallback(bool  value) ;

constexpr void __cordl_internal_set_defaultTextColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_fallbackText(::StringW  value) ;

constexpr void __cordl_internal_set_newUpdateColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_playfabKey(::StringW  value) ;

constexpr void __cordl_internal_set_textBox(::UnityW<::TMPro::TextMeshPro>  value) ;

/// @brief Method .ctor, addr 0x59a35c0, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_playFabKeyValue, addr 0x59a2670, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_playFabKeyValue() ;

/// @brief Convert to "::GlobalNamespace::IBuildValidation"
constexpr ::GlobalNamespace::IBuildValidation* i___GlobalNamespace__IBuildValidation() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PlayFabTitleDataTextDisplay() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PlayFabTitleDataTextDisplay", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PlayFabTitleDataTextDisplay(PlayFabTitleDataTextDisplay && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PlayFabTitleDataTextDisplay", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PlayFabTitleDataTextDisplay(PlayFabTitleDataTextDisplay const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2627};

/// [SerializeField]
/// @brief Field textBox, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::TMPro::TextMeshPro>  ___textBox;

/// [SerializeField]
/// @brief Field newUpdateColor, offset: 0x28, size: 0x10, def value: None
 ::UnityEngine::Color  ___newUpdateColor;

/// [SerializeField]
/// @brief Field defaultTextColor, offset: 0x38, size: 0x10, def value: None
 ::UnityEngine::Color  ___defaultTextColor;

/// [Tooltip("PlayFab Title Data key from where to pull display text")]
/// [SerializeField]
/// @brief Field playfabKey, offset: 0x48, size: 0x8, def value: None
 ::StringW  ___playfabKey;

/// [Tooltip("Text to display when error occurs during fetch")]
/// [TextArea(3, 5)]
/// [SerializeField]
/// @brief Field fallbackText, offset: 0x50, size: 0x8, def value: None
 ::StringW  ___fallbackText;

/// [SerializeField]
/// @brief Field _fallbackLocalizedText, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::Localization::LocalizedString*  ____fallbackLocalizedText;

/// @brief Field _hasRegisteredCallback, offset: 0x60, size: 0x1, def value: None
 bool  ____hasRegisteredCallback;

/// @brief Field _cachedText, offset: 0x68, size: 0x8, def value: None
 ::StringW  ____cachedText;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlayFabTitleDataTextDisplay, ___textBox) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayFabTitleDataTextDisplay, ___newUpdateColor) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayFabTitleDataTextDisplay, ___defaultTextColor) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayFabTitleDataTextDisplay, ___playfabKey) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayFabTitleDataTextDisplay, ___fallbackText) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayFabTitleDataTextDisplay, ____fallbackLocalizedText) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayFabTitleDataTextDisplay, ____hasRegisteredCallback) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PlayFabTitleDataTextDisplay, ____cachedText) == 0x68, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlayFabTitleDataTextDisplay) == 0x70, "Size mismatch!");

} // namespace end def GlobalNamespace
