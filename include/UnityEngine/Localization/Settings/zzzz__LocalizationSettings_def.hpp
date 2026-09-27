#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Settings/LocalizationSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Localization/Settings/zzzz__PreloadBehavior_def.hpp"
#include "UnityEngine/Localization/zzzz__CallbackArray_1_def.hpp"
#include "UnityEngine/Localization/zzzz__LocaleIdentifier_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LocalizationSettings)
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
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine::Localization::Metadata {
class MetadataCollection;
}
namespace UnityEngine::Localization::Settings {
class ILocalesProvider;
}
namespace UnityEngine::Localization::Settings {
class IReset;
}
namespace UnityEngine::Localization::Settings {
class IStartupLocaleSelector;
}
namespace UnityEngine::Localization::Settings {
class LocalizationSettings__InitializeAndCallSelectedLocaleChangedCoroutine_d__85;
}
namespace UnityEngine::Localization::Settings {
class LocalizedAssetDatabase;
}
namespace UnityEngine::Localization::Settings {
class LocalizedStringDatabase;
}
namespace UnityEngine::Localization::Settings {
struct PreloadBehavior;
}
namespace UnityEngine::Localization {
class Locale;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template<typename TObject>
struct AsyncOperationHandle_1;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct AsyncOperationHandle;
}
namespace UnityEngine {
struct RuntimePlatform;
}
// Forward declare root types
namespace UnityEngine::Localization::Settings {
class LocalizationSettings;
}
namespace UnityEngine::Localization::Settings {
class LocalizationSettings__InitializeAndCallSelectedLocaleChangedCoroutine_d__85;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::Settings::LocalizationSettings*);
MARK_REF_T(::UnityEngine::Localization::Settings::LocalizationSettings__InitializeAndCallSelectedLocaleChangedCoroutine_d__85*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::Settings::LocalizationSettings*, "UnityEngine.Localization.Settings", "LocalizationSettings");
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::Settings::LocalizationSettings__InitializeAndCallSelectedLocaleChangedCoroutine_d__85*, "UnityEngine.Localization.Settings", "LocalizationSettings/<InitializeAndCallSelectedLocaleChangedCoroutine>d__85");
// Dependencies UnityEngine.Localization.CallbackArray`1<TDelegate>, UnityEngine.Localization.LocaleIdentifier, UnityEngine.Localization.Settings.PreloadBehavior, UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<TObject>, UnityEngine.ScriptableObject
namespace UnityEngine::Localization::Settings {
// Is value type: false
// CS Name: UnityEngine.Localization.Settings.LocalizationSettings
class CORDL_TYPE LocalizationSettings : public ::UnityEngine::ScriptableObject {
public:
// Declarations
using _InitializeAndCallSelectedLocaleChangedCoroutine_d__85 = ::UnityEngine::Localization::Settings::LocalizationSettings__InitializeAndCallSelectedLocaleChangedCoroutine_d__85;

 __declspec(property(get=get_HasSelectedLocaleChangedSubscribers)) bool  HasSelectedLocaleChangedSubscribers;

 __declspec(property(get=get_IsChangingPlayMode)) bool  IsChangingPlayMode;

 __declspec(property(get=get_IsChangingSelectedLocale, put=set_IsChangingSelectedLocale)) bool  IsChangingSelectedLocale;

 __declspec(property(get=get_IsPlaying)) bool  IsPlaying;

 __declspec(property(get=get_IsPlayingOrWillChangePlaymode)) bool  IsPlayingOrWillChangePlaymode;

 __declspec(property(get=get_Platform)) ::UnityEngine::RuntimePlatform  Platform;

/// @brief Field <IsChangingSelectedLocale>k__BackingField, offset 0xb8, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsChangingSelectedLocale_k__BackingField, put=__cordl_internal_set__IsChangingSelectedLocale_k__BackingField)) bool  _IsChangingSelectedLocale_k__BackingField;

/// @brief Field m_AssetDatabase, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AssetDatabase, put=__cordl_internal_set_m_AssetDatabase)) ::UnityEngine::Localization::Settings::LocalizedAssetDatabase*  m_AssetDatabase;

/// @brief Field m_AvailableLocales, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AvailableLocales, put=__cordl_internal_set_m_AvailableLocales)) ::UnityEngine::Localization::Settings::ILocalesProvider*  m_AvailableLocales;

/// @brief Field m_InitializeSynchronously, offset 0x54, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_InitializeSynchronously, put=__cordl_internal_set_m_InitializeSynchronously)) bool  m_InitializeSynchronously;

/// @brief Field m_InitializingOperationHandle, offset 0x58, size 0x18 
 __declspec(property(get=__cordl_internal_get_m_InitializingOperationHandle, put=__cordl_internal_set_m_InitializingOperationHandle)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::Localization::Settings::LocalizationSettings>>  m_InitializingOperationHandle;

/// @brief Field m_Metadata, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Metadata, put=__cordl_internal_set_m_Metadata)) ::UnityEngine::Localization::Metadata::MetadataCollection*  m_Metadata;

/// @brief Field m_PreloadBehavior, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_PreloadBehavior, put=__cordl_internal_set_m_PreloadBehavior)) ::UnityEngine::Localization::Settings::PreloadBehavior  m_PreloadBehavior;

/// @brief Field m_ProjectLocale, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ProjectLocale, put=__cordl_internal_set_m_ProjectLocale)) ::UnityW<::UnityEngine::Localization::Locale>  m_ProjectLocale;

/// @brief Field m_ProjectLocaleIdentifier, offset 0x40, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_ProjectLocaleIdentifier, put=__cordl_internal_set_m_ProjectLocaleIdentifier)) ::UnityEngine::Localization::LocaleIdentifier  m_ProjectLocaleIdentifier;

/// @brief Field m_SelectedLocaleAsync, offset 0x70, size 0x18 
 __declspec(property(get=__cordl_internal_get_m_SelectedLocaleAsync, put=__cordl_internal_set_m_SelectedLocaleAsync)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::Localization::Locale>>  m_SelectedLocaleAsync;

/// @brief Field m_SelectedLocaleChanged, offset 0x90, size 0x28 
 __declspec(property(get=__cordl_internal_get_m_SelectedLocaleChanged, put=__cordl_internal_set_m_SelectedLocaleChanged)) ::UnityEngine::Localization::CallbackArray_1<::System::Action_1<::UnityW<::UnityEngine::Localization::Locale>>*>  m_SelectedLocaleChanged;

/// @brief Field m_StartupSelectors, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_StartupSelectors, put=__cordl_internal_set_m_StartupSelectors)) ::System::Collections::Generic::List_1<::UnityEngine::Localization::Settings::IStartupLocaleSelector*>*  m_StartupSelectors;

/// @brief Field m_StringDatabase, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_StringDatabase, put=__cordl_internal_set_m_StringDatabase)) ::UnityEngine::Localization::Settings::LocalizedStringDatabase*  m_StringDatabase;

/// @brief Field s_Instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Instance, put=setStaticF_s_Instance)) ::UnityW<::UnityEngine::Localization::Settings::LocalizationSettings>  s_Instance;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Convert operator to "::UnityEngine::Localization::Settings::IReset"
constexpr operator  ::UnityEngine::Localization::Settings::IReset*() noexcept;

/// @brief Method ForceRefresh, addr 0xb01f250, size 0xa4, virtual false, abstract: false, final false
inline void ForceRefresh() ;

/// @brief Method GetAssetDatabase, addr 0xb01f230, size 0x8, virtual true, abstract: false, final false
inline ::UnityEngine::Localization::Settings::LocalizedAssetDatabase* GetAssetDatabase() ;

/// @brief Method GetAvailableLocales, addr 0xb01f220, size 0x8, virtual true, abstract: false, final false
inline ::UnityEngine::Localization::Settings::ILocalesProvider* GetAvailableLocales() ;

/// @brief Method GetInitializationOperation, addr 0xb01ef90, size 0x210, virtual true, abstract: false, final false
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::Localization::Settings::LocalizationSettings>> GetInitializationOperation() ;

/// @brief Method GetInstanceDontCreateDefault, addr 0xb01e2b4, size 0x94, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Localization::Settings::LocalizationSettings> GetInstanceDontCreateDefault() ;

/// @brief Method GetMetadata, addr 0xb01f248, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::Metadata::MetadataCollection* GetMetadata() ;

/// @brief Method GetOrCreateSettings, addr 0xb01e6dc, size 0xbc, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Localization::Settings::LocalizationSettings> GetOrCreateSettings() ;

/// @brief Method GetSelectedLocale, addr 0xb020324, size 0xcc, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::Localization::Locale> GetSelectedLocale() ;

/// @brief Method GetSelectedLocaleAsync, addr 0xb0200a4, size 0x280, virtual true, abstract: false, final false
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::Localization::Locale>> GetSelectedLocaleAsync() ;

/// @brief Method GetStartupLocaleSelectors, addr 0xb01f210, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityEngine::Localization::Settings::IStartupLocaleSelector*>* GetStartupLocaleSelectors() ;

/// @brief Method GetStringDatabase, addr 0xb01f240, size 0x8, virtual true, abstract: false, final false
inline ::UnityEngine::Localization::Settings::LocalizedStringDatabase* GetStringDatabase() ;

/// [IteratorStateMachine(typeof(UnityEngine.Localization.Settings.LocalizationSettings::<InitializeAndCallSelectedLocaleChangedCoroutine>d__85))]
/// @brief Method InitializeAndCallSelectedLocaleChangedCoroutine, addr 0xb01f66c, size 0x88, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* InitializeAndCallSelectedLocaleChangedCoroutine(::UnityEngine::Localization::Locale*  locale) ;

/// @brief Method InvokeSelectedLocaleChanged, addr 0xb01f2f4, size 0x1e0, virtual false, abstract: false, final false
inline void InvokeSelectedLocaleChanged(::UnityEngine::Localization::Locale*  locale) ;

static inline ::UnityEngine::Localization::Settings::LocalizationSettings* New_ctor() ;

/// @brief Method OnEnable, addr 0xb01eedc, size 0xb4, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnLocaleRemoved, addr 0xb0203f0, size 0xe0, virtual true, abstract: false, final false
inline void OnLocaleRemoved(::UnityEngine::Localization::Locale*  locale) ;

/// @brief Method ResetState, addr 0xb0204d0, size 0x184, virtual true, abstract: false, final true
inline void ResetState() ;

/// @brief Method SelectActiveLocale, addr 0xb01f71c, size 0x134, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Localization::Locale> SelectActiveLocale() ;

/// @brief Method SelectLocaleUsingStartupSelectors, addr 0xb01f850, size 0x854, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::Localization::Locale> SelectLocaleUsingStartupSelectors() ;

/// @brief Method SendLocaleChangedEvents, addr 0xb01f4d4, size 0x198, virtual false, abstract: false, final false
inline void SendLocaleChangedEvents(::UnityEngine::Localization::Locale*  locale) ;

/// @brief Method SetAssetDatabase, addr 0xb01f228, size 0x8, virtual false, abstract: false, final false
inline void SetAssetDatabase(::UnityEngine::Localization::Settings::LocalizedAssetDatabase*  database) ;

/// @brief Method SetAvailableLocales, addr 0xb01f218, size 0x8, virtual false, abstract: false, final false
inline void SetAvailableLocales(::UnityEngine::Localization::Settings::ILocalesProvider*  available) ;

/// @brief Method SetSelectedLocale, addr 0xb01e8b4, size 0x254, virtual false, abstract: false, final false
inline void SetSelectedLocale(::UnityEngine::Localization::Locale*  locale) ;

/// @brief Method SetStringDatabase, addr 0xb01f238, size 0x8, virtual false, abstract: false, final false
inline void SetStringDatabase(::UnityEngine::Localization::Settings::LocalizedStringDatabase*  database) ;

/// @brief Method System.IDisposable.Dispose, addr 0xb020654, size 0x2e0, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

/// @brief Method ValidateSettingsExist, addr 0xb0107cc, size 0x74, virtual false, abstract: false, final false
static inline void ValidateSettingsExist(::StringW  error) ;

/// [CompilerGenerated]
/// @brief Method <GetSelectedLocaleAsync>b__90_0, addr 0xb020d24, size 0x8c, virtual false, abstract: false, final false
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::Localization::Locale>> _GetSelectedLocaleAsync_b__90_0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  op) ;

constexpr bool const& __cordl_internal_get__IsChangingSelectedLocale_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsChangingSelectedLocale_k__BackingField() ;

constexpr ::UnityEngine::Localization::Settings::LocalizedAssetDatabase* const& __cordl_internal_get_m_AssetDatabase() const;

constexpr ::UnityEngine::Localization::Settings::LocalizedAssetDatabase*& __cordl_internal_get_m_AssetDatabase() ;

constexpr ::UnityEngine::Localization::Settings::ILocalesProvider* const& __cordl_internal_get_m_AvailableLocales() const;

constexpr ::UnityEngine::Localization::Settings::ILocalesProvider*& __cordl_internal_get_m_AvailableLocales() ;

constexpr bool const& __cordl_internal_get_m_InitializeSynchronously() const;

constexpr bool& __cordl_internal_get_m_InitializeSynchronously() ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::Localization::Settings::LocalizationSettings>> const& __cordl_internal_get_m_InitializingOperationHandle() const;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::Localization::Settings::LocalizationSettings>>& __cordl_internal_get_m_InitializingOperationHandle() ;

constexpr ::UnityEngine::Localization::Metadata::MetadataCollection* const& __cordl_internal_get_m_Metadata() const;

constexpr ::UnityEngine::Localization::Metadata::MetadataCollection*& __cordl_internal_get_m_Metadata() ;

constexpr ::UnityEngine::Localization::Settings::PreloadBehavior const& __cordl_internal_get_m_PreloadBehavior() const;

constexpr ::UnityEngine::Localization::Settings::PreloadBehavior& __cordl_internal_get_m_PreloadBehavior() ;

constexpr ::UnityW<::UnityEngine::Localization::Locale> const& __cordl_internal_get_m_ProjectLocale() const;

constexpr ::UnityW<::UnityEngine::Localization::Locale>& __cordl_internal_get_m_ProjectLocale() ;

constexpr ::UnityEngine::Localization::LocaleIdentifier const& __cordl_internal_get_m_ProjectLocaleIdentifier() const;

constexpr ::UnityEngine::Localization::LocaleIdentifier& __cordl_internal_get_m_ProjectLocaleIdentifier() ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::Localization::Locale>> const& __cordl_internal_get_m_SelectedLocaleAsync() const;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::Localization::Locale>>& __cordl_internal_get_m_SelectedLocaleAsync() ;

constexpr ::UnityEngine::Localization::CallbackArray_1<::System::Action_1<::UnityW<::UnityEngine::Localization::Locale>>*> const& __cordl_internal_get_m_SelectedLocaleChanged() const;

constexpr ::UnityEngine::Localization::CallbackArray_1<::System::Action_1<::UnityW<::UnityEngine::Localization::Locale>>*>& __cordl_internal_get_m_SelectedLocaleChanged() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Localization::Settings::IStartupLocaleSelector*>* const& __cordl_internal_get_m_StartupSelectors() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::Localization::Settings::IStartupLocaleSelector*>*& __cordl_internal_get_m_StartupSelectors() ;

constexpr ::UnityEngine::Localization::Settings::LocalizedStringDatabase* const& __cordl_internal_get_m_StringDatabase() const;

constexpr ::UnityEngine::Localization::Settings::LocalizedStringDatabase*& __cordl_internal_get_m_StringDatabase() ;

constexpr void __cordl_internal_set__IsChangingSelectedLocale_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_m_AssetDatabase(::UnityEngine::Localization::Settings::LocalizedAssetDatabase*  value) ;

constexpr void __cordl_internal_set_m_AvailableLocales(::UnityEngine::Localization::Settings::ILocalesProvider*  value) ;

constexpr void __cordl_internal_set_m_InitializeSynchronously(bool  value) ;

constexpr void __cordl_internal_set_m_InitializingOperationHandle(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::Localization::Settings::LocalizationSettings>>  value) ;

constexpr void __cordl_internal_set_m_Metadata(::UnityEngine::Localization::Metadata::MetadataCollection*  value) ;

constexpr void __cordl_internal_set_m_PreloadBehavior(::UnityEngine::Localization::Settings::PreloadBehavior  value) ;

constexpr void __cordl_internal_set_m_ProjectLocale(::UnityW<::UnityEngine::Localization::Locale>  value) ;

constexpr void __cordl_internal_set_m_ProjectLocaleIdentifier(::UnityEngine::Localization::LocaleIdentifier  value) ;

constexpr void __cordl_internal_set_m_SelectedLocaleAsync(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::Localization::Locale>>  value) ;

constexpr void __cordl_internal_set_m_SelectedLocaleChanged(::UnityEngine::Localization::CallbackArray_1<::System::Action_1<::UnityW<::UnityEngine::Localization::Locale>>*>  value) ;

constexpr void __cordl_internal_set_m_StartupSelectors(::System::Collections::Generic::List_1<::UnityEngine::Localization::Settings::IStartupLocaleSelector*>*  value) ;

constexpr void __cordl_internal_set_m_StringDatabase(::UnityEngine::Localization::Settings::LocalizedStringDatabase*  value) ;

/// @brief Method .ctor, addr 0xb020934, size 0x348, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method add_OnSelectedLocaleChanged, addr 0xb01e5e4, size 0x5c, virtual false, abstract: false, final false
inline void add_OnSelectedLocaleChanged(::System::Action_1<::UnityW<::UnityEngine::Localization::Locale>>*  value) ;

/// @brief Method add_SelectedLocaleChanged, addr 0xb010840, size 0x20, virtual false, abstract: false, final false
static inline void add_SelectedLocaleChanged(::System::Action_1<::UnityW<::UnityEngine::Localization::Locale>>*  value) ;

static inline ::UnityW<::UnityEngine::Localization::Settings::LocalizationSettings> getStaticF_s_Instance() ;

/// @brief Method get_AssetDatabase, addr 0xb00f3a8, size 0x20, virtual false, abstract: false, final false
static inline ::UnityEngine::Localization::Settings::LocalizedAssetDatabase* get_AssetDatabase() ;

/// @brief Method get_AvailableLocales, addr 0xb00e93c, size 0x20, virtual false, abstract: false, final false
static inline ::UnityEngine::Localization::Settings::ILocalesProvider* get_AvailableLocales() ;

/// @brief Method get_HasSelectedLocaleChangedSubscribers, addr 0xb01e5a0, size 0x44, virtual false, abstract: false, final false
inline bool get_HasSelectedLocaleChangedSubscribers() ;

/// @brief Method get_HasSettings, addr 0xb01b140, size 0x88, virtual false, abstract: false, final false
static inline bool get_HasSettings() ;

/// @brief Method get_InitializationOperation, addr 0xb01e698, size 0x44, virtual false, abstract: false, final false
static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::Localization::Settings::LocalizationSettings>> get_InitializationOperation() ;

/// @brief Method get_InitializeSynchronously, addr 0xb01ee60, size 0x1c, virtual false, abstract: false, final false
static inline bool get_InitializeSynchronously() ;

/// @brief Method get_Instance, addr 0xb01d93c, size 0x78, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Localization::Settings::LocalizationSettings> get_Instance() ;

/// @brief Method get_IsChangingPlayMode, addr 0xb01f1f0, size 0x18, virtual false, abstract: false, final false
inline bool get_IsChangingPlayMode() ;

/// [CompilerGenerated]
/// @brief Method get_IsChangingSelectedLocale, addr 0xb01e590, size 0x8, virtual false, abstract: false, final false
inline bool get_IsChangingSelectedLocale() ;

/// @brief Method get_IsPlaying, addr 0xb01f1a0, size 0x50, virtual false, abstract: false, final false
inline bool get_IsPlaying() ;

/// @brief Method get_IsPlayingOrWillChangePlaymode, addr 0xb01d9b4, size 0x8, virtual false, abstract: false, final false
inline bool get_IsPlayingOrWillChangePlaymode() ;

/// @brief Method get_Metadata, addr 0xb01e878, size 0x1c, virtual false, abstract: false, final false
static inline ::UnityEngine::Localization::Metadata::MetadataCollection* get_Metadata() ;

/// @brief Method get_Platform, addr 0xb01f208, size 0x8, virtual true, abstract: false, final false
inline ::UnityEngine::RuntimePlatform get_Platform() ;

/// @brief Method get_PreloadBehavior, addr 0xb01eea0, size 0x1c, virtual false, abstract: false, final false
static inline ::UnityEngine::Localization::Settings::PreloadBehavior get_PreloadBehavior() ;

/// @brief Method get_ProjectLocale, addr 0xb01eb08, size 0x2b4, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Localization::Locale> get_ProjectLocale() ;

/// @brief Method get_SelectedLocale, addr 0xb01132c, size 0x24, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Localization::Locale> get_SelectedLocale() ;

/// @brief Method get_SelectedLocaleAsync, addr 0xb01303c, size 0x48, virtual false, abstract: false, final false
static inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::Localization::Locale>> get_SelectedLocaleAsync() ;

/// @brief Method get_StartupLocaleSelectors, addr 0xb01e7f0, size 0x1c, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::UnityEngine::Localization::Settings::IStartupLocaleSelector*>* get_StartupLocaleSelectors() ;

/// @brief Method get_StringDatabase, addr 0xb0105ec, size 0x20, virtual false, abstract: false, final false
static inline ::UnityEngine::Localization::Settings::LocalizedStringDatabase* get_StringDatabase() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Convert to "::UnityEngine::Localization::Settings::IReset"
constexpr ::UnityEngine::Localization::Settings::IReset* i___UnityEngine__Localization__Settings__IReset() noexcept;

/// @brief Method remove_OnSelectedLocaleChanged, addr 0xb01e640, size 0x58, virtual false, abstract: false, final false
inline void remove_OnSelectedLocaleChanged(::System::Action_1<::UnityW<::UnityEngine::Localization::Locale>>*  value) ;

/// @brief Method remove_SelectedLocaleChanged, addr 0xb0108f4, size 0x20, virtual false, abstract: false, final false
static inline void remove_SelectedLocaleChanged(::System::Action_1<::UnityW<::UnityEngine::Localization::Locale>>*  value) ;

static inline void setStaticF_s_Instance(::UnityW<::UnityEngine::Localization::Settings::LocalizationSettings>  value) ;

/// @brief Method set_AssetDatabase, addr 0xb01e830, size 0x24, virtual false, abstract: false, final false
static inline void set_AssetDatabase(::UnityEngine::Localization::Settings::LocalizedAssetDatabase*  value) ;

/// @brief Method set_AvailableLocales, addr 0xb01e80c, size 0x24, virtual false, abstract: false, final false
static inline void set_AvailableLocales(::UnityEngine::Localization::Settings::ILocalesProvider*  value) ;

/// @brief Method set_InitializeSynchronously, addr 0xb01ee7c, size 0x24, virtual false, abstract: false, final false
static inline void set_InitializeSynchronously(bool  value) ;

/// @brief Method set_Instance, addr 0xb01e798, size 0x58, virtual false, abstract: false, final false
static inline void set_Instance(::UnityEngine::Localization::Settings::LocalizationSettings*  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsChangingSelectedLocale, addr 0xb01e598, size 0x8, virtual false, abstract: false, final false
inline void set_IsChangingSelectedLocale(bool  value) ;

/// @brief Method set_PreloadBehavior, addr 0xb01eebc, size 0x20, virtual false, abstract: false, final false
static inline void set_PreloadBehavior(::UnityEngine::Localization::Settings::PreloadBehavior  value) ;

/// @brief Method set_ProjectLocale, addr 0xb01edbc, size 0xa4, virtual false, abstract: false, final false
static inline void set_ProjectLocale(::UnityEngine::Localization::Locale*  value) ;

/// @brief Method set_SelectedLocale, addr 0xb01e894, size 0x20, virtual false, abstract: false, final false
static inline void set_SelectedLocale(::UnityEngine::Localization::Locale*  value) ;

/// @brief Method set_StringDatabase, addr 0xb01e854, size 0x24, virtual false, abstract: false, final false
static inline void set_StringDatabase(::UnityEngine::Localization::Settings::LocalizedStringDatabase*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocalizationSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocalizationSettings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LocalizationSettings(LocalizationSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocalizationSettings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocalizationSettings(LocalizationSettings const& ) = delete;

/// @brief Field ConfigEditorLocale offset 0xffffffff size 0x8
static constexpr ::ConstString  ConfigEditorLocale{u"com.unity.localization-edit-locale"};

/// @brief Field ConfigName offset 0xffffffff size 0x8
static constexpr ::ConstString  ConfigName{u"com.unity.localization.settings"};

/// @brief Field IgnoreSettings offset 0xffffffff size 0x8
static constexpr ::ConstString  IgnoreSettings{u"IgnoreSettings"};

/// @brief Field LocaleLabel offset 0xffffffff size 0x8
static constexpr ::ConstString  LocaleLabel{u"Locale"};

/// @brief Field PreloadLabel offset 0xffffffff size 0x8
static constexpr ::ConstString  PreloadLabel{u"Preload"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25107};

/// [SerializeReference]
/// @brief Field m_StartupSelectors, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::Localization::Settings::IStartupLocaleSelector*>*  ___m_StartupSelectors;

/// [SerializeReference]
/// @brief Field m_AvailableLocales, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Localization::Settings::ILocalesProvider*  ___m_AvailableLocales;

/// [SerializeReference]
/// @brief Field m_AssetDatabase, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Localization::Settings::LocalizedAssetDatabase*  ___m_AssetDatabase;

/// [SerializeReference]
/// @brief Field m_StringDatabase, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Localization::Settings::LocalizedStringDatabase*  ___m_StringDatabase;

/// [MetadataType((UnityEngine.Localization.Metadata.MetadataType)256)]
/// [SerializeField]
/// @brief Field m_Metadata, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Localization::Metadata::MetadataCollection*  ___m_Metadata;

/// [SerializeField]
/// @brief Field m_ProjectLocaleIdentifier, offset: 0x40, size: 0x10, def value: None
 ::UnityEngine::Localization::LocaleIdentifier  ___m_ProjectLocaleIdentifier;

/// [SerializeField]
/// @brief Field m_PreloadBehavior, offset: 0x50, size: 0x4, def value: None
 ::UnityEngine::Localization::Settings::PreloadBehavior  ___m_PreloadBehavior;

/// [SerializeField]
/// @brief Field m_InitializeSynchronously, offset: 0x54, size: 0x1, def value: None
 bool  ___m_InitializeSynchronously;

/// @brief Field m_InitializingOperationHandle, offset: 0x58, size: 0x18, def value: None
 ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::Localization::Settings::LocalizationSettings>>  ___m_InitializingOperationHandle;

/// @brief Field m_SelectedLocaleAsync, offset: 0x70, size: 0x18, def value: None
 ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::Localization::Locale>>  ___m_SelectedLocaleAsync;

/// @brief Field m_ProjectLocale, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Localization::Locale>  ___m_ProjectLocale;

/// @brief Field m_SelectedLocaleChanged, offset: 0x90, size: 0x28, def value: None
 ::UnityEngine::Localization::CallbackArray_1<::System::Action_1<::UnityW<::UnityEngine::Localization::Locale>>*>  ___m_SelectedLocaleChanged;

/// [CompilerGenerated]
/// @brief Field <IsChangingSelectedLocale>k__BackingField, offset: 0xb8, size: 0x1, def value: None
 bool  ____IsChangingSelectedLocale_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::Settings::LocalizationSettings, ___m_StartupSelectors) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Settings::LocalizationSettings, ___m_AvailableLocales) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Settings::LocalizationSettings, ___m_AssetDatabase) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Settings::LocalizationSettings, ___m_StringDatabase) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Settings::LocalizationSettings, ___m_Metadata) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Settings::LocalizationSettings, ___m_ProjectLocaleIdentifier) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Settings::LocalizationSettings, ___m_PreloadBehavior) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Settings::LocalizationSettings, ___m_InitializeSynchronously) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Settings::LocalizationSettings, ___m_InitializingOperationHandle) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Settings::LocalizationSettings, ___m_SelectedLocaleAsync) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Settings::LocalizationSettings, ___m_ProjectLocale) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Settings::LocalizationSettings, ___m_SelectedLocaleChanged) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Settings::LocalizationSettings, ____IsChangingSelectedLocale_k__BackingField) == 0xb8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::Settings::LocalizationSettings) == 0xc0, "Size mismatch!");

} // namespace end def UnityEngine::Localization::Settings
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::Localization::Settings {
// Is value type: false
// CS Name: UnityEngine.Localization.Settings.LocalizationSettings/<InitializeAndCallSelectedLocaleChangedCoroutine>d__85
class CORDL_TYPE LocalizationSettings__InitializeAndCallSelectedLocaleChangedCoroutine_d__85 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::UnityEngine::Localization::Settings::LocalizationSettings>  __4__this;

/// @brief Field locale, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_locale, put=__cordl_internal_set_locale)) ::UnityW<::UnityEngine::Localization::Locale>  locale;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0xb020db4, size 0xc0, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::UnityEngine::Localization::Settings::LocalizationSettings__InitializeAndCallSelectedLocaleChangedCoroutine_d__85* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0xb020e74, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0xb020e7c, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0xb020eb4, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0xb020db0, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::UnityEngine::Localization::Settings::LocalizationSettings> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::UnityEngine::Localization::Settings::LocalizationSettings>& __cordl_internal_get___4__this() ;

constexpr ::UnityW<::UnityEngine::Localization::Locale> const& __cordl_internal_get_locale() const;

constexpr ::UnityW<::UnityEngine::Localization::Locale>& __cordl_internal_get_locale() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::UnityEngine::Localization::Settings::LocalizationSettings>  value) ;

constexpr void __cordl_internal_set_locale(::UnityW<::UnityEngine::Localization::Locale>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0xb01f6f4, size 0x28, virtual false, abstract: false, final false
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
constexpr LocalizationSettings__InitializeAndCallSelectedLocaleChangedCoroutine_d__85() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocalizationSettings__InitializeAndCallSelectedLocaleChangedCoroutine_d__85", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LocalizationSettings__InitializeAndCallSelectedLocaleChangedCoroutine_d__85(LocalizationSettings__InitializeAndCallSelectedLocaleChangedCoroutine_d__85 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocalizationSettings__InitializeAndCallSelectedLocaleChangedCoroutine_d__85", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocalizationSettings__InitializeAndCallSelectedLocaleChangedCoroutine_d__85(LocalizationSettings__InitializeAndCallSelectedLocaleChangedCoroutine_d__85 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25106};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Localization::Settings::LocalizationSettings>  _____4__this;

/// @brief Field locale, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Localization::Locale>  ___locale;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::Settings::LocalizationSettings__InitializeAndCallSelectedLocaleChangedCoroutine_d__85, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Settings::LocalizationSettings__InitializeAndCallSelectedLocaleChangedCoroutine_d__85, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Settings::LocalizationSettings__InitializeAndCallSelectedLocaleChangedCoroutine_d__85, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Settings::LocalizationSettings__InitializeAndCallSelectedLocaleChangedCoroutine_d__85, ___locale) == 0x28, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::Settings::LocalizationSettings__InitializeAndCallSelectedLocaleChangedCoroutine_d__85) == 0x30, "Size mismatch!");

} // namespace end def UnityEngine::Localization::Settings
