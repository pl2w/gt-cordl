#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Settings/LocalizedDatabase_2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Localization/Settings/zzzz__AsynchronousBehaviour_def.hpp"
#include "UnityEngine/Localization/Tables/zzzz__TableReference_def.hpp"
#include "UnityEngine/Localization/zzzz__LocaleIdentifier_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(LocalizedDatabase_2)
namespace GlobalNamespace {
template<typename TTable,typename TEntry>
struct LocalizedDatabase_2_TableEntryResult;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
struct Guid;
}
namespace System {
class IDisposable;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace UnityEngine::Localization::Operations {
template<typename TTable,typename TEntry>
class LoadTableOperation_2;
}
namespace UnityEngine::Localization::Operations {
template<typename TTable,typename TEntry>
class PreloadTablesOperation_2;
}
namespace UnityEngine::Localization::Settings {
struct AsynchronousBehaviour;
}
namespace UnityEngine::Localization::Settings {
struct FallbackBehavior;
}
namespace UnityEngine::Localization::Settings {
class IReset;
}
namespace UnityEngine::Localization::Settings {
class ITablePostprocessor;
}
namespace UnityEngine::Localization::Settings {
class ITableProvider;
}
namespace UnityEngine::Localization::Tables {
class SharedTableData;
}
namespace UnityEngine::Localization::Tables {
struct TableEntryReference;
}
namespace UnityEngine::Localization::Tables {
struct TableReference;
}
namespace UnityEngine::Localization {
class IPreloadRequired;
}
namespace UnityEngine::Localization {
struct LocaleIdentifier;
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
// Forward declare root types
namespace UnityEngine::Localization::Settings {
template<typename TTable,typename TEntry>
class LocalizedDatabase_2;
}
// Write type traits
MARK_GEN_REF_T_PTR(::UnityEngine::Localization::Settings::LocalizedDatabase_2);
DEFINE_IL2CPP_GEN_CLASS_PTR(::UnityEngine::Localization::Settings::LocalizedDatabase_2, "UnityEngine.Localization.Settings", "LocalizedDatabase`2");
// Dependencies System.Object, UnityEngine.Localization.LocaleIdentifier, UnityEngine.Localization.Settings.AsynchronousBehaviour, UnityEngine.Localization.Tables.TableReference, UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle
namespace UnityEngine::Localization::Settings {
// cpp template
template<typename TTable,typename TEntry>
// Is value type: false
// CS Name: UnityEngine.Localization.Settings.LocalizedDatabase`2<TTable,TEntry>
class CORDL_TYPE LocalizedDatabase_2 : public ::System::Object {
public:
// Declarations
using TableEntryResult = ::GlobalNamespace::LocalizedDatabase_2_TableEntryResult<TTable, TEntry>;

 __declspec(property(get=get_AsynchronousBehaviour, put=set_AsynchronousBehaviour)) ::UnityEngine::Localization::Settings::AsynchronousBehaviour  AsynchronousBehaviour;

 __declspec(property(get=get_DefaultTable, put=set_DefaultTable)) ::UnityEngine::Localization::Tables::TableReference  DefaultTable;

 __declspec(property(get=get_PreloadOperation)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  PreloadOperation;

 __declspec(property(get=get_ReleaseNextFrame)) ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  ReleaseNextFrame;

 __declspec(property(get=get_SharedTableDataOperations)) ::System::Collections::Generic::Dictionary_2<::System::Guid,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::Localization::Tables::SharedTableData>>>*  SharedTableDataOperations;

/// @brief [TupleElementNames(new[] { "localeIdentifier", "tableNameOrGuid" })]
 __declspec(property(get=get_TableOperations)) ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::UnityEngine::Localization::LocaleIdentifier,::StringW>,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>>*  TableOperations;

 __declspec(property(get=get_TablePostprocessor, put=set_TablePostprocessor)) ::UnityEngine::Localization::Settings::ITablePostprocessor*  TablePostprocessor;

 __declspec(property(get=get_TableProvider, put=set_TableProvider)) ::UnityEngine::Localization::Settings::ITableProvider*  TableProvider;

 __declspec(property(get=get_UseFallback, put=set_UseFallback)) bool  UseFallback;

/// @brief Field <SharedTableDataOperations>k__BackingField, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__SharedTableDataOperations_k__BackingField, put=__cordl_internal_set__SharedTableDataOperations_k__BackingField)) ::System::Collections::Generic::Dictionary_2<::System::Guid,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::Localization::Tables::SharedTableData>>>*  _SharedTableDataOperations_k__BackingField;

/// @brief Field <TableOperations>k__BackingField, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__TableOperations_k__BackingField, put=__cordl_internal_set__TableOperations_k__BackingField)) ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::UnityEngine::Localization::LocaleIdentifier,::StringW>,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>>*  _TableOperations_k__BackingField;

/// @brief Field k_SelectedLocaleId, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_k_SelectedLocaleId, put=setStaticF_k_SelectedLocaleId)) ::UnityEngine::Localization::LocaleIdentifier  k_SelectedLocaleId;

/// @brief Field m_AsynchronousBehaviour, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_AsynchronousBehaviour, put=__cordl_internal_set_m_AsynchronousBehaviour)) ::UnityEngine::Localization::Settings::AsynchronousBehaviour  m_AsynchronousBehaviour;

/// @brief Field m_CustomTablePostprocessor, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CustomTablePostprocessor, put=__cordl_internal_set_m_CustomTablePostprocessor)) ::UnityEngine::Localization::Settings::ITablePostprocessor*  m_CustomTablePostprocessor;

/// @brief Field m_CustomTableProvider, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CustomTableProvider, put=__cordl_internal_set_m_CustomTableProvider)) ::UnityEngine::Localization::Settings::ITableProvider*  m_CustomTableProvider;

/// @brief Field m_DefaultTableReference, offset 0x10, size 0x20 
 __declspec(property(get=__cordl_internal_get_m_DefaultTableReference, put=__cordl_internal_set_m_DefaultTableReference)) ::UnityEngine::Localization::Tables::TableReference  m_DefaultTableReference;

/// @brief Field m_PatchTableContentsAction, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PatchTableContentsAction, put=__cordl_internal_set_m_PatchTableContentsAction)) ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>>*  m_PatchTableContentsAction;

/// @brief Field m_PreloadOperationHandle, offset 0x48, size 0x18 
 __declspec(property(get=__cordl_internal_get_m_PreloadOperationHandle, put=__cordl_internal_set_m_PreloadOperationHandle)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  m_PreloadOperationHandle;

/// @brief Field m_RegisterCompletedTableOperationAction, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_RegisterCompletedTableOperationAction, put=__cordl_internal_set_m_RegisterCompletedTableOperationAction)) ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>>*  m_RegisterCompletedTableOperationAction;

/// @brief Field m_RegisterSharedTableAndGuidOperationAction, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_RegisterSharedTableAndGuidOperationAction, put=__cordl_internal_set_m_RegisterSharedTableAndGuidOperationAction)) ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>>*  m_RegisterSharedTableAndGuidOperationAction;

/// @brief Field m_ReleaseNextFrame, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ReleaseNextFrame, put=__cordl_internal_set_m_ReleaseNextFrame)) ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  m_ReleaseNextFrame;

/// @brief Field m_UseFallback, offset 0x44, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_UseFallback, put=__cordl_internal_set_m_UseFallback)) bool  m_UseFallback;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Convert operator to "::UnityEngine::Localization::IPreloadRequired"
constexpr operator  ::UnityEngine::Localization::IPreloadRequired*() noexcept;

/// @brief Convert operator to "::UnityEngine::Localization::Settings::IReset"
constexpr operator  ::UnityEngine::Localization::Settings::IReset*() noexcept;

/// @brief Method CreateLoadTableOperation, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityEngine::Localization::Operations::LoadTableOperation_2<TTable,TEntry>* CreateLoadTableOperation() ;

/// @brief Method CreatePreloadTablesOperation, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityEngine::Localization::Operations::PreloadTablesOperation_2<TTable,TEntry>* CreatePreloadTablesOperation() ;

/// @brief Method GetAllTables, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TTable>*> GetAllTables(::UnityEngine::Localization::Locale*  locale) ;

/// @brief Method GetDefaultTable, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::Tables::TableReference GetDefaultTable() ;

/// @brief Method GetDefaultTableAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable> GetDefaultTableAsync() ;

/// @brief Method GetSharedTableData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::Localization::Tables::SharedTableData>> GetSharedTableData(::System::Guid  tableNameGuid) ;

/// @brief Method GetTable, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline TTable GetTable(::UnityEngine::Localization::Tables::TableReference  tableReference, ::UnityEngine::Localization::Locale*  locale) ;

/// @brief Method GetTableAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable> GetTableAsync(::UnityEngine::Localization::Tables::TableReference  tableReference, ::UnityEngine::Localization::Locale*  locale) ;

/// @brief Method GetTableEntry, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::GlobalNamespace::LocalizedDatabase_2_TableEntryResult<TTable,TEntry> GetTableEntry(::UnityEngine::Localization::Tables::TableReference  tableReference, ::UnityEngine::Localization::Tables::TableEntryReference  tableEntryReference, ::UnityEngine::Localization::Locale*  locale, ::UnityEngine::Localization::Settings::FallbackBehavior  fallbackBehavior) ;

/// @brief Method GetTableEntryAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::GlobalNamespace::LocalizedDatabase_2_TableEntryResult<TTable,TEntry>> GetTableEntryAsync(::UnityEngine::Localization::Tables::TableReference  tableReference, ::UnityEngine::Localization::Tables::TableEntryReference  tableEntryReference, ::UnityEngine::Localization::Locale*  locale, ::UnityEngine::Localization::Settings::FallbackBehavior  fallbackBehavior) ;

/// @brief Method IsTableLoaded, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool IsTableLoaded(::UnityEngine::Localization::Tables::TableReference  tableReference, ::UnityEngine::Localization::Locale*  locale) ;

static inline ::UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>* New_ctor() ;

/// @brief Method OnLocaleChanged, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void OnLocaleChanged(::UnityEngine::Localization::Locale*  locale) ;

/// @brief Method PatchTableContents, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void PatchTableContents(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>  tableOperation) ;

/// @brief Method PreloadTables, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle PreloadTables(::UnityEngine::Localization::Tables::TableReference  tableReference, ::UnityEngine::Localization::Locale*  locale) ;

/// @brief Method PreloadTables, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle PreloadTables(::System::Collections::Generic::IList_1<::UnityEngine::Localization::Tables::TableReference>*  tableReferences, ::UnityEngine::Localization::Locale*  locale) ;

/// @brief Method RegisterCompletedTableOperation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void RegisterCompletedTableOperation(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>  tableOperation) ;

/// @brief Method RegisterSharedTableAndGuidOperation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void RegisterSharedTableAndGuidOperation(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>  tableOperation) ;

/// @brief Method RegisterTableNameOperation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void RegisterTableNameOperation(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>  tableOperation, ::UnityEngine::Localization::LocaleIdentifier  localeIdentifier, ::StringW  tableName) ;

/// @brief Method ReleaseAllTables, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void ReleaseAllTables(::UnityEngine::Localization::Locale*  locale) ;

/// @brief Method ReleaseTable, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void ReleaseTable(::UnityEngine::Localization::Tables::TableReference  tableReference, ::UnityEngine::Localization::Locale*  locale) ;

/// @brief Method ReleaseTableContents, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void ReleaseTableContents(TTable  table) ;

/// @brief Method ResetState, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void ResetState() ;

/// @brief Method System.IDisposable.Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr ::System::Collections::Generic::Dictionary_2<::System::Guid,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::Localization::Tables::SharedTableData>>>* const& __cordl_internal_get__SharedTableDataOperations_k__BackingField() const;

constexpr ::System::Collections::Generic::Dictionary_2<::System::Guid,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::Localization::Tables::SharedTableData>>>*& __cordl_internal_get__SharedTableDataOperations_k__BackingField() ;

constexpr ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::UnityEngine::Localization::LocaleIdentifier,::StringW>,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>>* const& __cordl_internal_get__TableOperations_k__BackingField() const;

constexpr ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::UnityEngine::Localization::LocaleIdentifier,::StringW>,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>>*& __cordl_internal_get__TableOperations_k__BackingField() ;

constexpr ::UnityEngine::Localization::Settings::AsynchronousBehaviour const& __cordl_internal_get_m_AsynchronousBehaviour() const;

constexpr ::UnityEngine::Localization::Settings::AsynchronousBehaviour& __cordl_internal_get_m_AsynchronousBehaviour() ;

constexpr ::UnityEngine::Localization::Settings::ITablePostprocessor* const& __cordl_internal_get_m_CustomTablePostprocessor() const;

constexpr ::UnityEngine::Localization::Settings::ITablePostprocessor*& __cordl_internal_get_m_CustomTablePostprocessor() ;

constexpr ::UnityEngine::Localization::Settings::ITableProvider* const& __cordl_internal_get_m_CustomTableProvider() const;

constexpr ::UnityEngine::Localization::Settings::ITableProvider*& __cordl_internal_get_m_CustomTableProvider() ;

constexpr ::UnityEngine::Localization::Tables::TableReference const& __cordl_internal_get_m_DefaultTableReference() const;

constexpr ::UnityEngine::Localization::Tables::TableReference& __cordl_internal_get_m_DefaultTableReference() ;

constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>>* const& __cordl_internal_get_m_PatchTableContentsAction() const;

constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>>*& __cordl_internal_get_m_PatchTableContentsAction() ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle const& __cordl_internal_get_m_PreloadOperationHandle() const;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle& __cordl_internal_get_m_PreloadOperationHandle() ;

constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>>* const& __cordl_internal_get_m_RegisterCompletedTableOperationAction() const;

constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>>*& __cordl_internal_get_m_RegisterCompletedTableOperationAction() ;

constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>>* const& __cordl_internal_get_m_RegisterSharedTableAndGuidOperationAction() const;

constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>>*& __cordl_internal_get_m_RegisterSharedTableAndGuidOperationAction() ;

constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* const& __cordl_internal_get_m_ReleaseNextFrame() const;

constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*& __cordl_internal_get_m_ReleaseNextFrame() ;

constexpr bool const& __cordl_internal_get_m_UseFallback() const;

constexpr bool& __cordl_internal_get_m_UseFallback() ;

constexpr void __cordl_internal_set__SharedTableDataOperations_k__BackingField(::System::Collections::Generic::Dictionary_2<::System::Guid,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::Localization::Tables::SharedTableData>>>*  value) ;

constexpr void __cordl_internal_set__TableOperations_k__BackingField(::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::UnityEngine::Localization::LocaleIdentifier,::StringW>,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>>*  value) ;

constexpr void __cordl_internal_set_m_AsynchronousBehaviour(::UnityEngine::Localization::Settings::AsynchronousBehaviour  value) ;

constexpr void __cordl_internal_set_m_CustomTablePostprocessor(::UnityEngine::Localization::Settings::ITablePostprocessor*  value) ;

constexpr void __cordl_internal_set_m_CustomTableProvider(::UnityEngine::Localization::Settings::ITableProvider*  value) ;

constexpr void __cordl_internal_set_m_DefaultTableReference(::UnityEngine::Localization::Tables::TableReference  value) ;

constexpr void __cordl_internal_set_m_PatchTableContentsAction(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>>*  value) ;

constexpr void __cordl_internal_set_m_PreloadOperationHandle(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  value) ;

constexpr void __cordl_internal_set_m_RegisterCompletedTableOperationAction(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>>*  value) ;

constexpr void __cordl_internal_set_m_RegisterSharedTableAndGuidOperationAction(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>>*  value) ;

constexpr void __cordl_internal_set_m_ReleaseNextFrame(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  value) ;

constexpr void __cordl_internal_set_m_UseFallback(bool  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Localization::LocaleIdentifier getStaticF_k_SelectedLocaleId() ;

/// @brief Method get_AsynchronousBehaviour, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::Settings::AsynchronousBehaviour get_AsynchronousBehaviour() ;

/// @brief Method get_DefaultTable, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityEngine::Localization::Tables::TableReference get_DefaultTable() ;

/// @brief Method get_PreloadOperation, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle get_PreloadOperation() ;

/// @brief Method get_ReleaseNextFrame, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* get_ReleaseNextFrame() ;

/// [CompilerGenerated]
/// @brief Method get_SharedTableDataOperations, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<::System::Guid,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::Localization::Tables::SharedTableData>>>* get_SharedTableDataOperations() ;

/// [CompilerGenerated]
/// @brief Method get_TableOperations, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::UnityEngine::Localization::LocaleIdentifier,::StringW>,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>>* get_TableOperations() ;

/// @brief Method get_TablePostprocessor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::Settings::ITablePostprocessor* get_TablePostprocessor() ;

/// @brief Method get_TableProvider, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::Settings::ITableProvider* get_TableProvider() ;

/// @brief Method get_UseFallback, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool get_UseFallback() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Convert to "::UnityEngine::Localization::IPreloadRequired"
constexpr ::UnityEngine::Localization::IPreloadRequired* i___UnityEngine__Localization__IPreloadRequired() noexcept;

/// @brief Convert to "::UnityEngine::Localization::Settings::IReset"
constexpr ::UnityEngine::Localization::Settings::IReset* i___UnityEngine__Localization__Settings__IReset() noexcept;

static inline void setStaticF_k_SelectedLocaleId(::UnityEngine::Localization::LocaleIdentifier  value) ;

/// @brief Method set_AsynchronousBehaviour, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_AsynchronousBehaviour(::UnityEngine::Localization::Settings::AsynchronousBehaviour  value) ;

/// @brief Method set_DefaultTable, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void set_DefaultTable(::UnityEngine::Localization::Tables::TableReference  value) ;

/// @brief Method set_TablePostprocessor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_TablePostprocessor(::UnityEngine::Localization::Settings::ITablePostprocessor*  value) ;

/// @brief Method set_TableProvider, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_TableProvider(::UnityEngine::Localization::Settings::ITableProvider*  value) ;

/// @brief Method set_UseFallback, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_UseFallback(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocalizedDatabase_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocalizedDatabase_2", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LocalizedDatabase_2(LocalizedDatabase_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocalizedDatabase_2", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocalizedDatabase_2(LocalizedDatabase_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25098};

/// [SerializeField]
/// @brief Field m_DefaultTableReference, offset: 0x10, size: 0x20, def value: None
 ::UnityEngine::Localization::Tables::TableReference  ___m_DefaultTableReference;

/// [SerializeReference]
/// @brief Field m_CustomTableProvider, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Localization::Settings::ITableProvider*  ___m_CustomTableProvider;

/// [SerializeReference]
/// @brief Field m_CustomTablePostprocessor, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::Localization::Settings::ITablePostprocessor*  ___m_CustomTablePostprocessor;

/// [SerializeField]
/// @brief Field m_AsynchronousBehaviour, offset: 0x40, size: 0x4, def value: None
 ::UnityEngine::Localization::Settings::AsynchronousBehaviour  ___m_AsynchronousBehaviour;

/// [SerializeField]
/// @brief Field m_UseFallback, offset: 0x44, size: 0x1, def value: None
 bool  ___m_UseFallback;

/// @brief Field m_PreloadOperationHandle, offset: 0x48, size: 0x18, def value: None
 ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  ___m_PreloadOperationHandle;

/// @brief Field m_ReleaseNextFrame, offset: 0x60, size: 0x8, def value: None
 ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  ___m_ReleaseNextFrame;

/// @brief Field m_PatchTableContentsAction, offset: 0x68, size: 0x8, def value: None
 ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>>*  ___m_PatchTableContentsAction;

/// @brief Field m_RegisterSharedTableAndGuidOperationAction, offset: 0x70, size: 0x8, def value: None
 ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>>*  ___m_RegisterSharedTableAndGuidOperationAction;

/// @brief Field m_RegisterCompletedTableOperationAction, offset: 0x78, size: 0x8, def value: None
 ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>>*  ___m_RegisterCompletedTableOperationAction;

/// [TupleElementNames(new[] { "localeIdentifier", "tableNameOrGuid" })]
/// [CompilerGenerated]
/// @brief Field <TableOperations>k__BackingField, offset: 0x80, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::System::ValueTuple_2<::UnityEngine::Localization::LocaleIdentifier,::StringW>,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>>*  ____TableOperations_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <SharedTableDataOperations>k__BackingField, offset: 0x88, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::System::Guid,::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::Localization::Tables::SharedTableData>>>*  ____SharedTableDataOperations_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Localization::Settings
