#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRTask_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Threading/Tasks/Sources/zzzz__ManualResetValueTaskSourceCore_1_def.hpp"
#include "System/Threading/Tasks/zzzz__ValueTask_1_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AwaitableCompletionSource_1_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRTask_1)
namespace GlobalNamespace {
class OVRObjectPool_IPoolObject;
}
namespace GlobalNamespace {
template<typename TResult>
class OVRTask_1_AwaitableSource;
}
namespace GlobalNamespace {
template<typename TResult>
struct OVRTask_1_Awaiter;
}
namespace GlobalNamespace {
template<typename TResult,typename T>
struct OVRTask_1_CallbackWithState_1;
}
namespace GlobalNamespace {
template<typename TResult>
struct OVRTask_1_Callback;
}
namespace GlobalNamespace {
template<typename TResult>
struct OVRTask_1_CombinedTaskDataWithCompletedTaskId;
}
namespace GlobalNamespace {
template<typename TResult>
struct OVRTask_1_CombinedTaskData;
}
namespace GlobalNamespace {
template<typename TResult>
class OVRTask_1_ContinueWithInvoker;
}
namespace GlobalNamespace {
template<typename TResult>
class OVRTask_1_ContinueWithRemover;
}
namespace GlobalNamespace {
template<typename TResult,typename T>
class OVRTask_1_IncrementalResultSubscriber_1;
}
namespace GlobalNamespace {
template<typename TResult>
class OVRTask_1_InternalDataRemover;
}
namespace GlobalNamespace {
template<typename TResult,typename T>
class OVRTask_1_InternalData_1;
}
namespace GlobalNamespace {
template<typename TResult>
class OVRTask_1_TaskSource;
}
namespace GlobalNamespace {
template<typename TResult>
class OVRTask_1___c;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Threading::Tasks::Sources {
template<typename TResult>
class IValueTaskSource_1;
}
namespace System::Threading::Tasks::Sources {
struct ValueTaskSourceOnCompletedFlags;
}
namespace System::Threading::Tasks::Sources {
struct ValueTaskSourceStatus;
}
namespace System::Threading::Tasks {
template<typename TResult>
struct ValueTask_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
class Action;
}
namespace System {
class AsyncCallback;
}
namespace System {
class Exception;
}
namespace System {
struct Guid;
}
namespace System {
class IAsyncResult;
}
namespace System {
class IDisposable;
}
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine {
template<typename T>
class Awaitable_1;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename TResult>
class CombinedTaskData_OVRTask_1___c;
}
namespace GlobalNamespace {
template<typename TResult>
class OVRTask_1_AwaitableSource;
}
namespace GlobalNamespace {
template<typename TResult>
class OVRTask_1_ContinueWithInvoker;
}
namespace GlobalNamespace {
template<typename TResult>
class OVRTask_1_ContinueWithRemover;
}
namespace GlobalNamespace {
template<typename TResult,typename T>
class OVRTask_1_IncrementalResultSubscriber_1;
}
namespace GlobalNamespace {
template<typename TResult>
class OVRTask_1_InternalDataRemover;
}
namespace GlobalNamespace {
template<typename TResult,typename T>
class OVRTask_1_InternalData_1;
}
namespace GlobalNamespace {
template<typename TResult>
class OVRTask_1_TaskSource;
}
namespace GlobalNamespace {
template<typename TResult>
class OVRTask_1___c;
}
namespace GlobalNamespace {
template<typename TResult>
struct OVRTask_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::GlobalNamespace::CombinedTaskData_OVRTask_1___c);
MARK_GEN_REF_T_PTR(::GlobalNamespace::OVRTask_1_AwaitableSource);
MARK_GEN_REF_T_PTR(::GlobalNamespace::OVRTask_1_ContinueWithInvoker);
MARK_GEN_REF_T_PTR(::GlobalNamespace::OVRTask_1_ContinueWithRemover);
MARK_GEN_REF_T_PTR(::GlobalNamespace::OVRTask_1_IncrementalResultSubscriber_1);
MARK_GEN_REF_T_PTR(::GlobalNamespace::OVRTask_1_InternalDataRemover);
MARK_GEN_REF_T_PTR(::GlobalNamespace::OVRTask_1_InternalData_1);
MARK_GEN_REF_T_PTR(::GlobalNamespace::OVRTask_1_TaskSource);
MARK_GEN_REF_T_PTR(::GlobalNamespace::OVRTask_1___c);
MARK_GEN_VAL_T(::GlobalNamespace::OVRTask_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::GlobalNamespace::CombinedTaskData_OVRTask_1___c, "", "OVRTask`1/CombinedTaskData/<>c");
DEFINE_IL2CPP_GEN_CLASS_PTR(::GlobalNamespace::OVRTask_1_AwaitableSource, "", "OVRTask`1/AwaitableSource");
DEFINE_IL2CPP_GEN_CLASS_PTR(::GlobalNamespace::OVRTask_1_ContinueWithInvoker, "", "OVRTask`1/ContinueWithInvoker");
DEFINE_IL2CPP_GEN_CLASS_PTR(::GlobalNamespace::OVRTask_1_ContinueWithRemover, "", "OVRTask`1/ContinueWithRemover");
DEFINE_IL2CPP_GEN_CLASS_PTR(::GlobalNamespace::OVRTask_1_IncrementalResultSubscriber_1, "", "OVRTask`1/IncrementalResultSubscriber`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::GlobalNamespace::OVRTask_1_InternalDataRemover, "", "OVRTask`1/InternalDataRemover");
DEFINE_IL2CPP_GEN_CLASS_PTR(::GlobalNamespace::OVRTask_1_InternalData_1, "", "OVRTask`1/InternalData`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::GlobalNamespace::OVRTask_1_TaskSource, "", "OVRTask`1/TaskSource");
DEFINE_IL2CPP_GEN_CLASS_PTR(::GlobalNamespace::OVRTask_1___c, "", "OVRTask`1/<>c");
DEFINE_IL2CPP_GEN_CLASS(::GlobalNamespace::OVRTask_1, "", "OVRTask`1");
// [IsReadOnly]
// [AsyncMethodBuilder(typeof(OVRTaskBuilder`1<T>))]
// Dependencies System.Guid
namespace GlobalNamespace {
// cpp template
template<typename TResult>
// Is value type: true
// CS Name: OVRTask`1<TResult>
struct CORDL_TYPE OVRTask_1 {
public:
// Declarations
using AwaitableSource = ::GlobalNamespace::OVRTask_1_AwaitableSource<TResult>;

using Awaiter = ::GlobalNamespace::OVRTask_1_Awaiter<TResult>;

using Callback = ::GlobalNamespace::OVRTask_1_Callback<TResult>;

template<typename T>
using CallbackWithState_1 = ::GlobalNamespace::OVRTask_1_CallbackWithState_1<TResult, T>;

using CombinedTaskData = ::GlobalNamespace::OVRTask_1_CombinedTaskData<TResult>;

using CombinedTaskDataWithCompletedTaskId = ::GlobalNamespace::OVRTask_1_CombinedTaskDataWithCompletedTaskId<TResult>;

using ContinueWithInvoker = ::GlobalNamespace::OVRTask_1_ContinueWithInvoker<TResult>;

using ContinueWithRemover = ::GlobalNamespace::OVRTask_1_ContinueWithRemover<TResult>;

template<typename T>
using IncrementalResultSubscriber_1 = ::GlobalNamespace::OVRTask_1_IncrementalResultSubscriber_1<TResult, T>;

using InternalDataRemover = ::GlobalNamespace::OVRTask_1_InternalDataRemover<TResult>;

template<typename T>
using InternalData_1 = ::GlobalNamespace::OVRTask_1_InternalData_1<TResult, T>;

using TaskSource = ::GlobalNamespace::OVRTask_1_TaskSource<TResult>;

using __c = ::GlobalNamespace::OVRTask_1___c<TResult>;

/// @brief Field AwaitableSources, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_AwaitableSources, put=setStaticF_AwaitableSources)) ::System::Collections::Generic::Dictionary_2<::System::Guid,::GlobalNamespace::OVRTask_1_AwaitableSource<TResult>*>*  AwaitableSources;

/// @brief Field Clear, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Clear, put=setStaticF_Clear)) ::System::Action*  Clear;

/// @brief Field Continuations, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Continuations, put=setStaticF_Continuations)) ::System::Collections::Generic::Dictionary_2<::System::Guid,::System::Action*>*  Continuations;

/// @brief Field ContinueWithClearers, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ContinueWithClearers, put=setStaticF_ContinueWithClearers)) ::System::Collections::Generic::HashSet_1<::System::Action*>*  ContinueWithClearers;

/// @brief Field ContinueWithInvokers, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ContinueWithInvokers, put=setStaticF_ContinueWithInvokers)) ::System::Collections::Generic::Dictionary_2<::System::Guid,::GlobalNamespace::OVRTask_1_ContinueWithInvoker<TResult>*>*  ContinueWithInvokers;

/// @brief Field ContinueWithRemovers, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ContinueWithRemovers, put=setStaticF_ContinueWithRemovers)) ::System::Collections::Generic::Dictionary_2<::System::Guid,::GlobalNamespace::OVRTask_1_ContinueWithRemover<TResult>*>*  ContinueWithRemovers;

/// @brief Field Exceptions, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Exceptions, put=setStaticF_Exceptions)) ::System::Collections::Generic::Dictionary_2<::System::Guid,::System::Exception*>*  Exceptions;

 __declspec(property(get=get_HasResult)) bool  HasResult;

/// @brief Field IncrementalResultSubscriberClearers, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_IncrementalResultSubscriberClearers, put=setStaticF_IncrementalResultSubscriberClearers)) ::System::Collections::Generic::HashSet_1<::System::Action*>*  IncrementalResultSubscriberClearers;

/// @brief Field IncrementalResultSubscriberRemovers, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_IncrementalResultSubscriberRemovers, put=setStaticF_IncrementalResultSubscriberRemovers)) ::System::Collections::Generic::Dictionary_2<::System::Guid,::System::Action_1<::System::Guid>*>*  IncrementalResultSubscriberRemovers;

/// @brief Field InternalDataClearers, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_InternalDataClearers, put=setStaticF_InternalDataClearers)) ::System::Collections::Generic::HashSet_1<::System::Action*>*  InternalDataClearers;

/// @brief Field InternalDataRemovers, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_InternalDataRemovers, put=setStaticF_InternalDataRemovers)) ::System::Collections::Generic::Dictionary_2<::System::Guid,::GlobalNamespace::OVRTask_1_InternalDataRemover<TResult>*>*  InternalDataRemovers;

 __declspec(property(get=get_IsCompleted)) bool  IsCompleted;

 __declspec(property(get=get_IsFaulted)) bool  IsFaulted;

 __declspec(property(get=get_IsPending)) bool  IsPending;

/// @brief Field Pending, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Pending, put=setStaticF_Pending)) ::System::Collections::Generic::HashSet_1<::System::Guid>*  Pending;

/// @brief Field Results, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Results, put=setStaticF_Results)) ::System::Collections::Generic::Dictionary_2<::System::Guid,TResult>*  Results;

/// @brief Field Sources, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Sources, put=setStaticF_Sources)) ::System::Collections::Generic::Dictionary_2<::System::Guid,::GlobalNamespace::OVRTask_1_TaskSource<TResult>*>*  Sources;

/// @brief Field _onCombinedTaskCompleted, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__onCombinedTaskCompleted, put=setStaticF__onCombinedTaskCompleted)) ::System::Action_2<::System::Collections::Generic::List_1<TResult>*,::GlobalNamespace::OVRTask_1<::ArrayW<TResult>>>*  _onCombinedTaskCompleted;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::OVRTask_1<TResult>>"
constexpr operator  ::System::IEquatable_1<::GlobalNamespace::OVRTask_1<TResult>>*() ;

/// @brief Method AddToPending, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool AddToPending() ;

/// @brief Method ContinueWith, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void ContinueWith(::System::Action_1<TResult>*  onCompleted) ;

/// @brief Method ContinueWith, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void ContinueWith(::System::Action_2<TResult,T>*  onCompleted, T  state) ;

/// @brief Method Dispose, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool Equals(::GlobalNamespace::OVRTask_1<TResult>  other) ;

/// @brief Method GetAwaiter, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::GlobalNamespace::OVRTask_1_Awaiter<TResult> GetAwaiter() ;

/// @brief Method GetException, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Exception* GetException() ;

/// @brief Method GetHashCode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method GetResult, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline TResult GetResult() ;

/// @brief Method NotifyIncrementalResult, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TIncrementalResult>
inline void NotifyIncrementalResult(TIncrementalResult  incrementalResult) ;

/// @brief Method SetException, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void SetException(::System::Exception*  exception) ;

/// @brief Method SetIncrementalResultCallback, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TIncrementalResult>
inline void SetIncrementalResultCallback(::System::Action_1<TIncrementalResult>*  onIncrementalResultAvailable) ;

/// @brief Method SetInternalData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void SetInternalData(T  data) ;

/// @brief Method SetResult, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void SetResult(TResult  result) ;

/// @brief Method ToAwaitable, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::UnityEngine::Awaitable_1<TResult>* ToAwaitable() ;

/// @brief Method ToString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ToValueTask, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::ValueTask_1<TResult> ToValueTask() ;

/// @brief Method TryGetInternalData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline bool TryGetInternalData(::by_ref<T>  data) ;

/// @brief Method TryGetResult, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool TryGetResult(::by_ref<TResult>  result) ;

/// @brief Method TryInvokeContinuation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool TryInvokeContinuation() ;

/// @brief Method TryRemoveInternalData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool TryRemoveInternalData() ;

/// @brief Method ValidateDelegateAndThrow, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void ValidateDelegateAndThrow(::System::Object*  delegate, ::StringW  paramName) ;

/// @brief Method WhenAll, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRTask_1<::ArrayW<TResult>> WhenAll(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRTask_1<TResult>>*  tasks) ;

/// @brief Method WhenAll, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::GlobalNamespace::OVRTask_1<::System::Collections::Generic::List_1<TResult>*> WhenAll(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRTask_1<TResult>>*  tasks, ::System::Collections::Generic::List_1<TResult>*  results) ;

/// @brief Method WithContinuation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void WithContinuation(::System::Action*  continuation) ;

/// @brief Method WithInternalData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline ::GlobalNamespace::OVRTask_1<TResult> WithInternalData(T  data) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Guid  id) ;

static inline ::System::Collections::Generic::Dictionary_2<::System::Guid,::GlobalNamespace::OVRTask_1_AwaitableSource<TResult>*>* getStaticF_AwaitableSources() ;

static inline ::System::Action* getStaticF_Clear() ;

static inline ::System::Collections::Generic::Dictionary_2<::System::Guid,::System::Action*>* getStaticF_Continuations() ;

static inline ::System::Collections::Generic::HashSet_1<::System::Action*>* getStaticF_ContinueWithClearers() ;

static inline ::System::Collections::Generic::Dictionary_2<::System::Guid,::GlobalNamespace::OVRTask_1_ContinueWithInvoker<TResult>*>* getStaticF_ContinueWithInvokers() ;

static inline ::System::Collections::Generic::Dictionary_2<::System::Guid,::GlobalNamespace::OVRTask_1_ContinueWithRemover<TResult>*>* getStaticF_ContinueWithRemovers() ;

static inline ::System::Collections::Generic::Dictionary_2<::System::Guid,::System::Exception*>* getStaticF_Exceptions() ;

static inline ::System::Collections::Generic::HashSet_1<::System::Action*>* getStaticF_IncrementalResultSubscriberClearers() ;

static inline ::System::Collections::Generic::Dictionary_2<::System::Guid,::System::Action_1<::System::Guid>*>* getStaticF_IncrementalResultSubscriberRemovers() ;

static inline ::System::Collections::Generic::HashSet_1<::System::Action*>* getStaticF_InternalDataClearers() ;

static inline ::System::Collections::Generic::Dictionary_2<::System::Guid,::GlobalNamespace::OVRTask_1_InternalDataRemover<TResult>*>* getStaticF_InternalDataRemovers() ;

static inline ::System::Collections::Generic::HashSet_1<::System::Guid>* getStaticF_Pending() ;

static inline ::System::Collections::Generic::Dictionary_2<::System::Guid,TResult>* getStaticF_Results() ;

static inline ::System::Collections::Generic::Dictionary_2<::System::Guid,::GlobalNamespace::OVRTask_1_TaskSource<TResult>*>* getStaticF_Sources() ;

static inline ::System::Action_2<::System::Collections::Generic::List_1<TResult>*,::GlobalNamespace::OVRTask_1<::ArrayW<TResult>>>* getStaticF__onCombinedTaskCompleted() ;

/// @brief Method get_HasResult, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool get_HasResult() ;

/// @brief Method get_IsCompleted, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool get_IsCompleted() ;

/// @brief Method get_IsFaulted, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool get_IsFaulted() ;

/// @brief Method get_IsPending, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool get_IsPending() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::OVRTask_1<TResult>>"
constexpr ::System::IEquatable_1<::GlobalNamespace::OVRTask_1<TResult>>* i___System__IEquatable_1___GlobalNamespace__OVRTask_1_TResult__() ;

/// @brief Method op_Equality, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline bool op_Equality(::GlobalNamespace::OVRTask_1<TResult>  lhs, ::GlobalNamespace::OVRTask_1<TResult>  rhs) ;

/// @brief Method op_Inequality, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline bool op_Inequality(::GlobalNamespace::OVRTask_1<TResult>  lhs, ::GlobalNamespace::OVRTask_1<TResult>  rhs) ;

static inline void setStaticF_AwaitableSources(::System::Collections::Generic::Dictionary_2<::System::Guid,::GlobalNamespace::OVRTask_1_AwaitableSource<TResult>*>*  value) ;

static inline void setStaticF_Clear(::System::Action*  value) ;

static inline void setStaticF_Continuations(::System::Collections::Generic::Dictionary_2<::System::Guid,::System::Action*>*  value) ;

static inline void setStaticF_ContinueWithClearers(::System::Collections::Generic::HashSet_1<::System::Action*>*  value) ;

static inline void setStaticF_ContinueWithInvokers(::System::Collections::Generic::Dictionary_2<::System::Guid,::GlobalNamespace::OVRTask_1_ContinueWithInvoker<TResult>*>*  value) ;

static inline void setStaticF_ContinueWithRemovers(::System::Collections::Generic::Dictionary_2<::System::Guid,::GlobalNamespace::OVRTask_1_ContinueWithRemover<TResult>*>*  value) ;

static inline void setStaticF_Exceptions(::System::Collections::Generic::Dictionary_2<::System::Guid,::System::Exception*>*  value) ;

static inline void setStaticF_IncrementalResultSubscriberClearers(::System::Collections::Generic::HashSet_1<::System::Action*>*  value) ;

static inline void setStaticF_IncrementalResultSubscriberRemovers(::System::Collections::Generic::Dictionary_2<::System::Guid,::System::Action_1<::System::Guid>*>*  value) ;

static inline void setStaticF_InternalDataClearers(::System::Collections::Generic::HashSet_1<::System::Action*>*  value) ;

static inline void setStaticF_InternalDataRemovers(::System::Collections::Generic::Dictionary_2<::System::Guid,::GlobalNamespace::OVRTask_1_InternalDataRemover<TResult>*>*  value) ;

static inline void setStaticF_Pending(::System::Collections::Generic::HashSet_1<::System::Guid>*  value) ;

static inline void setStaticF_Results(::System::Collections::Generic::Dictionary_2<::System::Guid,TResult>*  value) ;

static inline void setStaticF_Sources(::System::Collections::Generic::Dictionary_2<::System::Guid,::GlobalNamespace::OVRTask_1_TaskSource<TResult>*>*  value) ;

static inline void setStaticF__onCombinedTaskCompleted(::System::Action_2<::System::Collections::Generic::List_1<TResult>*,::GlobalNamespace::OVRTask_1<::ArrayW<TResult>>>*  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr OVRTask_1() ;

// Ctor Parameters [CppParam { name: "_id", ty: "::System::Guid", modifiers: "", def_value: None, comment: None }]
constexpr OVRTask_1(::System::Guid  _id) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12588};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field _id, offset: 0x0, size: 0x10, def value: None
 ::System::Guid  _id;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template<typename TResult>
// Is value type: false
// CS Name: OVRTask`1/<>c<TResult>
class CORDL_TYPE OVRTask_1___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GlobalNamespace::OVRTask_1___c<TResult>*  __9;

static inline ::GlobalNamespace::OVRTask_1___c<TResult>* New_ctor() ;

/// @brief Method <.cctor>b__19_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __cctor_b__19_0() ;

/// @brief Method <.cctor>b__19_1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __cctor_b__19_1(::System::Collections::Generic::List_1<TResult>*  resultsFromPool, ::GlobalNamespace::OVRTask_1<::ArrayW<TResult>>  task) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::OVRTask_1___c<TResult>* getStaticF___9() ;

static inline void setStaticF___9(::GlobalNamespace::OVRTask_1___c<TResult>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRTask_1___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRTask_1___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRTask_1___c(OVRTask_1___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRTask_1___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRTask_1___c(OVRTask_1___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12587};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Dependencies UnityEngine.AwaitableCompletionSource`1<T>
namespace GlobalNamespace {
// cpp template
template<typename TResult>
// Is value type: false
// CS Name: OVRTask`1/AwaitableSource<TResult>
class CORDL_TYPE OVRTask_1_AwaitableSource : public ::UnityEngine::AwaitableCompletionSource_1<TResult> {
public:
// Declarations
/// @brief Convert operator to "::GlobalNamespace::OVRObjectPool_IPoolObject"
constexpr operator  ::GlobalNamespace::OVRObjectPool_IPoolObject*() noexcept;

static inline ::GlobalNamespace::OVRTask_1_AwaitableSource<TResult>* New_ctor() ;

/// @brief Method OnGet, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void OnGet() ;

/// @brief Method OnReturn, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void OnReturn() ;

/// @brief Method SetResultAndReturnToPool, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void SetResultAndReturnToPool(/* [IsReadOnly] */ ::by_ref<TResult>  result) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::GlobalNamespace::OVRObjectPool_IPoolObject"
constexpr ::GlobalNamespace::OVRObjectPool_IPoolObject* i___GlobalNamespace__OVRObjectPool_IPoolObject() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRTask_1_AwaitableSource() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRTask_1_AwaitableSource", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRTask_1_AwaitableSource(OVRTask_1_AwaitableSource && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRTask_1_AwaitableSource", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRTask_1_AwaitableSource(OVRTask_1_AwaitableSource const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12583};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Dependencies System.Object, System.Threading.Tasks.Sources.ManualResetValueTaskSourceCore`1<TResult>, System.Threading.Tasks.ValueTask`1<TResult>
namespace GlobalNamespace {
// cpp template
template<typename TResult>
// Is value type: false
// CS Name: OVRTask`1/TaskSource<TResult>
class CORDL_TYPE OVRTask_1_TaskSource : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Task, put=set_Task)) ::System::Threading::Tasks::ValueTask_1<TResult>  Task;

/// @brief Field <Task>k__BackingField, offset 0x50, size 0x18 
 __declspec(property(get=__cordl_internal_get__Task_k__BackingField, put=__cordl_internal_set__Task_k__BackingField)) ::System::Threading::Tasks::ValueTask_1<TResult>  _Task_k__BackingField;

/// @brief Field _manualSource, offset 0x10, size 0x40 
 __declspec(property(get=__cordl_internal_get__manualSource, put=__cordl_internal_set__manualSource)) ::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCore_1<TResult>  _manualSource;

/// @brief Convert operator to "::GlobalNamespace::OVRObjectPool_IPoolObject"
constexpr operator  ::GlobalNamespace::OVRObjectPool_IPoolObject*() noexcept;

/// @brief Convert operator to "::System::Threading::Tasks::Sources::IValueTaskSource_1<TResult>"
constexpr operator  ::System::Threading::Tasks::Sources::IValueTaskSource_1<TResult>*() noexcept;

/// @brief Method GetResult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline TResult GetResult(int16_t  token) ;

/// @brief Method GetStatus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Threading::Tasks::Sources::ValueTaskSourceStatus GetStatus(int16_t  token) ;

static inline ::GlobalNamespace::OVRTask_1_TaskSource<TResult>* New_ctor() ;

/// @brief Method OVRObjectPool.IPoolObject.OnGet, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void OVRObjectPool_IPoolObject_OnGet() ;

/// @brief Method OVRObjectPool.IPoolObject.OnReturn, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void OVRObjectPool_IPoolObject_OnReturn() ;

/// @brief Method OnCompleted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token, ::System::Threading::Tasks::Sources::ValueTaskSourceOnCompletedFlags  flags) ;

/// @brief Method SetException, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void SetException(::System::Exception*  exception) ;

/// @brief Method SetResult, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void SetResult(TResult  result) ;

constexpr ::System::Threading::Tasks::ValueTask_1<TResult> const& __cordl_internal_get__Task_k__BackingField() const;

constexpr ::System::Threading::Tasks::ValueTask_1<TResult>& __cordl_internal_get__Task_k__BackingField() ;

constexpr ::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCore_1<TResult> const& __cordl_internal_get__manualSource() const;

constexpr ::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCore_1<TResult>& __cordl_internal_get__manualSource() ;

constexpr void __cordl_internal_set__Task_k__BackingField(::System::Threading::Tasks::ValueTask_1<TResult>  value) ;

constexpr void __cordl_internal_set__manualSource(::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCore_1<TResult>  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_Task, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::ValueTask_1<TResult> get_Task() ;

/// @brief Convert to "::GlobalNamespace::OVRObjectPool_IPoolObject"
constexpr ::GlobalNamespace::OVRObjectPool_IPoolObject* i___GlobalNamespace__OVRObjectPool_IPoolObject() noexcept;

/// @brief Convert to "::System::Threading::Tasks::Sources::IValueTaskSource_1<TResult>"
constexpr ::System::Threading::Tasks::Sources::IValueTaskSource_1<TResult>* i___System__Threading__Tasks__Sources__IValueTaskSource_1_TResult_() noexcept;

/// [CompilerGenerated]
/// @brief Method set_Task, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Task(::System::Threading::Tasks::ValueTask_1<TResult>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRTask_1_TaskSource() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRTask_1_TaskSource", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRTask_1_TaskSource(OVRTask_1_TaskSource && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRTask_1_TaskSource", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRTask_1_TaskSource(OVRTask_1_TaskSource const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12582};

/// @brief Field _manualSource, offset: 0x10, size: 0x40, def value: None
 ::System::Threading::Tasks::Sources::ManualResetValueTaskSourceCore_1<TResult>  ____manualSource;

/// [CompilerGenerated]
/// @brief Field <Task>k__BackingField, offset: 0x50, size: 0x18, def value: None
 ::System::Threading::Tasks::ValueTask_1<TResult>  ____Task_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template<typename TResult>
// Is value type: false
// CS Name: OVRTask`1/CombinedTaskData/<>c<TResult>
class CORDL_TYPE CombinedTaskData_OVRTask_1___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::GlobalNamespace::CombinedTaskData_OVRTask_1___c<TResult>*  __9;

static inline ::GlobalNamespace::CombinedTaskData_OVRTask_1___c<TResult>* New_ctor() ;

/// @brief Method <.cctor>b__10_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __cctor_b__10_0(TResult  result, ::GlobalNamespace::OVRTask_1_CombinedTaskDataWithCompletedTaskId<TResult>  data) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::GlobalNamespace::CombinedTaskData_OVRTask_1___c<TResult>* getStaticF___9() ;

static inline void setStaticF___9(::GlobalNamespace::CombinedTaskData_OVRTask_1___c<TResult>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CombinedTaskData_OVRTask_1___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CombinedTaskData_OVRTask_1___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CombinedTaskData_OVRTask_1___c(CombinedTaskData_OVRTask_1___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CombinedTaskData_OVRTask_1___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CombinedTaskData_OVRTask_1___c(CombinedTaskData_OVRTask_1___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12579};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template<typename TResult,typename T>
// Is value type: false
// CS Name: OVRTask`1/IncrementalResultSubscriber`1<TResult,T>
class CORDL_TYPE OVRTask_1_IncrementalResultSubscriber_1 : public ::System::Object {
public:
// Declarations
/// @brief Field Clearer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Clearer, put=setStaticF_Clearer)) ::System::Action*  Clearer;

/// @brief Field Remover, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Remover, put=setStaticF_Remover)) ::System::Action_1<::System::Guid>*  Remover;

/// @brief Field Subscribers, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Subscribers, put=setStaticF_Subscribers)) ::System::Collections::Generic::Dictionary_2<::System::Guid,::System::Action_1<T>*>*  Subscribers;

/// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void Clear() ;

/// @brief Method Notify, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void Notify(::System::Guid  taskId, T  result) ;

/// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void Remove(::System::Guid  id) ;

/// @brief Method Set, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void Set(::System::Guid  taskId, ::System::Action_1<T>*  subscriber) ;

static inline ::System::Action* getStaticF_Clearer() ;

static inline ::System::Action_1<::System::Guid>* getStaticF_Remover() ;

static inline ::System::Collections::Generic::Dictionary_2<::System::Guid,::System::Action_1<T>*>* getStaticF_Subscribers() ;

static inline void setStaticF_Clearer(::System::Action*  value) ;

static inline void setStaticF_Remover(::System::Action_1<::System::Guid>*  value) ;

static inline void setStaticF_Subscribers(::System::Collections::Generic::Dictionary_2<::System::Guid,::System::Action_1<T>*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRTask_1_IncrementalResultSubscriber_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRTask_1_IncrementalResultSubscriber_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRTask_1_IncrementalResultSubscriber_1(OVRTask_1_IncrementalResultSubscriber_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRTask_1_IncrementalResultSubscriber_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRTask_1_IncrementalResultSubscriber_1(OVRTask_1_IncrementalResultSubscriber_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12578};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template<typename TResult,typename T>
// Is value type: false
// CS Name: OVRTask`1/InternalData`1<TResult,T>
class CORDL_TYPE OVRTask_1_InternalData_1 : public ::System::Object {
public:
// Declarations
/// @brief Field Clearer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Clearer, put=setStaticF_Clearer)) ::System::Action*  Clearer;

/// @brief Field Data, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Data, put=setStaticF_Data)) ::System::Collections::Generic::Dictionary_2<::System::Guid,T>*  Data;

/// @brief Field Remover, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Remover, put=setStaticF_Remover)) ::GlobalNamespace::OVRTask_1_InternalDataRemover<TResult>*  Remover;

/// @brief Method Clear, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void Clear() ;

/// @brief Method Remove, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline bool Remove(::System::Guid  taskId) ;

/// @brief Method Set, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void Set(::System::Guid  taskId, T  data) ;

/// @brief Method TryGet, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline bool TryGet(::System::Guid  taskId, ::by_ref<T>  data) ;

static inline ::System::Action* getStaticF_Clearer() ;

static inline ::System::Collections::Generic::Dictionary_2<::System::Guid,T>* getStaticF_Data() ;

static inline ::GlobalNamespace::OVRTask_1_InternalDataRemover<TResult>* getStaticF_Remover() ;

static inline void setStaticF_Clearer(::System::Action*  value) ;

static inline void setStaticF_Data(::System::Collections::Generic::Dictionary_2<::System::Guid,T>*  value) ;

static inline void setStaticF_Remover(::GlobalNamespace::OVRTask_1_InternalDataRemover<TResult>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRTask_1_InternalData_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRTask_1_InternalData_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRTask_1_InternalData_1(OVRTask_1_InternalData_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRTask_1_InternalData_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRTask_1_InternalData_1(OVRTask_1_InternalData_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12577};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// cpp template
template<typename TResult>
// Is value type: false
// CS Name: OVRTask`1/InternalDataRemover<TResult>
class CORDL_TYPE OVRTask_1_InternalDataRemover : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::Guid  guid, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool Invoke(::System::Guid  guid) ;

static inline ::GlobalNamespace::OVRTask_1_InternalDataRemover<TResult>* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRTask_1_InternalDataRemover() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRTask_1_InternalDataRemover", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRTask_1_InternalDataRemover(OVRTask_1_InternalDataRemover && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRTask_1_InternalDataRemover", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRTask_1_InternalDataRemover(OVRTask_1_InternalDataRemover const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12576};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// cpp template
template<typename TResult>
// Is value type: false
// CS Name: OVRTask`1/ContinueWithRemover<TResult>
class CORDL_TYPE OVRTask_1_ContinueWithRemover : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::Guid  guid, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline bool Invoke(::System::Guid  guid) ;

static inline ::GlobalNamespace::OVRTask_1_ContinueWithRemover<TResult>* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRTask_1_ContinueWithRemover() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRTask_1_ContinueWithRemover", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRTask_1_ContinueWithRemover(OVRTask_1_ContinueWithRemover && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRTask_1_ContinueWithRemover", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRTask_1_ContinueWithRemover(OVRTask_1_ContinueWithRemover const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12575};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Dependencies System.MulticastDelegate
namespace GlobalNamespace {
// cpp template
template<typename TResult>
// Is value type: false
// CS Name: OVRTask`1/ContinueWithInvoker<TResult>
class CORDL_TYPE OVRTask_1_ContinueWithInvoker : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::System::Guid  guid, TResult  result, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Invoke(::System::Guid  guid, TResult  result) ;

static inline ::GlobalNamespace::OVRTask_1_ContinueWithInvoker<TResult>* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr OVRTask_1_ContinueWithInvoker() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "OVRTask_1_ContinueWithInvoker", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
OVRTask_1_ContinueWithInvoker(OVRTask_1_ContinueWithInvoker && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "OVRTask_1_ContinueWithInvoker", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
OVRTask_1_ContinueWithInvoker(OVRTask_1_ContinueWithInvoker const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12574};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
