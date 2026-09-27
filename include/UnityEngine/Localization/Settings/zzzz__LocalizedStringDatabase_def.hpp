#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Settings/LocalizedStringDatabase.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "UnityEngine/Localization/Settings/zzzz__LocalizedDatabase_2_def.hpp"
#include "UnityEngine/Localization/Settings/zzzz__MissingTranslationBehavior_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LocalizedStringDatabase)
namespace System::Collections::Generic {
template<typename T>
class IList_1;
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
namespace UnityEngine::Localization::Settings {
struct FallbackBehavior;
}
namespace UnityEngine::Localization::Settings {
class LocalizedStringDatabase_MissingTranslation;
}
namespace UnityEngine::Localization::Settings {
struct MissingTranslationBehavior;
}
namespace UnityEngine::Localization::SmartFormat::PersistentVariables {
class IVariableGroup;
}
namespace UnityEngine::Localization::SmartFormat {
class SmartFormatter;
}
namespace UnityEngine::Localization::Tables {
class StringTableEntry;
}
namespace UnityEngine::Localization::Tables {
class StringTable;
}
namespace UnityEngine::Localization::Tables {
struct TableEntryReference;
}
namespace UnityEngine::Localization::Tables {
struct TableReference;
}
namespace UnityEngine::Localization {
class Locale;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template<typename TObject>
struct AsyncOperationHandle_1;
}
// Forward declare root types
namespace UnityEngine::Localization::Settings {
class LocalizedStringDatabase;
}
namespace UnityEngine::Localization::Settings {
class LocalizedStringDatabase_MissingTranslation;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::Settings::LocalizedStringDatabase*);
MARK_REF_T(::UnityEngine::Localization::Settings::LocalizedStringDatabase_MissingTranslation*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::Settings::LocalizedStringDatabase*, "UnityEngine.Localization.Settings", "LocalizedStringDatabase");
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::Settings::LocalizedStringDatabase_MissingTranslation*, "UnityEngine.Localization.Settings", "LocalizedStringDatabase/MissingTranslation");
// Dependencies UnityEngine.Localization.Settings.LocalizedDatabase`2<TTable, TEntry>, UnityEngine.Localization.Settings.MissingTranslationBehavior
namespace UnityEngine::Localization::Settings {
// Is value type: false
// CS Name: UnityEngine.Localization.Settings.LocalizedStringDatabase
class CORDL_TYPE LocalizedStringDatabase : public ::UnityEngine::Localization::Settings::LocalizedDatabase_2<::UnityW<::UnityEngine::Localization::Tables::StringTable>,::UnityEngine::Localization::Tables::StringTableEntry*> {
public:
// Declarations
using MissingTranslation = ::UnityEngine::Localization::Settings::LocalizedStringDatabase_MissingTranslation;

 __declspec(property(get=get_MissingTranslationState, put=set_MissingTranslationState)) ::UnityEngine::Localization::Settings::MissingTranslationBehavior  MissingTranslationState;

 __declspec(property(get=get_NoTranslationFoundMessage, put=set_NoTranslationFoundMessage)) ::StringW  NoTranslationFoundMessage;

 __declspec(property(get=get_SmartFormatter, put=set_SmartFormatter)) ::UnityEngine::Localization::SmartFormat::SmartFormatter*  SmartFormatter;

/// @brief Field TranslationNotFound, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_TranslationNotFound, put=__cordl_internal_set_TranslationNotFound)) ::UnityEngine::Localization::Settings::LocalizedStringDatabase_MissingTranslation*  TranslationNotFound;

/// @brief Field m_MissingTranslationState, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_MissingTranslationState, put=__cordl_internal_set_m_MissingTranslationState)) ::UnityEngine::Localization::Settings::MissingTranslationBehavior  m_MissingTranslationState;

/// @brief Field m_MissingTranslationTable, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_MissingTranslationTable, put=__cordl_internal_set_m_MissingTranslationTable)) ::UnityW<::UnityEngine::Localization::Tables::StringTable>  m_MissingTranslationTable;

/// @brief Field m_NoTranslationFoundMessage, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_NoTranslationFoundMessage, put=__cordl_internal_set_m_NoTranslationFoundMessage)) ::StringW  m_NoTranslationFoundMessage;

/// @brief Field m_SmartFormat, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SmartFormat, put=__cordl_internal_set_m_SmartFormat)) ::UnityEngine::Localization::SmartFormat::SmartFormatter*  m_SmartFormat;

/// @brief Method GenerateLocalizedString, addr 0xb01ccec, size 0x228, virtual true, abstract: false, final false
inline ::StringW GenerateLocalizedString(::UnityEngine::Localization::Tables::StringTable*  table, ::UnityEngine::Localization::Tables::StringTableEntry*  entry, ::UnityEngine::Localization::Tables::TableReference  tableReference, ::UnityEngine::Localization::Tables::TableEntryReference  tableEntryReference, ::UnityEngine::Localization::Locale*  locale, ::System::Collections::Generic::IList_1<::System::Object*>*  arguments) ;

/// @brief Method GetLocalizedString, addr 0xb01c77c, size 0xb8, virtual false, abstract: false, final false
inline ::StringW GetLocalizedString(::UnityEngine::Localization::Tables::TableEntryReference  tableEntryReference, ::System::Collections::Generic::IList_1<::System::Object*>*  arguments, ::UnityEngine::Localization::Locale*  locale, ::UnityEngine::Localization::Settings::FallbackBehavior  fallbackBehavior) ;

/// @brief Method GetLocalizedString, addr 0xb01c5e0, size 0xb8, virtual false, abstract: false, final false
inline ::StringW GetLocalizedString(::UnityEngine::Localization::Tables::TableEntryReference  tableEntryReference, ::UnityEngine::Localization::Locale*  locale, ::UnityEngine::Localization::Settings::FallbackBehavior  fallbackBehavior, /* [ParamArray] */ ::ArrayW<::System::Object*>  arguments) ;

/// @brief Method GetLocalizedString, addr 0xb01cbb0, size 0x13c, virtual true, abstract: false, final false
inline ::StringW GetLocalizedString(::UnityEngine::Localization::Tables::TableReference  tableReference, ::UnityEngine::Localization::Tables::TableEntryReference  tableEntryReference, ::System::Collections::Generic::IList_1<::System::Object*>*  arguments, ::UnityEngine::Localization::Locale*  locale, ::UnityEngine::Localization::Settings::FallbackBehavior  fallbackBehavior) ;

/// @brief Method GetLocalizedString, addr 0xb01c8ac, size 0x54, virtual true, abstract: false, final false
inline ::StringW GetLocalizedString(::UnityEngine::Localization::Tables::TableReference  tableReference, ::UnityEngine::Localization::Tables::TableEntryReference  tableEntryReference, ::UnityEngine::Localization::Locale*  locale, ::UnityEngine::Localization::Settings::FallbackBehavior  fallbackBehavior, /* [ParamArray] */ ::ArrayW<::System::Object*>  arguments) ;

/// @brief Method GetLocalizedStringAsync, addr 0xb01c698, size 0xe4, virtual false, abstract: false, final false
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::StringW> GetLocalizedStringAsync(::UnityEngine::Localization::Tables::TableEntryReference  tableEntryReference, ::System::Collections::Generic::IList_1<::System::Object*>*  arguments, ::UnityEngine::Localization::Locale*  locale, ::UnityEngine::Localization::Settings::FallbackBehavior  fallbackBehavior) ;

/// @brief Method GetLocalizedStringAsync, addr 0xb01c4fc, size 0xe4, virtual false, abstract: false, final false
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::StringW> GetLocalizedStringAsync(::UnityEngine::Localization::Tables::TableEntryReference  tableEntryReference, ::UnityEngine::Localization::Locale*  locale, ::UnityEngine::Localization::Settings::FallbackBehavior  fallbackBehavior, /* [ParamArray] */ ::ArrayW<::System::Object*>  arguments) ;

/// @brief Method GetLocalizedStringAsync, addr 0xb01c900, size 0x64, virtual true, abstract: false, final false
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::StringW> GetLocalizedStringAsync(::UnityEngine::Localization::Tables::TableReference  tableReference, ::UnityEngine::Localization::Tables::TableEntryReference  tableEntryReference, ::System::Collections::Generic::IList_1<::System::Object*>*  arguments, ::UnityEngine::Localization::Locale*  locale, ::UnityEngine::Localization::Settings::FallbackBehavior  fallbackBehavior, ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableGroup*  localVariables) ;

/// @brief Method GetLocalizedStringAsync, addr 0xb01c834, size 0x78, virtual true, abstract: false, final false
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::StringW> GetLocalizedStringAsync(::UnityEngine::Localization::Tables::TableReference  tableReference, ::UnityEngine::Localization::Tables::TableEntryReference  tableEntryReference, ::UnityEngine::Localization::Locale*  locale, ::UnityEngine::Localization::Settings::FallbackBehavior  fallbackBehavior, /* [ParamArray] */ ::ArrayW<::System::Object*>  arguments) ;

/// @brief Method GetLocalizedStringAsyncInternal, addr 0xb01c964, size 0x24c, virtual true, abstract: false, final false
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::StringW> GetLocalizedStringAsyncInternal(::UnityEngine::Localization::Tables::TableReference  tableReference, ::UnityEngine::Localization::Tables::TableEntryReference  tableEntryReference, ::System::Collections::Generic::IList_1<::System::Object*>*  arguments, ::UnityEngine::Localization::Locale*  locale, ::UnityEngine::Localization::Settings::FallbackBehavior  fallbackBehavior, ::UnityEngine::Localization::SmartFormat::PersistentVariables::IVariableGroup*  localVariables, bool  autoRelease) ;

/// @brief Method GetUntranslatedTextTempTable, addr 0xb01d310, size 0x308, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Localization::Tables::StringTable> GetUntranslatedTextTempTable(::UnityEngine::Localization::Tables::TableReference  tableReference) ;

static inline ::UnityEngine::Localization::Settings::LocalizedStringDatabase* New_ctor() ;

/// @brief Method ProcessUntranslatedText, addr 0xb01cf14, size 0x3fc, virtual false, abstract: false, final false
inline ::StringW ProcessUntranslatedText(::StringW  key, int64_t  keyId, ::UnityEngine::Localization::Tables::TableReference  tableReference, ::UnityEngine::Localization::Tables::StringTable*  table, ::UnityEngine::Localization::Locale*  locale) ;

constexpr ::UnityEngine::Localization::Settings::LocalizedStringDatabase_MissingTranslation* const& __cordl_internal_get_TranslationNotFound() const;

constexpr ::UnityEngine::Localization::Settings::LocalizedStringDatabase_MissingTranslation*& __cordl_internal_get_TranslationNotFound() ;

constexpr ::UnityEngine::Localization::Settings::MissingTranslationBehavior const& __cordl_internal_get_m_MissingTranslationState() const;

constexpr ::UnityEngine::Localization::Settings::MissingTranslationBehavior& __cordl_internal_get_m_MissingTranslationState() ;

constexpr ::UnityW<::UnityEngine::Localization::Tables::StringTable> const& __cordl_internal_get_m_MissingTranslationTable() const;

constexpr ::UnityW<::UnityEngine::Localization::Tables::StringTable>& __cordl_internal_get_m_MissingTranslationTable() ;

constexpr ::StringW const& __cordl_internal_get_m_NoTranslationFoundMessage() const;

constexpr ::StringW& __cordl_internal_get_m_NoTranslationFoundMessage() ;

constexpr ::UnityEngine::Localization::SmartFormat::SmartFormatter* const& __cordl_internal_get_m_SmartFormat() const;

constexpr ::UnityEngine::Localization::SmartFormat::SmartFormatter*& __cordl_internal_get_m_SmartFormat() ;

constexpr void __cordl_internal_set_TranslationNotFound(::UnityEngine::Localization::Settings::LocalizedStringDatabase_MissingTranslation*  value) ;

constexpr void __cordl_internal_set_m_MissingTranslationState(::UnityEngine::Localization::Settings::MissingTranslationBehavior  value) ;

constexpr void __cordl_internal_set_m_MissingTranslationTable(::UnityW<::UnityEngine::Localization::Tables::StringTable>  value) ;

constexpr void __cordl_internal_set_m_NoTranslationFoundMessage(::StringW  value) ;

constexpr void __cordl_internal_set_m_SmartFormat(::UnityEngine::Localization::SmartFormat::SmartFormatter*  value) ;

/// @brief Method .ctor, addr 0xb01d618, size 0xdc, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_TranslationNotFound, addr 0xb01c394, size 0x9c, virtual false, abstract: false, final false
inline void add_TranslationNotFound(::UnityEngine::Localization::Settings::LocalizedStringDatabase_MissingTranslation*  value) ;

/// @brief Method get_MissingTranslationState, addr 0xb01c4dc, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::Settings::MissingTranslationBehavior get_MissingTranslationState() ;

/// @brief Method get_NoTranslationFoundMessage, addr 0xb01c4cc, size 0x8, virtual false, abstract: false, final false
inline ::StringW get_NoTranslationFoundMessage() ;

/// @brief Method get_SmartFormatter, addr 0xb01c4ec, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::SmartFormat::SmartFormatter* get_SmartFormatter() ;

/// [CompilerGenerated]
/// @brief Method remove_TranslationNotFound, addr 0xb01c430, size 0x9c, virtual false, abstract: false, final false
inline void remove_TranslationNotFound(::UnityEngine::Localization::Settings::LocalizedStringDatabase_MissingTranslation*  value) ;

/// @brief Method set_MissingTranslationState, addr 0xb01c4e4, size 0x8, virtual false, abstract: false, final false
inline void set_MissingTranslationState(::UnityEngine::Localization::Settings::MissingTranslationBehavior  value) ;

/// @brief Method set_NoTranslationFoundMessage, addr 0xb01c4d4, size 0x8, virtual false, abstract: false, final false
inline void set_NoTranslationFoundMessage(::StringW  value) ;

/// @brief Method set_SmartFormatter, addr 0xb01c4f4, size 0x8, virtual false, abstract: false, final false
inline void set_SmartFormatter(::UnityEngine::Localization::SmartFormat::SmartFormatter*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocalizedStringDatabase() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocalizedStringDatabase", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LocalizedStringDatabase(LocalizedStringDatabase && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocalizedStringDatabase", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocalizedStringDatabase(LocalizedStringDatabase const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25100};

/// @brief Field k_DefaultNoTranslationMessage offset 0xffffffff size 0x8
static constexpr ::ConstString  k_DefaultNoTranslationMessage{u"No translation found for \'{key}\' in {table.TableCollectionName}"};

/// [SerializeField]
/// @brief Field m_MissingTranslationState, offset: 0x90, size: 0x4, def value: None
 ::UnityEngine::Localization::Settings::MissingTranslationBehavior  ___m_MissingTranslationState;

/// [CompilerGenerated]
/// @brief Field TranslationNotFound, offset: 0x98, size: 0x8, def value: None
 ::UnityEngine::Localization::Settings::LocalizedStringDatabase_MissingTranslation*  ___TranslationNotFound;

/// [SerializeField]
/// [Tooltip("The string that will be used when a localized value is missing. This is a Smart String which has access to the following placeholders:\n\t{key}: The name of the key\n\t{keyId}: The numeric Id of the key\n\t{table}: The table object, this can be further queried, for example {table.TableCollectionName}\n\t{locale}: The locale asset, this can be further queried, for example {locale.name}")]
/// @brief Field m_NoTranslationFoundMessage, offset: 0xa0, size: 0x8, def value: None
 ::StringW  ___m_NoTranslationFoundMessage;

/// [SerializeReference]
/// @brief Field m_SmartFormat, offset: 0xa8, size: 0x8, def value: None
 ::UnityEngine::Localization::SmartFormat::SmartFormatter*  ___m_SmartFormat;

/// @brief Field m_MissingTranslationTable, offset: 0xb0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Localization::Tables::StringTable>  ___m_MissingTranslationTable;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::Settings::LocalizedStringDatabase, ___m_MissingTranslationState) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Settings::LocalizedStringDatabase, ___TranslationNotFound) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Settings::LocalizedStringDatabase, ___m_NoTranslationFoundMessage) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Settings::LocalizedStringDatabase, ___m_SmartFormat) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Settings::LocalizedStringDatabase, ___m_MissingTranslationTable) == 0xb0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::Settings::LocalizedStringDatabase) == 0xb8, "Size mismatch!");

} // namespace end def UnityEngine::Localization::Settings
// Dependencies System.MulticastDelegate
namespace UnityEngine::Localization::Settings {
// Is value type: false
// CS Name: UnityEngine.Localization.Settings.LocalizedStringDatabase/MissingTranslation
class CORDL_TYPE LocalizedStringDatabase_MissingTranslation : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0xb01d7dc, size 0xe0, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::StringW  key, int64_t  keyId, ::UnityEngine::Localization::Tables::TableReference  tableReference, ::UnityEngine::Localization::Tables::StringTable*  table, ::UnityEngine::Localization::Locale*  locale, ::StringW  noTranslationFoundMessage, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0xb01d8bc, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0xb01d7a8, size 0x34, virtual true, abstract: false, final false
inline void Invoke(::StringW  key, int64_t  keyId, ::UnityEngine::Localization::Tables::TableReference  tableReference, ::UnityEngine::Localization::Tables::StringTable*  table, ::UnityEngine::Localization::Locale*  locale, ::StringW  noTranslationFoundMessage) ;

static inline ::UnityEngine::Localization::Settings::LocalizedStringDatabase_MissingTranslation* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0xb01d6f4, size 0xb4, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocalizedStringDatabase_MissingTranslation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocalizedStringDatabase_MissingTranslation", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LocalizedStringDatabase_MissingTranslation(LocalizedStringDatabase_MissingTranslation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocalizedStringDatabase_MissingTranslation", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocalizedStringDatabase_MissingTranslation(LocalizedStringDatabase_MissingTranslation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25099};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Localization::Settings::LocalizedStringDatabase_MissingTranslation) == 0x80, "Size mismatch!");

} // namespace end def UnityEngine::Localization::Settings
