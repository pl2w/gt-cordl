#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Operations/PreloadTablesOperation_2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Localization/Operations/zzzz__WaitForCurrentOperationAsyncOperationBase_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
CORDL_MODULE_EXPORT(PreloadTablesOperation_2)
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine::Localization::Operations {
template<typename TTable,typename TEntry>
class PreloadTablesOperation_2___c;
}
namespace UnityEngine::Localization::Settings {
template<typename TTable,typename TEntry>
class LocalizedDatabase_2;
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
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct AsyncOperationHandle;
}
// Forward declare root types
namespace UnityEngine::Localization::Operations {
template<typename TTable,typename TEntry>
class PreloadTablesOperation_2;
}
namespace UnityEngine::Localization::Operations {
template<typename TTable,typename TEntry>
class PreloadTablesOperation_2___c;
}
// Write type traits
MARK_GEN_REF_T_PTR(::UnityEngine::Localization::Operations::PreloadTablesOperation_2);
MARK_GEN_REF_T_PTR(::UnityEngine::Localization::Operations::PreloadTablesOperation_2___c);
DEFINE_IL2CPP_GEN_CLASS_PTR(::UnityEngine::Localization::Operations::PreloadTablesOperation_2, "UnityEngine.Localization.Operations", "PreloadTablesOperation`2");
DEFINE_IL2CPP_GEN_CLASS_PTR(::UnityEngine::Localization::Operations::PreloadTablesOperation_2___c, "UnityEngine.Localization.Operations", "PreloadTablesOperation`2/<>c");
// Dependencies UnityEngine.Localization.Operations.WaitForCurrentOperationAsyncOperationBase`1<TObject>, UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<TObject>
namespace UnityEngine::Localization::Operations {
// cpp template
template<typename TTable,typename TEntry>
// Is value type: false
// CS Name: UnityEngine.Localization.Operations.PreloadTablesOperation`2<TTable,TEntry>
class CORDL_TYPE PreloadTablesOperation_2 : public ::UnityEngine::Localization::Operations::WaitForCurrentOperationAsyncOperationBase_1<::UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>*> {
public:
// Declarations
using __c = ::UnityEngine::Localization::Operations::PreloadTablesOperation_2___c<TTable, TEntry>;

/// @brief Field Pool, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pool, put=setStaticF_Pool)) ::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::Operations::PreloadTablesOperation_2<TTable,TEntry>*>*  Pool;

/// @brief Field m_Database, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Database, put=__cordl_internal_set_m_Database)) ::UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>*  m_Database;

/// @brief Field m_FinishPreloadingAction, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_FinishPreloadingAction, put=__cordl_internal_set_m_FinishPreloadingAction)) ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  m_FinishPreloadingAction;

/// @brief Field m_LoadTableContentsAction, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LoadTableContentsAction, put=__cordl_internal_set_m_LoadTableContentsAction)) ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>>*  m_LoadTableContentsAction;

/// @brief Field m_LoadTables, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LoadTables, put=__cordl_internal_set_m_LoadTables)) ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>>*  m_LoadTables;

/// @brief Field m_LoadTablesOperation, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LoadTablesOperation, put=__cordl_internal_set_m_LoadTablesOperation)) ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  m_LoadTablesOperation;

/// @brief Field m_LoadTablesOperationHandle, offset 0x100, size 0x18 
 __declspec(property(get=__cordl_internal_get_m_LoadTablesOperationHandle, put=__cordl_internal_set_m_LoadTablesOperationHandle)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>  m_LoadTablesOperationHandle;

/// @brief Field m_PreloadTablesContentsHandle, offset 0x118, size 0x18 
 __declspec(property(get=__cordl_internal_get_m_PreloadTablesContentsHandle, put=__cordl_internal_set_m_PreloadTablesContentsHandle)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>  m_PreloadTablesContentsHandle;

/// @brief Field m_PreloadTablesOperations, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PreloadTablesOperations, put=__cordl_internal_set_m_PreloadTablesOperations)) ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  m_PreloadTablesOperations;

/// @brief Field m_SelectedLocale, offset 0x138, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SelectedLocale, put=__cordl_internal_set_m_SelectedLocale)) ::UnityW<::UnityEngine::Localization::Locale>  m_SelectedLocale;

/// @brief Field m_TableReferences, offset 0x130, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_TableReferences, put=__cordl_internal_set_m_TableReferences)) ::System::Collections::Generic::IList_1<::UnityEngine::Localization::Tables::TableReference>*  m_TableReferences;

/// @brief Method BeginPreloadingTables, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void BeginPreloadingTables() ;

/// @brief Method Destroy, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Destroy() ;

/// @brief Method Execute, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Execute() ;

/// @brief Method FinishPreloading, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void FinishPreloading(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  op) ;

/// @brief Method Init, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Init(::UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>*  database, ::System::Collections::Generic::IList_1<::UnityEngine::Localization::Tables::TableReference>*  tableReference, ::UnityEngine::Localization::Locale*  locale) ;

/// @brief Method LoadTableContents, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void LoadTableContents() ;

static inline ::UnityEngine::Localization::Operations::PreloadTablesOperation_2<TTable,TEntry>* New_ctor() ;

constexpr ::UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>* const& __cordl_internal_get_m_Database() const;

constexpr ::UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>*& __cordl_internal_get_m_Database() ;

constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* const& __cordl_internal_get_m_FinishPreloadingAction() const;

constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*& __cordl_internal_get_m_FinishPreloadingAction() ;

constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>>* const& __cordl_internal_get_m_LoadTableContentsAction() const;

constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>>*& __cordl_internal_get_m_LoadTableContentsAction() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>>* const& __cordl_internal_get_m_LoadTables() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>>*& __cordl_internal_get_m_LoadTables() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* const& __cordl_internal_get_m_LoadTablesOperation() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*& __cordl_internal_get_m_LoadTablesOperation() ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*> const& __cordl_internal_get_m_LoadTablesOperationHandle() const;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>& __cordl_internal_get_m_LoadTablesOperationHandle() ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*> const& __cordl_internal_get_m_PreloadTablesContentsHandle() const;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>& __cordl_internal_get_m_PreloadTablesContentsHandle() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* const& __cordl_internal_get_m_PreloadTablesOperations() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*& __cordl_internal_get_m_PreloadTablesOperations() ;

constexpr ::UnityW<::UnityEngine::Localization::Locale> const& __cordl_internal_get_m_SelectedLocale() const;

constexpr ::UnityW<::UnityEngine::Localization::Locale>& __cordl_internal_get_m_SelectedLocale() ;

constexpr ::System::Collections::Generic::IList_1<::UnityEngine::Localization::Tables::TableReference>* const& __cordl_internal_get_m_TableReferences() const;

constexpr ::System::Collections::Generic::IList_1<::UnityEngine::Localization::Tables::TableReference>*& __cordl_internal_get_m_TableReferences() ;

constexpr void __cordl_internal_set_m_Database(::UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>*  value) ;

constexpr void __cordl_internal_set_m_FinishPreloadingAction(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  value) ;

constexpr void __cordl_internal_set_m_LoadTableContentsAction(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>>*  value) ;

constexpr void __cordl_internal_set_m_LoadTables(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>>*  value) ;

constexpr void __cordl_internal_set_m_LoadTablesOperation(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  value) ;

constexpr void __cordl_internal_set_m_LoadTablesOperationHandle(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>  value) ;

constexpr void __cordl_internal_set_m_PreloadTablesContentsHandle(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>  value) ;

constexpr void __cordl_internal_set_m_PreloadTablesOperations(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  value) ;

constexpr void __cordl_internal_set_m_SelectedLocale(::UnityW<::UnityEngine::Localization::Locale>  value) ;

constexpr void __cordl_internal_set_m_TableReferences(::System::Collections::Generic::IList_1<::UnityEngine::Localization::Tables::TableReference>*  value) ;

/// [CompilerGenerated]
/// @brief Method <.ctor>b__11_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__11_0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>  a) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::Operations::PreloadTablesOperation_2<TTable,TEntry>*>* getStaticF_Pool() ;

static inline void setStaticF_Pool(::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::Operations::PreloadTablesOperation_2<TTable,TEntry>*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PreloadTablesOperation_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PreloadTablesOperation_2", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PreloadTablesOperation_2(PreloadTablesOperation_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PreloadTablesOperation_2", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PreloadTablesOperation_2(PreloadTablesOperation_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25311};

/// @brief Field m_Database, offset: 0xd0, size: 0x8, def value: None
 ::UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>*  ___m_Database;

/// @brief Field m_LoadTables, offset: 0xd8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>>*  ___m_LoadTables;

/// @brief Field m_LoadTablesOperation, offset: 0xe0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  ___m_LoadTablesOperation;

/// @brief Field m_PreloadTablesOperations, offset: 0xe8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  ___m_PreloadTablesOperations;

/// @brief Field m_LoadTableContentsAction, offset: 0xf0, size: 0x8, def value: None
 ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>>*  ___m_LoadTableContentsAction;

/// @brief Field m_FinishPreloadingAction, offset: 0xf8, size: 0x8, def value: None
 ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  ___m_FinishPreloadingAction;

/// @brief Field m_LoadTablesOperationHandle, offset: 0x100, size: 0x18, def value: None
 ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>  ___m_LoadTablesOperationHandle;

/// @brief Field m_PreloadTablesContentsHandle, offset: 0x118, size: 0x18, def value: None
 ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>  ___m_PreloadTablesContentsHandle;

/// @brief Field m_TableReferences, offset: 0x130, size: 0x8, def value: None
 ::System::Collections::Generic::IList_1<::UnityEngine::Localization::Tables::TableReference>*  ___m_TableReferences;

/// @brief Field m_SelectedLocale, offset: 0x138, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Localization::Locale>  ___m_SelectedLocale;

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
// CS Name: UnityEngine.Localization.Operations.PreloadTablesOperation`2/<>c<TTable,TEntry>
class CORDL_TYPE PreloadTablesOperation_2___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::Localization::Operations::PreloadTablesOperation_2___c<TTable,TEntry>*  __9;

static inline ::UnityEngine::Localization::Operations::PreloadTablesOperation_2___c<TTable,TEntry>* New_ctor() ;

/// @brief Method <.cctor>b__18_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::Operations::PreloadTablesOperation_2<TTable,TEntry>* __cctor_b__18_0() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Localization::Operations::PreloadTablesOperation_2___c<TTable,TEntry>* getStaticF___9() ;

static inline void setStaticF___9(::UnityEngine::Localization::Operations::PreloadTablesOperation_2___c<TTable,TEntry>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PreloadTablesOperation_2___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PreloadTablesOperation_2___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PreloadTablesOperation_2___c(PreloadTablesOperation_2___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PreloadTablesOperation_2___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PreloadTablesOperation_2___c(PreloadTablesOperation_2___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25310};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Localization::Operations
