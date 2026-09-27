#pragma once
// IWYU pragma private; include "Modio/Unity/UI/Components/Localization/ModioUILocalizationManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(ModioUILocalizationManager)
namespace Modio::Unity::UI::Components::Localization {
class ModioUILocalizationManager_LocalizationHandler;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Globalization {
class CultureInfo;
}
namespace System {
class Action;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine {
class TextAsset;
}
// Forward declare root types
namespace Modio::Unity::UI::Components::Localization {
class ModioUILocalizationManager;
}
namespace Modio::Unity::UI::Components::Localization {
class ModioUILocalizationManager_LocalizationHandler;
}
// Write type traits
MARK_REF_T(::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager*);
MARK_REF_T(::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager_LocalizationHandler*);
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager*, "Modio.Unity.UI.Components.Localization", "ModioUILocalizationManager");
DEFINE_IL2CPP_CLASS(::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager_LocalizationHandler*, "Modio.Unity.UI.Components.Localization", "ModioUILocalizationManager/LocalizationHandler");
// Dependencies UnityEngine.MonoBehaviour
namespace Modio::Unity::UI::Components::Localization {
// Is value type: false
// CS Name: Modio.Unity.UI.Components.Localization.ModioUILocalizationManager
class CORDL_TYPE ModioUILocalizationManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using LocalizationHandler = ::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager_LocalizationHandler;

/// @brief Field LanguageSetInternal, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_LanguageSetInternal, put=setStaticF_LanguageSetInternal)) ::System::Action*  LanguageSetInternal;

/// @brief Field <CultureInfo>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__CultureInfo_k__BackingField, put=setStaticF__CultureInfo_k__BackingField)) ::System::Globalization::CultureInfo*  _CultureInfo_k__BackingField;

/// @brief Field _currentTable, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__currentTable, put=setStaticF__currentTable)) ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  _currentTable;

/// @brief Field _languageCode, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__languageCode, put=setStaticF__languageCode)) ::StringW  _languageCode;

/// @brief Field _languageTables, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__languageTables, put=setStaticF__languageTables)) ::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>*  _languageTables;

/// @brief Field _locTable, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__locTable, put=__cordl_internal_set__locTable)) ::UnityW<::UnityEngine::TextAsset>  _locTable;

/// @brief Field _setCurrentSystemCulture, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get__setCurrentSystemCulture, put=__cordl_internal_set__setCurrentSystemCulture)) bool  _setCurrentSystemCulture;

/// @brief Field customLocalizationHandler, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_customLocalizationHandler, put=setStaticF_customLocalizationHandler)) ::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager_LocalizationHandler*  customLocalizationHandler;

/// @brief Method Awake, addr 0x9fca694, size 0x474, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method GetLocalizedText, addr 0x9fca4ac, size 0x1e8, virtual false, abstract: false, final false
static inline ::StringW GetLocalizedText(::StringW  key, bool  errorIfMissing) ;

static inline ::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager* New_ctor() ;

/// @brief Method OnDestroy, addr 0x9fcab08, size 0x80, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnPluginInitialized, addr 0x9fcab88, size 0x90, virtual false, abstract: false, final false
inline void OnPluginInitialized() ;

/// @brief Method SetCustomHandler, addr 0x9fc9f4c, size 0xb0, virtual false, abstract: false, final false
static inline void SetCustomHandler(::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager_LocalizationHandler*  handler) ;

/// @brief Method SetLanguageCode, addr 0x9fc9ffc, size 0x4b0, virtual false, abstract: false, final false
inline void SetLanguageCode(::StringW  isoCode) ;

constexpr ::UnityW<::UnityEngine::TextAsset> const& __cordl_internal_get__locTable() const;

constexpr ::UnityW<::UnityEngine::TextAsset>& __cordl_internal_get__locTable() ;

constexpr bool const& __cordl_internal_get__setCurrentSystemCulture() const;

constexpr bool& __cordl_internal_get__setCurrentSystemCulture() ;

constexpr void __cordl_internal_set__locTable(::UnityW<::UnityEngine::TextAsset>  value) ;

constexpr void __cordl_internal_set__setCurrentSystemCulture(bool  value) ;

/// @brief Method .ctor, addr 0x9fcac18, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method add_LanguageSet, addr 0x9fc9be4, size 0xa4, virtual false, abstract: false, final false
static inline void add_LanguageSet(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method add_LanguageSetInternal, addr 0x9fc9c88, size 0xdc, virtual false, abstract: false, final false
static inline void add_LanguageSetInternal(::System::Action*  value) ;

static inline ::System::Action* getStaticF_LanguageSetInternal() ;

static inline ::System::Globalization::CultureInfo* getStaticF__CultureInfo_k__BackingField() ;

static inline ::System::Collections::Generic::Dictionary_2<::StringW,::StringW>* getStaticF__currentTable() ;

static inline ::StringW getStaticF__languageCode() ;

static inline ::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>* getStaticF__languageTables() ;

static inline ::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager_LocalizationHandler* getStaticF_customLocalizationHandler() ;

/// [CompilerGenerated]
/// @brief Method get_CultureInfo, addr 0x9fc9e94, size 0x58, virtual false, abstract: false, final false
static inline ::System::Globalization::CultureInfo* get_CultureInfo() ;

/// @brief Method get_LocalizationExists, addr 0x9fc9aa0, size 0xc0, virtual false, abstract: false, final false
static inline bool get_LocalizationExists() ;

/// @brief Method get_LocalizationReady, addr 0x9fc9b60, size 0x84, virtual false, abstract: false, final false
static inline bool get_LocalizationReady() ;

/// @brief Method remove_LanguageSet, addr 0x9fc9d64, size 0x54, virtual false, abstract: false, final false
static inline void remove_LanguageSet(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_LanguageSetInternal, addr 0x9fc9db8, size 0xdc, virtual false, abstract: false, final false
static inline void remove_LanguageSetInternal(::System::Action*  value) ;

static inline void setStaticF_LanguageSetInternal(::System::Action*  value) ;

static inline void setStaticF__CultureInfo_k__BackingField(::System::Globalization::CultureInfo*  value) ;

static inline void setStaticF__currentTable(::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*  value) ;

static inline void setStaticF__languageCode(::StringW  value) ;

static inline void setStaticF__languageTables(::System::Collections::Generic::List_1<::System::Collections::Generic::Dictionary_2<::StringW,::StringW>*>*  value) ;

static inline void setStaticF_customLocalizationHandler(::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager_LocalizationHandler*  value) ;

/// [CompilerGenerated]
/// @brief Method set_CultureInfo, addr 0x9fc9eec, size 0x60, virtual false, abstract: false, final false
static inline void set_CultureInfo(::System::Globalization::CultureInfo*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioUILocalizationManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioUILocalizationManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioUILocalizationManager(ModioUILocalizationManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioUILocalizationManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioUILocalizationManager(ModioUILocalizationManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27252};

/// [SerializeField]
/// @brief Field _locTable, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::TextAsset>  ____locTable;

/// [SerializeField]
/// @brief Field _setCurrentSystemCulture, offset: 0x28, size: 0x1, def value: None
 bool  ____setCurrentSystemCulture;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager, ____locTable) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager, ____setCurrentSystemCulture) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager) == 0x30, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Components::Localization
// Dependencies System.MulticastDelegate
namespace Modio::Unity::UI::Components::Localization {
// Is value type: false
// CS Name: Modio.Unity.UI.Components.Localization.ModioUILocalizationManager/LocalizationHandler
class CORDL_TYPE ModioUILocalizationManager_LocalizationHandler : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x9fcad84, size 0x28, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::StringW  key, ::StringW  isoLanguageCode, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x9fcadac, size 0xc, virtual true, abstract: false, final false
inline ::StringW EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x9fcad70, size 0x14, virtual true, abstract: false, final false
inline ::StringW Invoke(::StringW  key, ::StringW  isoLanguageCode) ;

static inline ::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager_LocalizationHandler* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x9fcacbc, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ModioUILocalizationManager_LocalizationHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ModioUILocalizationManager_LocalizationHandler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ModioUILocalizationManager_LocalizationHandler(ModioUILocalizationManager_LocalizationHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ModioUILocalizationManager_LocalizationHandler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ModioUILocalizationManager_LocalizationHandler(ModioUILocalizationManager_LocalizationHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{27251};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Modio::Unity::UI::Components::Localization::ModioUILocalizationManager_LocalizationHandler) == 0x80, "Size mismatch!");

} // namespace end def Modio::Unity::UI::Components::Localization
