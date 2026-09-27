#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Operations/LoadAssetOperation_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Localization/Operations/zzzz__WaitForCurrentOperationAsyncOperationBase_1_def.hpp"
#include "UnityEngine/Localization/Settings/zzzz__LocalizedDatabase`2_TableEntryResult_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(LoadAssetOperation_1)
namespace GlobalNamespace {
template<typename TTable,typename TEntry>
struct LocalizedDatabase_2_TableEntryResult;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine::Localization::Operations {
template<typename TObject>
class LoadAssetOperation_1___c;
}
namespace UnityEngine::Localization::Tables {
class AssetTableEntry;
}
namespace UnityEngine::Localization::Tables {
class AssetTable;
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
template<typename TObject>
class LoadAssetOperation_1;
}
namespace UnityEngine::Localization::Operations {
template<typename TObject>
class LoadAssetOperation_1___c;
}
// Write type traits
MARK_GEN_REF_T_PTR(::UnityEngine::Localization::Operations::LoadAssetOperation_1);
MARK_GEN_REF_T_PTR(::UnityEngine::Localization::Operations::LoadAssetOperation_1___c);
DEFINE_IL2CPP_GEN_CLASS_PTR(::UnityEngine::Localization::Operations::LoadAssetOperation_1, "UnityEngine.Localization.Operations", "LoadAssetOperation`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::UnityEngine::Localization::Operations::LoadAssetOperation_1___c, "UnityEngine.Localization.Operations", "LoadAssetOperation`1/<>c");
// Dependencies UnityEngine.Localization.Operations.WaitForCurrentOperationAsyncOperationBase`1<TObject>, UnityEngine.Localization.Settings.LocalizedDatabase`2::TableEntryResult<TTable, TEntry>, UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<TObject>
namespace UnityEngine::Localization::Operations {
// cpp template
template<typename TObject>
// Is value type: false
// CS Name: UnityEngine.Localization.Operations.LoadAssetOperation`1<TObject>
class CORDL_TYPE LoadAssetOperation_1 : public ::UnityEngine::Localization::Operations::WaitForCurrentOperationAsyncOperationBase_1<TObject> {
public:
// Declarations
using __c = ::UnityEngine::Localization::Operations::LoadAssetOperation_1___c<TObject>;

/// @brief Field Pool, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pool, put=setStaticF_Pool)) ::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::Operations::LoadAssetOperation_1<TObject>*>*  Pool;

/// @brief Field m_AssetLoadedAction, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AssetLoadedAction, put=__cordl_internal_set_m_AssetLoadedAction)) ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>*  m_AssetLoadedAction;

/// @brief Field m_AutoRelease, offset 0x108, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_AutoRelease, put=__cordl_internal_set_m_AutoRelease)) bool  m_AutoRelease;

/// @brief Field m_LoadAssetOperation, offset 0xf0, size 0x18 
 __declspec(property(get=__cordl_internal_get_m_LoadAssetOperation, put=__cordl_internal_set_m_LoadAssetOperation)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>  m_LoadAssetOperation;

/// @brief Field m_TableEntryOperation, offset 0xd8, size 0x18 
 __declspec(property(get=__cordl_internal_get_m_TableEntryOperation, put=__cordl_internal_set_m_TableEntryOperation)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::GlobalNamespace::LocalizedDatabase_2_TableEntryResult<::UnityW<::UnityEngine::Localization::Tables::AssetTable>,::UnityEngine::Localization::Tables::AssetTableEntry*>>  m_TableEntryOperation;

/// @brief Method AssetLoaded, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void AssetLoaded(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>  handle) ;

/// @brief Method CompleteAndRelease, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void CompleteAndRelease(TObject  result, bool  success, ::StringW  errorMsg) ;

/// @brief Method Destroy, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Destroy() ;

/// @brief Method Execute, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Execute() ;

/// @brief Method Init, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Init(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::GlobalNamespace::LocalizedDatabase_2_TableEntryResult<::UnityW<::UnityEngine::Localization::Tables::AssetTable>,::UnityEngine::Localization::Tables::AssetTableEntry*>>  loadTableEntryOperation, bool  autoRelease) ;

static inline ::UnityEngine::Localization::Operations::LoadAssetOperation_1<TObject>* New_ctor() ;

constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>* const& __cordl_internal_get_m_AssetLoadedAction() const;

constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>*& __cordl_internal_get_m_AssetLoadedAction() ;

constexpr bool const& __cordl_internal_get_m_AutoRelease() const;

constexpr bool& __cordl_internal_get_m_AutoRelease() ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> const& __cordl_internal_get_m_LoadAssetOperation() const;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>& __cordl_internal_get_m_LoadAssetOperation() ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::GlobalNamespace::LocalizedDatabase_2_TableEntryResult<::UnityW<::UnityEngine::Localization::Tables::AssetTable>,::UnityEngine::Localization::Tables::AssetTableEntry*>> const& __cordl_internal_get_m_TableEntryOperation() const;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::GlobalNamespace::LocalizedDatabase_2_TableEntryResult<::UnityW<::UnityEngine::Localization::Tables::AssetTable>,::UnityEngine::Localization::Tables::AssetTableEntry*>>& __cordl_internal_get_m_TableEntryOperation() ;

constexpr void __cordl_internal_set_m_AssetLoadedAction(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>*  value) ;

constexpr void __cordl_internal_set_m_AutoRelease(bool  value) ;

constexpr void __cordl_internal_set_m_LoadAssetOperation(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>  value) ;

constexpr void __cordl_internal_set_m_TableEntryOperation(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::GlobalNamespace::LocalizedDatabase_2_TableEntryResult<::UnityW<::UnityEngine::Localization::Tables::AssetTable>,::UnityEngine::Localization::Tables::AssetTableEntry*>>  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::Operations::LoadAssetOperation_1<TObject>*>* getStaticF_Pool() ;

static inline void setStaticF_Pool(::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::Operations::LoadAssetOperation_1<TObject>*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoadAssetOperation_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoadAssetOperation_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LoadAssetOperation_1(LoadAssetOperation_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoadAssetOperation_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoadAssetOperation_1(LoadAssetOperation_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25299};

/// @brief Field m_AssetLoadedAction, offset: 0xd0, size: 0x8, def value: None
 ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>*  ___m_AssetLoadedAction;

/// @brief Field m_TableEntryOperation, offset: 0xd8, size: 0x18, def value: None
 ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::GlobalNamespace::LocalizedDatabase_2_TableEntryResult<::UnityW<::UnityEngine::Localization::Tables::AssetTable>,::UnityEngine::Localization::Tables::AssetTableEntry*>>  ___m_TableEntryOperation;

/// @brief Field m_LoadAssetOperation, offset: 0xf0, size: 0x18, def value: None
 ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>  ___m_LoadAssetOperation;

/// @brief Field m_AutoRelease, offset: 0x108, size: 0x1, def value: None
 bool  ___m_AutoRelease;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Localization::Operations
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::Localization::Operations {
// cpp template
template<typename TObject>
// Is value type: false
// CS Name: UnityEngine.Localization.Operations.LoadAssetOperation`1/<>c<TObject>
class CORDL_TYPE LoadAssetOperation_1___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::Localization::Operations::LoadAssetOperation_1___c<TObject>*  __9;

static inline ::UnityEngine::Localization::Operations::LoadAssetOperation_1___c<TObject>* New_ctor() ;

/// @brief Method <.cctor>b__11_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::Operations::LoadAssetOperation_1<TObject>* __cctor_b__11_0() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Localization::Operations::LoadAssetOperation_1___c<TObject>* getStaticF___9() ;

static inline void setStaticF___9(::UnityEngine::Localization::Operations::LoadAssetOperation_1___c<TObject>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LoadAssetOperation_1___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LoadAssetOperation_1___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LoadAssetOperation_1___c(LoadAssetOperation_1___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LoadAssetOperation_1___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LoadAssetOperation_1___c(LoadAssetOperation_1___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25298};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Localization::Operations
