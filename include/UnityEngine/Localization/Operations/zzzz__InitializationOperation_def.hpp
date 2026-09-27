#pragma once
// IWYU pragma private; include "UnityEngine/Localization/Operations/InitializationOperation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Localization/Operations/zzzz__WaitForCurrentOperationAsyncOperationBase_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationBase_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(InitializationOperation)
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
namespace System {
class Object;
}
namespace UnityEngine::Localization::Operations {
class InitializationOperation_UnloadBundlesOperation;
}
namespace UnityEngine::Localization::Operations {
class InitializationOperation___c;
}
namespace UnityEngine::Localization::Settings {
class LocalizationSettings;
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
namespace UnityEngine {
class AsyncOperation;
}
// Forward declare root types
namespace UnityEngine::Localization::Operations {
class InitializationOperation;
}
namespace UnityEngine::Localization::Operations {
class InitializationOperation_UnloadBundlesOperation;
}
namespace UnityEngine::Localization::Operations {
class InitializationOperation___c;
}
// Write type traits
MARK_REF_T(::UnityEngine::Localization::Operations::InitializationOperation*);
MARK_REF_T(::UnityEngine::Localization::Operations::InitializationOperation_UnloadBundlesOperation*);
MARK_REF_T(::UnityEngine::Localization::Operations::InitializationOperation___c*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::Operations::InitializationOperation*, "UnityEngine.Localization.Operations", "InitializationOperation");
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::Operations::InitializationOperation_UnloadBundlesOperation*, "UnityEngine.Localization.Operations", "InitializationOperation/UnloadBundlesOperation");
DEFINE_IL2CPP_CLASS(::UnityEngine::Localization::Operations::InitializationOperation___c*, "UnityEngine.Localization.Operations", "InitializationOperation/<>c");
// Dependencies UnityEngine.Localization.Operations.WaitForCurrentOperationAsyncOperationBase`1<TObject>, UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle, UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<TObject>
namespace UnityEngine::Localization::Operations {
// Is value type: false
// CS Name: UnityEngine.Localization.Operations.InitializationOperation
class CORDL_TYPE InitializationOperation : public ::UnityEngine::Localization::Operations::WaitForCurrentOperationAsyncOperationBase_1<::UnityW<::UnityEngine::Localization::Settings::LocalizationSettings>> {
public:
// Declarations
using UnloadBundlesOperation = ::UnityEngine::Localization::Operations::InitializationOperation_UnloadBundlesOperation;

using __c = ::UnityEngine::Localization::Operations::InitializationOperation___c;

 __declspec(property(get=get_DebugName)) ::StringW  DebugName;

/// @brief Field Pool, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pool, put=setStaticF_Pool)) ::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::Operations::InitializationOperation*>*  Pool;

 __declspec(property(get=get_Progress)) float_t  Progress;

/// @brief Field m_FinishPreloadingTablesAction, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_FinishPreloadingTablesAction, put=__cordl_internal_set_m_FinishPreloadingTablesAction)) ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  m_FinishPreloadingTablesAction;

/// @brief Field m_LoadDatabasesOperations, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LoadDatabasesOperations, put=__cordl_internal_set_m_LoadDatabasesOperations)) ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  m_LoadDatabasesOperations;

/// @brief Field m_LoadLocales, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LoadLocales, put=__cordl_internal_set_m_LoadLocales)) ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  m_LoadLocales;

/// @brief Field m_LoadLocalesCompletedAction, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LoadLocalesCompletedAction, put=__cordl_internal_set_m_LoadLocalesCompletedAction)) ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::Localization::Locale>>>*  m_LoadLocalesCompletedAction;

/// @brief Field m_PreloadDatabasesOperation, offset 0x110, size 0x18 
 __declspec(property(get=__cordl_internal_get_m_PreloadDatabasesOperation, put=__cordl_internal_set_m_PreloadDatabasesOperation)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>  m_PreloadDatabasesOperation;

/// @brief Field m_RemainingSteps, offset 0x128, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_RemainingSteps, put=__cordl_internal_set_m_RemainingSteps)) int32_t  m_RemainingSteps;

/// @brief Field m_Settings, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Settings, put=__cordl_internal_set_m_Settings)) ::UnityW<::UnityEngine::Localization::Settings::LocalizationSettings>  m_Settings;

/// @brief Field m_UnloadBundlesOperationHandle, offset 0xd0, size 0x18 
 __declspec(property(get=__cordl_internal_get_m_UnloadBundlesOperationHandle, put=__cordl_internal_set_m_UnloadBundlesOperationHandle)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  m_UnloadBundlesOperationHandle;

/// @brief Method CheckOperationSucceeded, addr 0xb04d420, size 0x94, virtual false, abstract: false, final false
inline bool CheckOperationSucceeded(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  handle, ::StringW  errorMessage) ;

/// @brief Method Destroy, addr 0xb04df3c, size 0xa8, virtual true, abstract: false, final false
inline void Destroy() ;

/// @brief Method Execute, addr 0xb04d0c4, size 0x15c, virtual true, abstract: false, final false
inline void Execute() ;

/// @brief Method FinishInitializing, addr 0xb04ded4, size 0x68, virtual false, abstract: false, final false
inline void FinishInitializing(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  op) ;

/// @brief Method FinishInitializing, addr 0xb04d4b4, size 0x94, virtual false, abstract: false, final false
inline void FinishInitializing(bool  success, ::StringW  error) ;

/// @brief Method Init, addr 0xb04d040, size 0x84, virtual false, abstract: false, final false
inline void Init(::UnityEngine::Localization::Settings::LocalizationSettings*  settings) ;

/// @brief Method LoadLocales, addr 0xb04d220, size 0x14c, virtual false, abstract: false, final false
inline void LoadLocales() ;

/// @brief Method LoadLocalesCompleted, addr 0xb04d36c, size 0xb4, virtual false, abstract: false, final false
inline void LoadLocalesCompleted(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::Localization::Locale>>  operationHandle) ;

static inline ::UnityEngine::Localization::Operations::InitializationOperation* New_ctor() ;

/// @brief Method PostInitializeExtensions, addr 0xb04db7c, size 0x358, virtual false, abstract: false, final false
inline void PostInitializeExtensions() ;

/// @brief Method PreloadTables, addr 0xb04d548, size 0x470, virtual false, abstract: false, final false
inline void PreloadTables() ;

/// @brief Method PreloadTablesCompleted, addr 0xb04d9b8, size 0x1c4, virtual false, abstract: false, final false
inline void PreloadTablesCompleted() ;

constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* const& __cordl_internal_get_m_FinishPreloadingTablesAction() const;

constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*& __cordl_internal_get_m_FinishPreloadingTablesAction() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* const& __cordl_internal_get_m_LoadDatabasesOperations() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*& __cordl_internal_get_m_LoadDatabasesOperations() ;

constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* const& __cordl_internal_get_m_LoadLocales() const;

constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*& __cordl_internal_get_m_LoadLocales() ;

constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::Localization::Locale>>>* const& __cordl_internal_get_m_LoadLocalesCompletedAction() const;

constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::Localization::Locale>>>*& __cordl_internal_get_m_LoadLocalesCompletedAction() ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*> const& __cordl_internal_get_m_PreloadDatabasesOperation() const;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>& __cordl_internal_get_m_PreloadDatabasesOperation() ;

constexpr int32_t const& __cordl_internal_get_m_RemainingSteps() const;

constexpr int32_t& __cordl_internal_get_m_RemainingSteps() ;

constexpr ::UnityW<::UnityEngine::Localization::Settings::LocalizationSettings> const& __cordl_internal_get_m_Settings() const;

constexpr ::UnityW<::UnityEngine::Localization::Settings::LocalizationSettings>& __cordl_internal_get_m_Settings() ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle const& __cordl_internal_get_m_UnloadBundlesOperationHandle() const;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle& __cordl_internal_get_m_UnloadBundlesOperationHandle() ;

constexpr void __cordl_internal_set_m_FinishPreloadingTablesAction(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  value) ;

constexpr void __cordl_internal_set_m_LoadDatabasesOperations(::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  value) ;

constexpr void __cordl_internal_set_m_LoadLocales(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  value) ;

constexpr void __cordl_internal_set_m_LoadLocalesCompletedAction(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::Localization::Locale>>>*  value) ;

constexpr void __cordl_internal_set_m_PreloadDatabasesOperation(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>  value) ;

constexpr void __cordl_internal_set_m_RemainingSteps(int32_t  value) ;

constexpr void __cordl_internal_set_m_Settings(::UnityW<::UnityEngine::Localization::Settings::LocalizationSettings>  value) ;

constexpr void __cordl_internal_set_m_UnloadBundlesOperationHandle(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  value) ;

/// [CompilerGenerated]
/// @brief Method <.ctor>b__18_0, addr 0xb04e120, size 0x4, virtual false, abstract: false, final false
inline void __ctor_b__18_0(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  _) ;

/// [CompilerGenerated]
/// @brief Method <.ctor>b__18_1, addr 0xb04e124, size 0x4, virtual false, abstract: false, final false
inline void __ctor_b__18_1(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  _) ;

/// @brief Method .ctor, addr 0xb04cea4, size 0x19c, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::Operations::InitializationOperation*>* getStaticF_Pool() ;

/// @brief Method get_DebugName, addr 0xb04ce64, size 0x40, virtual true, abstract: false, final false
inline ::StringW get_DebugName() ;

/// @brief Method get_Progress, addr 0xb04cda8, size 0xbc, virtual true, abstract: false, final false
inline float_t get_Progress() ;

static inline void setStaticF_Pool(::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::Operations::InitializationOperation*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InitializationOperation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InitializationOperation", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InitializationOperation(InitializationOperation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InitializationOperation", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InitializationOperation(InitializationOperation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25295};

/// @brief Field k_LocaleError offset 0xffffffff size 0x8
static constexpr ::ConstString  k_LocaleError{u"Failed to initialize localization, could not load the selected locale.\n{0}"};

/// @brief Field k_PreloadAssetTablesError offset 0xffffffff size 0x8
static constexpr ::ConstString  k_PreloadAssetTablesError{u"Failed to initialize localization, could not preload asset tables.\n{0}"};

/// @brief Field k_PreloadSteps offset 0xffffffff size 0x4
static constexpr int32_t  k_PreloadSteps{static_cast<int32_t>(0x3)};

/// @brief Field k_PreloadStringTablesError offset 0xffffffff size 0x8
static constexpr ::ConstString  k_PreloadStringTablesError{u"Failed to initialize localization, could not preload string tables.\n{0}"};

/// @brief Field m_UnloadBundlesOperationHandle, offset: 0xd0, size: 0x18, def value: None
 ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  ___m_UnloadBundlesOperationHandle;

/// @brief Field m_LoadLocales, offset: 0xe8, size: 0x8, def value: None
 ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  ___m_LoadLocales;

/// @brief Field m_LoadLocalesCompletedAction, offset: 0xf0, size: 0x8, def value: None
 ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::Localization::Locale>>>*  ___m_LoadLocalesCompletedAction;

/// @brief Field m_FinishPreloadingTablesAction, offset: 0xf8, size: 0x8, def value: None
 ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  ___m_FinishPreloadingTablesAction;

/// @brief Field m_Settings, offset: 0x100, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Localization::Settings::LocalizationSettings>  ___m_Settings;

/// @brief Field m_LoadDatabasesOperations, offset: 0x108, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  ___m_LoadDatabasesOperations;

/// @brief Field m_PreloadDatabasesOperation, offset: 0x110, size: 0x18, def value: None
 ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::System::Collections::Generic::IList_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*>  ___m_PreloadDatabasesOperation;

/// @brief Field m_RemainingSteps, offset: 0x128, size: 0x4, def value: None
 int32_t  ___m_RemainingSteps;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::Operations::InitializationOperation, ___m_UnloadBundlesOperationHandle) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Operations::InitializationOperation, ___m_LoadLocales) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Operations::InitializationOperation, ___m_LoadLocalesCompletedAction) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Operations::InitializationOperation, ___m_FinishPreloadingTablesAction) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Operations::InitializationOperation, ___m_Settings) == 0x100, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Operations::InitializationOperation, ___m_LoadDatabasesOperations) == 0x108, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Operations::InitializationOperation, ___m_PreloadDatabasesOperation) == 0x110, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Operations::InitializationOperation, ___m_RemainingSteps) == 0x128, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::Operations::InitializationOperation) == 0x130, "Size mismatch!");

} // namespace end def UnityEngine::Localization::Operations
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::Localization::Operations {
// Is value type: false
// CS Name: UnityEngine.Localization.Operations.InitializationOperation/<>c
class CORDL_TYPE InitializationOperation___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::Localization::Operations::InitializationOperation___c*  __9;

static inline ::UnityEngine::Localization::Operations::InitializationOperation___c* New_ctor() ;

/// @brief Method <.cctor>b__30_0, addr 0xb04e6f4, size 0x50, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::Operations::InitializationOperation* __cctor_b__30_0() ;

/// @brief Method .ctor, addr 0xb04e6ec, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Localization::Operations::InitializationOperation___c* getStaticF___9() ;

static inline void setStaticF___9(::UnityEngine::Localization::Operations::InitializationOperation___c*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InitializationOperation___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InitializationOperation___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InitializationOperation___c(InitializationOperation___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InitializationOperation___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InitializationOperation___c(InitializationOperation___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25294};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Localization::Operations::InitializationOperation___c) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Localization::Operations
// Dependencies UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationBase`1<TObject>
namespace UnityEngine::Localization::Operations {
// Is value type: false
// CS Name: UnityEngine.Localization.Operations.InitializationOperation/UnloadBundlesOperation
class CORDL_TYPE InitializationOperation_UnloadBundlesOperation : public ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationBase_1<::System::Object*> {
public:
// Declarations
/// @brief Field m_OperationCompleted, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_OperationCompleted, put=__cordl_internal_set_m_OperationCompleted)) ::System::Action_1<::UnityEngine::AsyncOperation*>*  m_OperationCompleted;

/// @brief Field m_UnloadBundleOperations, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_UnloadBundleOperations, put=__cordl_internal_set_m_UnloadBundleOperations)) ::System::Collections::Generic::List_1<::UnityEngine::AsyncOperation*>*  m_UnloadBundleOperations;

/// @brief Method Destroy, addr 0xb04e618, size 0x6c, virtual true, abstract: false, final false
inline void Destroy() ;

/// @brief Method Execute, addr 0xb04e220, size 0x2f4, virtual true, abstract: false, final false
inline void Execute() ;

/// @brief Method InvokeWaitForCompletion, addr 0xb04e5c0, size 0x58, virtual true, abstract: false, final false
inline bool InvokeWaitForCompletion() ;

static inline ::UnityEngine::Localization::Operations::InitializationOperation_UnloadBundlesOperation* New_ctor() ;

/// @brief Method OnOperationCompleted, addr 0xb04e514, size 0xac, virtual false, abstract: false, final false
inline void OnOperationCompleted(::UnityEngine::AsyncOperation*  obj) ;

constexpr ::System::Action_1<::UnityEngine::AsyncOperation*>* const& __cordl_internal_get_m_OperationCompleted() const;

constexpr ::System::Action_1<::UnityEngine::AsyncOperation*>*& __cordl_internal_get_m_OperationCompleted() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::AsyncOperation*>* const& __cordl_internal_get_m_UnloadBundleOperations() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::AsyncOperation*>*& __cordl_internal_get_m_UnloadBundleOperations() ;

constexpr void __cordl_internal_set_m_OperationCompleted(::System::Action_1<::UnityEngine::AsyncOperation*>*  value) ;

constexpr void __cordl_internal_set_m_UnloadBundleOperations(::System::Collections::Generic::List_1<::UnityEngine::AsyncOperation*>*  value) ;

/// @brief Method .ctor, addr 0xb04e128, size 0xf8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InitializationOperation_UnloadBundlesOperation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InitializationOperation_UnloadBundlesOperation", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InitializationOperation_UnloadBundlesOperation(InitializationOperation_UnloadBundlesOperation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InitializationOperation_UnloadBundlesOperation", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InitializationOperation_UnloadBundlesOperation(InitializationOperation_UnloadBundlesOperation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25293};

/// @brief Field m_OperationCompleted, offset: 0x98, size: 0x8, def value: None
 ::System::Action_1<::UnityEngine::AsyncOperation*>*  ___m_OperationCompleted;

/// @brief Field m_UnloadBundleOperations, offset: 0xa0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::AsyncOperation*>*  ___m_UnloadBundleOperations;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Localization::Operations::InitializationOperation_UnloadBundlesOperation, ___m_OperationCompleted) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Localization::Operations::InitializationOperation_UnloadBundlesOperation, ___m_UnloadBundleOperations) == 0xa0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Localization::Operations::InitializationOperation_UnloadBundlesOperation) == 0xa8, "Size mismatch!");

} // namespace end def UnityEngine::Localization::Operations
