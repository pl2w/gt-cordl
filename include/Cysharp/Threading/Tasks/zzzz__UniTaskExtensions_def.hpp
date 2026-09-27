#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/UniTaskExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/zzzz__AsyncUnit_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskCompletionSourceCore_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_def.hpp"
#include "System/Threading/zzzz__CancellationTokenRegistration_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UniTaskExtensions)
namespace Cysharp::Threading::Tasks {
template<typename T>
class AsyncLazy_1;
}
namespace Cysharp::Threading::Tasks {
class AsyncLazy;
}
namespace Cysharp::Threading::Tasks {
struct DelayType;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class IUniTaskSource_1;
}
namespace Cysharp::Threading::Tasks {
class IUniTaskSource;
}
namespace Cysharp::Threading::Tasks {
struct PlayerLoopTiming;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class UniTaskExtensions_AttachExternalCancellationSource_1;
}
namespace Cysharp::Threading::Tasks {
class UniTaskExtensions_AttachExternalCancellationSource;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class UniTaskExtensions_ToCoroutineEnumerator_1;
}
namespace Cysharp::Threading::Tasks {
class UniTaskExtensions_ToCoroutineEnumerator;
}
namespace Cysharp::Threading::Tasks {
class UniTaskExtensions___c;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class UniTaskExtensions___c__0_1;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class UniTaskExtensions___c__19_1;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class UniTaskExtensions___c__2_1;
}
namespace Cysharp::Threading::Tasks {
struct UniTaskStatus;
}
namespace Cysharp::Threading::Tasks {
struct UniTaskVoid;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
struct UniTask_1;
}
namespace Cysharp::Threading::Tasks {
struct UniTask;
}
namespace GlobalNamespace {
template<typename T>
struct AttachExternalCancellationSource_1_UniTaskExtensions__RunTask_d__5;
}
namespace GlobalNamespace {
struct AttachExternalCancellationSource_UniTaskExtensions__RunTask_d__5;
}
namespace GlobalNamespace {
template<typename T>
struct ToCoroutineEnumerator_1_UniTaskExtensions__RunTask_d__8;
}
namespace GlobalNamespace {
struct ToCoroutineEnumerator_UniTaskExtensions__RunTask_d__6;
}
namespace GlobalNamespace {
template<typename T>
struct UniTaskExtensions__ContinueWith_d__22_1;
}
namespace GlobalNamespace {
template<typename T>
struct UniTaskExtensions__ContinueWith_d__23_1;
}
namespace GlobalNamespace {
template<typename T,typename TR>
struct UniTaskExtensions__ContinueWith_d__24_2;
}
namespace GlobalNamespace {
template<typename T,typename TR>
struct UniTaskExtensions__ContinueWith_d__25_2;
}
namespace GlobalNamespace {
struct UniTaskExtensions__ContinueWith_d__26;
}
namespace GlobalNamespace {
struct UniTaskExtensions__ContinueWith_d__27;
}
namespace GlobalNamespace {
template<typename T>
struct UniTaskExtensions__ContinueWith_d__28_1;
}
namespace GlobalNamespace {
template<typename T>
struct UniTaskExtensions__ContinueWith_d__29_1;
}
namespace GlobalNamespace {
struct UniTaskExtensions__ForgetCoreWithCatch_d__18;
}
namespace GlobalNamespace {
template<typename T>
struct UniTaskExtensions__ForgetCoreWithCatch_d__21_1;
}
namespace GlobalNamespace {
struct UniTaskExtensions__TimeoutWithoutException_d__14;
}
namespace GlobalNamespace {
template<typename T>
struct UniTaskExtensions__TimeoutWithoutException_d__15_1;
}
namespace GlobalNamespace {
struct UniTaskExtensions__Timeout_d__12;
}
namespace GlobalNamespace {
template<typename T>
struct UniTaskExtensions__Timeout_d__13_1;
}
namespace GlobalNamespace {
template<typename T>
struct UniTaskExtensions__Unwrap_d__30_1;
}
namespace GlobalNamespace {
struct UniTaskExtensions__Unwrap_d__31;
}
namespace GlobalNamespace {
template<typename T>
struct UniTaskExtensions__Unwrap_d__32_1;
}
namespace GlobalNamespace {
template<typename T>
struct UniTaskExtensions__Unwrap_d__33_1;
}
namespace GlobalNamespace {
struct UniTaskExtensions__Unwrap_d__34;
}
namespace GlobalNamespace {
struct UniTaskExtensions__Unwrap_d__35;
}
namespace GlobalNamespace {
template<typename T>
struct UniTaskExtensions__Unwrap_d__36_1;
}
namespace GlobalNamespace {
template<typename T>
struct UniTaskExtensions__Unwrap_d__37_1;
}
namespace GlobalNamespace {
struct UniTaskExtensions__Unwrap_d__38;
}
namespace GlobalNamespace {
struct UniTaskExtensions__Unwrap_d__39;
}
namespace GlobalNamespace {
template<typename T>
struct UniTask_1_Awaiter;
}
namespace GlobalNamespace {
struct UniTask_Awaiter;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Runtime::ExceptionServices {
class ExceptionDispatchInfo;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
class CancellationTokenSource;
}
namespace System::Threading {
struct CancellationToken;
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
class Exception;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class Object;
}
namespace System {
struct TimeSpan;
}
namespace System {
template<typename T1>
struct ValueTuple_1;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
namespace System {
template<typename T1,typename T2,typename T3>
struct ValueTuple_3;
}
namespace System {
template<typename T1,typename T2,typename T3,typename T4>
struct ValueTuple_4;
}
namespace System {
template<typename T1,typename T2,typename T3,typename T4,typename T5>
struct ValueTuple_5;
}
namespace System {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6>
struct ValueTuple_6;
}
namespace System {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7>
struct ValueTuple_7;
}
namespace System {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename TRest>
struct ValueTuple_8;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks {
class UniTaskExtensions;
}
namespace Cysharp::Threading::Tasks {
class UniTaskExtensions_AttachExternalCancellationSource;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class UniTaskExtensions_AttachExternalCancellationSource_1;
}
namespace Cysharp::Threading::Tasks {
class UniTaskExtensions_ToCoroutineEnumerator;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class UniTaskExtensions_ToCoroutineEnumerator_1;
}
namespace Cysharp::Threading::Tasks {
class UniTaskExtensions___c;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class UniTaskExtensions___c__0_1;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class UniTaskExtensions___c__19_1;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class UniTaskExtensions___c__2_1;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::UniTaskExtensions*);
MARK_REF_T(::Cysharp::Threading::Tasks::UniTaskExtensions_AttachExternalCancellationSource*);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::UniTaskExtensions_AttachExternalCancellationSource_1);
MARK_REF_T(::Cysharp::Threading::Tasks::UniTaskExtensions_ToCoroutineEnumerator*);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::UniTaskExtensions_ToCoroutineEnumerator_1);
MARK_REF_T(::Cysharp::Threading::Tasks::UniTaskExtensions___c*);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::UniTaskExtensions___c__0_1);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::UniTaskExtensions___c__19_1);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::UniTaskExtensions___c__2_1);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::UniTaskExtensions*, "Cysharp.Threading.Tasks", "UniTaskExtensions");
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::UniTaskExtensions_AttachExternalCancellationSource*, "Cysharp.Threading.Tasks", "UniTaskExtensions/AttachExternalCancellationSource");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::UniTaskExtensions_AttachExternalCancellationSource_1, "Cysharp.Threading.Tasks", "UniTaskExtensions/AttachExternalCancellationSource`1");
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::UniTaskExtensions_ToCoroutineEnumerator*, "Cysharp.Threading.Tasks", "UniTaskExtensions/ToCoroutineEnumerator");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::UniTaskExtensions_ToCoroutineEnumerator_1, "Cysharp.Threading.Tasks", "UniTaskExtensions/ToCoroutineEnumerator`1");
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::UniTaskExtensions___c*, "Cysharp.Threading.Tasks", "UniTaskExtensions/<>c");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::UniTaskExtensions___c__0_1, "Cysharp.Threading.Tasks", "UniTaskExtensions/<>c__0`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::UniTaskExtensions___c__19_1, "Cysharp.Threading.Tasks", "UniTaskExtensions/<>c__19`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::UniTaskExtensions___c__2_1, "Cysharp.Threading.Tasks", "UniTaskExtensions/<>c__2`1");
// [Extension]
// Dependencies System.Object
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTaskExtensions
class CORDL_TYPE UniTaskExtensions : public ::System::Object {
public:
// Declarations
using AttachExternalCancellationSource = ::Cysharp::Threading::Tasks::UniTaskExtensions_AttachExternalCancellationSource;

template<typename T>
using AttachExternalCancellationSource_1 = ::Cysharp::Threading::Tasks::UniTaskExtensions_AttachExternalCancellationSource_1<T>;

using ToCoroutineEnumerator = ::Cysharp::Threading::Tasks::UniTaskExtensions_ToCoroutineEnumerator;

template<typename T>
using ToCoroutineEnumerator_1 = ::Cysharp::Threading::Tasks::UniTaskExtensions_ToCoroutineEnumerator_1<T>;

using __c = ::Cysharp::Threading::Tasks::UniTaskExtensions___c;

template<typename T>
using __c__0_1 = ::Cysharp::Threading::Tasks::UniTaskExtensions___c__0_1<T>;

template<typename T>
using __c__19_1 = ::Cysharp::Threading::Tasks::UniTaskExtensions___c__19_1<T>;

template<typename T>
using __c__2_1 = ::Cysharp::Threading::Tasks::UniTaskExtensions___c__2_1<T>;

template<typename T>
using _ContinueWith_d__22_1 = ::GlobalNamespace::UniTaskExtensions__ContinueWith_d__22_1<T>;

template<typename T>
using _ContinueWith_d__23_1 = ::GlobalNamespace::UniTaskExtensions__ContinueWith_d__23_1<T>;

template<typename T,typename TR>
using _ContinueWith_d__24_2 = ::GlobalNamespace::UniTaskExtensions__ContinueWith_d__24_2<T, TR>;

template<typename T,typename TR>
using _ContinueWith_d__25_2 = ::GlobalNamespace::UniTaskExtensions__ContinueWith_d__25_2<T, TR>;

using _ContinueWith_d__26 = ::GlobalNamespace::UniTaskExtensions__ContinueWith_d__26;

using _ContinueWith_d__27 = ::GlobalNamespace::UniTaskExtensions__ContinueWith_d__27;

template<typename T>
using _ContinueWith_d__28_1 = ::GlobalNamespace::UniTaskExtensions__ContinueWith_d__28_1<T>;

template<typename T>
using _ContinueWith_d__29_1 = ::GlobalNamespace::UniTaskExtensions__ContinueWith_d__29_1<T>;

using _ForgetCoreWithCatch_d__18 = ::GlobalNamespace::UniTaskExtensions__ForgetCoreWithCatch_d__18;

template<typename T>
using _ForgetCoreWithCatch_d__21_1 = ::GlobalNamespace::UniTaskExtensions__ForgetCoreWithCatch_d__21_1<T>;

using _TimeoutWithoutException_d__14 = ::GlobalNamespace::UniTaskExtensions__TimeoutWithoutException_d__14;

template<typename T>
using _TimeoutWithoutException_d__15_1 = ::GlobalNamespace::UniTaskExtensions__TimeoutWithoutException_d__15_1<T>;

using _Timeout_d__12 = ::GlobalNamespace::UniTaskExtensions__Timeout_d__12;

template<typename T>
using _Timeout_d__13_1 = ::GlobalNamespace::UniTaskExtensions__Timeout_d__13_1<T>;

template<typename T>
using _Unwrap_d__30_1 = ::GlobalNamespace::UniTaskExtensions__Unwrap_d__30_1<T>;

using _Unwrap_d__31 = ::GlobalNamespace::UniTaskExtensions__Unwrap_d__31;

template<typename T>
using _Unwrap_d__32_1 = ::GlobalNamespace::UniTaskExtensions__Unwrap_d__32_1<T>;

template<typename T>
using _Unwrap_d__33_1 = ::GlobalNamespace::UniTaskExtensions__Unwrap_d__33_1<T>;

using _Unwrap_d__34 = ::GlobalNamespace::UniTaskExtensions__Unwrap_d__34;

using _Unwrap_d__35 = ::GlobalNamespace::UniTaskExtensions__Unwrap_d__35;

template<typename T>
using _Unwrap_d__36_1 = ::GlobalNamespace::UniTaskExtensions__Unwrap_d__36_1<T>;

template<typename T>
using _Unwrap_d__37_1 = ::GlobalNamespace::UniTaskExtensions__Unwrap_d__37_1<T>;

using _Unwrap_d__38 = ::GlobalNamespace::UniTaskExtensions__Unwrap_d__38;

using _Unwrap_d__39 = ::GlobalNamespace::UniTaskExtensions__Unwrap_d__39;

/// [Extension]
/// @brief Method AsTask, addr 0xadfa2c8, size 0x628, virtual false, abstract: false, final false
static inline ::System::Threading::Tasks::Task* AsTask(::Cysharp::Threading::Tasks::UniTask  task) ;

/// [Extension]
/// @brief Method AsTask, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::System::Threading::Tasks::Task_1<T>* AsTask(::Cysharp::Threading::Tasks::UniTask_1<T>  task) ;

/// [Extension]
/// @brief Method AsUniTask, addr 0xadfa134, size 0x194, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask AsUniTask(::System::Threading::Tasks::Task*  task, bool  useCurrentSynchronizationContext) ;

/// [Extension]
/// @brief Method AsUniTask, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::Cysharp::Threading::Tasks::UniTask_1<T> AsUniTask(::System::Threading::Tasks::Task_1<T>*  task, bool  useCurrentSynchronizationContext) ;

/// [Extension]
/// @brief Method AttachExternalCancellation, addr 0xadfa958, size 0x1d8, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask AttachExternalCancellation(::Cysharp::Threading::Tasks::UniTask  task, ::System::Threading::CancellationToken  cancellationToken) ;

/// [Extension]
/// @brief Method AttachExternalCancellation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::Cysharp::Threading::Tasks::UniTask_1<T> AttachExternalCancellation(::Cysharp::Threading::Tasks::UniTask_1<T>  task, ::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.UniTaskExtensions::<ContinueWith>d__26))]
/// [Extension]
/// @brief Method ContinueWith, addr 0xadfb36c, size 0xc0, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask ContinueWith(::Cysharp::Threading::Tasks::UniTask  task, ::System::Action*  continuationFunction) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.UniTaskExtensions::<ContinueWith>d__27))]
/// [Extension]
/// @brief Method ContinueWith, addr 0xadfb42c, size 0xc0, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask ContinueWith(::Cysharp::Threading::Tasks::UniTask  task, ::System::Func_1<::Cysharp::Threading::Tasks::UniTask>*  continuationFunction) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.UniTaskExtensions::<ContinueWith>d__22`1<T>))]
/// [Extension]
/// @brief Method ContinueWith, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::Cysharp::Threading::Tasks::UniTask ContinueWith(::Cysharp::Threading::Tasks::UniTask_1<T>  task, ::System::Action_1<T>*  continuationFunction) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.UniTaskExtensions::<ContinueWith>d__23`1<T>))]
/// [Extension]
/// @brief Method ContinueWith, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::Cysharp::Threading::Tasks::UniTask ContinueWith(::Cysharp::Threading::Tasks::UniTask_1<T>  task, ::System::Func_2<T,::Cysharp::Threading::Tasks::UniTask>*  continuationFunction) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.UniTaskExtensions::<ContinueWith>d__29`1<T>))]
/// [Extension]
/// @brief Method ContinueWith, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::Cysharp::Threading::Tasks::UniTask_1<T> ContinueWith(::Cysharp::Threading::Tasks::UniTask  task, ::System::Func_1<::Cysharp::Threading::Tasks::UniTask_1<T>>*  continuationFunction) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.UniTaskExtensions::<ContinueWith>d__28`1<T>))]
/// [Extension]
/// @brief Method ContinueWith, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::Cysharp::Threading::Tasks::UniTask_1<T> ContinueWith(::Cysharp::Threading::Tasks::UniTask  task, ::System::Func_1<T>*  continuationFunction) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.UniTaskExtensions::<ContinueWith>d__25`2<T, TR>))]
/// [Extension]
/// @brief Method ContinueWith, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T,typename TR>
static inline ::Cysharp::Threading::Tasks::UniTask_1<TR> ContinueWith(::Cysharp::Threading::Tasks::UniTask_1<T>  task, ::System::Func_2<T,::Cysharp::Threading::Tasks::UniTask_1<TR>>*  continuationFunction) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.UniTaskExtensions::<ContinueWith>d__24`2<T, TR>))]
/// [Extension]
/// @brief Method ContinueWith, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T,typename TR>
static inline ::Cysharp::Threading::Tasks::UniTask_1<TR> ContinueWith(::Cysharp::Threading::Tasks::UniTask_1<T>  task, ::System::Func_2<T,TR>*  continuationFunction) ;

/// [Extension]
/// @brief Method Forget, addr 0xadfae9c, size 0x3d0, virtual false, abstract: false, final false
static inline void Forget(::Cysharp::Threading::Tasks::UniTask  task) ;

/// [Extension]
/// @brief Method Forget, addr 0xadfb26c, size 0x34, virtual false, abstract: false, final false
static inline void Forget(::Cysharp::Threading::Tasks::UniTask  task, ::System::Action_1<::System::Exception*>*  exceptionHandler, bool  handleExceptionOnMainThread) ;

/// [Extension]
/// @brief Method Forget, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void Forget(::Cysharp::Threading::Tasks::UniTask_1<T>  task) ;

/// [Extension]
/// @brief Method Forget, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void Forget(::Cysharp::Threading::Tasks::UniTask_1<T>  task, ::System::Action_1<::System::Exception*>*  exceptionHandler, bool  handleExceptionOnMainThread) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.UniTaskExtensions::<ForgetCoreWithCatch>d__18))]
/// @brief Method ForgetCoreWithCatch, addr 0xadfb2a0, size 0xcc, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTaskVoid ForgetCoreWithCatch(::Cysharp::Threading::Tasks::UniTask  task, ::System::Action_1<::System::Exception*>*  exceptionHandler, bool  handleExceptionOnMainThread) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.UniTaskExtensions::<ForgetCoreWithCatch>d__21`1<T>))]
/// @brief Method ForgetCoreWithCatch, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::Cysharp::Threading::Tasks::UniTaskVoid ForgetCoreWithCatch(::Cysharp::Threading::Tasks::UniTask_1<T>  task, ::System::Action_1<::System::Exception*>*  exceptionHandler, bool  handleExceptionOnMainThread) ;

/// [Extension]
/// @brief Method GetAwaiter, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::GlobalNamespace::UniTask_1_Awaiter<::ArrayW<T>> GetAwaiter(::ArrayW<::Cysharp::Threading::Tasks::UniTask_1<T>>  tasks) ;

/// [Extension]
/// @brief Method GetAwaiter, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::GlobalNamespace::UniTask_1_Awaiter<::ArrayW<T>> GetAwaiter(::System::Collections::Generic::IEnumerable_1<::Cysharp::Threading::Tasks::UniTask_1<T>>*  tasks) ;

/// [Extension]
/// @brief Method GetAwaiter, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::GlobalNamespace::UniTask_1_Awaiter<::System::ValueTuple_2<T1,T2>> GetAwaiter(/* [TupleElementNames(new[] { "task1", "task2" })] */ ::System::ValueTuple_2<::Cysharp::Threading::Tasks::UniTask_1<T1>,::Cysharp::Threading::Tasks::UniTask_1<T2>>  tasks) ;

/// [Extension]
/// @brief Method GetAwaiter, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3>
static inline ::GlobalNamespace::UniTask_1_Awaiter<::System::ValueTuple_3<T1,T2,T3>> GetAwaiter(/* [TupleElementNames(new[] { "task1", "task2", "task3" })] */ ::System::ValueTuple_3<::Cysharp::Threading::Tasks::UniTask_1<T1>,::Cysharp::Threading::Tasks::UniTask_1<T2>,::Cysharp::Threading::Tasks::UniTask_1<T3>>  tasks) ;

/// [Extension]
/// @brief Method GetAwaiter, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4>
static inline ::GlobalNamespace::UniTask_1_Awaiter<::System::ValueTuple_4<T1,T2,T3,T4>> GetAwaiter(/* [TupleElementNames(new[] { "task1", "task2", "task3", "task4" })] */ ::System::ValueTuple_4<::Cysharp::Threading::Tasks::UniTask_1<T1>,::Cysharp::Threading::Tasks::UniTask_1<T2>,::Cysharp::Threading::Tasks::UniTask_1<T3>,::Cysharp::Threading::Tasks::UniTask_1<T4>>  tasks) ;

/// [Extension]
/// @brief Method GetAwaiter, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4,typename T5>
static inline ::GlobalNamespace::UniTask_1_Awaiter<::System::ValueTuple_5<T1,T2,T3,T4,T5>> GetAwaiter(/* [TupleElementNames(new[] { "task1", "task2", "task3", "task4", "task5" })] */ ::System::ValueTuple_5<::Cysharp::Threading::Tasks::UniTask_1<T1>,::Cysharp::Threading::Tasks::UniTask_1<T2>,::Cysharp::Threading::Tasks::UniTask_1<T3>,::Cysharp::Threading::Tasks::UniTask_1<T4>,::Cysharp::Threading::Tasks::UniTask_1<T5>>  tasks) ;

/// [Extension]
/// @brief Method GetAwaiter, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6>
static inline ::GlobalNamespace::UniTask_1_Awaiter<::System::ValueTuple_6<T1,T2,T3,T4,T5,T6>> GetAwaiter(/* [TupleElementNames(new[] { "task1", "task2", "task3", "task4", "task5", "task6" })] */ ::System::ValueTuple_6<::Cysharp::Threading::Tasks::UniTask_1<T1>,::Cysharp::Threading::Tasks::UniTask_1<T2>,::Cysharp::Threading::Tasks::UniTask_1<T3>,::Cysharp::Threading::Tasks::UniTask_1<T4>,::Cysharp::Threading::Tasks::UniTask_1<T5>,::Cysharp::Threading::Tasks::UniTask_1<T6>>  tasks) ;

/// [Extension]
/// @brief Method GetAwaiter, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7>
static inline ::GlobalNamespace::UniTask_1_Awaiter<::System::ValueTuple_7<T1,T2,T3,T4,T5,T6,T7>> GetAwaiter(/* [TupleElementNames(new[] { "task1", "task2", "task3", "task4", "task5", "task6", "task7" })] */ ::System::ValueTuple_7<::Cysharp::Threading::Tasks::UniTask_1<T1>,::Cysharp::Threading::Tasks::UniTask_1<T2>,::Cysharp::Threading::Tasks::UniTask_1<T3>,::Cysharp::Threading::Tasks::UniTask_1<T4>,::Cysharp::Threading::Tasks::UniTask_1<T5>,::Cysharp::Threading::Tasks::UniTask_1<T6>,::Cysharp::Threading::Tasks::UniTask_1<T7>>  tasks) ;

/// [Extension]
/// @brief Method GetAwaiter, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8>
static inline ::GlobalNamespace::UniTask_1_Awaiter<::System::ValueTuple_8<T1,T2,T3,T4,T5,T6,T7,::System::ValueTuple_1<T8>>> GetAwaiter(/* [TupleElementNames(new[] { "task1", "task2", "task3", "task4", "task5", "task6", "task7", "task8", null })] */ ::System::ValueTuple_8<::Cysharp::Threading::Tasks::UniTask_1<T1>,::Cysharp::Threading::Tasks::UniTask_1<T2>,::Cysharp::Threading::Tasks::UniTask_1<T3>,::Cysharp::Threading::Tasks::UniTask_1<T4>,::Cysharp::Threading::Tasks::UniTask_1<T5>,::Cysharp::Threading::Tasks::UniTask_1<T6>,::Cysharp::Threading::Tasks::UniTask_1<T7>,::System::ValueTuple_1<::Cysharp::Threading::Tasks::UniTask_1<T8>>>  tasks) ;

/// [Extension]
/// @brief Method GetAwaiter, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9>
static inline ::GlobalNamespace::UniTask_1_Awaiter<::System::ValueTuple_8<T1,T2,T3,T4,T5,T6,T7,::System::ValueTuple_2<T8,T9>>> GetAwaiter(/* [TupleElementNames(new[] { "task1", "task2", "task3", "task4", "task5", "task6", "task7", "task8", "task9", null, null })] */ ::System::ValueTuple_8<::Cysharp::Threading::Tasks::UniTask_1<T1>,::Cysharp::Threading::Tasks::UniTask_1<T2>,::Cysharp::Threading::Tasks::UniTask_1<T3>,::Cysharp::Threading::Tasks::UniTask_1<T4>,::Cysharp::Threading::Tasks::UniTask_1<T5>,::Cysharp::Threading::Tasks::UniTask_1<T6>,::Cysharp::Threading::Tasks::UniTask_1<T7>,::System::ValueTuple_2<::Cysharp::Threading::Tasks::UniTask_1<T8>,::Cysharp::Threading::Tasks::UniTask_1<T9>>>  tasks) ;

/// [Extension]
/// @brief Method GetAwaiter, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10>
static inline ::GlobalNamespace::UniTask_1_Awaiter<::System::ValueTuple_8<T1,T2,T3,T4,T5,T6,T7,::System::ValueTuple_3<T8,T9,T10>>> GetAwaiter(/* [TupleElementNames(new[] { "task1", "task2", "task3", "task4", "task5", "task6", "task7", "task8", "task9", "task10", null, null, null })] */ ::System::ValueTuple_8<::Cysharp::Threading::Tasks::UniTask_1<T1>,::Cysharp::Threading::Tasks::UniTask_1<T2>,::Cysharp::Threading::Tasks::UniTask_1<T3>,::Cysharp::Threading::Tasks::UniTask_1<T4>,::Cysharp::Threading::Tasks::UniTask_1<T5>,::Cysharp::Threading::Tasks::UniTask_1<T6>,::Cysharp::Threading::Tasks::UniTask_1<T7>,::System::ValueTuple_3<::Cysharp::Threading::Tasks::UniTask_1<T8>,::Cysharp::Threading::Tasks::UniTask_1<T9>,::Cysharp::Threading::Tasks::UniTask_1<T10>>>  tasks) ;

/// [Extension]
/// @brief Method GetAwaiter, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11>
static inline ::GlobalNamespace::UniTask_1_Awaiter<::System::ValueTuple_8<T1,T2,T3,T4,T5,T6,T7,::System::ValueTuple_4<T8,T9,T10,T11>>> GetAwaiter(/* [TupleElementNames(new[] { "task1", "task2", "task3", "task4", "task5", "task6", "task7", "task8", "task9", "task10", "task11", null, null, null, null })] */ ::System::ValueTuple_8<::Cysharp::Threading::Tasks::UniTask_1<T1>,::Cysharp::Threading::Tasks::UniTask_1<T2>,::Cysharp::Threading::Tasks::UniTask_1<T3>,::Cysharp::Threading::Tasks::UniTask_1<T4>,::Cysharp::Threading::Tasks::UniTask_1<T5>,::Cysharp::Threading::Tasks::UniTask_1<T6>,::Cysharp::Threading::Tasks::UniTask_1<T7>,::System::ValueTuple_4<::Cysharp::Threading::Tasks::UniTask_1<T8>,::Cysharp::Threading::Tasks::UniTask_1<T9>,::Cysharp::Threading::Tasks::UniTask_1<T10>,::Cysharp::Threading::Tasks::UniTask_1<T11>>>  tasks) ;

/// [Extension]
/// @brief Method GetAwaiter, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12>
static inline ::GlobalNamespace::UniTask_1_Awaiter<::System::ValueTuple_8<T1,T2,T3,T4,T5,T6,T7,::System::ValueTuple_5<T8,T9,T10,T11,T12>>> GetAwaiter(/* [TupleElementNames(new[] { "task1", "task2", "task3", "task4", "task5", "task6", "task7", "task8", "task9", "task10", "task11", "task12", null, null, null, null, null })] */ ::System::ValueTuple_8<::Cysharp::Threading::Tasks::UniTask_1<T1>,::Cysharp::Threading::Tasks::UniTask_1<T2>,::Cysharp::Threading::Tasks::UniTask_1<T3>,::Cysharp::Threading::Tasks::UniTask_1<T4>,::Cysharp::Threading::Tasks::UniTask_1<T5>,::Cysharp::Threading::Tasks::UniTask_1<T6>,::Cysharp::Threading::Tasks::UniTask_1<T7>,::System::ValueTuple_5<::Cysharp::Threading::Tasks::UniTask_1<T8>,::Cysharp::Threading::Tasks::UniTask_1<T9>,::Cysharp::Threading::Tasks::UniTask_1<T10>,::Cysharp::Threading::Tasks::UniTask_1<T11>,::Cysharp::Threading::Tasks::UniTask_1<T12>>>  tasks) ;

/// [Extension]
/// @brief Method GetAwaiter, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12,typename T13>
static inline ::GlobalNamespace::UniTask_1_Awaiter<::System::ValueTuple_8<T1,T2,T3,T4,T5,T6,T7,::System::ValueTuple_6<T8,T9,T10,T11,T12,T13>>> GetAwaiter(/* [TupleElementNames(new[] { "task1", "task2", "task3", "task4", "task5", "task6", "task7", "task8", "task9", "task10", "task11", "task12", "task13", null, null, null, null, null, null })] */ ::System::ValueTuple_8<::Cysharp::Threading::Tasks::UniTask_1<T1>,::Cysharp::Threading::Tasks::UniTask_1<T2>,::Cysharp::Threading::Tasks::UniTask_1<T3>,::Cysharp::Threading::Tasks::UniTask_1<T4>,::Cysharp::Threading::Tasks::UniTask_1<T5>,::Cysharp::Threading::Tasks::UniTask_1<T6>,::Cysharp::Threading::Tasks::UniTask_1<T7>,::System::ValueTuple_6<::Cysharp::Threading::Tasks::UniTask_1<T8>,::Cysharp::Threading::Tasks::UniTask_1<T9>,::Cysharp::Threading::Tasks::UniTask_1<T10>,::Cysharp::Threading::Tasks::UniTask_1<T11>,::Cysharp::Threading::Tasks::UniTask_1<T12>,::Cysharp::Threading::Tasks::UniTask_1<T13>>>  tasks) ;

/// [Extension]
/// @brief Method GetAwaiter, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12,typename T13,typename T14>
static inline ::GlobalNamespace::UniTask_1_Awaiter<::System::ValueTuple_8<T1,T2,T3,T4,T5,T6,T7,::System::ValueTuple_7<T8,T9,T10,T11,T12,T13,T14>>> GetAwaiter(/* [TupleElementNames(new[] { "task1", "task2", "task3", "task4", "task5", "task6", "task7", "task8", "task9", "task10", "task11", "task12", "task13", "task14", null, null, null, null, null, null, null })] */ ::System::ValueTuple_8<::Cysharp::Threading::Tasks::UniTask_1<T1>,::Cysharp::Threading::Tasks::UniTask_1<T2>,::Cysharp::Threading::Tasks::UniTask_1<T3>,::Cysharp::Threading::Tasks::UniTask_1<T4>,::Cysharp::Threading::Tasks::UniTask_1<T5>,::Cysharp::Threading::Tasks::UniTask_1<T6>,::Cysharp::Threading::Tasks::UniTask_1<T7>,::System::ValueTuple_7<::Cysharp::Threading::Tasks::UniTask_1<T8>,::Cysharp::Threading::Tasks::UniTask_1<T9>,::Cysharp::Threading::Tasks::UniTask_1<T10>,::Cysharp::Threading::Tasks::UniTask_1<T11>,::Cysharp::Threading::Tasks::UniTask_1<T12>,::Cysharp::Threading::Tasks::UniTask_1<T13>,::Cysharp::Threading::Tasks::UniTask_1<T14>>>  tasks) ;

/// [Extension]
/// @brief Method GetAwaiter, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12,typename T13,typename T14,typename T15>
static inline ::GlobalNamespace::UniTask_1_Awaiter<::System::ValueTuple_8<T1,T2,T3,T4,T5,T6,T7,::System::ValueTuple_8<T8,T9,T10,T11,T12,T13,T14,::System::ValueTuple_1<T15>>>> GetAwaiter(/* [TupleElementNames(new[] { "task1", "task2", "task3", "task4", "task5", "task6", "task7", "task8", "task9", "task10", "task11", "task12", "task13", "task14", "task15", null, null, null, null, null, null, null, null, null })] */ ::System::ValueTuple_8<::Cysharp::Threading::Tasks::UniTask_1<T1>,::Cysharp::Threading::Tasks::UniTask_1<T2>,::Cysharp::Threading::Tasks::UniTask_1<T3>,::Cysharp::Threading::Tasks::UniTask_1<T4>,::Cysharp::Threading::Tasks::UniTask_1<T5>,::Cysharp::Threading::Tasks::UniTask_1<T6>,::Cysharp::Threading::Tasks::UniTask_1<T7>,::System::ValueTuple_8<::Cysharp::Threading::Tasks::UniTask_1<T8>,::Cysharp::Threading::Tasks::UniTask_1<T9>,::Cysharp::Threading::Tasks::UniTask_1<T10>,::Cysharp::Threading::Tasks::UniTask_1<T11>,::Cysharp::Threading::Tasks::UniTask_1<T12>,::Cysharp::Threading::Tasks::UniTask_1<T13>,::Cysharp::Threading::Tasks::UniTask_1<T14>,::System::ValueTuple_1<::Cysharp::Threading::Tasks::UniTask_1<T15>>>>  tasks) ;

/// [Extension]
/// @brief Method GetAwaiter, addr 0xadfb86c, size 0x74, virtual false, abstract: false, final false
static inline ::GlobalNamespace::UniTask_Awaiter GetAwaiter(::ArrayW<::Cysharp::Threading::Tasks::UniTask>  tasks) ;

/// [Extension]
/// @brief Method GetAwaiter, addr 0xadfb8e0, size 0x74, virtual false, abstract: false, final false
static inline ::GlobalNamespace::UniTask_Awaiter GetAwaiter(::System::Collections::Generic::IEnumerable_1<::Cysharp::Threading::Tasks::UniTask>*  tasks) ;

/// [Extension]
/// @brief Method GetAwaiter, addr 0xadfb954, size 0xe4, virtual false, abstract: false, final false
static inline ::GlobalNamespace::UniTask_Awaiter GetAwaiter(/* [TupleElementNames(new[] { "task1", "task2" })] */ ::System::ValueTuple_2<::Cysharp::Threading::Tasks::UniTask,::Cysharp::Threading::Tasks::UniTask>  tasks) ;

/// [Extension]
/// @brief Method GetAwaiter, addr 0xadfba38, size 0x108, virtual false, abstract: false, final false
static inline ::GlobalNamespace::UniTask_Awaiter GetAwaiter(/* [TupleElementNames(new[] { "task1", "task2", "task3" })] */ ::System::ValueTuple_3<::Cysharp::Threading::Tasks::UniTask,::Cysharp::Threading::Tasks::UniTask,::Cysharp::Threading::Tasks::UniTask>  tasks) ;

/// [Extension]
/// @brief Method GetAwaiter, addr 0xadfbb40, size 0x12c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::UniTask_Awaiter GetAwaiter(/* [TupleElementNames(new[] { "task1", "task2", "task3", "task4" })] */ ::System::ValueTuple_4<::Cysharp::Threading::Tasks::UniTask,::Cysharp::Threading::Tasks::UniTask,::Cysharp::Threading::Tasks::UniTask,::Cysharp::Threading::Tasks::UniTask>  tasks) ;

/// [Extension]
/// @brief Method GetAwaiter, addr 0xadfbc6c, size 0x150, virtual false, abstract: false, final false
static inline ::GlobalNamespace::UniTask_Awaiter GetAwaiter(/* [TupleElementNames(new[] { "task1", "task2", "task3", "task4", "task5" })] */ ::System::ValueTuple_5<::Cysharp::Threading::Tasks::UniTask,::Cysharp::Threading::Tasks::UniTask,::Cysharp::Threading::Tasks::UniTask,::Cysharp::Threading::Tasks::UniTask,::Cysharp::Threading::Tasks::UniTask>  tasks) ;

/// [Extension]
/// @brief Method GetAwaiter, addr 0xadfbdbc, size 0x174, virtual false, abstract: false, final false
static inline ::GlobalNamespace::UniTask_Awaiter GetAwaiter(/* [TupleElementNames(new[] { "task1", "task2", "task3", "task4", "task5", "task6" })] */ ::System::ValueTuple_6<::Cysharp::Threading::Tasks::UniTask,::Cysharp::Threading::Tasks::UniTask,::Cysharp::Threading::Tasks::UniTask,::Cysharp::Threading::Tasks::UniTask,::Cysharp::Threading::Tasks::UniTask,::Cysharp::Threading::Tasks::UniTask>  tasks) ;

/// [Extension]
/// @brief Method GetAwaiter, addr 0xadfbf30, size 0x198, virtual false, abstract: false, final false
static inline ::GlobalNamespace::UniTask_Awaiter GetAwaiter(/* [TupleElementNames(new[] { "task1", "task2", "task3", "task4", "task5", "task6", "task7" })] */ ::System::ValueTuple_7<::Cysharp::Threading::Tasks::UniTask,::Cysharp::Threading::Tasks::UniTask,::Cysharp::Threading::Tasks::UniTask,::Cysharp::Threading::Tasks::UniTask,::Cysharp::Threading::Tasks::UniTask,::Cysharp::Threading::Tasks::UniTask,::Cysharp::Threading::Tasks::UniTask>  tasks) ;

/// [Extension]
/// @brief Method GetAwaiter, addr 0xadfc0c8, size 0x1bc, virtual false, abstract: false, final false
static inline ::GlobalNamespace::UniTask_Awaiter GetAwaiter(/* [TupleElementNames(new[] { "task1", "task2", "task3", "task4", "task5", "task6", "task7", "task8", null })] */ ::System::ValueTuple_8<::Cysharp::Threading::Tasks::UniTask,::Cysharp::Threading::Tasks::UniTask,::Cysharp::Threading::Tasks::UniTask,::Cysharp::Threading::Tasks::UniTask,::Cysharp::Threading::Tasks::UniTask,::Cysharp::Threading::Tasks::UniTask,::Cysharp::Threading::Tasks::UniTask,::System::ValueTuple_1<::Cysharp::Threading::Tasks::UniTask>>  tasks) ;

/// [Extension]
/// @brief Method GetAwaiter, addr 0xadfc284, size 0x1e0, virtual false, abstract: false, final false
static inline ::GlobalNamespace::UniTask_Awaiter GetAwaiter(/* [TupleElementNames(new[] { "task1", "task2", "task3", "task4", "task5", "task6", "task7", "task8", "task9", null, null })] */ ::System::ValueTuple_8<::Cysharp::Threading::Tasks::UniTask,::Cysharp::Threading::Tasks::UniTask,::Cysharp::Threading::Tasks::UniTask,::Cysharp::Threading::Tasks::UniTask,::Cysharp::Threading::Tasks::UniTask,::Cysharp::Threading::Tasks::UniTask,::Cysharp::Threading::Tasks::UniTask,::System::ValueTuple_2<::Cysharp::Threading::Tasks::UniTask,::Cysharp::Threading::Tasks::UniTask>>  tasks) ;

/// [Extension]
/// @brief Method GetAwaiter, addr 0xadfc464, size 0x204, virtual false, abstract: false, final false
static inline ::GlobalNamespace::UniTask_Awaiter GetAwaiter(/* [TupleElementNames(new[] { "task1", "task2", "task3", "task4", "task5", "task6", "task7", "task8", "task9", "task10", null, null, null })] */ ::System::ValueTuple_8<::Cysharp::Threading::Tasks::UniTask,::Cysharp::Threading::Tasks::UniTask,::Cysharp::Threading::Tasks::UniTask,::Cysharp::Threading::Tasks::UniTask,::Cysharp::Threading::Tasks::UniTask,::Cysharp::Threading::Tasks::UniTask,::Cysharp::Threading::Tasks::UniTask,::System::ValueTuple_3<::Cysharp::Threading::Tasks::UniTask,::Cysharp::Threading::Tasks::UniTask,::Cysharp::Threading::Tasks::UniTask>>  tasks) ;

/// [Extension]
/// @brief Method GetAwaiter, addr 0xadfc668, size 0x228, virtual false, abstract: false, final false
static inline ::GlobalNamespace::UniTask_Awaiter GetAwaiter(/* [TupleElementNames(new[] { "task1", "task2", "task3", "task4", "task5", "task6", "task7", "task8", "task9", "task10", "task11", null, null, null, null })] */ ::System::ValueTuple_8<::Cysharp::Threading::Tasks::UniTask,::Cysharp::Threading::Tasks::UniTask,::Cysharp::Threading::Tasks::UniTask,::Cysharp::Threading::Tasks::UniTask,::Cysharp::Threading::Tasks::UniTask,::Cysharp::Threading::Tasks::UniTask,::Cysharp::Threading::Tasks::UniTask,::System::ValueTuple_4<::Cysharp::Threading::Tasks::UniTask,::Cysharp::Threading::Tasks::UniTask,::Cysharp::Threading::Tasks::UniTask,::Cysharp::Threading::Tasks::UniTask>>  tasks) ;

/// [Extension]
/// @brief Method GetAwaiter, addr 0xadfc890, size 0x24c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::UniTask_Awaiter GetAwaiter(/* [TupleElementNames(new[] { "task1", "task2", "task3", "task4", "task5", "task6", "task7", "task8", "task9", "task10", "task11", "task12", null, null, null, null, null })] */ ::System::ValueTuple_8<::Cysharp::Threading::Tasks::UniTask,::Cysharp::Threading::Tasks::UniTask,::Cysharp::Threading::Tasks::UniTask,::Cysharp::Threading::Tasks::UniTask,::Cysharp::Threading::Tasks::UniTask,::Cysharp::Threading::Tasks::UniTask,::Cysharp::Threading::Tasks::UniTask,::System::ValueTuple_5<::Cysharp::Threading::Tasks::UniTask,::Cysharp::Threading::Tasks::UniTask,::Cysharp::Threading::Tasks::UniTask,::Cysharp::Threading::Tasks::UniTask,::Cysharp::Threading::Tasks::UniTask>>  tasks) ;

/// [Extension]
/// @brief Method GetAwaiter, addr 0xadfcadc, size 0x270, virtual false, abstract: false, final false
static inline ::GlobalNamespace::UniTask_Awaiter GetAwaiter(/* [TupleElementNames(new[] { "task1", "task2", "task3", "task4", "task5", "task6", "task7", "task8", "task9", "task10", "task11", "task12", "task13", null, null, null, null, null, null })] */ ::System::ValueTuple_8<::Cysharp::Threading::Tasks::UniTask,::Cysharp::Threading::Tasks::UniTask,::Cysharp::Threading::Tasks::UniTask,::Cysharp::Threading::Tasks::UniTask,::Cysharp::Threading::Tasks::UniTask,::Cysharp::Threading::Tasks::UniTask,::Cysharp::Threading::Tasks::UniTask,::System::ValueTuple_6<::Cysharp::Threading::Tasks::UniTask,::Cysharp::Threading::Tasks::UniTask,::Cysharp::Threading::Tasks::UniTask,::Cysharp::Threading::Tasks::UniTask,::Cysharp::Threading::Tasks::UniTask,::Cysharp::Threading::Tasks::UniTask>>  tasks) ;

/// [Extension]
/// @brief Method GetAwaiter, addr 0xadfcd4c, size 0x294, virtual false, abstract: false, final false
static inline ::GlobalNamespace::UniTask_Awaiter GetAwaiter(/* [TupleElementNames(new[] { "task1", "task2", "task3", "task4", "task5", "task6", "task7", "task8", "task9", "task10", "task11", "task12", "task13", "task14", null, null, null, null, null, null, null })] */ ::System::ValueTuple_8<::Cysharp::Threading::Tasks::UniTask,::Cysharp::Threading::Tasks::UniTask,::Cysharp::Threading::Tasks::UniTask,::Cysharp::Threading::Tasks::UniTask,::Cysharp::Threading::Tasks::UniTask,::Cysharp::Threading::Tasks::UniTask,::Cysharp::Threading::Tasks::UniTask,::System::ValueTuple_7<::Cysharp::Threading::Tasks::UniTask,::Cysharp::Threading::Tasks::UniTask,::Cysharp::Threading::Tasks::UniTask,::Cysharp::Threading::Tasks::UniTask,::Cysharp::Threading::Tasks::UniTask,::Cysharp::Threading::Tasks::UniTask,::Cysharp::Threading::Tasks::UniTask>>  tasks) ;

/// [Extension]
/// @brief Method GetAwaiter, addr 0xadfcfe0, size 0x2b8, virtual false, abstract: false, final false
static inline ::GlobalNamespace::UniTask_Awaiter GetAwaiter(/* [TupleElementNames(new[] { "task1", "task2", "task3", "task4", "task5", "task6", "task7", "task8", "task9", "task10", "task11", "task12", "task13", "task14", "task15", null, null, null, null, null, null, null, null, null })] */ ::System::ValueTuple_8<::Cysharp::Threading::Tasks::UniTask,::Cysharp::Threading::Tasks::UniTask,::Cysharp::Threading::Tasks::UniTask,::Cysharp::Threading::Tasks::UniTask,::Cysharp::Threading::Tasks::UniTask,::Cysharp::Threading::Tasks::UniTask,::Cysharp::Threading::Tasks::UniTask,::System::ValueTuple_8<::Cysharp::Threading::Tasks::UniTask,::Cysharp::Threading::Tasks::UniTask,::Cysharp::Threading::Tasks::UniTask,::Cysharp::Threading::Tasks::UniTask,::Cysharp::Threading::Tasks::UniTask,::Cysharp::Threading::Tasks::UniTask,::Cysharp::Threading::Tasks::UniTask,::System::ValueTuple_1<::Cysharp::Threading::Tasks::UniTask>>>  tasks) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.UniTaskExtensions::<Timeout>d__12))]
/// [Extension]
/// @brief Method Timeout, addr 0xadfaca0, size 0xe8, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask Timeout(::Cysharp::Threading::Tasks::UniTask  task, ::System::TimeSpan  timeout, ::Cysharp::Threading::Tasks::DelayType  delayType, ::Cysharp::Threading::Tasks::PlayerLoopTiming  timeoutCheckTiming, ::System::Threading::CancellationTokenSource*  taskCancellationTokenSource) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.UniTaskExtensions::<Timeout>d__13`1<T>))]
/// [Extension]
/// @brief Method Timeout, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::Cysharp::Threading::Tasks::UniTask_1<T> Timeout(::Cysharp::Threading::Tasks::UniTask_1<T>  task, ::System::TimeSpan  timeout, ::Cysharp::Threading::Tasks::DelayType  delayType, ::Cysharp::Threading::Tasks::PlayerLoopTiming  timeoutCheckTiming, ::System::Threading::CancellationTokenSource*  taskCancellationTokenSource) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.UniTaskExtensions::<TimeoutWithoutException>d__15`1<T>))]
/// [Extension]
/// @brief Method TimeoutWithoutException, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_2<bool,T>> TimeoutWithoutException(::Cysharp::Threading::Tasks::UniTask_1<T>  task, ::System::TimeSpan  timeout, ::Cysharp::Threading::Tasks::DelayType  delayType, ::Cysharp::Threading::Tasks::PlayerLoopTiming  timeoutCheckTiming, ::System::Threading::CancellationTokenSource*  taskCancellationTokenSource) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.UniTaskExtensions::<TimeoutWithoutException>d__14))]
/// [Extension]
/// @brief Method TimeoutWithoutException, addr 0xadfad88, size 0x114, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask_1<bool> TimeoutWithoutException(::Cysharp::Threading::Tasks::UniTask  task, ::System::TimeSpan  timeout, ::Cysharp::Threading::Tasks::DelayType  delayType, ::Cysharp::Threading::Tasks::PlayerLoopTiming  timeoutCheckTiming, ::System::Threading::CancellationTokenSource*  taskCancellationTokenSource) ;

/// [Extension]
/// @brief Method ToAsyncLazy, addr 0xadfa8f0, size 0x68, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::AsyncLazy* ToAsyncLazy(::Cysharp::Threading::Tasks::UniTask  task) ;

/// [Extension]
/// @brief Method ToAsyncLazy, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::Cysharp::Threading::Tasks::AsyncLazy_1<T>* ToAsyncLazy(::Cysharp::Threading::Tasks::UniTask_1<T>  task) ;

/// [Extension]
/// @brief Method ToCoroutine, addr 0xadebdf8, size 0x70, virtual false, abstract: false, final false
static inline ::System::Collections::IEnumerator* ToCoroutine(::Cysharp::Threading::Tasks::UniTask  task, ::System::Action_1<::System::Exception*>*  exceptionHandler) ;

/// [Extension]
/// @brief Method ToCoroutine, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::System::Collections::IEnumerator* ToCoroutine(::Cysharp::Threading::Tasks::UniTask_1<T>  task, ::System::Action_1<T>*  resultHandler, ::System::Action_1<::System::Exception*>*  exceptionHandler) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.UniTaskExtensions::<Unwrap>d__31))]
/// [Extension]
/// @brief Method Unwrap, addr 0xadfb4ec, size 0xb0, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask Unwrap(::Cysharp::Threading::Tasks::UniTask_1<::Cysharp::Threading::Tasks::UniTask>  task) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.UniTaskExtensions::<Unwrap>d__38))]
/// [Extension]
/// @brief Method Unwrap, addr 0xadfb6f8, size 0xb0, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask Unwrap(::Cysharp::Threading::Tasks::UniTask_1<::System::Threading::Tasks::Task*>  task) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.UniTaskExtensions::<Unwrap>d__39))]
/// [Extension]
/// @brief Method Unwrap, addr 0xadfb7a8, size 0xc4, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask Unwrap(::Cysharp::Threading::Tasks::UniTask_1<::System::Threading::Tasks::Task*>  task, bool  continueOnCapturedContext) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.UniTaskExtensions::<Unwrap>d__34))]
/// [Extension]
/// @brief Method Unwrap, addr 0xadfb59c, size 0xa4, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask Unwrap(::System::Threading::Tasks::Task_1<::Cysharp::Threading::Tasks::UniTask>*  task) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.UniTaskExtensions::<Unwrap>d__35))]
/// [Extension]
/// @brief Method Unwrap, addr 0xadfb640, size 0xb8, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask Unwrap(::System::Threading::Tasks::Task_1<::Cysharp::Threading::Tasks::UniTask>*  task, bool  continueOnCapturedContext) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.UniTaskExtensions::<Unwrap>d__30`1<T>))]
/// [Extension]
/// @brief Method Unwrap, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::Cysharp::Threading::Tasks::UniTask_1<T> Unwrap(::Cysharp::Threading::Tasks::UniTask_1<::Cysharp::Threading::Tasks::UniTask_1<T>>  task) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.UniTaskExtensions::<Unwrap>d__36`1<T>))]
/// [Extension]
/// @brief Method Unwrap, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::Cysharp::Threading::Tasks::UniTask_1<T> Unwrap(::Cysharp::Threading::Tasks::UniTask_1<::System::Threading::Tasks::Task_1<T>*>  task) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.UniTaskExtensions::<Unwrap>d__37`1<T>))]
/// [Extension]
/// @brief Method Unwrap, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::Cysharp::Threading::Tasks::UniTask_1<T> Unwrap(::Cysharp::Threading::Tasks::UniTask_1<::System::Threading::Tasks::Task_1<T>*>  task, bool  continueOnCapturedContext) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.UniTaskExtensions::<Unwrap>d__32`1<T>))]
/// [Extension]
/// @brief Method Unwrap, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::Cysharp::Threading::Tasks::UniTask_1<T> Unwrap(::System::Threading::Tasks::Task_1<::Cysharp::Threading::Tasks::UniTask_1<T>>*  task) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.UniTaskExtensions::<Unwrap>d__33`1<T>))]
/// [Extension]
/// @brief Method Unwrap, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::Cysharp::Threading::Tasks::UniTask_1<T> Unwrap(::System::Threading::Tasks::Task_1<::Cysharp::Threading::Tasks::UniTask_1<T>>*  task, bool  continueOnCapturedContext) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UniTaskExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UniTaskExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UniTaskExtensions(UniTaskExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UniTaskExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UniTaskExtensions(UniTaskExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21865};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::UniTaskExtensions) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
// [CompilerGenerated]
// Dependencies System.Object
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTaskExtensions/<>c__2`1<T>
class CORDL_TYPE UniTaskExtensions___c__2_1 : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Cysharp::Threading::Tasks::UniTaskExtensions___c__2_1<T>*  __9;

/// @brief Field <>9__2_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_0, put=setStaticF___9__2_0)) ::System::Action_1<::System::Object*>*  __9__2_0;

static inline ::Cysharp::Threading::Tasks::UniTaskExtensions___c__2_1<T>* New_ctor() ;

/// @brief Method <AsTask>b__2_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _AsTask_b__2_0(::System::Object*  state) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Threading::Tasks::UniTaskExtensions___c__2_1<T>* getStaticF___9() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_0() ;

static inline void setStaticF___9(::Cysharp::Threading::Tasks::UniTaskExtensions___c__2_1<T>*  value) ;

static inline void setStaticF___9__2_0(::System::Action_1<::System::Object*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UniTaskExtensions___c__2_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UniTaskExtensions___c__2_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UniTaskExtensions___c__2_1(UniTaskExtensions___c__2_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UniTaskExtensions___c__2_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UniTaskExtensions___c__2_1(UniTaskExtensions___c__2_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21840};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
// [CompilerGenerated]
// Dependencies System.Object
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTaskExtensions/<>c__19`1<T>
class CORDL_TYPE UniTaskExtensions___c__19_1 : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Cysharp::Threading::Tasks::UniTaskExtensions___c__19_1<T>*  __9;

/// @brief Field <>9__19_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__19_0, put=setStaticF___9__19_0)) ::System::Action_1<::System::Object*>*  __9__19_0;

static inline ::Cysharp::Threading::Tasks::UniTaskExtensions___c__19_1<T>* New_ctor() ;

/// @brief Method <Forget>b__19_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _Forget_b__19_0(::System::Object*  state) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Threading::Tasks::UniTaskExtensions___c__19_1<T>* getStaticF___9() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__19_0() ;

static inline void setStaticF___9(::Cysharp::Threading::Tasks::UniTaskExtensions___c__19_1<T>*  value) ;

static inline void setStaticF___9__19_0(::System::Action_1<::System::Object*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UniTaskExtensions___c__19_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UniTaskExtensions___c__19_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UniTaskExtensions___c__19_1(UniTaskExtensions___c__19_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UniTaskExtensions___c__19_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UniTaskExtensions___c__19_1(UniTaskExtensions___c__19_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21839};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
// [CompilerGenerated]
// Dependencies System.Object
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTaskExtensions/<>c__0`1<T>
class CORDL_TYPE UniTaskExtensions___c__0_1 : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Cysharp::Threading::Tasks::UniTaskExtensions___c__0_1<T>*  __9;

/// @brief Field <>9__0_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__0_0, put=setStaticF___9__0_0)) ::System::Action_2<::System::Threading::Tasks::Task_1<T>*,::System::Object*>*  __9__0_0;

static inline ::Cysharp::Threading::Tasks::UniTaskExtensions___c__0_1<T>* New_ctor() ;

/// @brief Method <AsUniTask>b__0_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _AsUniTask_b__0_0(::System::Threading::Tasks::Task_1<T>*  x, ::System::Object*  state) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Threading::Tasks::UniTaskExtensions___c__0_1<T>* getStaticF___9() ;

static inline ::System::Action_2<::System::Threading::Tasks::Task_1<T>*,::System::Object*>* getStaticF___9__0_0() ;

static inline void setStaticF___9(::Cysharp::Threading::Tasks::UniTaskExtensions___c__0_1<T>*  value) ;

static inline void setStaticF___9__0_0(::System::Action_2<::System::Threading::Tasks::Task_1<T>*,::System::Object*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UniTaskExtensions___c__0_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UniTaskExtensions___c__0_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UniTaskExtensions___c__0_1(UniTaskExtensions___c__0_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UniTaskExtensions___c__0_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UniTaskExtensions___c__0_1(UniTaskExtensions___c__0_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21838};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
// [CompilerGenerated]
// Dependencies System.Object
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTaskExtensions/<>c
class CORDL_TYPE UniTaskExtensions___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Cysharp::Threading::Tasks::UniTaskExtensions___c*  __9;

/// @brief Field <>9__16_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__16_0, put=setStaticF___9__16_0)) ::System::Action_1<::System::Object*>*  __9__16_0;

/// @brief Field <>9__1_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__1_0, put=setStaticF___9__1_0)) ::System::Action_2<::System::Threading::Tasks::Task*,::System::Object*>*  __9__1_0;

/// @brief Field <>9__3_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__3_0, put=setStaticF___9__3_0)) ::System::Action_1<::System::Object*>*  __9__3_0;

static inline ::Cysharp::Threading::Tasks::UniTaskExtensions___c* New_ctor() ;

/// @brief Method <AsTask>b__3_0, addr 0xadfe2c4, size 0x328, virtual false, abstract: false, final false
inline void _AsTask_b__3_0(::System::Object*  state) ;

/// @brief Method <AsUniTask>b__1_0, addr 0xadfe1a0, size 0x124, virtual false, abstract: false, final false
inline void _AsUniTask_b__1_0(::System::Threading::Tasks::Task*  x, ::System::Object*  state) ;

/// @brief Method <Forget>b__16_0, addr 0xadfe5ec, size 0x2b4, virtual false, abstract: false, final false
inline void _Forget_b__16_0(::System::Object*  state) ;

/// @brief Method .ctor, addr 0xadfe198, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Threading::Tasks::UniTaskExtensions___c* getStaticF___9() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__16_0() ;

static inline ::System::Action_2<::System::Threading::Tasks::Task*,::System::Object*>* getStaticF___9__1_0() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__3_0() ;

static inline void setStaticF___9(::Cysharp::Threading::Tasks::UniTaskExtensions___c*  value) ;

static inline void setStaticF___9__16_0(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__1_0(::System::Action_2<::System::Threading::Tasks::Task*,::System::Object*>*  value) ;

static inline void setStaticF___9__3_0(::System::Action_1<::System::Object*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UniTaskExtensions___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UniTaskExtensions___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UniTaskExtensions___c(UniTaskExtensions___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UniTaskExtensions___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UniTaskExtensions___c(UniTaskExtensions___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21837};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::UniTaskExtensions___c) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
// Dependencies Cysharp.Threading.Tasks.UniTask`1<T>, System.Object
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTaskExtensions/ToCoroutineEnumerator`1<T>
class CORDL_TYPE UniTaskExtensions_ToCoroutineEnumerator_1 : public ::System::Object {
public:
// Declarations
using _RunTask_d__8 = ::GlobalNamespace::ToCoroutineEnumerator_1_UniTaskExtensions__RunTask_d__8<T>;

 __declspec(property(get=get_Current)) ::System::Object*  Current;

/// @brief Field completed, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_completed, put=__cordl_internal_set_completed)) bool  completed;

/// @brief Field current, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_current, put=__cordl_internal_set_current)) ::System::Object*  current;

/// @brief Field exception, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_exception, put=__cordl_internal_set_exception)) ::System::Runtime::ExceptionServices::ExceptionDispatchInfo*  exception;

/// @brief Field exceptionHandler, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_exceptionHandler, put=__cordl_internal_set_exceptionHandler)) ::System::Action_1<::System::Exception*>*  exceptionHandler;

/// @brief Field isStarted, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_isStarted, put=__cordl_internal_set_isStarted)) bool  isStarted;

/// @brief Field resultHandler, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_resultHandler, put=__cordl_internal_set_resultHandler)) ::System::Action_1<T>*  resultHandler;

/// @brief Field task, offset 0x30, size 0x18 
 __declspec(property(get=__cordl_internal_get_task, put=__cordl_internal_set_task)) ::Cysharp::Threading::Tasks::UniTask_1<T>  task;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Cysharp::Threading::Tasks::UniTaskExtensions_ToCoroutineEnumerator_1<T>* New_ctor(::Cysharp::Threading::Tasks::UniTask_1<T>  task, ::System::Action_1<T>*  resultHandler, ::System::Action_1<::System::Exception*>*  exceptionHandler) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.UniTaskExtensions::ToCoroutineEnumerator`1::<RunTask>d__8<T>))]
/// @brief Method RunTask, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTaskVoid RunTask(::Cysharp::Threading::Tasks::UniTask_1<T>  task) ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

constexpr bool const& __cordl_internal_get_completed() const;

constexpr bool& __cordl_internal_get_completed() ;

constexpr ::System::Object* const& __cordl_internal_get_current() const;

constexpr ::System::Object*& __cordl_internal_get_current() ;

constexpr ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* const& __cordl_internal_get_exception() const;

constexpr ::System::Runtime::ExceptionServices::ExceptionDispatchInfo*& __cordl_internal_get_exception() ;

constexpr ::System::Action_1<::System::Exception*>* const& __cordl_internal_get_exceptionHandler() const;

constexpr ::System::Action_1<::System::Exception*>*& __cordl_internal_get_exceptionHandler() ;

constexpr bool const& __cordl_internal_get_isStarted() const;

constexpr bool& __cordl_internal_get_isStarted() ;

constexpr ::System::Action_1<T>* const& __cordl_internal_get_resultHandler() const;

constexpr ::System::Action_1<T>*& __cordl_internal_get_resultHandler() ;

constexpr ::Cysharp::Threading::Tasks::UniTask_1<T> const& __cordl_internal_get_task() const;

constexpr ::Cysharp::Threading::Tasks::UniTask_1<T>& __cordl_internal_get_task() ;

constexpr void __cordl_internal_set_completed(bool  value) ;

constexpr void __cordl_internal_set_current(::System::Object*  value) ;

constexpr void __cordl_internal_set_exception(::System::Runtime::ExceptionServices::ExceptionDispatchInfo*  value) ;

constexpr void __cordl_internal_set_exceptionHandler(::System::Action_1<::System::Exception*>*  value) ;

constexpr void __cordl_internal_set_isStarted(bool  value) ;

constexpr void __cordl_internal_set_resultHandler(::System::Action_1<T>*  value) ;

constexpr void __cordl_internal_set_task(::Cysharp::Threading::Tasks::UniTask_1<T>  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::UniTask_1<T>  task, ::System::Action_1<T>*  resultHandler, ::System::Action_1<::System::Exception*>*  exceptionHandler) ;

/// @brief Method get_Current, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Object* get_Current() ;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UniTaskExtensions_ToCoroutineEnumerator_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UniTaskExtensions_ToCoroutineEnumerator_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UniTaskExtensions_ToCoroutineEnumerator_1(UniTaskExtensions_ToCoroutineEnumerator_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UniTaskExtensions_ToCoroutineEnumerator_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UniTaskExtensions_ToCoroutineEnumerator_1(UniTaskExtensions_ToCoroutineEnumerator_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21836};

/// @brief Field completed, offset: 0x10, size: 0x1, def value: None
 bool  ___completed;

/// @brief Field resultHandler, offset: 0x18, size: 0x8, def value: None
 ::System::Action_1<T>*  ___resultHandler;

/// @brief Field exceptionHandler, offset: 0x20, size: 0x8, def value: None
 ::System::Action_1<::System::Exception*>*  ___exceptionHandler;

/// @brief Field isStarted, offset: 0x28, size: 0x1, def value: None
 bool  ___isStarted;

/// @brief Field task, offset: 0x30, size: 0x18, def value: None
 ::Cysharp::Threading::Tasks::UniTask_1<T>  ___task;

/// @brief Field current, offset: 0x48, size: 0x8, def value: None
 ::System::Object*  ___current;

/// @brief Field exception, offset: 0x50, size: 0x8, def value: None
 ::System::Runtime::ExceptionServices::ExceptionDispatchInfo*  ___exception;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
// Dependencies Cysharp.Threading.Tasks.UniTask, System.Object
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTaskExtensions/ToCoroutineEnumerator
class CORDL_TYPE UniTaskExtensions_ToCoroutineEnumerator : public ::System::Object {
public:
// Declarations
using _RunTask_d__6 = ::GlobalNamespace::ToCoroutineEnumerator_UniTaskExtensions__RunTask_d__6;

 __declspec(property(get=get_Current)) ::System::Object*  Current;

/// @brief Field completed, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_completed, put=__cordl_internal_set_completed)) bool  completed;

/// @brief Field exception, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_exception, put=__cordl_internal_set_exception)) ::System::Runtime::ExceptionServices::ExceptionDispatchInfo*  exception;

/// @brief Field exceptionHandler, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_exceptionHandler, put=__cordl_internal_set_exceptionHandler)) ::System::Action_1<::System::Exception*>*  exceptionHandler;

/// @brief Field isStarted, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get_isStarted, put=__cordl_internal_set_isStarted)) bool  isStarted;

/// @brief Field task, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get_task, put=__cordl_internal_set_task)) ::Cysharp::Threading::Tasks::UniTask  task;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Method MoveNext, addr 0xadfdc04, size 0x6c, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Cysharp::Threading::Tasks::UniTaskExtensions_ToCoroutineEnumerator* New_ctor(::Cysharp::Threading::Tasks::UniTask  task, ::System::Action_1<::System::Exception*>*  exceptionHandler) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.UniTaskExtensions::ToCoroutineEnumerator::<RunTask>d__6))]
/// @brief Method RunTask, addr 0xadfdb48, size 0xb4, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTaskVoid RunTask(::Cysharp::Threading::Tasks::UniTask  task) ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0xadfdc70, size 0x4, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

constexpr bool const& __cordl_internal_get_completed() const;

constexpr bool& __cordl_internal_get_completed() ;

constexpr ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* const& __cordl_internal_get_exception() const;

constexpr ::System::Runtime::ExceptionServices::ExceptionDispatchInfo*& __cordl_internal_get_exception() ;

constexpr ::System::Action_1<::System::Exception*>* const& __cordl_internal_get_exceptionHandler() const;

constexpr ::System::Action_1<::System::Exception*>*& __cordl_internal_get_exceptionHandler() ;

constexpr bool const& __cordl_internal_get_isStarted() const;

constexpr bool& __cordl_internal_get_isStarted() ;

constexpr ::Cysharp::Threading::Tasks::UniTask const& __cordl_internal_get_task() const;

constexpr ::Cysharp::Threading::Tasks::UniTask& __cordl_internal_get_task() ;

constexpr void __cordl_internal_set_completed(bool  value) ;

constexpr void __cordl_internal_set_exception(::System::Runtime::ExceptionServices::ExceptionDispatchInfo*  value) ;

constexpr void __cordl_internal_set_exceptionHandler(::System::Action_1<::System::Exception*>*  value) ;

constexpr void __cordl_internal_set_isStarted(bool  value) ;

constexpr void __cordl_internal_set_task(::Cysharp::Threading::Tasks::UniTask  value) ;

/// @brief Method .ctor, addr 0xadfac48, size 0x58, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::UniTask  task, ::System::Action_1<::System::Exception*>*  exceptionHandler) ;

/// @brief Method get_Current, addr 0xadfdbfc, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* get_Current() ;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UniTaskExtensions_ToCoroutineEnumerator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UniTaskExtensions_ToCoroutineEnumerator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UniTaskExtensions_ToCoroutineEnumerator(UniTaskExtensions_ToCoroutineEnumerator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UniTaskExtensions_ToCoroutineEnumerator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UniTaskExtensions_ToCoroutineEnumerator(UniTaskExtensions_ToCoroutineEnumerator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21834};

/// @brief Field completed, offset: 0x10, size: 0x1, def value: None
 bool  ___completed;

/// @brief Field task, offset: 0x18, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::UniTask  ___task;

/// @brief Field exceptionHandler, offset: 0x28, size: 0x8, def value: None
 ::System::Action_1<::System::Exception*>*  ___exceptionHandler;

/// @brief Field isStarted, offset: 0x30, size: 0x1, def value: None
 bool  ___isStarted;

/// @brief Field exception, offset: 0x38, size: 0x8, def value: None
 ::System::Runtime::ExceptionServices::ExceptionDispatchInfo*  ___exception;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Cysharp::Threading::Tasks::UniTaskExtensions_ToCoroutineEnumerator, ___completed) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UniTaskExtensions_ToCoroutineEnumerator, ___task) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UniTaskExtensions_ToCoroutineEnumerator, ___exceptionHandler) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UniTaskExtensions_ToCoroutineEnumerator, ___isStarted) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UniTaskExtensions_ToCoroutineEnumerator, ___exception) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Cysharp::Threading::Tasks::UniTaskExtensions_ToCoroutineEnumerator) == 0x40, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
// Dependencies Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<TResult>, System.Object, System.Threading.CancellationToken, System.Threading.CancellationTokenRegistration
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTaskExtensions/AttachExternalCancellationSource`1<T>
class CORDL_TYPE UniTaskExtensions_AttachExternalCancellationSource_1 : public ::System::Object {
public:
// Declarations
using _RunTask_d__5 = ::GlobalNamespace::AttachExternalCancellationSource_1_UniTaskExtensions__RunTask_d__5<T>;

/// @brief Field cancellationCallbackDelegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_cancellationCallbackDelegate, put=setStaticF_cancellationCallbackDelegate)) ::System::Action_1<::System::Object*>*  cancellationCallbackDelegate;

/// @brief Field cancellationToken, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_cancellationToken, put=__cordl_internal_set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field core, offset 0x30, size 0x28 
 __declspec(property(get=__cordl_internal_get_core, put=__cordl_internal_set_core)) ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<T>  core;

/// @brief Field tokenRegistration, offset 0x18, size 0x18 
 __declspec(property(get=__cordl_internal_get_tokenRegistration, put=__cordl_internal_set_tokenRegistration)) ::System::Threading::CancellationTokenRegistration  tokenRegistration;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource_1<T>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource_1<T>*() noexcept;

/// @brief Method CancellationCallback, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void CancellationCallback(::System::Object*  state) ;

/// @brief Method Cysharp.Threading.Tasks.IUniTaskSource.GetResult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Cysharp_Threading_Tasks_IUniTaskSource_GetResult(int16_t  token) ;

/// @brief Method GetResult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline T GetResult(int16_t  token) ;

/// @brief Method GetStatus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(int16_t  token) ;

static inline ::Cysharp::Threading::Tasks::UniTaskExtensions_AttachExternalCancellationSource_1<T>* New_ctor(::Cysharp::Threading::Tasks::UniTask_1<T>  task, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method OnCompleted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.UniTaskExtensions::AttachExternalCancellationSource`1::<RunTask>d__5<T>))]
/// @brief Method RunTask, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTaskVoid RunTask(::Cysharp::Threading::Tasks::UniTask_1<T>  task) ;

/// @brief Method UnsafeGetStatus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus() ;

constexpr ::System::Threading::CancellationToken const& __cordl_internal_get_cancellationToken() const;

constexpr ::System::Threading::CancellationToken& __cordl_internal_get_cancellationToken() ;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<T> const& __cordl_internal_get_core() const;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<T>& __cordl_internal_get_core() ;

constexpr ::System::Threading::CancellationTokenRegistration const& __cordl_internal_get_tokenRegistration() const;

constexpr ::System::Threading::CancellationTokenRegistration& __cordl_internal_get_tokenRegistration() ;

constexpr void __cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr void __cordl_internal_set_core(::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<T>  value) ;

constexpr void __cordl_internal_set_tokenRegistration(::System::Threading::CancellationTokenRegistration  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::UniTask_1<T>  task, ::System::Threading::CancellationToken  cancellationToken) ;

static inline ::System::Action_1<::System::Object*>* getStaticF_cancellationCallbackDelegate() ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource_1<T>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource_1<T>* i___Cysharp__Threading__Tasks__IUniTaskSource_1_T_() noexcept;

static inline void setStaticF_cancellationCallbackDelegate(::System::Action_1<::System::Object*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UniTaskExtensions_AttachExternalCancellationSource_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UniTaskExtensions_AttachExternalCancellationSource_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UniTaskExtensions_AttachExternalCancellationSource_1(UniTaskExtensions_AttachExternalCancellationSource_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UniTaskExtensions_AttachExternalCancellationSource_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UniTaskExtensions_AttachExternalCancellationSource_1(UniTaskExtensions_AttachExternalCancellationSource_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21832};

/// @brief Field cancellationToken, offset: 0x10, size: 0x8, def value: None
 ::System::Threading::CancellationToken  ___cancellationToken;

/// @brief Field tokenRegistration, offset: 0x18, size: 0x18, def value: None
 ::System::Threading::CancellationTokenRegistration  ___tokenRegistration;

/// @brief Field core, offset: 0x30, size: 0x28, def value: None
 ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<T>  ___core;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
// Dependencies Cysharp.Threading.Tasks.AsyncUnit, Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<TResult>, System.Object, System.Threading.CancellationToken, System.Threading.CancellationTokenRegistration
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTaskExtensions/AttachExternalCancellationSource
class CORDL_TYPE UniTaskExtensions_AttachExternalCancellationSource : public ::System::Object {
public:
// Declarations
using _RunTask_d__5 = ::GlobalNamespace::AttachExternalCancellationSource_UniTaskExtensions__RunTask_d__5;

/// @brief Field cancellationCallbackDelegate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_cancellationCallbackDelegate, put=setStaticF_cancellationCallbackDelegate)) ::System::Action_1<::System::Object*>*  cancellationCallbackDelegate;

/// @brief Field cancellationToken, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_cancellationToken, put=__cordl_internal_set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field core, offset 0x30, size 0x28 
 __declspec(property(get=__cordl_internal_get_core, put=__cordl_internal_set_core)) ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::Cysharp::Threading::Tasks::AsyncUnit>  core;

/// @brief Field tokenRegistration, offset 0x18, size 0x18 
 __declspec(property(get=__cordl_internal_get_tokenRegistration, put=__cordl_internal_set_tokenRegistration)) ::System::Threading::CancellationTokenRegistration  tokenRegistration;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept;

/// @brief Method CancellationCallback, addr 0xadfd34c, size 0x80, virtual false, abstract: false, final false
static inline void CancellationCallback(::System::Object*  state) ;

/// @brief Method GetResult, addr 0xadfd3cc, size 0x58, virtual true, abstract: false, final true
inline void GetResult(int16_t  token) ;

/// @brief Method GetStatus, addr 0xadfd424, size 0x58, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(int16_t  token) ;

static inline ::Cysharp::Threading::Tasks::UniTaskExtensions_AttachExternalCancellationSource* New_ctor(::Cysharp::Threading::Tasks::UniTask  task, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method OnCompleted, addr 0xadfd47c, size 0x70, virtual true, abstract: false, final true
inline void OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.UniTaskExtensions::AttachExternalCancellationSource::<RunTask>d__5))]
/// @brief Method RunTask, addr 0xadfd298, size 0xb4, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTaskVoid RunTask(::Cysharp::Threading::Tasks::UniTask  task) ;

/// @brief Method UnsafeGetStatus, addr 0xadfd4ec, size 0xb8, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus() ;

constexpr ::System::Threading::CancellationToken const& __cordl_internal_get_cancellationToken() const;

constexpr ::System::Threading::CancellationToken& __cordl_internal_get_cancellationToken() ;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::Cysharp::Threading::Tasks::AsyncUnit> const& __cordl_internal_get_core() const;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::Cysharp::Threading::Tasks::AsyncUnit>& __cordl_internal_get_core() ;

constexpr ::System::Threading::CancellationTokenRegistration const& __cordl_internal_get_tokenRegistration() const;

constexpr ::System::Threading::CancellationTokenRegistration& __cordl_internal_get_tokenRegistration() ;

constexpr void __cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr void __cordl_internal_set_core(::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::Cysharp::Threading::Tasks::AsyncUnit>  value) ;

constexpr void __cordl_internal_set_tokenRegistration(::System::Threading::CancellationTokenRegistration  value) ;

/// @brief Method .ctor, addr 0xadfab30, size 0x118, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::UniTask  task, ::System::Threading::CancellationToken  cancellationToken) ;

static inline ::System::Action_1<::System::Object*>* getStaticF_cancellationCallbackDelegate() ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept;

static inline void setStaticF_cancellationCallbackDelegate(::System::Action_1<::System::Object*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UniTaskExtensions_AttachExternalCancellationSource() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UniTaskExtensions_AttachExternalCancellationSource", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UniTaskExtensions_AttachExternalCancellationSource(UniTaskExtensions_AttachExternalCancellationSource && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UniTaskExtensions_AttachExternalCancellationSource", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UniTaskExtensions_AttachExternalCancellationSource(UniTaskExtensions_AttachExternalCancellationSource const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21830};

/// @brief Field cancellationToken, offset: 0x10, size: 0x8, def value: None
 ::System::Threading::CancellationToken  ___cancellationToken;

/// @brief Field tokenRegistration, offset: 0x18, size: 0x18, def value: None
 ::System::Threading::CancellationTokenRegistration  ___tokenRegistration;

/// @brief Field core, offset: 0x30, size: 0x28, def value: None
 ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::Cysharp::Threading::Tasks::AsyncUnit>  ___core;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Cysharp::Threading::Tasks::UniTaskExtensions_AttachExternalCancellationSource, ___cancellationToken) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UniTaskExtensions_AttachExternalCancellationSource, ___tokenRegistration) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UniTaskExtensions_AttachExternalCancellationSource, ___core) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Cysharp::Threading::Tasks::UniTaskExtensions_AttachExternalCancellationSource) == 0x58, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
