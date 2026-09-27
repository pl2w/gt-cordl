#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Operations/GetTableEntryOperation_2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Localization/Operations/zzzz__WaitForCurrentOperationAsyncOperationBase_1_def.hpp"
#include "UnityEngine/Localization/Settings/zzzz__LocalizedDatabase`2_TableEntryResult_def.hpp"
#include "UnityEngine/Localization/Tables/zzzz__TableEntryReference_def.hpp"
#include "UnityEngine/Localization/Tables/zzzz__TableReference_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GetTableEntryOperation_2)
namespace GlobalNamespace {
template<typename TTable,typename TEntry>
struct LocalizedDatabase_2_TableEntryResult;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine::Localization::Metadata {
class IEntryOverride;
}
namespace UnityEngine::Localization::Operations {
template<typename TTable,typename TEntry>
class GetTableEntryOperation_2___c;
}
namespace UnityEngine::Localization::Settings {
template<typename TTable,typename TEntry>
class LocalizedDatabase_2;
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
namespace UnityEngine::Pool {
template<typename T>
class ObjectPool_1;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template<typename TObject>
struct AsyncOperationHandle_1;
}
// Forward declare root types
namespace UnityEngine::Localization::Operations {
template<typename TTable,typename TEntry>
class GetTableEntryOperation_2;
}
namespace UnityEngine::Localization::Operations {
template<typename TTable,typename TEntry>
class GetTableEntryOperation_2___c;
}
// Write type traits
MARK_GEN_REF_T_PTR(::UnityEngine::Localization::Operations::GetTableEntryOperation_2);
MARK_GEN_REF_T_PTR(::UnityEngine::Localization::Operations::GetTableEntryOperation_2___c);
DEFINE_IL2CPP_GEN_CLASS_PTR(::UnityEngine::Localization::Operations::GetTableEntryOperation_2, "UnityEngine.Localization.Operations", "GetTableEntryOperation`2");
DEFINE_IL2CPP_GEN_CLASS_PTR(::UnityEngine::Localization::Operations::GetTableEntryOperation_2___c, "UnityEngine.Localization.Operations", "GetTableEntryOperation`2/<>c");
// Dependencies UnityEngine.Localization.Operations.WaitForCurrentOperationAsyncOperationBase`1<TObject>, UnityEngine.Localization.Settings.LocalizedDatabase`2::TableEntryResult<TTable, TEntry>, UnityEngine.Localization.Tables.TableEntryReference, UnityEngine.Localization.Tables.TableReference, UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<TObject>
namespace UnityEngine::Localization::Operations {
// cpp template
template<typename TTable,typename TEntry>
// Is value type: false
// CS Name: UnityEngine.Localization.Operations.GetTableEntryOperation`2<TTable,TEntry>
class CORDL_TYPE GetTableEntryOperation_2 : public ::UnityEngine::Localization::Operations::WaitForCurrentOperationAsyncOperationBase_1<::GlobalNamespace::LocalizedDatabase_2_TableEntryResult<TTable,TEntry>> {
public:
// Declarations
using __c = ::UnityEngine::Localization::Operations::GetTableEntryOperation_2___c<TTable, TEntry>;

/// @brief Field Pool, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pool, put=setStaticF_Pool)) ::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::Operations::GetTableEntryOperation_2<TTable,TEntry>*>*  Pool;

/// @brief Field m_AutoRelease, offset 0x159, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_AutoRelease, put=__cordl_internal_set_m_AutoRelease)) bool  m_AutoRelease;

/// @brief Field m_CurrentLocale, offset 0x140, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CurrentLocale, put=__cordl_internal_set_m_CurrentLocale)) ::UnityW<::UnityEngine::Localization::Locale>  m_CurrentLocale;

/// @brief Field m_Database, offset 0x130, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Database, put=__cordl_internal_set_m_Database)) ::UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>*  m_Database;

/// @brief Field m_ExtractEntryFromTableAction, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ExtractEntryFromTableAction, put=__cordl_internal_set_m_ExtractEntryFromTableAction)) ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>>*  m_ExtractEntryFromTableAction;

/// @brief Field m_FallbackQueue, offset 0x150, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_FallbackQueue, put=__cordl_internal_set_m_FallbackQueue)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Localization::Locale>>*  m_FallbackQueue;

/// @brief Field m_HandledFallbacks, offset 0x148, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_HandledFallbacks, put=__cordl_internal_set_m_HandledFallbacks)) ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Localization::Locale>>*  m_HandledFallbacks;

/// @brief Field m_LoadTableOperation, offset 0xe0, size 0x18 
 __declspec(property(get=__cordl_internal_get_m_LoadTableOperation, put=__cordl_internal_set_m_LoadTableOperation)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>  m_LoadTableOperation;

/// @brief Field m_SelectedLocale, offset 0x138, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SelectedLocale, put=__cordl_internal_set_m_SelectedLocale)) ::UnityW<::UnityEngine::Localization::Locale>  m_SelectedLocale;

/// @brief Field m_TableEntryReference, offset 0x118, size 0x18 
 __declspec(property(get=__cordl_internal_get_m_TableEntryReference, put=__cordl_internal_set_m_TableEntryReference)) ::UnityEngine::Localization::Tables::TableEntryReference  m_TableEntryReference;

/// @brief Field m_TableReference, offset 0xf8, size 0x20 
 __declspec(property(get=__cordl_internal_get_m_TableReference, put=__cordl_internal_set_m_TableReference)) ::UnityEngine::Localization::Tables::TableReference  m_TableReference;

/// @brief Field m_UseFallback, offset 0x158, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_UseFallback, put=__cordl_internal_set_m_UseFallback)) bool  m_UseFallback;

/// @brief Method ApplyEntryOverride, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool ApplyEntryOverride(::UnityEngine::Localization::Metadata::IEntryOverride*  entryOverride, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>  asyncOperation, TEntry  entry) ;

/// @brief Method CompleteAndRelease, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void CompleteAndRelease(::GlobalNamespace::LocalizedDatabase_2_TableEntryResult<TTable,TEntry>  result, bool  success, ::StringW  errorMsg) ;

/// @brief Method Destroy, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Destroy() ;

/// @brief Method Execute, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Execute() ;

/// @brief Method ExtractEntryFromTable, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void ExtractEntryFromTable(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>  asyncOperation) ;

/// @brief Method GetNextFallback, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Localization::Locale> GetNextFallback(::UnityEngine::Localization::Locale*  currentLocale) ;

/// @brief Method HandleEntryOverride, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool HandleEntryOverride(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>  asyncOperation, TEntry  entry) ;

/// @brief Method HandleFallback, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool HandleFallback(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>  asyncOperation, TEntry  entry) ;

/// @brief Method Init, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Init(::UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>*  database, ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>  loadTableOperation, ::UnityEngine::Localization::Tables::TableReference  tableReference, ::UnityEngine::Localization::Tables::TableEntryReference  tableEntryReference, ::UnityEngine::Localization::Locale*  selectedLoale, bool  UseFallBack, bool  autoRelease) ;

static inline ::UnityEngine::Localization::Operations::GetTableEntryOperation_2<TTable,TEntry>* New_ctor() ;

/// @brief Method ToString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW ToString() ;

constexpr bool const& __cordl_internal_get_m_AutoRelease() const;

constexpr bool& __cordl_internal_get_m_AutoRelease() ;

constexpr ::UnityW<::UnityEngine::Localization::Locale> const& __cordl_internal_get_m_CurrentLocale() const;

constexpr ::UnityW<::UnityEngine::Localization::Locale>& __cordl_internal_get_m_CurrentLocale() ;

constexpr ::UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>* const& __cordl_internal_get_m_Database() const;

constexpr ::UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>*& __cordl_internal_get_m_Database() ;

constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>>* const& __cordl_internal_get_m_ExtractEntryFromTableAction() const;

constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>>*& __cordl_internal_get_m_ExtractEntryFromTableAction() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Localization::Locale>>* const& __cordl_internal_get_m_FallbackQueue() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Localization::Locale>>*& __cordl_internal_get_m_FallbackQueue() ;

constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Localization::Locale>>* const& __cordl_internal_get_m_HandledFallbacks() const;

constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Localization::Locale>>*& __cordl_internal_get_m_HandledFallbacks() ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable> const& __cordl_internal_get_m_LoadTableOperation() const;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>& __cordl_internal_get_m_LoadTableOperation() ;

constexpr ::UnityW<::UnityEngine::Localization::Locale> const& __cordl_internal_get_m_SelectedLocale() const;

constexpr ::UnityW<::UnityEngine::Localization::Locale>& __cordl_internal_get_m_SelectedLocale() ;

constexpr ::UnityEngine::Localization::Tables::TableEntryReference const& __cordl_internal_get_m_TableEntryReference() const;

constexpr ::UnityEngine::Localization::Tables::TableEntryReference& __cordl_internal_get_m_TableEntryReference() ;

constexpr ::UnityEngine::Localization::Tables::TableReference const& __cordl_internal_get_m_TableReference() const;

constexpr ::UnityEngine::Localization::Tables::TableReference& __cordl_internal_get_m_TableReference() ;

constexpr bool const& __cordl_internal_get_m_UseFallback() const;

constexpr bool& __cordl_internal_get_m_UseFallback() ;

constexpr void __cordl_internal_set_m_AutoRelease(bool  value) ;

constexpr void __cordl_internal_set_m_CurrentLocale(::UnityW<::UnityEngine::Localization::Locale>  value) ;

constexpr void __cordl_internal_set_m_Database(::UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>*  value) ;

constexpr void __cordl_internal_set_m_ExtractEntryFromTableAction(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>>*  value) ;

constexpr void __cordl_internal_set_m_FallbackQueue(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Localization::Locale>>*  value) ;

constexpr void __cordl_internal_set_m_HandledFallbacks(::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Localization::Locale>>*  value) ;

constexpr void __cordl_internal_set_m_LoadTableOperation(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>  value) ;

constexpr void __cordl_internal_set_m_SelectedLocale(::UnityW<::UnityEngine::Localization::Locale>  value) ;

constexpr void __cordl_internal_set_m_TableEntryReference(::UnityEngine::Localization::Tables::TableEntryReference  value) ;

constexpr void __cordl_internal_set_m_TableReference(::UnityEngine::Localization::Tables::TableReference  value) ;

constexpr void __cordl_internal_set_m_UseFallback(bool  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::Operations::GetTableEntryOperation_2<TTable,TEntry>*>* getStaticF_Pool() ;

static inline void setStaticF_Pool(::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::Operations::GetTableEntryOperation_2<TTable,TEntry>*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetTableEntryOperation_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetTableEntryOperation_2", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetTableEntryOperation_2(GetTableEntryOperation_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetTableEntryOperation_2", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetTableEntryOperation_2(GetTableEntryOperation_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25292};

/// @brief Field m_ExtractEntryFromTableAction, offset: 0xd8, size: 0x8, def value: None
 ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>>*  ___m_ExtractEntryFromTableAction;

/// @brief Field m_LoadTableOperation, offset: 0xe0, size: 0x18, def value: None
 ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>  ___m_LoadTableOperation;

/// @brief Field m_TableReference, offset: 0xf8, size: 0x20, def value: None
 ::UnityEngine::Localization::Tables::TableReference  ___m_TableReference;

/// @brief Field m_TableEntryReference, offset: 0x118, size: 0x18, def value: None
 ::UnityEngine::Localization::Tables::TableEntryReference  ___m_TableEntryReference;

/// @brief Field m_Database, offset: 0x130, size: 0x8, def value: None
 ::UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>*  ___m_Database;

/// @brief Field m_SelectedLocale, offset: 0x138, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Localization::Locale>  ___m_SelectedLocale;

/// @brief Field m_CurrentLocale, offset: 0x140, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Localization::Locale>  ___m_CurrentLocale;

/// @brief Field m_HandledFallbacks, offset: 0x148, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Localization::Locale>>*  ___m_HandledFallbacks;

/// @brief Field m_FallbackQueue, offset: 0x150, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Localization::Locale>>*  ___m_FallbackQueue;

/// @brief Field m_UseFallback, offset: 0x158, size: 0x1, def value: None
 bool  ___m_UseFallback;

/// @brief Field m_AutoRelease, offset: 0x159, size: 0x1, def value: None
 bool  ___m_AutoRelease;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Localization::Operations
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::Localization::Operations {
// cpp template
template<typename TTable,typename TEntry>
// Is value type: false
// CS Name: UnityEngine.Localization.Operations.GetTableEntryOperation`2/<>c<TTable,TEntry>
class CORDL_TYPE GetTableEntryOperation_2___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::Localization::Operations::GetTableEntryOperation_2___c<TTable,TEntry>*  __9;

static inline ::UnityEngine::Localization::Operations::GetTableEntryOperation_2___c<TTable,TEntry>* New_ctor() ;

/// @brief Method <.cctor>b__23_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::Operations::GetTableEntryOperation_2<TTable,TEntry>* __cctor_b__23_0() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Localization::Operations::GetTableEntryOperation_2___c<TTable,TEntry>* getStaticF___9() ;

static inline void setStaticF___9(::UnityEngine::Localization::Operations::GetTableEntryOperation_2___c<TTable,TEntry>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GetTableEntryOperation_2___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GetTableEntryOperation_2___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GetTableEntryOperation_2___c(GetTableEntryOperation_2___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GetTableEntryOperation_2___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GetTableEntryOperation_2___c(GetTableEntryOperation_2___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25291};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Localization::Operations
