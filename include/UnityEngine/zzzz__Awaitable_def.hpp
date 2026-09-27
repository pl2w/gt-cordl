#pragma once
// IWYU pragma private; include "UnityEngine/Awaitable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Threading/zzzz__CancellationTokenRegistration_def.hpp"
#include "System/Threading/zzzz__SpinLock_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Awaitable_AwaitableHandle_def.hpp"
#include "UnityEngine/zzzz__Awaitable_AwaiterCompletionThreadAffinity_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Awaitable)
namespace GlobalNamespace {
struct Awaitable_AwaitableAndFrameIndex;
}
namespace GlobalNamespace {
template<typename T>
struct Awaitable_AwaitableAsyncMethodBuilder_1;
}
namespace GlobalNamespace {
struct Awaitable_AwaitableAsyncMethodBuilder;
}
namespace GlobalNamespace {
struct Awaitable_AwaitableHandle;
}
namespace GlobalNamespace {
struct Awaitable_AwaiterCompletionThreadAffinity;
}
namespace GlobalNamespace {
struct Awaitable_Awaiter;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
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
namespace System::Threading {
template<typename T>
class ThreadLocal_1;
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
class IDisposable;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace System {
struct UIntPtr;
}
namespace UnityEngine::Pool {
template<typename T>
class ObjectPool_1;
}
namespace UnityEngine {
class AsyncOperation;
}
namespace UnityEngine {
class Awaitable_DoubleBufferedAwaitableList;
}
namespace UnityEngine {
class Awaitable___c;
}
namespace UnityEngine {
class DoubleBufferedAwaitableList_Awaitable___c__DisplayClass4_0;
}
namespace UnityEngine {
struct MainThreadAwaitable;
}
namespace UnityEngine {
class UnitySynchronizationContext;
}
// Forward declare root types
namespace UnityEngine {
class Awaitable;
}
namespace UnityEngine {
template<typename T>
class AwaitableAsyncMethodBuilder_1_Awaitable_IStateMachineBox;
}
namespace UnityEngine {
class AwaitableAsyncMethodBuilder_Awaitable_IStateMachineBox;
}
namespace UnityEngine {
class Awaitable_DoubleBufferedAwaitableList;
}
namespace UnityEngine {
class Awaitable___c;
}
namespace UnityEngine {
class DoubleBufferedAwaitableList_Awaitable___c__DisplayClass4_0;
}
// Write type traits
MARK_REF_T(::UnityEngine::Awaitable*);
MARK_GEN_REF_T_PTR(::UnityEngine::AwaitableAsyncMethodBuilder_1_Awaitable_IStateMachineBox);
MARK_REF_T(::UnityEngine::AwaitableAsyncMethodBuilder_Awaitable_IStateMachineBox*);
MARK_REF_T(::UnityEngine::Awaitable_DoubleBufferedAwaitableList*);
MARK_REF_T(::UnityEngine::Awaitable___c*);
MARK_REF_T(::UnityEngine::DoubleBufferedAwaitableList_Awaitable___c__DisplayClass4_0*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Awaitable*, "UnityEngine", "Awaitable");
DEFINE_IL2CPP_GEN_CLASS_PTR(::UnityEngine::AwaitableAsyncMethodBuilder_1_Awaitable_IStateMachineBox, "UnityEngine", "Awaitable/AwaitableAsyncMethodBuilder`1/IStateMachineBox");
DEFINE_IL2CPP_CLASS(::UnityEngine::AwaitableAsyncMethodBuilder_Awaitable_IStateMachineBox*, "UnityEngine", "Awaitable/AwaitableAsyncMethodBuilder/IStateMachineBox");
DEFINE_IL2CPP_CLASS(::UnityEngine::Awaitable_DoubleBufferedAwaitableList*, "UnityEngine", "Awaitable/DoubleBufferedAwaitableList");
DEFINE_IL2CPP_CLASS(::UnityEngine::Awaitable___c*, "UnityEngine", "Awaitable/<>c");
DEFINE_IL2CPP_CLASS(::UnityEngine::DoubleBufferedAwaitableList_Awaitable___c__DisplayClass4_0*, "UnityEngine", "Awaitable/DoubleBufferedAwaitableList/<>c__DisplayClass4_0");
// [NativeHeader("Runtime/Mono/Awaitable.h")]
// [NativeHeader("Runtime/Mono/AsyncOperationAwaitable.h")]
// [NativeHeader("Runtime/Mono/DelayedCallAwaitable.h")]
// [AsyncMethodBuilder(typeof(UnityEngine.Awaitable::AwaitableAsyncMethodBuilder))]
// Dependencies System.Nullable`1<T>, System.Object, System.Threading.CancellationTokenRegistration, System.Threading.SpinLock, UnityEngine.Awaitable::AwaitableHandle, UnityEngine.Awaitable::AwaiterCompletionThreadAffinity
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Awaitable
class CORDL_TYPE Awaitable : public ::System::Object {
public:
// Declarations
using AwaitableAndFrameIndex = ::GlobalNamespace::Awaitable_AwaitableAndFrameIndex;

using AwaitableAsyncMethodBuilder = ::GlobalNamespace::Awaitable_AwaitableAsyncMethodBuilder;

template<typename T>
using AwaitableAsyncMethodBuilder_1 = ::GlobalNamespace::Awaitable_AwaitableAsyncMethodBuilder_1<T>;

using AwaitableHandle = ::GlobalNamespace::Awaitable_AwaitableHandle;

using Awaiter = ::GlobalNamespace::Awaitable_Awaiter;

using AwaiterCompletionThreadAffinity = ::GlobalNamespace::Awaitable_AwaiterCompletionThreadAffinity;

using DoubleBufferedAwaitableList = ::UnityEngine::Awaitable_DoubleBufferedAwaitableList;

using __c = ::UnityEngine::Awaitable___c;

 __declspec(property(get=get_IsCompleted)) bool  IsCompleted;

 __declspec(property(get=get_IsCompletedNoLock)) bool  IsCompletedNoLock;

 __declspec(property(get=get_IsDettachedOrCompleted)) bool  IsDettachedOrCompleted;

 __declspec(property(get=get_IsLogicallyCompletedNoLock)) bool  IsLogicallyCompletedNoLock;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field _cancelTokenRegistration, offset 0x38, size 0x10 
 __declspec(property(get=__cordl_internal_get__cancelTokenRegistration, put=__cordl_internal_set__cancelTokenRegistration)) ::System::Nullable_1<::System::Threading::CancellationTokenRegistration>  _cancelTokenRegistration;

/// @brief Field _completionThreadAffinity, offset 0x2c, size 0x4 
 __declspec(property(get=__cordl_internal_get__completionThreadAffinity, put=__cordl_internal_set__completionThreadAffinity)) ::GlobalNamespace::Awaitable_AwaiterCompletionThreadAffinity  _completionThreadAffinity;

/// @brief Field _continuation, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__continuation, put=__cordl_internal_set__continuation)) ::System::Action*  _continuation;

/// @brief Field _endOfFrameAwaitables, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__endOfFrameAwaitables, put=setStaticF__endOfFrameAwaitables)) ::UnityEngine::Awaitable_DoubleBufferedAwaitableList*  _endOfFrameAwaitables;

/// @brief Field _exceptionToRethrow, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__exceptionToRethrow, put=__cordl_internal_set__exceptionToRethrow)) ::System::Runtime::ExceptionServices::ExceptionDispatchInfo*  _exceptionToRethrow;

/// @brief Field _handle, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__handle, put=__cordl_internal_set__handle)) ::GlobalNamespace::Awaitable_AwaitableHandle  _handle;

/// @brief Field _mainThreadId, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__mainThreadId, put=setStaticF__mainThreadId)) int32_t  _mainThreadId;

/// @brief Field _managedAwaitableDone, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get__managedAwaitableDone, put=__cordl_internal_set__managedAwaitableDone)) bool  _managedAwaitableDone;

/// @brief Field _managedCompletionQueue, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__managedCompletionQueue, put=__cordl_internal_set__managedCompletionQueue)) ::UnityEngine::Awaitable_DoubleBufferedAwaitableList*  _managedCompletionQueue;

/// @brief Field _nextFrameAndEndOfFrameWiredUp, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__nextFrameAndEndOfFrameWiredUp, put=setStaticF__nextFrameAndEndOfFrameWiredUp)) bool  _nextFrameAndEndOfFrameWiredUp;

/// @brief Field _nextFrameAndEndOfFrameWiredUpCTRegistration, offset 0xffffffff, size 0x18 
 __declspec(property(get=getStaticF__nextFrameAndEndOfFrameWiredUpCTRegistration, put=setStaticF__nextFrameAndEndOfFrameWiredUpCTRegistration)) ::System::Threading::CancellationTokenRegistration  _nextFrameAndEndOfFrameWiredUpCTRegistration;

/// @brief Field _nextFrameAwaitables, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__nextFrameAwaitables, put=setStaticF__nextFrameAwaitables)) ::UnityEngine::Awaitable_DoubleBufferedAwaitableList*  _nextFrameAwaitables;

/// @brief Field _pool, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__pool, put=setStaticF__pool)) ::System::Threading::ThreadLocal_1<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Awaitable*>*>*  _pool;

/// @brief Field _spinLock, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get__spinLock, put=__cordl_internal_set__spinLock)) ::System::Threading::SpinLock  _spinLock;

/// @brief Field _synchronizationContext, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__synchronizationContext, put=setStaticF__synchronizationContext)) ::System::Threading::SynchronizationContext*  _synchronizationContext;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// [FreeFunction("Scripting::Awaitables::AttachManagedWrapper", IsThreadSafe = true)]
/// @brief Method AttachManagedGCHandleToNativeAwaitable, addr 0xb5d8868, size 0x44, virtual false, abstract: false, final false
static inline void AttachManagedGCHandleToNativeAwaitable(::System::IntPtr  nativeAwaitable, ::System::UIntPtr  gcHandle) ;

/// @brief Method Cancel, addr 0xb5da53c, size 0x198, virtual false, abstract: false, final false
inline void Cancel() ;

/// [FreeFunction("Scripting::Awaitables::Cancel", IsThreadSafe = true)]
/// @brief Method CancelNativeAwaitable, addr 0xb5d88e8, size 0x3c, virtual false, abstract: false, final false
static inline void CancelNativeAwaitable(::System::IntPtr  nativeAwaitable) ;

/// @brief Method CheckPointerValidity, addr 0xb5dae68, size 0xa4, virtual false, abstract: false, final false
inline ::GlobalNamespace::Awaitable_AwaitableHandle CheckPointerValidity() ;

/// @brief Method DoRunContinuationOnSynchonizationContext, addr 0xb5d9f50, size 0x6c, virtual false, abstract: false, final false
static inline void DoRunContinuationOnSynchonizationContext(::System::Object*  continuation) ;

/// @brief Method EndOfFrameAsync, addr 0xb5d8f78, size 0x10c, virtual false, abstract: false, final false
static inline ::UnityEngine::Awaitable* EndOfFrameAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method EnsureDelayedCallWiredUp, addr 0xb5d8b44, size 0x17c, virtual false, abstract: false, final false
static inline void EnsureDelayedCallWiredUp() ;

/// @brief Method FromAsyncOperation, addr 0xb5d84c4, size 0xcc, virtual false, abstract: false, final false
static inline ::UnityEngine::Awaitable* FromAsyncOperation(::UnityEngine::AsyncOperation*  op, ::System::Threading::CancellationToken  cancellationToken) ;

/// [FreeFunction("Scripting::Awaitables::FromAsyncOperation", ThrowsException = true)]
/// @brief Method FromAsyncOperationInternal, addr 0xb5d8590, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr FromAsyncOperationInternal(::System::IntPtr  asyncOperation) ;

/// @brief Method FromNativeAwaitableHandle, addr 0xb5d9658, size 0x198, virtual false, abstract: false, final false
static inline ::UnityEngine::Awaitable* FromNativeAwaitableHandle(::System::IntPtr  nativeHandle, ::System::Threading::CancellationToken  cancellationToken) ;

/// [ExcludeFromDocs]
/// @brief Method GetAwaiter, addr 0xb5d85cc, size 0x1c, virtual false, abstract: false, final false
inline ::GlobalNamespace::Awaitable_Awaiter GetAwaiter() ;

/// [FreeFunction("Scripting::Awaitables::IsCompleted", IsThreadSafe = true)]
/// @brief Method IsNativeAwaitableCompleted, addr 0xb5d8924, size 0x3c, virtual false, abstract: false, final false
static inline int32_t IsNativeAwaitableCompleted(::System::IntPtr  nativeAwaitable) ;

/// @brief Method MainThreadAsync, addr 0xb5d95ac, size 0x78, virtual false, abstract: false, final false
static inline ::UnityEngine::MainThreadAwaitable MainThreadAsync() ;

/// @brief Method MatchCompletionThreadAffinity, addr 0xb5d9b70, size 0xe8, virtual false, abstract: false, final false
static inline bool MatchCompletionThreadAffinity(::GlobalNamespace::Awaitable_AwaiterCompletionThreadAffinity  awaiterCompletionThreadAffinity) ;

/// @brief Method NewManagedAwaitable, addr 0xb5d8cc0, size 0xe0, virtual false, abstract: false, final false
static inline ::UnityEngine::Awaitable* NewManagedAwaitable() ;

static inline ::UnityEngine::Awaitable* New_ctor() ;

/// @brief Method NextFrameAsync, addr 0xb5d8a28, size 0x11c, virtual false, abstract: false, final false
static inline ::UnityEngine::Awaitable* NextFrameAsync(::System::Threading::CancellationToken  cancellationToken) ;

/// [RequiredByNativeCode]
/// @brief Method OnDelayedCallManagerCleared, addr 0xb5d90ac, size 0x78, virtual false, abstract: false, final false
static inline void OnDelayedCallManagerCleared() ;

/// [RequiredByNativeCode]
/// @brief Method OnEndOfFrame, addr 0xb5d94d0, size 0x60, virtual false, abstract: false, final false
static inline void OnEndOfFrame() ;

/// [RequiredByNativeCode]
/// @brief Method OnUpdate, addr 0xb5d9194, size 0x60, virtual false, abstract: false, final false
static inline void OnUpdate() ;

/// @brief Method PropagateExceptionAndRelease, addr 0xb5da124, size 0x3a0, virtual false, abstract: false, final false
inline void PropagateExceptionAndRelease() ;

/// @brief Method RaiseManagedCompletion, addr 0xb5d9fbc, size 0x168, virtual false, abstract: false, final false
inline void RaiseManagedCompletion() ;

/// @brief Method RaiseManagedCompletion, addr 0xb5d9c58, size 0x194, virtual false, abstract: false, final false
inline void RaiseManagedCompletion(::System::Exception*  exception) ;

/// [FreeFunction("Scripting::Awaitables::Release", IsThreadSafe = true)]
/// @brief Method ReleaseNativeAwaitable, addr 0xb5d88ac, size 0x3c, virtual false, abstract: false, final false
static inline void ReleaseNativeAwaitable(::System::IntPtr  nativeAwaitable) ;

/// [RequiredByNativeCode(GenerateProxy = true)]
/// @brief Method RunContinuation, addr 0xb5d8724, size 0x144, virtual false, abstract: false, final false
inline void RunContinuation() ;

/// @brief Method RunOrScheduleContinuation, addr 0xb5d9dec, size 0x164, virtual false, abstract: false, final false
inline void RunOrScheduleContinuation(::GlobalNamespace::Awaitable_AwaiterCompletionThreadAffinity  awaiterCompletionThreadAffinity, ::System::Action*  continuation) ;

/// @brief Method SetContinuation, addr 0xb5daf0c, size 0x174, virtual false, abstract: false, final false
inline void SetContinuation(::System::Action*  continuation) ;

/// [RequiredByNativeCode(GenerateProxy = true)]
/// @brief Method SetExceptionFromNative, addr 0xb5d85e8, size 0x13c, virtual false, abstract: false, final false
inline void SetExceptionFromNative(::System::Exception*  ex) ;

/// @brief Method SetSynchronizationContext, addr 0xb5d9530, size 0x7c, virtual false, abstract: false, final false
static inline void SetSynchronizationContext(::UnityEngine::UnitySynchronizationContext*  synchronizationContext) ;

/// @brief Method System.Collections.IEnumerator.MoveNext, addr 0xb5db080, size 0x34, virtual true, abstract: false, final true
inline bool System_Collections_IEnumerator_MoveNext() ;

/// @brief Method System.Collections.IEnumerator.Reset, addr 0xb5db0b4, size 0x4, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current, addr 0xb5db0b8, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// @brief Method ThrowIfNotMainThread, addr 0xb5d8960, size 0xc8, virtual false, abstract: false, final false
static inline void ThrowIfNotMainThread() ;

/// [FreeFunction("Scripting::Awaitables::WaitForSecondsAwaitable")]
/// @brief Method WaitForScondsInternal, addr 0xb5d8f40, size 0x38, virtual false, abstract: false, final false
static inline ::System::IntPtr WaitForScondsInternal(float_t  seconds) ;

/// @brief Method WaitForSecondsAsync, addr 0xb5d8e74, size 0xcc, virtual false, abstract: false, final false
static inline ::UnityEngine::Awaitable* WaitForSecondsAsync(float_t  seconds, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WireupCancellation, addr 0xb5d97f4, size 0x37c, virtual false, abstract: false, final false
static inline void WireupCancellation(::UnityEngine::Awaitable*  awaitable, ::System::Threading::CancellationToken  cancellationToken) ;

/// [FreeFunction("Scripting::Awaitables::WireupNextFrameAndEndOfFrameCallbacks")]
/// @brief Method WireupNextFrameAndEndOfFrameCallbacks, addr 0xb5d9084, size 0x28, virtual false, abstract: false, final false
static inline void WireupNextFrameAndEndOfFrameCallbacks() ;

constexpr ::System::Nullable_1<::System::Threading::CancellationTokenRegistration> const& __cordl_internal_get__cancelTokenRegistration() const;

constexpr ::System::Nullable_1<::System::Threading::CancellationTokenRegistration>& __cordl_internal_get__cancelTokenRegistration() ;

constexpr ::GlobalNamespace::Awaitable_AwaiterCompletionThreadAffinity const& __cordl_internal_get__completionThreadAffinity() const;

constexpr ::GlobalNamespace::Awaitable_AwaiterCompletionThreadAffinity& __cordl_internal_get__completionThreadAffinity() ;

constexpr ::System::Action* const& __cordl_internal_get__continuation() const;

constexpr ::System::Action*& __cordl_internal_get__continuation() ;

constexpr ::System::Runtime::ExceptionServices::ExceptionDispatchInfo* const& __cordl_internal_get__exceptionToRethrow() const;

constexpr ::System::Runtime::ExceptionServices::ExceptionDispatchInfo*& __cordl_internal_get__exceptionToRethrow() ;

constexpr ::GlobalNamespace::Awaitable_AwaitableHandle const& __cordl_internal_get__handle() const;

constexpr ::GlobalNamespace::Awaitable_AwaitableHandle& __cordl_internal_get__handle() ;

constexpr bool const& __cordl_internal_get__managedAwaitableDone() const;

constexpr bool& __cordl_internal_get__managedAwaitableDone() ;

constexpr ::UnityEngine::Awaitable_DoubleBufferedAwaitableList* const& __cordl_internal_get__managedCompletionQueue() const;

constexpr ::UnityEngine::Awaitable_DoubleBufferedAwaitableList*& __cordl_internal_get__managedCompletionQueue() ;

constexpr ::System::Threading::SpinLock const& __cordl_internal_get__spinLock() const;

constexpr ::System::Threading::SpinLock& __cordl_internal_get__spinLock() ;

constexpr void __cordl_internal_set__cancelTokenRegistration(::System::Nullable_1<::System::Threading::CancellationTokenRegistration>  value) ;

constexpr void __cordl_internal_set__completionThreadAffinity(::GlobalNamespace::Awaitable_AwaiterCompletionThreadAffinity  value) ;

constexpr void __cordl_internal_set__continuation(::System::Action*  value) ;

constexpr void __cordl_internal_set__exceptionToRethrow(::System::Runtime::ExceptionServices::ExceptionDispatchInfo*  value) ;

constexpr void __cordl_internal_set__handle(::GlobalNamespace::Awaitable_AwaitableHandle  value) ;

constexpr void __cordl_internal_set__managedAwaitableDone(bool  value) ;

constexpr void __cordl_internal_set__managedCompletionQueue(::UnityEngine::Awaitable_DoubleBufferedAwaitableList*  value) ;

constexpr void __cordl_internal_set__spinLock(::System::Threading::SpinLock  value) ;

/// @brief Method .ctor, addr 0xb5d964c, size 0xc, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Awaitable_DoubleBufferedAwaitableList* getStaticF__endOfFrameAwaitables() ;

static inline int32_t getStaticF__mainThreadId() ;

static inline bool getStaticF__nextFrameAndEndOfFrameWiredUp() ;

static inline ::System::Threading::CancellationTokenRegistration getStaticF__nextFrameAndEndOfFrameWiredUpCTRegistration() ;

static inline ::UnityEngine::Awaitable_DoubleBufferedAwaitableList* getStaticF__nextFrameAwaitables() ;

static inline ::System::Threading::ThreadLocal_1<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Awaitable*>*>* getStaticF__pool() ;

static inline ::System::Threading::SynchronizationContext* getStaticF__synchronizationContext() ;

/// @brief Method get_IsCompleted, addr 0xb5daaa8, size 0x128, virtual false, abstract: false, final false
inline bool get_IsCompleted() ;

/// @brief Method get_IsCompletedNoLock, addr 0xb5da7b8, size 0x194, virtual false, abstract: false, final false
inline bool get_IsCompletedNoLock() ;

/// @brief Method get_IsDettachedOrCompleted, addr 0xb5dabd0, size 0x298, virtual false, abstract: false, final false
inline bool get_IsDettachedOrCompleted() ;

/// @brief Method get_IsLogicallyCompletedNoLock, addr 0xb5da94c, size 0x15c, virtual false, abstract: false, final false
inline bool get_IsLogicallyCompletedNoLock() ;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

static inline void setStaticF__endOfFrameAwaitables(::UnityEngine::Awaitable_DoubleBufferedAwaitableList*  value) ;

static inline void setStaticF__mainThreadId(int32_t  value) ;

static inline void setStaticF__nextFrameAndEndOfFrameWiredUp(bool  value) ;

static inline void setStaticF__nextFrameAndEndOfFrameWiredUpCTRegistration(::System::Threading::CancellationTokenRegistration  value) ;

static inline void setStaticF__nextFrameAwaitables(::UnityEngine::Awaitable_DoubleBufferedAwaitableList*  value) ;

static inline void setStaticF__pool(::System::Threading::ThreadLocal_1<::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Awaitable*>*>*  value) ;

static inline void setStaticF__synchronizationContext(::System::Threading::SynchronizationContext*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Awaitable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Awaitable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Awaitable(Awaitable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Awaitable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Awaitable(Awaitable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15055};

/// @brief Field _spinLock, offset: 0x10, size: 0x4, def value: None
 ::System::Threading::SpinLock  ____spinLock;

/// @brief Field _handle, offset: 0x18, size: 0x8, def value: None
 ::GlobalNamespace::Awaitable_AwaitableHandle  ____handle;

/// @brief Field _exceptionToRethrow, offset: 0x20, size: 0x8, def value: None
 ::System::Runtime::ExceptionServices::ExceptionDispatchInfo*  ____exceptionToRethrow;

/// @brief Field _managedAwaitableDone, offset: 0x28, size: 0x1, def value: None
 bool  ____managedAwaitableDone;

/// @brief Field _completionThreadAffinity, offset: 0x2c, size: 0x4, def value: None
 ::GlobalNamespace::Awaitable_AwaiterCompletionThreadAffinity  ____completionThreadAffinity;

/// @brief Field _continuation, offset: 0x30, size: 0x8, def value: None
 ::System::Action*  ____continuation;

/// @brief Field _cancelTokenRegistration, offset: 0x38, size: 0x10, def value: None
 ::System::Nullable_1<::System::Threading::CancellationTokenRegistration>  ____cancelTokenRegistration;

/// @brief Field _managedCompletionQueue, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::Awaitable_DoubleBufferedAwaitableList*  ____managedCompletionQueue;

/// @brief Size padding 0x60 - 0x50 = 0x10, packed as 0x10
 uint8_t  _cordl_size_padding[0x10];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Awaitable, ____spinLock) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Awaitable, ____handle) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Awaitable, ____exceptionToRethrow) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Awaitable, ____managedAwaitableDone) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Awaitable, ____completionThreadAffinity) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Awaitable, ____continuation) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Awaitable, ____cancelTokenRegistration) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Awaitable, ____managedCompletionQueue) == 0x48, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Awaitable) == 0x60, "Size mismatch!");

} // namespace end def UnityEngine
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Awaitable/<>c
class CORDL_TYPE Awaitable___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::Awaitable___c*  __9;

/// @brief Field <>9__51_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__51_0, put=setStaticF___9__51_0)) ::System::Action_1<::System::Object*>*  __9__51_0;

/// @brief Field <>9__76_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__76_1, put=setStaticF___9__76_1)) ::System::Func_1<::UnityEngine::Awaitable*>*  __9__76_1;

static inline ::UnityEngine::Awaitable___c* New_ctor() ;

/// @brief Method <WireupCancellation>b__51_0, addr 0xb5db464, size 0x80, virtual false, abstract: false, final false
inline void _WireupCancellation_b__51_0(::System::Object*  coroutine) ;

/// @brief Method <.cctor>b__76_0, addr 0xb5db4e4, size 0x13c, virtual false, abstract: false, final false
inline ::UnityEngine::Pool::ObjectPool_1<::UnityEngine::Awaitable*>* __cctor_b__76_0() ;

/// @brief Method <.cctor>b__76_1, addr 0xb5db620, size 0x58, virtual false, abstract: false, final false
inline ::UnityEngine::Awaitable* __cctor_b__76_1() ;

/// @brief Method .ctor, addr 0xb5db45c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Awaitable___c* getStaticF___9() ;

static inline ::System::Action_1<::System::Object*>* getStaticF___9__51_0() ;

static inline ::System::Func_1<::UnityEngine::Awaitable*>* getStaticF___9__76_1() ;

static inline void setStaticF___9(::UnityEngine::Awaitable___c*  value) ;

static inline void setStaticF___9__51_0(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF___9__76_1(::System::Func_1<::UnityEngine::Awaitable*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Awaitable___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Awaitable___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Awaitable___c(Awaitable___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Awaitable___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Awaitable___c(Awaitable___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15054};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Awaitable___c) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Awaitable/DoubleBufferedAwaitableList
class CORDL_TYPE Awaitable_DoubleBufferedAwaitableList : public ::System::Object {
public:
// Declarations
using __c__DisplayClass4_0 = ::UnityEngine::DoubleBufferedAwaitableList_Awaitable___c__DisplayClass4_0;

/// @brief Field _awaitables, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__awaitables, put=__cordl_internal_set__awaitables)) ::System::Collections::Generic::List_1<::GlobalNamespace::Awaitable_AwaitableAndFrameIndex>*  _awaitables;

/// @brief Field _scratch, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__scratch, put=__cordl_internal_set__scratch)) ::System::Collections::Generic::List_1<::GlobalNamespace::Awaitable_AwaitableAndFrameIndex>*  _scratch;

/// @brief Method Add, addr 0xb5d8da0, size 0xd4, virtual false, abstract: false, final false
inline void Add(::UnityEngine::Awaitable*  item, int32_t  frameIndex) ;

/// @brief Method Clear, addr 0xb5d9124, size 0x70, virtual false, abstract: false, final false
inline void Clear() ;

static inline ::UnityEngine::Awaitable_DoubleBufferedAwaitableList* New_ctor() ;

/// @brief Method Remove, addr 0xb5da6d4, size 0xe4, virtual false, abstract: false, final false
inline void Remove(::UnityEngine::Awaitable*  item) ;

/// @brief Method SwapAndComplete, addr 0xb5d91f4, size 0x2dc, virtual false, abstract: false, final false
inline void SwapAndComplete() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::Awaitable_AwaitableAndFrameIndex>* const& __cordl_internal_get__awaitables() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::Awaitable_AwaitableAndFrameIndex>*& __cordl_internal_get__awaitables() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::Awaitable_AwaitableAndFrameIndex>* const& __cordl_internal_get__scratch() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::Awaitable_AwaitableAndFrameIndex>*& __cordl_internal_get__scratch() ;

constexpr void __cordl_internal_set__awaitables(::System::Collections::Generic::List_1<::GlobalNamespace::Awaitable_AwaitableAndFrameIndex>*  value) ;

constexpr void __cordl_internal_set__scratch(::System::Collections::Generic::List_1<::GlobalNamespace::Awaitable_AwaitableAndFrameIndex>*  value) ;

/// @brief Method .ctor, addr 0xb5db248, size 0xac, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Awaitable_DoubleBufferedAwaitableList() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Awaitable_DoubleBufferedAwaitableList", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Awaitable_DoubleBufferedAwaitableList(Awaitable_DoubleBufferedAwaitableList && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Awaitable_DoubleBufferedAwaitableList", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Awaitable_DoubleBufferedAwaitableList(Awaitable_DoubleBufferedAwaitableList const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15052};

/// @brief Field _awaitables, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::Awaitable_AwaitableAndFrameIndex>*  ____awaitables;

/// @brief Field _scratch, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::Awaitable_AwaitableAndFrameIndex>*  ____scratch;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Awaitable_DoubleBufferedAwaitableList, ____awaitables) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Awaitable_DoubleBufferedAwaitableList, ____scratch) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Awaitable_DoubleBufferedAwaitableList) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Awaitable/DoubleBufferedAwaitableList/<>c__DisplayClass4_0
class CORDL_TYPE DoubleBufferedAwaitableList_Awaitable___c__DisplayClass4_0 : public ::System::Object {
public:
// Declarations
/// @brief Field item, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_item, put=__cordl_internal_set_item)) ::UnityEngine::Awaitable*  item;

static inline ::UnityEngine::DoubleBufferedAwaitableList_Awaitable___c__DisplayClass4_0* New_ctor() ;

/// @brief Method <Remove>b__0, addr 0xb5db378, size 0x10, virtual false, abstract: false, final false
inline bool _Remove_b__0(::GlobalNamespace::Awaitable_AwaitableAndFrameIndex  x) ;

constexpr ::UnityEngine::Awaitable* const& __cordl_internal_get_item() const;

constexpr ::UnityEngine::Awaitable*& __cordl_internal_get_item() ;

constexpr void __cordl_internal_set_item(::UnityEngine::Awaitable*  value) ;

/// @brief Method .ctor, addr 0xb5db370, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DoubleBufferedAwaitableList_Awaitable___c__DisplayClass4_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DoubleBufferedAwaitableList_Awaitable___c__DisplayClass4_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
DoubleBufferedAwaitableList_Awaitable___c__DisplayClass4_0(DoubleBufferedAwaitableList_Awaitable___c__DisplayClass4_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DoubleBufferedAwaitableList_Awaitable___c__DisplayClass4_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
DoubleBufferedAwaitableList_Awaitable___c__DisplayClass4_0(DoubleBufferedAwaitableList_Awaitable___c__DisplayClass4_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15051};

/// @brief Field item, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::Awaitable*  ___item;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::DoubleBufferedAwaitableList_Awaitable___c__DisplayClass4_0, ___item) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::DoubleBufferedAwaitableList_Awaitable___c__DisplayClass4_0) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine
// Dependencies 
namespace UnityEngine {
// cpp template
template<typename T>
// Is value type: false
// CS Name: UnityEngine.Awaitable/AwaitableAsyncMethodBuilder`1/IStateMachineBox<T>
class CORDL_TYPE AwaitableAsyncMethodBuilder_1_Awaitable_IStateMachineBox {
public:
// Declarations
/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "AwaitableAsyncMethodBuilder_1_Awaitable_IStateMachineBox", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AwaitableAsyncMethodBuilder_1_Awaitable_IStateMachineBox(AwaitableAsyncMethodBuilder_1_Awaitable_IStateMachineBox const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15047};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
// Dependencies 
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Awaitable/AwaitableAsyncMethodBuilder/IStateMachineBox
class CORDL_TYPE AwaitableAsyncMethodBuilder_Awaitable_IStateMachineBox {
public:
// Declarations
/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "AwaitableAsyncMethodBuilder_Awaitable_IStateMachineBox", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AwaitableAsyncMethodBuilder_Awaitable_IStateMachineBox(AwaitableAsyncMethodBuilder_Awaitable_IStateMachineBox const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15045};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
