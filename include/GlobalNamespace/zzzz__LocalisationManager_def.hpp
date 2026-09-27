#pragma once
// IWYU pragma private; include "GlobalNamespace/LocalisationManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LocalisationManager)
namespace GlobalNamespace {
struct LocalisationFontPair;
}
namespace GlobalNamespace {
struct LocalisationManager__Start_d__32;
}
namespace GlobalNamespace {
class LocalisationManager__UpdateLanguage_d__43;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace System {
class Action;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine::Localization::Tables {
class StringTable;
}
namespace UnityEngine::Localization {
class Locale;
}
namespace UnityEngine::Localization {
class LocalizedString;
}
namespace UnityEngine {
class Coroutine;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct SystemLanguage;
}
// Forward declare root types
namespace GlobalNamespace {
class LocalisationManager;
}
namespace GlobalNamespace {
class LocalisationManager__UpdateLanguage_d__43;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::LocalisationManager*);
MARK_REF_T(::GlobalNamespace::LocalisationManager__UpdateLanguage_d__43*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LocalisationManager*, "", "LocalisationManager");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::LocalisationManager__UpdateLanguage_d__43*, "", "LocalisationManager/<UpdateLanguage>d__43");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: LocalisationManager
class CORDL_TYPE LocalisationManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _Start_d__32 = ::GlobalNamespace::LocalisationManager__Start_d__32;

using _UpdateLanguage_d__43 = ::GlobalNamespace::LocalisationManager__UpdateLanguage_d__43;

/// @brief Field _cachedHasInitialised, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get__cachedHasInitialised, put=__cordl_internal_set__cachedHasInitialised)) bool  _cachedHasInitialised;

/// @brief Field _hasInitialised, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__hasInitialised, put=setStaticF__hasInitialised)) bool  _hasInitialised;

/// @brief Field _initLocale, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__initLocale, put=setStaticF__initLocale)) ::UnityW<::UnityEngine::Localization::Locale>  _initLocale;

/// @brief Field _instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__instance, put=setStaticF__instance)) ::UnityW<::GlobalNamespace::LocalisationManager>  _instance;

/// @brief Field _localeDisplayBinding, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__localeDisplayBinding, put=setStaticF__localeDisplayBinding)) ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Localization::Locale>>*  _localeDisplayBinding;

/// @brief Field _localeTablePairs, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__localeTablePairs, put=setStaticF__localeTablePairs)) ::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::UnityEngine::Localization::Tables::StringTable>>*  _localeTablePairs;

/// @brief Field _localisationFontDict, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__localisationFontDict, put=setStaticF__localisationFontDict)) ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::LocalisationFontPair>*  _localisationFontDict;

/// @brief Field _localisationFonts, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__localisationFonts, put=__cordl_internal_set__localisationFonts)) ::System::Collections::Generic::List_1<::GlobalNamespace::LocalisationFontPair>*  _localisationFonts;

/// @brief Field _onLanguageChanged, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__onLanguageChanged, put=setStaticF__onLanguageChanged)) ::System::Action*  _onLanguageChanged;

/// @brief Field _requestCancellationSource, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__requestCancellationSource, put=setStaticF__requestCancellationSource)) ::System::Threading::CancellationTokenSource*  _requestCancellationSource;

/// @brief Field _updateLangCoroutine, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__updateLangCoroutine, put=__cordl_internal_set__updateLangCoroutine)) ::UnityEngine::Coroutine*  _updateLangCoroutine;

/// @brief Method Awake, addr 0x5a642b4, size 0x500, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CacheLocTables, addr 0x5a64978, size 0x458, virtual false, abstract: false, final false
static inline void CacheLocTables() ;

/// @brief Method DefaultLocaleFallback, addr 0x5a65064, size 0x11c, virtual false, abstract: false, final false
static inline void DefaultLocaleFallback(::by_ref<::UnityEngine::Localization::Locale*>  result) ;

/// @brief Method GetAllBindings, addr 0x5a66124, size 0x188, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Localization::Locale>>* GetAllBindings() ;

/// @brief Method GetFontAssetForCurrentLocale, addr 0x5a65c24, size 0x1d0, virtual false, abstract: false, final false
static inline bool GetFontAssetForCurrentLocale(::by_ref<::GlobalNamespace::LocalisationFontPair>  result) ;

/// [RuntimeInitializeOnLoadMethod((UnityEngine.RuntimeInitializeLoadType)1)]
/// @brief Method InitialiseLanguage, addr 0x5a64dd0, size 0x18c, virtual false, abstract: false, final false
static inline void InitialiseLanguage() ;

/// [RuntimeInitializeOnLoadMethod((UnityEngine.RuntimeInitializeLoadType)3)]
/// @brief Method InitialiseLocTables, addr 0x5a648d0, size 0xa8, virtual false, abstract: false, final false
static inline void InitialiseLocTables() ;

/// @brief Method LoadPreviousLanguage, addr 0x5a64f5c, size 0x108, virtual false, abstract: false, final false
static inline void LoadPreviousLanguage(::StringW  languageCode, ::by_ref<::UnityEngine::Localization::Locale*>  result) ;

/// @brief Method LocaleDisplayNameToFriendlyString, addr 0x5a66bd0, size 0x2b8, virtual false, abstract: false, final false
static inline ::StringW LocaleDisplayNameToFriendlyString(::StringW  locTextName, bool  forceEnglishChar) ;

/// @brief Method LocaleToFriendlyString, addr 0x5a669c8, size 0x208, virtual false, abstract: false, final false
static inline ::StringW LocaleToFriendlyString(::UnityEngine::Localization::Locale*  locale, bool  forceEnglishChars) ;

static inline ::GlobalNamespace::LocalisationManager* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5a64858, size 0x78, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnLanguageButtonPressed, addr 0x5a65180, size 0x8c, virtual false, abstract: false, final false
inline void OnLanguageButtonPressed(::StringW  langCode, bool  saveLanguage) ;

/// @brief Method OnSaveLanguage, addr 0x5a65df4, size 0xc0, virtual false, abstract: false, final false
static inline void OnSaveLanguage() ;

/// @brief Method ReconstructBindings, addr 0x5a65398, size 0x248, virtual false, abstract: false, final false
inline void ReconstructBindings() ;

/// @brief Method RegisterOnLanguageChanged, addr 0x5a65a9c, size 0xc4, virtual false, abstract: false, final false
static inline void RegisterOnLanguageChanged(::System::Action*  callback) ;

/// [AsyncStateMachine(typeof(LocalisationManager::<Start>d__32))]
/// @brief Method Start, addr 0x5a647b4, size 0xa4, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method SysLangToLoc, addr 0x5a655e0, size 0x400, virtual false, abstract: false, final false
static inline bool SysLangToLoc(::UnityEngine::SystemLanguage  sysLanguage, ::by_ref<::UnityEngine::Localization::Locale*>  language) ;

/// @brief Method TryGetKeyForCurrentLocale, addr 0x5a662ac, size 0x1a8, virtual false, abstract: false, final false
static inline bool TryGetKeyForCurrentLocale(::StringW  key, ::by_ref<::StringW>  result, ::StringW  defaultResult) ;

/// @brief Method TryGetKeyForEnglishString, addr 0x5a66454, size 0x40c, virtual false, abstract: false, final false
static inline bool TryGetKeyForEnglishString(::StringW  englishString, ::by_ref<::StringW>  result) ;

/// @brief Method TryGetLocaleBinding, addr 0x5a65eb4, size 0x270, virtual false, abstract: false, final false
static inline bool TryGetLocaleBinding(int32_t  binding, ::by_ref<::UnityEngine::Localization::Locale*>  loc) ;

/// @brief Method TryGetLocaleFromCode, addr 0x5a6520c, size 0x11c, virtual false, abstract: false, final false
static inline bool TryGetLocaleFromCode(::StringW  code, ::by_ref<::UnityEngine::Localization::Locale*>  result) ;

/// @brief Method TryGetTranslationForCurrentLocaleWithLocString, addr 0x5a66860, size 0x168, virtual false, abstract: false, final false
static inline bool TryGetTranslationForCurrentLocaleWithLocString(::UnityEngine::Localization::LocalizedString*  key, ::by_ref<::StringW>  result, ::StringW  defaultResult, ::UnityEngine::Object*  context) ;

/// @brief Method TryUpdateLanguage, addr 0x5a65328, size 0x70, virtual false, abstract: false, final false
inline void TryUpdateLanguage(::UnityEngine::Localization::Locale*  newLocale, bool  saveLanguage) ;

/// @brief Method UnregisterOnLanguageChanged, addr 0x5a65b60, size 0xc4, virtual false, abstract: false, final false
static inline void UnregisterOnLanguageChanged(::System::Action*  callback) ;

/// [IteratorStateMachine(typeof(LocalisationManager::<UpdateLanguage>d__43))]
/// @brief Method UpdateLanguage, addr 0x5a659e0, size 0x94, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* UpdateLanguage(::UnityEngine::Localization::Locale*  newLocale, bool  saveLanguage) ;

constexpr bool const& __cordl_internal_get__cachedHasInitialised() const;

constexpr bool& __cordl_internal_get__cachedHasInitialised() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::LocalisationFontPair>* const& __cordl_internal_get__localisationFonts() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::LocalisationFontPair>*& __cordl_internal_get__localisationFonts() ;

constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get__updateLangCoroutine() const;

constexpr ::UnityEngine::Coroutine*& __cordl_internal_get__updateLangCoroutine() ;

constexpr void __cordl_internal_set__cachedHasInitialised(bool  value) ;

constexpr void __cordl_internal_set__localisationFonts(::System::Collections::Generic::List_1<::GlobalNamespace::LocalisationFontPair>*  value) ;

constexpr void __cordl_internal_set__updateLangCoroutine(::UnityEngine::Coroutine*  value) ;

/// @brief Method .ctor, addr 0x5a66e88, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

static inline bool getStaticF__hasInitialised() ;

static inline ::UnityW<::UnityEngine::Localization::Locale> getStaticF__initLocale() ;

static inline ::UnityW<::GlobalNamespace::LocalisationManager> getStaticF__instance() ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Localization::Locale>>* getStaticF__localeDisplayBinding() ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::UnityEngine::Localization::Tables::StringTable>>* getStaticF__localeTablePairs() ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::LocalisationFontPair>* getStaticF__localisationFontDict() ;

static inline ::System::Action* getStaticF__onLanguageChanged() ;

static inline ::System::Threading::CancellationTokenSource* getStaticF__requestCancellationSource() ;

/// @brief Method get_ApplicationRunning, addr 0x5a64218, size 0x9c, virtual false, abstract: false, final false
static inline bool get_ApplicationRunning() ;

/// @brief Method get_CurrentLanguage, addr 0x5a641d0, size 0x8, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Localization::Locale> get_CurrentLanguage() ;

/// @brief Method get_Instance, addr 0x5a64010, size 0x58, virtual false, abstract: false, final false
static inline ::UnityW<::GlobalNamespace::LocalisationManager> get_Instance() ;

/// @brief Method get_IsReady, addr 0x5a64068, size 0x114, virtual false, abstract: false, final false
static inline bool get_IsReady() ;

/// @brief Method get_LanguageSet, addr 0x5a6417c, size 0x54, virtual false, abstract: false, final false
static inline bool get_LanguageSet() ;

/// @brief Method get_LanugageSetPlayerPrefKey, addr 0x5a641d8, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_LanugageSetPlayerPrefKey() ;

static inline void setStaticF__hasInitialised(bool  value) ;

static inline void setStaticF__initLocale(::UnityW<::UnityEngine::Localization::Locale>  value) ;

static inline void setStaticF__instance(::UnityW<::GlobalNamespace::LocalisationManager>  value) ;

static inline void setStaticF__localeDisplayBinding(::System::Collections::Generic::Dictionary_2<int32_t,::UnityW<::UnityEngine::Localization::Locale>>*  value) ;

static inline void setStaticF__localeTablePairs(::System::Collections::Generic::Dictionary_2<::StringW,::UnityW<::UnityEngine::Localization::Tables::StringTable>>*  value) ;

static inline void setStaticF__localisationFontDict(::System::Collections::Generic::Dictionary_2<::StringW,::GlobalNamespace::LocalisationFontPair>*  value) ;

static inline void setStaticF__onLanguageChanged(::System::Action*  value) ;

static inline void setStaticF__requestCancellationSource(::System::Threading::CancellationTokenSource*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocalisationManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocalisationManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LocalisationManager(LocalisationManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocalisationManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocalisationManager(LocalisationManager const& ) = delete;

/// @brief Field ENGLISH_IDENTIFIER offset 0xffffffff size 0x8
static constexpr ::ConstString  ENGLISH_IDENTIFIER{u"en"};

/// @brief Field FRENCH_IDENTIFIER offset 0xffffffff size 0x8
static constexpr ::ConstString  FRENCH_IDENTIFIER{u"fr"};

/// @brief Field GERMAN_IDENTIFIER offset 0xffffffff size 0x8
static constexpr ::ConstString  GERMAN_IDENTIFIER{u"de"};

/// @brief Field ITALIAN_IDENTIFIER offset 0xffffffff size 0x8
static constexpr ::ConstString  ITALIAN_IDENTIFIER{u"it"};

/// @brief Field JAPENESE_IDENTIFIER offset 0xffffffff size 0x8
static constexpr ::ConstString  JAPENESE_IDENTIFIER{u"ja"};

/// @brief Field LANGUAGE_SET_PLAYER_PREF offset 0xffffffff size 0x8
static constexpr ::ConstString  LANGUAGE_SET_PLAYER_PREF{u"has-set-language"};

/// @brief Field LOC_SYSTEM_PLAYER_PREF offset 0xffffffff size 0x8
static constexpr ::ConstString  LOC_SYSTEM_PLAYER_PREF{u"selected-locale"};

/// @brief Field SPANISH_IDENTIFIER offset 0xffffffff size 0x8
static constexpr ::ConstString  SPANISH_IDENTIFIER{u"es"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3079};

/// [SerializeField]
/// @brief Field _localisationFonts, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::LocalisationFontPair>*  ____localisationFonts;

/// @brief Field _cachedHasInitialised, offset: 0x28, size: 0x1, def value: None
 bool  ____cachedHasInitialised;

/// @brief Field _updateLangCoroutine, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Coroutine*  ____updateLangCoroutine;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LocalisationManager, ____localisationFonts) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalisationManager, ____cachedHasInitialised) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalisationManager, ____updateLangCoroutine) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LocalisationManager) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: LocalisationManager/<UpdateLanguage>d__43
class CORDL_TYPE LocalisationManager__UpdateLanguage_d__43 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::GlobalNamespace::LocalisationManager>  __4__this;

/// @brief Field newLocale, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_newLocale, put=__cordl_internal_set_newLocale)) ::UnityW<::UnityEngine::Localization::Locale>  newLocale;

/// @brief Field saveLanguage, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_saveLanguage, put=__cordl_internal_set_saveLanguage)) bool  saveLanguage;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5a67340, size 0x3a4, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::GlobalNamespace::LocalisationManager__UpdateLanguage_d__43* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5a6775c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5a67764, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5a6779c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5a6733c, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::GlobalNamespace::LocalisationManager> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::GlobalNamespace::LocalisationManager>& __cordl_internal_get___4__this() ;

constexpr ::UnityW<::UnityEngine::Localization::Locale> const& __cordl_internal_get_newLocale() const;

constexpr ::UnityW<::UnityEngine::Localization::Locale>& __cordl_internal_get_newLocale() ;

constexpr bool const& __cordl_internal_get_saveLanguage() const;

constexpr bool& __cordl_internal_get_saveLanguage() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::GlobalNamespace::LocalisationManager>  value) ;

constexpr void __cordl_internal_set_newLocale(::UnityW<::UnityEngine::Localization::Locale>  value) ;

constexpr void __cordl_internal_set_saveLanguage(bool  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5a65a74, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocalisationManager__UpdateLanguage_d__43() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocalisationManager__UpdateLanguage_d__43", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LocalisationManager__UpdateLanguage_d__43(LocalisationManager__UpdateLanguage_d__43 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocalisationManager__UpdateLanguage_d__43", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocalisationManager__UpdateLanguage_d__43(LocalisationManager__UpdateLanguage_d__43 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3078};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::LocalisationManager>  _____4__this;

/// @brief Field newLocale, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Localization::Locale>  ___newLocale;

/// @brief Field saveLanguage, offset: 0x30, size: 0x1, def value: None
 bool  ___saveLanguage;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LocalisationManager__UpdateLanguage_d__43, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalisationManager__UpdateLanguage_d__43, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalisationManager__UpdateLanguage_d__43, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalisationManager__UpdateLanguage_d__43, ___newLocale) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalisationManager__UpdateLanguage_d__43, ___saveLanguage) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::LocalisationManager__UpdateLanguage_d__43) == 0x38, "Size mismatch!");

} // namespace end def GlobalNamespace
