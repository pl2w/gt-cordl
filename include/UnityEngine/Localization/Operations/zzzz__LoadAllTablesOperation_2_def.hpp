#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Operations/LoadAllTablesOperation_2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Localization/Operations/zzzz__WaitForCurrentOperationAsyncOperationBase_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
CORDL_MODULE_EXPORT(LoadAllTablesOperation_2)
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine::Localization::Operations {
template<typename TTable,typename TEntry>
class LoadAllTablesOperation_2___c;
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
// Forward declare root types
namespace UnityEngine::Localization::Operations {
template<typename TTable,typename TEntry>
class LoadAllTablesOperation_2;
}
namespace UnityEngine::Localization::Operations {
template<typename TTable,typename TEntry>
class LoadAllTablesOperation_2___c;
}
// Write type traits
MARK_GEN_REF_T_PTR(::UnityEngine::Localization::Operations::LoadAllTablesOperation_2);
MARK_GEN_REF_T_PTR(::UnityEngine::Localization::Operations::LoadAllTablesOperation_2___c);
DEFINE_IL2CPP_GEN_CLASS_PTR(::UnityEngine::Localization::Operations::LoadAllTablesOperation_2, "UnityEngine.Localization.Operations", "LoadAllTablesOperation`2");
DEFINE_IL2CPP_GEN_CLASS_PTR(::UnityEngine::Localization::Operations::LoadAllTablesOperation_2___c, "UnityEngine.Localization.Operations", "LoadAllTablesOperation`2/<>c");
// Dependencies UnityEngine.Localization.Operations.WaitForCurrentOperationAsyncOperationBase`1<TObject>, UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<TObject>
namespace UnityEngine::Localization::Operations {
// cpp template
template<typename TTable,typename TEntry>
// Is value type: false
// CS Name: UnityEngine.Localization.Operations.LoadAllTablesOperation`2<TTable,TEntry>
class CORDL_TYPE LoadAllTablesOperation_2 : public ::UnityEngine::Localization::Operations::WaitForCurrentOperationAsyncOperationBase_1<::System::Collections::Generic::IList_1<TTable>*> {
public:
// Declarations
using __c = ::UnityEngine::Localization::Operations::LoadAllTablesOperation_2___c<TTable, TEntry>;

/// @brief Field Pool, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pool, put=setStaticF_Pool)) ::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::Operations::LoadAllTablesOperation_2<TTable,TEntry>*>*  Pool;

/// @brief Field m_AllTablesOperation, offset 0xd8, size 0x18 
 __declspec(property(get=__cordl_internal_get_m_AllTablesOperation, put=__cordl_internal_set_m_AllTablesOperation)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TTable>*>  m_AllTablesOperation;

/// @brief Field m_Database, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Database, put=__cordl_internal_set_m_Database)) ::UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>*  m_Database;

/// @brief Field m_LoadingCompletedAction, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LoadingCompletedAction, put=__cordl_internal_set_m_LoadingCompletedAction)) ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TTable>*>>*  m_LoadingCompletedAction;

/// @brief Field m_SelectedLocale, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SelectedLocale, put=__cordl_internal_set_m_SelectedLocale)) ::UnityW<::UnityEngine::Localization::Locale>  m_SelectedLocale;

/// @brief Method Destroy, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Destroy() ;

/// @brief Method Execute, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Execute() ;

/// @brief Method Init, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Init(::UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>*  database, ::UnityEngine::Localization::Locale*  locale) ;

/// @brief Method LoadingCompleted, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void LoadingCompleted(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TTable>*>  obj) ;

static inline ::UnityEngine::Localization::Operations::LoadAllTablesOperation_2<TTable,TEntry>* New_ctor() ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TTable>*> const& __cordl_internal_get_m_AllTablesOperation() const;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TTable>*>& __cordl_internal_get_m_AllTablesOperation() ;

constexpr ::UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>* const& __cordl_internal_get_m_Database() const;

constexpr ::UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>*& __cordl_internal_get_m_Database() ;

constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TTable>*>>* const& __cordl_internal_get_m_LoadingCompletedAction() const;

constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TTable>*>>*& __cordl_internal_get_m_LoadingCompletedAction() ;

constexpr ::UnityW<::UnityEngine::Localization::Locale> const& __cordl_internal_get_m_SelectedLocale() const;

constexpr ::UnityW<::UnityEngine::Localization::Locale>& __cordl_internal_get_m_SelectedLocale() ;

constexpr void __cordl_internal_set_m_AllTablesOperation(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TTable>*>  value) ;

constexpr void __cordl_internal_set_m_Database(::UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>*  value) ;

constexpr void __cordl_internal_set_m_LoadingCompletedAction(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TTable>*>>*  value) ;

constexpr void __cordl_internal_set_m_SelectedLocale(::UnityW<::UnityEngine::Localization::Locale>  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::Operations::LoadAllTablesOperation_2<TTable,TEntry>*>* getStaticF_Pool() ;

static inline void setStaticF_Pool(::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::Operations::LoadAllTablesOperation_2<TTable,TEntry>*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoadAllTablesOperation_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoadAllTablesOperation_2", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LoadAllTablesOperation_2(LoadAllTablesOperation_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoadAllTablesOperation_2", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoadAllTablesOperation_2(LoadAllTablesOperation_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25297};

/// @brief Field m_LoadingCompletedAction, offset: 0xd0, size: 0x8, def value: None
 ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TTable>*>>*  ___m_LoadingCompletedAction;

/// @brief Field m_AllTablesOperation, offset: 0xd8, size: 0x18, def value: None
 ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<TTable>*>  ___m_AllTablesOperation;

/// @brief Field m_Database, offset: 0xf0, size: 0x8, def value: None
 ::UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>*  ___m_Database;

/// @brief Field m_SelectedLocale, offset: 0xf8, size: 0x8, def value: None
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
// CS Name: UnityEngine.Localization.Operations.LoadAllTablesOperation`2/<>c<TTable,TEntry>
class CORDL_TYPE LoadAllTablesOperation_2___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::Localization::Operations::LoadAllTablesOperation_2___c<TTable,TEntry>*  __9;

static inline ::UnityEngine::Localization::Operations::LoadAllTablesOperation_2___c<TTable,TEntry>* New_ctor() ;

/// @brief Method <.cctor>b__10_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::Operations::LoadAllTablesOperation_2<TTable,TEntry>* __cctor_b__10_0() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Localization::Operations::LoadAllTablesOperation_2___c<TTable,TEntry>* getStaticF___9() ;

static inline void setStaticF___9(::UnityEngine::Localization::Operations::LoadAllTablesOperation_2___c<TTable,TEntry>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoadAllTablesOperation_2___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoadAllTablesOperation_2___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LoadAllTablesOperation_2___c(LoadAllTablesOperation_2___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoadAllTablesOperation_2___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoadAllTablesOperation_2___c(LoadAllTablesOperation_2___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25296};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Localization::Operations
