#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Operations/PreloadLocaleOperation_2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Localization/Operations/zzzz__WaitForCurrentOperationAsyncOperationBase_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(PreloadLocaleOperation_2)
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
class PreloadLocaleOperation_2___c;
}
namespace UnityEngine::Localization::Settings {
template<typename TTable,typename TEntry>
class LocalizedDatabase_2;
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
namespace UnityEngine::ResourceManagement::ResourceLocations {
class IResourceLocation;
}
// Forward declare root types
namespace UnityEngine::Localization::Operations {
template<typename TTable,typename TEntry>
class PreloadLocaleOperation_2;
}
namespace UnityEngine::Localization::Operations {
template<typename TTable,typename TEntry>
class PreloadLocaleOperation_2___c;
}
// Write type traits
MARK_GEN_REF_T_PTR(::UnityEngine::Localization::Operations::PreloadLocaleOperation_2);
MARK_GEN_REF_T_PTR(::UnityEngine::Localization::Operations::PreloadLocaleOperation_2___c);
DEFINE_IL2CPP_GEN_CLASS_PTR(::UnityEngine::Localization::Operations::PreloadLocaleOperation_2, "UnityEngine.Localization.Operations", "PreloadLocaleOperation`2");
DEFINE_IL2CPP_GEN_CLASS_PTR(::UnityEngine::Localization::Operations::PreloadLocaleOperation_2___c, "UnityEngine.Localization.Operations", "PreloadLocaleOperation`2/<>c");
// Dependencies UnityEngine.Localization.Operations.WaitForCurrentOperationAsyncOperationBase`1<TObject>, UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<TObject>
namespace UnityEngine::Localization::Operations {
// cpp template
template<typename TTable,typename TEntry>
// Is value type: false
// CS Name: UnityEngine.Localization.Operations.PreloadLocaleOperation`2<TTable,TEntry>
class CORDL_TYPE PreloadLocaleOperation_2 : public ::UnityEngine::Localization::Operations::WaitForCurrentOperationAsyncOperationBase_1<::UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>*> {
public:
// Declarations
using __c = ::UnityEngine::Localization::Operations::PreloadLocaleOperation_2___c<TTable, TEntry>;

 __declspec(property(get=get_DebugName)) ::StringW  DebugName;

/// @brief Field Pool, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pool, put=setStaticF_Pool)) ::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::Operations::PreloadLocaleOperation_2<TTable,TEntry>*>*  Pool;

 __declspec(property(get=get_Progress)) float_t  Progress;

/// @brief Field m_Database, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Database, put=__cordl_internal_set_m_Database)) ::UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>*  m_Database;

/// @brief Field m_FinishPreloadingAction, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_FinishPreloadingAction, put=__cordl_internal_set_m_FinishPreloadingAction)) ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  m_FinishPreloadingAction;

/// @brief Field m_LoadResourcesOperation, offset 0x100, size 0x18 
 __declspec(property(get=__cordl_internal_get_m_LoadResourcesOperation, put=__cordl_internal_set_m_LoadResourcesOperation)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>  m_LoadResourcesOperation;

/// @brief Field m_LoadTableContentsAction, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LoadTableContentsAction, put=__cordl_internal_set_m_LoadTableContentsAction)) ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>>*  m_LoadTableContentsAction;

/// @brief Field m_LoadTableContentsOperation, offset 0x130, size 0x18 
 __declspec(property(get=__cordl_internal_get_m_LoadTableContentsOperation, put=__cordl_internal_set_m_LoadTableContentsOperation)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>  m_LoadTableContentsOperation;

/// @brief Field m_LoadTablesAction, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LoadTablesAction, put=__cordl_internal_set_m_LoadTablesAction)) ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>>*  m_LoadTablesAction;

/// @brief Field m_LoadTablesGroupOperation, offset 0x118, size 0x18 
 __declspec(property(get=__cordl_internal_get_m_LoadTablesGroupOperation, put=__cordl_internal_set_m_LoadTablesGroupOperation)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>  m_LoadTablesGroupOperation;

/// @brief Field m_LoadTablesOperations, offset 0x148, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LoadTablesOperations, put=__cordl_internal_set_m_LoadTablesOperations)) ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  m_LoadTablesOperations;

/// @brief Field m_Locale, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Locale, put=__cordl_internal_set_m_Locale)) ::UnityW<::UnityEngine::Localization::Locale>  m_Locale;

/// @brief Field m_PreloadTableContentsOperations, offset 0x150, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PreloadTableContentsOperations, put=__cordl_internal_set_m_PreloadTableContentsOperations)) ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  m_PreloadTableContentsOperations;

/// @brief Field m_PreloadTablesCompletedAction, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PreloadTablesCompletedAction, put=__cordl_internal_set_m_PreloadTablesCompletedAction)) ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>>*  m_PreloadTablesCompletedAction;

/// @brief Field m_Progress, offset 0x160, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Progress, put=__cordl_internal_set_m_Progress)) float_t  m_Progress;

/// @brief Field m_ResourceLabels, offset 0x158, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ResourceLabels, put=__cordl_internal_set_m_ResourceLabels)) ::System::Collections::Generic::List_1<::StringW>*  m_ResourceLabels;

/// @brief Method BeginPreloading, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void BeginPreloading() ;

/// @brief Method CompleteAndRelease, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void CompleteAndRelease(bool  success, ::StringW  errorMsg) ;

/// @brief Method Destroy, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Destroy() ;

/// @brief Method Execute, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Execute() ;

/// @brief Method FinishPreloading, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void FinishPreloading(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  op) ;

/// @brief Method Init, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Init(::UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>*  database, ::UnityEngine::Localization::Locale*  locale) ;

/// @brief Method LoadTableContents, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void LoadTableContents(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>  operation) ;

/// @brief Method LoadTables, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void LoadTables(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>  loadResourcesOperation) ;

static inline ::UnityEngine::Localization::Operations::PreloadLocaleOperation_2<TTable,TEntry>* New_ctor() ;

/// @brief Method PreloadTablesCompleted, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void PreloadTablesCompleted(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>  obj) ;

constexpr ::UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>* const& __cordl_internal_get_m_Database() const;

constexpr ::UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>*& __cordl_internal_get_m_Database() ;

constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* const& __cordl_internal_get_m_FinishPreloadingAction() const;

constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*& __cordl_internal_get_m_FinishPreloadingAction() ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*> const& __cordl_internal_get_m_LoadResourcesOperation() const;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>& __cordl_internal_get_m_LoadResourcesOperation() ;

constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>>* const& __cordl_internal_get_m_LoadTableContentsAction() const;

constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>>*& __cordl_internal_get_m_LoadTableContentsAction() ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*> const& __cordl_internal_get_m_LoadTableContentsOperation() const;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>& __cordl_internal_get_m_LoadTableContentsOperation() ;

constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>>* const& __cordl_internal_get_m_LoadTablesAction() const;

constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>>*& __cordl_internal_get_m_LoadTablesAction() ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*> const& __cordl_internal_get_m_LoadTablesGroupOperation() const;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>& __cordl_internal_get_m_LoadTablesGroupOperation() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* const& __cordl_internal_get_m_LoadTablesOperations() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*& __cordl_internal_get_m_LoadTablesOperations() ;

constexpr ::UnityW<::UnityEngine::Localization::Locale> const& __cordl_internal_get_m_Locale() const;

constexpr ::UnityW<::UnityEngine::Localization::Locale>& __cordl_internal_get_m_Locale() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* const& __cordl_internal_get_m_PreloadTableContentsOperations() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*& __cordl_internal_get_m_PreloadTableContentsOperations() ;

constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>>* const& __cordl_internal_get_m_PreloadTablesCompletedAction() const;

constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>>*& __cordl_internal_get_m_PreloadTablesCompletedAction() ;

constexpr float_t const& __cordl_internal_get_m_Progress() const;

constexpr float_t& __cordl_internal_get_m_Progress() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_m_ResourceLabels() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_m_ResourceLabels() ;

constexpr void __cordl_internal_set_m_Database(::UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>*  value) ;

constexpr void __cordl_internal_set_m_FinishPreloadingAction(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  value) ;

constexpr void __cordl_internal_set_m_LoadResourcesOperation(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>  value) ;

constexpr void __cordl_internal_set_m_LoadTableContentsAction(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>>*  value) ;

constexpr void __cordl_internal_set_m_LoadTableContentsOperation(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>  value) ;

constexpr void __cordl_internal_set_m_LoadTablesAction(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>>*  value) ;

constexpr void __cordl_internal_set_m_LoadTablesGroupOperation(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>  value) ;

constexpr void __cordl_internal_set_m_LoadTablesOperations(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  value) ;

constexpr void __cordl_internal_set_m_Locale(::UnityW<::UnityEngine::Localization::Locale>  value) ;

constexpr void __cordl_internal_set_m_PreloadTableContentsOperations(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  value) ;

constexpr void __cordl_internal_set_m_PreloadTablesCompletedAction(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>>*  value) ;

constexpr void __cordl_internal_set_m_Progress(float_t  value) ;

constexpr void __cordl_internal_set_m_ResourceLabels(::System::Collections::Generic::List_1<::StringW>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::Operations::PreloadLocaleOperation_2<TTable,TEntry>*>* getStaticF_Pool() ;

/// @brief Method get_DebugName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW get_DebugName() ;

/// @brief Method get_Progress, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline float_t get_Progress() ;

static inline void setStaticF_Pool(::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::Operations::PreloadLocaleOperation_2<TTable,TEntry>*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PreloadLocaleOperation_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PreloadLocaleOperation_2", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PreloadLocaleOperation_2(PreloadLocaleOperation_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PreloadLocaleOperation_2", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PreloadLocaleOperation_2(PreloadLocaleOperation_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25309};

/// @brief Field m_LoadTablesAction, offset: 0xd0, size: 0x8, def value: None
 ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>>*  ___m_LoadTablesAction;

/// @brief Field m_LoadTableContentsAction, offset: 0xd8, size: 0x8, def value: None
 ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>>*  ___m_LoadTableContentsAction;

/// @brief Field m_FinishPreloadingAction, offset: 0xe0, size: 0x8, def value: None
 ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  ___m_FinishPreloadingAction;

/// @brief Field m_PreloadTablesCompletedAction, offset: 0xe8, size: 0x8, def value: None
 ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>>*  ___m_PreloadTablesCompletedAction;

/// @brief Field m_Database, offset: 0xf0, size: 0x8, def value: None
 ::UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>*  ___m_Database;

/// @brief Field m_Locale, offset: 0xf8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Localization::Locale>  ___m_Locale;

/// @brief Field m_LoadResourcesOperation, offset: 0x100, size: 0x18, def value: None
 ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>  ___m_LoadResourcesOperation;

/// @brief Field m_LoadTablesGroupOperation, offset: 0x118, size: 0x18, def value: None
 ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>  ___m_LoadTablesGroupOperation;

/// @brief Field m_LoadTableContentsOperation, offset: 0x130, size: 0x18, def value: None
 ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>  ___m_LoadTableContentsOperation;

/// @brief Field m_LoadTablesOperations, offset: 0x148, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  ___m_LoadTablesOperations;

/// @brief Field m_PreloadTableContentsOperations, offset: 0x150, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  ___m_PreloadTableContentsOperations;

/// @brief Field m_ResourceLabels, offset: 0x158, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___m_ResourceLabels;

/// @brief Field m_Progress, offset: 0x160, size: 0x4, def value: None
 float_t  ___m_Progress;

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
// CS Name: UnityEngine.Localization.Operations.PreloadLocaleOperation`2/<>c<TTable,TEntry>
class CORDL_TYPE PreloadLocaleOperation_2___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::Localization::Operations::PreloadLocaleOperation_2___c<TTable,TEntry>*  __9;

static inline ::UnityEngine::Localization::Operations::PreloadLocaleOperation_2___c<TTable,TEntry>* New_ctor() ;

/// @brief Method <.cctor>b__28_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::Operations::PreloadLocaleOperation_2<TTable,TEntry>* __cctor_b__28_0() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Localization::Operations::PreloadLocaleOperation_2___c<TTable,TEntry>* getStaticF___9() ;

static inline void setStaticF___9(::UnityEngine::Localization::Operations::PreloadLocaleOperation_2___c<TTable,TEntry>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PreloadLocaleOperation_2___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PreloadLocaleOperation_2___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PreloadLocaleOperation_2___c(PreloadLocaleOperation_2___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PreloadLocaleOperation_2___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PreloadLocaleOperation_2___c(PreloadLocaleOperation_2___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25308};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Localization::Operations
