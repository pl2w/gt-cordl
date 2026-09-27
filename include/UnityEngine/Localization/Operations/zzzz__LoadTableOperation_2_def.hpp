#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Operations/LoadTableOperation_2.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Localization/Operations/zzzz__WaitForCurrentOperationAsyncOperationBase_1_def.hpp"
#include "UnityEngine/Localization/Tables/zzzz__TableReference_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(LoadTableOperation_2)
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
class LoadTableOperation_2___c;
}
namespace UnityEngine::Localization::Settings {
template<typename TTable,typename TEntry>
class LocalizedDatabase_2;
}
namespace UnityEngine::Localization::Tables {
class SharedTableData;
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
namespace UnityEngine::ResourceManagement::ResourceLocations {
class IResourceLocation;
}
// Forward declare root types
namespace UnityEngine::Localization::Operations {
template<typename TTable,typename TEntry>
class LoadTableOperation_2;
}
namespace UnityEngine::Localization::Operations {
template<typename TTable,typename TEntry>
class LoadTableOperation_2___c;
}
// Write type traits
MARK_GEN_REF_T_PTR(::UnityEngine::Localization::Operations::LoadTableOperation_2);
MARK_GEN_REF_T_PTR(::UnityEngine::Localization::Operations::LoadTableOperation_2___c);
DEFINE_IL2CPP_GEN_CLASS_PTR(::UnityEngine::Localization::Operations::LoadTableOperation_2, "UnityEngine.Localization.Operations", "LoadTableOperation`2");
DEFINE_IL2CPP_GEN_CLASS_PTR(::UnityEngine::Localization::Operations::LoadTableOperation_2___c, "UnityEngine.Localization.Operations", "LoadTableOperation`2/<>c");
// Dependencies UnityEngine.Localization.Operations.WaitForCurrentOperationAsyncOperationBase`1<TObject>, UnityEngine.Localization.Tables.TableReference, UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<TObject>
namespace UnityEngine::Localization::Operations {
// cpp template
template<typename TTable,typename TEntry>
// Is value type: false
// CS Name: UnityEngine.Localization.Operations.LoadTableOperation`2<TTable,TEntry>
class CORDL_TYPE LoadTableOperation_2 : public ::UnityEngine::Localization::Operations::WaitForCurrentOperationAsyncOperationBase_1<TTable> {
public:
// Declarations
using __c = ::UnityEngine::Localization::Operations::LoadTableOperation_2___c<TTable, TEntry>;

/// @brief Field Pool, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pool, put=setStaticF_Pool)) ::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::Operations::LoadTableOperation_2<TTable,TEntry>*>*  Pool;

 __declspec(property(get=get_RegisterTableOperation, put=set_RegisterTableOperation)) ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>>*  RegisterTableOperation;

/// @brief Field <RegisterTableOperation>k__BackingField, offset 0x140, size 0x8 
 __declspec(property(get=__cordl_internal_get__RegisterTableOperation_k__BackingField, put=__cordl_internal_set__RegisterTableOperation_k__BackingField)) ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>>*  _RegisterTableOperation_k__BackingField;

/// @brief Field m_CollectionName, offset 0x138, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CollectionName, put=__cordl_internal_set_m_CollectionName)) ::StringW  m_CollectionName;

/// @brief Field m_CustomTableLoadedAction, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CustomTableLoadedAction, put=__cordl_internal_set_m_CustomTableLoadedAction)) ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>>*  m_CustomTableLoadedAction;

/// @brief Field m_Database, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Database, put=__cordl_internal_set_m_Database)) ::UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>*  m_Database;

/// @brief Field m_LoadTableByGuidAction, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LoadTableByGuidAction, put=__cordl_internal_set_m_LoadTableByGuidAction)) ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::Localization::Tables::SharedTableData>>>*  m_LoadTableByGuidAction;

/// @brief Field m_LoadTableOperation, offset 0x118, size 0x18 
 __declspec(property(get=__cordl_internal_get_m_LoadTableOperation, put=__cordl_internal_set_m_LoadTableOperation)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>  m_LoadTableOperation;

/// @brief Field m_LoadTableResourceAction, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LoadTableResourceAction, put=__cordl_internal_set_m_LoadTableResourceAction)) ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>>*  m_LoadTableResourceAction;

/// @brief Field m_SelectedLocale, offset 0x130, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SelectedLocale, put=__cordl_internal_set_m_SelectedLocale)) ::UnityW<::UnityEngine::Localization::Locale>  m_SelectedLocale;

/// @brief Field m_TableLoadedAction, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_TableLoadedAction, put=__cordl_internal_set_m_TableLoadedAction)) ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>>*  m_TableLoadedAction;

/// @brief Field m_TableReference, offset 0xf8, size 0x20 
 __declspec(property(get=__cordl_internal_get_m_TableReference, put=__cordl_internal_set_m_TableReference)) ::UnityEngine::Localization::Tables::TableReference  m_TableReference;

/// @brief Method CustomTableLoaded, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void CustomTableLoaded(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>  operationHandle) ;

/// @brief Method DefaultLoadTableByName, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void DefaultLoadTableByName() ;

/// @brief Method Destroy, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Destroy() ;

/// @brief Method Execute, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Execute() ;

/// @brief Method FindTableByName, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void FindTableByName(::StringW  collectionName) ;

/// @brief Method Init, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Init(::UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>*  database, ::UnityEngine::Localization::Tables::TableReference  tableReference, ::UnityEngine::Localization::Locale*  locale) ;

/// @brief Method LoadTableByGuid, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void LoadTableByGuid(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::Localization::Tables::SharedTableData>>  operationHandle) ;

/// @brief Method LoadTableResource, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void LoadTableResource(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>  operationHandle) ;

static inline ::UnityEngine::Localization::Operations::LoadTableOperation_2<TTable,TEntry>* New_ctor() ;

/// @brief Method TableLoaded, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void TableLoaded(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>  operationHandle) ;

/// @brief Method ToString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method TryLoadWithTableProvider, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool TryLoadWithTableProvider() ;

constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>>* const& __cordl_internal_get__RegisterTableOperation_k__BackingField() const;

constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>>*& __cordl_internal_get__RegisterTableOperation_k__BackingField() ;

constexpr ::StringW const& __cordl_internal_get_m_CollectionName() const;

constexpr ::StringW& __cordl_internal_get_m_CollectionName() ;

constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>>* const& __cordl_internal_get_m_CustomTableLoadedAction() const;

constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>>*& __cordl_internal_get_m_CustomTableLoadedAction() ;

constexpr ::UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>* const& __cordl_internal_get_m_Database() const;

constexpr ::UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>*& __cordl_internal_get_m_Database() ;

constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::Localization::Tables::SharedTableData>>>* const& __cordl_internal_get_m_LoadTableByGuidAction() const;

constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::Localization::Tables::SharedTableData>>>*& __cordl_internal_get_m_LoadTableByGuidAction() ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable> const& __cordl_internal_get_m_LoadTableOperation() const;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>& __cordl_internal_get_m_LoadTableOperation() ;

constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>>* const& __cordl_internal_get_m_LoadTableResourceAction() const;

constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>>*& __cordl_internal_get_m_LoadTableResourceAction() ;

constexpr ::UnityW<::UnityEngine::Localization::Locale> const& __cordl_internal_get_m_SelectedLocale() const;

constexpr ::UnityW<::UnityEngine::Localization::Locale>& __cordl_internal_get_m_SelectedLocale() ;

constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>>* const& __cordl_internal_get_m_TableLoadedAction() const;

constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>>*& __cordl_internal_get_m_TableLoadedAction() ;

constexpr ::UnityEngine::Localization::Tables::TableReference const& __cordl_internal_get_m_TableReference() const;

constexpr ::UnityEngine::Localization::Tables::TableReference& __cordl_internal_get_m_TableReference() ;

constexpr void __cordl_internal_set__RegisterTableOperation_k__BackingField(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>>*  value) ;

constexpr void __cordl_internal_set_m_CollectionName(::StringW  value) ;

constexpr void __cordl_internal_set_m_CustomTableLoadedAction(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>>*  value) ;

constexpr void __cordl_internal_set_m_Database(::UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>*  value) ;

constexpr void __cordl_internal_set_m_LoadTableByGuidAction(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::Localization::Tables::SharedTableData>>>*  value) ;

constexpr void __cordl_internal_set_m_LoadTableOperation(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>  value) ;

constexpr void __cordl_internal_set_m_LoadTableResourceAction(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>>*  value) ;

constexpr void __cordl_internal_set_m_SelectedLocale(::UnityW<::UnityEngine::Localization::Locale>  value) ;

constexpr void __cordl_internal_set_m_TableLoadedAction(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>>*  value) ;

constexpr void __cordl_internal_set_m_TableReference(::UnityEngine::Localization::Tables::TableReference  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::Operations::LoadTableOperation_2<TTable,TEntry>*>* getStaticF_Pool() ;

/// [CompilerGenerated]
/// @brief Method get_RegisterTableOperation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>>* get_RegisterTableOperation() ;

static inline void setStaticF_Pool(::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::Operations::LoadTableOperation_2<TTable,TEntry>*>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_RegisterTableOperation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_RegisterTableOperation(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoadTableOperation_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoadTableOperation_2", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LoadTableOperation_2(LoadTableOperation_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoadTableOperation_2", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoadTableOperation_2(LoadTableOperation_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25303};

/// @brief Field m_LoadTableByGuidAction, offset: 0xd0, size: 0x8, def value: None
 ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::Localization::Tables::SharedTableData>>>*  ___m_LoadTableByGuidAction;

/// @brief Field m_LoadTableResourceAction, offset: 0xd8, size: 0x8, def value: None
 ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation*>*>>*  ___m_LoadTableResourceAction;

/// @brief Field m_TableLoadedAction, offset: 0xe0, size: 0x8, def value: None
 ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>>*  ___m_TableLoadedAction;

/// @brief Field m_CustomTableLoadedAction, offset: 0xe8, size: 0x8, def value: None
 ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>>*  ___m_CustomTableLoadedAction;

/// @brief Field m_Database, offset: 0xf0, size: 0x8, def value: None
 ::UnityEngine::Localization::Settings::LocalizedDatabase_2<TTable,TEntry>*  ___m_Database;

/// @brief Field m_TableReference, offset: 0xf8, size: 0x20, def value: None
 ::UnityEngine::Localization::Tables::TableReference  ___m_TableReference;

/// @brief Field m_LoadTableOperation, offset: 0x118, size: 0x18, def value: None
 ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>  ___m_LoadTableOperation;

/// @brief Field m_SelectedLocale, offset: 0x130, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Localization::Locale>  ___m_SelectedLocale;

/// @brief Field m_CollectionName, offset: 0x138, size: 0x8, def value: None
 ::StringW  ___m_CollectionName;

/// [CompilerGenerated]
/// @brief Field <RegisterTableOperation>k__BackingField, offset: 0x140, size: 0x8, def value: None
 ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TTable>>*  ____RegisterTableOperation_k__BackingField;

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
// CS Name: UnityEngine.Localization.Operations.LoadTableOperation`2/<>c<TTable,TEntry>
class CORDL_TYPE LoadTableOperation_2___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::Localization::Operations::LoadTableOperation_2___c<TTable,TEntry>*  __9;

static inline ::UnityEngine::Localization::Operations::LoadTableOperation_2___c<TTable,TEntry>* New_ctor() ;

/// @brief Method <.cctor>b__26_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::Operations::LoadTableOperation_2<TTable,TEntry>* __cctor_b__26_0() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Localization::Operations::LoadTableOperation_2___c<TTable,TEntry>* getStaticF___9() ;

static inline void setStaticF___9(::UnityEngine::Localization::Operations::LoadTableOperation_2___c<TTable,TEntry>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoadTableOperation_2___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoadTableOperation_2___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LoadTableOperation_2___c(LoadTableOperation_2___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoadTableOperation_2___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoadTableOperation_2___c(LoadTableOperation_2___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25302};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Localization::Operations
