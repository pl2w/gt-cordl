#pragma once
// IWYU pragma private; include "Cysharp/Threading/Tasks/AddressablesAsyncExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Cysharp/Threading/Tasks/zzzz__AsyncUnit_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__TaskPool_1_def.hpp"
#include "Cysharp/Threading/Tasks/zzzz__UniTaskCompletionSourceCore_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_1_def.hpp"
#include "UnityEngine/ResourceManagement/AsyncOperations/zzzz__AsyncOperationHandle_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AddressablesAsyncExtensions)
namespace Cysharp::Threading::Tasks {
template<typename T>
class AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource_1;
}
namespace Cysharp::Threading::Tasks {
class AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class AsyncOperationHandleConfiguredSource_1_AddressablesAsyncExtensions___c;
}
namespace Cysharp::Threading::Tasks {
class AsyncOperationHandleConfiguredSource_AddressablesAsyncExtensions___c;
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
struct PlayerLoopTiming;
}
namespace Cysharp::Threading::Tasks {
struct UniTaskStatus;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
struct UniTask_1;
}
namespace Cysharp::Threading::Tasks {
struct UniTask;
}
namespace GlobalNamespace {
struct AddressablesAsyncExtensions_AsyncOperationHandleAwaiter;
}
namespace GlobalNamespace {
template<typename T>
struct UniTask_1_Awaiter;
}
namespace GlobalNamespace {
struct UniTask_Awaiter;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T>
class IProgress_1;
}
namespace System {
class Object;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
template<typename TObject>
struct AsyncOperationHandle_1;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct AsyncOperationHandle;
}
// Forward declare root types
namespace Cysharp::Threading::Tasks {
class AddressablesAsyncExtensions;
}
namespace Cysharp::Threading::Tasks {
class AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource_1;
}
namespace Cysharp::Threading::Tasks {
template<typename T>
class AsyncOperationHandleConfiguredSource_1_AddressablesAsyncExtensions___c;
}
namespace Cysharp::Threading::Tasks {
class AsyncOperationHandleConfiguredSource_AddressablesAsyncExtensions___c;
}
// Write type traits
MARK_REF_T(::Cysharp::Threading::Tasks::AddressablesAsyncExtensions*);
MARK_REF_T(::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource*);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource_1);
MARK_GEN_REF_T_PTR(::Cysharp::Threading::Tasks::AsyncOperationHandleConfiguredSource_1_AddressablesAsyncExtensions___c);
MARK_REF_T(::Cysharp::Threading::Tasks::AsyncOperationHandleConfiguredSource_AddressablesAsyncExtensions___c*);
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::AddressablesAsyncExtensions*, "Cysharp.Threading.Tasks", "AddressablesAsyncExtensions");
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource*, "Cysharp.Threading.Tasks", "AddressablesAsyncExtensions/AsyncOperationHandleConfiguredSource");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource_1, "Cysharp.Threading.Tasks", "AddressablesAsyncExtensions/AsyncOperationHandleConfiguredSource`1");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Cysharp::Threading::Tasks::AsyncOperationHandleConfiguredSource_1_AddressablesAsyncExtensions___c, "Cysharp.Threading.Tasks", "AddressablesAsyncExtensions/AsyncOperationHandleConfiguredSource`1/<>c");
DEFINE_IL2CPP_CLASS(::Cysharp::Threading::Tasks::AsyncOperationHandleConfiguredSource_AddressablesAsyncExtensions___c*, "Cysharp.Threading.Tasks", "AddressablesAsyncExtensions/AsyncOperationHandleConfiguredSource/<>c");
// [Extension]
// Dependencies System.Object
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.AddressablesAsyncExtensions
class CORDL_TYPE AddressablesAsyncExtensions : public ::System::Object {
public:
// Declarations
using AsyncOperationHandleConfiguredSource = ::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource;

template<typename T>
using AsyncOperationHandleConfiguredSource_1 = ::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource_1<T>;

using AsyncOperationHandleAwaiter = ::GlobalNamespace::AddressablesAsyncExtensions_AsyncOperationHandleAwaiter;

/// [Extension]
/// @brief Method GetAwaiter, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::GlobalNamespace::UniTask_1_Awaiter<T> GetAwaiter(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<T>  handle) ;

/// [Extension]
/// @brief Method GetAwaiter, addr 0xade2150, size 0x98, virtual false, abstract: false, final false
static inline ::GlobalNamespace::UniTask_Awaiter GetAwaiter(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  handle) ;

/// [Extension]
/// @brief Method ToUniTask, addr 0xade21e8, size 0x1c4, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask ToUniTask(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  handle, ::System::IProgress_1<float_t>*  progress, ::Cysharp::Threading::Tasks::PlayerLoopTiming  timing, ::System::Threading::CancellationToken  cancellationToken) ;

/// [Extension]
/// @brief Method ToUniTask, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::Cysharp::Threading::Tasks::UniTask_1<T> ToUniTask(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<T>  handle, ::System::IProgress_1<float_t>*  progress, ::Cysharp::Threading::Tasks::PlayerLoopTiming  timing, ::System::Threading::CancellationToken  cancellationToken) ;

/// [Extension]
/// @brief Method WithCancellation, addr 0xade23ac, size 0x38, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::UniTask WithCancellation(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  handle, ::System::Threading::CancellationToken  cancellationToken) ;

/// [Extension]
/// @brief Method WithCancellation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::Cysharp::Threading::Tasks::UniTask_1<T> WithCancellation(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<T>  handle, ::System::Threading::CancellationToken  cancellationToken) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AddressablesAsyncExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AddressablesAsyncExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AddressablesAsyncExtensions(AddressablesAsyncExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AddressablesAsyncExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AddressablesAsyncExtensions(AddressablesAsyncExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32970};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::AddressablesAsyncExtensions) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
// Dependencies Cysharp.Threading.Tasks.TaskPool`1<T>, Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<TResult>, System.Object, System.Threading.CancellationToken, UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle`1<TObject>
namespace Cysharp::Threading::Tasks {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.AddressablesAsyncExtensions/AsyncOperationHandleConfiguredSource`1<T>
class CORDL_TYPE AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource_1 : public ::System::Object {
public:
// Declarations
using __c = ::Cysharp::Threading::Tasks::AsyncOperationHandleConfiguredSource_1_AddressablesAsyncExtensions___c<T>;

 __declspec(property(get=get_NextNode)) ::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource_1<T>*  NextNode;

/// @brief Field cancellationToken, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_cancellationToken, put=__cordl_internal_set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field completed, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_completed, put=__cordl_internal_set_completed)) bool  completed;

/// @brief Field continuationAction, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_continuationAction, put=__cordl_internal_set_continuationAction)) ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<T>>*  continuationAction;

/// @brief Field core, offset 0x50, size 0x28 
 __declspec(property(get=__cordl_internal_get_core, put=__cordl_internal_set_core)) ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<T>  core;

/// @brief Field handle, offset 0x20, size 0x18 
 __declspec(property(get=__cordl_internal_get_handle, put=__cordl_internal_set_handle)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<T>  handle;

/// @brief Field nextNode, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_nextNode, put=__cordl_internal_set_nextNode)) ::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource_1<T>*  nextNode;

/// @brief Field pool, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_pool, put=setStaticF_pool)) ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource_1<T>*>  pool;

/// @brief Field progress, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_progress, put=__cordl_internal_set_progress)) ::System::IProgress_1<float_t>*  progress;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
constexpr operator  ::Cysharp::Threading::Tasks::IPlayerLoopItem*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource_1<T>*>"
constexpr operator  ::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource_1<T>*>*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource_1<T>"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource_1<T>*() noexcept;

/// @brief Method Continuation, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Continuation(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<T>  argHandle) ;

/// @brief Method Create, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IUniTaskSource_1<T>* Create(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<T>  handle, ::Cysharp::Threading::Tasks::PlayerLoopTiming  timing, ::System::IProgress_1<float_t>*  progress, ::System::Threading::CancellationToken  cancellationToken, ::by_ref<int16_t>  token) ;

/// @brief Method Cysharp.Threading.Tasks.IUniTaskSource.GetResult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void Cysharp_Threading_Tasks_IUniTaskSource_GetResult(int16_t  token) ;

/// @brief Method GetResult, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline T GetResult(int16_t  token) ;

/// @brief Method GetStatus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(int16_t  token) ;

/// @brief Method MoveNext, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource_1<T>* New_ctor() ;

/// @brief Method OnCompleted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline void OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token) ;

/// @brief Method TryReturn, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool TryReturn() ;

/// @brief Method UnsafeGetStatus, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus() ;

constexpr ::System::Threading::CancellationToken const& __cordl_internal_get_cancellationToken() const;

constexpr ::System::Threading::CancellationToken& __cordl_internal_get_cancellationToken() ;

constexpr bool const& __cordl_internal_get_completed() const;

constexpr bool& __cordl_internal_get_completed() ;

constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<T>>* const& __cordl_internal_get_continuationAction() const;

constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<T>>*& __cordl_internal_get_continuationAction() ;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<T> const& __cordl_internal_get_core() const;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<T>& __cordl_internal_get_core() ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<T> const& __cordl_internal_get_handle() const;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<T>& __cordl_internal_get_handle() ;

constexpr ::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource_1<T>* const& __cordl_internal_get_nextNode() const;

constexpr ::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource_1<T>*& __cordl_internal_get_nextNode() ;

constexpr ::System::IProgress_1<float_t>* const& __cordl_internal_get_progress() const;

constexpr ::System::IProgress_1<float_t>*& __cordl_internal_get_progress() ;

constexpr void __cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr void __cordl_internal_set_completed(bool  value) ;

constexpr void __cordl_internal_set_continuationAction(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<T>>*  value) ;

constexpr void __cordl_internal_set_core(::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<T>  value) ;

constexpr void __cordl_internal_set_handle(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<T>  value) ;

constexpr void __cordl_internal_set_nextNode(::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource_1<T>*  value) ;

constexpr void __cordl_internal_set_progress(::System::IProgress_1<float_t>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource_1<T>*> getStaticF_pool() ;

/// @brief Method get_NextNode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::by_ref<::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource_1<T>*> get_NextNode() ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
constexpr ::Cysharp::Threading::Tasks::IPlayerLoopItem* i___Cysharp__Threading__Tasks__IPlayerLoopItem() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource_1<T>*>"
constexpr ::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource_1<T>*>* i___Cysharp__Threading__Tasks__ITaskPoolNode_1___Cysharp__Threading__Tasks__AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource_1_T___() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource_1<T>"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource_1<T>* i___Cysharp__Threading__Tasks__IUniTaskSource_1_T_() noexcept;

static inline void setStaticF_pool(::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource_1<T>*>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource_1(AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource_1(AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32969};

/// @brief Field nextNode, offset: 0x10, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource_1<T>*  ___nextNode;

/// @brief Field continuationAction, offset: 0x18, size: 0x8, def value: None
 ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<T>>*  ___continuationAction;

/// @brief Field handle, offset: 0x20, size: 0x18, def value: None
 ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle_1<T>  ___handle;

/// @brief Field cancellationToken, offset: 0x38, size: 0x8, def value: None
 ::System::Threading::CancellationToken  ___cancellationToken;

/// @brief Field progress, offset: 0x40, size: 0x8, def value: None
 ::System::IProgress_1<float_t>*  ___progress;

/// @brief Field completed, offset: 0x48, size: 0x1, def value: None
 bool  ___completed;

/// @brief Field core, offset: 0x50, size: 0x28, def value: None
 ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<T>  ___core;

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
// CS Name: Cysharp.Threading.Tasks.AddressablesAsyncExtensions/AsyncOperationHandleConfiguredSource`1/<>c<T>
class CORDL_TYPE AsyncOperationHandleConfiguredSource_1_AddressablesAsyncExtensions___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Cysharp::Threading::Tasks::AsyncOperationHandleConfiguredSource_1_AddressablesAsyncExtensions___c<T>*  __9;

static inline ::Cysharp::Threading::Tasks::AsyncOperationHandleConfiguredSource_1_AddressablesAsyncExtensions___c<T>* New_ctor() ;

/// @brief Method <.cctor>b__4_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t __cctor_b__4_0() ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Threading::Tasks::AsyncOperationHandleConfiguredSource_1_AddressablesAsyncExtensions___c<T>* getStaticF___9() ;

static inline void setStaticF___9(::Cysharp::Threading::Tasks::AsyncOperationHandleConfiguredSource_1_AddressablesAsyncExtensions___c<T>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AsyncOperationHandleConfiguredSource_1_AddressablesAsyncExtensions___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AsyncOperationHandleConfiguredSource_1_AddressablesAsyncExtensions___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AsyncOperationHandleConfiguredSource_1_AddressablesAsyncExtensions___c(AsyncOperationHandleConfiguredSource_1_AddressablesAsyncExtensions___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AsyncOperationHandleConfiguredSource_1_AddressablesAsyncExtensions___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AsyncOperationHandleConfiguredSource_1_AddressablesAsyncExtensions___c(AsyncOperationHandleConfiguredSource_1_AddressablesAsyncExtensions___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32968};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Cysharp::Threading::Tasks
// Dependencies Cysharp.Threading.Tasks.AsyncUnit, Cysharp.Threading.Tasks.TaskPool`1<T>, Cysharp.Threading.Tasks.UniTaskCompletionSourceCore`1<TResult>, System.Object, System.Threading.CancellationToken, UnityEngine.ResourceManagement.AsyncOperations.AsyncOperationHandle
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.AddressablesAsyncExtensions/AsyncOperationHandleConfiguredSource
class CORDL_TYPE AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource : public ::System::Object {
public:
// Declarations
using __c = ::Cysharp::Threading::Tasks::AsyncOperationHandleConfiguredSource_AddressablesAsyncExtensions___c;

 __declspec(property(get=get_NextNode)) ::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource*  NextNode;

/// @brief Field cancellationToken, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_cancellationToken, put=__cordl_internal_set_cancellationToken)) ::System::Threading::CancellationToken  cancellationToken;

/// @brief Field completed, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_completed, put=__cordl_internal_set_completed)) bool  completed;

/// @brief Field continuationAction, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_continuationAction, put=__cordl_internal_set_continuationAction)) ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  continuationAction;

/// @brief Field core, offset 0x50, size 0x28 
 __declspec(property(get=__cordl_internal_get_core, put=__cordl_internal_set_core)) ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::Cysharp::Threading::Tasks::AsyncUnit>  core;

/// @brief Field handle, offset 0x20, size 0x18 
 __declspec(property(get=__cordl_internal_get_handle, put=__cordl_internal_set_handle)) ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  handle;

/// @brief Field nextNode, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_nextNode, put=__cordl_internal_set_nextNode)) ::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource*  nextNode;

/// @brief Field pool, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_pool, put=setStaticF_pool)) ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource*>  pool;

/// @brief Field progress, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_progress, put=__cordl_internal_set_progress)) ::System::IProgress_1<float_t>*  progress;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
constexpr operator  ::Cysharp::Threading::Tasks::IPlayerLoopItem*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource*>"
constexpr operator  ::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource*>*() noexcept;

/// @brief Convert operator to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr operator  ::Cysharp::Threading::Tasks::IUniTaskSource*() noexcept;

/// @brief Method Continuation, addr 0xade2944, size 0x154, virtual false, abstract: false, final false
inline void Continuation(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  _) ;

/// @brief Method Create, addr 0xade23e4, size 0x1f8, virtual false, abstract: false, final false
static inline ::Cysharp::Threading::Tasks::IUniTaskSource* Create(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  handle, ::Cysharp::Threading::Tasks::PlayerLoopTiming  timing, ::System::IProgress_1<float_t>*  progress, ::System::Threading::CancellationToken  cancellationToken, ::by_ref<int16_t>  token) ;

/// @brief Method GetResult, addr 0xade2b54, size 0x58, virtual true, abstract: false, final true
inline void GetResult(int16_t  token) ;

/// @brief Method GetStatus, addr 0xade2bac, size 0x58, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus GetStatus(int16_t  token) ;

/// @brief Method MoveNext, addr 0xade2d2c, size 0x158, virtual true, abstract: false, final true
inline bool MoveNext() ;

static inline ::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource* New_ctor() ;

/// @brief Method OnCompleted, addr 0xade2cbc, size 0x70, virtual true, abstract: false, final true
inline void OnCompleted(::System::Action_1<::System::Object*>*  continuation, ::System::Object*  state, int16_t  token) ;

/// @brief Method TryReturn, addr 0xade2a98, size 0xbc, virtual false, abstract: false, final false
inline bool TryReturn() ;

/// @brief Method UnsafeGetStatus, addr 0xade2c04, size 0xb8, virtual true, abstract: false, final true
inline ::Cysharp::Threading::Tasks::UniTaskStatus UnsafeGetStatus() ;

constexpr ::System::Threading::CancellationToken const& __cordl_internal_get_cancellationToken() const;

constexpr ::System::Threading::CancellationToken& __cordl_internal_get_cancellationToken() ;

constexpr bool const& __cordl_internal_get_completed() const;

constexpr bool& __cordl_internal_get_completed() ;

constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>* const& __cordl_internal_get_continuationAction() const;

constexpr ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*& __cordl_internal_get_continuationAction() ;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::Cysharp::Threading::Tasks::AsyncUnit> const& __cordl_internal_get_core() const;

constexpr ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::Cysharp::Threading::Tasks::AsyncUnit>& __cordl_internal_get_core() ;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle const& __cordl_internal_get_handle() const;

constexpr ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle& __cordl_internal_get_handle() ;

constexpr ::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource* const& __cordl_internal_get_nextNode() const;

constexpr ::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource*& __cordl_internal_get_nextNode() ;

constexpr ::System::IProgress_1<float_t>* const& __cordl_internal_get_progress() const;

constexpr ::System::IProgress_1<float_t>*& __cordl_internal_get_progress() ;

constexpr void __cordl_internal_set_cancellationToken(::System::Threading::CancellationToken  value) ;

constexpr void __cordl_internal_set_completed(bool  value) ;

constexpr void __cordl_internal_set_continuationAction(::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  value) ;

constexpr void __cordl_internal_set_core(::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::Cysharp::Threading::Tasks::AsyncUnit>  value) ;

constexpr void __cordl_internal_set_handle(::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  value) ;

constexpr void __cordl_internal_set_nextNode(::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource*  value) ;

constexpr void __cordl_internal_set_progress(::System::IProgress_1<float_t>*  value) ;

/// @brief Method .ctor, addr 0xade28b4, size 0x90, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource*> getStaticF_pool() ;

/// @brief Method get_NextNode, addr 0xade2794, size 0x8, virtual true, abstract: false, final true
inline ::by_ref<::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource*> get_NextNode() ;

/// @brief Convert to "::Cysharp::Threading::Tasks::IPlayerLoopItem"
constexpr ::Cysharp::Threading::Tasks::IPlayerLoopItem* i___Cysharp__Threading__Tasks__IPlayerLoopItem() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource*>"
constexpr ::Cysharp::Threading::Tasks::ITaskPoolNode_1<::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource*>* i___Cysharp__Threading__Tasks__ITaskPoolNode_1___Cysharp__Threading__Tasks__AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource__() noexcept;

/// @brief Convert to "::Cysharp::Threading::Tasks::IUniTaskSource"
constexpr ::Cysharp::Threading::Tasks::IUniTaskSource* i___Cysharp__Threading__Tasks__IUniTaskSource() noexcept;

static inline void setStaticF_pool(::Cysharp::Threading::Tasks::TaskPool_1<::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource*>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource(AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource(AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32967};

/// @brief Field nextNode, offset: 0x10, size: 0x8, def value: None
 ::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource*  ___nextNode;

/// @brief Field continuationAction, offset: 0x18, size: 0x8, def value: None
 ::System::Action_1<::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle>*  ___continuationAction;

/// @brief Field handle, offset: 0x20, size: 0x18, def value: None
 ::UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle  ___handle;

/// @brief Field cancellationToken, offset: 0x38, size: 0x8, def value: None
 ::System::Threading::CancellationToken  ___cancellationToken;

/// @brief Field progress, offset: 0x40, size: 0x8, def value: None
 ::System::IProgress_1<float_t>*  ___progress;

/// @brief Field completed, offset: 0x48, size: 0x1, def value: None
 bool  ___completed;

/// @brief Field core, offset: 0x50, size: 0x28, def value: None
 ::Cysharp::Threading::Tasks::UniTaskCompletionSourceCore_1<::Cysharp::Threading::Tasks::AsyncUnit>  ___core;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource, ___nextNode) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource, ___continuationAction) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource, ___handle) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource, ___cancellationToken) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource, ___progress) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource, ___completed) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource, ___core) == 0x50, "Offset mismatch!");

static_assert(sizeof(::Cysharp::Threading::Tasks::AddressablesAsyncExtensions_AsyncOperationHandleConfiguredSource) == 0x78, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
// [CompilerGenerated]
// Dependencies System.Object
namespace Cysharp::Threading::Tasks {
// Is value type: false
// CS Name: Cysharp.Threading.Tasks.AddressablesAsyncExtensions/AsyncOperationHandleConfiguredSource/<>c
class CORDL_TYPE AsyncOperationHandleConfiguredSource_AddressablesAsyncExtensions___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Cysharp::Threading::Tasks::AsyncOperationHandleConfiguredSource_AddressablesAsyncExtensions___c*  __9;

static inline ::Cysharp::Threading::Tasks::AsyncOperationHandleConfiguredSource_AddressablesAsyncExtensions___c* New_ctor() ;

/// @brief Method <.cctor>b__4_0, addr 0xade2ef4, size 0x1b8, virtual false, abstract: false, final false
inline int32_t __cctor_b__4_0() ;

/// @brief Method .ctor, addr 0xade2eec, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Cysharp::Threading::Tasks::AsyncOperationHandleConfiguredSource_AddressablesAsyncExtensions___c* getStaticF___9() ;

static inline void setStaticF___9(::Cysharp::Threading::Tasks::AsyncOperationHandleConfiguredSource_AddressablesAsyncExtensions___c*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AsyncOperationHandleConfiguredSource_AddressablesAsyncExtensions___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AsyncOperationHandleConfiguredSource_AddressablesAsyncExtensions___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AsyncOperationHandleConfiguredSource_AddressablesAsyncExtensions___c(AsyncOperationHandleConfiguredSource_AddressablesAsyncExtensions___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AsyncOperationHandleConfiguredSource_AddressablesAsyncExtensions___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AsyncOperationHandleConfiguredSource_AddressablesAsyncExtensions___c(AsyncOperationHandleConfiguredSource_AddressablesAsyncExtensions___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32966};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Cysharp::Threading::Tasks::AsyncOperationHandleConfiguredSource_AddressablesAsyncExtensions___c) == 0x10, "Size mismatch!");

} // namespace end def Cysharp::Threading::Tasks
