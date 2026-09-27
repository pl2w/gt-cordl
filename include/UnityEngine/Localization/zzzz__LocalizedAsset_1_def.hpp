#pragma once
// IWYU pragma private; include "UnityEngine/Localization/LocalizedAsset_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Localization/Operations/zzzz__WaitForCurrentOperationAsyncOperationBase_1_def.hpp"
#include "UnityEngine/Localization/zzzz__CallbackArray_1_def.hpp"
#include "UnityEngine/Localization/zzzz__LocalizedAssetBase_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(LocalizedAsset_1)
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine::Localization {
template<typename TObject>
class ConvertToObjectOperation_LocalizedAsset_1___c;
}
namespace UnityEngine::Localization {
class Locale;
}
namespace UnityEngine::Localization {
template<typename TObject>
class LocalizedAsset_1_ChangeHandler;
}
namespace UnityEngine::Localization {
template<typename TObject>
class LocalizedAsset_1_ConvertToObjectOperation;
}
namespace UnityEngine::Localization {
template<typename TObject>
class LocalizedAsset_1_UxmlSerializedData;
}
namespace UnityEngine::Pool {
template<typename T>
class ObjectPool_1;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template<typename TObject>
struct AsyncOperationHandle_1;
}
namespace UnityEngine::UIElements {
struct BindingContext;
}
namespace UnityEngine::UIElements {
struct BindingResult;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine::Localization {
template<typename TObject>
class ConvertToObjectOperation_LocalizedAsset_1___c;
}
namespace UnityEngine::Localization {
template<typename TObject>
class LocalizedAsset_1;
}
namespace UnityEngine::Localization {
template<typename TObject>
class LocalizedAsset_1_ChangeHandler;
}
namespace UnityEngine::Localization {
template<typename TObject>
class LocalizedAsset_1_ConvertToObjectOperation;
}
namespace UnityEngine::Localization {
template<typename TObject>
class LocalizedAsset_1_UxmlSerializedData;
}
// Write type traits
MARK_GEN_REF_T_PTR(::UnityEngine::Localization::ConvertToObjectOperation_LocalizedAsset_1___c);
MARK_GEN_REF_T_PTR(::UnityEngine::Localization::LocalizedAsset_1);
MARK_GEN_REF_T_PTR(::UnityEngine::Localization::LocalizedAsset_1_ChangeHandler);
MARK_GEN_REF_T_PTR(::UnityEngine::Localization::LocalizedAsset_1_ConvertToObjectOperation);
MARK_GEN_REF_T_PTR(::UnityEngine::Localization::LocalizedAsset_1_UxmlSerializedData);
DEFINE_IL2CPP_GEN_CLASS_PTR(::UnityEngine::Localization::ConvertToObjectOperation_LocalizedAsset_1___c, "UnityEngine.Localization", "LocalizedAsset`1/ConvertToObjectOperation/<>c");
DEFINE_IL2CPP_GEN_CLASS_PTR(::UnityEngine::Localization::LocalizedAsset_1, "UnityEngine.Localization", "LocalizedAsset`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::UnityEngine::Localization::LocalizedAsset_1_ChangeHandler, "UnityEngine.Localization", "LocalizedAsset`1/ChangeHandler");
DEFINE_IL2CPP_GEN_CLASS_PTR(::UnityEngine::Localization::LocalizedAsset_1_ConvertToObjectOperation, "UnityEngine.Localization", "LocalizedAsset`1/ConvertToObjectOperation");
DEFINE_IL2CPP_GEN_CLASS_PTR(::UnityEngine::Localization::LocalizedAsset_1_UxmlSerializedData, "UnityEngine.Localization", "LocalizedAsset`1/UxmlSerializedData");
// [UxmlObject]
// Dependencies UnityEngine.Localization.CallbackArray`1<TDelegate>, UnityEngine.Localization.LocalizedAssetBase, UnityEngine.Object, UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<TObject>
namespace UnityEngine::Localization {
// cpp template
template<typename TObject>
// Is value type: false
// CS Name: UnityEngine.Localization.LocalizedAsset`1<TObject>
class CORDL_TYPE LocalizedAsset_1 : public ::UnityEngine::Localization::LocalizedAssetBase {
public:
// Declarations
using ChangeHandler = ::UnityEngine::Localization::LocalizedAsset_1_ChangeHandler<TObject>;

using ConvertToObjectOperation = ::UnityEngine::Localization::LocalizedAsset_1_ConvertToObjectOperation<TObject>;

using UxmlSerializedData = ::UnityEngine::Localization::LocalizedAsset_1_UxmlSerializedData<TObject>;

 __declspec(property(get=get_CurrentLoadingOperationHandle, put=set_CurrentLoadingOperationHandle)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>  CurrentLoadingOperationHandle;

 __declspec(property(get=get_ForceSynchronous)) bool  ForceSynchronous;

 __declspec(property(get=get_HasChangeHandler)) bool  HasChangeHandler;

 __declspec(property(put=set_WaitForCompletion)) bool  WaitForCompletion;

/// @brief Field <CurrentLoadingOperationHandle>k__BackingField, offset 0xc0, size 0x18 
 __declspec(property(get=__cordl_internal_get__CurrentLoadingOperationHandle_k__BackingField, put=__cordl_internal_set__CurrentLoadingOperationHandle_k__BackingField)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>  _CurrentLoadingOperationHandle_k__BackingField;

/// @brief Field m_AutomaticLoadingCompleted, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AutomaticLoadingCompleted, put=__cordl_internal_set_m_AutomaticLoadingCompleted)) ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>*  m_AutomaticLoadingCompleted;

/// @brief Field m_ChangeHandler, offset 0x70, size 0x28 
 __declspec(property(get=__cordl_internal_get_m_ChangeHandler, put=__cordl_internal_set_m_ChangeHandler)) ::UnityEngine::Localization::CallbackArray_1<::UnityEngine::Localization::LocalizedAsset_1_ChangeHandler<TObject>*>  m_ChangeHandler;

/// @brief Field m_CurrentValue, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CurrentValue, put=__cordl_internal_set_m_CurrentValue)) TObject  m_CurrentValue;

/// @brief Field m_PreviousLoadingOperation, offset 0xa8, size 0x18 
 __declspec(property(get=__cordl_internal_get_m_PreviousLoadingOperation, put=__cordl_internal_set_m_PreviousLoadingOperation)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>  m_PreviousLoadingOperation;

/// @brief Field m_SelectedLocaleChanged, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SelectedLocaleChanged, put=__cordl_internal_set_m_SelectedLocaleChanged)) ::System::Action_1<::UnityW<::UnityEngine::Localization::Locale>>*  m_SelectedLocaleChanged;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method ApplyDataBindingValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityEngine::UIElements::BindingResult ApplyDataBindingValue(/* [IsReadOnly] */ ::by_ref<::UnityEngine::UIElements::BindingContext>  context, TObject  value) ;

/// @brief Method AutomaticLoadingCompleted, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void AutomaticLoadingCompleted(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>  loadOperation) ;

/// @brief Method Cleanup, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Cleanup() ;

/// @brief Method ClearLoadingOperation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void ClearLoadingOperation() ;

/// @brief Method ClearLoadingOperation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void ClearLoadingOperation(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>  operationHandle) ;

/// @brief Method ClearPreviousLoadingOperation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void ClearPreviousLoadingOperation() ;

/// @brief Method Finalize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method ForceUpdate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void ForceUpdate() ;

/// @brief Method HandleLocaleChange, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void HandleLocaleChange(::UnityEngine::Localization::Locale*  locale) ;

/// @brief Method Initialize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Initialize() ;

/// @brief Method InvokeChangeHandler, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void InvokeChangeHandler(TObject  value) ;

/// @brief Method LoadAsset, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline TObject LoadAsset() ;

/// @brief Method LoadAssetAsObjectAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<::UnityW<::UnityEngine::Object>> LoadAssetAsObjectAsync() ;

/// @brief Method LoadAssetAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::UnityEngine::Object*>)
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<T> LoadAssetAsync() ;

/// @brief Method LoadAssetAsync, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> LoadAssetAsync() ;

static inline ::UnityEngine::Localization::LocalizedAsset_1<TObject>* New_ctor() ;

/// @brief Method Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Reset() ;

/// @brief Method SetDataBindingValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline ::UnityEngine::UIElements::BindingResult SetDataBindingValue(/* [IsReadOnly] */ ::by_ref<::UnityEngine::UIElements::BindingContext>  context, T  value) ;

/// @brief Method System.IDisposable.Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

/// @brief Method Update, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::UnityEngine::UIElements::BindingResult Update(/* [IsReadOnly] */ ::by_ref<::UnityEngine::UIElements::BindingContext>  context) ;

/// @brief Method UpdateBindingValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void UpdateBindingValue(TObject  value) ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> const& __cordl_internal_get__CurrentLoadingOperationHandle_k__BackingField() const;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>& __cordl_internal_get__CurrentLoadingOperationHandle_k__BackingField() ;

constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>* const& __cordl_internal_get_m_AutomaticLoadingCompleted() const;

constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>*& __cordl_internal_get_m_AutomaticLoadingCompleted() ;

constexpr ::UnityEngine::Localization::CallbackArray_1<::UnityEngine::Localization::LocalizedAsset_1_ChangeHandler<TObject>*> const& __cordl_internal_get_m_ChangeHandler() const;

constexpr ::UnityEngine::Localization::CallbackArray_1<::UnityEngine::Localization::LocalizedAsset_1_ChangeHandler<TObject>*>& __cordl_internal_get_m_ChangeHandler() ;

constexpr TObject const& __cordl_internal_get_m_CurrentValue() const;

constexpr TObject& __cordl_internal_get_m_CurrentValue() ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> const& __cordl_internal_get_m_PreviousLoadingOperation() const;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>& __cordl_internal_get_m_PreviousLoadingOperation() ;

constexpr ::System::Action_1<::UnityW<::UnityEngine::Localization::Locale>>* const& __cordl_internal_get_m_SelectedLocaleChanged() const;

constexpr ::System::Action_1<::UnityW<::UnityEngine::Localization::Locale>>*& __cordl_internal_get_m_SelectedLocaleChanged() ;

constexpr void __cordl_internal_set__CurrentLoadingOperationHandle_k__BackingField(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>  value) ;

constexpr void __cordl_internal_set_m_AutomaticLoadingCompleted(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>*  value) ;

constexpr void __cordl_internal_set_m_ChangeHandler(::UnityEngine::Localization::CallbackArray_1<::UnityEngine::Localization::LocalizedAsset_1_ChangeHandler<TObject>*>  value) ;

constexpr void __cordl_internal_set_m_CurrentValue(TObject  value) ;

constexpr void __cordl_internal_set_m_PreviousLoadingOperation(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>  value) ;

constexpr void __cordl_internal_set_m_SelectedLocaleChanged(::System::Action_1<::UnityW<::UnityEngine::Localization::Locale>>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method add_AssetChanged, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void add_AssetChanged(::UnityEngine::Localization::LocalizedAsset_1_ChangeHandler<TObject>*  value) ;

/// [CompilerGenerated]
/// @brief Method get_CurrentLoadingOperationHandle, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> get_CurrentLoadingOperationHandle() ;

/// @brief Method get_ForceSynchronous, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool get_ForceSynchronous() ;

/// @brief Method get_HasChangeHandler, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool get_HasChangeHandler() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// @brief Method remove_AssetChanged, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void remove_AssetChanged(::UnityEngine::Localization::LocalizedAsset_1_ChangeHandler<TObject>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_CurrentLoadingOperationHandle, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_CurrentLoadingOperationHandle(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>  value) ;

/// @brief Method set_WaitForCompletion, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void set_WaitForCompletion(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocalizedAsset_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocalizedAsset_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LocalizedAsset_1(LocalizedAsset_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocalizedAsset_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocalizedAsset_1(LocalizedAsset_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25044};

/// @brief Field m_ChangeHandler, offset: 0x70, size: 0x28, def value: None
 ::UnityEngine::Localization::CallbackArray_1<::UnityEngine::Localization::LocalizedAsset_1_ChangeHandler<TObject>*>  ___m_ChangeHandler;

/// @brief Field m_SelectedLocaleChanged, offset: 0x98, size: 0x8, def value: None
 ::System::Action_1<::UnityW<::UnityEngine::Localization::Locale>>*  ___m_SelectedLocaleChanged;

/// @brief Field m_AutomaticLoadingCompleted, offset: 0xa0, size: 0x8, def value: None
 ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>>*  ___m_AutomaticLoadingCompleted;

/// @brief Field m_PreviousLoadingOperation, offset: 0xa8, size: 0x18, def value: None
 ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>  ___m_PreviousLoadingOperation;

/// [CompilerGenerated]
/// @brief Field <CurrentLoadingOperationHandle>k__BackingField, offset: 0xc0, size: 0x18, def value: None
 ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>  ____CurrentLoadingOperationHandle_k__BackingField;

/// @brief Field m_CurrentValue, offset: 0xd8, size: 0x8, def value: None
 TObject  ___m_CurrentValue;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Localization
// [CompilerGenerated]
// Dependencies UnityEngine.Localization.LocalizedAssetBase::UxmlSerializedData
namespace UnityEngine::Localization {
// cpp template
template<typename TObject>
// Is value type: false
// CS Name: UnityEngine.Localization.LocalizedAsset`1/UxmlSerializedData<TObject>
class CORDL_TYPE LocalizedAsset_1_UxmlSerializedData : public ::UnityEngine::Localization::LocalizedAssetBase_UxmlSerializedData {
public:
// Declarations
/// @brief Method CreateInstance, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::Object* CreateInstance() ;

static inline ::UnityEngine::Localization::LocalizedAsset_1_UxmlSerializedData<TObject>* New_ctor() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocalizedAsset_1_UxmlSerializedData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocalizedAsset_1_UxmlSerializedData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LocalizedAsset_1_UxmlSerializedData(LocalizedAsset_1_UxmlSerializedData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocalizedAsset_1_UxmlSerializedData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocalizedAsset_1_UxmlSerializedData(LocalizedAsset_1_UxmlSerializedData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25043};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Localization
// Dependencies UnityEngine.Localization.Operations.WaitForCurrentOperationAsyncOperationBase`1<TObject>, UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<TObject>
namespace UnityEngine::Localization {
// cpp template
template<typename TObject>
// Is value type: false
// CS Name: UnityEngine.Localization.LocalizedAsset`1/ConvertToObjectOperation<TObject>
class CORDL_TYPE LocalizedAsset_1_ConvertToObjectOperation : public ::UnityEngine::Localization::Operations::WaitForCurrentOperationAsyncOperationBase_1<::UnityW<::UnityEngine::Object>> {
public:
// Declarations
using __c = ::UnityEngine::Localization::ConvertToObjectOperation_LocalizedAsset_1___c<TObject>;

/// @brief Field Pool, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pool, put=setStaticF_Pool)) ::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::LocalizedAsset_1_ConvertToObjectOperation<TObject>*>*  Pool;

/// @brief Field m_Operation, offset 0xd0, size 0x18 
 __declspec(property(get=__cordl_internal_get_m_Operation, put=__cordl_internal_set_m_Operation)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>  m_Operation;

/// @brief Method Destroy, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Destroy() ;

/// @brief Method Execute, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Execute() ;

/// @brief Method Init, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Init(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>  operation) ;

static inline ::UnityEngine::Localization::LocalizedAsset_1_ConvertToObjectOperation<TObject>* New_ctor() ;

/// @brief Method OnCompleted, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void OnCompleted(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>  op) ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject> const& __cordl_internal_get_m_Operation() const;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>& __cordl_internal_get_m_Operation() ;

constexpr void __cordl_internal_set_m_Operation(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::LocalizedAsset_1_ConvertToObjectOperation<TObject>*>* getStaticF_Pool() ;

static inline void setStaticF_Pool(::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Localization::LocalizedAsset_1_ConvertToObjectOperation<TObject>*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocalizedAsset_1_ConvertToObjectOperation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocalizedAsset_1_ConvertToObjectOperation", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LocalizedAsset_1_ConvertToObjectOperation(LocalizedAsset_1_ConvertToObjectOperation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocalizedAsset_1_ConvertToObjectOperation", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocalizedAsset_1_ConvertToObjectOperation(LocalizedAsset_1_ConvertToObjectOperation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25042};

/// @brief Field m_Operation, offset: 0xd0, size: 0x18, def value: None
 ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<TObject>  ___m_Operation;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Localization
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::Localization {
// cpp template
template<typename TObject>
// Is value type: false
// CS Name: UnityEngine.Localization.LocalizedAsset`1/ConvertToObjectOperation/<>c<TObject>
class CORDL_TYPE ConvertToObjectOperation_LocalizedAsset_1___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::Localization::ConvertToObjectOperation_LocalizedAsset_1___c<TObject>*  __9;

static inline ::UnityEngine::Localization::ConvertToObjectOperation_LocalizedAsset_1___c<TObject>* New_ctor() ;

/// @brief Method <.cctor>b__7_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::UnityEngine::Localization::LocalizedAsset_1_ConvertToObjectOperation<TObject>* __cctor_b__7_0() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Localization::ConvertToObjectOperation_LocalizedAsset_1___c<TObject>* getStaticF___9() ;

static inline void setStaticF___9(::UnityEngine::Localization::ConvertToObjectOperation_LocalizedAsset_1___c<TObject>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ConvertToObjectOperation_LocalizedAsset_1___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ConvertToObjectOperation_LocalizedAsset_1___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ConvertToObjectOperation_LocalizedAsset_1___c(ConvertToObjectOperation_LocalizedAsset_1___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConvertToObjectOperation_LocalizedAsset_1___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConvertToObjectOperation_LocalizedAsset_1___c(ConvertToObjectOperation_LocalizedAsset_1___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25041};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Localization
// Dependencies System.MulticastDelegate
namespace UnityEngine::Localization {
// cpp template
template<typename TObject>
// Is value type: false
// CS Name: UnityEngine.Localization.LocalizedAsset`1/ChangeHandler<TObject>
class CORDL_TYPE LocalizedAsset_1_ChangeHandler : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(TObject  value, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Invoke(TObject  value) ;

static inline ::UnityEngine::Localization::LocalizedAsset_1_ChangeHandler<TObject>* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LocalizedAsset_1_ChangeHandler() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LocalizedAsset_1_ChangeHandler", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LocalizedAsset_1_ChangeHandler(LocalizedAsset_1_ChangeHandler && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LocalizedAsset_1_ChangeHandler", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LocalizedAsset_1_ChangeHandler(LocalizedAsset_1_ChangeHandler const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25040};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Localization
