#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/UniTask.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/Internal/zzzz__ValueStopwatch_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__AsyncUnit_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__TaskPool_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskCompletionSourceCore_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskStatus_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask_Awaiter_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTask`1_Awaiter_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ValueTuple_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "System/zzzz__ValueTuple_3_def.hpp"
#include "System/zzzz__ValueTuple_4_def.hpp"
#include "System/zzzz__ValueTuple_5_def.hpp"
#include "System/zzzz__ValueTuple_6_def.hpp"
#include "System/zzzz__ValueTuple_7_def.hpp"
#include "System/zzzz__ValueTuple_8_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UniTask)
namespace Cysharp::Threading::Tasks {
template<typename T>
class AsyncLazy_1;
}
namespace Cysharp::Threading::Tasks {
class AsyncLazy;
}
namespace Cysharp::Threading::Tasks {
struct AsyncUnit;
}
namespace Cysharp::Threading::Tasks {
class DelayFramePromise_UniTask___c;
}
namespace Cysharp::Threading::Tasks {
class DelayIgnoreTimeScalePromise_UniTask___c;
}
namespace Cysharp::Threading::Tasks {
class DelayPromise_UniTask___c;
}
namespace Cysharp::Threading::Tasks {
class DelayRealtimePromise_UniTask___c;
}
namespace Cysharp::Threading::Tasks {
struct DelayType;
}
namespace Cysharp::Threading::Tasks {
class IPlayerLoopItem;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class ITaskPoolNode_1;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class IUniTaskSource_1;
}
namespace Cysharp::Threading::Tasks {
class IUniTaskSource;
}
namespace Cysharp::Threading::Tasks {
class NextFramePromise_UniTask___c;
}
namespace Cysharp::Threading::Tasks {
struct PlayerLoopTiming;
}
namespace Cysharp::Threading::Tasks {
struct ReturnToMainThread;
}
namespace Cysharp::Threading::Tasks {
struct ReturnToSynchronizationContext;
}
namespace Cysharp::Threading::Tasks {
struct SwitchToMainThreadAwaitable;
}
namespace Cysharp::Threading::Tasks {
struct SwitchToSynchronizationContextAwaitable;
}
namespace Cysharp::Threading::Tasks {
struct SwitchToTaskPoolAwaitable;
}
namespace Cysharp::Threading::Tasks {
struct SwitchToThreadPoolAwaitable;
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
class UniTask_AsyncUnitSource;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class UniTask_CanceledResultSource_1;
}
namespace Cysharp::Threading::Tasks {
class UniTask_CanceledResultSource;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class UniTask_CanceledUniTaskCache_1;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class UniTask_DeferPromise_1;
}
namespace Cysharp::Threading::Tasks {
class UniTask_DeferPromise;
}
namespace Cysharp::Threading::Tasks {
class UniTask_DelayFramePromise;
}
namespace Cysharp::Threading::Tasks {
class UniTask_DelayIgnoreTimeScalePromise;
}
namespace Cysharp::Threading::Tasks {
class UniTask_DelayPromise;
}
namespace Cysharp::Threading::Tasks {
class UniTask_DelayRealtimePromise;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class UniTask_ExceptionResultSource_1;
}
namespace Cysharp::Threading::Tasks {
class UniTask_ExceptionResultSource;
}
namespace Cysharp::Threading::Tasks {
class UniTask_IsCanceledSource;
}
namespace Cysharp::Threading::Tasks {
class UniTask_MemoizeSource;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class UniTask_NeverPromise_1;
}
namespace Cysharp::Threading::Tasks {
class UniTask_NextFramePromise;
}
namespace Cysharp::Threading::Tasks {
class UniTask_WaitForEndOfFramePromise;
}
namespace Cysharp::Threading::Tasks {
class UniTask_WaitUntilCanceledPromise;
}
namespace Cysharp::Threading::Tasks {
class UniTask_WaitUntilPromise;
}
namespace Cysharp::Threading::Tasks {
template<typename T,typename U>
class UniTask_WaitUntilValueChangedStandardObjectPromise_2;
}
namespace Cysharp::Threading::Tasks {
template<typename T,typename U>
class UniTask_WaitUntilValueChangedUnityObjectPromise_2;
}
namespace Cysharp::Threading::Tasks {
class UniTask_WaitWhilePromise;
}
namespace Cysharp::Threading::Tasks {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10>
class UniTask_WhenAllPromise_10;
}
namespace Cysharp::Threading::Tasks {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11>
class UniTask_WhenAllPromise_11;
}
namespace Cysharp::Threading::Tasks {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12>
class UniTask_WhenAllPromise_12;
}
namespace Cysharp::Threading::Tasks {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12,typename T13>
class UniTask_WhenAllPromise_13;
}
namespace Cysharp::Threading::Tasks {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12,typename T13,typename T14>
class UniTask_WhenAllPromise_14;
}
namespace Cysharp::Threading::Tasks {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12,typename T13,typename T14,typename T15>
class UniTask_WhenAllPromise_15;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class UniTask_WhenAllPromise_1;
}
namespace Cysharp::Threading::Tasks {
template<typename T1,typename T2>
class UniTask_WhenAllPromise_2;
}
namespace Cysharp::Threading::Tasks {
template<typename T1,typename T2,typename T3>
class UniTask_WhenAllPromise_3;
}
namespace Cysharp::Threading::Tasks {
template<typename T1,typename T2,typename T3,typename T4>
class UniTask_WhenAllPromise_4;
}
namespace Cysharp::Threading::Tasks {
template<typename T1,typename T2,typename T3,typename T4,typename T5>
class UniTask_WhenAllPromise_5;
}
namespace Cysharp::Threading::Tasks {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6>
class UniTask_WhenAllPromise_6;
}
namespace Cysharp::Threading::Tasks {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7>
class UniTask_WhenAllPromise_7;
}
namespace Cysharp::Threading::Tasks {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8>
class UniTask_WhenAllPromise_8;
}
namespace Cysharp::Threading::Tasks {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9>
class UniTask_WhenAllPromise_9;
}
namespace Cysharp::Threading::Tasks {
class UniTask_WhenAllPromise;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class UniTask_WhenAnyLRPromise_1;
}
namespace Cysharp::Threading::Tasks {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10>
class UniTask_WhenAnyPromise_10;
}
namespace Cysharp::Threading::Tasks {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11>
class UniTask_WhenAnyPromise_11;
}
namespace Cysharp::Threading::Tasks {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12>
class UniTask_WhenAnyPromise_12;
}
namespace Cysharp::Threading::Tasks {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12,typename T13>
class UniTask_WhenAnyPromise_13;
}
namespace Cysharp::Threading::Tasks {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12,typename T13,typename T14>
class UniTask_WhenAnyPromise_14;
}
namespace Cysharp::Threading::Tasks {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12,typename T13,typename T14,typename T15>
class UniTask_WhenAnyPromise_15;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class UniTask_WhenAnyPromise_1;
}
namespace Cysharp::Threading::Tasks {
template<typename T1,typename T2>
class UniTask_WhenAnyPromise_2;
}
namespace Cysharp::Threading::Tasks {
template<typename T1,typename T2,typename T3>
class UniTask_WhenAnyPromise_3;
}
namespace Cysharp::Threading::Tasks {
template<typename T1,typename T2,typename T3,typename T4>
class UniTask_WhenAnyPromise_4;
}
namespace Cysharp::Threading::Tasks {
template<typename T1,typename T2,typename T3,typename T4,typename T5>
class UniTask_WhenAnyPromise_5;
}
namespace Cysharp::Threading::Tasks {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6>
class UniTask_WhenAnyPromise_6;
}
namespace Cysharp::Threading::Tasks {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7>
class UniTask_WhenAnyPromise_7;
}
namespace Cysharp::Threading::Tasks {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8>
class UniTask_WhenAnyPromise_8;
}
namespace Cysharp::Threading::Tasks {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9>
class UniTask_WhenAnyPromise_9;
}
namespace Cysharp::Threading::Tasks {
class UniTask_WhenAnyPromise;
}
namespace Cysharp::Threading::Tasks {
class UniTask_YieldPromise;
}
namespace Cysharp::Threading::Tasks {
class UniTask___c;
}
namespace Cysharp::Threading::Tasks {
class UniTask___c__DisplayClass55_0;
}
namespace Cysharp::Threading::Tasks {
class UniTask___c__DisplayClass56_0;
}
namespace Cysharp::Threading::Tasks {
class UniTask___c__DisplayClass57_0;
}
namespace Cysharp::Threading::Tasks {
class UniTask___c__DisplayClass58_0;
}
namespace Cysharp::Threading::Tasks {
class WaitForEndOfFramePromise_UniTask___c;
}
namespace Cysharp::Threading::Tasks {
class WaitUntilCanceledPromise_UniTask___c;
}
namespace Cysharp::Threading::Tasks {
class WaitUntilPromise_UniTask___c;
}
namespace Cysharp::Threading::Tasks {
template<typename T,typename U>
class WaitUntilValueChangedStandardObjectPromise_2_UniTask___c;
}
namespace Cysharp::Threading::Tasks {
template<typename T,typename U>
class WaitUntilValueChangedUnityObjectPromise_2_UniTask___c;
}
namespace Cysharp::Threading::Tasks {
class WaitWhilePromise_UniTask___c;
}
namespace Cysharp::Threading::Tasks {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10>
class WhenAllPromise_10_UniTask___c;
}
namespace Cysharp::Threading::Tasks {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11>
class WhenAllPromise_11_UniTask___c;
}
namespace Cysharp::Threading::Tasks {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12>
class WhenAllPromise_12_UniTask___c;
}
namespace Cysharp::Threading::Tasks {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12,typename T13>
class WhenAllPromise_13_UniTask___c;
}
namespace Cysharp::Threading::Tasks {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12,typename T13,typename T14>
class WhenAllPromise_14_UniTask___c;
}
namespace Cysharp::Threading::Tasks {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12,typename T13,typename T14,typename T15>
class WhenAllPromise_15_UniTask___c;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class WhenAllPromise_1_UniTask___c;
}
namespace Cysharp::Threading::Tasks {
template<typename T1,typename T2>
class WhenAllPromise_2_UniTask___c;
}
namespace Cysharp::Threading::Tasks {
template<typename T1,typename T2,typename T3>
class WhenAllPromise_3_UniTask___c;
}
namespace Cysharp::Threading::Tasks {
template<typename T1,typename T2,typename T3,typename T4>
class WhenAllPromise_4_UniTask___c;
}
namespace Cysharp::Threading::Tasks {
template<typename T1,typename T2,typename T3,typename T4,typename T5>
class WhenAllPromise_5_UniTask___c;
}
namespace Cysharp::Threading::Tasks {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6>
class WhenAllPromise_6_UniTask___c;
}
namespace Cysharp::Threading::Tasks {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7>
class WhenAllPromise_7_UniTask___c;
}
namespace Cysharp::Threading::Tasks {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8>
class WhenAllPromise_8_UniTask___c;
}
namespace Cysharp::Threading::Tasks {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9>
class WhenAllPromise_9_UniTask___c;
}
namespace Cysharp::Threading::Tasks {
class WhenAllPromise_UniTask___c;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class WhenAnyLRPromise_1_UniTask___c;
}
namespace Cysharp::Threading::Tasks {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10>
class WhenAnyPromise_10_UniTask___c;
}
namespace Cysharp::Threading::Tasks {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11>
class WhenAnyPromise_11_UniTask___c;
}
namespace Cysharp::Threading::Tasks {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12>
class WhenAnyPromise_12_UniTask___c;
}
namespace Cysharp::Threading::Tasks {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12,typename T13>
class WhenAnyPromise_13_UniTask___c;
}
namespace Cysharp::Threading::Tasks {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12,typename T13,typename T14>
class WhenAnyPromise_14_UniTask___c;
}
namespace Cysharp::Threading::Tasks {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12,typename T13,typename T14,typename T15>
class WhenAnyPromise_15_UniTask___c;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class WhenAnyPromise_1_UniTask___c;
}
namespace Cysharp::Threading::Tasks {
template<typename T1,typename T2>
class WhenAnyPromise_2_UniTask___c;
}
namespace Cysharp::Threading::Tasks {
template<typename T1,typename T2,typename T3>
class WhenAnyPromise_3_UniTask___c;
}
namespace Cysharp::Threading::Tasks {
template<typename T1,typename T2,typename T3,typename T4>
class WhenAnyPromise_4_UniTask___c;
}
namespace Cysharp::Threading::Tasks {
template<typename T1,typename T2,typename T3,typename T4,typename T5>
class WhenAnyPromise_5_UniTask___c;
}
namespace Cysharp::Threading::Tasks {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6>
class WhenAnyPromise_6_UniTask___c;
}
namespace Cysharp::Threading::Tasks {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7>
class WhenAnyPromise_7_UniTask___c;
}
namespace Cysharp::Threading::Tasks {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8>
class WhenAnyPromise_8_UniTask___c;
}
namespace Cysharp::Threading::Tasks {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9>
class WhenAnyPromise_9_UniTask___c;
}
namespace Cysharp::Threading::Tasks {
class WhenAnyPromise_UniTask___c;
}
namespace Cysharp::Threading::Tasks {
struct YieldAwaitable;
}
namespace Cysharp::Threading::Tasks {
class YieldPromise_UniTask___c;
}
namespace GlobalNamespace {
template<typename T>
struct UniTask_1_Awaiter;
}
namespace GlobalNamespace {
struct UniTask_Awaiter;
}
namespace GlobalNamespace {
struct UniTask__RunOnThreadPool_d__78;
}
namespace GlobalNamespace {
struct UniTask__RunOnThreadPool_d__79;
}
namespace GlobalNamespace {
struct UniTask__RunOnThreadPool_d__80;
}
namespace GlobalNamespace {
struct UniTask__RunOnThreadPool_d__81;
}
namespace GlobalNamespace {
template<typename T>
struct UniTask__RunOnThreadPool_d__82_1;
}
namespace GlobalNamespace {
template<typename T>
struct UniTask__RunOnThreadPool_d__83_1;
}
namespace GlobalNamespace {
template<typename T>
struct UniTask__RunOnThreadPool_d__84_1;
}
namespace GlobalNamespace {
template<typename T>
struct UniTask__RunOnThreadPool_d__85_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEqualityComparer_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Runtime::ExceptionServices {
class ExceptionDispatchInfo;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System::Threading {
class SynchronizationContext;
}
namespace System {
template<typename T>
class Action_1;
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
namespace System {
template<typename T>
class WeakReference_1;
}
namespace UnityEngine::Events {
class UnityAction;
}
namespace UnityEngine {
class MonoBehaviour;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
class WaitForEndOfFrame;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks {
class DelayFramePromise_UniTask___c;
}
namespace Cysharp::Threading::Tasks {
class DelayIgnoreTimeScalePromise_UniTask___c;
}
namespace Cysharp::Threading::Tasks {
class DelayPromise_UniTask___c;
}
namespace Cysharp::Threading::Tasks {
class DelayRealtimePromise_UniTask___c;
}
namespace Cysharp::Threading::Tasks {
class NextFramePromise_UniTask___c;
}
namespace Cysharp::Threading::Tasks {
class UniTask_AsyncUnitSource;
}
namespace Cysharp::Threading::Tasks {
class UniTask_CanceledResultSource;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class UniTask_CanceledResultSource_1;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class UniTask_CanceledUniTaskCache_1;
}
namespace Cysharp::Threading::Tasks {
class UniTask_DeferPromise;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class UniTask_DeferPromise_1;
}
namespace Cysharp::Threading::Tasks {
class UniTask_DelayFramePromise;
}
namespace Cysharp::Threading::Tasks {
class UniTask_DelayIgnoreTimeScalePromise;
}
namespace Cysharp::Threading::Tasks {
class UniTask_DelayPromise;
}
namespace Cysharp::Threading::Tasks {
class UniTask_DelayRealtimePromise;
}
namespace Cysharp::Threading::Tasks {
class UniTask_ExceptionResultSource;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class UniTask_ExceptionResultSource_1;
}
namespace Cysharp::Threading::Tasks {
class UniTask_IsCanceledSource;
}
namespace Cysharp::Threading::Tasks {
class UniTask_MemoizeSource;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class UniTask_NeverPromise_1;
}
namespace Cysharp::Threading::Tasks {
class UniTask_NextFramePromise;
}
namespace Cysharp::Threading::Tasks {
class UniTask_WaitForEndOfFramePromise;
}
namespace Cysharp::Threading::Tasks {
class UniTask_WaitUntilCanceledPromise;
}
namespace Cysharp::Threading::Tasks {
class UniTask_WaitUntilPromise;
}
namespace Cysharp::Threading::Tasks {
template<typename T,typename U>
class UniTask_WaitUntilValueChangedStandardObjectPromise_2;
}
namespace Cysharp::Threading::Tasks {
template<typename T,typename U>
class UniTask_WaitUntilValueChangedUnityObjectPromise_2;
}
namespace Cysharp::Threading::Tasks {
class UniTask_WaitWhilePromise;
}
namespace Cysharp::Threading::Tasks {
class UniTask_WhenAllPromise;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class UniTask_WhenAllPromise_1;
}
namespace Cysharp::Threading::Tasks {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10>
class UniTask_WhenAllPromise_10;
}
namespace Cysharp::Threading::Tasks {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11>
class UniTask_WhenAllPromise_11;
}
namespace Cysharp::Threading::Tasks {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12>
class UniTask_WhenAllPromise_12;
}
namespace Cysharp::Threading::Tasks {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12,typename T13>
class UniTask_WhenAllPromise_13;
}
namespace Cysharp::Threading::Tasks {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12,typename T13,typename T14>
class UniTask_WhenAllPromise_14;
}
namespace Cysharp::Threading::Tasks {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12,typename T13,typename T14,typename T15>
class UniTask_WhenAllPromise_15;
}
namespace Cysharp::Threading::Tasks {
template<typename T1,typename T2>
class UniTask_WhenAllPromise_2;
}
namespace Cysharp::Threading::Tasks {
template<typename T1,typename T2,typename T3>
class UniTask_WhenAllPromise_3;
}
namespace Cysharp::Threading::Tasks {
template<typename T1,typename T2,typename T3,typename T4>
class UniTask_WhenAllPromise_4;
}
namespace Cysharp::Threading::Tasks {
template<typename T1,typename T2,typename T3,typename T4,typename T5>
class UniTask_WhenAllPromise_5;
}
namespace Cysharp::Threading::Tasks {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6>
class UniTask_WhenAllPromise_6;
}
namespace Cysharp::Threading::Tasks {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7>
class UniTask_WhenAllPromise_7;
}
namespace Cysharp::Threading::Tasks {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8>
class UniTask_WhenAllPromise_8;
}
namespace Cysharp::Threading::Tasks {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9>
class UniTask_WhenAllPromise_9;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class UniTask_WhenAnyLRPromise_1;
}
namespace Cysharp::Threading::Tasks {
class UniTask_WhenAnyPromise;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class UniTask_WhenAnyPromise_1;
}
namespace Cysharp::Threading::Tasks {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10>
class UniTask_WhenAnyPromise_10;
}
namespace Cysharp::Threading::Tasks {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11>
class UniTask_WhenAnyPromise_11;
}
namespace Cysharp::Threading::Tasks {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12>
class UniTask_WhenAnyPromise_12;
}
namespace Cysharp::Threading::Tasks {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12,typename T13>
class UniTask_WhenAnyPromise_13;
}
namespace Cysharp::Threading::Tasks {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12,typename T13,typename T14>
class UniTask_WhenAnyPromise_14;
}
namespace Cysharp::Threading::Tasks {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12,typename T13,typename T14,typename T15>
class UniTask_WhenAnyPromise_15;
}
namespace Cysharp::Threading::Tasks {
template<typename T1,typename T2>
class UniTask_WhenAnyPromise_2;
}
namespace Cysharp::Threading::Tasks {
template<typename T1,typename T2,typename T3>
class UniTask_WhenAnyPromise_3;
}
namespace Cysharp::Threading::Tasks {
template<typename T1,typename T2,typename T3,typename T4>
class UniTask_WhenAnyPromise_4;
}
namespace Cysharp::Threading::Tasks {
template<typename T1,typename T2,typename T3,typename T4,typename T5>
class UniTask_WhenAnyPromise_5;
}
namespace Cysharp::Threading::Tasks {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6>
class UniTask_WhenAnyPromise_6;
}
namespace Cysharp::Threading::Tasks {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7>
class UniTask_WhenAnyPromise_7;
}
namespace Cysharp::Threading::Tasks {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8>
class UniTask_WhenAnyPromise_8;
}
namespace Cysharp::Threading::Tasks {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9>
class UniTask_WhenAnyPromise_9;
}
namespace Cysharp::Threading::Tasks {
class UniTask_YieldPromise;
}
namespace Cysharp::Threading::Tasks {
class UniTask___c;
}
namespace Cysharp::Threading::Tasks {
class UniTask___c__DisplayClass55_0;
}
namespace Cysharp::Threading::Tasks {
class UniTask___c__DisplayClass56_0;
}
namespace Cysharp::Threading::Tasks {
class UniTask___c__DisplayClass57_0;
}
namespace Cysharp::Threading::Tasks {
class UniTask___c__DisplayClass58_0;
}
namespace Cysharp::Threading::Tasks {
class WaitForEndOfFramePromise_UniTask___c;
}
namespace Cysharp::Threading::Tasks {
class WaitUntilCanceledPromise_UniTask___c;
}
namespace Cysharp::Threading::Tasks {
class WaitUntilPromise_UniTask___c;
}
namespace Cysharp::Threading::Tasks {
template<typename T,typename U>
class WaitUntilValueChangedStandardObjectPromise_2_UniTask___c;
}
namespace Cysharp::Threading::Tasks {
template<typename T,typename U>
class WaitUntilValueChangedUnityObjectPromise_2_UniTask___c;
}
namespace Cysharp::Threading::Tasks {
class WaitWhilePromise_UniTask___c;
}
namespace Cysharp::Threading::Tasks {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10>
class WhenAllPromise_10_UniTask___c;
}
namespace Cysharp::Threading::Tasks {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11>
class WhenAllPromise_11_UniTask___c;
}
namespace Cysharp::Threading::Tasks {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12>
class WhenAllPromise_12_UniTask___c;
}
namespace Cysharp::Threading::Tasks {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12,typename T13>
class WhenAllPromise_13_UniTask___c;
}
namespace Cysharp::Threading::Tasks {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12,typename T13,typename T14>
class WhenAllPromise_14_UniTask___c;
}
namespace Cysharp::Threading::Tasks {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12,typename T13,typename T14,typename T15>
class WhenAllPromise_15_UniTask___c;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class WhenAllPromise_1_UniTask___c;
}
namespace Cysharp::Threading::Tasks {
template<typename T1,typename T2>
class WhenAllPromise_2_UniTask___c;
}
namespace Cysharp::Threading::Tasks {
template<typename T1,typename T2,typename T3>
class WhenAllPromise_3_UniTask___c;
}
namespace Cysharp::Threading::Tasks {
template<typename T1,typename T2,typename T3,typename T4>
class WhenAllPromise_4_UniTask___c;
}
namespace Cysharp::Threading::Tasks {
template<typename T1,typename T2,typename T3,typename T4,typename T5>
class WhenAllPromise_5_UniTask___c;
}
namespace Cysharp::Threading::Tasks {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6>
class WhenAllPromise_6_UniTask___c;
}
namespace Cysharp::Threading::Tasks {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7>
class WhenAllPromise_7_UniTask___c;
}
namespace Cysharp::Threading::Tasks {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8>
class WhenAllPromise_8_UniTask___c;
}
namespace Cysharp::Threading::Tasks {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9>
class WhenAllPromise_9_UniTask___c;
}
namespace Cysharp::Threading::Tasks {
class WhenAllPromise_UniTask___c;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class WhenAnyLRPromise_1_UniTask___c;
}
namespace Cysharp::Threading::Tasks {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10>
class WhenAnyPromise_10_UniTask___c;
}
namespace Cysharp::Threading::Tasks {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11>
class WhenAnyPromise_11_UniTask___c;
}
namespace Cysharp::Threading::Tasks {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12>
class WhenAnyPromise_12_UniTask___c;
}
namespace Cysharp::Threading::Tasks {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12,typename T13>
class WhenAnyPromise_13_UniTask___c;
}
namespace Cysharp::Threading::Tasks {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12,typename T13,typename T14>
class WhenAnyPromise_14_UniTask___c;
}
namespace Cysharp::Threading::Tasks {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12,typename T13,typename T14,typename T15>
class WhenAnyPromise_15_UniTask___c;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class WhenAnyPromise_1_UniTask___c;
}
namespace Cysharp::Threading::Tasks {
template<typename T1,typename T2>
class WhenAnyPromise_2_UniTask___c;
}
namespace Cysharp::Threading::Tasks {
template<typename T1,typename T2,typename T3>
class WhenAnyPromise_3_UniTask___c;
}
namespace Cysharp::Threading::Tasks {
template<typename T1,typename T2,typename T3,typename T4>
class WhenAnyPromise_4_UniTask___c;
}
namespace Cysharp::Threading::Tasks {
template<typename T1,typename T2,typename T3,typename T4,typename T5>
class WhenAnyPromise_5_UniTask___c;
}
namespace Cysharp::Threading::Tasks {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6>
class WhenAnyPromise_6_UniTask___c;
}
namespace Cysharp::Threading::Tasks {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7>
class WhenAnyPromise_7_UniTask___c;
}
namespace Cysharp::Threading::Tasks {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8>
class WhenAnyPromise_8_UniTask___c;
}
namespace Cysharp::Threading::Tasks {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9>
class WhenAnyPromise_9_UniTask___c;
}
namespace Cysharp::Threading::Tasks {
class WhenAnyPromise_UniTask___c;
}
namespace Cysharp::Threading::Tasks {
class YieldPromise_UniTask___c;
}
namespace Cysharp::Threading::Tasks {
struct UniTask;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::DelayFramePromise_UniTask___c*);
MARK_REF_T(::Cysharp::Threading::Tasks::DelayIgnoreTimeScalePromise_UniTask___c*);
MARK_REF_T(::Cysharp::Threading::Tasks::DelayPromise_UniTask___c*);
MARK_REF_T(::Cysharp::Threading::Tasks::DelayRealtimePromise_UniTask___c*);
MARK_REF_T(::Cysharp::Threading::Tasks::NextFramePromise_UniTask___c*);
MARK_REF_T(::Cysharp::Threading::Tasks::UniTask_AsyncUnitSource*);
MARK_REF_T(::Cysharp::Threading::Tasks::UniTask_CanceledResultSource*);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::UniTask_CanceledResultSource_1);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::UniTask_CanceledUniTaskCache_1);
MARK_REF_T(::Cysharp::Threading::Tasks::UniTask_DeferPromise*);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::UniTask_DeferPromise_1);
MARK_REF_T(::Cysharp::Threading::Tasks::UniTask_DelayFramePromise*);
MARK_REF_T(::Cysharp::Threading::Tasks::UniTask_DelayIgnoreTimeScalePromise*);
MARK_REF_T(::Cysharp::Threading::Tasks::UniTask_DelayPromise*);
MARK_REF_T(::Cysharp::Threading::Tasks::UniTask_DelayRealtimePromise*);
MARK_REF_T(::Cysharp::Threading::Tasks::UniTask_ExceptionResultSource*);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::UniTask_ExceptionResultSource_1);
MARK_REF_T(::Cysharp::Threading::Tasks::UniTask_IsCanceledSource*);
MARK_REF_T(::Cysharp::Threading::Tasks::UniTask_MemoizeSource*);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::UniTask_NeverPromise_1);
MARK_REF_T(::Cysharp::Threading::Tasks::UniTask_NextFramePromise*);
MARK_REF_T(::Cysharp::Threading::Tasks::UniTask_WaitForEndOfFramePromise*);
MARK_REF_T(::Cysharp::Threading::Tasks::UniTask_WaitUntilCanceledPromise*);
MARK_REF_T(::Cysharp::Threading::Tasks::UniTask_WaitUntilPromise*);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::UniTask_WaitUntilValueChangedStandardObjectPromise_2);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::UniTask_WaitUntilValueChangedUnityObjectPromise_2);
MARK_REF_T(::Cysharp::Threading::Tasks::UniTask_WaitWhilePromise*);
MARK_REF_T(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise*);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_1);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_10);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_11);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_12);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_13);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_14);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_15);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_2);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_3);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_4);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_5);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_6);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_7);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_8);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_9);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::UniTask_WhenAnyLRPromise_1);
MARK_REF_T(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise*);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_1);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_10);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_11);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_12);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_13);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_14);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_15);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_2);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_3);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_4);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_5);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_6);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_7);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_8);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_9);
MARK_REF_T(::Cysharp::Threading::Tasks::UniTask_YieldPromise*);
MARK_REF_T(::Cysharp::Threading::Tasks::UniTask___c*);
MARK_REF_T(::Cysharp::Threading::Tasks::UniTask___c__DisplayClass55_0*);
MARK_REF_T(::Cysharp::Threading::Tasks::UniTask___c__DisplayClass56_0*);
MARK_REF_T(::Cysharp::Threading::Tasks::UniTask___c__DisplayClass57_0*);
MARK_REF_T(::Cysharp::Threading::Tasks::UniTask___c__DisplayClass58_0*);
MARK_REF_T(::Cysharp::Threading::Tasks::WaitForEndOfFramePromise_UniTask___c*);
MARK_REF_T(::Cysharp::Threading::Tasks::WaitUntilCanceledPromise_UniTask___c*);
MARK_REF_T(::Cysharp::Threading::Tasks::WaitUntilPromise_UniTask___c*);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::WaitUntilValueChangedStandardObjectPromise_2_UniTask___c);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::WaitUntilValueChangedUnityObjectPromise_2_UniTask___c);
MARK_REF_T(::Cysharp::Threading::Tasks::WaitWhilePromise_UniTask___c*);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::WhenAllPromise_10_UniTask___c);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::WhenAllPromise_11_UniTask___c);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::WhenAllPromise_12_UniTask___c);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::WhenAllPromise_13_UniTask___c);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::WhenAllPromise_14_UniTask___c);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::WhenAllPromise_15_UniTask___c);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::WhenAllPromise_1_UniTask___c);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::WhenAllPromise_2_UniTask___c);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::WhenAllPromise_3_UniTask___c);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::WhenAllPromise_4_UniTask___c);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::WhenAllPromise_5_UniTask___c);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::WhenAllPromise_6_UniTask___c);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::WhenAllPromise_7_UniTask___c);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::WhenAllPromise_8_UniTask___c);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::WhenAllPromise_9_UniTask___c);
MARK_REF_T(::Cysharp::Threading::Tasks::WhenAllPromise_UniTask___c*);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::WhenAnyLRPromise_1_UniTask___c);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::WhenAnyPromise_10_UniTask___c);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::WhenAnyPromise_11_UniTask___c);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::WhenAnyPromise_12_UniTask___c);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::WhenAnyPromise_13_UniTask___c);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::WhenAnyPromise_14_UniTask___c);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::WhenAnyPromise_15_UniTask___c);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::WhenAnyPromise_1_UniTask___c);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::WhenAnyPromise_2_UniTask___c);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::WhenAnyPromise_3_UniTask___c);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::WhenAnyPromise_4_UniTask___c);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::WhenAnyPromise_5_UniTask___c);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::WhenAnyPromise_6_UniTask___c);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::WhenAnyPromise_7_UniTask___c);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::WhenAnyPromise_8_UniTask___c);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::WhenAnyPromise_9_UniTask___c);
MARK_REF_T(::Cysharp::Threading::Tasks::WhenAnyPromise_UniTask___c*);
MARK_REF_T(::Cysharp::Threading::Tasks::YieldPromise_UniTask___c*);
MARK_VAL_T(::Cysharp::Threading::Tasks::UniTask);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::DelayFramePromise_UniTask___c*, "Cysharp.Threading.Tasks", "UniTask/DelayFramePromise/<>c");
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::DelayIgnoreTimeScalePromise_UniTask___c*, "Cysharp.Threading.Tasks", "UniTask/DelayIgnoreTimeScalePromise/<>c");
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::DelayPromise_UniTask___c*, "Cysharp.Threading.Tasks", "UniTask/DelayPromise/<>c");
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::DelayRealtimePromise_UniTask___c*, "Cysharp.Threading.Tasks", "UniTask/DelayRealtimePromise/<>c");
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::NextFramePromise_UniTask___c*, "Cysharp.Threading.Tasks", "UniTask/NextFramePromise/<>c");
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::UniTask_AsyncUnitSource*, "Cysharp.Threading.Tasks", "UniTask/AsyncUnitSource");
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::UniTask_CanceledResultSource*, "Cysharp.Threading.Tasks", "UniTask/CanceledResultSource");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::UniTask_CanceledResultSource_1, "Cysharp.Threading.Tasks", "UniTask/CanceledResultSource`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::UniTask_CanceledUniTaskCache_1, "Cysharp.Threading.Tasks", "UniTask/CanceledUniTaskCache`1");
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::UniTask_DeferPromise*, "Cysharp.Threading.Tasks", "UniTask/DeferPromise");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::UniTask_DeferPromise_1, "Cysharp.Threading.Tasks", "UniTask/DeferPromise`1");
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::UniTask_DelayFramePromise*, "Cysharp.Threading.Tasks", "UniTask/DelayFramePromise");
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::UniTask_DelayIgnoreTimeScalePromise*, "Cysharp.Threading.Tasks", "UniTask/DelayIgnoreTimeScalePromise");
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::UniTask_DelayPromise*, "Cysharp.Threading.Tasks", "UniTask/DelayPromise");
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::UniTask_DelayRealtimePromise*, "Cysharp.Threading.Tasks", "UniTask/DelayRealtimePromise");
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::UniTask_ExceptionResultSource*, "Cysharp.Threading.Tasks", "UniTask/ExceptionResultSource");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::UniTask_ExceptionResultSource_1, "Cysharp.Threading.Tasks", "UniTask/ExceptionResultSource`1");
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::UniTask_IsCanceledSource*, "Cysharp.Threading.Tasks", "UniTask/IsCanceledSource");
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::UniTask_MemoizeSource*, "Cysharp.Threading.Tasks", "UniTask/MemoizeSource");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::UniTask_NeverPromise_1, "Cysharp.Threading.Tasks", "UniTask/NeverPromise`1");
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::UniTask_NextFramePromise*, "Cysharp.Threading.Tasks", "UniTask/NextFramePromise");
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::UniTask_WaitForEndOfFramePromise*, "Cysharp.Threading.Tasks", "UniTask/WaitForEndOfFramePromise");
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::UniTask_WaitUntilCanceledPromise*, "Cysharp.Threading.Tasks", "UniTask/WaitUntilCanceledPromise");
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::UniTask_WaitUntilPromise*, "Cysharp.Threading.Tasks", "UniTask/WaitUntilPromise");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::UniTask_WaitUntilValueChangedStandardObjectPromise_2, "Cysharp.Threading.Tasks", "UniTask/WaitUntilValueChangedStandardObjectPromise`2");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::UniTask_WaitUntilValueChangedUnityObjectPromise_2, "Cysharp.Threading.Tasks", "UniTask/WaitUntilValueChangedUnityObjectPromise`2");
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::UniTask_WaitWhilePromise*, "Cysharp.Threading.Tasks", "UniTask/WaitWhilePromise");
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise*, "Cysharp.Threading.Tasks", "UniTask/WhenAllPromise");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_1, "Cysharp.Threading.Tasks", "UniTask/WhenAllPromise`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_10, "Cysharp.Threading.Tasks", "UniTask/WhenAllPromise`10");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_11, "Cysharp.Threading.Tasks", "UniTask/WhenAllPromise`11");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_12, "Cysharp.Threading.Tasks", "UniTask/WhenAllPromise`12");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_13, "Cysharp.Threading.Tasks", "UniTask/WhenAllPromise`13");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_14, "Cysharp.Threading.Tasks", "UniTask/WhenAllPromise`14");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_15, "Cysharp.Threading.Tasks", "UniTask/WhenAllPromise`15");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_2, "Cysharp.Threading.Tasks", "UniTask/WhenAllPromise`2");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_3, "Cysharp.Threading.Tasks", "UniTask/WhenAllPromise`3");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_4, "Cysharp.Threading.Tasks", "UniTask/WhenAllPromise`4");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_5, "Cysharp.Threading.Tasks", "UniTask/WhenAllPromise`5");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_6, "Cysharp.Threading.Tasks", "UniTask/WhenAllPromise`6");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_7, "Cysharp.Threading.Tasks", "UniTask/WhenAllPromise`7");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_8, "Cysharp.Threading.Tasks", "UniTask/WhenAllPromise`8");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_9, "Cysharp.Threading.Tasks", "UniTask/WhenAllPromise`9");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::UniTask_WhenAnyLRPromise_1, "Cysharp.Threading.Tasks", "UniTask/WhenAnyLRPromise`1");
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise*, "Cysharp.Threading.Tasks", "UniTask/WhenAnyPromise");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_1, "Cysharp.Threading.Tasks", "UniTask/WhenAnyPromise`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_10, "Cysharp.Threading.Tasks", "UniTask/WhenAnyPromise`10");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_11, "Cysharp.Threading.Tasks", "UniTask/WhenAnyPromise`11");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_12, "Cysharp.Threading.Tasks", "UniTask/WhenAnyPromise`12");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_13, "Cysharp.Threading.Tasks", "UniTask/WhenAnyPromise`13");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_14, "Cysharp.Threading.Tasks", "UniTask/WhenAnyPromise`14");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_15, "Cysharp.Threading.Tasks", "UniTask/WhenAnyPromise`15");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_2, "Cysharp.Threading.Tasks", "UniTask/WhenAnyPromise`2");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_3, "Cysharp.Threading.Tasks", "UniTask/WhenAnyPromise`3");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_4, "Cysharp.Threading.Tasks", "UniTask/WhenAnyPromise`4");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_5, "Cysharp.Threading.Tasks", "UniTask/WhenAnyPromise`5");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_6, "Cysharp.Threading.Tasks", "UniTask/WhenAnyPromise`6");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_7, "Cysharp.Threading.Tasks", "UniTask/WhenAnyPromise`7");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_8, "Cysharp.Threading.Tasks", "UniTask/WhenAnyPromise`8");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_9, "Cysharp.Threading.Tasks", "UniTask/WhenAnyPromise`9");
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::UniTask_YieldPromise*, "Cysharp.Threading.Tasks", "UniTask/YieldPromise");
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::UniTask___c*, "Cysharp.Threading.Tasks", "UniTask/<>c");
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::UniTask___c__DisplayClass55_0*, "Cysharp.Threading.Tasks", "UniTask/<>c__DisplayClass55_0");
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::UniTask___c__DisplayClass56_0*, "Cysharp.Threading.Tasks", "UniTask/<>c__DisplayClass56_0");
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::UniTask___c__DisplayClass57_0*, "Cysharp.Threading.Tasks", "UniTask/<>c__DisplayClass57_0");
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::UniTask___c__DisplayClass58_0*, "Cysharp.Threading.Tasks", "UniTask/<>c__DisplayClass58_0");
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::WaitForEndOfFramePromise_UniTask___c*, "Cysharp.Threading.Tasks", "UniTask/WaitForEndOfFramePromise/<>c");
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::WaitUntilCanceledPromise_UniTask___c*, "Cysharp.Threading.Tasks", "UniTask/WaitUntilCanceledPromise/<>c");
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::WaitUntilPromise_UniTask___c*, "Cysharp.Threading.Tasks", "UniTask/WaitUntilPromise/<>c");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::WaitUntilValueChangedStandardObjectPromise_2_UniTask___c, "Cysharp.Threading.Tasks", "UniTask/WaitUntilValueChangedStandardObjectPromise`2/<>c");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::WaitUntilValueChangedUnityObjectPromise_2_UniTask___c, "Cysharp.Threading.Tasks", "UniTask/WaitUntilValueChangedUnityObjectPromise`2/<>c");
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::WaitWhilePromise_UniTask___c*, "Cysharp.Threading.Tasks", "UniTask/WaitWhilePromise/<>c");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::WhenAllPromise_10_UniTask___c, "Cysharp.Threading.Tasks", "UniTask/WhenAllPromise`10/<>c");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::WhenAllPromise_11_UniTask___c, "Cysharp.Threading.Tasks", "UniTask/WhenAllPromise`11/<>c");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::WhenAllPromise_12_UniTask___c, "Cysharp.Threading.Tasks", "UniTask/WhenAllPromise`12/<>c");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::WhenAllPromise_13_UniTask___c, "Cysharp.Threading.Tasks", "UniTask/WhenAllPromise`13/<>c");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::WhenAllPromise_14_UniTask___c, "Cysharp.Threading.Tasks", "UniTask/WhenAllPromise`14/<>c");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::WhenAllPromise_15_UniTask___c, "Cysharp.Threading.Tasks", "UniTask/WhenAllPromise`15/<>c");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::WhenAllPromise_1_UniTask___c, "Cysharp.Threading.Tasks", "UniTask/WhenAllPromise`1/<>c");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::WhenAllPromise_2_UniTask___c, "Cysharp.Threading.Tasks", "UniTask/WhenAllPromise`2/<>c");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::WhenAllPromise_3_UniTask___c, "Cysharp.Threading.Tasks", "UniTask/WhenAllPromise`3/<>c");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::WhenAllPromise_4_UniTask___c, "Cysharp.Threading.Tasks", "UniTask/WhenAllPromise`4/<>c");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::WhenAllPromise_5_UniTask___c, "Cysharp.Threading.Tasks", "UniTask/WhenAllPromise`5/<>c");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::WhenAllPromise_6_UniTask___c, "Cysharp.Threading.Tasks", "UniTask/WhenAllPromise`6/<>c");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::WhenAllPromise_7_UniTask___c, "Cysharp.Threading.Tasks", "UniTask/WhenAllPromise`7/<>c");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::WhenAllPromise_8_UniTask___c, "Cysharp.Threading.Tasks", "UniTask/WhenAllPromise`8/<>c");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::WhenAllPromise_9_UniTask___c, "Cysharp.Threading.Tasks", "UniTask/WhenAllPromise`9/<>c");
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::WhenAllPromise_UniTask___c*, "Cysharp.Threading.Tasks", "UniTask/WhenAllPromise/<>c");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::WhenAnyLRPromise_1_UniTask___c, "Cysharp.Threading.Tasks", "UniTask/WhenAnyLRPromise`1/<>c");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::WhenAnyPromise_10_UniTask___c, "Cysharp.Threading.Tasks", "UniTask/WhenAnyPromise`10/<>c");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::WhenAnyPromise_11_UniTask___c, "Cysharp.Threading.Tasks", "UniTask/WhenAnyPromise`11/<>c");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::WhenAnyPromise_12_UniTask___c, "Cysharp.Threading.Tasks", "UniTask/WhenAnyPromise`12/<>c");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::WhenAnyPromise_13_UniTask___c, "Cysharp.Threading.Tasks", "UniTask/WhenAnyPromise`13/<>c");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::WhenAnyPromise_14_UniTask___c, "Cysharp.Threading.Tasks", "UniTask/WhenAnyPromise`14/<>c");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::WhenAnyPromise_15_UniTask___c, "Cysharp.Threading.Tasks", "UniTask/WhenAnyPromise`15/<>c");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::WhenAnyPromise_1_UniTask___c, "Cysharp.Threading.Tasks", "UniTask/WhenAnyPromise`1/<>c");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::WhenAnyPromise_2_UniTask___c, "Cysharp.Threading.Tasks", "UniTask/WhenAnyPromise`2/<>c");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::WhenAnyPromise_3_UniTask___c, "Cysharp.Threading.Tasks", "UniTask/WhenAnyPromise`3/<>c");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::WhenAnyPromise_4_UniTask___c, "Cysharp.Threading.Tasks", "UniTask/WhenAnyPromise`4/<>c");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::WhenAnyPromise_5_UniTask___c, "Cysharp.Threading.Tasks", "UniTask/WhenAnyPromise`5/<>c");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::WhenAnyPromise_6_UniTask___c, "Cysharp.Threading.Tasks", "UniTask/WhenAnyPromise`6/<>c");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::WhenAnyPromise_7_UniTask___c, "Cysharp.Threading.Tasks", "UniTask/WhenAnyPromise`7/<>c");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::WhenAnyPromise_8_UniTask___c, "Cysharp.Threading.Tasks", "UniTask/WhenAnyPromise`8/<>c");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::WhenAnyPromise_9_UniTask___c, "Cysharp.Threading.Tasks", "UniTask/WhenAnyPromise`9/<>c");
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::WhenAnyPromise_UniTask___c*, "Cysharp.Threading.Tasks", "UniTask/WhenAnyPromise/<>c");
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::YieldPromise_UniTask___c*, "Cysharp.Threading.Tasks", "UniTask/YieldPromise/<>c");
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::UniTask, "Cysharp.Threading.Tasks", "UniTask");
// [CompilerGenerated]
// Dependencies System.Object, System.Threading.CancellationToken
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTask/<>c__DisplayClass58_0
class CORDL_TYPE UniTask___c__DisplayClass58_0 : public ::System::Object {
public:
// Declarations
/// @brief Field asyncAction, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_asyncAction, put=__cordl_internal_set_asyncAction)) ::System::Func_2<::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTaskVoid>*  asyncAction;

/// @brief Field cancellationToken, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_cancellationToken, put=__cordl_internal_set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

static inline ::Cysharp::Threading::Tasks::UniTask___c__DisplayClass58_0* New_ctor() ;

/// @brief Method <UnityAction>b__0, addr 0xadf5f00, size 0x40, virtual false, abstract: false, final false
inline void _UnityAction_b__0() ;

constexpr ::System::Func_2<::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTaskVoid>* const& __cordl_internal_get_asyncAction() const;

constexpr ::System::Func_2<::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTaskVoid>*& __cordl_internal_get_asyncAction() ;

constexpr ::System::Threading::CancellationToken const& __cordl_internal_get_cancellationToken() const;

constexpr ::System::Threading::CancellationToken& __cordl_internal_get_cancellationToken() ;

constexpr void __cordl_internal_set_asyncAction(::System::Func_2<::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTaskVoid>*  value) ;

constexpr void __cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value) ;

/// @brief Method .ctor, addr 0xadee254, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UniTask___c__DisplayClass58_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UniTask___c__DisplayClass58_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UniTask___c__DisplayClass58_0(UniTask___c__DisplayClass58_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UniTask___c__DisplayClass58_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UniTask___c__DisplayClass58_0(UniTask___c__DisplayClass58_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21783};

/// @brief Field asyncAction, offset: 0x10, size: 0x8, def value: None
 ::System::Func_2<::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTaskVoid>*  ___asyncAction;

/// @brief Field cancellationToken, offset: 0x18, size: 0x8, def value: None
 ::System::Threading::CancellationToken  ___cancellationToken;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Cysharp::Threading::Tasks::UniTask___c__DisplayClass58_0, ___asyncAction) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UniTask___c__DisplayClass58_0, ___cancellationToken) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Cysharp::Threading::Tasks::UniTask___c__DisplayClass58_0) == 0x20, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
// [CompilerGenerated]
// Dependencies System.Object
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTask/<>c__DisplayClass57_0
class CORDL_TYPE UniTask___c__DisplayClass57_0 : public ::System::Object {
public:
// Declarations
/// @brief Field asyncAction, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_asyncAction, put=__cordl_internal_set_asyncAction)) ::System::Func_1<::Cysharp::Threading::Tasks::UniTaskVoid>*  asyncAction;

static inline ::Cysharp::Threading::Tasks::UniTask___c__DisplayClass57_0* New_ctor() ;

/// @brief Method <UnityAction>b__0, addr 0xadf5ec4, size 0x3c, virtual false, abstract: false, final false
inline void _UnityAction_b__0() ;

constexpr ::System::Func_1<::Cysharp::Threading::Tasks::UniTaskVoid>* const& __cordl_internal_get_asyncAction() const;

constexpr ::System::Func_1<::Cysharp::Threading::Tasks::UniTaskVoid>*& __cordl_internal_get_asyncAction() ;

constexpr void __cordl_internal_set_asyncAction(::System::Func_1<::Cysharp::Threading::Tasks::UniTaskVoid>*  value) ;

/// @brief Method .ctor, addr 0xadee17c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UniTask___c__DisplayClass57_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UniTask___c__DisplayClass57_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UniTask___c__DisplayClass57_0(UniTask___c__DisplayClass57_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UniTask___c__DisplayClass57_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UniTask___c__DisplayClass57_0(UniTask___c__DisplayClass57_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21782};

/// @brief Field asyncAction, offset: 0x10, size: 0x8, def value: None
 ::System::Func_1<::Cysharp::Threading::Tasks::UniTaskVoid>*  ___asyncAction;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Cysharp::Threading::Tasks::UniTask___c__DisplayClass57_0, ___asyncAction) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Cysharp::Threading::Tasks::UniTask___c__DisplayClass57_0) == 0x18, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
// [CompilerGenerated]
// Dependencies System.Object, System.Threading.CancellationToken
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTask/<>c__DisplayClass56_0
class CORDL_TYPE UniTask___c__DisplayClass56_0 : public ::System::Object {
public:
// Declarations
/// @brief Field asyncAction, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_asyncAction, put=__cordl_internal_set_asyncAction)) ::System::Func_2<::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTaskVoid>*  asyncAction;

/// @brief Field cancellationToken, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_cancellationToken, put=__cordl_internal_set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

static inline ::Cysharp::Threading::Tasks::UniTask___c__DisplayClass56_0* New_ctor() ;

/// @brief Method <Action>b__0, addr 0xadf5e84, size 0x40, virtual false, abstract: false, final false
inline void _Action_b__0() ;

constexpr ::System::Func_2<::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTaskVoid>* const& __cordl_internal_get_asyncAction() const;

constexpr ::System::Func_2<::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTaskVoid>*& __cordl_internal_get_asyncAction() ;

constexpr ::System::Threading::CancellationToken const& __cordl_internal_get_cancellationToken() const;

constexpr ::System::Threading::CancellationToken& __cordl_internal_get_cancellationToken() ;

constexpr void __cordl_internal_set_asyncAction(::System::Func_2<::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTaskVoid>*  value) ;

constexpr void __cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value) ;

/// @brief Method .ctor, addr 0xadee0b8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UniTask___c__DisplayClass56_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UniTask___c__DisplayClass56_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UniTask___c__DisplayClass56_0(UniTask___c__DisplayClass56_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UniTask___c__DisplayClass56_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UniTask___c__DisplayClass56_0(UniTask___c__DisplayClass56_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21781};

/// @brief Field asyncAction, offset: 0x10, size: 0x8, def value: None
 ::System::Func_2<::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTaskVoid>*  ___asyncAction;

/// @brief Field cancellationToken, offset: 0x18, size: 0x8, def value: None
 ::System::Threading::CancellationToken  ___cancellationToken;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Cysharp::Threading::Tasks::UniTask___c__DisplayClass56_0, ___asyncAction) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UniTask___c__DisplayClass56_0, ___cancellationToken) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Cysharp::Threading::Tasks::UniTask___c__DisplayClass56_0) == 0x20, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
// [CompilerGenerated]
// Dependencies System.Object
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTask/<>c__DisplayClass55_0
class CORDL_TYPE UniTask___c__DisplayClass55_0 : public ::System::Object {
public:
// Declarations
/// @brief Field asyncAction, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_asyncAction, put=__cordl_internal_set_asyncAction)) ::System::Func_1<::Cysharp::Threading::Tasks::UniTaskVoid>*  asyncAction;

static inline ::Cysharp::Threading::Tasks::UniTask___c__DisplayClass55_0* New_ctor() ;

/// @brief Method <Action>b__0, addr 0xadf5e48, size 0x3c, virtual false, abstract: false, final false
inline void _Action_b__0() ;

constexpr ::System::Func_1<::Cysharp::Threading::Tasks::UniTaskVoid>* const& __cordl_internal_get_asyncAction() const;

constexpr ::System::Func_1<::Cysharp::Threading::Tasks::UniTaskVoid>*& __cordl_internal_get_asyncAction() ;

constexpr void __cordl_internal_set_asyncAction(::System::Func_1<::Cysharp::Threading::Tasks::UniTaskVoid>*  value) ;

/// @brief Method .ctor, addr 0xadedfe0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UniTask___c__DisplayClass55_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UniTask___c__DisplayClass55_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UniTask___c__DisplayClass55_0(UniTask___c__DisplayClass55_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UniTask___c__DisplayClass55_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UniTask___c__DisplayClass55_0(UniTask___c__DisplayClass55_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21780};

/// @brief Field asyncAction, offset: 0x10, size: 0x8, def value: None
 ::System::Func_1<::Cysharp::Threading::Tasks::UniTaskVoid>*  ___asyncAction;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Cysharp::Threading::Tasks::UniTask___c__DisplayClass55_0, ___asyncAction) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Cysharp::Threading::Tasks::UniTask___c__DisplayClass55_0) == 0x18, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
// [CompilerGenerated]
// Dependencies System.Object
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTask/<>c
class CORDL_TYPE UniTask___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Cysharp::Threading::Tasks::UniTask___c*  __9;

static inline ::Cysharp::Threading::Tasks::UniTask___c* New_ctor() ;

/// @brief Method <.cctor>b__176_0, addr 0xadf5d94, size 0xb4, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask __cctor_b__176_0() ;

/// @brief Method .ctor, addr 0xadf5d8c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Threading::Tasks::UniTask___c* getStaticF___9() ;

static inline void setStaticF___9(::Cysharp::Threading::Tasks::UniTask___c*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UniTask___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UniTask___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UniTask___c(UniTask___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UniTask___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UniTask___c(UniTask___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21779};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::UniTask___c) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
// Dependencies Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<TResult>, System.Object, System.ValueTuple`2<T1, T2>, System.ValueTuple`8<T1, T2, T3, T4, T5, T6, T7, TRest>
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12,typename T13,typename T14,typename T15>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`15<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15>
class CORDL_TYPE UniTask_WhenAnyPromise_15 : public ::System::Object {
public:
// Declarations
using __c = ::Cysharp::Threading::Tasks::WhenAnyPromise_15_UniTask___c<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15>;

/// @brief Field completedCount, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_completedCount, put=__cordl_internal_set_completedCount)) int32_t  completedCount;

/// @brief Field core, offset 0x18, size 0x28 
 __declspec(property(get=__cordl_internal_get_core, put=__cordl_internal_set_core)) ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_8<int32_t,T1,T2,T3,T4,T5,T6,::System::ValueTuple_8<T7,T8,T9,T10,T11,T12,T13,::System::ValueTuple_2<T14,T15>>>>  core;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_8<int32_t,T1,T2,T3,T4,T5,T6,::System::ValueTuple_8<T7,T8,T9,T10,T11,T12,T13,::System::ValueTuple_2<T14,T15>>>>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_8<int32_t,T1,T2,T3,T4,T5,T6,::System::ValueTuple_8<T7,T8,T9,T10,T11,T12,T13,::System::ValueTuple_2<T14,T15>>>>*() noexcept;

/// @brief Method Cysharp.Threading.Tasks.IUniTaskSource.GetResult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Cysharp_Threading_Tasks_IUniTaskSource_GetResult(int16_t  token) ;

/// @brief Method GetResult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::ValueTuple_8<int32_t,T1,T2,T3,T4,T5,T6,::System::ValueTuple_8<T7,T8,T9,T10,T11,T12,T13,::System::ValueTuple_2<T14,T15>>> GetResult(int16_t  token) ;

/// @brief Method GetStatus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(int16_t  token) ;

static inline ::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_15<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15>* New_ctor(::Cysharp::Threading::Tasks::UniTask_1<T1>  task1, ::Cysharp::Threading::Tasks::UniTask_1<T2>  task2, ::Cysharp::Threading::Tasks::UniTask_1<T3>  task3, ::Cysharp::Threading::Tasks::UniTask_1<T4>  task4, ::Cysharp::Threading::Tasks::UniTask_1<T5>  task5, ::Cysharp::Threading::Tasks::UniTask_1<T6>  task6, ::Cysharp::Threading::Tasks::UniTask_1<T7>  task7, ::Cysharp::Threading::Tasks::UniTask_1<T8>  task8, ::Cysharp::Threading::Tasks::UniTask_1<T9>  task9, ::Cysharp::Threading::Tasks::UniTask_1<T10>  task10, ::Cysharp::Threading::Tasks::UniTask_1<T11>  task11, ::Cysharp::Threading::Tasks::UniTask_1<T12>  task12, ::Cysharp::Threading::Tasks::UniTask_1<T13>  task13, ::Cysharp::Threading::Tasks::UniTask_1<T14>  task14, ::Cysharp::Threading::Tasks::UniTask_1<T15>  task15) ;

/// @brief Method OnCompleted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token) ;

/// @brief Method TryInvokeContinuationT1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT1(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_15<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T1>>  awaiter) ;

/// @brief Method TryInvokeContinuationT10, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT10(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_15<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T10>>  awaiter) ;

/// @brief Method TryInvokeContinuationT11, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT11(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_15<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T11>>  awaiter) ;

/// @brief Method TryInvokeContinuationT12, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT12(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_15<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T12>>  awaiter) ;

/// @brief Method TryInvokeContinuationT13, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT13(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_15<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T13>>  awaiter) ;

/// @brief Method TryInvokeContinuationT14, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT14(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_15<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T14>>  awaiter) ;

/// @brief Method TryInvokeContinuationT15, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT15(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_15<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T15>>  awaiter) ;

/// @brief Method TryInvokeContinuationT2, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT2(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_15<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T2>>  awaiter) ;

/// @brief Method TryInvokeContinuationT3, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT3(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_15<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T3>>  awaiter) ;

/// @brief Method TryInvokeContinuationT4, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT4(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_15<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T4>>  awaiter) ;

/// @brief Method TryInvokeContinuationT5, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT5(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_15<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T5>>  awaiter) ;

/// @brief Method TryInvokeContinuationT6, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT6(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_15<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T6>>  awaiter) ;

/// @brief Method TryInvokeContinuationT7, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT7(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_15<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T7>>  awaiter) ;

/// @brief Method TryInvokeContinuationT8, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT8(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_15<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T8>>  awaiter) ;

/// @brief Method TryInvokeContinuationT9, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT9(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_15<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T9>>  awaiter) ;

/// @brief Method UnsafeGetStatus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus() ;

constexpr int32_t const& __cordl_internal_get_completedCount() const;

constexpr int32_t& __cordl_internal_get_completedCount() ;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_8<int32_t,T1,T2,T3,T4,T5,T6,::System::ValueTuple_8<T7,T8,T9,T10,T11,T12,T13,::System::ValueTuple_2<T14,T15>>>> const& __cordl_internal_get_core() const;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_8<int32_t,T1,T2,T3,T4,T5,T6,::System::ValueTuple_8<T7,T8,T9,T10,T11,T12,T13,::System::ValueTuple_2<T14,T15>>>>& __cordl_internal_get_core() ;

constexpr void __cordl_internal_set_completedCount(int32_t  value) ;

constexpr void __cordl_internal_set_core(::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_8<int32_t,T1,T2,T3,T4,T5,T6,::System::ValueTuple_8<T7,T8,T9,T10,T11,T12,T13,::System::ValueTuple_2<T14,T15>>>>  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::UniTask_1<T1>  task1, ::Cysharp::Threading::Tasks::UniTask_1<T2>  task2, ::Cysharp::Threading::Tasks::UniTask_1<T3>  task3, ::Cysharp::Threading::Tasks::UniTask_1<T4>  task4, ::Cysharp::Threading::Tasks::UniTask_1<T5>  task5, ::Cysharp::Threading::Tasks::UniTask_1<T6>  task6, ::Cysharp::Threading::Tasks::UniTask_1<T7>  task7, ::Cysharp::Threading::Tasks::UniTask_1<T8>  task8, ::Cysharp::Threading::Tasks::UniTask_1<T9>  task9, ::Cysharp::Threading::Tasks::UniTask_1<T10>  task10, ::Cysharp::Threading::Tasks::UniTask_1<T11>  task11, ::Cysharp::Threading::Tasks::UniTask_1<T12>  task12, ::Cysharp::Threading::Tasks::UniTask_1<T13>  task13, ::Cysharp::Threading::Tasks::UniTask_1<T14>  task14, ::Cysharp::Threading::Tasks::UniTask_1<T15>  task15) ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_8<int32_t,T1,T2,T3,T4,T5,T6,::System::ValueTuple_8<T7,T8,T9,T10,T11,T12,T13,::System::ValueTuple_2<T14,T15>>>>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_8<int32_t,T1,T2,T3,T4,T5,T6,::System::ValueTuple_8<T7,T8,T9,T10,T11,T12,T13,::System::ValueTuple_2<T14,T15>>>>* i___Cysharp__Threading__Tasks__IUniTaskSource_1___System__ValueTuple_8_int32_t_T1_T2_T3_T4_T5_T6___System__ValueTuple_8_T7_T8_T9_T10_T11_T12_T13___System__ValueTuple_2_T14_T15____() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UniTask_WhenAnyPromise_15() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UniTask_WhenAnyPromise_15", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UniTask_WhenAnyPromise_15(UniTask_WhenAnyPromise_15 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UniTask_WhenAnyPromise_15", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UniTask_WhenAnyPromise_15(UniTask_WhenAnyPromise_15 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21778};

/// @brief Field completedCount, offset: 0x10, size: 0x4, def value: None
 int32_t  ___completedCount;

/// [TupleElementNames(new[] { null, "result1", "result2", "result3", "result4", "result5", "result6", "result7", "result8", "result9", "result10", "result11", "result12", "result13", "result14", "result15", null, null, null, null, null, null, null, null, null, null, null })]
/// @brief Field core, offset: 0x18, size: 0x28, def value: None
 ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_8<int32_t,T1,T2,T3,T4,T5,T6,::System::ValueTuple_8<T7,T8,T9,T10,T11,T12,T13,::System::ValueTuple_2<T14,T15>>>>  ___core;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
// [CompilerGenerated]
// Dependencies System.Object
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12,typename T13,typename T14,typename T15>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`15/<>c<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15>
class CORDL_TYPE WhenAnyPromise_15_UniTask___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Cysharp::Threading::Tasks::WhenAnyPromise_15_UniTask___c<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15>*  __9;

/// @brief Field <>9__2_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_0, put=setStaticF___9__2_0)) ::System::Action_1<::System::Object*>*  __9__2_0;

/// @brief Field <>9__2_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_1, put=setStaticF___9__2_1)) ::System::Action_1<::System::Object*>*  __9__2_1;

/// @brief Field <>9__2_10, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_10, put=setStaticF___9__2_10)) ::System::Action_1<::System::Object*>*  __9__2_10;

/// @brief Field <>9__2_11, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_11, put=setStaticF___9__2_11)) ::System::Action_1<::System::Object*>*  __9__2_11;

/// @brief Field <>9__2_12, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_12, put=setStaticF___9__2_12)) ::System::Action_1<::System::Object*>*  __9__2_12;

/// @brief Field <>9__2_13, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_13, put=setStaticF___9__2_13)) ::System::Action_1<::System::Object*>*  __9__2_13;

/// @brief Field <>9__2_14, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_14, put=setStaticF___9__2_14)) ::System::Action_1<::System::Object*>*  __9__2_14;

/// @brief Field <>9__2_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_2, put=setStaticF___9__2_2)) ::System::Action_1<::System::Object*>*  __9__2_2;

/// @brief Field <>9__2_3, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_3, put=setStaticF___9__2_3)) ::System::Action_1<::System::Object*>*  __9__2_3;

/// @brief Field <>9__2_4, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_4, put=setStaticF___9__2_4)) ::System::Action_1<::System::Object*>*  __9__2_4;

/// @brief Field <>9__2_5, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_5, put=setStaticF___9__2_5)) ::System::Action_1<::System::Object*>*  __9__2_5;

/// @brief Field <>9__2_6, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_6, put=setStaticF___9__2_6)) ::System::Action_1<::System::Object*>*  __9__2_6;

/// @brief Field <>9__2_7, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_7, put=setStaticF___9__2_7)) ::System::Action_1<::System::Object*>*  __9__2_7;

/// @brief Field <>9__2_8, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_8, put=setStaticF___9__2_8)) ::System::Action_1<::System::Object*>*  __9__2_8;

/// @brief Field <>9__2_9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_9, put=setStaticF___9__2_9)) ::System::Action_1<::System::Object*>*  __9__2_9;

static inline ::Cysharp::Threading::Tasks::WhenAnyPromise_15_UniTask___c<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15>* New_ctor() ;

/// @brief Method <.ctor>b__2_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_0(::System::Object*  state) ;

/// @brief Method <.ctor>b__2_1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_1(::System::Object*  state) ;

/// @brief Method <.ctor>b__2_10, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_10(::System::Object*  state) ;

/// @brief Method <.ctor>b__2_11, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_11(::System::Object*  state) ;

/// @brief Method <.ctor>b__2_12, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_12(::System::Object*  state) ;

/// @brief Method <.ctor>b__2_13, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_13(::System::Object*  state) ;

/// @brief Method <.ctor>b__2_14, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_14(::System::Object*  state) ;

/// @brief Method <.ctor>b__2_2, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_2(::System::Object*  state) ;

/// @brief Method <.ctor>b__2_3, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_3(::System::Object*  state) ;

/// @brief Method <.ctor>b__2_4, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_4(::System::Object*  state) ;

/// @brief Method <.ctor>b__2_5, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_5(::System::Object*  state) ;

/// @brief Method <.ctor>b__2_6, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_6(::System::Object*  state) ;

/// @brief Method <.ctor>b__2_7, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_7(::System::Object*  state) ;

/// @brief Method <.ctor>b__2_8, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_8(::System::Object*  state) ;

/// @brief Method <.ctor>b__2_9, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_9(::System::Object*  state) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Threading::Tasks::WhenAnyPromise_15_UniTask___c<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15>* getStaticF___9() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_0() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_1() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_10() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_11() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_12() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_13() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_14() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_2() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_3() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_4() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_5() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_6() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_7() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_8() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_9() ;

static inline void setStaticF___9(::Cysharp::Threading::Tasks::WhenAnyPromise_15_UniTask___c<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15>*  value) ;

static inline void setStaticF___9__2_0(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__2_1(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__2_10(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__2_11(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__2_12(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__2_13(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__2_14(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__2_2(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__2_3(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__2_4(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__2_5(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__2_6(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__2_7(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__2_8(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__2_9(::System::Action_1<::System::Object*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WhenAnyPromise_15_UniTask___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WhenAnyPromise_15_UniTask___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WhenAnyPromise_15_UniTask___c(WhenAnyPromise_15_UniTask___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WhenAnyPromise_15_UniTask___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WhenAnyPromise_15_UniTask___c(WhenAnyPromise_15_UniTask___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21777};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
// Dependencies Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<TResult>, System.Object, System.ValueTuple`1<T1>, System.ValueTuple`8<T1, T2, T3, T4, T5, T6, T7, TRest>
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12,typename T13,typename T14>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`14<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14>
class CORDL_TYPE UniTask_WhenAnyPromise_14 : public ::System::Object {
public:
// Declarations
using __c = ::Cysharp::Threading::Tasks::WhenAnyPromise_14_UniTask___c<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14>;

/// @brief Field completedCount, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_completedCount, put=__cordl_internal_set_completedCount)) int32_t  completedCount;

/// @brief Field core, offset 0x18, size 0x28 
 __declspec(property(get=__cordl_internal_get_core, put=__cordl_internal_set_core)) ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_8<int32_t,T1,T2,T3,T4,T5,T6,::System::ValueTuple_8<T7,T8,T9,T10,T11,T12,T13,::System::ValueTuple_1<T14>>>>  core;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_8<int32_t,T1,T2,T3,T4,T5,T6,::System::ValueTuple_8<T7,T8,T9,T10,T11,T12,T13,::System::ValueTuple_1<T14>>>>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_8<int32_t,T1,T2,T3,T4,T5,T6,::System::ValueTuple_8<T7,T8,T9,T10,T11,T12,T13,::System::ValueTuple_1<T14>>>>*() noexcept;

/// @brief Method Cysharp.Threading.Tasks.IUniTaskSource.GetResult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Cysharp_Threading_Tasks_IUniTaskSource_GetResult(int16_t  token) ;

/// @brief Method GetResult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::ValueTuple_8<int32_t,T1,T2,T3,T4,T5,T6,::System::ValueTuple_8<T7,T8,T9,T10,T11,T12,T13,::System::ValueTuple_1<T14>>> GetResult(int16_t  token) ;

/// @brief Method GetStatus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(int16_t  token) ;

static inline ::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_14<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14>* New_ctor(::Cysharp::Threading::Tasks::UniTask_1<T1>  task1, ::Cysharp::Threading::Tasks::UniTask_1<T2>  task2, ::Cysharp::Threading::Tasks::UniTask_1<T3>  task3, ::Cysharp::Threading::Tasks::UniTask_1<T4>  task4, ::Cysharp::Threading::Tasks::UniTask_1<T5>  task5, ::Cysharp::Threading::Tasks::UniTask_1<T6>  task6, ::Cysharp::Threading::Tasks::UniTask_1<T7>  task7, ::Cysharp::Threading::Tasks::UniTask_1<T8>  task8, ::Cysharp::Threading::Tasks::UniTask_1<T9>  task9, ::Cysharp::Threading::Tasks::UniTask_1<T10>  task10, ::Cysharp::Threading::Tasks::UniTask_1<T11>  task11, ::Cysharp::Threading::Tasks::UniTask_1<T12>  task12, ::Cysharp::Threading::Tasks::UniTask_1<T13>  task13, ::Cysharp::Threading::Tasks::UniTask_1<T14>  task14) ;

/// @brief Method OnCompleted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token) ;

/// @brief Method TryInvokeContinuationT1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT1(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_14<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T1>>  awaiter) ;

/// @brief Method TryInvokeContinuationT10, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT10(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_14<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T10>>  awaiter) ;

/// @brief Method TryInvokeContinuationT11, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT11(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_14<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T11>>  awaiter) ;

/// @brief Method TryInvokeContinuationT12, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT12(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_14<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T12>>  awaiter) ;

/// @brief Method TryInvokeContinuationT13, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT13(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_14<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T13>>  awaiter) ;

/// @brief Method TryInvokeContinuationT14, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT14(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_14<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T14>>  awaiter) ;

/// @brief Method TryInvokeContinuationT2, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT2(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_14<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T2>>  awaiter) ;

/// @brief Method TryInvokeContinuationT3, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT3(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_14<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T3>>  awaiter) ;

/// @brief Method TryInvokeContinuationT4, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT4(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_14<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T4>>  awaiter) ;

/// @brief Method TryInvokeContinuationT5, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT5(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_14<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T5>>  awaiter) ;

/// @brief Method TryInvokeContinuationT6, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT6(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_14<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T6>>  awaiter) ;

/// @brief Method TryInvokeContinuationT7, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT7(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_14<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T7>>  awaiter) ;

/// @brief Method TryInvokeContinuationT8, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT8(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_14<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T8>>  awaiter) ;

/// @brief Method TryInvokeContinuationT9, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT9(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_14<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T9>>  awaiter) ;

/// @brief Method UnsafeGetStatus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus() ;

constexpr int32_t const& __cordl_internal_get_completedCount() const;

constexpr int32_t& __cordl_internal_get_completedCount() ;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_8<int32_t,T1,T2,T3,T4,T5,T6,::System::ValueTuple_8<T7,T8,T9,T10,T11,T12,T13,::System::ValueTuple_1<T14>>>> const& __cordl_internal_get_core() const;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_8<int32_t,T1,T2,T3,T4,T5,T6,::System::ValueTuple_8<T7,T8,T9,T10,T11,T12,T13,::System::ValueTuple_1<T14>>>>& __cordl_internal_get_core() ;

constexpr void __cordl_internal_set_completedCount(int32_t  value) ;

constexpr void __cordl_internal_set_core(::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_8<int32_t,T1,T2,T3,T4,T5,T6,::System::ValueTuple_8<T7,T8,T9,T10,T11,T12,T13,::System::ValueTuple_1<T14>>>>  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::UniTask_1<T1>  task1, ::Cysharp::Threading::Tasks::UniTask_1<T2>  task2, ::Cysharp::Threading::Tasks::UniTask_1<T3>  task3, ::Cysharp::Threading::Tasks::UniTask_1<T4>  task4, ::Cysharp::Threading::Tasks::UniTask_1<T5>  task5, ::Cysharp::Threading::Tasks::UniTask_1<T6>  task6, ::Cysharp::Threading::Tasks::UniTask_1<T7>  task7, ::Cysharp::Threading::Tasks::UniTask_1<T8>  task8, ::Cysharp::Threading::Tasks::UniTask_1<T9>  task9, ::Cysharp::Threading::Tasks::UniTask_1<T10>  task10, ::Cysharp::Threading::Tasks::UniTask_1<T11>  task11, ::Cysharp::Threading::Tasks::UniTask_1<T12>  task12, ::Cysharp::Threading::Tasks::UniTask_1<T13>  task13, ::Cysharp::Threading::Tasks::UniTask_1<T14>  task14) ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_8<int32_t,T1,T2,T3,T4,T5,T6,::System::ValueTuple_8<T7,T8,T9,T10,T11,T12,T13,::System::ValueTuple_1<T14>>>>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_8<int32_t,T1,T2,T3,T4,T5,T6,::System::ValueTuple_8<T7,T8,T9,T10,T11,T12,T13,::System::ValueTuple_1<T14>>>>* i___Cysharp__Threading__Tasks__IUniTaskSource_1___System__ValueTuple_8_int32_t_T1_T2_T3_T4_T5_T6___System__ValueTuple_8_T7_T8_T9_T10_T11_T12_T13___System__ValueTuple_1_T14____() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UniTask_WhenAnyPromise_14() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UniTask_WhenAnyPromise_14", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UniTask_WhenAnyPromise_14(UniTask_WhenAnyPromise_14 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UniTask_WhenAnyPromise_14", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UniTask_WhenAnyPromise_14(UniTask_WhenAnyPromise_14 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21776};

/// @brief Field completedCount, offset: 0x10, size: 0x4, def value: None
 int32_t  ___completedCount;

/// [TupleElementNames(new[] { null, "result1", "result2", "result3", "result4", "result5", "result6", "result7", "result8", "result9", "result10", "result11", "result12", "result13", "result14", null, null, null, null, null, null, null, null, null })]
/// @brief Field core, offset: 0x18, size: 0x28, def value: None
 ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_8<int32_t,T1,T2,T3,T4,T5,T6,::System::ValueTuple_8<T7,T8,T9,T10,T11,T12,T13,::System::ValueTuple_1<T14>>>>  ___core;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
// [CompilerGenerated]
// Dependencies System.Object
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12,typename T13,typename T14>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`14/<>c<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14>
class CORDL_TYPE WhenAnyPromise_14_UniTask___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Cysharp::Threading::Tasks::WhenAnyPromise_14_UniTask___c<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14>*  __9;

/// @brief Field <>9__2_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_0, put=setStaticF___9__2_0)) ::System::Action_1<::System::Object*>*  __9__2_0;

/// @brief Field <>9__2_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_1, put=setStaticF___9__2_1)) ::System::Action_1<::System::Object*>*  __9__2_1;

/// @brief Field <>9__2_10, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_10, put=setStaticF___9__2_10)) ::System::Action_1<::System::Object*>*  __9__2_10;

/// @brief Field <>9__2_11, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_11, put=setStaticF___9__2_11)) ::System::Action_1<::System::Object*>*  __9__2_11;

/// @brief Field <>9__2_12, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_12, put=setStaticF___9__2_12)) ::System::Action_1<::System::Object*>*  __9__2_12;

/// @brief Field <>9__2_13, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_13, put=setStaticF___9__2_13)) ::System::Action_1<::System::Object*>*  __9__2_13;

/// @brief Field <>9__2_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_2, put=setStaticF___9__2_2)) ::System::Action_1<::System::Object*>*  __9__2_2;

/// @brief Field <>9__2_3, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_3, put=setStaticF___9__2_3)) ::System::Action_1<::System::Object*>*  __9__2_3;

/// @brief Field <>9__2_4, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_4, put=setStaticF___9__2_4)) ::System::Action_1<::System::Object*>*  __9__2_4;

/// @brief Field <>9__2_5, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_5, put=setStaticF___9__2_5)) ::System::Action_1<::System::Object*>*  __9__2_5;

/// @brief Field <>9__2_6, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_6, put=setStaticF___9__2_6)) ::System::Action_1<::System::Object*>*  __9__2_6;

/// @brief Field <>9__2_7, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_7, put=setStaticF___9__2_7)) ::System::Action_1<::System::Object*>*  __9__2_7;

/// @brief Field <>9__2_8, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_8, put=setStaticF___9__2_8)) ::System::Action_1<::System::Object*>*  __9__2_8;

/// @brief Field <>9__2_9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_9, put=setStaticF___9__2_9)) ::System::Action_1<::System::Object*>*  __9__2_9;

static inline ::Cysharp::Threading::Tasks::WhenAnyPromise_14_UniTask___c<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14>* New_ctor() ;

/// @brief Method <.ctor>b__2_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_0(::System::Object*  state) ;

/// @brief Method <.ctor>b__2_1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_1(::System::Object*  state) ;

/// @brief Method <.ctor>b__2_10, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_10(::System::Object*  state) ;

/// @brief Method <.ctor>b__2_11, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_11(::System::Object*  state) ;

/// @brief Method <.ctor>b__2_12, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_12(::System::Object*  state) ;

/// @brief Method <.ctor>b__2_13, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_13(::System::Object*  state) ;

/// @brief Method <.ctor>b__2_2, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_2(::System::Object*  state) ;

/// @brief Method <.ctor>b__2_3, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_3(::System::Object*  state) ;

/// @brief Method <.ctor>b__2_4, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_4(::System::Object*  state) ;

/// @brief Method <.ctor>b__2_5, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_5(::System::Object*  state) ;

/// @brief Method <.ctor>b__2_6, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_6(::System::Object*  state) ;

/// @brief Method <.ctor>b__2_7, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_7(::System::Object*  state) ;

/// @brief Method <.ctor>b__2_8, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_8(::System::Object*  state) ;

/// @brief Method <.ctor>b__2_9, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_9(::System::Object*  state) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Threading::Tasks::WhenAnyPromise_14_UniTask___c<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14>* getStaticF___9() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_0() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_1() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_10() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_11() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_12() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_13() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_2() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_3() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_4() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_5() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_6() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_7() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_8() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_9() ;

static inline void setStaticF___9(::Cysharp::Threading::Tasks::WhenAnyPromise_14_UniTask___c<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14>*  value) ;

static inline void setStaticF___9__2_0(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__2_1(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__2_10(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__2_11(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__2_12(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__2_13(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__2_2(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__2_3(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__2_4(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__2_5(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__2_6(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__2_7(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__2_8(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__2_9(::System::Action_1<::System::Object*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WhenAnyPromise_14_UniTask___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WhenAnyPromise_14_UniTask___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WhenAnyPromise_14_UniTask___c(WhenAnyPromise_14_UniTask___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WhenAnyPromise_14_UniTask___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WhenAnyPromise_14_UniTask___c(WhenAnyPromise_14_UniTask___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21775};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
// Dependencies Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<TResult>, System.Object, System.ValueTuple`7<T1, T2, T3, T4, T5, T6, T7>, System.ValueTuple`8<T1, T2, T3, T4, T5, T6, T7, TRest>
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12,typename T13>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`13<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13>
class CORDL_TYPE UniTask_WhenAnyPromise_13 : public ::System::Object {
public:
// Declarations
using __c = ::Cysharp::Threading::Tasks::WhenAnyPromise_13_UniTask___c<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13>;

/// @brief Field completedCount, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_completedCount, put=__cordl_internal_set_completedCount)) int32_t  completedCount;

/// @brief Field core, offset 0x18, size 0x28 
 __declspec(property(get=__cordl_internal_get_core, put=__cordl_internal_set_core)) ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_8<int32_t,T1,T2,T3,T4,T5,T6,::System::ValueTuple_7<T7,T8,T9,T10,T11,T12,T13>>>  core;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_8<int32_t,T1,T2,T3,T4,T5,T6,::System::ValueTuple_7<T7,T8,T9,T10,T11,T12,T13>>>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_8<int32_t,T1,T2,T3,T4,T5,T6,::System::ValueTuple_7<T7,T8,T9,T10,T11,T12,T13>>>*() noexcept;

/// @brief Method Cysharp.Threading.Tasks.IUniTaskSource.GetResult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Cysharp_Threading_Tasks_IUniTaskSource_GetResult(int16_t  token) ;

/// @brief Method GetResult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::ValueTuple_8<int32_t,T1,T2,T3,T4,T5,T6,::System::ValueTuple_7<T7,T8,T9,T10,T11,T12,T13>> GetResult(int16_t  token) ;

/// @brief Method GetStatus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(int16_t  token) ;

static inline ::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_13<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13>* New_ctor(::Cysharp::Threading::Tasks::UniTask_1<T1>  task1, ::Cysharp::Threading::Tasks::UniTask_1<T2>  task2, ::Cysharp::Threading::Tasks::UniTask_1<T3>  task3, ::Cysharp::Threading::Tasks::UniTask_1<T4>  task4, ::Cysharp::Threading::Tasks::UniTask_1<T5>  task5, ::Cysharp::Threading::Tasks::UniTask_1<T6>  task6, ::Cysharp::Threading::Tasks::UniTask_1<T7>  task7, ::Cysharp::Threading::Tasks::UniTask_1<T8>  task8, ::Cysharp::Threading::Tasks::UniTask_1<T9>  task9, ::Cysharp::Threading::Tasks::UniTask_1<T10>  task10, ::Cysharp::Threading::Tasks::UniTask_1<T11>  task11, ::Cysharp::Threading::Tasks::UniTask_1<T12>  task12, ::Cysharp::Threading::Tasks::UniTask_1<T13>  task13) ;

/// @brief Method OnCompleted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token) ;

/// @brief Method TryInvokeContinuationT1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT1(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_13<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T1>>  awaiter) ;

/// @brief Method TryInvokeContinuationT10, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT10(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_13<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T10>>  awaiter) ;

/// @brief Method TryInvokeContinuationT11, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT11(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_13<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T11>>  awaiter) ;

/// @brief Method TryInvokeContinuationT12, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT12(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_13<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T12>>  awaiter) ;

/// @brief Method TryInvokeContinuationT13, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT13(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_13<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T13>>  awaiter) ;

/// @brief Method TryInvokeContinuationT2, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT2(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_13<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T2>>  awaiter) ;

/// @brief Method TryInvokeContinuationT3, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT3(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_13<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T3>>  awaiter) ;

/// @brief Method TryInvokeContinuationT4, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT4(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_13<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T4>>  awaiter) ;

/// @brief Method TryInvokeContinuationT5, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT5(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_13<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T5>>  awaiter) ;

/// @brief Method TryInvokeContinuationT6, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT6(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_13<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T6>>  awaiter) ;

/// @brief Method TryInvokeContinuationT7, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT7(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_13<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T7>>  awaiter) ;

/// @brief Method TryInvokeContinuationT8, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT8(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_13<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T8>>  awaiter) ;

/// @brief Method TryInvokeContinuationT9, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT9(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_13<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T9>>  awaiter) ;

/// @brief Method UnsafeGetStatus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus() ;

constexpr int32_t const& __cordl_internal_get_completedCount() const;

constexpr int32_t& __cordl_internal_get_completedCount() ;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_8<int32_t,T1,T2,T3,T4,T5,T6,::System::ValueTuple_7<T7,T8,T9,T10,T11,T12,T13>>> const& __cordl_internal_get_core() const;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_8<int32_t,T1,T2,T3,T4,T5,T6,::System::ValueTuple_7<T7,T8,T9,T10,T11,T12,T13>>>& __cordl_internal_get_core() ;

constexpr void __cordl_internal_set_completedCount(int32_t  value) ;

constexpr void __cordl_internal_set_core(::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_8<int32_t,T1,T2,T3,T4,T5,T6,::System::ValueTuple_7<T7,T8,T9,T10,T11,T12,T13>>>  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::UniTask_1<T1>  task1, ::Cysharp::Threading::Tasks::UniTask_1<T2>  task2, ::Cysharp::Threading::Tasks::UniTask_1<T3>  task3, ::Cysharp::Threading::Tasks::UniTask_1<T4>  task4, ::Cysharp::Threading::Tasks::UniTask_1<T5>  task5, ::Cysharp::Threading::Tasks::UniTask_1<T6>  task6, ::Cysharp::Threading::Tasks::UniTask_1<T7>  task7, ::Cysharp::Threading::Tasks::UniTask_1<T8>  task8, ::Cysharp::Threading::Tasks::UniTask_1<T9>  task9, ::Cysharp::Threading::Tasks::UniTask_1<T10>  task10, ::Cysharp::Threading::Tasks::UniTask_1<T11>  task11, ::Cysharp::Threading::Tasks::UniTask_1<T12>  task12, ::Cysharp::Threading::Tasks::UniTask_1<T13>  task13) ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_8<int32_t,T1,T2,T3,T4,T5,T6,::System::ValueTuple_7<T7,T8,T9,T10,T11,T12,T13>>>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_8<int32_t,T1,T2,T3,T4,T5,T6,::System::ValueTuple_7<T7,T8,T9,T10,T11,T12,T13>>>* i___Cysharp__Threading__Tasks__IUniTaskSource_1___System__ValueTuple_8_int32_t_T1_T2_T3_T4_T5_T6___System__ValueTuple_7_T7_T8_T9_T10_T11_T12_T13___() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UniTask_WhenAnyPromise_13() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UniTask_WhenAnyPromise_13", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UniTask_WhenAnyPromise_13(UniTask_WhenAnyPromise_13 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UniTask_WhenAnyPromise_13", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UniTask_WhenAnyPromise_13(UniTask_WhenAnyPromise_13 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21774};

/// @brief Field completedCount, offset: 0x10, size: 0x4, def value: None
 int32_t  ___completedCount;

/// [TupleElementNames(new[] { null, "result1", "result2", "result3", "result4", "result5", "result6", "result7", "result8", "result9", "result10", "result11", "result12", "result13", null, null, null, null, null, null, null })]
/// @brief Field core, offset: 0x18, size: 0x28, def value: None
 ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_8<int32_t,T1,T2,T3,T4,T5,T6,::System::ValueTuple_7<T7,T8,T9,T10,T11,T12,T13>>>  ___core;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
// [CompilerGenerated]
// Dependencies System.Object
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12,typename T13>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`13/<>c<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13>
class CORDL_TYPE WhenAnyPromise_13_UniTask___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Cysharp::Threading::Tasks::WhenAnyPromise_13_UniTask___c<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13>*  __9;

/// @brief Field <>9__2_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_0, put=setStaticF___9__2_0)) ::System::Action_1<::System::Object*>*  __9__2_0;

/// @brief Field <>9__2_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_1, put=setStaticF___9__2_1)) ::System::Action_1<::System::Object*>*  __9__2_1;

/// @brief Field <>9__2_10, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_10, put=setStaticF___9__2_10)) ::System::Action_1<::System::Object*>*  __9__2_10;

/// @brief Field <>9__2_11, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_11, put=setStaticF___9__2_11)) ::System::Action_1<::System::Object*>*  __9__2_11;

/// @brief Field <>9__2_12, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_12, put=setStaticF___9__2_12)) ::System::Action_1<::System::Object*>*  __9__2_12;

/// @brief Field <>9__2_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_2, put=setStaticF___9__2_2)) ::System::Action_1<::System::Object*>*  __9__2_2;

/// @brief Field <>9__2_3, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_3, put=setStaticF___9__2_3)) ::System::Action_1<::System::Object*>*  __9__2_3;

/// @brief Field <>9__2_4, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_4, put=setStaticF___9__2_4)) ::System::Action_1<::System::Object*>*  __9__2_4;

/// @brief Field <>9__2_5, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_5, put=setStaticF___9__2_5)) ::System::Action_1<::System::Object*>*  __9__2_5;

/// @brief Field <>9__2_6, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_6, put=setStaticF___9__2_6)) ::System::Action_1<::System::Object*>*  __9__2_6;

/// @brief Field <>9__2_7, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_7, put=setStaticF___9__2_7)) ::System::Action_1<::System::Object*>*  __9__2_7;

/// @brief Field <>9__2_8, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_8, put=setStaticF___9__2_8)) ::System::Action_1<::System::Object*>*  __9__2_8;

/// @brief Field <>9__2_9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_9, put=setStaticF___9__2_9)) ::System::Action_1<::System::Object*>*  __9__2_9;

static inline ::Cysharp::Threading::Tasks::WhenAnyPromise_13_UniTask___c<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13>* New_ctor() ;

/// @brief Method <.ctor>b__2_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_0(::System::Object*  state) ;

/// @brief Method <.ctor>b__2_1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_1(::System::Object*  state) ;

/// @brief Method <.ctor>b__2_10, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_10(::System::Object*  state) ;

/// @brief Method <.ctor>b__2_11, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_11(::System::Object*  state) ;

/// @brief Method <.ctor>b__2_12, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_12(::System::Object*  state) ;

/// @brief Method <.ctor>b__2_2, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_2(::System::Object*  state) ;

/// @brief Method <.ctor>b__2_3, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_3(::System::Object*  state) ;

/// @brief Method <.ctor>b__2_4, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_4(::System::Object*  state) ;

/// @brief Method <.ctor>b__2_5, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_5(::System::Object*  state) ;

/// @brief Method <.ctor>b__2_6, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_6(::System::Object*  state) ;

/// @brief Method <.ctor>b__2_7, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_7(::System::Object*  state) ;

/// @brief Method <.ctor>b__2_8, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_8(::System::Object*  state) ;

/// @brief Method <.ctor>b__2_9, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_9(::System::Object*  state) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Threading::Tasks::WhenAnyPromise_13_UniTask___c<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13>* getStaticF___9() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_0() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_1() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_10() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_11() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_12() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_2() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_3() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_4() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_5() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_6() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_7() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_8() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_9() ;

static inline void setStaticF___9(::Cysharp::Threading::Tasks::WhenAnyPromise_13_UniTask___c<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13>*  value) ;

static inline void setStaticF___9__2_0(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__2_1(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__2_10(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__2_11(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__2_12(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__2_2(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__2_3(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__2_4(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__2_5(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__2_6(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__2_7(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__2_8(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__2_9(::System::Action_1<::System::Object*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WhenAnyPromise_13_UniTask___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WhenAnyPromise_13_UniTask___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WhenAnyPromise_13_UniTask___c(WhenAnyPromise_13_UniTask___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WhenAnyPromise_13_UniTask___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WhenAnyPromise_13_UniTask___c(WhenAnyPromise_13_UniTask___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21773};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
// Dependencies Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<TResult>, System.Object, System.ValueTuple`6<T1, T2, T3, T4, T5, T6>, System.ValueTuple`8<T1, T2, T3, T4, T5, T6, T7, TRest>
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`12<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12>
class CORDL_TYPE UniTask_WhenAnyPromise_12 : public ::System::Object {
public:
// Declarations
using __c = ::Cysharp::Threading::Tasks::WhenAnyPromise_12_UniTask___c<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12>;

/// @brief Field completedCount, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_completedCount, put=__cordl_internal_set_completedCount)) int32_t  completedCount;

/// @brief Field core, offset 0x18, size 0x28 
 __declspec(property(get=__cordl_internal_get_core, put=__cordl_internal_set_core)) ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_8<int32_t,T1,T2,T3,T4,T5,T6,::System::ValueTuple_6<T7,T8,T9,T10,T11,T12>>>  core;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_8<int32_t,T1,T2,T3,T4,T5,T6,::System::ValueTuple_6<T7,T8,T9,T10,T11,T12>>>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_8<int32_t,T1,T2,T3,T4,T5,T6,::System::ValueTuple_6<T7,T8,T9,T10,T11,T12>>>*() noexcept;

/// @brief Method Cysharp.Threading.Tasks.IUniTaskSource.GetResult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Cysharp_Threading_Tasks_IUniTaskSource_GetResult(int16_t  token) ;

/// @brief Method GetResult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::ValueTuple_8<int32_t,T1,T2,T3,T4,T5,T6,::System::ValueTuple_6<T7,T8,T9,T10,T11,T12>> GetResult(int16_t  token) ;

/// @brief Method GetStatus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(int16_t  token) ;

static inline ::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_12<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12>* New_ctor(::Cysharp::Threading::Tasks::UniTask_1<T1>  task1, ::Cysharp::Threading::Tasks::UniTask_1<T2>  task2, ::Cysharp::Threading::Tasks::UniTask_1<T3>  task3, ::Cysharp::Threading::Tasks::UniTask_1<T4>  task4, ::Cysharp::Threading::Tasks::UniTask_1<T5>  task5, ::Cysharp::Threading::Tasks::UniTask_1<T6>  task6, ::Cysharp::Threading::Tasks::UniTask_1<T7>  task7, ::Cysharp::Threading::Tasks::UniTask_1<T8>  task8, ::Cysharp::Threading::Tasks::UniTask_1<T9>  task9, ::Cysharp::Threading::Tasks::UniTask_1<T10>  task10, ::Cysharp::Threading::Tasks::UniTask_1<T11>  task11, ::Cysharp::Threading::Tasks::UniTask_1<T12>  task12) ;

/// @brief Method OnCompleted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token) ;

/// @brief Method TryInvokeContinuationT1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT1(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_12<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T1>>  awaiter) ;

/// @brief Method TryInvokeContinuationT10, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT10(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_12<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T10>>  awaiter) ;

/// @brief Method TryInvokeContinuationT11, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT11(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_12<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T11>>  awaiter) ;

/// @brief Method TryInvokeContinuationT12, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT12(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_12<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T12>>  awaiter) ;

/// @brief Method TryInvokeContinuationT2, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT2(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_12<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T2>>  awaiter) ;

/// @brief Method TryInvokeContinuationT3, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT3(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_12<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T3>>  awaiter) ;

/// @brief Method TryInvokeContinuationT4, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT4(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_12<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T4>>  awaiter) ;

/// @brief Method TryInvokeContinuationT5, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT5(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_12<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T5>>  awaiter) ;

/// @brief Method TryInvokeContinuationT6, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT6(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_12<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T6>>  awaiter) ;

/// @brief Method TryInvokeContinuationT7, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT7(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_12<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T7>>  awaiter) ;

/// @brief Method TryInvokeContinuationT8, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT8(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_12<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T8>>  awaiter) ;

/// @brief Method TryInvokeContinuationT9, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT9(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_12<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T9>>  awaiter) ;

/// @brief Method UnsafeGetStatus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus() ;

constexpr int32_t const& __cordl_internal_get_completedCount() const;

constexpr int32_t& __cordl_internal_get_completedCount() ;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_8<int32_t,T1,T2,T3,T4,T5,T6,::System::ValueTuple_6<T7,T8,T9,T10,T11,T12>>> const& __cordl_internal_get_core() const;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_8<int32_t,T1,T2,T3,T4,T5,T6,::System::ValueTuple_6<T7,T8,T9,T10,T11,T12>>>& __cordl_internal_get_core() ;

constexpr void __cordl_internal_set_completedCount(int32_t  value) ;

constexpr void __cordl_internal_set_core(::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_8<int32_t,T1,T2,T3,T4,T5,T6,::System::ValueTuple_6<T7,T8,T9,T10,T11,T12>>>  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::UniTask_1<T1>  task1, ::Cysharp::Threading::Tasks::UniTask_1<T2>  task2, ::Cysharp::Threading::Tasks::UniTask_1<T3>  task3, ::Cysharp::Threading::Tasks::UniTask_1<T4>  task4, ::Cysharp::Threading::Tasks::UniTask_1<T5>  task5, ::Cysharp::Threading::Tasks::UniTask_1<T6>  task6, ::Cysharp::Threading::Tasks::UniTask_1<T7>  task7, ::Cysharp::Threading::Tasks::UniTask_1<T8>  task8, ::Cysharp::Threading::Tasks::UniTask_1<T9>  task9, ::Cysharp::Threading::Tasks::UniTask_1<T10>  task10, ::Cysharp::Threading::Tasks::UniTask_1<T11>  task11, ::Cysharp::Threading::Tasks::UniTask_1<T12>  task12) ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_8<int32_t,T1,T2,T3,T4,T5,T6,::System::ValueTuple_6<T7,T8,T9,T10,T11,T12>>>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_8<int32_t,T1,T2,T3,T4,T5,T6,::System::ValueTuple_6<T7,T8,T9,T10,T11,T12>>>* i___Cysharp__Threading__Tasks__IUniTaskSource_1___System__ValueTuple_8_int32_t_T1_T2_T3_T4_T5_T6___System__ValueTuple_6_T7_T8_T9_T10_T11_T12___() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UniTask_WhenAnyPromise_12() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UniTask_WhenAnyPromise_12", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UniTask_WhenAnyPromise_12(UniTask_WhenAnyPromise_12 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UniTask_WhenAnyPromise_12", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UniTask_WhenAnyPromise_12(UniTask_WhenAnyPromise_12 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21772};

/// @brief Field completedCount, offset: 0x10, size: 0x4, def value: None
 int32_t  ___completedCount;

/// [TupleElementNames(new[] { null, "result1", "result2", "result3", "result4", "result5", "result6", "result7", "result8", "result9", "result10", "result11", "result12", null, null, null, null, null, null })]
/// @brief Field core, offset: 0x18, size: 0x28, def value: None
 ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_8<int32_t,T1,T2,T3,T4,T5,T6,::System::ValueTuple_6<T7,T8,T9,T10,T11,T12>>>  ___core;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
// [CompilerGenerated]
// Dependencies System.Object
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`12/<>c<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12>
class CORDL_TYPE WhenAnyPromise_12_UniTask___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Cysharp::Threading::Tasks::WhenAnyPromise_12_UniTask___c<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12>*  __9;

/// @brief Field <>9__2_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_0, put=setStaticF___9__2_0)) ::System::Action_1<::System::Object*>*  __9__2_0;

/// @brief Field <>9__2_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_1, put=setStaticF___9__2_1)) ::System::Action_1<::System::Object*>*  __9__2_1;

/// @brief Field <>9__2_10, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_10, put=setStaticF___9__2_10)) ::System::Action_1<::System::Object*>*  __9__2_10;

/// @brief Field <>9__2_11, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_11, put=setStaticF___9__2_11)) ::System::Action_1<::System::Object*>*  __9__2_11;

/// @brief Field <>9__2_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_2, put=setStaticF___9__2_2)) ::System::Action_1<::System::Object*>*  __9__2_2;

/// @brief Field <>9__2_3, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_3, put=setStaticF___9__2_3)) ::System::Action_1<::System::Object*>*  __9__2_3;

/// @brief Field <>9__2_4, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_4, put=setStaticF___9__2_4)) ::System::Action_1<::System::Object*>*  __9__2_4;

/// @brief Field <>9__2_5, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_5, put=setStaticF___9__2_5)) ::System::Action_1<::System::Object*>*  __9__2_5;

/// @brief Field <>9__2_6, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_6, put=setStaticF___9__2_6)) ::System::Action_1<::System::Object*>*  __9__2_6;

/// @brief Field <>9__2_7, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_7, put=setStaticF___9__2_7)) ::System::Action_1<::System::Object*>*  __9__2_7;

/// @brief Field <>9__2_8, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_8, put=setStaticF___9__2_8)) ::System::Action_1<::System::Object*>*  __9__2_8;

/// @brief Field <>9__2_9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_9, put=setStaticF___9__2_9)) ::System::Action_1<::System::Object*>*  __9__2_9;

static inline ::Cysharp::Threading::Tasks::WhenAnyPromise_12_UniTask___c<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12>* New_ctor() ;

/// @brief Method <.ctor>b__2_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_0(::System::Object*  state) ;

/// @brief Method <.ctor>b__2_1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_1(::System::Object*  state) ;

/// @brief Method <.ctor>b__2_10, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_10(::System::Object*  state) ;

/// @brief Method <.ctor>b__2_11, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_11(::System::Object*  state) ;

/// @brief Method <.ctor>b__2_2, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_2(::System::Object*  state) ;

/// @brief Method <.ctor>b__2_3, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_3(::System::Object*  state) ;

/// @brief Method <.ctor>b__2_4, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_4(::System::Object*  state) ;

/// @brief Method <.ctor>b__2_5, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_5(::System::Object*  state) ;

/// @brief Method <.ctor>b__2_6, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_6(::System::Object*  state) ;

/// @brief Method <.ctor>b__2_7, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_7(::System::Object*  state) ;

/// @brief Method <.ctor>b__2_8, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_8(::System::Object*  state) ;

/// @brief Method <.ctor>b__2_9, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_9(::System::Object*  state) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Threading::Tasks::WhenAnyPromise_12_UniTask___c<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12>* getStaticF___9() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_0() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_1() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_10() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_11() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_2() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_3() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_4() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_5() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_6() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_7() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_8() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_9() ;

static inline void setStaticF___9(::Cysharp::Threading::Tasks::WhenAnyPromise_12_UniTask___c<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12>*  value) ;

static inline void setStaticF___9__2_0(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__2_1(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__2_10(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__2_11(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__2_2(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__2_3(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__2_4(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__2_5(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__2_6(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__2_7(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__2_8(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__2_9(::System::Action_1<::System::Object*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WhenAnyPromise_12_UniTask___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WhenAnyPromise_12_UniTask___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WhenAnyPromise_12_UniTask___c(WhenAnyPromise_12_UniTask___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WhenAnyPromise_12_UniTask___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WhenAnyPromise_12_UniTask___c(WhenAnyPromise_12_UniTask___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21771};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
// Dependencies Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<TResult>, System.Object, System.ValueTuple`5<T1, T2, T3, T4, T5>, System.ValueTuple`8<T1, T2, T3, T4, T5, T6, T7, TRest>
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`11<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11>
class CORDL_TYPE UniTask_WhenAnyPromise_11 : public ::System::Object {
public:
// Declarations
using __c = ::Cysharp::Threading::Tasks::WhenAnyPromise_11_UniTask___c<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11>;

/// @brief Field completedCount, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_completedCount, put=__cordl_internal_set_completedCount)) int32_t  completedCount;

/// @brief Field core, offset 0x18, size 0x28 
 __declspec(property(get=__cordl_internal_get_core, put=__cordl_internal_set_core)) ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_8<int32_t,T1,T2,T3,T4,T5,T6,::System::ValueTuple_5<T7,T8,T9,T10,T11>>>  core;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_8<int32_t,T1,T2,T3,T4,T5,T6,::System::ValueTuple_5<T7,T8,T9,T10,T11>>>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_8<int32_t,T1,T2,T3,T4,T5,T6,::System::ValueTuple_5<T7,T8,T9,T10,T11>>>*() noexcept;

/// @brief Method Cysharp.Threading.Tasks.IUniTaskSource.GetResult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Cysharp_Threading_Tasks_IUniTaskSource_GetResult(int16_t  token) ;

/// @brief Method GetResult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::ValueTuple_8<int32_t,T1,T2,T3,T4,T5,T6,::System::ValueTuple_5<T7,T8,T9,T10,T11>> GetResult(int16_t  token) ;

/// @brief Method GetStatus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(int16_t  token) ;

static inline ::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_11<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11>* New_ctor(::Cysharp::Threading::Tasks::UniTask_1<T1>  task1, ::Cysharp::Threading::Tasks::UniTask_1<T2>  task2, ::Cysharp::Threading::Tasks::UniTask_1<T3>  task3, ::Cysharp::Threading::Tasks::UniTask_1<T4>  task4, ::Cysharp::Threading::Tasks::UniTask_1<T5>  task5, ::Cysharp::Threading::Tasks::UniTask_1<T6>  task6, ::Cysharp::Threading::Tasks::UniTask_1<T7>  task7, ::Cysharp::Threading::Tasks::UniTask_1<T8>  task8, ::Cysharp::Threading::Tasks::UniTask_1<T9>  task9, ::Cysharp::Threading::Tasks::UniTask_1<T10>  task10, ::Cysharp::Threading::Tasks::UniTask_1<T11>  task11) ;

/// @brief Method OnCompleted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token) ;

/// @brief Method TryInvokeContinuationT1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT1(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_11<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T1>>  awaiter) ;

/// @brief Method TryInvokeContinuationT10, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT10(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_11<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T10>>  awaiter) ;

/// @brief Method TryInvokeContinuationT11, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT11(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_11<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T11>>  awaiter) ;

/// @brief Method TryInvokeContinuationT2, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT2(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_11<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T2>>  awaiter) ;

/// @brief Method TryInvokeContinuationT3, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT3(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_11<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T3>>  awaiter) ;

/// @brief Method TryInvokeContinuationT4, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT4(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_11<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T4>>  awaiter) ;

/// @brief Method TryInvokeContinuationT5, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT5(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_11<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T5>>  awaiter) ;

/// @brief Method TryInvokeContinuationT6, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT6(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_11<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T6>>  awaiter) ;

/// @brief Method TryInvokeContinuationT7, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT7(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_11<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T7>>  awaiter) ;

/// @brief Method TryInvokeContinuationT8, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT8(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_11<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T8>>  awaiter) ;

/// @brief Method TryInvokeContinuationT9, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT9(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_11<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T9>>  awaiter) ;

/// @brief Method UnsafeGetStatus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus() ;

constexpr int32_t const& __cordl_internal_get_completedCount() const;

constexpr int32_t& __cordl_internal_get_completedCount() ;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_8<int32_t,T1,T2,T3,T4,T5,T6,::System::ValueTuple_5<T7,T8,T9,T10,T11>>> const& __cordl_internal_get_core() const;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_8<int32_t,T1,T2,T3,T4,T5,T6,::System::ValueTuple_5<T7,T8,T9,T10,T11>>>& __cordl_internal_get_core() ;

constexpr void __cordl_internal_set_completedCount(int32_t  value) ;

constexpr void __cordl_internal_set_core(::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_8<int32_t,T1,T2,T3,T4,T5,T6,::System::ValueTuple_5<T7,T8,T9,T10,T11>>>  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::UniTask_1<T1>  task1, ::Cysharp::Threading::Tasks::UniTask_1<T2>  task2, ::Cysharp::Threading::Tasks::UniTask_1<T3>  task3, ::Cysharp::Threading::Tasks::UniTask_1<T4>  task4, ::Cysharp::Threading::Tasks::UniTask_1<T5>  task5, ::Cysharp::Threading::Tasks::UniTask_1<T6>  task6, ::Cysharp::Threading::Tasks::UniTask_1<T7>  task7, ::Cysharp::Threading::Tasks::UniTask_1<T8>  task8, ::Cysharp::Threading::Tasks::UniTask_1<T9>  task9, ::Cysharp::Threading::Tasks::UniTask_1<T10>  task10, ::Cysharp::Threading::Tasks::UniTask_1<T11>  task11) ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_8<int32_t,T1,T2,T3,T4,T5,T6,::System::ValueTuple_5<T7,T8,T9,T10,T11>>>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_8<int32_t,T1,T2,T3,T4,T5,T6,::System::ValueTuple_5<T7,T8,T9,T10,T11>>>* i___Cysharp__Threading__Tasks__IUniTaskSource_1___System__ValueTuple_8_int32_t_T1_T2_T3_T4_T5_T6___System__ValueTuple_5_T7_T8_T9_T10_T11___() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UniTask_WhenAnyPromise_11() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UniTask_WhenAnyPromise_11", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UniTask_WhenAnyPromise_11(UniTask_WhenAnyPromise_11 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UniTask_WhenAnyPromise_11", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UniTask_WhenAnyPromise_11(UniTask_WhenAnyPromise_11 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21770};

/// @brief Field completedCount, offset: 0x10, size: 0x4, def value: None
 int32_t  ___completedCount;

/// [TupleElementNames(new[] { null, "result1", "result2", "result3", "result4", "result5", "result6", "result7", "result8", "result9", "result10", "result11", null, null, null, null, null })]
/// @brief Field core, offset: 0x18, size: 0x28, def value: None
 ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_8<int32_t,T1,T2,T3,T4,T5,T6,::System::ValueTuple_5<T7,T8,T9,T10,T11>>>  ___core;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
// [CompilerGenerated]
// Dependencies System.Object
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`11/<>c<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11>
class CORDL_TYPE WhenAnyPromise_11_UniTask___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Cysharp::Threading::Tasks::WhenAnyPromise_11_UniTask___c<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11>*  __9;

/// @brief Field <>9__2_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_0, put=setStaticF___9__2_0)) ::System::Action_1<::System::Object*>*  __9__2_0;

/// @brief Field <>9__2_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_1, put=setStaticF___9__2_1)) ::System::Action_1<::System::Object*>*  __9__2_1;

/// @brief Field <>9__2_10, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_10, put=setStaticF___9__2_10)) ::System::Action_1<::System::Object*>*  __9__2_10;

/// @brief Field <>9__2_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_2, put=setStaticF___9__2_2)) ::System::Action_1<::System::Object*>*  __9__2_2;

/// @brief Field <>9__2_3, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_3, put=setStaticF___9__2_3)) ::System::Action_1<::System::Object*>*  __9__2_3;

/// @brief Field <>9__2_4, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_4, put=setStaticF___9__2_4)) ::System::Action_1<::System::Object*>*  __9__2_4;

/// @brief Field <>9__2_5, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_5, put=setStaticF___9__2_5)) ::System::Action_1<::System::Object*>*  __9__2_5;

/// @brief Field <>9__2_6, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_6, put=setStaticF___9__2_6)) ::System::Action_1<::System::Object*>*  __9__2_6;

/// @brief Field <>9__2_7, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_7, put=setStaticF___9__2_7)) ::System::Action_1<::System::Object*>*  __9__2_7;

/// @brief Field <>9__2_8, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_8, put=setStaticF___9__2_8)) ::System::Action_1<::System::Object*>*  __9__2_8;

/// @brief Field <>9__2_9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_9, put=setStaticF___9__2_9)) ::System::Action_1<::System::Object*>*  __9__2_9;

static inline ::Cysharp::Threading::Tasks::WhenAnyPromise_11_UniTask___c<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11>* New_ctor() ;

/// @brief Method <.ctor>b__2_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_0(::System::Object*  state) ;

/// @brief Method <.ctor>b__2_1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_1(::System::Object*  state) ;

/// @brief Method <.ctor>b__2_10, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_10(::System::Object*  state) ;

/// @brief Method <.ctor>b__2_2, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_2(::System::Object*  state) ;

/// @brief Method <.ctor>b__2_3, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_3(::System::Object*  state) ;

/// @brief Method <.ctor>b__2_4, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_4(::System::Object*  state) ;

/// @brief Method <.ctor>b__2_5, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_5(::System::Object*  state) ;

/// @brief Method <.ctor>b__2_6, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_6(::System::Object*  state) ;

/// @brief Method <.ctor>b__2_7, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_7(::System::Object*  state) ;

/// @brief Method <.ctor>b__2_8, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_8(::System::Object*  state) ;

/// @brief Method <.ctor>b__2_9, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_9(::System::Object*  state) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Threading::Tasks::WhenAnyPromise_11_UniTask___c<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11>* getStaticF___9() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_0() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_1() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_10() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_2() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_3() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_4() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_5() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_6() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_7() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_8() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_9() ;

static inline void setStaticF___9(::Cysharp::Threading::Tasks::WhenAnyPromise_11_UniTask___c<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11>*  value) ;

static inline void setStaticF___9__2_0(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__2_1(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__2_10(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__2_2(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__2_3(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__2_4(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__2_5(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__2_6(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__2_7(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__2_8(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__2_9(::System::Action_1<::System::Object*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WhenAnyPromise_11_UniTask___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WhenAnyPromise_11_UniTask___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WhenAnyPromise_11_UniTask___c(WhenAnyPromise_11_UniTask___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WhenAnyPromise_11_UniTask___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WhenAnyPromise_11_UniTask___c(WhenAnyPromise_11_UniTask___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21769};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
// Dependencies Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<TResult>, System.Object, System.ValueTuple`4<T1, T2, T3, T4>, System.ValueTuple`8<T1, T2, T3, T4, T5, T6, T7, TRest>
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`10<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10>
class CORDL_TYPE UniTask_WhenAnyPromise_10 : public ::System::Object {
public:
// Declarations
using __c = ::Cysharp::Threading::Tasks::WhenAnyPromise_10_UniTask___c<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10>;

/// @brief Field completedCount, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_completedCount, put=__cordl_internal_set_completedCount)) int32_t  completedCount;

/// @brief Field core, offset 0x18, size 0x28 
 __declspec(property(get=__cordl_internal_get_core, put=__cordl_internal_set_core)) ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_8<int32_t,T1,T2,T3,T4,T5,T6,::System::ValueTuple_4<T7,T8,T9,T10>>>  core;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_8<int32_t,T1,T2,T3,T4,T5,T6,::System::ValueTuple_4<T7,T8,T9,T10>>>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_8<int32_t,T1,T2,T3,T4,T5,T6,::System::ValueTuple_4<T7,T8,T9,T10>>>*() noexcept;

/// @brief Method Cysharp.Threading.Tasks.IUniTaskSource.GetResult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Cysharp_Threading_Tasks_IUniTaskSource_GetResult(int16_t  token) ;

/// @brief Method GetResult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::ValueTuple_8<int32_t,T1,T2,T3,T4,T5,T6,::System::ValueTuple_4<T7,T8,T9,T10>> GetResult(int16_t  token) ;

/// @brief Method GetStatus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(int16_t  token) ;

static inline ::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_10<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10>* New_ctor(::Cysharp::Threading::Tasks::UniTask_1<T1>  task1, ::Cysharp::Threading::Tasks::UniTask_1<T2>  task2, ::Cysharp::Threading::Tasks::UniTask_1<T3>  task3, ::Cysharp::Threading::Tasks::UniTask_1<T4>  task4, ::Cysharp::Threading::Tasks::UniTask_1<T5>  task5, ::Cysharp::Threading::Tasks::UniTask_1<T6>  task6, ::Cysharp::Threading::Tasks::UniTask_1<T7>  task7, ::Cysharp::Threading::Tasks::UniTask_1<T8>  task8, ::Cysharp::Threading::Tasks::UniTask_1<T9>  task9, ::Cysharp::Threading::Tasks::UniTask_1<T10>  task10) ;

/// @brief Method OnCompleted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token) ;

/// @brief Method TryInvokeContinuationT1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT1(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_10<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T1>>  awaiter) ;

/// @brief Method TryInvokeContinuationT10, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT10(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_10<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T10>>  awaiter) ;

/// @brief Method TryInvokeContinuationT2, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT2(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_10<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T2>>  awaiter) ;

/// @brief Method TryInvokeContinuationT3, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT3(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_10<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T3>>  awaiter) ;

/// @brief Method TryInvokeContinuationT4, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT4(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_10<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T4>>  awaiter) ;

/// @brief Method TryInvokeContinuationT5, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT5(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_10<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T5>>  awaiter) ;

/// @brief Method TryInvokeContinuationT6, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT6(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_10<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T6>>  awaiter) ;

/// @brief Method TryInvokeContinuationT7, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT7(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_10<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T7>>  awaiter) ;

/// @brief Method TryInvokeContinuationT8, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT8(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_10<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T8>>  awaiter) ;

/// @brief Method TryInvokeContinuationT9, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT9(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_10<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T9>>  awaiter) ;

/// @brief Method UnsafeGetStatus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus() ;

constexpr int32_t const& __cordl_internal_get_completedCount() const;

constexpr int32_t& __cordl_internal_get_completedCount() ;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_8<int32_t,T1,T2,T3,T4,T5,T6,::System::ValueTuple_4<T7,T8,T9,T10>>> const& __cordl_internal_get_core() const;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_8<int32_t,T1,T2,T3,T4,T5,T6,::System::ValueTuple_4<T7,T8,T9,T10>>>& __cordl_internal_get_core() ;

constexpr void __cordl_internal_set_completedCount(int32_t  value) ;

constexpr void __cordl_internal_set_core(::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_8<int32_t,T1,T2,T3,T4,T5,T6,::System::ValueTuple_4<T7,T8,T9,T10>>>  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::UniTask_1<T1>  task1, ::Cysharp::Threading::Tasks::UniTask_1<T2>  task2, ::Cysharp::Threading::Tasks::UniTask_1<T3>  task3, ::Cysharp::Threading::Tasks::UniTask_1<T4>  task4, ::Cysharp::Threading::Tasks::UniTask_1<T5>  task5, ::Cysharp::Threading::Tasks::UniTask_1<T6>  task6, ::Cysharp::Threading::Tasks::UniTask_1<T7>  task7, ::Cysharp::Threading::Tasks::UniTask_1<T8>  task8, ::Cysharp::Threading::Tasks::UniTask_1<T9>  task9, ::Cysharp::Threading::Tasks::UniTask_1<T10>  task10) ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_8<int32_t,T1,T2,T3,T4,T5,T6,::System::ValueTuple_4<T7,T8,T9,T10>>>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_8<int32_t,T1,T2,T3,T4,T5,T6,::System::ValueTuple_4<T7,T8,T9,T10>>>* i___Cysharp__Threading__Tasks__IUniTaskSource_1___System__ValueTuple_8_int32_t_T1_T2_T3_T4_T5_T6___System__ValueTuple_4_T7_T8_T9_T10___() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UniTask_WhenAnyPromise_10() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UniTask_WhenAnyPromise_10", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UniTask_WhenAnyPromise_10(UniTask_WhenAnyPromise_10 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UniTask_WhenAnyPromise_10", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UniTask_WhenAnyPromise_10(UniTask_WhenAnyPromise_10 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21768};

/// @brief Field completedCount, offset: 0x10, size: 0x4, def value: None
 int32_t  ___completedCount;

/// [TupleElementNames(new[] { null, "result1", "result2", "result3", "result4", "result5", "result6", "result7", "result8", "result9", "result10", null, null, null, null })]
/// @brief Field core, offset: 0x18, size: 0x28, def value: None
 ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_8<int32_t,T1,T2,T3,T4,T5,T6,::System::ValueTuple_4<T7,T8,T9,T10>>>  ___core;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
// [CompilerGenerated]
// Dependencies System.Object
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`10/<>c<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10>
class CORDL_TYPE WhenAnyPromise_10_UniTask___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Cysharp::Threading::Tasks::WhenAnyPromise_10_UniTask___c<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10>*  __9;

/// @brief Field <>9__2_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_0, put=setStaticF___9__2_0)) ::System::Action_1<::System::Object*>*  __9__2_0;

/// @brief Field <>9__2_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_1, put=setStaticF___9__2_1)) ::System::Action_1<::System::Object*>*  __9__2_1;

/// @brief Field <>9__2_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_2, put=setStaticF___9__2_2)) ::System::Action_1<::System::Object*>*  __9__2_2;

/// @brief Field <>9__2_3, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_3, put=setStaticF___9__2_3)) ::System::Action_1<::System::Object*>*  __9__2_3;

/// @brief Field <>9__2_4, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_4, put=setStaticF___9__2_4)) ::System::Action_1<::System::Object*>*  __9__2_4;

/// @brief Field <>9__2_5, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_5, put=setStaticF___9__2_5)) ::System::Action_1<::System::Object*>*  __9__2_5;

/// @brief Field <>9__2_6, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_6, put=setStaticF___9__2_6)) ::System::Action_1<::System::Object*>*  __9__2_6;

/// @brief Field <>9__2_7, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_7, put=setStaticF___9__2_7)) ::System::Action_1<::System::Object*>*  __9__2_7;

/// @brief Field <>9__2_8, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_8, put=setStaticF___9__2_8)) ::System::Action_1<::System::Object*>*  __9__2_8;

/// @brief Field <>9__2_9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_9, put=setStaticF___9__2_9)) ::System::Action_1<::System::Object*>*  __9__2_9;

static inline ::Cysharp::Threading::Tasks::WhenAnyPromise_10_UniTask___c<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10>* New_ctor() ;

/// @brief Method <.ctor>b__2_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_0(::System::Object*  state) ;

/// @brief Method <.ctor>b__2_1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_1(::System::Object*  state) ;

/// @brief Method <.ctor>b__2_2, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_2(::System::Object*  state) ;

/// @brief Method <.ctor>b__2_3, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_3(::System::Object*  state) ;

/// @brief Method <.ctor>b__2_4, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_4(::System::Object*  state) ;

/// @brief Method <.ctor>b__2_5, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_5(::System::Object*  state) ;

/// @brief Method <.ctor>b__2_6, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_6(::System::Object*  state) ;

/// @brief Method <.ctor>b__2_7, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_7(::System::Object*  state) ;

/// @brief Method <.ctor>b__2_8, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_8(::System::Object*  state) ;

/// @brief Method <.ctor>b__2_9, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_9(::System::Object*  state) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Threading::Tasks::WhenAnyPromise_10_UniTask___c<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10>* getStaticF___9() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_0() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_1() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_2() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_3() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_4() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_5() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_6() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_7() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_8() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_9() ;

static inline void setStaticF___9(::Cysharp::Threading::Tasks::WhenAnyPromise_10_UniTask___c<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10>*  value) ;

static inline void setStaticF___9__2_0(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__2_1(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__2_2(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__2_3(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__2_4(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__2_5(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__2_6(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__2_7(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__2_8(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__2_9(::System::Action_1<::System::Object*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WhenAnyPromise_10_UniTask___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WhenAnyPromise_10_UniTask___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WhenAnyPromise_10_UniTask___c(WhenAnyPromise_10_UniTask___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WhenAnyPromise_10_UniTask___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WhenAnyPromise_10_UniTask___c(WhenAnyPromise_10_UniTask___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21767};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
// Dependencies Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<TResult>, System.Object, System.ValueTuple`3<T1, T2, T3>, System.ValueTuple`8<T1, T2, T3, T4, T5, T6, T7, TRest>
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`9<T1,T2,T3,T4,T5,T6,T7,T8,T9>
class CORDL_TYPE UniTask_WhenAnyPromise_9 : public ::System::Object {
public:
// Declarations
using __c = ::Cysharp::Threading::Tasks::WhenAnyPromise_9_UniTask___c<T1, T2, T3, T4, T5, T6, T7, T8, T9>;

/// @brief Field completedCount, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_completedCount, put=__cordl_internal_set_completedCount)) int32_t  completedCount;

/// @brief Field core, offset 0x18, size 0x28 
 __declspec(property(get=__cordl_internal_get_core, put=__cordl_internal_set_core)) ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_8<int32_t,T1,T2,T3,T4,T5,T6,::System::ValueTuple_3<T7,T8,T9>>>  core;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_8<int32_t,T1,T2,T3,T4,T5,T6,::System::ValueTuple_3<T7,T8,T9>>>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_8<int32_t,T1,T2,T3,T4,T5,T6,::System::ValueTuple_3<T7,T8,T9>>>*() noexcept;

/// @brief Method Cysharp.Threading.Tasks.IUniTaskSource.GetResult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Cysharp_Threading_Tasks_IUniTaskSource_GetResult(int16_t  token) ;

/// @brief Method GetResult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::ValueTuple_8<int32_t,T1,T2,T3,T4,T5,T6,::System::ValueTuple_3<T7,T8,T9>> GetResult(int16_t  token) ;

/// @brief Method GetStatus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(int16_t  token) ;

static inline ::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_9<T1,T2,T3,T4,T5,T6,T7,T8,T9>* New_ctor(::Cysharp::Threading::Tasks::UniTask_1<T1>  task1, ::Cysharp::Threading::Tasks::UniTask_1<T2>  task2, ::Cysharp::Threading::Tasks::UniTask_1<T3>  task3, ::Cysharp::Threading::Tasks::UniTask_1<T4>  task4, ::Cysharp::Threading::Tasks::UniTask_1<T5>  task5, ::Cysharp::Threading::Tasks::UniTask_1<T6>  task6, ::Cysharp::Threading::Tasks::UniTask_1<T7>  task7, ::Cysharp::Threading::Tasks::UniTask_1<T8>  task8, ::Cysharp::Threading::Tasks::UniTask_1<T9>  task9) ;

/// @brief Method OnCompleted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token) ;

/// @brief Method TryInvokeContinuationT1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT1(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_9<T1,T2,T3,T4,T5,T6,T7,T8,T9>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T1>>  awaiter) ;

/// @brief Method TryInvokeContinuationT2, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT2(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_9<T1,T2,T3,T4,T5,T6,T7,T8,T9>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T2>>  awaiter) ;

/// @brief Method TryInvokeContinuationT3, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT3(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_9<T1,T2,T3,T4,T5,T6,T7,T8,T9>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T3>>  awaiter) ;

/// @brief Method TryInvokeContinuationT4, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT4(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_9<T1,T2,T3,T4,T5,T6,T7,T8,T9>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T4>>  awaiter) ;

/// @brief Method TryInvokeContinuationT5, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT5(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_9<T1,T2,T3,T4,T5,T6,T7,T8,T9>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T5>>  awaiter) ;

/// @brief Method TryInvokeContinuationT6, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT6(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_9<T1,T2,T3,T4,T5,T6,T7,T8,T9>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T6>>  awaiter) ;

/// @brief Method TryInvokeContinuationT7, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT7(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_9<T1,T2,T3,T4,T5,T6,T7,T8,T9>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T7>>  awaiter) ;

/// @brief Method TryInvokeContinuationT8, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT8(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_9<T1,T2,T3,T4,T5,T6,T7,T8,T9>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T8>>  awaiter) ;

/// @brief Method TryInvokeContinuationT9, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT9(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_9<T1,T2,T3,T4,T5,T6,T7,T8,T9>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T9>>  awaiter) ;

/// @brief Method UnsafeGetStatus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus() ;

constexpr int32_t const& __cordl_internal_get_completedCount() const;

constexpr int32_t& __cordl_internal_get_completedCount() ;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_8<int32_t,T1,T2,T3,T4,T5,T6,::System::ValueTuple_3<T7,T8,T9>>> const& __cordl_internal_get_core() const;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_8<int32_t,T1,T2,T3,T4,T5,T6,::System::ValueTuple_3<T7,T8,T9>>>& __cordl_internal_get_core() ;

constexpr void __cordl_internal_set_completedCount(int32_t  value) ;

constexpr void __cordl_internal_set_core(::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_8<int32_t,T1,T2,T3,T4,T5,T6,::System::ValueTuple_3<T7,T8,T9>>>  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::UniTask_1<T1>  task1, ::Cysharp::Threading::Tasks::UniTask_1<T2>  task2, ::Cysharp::Threading::Tasks::UniTask_1<T3>  task3, ::Cysharp::Threading::Tasks::UniTask_1<T4>  task4, ::Cysharp::Threading::Tasks::UniTask_1<T5>  task5, ::Cysharp::Threading::Tasks::UniTask_1<T6>  task6, ::Cysharp::Threading::Tasks::UniTask_1<T7>  task7, ::Cysharp::Threading::Tasks::UniTask_1<T8>  task8, ::Cysharp::Threading::Tasks::UniTask_1<T9>  task9) ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_8<int32_t,T1,T2,T3,T4,T5,T6,::System::ValueTuple_3<T7,T8,T9>>>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_8<int32_t,T1,T2,T3,T4,T5,T6,::System::ValueTuple_3<T7,T8,T9>>>* i___Cysharp__Threading__Tasks__IUniTaskSource_1___System__ValueTuple_8_int32_t_T1_T2_T3_T4_T5_T6___System__ValueTuple_3_T7_T8_T9___() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UniTask_WhenAnyPromise_9() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UniTask_WhenAnyPromise_9", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UniTask_WhenAnyPromise_9(UniTask_WhenAnyPromise_9 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UniTask_WhenAnyPromise_9", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UniTask_WhenAnyPromise_9(UniTask_WhenAnyPromise_9 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21766};

/// @brief Field completedCount, offset: 0x10, size: 0x4, def value: None
 int32_t  ___completedCount;

/// [TupleElementNames(new[] { null, "result1", "result2", "result3", "result4", "result5", "result6", "result7", "result8", "result9", null, null, null })]
/// @brief Field core, offset: 0x18, size: 0x28, def value: None
 ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_8<int32_t,T1,T2,T3,T4,T5,T6,::System::ValueTuple_3<T7,T8,T9>>>  ___core;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
// [CompilerGenerated]
// Dependencies System.Object
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`9/<>c<T1,T2,T3,T4,T5,T6,T7,T8,T9>
class CORDL_TYPE WhenAnyPromise_9_UniTask___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Cysharp::Threading::Tasks::WhenAnyPromise_9_UniTask___c<T1,T2,T3,T4,T5,T6,T7,T8,T9>*  __9;

/// @brief Field <>9__2_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_0, put=setStaticF___9__2_0)) ::System::Action_1<::System::Object*>*  __9__2_0;

/// @brief Field <>9__2_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_1, put=setStaticF___9__2_1)) ::System::Action_1<::System::Object*>*  __9__2_1;

/// @brief Field <>9__2_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_2, put=setStaticF___9__2_2)) ::System::Action_1<::System::Object*>*  __9__2_2;

/// @brief Field <>9__2_3, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_3, put=setStaticF___9__2_3)) ::System::Action_1<::System::Object*>*  __9__2_3;

/// @brief Field <>9__2_4, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_4, put=setStaticF___9__2_4)) ::System::Action_1<::System::Object*>*  __9__2_4;

/// @brief Field <>9__2_5, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_5, put=setStaticF___9__2_5)) ::System::Action_1<::System::Object*>*  __9__2_5;

/// @brief Field <>9__2_6, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_6, put=setStaticF___9__2_6)) ::System::Action_1<::System::Object*>*  __9__2_6;

/// @brief Field <>9__2_7, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_7, put=setStaticF___9__2_7)) ::System::Action_1<::System::Object*>*  __9__2_7;

/// @brief Field <>9__2_8, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_8, put=setStaticF___9__2_8)) ::System::Action_1<::System::Object*>*  __9__2_8;

static inline ::Cysharp::Threading::Tasks::WhenAnyPromise_9_UniTask___c<T1,T2,T3,T4,T5,T6,T7,T8,T9>* New_ctor() ;

/// @brief Method <.ctor>b__2_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_0(::System::Object*  state) ;

/// @brief Method <.ctor>b__2_1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_1(::System::Object*  state) ;

/// @brief Method <.ctor>b__2_2, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_2(::System::Object*  state) ;

/// @brief Method <.ctor>b__2_3, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_3(::System::Object*  state) ;

/// @brief Method <.ctor>b__2_4, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_4(::System::Object*  state) ;

/// @brief Method <.ctor>b__2_5, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_5(::System::Object*  state) ;

/// @brief Method <.ctor>b__2_6, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_6(::System::Object*  state) ;

/// @brief Method <.ctor>b__2_7, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_7(::System::Object*  state) ;

/// @brief Method <.ctor>b__2_8, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_8(::System::Object*  state) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Threading::Tasks::WhenAnyPromise_9_UniTask___c<T1,T2,T3,T4,T5,T6,T7,T8,T9>* getStaticF___9() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_0() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_1() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_2() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_3() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_4() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_5() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_6() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_7() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_8() ;

static inline void setStaticF___9(::Cysharp::Threading::Tasks::WhenAnyPromise_9_UniTask___c<T1,T2,T3,T4,T5,T6,T7,T8,T9>*  value) ;

static inline void setStaticF___9__2_0(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__2_1(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__2_2(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__2_3(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__2_4(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__2_5(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__2_6(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__2_7(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__2_8(::System::Action_1<::System::Object*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WhenAnyPromise_9_UniTask___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WhenAnyPromise_9_UniTask___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WhenAnyPromise_9_UniTask___c(WhenAnyPromise_9_UniTask___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WhenAnyPromise_9_UniTask___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WhenAnyPromise_9_UniTask___c(WhenAnyPromise_9_UniTask___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21765};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
// Dependencies Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<TResult>, System.Object, System.ValueTuple`2<T1, T2>, System.ValueTuple`8<T1, T2, T3, T4, T5, T6, T7, TRest>
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`8<T1,T2,T3,T4,T5,T6,T7,T8>
class CORDL_TYPE UniTask_WhenAnyPromise_8 : public ::System::Object {
public:
// Declarations
using __c = ::Cysharp::Threading::Tasks::WhenAnyPromise_8_UniTask___c<T1, T2, T3, T4, T5, T6, T7, T8>;

/// @brief Field completedCount, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_completedCount, put=__cordl_internal_set_completedCount)) int32_t  completedCount;

/// @brief Field core, offset 0x18, size 0x28 
 __declspec(property(get=__cordl_internal_get_core, put=__cordl_internal_set_core)) ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_8<int32_t,T1,T2,T3,T4,T5,T6,::System::ValueTuple_2<T7,T8>>>  core;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_8<int32_t,T1,T2,T3,T4,T5,T6,::System::ValueTuple_2<T7,T8>>>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_8<int32_t,T1,T2,T3,T4,T5,T6,::System::ValueTuple_2<T7,T8>>>*() noexcept;

/// @brief Method Cysharp.Threading.Tasks.IUniTaskSource.GetResult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Cysharp_Threading_Tasks_IUniTaskSource_GetResult(int16_t  token) ;

/// @brief Method GetResult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::ValueTuple_8<int32_t,T1,T2,T3,T4,T5,T6,::System::ValueTuple_2<T7,T8>> GetResult(int16_t  token) ;

/// @brief Method GetStatus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(int16_t  token) ;

static inline ::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_8<T1,T2,T3,T4,T5,T6,T7,T8>* New_ctor(::Cysharp::Threading::Tasks::UniTask_1<T1>  task1, ::Cysharp::Threading::Tasks::UniTask_1<T2>  task2, ::Cysharp::Threading::Tasks::UniTask_1<T3>  task3, ::Cysharp::Threading::Tasks::UniTask_1<T4>  task4, ::Cysharp::Threading::Tasks::UniTask_1<T5>  task5, ::Cysharp::Threading::Tasks::UniTask_1<T6>  task6, ::Cysharp::Threading::Tasks::UniTask_1<T7>  task7, ::Cysharp::Threading::Tasks::UniTask_1<T8>  task8) ;

/// @brief Method OnCompleted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token) ;

/// @brief Method TryInvokeContinuationT1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT1(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_8<T1,T2,T3,T4,T5,T6,T7,T8>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T1>>  awaiter) ;

/// @brief Method TryInvokeContinuationT2, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT2(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_8<T1,T2,T3,T4,T5,T6,T7,T8>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T2>>  awaiter) ;

/// @brief Method TryInvokeContinuationT3, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT3(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_8<T1,T2,T3,T4,T5,T6,T7,T8>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T3>>  awaiter) ;

/// @brief Method TryInvokeContinuationT4, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT4(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_8<T1,T2,T3,T4,T5,T6,T7,T8>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T4>>  awaiter) ;

/// @brief Method TryInvokeContinuationT5, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT5(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_8<T1,T2,T3,T4,T5,T6,T7,T8>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T5>>  awaiter) ;

/// @brief Method TryInvokeContinuationT6, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT6(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_8<T1,T2,T3,T4,T5,T6,T7,T8>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T6>>  awaiter) ;

/// @brief Method TryInvokeContinuationT7, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT7(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_8<T1,T2,T3,T4,T5,T6,T7,T8>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T7>>  awaiter) ;

/// @brief Method TryInvokeContinuationT8, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT8(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_8<T1,T2,T3,T4,T5,T6,T7,T8>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T8>>  awaiter) ;

/// @brief Method UnsafeGetStatus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus() ;

constexpr int32_t const& __cordl_internal_get_completedCount() const;

constexpr int32_t& __cordl_internal_get_completedCount() ;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_8<int32_t,T1,T2,T3,T4,T5,T6,::System::ValueTuple_2<T7,T8>>> const& __cordl_internal_get_core() const;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_8<int32_t,T1,T2,T3,T4,T5,T6,::System::ValueTuple_2<T7,T8>>>& __cordl_internal_get_core() ;

constexpr void __cordl_internal_set_completedCount(int32_t  value) ;

constexpr void __cordl_internal_set_core(::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_8<int32_t,T1,T2,T3,T4,T5,T6,::System::ValueTuple_2<T7,T8>>>  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::UniTask_1<T1>  task1, ::Cysharp::Threading::Tasks::UniTask_1<T2>  task2, ::Cysharp::Threading::Tasks::UniTask_1<T3>  task3, ::Cysharp::Threading::Tasks::UniTask_1<T4>  task4, ::Cysharp::Threading::Tasks::UniTask_1<T5>  task5, ::Cysharp::Threading::Tasks::UniTask_1<T6>  task6, ::Cysharp::Threading::Tasks::UniTask_1<T7>  task7, ::Cysharp::Threading::Tasks::UniTask_1<T8>  task8) ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_8<int32_t,T1,T2,T3,T4,T5,T6,::System::ValueTuple_2<T7,T8>>>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_8<int32_t,T1,T2,T3,T4,T5,T6,::System::ValueTuple_2<T7,T8>>>* i___Cysharp__Threading__Tasks__IUniTaskSource_1___System__ValueTuple_8_int32_t_T1_T2_T3_T4_T5_T6___System__ValueTuple_2_T7_T8___() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UniTask_WhenAnyPromise_8() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UniTask_WhenAnyPromise_8", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UniTask_WhenAnyPromise_8(UniTask_WhenAnyPromise_8 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UniTask_WhenAnyPromise_8", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UniTask_WhenAnyPromise_8(UniTask_WhenAnyPromise_8 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21764};

/// @brief Field completedCount, offset: 0x10, size: 0x4, def value: None
 int32_t  ___completedCount;

/// [TupleElementNames(new[] { null, "result1", "result2", "result3", "result4", "result5", "result6", "result7", "result8", null, null })]
/// @brief Field core, offset: 0x18, size: 0x28, def value: None
 ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_8<int32_t,T1,T2,T3,T4,T5,T6,::System::ValueTuple_2<T7,T8>>>  ___core;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
// [CompilerGenerated]
// Dependencies System.Object
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`8/<>c<T1,T2,T3,T4,T5,T6,T7,T8>
class CORDL_TYPE WhenAnyPromise_8_UniTask___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Cysharp::Threading::Tasks::WhenAnyPromise_8_UniTask___c<T1,T2,T3,T4,T5,T6,T7,T8>*  __9;

/// @brief Field <>9__2_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_0, put=setStaticF___9__2_0)) ::System::Action_1<::System::Object*>*  __9__2_0;

/// @brief Field <>9__2_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_1, put=setStaticF___9__2_1)) ::System::Action_1<::System::Object*>*  __9__2_1;

/// @brief Field <>9__2_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_2, put=setStaticF___9__2_2)) ::System::Action_1<::System::Object*>*  __9__2_2;

/// @brief Field <>9__2_3, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_3, put=setStaticF___9__2_3)) ::System::Action_1<::System::Object*>*  __9__2_3;

/// @brief Field <>9__2_4, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_4, put=setStaticF___9__2_4)) ::System::Action_1<::System::Object*>*  __9__2_4;

/// @brief Field <>9__2_5, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_5, put=setStaticF___9__2_5)) ::System::Action_1<::System::Object*>*  __9__2_5;

/// @brief Field <>9__2_6, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_6, put=setStaticF___9__2_6)) ::System::Action_1<::System::Object*>*  __9__2_6;

/// @brief Field <>9__2_7, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_7, put=setStaticF___9__2_7)) ::System::Action_1<::System::Object*>*  __9__2_7;

static inline ::Cysharp::Threading::Tasks::WhenAnyPromise_8_UniTask___c<T1,T2,T3,T4,T5,T6,T7,T8>* New_ctor() ;

/// @brief Method <.ctor>b__2_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_0(::System::Object*  state) ;

/// @brief Method <.ctor>b__2_1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_1(::System::Object*  state) ;

/// @brief Method <.ctor>b__2_2, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_2(::System::Object*  state) ;

/// @brief Method <.ctor>b__2_3, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_3(::System::Object*  state) ;

/// @brief Method <.ctor>b__2_4, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_4(::System::Object*  state) ;

/// @brief Method <.ctor>b__2_5, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_5(::System::Object*  state) ;

/// @brief Method <.ctor>b__2_6, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_6(::System::Object*  state) ;

/// @brief Method <.ctor>b__2_7, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_7(::System::Object*  state) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Threading::Tasks::WhenAnyPromise_8_UniTask___c<T1,T2,T3,T4,T5,T6,T7,T8>* getStaticF___9() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_0() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_1() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_2() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_3() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_4() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_5() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_6() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_7() ;

static inline void setStaticF___9(::Cysharp::Threading::Tasks::WhenAnyPromise_8_UniTask___c<T1,T2,T3,T4,T5,T6,T7,T8>*  value) ;

static inline void setStaticF___9__2_0(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__2_1(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__2_2(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__2_3(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__2_4(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__2_5(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__2_6(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__2_7(::System::Action_1<::System::Object*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WhenAnyPromise_8_UniTask___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WhenAnyPromise_8_UniTask___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WhenAnyPromise_8_UniTask___c(WhenAnyPromise_8_UniTask___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WhenAnyPromise_8_UniTask___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WhenAnyPromise_8_UniTask___c(WhenAnyPromise_8_UniTask___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21763};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
// Dependencies Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<TResult>, System.Object, System.ValueTuple`1<T1>, System.ValueTuple`8<T1, T2, T3, T4, T5, T6, T7, TRest>
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`7<T1,T2,T3,T4,T5,T6,T7>
class CORDL_TYPE UniTask_WhenAnyPromise_7 : public ::System::Object {
public:
// Declarations
using __c = ::Cysharp::Threading::Tasks::WhenAnyPromise_7_UniTask___c<T1, T2, T3, T4, T5, T6, T7>;

/// @brief Field completedCount, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_completedCount, put=__cordl_internal_set_completedCount)) int32_t  completedCount;

/// @brief Field core, offset 0x18, size 0x28 
 __declspec(property(get=__cordl_internal_get_core, put=__cordl_internal_set_core)) ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_8<int32_t,T1,T2,T3,T4,T5,T6,::System::ValueTuple_1<T7>>>  core;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_8<int32_t,T1,T2,T3,T4,T5,T6,::System::ValueTuple_1<T7>>>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_8<int32_t,T1,T2,T3,T4,T5,T6,::System::ValueTuple_1<T7>>>*() noexcept;

/// @brief Method Cysharp.Threading.Tasks.IUniTaskSource.GetResult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Cysharp_Threading_Tasks_IUniTaskSource_GetResult(int16_t  token) ;

/// @brief Method GetResult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::ValueTuple_8<int32_t,T1,T2,T3,T4,T5,T6,::System::ValueTuple_1<T7>> GetResult(int16_t  token) ;

/// @brief Method GetStatus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(int16_t  token) ;

static inline ::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_7<T1,T2,T3,T4,T5,T6,T7>* New_ctor(::Cysharp::Threading::Tasks::UniTask_1<T1>  task1, ::Cysharp::Threading::Tasks::UniTask_1<T2>  task2, ::Cysharp::Threading::Tasks::UniTask_1<T3>  task3, ::Cysharp::Threading::Tasks::UniTask_1<T4>  task4, ::Cysharp::Threading::Tasks::UniTask_1<T5>  task5, ::Cysharp::Threading::Tasks::UniTask_1<T6>  task6, ::Cysharp::Threading::Tasks::UniTask_1<T7>  task7) ;

/// @brief Method OnCompleted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token) ;

/// @brief Method TryInvokeContinuationT1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT1(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_7<T1,T2,T3,T4,T5,T6,T7>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T1>>  awaiter) ;

/// @brief Method TryInvokeContinuationT2, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT2(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_7<T1,T2,T3,T4,T5,T6,T7>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T2>>  awaiter) ;

/// @brief Method TryInvokeContinuationT3, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT3(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_7<T1,T2,T3,T4,T5,T6,T7>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T3>>  awaiter) ;

/// @brief Method TryInvokeContinuationT4, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT4(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_7<T1,T2,T3,T4,T5,T6,T7>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T4>>  awaiter) ;

/// @brief Method TryInvokeContinuationT5, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT5(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_7<T1,T2,T3,T4,T5,T6,T7>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T5>>  awaiter) ;

/// @brief Method TryInvokeContinuationT6, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT6(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_7<T1,T2,T3,T4,T5,T6,T7>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T6>>  awaiter) ;

/// @brief Method TryInvokeContinuationT7, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT7(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_7<T1,T2,T3,T4,T5,T6,T7>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T7>>  awaiter) ;

/// @brief Method UnsafeGetStatus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus() ;

constexpr int32_t const& __cordl_internal_get_completedCount() const;

constexpr int32_t& __cordl_internal_get_completedCount() ;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_8<int32_t,T1,T2,T3,T4,T5,T6,::System::ValueTuple_1<T7>>> const& __cordl_internal_get_core() const;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_8<int32_t,T1,T2,T3,T4,T5,T6,::System::ValueTuple_1<T7>>>& __cordl_internal_get_core() ;

constexpr void __cordl_internal_set_completedCount(int32_t  value) ;

constexpr void __cordl_internal_set_core(::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_8<int32_t,T1,T2,T3,T4,T5,T6,::System::ValueTuple_1<T7>>>  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::UniTask_1<T1>  task1, ::Cysharp::Threading::Tasks::UniTask_1<T2>  task2, ::Cysharp::Threading::Tasks::UniTask_1<T3>  task3, ::Cysharp::Threading::Tasks::UniTask_1<T4>  task4, ::Cysharp::Threading::Tasks::UniTask_1<T5>  task5, ::Cysharp::Threading::Tasks::UniTask_1<T6>  task6, ::Cysharp::Threading::Tasks::UniTask_1<T7>  task7) ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_8<int32_t,T1,T2,T3,T4,T5,T6,::System::ValueTuple_1<T7>>>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_8<int32_t,T1,T2,T3,T4,T5,T6,::System::ValueTuple_1<T7>>>* i___Cysharp__Threading__Tasks__IUniTaskSource_1___System__ValueTuple_8_int32_t_T1_T2_T3_T4_T5_T6___System__ValueTuple_1_T7___() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UniTask_WhenAnyPromise_7() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UniTask_WhenAnyPromise_7", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UniTask_WhenAnyPromise_7(UniTask_WhenAnyPromise_7 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UniTask_WhenAnyPromise_7", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UniTask_WhenAnyPromise_7(UniTask_WhenAnyPromise_7 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21762};

/// @brief Field completedCount, offset: 0x10, size: 0x4, def value: None
 int32_t  ___completedCount;

/// [TupleElementNames(new[] { null, "result1", "result2", "result3", "result4", "result5", "result6", "result7", null })]
/// @brief Field core, offset: 0x18, size: 0x28, def value: None
 ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_8<int32_t,T1,T2,T3,T4,T5,T6,::System::ValueTuple_1<T7>>>  ___core;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
// [CompilerGenerated]
// Dependencies System.Object
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`7/<>c<T1,T2,T3,T4,T5,T6,T7>
class CORDL_TYPE WhenAnyPromise_7_UniTask___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Cysharp::Threading::Tasks::WhenAnyPromise_7_UniTask___c<T1,T2,T3,T4,T5,T6,T7>*  __9;

/// @brief Field <>9__2_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_0, put=setStaticF___9__2_0)) ::System::Action_1<::System::Object*>*  __9__2_0;

/// @brief Field <>9__2_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_1, put=setStaticF___9__2_1)) ::System::Action_1<::System::Object*>*  __9__2_1;

/// @brief Field <>9__2_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_2, put=setStaticF___9__2_2)) ::System::Action_1<::System::Object*>*  __9__2_2;

/// @brief Field <>9__2_3, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_3, put=setStaticF___9__2_3)) ::System::Action_1<::System::Object*>*  __9__2_3;

/// @brief Field <>9__2_4, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_4, put=setStaticF___9__2_4)) ::System::Action_1<::System::Object*>*  __9__2_4;

/// @brief Field <>9__2_5, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_5, put=setStaticF___9__2_5)) ::System::Action_1<::System::Object*>*  __9__2_5;

/// @brief Field <>9__2_6, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_6, put=setStaticF___9__2_6)) ::System::Action_1<::System::Object*>*  __9__2_6;

static inline ::Cysharp::Threading::Tasks::WhenAnyPromise_7_UniTask___c<T1,T2,T3,T4,T5,T6,T7>* New_ctor() ;

/// @brief Method <.ctor>b__2_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_0(::System::Object*  state) ;

/// @brief Method <.ctor>b__2_1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_1(::System::Object*  state) ;

/// @brief Method <.ctor>b__2_2, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_2(::System::Object*  state) ;

/// @brief Method <.ctor>b__2_3, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_3(::System::Object*  state) ;

/// @brief Method <.ctor>b__2_4, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_4(::System::Object*  state) ;

/// @brief Method <.ctor>b__2_5, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_5(::System::Object*  state) ;

/// @brief Method <.ctor>b__2_6, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_6(::System::Object*  state) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Threading::Tasks::WhenAnyPromise_7_UniTask___c<T1,T2,T3,T4,T5,T6,T7>* getStaticF___9() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_0() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_1() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_2() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_3() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_4() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_5() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_6() ;

static inline void setStaticF___9(::Cysharp::Threading::Tasks::WhenAnyPromise_7_UniTask___c<T1,T2,T3,T4,T5,T6,T7>*  value) ;

static inline void setStaticF___9__2_0(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__2_1(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__2_2(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__2_3(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__2_4(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__2_5(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__2_6(::System::Action_1<::System::Object*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WhenAnyPromise_7_UniTask___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WhenAnyPromise_7_UniTask___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WhenAnyPromise_7_UniTask___c(WhenAnyPromise_7_UniTask___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WhenAnyPromise_7_UniTask___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WhenAnyPromise_7_UniTask___c(WhenAnyPromise_7_UniTask___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21761};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
// Dependencies Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<TResult>, System.Object, System.ValueTuple`7<T1, T2, T3, T4, T5, T6, T7>
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`6<T1,T2,T3,T4,T5,T6>
class CORDL_TYPE UniTask_WhenAnyPromise_6 : public ::System::Object {
public:
// Declarations
using __c = ::Cysharp::Threading::Tasks::WhenAnyPromise_6_UniTask___c<T1, T2, T3, T4, T5, T6>;

/// @brief Field completedCount, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_completedCount, put=__cordl_internal_set_completedCount)) int32_t  completedCount;

/// @brief Field core, offset 0x18, size 0x28 
 __declspec(property(get=__cordl_internal_get_core, put=__cordl_internal_set_core)) ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_7<int32_t,T1,T2,T3,T4,T5,T6>>  core;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_7<int32_t,T1,T2,T3,T4,T5,T6>>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_7<int32_t,T1,T2,T3,T4,T5,T6>>*() noexcept;

/// @brief Method Cysharp.Threading.Tasks.IUniTaskSource.GetResult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Cysharp_Threading_Tasks_IUniTaskSource_GetResult(int16_t  token) ;

/// @brief Method GetResult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::ValueTuple_7<int32_t,T1,T2,T3,T4,T5,T6> GetResult(int16_t  token) ;

/// @brief Method GetStatus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(int16_t  token) ;

static inline ::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_6<T1,T2,T3,T4,T5,T6>* New_ctor(::Cysharp::Threading::Tasks::UniTask_1<T1>  task1, ::Cysharp::Threading::Tasks::UniTask_1<T2>  task2, ::Cysharp::Threading::Tasks::UniTask_1<T3>  task3, ::Cysharp::Threading::Tasks::UniTask_1<T4>  task4, ::Cysharp::Threading::Tasks::UniTask_1<T5>  task5, ::Cysharp::Threading::Tasks::UniTask_1<T6>  task6) ;

/// @brief Method OnCompleted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token) ;

/// @brief Method TryInvokeContinuationT1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT1(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_6<T1,T2,T3,T4,T5,T6>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T1>>  awaiter) ;

/// @brief Method TryInvokeContinuationT2, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT2(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_6<T1,T2,T3,T4,T5,T6>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T2>>  awaiter) ;

/// @brief Method TryInvokeContinuationT3, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT3(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_6<T1,T2,T3,T4,T5,T6>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T3>>  awaiter) ;

/// @brief Method TryInvokeContinuationT4, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT4(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_6<T1,T2,T3,T4,T5,T6>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T4>>  awaiter) ;

/// @brief Method TryInvokeContinuationT5, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT5(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_6<T1,T2,T3,T4,T5,T6>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T5>>  awaiter) ;

/// @brief Method TryInvokeContinuationT6, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT6(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_6<T1,T2,T3,T4,T5,T6>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T6>>  awaiter) ;

/// @brief Method UnsafeGetStatus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus() ;

constexpr int32_t const& __cordl_internal_get_completedCount() const;

constexpr int32_t& __cordl_internal_get_completedCount() ;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_7<int32_t,T1,T2,T3,T4,T5,T6>> const& __cordl_internal_get_core() const;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_7<int32_t,T1,T2,T3,T4,T5,T6>>& __cordl_internal_get_core() ;

constexpr void __cordl_internal_set_completedCount(int32_t  value) ;

constexpr void __cordl_internal_set_core(::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_7<int32_t,T1,T2,T3,T4,T5,T6>>  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::UniTask_1<T1>  task1, ::Cysharp::Threading::Tasks::UniTask_1<T2>  task2, ::Cysharp::Threading::Tasks::UniTask_1<T3>  task3, ::Cysharp::Threading::Tasks::UniTask_1<T4>  task4, ::Cysharp::Threading::Tasks::UniTask_1<T5>  task5, ::Cysharp::Threading::Tasks::UniTask_1<T6>  task6) ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_7<int32_t,T1,T2,T3,T4,T5,T6>>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_7<int32_t,T1,T2,T3,T4,T5,T6>>* i___Cysharp__Threading__Tasks__IUniTaskSource_1___System__ValueTuple_7_int32_t_T1_T2_T3_T4_T5_T6__() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UniTask_WhenAnyPromise_6() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UniTask_WhenAnyPromise_6", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UniTask_WhenAnyPromise_6(UniTask_WhenAnyPromise_6 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UniTask_WhenAnyPromise_6", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UniTask_WhenAnyPromise_6(UniTask_WhenAnyPromise_6 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21760};

/// @brief Field completedCount, offset: 0x10, size: 0x4, def value: None
 int32_t  ___completedCount;

/// [TupleElementNames(new[] { null, "result1", "result2", "result3", "result4", "result5", "result6" })]
/// @brief Field core, offset: 0x18, size: 0x28, def value: None
 ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_7<int32_t,T1,T2,T3,T4,T5,T6>>  ___core;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
// [CompilerGenerated]
// Dependencies System.Object
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`6/<>c<T1,T2,T3,T4,T5,T6>
class CORDL_TYPE WhenAnyPromise_6_UniTask___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Cysharp::Threading::Tasks::WhenAnyPromise_6_UniTask___c<T1,T2,T3,T4,T5,T6>*  __9;

/// @brief Field <>9__2_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_0, put=setStaticF___9__2_0)) ::System::Action_1<::System::Object*>*  __9__2_0;

/// @brief Field <>9__2_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_1, put=setStaticF___9__2_1)) ::System::Action_1<::System::Object*>*  __9__2_1;

/// @brief Field <>9__2_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_2, put=setStaticF___9__2_2)) ::System::Action_1<::System::Object*>*  __9__2_2;

/// @brief Field <>9__2_3, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_3, put=setStaticF___9__2_3)) ::System::Action_1<::System::Object*>*  __9__2_3;

/// @brief Field <>9__2_4, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_4, put=setStaticF___9__2_4)) ::System::Action_1<::System::Object*>*  __9__2_4;

/// @brief Field <>9__2_5, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_5, put=setStaticF___9__2_5)) ::System::Action_1<::System::Object*>*  __9__2_5;

static inline ::Cysharp::Threading::Tasks::WhenAnyPromise_6_UniTask___c<T1,T2,T3,T4,T5,T6>* New_ctor() ;

/// @brief Method <.ctor>b__2_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_0(::System::Object*  state) ;

/// @brief Method <.ctor>b__2_1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_1(::System::Object*  state) ;

/// @brief Method <.ctor>b__2_2, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_2(::System::Object*  state) ;

/// @brief Method <.ctor>b__2_3, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_3(::System::Object*  state) ;

/// @brief Method <.ctor>b__2_4, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_4(::System::Object*  state) ;

/// @brief Method <.ctor>b__2_5, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_5(::System::Object*  state) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Threading::Tasks::WhenAnyPromise_6_UniTask___c<T1,T2,T3,T4,T5,T6>* getStaticF___9() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_0() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_1() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_2() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_3() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_4() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_5() ;

static inline void setStaticF___9(::Cysharp::Threading::Tasks::WhenAnyPromise_6_UniTask___c<T1,T2,T3,T4,T5,T6>*  value) ;

static inline void setStaticF___9__2_0(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__2_1(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__2_2(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__2_3(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__2_4(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__2_5(::System::Action_1<::System::Object*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WhenAnyPromise_6_UniTask___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WhenAnyPromise_6_UniTask___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WhenAnyPromise_6_UniTask___c(WhenAnyPromise_6_UniTask___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WhenAnyPromise_6_UniTask___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WhenAnyPromise_6_UniTask___c(WhenAnyPromise_6_UniTask___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21759};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
// Dependencies Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<TResult>, System.Object, System.ValueTuple`6<T1, T2, T3, T4, T5, T6>
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T1,typename T2,typename T3,typename T4,typename T5>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`5<T1,T2,T3,T4,T5>
class CORDL_TYPE UniTask_WhenAnyPromise_5 : public ::System::Object {
public:
// Declarations
using __c = ::Cysharp::Threading::Tasks::WhenAnyPromise_5_UniTask___c<T1, T2, T3, T4, T5>;

/// @brief Field completedCount, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_completedCount, put=__cordl_internal_set_completedCount)) int32_t  completedCount;

/// @brief Field core, offset 0x18, size 0x28 
 __declspec(property(get=__cordl_internal_get_core, put=__cordl_internal_set_core)) ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_6<int32_t,T1,T2,T3,T4,T5>>  core;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_6<int32_t,T1,T2,T3,T4,T5>>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_6<int32_t,T1,T2,T3,T4,T5>>*() noexcept;

/// @brief Method Cysharp.Threading.Tasks.IUniTaskSource.GetResult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Cysharp_Threading_Tasks_IUniTaskSource_GetResult(int16_t  token) ;

/// @brief Method GetResult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::ValueTuple_6<int32_t,T1,T2,T3,T4,T5> GetResult(int16_t  token) ;

/// @brief Method GetStatus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(int16_t  token) ;

static inline ::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_5<T1,T2,T3,T4,T5>* New_ctor(::Cysharp::Threading::Tasks::UniTask_1<T1>  task1, ::Cysharp::Threading::Tasks::UniTask_1<T2>  task2, ::Cysharp::Threading::Tasks::UniTask_1<T3>  task3, ::Cysharp::Threading::Tasks::UniTask_1<T4>  task4, ::Cysharp::Threading::Tasks::UniTask_1<T5>  task5) ;

/// @brief Method OnCompleted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token) ;

/// @brief Method TryInvokeContinuationT1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT1(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_5<T1,T2,T3,T4,T5>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T1>>  awaiter) ;

/// @brief Method TryInvokeContinuationT2, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT2(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_5<T1,T2,T3,T4,T5>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T2>>  awaiter) ;

/// @brief Method TryInvokeContinuationT3, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT3(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_5<T1,T2,T3,T4,T5>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T3>>  awaiter) ;

/// @brief Method TryInvokeContinuationT4, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT4(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_5<T1,T2,T3,T4,T5>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T4>>  awaiter) ;

/// @brief Method TryInvokeContinuationT5, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT5(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_5<T1,T2,T3,T4,T5>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T5>>  awaiter) ;

/// @brief Method UnsafeGetStatus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus() ;

constexpr int32_t const& __cordl_internal_get_completedCount() const;

constexpr int32_t& __cordl_internal_get_completedCount() ;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_6<int32_t,T1,T2,T3,T4,T5>> const& __cordl_internal_get_core() const;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_6<int32_t,T1,T2,T3,T4,T5>>& __cordl_internal_get_core() ;

constexpr void __cordl_internal_set_completedCount(int32_t  value) ;

constexpr void __cordl_internal_set_core(::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_6<int32_t,T1,T2,T3,T4,T5>>  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::UniTask_1<T1>  task1, ::Cysharp::Threading::Tasks::UniTask_1<T2>  task2, ::Cysharp::Threading::Tasks::UniTask_1<T3>  task3, ::Cysharp::Threading::Tasks::UniTask_1<T4>  task4, ::Cysharp::Threading::Tasks::UniTask_1<T5>  task5) ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_6<int32_t,T1,T2,T3,T4,T5>>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_6<int32_t,T1,T2,T3,T4,T5>>* i___Cysharp__Threading__Tasks__IUniTaskSource_1___System__ValueTuple_6_int32_t_T1_T2_T3_T4_T5__() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UniTask_WhenAnyPromise_5() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UniTask_WhenAnyPromise_5", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UniTask_WhenAnyPromise_5(UniTask_WhenAnyPromise_5 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UniTask_WhenAnyPromise_5", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UniTask_WhenAnyPromise_5(UniTask_WhenAnyPromise_5 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21758};

/// @brief Field completedCount, offset: 0x10, size: 0x4, def value: None
 int32_t  ___completedCount;

/// [TupleElementNames(new[] { null, "result1", "result2", "result3", "result4", "result5" })]
/// @brief Field core, offset: 0x18, size: 0x28, def value: None
 ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_6<int32_t,T1,T2,T3,T4,T5>>  ___core;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
// [CompilerGenerated]
// Dependencies System.Object
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T1,typename T2,typename T3,typename T4,typename T5>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`5/<>c<T1,T2,T3,T4,T5>
class CORDL_TYPE WhenAnyPromise_5_UniTask___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Cysharp::Threading::Tasks::WhenAnyPromise_5_UniTask___c<T1,T2,T3,T4,T5>*  __9;

/// @brief Field <>9__2_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_0, put=setStaticF___9__2_0)) ::System::Action_1<::System::Object*>*  __9__2_0;

/// @brief Field <>9__2_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_1, put=setStaticF___9__2_1)) ::System::Action_1<::System::Object*>*  __9__2_1;

/// @brief Field <>9__2_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_2, put=setStaticF___9__2_2)) ::System::Action_1<::System::Object*>*  __9__2_2;

/// @brief Field <>9__2_3, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_3, put=setStaticF___9__2_3)) ::System::Action_1<::System::Object*>*  __9__2_3;

/// @brief Field <>9__2_4, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_4, put=setStaticF___9__2_4)) ::System::Action_1<::System::Object*>*  __9__2_4;

static inline ::Cysharp::Threading::Tasks::WhenAnyPromise_5_UniTask___c<T1,T2,T3,T4,T5>* New_ctor() ;

/// @brief Method <.ctor>b__2_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_0(::System::Object*  state) ;

/// @brief Method <.ctor>b__2_1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_1(::System::Object*  state) ;

/// @brief Method <.ctor>b__2_2, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_2(::System::Object*  state) ;

/// @brief Method <.ctor>b__2_3, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_3(::System::Object*  state) ;

/// @brief Method <.ctor>b__2_4, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_4(::System::Object*  state) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Threading::Tasks::WhenAnyPromise_5_UniTask___c<T1,T2,T3,T4,T5>* getStaticF___9() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_0() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_1() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_2() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_3() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_4() ;

static inline void setStaticF___9(::Cysharp::Threading::Tasks::WhenAnyPromise_5_UniTask___c<T1,T2,T3,T4,T5>*  value) ;

static inline void setStaticF___9__2_0(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__2_1(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__2_2(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__2_3(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__2_4(::System::Action_1<::System::Object*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WhenAnyPromise_5_UniTask___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WhenAnyPromise_5_UniTask___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WhenAnyPromise_5_UniTask___c(WhenAnyPromise_5_UniTask___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WhenAnyPromise_5_UniTask___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WhenAnyPromise_5_UniTask___c(WhenAnyPromise_5_UniTask___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21757};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
// Dependencies Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<TResult>, System.Object, System.ValueTuple`5<T1, T2, T3, T4, T5>
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T1,typename T2,typename T3,typename T4>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`4<T1,T2,T3,T4>
class CORDL_TYPE UniTask_WhenAnyPromise_4 : public ::System::Object {
public:
// Declarations
using __c = ::Cysharp::Threading::Tasks::WhenAnyPromise_4_UniTask___c<T1, T2, T3, T4>;

/// @brief Field completedCount, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_completedCount, put=__cordl_internal_set_completedCount)) int32_t  completedCount;

/// @brief Field core, offset 0x18, size 0x28 
 __declspec(property(get=__cordl_internal_get_core, put=__cordl_internal_set_core)) ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_5<int32_t,T1,T2,T3,T4>>  core;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_5<int32_t,T1,T2,T3,T4>>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_5<int32_t,T1,T2,T3,T4>>*() noexcept;

/// @brief Method Cysharp.Threading.Tasks.IUniTaskSource.GetResult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Cysharp_Threading_Tasks_IUniTaskSource_GetResult(int16_t  token) ;

/// @brief Method GetResult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::ValueTuple_5<int32_t,T1,T2,T3,T4> GetResult(int16_t  token) ;

/// @brief Method GetStatus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(int16_t  token) ;

static inline ::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_4<T1,T2,T3,T4>* New_ctor(::Cysharp::Threading::Tasks::UniTask_1<T1>  task1, ::Cysharp::Threading::Tasks::UniTask_1<T2>  task2, ::Cysharp::Threading::Tasks::UniTask_1<T3>  task3, ::Cysharp::Threading::Tasks::UniTask_1<T4>  task4) ;

/// @brief Method OnCompleted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token) ;

/// @brief Method TryInvokeContinuationT1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT1(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_4<T1,T2,T3,T4>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T1>>  awaiter) ;

/// @brief Method TryInvokeContinuationT2, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT2(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_4<T1,T2,T3,T4>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T2>>  awaiter) ;

/// @brief Method TryInvokeContinuationT3, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT3(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_4<T1,T2,T3,T4>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T3>>  awaiter) ;

/// @brief Method TryInvokeContinuationT4, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT4(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_4<T1,T2,T3,T4>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T4>>  awaiter) ;

/// @brief Method UnsafeGetStatus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus() ;

constexpr int32_t const& __cordl_internal_get_completedCount() const;

constexpr int32_t& __cordl_internal_get_completedCount() ;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_5<int32_t,T1,T2,T3,T4>> const& __cordl_internal_get_core() const;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_5<int32_t,T1,T2,T3,T4>>& __cordl_internal_get_core() ;

constexpr void __cordl_internal_set_completedCount(int32_t  value) ;

constexpr void __cordl_internal_set_core(::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_5<int32_t,T1,T2,T3,T4>>  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::UniTask_1<T1>  task1, ::Cysharp::Threading::Tasks::UniTask_1<T2>  task2, ::Cysharp::Threading::Tasks::UniTask_1<T3>  task3, ::Cysharp::Threading::Tasks::UniTask_1<T4>  task4) ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_5<int32_t,T1,T2,T3,T4>>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_5<int32_t,T1,T2,T3,T4>>* i___Cysharp__Threading__Tasks__IUniTaskSource_1___System__ValueTuple_5_int32_t_T1_T2_T3_T4__() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UniTask_WhenAnyPromise_4() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UniTask_WhenAnyPromise_4", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UniTask_WhenAnyPromise_4(UniTask_WhenAnyPromise_4 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UniTask_WhenAnyPromise_4", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UniTask_WhenAnyPromise_4(UniTask_WhenAnyPromise_4 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21756};

/// @brief Field completedCount, offset: 0x10, size: 0x4, def value: None
 int32_t  ___completedCount;

/// [TupleElementNames(new[] { null, "result1", "result2", "result3", "result4" })]
/// @brief Field core, offset: 0x18, size: 0x28, def value: None
 ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_5<int32_t,T1,T2,T3,T4>>  ___core;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
// [CompilerGenerated]
// Dependencies System.Object
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T1,typename T2,typename T3,typename T4>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`4/<>c<T1,T2,T3,T4>
class CORDL_TYPE WhenAnyPromise_4_UniTask___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Cysharp::Threading::Tasks::WhenAnyPromise_4_UniTask___c<T1,T2,T3,T4>*  __9;

/// @brief Field <>9__2_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_0, put=setStaticF___9__2_0)) ::System::Action_1<::System::Object*>*  __9__2_0;

/// @brief Field <>9__2_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_1, put=setStaticF___9__2_1)) ::System::Action_1<::System::Object*>*  __9__2_1;

/// @brief Field <>9__2_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_2, put=setStaticF___9__2_2)) ::System::Action_1<::System::Object*>*  __9__2_2;

/// @brief Field <>9__2_3, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_3, put=setStaticF___9__2_3)) ::System::Action_1<::System::Object*>*  __9__2_3;

static inline ::Cysharp::Threading::Tasks::WhenAnyPromise_4_UniTask___c<T1,T2,T3,T4>* New_ctor() ;

/// @brief Method <.ctor>b__2_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_0(::System::Object*  state) ;

/// @brief Method <.ctor>b__2_1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_1(::System::Object*  state) ;

/// @brief Method <.ctor>b__2_2, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_2(::System::Object*  state) ;

/// @brief Method <.ctor>b__2_3, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_3(::System::Object*  state) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Threading::Tasks::WhenAnyPromise_4_UniTask___c<T1,T2,T3,T4>* getStaticF___9() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_0() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_1() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_2() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_3() ;

static inline void setStaticF___9(::Cysharp::Threading::Tasks::WhenAnyPromise_4_UniTask___c<T1,T2,T3,T4>*  value) ;

static inline void setStaticF___9__2_0(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__2_1(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__2_2(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__2_3(::System::Action_1<::System::Object*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WhenAnyPromise_4_UniTask___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WhenAnyPromise_4_UniTask___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WhenAnyPromise_4_UniTask___c(WhenAnyPromise_4_UniTask___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WhenAnyPromise_4_UniTask___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WhenAnyPromise_4_UniTask___c(WhenAnyPromise_4_UniTask___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21755};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
// Dependencies Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<TResult>, System.Object, System.ValueTuple`4<T1, T2, T3, T4>
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T1,typename T2,typename T3>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`3<T1,T2,T3>
class CORDL_TYPE UniTask_WhenAnyPromise_3 : public ::System::Object {
public:
// Declarations
using __c = ::Cysharp::Threading::Tasks::WhenAnyPromise_3_UniTask___c<T1, T2, T3>;

/// @brief Field completedCount, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_completedCount, put=__cordl_internal_set_completedCount)) int32_t  completedCount;

/// @brief Field core, offset 0x18, size 0x28 
 __declspec(property(get=__cordl_internal_get_core, put=__cordl_internal_set_core)) ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_4<int32_t,T1,T2,T3>>  core;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_4<int32_t,T1,T2,T3>>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_4<int32_t,T1,T2,T3>>*() noexcept;

/// @brief Method Cysharp.Threading.Tasks.IUniTaskSource.GetResult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Cysharp_Threading_Tasks_IUniTaskSource_GetResult(int16_t  token) ;

/// @brief Method GetResult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::ValueTuple_4<int32_t,T1,T2,T3> GetResult(int16_t  token) ;

/// @brief Method GetStatus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(int16_t  token) ;

static inline ::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_3<T1,T2,T3>* New_ctor(::Cysharp::Threading::Tasks::UniTask_1<T1>  task1, ::Cysharp::Threading::Tasks::UniTask_1<T2>  task2, ::Cysharp::Threading::Tasks::UniTask_1<T3>  task3) ;

/// @brief Method OnCompleted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token) ;

/// @brief Method TryInvokeContinuationT1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT1(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_3<T1,T2,T3>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T1>>  awaiter) ;

/// @brief Method TryInvokeContinuationT2, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT2(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_3<T1,T2,T3>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T2>>  awaiter) ;

/// @brief Method TryInvokeContinuationT3, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT3(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_3<T1,T2,T3>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T3>>  awaiter) ;

/// @brief Method UnsafeGetStatus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus() ;

constexpr int32_t const& __cordl_internal_get_completedCount() const;

constexpr int32_t& __cordl_internal_get_completedCount() ;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_4<int32_t,T1,T2,T3>> const& __cordl_internal_get_core() const;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_4<int32_t,T1,T2,T3>>& __cordl_internal_get_core() ;

constexpr void __cordl_internal_set_completedCount(int32_t  value) ;

constexpr void __cordl_internal_set_core(::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_4<int32_t,T1,T2,T3>>  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::UniTask_1<T1>  task1, ::Cysharp::Threading::Tasks::UniTask_1<T2>  task2, ::Cysharp::Threading::Tasks::UniTask_1<T3>  task3) ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_4<int32_t,T1,T2,T3>>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_4<int32_t,T1,T2,T3>>* i___Cysharp__Threading__Tasks__IUniTaskSource_1___System__ValueTuple_4_int32_t_T1_T2_T3__() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UniTask_WhenAnyPromise_3() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UniTask_WhenAnyPromise_3", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UniTask_WhenAnyPromise_3(UniTask_WhenAnyPromise_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UniTask_WhenAnyPromise_3", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UniTask_WhenAnyPromise_3(UniTask_WhenAnyPromise_3 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21754};

/// @brief Field completedCount, offset: 0x10, size: 0x4, def value: None
 int32_t  ___completedCount;

/// [TupleElementNames(new[] { null, "result1", "result2", "result3" })]
/// @brief Field core, offset: 0x18, size: 0x28, def value: None
 ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_4<int32_t,T1,T2,T3>>  ___core;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
// [CompilerGenerated]
// Dependencies System.Object
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T1,typename T2,typename T3>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`3/<>c<T1,T2,T3>
class CORDL_TYPE WhenAnyPromise_3_UniTask___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Cysharp::Threading::Tasks::WhenAnyPromise_3_UniTask___c<T1,T2,T3>*  __9;

/// @brief Field <>9__2_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_0, put=setStaticF___9__2_0)) ::System::Action_1<::System::Object*>*  __9__2_0;

/// @brief Field <>9__2_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_1, put=setStaticF___9__2_1)) ::System::Action_1<::System::Object*>*  __9__2_1;

/// @brief Field <>9__2_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_2, put=setStaticF___9__2_2)) ::System::Action_1<::System::Object*>*  __9__2_2;

static inline ::Cysharp::Threading::Tasks::WhenAnyPromise_3_UniTask___c<T1,T2,T3>* New_ctor() ;

/// @brief Method <.ctor>b__2_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_0(::System::Object*  state) ;

/// @brief Method <.ctor>b__2_1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_1(::System::Object*  state) ;

/// @brief Method <.ctor>b__2_2, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_2(::System::Object*  state) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Threading::Tasks::WhenAnyPromise_3_UniTask___c<T1,T2,T3>* getStaticF___9() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_0() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_1() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_2() ;

static inline void setStaticF___9(::Cysharp::Threading::Tasks::WhenAnyPromise_3_UniTask___c<T1,T2,T3>*  value) ;

static inline void setStaticF___9__2_0(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__2_1(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__2_2(::System::Action_1<::System::Object*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WhenAnyPromise_3_UniTask___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WhenAnyPromise_3_UniTask___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WhenAnyPromise_3_UniTask___c(WhenAnyPromise_3_UniTask___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WhenAnyPromise_3_UniTask___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WhenAnyPromise_3_UniTask___c(WhenAnyPromise_3_UniTask___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21753};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
// Dependencies Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<TResult>, System.Object, System.ValueTuple`3<T1, T2, T3>
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T1,typename T2>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`2<T1,T2>
class CORDL_TYPE UniTask_WhenAnyPromise_2 : public ::System::Object {
public:
// Declarations
using __c = ::Cysharp::Threading::Tasks::WhenAnyPromise_2_UniTask___c<T1, T2>;

/// @brief Field completedCount, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_completedCount, put=__cordl_internal_set_completedCount)) int32_t  completedCount;

/// @brief Field core, offset 0x18, size 0x28 
 __declspec(property(get=__cordl_internal_get_core, put=__cordl_internal_set_core)) ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_3<int32_t,T1,T2>>  core;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_3<int32_t,T1,T2>>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_3<int32_t,T1,T2>>*() noexcept;

/// @brief Method Cysharp.Threading.Tasks.IUniTaskSource.GetResult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Cysharp_Threading_Tasks_IUniTaskSource_GetResult(int16_t  token) ;

/// @brief Method GetResult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::ValueTuple_3<int32_t,T1,T2> GetResult(int16_t  token) ;

/// @brief Method GetStatus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(int16_t  token) ;

static inline ::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_2<T1,T2>* New_ctor(::Cysharp::Threading::Tasks::UniTask_1<T1>  task1, ::Cysharp::Threading::Tasks::UniTask_1<T2>  task2) ;

/// @brief Method OnCompleted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token) ;

/// @brief Method TryInvokeContinuationT1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT1(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_2<T1,T2>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T1>>  awaiter) ;

/// @brief Method TryInvokeContinuationT2, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT2(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_2<T1,T2>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T2>>  awaiter) ;

/// @brief Method UnsafeGetStatus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus() ;

constexpr int32_t const& __cordl_internal_get_completedCount() const;

constexpr int32_t& __cordl_internal_get_completedCount() ;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_3<int32_t,T1,T2>> const& __cordl_internal_get_core() const;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_3<int32_t,T1,T2>>& __cordl_internal_get_core() ;

constexpr void __cordl_internal_set_completedCount(int32_t  value) ;

constexpr void __cordl_internal_set_core(::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_3<int32_t,T1,T2>>  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::UniTask_1<T1>  task1, ::Cysharp::Threading::Tasks::UniTask_1<T2>  task2) ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_3<int32_t,T1,T2>>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_3<int32_t,T1,T2>>* i___Cysharp__Threading__Tasks__IUniTaskSource_1___System__ValueTuple_3_int32_t_T1_T2__() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UniTask_WhenAnyPromise_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UniTask_WhenAnyPromise_2", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UniTask_WhenAnyPromise_2(UniTask_WhenAnyPromise_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UniTask_WhenAnyPromise_2", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UniTask_WhenAnyPromise_2(UniTask_WhenAnyPromise_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21752};

/// @brief Field completedCount, offset: 0x10, size: 0x4, def value: None
 int32_t  ___completedCount;

/// [TupleElementNames(new[] { null, "result1", "result2" })]
/// @brief Field core, offset: 0x18, size: 0x28, def value: None
 ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_3<int32_t,T1,T2>>  ___core;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
// [CompilerGenerated]
// Dependencies System.Object
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T1,typename T2>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`2/<>c<T1,T2>
class CORDL_TYPE WhenAnyPromise_2_UniTask___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Cysharp::Threading::Tasks::WhenAnyPromise_2_UniTask___c<T1,T2>*  __9;

/// @brief Field <>9__2_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_0, put=setStaticF___9__2_0)) ::System::Action_1<::System::Object*>*  __9__2_0;

/// @brief Field <>9__2_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_1, put=setStaticF___9__2_1)) ::System::Action_1<::System::Object*>*  __9__2_1;

static inline ::Cysharp::Threading::Tasks::WhenAnyPromise_2_UniTask___c<T1,T2>* New_ctor() ;

/// @brief Method <.ctor>b__2_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_0(::System::Object*  state) ;

/// @brief Method <.ctor>b__2_1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_1(::System::Object*  state) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Threading::Tasks::WhenAnyPromise_2_UniTask___c<T1,T2>* getStaticF___9() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_0() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_1() ;

static inline void setStaticF___9(::Cysharp::Threading::Tasks::WhenAnyPromise_2_UniTask___c<T1,T2>*  value) ;

static inline void setStaticF___9__2_0(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__2_1(::System::Action_1<::System::Object*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WhenAnyPromise_2_UniTask___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WhenAnyPromise_2_UniTask___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WhenAnyPromise_2_UniTask___c(WhenAnyPromise_2_UniTask___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WhenAnyPromise_2_UniTask___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WhenAnyPromise_2_UniTask___c(WhenAnyPromise_2_UniTask___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21751};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
// Dependencies Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<TResult>, System.Object
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTask/WhenAnyPromise
class CORDL_TYPE UniTask_WhenAnyPromise : public ::System::Object {
public:
// Declarations
using __c = ::Cysharp::Threading::Tasks::WhenAnyPromise_UniTask___c;

/// @brief Field completedCount, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_completedCount, put=__cordl_internal_set_completedCount)) int32_t  completedCount;

/// @brief Field core, offset 0x18, size 0x28 
 __declspec(property(get=__cordl_internal_get_core, put=__cordl_internal_set_core)) ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<int32_t>  core;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource_1<int32_t>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource_1<int32_t>*() noexcept;

/// @brief Method Cysharp.Threading.Tasks.IUniTaskSource.GetResult, addr 0xadf5b38, size 0x4, virtual true, abstract: false, final true
inline void Cysharp_Threading_Tasks_IUniTaskSource_GetResult(int16_t  token) ;

/// @brief Method GetResult, addr 0xadf5930, size 0x88, virtual true, abstract: false, final true
inline int32_t GetResult(int16_t  token) ;

/// @brief Method GetStatus, addr 0xadf59b8, size 0x58, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(int16_t  token) ;

static inline ::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise* New_ctor(::ArrayW<::Cysharp::Threading::Tasks::UniTask>  tasks, int32_t  tasksLength) ;

/// @brief Method OnCompleted, addr 0xadf5a10, size 0x70, virtual true, abstract: false, final true
inline void OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token) ;

/// @brief Method TryInvokeContinuation, addr 0xadf5778, size 0x1b8, virtual false, abstract: false, final false
static inline void TryInvokeContinuation(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_Awaiter>  awaiter, int32_t  i) ;

/// @brief Method UnsafeGetStatus, addr 0xadf5a80, size 0xb8, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus() ;

constexpr int32_t const& __cordl_internal_get_completedCount() const;

constexpr int32_t& __cordl_internal_get_completedCount() ;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<int32_t> const& __cordl_internal_get_core() const;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<int32_t>& __cordl_internal_get_core() ;

constexpr void __cordl_internal_set_completedCount(int32_t  value) ;

constexpr void __cordl_internal_set_core(::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<int32_t>  value) ;

/// @brief Method .ctor, addr 0xadef99c, size 0x448, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<::Cysharp::Threading::Tasks::UniTask>  tasks, int32_t  tasksLength) ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource_1<int32_t>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource_1<int32_t>* i___Cysharp__Threading__Tasks__IUniTaskSource_1_int32_t_() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UniTask_WhenAnyPromise() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UniTask_WhenAnyPromise", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UniTask_WhenAnyPromise(UniTask_WhenAnyPromise && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UniTask_WhenAnyPromise", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UniTask_WhenAnyPromise(UniTask_WhenAnyPromise const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21750};

/// @brief Field completedCount, offset: 0x10, size: 0x4, def value: None
 int32_t  ___completedCount;

/// @brief Field core, offset: 0x18, size: 0x28, def value: None
 ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<int32_t>  ___core;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise, ___completedCount) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise, ___core) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise) == 0x40, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
// [CompilerGenerated]
// Dependencies System.Object
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTask/WhenAnyPromise/<>c
class CORDL_TYPE WhenAnyPromise_UniTask___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Cysharp::Threading::Tasks::WhenAnyPromise_UniTask___c*  __9;

/// @brief Field <>9__2_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_0, put=setStaticF___9__2_0)) ::System::Action_1<::System::Object*>*  __9__2_0;

static inline ::Cysharp::Threading::Tasks::WhenAnyPromise_UniTask___c* New_ctor() ;

/// @brief Method <.ctor>b__2_0, addr 0xadf5bac, size 0x178, virtual false, abstract: false, final false
inline void __ctor_b__2_0(::System::Object*  state) ;

/// @brief Method .ctor, addr 0xadf5ba4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Threading::Tasks::WhenAnyPromise_UniTask___c* getStaticF___9() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_0() ;

static inline void setStaticF___9(::Cysharp::Threading::Tasks::WhenAnyPromise_UniTask___c*  value) ;

static inline void setStaticF___9__2_0(::System::Action_1<::System::Object*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WhenAnyPromise_UniTask___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WhenAnyPromise_UniTask___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WhenAnyPromise_UniTask___c(WhenAnyPromise_UniTask___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WhenAnyPromise_UniTask___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WhenAnyPromise_UniTask___c(WhenAnyPromise_UniTask___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21749};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::WhenAnyPromise_UniTask___c) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
// Dependencies Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<TResult>, System.Object, System.ValueTuple`2<T1, T2>
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`1<T>
class CORDL_TYPE UniTask_WhenAnyPromise_1 : public ::System::Object {
public:
// Declarations
using __c = ::Cysharp::Threading::Tasks::WhenAnyPromise_1_UniTask___c<T>;

/// @brief Field completedCount, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_completedCount, put=__cordl_internal_set_completedCount)) int32_t  completedCount;

/// @brief Field core, offset 0x18, size 0x28 
 __declspec(property(get=__cordl_internal_get_core, put=__cordl_internal_set_core)) ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_2<int32_t,T>>  core;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_2<int32_t,T>>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_2<int32_t,T>>*() noexcept;

/// @brief Method Cysharp.Threading.Tasks.IUniTaskSource.GetResult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Cysharp_Threading_Tasks_IUniTaskSource_GetResult(int16_t  token) ;

/// @brief Method GetResult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::ValueTuple_2<int32_t,T> GetResult(int16_t  token) ;

/// @brief Method GetStatus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(int16_t  token) ;

static inline ::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_1<T>* New_ctor(::ArrayW<::Cysharp::Threading::Tasks::UniTask_1<T>>  tasks, int32_t  tasksLength) ;

/// @brief Method OnCompleted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token) ;

/// @brief Method TryInvokeContinuation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuation(::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_1<T>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T>>  awaiter, int32_t  i) ;

/// @brief Method UnsafeGetStatus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus() ;

constexpr int32_t const& __cordl_internal_get_completedCount() const;

constexpr int32_t& __cordl_internal_get_completedCount() ;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_2<int32_t,T>> const& __cordl_internal_get_core() const;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_2<int32_t,T>>& __cordl_internal_get_core() ;

constexpr void __cordl_internal_set_completedCount(int32_t  value) ;

constexpr void __cordl_internal_set_core(::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_2<int32_t,T>>  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<::Cysharp::Threading::Tasks::UniTask_1<T>>  tasks, int32_t  tasksLength) ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_2<int32_t,T>>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_2<int32_t,T>>* i___Cysharp__Threading__Tasks__IUniTaskSource_1___System__ValueTuple_2_int32_t_T__() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UniTask_WhenAnyPromise_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UniTask_WhenAnyPromise_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UniTask_WhenAnyPromise_1(UniTask_WhenAnyPromise_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UniTask_WhenAnyPromise_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UniTask_WhenAnyPromise_1(UniTask_WhenAnyPromise_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21748};

/// @brief Field completedCount, offset: 0x10, size: 0x4, def value: None
 int32_t  ___completedCount;

/// @brief Field core, offset: 0x18, size: 0x28, def value: None
 ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_2<int32_t,T>>  ___core;

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
// CS Name: Cysharp.Threading.Tasks.UniTask/WhenAnyPromise`1/<>c<T>
class CORDL_TYPE WhenAnyPromise_1_UniTask___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Cysharp::Threading::Tasks::WhenAnyPromise_1_UniTask___c<T>*  __9;

/// @brief Field <>9__2_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_0, put=setStaticF___9__2_0)) ::System::Action_1<::System::Object*>*  __9__2_0;

static inline ::Cysharp::Threading::Tasks::WhenAnyPromise_1_UniTask___c<T>* New_ctor() ;

/// @brief Method <.ctor>b__2_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_0(::System::Object*  state) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Threading::Tasks::WhenAnyPromise_1_UniTask___c<T>* getStaticF___9() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_0() ;

static inline void setStaticF___9(::Cysharp::Threading::Tasks::WhenAnyPromise_1_UniTask___c<T>*  value) ;

static inline void setStaticF___9__2_0(::System::Action_1<::System::Object*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WhenAnyPromise_1_UniTask___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WhenAnyPromise_1_UniTask___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WhenAnyPromise_1_UniTask___c(WhenAnyPromise_1_UniTask___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WhenAnyPromise_1_UniTask___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WhenAnyPromise_1_UniTask___c(WhenAnyPromise_1_UniTask___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21747};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
// Dependencies Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<TResult>, System.Object, System.ValueTuple`2<T1, T2>
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTask/WhenAnyLRPromise`1<T>
class CORDL_TYPE UniTask_WhenAnyLRPromise_1 : public ::System::Object {
public:
// Declarations
using __c = ::Cysharp::Threading::Tasks::WhenAnyLRPromise_1_UniTask___c<T>;

/// @brief Field completedCount, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_completedCount, put=__cordl_internal_set_completedCount)) int32_t  completedCount;

/// @brief Field core, offset 0x18, size 0x28 
 __declspec(property(get=__cordl_internal_get_core, put=__cordl_internal_set_core)) ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_2<bool,T>>  core;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_2<bool,T>>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_2<bool,T>>*() noexcept;

/// @brief Method Cysharp.Threading.Tasks.IUniTaskSource.GetResult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Cysharp_Threading_Tasks_IUniTaskSource_GetResult(int16_t  token) ;

/// @brief Method GetResult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::ValueTuple_2<bool,T> GetResult(int16_t  token) ;

/// @brief Method GetStatus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(int16_t  token) ;

static inline ::Cysharp::Threading::Tasks::UniTask_WhenAnyLRPromise_1<T>* New_ctor(::Cysharp::Threading::Tasks::UniTask_1<T>  leftTask, ::Cysharp::Threading::Tasks::UniTask  rightTask) ;

/// @brief Method OnCompleted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token) ;

/// @brief Method TryLeftInvokeContinuation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryLeftInvokeContinuation(::Cysharp::Threading::Tasks::UniTask_WhenAnyLRPromise_1<T>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T>>  awaiter) ;

/// @brief Method TryRightInvokeContinuation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryRightInvokeContinuation(::Cysharp::Threading::Tasks::UniTask_WhenAnyLRPromise_1<T>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_Awaiter>  awaiter) ;

/// @brief Method UnsafeGetStatus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus() ;

constexpr int32_t const& __cordl_internal_get_completedCount() const;

constexpr int32_t& __cordl_internal_get_completedCount() ;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_2<bool,T>> const& __cordl_internal_get_core() const;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_2<bool,T>>& __cordl_internal_get_core() ;

constexpr void __cordl_internal_set_completedCount(int32_t  value) ;

constexpr void __cordl_internal_set_core(::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_2<bool,T>>  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::UniTask_1<T>  leftTask, ::Cysharp::Threading::Tasks::UniTask  rightTask) ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_2<bool,T>>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_2<bool,T>>* i___Cysharp__Threading__Tasks__IUniTaskSource_1___System__ValueTuple_2_bool_T__() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UniTask_WhenAnyLRPromise_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UniTask_WhenAnyLRPromise_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UniTask_WhenAnyLRPromise_1(UniTask_WhenAnyLRPromise_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UniTask_WhenAnyLRPromise_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UniTask_WhenAnyLRPromise_1(UniTask_WhenAnyLRPromise_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21746};

/// @brief Field completedCount, offset: 0x10, size: 0x4, def value: None
 int32_t  ___completedCount;

/// @brief Field core, offset: 0x18, size: 0x28, def value: None
 ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_2<bool,T>>  ___core;

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
// CS Name: Cysharp.Threading.Tasks.UniTask/WhenAnyLRPromise`1/<>c<T>
class CORDL_TYPE WhenAnyLRPromise_1_UniTask___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Cysharp::Threading::Tasks::WhenAnyLRPromise_1_UniTask___c<T>*  __9;

/// @brief Field <>9__2_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_0, put=setStaticF___9__2_0)) ::System::Action_1<::System::Object*>*  __9__2_0;

/// @brief Field <>9__2_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__2_1, put=setStaticF___9__2_1)) ::System::Action_1<::System::Object*>*  __9__2_1;

static inline ::Cysharp::Threading::Tasks::WhenAnyLRPromise_1_UniTask___c<T>* New_ctor() ;

/// @brief Method <.ctor>b__2_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_0(::System::Object*  state) ;

/// @brief Method <.ctor>b__2_1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__2_1(::System::Object*  state) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Threading::Tasks::WhenAnyLRPromise_1_UniTask___c<T>* getStaticF___9() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_0() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__2_1() ;

static inline void setStaticF___9(::Cysharp::Threading::Tasks::WhenAnyLRPromise_1_UniTask___c<T>*  value) ;

static inline void setStaticF___9__2_0(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__2_1(::System::Action_1<::System::Object*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WhenAnyLRPromise_1_UniTask___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WhenAnyLRPromise_1_UniTask___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WhenAnyLRPromise_1_UniTask___c(WhenAnyLRPromise_1_UniTask___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WhenAnyLRPromise_1_UniTask___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WhenAnyLRPromise_1_UniTask___c(WhenAnyLRPromise_1_UniTask___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21745};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
// Dependencies Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<TResult>, System.Object, System.ValueTuple`1<T1>, System.ValueTuple`8<T1, T2, T3, T4, T5, T6, T7, TRest>
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12,typename T13,typename T14,typename T15>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTask/WhenAllPromise`15<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15>
class CORDL_TYPE UniTask_WhenAllPromise_15 : public ::System::Object {
public:
// Declarations
using __c = ::Cysharp::Threading::Tasks::WhenAllPromise_15_UniTask___c<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15>;

/// @brief Field completedCount, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_completedCount, put=__cordl_internal_set_completedCount)) int32_t  completedCount;

/// @brief Field core, offset 0x90, size 0x28 
 __declspec(property(get=__cordl_internal_get_core, put=__cordl_internal_set_core)) ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_8<T1,T2,T3,T4,T5,T6,T7,::System::ValueTuple_8<T8,T9,T10,T11,T12,T13,T14,::System::ValueTuple_1<T15>>>>  core;

/// @brief Field t1, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_t1, put=__cordl_internal_set_t1)) T1  t1;

/// @brief Field t10, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_t10, put=__cordl_internal_set_t10)) T10  t10;

/// @brief Field t11, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_t11, put=__cordl_internal_set_t11)) T11  t11;

/// @brief Field t12, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_t12, put=__cordl_internal_set_t12)) T12  t12;

/// @brief Field t13, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_t13, put=__cordl_internal_set_t13)) T13  t13;

/// @brief Field t14, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_t14, put=__cordl_internal_set_t14)) T14  t14;

/// @brief Field t15, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_t15, put=__cordl_internal_set_t15)) T15  t15;

/// @brief Field t2, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_t2, put=__cordl_internal_set_t2)) T2  t2;

/// @brief Field t3, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_t3, put=__cordl_internal_set_t3)) T3  t3;

/// @brief Field t4, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_t4, put=__cordl_internal_set_t4)) T4  t4;

/// @brief Field t5, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_t5, put=__cordl_internal_set_t5)) T5  t5;

/// @brief Field t6, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_t6, put=__cordl_internal_set_t6)) T6  t6;

/// @brief Field t7, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_t7, put=__cordl_internal_set_t7)) T7  t7;

/// @brief Field t8, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_t8, put=__cordl_internal_set_t8)) T8  t8;

/// @brief Field t9, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_t9, put=__cordl_internal_set_t9)) T9  t9;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_8<T1,T2,T3,T4,T5,T6,T7,::System::ValueTuple_8<T8,T9,T10,T11,T12,T13,T14,::System::ValueTuple_1<T15>>>>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_8<T1,T2,T3,T4,T5,T6,T7,::System::ValueTuple_8<T8,T9,T10,T11,T12,T13,T14,::System::ValueTuple_1<T15>>>>*() noexcept;

/// @brief Method Cysharp.Threading.Tasks.IUniTaskSource.GetResult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Cysharp_Threading_Tasks_IUniTaskSource_GetResult(int16_t  token) ;

/// @brief Method GetResult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::ValueTuple_8<T1,T2,T3,T4,T5,T6,T7,::System::ValueTuple_8<T8,T9,T10,T11,T12,T13,T14,::System::ValueTuple_1<T15>>> GetResult(int16_t  token) ;

/// @brief Method GetStatus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(int16_t  token) ;

static inline ::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_15<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15>* New_ctor(::Cysharp::Threading::Tasks::UniTask_1<T1>  task1, ::Cysharp::Threading::Tasks::UniTask_1<T2>  task2, ::Cysharp::Threading::Tasks::UniTask_1<T3>  task3, ::Cysharp::Threading::Tasks::UniTask_1<T4>  task4, ::Cysharp::Threading::Tasks::UniTask_1<T5>  task5, ::Cysharp::Threading::Tasks::UniTask_1<T6>  task6, ::Cysharp::Threading::Tasks::UniTask_1<T7>  task7, ::Cysharp::Threading::Tasks::UniTask_1<T8>  task8, ::Cysharp::Threading::Tasks::UniTask_1<T9>  task9, ::Cysharp::Threading::Tasks::UniTask_1<T10>  task10, ::Cysharp::Threading::Tasks::UniTask_1<T11>  task11, ::Cysharp::Threading::Tasks::UniTask_1<T12>  task12, ::Cysharp::Threading::Tasks::UniTask_1<T13>  task13, ::Cysharp::Threading::Tasks::UniTask_1<T14>  task14, ::Cysharp::Threading::Tasks::UniTask_1<T15>  task15) ;

/// @brief Method OnCompleted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token) ;

/// @brief Method TryInvokeContinuationT1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT1(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_15<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T1>>  awaiter) ;

/// @brief Method TryInvokeContinuationT10, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT10(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_15<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T10>>  awaiter) ;

/// @brief Method TryInvokeContinuationT11, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT11(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_15<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T11>>  awaiter) ;

/// @brief Method TryInvokeContinuationT12, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT12(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_15<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T12>>  awaiter) ;

/// @brief Method TryInvokeContinuationT13, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT13(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_15<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T13>>  awaiter) ;

/// @brief Method TryInvokeContinuationT14, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT14(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_15<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T14>>  awaiter) ;

/// @brief Method TryInvokeContinuationT15, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT15(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_15<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T15>>  awaiter) ;

/// @brief Method TryInvokeContinuationT2, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT2(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_15<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T2>>  awaiter) ;

/// @brief Method TryInvokeContinuationT3, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT3(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_15<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T3>>  awaiter) ;

/// @brief Method TryInvokeContinuationT4, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT4(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_15<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T4>>  awaiter) ;

/// @brief Method TryInvokeContinuationT5, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT5(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_15<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T5>>  awaiter) ;

/// @brief Method TryInvokeContinuationT6, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT6(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_15<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T6>>  awaiter) ;

/// @brief Method TryInvokeContinuationT7, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT7(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_15<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T7>>  awaiter) ;

/// @brief Method TryInvokeContinuationT8, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT8(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_15<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T8>>  awaiter) ;

/// @brief Method TryInvokeContinuationT9, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT9(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_15<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T9>>  awaiter) ;

/// @brief Method UnsafeGetStatus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus() ;

constexpr int32_t const& __cordl_internal_get_completedCount() const;

constexpr int32_t& __cordl_internal_get_completedCount() ;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_8<T1,T2,T3,T4,T5,T6,T7,::System::ValueTuple_8<T8,T9,T10,T11,T12,T13,T14,::System::ValueTuple_1<T15>>>> const& __cordl_internal_get_core() const;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_8<T1,T2,T3,T4,T5,T6,T7,::System::ValueTuple_8<T8,T9,T10,T11,T12,T13,T14,::System::ValueTuple_1<T15>>>>& __cordl_internal_get_core() ;

constexpr T1 const& __cordl_internal_get_t1() const;

constexpr T1& __cordl_internal_get_t1() ;

constexpr T10 const& __cordl_internal_get_t10() const;

constexpr T10& __cordl_internal_get_t10() ;

constexpr T11 const& __cordl_internal_get_t11() const;

constexpr T11& __cordl_internal_get_t11() ;

constexpr T12 const& __cordl_internal_get_t12() const;

constexpr T12& __cordl_internal_get_t12() ;

constexpr T13 const& __cordl_internal_get_t13() const;

constexpr T13& __cordl_internal_get_t13() ;

constexpr T14 const& __cordl_internal_get_t14() const;

constexpr T14& __cordl_internal_get_t14() ;

constexpr T15 const& __cordl_internal_get_t15() const;

constexpr T15& __cordl_internal_get_t15() ;

constexpr T2 const& __cordl_internal_get_t2() const;

constexpr T2& __cordl_internal_get_t2() ;

constexpr T3 const& __cordl_internal_get_t3() const;

constexpr T3& __cordl_internal_get_t3() ;

constexpr T4 const& __cordl_internal_get_t4() const;

constexpr T4& __cordl_internal_get_t4() ;

constexpr T5 const& __cordl_internal_get_t5() const;

constexpr T5& __cordl_internal_get_t5() ;

constexpr T6 const& __cordl_internal_get_t6() const;

constexpr T6& __cordl_internal_get_t6() ;

constexpr T7 const& __cordl_internal_get_t7() const;

constexpr T7& __cordl_internal_get_t7() ;

constexpr T8 const& __cordl_internal_get_t8() const;

constexpr T8& __cordl_internal_get_t8() ;

constexpr T9 const& __cordl_internal_get_t9() const;

constexpr T9& __cordl_internal_get_t9() ;

constexpr void __cordl_internal_set_completedCount(int32_t  value) ;

constexpr void __cordl_internal_set_core(::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_8<T1,T2,T3,T4,T5,T6,T7,::System::ValueTuple_8<T8,T9,T10,T11,T12,T13,T14,::System::ValueTuple_1<T15>>>>  value) ;

constexpr void __cordl_internal_set_t1(T1  value) ;

constexpr void __cordl_internal_set_t10(T10  value) ;

constexpr void __cordl_internal_set_t11(T11  value) ;

constexpr void __cordl_internal_set_t12(T12  value) ;

constexpr void __cordl_internal_set_t13(T13  value) ;

constexpr void __cordl_internal_set_t14(T14  value) ;

constexpr void __cordl_internal_set_t15(T15  value) ;

constexpr void __cordl_internal_set_t2(T2  value) ;

constexpr void __cordl_internal_set_t3(T3  value) ;

constexpr void __cordl_internal_set_t4(T4  value) ;

constexpr void __cordl_internal_set_t5(T5  value) ;

constexpr void __cordl_internal_set_t6(T6  value) ;

constexpr void __cordl_internal_set_t7(T7  value) ;

constexpr void __cordl_internal_set_t8(T8  value) ;

constexpr void __cordl_internal_set_t9(T9  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::UniTask_1<T1>  task1, ::Cysharp::Threading::Tasks::UniTask_1<T2>  task2, ::Cysharp::Threading::Tasks::UniTask_1<T3>  task3, ::Cysharp::Threading::Tasks::UniTask_1<T4>  task4, ::Cysharp::Threading::Tasks::UniTask_1<T5>  task5, ::Cysharp::Threading::Tasks::UniTask_1<T6>  task6, ::Cysharp::Threading::Tasks::UniTask_1<T7>  task7, ::Cysharp::Threading::Tasks::UniTask_1<T8>  task8, ::Cysharp::Threading::Tasks::UniTask_1<T9>  task9, ::Cysharp::Threading::Tasks::UniTask_1<T10>  task10, ::Cysharp::Threading::Tasks::UniTask_1<T11>  task11, ::Cysharp::Threading::Tasks::UniTask_1<T12>  task12, ::Cysharp::Threading::Tasks::UniTask_1<T13>  task13, ::Cysharp::Threading::Tasks::UniTask_1<T14>  task14, ::Cysharp::Threading::Tasks::UniTask_1<T15>  task15) ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_8<T1,T2,T3,T4,T5,T6,T7,::System::ValueTuple_8<T8,T9,T10,T11,T12,T13,T14,::System::ValueTuple_1<T15>>>>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_8<T1,T2,T3,T4,T5,T6,T7,::System::ValueTuple_8<T8,T9,T10,T11,T12,T13,T14,::System::ValueTuple_1<T15>>>>* i___Cysharp__Threading__Tasks__IUniTaskSource_1___System__ValueTuple_8_T1_T2_T3_T4_T5_T6_T7___System__ValueTuple_8_T8_T9_T10_T11_T12_T13_T14___System__ValueTuple_1_T15____() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UniTask_WhenAllPromise_15() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UniTask_WhenAllPromise_15", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UniTask_WhenAllPromise_15(UniTask_WhenAllPromise_15 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UniTask_WhenAllPromise_15", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UniTask_WhenAllPromise_15(UniTask_WhenAllPromise_15 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21744};

/// @brief Field t1, offset: 0x10, size: 0x8, def value: None
 T1  ___t1;

/// @brief Field t2, offset: 0x18, size: 0x8, def value: None
 T2  ___t2;

/// @brief Field t3, offset: 0x20, size: 0x8, def value: None
 T3  ___t3;

/// @brief Field t4, offset: 0x28, size: 0x8, def value: None
 T4  ___t4;

/// @brief Field t5, offset: 0x30, size: 0x8, def value: None
 T5  ___t5;

/// @brief Field t6, offset: 0x38, size: 0x8, def value: None
 T6  ___t6;

/// @brief Field t7, offset: 0x40, size: 0x8, def value: None
 T7  ___t7;

/// @brief Field t8, offset: 0x48, size: 0x8, def value: None
 T8  ___t8;

/// @brief Field t9, offset: 0x50, size: 0x8, def value: None
 T9  ___t9;

/// @brief Field t10, offset: 0x58, size: 0x8, def value: None
 T10  ___t10;

/// @brief Field t11, offset: 0x60, size: 0x8, def value: None
 T11  ___t11;

/// @brief Field t12, offset: 0x68, size: 0x8, def value: None
 T12  ___t12;

/// @brief Field t13, offset: 0x70, size: 0x8, def value: None
 T13  ___t13;

/// @brief Field t14, offset: 0x78, size: 0x8, def value: None
 T14  ___t14;

/// @brief Field t15, offset: 0x80, size: 0x8, def value: None
 T15  ___t15;

/// @brief Field completedCount, offset: 0x88, size: 0x4, def value: None
 int32_t  ___completedCount;

/// @brief Field core, offset: 0x90, size: 0x28, def value: None
 ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_8<T1,T2,T3,T4,T5,T6,T7,::System::ValueTuple_8<T8,T9,T10,T11,T12,T13,T14,::System::ValueTuple_1<T15>>>>  ___core;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
// [CompilerGenerated]
// Dependencies System.Object
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12,typename T13,typename T14,typename T15>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTask/WhenAllPromise`15/<>c<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15>
class CORDL_TYPE WhenAllPromise_15_UniTask___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Cysharp::Threading::Tasks::WhenAllPromise_15_UniTask___c<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15>*  __9;

/// @brief Field <>9__17_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__17_0, put=setStaticF___9__17_0)) ::System::Action_1<::System::Object*>*  __9__17_0;

/// @brief Field <>9__17_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__17_1, put=setStaticF___9__17_1)) ::System::Action_1<::System::Object*>*  __9__17_1;

/// @brief Field <>9__17_10, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__17_10, put=setStaticF___9__17_10)) ::System::Action_1<::System::Object*>*  __9__17_10;

/// @brief Field <>9__17_11, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__17_11, put=setStaticF___9__17_11)) ::System::Action_1<::System::Object*>*  __9__17_11;

/// @brief Field <>9__17_12, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__17_12, put=setStaticF___9__17_12)) ::System::Action_1<::System::Object*>*  __9__17_12;

/// @brief Field <>9__17_13, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__17_13, put=setStaticF___9__17_13)) ::System::Action_1<::System::Object*>*  __9__17_13;

/// @brief Field <>9__17_14, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__17_14, put=setStaticF___9__17_14)) ::System::Action_1<::System::Object*>*  __9__17_14;

/// @brief Field <>9__17_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__17_2, put=setStaticF___9__17_2)) ::System::Action_1<::System::Object*>*  __9__17_2;

/// @brief Field <>9__17_3, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__17_3, put=setStaticF___9__17_3)) ::System::Action_1<::System::Object*>*  __9__17_3;

/// @brief Field <>9__17_4, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__17_4, put=setStaticF___9__17_4)) ::System::Action_1<::System::Object*>*  __9__17_4;

/// @brief Field <>9__17_5, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__17_5, put=setStaticF___9__17_5)) ::System::Action_1<::System::Object*>*  __9__17_5;

/// @brief Field <>9__17_6, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__17_6, put=setStaticF___9__17_6)) ::System::Action_1<::System::Object*>*  __9__17_6;

/// @brief Field <>9__17_7, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__17_7, put=setStaticF___9__17_7)) ::System::Action_1<::System::Object*>*  __9__17_7;

/// @brief Field <>9__17_8, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__17_8, put=setStaticF___9__17_8)) ::System::Action_1<::System::Object*>*  __9__17_8;

/// @brief Field <>9__17_9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__17_9, put=setStaticF___9__17_9)) ::System::Action_1<::System::Object*>*  __9__17_9;

static inline ::Cysharp::Threading::Tasks::WhenAllPromise_15_UniTask___c<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15>* New_ctor() ;

/// @brief Method <.ctor>b__17_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__17_0(::System::Object*  state) ;

/// @brief Method <.ctor>b__17_1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__17_1(::System::Object*  state) ;

/// @brief Method <.ctor>b__17_10, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__17_10(::System::Object*  state) ;

/// @brief Method <.ctor>b__17_11, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__17_11(::System::Object*  state) ;

/// @brief Method <.ctor>b__17_12, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__17_12(::System::Object*  state) ;

/// @brief Method <.ctor>b__17_13, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__17_13(::System::Object*  state) ;

/// @brief Method <.ctor>b__17_14, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__17_14(::System::Object*  state) ;

/// @brief Method <.ctor>b__17_2, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__17_2(::System::Object*  state) ;

/// @brief Method <.ctor>b__17_3, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__17_3(::System::Object*  state) ;

/// @brief Method <.ctor>b__17_4, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__17_4(::System::Object*  state) ;

/// @brief Method <.ctor>b__17_5, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__17_5(::System::Object*  state) ;

/// @brief Method <.ctor>b__17_6, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__17_6(::System::Object*  state) ;

/// @brief Method <.ctor>b__17_7, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__17_7(::System::Object*  state) ;

/// @brief Method <.ctor>b__17_8, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__17_8(::System::Object*  state) ;

/// @brief Method <.ctor>b__17_9, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__17_9(::System::Object*  state) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Threading::Tasks::WhenAllPromise_15_UniTask___c<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15>* getStaticF___9() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__17_0() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__17_1() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__17_10() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__17_11() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__17_12() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__17_13() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__17_14() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__17_2() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__17_3() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__17_4() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__17_5() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__17_6() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__17_7() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__17_8() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__17_9() ;

static inline void setStaticF___9(::Cysharp::Threading::Tasks::WhenAllPromise_15_UniTask___c<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14,T15>*  value) ;

static inline void setStaticF___9__17_0(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__17_1(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__17_10(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__17_11(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__17_12(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__17_13(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__17_14(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__17_2(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__17_3(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__17_4(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__17_5(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__17_6(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__17_7(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__17_8(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__17_9(::System::Action_1<::System::Object*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WhenAllPromise_15_UniTask___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WhenAllPromise_15_UniTask___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WhenAllPromise_15_UniTask___c(WhenAllPromise_15_UniTask___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WhenAllPromise_15_UniTask___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WhenAllPromise_15_UniTask___c(WhenAllPromise_15_UniTask___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21743};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
// Dependencies Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<TResult>, System.Object, System.ValueTuple`7<T1, T2, T3, T4, T5, T6, T7>, System.ValueTuple`8<T1, T2, T3, T4, T5, T6, T7, TRest>
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12,typename T13,typename T14>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTask/WhenAllPromise`14<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14>
class CORDL_TYPE UniTask_WhenAllPromise_14 : public ::System::Object {
public:
// Declarations
using __c = ::Cysharp::Threading::Tasks::WhenAllPromise_14_UniTask___c<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14>;

/// @brief Field completedCount, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_completedCount, put=__cordl_internal_set_completedCount)) int32_t  completedCount;

/// @brief Field core, offset 0x88, size 0x28 
 __declspec(property(get=__cordl_internal_get_core, put=__cordl_internal_set_core)) ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_8<T1,T2,T3,T4,T5,T6,T7,::System::ValueTuple_7<T8,T9,T10,T11,T12,T13,T14>>>  core;

/// @brief Field t1, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_t1, put=__cordl_internal_set_t1)) T1  t1;

/// @brief Field t10, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_t10, put=__cordl_internal_set_t10)) T10  t10;

/// @brief Field t11, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_t11, put=__cordl_internal_set_t11)) T11  t11;

/// @brief Field t12, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_t12, put=__cordl_internal_set_t12)) T12  t12;

/// @brief Field t13, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_t13, put=__cordl_internal_set_t13)) T13  t13;

/// @brief Field t14, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_t14, put=__cordl_internal_set_t14)) T14  t14;

/// @brief Field t2, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_t2, put=__cordl_internal_set_t2)) T2  t2;

/// @brief Field t3, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_t3, put=__cordl_internal_set_t3)) T3  t3;

/// @brief Field t4, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_t4, put=__cordl_internal_set_t4)) T4  t4;

/// @brief Field t5, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_t5, put=__cordl_internal_set_t5)) T5  t5;

/// @brief Field t6, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_t6, put=__cordl_internal_set_t6)) T6  t6;

/// @brief Field t7, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_t7, put=__cordl_internal_set_t7)) T7  t7;

/// @brief Field t8, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_t8, put=__cordl_internal_set_t8)) T8  t8;

/// @brief Field t9, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_t9, put=__cordl_internal_set_t9)) T9  t9;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_8<T1,T2,T3,T4,T5,T6,T7,::System::ValueTuple_7<T8,T9,T10,T11,T12,T13,T14>>>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_8<T1,T2,T3,T4,T5,T6,T7,::System::ValueTuple_7<T8,T9,T10,T11,T12,T13,T14>>>*() noexcept;

/// @brief Method Cysharp.Threading.Tasks.IUniTaskSource.GetResult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Cysharp_Threading_Tasks_IUniTaskSource_GetResult(int16_t  token) ;

/// @brief Method GetResult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::ValueTuple_8<T1,T2,T3,T4,T5,T6,T7,::System::ValueTuple_7<T8,T9,T10,T11,T12,T13,T14>> GetResult(int16_t  token) ;

/// @brief Method GetStatus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(int16_t  token) ;

static inline ::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_14<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14>* New_ctor(::Cysharp::Threading::Tasks::UniTask_1<T1>  task1, ::Cysharp::Threading::Tasks::UniTask_1<T2>  task2, ::Cysharp::Threading::Tasks::UniTask_1<T3>  task3, ::Cysharp::Threading::Tasks::UniTask_1<T4>  task4, ::Cysharp::Threading::Tasks::UniTask_1<T5>  task5, ::Cysharp::Threading::Tasks::UniTask_1<T6>  task6, ::Cysharp::Threading::Tasks::UniTask_1<T7>  task7, ::Cysharp::Threading::Tasks::UniTask_1<T8>  task8, ::Cysharp::Threading::Tasks::UniTask_1<T9>  task9, ::Cysharp::Threading::Tasks::UniTask_1<T10>  task10, ::Cysharp::Threading::Tasks::UniTask_1<T11>  task11, ::Cysharp::Threading::Tasks::UniTask_1<T12>  task12, ::Cysharp::Threading::Tasks::UniTask_1<T13>  task13, ::Cysharp::Threading::Tasks::UniTask_1<T14>  task14) ;

/// @brief Method OnCompleted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token) ;

/// @brief Method TryInvokeContinuationT1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT1(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_14<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T1>>  awaiter) ;

/// @brief Method TryInvokeContinuationT10, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT10(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_14<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T10>>  awaiter) ;

/// @brief Method TryInvokeContinuationT11, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT11(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_14<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T11>>  awaiter) ;

/// @brief Method TryInvokeContinuationT12, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT12(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_14<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T12>>  awaiter) ;

/// @brief Method TryInvokeContinuationT13, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT13(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_14<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T13>>  awaiter) ;

/// @brief Method TryInvokeContinuationT14, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT14(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_14<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T14>>  awaiter) ;

/// @brief Method TryInvokeContinuationT2, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT2(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_14<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T2>>  awaiter) ;

/// @brief Method TryInvokeContinuationT3, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT3(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_14<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T3>>  awaiter) ;

/// @brief Method TryInvokeContinuationT4, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT4(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_14<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T4>>  awaiter) ;

/// @brief Method TryInvokeContinuationT5, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT5(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_14<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T5>>  awaiter) ;

/// @brief Method TryInvokeContinuationT6, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT6(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_14<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T6>>  awaiter) ;

/// @brief Method TryInvokeContinuationT7, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT7(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_14<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T7>>  awaiter) ;

/// @brief Method TryInvokeContinuationT8, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT8(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_14<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T8>>  awaiter) ;

/// @brief Method TryInvokeContinuationT9, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT9(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_14<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T9>>  awaiter) ;

/// @brief Method UnsafeGetStatus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus() ;

constexpr int32_t const& __cordl_internal_get_completedCount() const;

constexpr int32_t& __cordl_internal_get_completedCount() ;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_8<T1,T2,T3,T4,T5,T6,T7,::System::ValueTuple_7<T8,T9,T10,T11,T12,T13,T14>>> const& __cordl_internal_get_core() const;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_8<T1,T2,T3,T4,T5,T6,T7,::System::ValueTuple_7<T8,T9,T10,T11,T12,T13,T14>>>& __cordl_internal_get_core() ;

constexpr T1 const& __cordl_internal_get_t1() const;

constexpr T1& __cordl_internal_get_t1() ;

constexpr T10 const& __cordl_internal_get_t10() const;

constexpr T10& __cordl_internal_get_t10() ;

constexpr T11 const& __cordl_internal_get_t11() const;

constexpr T11& __cordl_internal_get_t11() ;

constexpr T12 const& __cordl_internal_get_t12() const;

constexpr T12& __cordl_internal_get_t12() ;

constexpr T13 const& __cordl_internal_get_t13() const;

constexpr T13& __cordl_internal_get_t13() ;

constexpr T14 const& __cordl_internal_get_t14() const;

constexpr T14& __cordl_internal_get_t14() ;

constexpr T2 const& __cordl_internal_get_t2() const;

constexpr T2& __cordl_internal_get_t2() ;

constexpr T3 const& __cordl_internal_get_t3() const;

constexpr T3& __cordl_internal_get_t3() ;

constexpr T4 const& __cordl_internal_get_t4() const;

constexpr T4& __cordl_internal_get_t4() ;

constexpr T5 const& __cordl_internal_get_t5() const;

constexpr T5& __cordl_internal_get_t5() ;

constexpr T6 const& __cordl_internal_get_t6() const;

constexpr T6& __cordl_internal_get_t6() ;

constexpr T7 const& __cordl_internal_get_t7() const;

constexpr T7& __cordl_internal_get_t7() ;

constexpr T8 const& __cordl_internal_get_t8() const;

constexpr T8& __cordl_internal_get_t8() ;

constexpr T9 const& __cordl_internal_get_t9() const;

constexpr T9& __cordl_internal_get_t9() ;

constexpr void __cordl_internal_set_completedCount(int32_t  value) ;

constexpr void __cordl_internal_set_core(::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_8<T1,T2,T3,T4,T5,T6,T7,::System::ValueTuple_7<T8,T9,T10,T11,T12,T13,T14>>>  value) ;

constexpr void __cordl_internal_set_t1(T1  value) ;

constexpr void __cordl_internal_set_t10(T10  value) ;

constexpr void __cordl_internal_set_t11(T11  value) ;

constexpr void __cordl_internal_set_t12(T12  value) ;

constexpr void __cordl_internal_set_t13(T13  value) ;

constexpr void __cordl_internal_set_t14(T14  value) ;

constexpr void __cordl_internal_set_t2(T2  value) ;

constexpr void __cordl_internal_set_t3(T3  value) ;

constexpr void __cordl_internal_set_t4(T4  value) ;

constexpr void __cordl_internal_set_t5(T5  value) ;

constexpr void __cordl_internal_set_t6(T6  value) ;

constexpr void __cordl_internal_set_t7(T7  value) ;

constexpr void __cordl_internal_set_t8(T8  value) ;

constexpr void __cordl_internal_set_t9(T9  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::UniTask_1<T1>  task1, ::Cysharp::Threading::Tasks::UniTask_1<T2>  task2, ::Cysharp::Threading::Tasks::UniTask_1<T3>  task3, ::Cysharp::Threading::Tasks::UniTask_1<T4>  task4, ::Cysharp::Threading::Tasks::UniTask_1<T5>  task5, ::Cysharp::Threading::Tasks::UniTask_1<T6>  task6, ::Cysharp::Threading::Tasks::UniTask_1<T7>  task7, ::Cysharp::Threading::Tasks::UniTask_1<T8>  task8, ::Cysharp::Threading::Tasks::UniTask_1<T9>  task9, ::Cysharp::Threading::Tasks::UniTask_1<T10>  task10, ::Cysharp::Threading::Tasks::UniTask_1<T11>  task11, ::Cysharp::Threading::Tasks::UniTask_1<T12>  task12, ::Cysharp::Threading::Tasks::UniTask_1<T13>  task13, ::Cysharp::Threading::Tasks::UniTask_1<T14>  task14) ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_8<T1,T2,T3,T4,T5,T6,T7,::System::ValueTuple_7<T8,T9,T10,T11,T12,T13,T14>>>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_8<T1,T2,T3,T4,T5,T6,T7,::System::ValueTuple_7<T8,T9,T10,T11,T12,T13,T14>>>* i___Cysharp__Threading__Tasks__IUniTaskSource_1___System__ValueTuple_8_T1_T2_T3_T4_T5_T6_T7___System__ValueTuple_7_T8_T9_T10_T11_T12_T13_T14___() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UniTask_WhenAllPromise_14() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UniTask_WhenAllPromise_14", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UniTask_WhenAllPromise_14(UniTask_WhenAllPromise_14 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UniTask_WhenAllPromise_14", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UniTask_WhenAllPromise_14(UniTask_WhenAllPromise_14 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21742};

/// @brief Field t1, offset: 0x10, size: 0x8, def value: None
 T1  ___t1;

/// @brief Field t2, offset: 0x18, size: 0x8, def value: None
 T2  ___t2;

/// @brief Field t3, offset: 0x20, size: 0x8, def value: None
 T3  ___t3;

/// @brief Field t4, offset: 0x28, size: 0x8, def value: None
 T4  ___t4;

/// @brief Field t5, offset: 0x30, size: 0x8, def value: None
 T5  ___t5;

/// @brief Field t6, offset: 0x38, size: 0x8, def value: None
 T6  ___t6;

/// @brief Field t7, offset: 0x40, size: 0x8, def value: None
 T7  ___t7;

/// @brief Field t8, offset: 0x48, size: 0x8, def value: None
 T8  ___t8;

/// @brief Field t9, offset: 0x50, size: 0x8, def value: None
 T9  ___t9;

/// @brief Field t10, offset: 0x58, size: 0x8, def value: None
 T10  ___t10;

/// @brief Field t11, offset: 0x60, size: 0x8, def value: None
 T11  ___t11;

/// @brief Field t12, offset: 0x68, size: 0x8, def value: None
 T12  ___t12;

/// @brief Field t13, offset: 0x70, size: 0x8, def value: None
 T13  ___t13;

/// @brief Field t14, offset: 0x78, size: 0x8, def value: None
 T14  ___t14;

/// @brief Field completedCount, offset: 0x80, size: 0x4, def value: None
 int32_t  ___completedCount;

/// @brief Field core, offset: 0x88, size: 0x28, def value: None
 ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_8<T1,T2,T3,T4,T5,T6,T7,::System::ValueTuple_7<T8,T9,T10,T11,T12,T13,T14>>>  ___core;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
// [CompilerGenerated]
// Dependencies System.Object
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12,typename T13,typename T14>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTask/WhenAllPromise`14/<>c<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14>
class CORDL_TYPE WhenAllPromise_14_UniTask___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Cysharp::Threading::Tasks::WhenAllPromise_14_UniTask___c<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14>*  __9;

/// @brief Field <>9__16_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__16_0, put=setStaticF___9__16_0)) ::System::Action_1<::System::Object*>*  __9__16_0;

/// @brief Field <>9__16_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__16_1, put=setStaticF___9__16_1)) ::System::Action_1<::System::Object*>*  __9__16_1;

/// @brief Field <>9__16_10, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__16_10, put=setStaticF___9__16_10)) ::System::Action_1<::System::Object*>*  __9__16_10;

/// @brief Field <>9__16_11, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__16_11, put=setStaticF___9__16_11)) ::System::Action_1<::System::Object*>*  __9__16_11;

/// @brief Field <>9__16_12, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__16_12, put=setStaticF___9__16_12)) ::System::Action_1<::System::Object*>*  __9__16_12;

/// @brief Field <>9__16_13, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__16_13, put=setStaticF___9__16_13)) ::System::Action_1<::System::Object*>*  __9__16_13;

/// @brief Field <>9__16_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__16_2, put=setStaticF___9__16_2)) ::System::Action_1<::System::Object*>*  __9__16_2;

/// @brief Field <>9__16_3, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__16_3, put=setStaticF___9__16_3)) ::System::Action_1<::System::Object*>*  __9__16_3;

/// @brief Field <>9__16_4, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__16_4, put=setStaticF___9__16_4)) ::System::Action_1<::System::Object*>*  __9__16_4;

/// @brief Field <>9__16_5, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__16_5, put=setStaticF___9__16_5)) ::System::Action_1<::System::Object*>*  __9__16_5;

/// @brief Field <>9__16_6, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__16_6, put=setStaticF___9__16_6)) ::System::Action_1<::System::Object*>*  __9__16_6;

/// @brief Field <>9__16_7, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__16_7, put=setStaticF___9__16_7)) ::System::Action_1<::System::Object*>*  __9__16_7;

/// @brief Field <>9__16_8, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__16_8, put=setStaticF___9__16_8)) ::System::Action_1<::System::Object*>*  __9__16_8;

/// @brief Field <>9__16_9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__16_9, put=setStaticF___9__16_9)) ::System::Action_1<::System::Object*>*  __9__16_9;

static inline ::Cysharp::Threading::Tasks::WhenAllPromise_14_UniTask___c<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14>* New_ctor() ;

/// @brief Method <.ctor>b__16_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__16_0(::System::Object*  state) ;

/// @brief Method <.ctor>b__16_1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__16_1(::System::Object*  state) ;

/// @brief Method <.ctor>b__16_10, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__16_10(::System::Object*  state) ;

/// @brief Method <.ctor>b__16_11, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__16_11(::System::Object*  state) ;

/// @brief Method <.ctor>b__16_12, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__16_12(::System::Object*  state) ;

/// @brief Method <.ctor>b__16_13, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__16_13(::System::Object*  state) ;

/// @brief Method <.ctor>b__16_2, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__16_2(::System::Object*  state) ;

/// @brief Method <.ctor>b__16_3, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__16_3(::System::Object*  state) ;

/// @brief Method <.ctor>b__16_4, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__16_4(::System::Object*  state) ;

/// @brief Method <.ctor>b__16_5, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__16_5(::System::Object*  state) ;

/// @brief Method <.ctor>b__16_6, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__16_6(::System::Object*  state) ;

/// @brief Method <.ctor>b__16_7, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__16_7(::System::Object*  state) ;

/// @brief Method <.ctor>b__16_8, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__16_8(::System::Object*  state) ;

/// @brief Method <.ctor>b__16_9, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__16_9(::System::Object*  state) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Threading::Tasks::WhenAllPromise_14_UniTask___c<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14>* getStaticF___9() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__16_0() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__16_1() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__16_10() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__16_11() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__16_12() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__16_13() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__16_2() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__16_3() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__16_4() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__16_5() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__16_6() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__16_7() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__16_8() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__16_9() ;

static inline void setStaticF___9(::Cysharp::Threading::Tasks::WhenAllPromise_14_UniTask___c<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13,T14>*  value) ;

static inline void setStaticF___9__16_0(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__16_1(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__16_10(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__16_11(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__16_12(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__16_13(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__16_2(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__16_3(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__16_4(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__16_5(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__16_6(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__16_7(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__16_8(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__16_9(::System::Action_1<::System::Object*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WhenAllPromise_14_UniTask___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WhenAllPromise_14_UniTask___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WhenAllPromise_14_UniTask___c(WhenAllPromise_14_UniTask___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WhenAllPromise_14_UniTask___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WhenAllPromise_14_UniTask___c(WhenAllPromise_14_UniTask___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21741};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
// Dependencies Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<TResult>, System.Object, System.ValueTuple`6<T1, T2, T3, T4, T5, T6>, System.ValueTuple`8<T1, T2, T3, T4, T5, T6, T7, TRest>
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12,typename T13>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTask/WhenAllPromise`13<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13>
class CORDL_TYPE UniTask_WhenAllPromise_13 : public ::System::Object {
public:
// Declarations
using __c = ::Cysharp::Threading::Tasks::WhenAllPromise_13_UniTask___c<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13>;

/// @brief Field completedCount, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_completedCount, put=__cordl_internal_set_completedCount)) int32_t  completedCount;

/// @brief Field core, offset 0x80, size 0x28 
 __declspec(property(get=__cordl_internal_get_core, put=__cordl_internal_set_core)) ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_8<T1,T2,T3,T4,T5,T6,T7,::System::ValueTuple_6<T8,T9,T10,T11,T12,T13>>>  core;

/// @brief Field t1, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_t1, put=__cordl_internal_set_t1)) T1  t1;

/// @brief Field t10, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_t10, put=__cordl_internal_set_t10)) T10  t10;

/// @brief Field t11, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_t11, put=__cordl_internal_set_t11)) T11  t11;

/// @brief Field t12, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_t12, put=__cordl_internal_set_t12)) T12  t12;

/// @brief Field t13, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_t13, put=__cordl_internal_set_t13)) T13  t13;

/// @brief Field t2, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_t2, put=__cordl_internal_set_t2)) T2  t2;

/// @brief Field t3, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_t3, put=__cordl_internal_set_t3)) T3  t3;

/// @brief Field t4, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_t4, put=__cordl_internal_set_t4)) T4  t4;

/// @brief Field t5, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_t5, put=__cordl_internal_set_t5)) T5  t5;

/// @brief Field t6, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_t6, put=__cordl_internal_set_t6)) T6  t6;

/// @brief Field t7, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_t7, put=__cordl_internal_set_t7)) T7  t7;

/// @brief Field t8, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_t8, put=__cordl_internal_set_t8)) T8  t8;

/// @brief Field t9, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_t9, put=__cordl_internal_set_t9)) T9  t9;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_8<T1,T2,T3,T4,T5,T6,T7,::System::ValueTuple_6<T8,T9,T10,T11,T12,T13>>>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_8<T1,T2,T3,T4,T5,T6,T7,::System::ValueTuple_6<T8,T9,T10,T11,T12,T13>>>*() noexcept;

/// @brief Method Cysharp.Threading.Tasks.IUniTaskSource.GetResult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Cysharp_Threading_Tasks_IUniTaskSource_GetResult(int16_t  token) ;

/// @brief Method GetResult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::ValueTuple_8<T1,T2,T3,T4,T5,T6,T7,::System::ValueTuple_6<T8,T9,T10,T11,T12,T13>> GetResult(int16_t  token) ;

/// @brief Method GetStatus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(int16_t  token) ;

static inline ::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_13<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13>* New_ctor(::Cysharp::Threading::Tasks::UniTask_1<T1>  task1, ::Cysharp::Threading::Tasks::UniTask_1<T2>  task2, ::Cysharp::Threading::Tasks::UniTask_1<T3>  task3, ::Cysharp::Threading::Tasks::UniTask_1<T4>  task4, ::Cysharp::Threading::Tasks::UniTask_1<T5>  task5, ::Cysharp::Threading::Tasks::UniTask_1<T6>  task6, ::Cysharp::Threading::Tasks::UniTask_1<T7>  task7, ::Cysharp::Threading::Tasks::UniTask_1<T8>  task8, ::Cysharp::Threading::Tasks::UniTask_1<T9>  task9, ::Cysharp::Threading::Tasks::UniTask_1<T10>  task10, ::Cysharp::Threading::Tasks::UniTask_1<T11>  task11, ::Cysharp::Threading::Tasks::UniTask_1<T12>  task12, ::Cysharp::Threading::Tasks::UniTask_1<T13>  task13) ;

/// @brief Method OnCompleted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token) ;

/// @brief Method TryInvokeContinuationT1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT1(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_13<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T1>>  awaiter) ;

/// @brief Method TryInvokeContinuationT10, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT10(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_13<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T10>>  awaiter) ;

/// @brief Method TryInvokeContinuationT11, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT11(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_13<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T11>>  awaiter) ;

/// @brief Method TryInvokeContinuationT12, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT12(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_13<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T12>>  awaiter) ;

/// @brief Method TryInvokeContinuationT13, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT13(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_13<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T13>>  awaiter) ;

/// @brief Method TryInvokeContinuationT2, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT2(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_13<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T2>>  awaiter) ;

/// @brief Method TryInvokeContinuationT3, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT3(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_13<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T3>>  awaiter) ;

/// @brief Method TryInvokeContinuationT4, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT4(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_13<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T4>>  awaiter) ;

/// @brief Method TryInvokeContinuationT5, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT5(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_13<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T5>>  awaiter) ;

/// @brief Method TryInvokeContinuationT6, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT6(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_13<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T6>>  awaiter) ;

/// @brief Method TryInvokeContinuationT7, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT7(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_13<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T7>>  awaiter) ;

/// @brief Method TryInvokeContinuationT8, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT8(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_13<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T8>>  awaiter) ;

/// @brief Method TryInvokeContinuationT9, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT9(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_13<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T9>>  awaiter) ;

/// @brief Method UnsafeGetStatus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus() ;

constexpr int32_t const& __cordl_internal_get_completedCount() const;

constexpr int32_t& __cordl_internal_get_completedCount() ;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_8<T1,T2,T3,T4,T5,T6,T7,::System::ValueTuple_6<T8,T9,T10,T11,T12,T13>>> const& __cordl_internal_get_core() const;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_8<T1,T2,T3,T4,T5,T6,T7,::System::ValueTuple_6<T8,T9,T10,T11,T12,T13>>>& __cordl_internal_get_core() ;

constexpr T1 const& __cordl_internal_get_t1() const;

constexpr T1& __cordl_internal_get_t1() ;

constexpr T10 const& __cordl_internal_get_t10() const;

constexpr T10& __cordl_internal_get_t10() ;

constexpr T11 const& __cordl_internal_get_t11() const;

constexpr T11& __cordl_internal_get_t11() ;

constexpr T12 const& __cordl_internal_get_t12() const;

constexpr T12& __cordl_internal_get_t12() ;

constexpr T13 const& __cordl_internal_get_t13() const;

constexpr T13& __cordl_internal_get_t13() ;

constexpr T2 const& __cordl_internal_get_t2() const;

constexpr T2& __cordl_internal_get_t2() ;

constexpr T3 const& __cordl_internal_get_t3() const;

constexpr T3& __cordl_internal_get_t3() ;

constexpr T4 const& __cordl_internal_get_t4() const;

constexpr T4& __cordl_internal_get_t4() ;

constexpr T5 const& __cordl_internal_get_t5() const;

constexpr T5& __cordl_internal_get_t5() ;

constexpr T6 const& __cordl_internal_get_t6() const;

constexpr T6& __cordl_internal_get_t6() ;

constexpr T7 const& __cordl_internal_get_t7() const;

constexpr T7& __cordl_internal_get_t7() ;

constexpr T8 const& __cordl_internal_get_t8() const;

constexpr T8& __cordl_internal_get_t8() ;

constexpr T9 const& __cordl_internal_get_t9() const;

constexpr T9& __cordl_internal_get_t9() ;

constexpr void __cordl_internal_set_completedCount(int32_t  value) ;

constexpr void __cordl_internal_set_core(::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_8<T1,T2,T3,T4,T5,T6,T7,::System::ValueTuple_6<T8,T9,T10,T11,T12,T13>>>  value) ;

constexpr void __cordl_internal_set_t1(T1  value) ;

constexpr void __cordl_internal_set_t10(T10  value) ;

constexpr void __cordl_internal_set_t11(T11  value) ;

constexpr void __cordl_internal_set_t12(T12  value) ;

constexpr void __cordl_internal_set_t13(T13  value) ;

constexpr void __cordl_internal_set_t2(T2  value) ;

constexpr void __cordl_internal_set_t3(T3  value) ;

constexpr void __cordl_internal_set_t4(T4  value) ;

constexpr void __cordl_internal_set_t5(T5  value) ;

constexpr void __cordl_internal_set_t6(T6  value) ;

constexpr void __cordl_internal_set_t7(T7  value) ;

constexpr void __cordl_internal_set_t8(T8  value) ;

constexpr void __cordl_internal_set_t9(T9  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::UniTask_1<T1>  task1, ::Cysharp::Threading::Tasks::UniTask_1<T2>  task2, ::Cysharp::Threading::Tasks::UniTask_1<T3>  task3, ::Cysharp::Threading::Tasks::UniTask_1<T4>  task4, ::Cysharp::Threading::Tasks::UniTask_1<T5>  task5, ::Cysharp::Threading::Tasks::UniTask_1<T6>  task6, ::Cysharp::Threading::Tasks::UniTask_1<T7>  task7, ::Cysharp::Threading::Tasks::UniTask_1<T8>  task8, ::Cysharp::Threading::Tasks::UniTask_1<T9>  task9, ::Cysharp::Threading::Tasks::UniTask_1<T10>  task10, ::Cysharp::Threading::Tasks::UniTask_1<T11>  task11, ::Cysharp::Threading::Tasks::UniTask_1<T12>  task12, ::Cysharp::Threading::Tasks::UniTask_1<T13>  task13) ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_8<T1,T2,T3,T4,T5,T6,T7,::System::ValueTuple_6<T8,T9,T10,T11,T12,T13>>>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_8<T1,T2,T3,T4,T5,T6,T7,::System::ValueTuple_6<T8,T9,T10,T11,T12,T13>>>* i___Cysharp__Threading__Tasks__IUniTaskSource_1___System__ValueTuple_8_T1_T2_T3_T4_T5_T6_T7___System__ValueTuple_6_T8_T9_T10_T11_T12_T13___() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UniTask_WhenAllPromise_13() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UniTask_WhenAllPromise_13", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UniTask_WhenAllPromise_13(UniTask_WhenAllPromise_13 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UniTask_WhenAllPromise_13", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UniTask_WhenAllPromise_13(UniTask_WhenAllPromise_13 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21740};

/// @brief Field t1, offset: 0x10, size: 0x8, def value: None
 T1  ___t1;

/// @brief Field t2, offset: 0x18, size: 0x8, def value: None
 T2  ___t2;

/// @brief Field t3, offset: 0x20, size: 0x8, def value: None
 T3  ___t3;

/// @brief Field t4, offset: 0x28, size: 0x8, def value: None
 T4  ___t4;

/// @brief Field t5, offset: 0x30, size: 0x8, def value: None
 T5  ___t5;

/// @brief Field t6, offset: 0x38, size: 0x8, def value: None
 T6  ___t6;

/// @brief Field t7, offset: 0x40, size: 0x8, def value: None
 T7  ___t7;

/// @brief Field t8, offset: 0x48, size: 0x8, def value: None
 T8  ___t8;

/// @brief Field t9, offset: 0x50, size: 0x8, def value: None
 T9  ___t9;

/// @brief Field t10, offset: 0x58, size: 0x8, def value: None
 T10  ___t10;

/// @brief Field t11, offset: 0x60, size: 0x8, def value: None
 T11  ___t11;

/// @brief Field t12, offset: 0x68, size: 0x8, def value: None
 T12  ___t12;

/// @brief Field t13, offset: 0x70, size: 0x8, def value: None
 T13  ___t13;

/// @brief Field completedCount, offset: 0x78, size: 0x4, def value: None
 int32_t  ___completedCount;

/// @brief Field core, offset: 0x80, size: 0x28, def value: None
 ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_8<T1,T2,T3,T4,T5,T6,T7,::System::ValueTuple_6<T8,T9,T10,T11,T12,T13>>>  ___core;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
// [CompilerGenerated]
// Dependencies System.Object
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12,typename T13>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTask/WhenAllPromise`13/<>c<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13>
class CORDL_TYPE WhenAllPromise_13_UniTask___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Cysharp::Threading::Tasks::WhenAllPromise_13_UniTask___c<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13>*  __9;

/// @brief Field <>9__15_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__15_0, put=setStaticF___9__15_0)) ::System::Action_1<::System::Object*>*  __9__15_0;

/// @brief Field <>9__15_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__15_1, put=setStaticF___9__15_1)) ::System::Action_1<::System::Object*>*  __9__15_1;

/// @brief Field <>9__15_10, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__15_10, put=setStaticF___9__15_10)) ::System::Action_1<::System::Object*>*  __9__15_10;

/// @brief Field <>9__15_11, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__15_11, put=setStaticF___9__15_11)) ::System::Action_1<::System::Object*>*  __9__15_11;

/// @brief Field <>9__15_12, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__15_12, put=setStaticF___9__15_12)) ::System::Action_1<::System::Object*>*  __9__15_12;

/// @brief Field <>9__15_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__15_2, put=setStaticF___9__15_2)) ::System::Action_1<::System::Object*>*  __9__15_2;

/// @brief Field <>9__15_3, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__15_3, put=setStaticF___9__15_3)) ::System::Action_1<::System::Object*>*  __9__15_3;

/// @brief Field <>9__15_4, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__15_4, put=setStaticF___9__15_4)) ::System::Action_1<::System::Object*>*  __9__15_4;

/// @brief Field <>9__15_5, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__15_5, put=setStaticF___9__15_5)) ::System::Action_1<::System::Object*>*  __9__15_5;

/// @brief Field <>9__15_6, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__15_6, put=setStaticF___9__15_6)) ::System::Action_1<::System::Object*>*  __9__15_6;

/// @brief Field <>9__15_7, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__15_7, put=setStaticF___9__15_7)) ::System::Action_1<::System::Object*>*  __9__15_7;

/// @brief Field <>9__15_8, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__15_8, put=setStaticF___9__15_8)) ::System::Action_1<::System::Object*>*  __9__15_8;

/// @brief Field <>9__15_9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__15_9, put=setStaticF___9__15_9)) ::System::Action_1<::System::Object*>*  __9__15_9;

static inline ::Cysharp::Threading::Tasks::WhenAllPromise_13_UniTask___c<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13>* New_ctor() ;

/// @brief Method <.ctor>b__15_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__15_0(::System::Object*  state) ;

/// @brief Method <.ctor>b__15_1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__15_1(::System::Object*  state) ;

/// @brief Method <.ctor>b__15_10, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__15_10(::System::Object*  state) ;

/// @brief Method <.ctor>b__15_11, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__15_11(::System::Object*  state) ;

/// @brief Method <.ctor>b__15_12, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__15_12(::System::Object*  state) ;

/// @brief Method <.ctor>b__15_2, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__15_2(::System::Object*  state) ;

/// @brief Method <.ctor>b__15_3, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__15_3(::System::Object*  state) ;

/// @brief Method <.ctor>b__15_4, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__15_4(::System::Object*  state) ;

/// @brief Method <.ctor>b__15_5, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__15_5(::System::Object*  state) ;

/// @brief Method <.ctor>b__15_6, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__15_6(::System::Object*  state) ;

/// @brief Method <.ctor>b__15_7, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__15_7(::System::Object*  state) ;

/// @brief Method <.ctor>b__15_8, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__15_8(::System::Object*  state) ;

/// @brief Method <.ctor>b__15_9, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__15_9(::System::Object*  state) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Threading::Tasks::WhenAllPromise_13_UniTask___c<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13>* getStaticF___9() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__15_0() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__15_1() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__15_10() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__15_11() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__15_12() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__15_2() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__15_3() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__15_4() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__15_5() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__15_6() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__15_7() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__15_8() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__15_9() ;

static inline void setStaticF___9(::Cysharp::Threading::Tasks::WhenAllPromise_13_UniTask___c<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12,T13>*  value) ;

static inline void setStaticF___9__15_0(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__15_1(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__15_10(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__15_11(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__15_12(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__15_2(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__15_3(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__15_4(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__15_5(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__15_6(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__15_7(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__15_8(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__15_9(::System::Action_1<::System::Object*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WhenAllPromise_13_UniTask___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WhenAllPromise_13_UniTask___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WhenAllPromise_13_UniTask___c(WhenAllPromise_13_UniTask___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WhenAllPromise_13_UniTask___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WhenAllPromise_13_UniTask___c(WhenAllPromise_13_UniTask___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21739};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
// Dependencies Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<TResult>, System.Object, System.ValueTuple`5<T1, T2, T3, T4, T5>, System.ValueTuple`8<T1, T2, T3, T4, T5, T6, T7, TRest>
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTask/WhenAllPromise`12<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12>
class CORDL_TYPE UniTask_WhenAllPromise_12 : public ::System::Object {
public:
// Declarations
using __c = ::Cysharp::Threading::Tasks::WhenAllPromise_12_UniTask___c<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12>;

/// @brief Field completedCount, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_completedCount, put=__cordl_internal_set_completedCount)) int32_t  completedCount;

/// @brief Field core, offset 0x78, size 0x28 
 __declspec(property(get=__cordl_internal_get_core, put=__cordl_internal_set_core)) ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_8<T1,T2,T3,T4,T5,T6,T7,::System::ValueTuple_5<T8,T9,T10,T11,T12>>>  core;

/// @brief Field t1, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_t1, put=__cordl_internal_set_t1)) T1  t1;

/// @brief Field t10, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_t10, put=__cordl_internal_set_t10)) T10  t10;

/// @brief Field t11, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_t11, put=__cordl_internal_set_t11)) T11  t11;

/// @brief Field t12, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_t12, put=__cordl_internal_set_t12)) T12  t12;

/// @brief Field t2, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_t2, put=__cordl_internal_set_t2)) T2  t2;

/// @brief Field t3, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_t3, put=__cordl_internal_set_t3)) T3  t3;

/// @brief Field t4, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_t4, put=__cordl_internal_set_t4)) T4  t4;

/// @brief Field t5, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_t5, put=__cordl_internal_set_t5)) T5  t5;

/// @brief Field t6, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_t6, put=__cordl_internal_set_t6)) T6  t6;

/// @brief Field t7, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_t7, put=__cordl_internal_set_t7)) T7  t7;

/// @brief Field t8, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_t8, put=__cordl_internal_set_t8)) T8  t8;

/// @brief Field t9, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_t9, put=__cordl_internal_set_t9)) T9  t9;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_8<T1,T2,T3,T4,T5,T6,T7,::System::ValueTuple_5<T8,T9,T10,T11,T12>>>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_8<T1,T2,T3,T4,T5,T6,T7,::System::ValueTuple_5<T8,T9,T10,T11,T12>>>*() noexcept;

/// @brief Method Cysharp.Threading.Tasks.IUniTaskSource.GetResult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Cysharp_Threading_Tasks_IUniTaskSource_GetResult(int16_t  token) ;

/// @brief Method GetResult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::ValueTuple_8<T1,T2,T3,T4,T5,T6,T7,::System::ValueTuple_5<T8,T9,T10,T11,T12>> GetResult(int16_t  token) ;

/// @brief Method GetStatus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(int16_t  token) ;

static inline ::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_12<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12>* New_ctor(::Cysharp::Threading::Tasks::UniTask_1<T1>  task1, ::Cysharp::Threading::Tasks::UniTask_1<T2>  task2, ::Cysharp::Threading::Tasks::UniTask_1<T3>  task3, ::Cysharp::Threading::Tasks::UniTask_1<T4>  task4, ::Cysharp::Threading::Tasks::UniTask_1<T5>  task5, ::Cysharp::Threading::Tasks::UniTask_1<T6>  task6, ::Cysharp::Threading::Tasks::UniTask_1<T7>  task7, ::Cysharp::Threading::Tasks::UniTask_1<T8>  task8, ::Cysharp::Threading::Tasks::UniTask_1<T9>  task9, ::Cysharp::Threading::Tasks::UniTask_1<T10>  task10, ::Cysharp::Threading::Tasks::UniTask_1<T11>  task11, ::Cysharp::Threading::Tasks::UniTask_1<T12>  task12) ;

/// @brief Method OnCompleted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token) ;

/// @brief Method TryInvokeContinuationT1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT1(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_12<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T1>>  awaiter) ;

/// @brief Method TryInvokeContinuationT10, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT10(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_12<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T10>>  awaiter) ;

/// @brief Method TryInvokeContinuationT11, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT11(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_12<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T11>>  awaiter) ;

/// @brief Method TryInvokeContinuationT12, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT12(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_12<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T12>>  awaiter) ;

/// @brief Method TryInvokeContinuationT2, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT2(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_12<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T2>>  awaiter) ;

/// @brief Method TryInvokeContinuationT3, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT3(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_12<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T3>>  awaiter) ;

/// @brief Method TryInvokeContinuationT4, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT4(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_12<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T4>>  awaiter) ;

/// @brief Method TryInvokeContinuationT5, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT5(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_12<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T5>>  awaiter) ;

/// @brief Method TryInvokeContinuationT6, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT6(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_12<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T6>>  awaiter) ;

/// @brief Method TryInvokeContinuationT7, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT7(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_12<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T7>>  awaiter) ;

/// @brief Method TryInvokeContinuationT8, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT8(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_12<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T8>>  awaiter) ;

/// @brief Method TryInvokeContinuationT9, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT9(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_12<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T9>>  awaiter) ;

/// @brief Method UnsafeGetStatus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus() ;

constexpr int32_t const& __cordl_internal_get_completedCount() const;

constexpr int32_t& __cordl_internal_get_completedCount() ;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_8<T1,T2,T3,T4,T5,T6,T7,::System::ValueTuple_5<T8,T9,T10,T11,T12>>> const& __cordl_internal_get_core() const;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_8<T1,T2,T3,T4,T5,T6,T7,::System::ValueTuple_5<T8,T9,T10,T11,T12>>>& __cordl_internal_get_core() ;

constexpr T1 const& __cordl_internal_get_t1() const;

constexpr T1& __cordl_internal_get_t1() ;

constexpr T10 const& __cordl_internal_get_t10() const;

constexpr T10& __cordl_internal_get_t10() ;

constexpr T11 const& __cordl_internal_get_t11() const;

constexpr T11& __cordl_internal_get_t11() ;

constexpr T12 const& __cordl_internal_get_t12() const;

constexpr T12& __cordl_internal_get_t12() ;

constexpr T2 const& __cordl_internal_get_t2() const;

constexpr T2& __cordl_internal_get_t2() ;

constexpr T3 const& __cordl_internal_get_t3() const;

constexpr T3& __cordl_internal_get_t3() ;

constexpr T4 const& __cordl_internal_get_t4() const;

constexpr T4& __cordl_internal_get_t4() ;

constexpr T5 const& __cordl_internal_get_t5() const;

constexpr T5& __cordl_internal_get_t5() ;

constexpr T6 const& __cordl_internal_get_t6() const;

constexpr T6& __cordl_internal_get_t6() ;

constexpr T7 const& __cordl_internal_get_t7() const;

constexpr T7& __cordl_internal_get_t7() ;

constexpr T8 const& __cordl_internal_get_t8() const;

constexpr T8& __cordl_internal_get_t8() ;

constexpr T9 const& __cordl_internal_get_t9() const;

constexpr T9& __cordl_internal_get_t9() ;

constexpr void __cordl_internal_set_completedCount(int32_t  value) ;

constexpr void __cordl_internal_set_core(::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_8<T1,T2,T3,T4,T5,T6,T7,::System::ValueTuple_5<T8,T9,T10,T11,T12>>>  value) ;

constexpr void __cordl_internal_set_t1(T1  value) ;

constexpr void __cordl_internal_set_t10(T10  value) ;

constexpr void __cordl_internal_set_t11(T11  value) ;

constexpr void __cordl_internal_set_t12(T12  value) ;

constexpr void __cordl_internal_set_t2(T2  value) ;

constexpr void __cordl_internal_set_t3(T3  value) ;

constexpr void __cordl_internal_set_t4(T4  value) ;

constexpr void __cordl_internal_set_t5(T5  value) ;

constexpr void __cordl_internal_set_t6(T6  value) ;

constexpr void __cordl_internal_set_t7(T7  value) ;

constexpr void __cordl_internal_set_t8(T8  value) ;

constexpr void __cordl_internal_set_t9(T9  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::UniTask_1<T1>  task1, ::Cysharp::Threading::Tasks::UniTask_1<T2>  task2, ::Cysharp::Threading::Tasks::UniTask_1<T3>  task3, ::Cysharp::Threading::Tasks::UniTask_1<T4>  task4, ::Cysharp::Threading::Tasks::UniTask_1<T5>  task5, ::Cysharp::Threading::Tasks::UniTask_1<T6>  task6, ::Cysharp::Threading::Tasks::UniTask_1<T7>  task7, ::Cysharp::Threading::Tasks::UniTask_1<T8>  task8, ::Cysharp::Threading::Tasks::UniTask_1<T9>  task9, ::Cysharp::Threading::Tasks::UniTask_1<T10>  task10, ::Cysharp::Threading::Tasks::UniTask_1<T11>  task11, ::Cysharp::Threading::Tasks::UniTask_1<T12>  task12) ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_8<T1,T2,T3,T4,T5,T6,T7,::System::ValueTuple_5<T8,T9,T10,T11,T12>>>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_8<T1,T2,T3,T4,T5,T6,T7,::System::ValueTuple_5<T8,T9,T10,T11,T12>>>* i___Cysharp__Threading__Tasks__IUniTaskSource_1___System__ValueTuple_8_T1_T2_T3_T4_T5_T6_T7___System__ValueTuple_5_T8_T9_T10_T11_T12___() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UniTask_WhenAllPromise_12() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UniTask_WhenAllPromise_12", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UniTask_WhenAllPromise_12(UniTask_WhenAllPromise_12 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UniTask_WhenAllPromise_12", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UniTask_WhenAllPromise_12(UniTask_WhenAllPromise_12 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21738};

/// @brief Field t1, offset: 0x10, size: 0x8, def value: None
 T1  ___t1;

/// @brief Field t2, offset: 0x18, size: 0x8, def value: None
 T2  ___t2;

/// @brief Field t3, offset: 0x20, size: 0x8, def value: None
 T3  ___t3;

/// @brief Field t4, offset: 0x28, size: 0x8, def value: None
 T4  ___t4;

/// @brief Field t5, offset: 0x30, size: 0x8, def value: None
 T5  ___t5;

/// @brief Field t6, offset: 0x38, size: 0x8, def value: None
 T6  ___t6;

/// @brief Field t7, offset: 0x40, size: 0x8, def value: None
 T7  ___t7;

/// @brief Field t8, offset: 0x48, size: 0x8, def value: None
 T8  ___t8;

/// @brief Field t9, offset: 0x50, size: 0x8, def value: None
 T9  ___t9;

/// @brief Field t10, offset: 0x58, size: 0x8, def value: None
 T10  ___t10;

/// @brief Field t11, offset: 0x60, size: 0x8, def value: None
 T11  ___t11;

/// @brief Field t12, offset: 0x68, size: 0x8, def value: None
 T12  ___t12;

/// @brief Field completedCount, offset: 0x70, size: 0x4, def value: None
 int32_t  ___completedCount;

/// @brief Field core, offset: 0x78, size: 0x28, def value: None
 ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_8<T1,T2,T3,T4,T5,T6,T7,::System::ValueTuple_5<T8,T9,T10,T11,T12>>>  ___core;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
// [CompilerGenerated]
// Dependencies System.Object
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTask/WhenAllPromise`12/<>c<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12>
class CORDL_TYPE WhenAllPromise_12_UniTask___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Cysharp::Threading::Tasks::WhenAllPromise_12_UniTask___c<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12>*  __9;

/// @brief Field <>9__14_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__14_0, put=setStaticF___9__14_0)) ::System::Action_1<::System::Object*>*  __9__14_0;

/// @brief Field <>9__14_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__14_1, put=setStaticF___9__14_1)) ::System::Action_1<::System::Object*>*  __9__14_1;

/// @brief Field <>9__14_10, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__14_10, put=setStaticF___9__14_10)) ::System::Action_1<::System::Object*>*  __9__14_10;

/// @brief Field <>9__14_11, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__14_11, put=setStaticF___9__14_11)) ::System::Action_1<::System::Object*>*  __9__14_11;

/// @brief Field <>9__14_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__14_2, put=setStaticF___9__14_2)) ::System::Action_1<::System::Object*>*  __9__14_2;

/// @brief Field <>9__14_3, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__14_3, put=setStaticF___9__14_3)) ::System::Action_1<::System::Object*>*  __9__14_3;

/// @brief Field <>9__14_4, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__14_4, put=setStaticF___9__14_4)) ::System::Action_1<::System::Object*>*  __9__14_4;

/// @brief Field <>9__14_5, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__14_5, put=setStaticF___9__14_5)) ::System::Action_1<::System::Object*>*  __9__14_5;

/// @brief Field <>9__14_6, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__14_6, put=setStaticF___9__14_6)) ::System::Action_1<::System::Object*>*  __9__14_6;

/// @brief Field <>9__14_7, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__14_7, put=setStaticF___9__14_7)) ::System::Action_1<::System::Object*>*  __9__14_7;

/// @brief Field <>9__14_8, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__14_8, put=setStaticF___9__14_8)) ::System::Action_1<::System::Object*>*  __9__14_8;

/// @brief Field <>9__14_9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__14_9, put=setStaticF___9__14_9)) ::System::Action_1<::System::Object*>*  __9__14_9;

static inline ::Cysharp::Threading::Tasks::WhenAllPromise_12_UniTask___c<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12>* New_ctor() ;

/// @brief Method <.ctor>b__14_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__14_0(::System::Object*  state) ;

/// @brief Method <.ctor>b__14_1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__14_1(::System::Object*  state) ;

/// @brief Method <.ctor>b__14_10, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__14_10(::System::Object*  state) ;

/// @brief Method <.ctor>b__14_11, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__14_11(::System::Object*  state) ;

/// @brief Method <.ctor>b__14_2, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__14_2(::System::Object*  state) ;

/// @brief Method <.ctor>b__14_3, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__14_3(::System::Object*  state) ;

/// @brief Method <.ctor>b__14_4, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__14_4(::System::Object*  state) ;

/// @brief Method <.ctor>b__14_5, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__14_5(::System::Object*  state) ;

/// @brief Method <.ctor>b__14_6, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__14_6(::System::Object*  state) ;

/// @brief Method <.ctor>b__14_7, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__14_7(::System::Object*  state) ;

/// @brief Method <.ctor>b__14_8, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__14_8(::System::Object*  state) ;

/// @brief Method <.ctor>b__14_9, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__14_9(::System::Object*  state) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Threading::Tasks::WhenAllPromise_12_UniTask___c<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12>* getStaticF___9() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__14_0() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__14_1() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__14_10() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__14_11() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__14_2() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__14_3() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__14_4() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__14_5() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__14_6() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__14_7() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__14_8() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__14_9() ;

static inline void setStaticF___9(::Cysharp::Threading::Tasks::WhenAllPromise_12_UniTask___c<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11,T12>*  value) ;

static inline void setStaticF___9__14_0(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__14_1(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__14_10(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__14_11(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__14_2(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__14_3(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__14_4(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__14_5(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__14_6(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__14_7(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__14_8(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__14_9(::System::Action_1<::System::Object*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WhenAllPromise_12_UniTask___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WhenAllPromise_12_UniTask___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WhenAllPromise_12_UniTask___c(WhenAllPromise_12_UniTask___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WhenAllPromise_12_UniTask___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WhenAllPromise_12_UniTask___c(WhenAllPromise_12_UniTask___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21737};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
// Dependencies Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<TResult>, System.Object, System.ValueTuple`4<T1, T2, T3, T4>, System.ValueTuple`8<T1, T2, T3, T4, T5, T6, T7, TRest>
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTask/WhenAllPromise`11<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11>
class CORDL_TYPE UniTask_WhenAllPromise_11 : public ::System::Object {
public:
// Declarations
using __c = ::Cysharp::Threading::Tasks::WhenAllPromise_11_UniTask___c<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11>;

/// @brief Field completedCount, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_completedCount, put=__cordl_internal_set_completedCount)) int32_t  completedCount;

/// @brief Field core, offset 0x70, size 0x28 
 __declspec(property(get=__cordl_internal_get_core, put=__cordl_internal_set_core)) ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_8<T1,T2,T3,T4,T5,T6,T7,::System::ValueTuple_4<T8,T9,T10,T11>>>  core;

/// @brief Field t1, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_t1, put=__cordl_internal_set_t1)) T1  t1;

/// @brief Field t10, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_t10, put=__cordl_internal_set_t10)) T10  t10;

/// @brief Field t11, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_t11, put=__cordl_internal_set_t11)) T11  t11;

/// @brief Field t2, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_t2, put=__cordl_internal_set_t2)) T2  t2;

/// @brief Field t3, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_t3, put=__cordl_internal_set_t3)) T3  t3;

/// @brief Field t4, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_t4, put=__cordl_internal_set_t4)) T4  t4;

/// @brief Field t5, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_t5, put=__cordl_internal_set_t5)) T5  t5;

/// @brief Field t6, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_t6, put=__cordl_internal_set_t6)) T6  t6;

/// @brief Field t7, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_t7, put=__cordl_internal_set_t7)) T7  t7;

/// @brief Field t8, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_t8, put=__cordl_internal_set_t8)) T8  t8;

/// @brief Field t9, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_t9, put=__cordl_internal_set_t9)) T9  t9;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_8<T1,T2,T3,T4,T5,T6,T7,::System::ValueTuple_4<T8,T9,T10,T11>>>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_8<T1,T2,T3,T4,T5,T6,T7,::System::ValueTuple_4<T8,T9,T10,T11>>>*() noexcept;

/// @brief Method Cysharp.Threading.Tasks.IUniTaskSource.GetResult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Cysharp_Threading_Tasks_IUniTaskSource_GetResult(int16_t  token) ;

/// @brief Method GetResult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::ValueTuple_8<T1,T2,T3,T4,T5,T6,T7,::System::ValueTuple_4<T8,T9,T10,T11>> GetResult(int16_t  token) ;

/// @brief Method GetStatus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(int16_t  token) ;

static inline ::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_11<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11>* New_ctor(::Cysharp::Threading::Tasks::UniTask_1<T1>  task1, ::Cysharp::Threading::Tasks::UniTask_1<T2>  task2, ::Cysharp::Threading::Tasks::UniTask_1<T3>  task3, ::Cysharp::Threading::Tasks::UniTask_1<T4>  task4, ::Cysharp::Threading::Tasks::UniTask_1<T5>  task5, ::Cysharp::Threading::Tasks::UniTask_1<T6>  task6, ::Cysharp::Threading::Tasks::UniTask_1<T7>  task7, ::Cysharp::Threading::Tasks::UniTask_1<T8>  task8, ::Cysharp::Threading::Tasks::UniTask_1<T9>  task9, ::Cysharp::Threading::Tasks::UniTask_1<T10>  task10, ::Cysharp::Threading::Tasks::UniTask_1<T11>  task11) ;

/// @brief Method OnCompleted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token) ;

/// @brief Method TryInvokeContinuationT1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT1(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_11<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T1>>  awaiter) ;

/// @brief Method TryInvokeContinuationT10, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT10(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_11<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T10>>  awaiter) ;

/// @brief Method TryInvokeContinuationT11, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT11(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_11<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T11>>  awaiter) ;

/// @brief Method TryInvokeContinuationT2, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT2(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_11<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T2>>  awaiter) ;

/// @brief Method TryInvokeContinuationT3, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT3(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_11<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T3>>  awaiter) ;

/// @brief Method TryInvokeContinuationT4, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT4(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_11<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T4>>  awaiter) ;

/// @brief Method TryInvokeContinuationT5, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT5(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_11<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T5>>  awaiter) ;

/// @brief Method TryInvokeContinuationT6, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT6(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_11<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T6>>  awaiter) ;

/// @brief Method TryInvokeContinuationT7, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT7(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_11<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T7>>  awaiter) ;

/// @brief Method TryInvokeContinuationT8, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT8(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_11<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T8>>  awaiter) ;

/// @brief Method TryInvokeContinuationT9, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT9(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_11<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T9>>  awaiter) ;

/// @brief Method UnsafeGetStatus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus() ;

constexpr int32_t const& __cordl_internal_get_completedCount() const;

constexpr int32_t& __cordl_internal_get_completedCount() ;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_8<T1,T2,T3,T4,T5,T6,T7,::System::ValueTuple_4<T8,T9,T10,T11>>> const& __cordl_internal_get_core() const;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_8<T1,T2,T3,T4,T5,T6,T7,::System::ValueTuple_4<T8,T9,T10,T11>>>& __cordl_internal_get_core() ;

constexpr T1 const& __cordl_internal_get_t1() const;

constexpr T1& __cordl_internal_get_t1() ;

constexpr T10 const& __cordl_internal_get_t10() const;

constexpr T10& __cordl_internal_get_t10() ;

constexpr T11 const& __cordl_internal_get_t11() const;

constexpr T11& __cordl_internal_get_t11() ;

constexpr T2 const& __cordl_internal_get_t2() const;

constexpr T2& __cordl_internal_get_t2() ;

constexpr T3 const& __cordl_internal_get_t3() const;

constexpr T3& __cordl_internal_get_t3() ;

constexpr T4 const& __cordl_internal_get_t4() const;

constexpr T4& __cordl_internal_get_t4() ;

constexpr T5 const& __cordl_internal_get_t5() const;

constexpr T5& __cordl_internal_get_t5() ;

constexpr T6 const& __cordl_internal_get_t6() const;

constexpr T6& __cordl_internal_get_t6() ;

constexpr T7 const& __cordl_internal_get_t7() const;

constexpr T7& __cordl_internal_get_t7() ;

constexpr T8 const& __cordl_internal_get_t8() const;

constexpr T8& __cordl_internal_get_t8() ;

constexpr T9 const& __cordl_internal_get_t9() const;

constexpr T9& __cordl_internal_get_t9() ;

constexpr void __cordl_internal_set_completedCount(int32_t  value) ;

constexpr void __cordl_internal_set_core(::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_8<T1,T2,T3,T4,T5,T6,T7,::System::ValueTuple_4<T8,T9,T10,T11>>>  value) ;

constexpr void __cordl_internal_set_t1(T1  value) ;

constexpr void __cordl_internal_set_t10(T10  value) ;

constexpr void __cordl_internal_set_t11(T11  value) ;

constexpr void __cordl_internal_set_t2(T2  value) ;

constexpr void __cordl_internal_set_t3(T3  value) ;

constexpr void __cordl_internal_set_t4(T4  value) ;

constexpr void __cordl_internal_set_t5(T5  value) ;

constexpr void __cordl_internal_set_t6(T6  value) ;

constexpr void __cordl_internal_set_t7(T7  value) ;

constexpr void __cordl_internal_set_t8(T8  value) ;

constexpr void __cordl_internal_set_t9(T9  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::UniTask_1<T1>  task1, ::Cysharp::Threading::Tasks::UniTask_1<T2>  task2, ::Cysharp::Threading::Tasks::UniTask_1<T3>  task3, ::Cysharp::Threading::Tasks::UniTask_1<T4>  task4, ::Cysharp::Threading::Tasks::UniTask_1<T5>  task5, ::Cysharp::Threading::Tasks::UniTask_1<T6>  task6, ::Cysharp::Threading::Tasks::UniTask_1<T7>  task7, ::Cysharp::Threading::Tasks::UniTask_1<T8>  task8, ::Cysharp::Threading::Tasks::UniTask_1<T9>  task9, ::Cysharp::Threading::Tasks::UniTask_1<T10>  task10, ::Cysharp::Threading::Tasks::UniTask_1<T11>  task11) ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_8<T1,T2,T3,T4,T5,T6,T7,::System::ValueTuple_4<T8,T9,T10,T11>>>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_8<T1,T2,T3,T4,T5,T6,T7,::System::ValueTuple_4<T8,T9,T10,T11>>>* i___Cysharp__Threading__Tasks__IUniTaskSource_1___System__ValueTuple_8_T1_T2_T3_T4_T5_T6_T7___System__ValueTuple_4_T8_T9_T10_T11___() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UniTask_WhenAllPromise_11() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UniTask_WhenAllPromise_11", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UniTask_WhenAllPromise_11(UniTask_WhenAllPromise_11 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UniTask_WhenAllPromise_11", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UniTask_WhenAllPromise_11(UniTask_WhenAllPromise_11 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21736};

/// @brief Field t1, offset: 0x10, size: 0x8, def value: None
 T1  ___t1;

/// @brief Field t2, offset: 0x18, size: 0x8, def value: None
 T2  ___t2;

/// @brief Field t3, offset: 0x20, size: 0x8, def value: None
 T3  ___t3;

/// @brief Field t4, offset: 0x28, size: 0x8, def value: None
 T4  ___t4;

/// @brief Field t5, offset: 0x30, size: 0x8, def value: None
 T5  ___t5;

/// @brief Field t6, offset: 0x38, size: 0x8, def value: None
 T6  ___t6;

/// @brief Field t7, offset: 0x40, size: 0x8, def value: None
 T7  ___t7;

/// @brief Field t8, offset: 0x48, size: 0x8, def value: None
 T8  ___t8;

/// @brief Field t9, offset: 0x50, size: 0x8, def value: None
 T9  ___t9;

/// @brief Field t10, offset: 0x58, size: 0x8, def value: None
 T10  ___t10;

/// @brief Field t11, offset: 0x60, size: 0x8, def value: None
 T11  ___t11;

/// @brief Field completedCount, offset: 0x68, size: 0x4, def value: None
 int32_t  ___completedCount;

/// @brief Field core, offset: 0x70, size: 0x28, def value: None
 ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_8<T1,T2,T3,T4,T5,T6,T7,::System::ValueTuple_4<T8,T9,T10,T11>>>  ___core;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
// [CompilerGenerated]
// Dependencies System.Object
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTask/WhenAllPromise`11/<>c<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11>
class CORDL_TYPE WhenAllPromise_11_UniTask___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Cysharp::Threading::Tasks::WhenAllPromise_11_UniTask___c<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11>*  __9;

/// @brief Field <>9__13_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__13_0, put=setStaticF___9__13_0)) ::System::Action_1<::System::Object*>*  __9__13_0;

/// @brief Field <>9__13_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__13_1, put=setStaticF___9__13_1)) ::System::Action_1<::System::Object*>*  __9__13_1;

/// @brief Field <>9__13_10, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__13_10, put=setStaticF___9__13_10)) ::System::Action_1<::System::Object*>*  __9__13_10;

/// @brief Field <>9__13_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__13_2, put=setStaticF___9__13_2)) ::System::Action_1<::System::Object*>*  __9__13_2;

/// @brief Field <>9__13_3, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__13_3, put=setStaticF___9__13_3)) ::System::Action_1<::System::Object*>*  __9__13_3;

/// @brief Field <>9__13_4, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__13_4, put=setStaticF___9__13_4)) ::System::Action_1<::System::Object*>*  __9__13_4;

/// @brief Field <>9__13_5, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__13_5, put=setStaticF___9__13_5)) ::System::Action_1<::System::Object*>*  __9__13_5;

/// @brief Field <>9__13_6, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__13_6, put=setStaticF___9__13_6)) ::System::Action_1<::System::Object*>*  __9__13_6;

/// @brief Field <>9__13_7, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__13_7, put=setStaticF___9__13_7)) ::System::Action_1<::System::Object*>*  __9__13_7;

/// @brief Field <>9__13_8, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__13_8, put=setStaticF___9__13_8)) ::System::Action_1<::System::Object*>*  __9__13_8;

/// @brief Field <>9__13_9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__13_9, put=setStaticF___9__13_9)) ::System::Action_1<::System::Object*>*  __9__13_9;

static inline ::Cysharp::Threading::Tasks::WhenAllPromise_11_UniTask___c<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11>* New_ctor() ;

/// @brief Method <.ctor>b__13_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__13_0(::System::Object*  state) ;

/// @brief Method <.ctor>b__13_1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__13_1(::System::Object*  state) ;

/// @brief Method <.ctor>b__13_10, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__13_10(::System::Object*  state) ;

/// @brief Method <.ctor>b__13_2, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__13_2(::System::Object*  state) ;

/// @brief Method <.ctor>b__13_3, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__13_3(::System::Object*  state) ;

/// @brief Method <.ctor>b__13_4, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__13_4(::System::Object*  state) ;

/// @brief Method <.ctor>b__13_5, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__13_5(::System::Object*  state) ;

/// @brief Method <.ctor>b__13_6, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__13_6(::System::Object*  state) ;

/// @brief Method <.ctor>b__13_7, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__13_7(::System::Object*  state) ;

/// @brief Method <.ctor>b__13_8, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__13_8(::System::Object*  state) ;

/// @brief Method <.ctor>b__13_9, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__13_9(::System::Object*  state) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Threading::Tasks::WhenAllPromise_11_UniTask___c<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11>* getStaticF___9() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__13_0() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__13_1() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__13_10() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__13_2() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__13_3() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__13_4() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__13_5() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__13_6() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__13_7() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__13_8() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__13_9() ;

static inline void setStaticF___9(::Cysharp::Threading::Tasks::WhenAllPromise_11_UniTask___c<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10,T11>*  value) ;

static inline void setStaticF___9__13_0(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__13_1(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__13_10(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__13_2(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__13_3(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__13_4(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__13_5(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__13_6(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__13_7(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__13_8(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__13_9(::System::Action_1<::System::Object*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WhenAllPromise_11_UniTask___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WhenAllPromise_11_UniTask___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WhenAllPromise_11_UniTask___c(WhenAllPromise_11_UniTask___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WhenAllPromise_11_UniTask___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WhenAllPromise_11_UniTask___c(WhenAllPromise_11_UniTask___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21735};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
// Dependencies Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<TResult>, System.Object, System.ValueTuple`3<T1, T2, T3>, System.ValueTuple`8<T1, T2, T3, T4, T5, T6, T7, TRest>
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTask/WhenAllPromise`10<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10>
class CORDL_TYPE UniTask_WhenAllPromise_10 : public ::System::Object {
public:
// Declarations
using __c = ::Cysharp::Threading::Tasks::WhenAllPromise_10_UniTask___c<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10>;

/// @brief Field completedCount, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_completedCount, put=__cordl_internal_set_completedCount)) int32_t  completedCount;

/// @brief Field core, offset 0x68, size 0x28 
 __declspec(property(get=__cordl_internal_get_core, put=__cordl_internal_set_core)) ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_8<T1,T2,T3,T4,T5,T6,T7,::System::ValueTuple_3<T8,T9,T10>>>  core;

/// @brief Field t1, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_t1, put=__cordl_internal_set_t1)) T1  t1;

/// @brief Field t10, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_t10, put=__cordl_internal_set_t10)) T10  t10;

/// @brief Field t2, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_t2, put=__cordl_internal_set_t2)) T2  t2;

/// @brief Field t3, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_t3, put=__cordl_internal_set_t3)) T3  t3;

/// @brief Field t4, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_t4, put=__cordl_internal_set_t4)) T4  t4;

/// @brief Field t5, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_t5, put=__cordl_internal_set_t5)) T5  t5;

/// @brief Field t6, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_t6, put=__cordl_internal_set_t6)) T6  t6;

/// @brief Field t7, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_t7, put=__cordl_internal_set_t7)) T7  t7;

/// @brief Field t8, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_t8, put=__cordl_internal_set_t8)) T8  t8;

/// @brief Field t9, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_t9, put=__cordl_internal_set_t9)) T9  t9;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_8<T1,T2,T3,T4,T5,T6,T7,::System::ValueTuple_3<T8,T9,T10>>>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_8<T1,T2,T3,T4,T5,T6,T7,::System::ValueTuple_3<T8,T9,T10>>>*() noexcept;

/// @brief Method Cysharp.Threading.Tasks.IUniTaskSource.GetResult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Cysharp_Threading_Tasks_IUniTaskSource_GetResult(int16_t  token) ;

/// @brief Method GetResult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::ValueTuple_8<T1,T2,T3,T4,T5,T6,T7,::System::ValueTuple_3<T8,T9,T10>> GetResult(int16_t  token) ;

/// @brief Method GetStatus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(int16_t  token) ;

static inline ::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_10<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10>* New_ctor(::Cysharp::Threading::Tasks::UniTask_1<T1>  task1, ::Cysharp::Threading::Tasks::UniTask_1<T2>  task2, ::Cysharp::Threading::Tasks::UniTask_1<T3>  task3, ::Cysharp::Threading::Tasks::UniTask_1<T4>  task4, ::Cysharp::Threading::Tasks::UniTask_1<T5>  task5, ::Cysharp::Threading::Tasks::UniTask_1<T6>  task6, ::Cysharp::Threading::Tasks::UniTask_1<T7>  task7, ::Cysharp::Threading::Tasks::UniTask_1<T8>  task8, ::Cysharp::Threading::Tasks::UniTask_1<T9>  task9, ::Cysharp::Threading::Tasks::UniTask_1<T10>  task10) ;

/// @brief Method OnCompleted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token) ;

/// @brief Method TryInvokeContinuationT1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT1(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_10<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T1>>  awaiter) ;

/// @brief Method TryInvokeContinuationT10, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT10(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_10<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T10>>  awaiter) ;

/// @brief Method TryInvokeContinuationT2, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT2(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_10<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T2>>  awaiter) ;

/// @brief Method TryInvokeContinuationT3, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT3(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_10<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T3>>  awaiter) ;

/// @brief Method TryInvokeContinuationT4, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT4(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_10<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T4>>  awaiter) ;

/// @brief Method TryInvokeContinuationT5, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT5(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_10<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T5>>  awaiter) ;

/// @brief Method TryInvokeContinuationT6, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT6(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_10<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T6>>  awaiter) ;

/// @brief Method TryInvokeContinuationT7, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT7(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_10<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T7>>  awaiter) ;

/// @brief Method TryInvokeContinuationT8, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT8(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_10<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T8>>  awaiter) ;

/// @brief Method TryInvokeContinuationT9, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT9(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_10<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T9>>  awaiter) ;

/// @brief Method UnsafeGetStatus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus() ;

constexpr int32_t const& __cordl_internal_get_completedCount() const;

constexpr int32_t& __cordl_internal_get_completedCount() ;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_8<T1,T2,T3,T4,T5,T6,T7,::System::ValueTuple_3<T8,T9,T10>>> const& __cordl_internal_get_core() const;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_8<T1,T2,T3,T4,T5,T6,T7,::System::ValueTuple_3<T8,T9,T10>>>& __cordl_internal_get_core() ;

constexpr T1 const& __cordl_internal_get_t1() const;

constexpr T1& __cordl_internal_get_t1() ;

constexpr T10 const& __cordl_internal_get_t10() const;

constexpr T10& __cordl_internal_get_t10() ;

constexpr T2 const& __cordl_internal_get_t2() const;

constexpr T2& __cordl_internal_get_t2() ;

constexpr T3 const& __cordl_internal_get_t3() const;

constexpr T3& __cordl_internal_get_t3() ;

constexpr T4 const& __cordl_internal_get_t4() const;

constexpr T4& __cordl_internal_get_t4() ;

constexpr T5 const& __cordl_internal_get_t5() const;

constexpr T5& __cordl_internal_get_t5() ;

constexpr T6 const& __cordl_internal_get_t6() const;

constexpr T6& __cordl_internal_get_t6() ;

constexpr T7 const& __cordl_internal_get_t7() const;

constexpr T7& __cordl_internal_get_t7() ;

constexpr T8 const& __cordl_internal_get_t8() const;

constexpr T8& __cordl_internal_get_t8() ;

constexpr T9 const& __cordl_internal_get_t9() const;

constexpr T9& __cordl_internal_get_t9() ;

constexpr void __cordl_internal_set_completedCount(int32_t  value) ;

constexpr void __cordl_internal_set_core(::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_8<T1,T2,T3,T4,T5,T6,T7,::System::ValueTuple_3<T8,T9,T10>>>  value) ;

constexpr void __cordl_internal_set_t1(T1  value) ;

constexpr void __cordl_internal_set_t10(T10  value) ;

constexpr void __cordl_internal_set_t2(T2  value) ;

constexpr void __cordl_internal_set_t3(T3  value) ;

constexpr void __cordl_internal_set_t4(T4  value) ;

constexpr void __cordl_internal_set_t5(T5  value) ;

constexpr void __cordl_internal_set_t6(T6  value) ;

constexpr void __cordl_internal_set_t7(T7  value) ;

constexpr void __cordl_internal_set_t8(T8  value) ;

constexpr void __cordl_internal_set_t9(T9  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::UniTask_1<T1>  task1, ::Cysharp::Threading::Tasks::UniTask_1<T2>  task2, ::Cysharp::Threading::Tasks::UniTask_1<T3>  task3, ::Cysharp::Threading::Tasks::UniTask_1<T4>  task4, ::Cysharp::Threading::Tasks::UniTask_1<T5>  task5, ::Cysharp::Threading::Tasks::UniTask_1<T6>  task6, ::Cysharp::Threading::Tasks::UniTask_1<T7>  task7, ::Cysharp::Threading::Tasks::UniTask_1<T8>  task8, ::Cysharp::Threading::Tasks::UniTask_1<T9>  task9, ::Cysharp::Threading::Tasks::UniTask_1<T10>  task10) ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_8<T1,T2,T3,T4,T5,T6,T7,::System::ValueTuple_3<T8,T9,T10>>>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_8<T1,T2,T3,T4,T5,T6,T7,::System::ValueTuple_3<T8,T9,T10>>>* i___Cysharp__Threading__Tasks__IUniTaskSource_1___System__ValueTuple_8_T1_T2_T3_T4_T5_T6_T7___System__ValueTuple_3_T8_T9_T10___() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UniTask_WhenAllPromise_10() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UniTask_WhenAllPromise_10", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UniTask_WhenAllPromise_10(UniTask_WhenAllPromise_10 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UniTask_WhenAllPromise_10", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UniTask_WhenAllPromise_10(UniTask_WhenAllPromise_10 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21734};

/// @brief Field t1, offset: 0x10, size: 0x8, def value: None
 T1  ___t1;

/// @brief Field t2, offset: 0x18, size: 0x8, def value: None
 T2  ___t2;

/// @brief Field t3, offset: 0x20, size: 0x8, def value: None
 T3  ___t3;

/// @brief Field t4, offset: 0x28, size: 0x8, def value: None
 T4  ___t4;

/// @brief Field t5, offset: 0x30, size: 0x8, def value: None
 T5  ___t5;

/// @brief Field t6, offset: 0x38, size: 0x8, def value: None
 T6  ___t6;

/// @brief Field t7, offset: 0x40, size: 0x8, def value: None
 T7  ___t7;

/// @brief Field t8, offset: 0x48, size: 0x8, def value: None
 T8  ___t8;

/// @brief Field t9, offset: 0x50, size: 0x8, def value: None
 T9  ___t9;

/// @brief Field t10, offset: 0x58, size: 0x8, def value: None
 T10  ___t10;

/// @brief Field completedCount, offset: 0x60, size: 0x4, def value: None
 int32_t  ___completedCount;

/// @brief Field core, offset: 0x68, size: 0x28, def value: None
 ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_8<T1,T2,T3,T4,T5,T6,T7,::System::ValueTuple_3<T8,T9,T10>>>  ___core;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
// [CompilerGenerated]
// Dependencies System.Object
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTask/WhenAllPromise`10/<>c<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10>
class CORDL_TYPE WhenAllPromise_10_UniTask___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Cysharp::Threading::Tasks::WhenAllPromise_10_UniTask___c<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10>*  __9;

/// @brief Field <>9__12_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__12_0, put=setStaticF___9__12_0)) ::System::Action_1<::System::Object*>*  __9__12_0;

/// @brief Field <>9__12_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__12_1, put=setStaticF___9__12_1)) ::System::Action_1<::System::Object*>*  __9__12_1;

/// @brief Field <>9__12_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__12_2, put=setStaticF___9__12_2)) ::System::Action_1<::System::Object*>*  __9__12_2;

/// @brief Field <>9__12_3, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__12_3, put=setStaticF___9__12_3)) ::System::Action_1<::System::Object*>*  __9__12_3;

/// @brief Field <>9__12_4, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__12_4, put=setStaticF___9__12_4)) ::System::Action_1<::System::Object*>*  __9__12_4;

/// @brief Field <>9__12_5, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__12_5, put=setStaticF___9__12_5)) ::System::Action_1<::System::Object*>*  __9__12_5;

/// @brief Field <>9__12_6, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__12_6, put=setStaticF___9__12_6)) ::System::Action_1<::System::Object*>*  __9__12_6;

/// @brief Field <>9__12_7, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__12_7, put=setStaticF___9__12_7)) ::System::Action_1<::System::Object*>*  __9__12_7;

/// @brief Field <>9__12_8, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__12_8, put=setStaticF___9__12_8)) ::System::Action_1<::System::Object*>*  __9__12_8;

/// @brief Field <>9__12_9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__12_9, put=setStaticF___9__12_9)) ::System::Action_1<::System::Object*>*  __9__12_9;

static inline ::Cysharp::Threading::Tasks::WhenAllPromise_10_UniTask___c<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10>* New_ctor() ;

/// @brief Method <.ctor>b__12_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__12_0(::System::Object*  state) ;

/// @brief Method <.ctor>b__12_1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__12_1(::System::Object*  state) ;

/// @brief Method <.ctor>b__12_2, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__12_2(::System::Object*  state) ;

/// @brief Method <.ctor>b__12_3, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__12_3(::System::Object*  state) ;

/// @brief Method <.ctor>b__12_4, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__12_4(::System::Object*  state) ;

/// @brief Method <.ctor>b__12_5, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__12_5(::System::Object*  state) ;

/// @brief Method <.ctor>b__12_6, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__12_6(::System::Object*  state) ;

/// @brief Method <.ctor>b__12_7, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__12_7(::System::Object*  state) ;

/// @brief Method <.ctor>b__12_8, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__12_8(::System::Object*  state) ;

/// @brief Method <.ctor>b__12_9, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__12_9(::System::Object*  state) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Threading::Tasks::WhenAllPromise_10_UniTask___c<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10>* getStaticF___9() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__12_0() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__12_1() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__12_2() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__12_3() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__12_4() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__12_5() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__12_6() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__12_7() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__12_8() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__12_9() ;

static inline void setStaticF___9(::Cysharp::Threading::Tasks::WhenAllPromise_10_UniTask___c<T1,T2,T3,T4,T5,T6,T7,T8,T9,T10>*  value) ;

static inline void setStaticF___9__12_0(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__12_1(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__12_2(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__12_3(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__12_4(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__12_5(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__12_6(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__12_7(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__12_8(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__12_9(::System::Action_1<::System::Object*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WhenAllPromise_10_UniTask___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WhenAllPromise_10_UniTask___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WhenAllPromise_10_UniTask___c(WhenAllPromise_10_UniTask___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WhenAllPromise_10_UniTask___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WhenAllPromise_10_UniTask___c(WhenAllPromise_10_UniTask___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21733};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
// Dependencies Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<TResult>, System.Object, System.ValueTuple`2<T1, T2>, System.ValueTuple`8<T1, T2, T3, T4, T5, T6, T7, TRest>
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTask/WhenAllPromise`9<T1,T2,T3,T4,T5,T6,T7,T8,T9>
class CORDL_TYPE UniTask_WhenAllPromise_9 : public ::System::Object {
public:
// Declarations
using __c = ::Cysharp::Threading::Tasks::WhenAllPromise_9_UniTask___c<T1, T2, T3, T4, T5, T6, T7, T8, T9>;

/// @brief Field completedCount, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_completedCount, put=__cordl_internal_set_completedCount)) int32_t  completedCount;

/// @brief Field core, offset 0x60, size 0x28 
 __declspec(property(get=__cordl_internal_get_core, put=__cordl_internal_set_core)) ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_8<T1,T2,T3,T4,T5,T6,T7,::System::ValueTuple_2<T8,T9>>>  core;

/// @brief Field t1, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_t1, put=__cordl_internal_set_t1)) T1  t1;

/// @brief Field t2, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_t2, put=__cordl_internal_set_t2)) T2  t2;

/// @brief Field t3, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_t3, put=__cordl_internal_set_t3)) T3  t3;

/// @brief Field t4, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_t4, put=__cordl_internal_set_t4)) T4  t4;

/// @brief Field t5, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_t5, put=__cordl_internal_set_t5)) T5  t5;

/// @brief Field t6, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_t6, put=__cordl_internal_set_t6)) T6  t6;

/// @brief Field t7, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_t7, put=__cordl_internal_set_t7)) T7  t7;

/// @brief Field t8, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_t8, put=__cordl_internal_set_t8)) T8  t8;

/// @brief Field t9, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_t9, put=__cordl_internal_set_t9)) T9  t9;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_8<T1,T2,T3,T4,T5,T6,T7,::System::ValueTuple_2<T8,T9>>>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_8<T1,T2,T3,T4,T5,T6,T7,::System::ValueTuple_2<T8,T9>>>*() noexcept;

/// @brief Method Cysharp.Threading.Tasks.IUniTaskSource.GetResult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Cysharp_Threading_Tasks_IUniTaskSource_GetResult(int16_t  token) ;

/// @brief Method GetResult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::ValueTuple_8<T1,T2,T3,T4,T5,T6,T7,::System::ValueTuple_2<T8,T9>> GetResult(int16_t  token) ;

/// @brief Method GetStatus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(int16_t  token) ;

static inline ::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_9<T1,T2,T3,T4,T5,T6,T7,T8,T9>* New_ctor(::Cysharp::Threading::Tasks::UniTask_1<T1>  task1, ::Cysharp::Threading::Tasks::UniTask_1<T2>  task2, ::Cysharp::Threading::Tasks::UniTask_1<T3>  task3, ::Cysharp::Threading::Tasks::UniTask_1<T4>  task4, ::Cysharp::Threading::Tasks::UniTask_1<T5>  task5, ::Cysharp::Threading::Tasks::UniTask_1<T6>  task6, ::Cysharp::Threading::Tasks::UniTask_1<T7>  task7, ::Cysharp::Threading::Tasks::UniTask_1<T8>  task8, ::Cysharp::Threading::Tasks::UniTask_1<T9>  task9) ;

/// @brief Method OnCompleted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token) ;

/// @brief Method TryInvokeContinuationT1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT1(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_9<T1,T2,T3,T4,T5,T6,T7,T8,T9>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T1>>  awaiter) ;

/// @brief Method TryInvokeContinuationT2, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT2(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_9<T1,T2,T3,T4,T5,T6,T7,T8,T9>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T2>>  awaiter) ;

/// @brief Method TryInvokeContinuationT3, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT3(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_9<T1,T2,T3,T4,T5,T6,T7,T8,T9>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T3>>  awaiter) ;

/// @brief Method TryInvokeContinuationT4, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT4(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_9<T1,T2,T3,T4,T5,T6,T7,T8,T9>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T4>>  awaiter) ;

/// @brief Method TryInvokeContinuationT5, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT5(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_9<T1,T2,T3,T4,T5,T6,T7,T8,T9>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T5>>  awaiter) ;

/// @brief Method TryInvokeContinuationT6, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT6(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_9<T1,T2,T3,T4,T5,T6,T7,T8,T9>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T6>>  awaiter) ;

/// @brief Method TryInvokeContinuationT7, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT7(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_9<T1,T2,T3,T4,T5,T6,T7,T8,T9>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T7>>  awaiter) ;

/// @brief Method TryInvokeContinuationT8, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT8(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_9<T1,T2,T3,T4,T5,T6,T7,T8,T9>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T8>>  awaiter) ;

/// @brief Method TryInvokeContinuationT9, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT9(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_9<T1,T2,T3,T4,T5,T6,T7,T8,T9>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T9>>  awaiter) ;

/// @brief Method UnsafeGetStatus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus() ;

constexpr int32_t const& __cordl_internal_get_completedCount() const;

constexpr int32_t& __cordl_internal_get_completedCount() ;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_8<T1,T2,T3,T4,T5,T6,T7,::System::ValueTuple_2<T8,T9>>> const& __cordl_internal_get_core() const;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_8<T1,T2,T3,T4,T5,T6,T7,::System::ValueTuple_2<T8,T9>>>& __cordl_internal_get_core() ;

constexpr T1 const& __cordl_internal_get_t1() const;

constexpr T1& __cordl_internal_get_t1() ;

constexpr T2 const& __cordl_internal_get_t2() const;

constexpr T2& __cordl_internal_get_t2() ;

constexpr T3 const& __cordl_internal_get_t3() const;

constexpr T3& __cordl_internal_get_t3() ;

constexpr T4 const& __cordl_internal_get_t4() const;

constexpr T4& __cordl_internal_get_t4() ;

constexpr T5 const& __cordl_internal_get_t5() const;

constexpr T5& __cordl_internal_get_t5() ;

constexpr T6 const& __cordl_internal_get_t6() const;

constexpr T6& __cordl_internal_get_t6() ;

constexpr T7 const& __cordl_internal_get_t7() const;

constexpr T7& __cordl_internal_get_t7() ;

constexpr T8 const& __cordl_internal_get_t8() const;

constexpr T8& __cordl_internal_get_t8() ;

constexpr T9 const& __cordl_internal_get_t9() const;

constexpr T9& __cordl_internal_get_t9() ;

constexpr void __cordl_internal_set_completedCount(int32_t  value) ;

constexpr void __cordl_internal_set_core(::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_8<T1,T2,T3,T4,T5,T6,T7,::System::ValueTuple_2<T8,T9>>>  value) ;

constexpr void __cordl_internal_set_t1(T1  value) ;

constexpr void __cordl_internal_set_t2(T2  value) ;

constexpr void __cordl_internal_set_t3(T3  value) ;

constexpr void __cordl_internal_set_t4(T4  value) ;

constexpr void __cordl_internal_set_t5(T5  value) ;

constexpr void __cordl_internal_set_t6(T6  value) ;

constexpr void __cordl_internal_set_t7(T7  value) ;

constexpr void __cordl_internal_set_t8(T8  value) ;

constexpr void __cordl_internal_set_t9(T9  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::UniTask_1<T1>  task1, ::Cysharp::Threading::Tasks::UniTask_1<T2>  task2, ::Cysharp::Threading::Tasks::UniTask_1<T3>  task3, ::Cysharp::Threading::Tasks::UniTask_1<T4>  task4, ::Cysharp::Threading::Tasks::UniTask_1<T5>  task5, ::Cysharp::Threading::Tasks::UniTask_1<T6>  task6, ::Cysharp::Threading::Tasks::UniTask_1<T7>  task7, ::Cysharp::Threading::Tasks::UniTask_1<T8>  task8, ::Cysharp::Threading::Tasks::UniTask_1<T9>  task9) ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_8<T1,T2,T3,T4,T5,T6,T7,::System::ValueTuple_2<T8,T9>>>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_8<T1,T2,T3,T4,T5,T6,T7,::System::ValueTuple_2<T8,T9>>>* i___Cysharp__Threading__Tasks__IUniTaskSource_1___System__ValueTuple_8_T1_T2_T3_T4_T5_T6_T7___System__ValueTuple_2_T8_T9___() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UniTask_WhenAllPromise_9() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UniTask_WhenAllPromise_9", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UniTask_WhenAllPromise_9(UniTask_WhenAllPromise_9 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UniTask_WhenAllPromise_9", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UniTask_WhenAllPromise_9(UniTask_WhenAllPromise_9 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21732};

/// @brief Field t1, offset: 0x10, size: 0x8, def value: None
 T1  ___t1;

/// @brief Field t2, offset: 0x18, size: 0x8, def value: None
 T2  ___t2;

/// @brief Field t3, offset: 0x20, size: 0x8, def value: None
 T3  ___t3;

/// @brief Field t4, offset: 0x28, size: 0x8, def value: None
 T4  ___t4;

/// @brief Field t5, offset: 0x30, size: 0x8, def value: None
 T5  ___t5;

/// @brief Field t6, offset: 0x38, size: 0x8, def value: None
 T6  ___t6;

/// @brief Field t7, offset: 0x40, size: 0x8, def value: None
 T7  ___t7;

/// @brief Field t8, offset: 0x48, size: 0x8, def value: None
 T8  ___t8;

/// @brief Field t9, offset: 0x50, size: 0x8, def value: None
 T9  ___t9;

/// @brief Field completedCount, offset: 0x58, size: 0x4, def value: None
 int32_t  ___completedCount;

/// @brief Field core, offset: 0x60, size: 0x28, def value: None
 ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_8<T1,T2,T3,T4,T5,T6,T7,::System::ValueTuple_2<T8,T9>>>  ___core;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
// [CompilerGenerated]
// Dependencies System.Object
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTask/WhenAllPromise`9/<>c<T1,T2,T3,T4,T5,T6,T7,T8,T9>
class CORDL_TYPE WhenAllPromise_9_UniTask___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Cysharp::Threading::Tasks::WhenAllPromise_9_UniTask___c<T1,T2,T3,T4,T5,T6,T7,T8,T9>*  __9;

/// @brief Field <>9__11_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__11_0, put=setStaticF___9__11_0)) ::System::Action_1<::System::Object*>*  __9__11_0;

/// @brief Field <>9__11_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__11_1, put=setStaticF___9__11_1)) ::System::Action_1<::System::Object*>*  __9__11_1;

/// @brief Field <>9__11_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__11_2, put=setStaticF___9__11_2)) ::System::Action_1<::System::Object*>*  __9__11_2;

/// @brief Field <>9__11_3, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__11_3, put=setStaticF___9__11_3)) ::System::Action_1<::System::Object*>*  __9__11_3;

/// @brief Field <>9__11_4, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__11_4, put=setStaticF___9__11_4)) ::System::Action_1<::System::Object*>*  __9__11_4;

/// @brief Field <>9__11_5, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__11_5, put=setStaticF___9__11_5)) ::System::Action_1<::System::Object*>*  __9__11_5;

/// @brief Field <>9__11_6, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__11_6, put=setStaticF___9__11_6)) ::System::Action_1<::System::Object*>*  __9__11_6;

/// @brief Field <>9__11_7, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__11_7, put=setStaticF___9__11_7)) ::System::Action_1<::System::Object*>*  __9__11_7;

/// @brief Field <>9__11_8, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__11_8, put=setStaticF___9__11_8)) ::System::Action_1<::System::Object*>*  __9__11_8;

static inline ::Cysharp::Threading::Tasks::WhenAllPromise_9_UniTask___c<T1,T2,T3,T4,T5,T6,T7,T8,T9>* New_ctor() ;

/// @brief Method <.ctor>b__11_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__11_0(::System::Object*  state) ;

/// @brief Method <.ctor>b__11_1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__11_1(::System::Object*  state) ;

/// @brief Method <.ctor>b__11_2, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__11_2(::System::Object*  state) ;

/// @brief Method <.ctor>b__11_3, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__11_3(::System::Object*  state) ;

/// @brief Method <.ctor>b__11_4, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__11_4(::System::Object*  state) ;

/// @brief Method <.ctor>b__11_5, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__11_5(::System::Object*  state) ;

/// @brief Method <.ctor>b__11_6, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__11_6(::System::Object*  state) ;

/// @brief Method <.ctor>b__11_7, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__11_7(::System::Object*  state) ;

/// @brief Method <.ctor>b__11_8, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__11_8(::System::Object*  state) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Threading::Tasks::WhenAllPromise_9_UniTask___c<T1,T2,T3,T4,T5,T6,T7,T8,T9>* getStaticF___9() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__11_0() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__11_1() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__11_2() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__11_3() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__11_4() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__11_5() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__11_6() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__11_7() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__11_8() ;

static inline void setStaticF___9(::Cysharp::Threading::Tasks::WhenAllPromise_9_UniTask___c<T1,T2,T3,T4,T5,T6,T7,T8,T9>*  value) ;

static inline void setStaticF___9__11_0(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__11_1(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__11_2(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__11_3(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__11_4(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__11_5(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__11_6(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__11_7(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__11_8(::System::Action_1<::System::Object*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WhenAllPromise_9_UniTask___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WhenAllPromise_9_UniTask___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WhenAllPromise_9_UniTask___c(WhenAllPromise_9_UniTask___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WhenAllPromise_9_UniTask___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WhenAllPromise_9_UniTask___c(WhenAllPromise_9_UniTask___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21731};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
// Dependencies Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<TResult>, System.Object, System.ValueTuple`1<T1>, System.ValueTuple`8<T1, T2, T3, T4, T5, T6, T7, TRest>
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTask/WhenAllPromise`8<T1,T2,T3,T4,T5,T6,T7,T8>
class CORDL_TYPE UniTask_WhenAllPromise_8 : public ::System::Object {
public:
// Declarations
using __c = ::Cysharp::Threading::Tasks::WhenAllPromise_8_UniTask___c<T1, T2, T3, T4, T5, T6, T7, T8>;

/// @brief Field completedCount, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_completedCount, put=__cordl_internal_set_completedCount)) int32_t  completedCount;

/// @brief Field core, offset 0x58, size 0x28 
 __declspec(property(get=__cordl_internal_get_core, put=__cordl_internal_set_core)) ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_8<T1,T2,T3,T4,T5,T6,T7,::System::ValueTuple_1<T8>>>  core;

/// @brief Field t1, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_t1, put=__cordl_internal_set_t1)) T1  t1;

/// @brief Field t2, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_t2, put=__cordl_internal_set_t2)) T2  t2;

/// @brief Field t3, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_t3, put=__cordl_internal_set_t3)) T3  t3;

/// @brief Field t4, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_t4, put=__cordl_internal_set_t4)) T4  t4;

/// @brief Field t5, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_t5, put=__cordl_internal_set_t5)) T5  t5;

/// @brief Field t6, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_t6, put=__cordl_internal_set_t6)) T6  t6;

/// @brief Field t7, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_t7, put=__cordl_internal_set_t7)) T7  t7;

/// @brief Field t8, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_t8, put=__cordl_internal_set_t8)) T8  t8;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_8<T1,T2,T3,T4,T5,T6,T7,::System::ValueTuple_1<T8>>>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_8<T1,T2,T3,T4,T5,T6,T7,::System::ValueTuple_1<T8>>>*() noexcept;

/// @brief Method Cysharp.Threading.Tasks.IUniTaskSource.GetResult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Cysharp_Threading_Tasks_IUniTaskSource_GetResult(int16_t  token) ;

/// @brief Method GetResult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::ValueTuple_8<T1,T2,T3,T4,T5,T6,T7,::System::ValueTuple_1<T8>> GetResult(int16_t  token) ;

/// @brief Method GetStatus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(int16_t  token) ;

static inline ::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_8<T1,T2,T3,T4,T5,T6,T7,T8>* New_ctor(::Cysharp::Threading::Tasks::UniTask_1<T1>  task1, ::Cysharp::Threading::Tasks::UniTask_1<T2>  task2, ::Cysharp::Threading::Tasks::UniTask_1<T3>  task3, ::Cysharp::Threading::Tasks::UniTask_1<T4>  task4, ::Cysharp::Threading::Tasks::UniTask_1<T5>  task5, ::Cysharp::Threading::Tasks::UniTask_1<T6>  task6, ::Cysharp::Threading::Tasks::UniTask_1<T7>  task7, ::Cysharp::Threading::Tasks::UniTask_1<T8>  task8) ;

/// @brief Method OnCompleted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token) ;

/// @brief Method TryInvokeContinuationT1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT1(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_8<T1,T2,T3,T4,T5,T6,T7,T8>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T1>>  awaiter) ;

/// @brief Method TryInvokeContinuationT2, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT2(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_8<T1,T2,T3,T4,T5,T6,T7,T8>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T2>>  awaiter) ;

/// @brief Method TryInvokeContinuationT3, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT3(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_8<T1,T2,T3,T4,T5,T6,T7,T8>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T3>>  awaiter) ;

/// @brief Method TryInvokeContinuationT4, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT4(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_8<T1,T2,T3,T4,T5,T6,T7,T8>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T4>>  awaiter) ;

/// @brief Method TryInvokeContinuationT5, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT5(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_8<T1,T2,T3,T4,T5,T6,T7,T8>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T5>>  awaiter) ;

/// @brief Method TryInvokeContinuationT6, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT6(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_8<T1,T2,T3,T4,T5,T6,T7,T8>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T6>>  awaiter) ;

/// @brief Method TryInvokeContinuationT7, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT7(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_8<T1,T2,T3,T4,T5,T6,T7,T8>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T7>>  awaiter) ;

/// @brief Method TryInvokeContinuationT8, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT8(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_8<T1,T2,T3,T4,T5,T6,T7,T8>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T8>>  awaiter) ;

/// @brief Method UnsafeGetStatus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus() ;

constexpr int32_t const& __cordl_internal_get_completedCount() const;

constexpr int32_t& __cordl_internal_get_completedCount() ;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_8<T1,T2,T3,T4,T5,T6,T7,::System::ValueTuple_1<T8>>> const& __cordl_internal_get_core() const;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_8<T1,T2,T3,T4,T5,T6,T7,::System::ValueTuple_1<T8>>>& __cordl_internal_get_core() ;

constexpr T1 const& __cordl_internal_get_t1() const;

constexpr T1& __cordl_internal_get_t1() ;

constexpr T2 const& __cordl_internal_get_t2() const;

constexpr T2& __cordl_internal_get_t2() ;

constexpr T3 const& __cordl_internal_get_t3() const;

constexpr T3& __cordl_internal_get_t3() ;

constexpr T4 const& __cordl_internal_get_t4() const;

constexpr T4& __cordl_internal_get_t4() ;

constexpr T5 const& __cordl_internal_get_t5() const;

constexpr T5& __cordl_internal_get_t5() ;

constexpr T6 const& __cordl_internal_get_t6() const;

constexpr T6& __cordl_internal_get_t6() ;

constexpr T7 const& __cordl_internal_get_t7() const;

constexpr T7& __cordl_internal_get_t7() ;

constexpr T8 const& __cordl_internal_get_t8() const;

constexpr T8& __cordl_internal_get_t8() ;

constexpr void __cordl_internal_set_completedCount(int32_t  value) ;

constexpr void __cordl_internal_set_core(::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_8<T1,T2,T3,T4,T5,T6,T7,::System::ValueTuple_1<T8>>>  value) ;

constexpr void __cordl_internal_set_t1(T1  value) ;

constexpr void __cordl_internal_set_t2(T2  value) ;

constexpr void __cordl_internal_set_t3(T3  value) ;

constexpr void __cordl_internal_set_t4(T4  value) ;

constexpr void __cordl_internal_set_t5(T5  value) ;

constexpr void __cordl_internal_set_t6(T6  value) ;

constexpr void __cordl_internal_set_t7(T7  value) ;

constexpr void __cordl_internal_set_t8(T8  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::UniTask_1<T1>  task1, ::Cysharp::Threading::Tasks::UniTask_1<T2>  task2, ::Cysharp::Threading::Tasks::UniTask_1<T3>  task3, ::Cysharp::Threading::Tasks::UniTask_1<T4>  task4, ::Cysharp::Threading::Tasks::UniTask_1<T5>  task5, ::Cysharp::Threading::Tasks::UniTask_1<T6>  task6, ::Cysharp::Threading::Tasks::UniTask_1<T7>  task7, ::Cysharp::Threading::Tasks::UniTask_1<T8>  task8) ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_8<T1,T2,T3,T4,T5,T6,T7,::System::ValueTuple_1<T8>>>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_8<T1,T2,T3,T4,T5,T6,T7,::System::ValueTuple_1<T8>>>* i___Cysharp__Threading__Tasks__IUniTaskSource_1___System__ValueTuple_8_T1_T2_T3_T4_T5_T6_T7___System__ValueTuple_1_T8___() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UniTask_WhenAllPromise_8() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UniTask_WhenAllPromise_8", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UniTask_WhenAllPromise_8(UniTask_WhenAllPromise_8 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UniTask_WhenAllPromise_8", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UniTask_WhenAllPromise_8(UniTask_WhenAllPromise_8 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21730};

/// @brief Field t1, offset: 0x10, size: 0x8, def value: None
 T1  ___t1;

/// @brief Field t2, offset: 0x18, size: 0x8, def value: None
 T2  ___t2;

/// @brief Field t3, offset: 0x20, size: 0x8, def value: None
 T3  ___t3;

/// @brief Field t4, offset: 0x28, size: 0x8, def value: None
 T4  ___t4;

/// @brief Field t5, offset: 0x30, size: 0x8, def value: None
 T5  ___t5;

/// @brief Field t6, offset: 0x38, size: 0x8, def value: None
 T6  ___t6;

/// @brief Field t7, offset: 0x40, size: 0x8, def value: None
 T7  ___t7;

/// @brief Field t8, offset: 0x48, size: 0x8, def value: None
 T8  ___t8;

/// @brief Field completedCount, offset: 0x50, size: 0x4, def value: None
 int32_t  ___completedCount;

/// @brief Field core, offset: 0x58, size: 0x28, def value: None
 ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_8<T1,T2,T3,T4,T5,T6,T7,::System::ValueTuple_1<T8>>>  ___core;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
// [CompilerGenerated]
// Dependencies System.Object
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTask/WhenAllPromise`8/<>c<T1,T2,T3,T4,T5,T6,T7,T8>
class CORDL_TYPE WhenAllPromise_8_UniTask___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Cysharp::Threading::Tasks::WhenAllPromise_8_UniTask___c<T1,T2,T3,T4,T5,T6,T7,T8>*  __9;

/// @brief Field <>9__10_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__10_0, put=setStaticF___9__10_0)) ::System::Action_1<::System::Object*>*  __9__10_0;

/// @brief Field <>9__10_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__10_1, put=setStaticF___9__10_1)) ::System::Action_1<::System::Object*>*  __9__10_1;

/// @brief Field <>9__10_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__10_2, put=setStaticF___9__10_2)) ::System::Action_1<::System::Object*>*  __9__10_2;

/// @brief Field <>9__10_3, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__10_3, put=setStaticF___9__10_3)) ::System::Action_1<::System::Object*>*  __9__10_3;

/// @brief Field <>9__10_4, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__10_4, put=setStaticF___9__10_4)) ::System::Action_1<::System::Object*>*  __9__10_4;

/// @brief Field <>9__10_5, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__10_5, put=setStaticF___9__10_5)) ::System::Action_1<::System::Object*>*  __9__10_5;

/// @brief Field <>9__10_6, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__10_6, put=setStaticF___9__10_6)) ::System::Action_1<::System::Object*>*  __9__10_6;

/// @brief Field <>9__10_7, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__10_7, put=setStaticF___9__10_7)) ::System::Action_1<::System::Object*>*  __9__10_7;

static inline ::Cysharp::Threading::Tasks::WhenAllPromise_8_UniTask___c<T1,T2,T3,T4,T5,T6,T7,T8>* New_ctor() ;

/// @brief Method <.ctor>b__10_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__10_0(::System::Object*  state) ;

/// @brief Method <.ctor>b__10_1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__10_1(::System::Object*  state) ;

/// @brief Method <.ctor>b__10_2, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__10_2(::System::Object*  state) ;

/// @brief Method <.ctor>b__10_3, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__10_3(::System::Object*  state) ;

/// @brief Method <.ctor>b__10_4, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__10_4(::System::Object*  state) ;

/// @brief Method <.ctor>b__10_5, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__10_5(::System::Object*  state) ;

/// @brief Method <.ctor>b__10_6, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__10_6(::System::Object*  state) ;

/// @brief Method <.ctor>b__10_7, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__10_7(::System::Object*  state) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Threading::Tasks::WhenAllPromise_8_UniTask___c<T1,T2,T3,T4,T5,T6,T7,T8>* getStaticF___9() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__10_0() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__10_1() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__10_2() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__10_3() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__10_4() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__10_5() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__10_6() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__10_7() ;

static inline void setStaticF___9(::Cysharp::Threading::Tasks::WhenAllPromise_8_UniTask___c<T1,T2,T3,T4,T5,T6,T7,T8>*  value) ;

static inline void setStaticF___9__10_0(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__10_1(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__10_2(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__10_3(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__10_4(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__10_5(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__10_6(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__10_7(::System::Action_1<::System::Object*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WhenAllPromise_8_UniTask___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WhenAllPromise_8_UniTask___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WhenAllPromise_8_UniTask___c(WhenAllPromise_8_UniTask___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WhenAllPromise_8_UniTask___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WhenAllPromise_8_UniTask___c(WhenAllPromise_8_UniTask___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21729};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
// Dependencies Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<TResult>, System.Object, System.ValueTuple`7<T1, T2, T3, T4, T5, T6, T7>
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTask/WhenAllPromise`7<T1,T2,T3,T4,T5,T6,T7>
class CORDL_TYPE UniTask_WhenAllPromise_7 : public ::System::Object {
public:
// Declarations
using __c = ::Cysharp::Threading::Tasks::WhenAllPromise_7_UniTask___c<T1, T2, T3, T4, T5, T6, T7>;

/// @brief Field completedCount, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_completedCount, put=__cordl_internal_set_completedCount)) int32_t  completedCount;

/// @brief Field core, offset 0x50, size 0x28 
 __declspec(property(get=__cordl_internal_get_core, put=__cordl_internal_set_core)) ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_7<T1,T2,T3,T4,T5,T6,T7>>  core;

/// @brief Field t1, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_t1, put=__cordl_internal_set_t1)) T1  t1;

/// @brief Field t2, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_t2, put=__cordl_internal_set_t2)) T2  t2;

/// @brief Field t3, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_t3, put=__cordl_internal_set_t3)) T3  t3;

/// @brief Field t4, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_t4, put=__cordl_internal_set_t4)) T4  t4;

/// @brief Field t5, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_t5, put=__cordl_internal_set_t5)) T5  t5;

/// @brief Field t6, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_t6, put=__cordl_internal_set_t6)) T6  t6;

/// @brief Field t7, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_t7, put=__cordl_internal_set_t7)) T7  t7;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_7<T1,T2,T3,T4,T5,T6,T7>>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_7<T1,T2,T3,T4,T5,T6,T7>>*() noexcept;

/// @brief Method Cysharp.Threading.Tasks.IUniTaskSource.GetResult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Cysharp_Threading_Tasks_IUniTaskSource_GetResult(int16_t  token) ;

/// @brief Method GetResult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::ValueTuple_7<T1,T2,T3,T4,T5,T6,T7> GetResult(int16_t  token) ;

/// @brief Method GetStatus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(int16_t  token) ;

static inline ::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_7<T1,T2,T3,T4,T5,T6,T7>* New_ctor(::Cysharp::Threading::Tasks::UniTask_1<T1>  task1, ::Cysharp::Threading::Tasks::UniTask_1<T2>  task2, ::Cysharp::Threading::Tasks::UniTask_1<T3>  task3, ::Cysharp::Threading::Tasks::UniTask_1<T4>  task4, ::Cysharp::Threading::Tasks::UniTask_1<T5>  task5, ::Cysharp::Threading::Tasks::UniTask_1<T6>  task6, ::Cysharp::Threading::Tasks::UniTask_1<T7>  task7) ;

/// @brief Method OnCompleted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token) ;

/// @brief Method TryInvokeContinuationT1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT1(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_7<T1,T2,T3,T4,T5,T6,T7>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T1>>  awaiter) ;

/// @brief Method TryInvokeContinuationT2, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT2(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_7<T1,T2,T3,T4,T5,T6,T7>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T2>>  awaiter) ;

/// @brief Method TryInvokeContinuationT3, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT3(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_7<T1,T2,T3,T4,T5,T6,T7>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T3>>  awaiter) ;

/// @brief Method TryInvokeContinuationT4, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT4(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_7<T1,T2,T3,T4,T5,T6,T7>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T4>>  awaiter) ;

/// @brief Method TryInvokeContinuationT5, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT5(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_7<T1,T2,T3,T4,T5,T6,T7>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T5>>  awaiter) ;

/// @brief Method TryInvokeContinuationT6, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT6(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_7<T1,T2,T3,T4,T5,T6,T7>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T6>>  awaiter) ;

/// @brief Method TryInvokeContinuationT7, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT7(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_7<T1,T2,T3,T4,T5,T6,T7>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T7>>  awaiter) ;

/// @brief Method UnsafeGetStatus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus() ;

constexpr int32_t const& __cordl_internal_get_completedCount() const;

constexpr int32_t& __cordl_internal_get_completedCount() ;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_7<T1,T2,T3,T4,T5,T6,T7>> const& __cordl_internal_get_core() const;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_7<T1,T2,T3,T4,T5,T6,T7>>& __cordl_internal_get_core() ;

constexpr T1 const& __cordl_internal_get_t1() const;

constexpr T1& __cordl_internal_get_t1() ;

constexpr T2 const& __cordl_internal_get_t2() const;

constexpr T2& __cordl_internal_get_t2() ;

constexpr T3 const& __cordl_internal_get_t3() const;

constexpr T3& __cordl_internal_get_t3() ;

constexpr T4 const& __cordl_internal_get_t4() const;

constexpr T4& __cordl_internal_get_t4() ;

constexpr T5 const& __cordl_internal_get_t5() const;

constexpr T5& __cordl_internal_get_t5() ;

constexpr T6 const& __cordl_internal_get_t6() const;

constexpr T6& __cordl_internal_get_t6() ;

constexpr T7 const& __cordl_internal_get_t7() const;

constexpr T7& __cordl_internal_get_t7() ;

constexpr void __cordl_internal_set_completedCount(int32_t  value) ;

constexpr void __cordl_internal_set_core(::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_7<T1,T2,T3,T4,T5,T6,T7>>  value) ;

constexpr void __cordl_internal_set_t1(T1  value) ;

constexpr void __cordl_internal_set_t2(T2  value) ;

constexpr void __cordl_internal_set_t3(T3  value) ;

constexpr void __cordl_internal_set_t4(T4  value) ;

constexpr void __cordl_internal_set_t5(T5  value) ;

constexpr void __cordl_internal_set_t6(T6  value) ;

constexpr void __cordl_internal_set_t7(T7  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::UniTask_1<T1>  task1, ::Cysharp::Threading::Tasks::UniTask_1<T2>  task2, ::Cysharp::Threading::Tasks::UniTask_1<T3>  task3, ::Cysharp::Threading::Tasks::UniTask_1<T4>  task4, ::Cysharp::Threading::Tasks::UniTask_1<T5>  task5, ::Cysharp::Threading::Tasks::UniTask_1<T6>  task6, ::Cysharp::Threading::Tasks::UniTask_1<T7>  task7) ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_7<T1,T2,T3,T4,T5,T6,T7>>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_7<T1,T2,T3,T4,T5,T6,T7>>* i___Cysharp__Threading__Tasks__IUniTaskSource_1___System__ValueTuple_7_T1_T2_T3_T4_T5_T6_T7__() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UniTask_WhenAllPromise_7() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UniTask_WhenAllPromise_7", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UniTask_WhenAllPromise_7(UniTask_WhenAllPromise_7 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UniTask_WhenAllPromise_7", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UniTask_WhenAllPromise_7(UniTask_WhenAllPromise_7 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21728};

/// @brief Field t1, offset: 0x10, size: 0x8, def value: None
 T1  ___t1;

/// @brief Field t2, offset: 0x18, size: 0x8, def value: None
 T2  ___t2;

/// @brief Field t3, offset: 0x20, size: 0x8, def value: None
 T3  ___t3;

/// @brief Field t4, offset: 0x28, size: 0x8, def value: None
 T4  ___t4;

/// @brief Field t5, offset: 0x30, size: 0x8, def value: None
 T5  ___t5;

/// @brief Field t6, offset: 0x38, size: 0x8, def value: None
 T6  ___t6;

/// @brief Field t7, offset: 0x40, size: 0x8, def value: None
 T7  ___t7;

/// @brief Field completedCount, offset: 0x48, size: 0x4, def value: None
 int32_t  ___completedCount;

/// @brief Field core, offset: 0x50, size: 0x28, def value: None
 ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_7<T1,T2,T3,T4,T5,T6,T7>>  ___core;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
// [CompilerGenerated]
// Dependencies System.Object
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTask/WhenAllPromise`7/<>c<T1,T2,T3,T4,T5,T6,T7>
class CORDL_TYPE WhenAllPromise_7_UniTask___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Cysharp::Threading::Tasks::WhenAllPromise_7_UniTask___c<T1,T2,T3,T4,T5,T6,T7>*  __9;

/// @brief Field <>9__9_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__9_0, put=setStaticF___9__9_0)) ::System::Action_1<::System::Object*>*  __9__9_0;

/// @brief Field <>9__9_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__9_1, put=setStaticF___9__9_1)) ::System::Action_1<::System::Object*>*  __9__9_1;

/// @brief Field <>9__9_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__9_2, put=setStaticF___9__9_2)) ::System::Action_1<::System::Object*>*  __9__9_2;

/// @brief Field <>9__9_3, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__9_3, put=setStaticF___9__9_3)) ::System::Action_1<::System::Object*>*  __9__9_3;

/// @brief Field <>9__9_4, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__9_4, put=setStaticF___9__9_4)) ::System::Action_1<::System::Object*>*  __9__9_4;

/// @brief Field <>9__9_5, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__9_5, put=setStaticF___9__9_5)) ::System::Action_1<::System::Object*>*  __9__9_5;

/// @brief Field <>9__9_6, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__9_6, put=setStaticF___9__9_6)) ::System::Action_1<::System::Object*>*  __9__9_6;

static inline ::Cysharp::Threading::Tasks::WhenAllPromise_7_UniTask___c<T1,T2,T3,T4,T5,T6,T7>* New_ctor() ;

/// @brief Method <.ctor>b__9_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__9_0(::System::Object*  state) ;

/// @brief Method <.ctor>b__9_1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__9_1(::System::Object*  state) ;

/// @brief Method <.ctor>b__9_2, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__9_2(::System::Object*  state) ;

/// @brief Method <.ctor>b__9_3, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__9_3(::System::Object*  state) ;

/// @brief Method <.ctor>b__9_4, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__9_4(::System::Object*  state) ;

/// @brief Method <.ctor>b__9_5, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__9_5(::System::Object*  state) ;

/// @brief Method <.ctor>b__9_6, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__9_6(::System::Object*  state) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Threading::Tasks::WhenAllPromise_7_UniTask___c<T1,T2,T3,T4,T5,T6,T7>* getStaticF___9() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__9_0() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__9_1() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__9_2() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__9_3() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__9_4() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__9_5() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__9_6() ;

static inline void setStaticF___9(::Cysharp::Threading::Tasks::WhenAllPromise_7_UniTask___c<T1,T2,T3,T4,T5,T6,T7>*  value) ;

static inline void setStaticF___9__9_0(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__9_1(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__9_2(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__9_3(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__9_4(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__9_5(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__9_6(::System::Action_1<::System::Object*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WhenAllPromise_7_UniTask___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WhenAllPromise_7_UniTask___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WhenAllPromise_7_UniTask___c(WhenAllPromise_7_UniTask___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WhenAllPromise_7_UniTask___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WhenAllPromise_7_UniTask___c(WhenAllPromise_7_UniTask___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21727};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
// Dependencies Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<TResult>, System.Object, System.ValueTuple`6<T1, T2, T3, T4, T5, T6>
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTask/WhenAllPromise`6<T1,T2,T3,T4,T5,T6>
class CORDL_TYPE UniTask_WhenAllPromise_6 : public ::System::Object {
public:
// Declarations
using __c = ::Cysharp::Threading::Tasks::WhenAllPromise_6_UniTask___c<T1, T2, T3, T4, T5, T6>;

/// @brief Field completedCount, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_completedCount, put=__cordl_internal_set_completedCount)) int32_t  completedCount;

/// @brief Field core, offset 0x48, size 0x28 
 __declspec(property(get=__cordl_internal_get_core, put=__cordl_internal_set_core)) ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_6<T1,T2,T3,T4,T5,T6>>  core;

/// @brief Field t1, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_t1, put=__cordl_internal_set_t1)) T1  t1;

/// @brief Field t2, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_t2, put=__cordl_internal_set_t2)) T2  t2;

/// @brief Field t3, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_t3, put=__cordl_internal_set_t3)) T3  t3;

/// @brief Field t4, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_t4, put=__cordl_internal_set_t4)) T4  t4;

/// @brief Field t5, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_t5, put=__cordl_internal_set_t5)) T5  t5;

/// @brief Field t6, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_t6, put=__cordl_internal_set_t6)) T6  t6;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_6<T1,T2,T3,T4,T5,T6>>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_6<T1,T2,T3,T4,T5,T6>>*() noexcept;

/// @brief Method Cysharp.Threading.Tasks.IUniTaskSource.GetResult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Cysharp_Threading_Tasks_IUniTaskSource_GetResult(int16_t  token) ;

/// @brief Method GetResult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::ValueTuple_6<T1,T2,T3,T4,T5,T6> GetResult(int16_t  token) ;

/// @brief Method GetStatus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(int16_t  token) ;

static inline ::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_6<T1,T2,T3,T4,T5,T6>* New_ctor(::Cysharp::Threading::Tasks::UniTask_1<T1>  task1, ::Cysharp::Threading::Tasks::UniTask_1<T2>  task2, ::Cysharp::Threading::Tasks::UniTask_1<T3>  task3, ::Cysharp::Threading::Tasks::UniTask_1<T4>  task4, ::Cysharp::Threading::Tasks::UniTask_1<T5>  task5, ::Cysharp::Threading::Tasks::UniTask_1<T6>  task6) ;

/// @brief Method OnCompleted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token) ;

/// @brief Method TryInvokeContinuationT1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT1(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_6<T1,T2,T3,T4,T5,T6>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T1>>  awaiter) ;

/// @brief Method TryInvokeContinuationT2, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT2(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_6<T1,T2,T3,T4,T5,T6>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T2>>  awaiter) ;

/// @brief Method TryInvokeContinuationT3, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT3(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_6<T1,T2,T3,T4,T5,T6>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T3>>  awaiter) ;

/// @brief Method TryInvokeContinuationT4, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT4(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_6<T1,T2,T3,T4,T5,T6>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T4>>  awaiter) ;

/// @brief Method TryInvokeContinuationT5, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT5(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_6<T1,T2,T3,T4,T5,T6>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T5>>  awaiter) ;

/// @brief Method TryInvokeContinuationT6, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT6(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_6<T1,T2,T3,T4,T5,T6>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T6>>  awaiter) ;

/// @brief Method UnsafeGetStatus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus() ;

constexpr int32_t const& __cordl_internal_get_completedCount() const;

constexpr int32_t& __cordl_internal_get_completedCount() ;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_6<T1,T2,T3,T4,T5,T6>> const& __cordl_internal_get_core() const;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_6<T1,T2,T3,T4,T5,T6>>& __cordl_internal_get_core() ;

constexpr T1 const& __cordl_internal_get_t1() const;

constexpr T1& __cordl_internal_get_t1() ;

constexpr T2 const& __cordl_internal_get_t2() const;

constexpr T2& __cordl_internal_get_t2() ;

constexpr T3 const& __cordl_internal_get_t3() const;

constexpr T3& __cordl_internal_get_t3() ;

constexpr T4 const& __cordl_internal_get_t4() const;

constexpr T4& __cordl_internal_get_t4() ;

constexpr T5 const& __cordl_internal_get_t5() const;

constexpr T5& __cordl_internal_get_t5() ;

constexpr T6 const& __cordl_internal_get_t6() const;

constexpr T6& __cordl_internal_get_t6() ;

constexpr void __cordl_internal_set_completedCount(int32_t  value) ;

constexpr void __cordl_internal_set_core(::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_6<T1,T2,T3,T4,T5,T6>>  value) ;

constexpr void __cordl_internal_set_t1(T1  value) ;

constexpr void __cordl_internal_set_t2(T2  value) ;

constexpr void __cordl_internal_set_t3(T3  value) ;

constexpr void __cordl_internal_set_t4(T4  value) ;

constexpr void __cordl_internal_set_t5(T5  value) ;

constexpr void __cordl_internal_set_t6(T6  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::UniTask_1<T1>  task1, ::Cysharp::Threading::Tasks::UniTask_1<T2>  task2, ::Cysharp::Threading::Tasks::UniTask_1<T3>  task3, ::Cysharp::Threading::Tasks::UniTask_1<T4>  task4, ::Cysharp::Threading::Tasks::UniTask_1<T5>  task5, ::Cysharp::Threading::Tasks::UniTask_1<T6>  task6) ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_6<T1,T2,T3,T4,T5,T6>>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_6<T1,T2,T3,T4,T5,T6>>* i___Cysharp__Threading__Tasks__IUniTaskSource_1___System__ValueTuple_6_T1_T2_T3_T4_T5_T6__() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UniTask_WhenAllPromise_6() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UniTask_WhenAllPromise_6", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UniTask_WhenAllPromise_6(UniTask_WhenAllPromise_6 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UniTask_WhenAllPromise_6", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UniTask_WhenAllPromise_6(UniTask_WhenAllPromise_6 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21726};

/// @brief Field t1, offset: 0x10, size: 0x8, def value: None
 T1  ___t1;

/// @brief Field t2, offset: 0x18, size: 0x8, def value: None
 T2  ___t2;

/// @brief Field t3, offset: 0x20, size: 0x8, def value: None
 T3  ___t3;

/// @brief Field t4, offset: 0x28, size: 0x8, def value: None
 T4  ___t4;

/// @brief Field t5, offset: 0x30, size: 0x8, def value: None
 T5  ___t5;

/// @brief Field t6, offset: 0x38, size: 0x8, def value: None
 T6  ___t6;

/// @brief Field completedCount, offset: 0x40, size: 0x4, def value: None
 int32_t  ___completedCount;

/// @brief Field core, offset: 0x48, size: 0x28, def value: None
 ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_6<T1,T2,T3,T4,T5,T6>>  ___core;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
// [CompilerGenerated]
// Dependencies System.Object
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTask/WhenAllPromise`6/<>c<T1,T2,T3,T4,T5,T6>
class CORDL_TYPE WhenAllPromise_6_UniTask___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Cysharp::Threading::Tasks::WhenAllPromise_6_UniTask___c<T1,T2,T3,T4,T5,T6>*  __9;

/// @brief Field <>9__8_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__8_0, put=setStaticF___9__8_0)) ::System::Action_1<::System::Object*>*  __9__8_0;

/// @brief Field <>9__8_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__8_1, put=setStaticF___9__8_1)) ::System::Action_1<::System::Object*>*  __9__8_1;

/// @brief Field <>9__8_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__8_2, put=setStaticF___9__8_2)) ::System::Action_1<::System::Object*>*  __9__8_2;

/// @brief Field <>9__8_3, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__8_3, put=setStaticF___9__8_3)) ::System::Action_1<::System::Object*>*  __9__8_3;

/// @brief Field <>9__8_4, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__8_4, put=setStaticF___9__8_4)) ::System::Action_1<::System::Object*>*  __9__8_4;

/// @brief Field <>9__8_5, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__8_5, put=setStaticF___9__8_5)) ::System::Action_1<::System::Object*>*  __9__8_5;

static inline ::Cysharp::Threading::Tasks::WhenAllPromise_6_UniTask___c<T1,T2,T3,T4,T5,T6>* New_ctor() ;

/// @brief Method <.ctor>b__8_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__8_0(::System::Object*  state) ;

/// @brief Method <.ctor>b__8_1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__8_1(::System::Object*  state) ;

/// @brief Method <.ctor>b__8_2, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__8_2(::System::Object*  state) ;

/// @brief Method <.ctor>b__8_3, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__8_3(::System::Object*  state) ;

/// @brief Method <.ctor>b__8_4, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__8_4(::System::Object*  state) ;

/// @brief Method <.ctor>b__8_5, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__8_5(::System::Object*  state) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Threading::Tasks::WhenAllPromise_6_UniTask___c<T1,T2,T3,T4,T5,T6>* getStaticF___9() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__8_0() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__8_1() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__8_2() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__8_3() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__8_4() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__8_5() ;

static inline void setStaticF___9(::Cysharp::Threading::Tasks::WhenAllPromise_6_UniTask___c<T1,T2,T3,T4,T5,T6>*  value) ;

static inline void setStaticF___9__8_0(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__8_1(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__8_2(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__8_3(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__8_4(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__8_5(::System::Action_1<::System::Object*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WhenAllPromise_6_UniTask___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WhenAllPromise_6_UniTask___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WhenAllPromise_6_UniTask___c(WhenAllPromise_6_UniTask___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WhenAllPromise_6_UniTask___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WhenAllPromise_6_UniTask___c(WhenAllPromise_6_UniTask___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21725};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
// Dependencies Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<TResult>, System.Object, System.ValueTuple`5<T1, T2, T3, T4, T5>
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T1,typename T2,typename T3,typename T4,typename T5>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTask/WhenAllPromise`5<T1,T2,T3,T4,T5>
class CORDL_TYPE UniTask_WhenAllPromise_5 : public ::System::Object {
public:
// Declarations
using __c = ::Cysharp::Threading::Tasks::WhenAllPromise_5_UniTask___c<T1, T2, T3, T4, T5>;

/// @brief Field completedCount, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_completedCount, put=__cordl_internal_set_completedCount)) int32_t  completedCount;

/// @brief Field core, offset 0x40, size 0x28 
 __declspec(property(get=__cordl_internal_get_core, put=__cordl_internal_set_core)) ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_5<T1,T2,T3,T4,T5>>  core;

/// @brief Field t1, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_t1, put=__cordl_internal_set_t1)) T1  t1;

/// @brief Field t2, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_t2, put=__cordl_internal_set_t2)) T2  t2;

/// @brief Field t3, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_t3, put=__cordl_internal_set_t3)) T3  t3;

/// @brief Field t4, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_t4, put=__cordl_internal_set_t4)) T4  t4;

/// @brief Field t5, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_t5, put=__cordl_internal_set_t5)) T5  t5;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_5<T1,T2,T3,T4,T5>>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_5<T1,T2,T3,T4,T5>>*() noexcept;

/// @brief Method Cysharp.Threading.Tasks.IUniTaskSource.GetResult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Cysharp_Threading_Tasks_IUniTaskSource_GetResult(int16_t  token) ;

/// @brief Method GetResult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::ValueTuple_5<T1,T2,T3,T4,T5> GetResult(int16_t  token) ;

/// @brief Method GetStatus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(int16_t  token) ;

static inline ::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_5<T1,T2,T3,T4,T5>* New_ctor(::Cysharp::Threading::Tasks::UniTask_1<T1>  task1, ::Cysharp::Threading::Tasks::UniTask_1<T2>  task2, ::Cysharp::Threading::Tasks::UniTask_1<T3>  task3, ::Cysharp::Threading::Tasks::UniTask_1<T4>  task4, ::Cysharp::Threading::Tasks::UniTask_1<T5>  task5) ;

/// @brief Method OnCompleted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token) ;

/// @brief Method TryInvokeContinuationT1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT1(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_5<T1,T2,T3,T4,T5>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T1>>  awaiter) ;

/// @brief Method TryInvokeContinuationT2, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT2(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_5<T1,T2,T3,T4,T5>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T2>>  awaiter) ;

/// @brief Method TryInvokeContinuationT3, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT3(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_5<T1,T2,T3,T4,T5>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T3>>  awaiter) ;

/// @brief Method TryInvokeContinuationT4, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT4(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_5<T1,T2,T3,T4,T5>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T4>>  awaiter) ;

/// @brief Method TryInvokeContinuationT5, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT5(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_5<T1,T2,T3,T4,T5>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T5>>  awaiter) ;

/// @brief Method UnsafeGetStatus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus() ;

constexpr int32_t const& __cordl_internal_get_completedCount() const;

constexpr int32_t& __cordl_internal_get_completedCount() ;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_5<T1,T2,T3,T4,T5>> const& __cordl_internal_get_core() const;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_5<T1,T2,T3,T4,T5>>& __cordl_internal_get_core() ;

constexpr T1 const& __cordl_internal_get_t1() const;

constexpr T1& __cordl_internal_get_t1() ;

constexpr T2 const& __cordl_internal_get_t2() const;

constexpr T2& __cordl_internal_get_t2() ;

constexpr T3 const& __cordl_internal_get_t3() const;

constexpr T3& __cordl_internal_get_t3() ;

constexpr T4 const& __cordl_internal_get_t4() const;

constexpr T4& __cordl_internal_get_t4() ;

constexpr T5 const& __cordl_internal_get_t5() const;

constexpr T5& __cordl_internal_get_t5() ;

constexpr void __cordl_internal_set_completedCount(int32_t  value) ;

constexpr void __cordl_internal_set_core(::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_5<T1,T2,T3,T4,T5>>  value) ;

constexpr void __cordl_internal_set_t1(T1  value) ;

constexpr void __cordl_internal_set_t2(T2  value) ;

constexpr void __cordl_internal_set_t3(T3  value) ;

constexpr void __cordl_internal_set_t4(T4  value) ;

constexpr void __cordl_internal_set_t5(T5  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::UniTask_1<T1>  task1, ::Cysharp::Threading::Tasks::UniTask_1<T2>  task2, ::Cysharp::Threading::Tasks::UniTask_1<T3>  task3, ::Cysharp::Threading::Tasks::UniTask_1<T4>  task4, ::Cysharp::Threading::Tasks::UniTask_1<T5>  task5) ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_5<T1,T2,T3,T4,T5>>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_5<T1,T2,T3,T4,T5>>* i___Cysharp__Threading__Tasks__IUniTaskSource_1___System__ValueTuple_5_T1_T2_T3_T4_T5__() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UniTask_WhenAllPromise_5() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UniTask_WhenAllPromise_5", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UniTask_WhenAllPromise_5(UniTask_WhenAllPromise_5 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UniTask_WhenAllPromise_5", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UniTask_WhenAllPromise_5(UniTask_WhenAllPromise_5 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21724};

/// @brief Field t1, offset: 0x10, size: 0x8, def value: None
 T1  ___t1;

/// @brief Field t2, offset: 0x18, size: 0x8, def value: None
 T2  ___t2;

/// @brief Field t3, offset: 0x20, size: 0x8, def value: None
 T3  ___t3;

/// @brief Field t4, offset: 0x28, size: 0x8, def value: None
 T4  ___t4;

/// @brief Field t5, offset: 0x30, size: 0x8, def value: None
 T5  ___t5;

/// @brief Field completedCount, offset: 0x38, size: 0x4, def value: None
 int32_t  ___completedCount;

/// @brief Field core, offset: 0x40, size: 0x28, def value: None
 ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_5<T1,T2,T3,T4,T5>>  ___core;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
// [CompilerGenerated]
// Dependencies System.Object
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T1,typename T2,typename T3,typename T4,typename T5>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTask/WhenAllPromise`5/<>c<T1,T2,T3,T4,T5>
class CORDL_TYPE WhenAllPromise_5_UniTask___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Cysharp::Threading::Tasks::WhenAllPromise_5_UniTask___c<T1,T2,T3,T4,T5>*  __9;

/// @brief Field <>9__7_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__7_0, put=setStaticF___9__7_0)) ::System::Action_1<::System::Object*>*  __9__7_0;

/// @brief Field <>9__7_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__7_1, put=setStaticF___9__7_1)) ::System::Action_1<::System::Object*>*  __9__7_1;

/// @brief Field <>9__7_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__7_2, put=setStaticF___9__7_2)) ::System::Action_1<::System::Object*>*  __9__7_2;

/// @brief Field <>9__7_3, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__7_3, put=setStaticF___9__7_3)) ::System::Action_1<::System::Object*>*  __9__7_3;

/// @brief Field <>9__7_4, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__7_4, put=setStaticF___9__7_4)) ::System::Action_1<::System::Object*>*  __9__7_4;

static inline ::Cysharp::Threading::Tasks::WhenAllPromise_5_UniTask___c<T1,T2,T3,T4,T5>* New_ctor() ;

/// @brief Method <.ctor>b__7_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__7_0(::System::Object*  state) ;

/// @brief Method <.ctor>b__7_1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__7_1(::System::Object*  state) ;

/// @brief Method <.ctor>b__7_2, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__7_2(::System::Object*  state) ;

/// @brief Method <.ctor>b__7_3, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__7_3(::System::Object*  state) ;

/// @brief Method <.ctor>b__7_4, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__7_4(::System::Object*  state) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Threading::Tasks::WhenAllPromise_5_UniTask___c<T1,T2,T3,T4,T5>* getStaticF___9() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__7_0() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__7_1() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__7_2() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__7_3() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__7_4() ;

static inline void setStaticF___9(::Cysharp::Threading::Tasks::WhenAllPromise_5_UniTask___c<T1,T2,T3,T4,T5>*  value) ;

static inline void setStaticF___9__7_0(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__7_1(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__7_2(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__7_3(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__7_4(::System::Action_1<::System::Object*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WhenAllPromise_5_UniTask___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WhenAllPromise_5_UniTask___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WhenAllPromise_5_UniTask___c(WhenAllPromise_5_UniTask___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WhenAllPromise_5_UniTask___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WhenAllPromise_5_UniTask___c(WhenAllPromise_5_UniTask___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21723};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
// Dependencies Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<TResult>, System.Object, System.ValueTuple`4<T1, T2, T3, T4>
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T1,typename T2,typename T3,typename T4>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTask/WhenAllPromise`4<T1,T2,T3,T4>
class CORDL_TYPE UniTask_WhenAllPromise_4 : public ::System::Object {
public:
// Declarations
using __c = ::Cysharp::Threading::Tasks::WhenAllPromise_4_UniTask___c<T1, T2, T3, T4>;

/// @brief Field completedCount, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_completedCount, put=__cordl_internal_set_completedCount)) int32_t  completedCount;

/// @brief Field core, offset 0x38, size 0x28 
 __declspec(property(get=__cordl_internal_get_core, put=__cordl_internal_set_core)) ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_4<T1,T2,T3,T4>>  core;

/// @brief Field t1, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_t1, put=__cordl_internal_set_t1)) T1  t1;

/// @brief Field t2, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_t2, put=__cordl_internal_set_t2)) T2  t2;

/// @brief Field t3, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_t3, put=__cordl_internal_set_t3)) T3  t3;

/// @brief Field t4, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_t4, put=__cordl_internal_set_t4)) T4  t4;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_4<T1,T2,T3,T4>>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_4<T1,T2,T3,T4>>*() noexcept;

/// @brief Method Cysharp.Threading.Tasks.IUniTaskSource.GetResult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Cysharp_Threading_Tasks_IUniTaskSource_GetResult(int16_t  token) ;

/// @brief Method GetResult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::ValueTuple_4<T1,T2,T3,T4> GetResult(int16_t  token) ;

/// @brief Method GetStatus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(int16_t  token) ;

static inline ::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_4<T1,T2,T3,T4>* New_ctor(::Cysharp::Threading::Tasks::UniTask_1<T1>  task1, ::Cysharp::Threading::Tasks::UniTask_1<T2>  task2, ::Cysharp::Threading::Tasks::UniTask_1<T3>  task3, ::Cysharp::Threading::Tasks::UniTask_1<T4>  task4) ;

/// @brief Method OnCompleted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token) ;

/// @brief Method TryInvokeContinuationT1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT1(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_4<T1,T2,T3,T4>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T1>>  awaiter) ;

/// @brief Method TryInvokeContinuationT2, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT2(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_4<T1,T2,T3,T4>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T2>>  awaiter) ;

/// @brief Method TryInvokeContinuationT3, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT3(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_4<T1,T2,T3,T4>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T3>>  awaiter) ;

/// @brief Method TryInvokeContinuationT4, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT4(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_4<T1,T2,T3,T4>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T4>>  awaiter) ;

/// @brief Method UnsafeGetStatus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus() ;

constexpr int32_t const& __cordl_internal_get_completedCount() const;

constexpr int32_t& __cordl_internal_get_completedCount() ;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_4<T1,T2,T3,T4>> const& __cordl_internal_get_core() const;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_4<T1,T2,T3,T4>>& __cordl_internal_get_core() ;

constexpr T1 const& __cordl_internal_get_t1() const;

constexpr T1& __cordl_internal_get_t1() ;

constexpr T2 const& __cordl_internal_get_t2() const;

constexpr T2& __cordl_internal_get_t2() ;

constexpr T3 const& __cordl_internal_get_t3() const;

constexpr T3& __cordl_internal_get_t3() ;

constexpr T4 const& __cordl_internal_get_t4() const;

constexpr T4& __cordl_internal_get_t4() ;

constexpr void __cordl_internal_set_completedCount(int32_t  value) ;

constexpr void __cordl_internal_set_core(::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_4<T1,T2,T3,T4>>  value) ;

constexpr void __cordl_internal_set_t1(T1  value) ;

constexpr void __cordl_internal_set_t2(T2  value) ;

constexpr void __cordl_internal_set_t3(T3  value) ;

constexpr void __cordl_internal_set_t4(T4  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::UniTask_1<T1>  task1, ::Cysharp::Threading::Tasks::UniTask_1<T2>  task2, ::Cysharp::Threading::Tasks::UniTask_1<T3>  task3, ::Cysharp::Threading::Tasks::UniTask_1<T4>  task4) ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_4<T1,T2,T3,T4>>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_4<T1,T2,T3,T4>>* i___Cysharp__Threading__Tasks__IUniTaskSource_1___System__ValueTuple_4_T1_T2_T3_T4__() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UniTask_WhenAllPromise_4() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UniTask_WhenAllPromise_4", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UniTask_WhenAllPromise_4(UniTask_WhenAllPromise_4 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UniTask_WhenAllPromise_4", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UniTask_WhenAllPromise_4(UniTask_WhenAllPromise_4 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21722};

/// @brief Field t1, offset: 0x10, size: 0x8, def value: None
 T1  ___t1;

/// @brief Field t2, offset: 0x18, size: 0x8, def value: None
 T2  ___t2;

/// @brief Field t3, offset: 0x20, size: 0x8, def value: None
 T3  ___t3;

/// @brief Field t4, offset: 0x28, size: 0x8, def value: None
 T4  ___t4;

/// @brief Field completedCount, offset: 0x30, size: 0x4, def value: None
 int32_t  ___completedCount;

/// @brief Field core, offset: 0x38, size: 0x28, def value: None
 ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_4<T1,T2,T3,T4>>  ___core;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
// [CompilerGenerated]
// Dependencies System.Object
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T1,typename T2,typename T3,typename T4>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTask/WhenAllPromise`4/<>c<T1,T2,T3,T4>
class CORDL_TYPE WhenAllPromise_4_UniTask___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Cysharp::Threading::Tasks::WhenAllPromise_4_UniTask___c<T1,T2,T3,T4>*  __9;

/// @brief Field <>9__6_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__6_0, put=setStaticF___9__6_0)) ::System::Action_1<::System::Object*>*  __9__6_0;

/// @brief Field <>9__6_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__6_1, put=setStaticF___9__6_1)) ::System::Action_1<::System::Object*>*  __9__6_1;

/// @brief Field <>9__6_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__6_2, put=setStaticF___9__6_2)) ::System::Action_1<::System::Object*>*  __9__6_2;

/// @brief Field <>9__6_3, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__6_3, put=setStaticF___9__6_3)) ::System::Action_1<::System::Object*>*  __9__6_3;

static inline ::Cysharp::Threading::Tasks::WhenAllPromise_4_UniTask___c<T1,T2,T3,T4>* New_ctor() ;

/// @brief Method <.ctor>b__6_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__6_0(::System::Object*  state) ;

/// @brief Method <.ctor>b__6_1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__6_1(::System::Object*  state) ;

/// @brief Method <.ctor>b__6_2, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__6_2(::System::Object*  state) ;

/// @brief Method <.ctor>b__6_3, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__6_3(::System::Object*  state) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Threading::Tasks::WhenAllPromise_4_UniTask___c<T1,T2,T3,T4>* getStaticF___9() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__6_0() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__6_1() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__6_2() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__6_3() ;

static inline void setStaticF___9(::Cysharp::Threading::Tasks::WhenAllPromise_4_UniTask___c<T1,T2,T3,T4>*  value) ;

static inline void setStaticF___9__6_0(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__6_1(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__6_2(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__6_3(::System::Action_1<::System::Object*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WhenAllPromise_4_UniTask___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WhenAllPromise_4_UniTask___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WhenAllPromise_4_UniTask___c(WhenAllPromise_4_UniTask___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WhenAllPromise_4_UniTask___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WhenAllPromise_4_UniTask___c(WhenAllPromise_4_UniTask___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21721};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
// Dependencies Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<TResult>, System.Object, System.ValueTuple`3<T1, T2, T3>
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T1,typename T2,typename T3>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTask/WhenAllPromise`3<T1,T2,T3>
class CORDL_TYPE UniTask_WhenAllPromise_3 : public ::System::Object {
public:
// Declarations
using __c = ::Cysharp::Threading::Tasks::WhenAllPromise_3_UniTask___c<T1, T2, T3>;

/// @brief Field completedCount, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_completedCount, put=__cordl_internal_set_completedCount)) int32_t  completedCount;

/// @brief Field core, offset 0x30, size 0x28 
 __declspec(property(get=__cordl_internal_get_core, put=__cordl_internal_set_core)) ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_3<T1,T2,T3>>  core;

/// @brief Field t1, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_t1, put=__cordl_internal_set_t1)) T1  t1;

/// @brief Field t2, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_t2, put=__cordl_internal_set_t2)) T2  t2;

/// @brief Field t3, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_t3, put=__cordl_internal_set_t3)) T3  t3;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_3<T1,T2,T3>>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_3<T1,T2,T3>>*() noexcept;

/// @brief Method Cysharp.Threading.Tasks.IUniTaskSource.GetResult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Cysharp_Threading_Tasks_IUniTaskSource_GetResult(int16_t  token) ;

/// @brief Method GetResult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::ValueTuple_3<T1,T2,T3> GetResult(int16_t  token) ;

/// @brief Method GetStatus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(int16_t  token) ;

static inline ::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_3<T1,T2,T3>* New_ctor(::Cysharp::Threading::Tasks::UniTask_1<T1>  task1, ::Cysharp::Threading::Tasks::UniTask_1<T2>  task2, ::Cysharp::Threading::Tasks::UniTask_1<T3>  task3) ;

/// @brief Method OnCompleted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token) ;

/// @brief Method TryInvokeContinuationT1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT1(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_3<T1,T2,T3>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T1>>  awaiter) ;

/// @brief Method TryInvokeContinuationT2, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT2(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_3<T1,T2,T3>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T2>>  awaiter) ;

/// @brief Method TryInvokeContinuationT3, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT3(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_3<T1,T2,T3>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T3>>  awaiter) ;

/// @brief Method UnsafeGetStatus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus() ;

constexpr int32_t const& __cordl_internal_get_completedCount() const;

constexpr int32_t& __cordl_internal_get_completedCount() ;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_3<T1,T2,T3>> const& __cordl_internal_get_core() const;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_3<T1,T2,T3>>& __cordl_internal_get_core() ;

constexpr T1 const& __cordl_internal_get_t1() const;

constexpr T1& __cordl_internal_get_t1() ;

constexpr T2 const& __cordl_internal_get_t2() const;

constexpr T2& __cordl_internal_get_t2() ;

constexpr T3 const& __cordl_internal_get_t3() const;

constexpr T3& __cordl_internal_get_t3() ;

constexpr void __cordl_internal_set_completedCount(int32_t  value) ;

constexpr void __cordl_internal_set_core(::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_3<T1,T2,T3>>  value) ;

constexpr void __cordl_internal_set_t1(T1  value) ;

constexpr void __cordl_internal_set_t2(T2  value) ;

constexpr void __cordl_internal_set_t3(T3  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::UniTask_1<T1>  task1, ::Cysharp::Threading::Tasks::UniTask_1<T2>  task2, ::Cysharp::Threading::Tasks::UniTask_1<T3>  task3) ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_3<T1,T2,T3>>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_3<T1,T2,T3>>* i___Cysharp__Threading__Tasks__IUniTaskSource_1___System__ValueTuple_3_T1_T2_T3__() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UniTask_WhenAllPromise_3() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UniTask_WhenAllPromise_3", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UniTask_WhenAllPromise_3(UniTask_WhenAllPromise_3 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UniTask_WhenAllPromise_3", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UniTask_WhenAllPromise_3(UniTask_WhenAllPromise_3 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21720};

/// @brief Field t1, offset: 0x10, size: 0x8, def value: None
 T1  ___t1;

/// @brief Field t2, offset: 0x18, size: 0x8, def value: None
 T2  ___t2;

/// @brief Field t3, offset: 0x20, size: 0x8, def value: None
 T3  ___t3;

/// @brief Field completedCount, offset: 0x28, size: 0x4, def value: None
 int32_t  ___completedCount;

/// @brief Field core, offset: 0x30, size: 0x28, def value: None
 ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_3<T1,T2,T3>>  ___core;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
// [CompilerGenerated]
// Dependencies System.Object
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T1,typename T2,typename T3>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTask/WhenAllPromise`3/<>c<T1,T2,T3>
class CORDL_TYPE WhenAllPromise_3_UniTask___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Cysharp::Threading::Tasks::WhenAllPromise_3_UniTask___c<T1,T2,T3>*  __9;

/// @brief Field <>9__5_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__5_0, put=setStaticF___9__5_0)) ::System::Action_1<::System::Object*>*  __9__5_0;

/// @brief Field <>9__5_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__5_1, put=setStaticF___9__5_1)) ::System::Action_1<::System::Object*>*  __9__5_1;

/// @brief Field <>9__5_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__5_2, put=setStaticF___9__5_2)) ::System::Action_1<::System::Object*>*  __9__5_2;

static inline ::Cysharp::Threading::Tasks::WhenAllPromise_3_UniTask___c<T1,T2,T3>* New_ctor() ;

/// @brief Method <.ctor>b__5_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__5_0(::System::Object*  state) ;

/// @brief Method <.ctor>b__5_1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__5_1(::System::Object*  state) ;

/// @brief Method <.ctor>b__5_2, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__5_2(::System::Object*  state) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Threading::Tasks::WhenAllPromise_3_UniTask___c<T1,T2,T3>* getStaticF___9() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__5_0() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__5_1() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__5_2() ;

static inline void setStaticF___9(::Cysharp::Threading::Tasks::WhenAllPromise_3_UniTask___c<T1,T2,T3>*  value) ;

static inline void setStaticF___9__5_0(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__5_1(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__5_2(::System::Action_1<::System::Object*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WhenAllPromise_3_UniTask___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WhenAllPromise_3_UniTask___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WhenAllPromise_3_UniTask___c(WhenAllPromise_3_UniTask___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WhenAllPromise_3_UniTask___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WhenAllPromise_3_UniTask___c(WhenAllPromise_3_UniTask___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21719};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
// Dependencies Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<TResult>, System.Object, System.ValueTuple`2<T1, T2>
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T1,typename T2>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTask/WhenAllPromise`2<T1,T2>
class CORDL_TYPE UniTask_WhenAllPromise_2 : public ::System::Object {
public:
// Declarations
using __c = ::Cysharp::Threading::Tasks::WhenAllPromise_2_UniTask___c<T1, T2>;

/// @brief Field completedCount, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_completedCount, put=__cordl_internal_set_completedCount)) int32_t  completedCount;

/// @brief Field core, offset 0x28, size 0x28 
 __declspec(property(get=__cordl_internal_get_core, put=__cordl_internal_set_core)) ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_2<T1,T2>>  core;

/// @brief Field t1, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_t1, put=__cordl_internal_set_t1)) T1  t1;

/// @brief Field t2, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_t2, put=__cordl_internal_set_t2)) T2  t2;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_2<T1,T2>>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_2<T1,T2>>*() noexcept;

/// @brief Method Cysharp.Threading.Tasks.IUniTaskSource.GetResult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Cysharp_Threading_Tasks_IUniTaskSource_GetResult(int16_t  token) ;

/// @brief Method GetResult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::ValueTuple_2<T1,T2> GetResult(int16_t  token) ;

/// @brief Method GetStatus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(int16_t  token) ;

static inline ::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_2<T1,T2>* New_ctor(::Cysharp::Threading::Tasks::UniTask_1<T1>  task1, ::Cysharp::Threading::Tasks::UniTask_1<T2>  task2) ;

/// @brief Method OnCompleted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token) ;

/// @brief Method TryInvokeContinuationT1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT1(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_2<T1,T2>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T1>>  awaiter) ;

/// @brief Method TryInvokeContinuationT2, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuationT2(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_2<T1,T2>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T2>>  awaiter) ;

/// @brief Method UnsafeGetStatus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus() ;

constexpr int32_t const& __cordl_internal_get_completedCount() const;

constexpr int32_t& __cordl_internal_get_completedCount() ;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_2<T1,T2>> const& __cordl_internal_get_core() const;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_2<T1,T2>>& __cordl_internal_get_core() ;

constexpr T1 const& __cordl_internal_get_t1() const;

constexpr T1& __cordl_internal_get_t1() ;

constexpr T2 const& __cordl_internal_get_t2() const;

constexpr T2& __cordl_internal_get_t2() ;

constexpr void __cordl_internal_set_completedCount(int32_t  value) ;

constexpr void __cordl_internal_set_core(::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_2<T1,T2>>  value) ;

constexpr void __cordl_internal_set_t1(T1  value) ;

constexpr void __cordl_internal_set_t2(T2  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::UniTask_1<T1>  task1, ::Cysharp::Threading::Tasks::UniTask_1<T2>  task2) ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_2<T1,T2>>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource_1<::System::ValueTuple_2<T1,T2>>* i___Cysharp__Threading__Tasks__IUniTaskSource_1___System__ValueTuple_2_T1_T2__() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UniTask_WhenAllPromise_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UniTask_WhenAllPromise_2", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UniTask_WhenAllPromise_2(UniTask_WhenAllPromise_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UniTask_WhenAllPromise_2", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UniTask_WhenAllPromise_2(UniTask_WhenAllPromise_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21718};

/// @brief Field t1, offset: 0x10, size: 0x8, def value: None
 T1  ___t1;

/// @brief Field t2, offset: 0x18, size: 0x8, def value: None
 T2  ___t2;

/// @brief Field completedCount, offset: 0x20, size: 0x4, def value: None
 int32_t  ___completedCount;

/// @brief Field core, offset: 0x28, size: 0x28, def value: None
 ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::ValueTuple_2<T1,T2>>  ___core;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
// [CompilerGenerated]
// Dependencies System.Object
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T1,typename T2>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTask/WhenAllPromise`2/<>c<T1,T2>
class CORDL_TYPE WhenAllPromise_2_UniTask___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Cysharp::Threading::Tasks::WhenAllPromise_2_UniTask___c<T1,T2>*  __9;

/// @brief Field <>9__4_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__4_0, put=setStaticF___9__4_0)) ::System::Action_1<::System::Object*>*  __9__4_0;

/// @brief Field <>9__4_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__4_1, put=setStaticF___9__4_1)) ::System::Action_1<::System::Object*>*  __9__4_1;

static inline ::Cysharp::Threading::Tasks::WhenAllPromise_2_UniTask___c<T1,T2>* New_ctor() ;

/// @brief Method <.ctor>b__4_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__4_0(::System::Object*  state) ;

/// @brief Method <.ctor>b__4_1, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__4_1(::System::Object*  state) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Threading::Tasks::WhenAllPromise_2_UniTask___c<T1,T2>* getStaticF___9() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__4_0() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__4_1() ;

static inline void setStaticF___9(::Cysharp::Threading::Tasks::WhenAllPromise_2_UniTask___c<T1,T2>*  value) ;

static inline void setStaticF___9__4_0(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__4_1(::System::Action_1<::System::Object*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WhenAllPromise_2_UniTask___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WhenAllPromise_2_UniTask___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WhenAllPromise_2_UniTask___c(WhenAllPromise_2_UniTask___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WhenAllPromise_2_UniTask___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WhenAllPromise_2_UniTask___c(WhenAllPromise_2_UniTask___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21717};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
// Dependencies Cysharp.Threading.Tasks.AsyncUnit, Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<TResult>, System.Object
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTask/WhenAllPromise
class CORDL_TYPE UniTask_WhenAllPromise : public ::System::Object {
public:
// Declarations
using __c = ::Cysharp::Threading::Tasks::WhenAllPromise_UniTask___c;

/// @brief Field completeCount, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_completeCount, put=__cordl_internal_set_completeCount)) int32_t  completeCount;

/// @brief Field core, offset 0x18, size 0x28 
 __declspec(property(get=__cordl_internal_get_core, put=__cordl_internal_set_core)) ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::Cysharp::Threading::Tasks::AsyncUnit>  core;

/// @brief Field tasksLength, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_tasksLength, put=__cordl_internal_set_tasksLength)) int32_t  tasksLength;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept;

/// @brief Method GetResult, addr 0xadf538c, size 0x88, virtual true, abstract: false, final true
inline void GetResult(int16_t  token) ;

/// @brief Method GetStatus, addr 0xadf5414, size 0x58, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(int16_t  token) ;

static inline ::Cysharp::Threading::Tasks::UniTask_WhenAllPromise* New_ctor(::ArrayW<::Cysharp::Threading::Tasks::UniTask>  tasks, int32_t  tasksLength) ;

/// @brief Method OnCompleted, addr 0xadf5524, size 0x70, virtual true, abstract: false, final true
inline void OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token) ;

/// @brief Method TryInvokeContinuation, addr 0xadf51b8, size 0x1d4, virtual false, abstract: false, final false
static inline void TryInvokeContinuation(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_Awaiter>  awaiter) ;

/// @brief Method UnsafeGetStatus, addr 0xadf546c, size 0xb8, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus() ;

constexpr int32_t const& __cordl_internal_get_completeCount() const;

constexpr int32_t& __cordl_internal_get_completeCount() ;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::Cysharp::Threading::Tasks::AsyncUnit> const& __cordl_internal_get_core() const;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::Cysharp::Threading::Tasks::AsyncUnit>& __cordl_internal_get_core() ;

constexpr int32_t const& __cordl_internal_get_tasksLength() const;

constexpr int32_t& __cordl_internal_get_tasksLength() ;

constexpr void __cordl_internal_set_completeCount(int32_t  value) ;

constexpr void __cordl_internal_set_core(::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::Cysharp::Threading::Tasks::AsyncUnit>  value) ;

constexpr void __cordl_internal_set_tasksLength(int32_t  value) ;

/// @brief Method .ctor, addr 0xadef368, size 0x464, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<::Cysharp::Threading::Tasks::UniTask>  tasks, int32_t  tasksLength) ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UniTask_WhenAllPromise() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UniTask_WhenAllPromise", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UniTask_WhenAllPromise(UniTask_WhenAllPromise && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UniTask_WhenAllPromise", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UniTask_WhenAllPromise(UniTask_WhenAllPromise const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21716};

/// @brief Field completeCount, offset: 0x10, size: 0x4, def value: None
 int32_t  ___completeCount;

/// @brief Field tasksLength, offset: 0x14, size: 0x4, def value: None
 int32_t  ___tasksLength;

/// @brief Field core, offset: 0x18, size: 0x28, def value: None
 ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::Cysharp::Threading::Tasks::AsyncUnit>  ___core;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise, ___completeCount) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise, ___tasksLength) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise, ___core) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise) == 0x40, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
// [CompilerGenerated]
// Dependencies System.Object
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTask/WhenAllPromise/<>c
class CORDL_TYPE WhenAllPromise_UniTask___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Cysharp::Threading::Tasks::WhenAllPromise_UniTask___c*  __9;

/// @brief Field <>9__3_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__3_0, put=setStaticF___9__3_0)) ::System::Action_1<::System::Object*>*  __9__3_0;

static inline ::Cysharp::Threading::Tasks::WhenAllPromise_UniTask___c* New_ctor() ;

/// @brief Method <.ctor>b__3_0, addr 0xadf5604, size 0x174, virtual false, abstract: false, final false
inline void __ctor_b__3_0(::System::Object*  state) ;

/// @brief Method .ctor, addr 0xadf55fc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Threading::Tasks::WhenAllPromise_UniTask___c* getStaticF___9() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__3_0() ;

static inline void setStaticF___9(::Cysharp::Threading::Tasks::WhenAllPromise_UniTask___c*  value) ;

static inline void setStaticF___9__3_0(::System::Action_1<::System::Object*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WhenAllPromise_UniTask___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WhenAllPromise_UniTask___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WhenAllPromise_UniTask___c(WhenAllPromise_UniTask___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WhenAllPromise_UniTask___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WhenAllPromise_UniTask___c(WhenAllPromise_UniTask___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21715};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::WhenAllPromise_UniTask___c) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
// Dependencies Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<TResult>, System.Object
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTask/WhenAllPromise`1<T>
class CORDL_TYPE UniTask_WhenAllPromise_1 : public ::System::Object {
public:
// Declarations
using __c = ::Cysharp::Threading::Tasks::WhenAllPromise_1_UniTask___c<T>;

/// @brief Field completeCount, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_completeCount, put=__cordl_internal_set_completeCount)) int32_t  completeCount;

/// @brief Field core, offset 0x20, size 0x28 
 __declspec(property(get=__cordl_internal_get_core, put=__cordl_internal_set_core)) ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::ArrayW<T>>  core;

/// @brief Field result, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_result, put=__cordl_internal_set_result)) ::ArrayW<T>  result;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource_1<::ArrayW<T>>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource_1<::ArrayW<T>>*() noexcept;

/// @brief Method Cysharp.Threading.Tasks.IUniTaskSource.GetResult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Cysharp_Threading_Tasks_IUniTaskSource_GetResult(int16_t  token) ;

/// @brief Method GetResult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::ArrayW<T> GetResult(int16_t  token) ;

/// @brief Method GetStatus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(int16_t  token) ;

static inline ::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_1<T>* New_ctor(::ArrayW<::Cysharp::Threading::Tasks::UniTask_1<T>>  tasks, int32_t  tasksLength) ;

/// @brief Method OnCompleted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token) ;

/// @brief Method TryInvokeContinuation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline void TryInvokeContinuation(::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_1<T>*  self, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::UniTask_1_Awaiter<T>>  awaiter, int32_t  i) ;

/// @brief Method UnsafeGetStatus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus() ;

constexpr int32_t const& __cordl_internal_get_completeCount() const;

constexpr int32_t& __cordl_internal_get_completeCount() ;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::ArrayW<T>> const& __cordl_internal_get_core() const;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::ArrayW<T>>& __cordl_internal_get_core() ;

constexpr ::ArrayW<T> const& __cordl_internal_get_result() const;

constexpr ::ArrayW<T>& __cordl_internal_get_result() ;

constexpr void __cordl_internal_set_completeCount(int32_t  value) ;

constexpr void __cordl_internal_set_core(::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::ArrayW<T>>  value) ;

constexpr void __cordl_internal_set_result(::ArrayW<T>  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<::Cysharp::Threading::Tasks::UniTask_1<T>>  tasks, int32_t  tasksLength) ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource_1<::ArrayW<T>>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource_1<::ArrayW<T>>* i___Cysharp__Threading__Tasks__IUniTaskSource_1___ArrayW_T__() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UniTask_WhenAllPromise_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UniTask_WhenAllPromise_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UniTask_WhenAllPromise_1(UniTask_WhenAllPromise_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UniTask_WhenAllPromise_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UniTask_WhenAllPromise_1(UniTask_WhenAllPromise_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21714};

/// @brief Field result, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<T>  ___result;

/// @brief Field completeCount, offset: 0x18, size: 0x4, def value: None
 int32_t  ___completeCount;

/// @brief Field core, offset: 0x20, size: 0x28, def value: None
 ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::ArrayW<T>>  ___core;

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
// CS Name: Cysharp.Threading.Tasks.UniTask/WhenAllPromise`1/<>c<T>
class CORDL_TYPE WhenAllPromise_1_UniTask___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Cysharp::Threading::Tasks::WhenAllPromise_1_UniTask___c<T>*  __9;

/// @brief Field <>9__3_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__3_0, put=setStaticF___9__3_0)) ::System::Action_1<::System::Object*>*  __9__3_0;

static inline ::Cysharp::Threading::Tasks::WhenAllPromise_1_UniTask___c<T>* New_ctor() ;

/// @brief Method <.ctor>b__3_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void __ctor_b__3_0(::System::Object*  state) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Threading::Tasks::WhenAllPromise_1_UniTask___c<T>* getStaticF___9() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__3_0() ;

static inline void setStaticF___9(::Cysharp::Threading::Tasks::WhenAllPromise_1_UniTask___c<T>*  value) ;

static inline void setStaticF___9__3_0(::System::Action_1<::System::Object*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WhenAllPromise_1_UniTask___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WhenAllPromise_1_UniTask___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WhenAllPromise_1_UniTask___c(WhenAllPromise_1_UniTask___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WhenAllPromise_1_UniTask___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WhenAllPromise_1_UniTask___c(WhenAllPromise_1_UniTask___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21713};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
// Dependencies Cysharp.Threading.Tasks.TaskPool`1<T>, Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<TResult>, System.Object, System.Threading.CancellationToken
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T,typename U>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTask/WaitUntilValueChangedStandardObjectPromise`2<T,U>
class CORDL_TYPE UniTask_WaitUntilValueChangedStandardObjectPromise_2 : public ::System::Object {
public:
// Declarations
using __c = ::Cysharp::Threading::Tasks::WaitUntilValueChangedStandardObjectPromise_2_UniTask___c<T, U>;

 __declspec(property(get=get_NextNode)) ::Cysharp::Threading::Tasks::UniTask_WaitUntilValueChangedStandardObjectPromise_2<T,U>*  NextNode;

/// @brief Field cancellationToken, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_cancellationToken, put=__cordl_internal_set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field core, offset 0x40, size 0x28 
 __declspec(property(get=__cordl_internal_get_core, put=__cordl_internal_set_core)) ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<U>  core;

/// @brief Field currentValue, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentValue, put=__cordl_internal_set_currentValue)) U  currentValue;

/// @brief Field equalityComparer, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_equalityComparer, put=__cordl_internal_set_equalityComparer)) ::System::Collections::Generic::IEqualityComparer_1<U>*  equalityComparer;

/// @brief Field monitorFunction, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_monitorFunction, put=__cordl_internal_set_monitorFunction)) ::System::Func_2<T,U>*  monitorFunction;

/// @brief Field nextNode, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_nextNode, put=__cordl_internal_set_nextNode)) ::Cysharp::Threading::Tasks::UniTask_WaitUntilValueChangedStandardObjectPromise_2<T,U>*  nextNode;

/// @brief Field pool, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_pool, put=setStaticF_pool)) ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UniTask_WaitUntilValueChangedStandardObjectPromise_2<T,U>*>  pool;

/// @brief Field target, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) ::System::WeakReference_1<T>*  target;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
constexpr operator  ::Cysharp::Threading::Tasks::IPlayerLoopItem*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UniTask_WaitUntilValueChangedStandardObjectPromise_2<T,U>*>"
constexpr operator  ::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UniTask_WaitUntilValueChangedStandardObjectPromise_2<T,U>*>*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource_1<U>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource_1<U>*() noexcept;

/// @brief Method Create, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IUniTaskSource_1<U>* Create(T  target, ::System::Func_2<T,U>*  monitorFunction, ::System::Collections::Generic::IEqualityComparer_1<U>*  equalityComparer, ::Cysharp::Threading::Tasks::PlayerLoopTiming  timing, ::System::Threading::CancellationToken  cancellationToken, ::by_ref<int16_t>  token) ;

/// @brief Method Cysharp.Threading.Tasks.IUniTaskSource.GetResult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Cysharp_Threading_Tasks_IUniTaskSource_GetResult(int16_t  token) ;

/// @brief Method GetResult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline U GetResult(int16_t  token) ;

/// @brief Method GetStatus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(int16_t  token) ;

/// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Cysharp::Threading::Tasks::UniTask_WaitUntilValueChangedStandardObjectPromise_2<T,U>* New_ctor() ;

/// @brief Method OnCompleted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token) ;

/// @brief Method TryReturn, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool TryReturn() ;

/// @brief Method UnsafeGetStatus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus() ;

constexpr ::System::Threading::CancellationToken const& __cordl_internal_get_cancellationToken() const;

constexpr ::System::Threading::CancellationToken& __cordl_internal_get_cancellationToken() ;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<U> const& __cordl_internal_get_core() const;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<U>& __cordl_internal_get_core() ;

constexpr U const& __cordl_internal_get_currentValue() const;

constexpr U& __cordl_internal_get_currentValue() ;

constexpr ::System::Collections::Generic::IEqualityComparer_1<U>* const& __cordl_internal_get_equalityComparer() const;

constexpr ::System::Collections::Generic::IEqualityComparer_1<U>*& __cordl_internal_get_equalityComparer() ;

constexpr ::System::Func_2<T,U>* const& __cordl_internal_get_monitorFunction() const;

constexpr ::System::Func_2<T,U>*& __cordl_internal_get_monitorFunction() ;

constexpr ::Cysharp::Threading::Tasks::UniTask_WaitUntilValueChangedStandardObjectPromise_2<T,U>* const& __cordl_internal_get_nextNode() const;

constexpr ::Cysharp::Threading::Tasks::UniTask_WaitUntilValueChangedStandardObjectPromise_2<T,U>*& __cordl_internal_get_nextNode() ;

constexpr ::System::WeakReference_1<T>* const& __cordl_internal_get_target() const;

constexpr ::System::WeakReference_1<T>*& __cordl_internal_get_target() ;

constexpr void __cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr void __cordl_internal_set_core(::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<U>  value) ;

constexpr void __cordl_internal_set_currentValue(U  value) ;

constexpr void __cordl_internal_set_equalityComparer(::System::Collections::Generic::IEqualityComparer_1<U>*  value) ;

constexpr void __cordl_internal_set_monitorFunction(::System::Func_2<T,U>*  value) ;

constexpr void __cordl_internal_set_nextNode(::Cysharp::Threading::Tasks::UniTask_WaitUntilValueChangedStandardObjectPromise_2<T,U>*  value) ;

constexpr void __cordl_internal_set_target(::System::WeakReference_1<T>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UniTask_WaitUntilValueChangedStandardObjectPromise_2<T,U>*> getStaticF_pool() ;

/// @brief Method get_NextNode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::by_ref<::Cysharp::Threading::Tasks::UniTask_WaitUntilValueChangedStandardObjectPromise_2<T,U>*> get_NextNode() ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
constexpr ::Cysharp::Threading::Tasks::IPlayerLoopItem* i___Cysharp__Threading__Tasks__IPlayerLoopItem() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UniTask_WaitUntilValueChangedStandardObjectPromise_2<T,U>*>"
constexpr ::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UniTask_WaitUntilValueChangedStandardObjectPromise_2<T,U>*>* i___Cysharp__Threading__Tasks__ITaskPoolNode_1___Cysharp__Threading__Tasks__UniTask_WaitUntilValueChangedStandardObjectPromise_2_T_U___() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource_1<U>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource_1<U>* i___Cysharp__Threading__Tasks__IUniTaskSource_1_U_() noexcept;

static inline void setStaticF_pool(::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UniTask_WaitUntilValueChangedStandardObjectPromise_2<T,U>*>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UniTask_WaitUntilValueChangedStandardObjectPromise_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UniTask_WaitUntilValueChangedStandardObjectPromise_2", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UniTask_WaitUntilValueChangedStandardObjectPromise_2(UniTask_WaitUntilValueChangedStandardObjectPromise_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UniTask_WaitUntilValueChangedStandardObjectPromise_2", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UniTask_WaitUntilValueChangedStandardObjectPromise_2(UniTask_WaitUntilValueChangedStandardObjectPromise_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21712};

/// @brief Field nextNode, offset: 0x10, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::UniTask_WaitUntilValueChangedStandardObjectPromise_2<T,U>*  ___nextNode;

/// @brief Field target, offset: 0x18, size: 0x8, def value: None
 ::System::WeakReference_1<T>*  ___target;

/// @brief Field currentValue, offset: 0x20, size: 0x8, def value: None
 U  ___currentValue;

/// @brief Field monitorFunction, offset: 0x28, size: 0x8, def value: None
 ::System::Func_2<T,U>*  ___monitorFunction;

/// @brief Field equalityComparer, offset: 0x30, size: 0x8, def value: None
 ::System::Collections::Generic::IEqualityComparer_1<U>*  ___equalityComparer;

/// @brief Field cancellationToken, offset: 0x38, size: 0x8, def value: None
 ::System::Threading::CancellationToken  ___cancellationToken;

/// @brief Field core, offset: 0x40, size: 0x28, def value: None
 ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<U>  ___core;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
// [CompilerGenerated]
// Dependencies System.Object
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T,typename U>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTask/WaitUntilValueChangedStandardObjectPromise`2/<>c<T,U>
class CORDL_TYPE WaitUntilValueChangedStandardObjectPromise_2_UniTask___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Cysharp::Threading::Tasks::WaitUntilValueChangedStandardObjectPromise_2_UniTask___c<T,U>*  __9;

static inline ::Cysharp::Threading::Tasks::WaitUntilValueChangedStandardObjectPromise_2_UniTask___c<T,U>* New_ctor() ;

/// @brief Method <.cctor>b__4_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t __cctor_b__4_0() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Threading::Tasks::WaitUntilValueChangedStandardObjectPromise_2_UniTask___c<T,U>* getStaticF___9() ;

static inline void setStaticF___9(::Cysharp::Threading::Tasks::WaitUntilValueChangedStandardObjectPromise_2_UniTask___c<T,U>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WaitUntilValueChangedStandardObjectPromise_2_UniTask___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WaitUntilValueChangedStandardObjectPromise_2_UniTask___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WaitUntilValueChangedStandardObjectPromise_2_UniTask___c(WaitUntilValueChangedStandardObjectPromise_2_UniTask___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WaitUntilValueChangedStandardObjectPromise_2_UniTask___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WaitUntilValueChangedStandardObjectPromise_2_UniTask___c(WaitUntilValueChangedStandardObjectPromise_2_UniTask___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21711};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
// Dependencies Cysharp.Threading.Tasks.TaskPool`1<T>, Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<TResult>, System.Object, System.Threading.CancellationToken
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T,typename U>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTask/WaitUntilValueChangedUnityObjectPromise`2<T,U>
class CORDL_TYPE UniTask_WaitUntilValueChangedUnityObjectPromise_2 : public ::System::Object {
public:
// Declarations
using __c = ::Cysharp::Threading::Tasks::WaitUntilValueChangedUnityObjectPromise_2_UniTask___c<T, U>;

 __declspec(property(get=get_NextNode)) ::Cysharp::Threading::Tasks::UniTask_WaitUntilValueChangedUnityObjectPromise_2<T,U>*  NextNode;

/// @brief Field cancellationToken, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_cancellationToken, put=__cordl_internal_set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field core, offset 0x48, size 0x28 
 __declspec(property(get=__cordl_internal_get_core, put=__cordl_internal_set_core)) ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<U>  core;

/// @brief Field currentValue, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentValue, put=__cordl_internal_set_currentValue)) U  currentValue;

/// @brief Field equalityComparer, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_equalityComparer, put=__cordl_internal_set_equalityComparer)) ::System::Collections::Generic::IEqualityComparer_1<U>*  equalityComparer;

/// @brief Field monitorFunction, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_monitorFunction, put=__cordl_internal_set_monitorFunction)) ::System::Func_2<T,U>*  monitorFunction;

/// @brief Field nextNode, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_nextNode, put=__cordl_internal_set_nextNode)) ::Cysharp::Threading::Tasks::UniTask_WaitUntilValueChangedUnityObjectPromise_2<T,U>*  nextNode;

/// @brief Field pool, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_pool, put=setStaticF_pool)) ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UniTask_WaitUntilValueChangedUnityObjectPromise_2<T,U>*>  pool;

/// @brief Field target, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_target, put=__cordl_internal_set_target)) T  target;

/// @brief Field targetAsUnityObject, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_targetAsUnityObject, put=__cordl_internal_set_targetAsUnityObject)) ::UnityW<::UnityEngine::Object>  targetAsUnityObject;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
constexpr operator  ::Cysharp::Threading::Tasks::IPlayerLoopItem*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UniTask_WaitUntilValueChangedUnityObjectPromise_2<T,U>*>"
constexpr operator  ::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UniTask_WaitUntilValueChangedUnityObjectPromise_2<T,U>*>*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource_1<U>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource_1<U>*() noexcept;

/// @brief Method Create, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IUniTaskSource_1<U>* Create(T  target, ::System::Func_2<T,U>*  monitorFunction, ::System::Collections::Generic::IEqualityComparer_1<U>*  equalityComparer, ::Cysharp::Threading::Tasks::PlayerLoopTiming  timing, ::System::Threading::CancellationToken  cancellationToken, ::by_ref<int16_t>  token) ;

/// @brief Method Cysharp.Threading.Tasks.IUniTaskSource.GetResult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Cysharp_Threading_Tasks_IUniTaskSource_GetResult(int16_t  token) ;

/// @brief Method GetResult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline U GetResult(int16_t  token) ;

/// @brief Method GetStatus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(int16_t  token) ;

/// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Cysharp::Threading::Tasks::UniTask_WaitUntilValueChangedUnityObjectPromise_2<T,U>* New_ctor() ;

/// @brief Method OnCompleted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token) ;

/// @brief Method TryReturn, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool TryReturn() ;

/// @brief Method UnsafeGetStatus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus() ;

constexpr ::System::Threading::CancellationToken const& __cordl_internal_get_cancellationToken() const;

constexpr ::System::Threading::CancellationToken& __cordl_internal_get_cancellationToken() ;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<U> const& __cordl_internal_get_core() const;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<U>& __cordl_internal_get_core() ;

constexpr U const& __cordl_internal_get_currentValue() const;

constexpr U& __cordl_internal_get_currentValue() ;

constexpr ::System::Collections::Generic::IEqualityComparer_1<U>* const& __cordl_internal_get_equalityComparer() const;

constexpr ::System::Collections::Generic::IEqualityComparer_1<U>*& __cordl_internal_get_equalityComparer() ;

constexpr ::System::Func_2<T,U>* const& __cordl_internal_get_monitorFunction() const;

constexpr ::System::Func_2<T,U>*& __cordl_internal_get_monitorFunction() ;

constexpr ::Cysharp::Threading::Tasks::UniTask_WaitUntilValueChangedUnityObjectPromise_2<T,U>* const& __cordl_internal_get_nextNode() const;

constexpr ::Cysharp::Threading::Tasks::UniTask_WaitUntilValueChangedUnityObjectPromise_2<T,U>*& __cordl_internal_get_nextNode() ;

constexpr T const& __cordl_internal_get_target() const;

constexpr T& __cordl_internal_get_target() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get_targetAsUnityObject() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get_targetAsUnityObject() ;

constexpr void __cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr void __cordl_internal_set_core(::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<U>  value) ;

constexpr void __cordl_internal_set_currentValue(U  value) ;

constexpr void __cordl_internal_set_equalityComparer(::System::Collections::Generic::IEqualityComparer_1<U>*  value) ;

constexpr void __cordl_internal_set_monitorFunction(::System::Func_2<T,U>*  value) ;

constexpr void __cordl_internal_set_nextNode(::Cysharp::Threading::Tasks::UniTask_WaitUntilValueChangedUnityObjectPromise_2<T,U>*  value) ;

constexpr void __cordl_internal_set_target(T  value) ;

constexpr void __cordl_internal_set_targetAsUnityObject(::UnityW<::UnityEngine::Object>  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UniTask_WaitUntilValueChangedUnityObjectPromise_2<T,U>*> getStaticF_pool() ;

/// @brief Method get_NextNode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::by_ref<::Cysharp::Threading::Tasks::UniTask_WaitUntilValueChangedUnityObjectPromise_2<T,U>*> get_NextNode() ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
constexpr ::Cysharp::Threading::Tasks::IPlayerLoopItem* i___Cysharp__Threading__Tasks__IPlayerLoopItem() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UniTask_WaitUntilValueChangedUnityObjectPromise_2<T,U>*>"
constexpr ::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UniTask_WaitUntilValueChangedUnityObjectPromise_2<T,U>*>* i___Cysharp__Threading__Tasks__ITaskPoolNode_1___Cysharp__Threading__Tasks__UniTask_WaitUntilValueChangedUnityObjectPromise_2_T_U___() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource_1<U>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource_1<U>* i___Cysharp__Threading__Tasks__IUniTaskSource_1_U_() noexcept;

static inline void setStaticF_pool(::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UniTask_WaitUntilValueChangedUnityObjectPromise_2<T,U>*>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UniTask_WaitUntilValueChangedUnityObjectPromise_2() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UniTask_WaitUntilValueChangedUnityObjectPromise_2", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UniTask_WaitUntilValueChangedUnityObjectPromise_2(UniTask_WaitUntilValueChangedUnityObjectPromise_2 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UniTask_WaitUntilValueChangedUnityObjectPromise_2", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UniTask_WaitUntilValueChangedUnityObjectPromise_2(UniTask_WaitUntilValueChangedUnityObjectPromise_2 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21710};

/// @brief Field nextNode, offset: 0x10, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::UniTask_WaitUntilValueChangedUnityObjectPromise_2<T,U>*  ___nextNode;

/// @brief Field target, offset: 0x18, size: 0x8, def value: None
 T  ___target;

/// @brief Field targetAsUnityObject, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ___targetAsUnityObject;

/// @brief Field currentValue, offset: 0x28, size: 0x8, def value: None
 U  ___currentValue;

/// @brief Field monitorFunction, offset: 0x30, size: 0x8, def value: None
 ::System::Func_2<T,U>*  ___monitorFunction;

/// @brief Field equalityComparer, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::IEqualityComparer_1<U>*  ___equalityComparer;

/// @brief Field cancellationToken, offset: 0x40, size: 0x8, def value: None
 ::System::Threading::CancellationToken  ___cancellationToken;

/// @brief Field core, offset: 0x48, size: 0x28, def value: None
 ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<U>  ___core;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
// [CompilerGenerated]
// Dependencies System.Object
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T,typename U>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTask/WaitUntilValueChangedUnityObjectPromise`2/<>c<T,U>
class CORDL_TYPE WaitUntilValueChangedUnityObjectPromise_2_UniTask___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Cysharp::Threading::Tasks::WaitUntilValueChangedUnityObjectPromise_2_UniTask___c<T,U>*  __9;

static inline ::Cysharp::Threading::Tasks::WaitUntilValueChangedUnityObjectPromise_2_UniTask___c<T,U>* New_ctor() ;

/// @brief Method <.cctor>b__4_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t __cctor_b__4_0() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Threading::Tasks::WaitUntilValueChangedUnityObjectPromise_2_UniTask___c<T,U>* getStaticF___9() ;

static inline void setStaticF___9(::Cysharp::Threading::Tasks::WaitUntilValueChangedUnityObjectPromise_2_UniTask___c<T,U>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WaitUntilValueChangedUnityObjectPromise_2_UniTask___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WaitUntilValueChangedUnityObjectPromise_2_UniTask___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WaitUntilValueChangedUnityObjectPromise_2_UniTask___c(WaitUntilValueChangedUnityObjectPromise_2_UniTask___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WaitUntilValueChangedUnityObjectPromise_2_UniTask___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WaitUntilValueChangedUnityObjectPromise_2_UniTask___c(WaitUntilValueChangedUnityObjectPromise_2_UniTask___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21709};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
// Dependencies Cysharp.Threading.Tasks.TaskPool`1<T>, Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<TResult>, System.Object, System.Threading.CancellationToken
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTask/WaitUntilCanceledPromise
class CORDL_TYPE UniTask_WaitUntilCanceledPromise : public ::System::Object {
public:
// Declarations
using __c = ::Cysharp::Threading::Tasks::WaitUntilCanceledPromise_UniTask___c;

 __declspec(property(get=get_NextNode)) ::Cysharp::Threading::Tasks::UniTask_WaitUntilCanceledPromise*  NextNode;

/// @brief Field cancellationToken, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_cancellationToken, put=__cordl_internal_set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field core, offset 0x20, size 0x28 
 __declspec(property(get=__cordl_internal_get_core, put=__cordl_internal_set_core)) ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::Object*>  core;

/// @brief Field nextNode, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_nextNode, put=__cordl_internal_set_nextNode)) ::Cysharp::Threading::Tasks::UniTask_WaitUntilCanceledPromise*  nextNode;

/// @brief Field pool, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_pool, put=setStaticF_pool)) ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UniTask_WaitUntilCanceledPromise*>  pool;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
constexpr operator  ::Cysharp::Threading::Tasks::IPlayerLoopItem*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UniTask_WaitUntilCanceledPromise*>"
constexpr operator  ::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UniTask_WaitUntilCanceledPromise*>*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept;

/// @brief Method Create, addr 0xadef118, size 0x190, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IUniTaskSource* Create(::System::Threading::CancellationToken  cancellationToken, ::Cysharp::Threading::Tasks::PlayerLoopTiming  timing, ::by_ref<int16_t>  token) ;

/// @brief Method GetResult, addr 0xadf4d6c, size 0xc8, virtual true, abstract: false, final true
inline void GetResult(int16_t  token) ;

/// @brief Method GetStatus, addr 0xadf4e34, size 0x58, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(int16_t  token) ;

/// @brief Method MoveNext, addr 0xadf4fb4, size 0x90, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Cysharp::Threading::Tasks::UniTask_WaitUntilCanceledPromise* New_ctor() ;

/// @brief Method OnCompleted, addr 0xadf4f44, size 0x70, virtual true, abstract: false, final true
inline void OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token) ;

/// @brief Method TryReturn, addr 0xadf5044, size 0xa0, virtual false, abstract: false, final false
inline bool TryReturn() ;

/// @brief Method UnsafeGetStatus, addr 0xadf4e8c, size 0xb8, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus() ;

constexpr ::System::Threading::CancellationToken const& __cordl_internal_get_cancellationToken() const;

constexpr ::System::Threading::CancellationToken& __cordl_internal_get_cancellationToken() ;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::Object*> const& __cordl_internal_get_core() const;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::Object*>& __cordl_internal_get_core() ;

constexpr ::Cysharp::Threading::Tasks::UniTask_WaitUntilCanceledPromise* const& __cordl_internal_get_nextNode() const;

constexpr ::Cysharp::Threading::Tasks::UniTask_WaitUntilCanceledPromise*& __cordl_internal_get_nextNode() ;

constexpr void __cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr void __cordl_internal_set_core(::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::Object*>  value) ;

constexpr void __cordl_internal_set_nextNode(::Cysharp::Threading::Tasks::UniTask_WaitUntilCanceledPromise*  value) ;

/// @brief Method .ctor, addr 0xadf4d64, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UniTask_WaitUntilCanceledPromise*> getStaticF_pool() ;

/// @brief Method get_NextNode, addr 0xadf4c48, size 0x8, virtual true, abstract: false, final true
inline ::by_ref<::Cysharp::Threading::Tasks::UniTask_WaitUntilCanceledPromise*> get_NextNode() ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
constexpr ::Cysharp::Threading::Tasks::IPlayerLoopItem* i___Cysharp__Threading__Tasks__IPlayerLoopItem() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UniTask_WaitUntilCanceledPromise*>"
constexpr ::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UniTask_WaitUntilCanceledPromise*>* i___Cysharp__Threading__Tasks__ITaskPoolNode_1___Cysharp__Threading__Tasks__UniTask_WaitUntilCanceledPromise__() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept;

static inline void setStaticF_pool(::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UniTask_WaitUntilCanceledPromise*>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UniTask_WaitUntilCanceledPromise() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UniTask_WaitUntilCanceledPromise", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UniTask_WaitUntilCanceledPromise(UniTask_WaitUntilCanceledPromise && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UniTask_WaitUntilCanceledPromise", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UniTask_WaitUntilCanceledPromise(UniTask_WaitUntilCanceledPromise const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21708};

/// @brief Field nextNode, offset: 0x10, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::UniTask_WaitUntilCanceledPromise*  ___nextNode;

/// @brief Field cancellationToken, offset: 0x18, size: 0x8, def value: None
 ::System::Threading::CancellationToken  ___cancellationToken;

/// @brief Field core, offset: 0x20, size: 0x28, def value: None
 ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::Object*>  ___core;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Cysharp::Threading::Tasks::UniTask_WaitUntilCanceledPromise, ___nextNode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UniTask_WaitUntilCanceledPromise, ___cancellationToken) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UniTask_WaitUntilCanceledPromise, ___core) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Cysharp::Threading::Tasks::UniTask_WaitUntilCanceledPromise) == 0x48, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
// [CompilerGenerated]
// Dependencies System.Object
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTask/WaitUntilCanceledPromise/<>c
class CORDL_TYPE WaitUntilCanceledPromise_UniTask___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Cysharp::Threading::Tasks::WaitUntilCanceledPromise_UniTask___c*  __9;

static inline ::Cysharp::Threading::Tasks::WaitUntilCanceledPromise_UniTask___c* New_ctor() ;

/// @brief Method <.cctor>b__4_0, addr 0xadf5154, size 0x64, virtual false, abstract: false, final false
inline int32_t __cctor_b__4_0() ;

/// @brief Method .ctor, addr 0xadf514c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Threading::Tasks::WaitUntilCanceledPromise_UniTask___c* getStaticF___9() ;

static inline void setStaticF___9(::Cysharp::Threading::Tasks::WaitUntilCanceledPromise_UniTask___c*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WaitUntilCanceledPromise_UniTask___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WaitUntilCanceledPromise_UniTask___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WaitUntilCanceledPromise_UniTask___c(WaitUntilCanceledPromise_UniTask___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WaitUntilCanceledPromise_UniTask___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WaitUntilCanceledPromise_UniTask___c(WaitUntilCanceledPromise_UniTask___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21707};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::WaitUntilCanceledPromise_UniTask___c) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
// Dependencies Cysharp.Threading.Tasks.TaskPool`1<T>, Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<TResult>, System.Object, System.Threading.CancellationToken
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTask/WaitWhilePromise
class CORDL_TYPE UniTask_WaitWhilePromise : public ::System::Object {
public:
// Declarations
using __c = ::Cysharp::Threading::Tasks::WaitWhilePromise_UniTask___c;

 __declspec(property(get=get_NextNode)) ::Cysharp::Threading::Tasks::UniTask_WaitWhilePromise*  NextNode;

/// @brief Field cancellationToken, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_cancellationToken, put=__cordl_internal_set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field core, offset 0x28, size 0x28 
 __declspec(property(get=__cordl_internal_get_core, put=__cordl_internal_set_core)) ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::Object*>  core;

/// @brief Field nextNode, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_nextNode, put=__cordl_internal_set_nextNode)) ::Cysharp::Threading::Tasks::UniTask_WaitWhilePromise*  nextNode;

/// @brief Field pool, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_pool, put=setStaticF_pool)) ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UniTask_WaitWhilePromise*>  pool;

/// @brief Field predicate, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_predicate, put=__cordl_internal_set_predicate)) ::System::Func_1<bool>*  predicate;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
constexpr operator  ::Cysharp::Threading::Tasks::IPlayerLoopItem*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UniTask_WaitWhilePromise*>"
constexpr operator  ::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UniTask_WaitWhilePromise*>*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept;

/// @brief Method Create, addr 0xadeeedc, size 0x1a8, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IUniTaskSource* Create(::System::Func_1<bool>*  predicate, ::Cysharp::Threading::Tasks::PlayerLoopTiming  timing, ::System::Threading::CancellationToken  cancellationToken, ::by_ref<int16_t>  token) ;

/// @brief Method GetResult, addr 0xadf470c, size 0xc8, virtual true, abstract: false, final true
inline void GetResult(int16_t  token) ;

/// @brief Method GetStatus, addr 0xadf47d4, size 0x58, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(int16_t  token) ;

/// @brief Method MoveNext, addr 0xadf4954, size 0x16c, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Cysharp::Threading::Tasks::UniTask_WaitWhilePromise* New_ctor() ;

/// @brief Method OnCompleted, addr 0xadf48e4, size 0x70, virtual true, abstract: false, final true
inline void OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token) ;

/// @brief Method TryReturn, addr 0xadf4ac0, size 0xb4, virtual false, abstract: false, final false
inline bool TryReturn() ;

/// @brief Method UnsafeGetStatus, addr 0xadf482c, size 0xb8, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus() ;

constexpr ::System::Threading::CancellationToken const& __cordl_internal_get_cancellationToken() const;

constexpr ::System::Threading::CancellationToken& __cordl_internal_get_cancellationToken() ;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::Object*> const& __cordl_internal_get_core() const;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::Object*>& __cordl_internal_get_core() ;

constexpr ::Cysharp::Threading::Tasks::UniTask_WaitWhilePromise* const& __cordl_internal_get_nextNode() const;

constexpr ::Cysharp::Threading::Tasks::UniTask_WaitWhilePromise*& __cordl_internal_get_nextNode() ;

constexpr ::System::Func_1<bool>* const& __cordl_internal_get_predicate() const;

constexpr ::System::Func_1<bool>*& __cordl_internal_get_predicate() ;

constexpr void __cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr void __cordl_internal_set_core(::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::Object*>  value) ;

constexpr void __cordl_internal_set_nextNode(::Cysharp::Threading::Tasks::UniTask_WaitWhilePromise*  value) ;

constexpr void __cordl_internal_set_predicate(::System::Func_1<bool>*  value) ;

/// @brief Method .ctor, addr 0xadf4704, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UniTask_WaitWhilePromise*> getStaticF_pool() ;

/// @brief Method get_NextNode, addr 0xadf45e8, size 0x8, virtual true, abstract: false, final true
inline ::by_ref<::Cysharp::Threading::Tasks::UniTask_WaitWhilePromise*> get_NextNode() ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
constexpr ::Cysharp::Threading::Tasks::IPlayerLoopItem* i___Cysharp__Threading__Tasks__IPlayerLoopItem() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UniTask_WaitWhilePromise*>"
constexpr ::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UniTask_WaitWhilePromise*>* i___Cysharp__Threading__Tasks__ITaskPoolNode_1___Cysharp__Threading__Tasks__UniTask_WaitWhilePromise__() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept;

static inline void setStaticF_pool(::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UniTask_WaitWhilePromise*>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UniTask_WaitWhilePromise() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UniTask_WaitWhilePromise", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UniTask_WaitWhilePromise(UniTask_WaitWhilePromise && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UniTask_WaitWhilePromise", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UniTask_WaitWhilePromise(UniTask_WaitWhilePromise const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21706};

/// @brief Field nextNode, offset: 0x10, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::UniTask_WaitWhilePromise*  ___nextNode;

/// @brief Field predicate, offset: 0x18, size: 0x8, def value: None
 ::System::Func_1<bool>*  ___predicate;

/// @brief Field cancellationToken, offset: 0x20, size: 0x8, def value: None
 ::System::Threading::CancellationToken  ___cancellationToken;

/// @brief Field core, offset: 0x28, size: 0x28, def value: None
 ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::Object*>  ___core;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Cysharp::Threading::Tasks::UniTask_WaitWhilePromise, ___nextNode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UniTask_WaitWhilePromise, ___predicate) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UniTask_WaitWhilePromise, ___cancellationToken) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UniTask_WaitWhilePromise, ___core) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Cysharp::Threading::Tasks::UniTask_WaitWhilePromise) == 0x50, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
// [CompilerGenerated]
// Dependencies System.Object
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTask/WaitWhilePromise/<>c
class CORDL_TYPE WaitWhilePromise_UniTask___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Cysharp::Threading::Tasks::WaitWhilePromise_UniTask___c*  __9;

static inline ::Cysharp::Threading::Tasks::WaitWhilePromise_UniTask___c* New_ctor() ;

/// @brief Method <.cctor>b__4_0, addr 0xadf4be4, size 0x64, virtual false, abstract: false, final false
inline int32_t __cctor_b__4_0() ;

/// @brief Method .ctor, addr 0xadf4bdc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Threading::Tasks::WaitWhilePromise_UniTask___c* getStaticF___9() ;

static inline void setStaticF___9(::Cysharp::Threading::Tasks::WaitWhilePromise_UniTask___c*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WaitWhilePromise_UniTask___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WaitWhilePromise_UniTask___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WaitWhilePromise_UniTask___c(WaitWhilePromise_UniTask___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WaitWhilePromise_UniTask___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WaitWhilePromise_UniTask___c(WaitWhilePromise_UniTask___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21705};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::WaitWhilePromise_UniTask___c) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
// Dependencies Cysharp.Threading.Tasks.TaskPool`1<T>, Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<TResult>, System.Object, System.Threading.CancellationToken
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTask/WaitUntilPromise
class CORDL_TYPE UniTask_WaitUntilPromise : public ::System::Object {
public:
// Declarations
using __c = ::Cysharp::Threading::Tasks::WaitUntilPromise_UniTask___c;

 __declspec(property(get=get_NextNode)) ::Cysharp::Threading::Tasks::UniTask_WaitUntilPromise*  NextNode;

/// @brief Field cancellationToken, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_cancellationToken, put=__cordl_internal_set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field core, offset 0x28, size 0x28 
 __declspec(property(get=__cordl_internal_get_core, put=__cordl_internal_set_core)) ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::Object*>  core;

/// @brief Field nextNode, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_nextNode, put=__cordl_internal_set_nextNode)) ::Cysharp::Threading::Tasks::UniTask_WaitUntilPromise*  nextNode;

/// @brief Field pool, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_pool, put=setStaticF_pool)) ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UniTask_WaitUntilPromise*>  pool;

/// @brief Field predicate, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_predicate, put=__cordl_internal_set_predicate)) ::System::Func_1<bool>*  predicate;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
constexpr operator  ::Cysharp::Threading::Tasks::IPlayerLoopItem*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UniTask_WaitUntilPromise*>"
constexpr operator  ::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UniTask_WaitUntilPromise*>*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept;

/// @brief Method Create, addr 0xadeec98, size 0x1a8, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IUniTaskSource* Create(::System::Func_1<bool>*  predicate, ::Cysharp::Threading::Tasks::PlayerLoopTiming  timing, ::System::Threading::CancellationToken  cancellationToken, ::by_ref<int16_t>  token) ;

/// @brief Method GetResult, addr 0xadf40ac, size 0xc8, virtual true, abstract: false, final true
inline void GetResult(int16_t  token) ;

/// @brief Method GetStatus, addr 0xadf4174, size 0x58, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(int16_t  token) ;

/// @brief Method MoveNext, addr 0xadf42f4, size 0x16c, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Cysharp::Threading::Tasks::UniTask_WaitUntilPromise* New_ctor() ;

/// @brief Method OnCompleted, addr 0xadf4284, size 0x70, virtual true, abstract: false, final true
inline void OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token) ;

/// @brief Method TryReturn, addr 0xadf4460, size 0xb4, virtual false, abstract: false, final false
inline bool TryReturn() ;

/// @brief Method UnsafeGetStatus, addr 0xadf41cc, size 0xb8, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus() ;

constexpr ::System::Threading::CancellationToken const& __cordl_internal_get_cancellationToken() const;

constexpr ::System::Threading::CancellationToken& __cordl_internal_get_cancellationToken() ;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::Object*> const& __cordl_internal_get_core() const;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::Object*>& __cordl_internal_get_core() ;

constexpr ::Cysharp::Threading::Tasks::UniTask_WaitUntilPromise* const& __cordl_internal_get_nextNode() const;

constexpr ::Cysharp::Threading::Tasks::UniTask_WaitUntilPromise*& __cordl_internal_get_nextNode() ;

constexpr ::System::Func_1<bool>* const& __cordl_internal_get_predicate() const;

constexpr ::System::Func_1<bool>*& __cordl_internal_get_predicate() ;

constexpr void __cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr void __cordl_internal_set_core(::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::Object*>  value) ;

constexpr void __cordl_internal_set_nextNode(::Cysharp::Threading::Tasks::UniTask_WaitUntilPromise*  value) ;

constexpr void __cordl_internal_set_predicate(::System::Func_1<bool>*  value) ;

/// @brief Method .ctor, addr 0xadf40a4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UniTask_WaitUntilPromise*> getStaticF_pool() ;

/// @brief Method get_NextNode, addr 0xadf3f88, size 0x8, virtual true, abstract: false, final true
inline ::by_ref<::Cysharp::Threading::Tasks::UniTask_WaitUntilPromise*> get_NextNode() ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
constexpr ::Cysharp::Threading::Tasks::IPlayerLoopItem* i___Cysharp__Threading__Tasks__IPlayerLoopItem() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UniTask_WaitUntilPromise*>"
constexpr ::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UniTask_WaitUntilPromise*>* i___Cysharp__Threading__Tasks__ITaskPoolNode_1___Cysharp__Threading__Tasks__UniTask_WaitUntilPromise__() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept;

static inline void setStaticF_pool(::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UniTask_WaitUntilPromise*>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UniTask_WaitUntilPromise() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UniTask_WaitUntilPromise", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UniTask_WaitUntilPromise(UniTask_WaitUntilPromise && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UniTask_WaitUntilPromise", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UniTask_WaitUntilPromise(UniTask_WaitUntilPromise const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21704};

/// @brief Field nextNode, offset: 0x10, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::UniTask_WaitUntilPromise*  ___nextNode;

/// @brief Field predicate, offset: 0x18, size: 0x8, def value: None
 ::System::Func_1<bool>*  ___predicate;

/// @brief Field cancellationToken, offset: 0x20, size: 0x8, def value: None
 ::System::Threading::CancellationToken  ___cancellationToken;

/// @brief Field core, offset: 0x28, size: 0x28, def value: None
 ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::Object*>  ___core;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Cysharp::Threading::Tasks::UniTask_WaitUntilPromise, ___nextNode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UniTask_WaitUntilPromise, ___predicate) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UniTask_WaitUntilPromise, ___cancellationToken) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UniTask_WaitUntilPromise, ___core) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Cysharp::Threading::Tasks::UniTask_WaitUntilPromise) == 0x50, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
// [CompilerGenerated]
// Dependencies System.Object
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTask/WaitUntilPromise/<>c
class CORDL_TYPE WaitUntilPromise_UniTask___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Cysharp::Threading::Tasks::WaitUntilPromise_UniTask___c*  __9;

static inline ::Cysharp::Threading::Tasks::WaitUntilPromise_UniTask___c* New_ctor() ;

/// @brief Method <.cctor>b__4_0, addr 0xadf4584, size 0x64, virtual false, abstract: false, final false
inline int32_t __cctor_b__4_0() ;

/// @brief Method .ctor, addr 0xadf457c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Threading::Tasks::WaitUntilPromise_UniTask___c* getStaticF___9() ;

static inline void setStaticF___9(::Cysharp::Threading::Tasks::WaitUntilPromise_UniTask___c*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WaitUntilPromise_UniTask___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WaitUntilPromise_UniTask___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WaitUntilPromise_UniTask___c(WaitUntilPromise_UniTask___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WaitUntilPromise_UniTask___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WaitUntilPromise_UniTask___c(WaitUntilPromise_UniTask___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21703};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::WaitUntilPromise_UniTask___c) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
// Dependencies Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<TResult>, System.Object, System.Threading.CancellationToken
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTask/NeverPromise`1<T>
class CORDL_TYPE UniTask_NeverPromise_1 : public ::System::Object {
public:
// Declarations
/// @brief Field cancellationCallback, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_cancellationCallback, put=setStaticF_cancellationCallback)) ::System::Action_1<::System::Object*>*  cancellationCallback;

/// @brief Field cancellationToken, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_cancellationToken, put=__cordl_internal_set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field core, offset 0x18, size 0x28 
 __declspec(property(get=__cordl_internal_get_core, put=__cordl_internal_set_core)) ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<T>  core;

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

static inline ::Cysharp::Threading::Tasks::UniTask_NeverPromise_1<T>* New_ctor(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method OnCompleted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token) ;

/// @brief Method UnsafeGetStatus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus() ;

constexpr ::System::Threading::CancellationToken const& __cordl_internal_get_cancellationToken() const;

constexpr ::System::Threading::CancellationToken& __cordl_internal_get_cancellationToken() ;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<T> const& __cordl_internal_get_core() const;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<T>& __cordl_internal_get_core() ;

constexpr void __cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr void __cordl_internal_set_core(::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<T>  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Threading::CancellationToken  cancellationToken) ;

static inline ::System::Action_1<::System::Object*>* getStaticF_cancellationCallback() ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource_1<T>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource_1<T>* i___Cysharp__Threading__Tasks__IUniTaskSource_1_T_() noexcept;

static inline void setStaticF_cancellationCallback(::System::Action_1<::System::Object*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UniTask_NeverPromise_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UniTask_NeverPromise_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UniTask_NeverPromise_1(UniTask_NeverPromise_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UniTask_NeverPromise_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UniTask_NeverPromise_1(UniTask_NeverPromise_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21702};

/// @brief Field cancellationToken, offset: 0x10, size: 0x8, def value: None
 ::System::Threading::CancellationToken  ___cancellationToken;

/// @brief Field core, offset: 0x18, size: 0x28, def value: None
 ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<T>  ___core;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
// Dependencies Cysharp.Threading.Tasks.UniTask`1::Awaiter<T>, Cysharp.Threading.Tasks.UniTask`1<T>, System.Object
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTask/DeferPromise`1<T>
class CORDL_TYPE UniTask_DeferPromise_1 : public ::System::Object {
public:
// Declarations
/// @brief Field awaiter, offset 0x30, size 0x18 
 __declspec(property(get=__cordl_internal_get_awaiter, put=__cordl_internal_set_awaiter)) ::GlobalNamespace::UniTask_1_Awaiter<T>  awaiter;

/// @brief Field factory, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_factory, put=__cordl_internal_set_factory)) ::System::Func_1<::Cysharp::Threading::Tasks::UniTask_1<T>>*  factory;

/// @brief Field task, offset 0x18, size 0x18 
 __declspec(property(get=__cordl_internal_get_task, put=__cordl_internal_set_task)) ::Cysharp::Threading::Tasks::UniTask_1<T>  task;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource_1<T>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource_1<T>*() noexcept;

/// @brief Method Cysharp.Threading.Tasks.IUniTaskSource.GetResult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Cysharp_Threading_Tasks_IUniTaskSource_GetResult(int16_t  token) ;

/// @brief Method GetResult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline T GetResult(int16_t  token) ;

/// @brief Method GetStatus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(int16_t  token) ;

static inline ::Cysharp::Threading::Tasks::UniTask_DeferPromise_1<T>* New_ctor(::System::Func_1<::Cysharp::Threading::Tasks::UniTask_1<T>>*  factory) ;

/// @brief Method OnCompleted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token) ;

/// @brief Method UnsafeGetStatus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus() ;

constexpr ::GlobalNamespace::UniTask_1_Awaiter<T> const& __cordl_internal_get_awaiter() const;

constexpr ::GlobalNamespace::UniTask_1_Awaiter<T>& __cordl_internal_get_awaiter() ;

constexpr ::System::Func_1<::Cysharp::Threading::Tasks::UniTask_1<T>>* const& __cordl_internal_get_factory() const;

constexpr ::System::Func_1<::Cysharp::Threading::Tasks::UniTask_1<T>>*& __cordl_internal_get_factory() ;

constexpr ::Cysharp::Threading::Tasks::UniTask_1<T> const& __cordl_internal_get_task() const;

constexpr ::Cysharp::Threading::Tasks::UniTask_1<T>& __cordl_internal_get_task() ;

constexpr void __cordl_internal_set_awaiter(::GlobalNamespace::UniTask_1_Awaiter<T>  value) ;

constexpr void __cordl_internal_set_factory(::System::Func_1<::Cysharp::Threading::Tasks::UniTask_1<T>>*  value) ;

constexpr void __cordl_internal_set_task(::Cysharp::Threading::Tasks::UniTask_1<T>  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Func_1<::Cysharp::Threading::Tasks::UniTask_1<T>>*  factory) ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource_1<T>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource_1<T>* i___Cysharp__Threading__Tasks__IUniTaskSource_1_T_() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UniTask_DeferPromise_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UniTask_DeferPromise_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UniTask_DeferPromise_1(UniTask_DeferPromise_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UniTask_DeferPromise_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UniTask_DeferPromise_1(UniTask_DeferPromise_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21701};

/// @brief Field factory, offset: 0x10, size: 0x8, def value: None
 ::System::Func_1<::Cysharp::Threading::Tasks::UniTask_1<T>>*  ___factory;

/// @brief Field task, offset: 0x18, size: 0x18, def value: None
 ::Cysharp::Threading::Tasks::UniTask_1<T>  ___task;

/// @brief Field awaiter, offset: 0x30, size: 0x18, def value: None
 ::GlobalNamespace::UniTask_1_Awaiter<T>  ___awaiter;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
// Dependencies Cysharp.Threading.Tasks.UniTask, Cysharp.Threading.Tasks.UniTask::Awaiter, System.Object
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTask/DeferPromise
class CORDL_TYPE UniTask_DeferPromise : public ::System::Object {
public:
// Declarations
/// @brief Field awaiter, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_awaiter, put=__cordl_internal_set_awaiter)) ::GlobalNamespace::UniTask_Awaiter  awaiter;

/// @brief Field factory, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_factory, put=__cordl_internal_set_factory)) ::System::Func_1<::Cysharp::Threading::Tasks::UniTask>*  factory;

/// @brief Field task, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get_task, put=__cordl_internal_set_task)) ::Cysharp::Threading::Tasks::UniTask  task;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept;

/// @brief Method GetResult, addr 0xadf3ba0, size 0xb4, virtual true, abstract: false, final true
inline void GetResult(int16_t  token) ;

/// @brief Method GetStatus, addr 0xadf3c54, size 0x160, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(int16_t  token) ;

static inline ::Cysharp::Threading::Tasks::UniTask_DeferPromise* New_ctor(::System::Func_1<::Cysharp::Threading::Tasks::UniTask>*  factory) ;

/// @brief Method OnCompleted, addr 0xadf3db4, size 0xe8, virtual true, abstract: false, final true
inline void OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token) ;

/// @brief Method UnsafeGetStatus, addr 0xadf3e9c, size 0xec, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus() ;

constexpr ::GlobalNamespace::UniTask_Awaiter const& __cordl_internal_get_awaiter() const;

constexpr ::GlobalNamespace::UniTask_Awaiter& __cordl_internal_get_awaiter() ;

constexpr ::System::Func_1<::Cysharp::Threading::Tasks::UniTask>* const& __cordl_internal_get_factory() const;

constexpr ::System::Func_1<::Cysharp::Threading::Tasks::UniTask>*& __cordl_internal_get_factory() ;

constexpr ::Cysharp::Threading::Tasks::UniTask const& __cordl_internal_get_task() const;

constexpr ::Cysharp::Threading::Tasks::UniTask& __cordl_internal_get_task() ;

constexpr void __cordl_internal_set_awaiter(::GlobalNamespace::UniTask_Awaiter  value) ;

constexpr void __cordl_internal_set_factory(::System::Func_1<::Cysharp::Threading::Tasks::UniTask>*  value) ;

constexpr void __cordl_internal_set_task(::Cysharp::Threading::Tasks::UniTask  value) ;

/// @brief Method .ctor, addr 0xadee2e0, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::System::Func_1<::Cysharp::Threading::Tasks::UniTask>*  factory) ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UniTask_DeferPromise() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UniTask_DeferPromise", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UniTask_DeferPromise(UniTask_DeferPromise && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UniTask_DeferPromise", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UniTask_DeferPromise(UniTask_DeferPromise const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21700};

/// @brief Field factory, offset: 0x10, size: 0x8, def value: None
 ::System::Func_1<::Cysharp::Threading::Tasks::UniTask>*  ___factory;

/// @brief Field task, offset: 0x18, size: 0x10, def value: None
 ::Cysharp::Threading::Tasks::UniTask  ___task;

/// @brief Field awaiter, offset: 0x28, size: 0x10, def value: None
 ::GlobalNamespace::UniTask_Awaiter  ___awaiter;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Cysharp::Threading::Tasks::UniTask_DeferPromise, ___factory) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UniTask_DeferPromise, ___task) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UniTask_DeferPromise, ___awaiter) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Cysharp::Threading::Tasks::UniTask_DeferPromise) == 0x38, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
// [IsReadOnly]
// [AsyncMethodBuilder(typeof(Cysharp.Threading.Tasks.CompilerServices.AsyncUniTaskMethodBuilder))]
// Dependencies 
namespace Cysharp::Threading::Tasks {
// Is value type: true
// CS Name: Cysharp.Threading.Tasks.UniTask
struct CORDL_TYPE UniTask {
public:
// Declarations
using AsyncUnitSource = ::Cysharp::Threading::Tasks::UniTask_AsyncUnitSource;

using CanceledResultSource = ::Cysharp::Threading::Tasks::UniTask_CanceledResultSource;

template<typename T>
using CanceledResultSource_1 = ::Cysharp::Threading::Tasks::UniTask_CanceledResultSource_1<T>;

template<typename T>
using CanceledUniTaskCache_1 = ::Cysharp::Threading::Tasks::UniTask_CanceledUniTaskCache_1<T>;

using DeferPromise = ::Cysharp::Threading::Tasks::UniTask_DeferPromise;

template<typename T>
using DeferPromise_1 = ::Cysharp::Threading::Tasks::UniTask_DeferPromise_1<T>;

using DelayFramePromise = ::Cysharp::Threading::Tasks::UniTask_DelayFramePromise;

using DelayIgnoreTimeScalePromise = ::Cysharp::Threading::Tasks::UniTask_DelayIgnoreTimeScalePromise;

using DelayPromise = ::Cysharp::Threading::Tasks::UniTask_DelayPromise;

using DelayRealtimePromise = ::Cysharp::Threading::Tasks::UniTask_DelayRealtimePromise;

using ExceptionResultSource = ::Cysharp::Threading::Tasks::UniTask_ExceptionResultSource;

template<typename T>
using ExceptionResultSource_1 = ::Cysharp::Threading::Tasks::UniTask_ExceptionResultSource_1<T>;

using IsCanceledSource = ::Cysharp::Threading::Tasks::UniTask_IsCanceledSource;

using MemoizeSource = ::Cysharp::Threading::Tasks::UniTask_MemoizeSource;

template<typename T>
using NeverPromise_1 = ::Cysharp::Threading::Tasks::UniTask_NeverPromise_1<T>;

using NextFramePromise = ::Cysharp::Threading::Tasks::UniTask_NextFramePromise;

using WaitForEndOfFramePromise = ::Cysharp::Threading::Tasks::UniTask_WaitForEndOfFramePromise;

using WaitUntilCanceledPromise = ::Cysharp::Threading::Tasks::UniTask_WaitUntilCanceledPromise;

using WaitUntilPromise = ::Cysharp::Threading::Tasks::UniTask_WaitUntilPromise;

template<typename T,typename U>
using WaitUntilValueChangedStandardObjectPromise_2 = ::Cysharp::Threading::Tasks::UniTask_WaitUntilValueChangedStandardObjectPromise_2<T, U>;

template<typename T,typename U>
using WaitUntilValueChangedUnityObjectPromise_2 = ::Cysharp::Threading::Tasks::UniTask_WaitUntilValueChangedUnityObjectPromise_2<T, U>;

using WaitWhilePromise = ::Cysharp::Threading::Tasks::UniTask_WaitWhilePromise;

using WhenAllPromise = ::Cysharp::Threading::Tasks::UniTask_WhenAllPromise;

template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10>
using WhenAllPromise_10 = ::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_10<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10>;

template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11>
using WhenAllPromise_11 = ::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_11<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11>;

template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12>
using WhenAllPromise_12 = ::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_12<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12>;

template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12,typename T13>
using WhenAllPromise_13 = ::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_13<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13>;

template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12,typename T13,typename T14>
using WhenAllPromise_14 = ::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_14<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14>;

template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12,typename T13,typename T14,typename T15>
using WhenAllPromise_15 = ::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_15<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15>;

template<typename T>
using WhenAllPromise_1 = ::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_1<T>;

template<typename T1,typename T2>
using WhenAllPromise_2 = ::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_2<T1, T2>;

template<typename T1,typename T2,typename T3>
using WhenAllPromise_3 = ::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_3<T1, T2, T3>;

template<typename T1,typename T2,typename T3,typename T4>
using WhenAllPromise_4 = ::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_4<T1, T2, T3, T4>;

template<typename T1,typename T2,typename T3,typename T4,typename T5>
using WhenAllPromise_5 = ::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_5<T1, T2, T3, T4, T5>;

template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6>
using WhenAllPromise_6 = ::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_6<T1, T2, T3, T4, T5, T6>;

template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7>
using WhenAllPromise_7 = ::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_7<T1, T2, T3, T4, T5, T6, T7>;

template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8>
using WhenAllPromise_8 = ::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_8<T1, T2, T3, T4, T5, T6, T7, T8>;

template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9>
using WhenAllPromise_9 = ::Cysharp::Threading::Tasks::UniTask_WhenAllPromise_9<T1, T2, T3, T4, T5, T6, T7, T8, T9>;

template<typename T>
using WhenAnyLRPromise_1 = ::Cysharp::Threading::Tasks::UniTask_WhenAnyLRPromise_1<T>;

using WhenAnyPromise = ::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise;

template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10>
using WhenAnyPromise_10 = ::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_10<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10>;

template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11>
using WhenAnyPromise_11 = ::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_11<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11>;

template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12>
using WhenAnyPromise_12 = ::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_12<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12>;

template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12,typename T13>
using WhenAnyPromise_13 = ::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_13<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13>;

template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12,typename T13,typename T14>
using WhenAnyPromise_14 = ::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_14<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14>;

template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12,typename T13,typename T14,typename T15>
using WhenAnyPromise_15 = ::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_15<T1, T2, T3, T4, T5, T6, T7, T8, T9, T10, T11, T12, T13, T14, T15>;

template<typename T>
using WhenAnyPromise_1 = ::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_1<T>;

template<typename T1,typename T2>
using WhenAnyPromise_2 = ::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_2<T1, T2>;

template<typename T1,typename T2,typename T3>
using WhenAnyPromise_3 = ::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_3<T1, T2, T3>;

template<typename T1,typename T2,typename T3,typename T4>
using WhenAnyPromise_4 = ::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_4<T1, T2, T3, T4>;

template<typename T1,typename T2,typename T3,typename T4,typename T5>
using WhenAnyPromise_5 = ::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_5<T1, T2, T3, T4, T5>;

template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6>
using WhenAnyPromise_6 = ::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_6<T1, T2, T3, T4, T5, T6>;

template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7>
using WhenAnyPromise_7 = ::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_7<T1, T2, T3, T4, T5, T6, T7>;

template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8>
using WhenAnyPromise_8 = ::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_8<T1, T2, T3, T4, T5, T6, T7, T8>;

template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9>
using WhenAnyPromise_9 = ::Cysharp::Threading::Tasks::UniTask_WhenAnyPromise_9<T1, T2, T3, T4, T5, T6, T7, T8, T9>;

using YieldPromise = ::Cysharp::Threading::Tasks::UniTask_YieldPromise;

using __c = ::Cysharp::Threading::Tasks::UniTask___c;

using __c__DisplayClass55_0 = ::Cysharp::Threading::Tasks::UniTask___c__DisplayClass55_0;

using __c__DisplayClass56_0 = ::Cysharp::Threading::Tasks::UniTask___c__DisplayClass56_0;

using __c__DisplayClass57_0 = ::Cysharp::Threading::Tasks::UniTask___c__DisplayClass57_0;

using __c__DisplayClass58_0 = ::Cysharp::Threading::Tasks::UniTask___c__DisplayClass58_0;

using Awaiter = ::GlobalNamespace::UniTask_Awaiter;

using _RunOnThreadPool_d__78 = ::GlobalNamespace::UniTask__RunOnThreadPool_d__78;

using _RunOnThreadPool_d__79 = ::GlobalNamespace::UniTask__RunOnThreadPool_d__79;

using _RunOnThreadPool_d__80 = ::GlobalNamespace::UniTask__RunOnThreadPool_d__80;

using _RunOnThreadPool_d__81 = ::GlobalNamespace::UniTask__RunOnThreadPool_d__81;

template<typename T>
using _RunOnThreadPool_d__82_1 = ::GlobalNamespace::UniTask__RunOnThreadPool_d__82_1<T>;

template<typename T>
using _RunOnThreadPool_d__83_1 = ::GlobalNamespace::UniTask__RunOnThreadPool_d__83_1<T>;

template<typename T>
using _RunOnThreadPool_d__84_1 = ::GlobalNamespace::UniTask__RunOnThreadPool_d__84_1<T>;

template<typename T>
using _RunOnThreadPool_d__85_1 = ::GlobalNamespace::UniTask__RunOnThreadPool_d__85_1<T>;

/// @brief Field CanceledUniTask, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_CanceledUniTask, put=setStaticF_CanceledUniTask)) ::Cysharp::Threading::Tasks::UniTask  CanceledUniTask;

/// @brief Field CompletedTask, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_CompletedTask, put=setStaticF_CompletedTask)) ::Cysharp::Threading::Tasks::UniTask  CompletedTask;

 __declspec(property(get=get_Status)) ::Cysharp::Threading::Tasks::UniTaskStatus  Status;

/// @brief Method Action, addr 0xadedf24, size 0xbc, virtual false, abstract: false, final false
static inline ::System::Action* Action(::System::Func_1<::Cysharp::Threading::Tasks::UniTaskVoid>*  asyncAction) ;

/// @brief Method Action, addr 0xadedfe8, size 0xd0, virtual false, abstract: false, final false
static inline ::System::Action* Action(::System::Func_2<::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTaskVoid>*  asyncAction, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method AsAsyncUnitUniTask, addr 0xadec36c, size 0x208, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask_1<::Cysharp::Threading::Tasks::AsyncUnit> AsAsyncUnitUniTask() ;

/// @brief Method Create, addr 0xadede34, size 0x20, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask Create(::System::Func_1<::Cysharp::Threading::Tasks::UniTask>*  factory) ;

/// @brief Method Create, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::Cysharp::Threading::Tasks::UniTask_1<T> Create(::System::Func_1<::Cysharp::Threading::Tasks::UniTask_1<T>>*  factory) ;

/// @brief Method Defer, addr 0xadee25c, size 0x84, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask Defer(::System::Func_1<::Cysharp::Threading::Tasks::UniTask>*  factory) ;

/// @brief Method Defer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::Cysharp::Threading::Tasks::UniTask_1<T> Defer(::System::Func_1<::Cysharp::Threading::Tasks::UniTask_1<T>>*  factory) ;

/// @brief Method Delay, addr 0xaded414, size 0x1f8, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask Delay(::System::TimeSpan  delayTimeSpan, ::Cysharp::Threading::Tasks::DelayType  delayType, ::Cysharp::Threading::Tasks::PlayerLoopTiming  delayTiming, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method Delay, addr 0xaded398, size 0x7c, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask Delay(::System::TimeSpan  delayTimeSpan, bool  ignoreTimeScale, ::Cysharp::Threading::Tasks::PlayerLoopTiming  delayTiming, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method Delay, addr 0xaded60c, size 0xb4, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask Delay(int32_t  millisecondsDelay, ::Cysharp::Threading::Tasks::DelayType  delayType, ::Cysharp::Threading::Tasks::PlayerLoopTiming  delayTiming, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method Delay, addr 0xaded2e4, size 0xb4, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask Delay(int32_t  millisecondsDelay, bool  ignoreTimeScale, ::Cysharp::Threading::Tasks::PlayerLoopTiming  delayTiming, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method DelayFrame, addr 0xaded00c, size 0x108, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask DelayFrame(int32_t  delayFrameCount, ::Cysharp::Threading::Tasks::PlayerLoopTiming  delayTiming, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method FromCanceled, addr 0xade4580, size 0xfc, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask FromCanceled(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method FromCanceled, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::Cysharp::Threading::Tasks::UniTask_1<T> FromCanceled(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method FromException, addr 0xadedcd8, size 0xf0, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask FromException(::System::Exception*  ex) ;

/// @brief Method FromException, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::Cysharp::Threading::Tasks::UniTask_1<T> FromException(::System::Exception*  ex) ;

/// @brief Method FromResult, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::Cysharp::Threading::Tasks::UniTask_1<T> FromResult(T  value) ;

/// [DebuggerHidden]
/// @brief Method GetAwaiter, addr 0xadebf44, size 0x2c, virtual false, abstract: false, final false
inline ::GlobalNamespace::UniTask_Awaiter GetAwaiter() ;

/// @brief Method Lazy, addr 0xadede54, size 0x58, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::AsyncLazy* Lazy(::System::Func_1<::Cysharp::Threading::Tasks::UniTask>*  factory) ;

/// @brief Method Lazy, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::Cysharp::Threading::Tasks::AsyncLazy_1<T>* Lazy(::System::Func_1<::Cysharp::Threading::Tasks::UniTask_1<T>>*  factory) ;

/// @brief Method Never, addr 0xadee310, size 0xc0, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask Never(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method Never, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::Cysharp::Threading::Tasks::UniTask_1<T> Never(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method NextFrame, addr 0xadec85c, size 0xb8, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask NextFrame() ;

/// @brief Method NextFrame, addr 0xadecb94, size 0x88, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask NextFrame(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method NextFrame, addr 0xadecad8, size 0xbc, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask NextFrame(::Cysharp::Threading::Tasks::PlayerLoopTiming  timing) ;

/// @brief Method NextFrame, addr 0xadecc1c, size 0x94, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask NextFrame(::Cysharp::Threading::Tasks::PlayerLoopTiming  timing, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method Post, addr 0xadee9f4, size 0x64, virtual false, abstract: false, final false
static inline void Post(::System::Action*  action, ::Cysharp::Threading::Tasks::PlayerLoopTiming  timing) ;

/// @brief Method Preserve, addr 0xadec2a0, size 0x9c, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask Preserve() ;

/// @brief Method ReturnToCurrentSynchronizationContext, addr 0xadeeba4, size 0x58, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::ReturnToSynchronizationContext ReturnToCurrentSynchronizationContext(bool  dontPostWhenSameContext, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method ReturnToMainThread, addr 0xadee980, size 0x34, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::ReturnToMainThread ReturnToMainThread(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method ReturnToMainThread, addr 0xadee9c4, size 0x30, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::ReturnToMainThread ReturnToMainThread(::Cysharp::Threading::Tasks::PlayerLoopTiming  timing, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method ReturnToSynchronizationContext, addr 0xadeeb28, size 0x44, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::ReturnToSynchronizationContext ReturnToSynchronizationContext(::System::Threading::SynchronizationContext*  synchronizationContext, ::System::Threading::CancellationToken  cancellationToken) ;

/// [Obsolete("UniTask.Run is similar as Task.Run, it uses ThreadPool. For equivalent behaviour, use UniTask.RunOnThreadPool instead. If you don\'t want to use ThreadPool, you can use UniTask.Void(async void) or UniTask.Create(async UniTask) too.")]
/// @brief Method Run, addr 0xadee3d0, size 0x6c, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask Run(::System::Action*  action, bool  configureAwait, ::System::Threading::CancellationToken  cancellationToken) ;

/// [Obsolete("UniTask.Run is similar as Task.Run, it uses ThreadPool. For equivalent behaviour, use UniTask.RunOnThreadPool instead. If you don\'t want to use ThreadPool, you can use UniTask.Void(async void) or UniTask.Create(async UniTask) too.")]
/// @brief Method Run, addr 0xadee508, size 0x7c, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask Run(::System::Action_1<::System::Object*>*  action, ::System::Object*  state, bool  configureAwait, ::System::Threading::CancellationToken  cancellationToken) ;

/// [Obsolete("UniTask.Run is similar as Task.Run, it uses ThreadPool. For equivalent behaviour, use UniTask.RunOnThreadPool instead. If you don\'t want to use ThreadPool, you can use UniTask.Void(async void) or UniTask.Create(async UniTask) too.")]
/// @brief Method Run, addr 0xadee66c, size 0x6c, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask Run(::System::Func_1<::Cysharp::Threading::Tasks::UniTask>*  action, bool  configureAwait, ::System::Threading::CancellationToken  cancellationToken) ;

/// [Obsolete("UniTask.Run is similar as Task.Run, it uses ThreadPool. For equivalent behaviour, use UniTask.RunOnThreadPool instead. If you don\'t want to use ThreadPool, you can use UniTask.Void(async void) or UniTask.Create(async UniTask) too.")]
/// @brief Method Run, addr 0xadee7a4, size 0x7c, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask Run(::System::Func_2<::System::Object*,::Cysharp::Threading::Tasks::UniTask>*  action, ::System::Object*  state, bool  configureAwait, ::System::Threading::CancellationToken  cancellationToken) ;

/// [Obsolete("UniTask.Run is similar as Task.Run, it uses ThreadPool. For equivalent behaviour, use UniTask.RunOnThreadPool instead. If you don\'t want to use ThreadPool, you can use UniTask.Void(async void) or UniTask.Create(async UniTask) too.")]
/// @brief Method Run, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::Cysharp::Threading::Tasks::UniTask_1<T> Run(::System::Func_1<::Cysharp::Threading::Tasks::UniTask_1<T>>*  func, bool  configureAwait, ::System::Threading::CancellationToken  cancellationToken) ;

/// [Obsolete("UniTask.Run is similar as Task.Run, it uses ThreadPool. For equivalent behaviour, use UniTask.RunOnThreadPool instead. If you don\'t want to use ThreadPool, you can use UniTask.Void(async void) or UniTask.Create(async UniTask) too.")]
/// @brief Method Run, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::Cysharp::Threading::Tasks::UniTask_1<T> Run(::System::Func_1<T>*  func, bool  configureAwait, ::System::Threading::CancellationToken  cancellationToken) ;

/// [Obsolete("UniTask.Run is similar as Task.Run, it uses ThreadPool. For equivalent behaviour, use UniTask.RunOnThreadPool instead. If you don\'t want to use ThreadPool, you can use UniTask.Void(async void) or UniTask.Create(async UniTask) too.")]
/// @brief Method Run, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::Cysharp::Threading::Tasks::UniTask_1<T> Run(::System::Func_2<::System::Object*,::Cysharp::Threading::Tasks::UniTask_1<T>>*  func, ::System::Object*  state, bool  configureAwait, ::System::Threading::CancellationToken  cancellationToken) ;

/// [Obsolete("UniTask.Run is similar as Task.Run, it uses ThreadPool. For equivalent behaviour, use UniTask.RunOnThreadPool instead. If you don\'t want to use ThreadPool, you can use UniTask.Void(async void) or UniTask.Create(async UniTask) too.")]
/// @brief Method Run, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::Cysharp::Threading::Tasks::UniTask_1<T> Run(::System::Func_2<::System::Object*,T>*  func, ::System::Object*  state, bool  configureAwait, ::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.UniTask::<RunOnThreadPool>d__78))]
/// @brief Method RunOnThreadPool, addr 0xadee43c, size 0xcc, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask RunOnThreadPool(::System::Action*  action, bool  configureAwait, ::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.UniTask::<RunOnThreadPool>d__79))]
/// @brief Method RunOnThreadPool, addr 0xadee584, size 0xe8, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask RunOnThreadPool(::System::Action_1<::System::Object*>*  action, ::System::Object*  state, bool  configureAwait, ::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.UniTask::<RunOnThreadPool>d__80))]
/// @brief Method RunOnThreadPool, addr 0xadee6d8, size 0xcc, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask RunOnThreadPool(::System::Func_1<::Cysharp::Threading::Tasks::UniTask>*  action, bool  configureAwait, ::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.UniTask::<RunOnThreadPool>d__81))]
/// @brief Method RunOnThreadPool, addr 0xadee820, size 0xec, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask RunOnThreadPool(::System::Func_2<::System::Object*,::Cysharp::Threading::Tasks::UniTask>*  action, ::System::Object*  state, bool  configureAwait, ::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.UniTask::<RunOnThreadPool>d__83`1<T>))]
/// @brief Method RunOnThreadPool, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::Cysharp::Threading::Tasks::UniTask_1<T> RunOnThreadPool(::System::Func_1<::Cysharp::Threading::Tasks::UniTask_1<T>>*  func, bool  configureAwait, ::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.UniTask::<RunOnThreadPool>d__82`1<T>))]
/// @brief Method RunOnThreadPool, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::Cysharp::Threading::Tasks::UniTask_1<T> RunOnThreadPool(::System::Func_1<T>*  func, bool  configureAwait, ::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.UniTask::<RunOnThreadPool>d__85`1<T>))]
/// @brief Method RunOnThreadPool, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::Cysharp::Threading::Tasks::UniTask_1<T> RunOnThreadPool(::System::Func_2<::System::Object*,::Cysharp::Threading::Tasks::UniTask_1<T>>*  func, ::System::Object*  state, bool  configureAwait, ::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(Cysharp.Threading.Tasks.UniTask::<RunOnThreadPool>d__84`1<T>))]
/// @brief Method RunOnThreadPool, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::Cysharp::Threading::Tasks::UniTask_1<T> RunOnThreadPool(::System::Func_2<::System::Object*,T>*  func, ::System::Object*  state, bool  configureAwait, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method SuppressCancellationThrow, addr 0xadebf70, size 0x1c0, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTask_1<bool> SuppressCancellationThrow() ;

/// @brief Method SwitchToMainThread, addr 0xadee90c, size 0x34, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::SwitchToMainThreadAwaitable SwitchToMainThread(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method SwitchToMainThread, addr 0xadee950, size 0x30, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::SwitchToMainThreadAwaitable SwitchToMainThread(::Cysharp::Threading::Tasks::PlayerLoopTiming  timing, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method SwitchToSynchronizationContext, addr 0xadeea68, size 0x90, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::SwitchToSynchronizationContextAwaitable SwitchToSynchronizationContext(::System::Threading::SynchronizationContext*  synchronizationContext, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method SwitchToTaskPool, addr 0xadeea60, size 0x8, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::SwitchToTaskPoolAwaitable SwitchToTaskPool() ;

/// @brief Method SwitchToThreadPool, addr 0xadeea58, size 0x8, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::SwitchToThreadPoolAwaitable SwitchToThreadPool() ;

/// @brief Method ToCoroutine, addr 0xadebdcc, size 0x2c, virtual false, abstract: false, final false
static inline ::System::Collections::IEnumerator* ToCoroutine(::System::Func_1<::Cysharp::Threading::Tasks::UniTask>*  taskFactory) ;

/// @brief Method ToString, addr 0xadec160, size 0x140, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method UnityAction, addr 0xadee0c0, size 0xbc, virtual false, abstract: false, final false
static inline ::UnityEngine::Events::UnityAction* UnityAction(::System::Func_1<::Cysharp::Threading::Tasks::UniTaskVoid>*  asyncAction) ;

/// @brief Method UnityAction, addr 0xadee184, size 0xd0, virtual false, abstract: false, final false
static inline ::UnityEngine::Events::UnityAction* UnityAction(::System::Func_2<::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTaskVoid>*  asyncAction, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method Void, addr 0xadedeac, size 0x3c, virtual false, abstract: false, final false
static inline void Void(::System::Func_1<::Cysharp::Threading::Tasks::UniTaskVoid>*  asyncAction) ;

/// @brief Method Void, addr 0xadedee8, size 0x3c, virtual false, abstract: false, final false
static inline void Void(::System::Func_2<::System::Threading::CancellationToken,::Cysharp::Threading::Tasks::UniTaskVoid>*  asyncAction, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method Void, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void Void(::System::Func_2<T,::Cysharp::Threading::Tasks::UniTaskVoid>*  asyncAction, T  state) ;

/// [Obsolete("Use WaitForEndOfFrame(MonoBehaviour) instead or UniTask.Yield(PlayerLoopTiming.LastPostLateUpdate). Equivalent for coroutine\'s WaitForEndOfFrame requires MonoBehaviour(runner of Coroutine).")]
/// @brief Method WaitForEndOfFrame, addr 0xadecd00, size 0x58, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask WaitForEndOfFrame(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WaitForEndOfFrame, addr 0xadecd58, size 0x94, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask WaitForEndOfFrame(::UnityEngine::MonoBehaviour*  coroutineRunner, ::System::Threading::CancellationToken  cancellationToken) ;

/// [Obsolete("Use WaitForEndOfFrame(MonoBehaviour) instead or UniTask.Yield(PlayerLoopTiming.LastPostLateUpdate). Equivalent for coroutine\'s WaitForEndOfFrame requires MonoBehaviour(runner of Coroutine).")]
/// @brief Method WaitForEndOfFrame, addr 0xadeccb0, size 0x50, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::YieldAwaitable WaitForEndOfFrame() ;

/// @brief Method WaitForFixedUpdate, addr 0xadecfb4, size 0x58, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask WaitForFixedUpdate(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WaitForFixedUpdate, addr 0xadecf64, size 0x50, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::YieldAwaitable WaitForFixedUpdate() ;

/// @brief Method WaitUntil, addr 0xadeebfc, size 0x9c, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask WaitUntil(::System::Func_1<bool>*  predicate, ::Cysharp::Threading::Tasks::PlayerLoopTiming  timing, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WaitUntilCanceled, addr 0xadef084, size 0x94, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask WaitUntilCanceled(::System::Threading::CancellationToken  cancellationToken, ::Cysharp::Threading::Tasks::PlayerLoopTiming  timing) ;

/// @brief Method WaitUntilValueChanged, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T,typename U>
requires(::cordl_internals::reference_type_constraint<T>)
static inline ::Cysharp::Threading::Tasks::UniTask_1<U> WaitUntilValueChanged(T  target, ::System::Func_2<T,U>*  monitorFunction, ::Cysharp::Threading::Tasks::PlayerLoopTiming  monitorTiming, ::System::Collections::Generic::IEqualityComparer_1<U>*  equalityComparer, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WaitWhile, addr 0xadeee40, size 0x9c, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask WaitWhile(::System::Func_1<bool>*  predicate, ::Cysharp::Threading::Tasks::PlayerLoopTiming  timing, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WhenAll, addr 0xadef2a8, size 0xc0, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask WhenAll(/* [ParamArray] */ ::ArrayW<::Cysharp::Threading::Tasks::UniTask>  tasks) ;

/// @brief Method WhenAll, addr 0xadef7cc, size 0x140, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask WhenAll(::System::Collections::Generic::IEnumerable_1<::Cysharp::Threading::Tasks::UniTask>*  tasks) ;

/// @brief Method WhenAll, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::Cysharp::Threading::Tasks::UniTask_1<::ArrayW<T>> WhenAll(/* [ParamArray] */ ::ArrayW<::Cysharp::Threading::Tasks::UniTask_1<T>>  tasks) ;

/// @brief Method WhenAll, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::Cysharp::Threading::Tasks::UniTask_1<::ArrayW<T>> WhenAll(::System::Collections::Generic::IEnumerable_1<::Cysharp::Threading::Tasks::UniTask_1<T>>*  tasks) ;

/// @brief Method WhenAll, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_2<T1,T2>> WhenAll(::Cysharp::Threading::Tasks::UniTask_1<T1>  task1, ::Cysharp::Threading::Tasks::UniTask_1<T2>  task2) ;

/// @brief Method WhenAll, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3>
static inline ::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_3<T1,T2,T3>> WhenAll(::Cysharp::Threading::Tasks::UniTask_1<T1>  task1, ::Cysharp::Threading::Tasks::UniTask_1<T2>  task2, ::Cysharp::Threading::Tasks::UniTask_1<T3>  task3) ;

/// @brief Method WhenAll, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4>
static inline ::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_4<T1,T2,T3,T4>> WhenAll(::Cysharp::Threading::Tasks::UniTask_1<T1>  task1, ::Cysharp::Threading::Tasks::UniTask_1<T2>  task2, ::Cysharp::Threading::Tasks::UniTask_1<T3>  task3, ::Cysharp::Threading::Tasks::UniTask_1<T4>  task4) ;

/// @brief Method WhenAll, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4,typename T5>
static inline ::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_5<T1,T2,T3,T4,T5>> WhenAll(::Cysharp::Threading::Tasks::UniTask_1<T1>  task1, ::Cysharp::Threading::Tasks::UniTask_1<T2>  task2, ::Cysharp::Threading::Tasks::UniTask_1<T3>  task3, ::Cysharp::Threading::Tasks::UniTask_1<T4>  task4, ::Cysharp::Threading::Tasks::UniTask_1<T5>  task5) ;

/// @brief Method WhenAll, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6>
static inline ::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_6<T1,T2,T3,T4,T5,T6>> WhenAll(::Cysharp::Threading::Tasks::UniTask_1<T1>  task1, ::Cysharp::Threading::Tasks::UniTask_1<T2>  task2, ::Cysharp::Threading::Tasks::UniTask_1<T3>  task3, ::Cysharp::Threading::Tasks::UniTask_1<T4>  task4, ::Cysharp::Threading::Tasks::UniTask_1<T5>  task5, ::Cysharp::Threading::Tasks::UniTask_1<T6>  task6) ;

/// @brief Method WhenAll, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7>
static inline ::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_7<T1,T2,T3,T4,T5,T6,T7>> WhenAll(::Cysharp::Threading::Tasks::UniTask_1<T1>  task1, ::Cysharp::Threading::Tasks::UniTask_1<T2>  task2, ::Cysharp::Threading::Tasks::UniTask_1<T3>  task3, ::Cysharp::Threading::Tasks::UniTask_1<T4>  task4, ::Cysharp::Threading::Tasks::UniTask_1<T5>  task5, ::Cysharp::Threading::Tasks::UniTask_1<T6>  task6, ::Cysharp::Threading::Tasks::UniTask_1<T7>  task7) ;

/// @brief Method WhenAll, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8>
static inline ::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_8<T1,T2,T3,T4,T5,T6,T7,::System::ValueTuple_1<T8>>> WhenAll(::Cysharp::Threading::Tasks::UniTask_1<T1>  task1, ::Cysharp::Threading::Tasks::UniTask_1<T2>  task2, ::Cysharp::Threading::Tasks::UniTask_1<T3>  task3, ::Cysharp::Threading::Tasks::UniTask_1<T4>  task4, ::Cysharp::Threading::Tasks::UniTask_1<T5>  task5, ::Cysharp::Threading::Tasks::UniTask_1<T6>  task6, ::Cysharp::Threading::Tasks::UniTask_1<T7>  task7, ::Cysharp::Threading::Tasks::UniTask_1<T8>  task8) ;

/// @brief Method WhenAll, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9>
static inline ::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_8<T1,T2,T3,T4,T5,T6,T7,::System::ValueTuple_2<T8,T9>>> WhenAll(::Cysharp::Threading::Tasks::UniTask_1<T1>  task1, ::Cysharp::Threading::Tasks::UniTask_1<T2>  task2, ::Cysharp::Threading::Tasks::UniTask_1<T3>  task3, ::Cysharp::Threading::Tasks::UniTask_1<T4>  task4, ::Cysharp::Threading::Tasks::UniTask_1<T5>  task5, ::Cysharp::Threading::Tasks::UniTask_1<T6>  task6, ::Cysharp::Threading::Tasks::UniTask_1<T7>  task7, ::Cysharp::Threading::Tasks::UniTask_1<T8>  task8, ::Cysharp::Threading::Tasks::UniTask_1<T9>  task9) ;

/// @brief Method WhenAll, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10>
static inline ::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_8<T1,T2,T3,T4,T5,T6,T7,::System::ValueTuple_3<T8,T9,T10>>> WhenAll(::Cysharp::Threading::Tasks::UniTask_1<T1>  task1, ::Cysharp::Threading::Tasks::UniTask_1<T2>  task2, ::Cysharp::Threading::Tasks::UniTask_1<T3>  task3, ::Cysharp::Threading::Tasks::UniTask_1<T4>  task4, ::Cysharp::Threading::Tasks::UniTask_1<T5>  task5, ::Cysharp::Threading::Tasks::UniTask_1<T6>  task6, ::Cysharp::Threading::Tasks::UniTask_1<T7>  task7, ::Cysharp::Threading::Tasks::UniTask_1<T8>  task8, ::Cysharp::Threading::Tasks::UniTask_1<T9>  task9, ::Cysharp::Threading::Tasks::UniTask_1<T10>  task10) ;

/// @brief Method WhenAll, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11>
static inline ::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_8<T1,T2,T3,T4,T5,T6,T7,::System::ValueTuple_4<T8,T9,T10,T11>>> WhenAll(::Cysharp::Threading::Tasks::UniTask_1<T1>  task1, ::Cysharp::Threading::Tasks::UniTask_1<T2>  task2, ::Cysharp::Threading::Tasks::UniTask_1<T3>  task3, ::Cysharp::Threading::Tasks::UniTask_1<T4>  task4, ::Cysharp::Threading::Tasks::UniTask_1<T5>  task5, ::Cysharp::Threading::Tasks::UniTask_1<T6>  task6, ::Cysharp::Threading::Tasks::UniTask_1<T7>  task7, ::Cysharp::Threading::Tasks::UniTask_1<T8>  task8, ::Cysharp::Threading::Tasks::UniTask_1<T9>  task9, ::Cysharp::Threading::Tasks::UniTask_1<T10>  task10, ::Cysharp::Threading::Tasks::UniTask_1<T11>  task11) ;

/// @brief Method WhenAll, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12>
static inline ::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_8<T1,T2,T3,T4,T5,T6,T7,::System::ValueTuple_5<T8,T9,T10,T11,T12>>> WhenAll(::Cysharp::Threading::Tasks::UniTask_1<T1>  task1, ::Cysharp::Threading::Tasks::UniTask_1<T2>  task2, ::Cysharp::Threading::Tasks::UniTask_1<T3>  task3, ::Cysharp::Threading::Tasks::UniTask_1<T4>  task4, ::Cysharp::Threading::Tasks::UniTask_1<T5>  task5, ::Cysharp::Threading::Tasks::UniTask_1<T6>  task6, ::Cysharp::Threading::Tasks::UniTask_1<T7>  task7, ::Cysharp::Threading::Tasks::UniTask_1<T8>  task8, ::Cysharp::Threading::Tasks::UniTask_1<T9>  task9, ::Cysharp::Threading::Tasks::UniTask_1<T10>  task10, ::Cysharp::Threading::Tasks::UniTask_1<T11>  task11, ::Cysharp::Threading::Tasks::UniTask_1<T12>  task12) ;

/// @brief Method WhenAll, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12,typename T13>
static inline ::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_8<T1,T2,T3,T4,T5,T6,T7,::System::ValueTuple_6<T8,T9,T10,T11,T12,T13>>> WhenAll(::Cysharp::Threading::Tasks::UniTask_1<T1>  task1, ::Cysharp::Threading::Tasks::UniTask_1<T2>  task2, ::Cysharp::Threading::Tasks::UniTask_1<T3>  task3, ::Cysharp::Threading::Tasks::UniTask_1<T4>  task4, ::Cysharp::Threading::Tasks::UniTask_1<T5>  task5, ::Cysharp::Threading::Tasks::UniTask_1<T6>  task6, ::Cysharp::Threading::Tasks::UniTask_1<T7>  task7, ::Cysharp::Threading::Tasks::UniTask_1<T8>  task8, ::Cysharp::Threading::Tasks::UniTask_1<T9>  task9, ::Cysharp::Threading::Tasks::UniTask_1<T10>  task10, ::Cysharp::Threading::Tasks::UniTask_1<T11>  task11, ::Cysharp::Threading::Tasks::UniTask_1<T12>  task12, ::Cysharp::Threading::Tasks::UniTask_1<T13>  task13) ;

/// @brief Method WhenAll, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12,typename T13,typename T14>
static inline ::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_8<T1,T2,T3,T4,T5,T6,T7,::System::ValueTuple_7<T8,T9,T10,T11,T12,T13,T14>>> WhenAll(::Cysharp::Threading::Tasks::UniTask_1<T1>  task1, ::Cysharp::Threading::Tasks::UniTask_1<T2>  task2, ::Cysharp::Threading::Tasks::UniTask_1<T3>  task3, ::Cysharp::Threading::Tasks::UniTask_1<T4>  task4, ::Cysharp::Threading::Tasks::UniTask_1<T5>  task5, ::Cysharp::Threading::Tasks::UniTask_1<T6>  task6, ::Cysharp::Threading::Tasks::UniTask_1<T7>  task7, ::Cysharp::Threading::Tasks::UniTask_1<T8>  task8, ::Cysharp::Threading::Tasks::UniTask_1<T9>  task9, ::Cysharp::Threading::Tasks::UniTask_1<T10>  task10, ::Cysharp::Threading::Tasks::UniTask_1<T11>  task11, ::Cysharp::Threading::Tasks::UniTask_1<T12>  task12, ::Cysharp::Threading::Tasks::UniTask_1<T13>  task13, ::Cysharp::Threading::Tasks::UniTask_1<T14>  task14) ;

/// @brief Method WhenAll, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12,typename T13,typename T14,typename T15>
static inline ::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_8<T1,T2,T3,T4,T5,T6,T7,::System::ValueTuple_8<T8,T9,T10,T11,T12,T13,T14,::System::ValueTuple_1<T15>>>> WhenAll(::Cysharp::Threading::Tasks::UniTask_1<T1>  task1, ::Cysharp::Threading::Tasks::UniTask_1<T2>  task2, ::Cysharp::Threading::Tasks::UniTask_1<T3>  task3, ::Cysharp::Threading::Tasks::UniTask_1<T4>  task4, ::Cysharp::Threading::Tasks::UniTask_1<T5>  task5, ::Cysharp::Threading::Tasks::UniTask_1<T6>  task6, ::Cysharp::Threading::Tasks::UniTask_1<T7>  task7, ::Cysharp::Threading::Tasks::UniTask_1<T8>  task8, ::Cysharp::Threading::Tasks::UniTask_1<T9>  task9, ::Cysharp::Threading::Tasks::UniTask_1<T10>  task10, ::Cysharp::Threading::Tasks::UniTask_1<T11>  task11, ::Cysharp::Threading::Tasks::UniTask_1<T12>  task12, ::Cysharp::Threading::Tasks::UniTask_1<T13>  task13, ::Cysharp::Threading::Tasks::UniTask_1<T14>  task14, ::Cysharp::Threading::Tasks::UniTask_1<T15>  task15) ;

/// @brief Method WhenAny, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_2<bool,T>> WhenAny(::Cysharp::Threading::Tasks::UniTask_1<T>  leftTask, ::Cysharp::Threading::Tasks::UniTask  rightTask) ;

/// @brief Method WhenAny, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_2<int32_t,T>> WhenAny(/* [ParamArray] */ ::ArrayW<::Cysharp::Threading::Tasks::UniTask_1<T>>  tasks) ;

/// @brief Method WhenAny, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_2<int32_t,T>> WhenAny(::System::Collections::Generic::IEnumerable_1<::Cysharp::Threading::Tasks::UniTask_1<T>>*  tasks) ;

/// @brief Method WhenAny, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2>
static inline ::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_3<int32_t,T1,T2>> WhenAny(::Cysharp::Threading::Tasks::UniTask_1<T1>  task1, ::Cysharp::Threading::Tasks::UniTask_1<T2>  task2) ;

/// @brief Method WhenAny, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3>
static inline ::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_4<int32_t,T1,T2,T3>> WhenAny(::Cysharp::Threading::Tasks::UniTask_1<T1>  task1, ::Cysharp::Threading::Tasks::UniTask_1<T2>  task2, ::Cysharp::Threading::Tasks::UniTask_1<T3>  task3) ;

/// @brief Method WhenAny, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4>
static inline ::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_5<int32_t,T1,T2,T3,T4>> WhenAny(::Cysharp::Threading::Tasks::UniTask_1<T1>  task1, ::Cysharp::Threading::Tasks::UniTask_1<T2>  task2, ::Cysharp::Threading::Tasks::UniTask_1<T3>  task3, ::Cysharp::Threading::Tasks::UniTask_1<T4>  task4) ;

/// @brief Method WhenAny, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4,typename T5>
static inline ::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_6<int32_t,T1,T2,T3,T4,T5>> WhenAny(::Cysharp::Threading::Tasks::UniTask_1<T1>  task1, ::Cysharp::Threading::Tasks::UniTask_1<T2>  task2, ::Cysharp::Threading::Tasks::UniTask_1<T3>  task3, ::Cysharp::Threading::Tasks::UniTask_1<T4>  task4, ::Cysharp::Threading::Tasks::UniTask_1<T5>  task5) ;

/// @brief Method WhenAny, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6>
static inline ::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_7<int32_t,T1,T2,T3,T4,T5,T6>> WhenAny(::Cysharp::Threading::Tasks::UniTask_1<T1>  task1, ::Cysharp::Threading::Tasks::UniTask_1<T2>  task2, ::Cysharp::Threading::Tasks::UniTask_1<T3>  task3, ::Cysharp::Threading::Tasks::UniTask_1<T4>  task4, ::Cysharp::Threading::Tasks::UniTask_1<T5>  task5, ::Cysharp::Threading::Tasks::UniTask_1<T6>  task6) ;

/// @brief Method WhenAny, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7>
static inline ::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_8<int32_t,T1,T2,T3,T4,T5,T6,::System::ValueTuple_1<T7>>> WhenAny(::Cysharp::Threading::Tasks::UniTask_1<T1>  task1, ::Cysharp::Threading::Tasks::UniTask_1<T2>  task2, ::Cysharp::Threading::Tasks::UniTask_1<T3>  task3, ::Cysharp::Threading::Tasks::UniTask_1<T4>  task4, ::Cysharp::Threading::Tasks::UniTask_1<T5>  task5, ::Cysharp::Threading::Tasks::UniTask_1<T6>  task6, ::Cysharp::Threading::Tasks::UniTask_1<T7>  task7) ;

/// @brief Method WhenAny, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8>
static inline ::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_8<int32_t,T1,T2,T3,T4,T5,T6,::System::ValueTuple_2<T7,T8>>> WhenAny(::Cysharp::Threading::Tasks::UniTask_1<T1>  task1, ::Cysharp::Threading::Tasks::UniTask_1<T2>  task2, ::Cysharp::Threading::Tasks::UniTask_1<T3>  task3, ::Cysharp::Threading::Tasks::UniTask_1<T4>  task4, ::Cysharp::Threading::Tasks::UniTask_1<T5>  task5, ::Cysharp::Threading::Tasks::UniTask_1<T6>  task6, ::Cysharp::Threading::Tasks::UniTask_1<T7>  task7, ::Cysharp::Threading::Tasks::UniTask_1<T8>  task8) ;

/// @brief Method WhenAny, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9>
static inline ::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_8<int32_t,T1,T2,T3,T4,T5,T6,::System::ValueTuple_3<T7,T8,T9>>> WhenAny(::Cysharp::Threading::Tasks::UniTask_1<T1>  task1, ::Cysharp::Threading::Tasks::UniTask_1<T2>  task2, ::Cysharp::Threading::Tasks::UniTask_1<T3>  task3, ::Cysharp::Threading::Tasks::UniTask_1<T4>  task4, ::Cysharp::Threading::Tasks::UniTask_1<T5>  task5, ::Cysharp::Threading::Tasks::UniTask_1<T6>  task6, ::Cysharp::Threading::Tasks::UniTask_1<T7>  task7, ::Cysharp::Threading::Tasks::UniTask_1<T8>  task8, ::Cysharp::Threading::Tasks::UniTask_1<T9>  task9) ;

/// @brief Method WhenAny, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10>
static inline ::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_8<int32_t,T1,T2,T3,T4,T5,T6,::System::ValueTuple_4<T7,T8,T9,T10>>> WhenAny(::Cysharp::Threading::Tasks::UniTask_1<T1>  task1, ::Cysharp::Threading::Tasks::UniTask_1<T2>  task2, ::Cysharp::Threading::Tasks::UniTask_1<T3>  task3, ::Cysharp::Threading::Tasks::UniTask_1<T4>  task4, ::Cysharp::Threading::Tasks::UniTask_1<T5>  task5, ::Cysharp::Threading::Tasks::UniTask_1<T6>  task6, ::Cysharp::Threading::Tasks::UniTask_1<T7>  task7, ::Cysharp::Threading::Tasks::UniTask_1<T8>  task8, ::Cysharp::Threading::Tasks::UniTask_1<T9>  task9, ::Cysharp::Threading::Tasks::UniTask_1<T10>  task10) ;

/// @brief Method WhenAny, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11>
static inline ::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_8<int32_t,T1,T2,T3,T4,T5,T6,::System::ValueTuple_5<T7,T8,T9,T10,T11>>> WhenAny(::Cysharp::Threading::Tasks::UniTask_1<T1>  task1, ::Cysharp::Threading::Tasks::UniTask_1<T2>  task2, ::Cysharp::Threading::Tasks::UniTask_1<T3>  task3, ::Cysharp::Threading::Tasks::UniTask_1<T4>  task4, ::Cysharp::Threading::Tasks::UniTask_1<T5>  task5, ::Cysharp::Threading::Tasks::UniTask_1<T6>  task6, ::Cysharp::Threading::Tasks::UniTask_1<T7>  task7, ::Cysharp::Threading::Tasks::UniTask_1<T8>  task8, ::Cysharp::Threading::Tasks::UniTask_1<T9>  task9, ::Cysharp::Threading::Tasks::UniTask_1<T10>  task10, ::Cysharp::Threading::Tasks::UniTask_1<T11>  task11) ;

/// @brief Method WhenAny, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12>
static inline ::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_8<int32_t,T1,T2,T3,T4,T5,T6,::System::ValueTuple_6<T7,T8,T9,T10,T11,T12>>> WhenAny(::Cysharp::Threading::Tasks::UniTask_1<T1>  task1, ::Cysharp::Threading::Tasks::UniTask_1<T2>  task2, ::Cysharp::Threading::Tasks::UniTask_1<T3>  task3, ::Cysharp::Threading::Tasks::UniTask_1<T4>  task4, ::Cysharp::Threading::Tasks::UniTask_1<T5>  task5, ::Cysharp::Threading::Tasks::UniTask_1<T6>  task6, ::Cysharp::Threading::Tasks::UniTask_1<T7>  task7, ::Cysharp::Threading::Tasks::UniTask_1<T8>  task8, ::Cysharp::Threading::Tasks::UniTask_1<T9>  task9, ::Cysharp::Threading::Tasks::UniTask_1<T10>  task10, ::Cysharp::Threading::Tasks::UniTask_1<T11>  task11, ::Cysharp::Threading::Tasks::UniTask_1<T12>  task12) ;

/// @brief Method WhenAny, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12,typename T13>
static inline ::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_8<int32_t,T1,T2,T3,T4,T5,T6,::System::ValueTuple_7<T7,T8,T9,T10,T11,T12,T13>>> WhenAny(::Cysharp::Threading::Tasks::UniTask_1<T1>  task1, ::Cysharp::Threading::Tasks::UniTask_1<T2>  task2, ::Cysharp::Threading::Tasks::UniTask_1<T3>  task3, ::Cysharp::Threading::Tasks::UniTask_1<T4>  task4, ::Cysharp::Threading::Tasks::UniTask_1<T5>  task5, ::Cysharp::Threading::Tasks::UniTask_1<T6>  task6, ::Cysharp::Threading::Tasks::UniTask_1<T7>  task7, ::Cysharp::Threading::Tasks::UniTask_1<T8>  task8, ::Cysharp::Threading::Tasks::UniTask_1<T9>  task9, ::Cysharp::Threading::Tasks::UniTask_1<T10>  task10, ::Cysharp::Threading::Tasks::UniTask_1<T11>  task11, ::Cysharp::Threading::Tasks::UniTask_1<T12>  task12, ::Cysharp::Threading::Tasks::UniTask_1<T13>  task13) ;

/// @brief Method WhenAny, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12,typename T13,typename T14>
static inline ::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_8<int32_t,T1,T2,T3,T4,T5,T6,::System::ValueTuple_8<T7,T8,T9,T10,T11,T12,T13,::System::ValueTuple_1<T14>>>> WhenAny(::Cysharp::Threading::Tasks::UniTask_1<T1>  task1, ::Cysharp::Threading::Tasks::UniTask_1<T2>  task2, ::Cysharp::Threading::Tasks::UniTask_1<T3>  task3, ::Cysharp::Threading::Tasks::UniTask_1<T4>  task4, ::Cysharp::Threading::Tasks::UniTask_1<T5>  task5, ::Cysharp::Threading::Tasks::UniTask_1<T6>  task6, ::Cysharp::Threading::Tasks::UniTask_1<T7>  task7, ::Cysharp::Threading::Tasks::UniTask_1<T8>  task8, ::Cysharp::Threading::Tasks::UniTask_1<T9>  task9, ::Cysharp::Threading::Tasks::UniTask_1<T10>  task10, ::Cysharp::Threading::Tasks::UniTask_1<T11>  task11, ::Cysharp::Threading::Tasks::UniTask_1<T12>  task12, ::Cysharp::Threading::Tasks::UniTask_1<T13>  task13, ::Cysharp::Threading::Tasks::UniTask_1<T14>  task14) ;

/// @brief Method WhenAny, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8,typename T9,typename T10,typename T11,typename T12,typename T13,typename T14,typename T15>
static inline ::Cysharp::Threading::Tasks::UniTask_1<::System::ValueTuple_8<int32_t,T1,T2,T3,T4,T5,T6,::System::ValueTuple_8<T7,T8,T9,T10,T11,T12,T13,::System::ValueTuple_2<T14,T15>>>> WhenAny(::Cysharp::Threading::Tasks::UniTask_1<T1>  task1, ::Cysharp::Threading::Tasks::UniTask_1<T2>  task2, ::Cysharp::Threading::Tasks::UniTask_1<T3>  task3, ::Cysharp::Threading::Tasks::UniTask_1<T4>  task4, ::Cysharp::Threading::Tasks::UniTask_1<T5>  task5, ::Cysharp::Threading::Tasks::UniTask_1<T6>  task6, ::Cysharp::Threading::Tasks::UniTask_1<T7>  task7, ::Cysharp::Threading::Tasks::UniTask_1<T8>  task8, ::Cysharp::Threading::Tasks::UniTask_1<T9>  task9, ::Cysharp::Threading::Tasks::UniTask_1<T10>  task10, ::Cysharp::Threading::Tasks::UniTask_1<T11>  task11, ::Cysharp::Threading::Tasks::UniTask_1<T12>  task12, ::Cysharp::Threading::Tasks::UniTask_1<T13>  task13, ::Cysharp::Threading::Tasks::UniTask_1<T14>  task14, ::Cysharp::Threading::Tasks::UniTask_1<T15>  task15) ;

/// @brief Method WhenAny, addr 0xadef90c, size 0x90, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask_1<int32_t> WhenAny(/* [ParamArray] */ ::ArrayW<::Cysharp::Threading::Tasks::UniTask>  tasks) ;

/// @brief Method WhenAny, addr 0xadefde4, size 0x150, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask_1<int32_t> WhenAny(::System::Collections::Generic::IEnumerable_1<::Cysharp::Threading::Tasks::UniTask>*  tasks) ;

/// @brief Method Yield, addr 0xadec5b0, size 0x88, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask Yield(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method Yield, addr 0xadec7c8, size 0x94, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask Yield(::Cysharp::Threading::Tasks::PlayerLoopTiming  timing, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method Yield, addr 0xadec5a4, size 0x8, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::YieldAwaitable Yield() ;

/// @brief Method Yield, addr 0xadec5ac, size 0x4, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::YieldAwaitable Yield(::Cysharp::Threading::Tasks::PlayerLoopTiming  timing) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0xadebe68, size 0x28, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::IUniTaskSource*  source, int16_t  token) ;

static inline ::Cysharp::Threading::Tasks::UniTask getStaticF_CanceledUniTask() ;

static inline ::Cysharp::Threading::Tasks::UniTask getStaticF_CompletedTask() ;

/// [DebuggerHidden]
/// @brief Method get_Status, addr 0xadebe90, size 0xb4, virtual false, abstract: false, final false
inline ::Cysharp::Threading::Tasks::UniTaskStatus get_Status() ;

static inline void setStaticF_CanceledUniTask(::Cysharp::Threading::Tasks::UniTask  value) ;

static inline void setStaticF_CompletedTask(::Cysharp::Threading::Tasks::UniTask  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr UniTask() ;

// Ctor Parameters [CppParam { name: "source", ty: "::Cysharp::Threading::Tasks::IUniTaskSource*", modifiers: "", def_value: None, comment: None }, CppParam { name: "token", ty: "int16_t", modifiers: "", def_value: None, comment: None }]
constexpr UniTask(::Cysharp::Threading::Tasks::IUniTaskSource*  source, int16_t  token) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21792};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field source, offset: 0x0, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskSource*  source;

/// @brief Field token, offset: 0x8, size: 0x2, def value: None
 int16_t  token;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Cysharp::Threading::Tasks::UniTask, source) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UniTask, token) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Cysharp::Threading::Tasks::UniTask) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
// Dependencies System.Object, System.Threading.CancellationToken
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTask/CanceledResultSource`1<T>
class CORDL_TYPE UniTask_CanceledResultSource_1 : public ::System::Object {
public:
// Declarations
/// @brief Field cancellationToken, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_cancellationToken, put=__cordl_internal_set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource_1<T>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource_1<T>*() noexcept;

/// @brief Method Cysharp.Threading.Tasks.IUniTaskSource.GetResult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Cysharp_Threading_Tasks_IUniTaskSource_GetResult(int16_t  token) ;

/// @brief Method GetResult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline T GetResult(int16_t  token) ;

/// @brief Method GetStatus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(int16_t  token) ;

static inline ::Cysharp::Threading::Tasks::UniTask_CanceledResultSource_1<T>* New_ctor(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method OnCompleted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token) ;

/// @brief Method UnsafeGetStatus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus() ;

constexpr ::System::Threading::CancellationToken const& __cordl_internal_get_cancellationToken() const;

constexpr ::System::Threading::CancellationToken& __cordl_internal_get_cancellationToken() ;

constexpr void __cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource_1<T>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource_1<T>* i___Cysharp__Threading__Tasks__IUniTaskSource_1_T_() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UniTask_CanceledResultSource_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UniTask_CanceledResultSource_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UniTask_CanceledResultSource_1(UniTask_CanceledResultSource_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UniTask_CanceledResultSource_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UniTask_CanceledResultSource_1(UniTask_CanceledResultSource_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21699};

/// @brief Field cancellationToken, offset: 0x10, size: 0x8, def value: None
 ::System::Threading::CancellationToken  ___cancellationToken;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
// Dependencies System.Object, System.Threading.CancellationToken
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTask/CanceledResultSource
class CORDL_TYPE UniTask_CanceledResultSource : public ::System::Object {
public:
// Declarations
/// @brief Field cancellationToken, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_cancellationToken, put=__cordl_internal_set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept;

/// @brief Method GetResult, addr 0xadf3b28, size 0x44, virtual true, abstract: false, final true
inline void GetResult(int16_t  token) ;

/// @brief Method GetStatus, addr 0xadf3b6c, size 0x8, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(int16_t  token) ;

static inline ::Cysharp::Threading::Tasks::UniTask_CanceledResultSource* New_ctor(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method OnCompleted, addr 0xadf3b7c, size 0x24, virtual true, abstract: false, final true
inline void OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token) ;

/// @brief Method UnsafeGetStatus, addr 0xadf3b74, size 0x8, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus() ;

constexpr ::System::Threading::CancellationToken const& __cordl_internal_get_cancellationToken() const;

constexpr ::System::Threading::CancellationToken& __cordl_internal_get_cancellationToken() ;

constexpr void __cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value) ;

/// @brief Method .ctor, addr 0xadede04, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UniTask_CanceledResultSource() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UniTask_CanceledResultSource", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UniTask_CanceledResultSource(UniTask_CanceledResultSource && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UniTask_CanceledResultSource", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UniTask_CanceledResultSource(UniTask_CanceledResultSource const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21698};

/// @brief Field cancellationToken, offset: 0x10, size: 0x8, def value: None
 ::System::Threading::CancellationToken  ___cancellationToken;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Cysharp::Threading::Tasks::UniTask_CanceledResultSource, ___cancellationToken) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Cysharp::Threading::Tasks::UniTask_CanceledResultSource) == 0x18, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
// Dependencies System.Object
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTask/ExceptionResultSource`1<T>
class CORDL_TYPE UniTask_ExceptionResultSource_1 : public ::System::Object {
public:
// Declarations
/// @brief Field calledGet, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_calledGet, put=__cordl_internal_set_calledGet)) bool  calledGet;

/// @brief Field exception, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_exception, put=__cordl_internal_set_exception)) ::System::Runtime::ExceptionServices::ExceptionDispatchInfo*  exception;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource_1<T>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource_1<T>*() noexcept;

/// @brief Method Cysharp.Threading.Tasks.IUniTaskSource.GetResult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Cysharp_Threading_Tasks_IUniTaskSource_GetResult(int16_t  token) ;

/// @brief Method Finalize, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method GetResult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline T GetResult(int16_t  token) ;

/// @brief Method GetStatus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(int16_t  token) ;

static inline ::Cysharp::Threading::Tasks::UniTask_ExceptionResultSource_1<T>* New_ctor(::System::Exception*  exception) ;

/// @brief Method OnCompleted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token) ;

/// @brief Method UnsafeGetStatus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus() ;

constexpr bool const& __cordl_internal_get_calledGet() const;

constexpr bool& __cordl_internal_get_calledGet() ;

constexpr ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* const& __cordl_internal_get_exception() const;

constexpr ::System::Runtime::ExceptionServices::ExceptionDispatchInfo*& __cordl_internal_get_exception() ;

constexpr void __cordl_internal_set_calledGet(bool  value) ;

constexpr void __cordl_internal_set_exception(::System::Runtime::ExceptionServices::ExceptionDispatchInfo*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Exception*  exception) ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource_1<T>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource_1<T>* i___Cysharp__Threading__Tasks__IUniTaskSource_1_T_() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UniTask_ExceptionResultSource_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UniTask_ExceptionResultSource_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UniTask_ExceptionResultSource_1(UniTask_ExceptionResultSource_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UniTask_ExceptionResultSource_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UniTask_ExceptionResultSource_1(UniTask_ExceptionResultSource_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21697};

/// @brief Field exception, offset: 0x10, size: 0x8, def value: None
 ::System::Runtime::ExceptionServices::ExceptionDispatchInfo*  ___exception;

/// @brief Field calledGet, offset: 0x18, size: 0x1, def value: None
 bool  ___calledGet;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
// Dependencies System.Object
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTask/ExceptionResultSource
class CORDL_TYPE UniTask_ExceptionResultSource : public ::System::Object {
public:
// Declarations
/// @brief Field calledGet, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get_calledGet, put=__cordl_internal_set_calledGet)) bool  calledGet;

/// @brief Field exception, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_exception, put=__cordl_internal_set_exception)) ::System::Runtime::ExceptionServices::ExceptionDispatchInfo*  exception;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept;

/// @brief Method Finalize, addr 0xadf3a44, size 0xe4, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method GetResult, addr 0xadf3994, size 0x7c, virtual true, abstract: false, final true
inline void GetResult(int16_t  token) ;

/// @brief Method GetStatus, addr 0xadf3a10, size 0x8, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(int16_t  token) ;

static inline ::Cysharp::Threading::Tasks::UniTask_ExceptionResultSource* New_ctor(::System::Exception*  exception) ;

/// @brief Method OnCompleted, addr 0xadf3a20, size 0x24, virtual true, abstract: false, final true
inline void OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token) ;

/// @brief Method UnsafeGetStatus, addr 0xadf3a18, size 0x8, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus() ;

constexpr bool const& __cordl_internal_get_calledGet() const;

constexpr bool& __cordl_internal_get_calledGet() ;

constexpr ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* const& __cordl_internal_get_exception() const;

constexpr ::System::Runtime::ExceptionServices::ExceptionDispatchInfo*& __cordl_internal_get_exception() ;

constexpr void __cordl_internal_set_calledGet(bool  value) ;

constexpr void __cordl_internal_set_exception(::System::Runtime::ExceptionServices::ExceptionDispatchInfo*  value) ;

/// @brief Method .ctor, addr 0xadeddc8, size 0x3c, virtual false, abstract: false, final false
inline void _ctor(::System::Exception*  exception) ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UniTask_ExceptionResultSource() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UniTask_ExceptionResultSource", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UniTask_ExceptionResultSource(UniTask_ExceptionResultSource && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UniTask_ExceptionResultSource", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UniTask_ExceptionResultSource(UniTask_ExceptionResultSource const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21696};

/// @brief Field exception, offset: 0x10, size: 0x8, def value: None
 ::System::Runtime::ExceptionServices::ExceptionDispatchInfo*  ___exception;

/// @brief Field calledGet, offset: 0x18, size: 0x1, def value: None
 bool  ___calledGet;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Cysharp::Threading::Tasks::UniTask_ExceptionResultSource, ___exception) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UniTask_ExceptionResultSource, ___calledGet) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Cysharp::Threading::Tasks::UniTask_ExceptionResultSource) == 0x20, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
// Dependencies Cysharp.Threading.Tasks.UniTask`1<T>, System.Object
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTask/CanceledUniTaskCache`1<T>
class CORDL_TYPE UniTask_CanceledUniTaskCache_1 : public ::System::Object {
public:
// Declarations
/// @brief Field Task, offset 0xffffffff, size 0x18 
 __declspec(property(get=getStaticF_Task, put=setStaticF_Task)) ::Cysharp::Threading::Tasks::UniTask_1<T>  Task;

static inline ::Cysharp::Threading::Tasks::UniTask_1<T> getStaticF_Task() ;

static inline void setStaticF_Task(::Cysharp::Threading::Tasks::UniTask_1<T>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UniTask_CanceledUniTaskCache_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UniTask_CanceledUniTaskCache_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UniTask_CanceledUniTaskCache_1(UniTask_CanceledUniTaskCache_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UniTask_CanceledUniTaskCache_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UniTask_CanceledUniTaskCache_1(UniTask_CanceledUniTaskCache_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21695};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
// Dependencies Cysharp.Threading.Tasks.AsyncUnit, Cysharp.Threading.Tasks.Internal.ValueStopwatch, Cysharp.Threading.Tasks.TaskPool`1<T>, Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<TResult>, System.Object, System.Threading.CancellationToken
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTask/DelayRealtimePromise
class CORDL_TYPE UniTask_DelayRealtimePromise : public ::System::Object {
public:
// Declarations
using __c = ::Cysharp::Threading::Tasks::DelayRealtimePromise_UniTask___c;

 __declspec(property(get=get_NextNode)) ::Cysharp::Threading::Tasks::UniTask_DelayRealtimePromise*  NextNode;

/// @brief Field cancellationToken, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_cancellationToken, put=__cordl_internal_set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field core, offset 0x30, size 0x28 
 __declspec(property(get=__cordl_internal_get_core, put=__cordl_internal_set_core)) ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::Cysharp::Threading::Tasks::AsyncUnit>  core;

/// @brief Field delayTimeSpanTicks, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_delayTimeSpanTicks, put=__cordl_internal_set_delayTimeSpanTicks)) int64_t  delayTimeSpanTicks;

/// @brief Field nextNode, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_nextNode, put=__cordl_internal_set_nextNode)) ::Cysharp::Threading::Tasks::UniTask_DelayRealtimePromise*  nextNode;

/// @brief Field pool, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_pool, put=setStaticF_pool)) ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UniTask_DelayRealtimePromise*>  pool;

/// @brief Field stopwatch, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_stopwatch, put=__cordl_internal_set_stopwatch)) ::Cysharp::Threading::Tasks::Internal::ValueStopwatch  stopwatch;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
constexpr operator  ::Cysharp::Threading::Tasks::IPlayerLoopItem*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UniTask_DelayRealtimePromise*>"
constexpr operator  ::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UniTask_DelayRealtimePromise*>*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept;

/// @brief Method Create, addr 0xaded8cc, size 0x204, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IUniTaskSource* Create(::System::TimeSpan  delayTimeSpan, ::Cysharp::Threading::Tasks::PlayerLoopTiming  timing, ::System::Threading::CancellationToken  cancellationToken, ::by_ref<int16_t>  token) ;

/// @brief Method GetResult, addr 0xadf3498, size 0xc8, virtual true, abstract: false, final true
inline void GetResult(int16_t  token) ;

/// @brief Method GetStatus, addr 0xadf3560, size 0x58, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(int16_t  token) ;

/// @brief Method MoveNext, addr 0xadf36e0, size 0x140, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Cysharp::Threading::Tasks::UniTask_DelayRealtimePromise* New_ctor() ;

/// @brief Method OnCompleted, addr 0xadf3670, size 0x70, virtual true, abstract: false, final true
inline void OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token) ;

/// @brief Method TryReturn, addr 0xadf3820, size 0xa0, virtual false, abstract: false, final false
inline bool TryReturn() ;

/// @brief Method UnsafeGetStatus, addr 0xadf35b8, size 0xb8, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus() ;

constexpr ::System::Threading::CancellationToken const& __cordl_internal_get_cancellationToken() const;

constexpr ::System::Threading::CancellationToken& __cordl_internal_get_cancellationToken() ;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::Cysharp::Threading::Tasks::AsyncUnit> const& __cordl_internal_get_core() const;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::Cysharp::Threading::Tasks::AsyncUnit>& __cordl_internal_get_core() ;

constexpr int64_t const& __cordl_internal_get_delayTimeSpanTicks() const;

constexpr int64_t& __cordl_internal_get_delayTimeSpanTicks() ;

constexpr ::Cysharp::Threading::Tasks::UniTask_DelayRealtimePromise* const& __cordl_internal_get_nextNode() const;

constexpr ::Cysharp::Threading::Tasks::UniTask_DelayRealtimePromise*& __cordl_internal_get_nextNode() ;

constexpr ::Cysharp::Threading::Tasks::Internal::ValueStopwatch const& __cordl_internal_get_stopwatch() const;

constexpr ::Cysharp::Threading::Tasks::Internal::ValueStopwatch& __cordl_internal_get_stopwatch() ;

constexpr void __cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr void __cordl_internal_set_core(::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::Cysharp::Threading::Tasks::AsyncUnit>  value) ;

constexpr void __cordl_internal_set_delayTimeSpanTicks(int64_t  value) ;

constexpr void __cordl_internal_set_nextNode(::Cysharp::Threading::Tasks::UniTask_DelayRealtimePromise*  value) ;

constexpr void __cordl_internal_set_stopwatch(::Cysharp::Threading::Tasks::Internal::ValueStopwatch  value) ;

/// @brief Method .ctor, addr 0xadf3490, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UniTask_DelayRealtimePromise*> getStaticF_pool() ;

/// @brief Method get_NextNode, addr 0xadf3374, size 0x8, virtual true, abstract: false, final true
inline ::by_ref<::Cysharp::Threading::Tasks::UniTask_DelayRealtimePromise*> get_NextNode() ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
constexpr ::Cysharp::Threading::Tasks::IPlayerLoopItem* i___Cysharp__Threading__Tasks__IPlayerLoopItem() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UniTask_DelayRealtimePromise*>"
constexpr ::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UniTask_DelayRealtimePromise*>* i___Cysharp__Threading__Tasks__ITaskPoolNode_1___Cysharp__Threading__Tasks__UniTask_DelayRealtimePromise__() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept;

static inline void setStaticF_pool(::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UniTask_DelayRealtimePromise*>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UniTask_DelayRealtimePromise() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UniTask_DelayRealtimePromise", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UniTask_DelayRealtimePromise(UniTask_DelayRealtimePromise && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UniTask_DelayRealtimePromise", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UniTask_DelayRealtimePromise(UniTask_DelayRealtimePromise const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21694};

/// @brief Field nextNode, offset: 0x10, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::UniTask_DelayRealtimePromise*  ___nextNode;

/// @brief Field delayTimeSpanTicks, offset: 0x18, size: 0x8, def value: None
 int64_t  ___delayTimeSpanTicks;

/// @brief Field stopwatch, offset: 0x20, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::Internal::ValueStopwatch  ___stopwatch;

/// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
 ::System::Threading::CancellationToken  ___cancellationToken;

/// @brief Field core, offset: 0x30, size: 0x28, def value: None
 ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::Cysharp::Threading::Tasks::AsyncUnit>  ___core;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Cysharp::Threading::Tasks::UniTask_DelayRealtimePromise, ___nextNode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UniTask_DelayRealtimePromise, ___delayTimeSpanTicks) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UniTask_DelayRealtimePromise, ___stopwatch) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UniTask_DelayRealtimePromise, ___cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UniTask_DelayRealtimePromise, ___core) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Cysharp::Threading::Tasks::UniTask_DelayRealtimePromise) == 0x58, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
// [CompilerGenerated]
// Dependencies System.Object
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTask/DelayRealtimePromise/<>c
class CORDL_TYPE DelayRealtimePromise_UniTask___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Cysharp::Threading::Tasks::DelayRealtimePromise_UniTask___c*  __9;

static inline ::Cysharp::Threading::Tasks::DelayRealtimePromise_UniTask___c* New_ctor() ;

/// @brief Method <.cctor>b__4_0, addr 0xadf3930, size 0x64, virtual false, abstract: false, final false
inline int32_t __cctor_b__4_0() ;

/// @brief Method .ctor, addr 0xadf3928, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Threading::Tasks::DelayRealtimePromise_UniTask___c* getStaticF___9() ;

static inline void setStaticF___9(::Cysharp::Threading::Tasks::DelayRealtimePromise_UniTask___c*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DelayRealtimePromise_UniTask___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DelayRealtimePromise_UniTask___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DelayRealtimePromise_UniTask___c(DelayRealtimePromise_UniTask___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DelayRealtimePromise_UniTask___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DelayRealtimePromise_UniTask___c(DelayRealtimePromise_UniTask___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21693};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::DelayRealtimePromise_UniTask___c) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
// Dependencies Cysharp.Threading.Tasks.TaskPool`1<T>, Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<TResult>, System.Object, System.Threading.CancellationToken
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTask/DelayIgnoreTimeScalePromise
class CORDL_TYPE UniTask_DelayIgnoreTimeScalePromise : public ::System::Object {
public:
// Declarations
using __c = ::Cysharp::Threading::Tasks::DelayIgnoreTimeScalePromise_UniTask___c;

 __declspec(property(get=get_NextNode)) ::Cysharp::Threading::Tasks::UniTask_DelayIgnoreTimeScalePromise*  NextNode;

/// @brief Field cancellationToken, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_cancellationToken, put=__cordl_internal_set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field core, offset 0x30, size 0x28 
 __declspec(property(get=__cordl_internal_get_core, put=__cordl_internal_set_core)) ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::Object*>  core;

/// @brief Field delayFrameTimeSpan, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_delayFrameTimeSpan, put=__cordl_internal_set_delayFrameTimeSpan)) float_t  delayFrameTimeSpan;

/// @brief Field elapsed, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_elapsed, put=__cordl_internal_set_elapsed)) float_t  elapsed;

/// @brief Field initialFrame, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_initialFrame, put=__cordl_internal_set_initialFrame)) int32_t  initialFrame;

/// @brief Field nextNode, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_nextNode, put=__cordl_internal_set_nextNode)) ::Cysharp::Threading::Tasks::UniTask_DelayIgnoreTimeScalePromise*  nextNode;

/// @brief Field pool, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_pool, put=setStaticF_pool)) ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UniTask_DelayIgnoreTimeScalePromise*>  pool;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
constexpr operator  ::Cysharp::Threading::Tasks::IPlayerLoopItem*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UniTask_DelayIgnoreTimeScalePromise*>"
constexpr operator  ::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UniTask_DelayIgnoreTimeScalePromise*>*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept;

/// @brief Method Create, addr 0xaded6c0, size 0x20c, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IUniTaskSource* Create(::System::TimeSpan  delayFrameTimeSpan, ::Cysharp::Threading::Tasks::PlayerLoopTiming  timing, ::System::Threading::CancellationToken  cancellationToken, ::by_ref<int16_t>  token) ;

/// @brief Method GetResult, addr 0xadf2eb4, size 0xc8, virtual true, abstract: false, final true
inline void GetResult(int16_t  token) ;

/// @brief Method GetStatus, addr 0xadf2f7c, size 0x58, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(int16_t  token) ;

/// @brief Method MoveNext, addr 0xadf30fc, size 0x100, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Cysharp::Threading::Tasks::UniTask_DelayIgnoreTimeScalePromise* New_ctor() ;

/// @brief Method OnCompleted, addr 0xadf308c, size 0x70, virtual true, abstract: false, final true
inline void OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token) ;

/// @brief Method TryReturn, addr 0xadf31fc, size 0xa4, virtual false, abstract: false, final false
inline bool TryReturn() ;

/// @brief Method UnsafeGetStatus, addr 0xadf2fd4, size 0xb8, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus() ;

constexpr ::System::Threading::CancellationToken const& __cordl_internal_get_cancellationToken() const;

constexpr ::System::Threading::CancellationToken& __cordl_internal_get_cancellationToken() ;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::Object*> const& __cordl_internal_get_core() const;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::Object*>& __cordl_internal_get_core() ;

constexpr float_t const& __cordl_internal_get_delayFrameTimeSpan() const;

constexpr float_t& __cordl_internal_get_delayFrameTimeSpan() ;

constexpr float_t const& __cordl_internal_get_elapsed() const;

constexpr float_t& __cordl_internal_get_elapsed() ;

constexpr int32_t const& __cordl_internal_get_initialFrame() const;

constexpr int32_t& __cordl_internal_get_initialFrame() ;

constexpr ::Cysharp::Threading::Tasks::UniTask_DelayIgnoreTimeScalePromise* const& __cordl_internal_get_nextNode() const;

constexpr ::Cysharp::Threading::Tasks::UniTask_DelayIgnoreTimeScalePromise*& __cordl_internal_get_nextNode() ;

constexpr void __cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr void __cordl_internal_set_core(::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::Object*>  value) ;

constexpr void __cordl_internal_set_delayFrameTimeSpan(float_t  value) ;

constexpr void __cordl_internal_set_elapsed(float_t  value) ;

constexpr void __cordl_internal_set_initialFrame(int32_t  value) ;

constexpr void __cordl_internal_set_nextNode(::Cysharp::Threading::Tasks::UniTask_DelayIgnoreTimeScalePromise*  value) ;

/// @brief Method .ctor, addr 0xadf2eac, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UniTask_DelayIgnoreTimeScalePromise*> getStaticF_pool() ;

/// @brief Method get_NextNode, addr 0xadf2d90, size 0x8, virtual true, abstract: false, final true
inline ::by_ref<::Cysharp::Threading::Tasks::UniTask_DelayIgnoreTimeScalePromise*> get_NextNode() ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
constexpr ::Cysharp::Threading::Tasks::IPlayerLoopItem* i___Cysharp__Threading__Tasks__IPlayerLoopItem() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UniTask_DelayIgnoreTimeScalePromise*>"
constexpr ::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UniTask_DelayIgnoreTimeScalePromise*>* i___Cysharp__Threading__Tasks__ITaskPoolNode_1___Cysharp__Threading__Tasks__UniTask_DelayIgnoreTimeScalePromise__() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept;

static inline void setStaticF_pool(::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UniTask_DelayIgnoreTimeScalePromise*>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UniTask_DelayIgnoreTimeScalePromise() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UniTask_DelayIgnoreTimeScalePromise", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UniTask_DelayIgnoreTimeScalePromise(UniTask_DelayIgnoreTimeScalePromise && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UniTask_DelayIgnoreTimeScalePromise", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UniTask_DelayIgnoreTimeScalePromise(UniTask_DelayIgnoreTimeScalePromise const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21692};

/// @brief Field nextNode, offset: 0x10, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::UniTask_DelayIgnoreTimeScalePromise*  ___nextNode;

/// @brief Field delayFrameTimeSpan, offset: 0x18, size: 0x4, def value: None
 float_t  ___delayFrameTimeSpan;

/// @brief Field elapsed, offset: 0x1c, size: 0x4, def value: None
 float_t  ___elapsed;

/// @brief Field initialFrame, offset: 0x20, size: 0x4, def value: None
 int32_t  ___initialFrame;

/// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
 ::System::Threading::CancellationToken  ___cancellationToken;

/// @brief Field core, offset: 0x30, size: 0x28, def value: None
 ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::Object*>  ___core;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Cysharp::Threading::Tasks::UniTask_DelayIgnoreTimeScalePromise, ___nextNode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UniTask_DelayIgnoreTimeScalePromise, ___delayFrameTimeSpan) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UniTask_DelayIgnoreTimeScalePromise, ___elapsed) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UniTask_DelayIgnoreTimeScalePromise, ___initialFrame) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UniTask_DelayIgnoreTimeScalePromise, ___cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UniTask_DelayIgnoreTimeScalePromise, ___core) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Cysharp::Threading::Tasks::UniTask_DelayIgnoreTimeScalePromise) == 0x58, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
// [CompilerGenerated]
// Dependencies System.Object
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTask/DelayIgnoreTimeScalePromise/<>c
class CORDL_TYPE DelayIgnoreTimeScalePromise_UniTask___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Cysharp::Threading::Tasks::DelayIgnoreTimeScalePromise_UniTask___c*  __9;

static inline ::Cysharp::Threading::Tasks::DelayIgnoreTimeScalePromise_UniTask___c* New_ctor() ;

/// @brief Method <.cctor>b__4_0, addr 0xadf3310, size 0x64, virtual false, abstract: false, final false
inline int32_t __cctor_b__4_0() ;

/// @brief Method .ctor, addr 0xadf3308, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Threading::Tasks::DelayIgnoreTimeScalePromise_UniTask___c* getStaticF___9() ;

static inline void setStaticF___9(::Cysharp::Threading::Tasks::DelayIgnoreTimeScalePromise_UniTask___c*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DelayIgnoreTimeScalePromise_UniTask___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DelayIgnoreTimeScalePromise_UniTask___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DelayIgnoreTimeScalePromise_UniTask___c(DelayIgnoreTimeScalePromise_UniTask___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DelayIgnoreTimeScalePromise_UniTask___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DelayIgnoreTimeScalePromise_UniTask___c(DelayIgnoreTimeScalePromise_UniTask___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21691};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::DelayIgnoreTimeScalePromise_UniTask___c) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
// Dependencies Cysharp.Threading.Tasks.TaskPool`1<T>, Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<TResult>, System.Object, System.Threading.CancellationToken
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTask/DelayPromise
class CORDL_TYPE UniTask_DelayPromise : public ::System::Object {
public:
// Declarations
using __c = ::Cysharp::Threading::Tasks::DelayPromise_UniTask___c;

 __declspec(property(get=get_NextNode)) ::Cysharp::Threading::Tasks::UniTask_DelayPromise*  NextNode;

/// @brief Field cancellationToken, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_cancellationToken, put=__cordl_internal_set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field core, offset 0x30, size 0x28 
 __declspec(property(get=__cordl_internal_get_core, put=__cordl_internal_set_core)) ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::Object*>  core;

/// @brief Field delayTimeSpan, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_delayTimeSpan, put=__cordl_internal_set_delayTimeSpan)) float_t  delayTimeSpan;

/// @brief Field elapsed, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_elapsed, put=__cordl_internal_set_elapsed)) float_t  elapsed;

/// @brief Field initialFrame, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_initialFrame, put=__cordl_internal_set_initialFrame)) int32_t  initialFrame;

/// @brief Field nextNode, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_nextNode, put=__cordl_internal_set_nextNode)) ::Cysharp::Threading::Tasks::UniTask_DelayPromise*  nextNode;

/// @brief Field pool, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_pool, put=setStaticF_pool)) ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UniTask_DelayPromise*>  pool;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
constexpr operator  ::Cysharp::Threading::Tasks::IPlayerLoopItem*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UniTask_DelayPromise*>"
constexpr operator  ::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UniTask_DelayPromise*>*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept;

/// @brief Method Create, addr 0xadedad0, size 0x208, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IUniTaskSource* Create(::System::TimeSpan  delayTimeSpan, ::Cysharp::Threading::Tasks::PlayerLoopTiming  timing, ::System::Threading::CancellationToken  cancellationToken, ::by_ref<int16_t>  token) ;

/// @brief Method GetResult, addr 0xadf28d0, size 0xc8, virtual true, abstract: false, final true
inline void GetResult(int16_t  token) ;

/// @brief Method GetStatus, addr 0xadf2998, size 0x58, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(int16_t  token) ;

/// @brief Method MoveNext, addr 0xadf2b18, size 0x100, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Cysharp::Threading::Tasks::UniTask_DelayPromise* New_ctor() ;

/// @brief Method OnCompleted, addr 0xadf2aa8, size 0x70, virtual true, abstract: false, final true
inline void OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token) ;

/// @brief Method TryReturn, addr 0xadf2c18, size 0xa4, virtual false, abstract: false, final false
inline bool TryReturn() ;

/// @brief Method UnsafeGetStatus, addr 0xadf29f0, size 0xb8, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus() ;

constexpr ::System::Threading::CancellationToken const& __cordl_internal_get_cancellationToken() const;

constexpr ::System::Threading::CancellationToken& __cordl_internal_get_cancellationToken() ;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::Object*> const& __cordl_internal_get_core() const;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::Object*>& __cordl_internal_get_core() ;

constexpr float_t const& __cordl_internal_get_delayTimeSpan() const;

constexpr float_t& __cordl_internal_get_delayTimeSpan() ;

constexpr float_t const& __cordl_internal_get_elapsed() const;

constexpr float_t& __cordl_internal_get_elapsed() ;

constexpr int32_t const& __cordl_internal_get_initialFrame() const;

constexpr int32_t& __cordl_internal_get_initialFrame() ;

constexpr ::Cysharp::Threading::Tasks::UniTask_DelayPromise* const& __cordl_internal_get_nextNode() const;

constexpr ::Cysharp::Threading::Tasks::UniTask_DelayPromise*& __cordl_internal_get_nextNode() ;

constexpr void __cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr void __cordl_internal_set_core(::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::Object*>  value) ;

constexpr void __cordl_internal_set_delayTimeSpan(float_t  value) ;

constexpr void __cordl_internal_set_elapsed(float_t  value) ;

constexpr void __cordl_internal_set_initialFrame(int32_t  value) ;

constexpr void __cordl_internal_set_nextNode(::Cysharp::Threading::Tasks::UniTask_DelayPromise*  value) ;

/// @brief Method .ctor, addr 0xadf28c8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UniTask_DelayPromise*> getStaticF_pool() ;

/// @brief Method get_NextNode, addr 0xadf27ac, size 0x8, virtual true, abstract: false, final true
inline ::by_ref<::Cysharp::Threading::Tasks::UniTask_DelayPromise*> get_NextNode() ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
constexpr ::Cysharp::Threading::Tasks::IPlayerLoopItem* i___Cysharp__Threading__Tasks__IPlayerLoopItem() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UniTask_DelayPromise*>"
constexpr ::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UniTask_DelayPromise*>* i___Cysharp__Threading__Tasks__ITaskPoolNode_1___Cysharp__Threading__Tasks__UniTask_DelayPromise__() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept;

static inline void setStaticF_pool(::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UniTask_DelayPromise*>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UniTask_DelayPromise() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UniTask_DelayPromise", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UniTask_DelayPromise(UniTask_DelayPromise && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UniTask_DelayPromise", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UniTask_DelayPromise(UniTask_DelayPromise const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21690};

/// @brief Field nextNode, offset: 0x10, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::UniTask_DelayPromise*  ___nextNode;

/// @brief Field initialFrame, offset: 0x18, size: 0x4, def value: None
 int32_t  ___initialFrame;

/// @brief Field delayTimeSpan, offset: 0x1c, size: 0x4, def value: None
 float_t  ___delayTimeSpan;

/// @brief Field elapsed, offset: 0x20, size: 0x4, def value: None
 float_t  ___elapsed;

/// @brief Field cancellationToken, offset: 0x28, size: 0x8, def value: None
 ::System::Threading::CancellationToken  ___cancellationToken;

/// @brief Field core, offset: 0x30, size: 0x28, def value: None
 ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::Object*>  ___core;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Cysharp::Threading::Tasks::UniTask_DelayPromise, ___nextNode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UniTask_DelayPromise, ___initialFrame) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UniTask_DelayPromise, ___delayTimeSpan) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UniTask_DelayPromise, ___elapsed) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UniTask_DelayPromise, ___cancellationToken) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UniTask_DelayPromise, ___core) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Cysharp::Threading::Tasks::UniTask_DelayPromise) == 0x58, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
// [CompilerGenerated]
// Dependencies System.Object
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTask/DelayPromise/<>c
class CORDL_TYPE DelayPromise_UniTask___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Cysharp::Threading::Tasks::DelayPromise_UniTask___c*  __9;

static inline ::Cysharp::Threading::Tasks::DelayPromise_UniTask___c* New_ctor() ;

/// @brief Method <.cctor>b__4_0, addr 0xadf2d2c, size 0x64, virtual false, abstract: false, final false
inline int32_t __cctor_b__4_0() ;

/// @brief Method .ctor, addr 0xadf2d24, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Threading::Tasks::DelayPromise_UniTask___c* getStaticF___9() ;

static inline void setStaticF___9(::Cysharp::Threading::Tasks::DelayPromise_UniTask___c*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DelayPromise_UniTask___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DelayPromise_UniTask___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DelayPromise_UniTask___c(DelayPromise_UniTask___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DelayPromise_UniTask___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DelayPromise_UniTask___c(DelayPromise_UniTask___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21689};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::DelayPromise_UniTask___c) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
// Dependencies Cysharp.Threading.Tasks.AsyncUnit, Cysharp.Threading.Tasks.TaskPool`1<T>, Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<TResult>, System.Object, System.Threading.CancellationToken
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTask/DelayFramePromise
class CORDL_TYPE UniTask_DelayFramePromise : public ::System::Object {
public:
// Declarations
using __c = ::Cysharp::Threading::Tasks::DelayFramePromise_UniTask___c;

 __declspec(property(get=get_NextNode)) ::Cysharp::Threading::Tasks::UniTask_DelayFramePromise*  NextNode;

/// @brief Field cancellationToken, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_cancellationToken, put=__cordl_internal_set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field core, offset 0x30, size 0x28 
 __declspec(property(get=__cordl_internal_get_core, put=__cordl_internal_set_core)) ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::Cysharp::Threading::Tasks::AsyncUnit>  core;

/// @brief Field currentFrameCount, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentFrameCount, put=__cordl_internal_set_currentFrameCount)) int32_t  currentFrameCount;

/// @brief Field delayFrameCount, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_delayFrameCount, put=__cordl_internal_set_delayFrameCount)) int32_t  delayFrameCount;

/// @brief Field initialFrame, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_initialFrame, put=__cordl_internal_set_initialFrame)) int32_t  initialFrame;

/// @brief Field nextNode, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_nextNode, put=__cordl_internal_set_nextNode)) ::Cysharp::Threading::Tasks::UniTask_DelayFramePromise*  nextNode;

/// @brief Field pool, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_pool, put=setStaticF_pool)) ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UniTask_DelayFramePromise*>  pool;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
constexpr operator  ::Cysharp::Threading::Tasks::IPlayerLoopItem*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UniTask_DelayFramePromise*>"
constexpr operator  ::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UniTask_DelayFramePromise*>*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept;

/// @brief Method Create, addr 0xaded114, size 0x1d0, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IUniTaskSource* Create(int32_t  delayFrameCount, ::Cysharp::Threading::Tasks::PlayerLoopTiming  timing, ::System::Threading::CancellationToken  cancellationToken, ::by_ref<int16_t>  token) ;

/// @brief Method GetResult, addr 0xadf22c4, size 0xc8, virtual true, abstract: false, final true
inline void GetResult(int16_t  token) ;

/// @brief Method GetStatus, addr 0xadf238c, size 0x58, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(int16_t  token) ;

/// @brief Method MoveNext, addr 0xadf250c, size 0x128, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Cysharp::Threading::Tasks::UniTask_DelayFramePromise* New_ctor() ;

/// @brief Method OnCompleted, addr 0xadf249c, size 0x70, virtual true, abstract: false, final true
inline void OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token) ;

/// @brief Method TryReturn, addr 0xadf2634, size 0xa4, virtual false, abstract: false, final false
inline bool TryReturn() ;

/// @brief Method UnsafeGetStatus, addr 0xadf23e4, size 0xb8, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus() ;

constexpr ::System::Threading::CancellationToken const& __cordl_internal_get_cancellationToken() const;

constexpr ::System::Threading::CancellationToken& __cordl_internal_get_cancellationToken() ;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::Cysharp::Threading::Tasks::AsyncUnit> const& __cordl_internal_get_core() const;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::Cysharp::Threading::Tasks::AsyncUnit>& __cordl_internal_get_core() ;

constexpr int32_t const& __cordl_internal_get_currentFrameCount() const;

constexpr int32_t& __cordl_internal_get_currentFrameCount() ;

constexpr int32_t const& __cordl_internal_get_delayFrameCount() const;

constexpr int32_t& __cordl_internal_get_delayFrameCount() ;

constexpr int32_t const& __cordl_internal_get_initialFrame() const;

constexpr int32_t& __cordl_internal_get_initialFrame() ;

constexpr ::Cysharp::Threading::Tasks::UniTask_DelayFramePromise* const& __cordl_internal_get_nextNode() const;

constexpr ::Cysharp::Threading::Tasks::UniTask_DelayFramePromise*& __cordl_internal_get_nextNode() ;

constexpr void __cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr void __cordl_internal_set_core(::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::Cysharp::Threading::Tasks::AsyncUnit>  value) ;

constexpr void __cordl_internal_set_currentFrameCount(int32_t  value) ;

constexpr void __cordl_internal_set_delayFrameCount(int32_t  value) ;

constexpr void __cordl_internal_set_initialFrame(int32_t  value) ;

constexpr void __cordl_internal_set_nextNode(::Cysharp::Threading::Tasks::UniTask_DelayFramePromise*  value) ;

/// @brief Method .ctor, addr 0xadf22bc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UniTask_DelayFramePromise*> getStaticF_pool() ;

/// @brief Method get_NextNode, addr 0xadf21a0, size 0x8, virtual true, abstract: false, final true
inline ::by_ref<::Cysharp::Threading::Tasks::UniTask_DelayFramePromise*> get_NextNode() ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
constexpr ::Cysharp::Threading::Tasks::IPlayerLoopItem* i___Cysharp__Threading__Tasks__IPlayerLoopItem() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UniTask_DelayFramePromise*>"
constexpr ::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UniTask_DelayFramePromise*>* i___Cysharp__Threading__Tasks__ITaskPoolNode_1___Cysharp__Threading__Tasks__UniTask_DelayFramePromise__() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept;

static inline void setStaticF_pool(::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UniTask_DelayFramePromise*>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UniTask_DelayFramePromise() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UniTask_DelayFramePromise", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UniTask_DelayFramePromise(UniTask_DelayFramePromise && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UniTask_DelayFramePromise", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UniTask_DelayFramePromise(UniTask_DelayFramePromise const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21688};

/// @brief Field nextNode, offset: 0x10, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::UniTask_DelayFramePromise*  ___nextNode;

/// @brief Field initialFrame, offset: 0x18, size: 0x4, def value: None
 int32_t  ___initialFrame;

/// @brief Field delayFrameCount, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___delayFrameCount;

/// @brief Field cancellationToken, offset: 0x20, size: 0x8, def value: None
 ::System::Threading::CancellationToken  ___cancellationToken;

/// @brief Field currentFrameCount, offset: 0x28, size: 0x4, def value: None
 int32_t  ___currentFrameCount;

/// @brief Field core, offset: 0x30, size: 0x28, def value: None
 ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::Cysharp::Threading::Tasks::AsyncUnit>  ___core;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Cysharp::Threading::Tasks::UniTask_DelayFramePromise, ___nextNode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UniTask_DelayFramePromise, ___initialFrame) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UniTask_DelayFramePromise, ___delayFrameCount) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UniTask_DelayFramePromise, ___cancellationToken) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UniTask_DelayFramePromise, ___currentFrameCount) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UniTask_DelayFramePromise, ___core) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Cysharp::Threading::Tasks::UniTask_DelayFramePromise) == 0x58, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
// [CompilerGenerated]
// Dependencies System.Object
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTask/DelayFramePromise/<>c
class CORDL_TYPE DelayFramePromise_UniTask___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Cysharp::Threading::Tasks::DelayFramePromise_UniTask___c*  __9;

static inline ::Cysharp::Threading::Tasks::DelayFramePromise_UniTask___c* New_ctor() ;

/// @brief Method <.cctor>b__4_0, addr 0xadf2748, size 0x64, virtual false, abstract: false, final false
inline int32_t __cctor_b__4_0() ;

/// @brief Method .ctor, addr 0xadf2740, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Threading::Tasks::DelayFramePromise_UniTask___c* getStaticF___9() ;

static inline void setStaticF___9(::Cysharp::Threading::Tasks::DelayFramePromise_UniTask___c*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DelayFramePromise_UniTask___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DelayFramePromise_UniTask___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DelayFramePromise_UniTask___c(DelayFramePromise_UniTask___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DelayFramePromise_UniTask___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DelayFramePromise_UniTask___c(DelayFramePromise_UniTask___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21687};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::DelayFramePromise_UniTask___c) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
// Dependencies Cysharp.Threading.Tasks.TaskPool`1<T>, Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<TResult>, System.Object, System.Threading.CancellationToken
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTask/WaitForEndOfFramePromise
class CORDL_TYPE UniTask_WaitForEndOfFramePromise : public ::System::Object {
public:
// Declarations
using __c = ::Cysharp::Threading::Tasks::WaitForEndOfFramePromise_UniTask___c;

 __declspec(property(get=get_NextNode)) ::Cysharp::Threading::Tasks::UniTask_WaitForEndOfFramePromise*  NextNode;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field cancellationToken, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_cancellationToken, put=__cordl_internal_set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field core, offset 0x20, size 0x28 
 __declspec(property(get=__cordl_internal_get_core, put=__cordl_internal_set_core)) ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::Object*>  core;

/// @brief Field isFirst, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_isFirst, put=__cordl_internal_set_isFirst)) bool  isFirst;

/// @brief Field nextNode, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_nextNode, put=__cordl_internal_set_nextNode)) ::Cysharp::Threading::Tasks::UniTask_WaitForEndOfFramePromise*  nextNode;

/// @brief Field pool, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_pool, put=setStaticF_pool)) ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UniTask_WaitForEndOfFramePromise*>  pool;

/// @brief Field waitForEndOfFrameYieldInstruction, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_waitForEndOfFrameYieldInstruction, put=setStaticF_waitForEndOfFrameYieldInstruction)) ::UnityEngine::WaitForEndOfFrame*  waitForEndOfFrameYieldInstruction;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UniTask_WaitForEndOfFramePromise*>"
constexpr operator  ::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UniTask_WaitForEndOfFramePromise*>*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Method Create, addr 0xadecdec, size 0x178, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IUniTaskSource* Create(::UnityEngine::MonoBehaviour*  coroutineRunner, ::System::Threading::CancellationToken  cancellationToken, ::by_ref<int16_t>  token) ;

/// @brief Method GetResult, addr 0xadf1cb4, size 0xc8, virtual true, abstract: false, final true
inline void GetResult(int16_t  token) ;

/// @brief Method GetStatus, addr 0xadf1d7c, size 0x58, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(int16_t  token) ;

static inline ::Cysharp::Threading::Tasks::UniTask_WaitForEndOfFramePromise* New_ctor() ;

/// @brief Method OnCompleted, addr 0xadf1e8c, size 0x70, virtual true, abstract: false, final true
inline void OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token) ;

/// @brief Method Reset, addr 0xadf1fa4, size 0xc, virtual true, abstract: false, final true
inline void Reset() ;

/// @brief Method System.Collections.IEnumerator.MoveNext, addr 0xadf2008, size 0xc4, virtual true, abstract: false, final true
inline bool System_Collections_IEnumerator_MoveNext() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0xadf1fb0, size 0x58, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method TryReturn, addr 0xadf1efc, size 0xa8, virtual false, abstract: false, final false
inline bool TryReturn() ;

/// @brief Method UnsafeGetStatus, addr 0xadf1dd4, size 0xb8, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus() ;

constexpr ::System::Threading::CancellationToken const& __cordl_internal_get_cancellationToken() const;

constexpr ::System::Threading::CancellationToken& __cordl_internal_get_cancellationToken() ;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::Object*> const& __cordl_internal_get_core() const;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::Object*>& __cordl_internal_get_core() ;

constexpr bool const& __cordl_internal_get_isFirst() const;

constexpr bool& __cordl_internal_get_isFirst() ;

constexpr ::Cysharp::Threading::Tasks::UniTask_WaitForEndOfFramePromise* const& __cordl_internal_get_nextNode() const;

constexpr ::Cysharp::Threading::Tasks::UniTask_WaitForEndOfFramePromise*& __cordl_internal_get_nextNode() ;

constexpr void __cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr void __cordl_internal_set_core(::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::Object*>  value) ;

constexpr void __cordl_internal_set_isFirst(bool  value) ;

constexpr void __cordl_internal_set_nextNode(::Cysharp::Threading::Tasks::UniTask_WaitForEndOfFramePromise*  value) ;

/// @brief Method .ctor, addr 0xadf1ca4, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UniTask_WaitForEndOfFramePromise*> getStaticF_pool() ;

static inline ::UnityEngine::WaitForEndOfFrame* getStaticF_waitForEndOfFrameYieldInstruction() ;

/// @brief Method get_NextNode, addr 0xadf1b38, size 0x8, virtual true, abstract: false, final true
inline ::by_ref<::Cysharp::Threading::Tasks::UniTask_WaitForEndOfFramePromise*> get_NextNode() ;

/// @brief Convert to "::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UniTask_WaitForEndOfFramePromise*>"
constexpr ::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UniTask_WaitForEndOfFramePromise*>* i___Cysharp__Threading__Tasks__ITaskPoolNode_1___Cysharp__Threading__Tasks__UniTask_WaitForEndOfFramePromise__() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

static inline void setStaticF_pool(::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UniTask_WaitForEndOfFramePromise*>  value) ;

static inline void setStaticF_waitForEndOfFrameYieldInstruction(::UnityEngine::WaitForEndOfFrame*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UniTask_WaitForEndOfFramePromise() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UniTask_WaitForEndOfFramePromise", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UniTask_WaitForEndOfFramePromise(UniTask_WaitForEndOfFramePromise && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UniTask_WaitForEndOfFramePromise", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UniTask_WaitForEndOfFramePromise(UniTask_WaitForEndOfFramePromise const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21686};

/// @brief Field nextNode, offset: 0x10, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::UniTask_WaitForEndOfFramePromise*  ___nextNode;

/// @brief Field cancellationToken, offset: 0x18, size: 0x8, def value: None
 ::System::Threading::CancellationToken  ___cancellationToken;

/// @brief Field core, offset: 0x20, size: 0x28, def value: None
 ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::Object*>  ___core;

/// @brief Field isFirst, offset: 0x48, size: 0x1, def value: None
 bool  ___isFirst;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Cysharp::Threading::Tasks::UniTask_WaitForEndOfFramePromise, ___nextNode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UniTask_WaitForEndOfFramePromise, ___cancellationToken) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UniTask_WaitForEndOfFramePromise, ___core) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UniTask_WaitForEndOfFramePromise, ___isFirst) == 0x48, "Offset mismatch!");

static_assert(sizeof(::Cysharp::Threading::Tasks::UniTask_WaitForEndOfFramePromise) == 0x50, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
// [CompilerGenerated]
// Dependencies System.Object
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTask/WaitForEndOfFramePromise/<>c
class CORDL_TYPE WaitForEndOfFramePromise_UniTask___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Cysharp::Threading::Tasks::WaitForEndOfFramePromise_UniTask___c*  __9;

static inline ::Cysharp::Threading::Tasks::WaitForEndOfFramePromise_UniTask___c* New_ctor() ;

/// @brief Method <.cctor>b__4_0, addr 0xadf213c, size 0x64, virtual false, abstract: false, final false
inline int32_t __cctor_b__4_0() ;

/// @brief Method .ctor, addr 0xadf2134, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Threading::Tasks::WaitForEndOfFramePromise_UniTask___c* getStaticF___9() ;

static inline void setStaticF___9(::Cysharp::Threading::Tasks::WaitForEndOfFramePromise_UniTask___c*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WaitForEndOfFramePromise_UniTask___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WaitForEndOfFramePromise_UniTask___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WaitForEndOfFramePromise_UniTask___c(WaitForEndOfFramePromise_UniTask___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WaitForEndOfFramePromise_UniTask___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WaitForEndOfFramePromise_UniTask___c(WaitForEndOfFramePromise_UniTask___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21685};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::WaitForEndOfFramePromise_UniTask___c) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
// Dependencies Cysharp.Threading.Tasks.AsyncUnit, Cysharp.Threading.Tasks.TaskPool`1<T>, Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<TResult>, System.Object, System.Threading.CancellationToken
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTask/NextFramePromise
class CORDL_TYPE UniTask_NextFramePromise : public ::System::Object {
public:
// Declarations
using __c = ::Cysharp::Threading::Tasks::NextFramePromise_UniTask___c;

 __declspec(property(get=get_NextNode)) ::Cysharp::Threading::Tasks::UniTask_NextFramePromise*  NextNode;

/// @brief Field cancellationToken, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_cancellationToken, put=__cordl_internal_set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field core, offset 0x28, size 0x28 
 __declspec(property(get=__cordl_internal_get_core, put=__cordl_internal_set_core)) ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::Cysharp::Threading::Tasks::AsyncUnit>  core;

/// @brief Field frameCount, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_frameCount, put=__cordl_internal_set_frameCount)) int32_t  frameCount;

/// @brief Field nextNode, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_nextNode, put=__cordl_internal_set_nextNode)) ::Cysharp::Threading::Tasks::UniTask_NextFramePromise*  nextNode;

/// @brief Field pool, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_pool, put=setStaticF_pool)) ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UniTask_NextFramePromise*>  pool;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
constexpr operator  ::Cysharp::Threading::Tasks::IPlayerLoopItem*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UniTask_NextFramePromise*>"
constexpr operator  ::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UniTask_NextFramePromise*>*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept;

/// @brief Method Create, addr 0xadec914, size 0x1c4, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IUniTaskSource* Create(::Cysharp::Threading::Tasks::PlayerLoopTiming  timing, ::System::Threading::CancellationToken  cancellationToken, ::by_ref<int16_t>  token) ;

/// @brief Method GetResult, addr 0xadf1684, size 0xc8, virtual true, abstract: false, final true
inline void GetResult(int16_t  token) ;

/// @brief Method GetStatus, addr 0xadf174c, size 0x58, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(int16_t  token) ;

/// @brief Method MoveNext, addr 0xadf18cc, size 0xf8, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Cysharp::Threading::Tasks::UniTask_NextFramePromise* New_ctor() ;

/// @brief Method OnCompleted, addr 0xadf185c, size 0x70, virtual true, abstract: false, final true
inline void OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token) ;

/// @brief Method TryReturn, addr 0xadf19c4, size 0xa0, virtual false, abstract: false, final false
inline bool TryReturn() ;

/// @brief Method UnsafeGetStatus, addr 0xadf17a4, size 0xb8, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus() ;

constexpr ::System::Threading::CancellationToken const& __cordl_internal_get_cancellationToken() const;

constexpr ::System::Threading::CancellationToken& __cordl_internal_get_cancellationToken() ;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::Cysharp::Threading::Tasks::AsyncUnit> const& __cordl_internal_get_core() const;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::Cysharp::Threading::Tasks::AsyncUnit>& __cordl_internal_get_core() ;

constexpr int32_t const& __cordl_internal_get_frameCount() const;

constexpr int32_t& __cordl_internal_get_frameCount() ;

constexpr ::Cysharp::Threading::Tasks::UniTask_NextFramePromise* const& __cordl_internal_get_nextNode() const;

constexpr ::Cysharp::Threading::Tasks::UniTask_NextFramePromise*& __cordl_internal_get_nextNode() ;

constexpr void __cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr void __cordl_internal_set_core(::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::Cysharp::Threading::Tasks::AsyncUnit>  value) ;

constexpr void __cordl_internal_set_frameCount(int32_t  value) ;

constexpr void __cordl_internal_set_nextNode(::Cysharp::Threading::Tasks::UniTask_NextFramePromise*  value) ;

/// @brief Method .ctor, addr 0xadf167c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UniTask_NextFramePromise*> getStaticF_pool() ;

/// @brief Method get_NextNode, addr 0xadf1560, size 0x8, virtual true, abstract: false, final true
inline ::by_ref<::Cysharp::Threading::Tasks::UniTask_NextFramePromise*> get_NextNode() ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
constexpr ::Cysharp::Threading::Tasks::IPlayerLoopItem* i___Cysharp__Threading__Tasks__IPlayerLoopItem() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UniTask_NextFramePromise*>"
constexpr ::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UniTask_NextFramePromise*>* i___Cysharp__Threading__Tasks__ITaskPoolNode_1___Cysharp__Threading__Tasks__UniTask_NextFramePromise__() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept;

static inline void setStaticF_pool(::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UniTask_NextFramePromise*>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UniTask_NextFramePromise() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UniTask_NextFramePromise", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UniTask_NextFramePromise(UniTask_NextFramePromise && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UniTask_NextFramePromise", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UniTask_NextFramePromise(UniTask_NextFramePromise const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21684};

/// @brief Field nextNode, offset: 0x10, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::UniTask_NextFramePromise*  ___nextNode;

/// @brief Field frameCount, offset: 0x18, size: 0x4, def value: None
 int32_t  ___frameCount;

/// @brief Field cancellationToken, offset: 0x20, size: 0x8, def value: None
 ::System::Threading::CancellationToken  ___cancellationToken;

/// @brief Field core, offset: 0x28, size: 0x28, def value: None
 ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::Cysharp::Threading::Tasks::AsyncUnit>  ___core;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Cysharp::Threading::Tasks::UniTask_NextFramePromise, ___nextNode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UniTask_NextFramePromise, ___frameCount) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UniTask_NextFramePromise, ___cancellationToken) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UniTask_NextFramePromise, ___core) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Cysharp::Threading::Tasks::UniTask_NextFramePromise) == 0x50, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
// [CompilerGenerated]
// Dependencies System.Object
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTask/NextFramePromise/<>c
class CORDL_TYPE NextFramePromise_UniTask___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Cysharp::Threading::Tasks::NextFramePromise_UniTask___c*  __9;

static inline ::Cysharp::Threading::Tasks::NextFramePromise_UniTask___c* New_ctor() ;

/// @brief Method <.cctor>b__4_0, addr 0xadf1ad4, size 0x64, virtual false, abstract: false, final false
inline int32_t __cctor_b__4_0() ;

/// @brief Method .ctor, addr 0xadf1acc, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Threading::Tasks::NextFramePromise_UniTask___c* getStaticF___9() ;

static inline void setStaticF___9(::Cysharp::Threading::Tasks::NextFramePromise_UniTask___c*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr NextFramePromise_UniTask___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "NextFramePromise_UniTask___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
NextFramePromise_UniTask___c(NextFramePromise_UniTask___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "NextFramePromise_UniTask___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
NextFramePromise_UniTask___c(NextFramePromise_UniTask___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21683};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::NextFramePromise_UniTask___c) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
// Dependencies Cysharp.Threading.Tasks.TaskPool`1<T>, Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<TResult>, System.Object, System.Threading.CancellationToken
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTask/YieldPromise
class CORDL_TYPE UniTask_YieldPromise : public ::System::Object {
public:
// Declarations
using __c = ::Cysharp::Threading::Tasks::YieldPromise_UniTask___c;

 __declspec(property(get=get_NextNode)) ::Cysharp::Threading::Tasks::UniTask_YieldPromise*  NextNode;

/// @brief Field cancellationToken, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_cancellationToken, put=__cordl_internal_set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field core, offset 0x20, size 0x28 
 __declspec(property(get=__cordl_internal_get_core, put=__cordl_internal_set_core)) ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::Object*>  core;

/// @brief Field nextNode, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_nextNode, put=__cordl_internal_set_nextNode)) ::Cysharp::Threading::Tasks::UniTask_YieldPromise*  nextNode;

/// @brief Field pool, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_pool, put=setStaticF_pool)) ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UniTask_YieldPromise*>  pool;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
constexpr operator  ::Cysharp::Threading::Tasks::IPlayerLoopItem*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UniTask_YieldPromise*>"
constexpr operator  ::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UniTask_YieldPromise*>*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept;

/// @brief Method Create, addr 0xadec638, size 0x190, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IUniTaskSource* Create(::Cysharp::Threading::Tasks::PlayerLoopTiming  timing, ::System::Threading::CancellationToken  cancellationToken, ::by_ref<int16_t>  token) ;

/// @brief Method GetResult, addr 0xadf10f4, size 0xc8, virtual true, abstract: false, final true
inline void GetResult(int16_t  token) ;

/// @brief Method GetStatus, addr 0xadf11bc, size 0x58, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(int16_t  token) ;

/// @brief Method MoveNext, addr 0xadf133c, size 0xb0, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Cysharp::Threading::Tasks::UniTask_YieldPromise* New_ctor() ;

/// @brief Method OnCompleted, addr 0xadf12cc, size 0x70, virtual true, abstract: false, final true
inline void OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token) ;

/// @brief Method TryReturn, addr 0xadf13ec, size 0xa0, virtual false, abstract: false, final false
inline bool TryReturn() ;

/// @brief Method UnsafeGetStatus, addr 0xadf1214, size 0xb8, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus() ;

constexpr ::System::Threading::CancellationToken const& __cordl_internal_get_cancellationToken() const;

constexpr ::System::Threading::CancellationToken& __cordl_internal_get_cancellationToken() ;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::Object*> const& __cordl_internal_get_core() const;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::Object*>& __cordl_internal_get_core() ;

constexpr ::Cysharp::Threading::Tasks::UniTask_YieldPromise* const& __cordl_internal_get_nextNode() const;

constexpr ::Cysharp::Threading::Tasks::UniTask_YieldPromise*& __cordl_internal_get_nextNode() ;

constexpr void __cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr void __cordl_internal_set_core(::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::Object*>  value) ;

constexpr void __cordl_internal_set_nextNode(::Cysharp::Threading::Tasks::UniTask_YieldPromise*  value) ;

/// @brief Method .ctor, addr 0xadf10ec, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UniTask_YieldPromise*> getStaticF_pool() ;

/// @brief Method get_NextNode, addr 0xadf0fd0, size 0x8, virtual true, abstract: false, final true
inline ::by_ref<::Cysharp::Threading::Tasks::UniTask_YieldPromise*> get_NextNode() ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
constexpr ::Cysharp::Threading::Tasks::IPlayerLoopItem* i___Cysharp__Threading__Tasks__IPlayerLoopItem() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UniTask_YieldPromise*>"
constexpr ::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::UniTask_YieldPromise*>* i___Cysharp__Threading__Tasks__ITaskPoolNode_1___Cysharp__Threading__Tasks__UniTask_YieldPromise__() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept;

static inline void setStaticF_pool(::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::UniTask_YieldPromise*>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UniTask_YieldPromise() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UniTask_YieldPromise", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UniTask_YieldPromise(UniTask_YieldPromise && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UniTask_YieldPromise", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UniTask_YieldPromise(UniTask_YieldPromise const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21682};

/// @brief Field nextNode, offset: 0x10, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::UniTask_YieldPromise*  ___nextNode;

/// @brief Field cancellationToken, offset: 0x18, size: 0x8, def value: None
 ::System::Threading::CancellationToken  ___cancellationToken;

/// @brief Field core, offset: 0x20, size: 0x28, def value: None
 ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::System::Object*>  ___core;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Cysharp::Threading::Tasks::UniTask_YieldPromise, ___nextNode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UniTask_YieldPromise, ___cancellationToken) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UniTask_YieldPromise, ___core) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Cysharp::Threading::Tasks::UniTask_YieldPromise) == 0x48, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
// [CompilerGenerated]
// Dependencies System.Object
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTask/YieldPromise/<>c
class CORDL_TYPE YieldPromise_UniTask___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Cysharp::Threading::Tasks::YieldPromise_UniTask___c*  __9;

static inline ::Cysharp::Threading::Tasks::YieldPromise_UniTask___c* New_ctor() ;

/// @brief Method <.cctor>b__4_0, addr 0xadf14fc, size 0x64, virtual false, abstract: false, final false
inline int32_t __cctor_b__4_0() ;

/// @brief Method .ctor, addr 0xadf14f4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Threading::Tasks::YieldPromise_UniTask___c* getStaticF___9() ;

static inline void setStaticF___9(::Cysharp::Threading::Tasks::YieldPromise_UniTask___c*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr YieldPromise_UniTask___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "YieldPromise_UniTask___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
YieldPromise_UniTask___c(YieldPromise_UniTask___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "YieldPromise_UniTask___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
YieldPromise_UniTask___c(YieldPromise_UniTask___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21681};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::YieldPromise_UniTask___c) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
// Dependencies Cysharp.Threading.Tasks.UniTaskStatus, System.Object
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTask/MemoizeSource
class CORDL_TYPE UniTask_MemoizeSource : public ::System::Object {
public:
// Declarations
/// @brief Field exception, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_exception, put=__cordl_internal_set_exception)) ::System::Runtime::ExceptionServices::ExceptionDispatchInfo*  exception;

/// @brief Field source, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_source, put=__cordl_internal_set_source)) ::Cysharp::Threading::Tasks::IUniTaskSource*  source;

/// @brief Field status, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_status, put=__cordl_internal_set_status)) ::Cysharp::Threading::Tasks::UniTaskStatus  status;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept;

/// @brief Method GetResult, addr 0xadf0664, size 0x264, virtual true, abstract: false, final true
inline void GetResult(int16_t  token) ;

/// @brief Method GetStatus, addr 0xadf08c8, size 0xb4, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(int16_t  token) ;

static inline ::Cysharp::Threading::Tasks::UniTask_MemoizeSource* New_ctor(::Cysharp::Threading::Tasks::IUniTaskSource*  source) ;

/// @brief Method OnCompleted, addr 0xadf097c, size 0xe8, virtual true, abstract: false, final true
inline void OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token) ;

/// @brief Method UnsafeGetStatus, addr 0xadf0a64, size 0xb0, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus() ;

constexpr ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* const& __cordl_internal_get_exception() const;

constexpr ::System::Runtime::ExceptionServices::ExceptionDispatchInfo*& __cordl_internal_get_exception() ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* const& __cordl_internal_get_source() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskSource*& __cordl_internal_get_source() ;

constexpr ::Cysharp::Threading::Tasks::UniTaskStatus const& __cordl_internal_get_status() const;

constexpr ::Cysharp::Threading::Tasks::UniTaskStatus& __cordl_internal_get_status() ;

constexpr void __cordl_internal_set_exception(::System::Runtime::ExceptionServices::ExceptionDispatchInfo*  value) ;

constexpr void __cordl_internal_set_source(::Cysharp::Threading::Tasks::IUniTaskSource*  value) ;

constexpr void __cordl_internal_set_status(::Cysharp::Threading::Tasks::UniTaskStatus  value) ;

/// @brief Method .ctor, addr 0xadec33c, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::IUniTaskSource*  source) ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UniTask_MemoizeSource() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UniTask_MemoizeSource", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UniTask_MemoizeSource(UniTask_MemoizeSource && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UniTask_MemoizeSource", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UniTask_MemoizeSource(UniTask_MemoizeSource const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21679};

/// @brief Field source, offset: 0x10, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskSource*  ___source;

/// @brief Field exception, offset: 0x18, size: 0x8, def value: None
 ::System::Runtime::ExceptionServices::ExceptionDispatchInfo*  ___exception;

/// @brief Field status, offset: 0x20, size: 0x4, def value: None
 ::Cysharp::Threading::Tasks::UniTaskStatus  ___status;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Cysharp::Threading::Tasks::UniTask_MemoizeSource, ___source) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UniTask_MemoizeSource, ___exception) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::UniTask_MemoizeSource, ___status) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Cysharp::Threading::Tasks::UniTask_MemoizeSource) == 0x28, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
// Dependencies System.Object
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTask/IsCanceledSource
class CORDL_TYPE UniTask_IsCanceledSource : public ::System::Object {
public:
// Declarations
/// @brief Field source, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_source, put=__cordl_internal_set_source)) ::Cysharp::Threading::Tasks::IUniTaskSource*  source;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource_1<bool>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource_1<bool>*() noexcept;

/// @brief Method Cysharp.Threading.Tasks.IUniTaskSource.GetResult, addr 0xadf0450, size 0x4, virtual true, abstract: false, final true
inline void Cysharp_Threading_Tasks_IUniTaskSource_GetResult(int16_t  token) ;

/// @brief Method GetResult, addr 0xadf0320, size 0x130, virtual true, abstract: false, final true
inline bool GetResult(int16_t  token) ;

/// @brief Method GetStatus, addr 0xadf0454, size 0xa8, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(int16_t  token) ;

static inline ::Cysharp::Threading::Tasks::UniTask_IsCanceledSource* New_ctor(::Cysharp::Threading::Tasks::IUniTaskSource*  source) ;

/// @brief Method OnCompleted, addr 0xadf05a0, size 0xc4, virtual true, abstract: false, final true
inline void OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token) ;

/// @brief Method UnsafeGetStatus, addr 0xadf04fc, size 0xa4, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus() ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* const& __cordl_internal_get_source() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskSource*& __cordl_internal_get_source() ;

constexpr void __cordl_internal_set_source(::Cysharp::Threading::Tasks::IUniTaskSource*  value) ;

/// @brief Method .ctor, addr 0xadec130, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::IUniTaskSource*  source) ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource_1<bool>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource_1<bool>* i___Cysharp__Threading__Tasks__IUniTaskSource_1_bool_() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UniTask_IsCanceledSource() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UniTask_IsCanceledSource", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UniTask_IsCanceledSource(UniTask_IsCanceledSource && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UniTask_IsCanceledSource", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UniTask_IsCanceledSource(UniTask_IsCanceledSource const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21678};

/// @brief Field source, offset: 0x10, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskSource*  ___source;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Cysharp::Threading::Tasks::UniTask_IsCanceledSource, ___source) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Cysharp::Threading::Tasks::UniTask_IsCanceledSource) == 0x18, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
// Dependencies System.Object
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.UniTask/AsyncUnitSource
class CORDL_TYPE UniTask_AsyncUnitSource : public ::System::Object {
public:
// Declarations
/// @brief Field source, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_source, put=__cordl_internal_set_source)) ::Cysharp::Threading::Tasks::IUniTaskSource*  source;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource_1<::Cysharp::Threading::Tasks::AsyncUnit>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource_1<::Cysharp::Threading::Tasks::AsyncUnit>*() noexcept;

/// @brief Method Cysharp.Threading.Tasks.IUniTaskSource.GetResult, addr 0xadf031c, size 0x4, virtual true, abstract: false, final true
inline void Cysharp_Threading_Tasks_IUniTaskSource_GetResult(int16_t  token) ;

/// @brief Method GetResult, addr 0xadf002c, size 0xe0, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::AsyncUnit GetResult(int16_t  token) ;

/// @brief Method GetStatus, addr 0xadf010c, size 0xa8, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(int16_t  token) ;

static inline ::Cysharp::Threading::Tasks::UniTask_AsyncUnitSource* New_ctor(::Cysharp::Threading::Tasks::IUniTaskSource*  source) ;

/// @brief Method OnCompleted, addr 0xadf01b4, size 0xc4, virtual true, abstract: false, final true
inline void OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token) ;

/// @brief Method UnsafeGetStatus, addr 0xadf0278, size 0xa4, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus() ;

constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* const& __cordl_internal_get_source() const;

constexpr ::Cysharp::Threading::Tasks::IUniTaskSource*& __cordl_internal_get_source() ;

constexpr void __cordl_internal_set_source(::Cysharp::Threading::Tasks::IUniTaskSource*  value) ;

/// @brief Method .ctor, addr 0xadec574, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::Cysharp::Threading::Tasks::IUniTaskSource*  source) ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource_1<::Cysharp::Threading::Tasks::AsyncUnit>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource_1<::Cysharp::Threading::Tasks::AsyncUnit>* i___Cysharp__Threading__Tasks__IUniTaskSource_1___Cysharp__Threading__Tasks__AsyncUnit_() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UniTask_AsyncUnitSource() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UniTask_AsyncUnitSource", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UniTask_AsyncUnitSource(UniTask_AsyncUnitSource && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UniTask_AsyncUnitSource", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UniTask_AsyncUnitSource(UniTask_AsyncUnitSource const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21677};

/// @brief Field source, offset: 0x10, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::IUniTaskSource*  ___source;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Cysharp::Threading::Tasks::UniTask_AsyncUnitSource, ___source) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Cysharp::Threading::Tasks::UniTask_AsyncUnitSource) == 0x18, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
