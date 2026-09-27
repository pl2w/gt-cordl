#pragma once
// IWYU pragma private; include "System/Threading/SemaphoreSlim.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(SemaphoreSlim)
namespace GlobalNamespace {
struct SemaphoreSlim__WaitUntilCountOrTimeoutAsync_d__32;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System::Threading {
struct CancellationToken;
}
namespace System::Threading {
class IThreadPoolWorkItem;
}
namespace System::Threading {
class ManualResetEvent;
}
namespace System::Threading {
class SemaphoreSlim_TaskNode;
}
namespace System::Threading {
class ThreadAbortException;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Threading {
class SemaphoreSlim;
}
namespace System::Threading {
class SemaphoreSlim_TaskNode;
}
// Write type traits
MARK_REF_T(::System::Threading::SemaphoreSlim*);
MARK_REF_T(::System::Threading::SemaphoreSlim_TaskNode*);
DEFINE_IL2CPP_CLASS(::System::Threading::SemaphoreSlim*, "System.Threading", "SemaphoreSlim");
DEFINE_IL2CPP_CLASS(::System::Threading::SemaphoreSlim_TaskNode*, "System.Threading", "SemaphoreSlim/TaskNode");
// [ComVisible(false)]
// [DebuggerDisplay("Current Count = {m_currentCount}")]
// Dependencies System.Object
namespace System::Threading {
// Is value type: false
// CS Name: System.Threading.SemaphoreSlim
class CORDL_TYPE SemaphoreSlim : public ::System::Object {
public:
// Declarations
using _WaitUntilCountOrTimeoutAsync_d__32 = ::GlobalNamespace::SemaphoreSlim__WaitUntilCountOrTimeoutAsync_d__32;

using TaskNode = ::System::Threading::SemaphoreSlim_TaskNode;

/// @brief Field m_asyncHead, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_asyncHead, put=__cordl_internal_set_m_asyncHead)) ::System::Threading::SemaphoreSlim_TaskNode*  m_asyncHead;

/// @brief Field m_asyncTail, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_asyncTail, put=__cordl_internal_set_m_asyncTail)) ::System::Threading::SemaphoreSlim_TaskNode*  m_asyncTail;

/// @brief Field m_currentCount, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_currentCount, put=__cordl_internal_set_m_currentCount)) int32_t  m_currentCount;

/// @brief Field m_lockObj, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_lockObj, put=__cordl_internal_set_m_lockObj)) ::System::Object*  m_lockObj;

/// @brief Field m_maxCount, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_maxCount, put=__cordl_internal_set_m_maxCount)) int32_t  m_maxCount;

/// @brief Field m_waitCount, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_waitCount, put=__cordl_internal_set_m_waitCount)) int32_t  m_waitCount;

/// @brief Field m_waitHandle, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_waitHandle, put=__cordl_internal_set_m_waitHandle)) ::System::Threading::ManualResetEvent*  m_waitHandle;

/// @brief Field s_cancellationTokenCanceledEventHandler, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_cancellationTokenCanceledEventHandler, put=setStaticF_s_cancellationTokenCanceledEventHandler)) ::System::Action_1<::System::Object*>*  s_cancellationTokenCanceledEventHandler;

/// @brief Field s_falseTask, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_falseTask, put=setStaticF_s_falseTask)) ::System::Threading::Tasks::Task_1<bool>*  s_falseTask;

/// @brief Field s_trueTask, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_trueTask, put=setStaticF_s_trueTask)) ::System::Threading::Tasks::Task_1<bool>*  s_trueTask;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method CancellationTokenCanceledEventHandler, addr 0xa349610, size 0x128, virtual false, abstract: false, final false
static inline void CancellationTokenCanceledEventHandler(::System::Object*  obj) ;

/// @brief Method CheckDispose, addr 0xa348a3c, size 0x74, virtual false, abstract: false, final false
inline void CheckDispose() ;

/// @brief Method CreateAndAddAsyncWaiter, addr 0xa348ec0, size 0xb0, virtual false, abstract: false, final false
inline ::System::Threading::SemaphoreSlim_TaskNode* CreateAndAddAsyncWaiter() ;

/// @brief Method Dispose, addr 0xa349508, size 0x6c, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0xa349574, size 0x9c, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method GetResourceString, addr 0xa3484d4, size 0x8, virtual false, abstract: false, final false
static inline ::StringW GetResourceString(::StringW  str) ;

static inline ::System::Threading::SemaphoreSlim* New_ctor(int32_t  initialCount, int32_t  maxCount) ;

/// @brief Method QueueWaiterTask, addr 0xa3494fc, size 0xc, virtual false, abstract: false, final false
static inline void QueueWaiterTask(::System::Threading::SemaphoreSlim_TaskNode*  waiterTask) ;

/// @brief Method Release, addr 0xa3491f4, size 0x8, virtual false, abstract: false, final false
inline int32_t Release() ;

/// @brief Method Release, addr 0xa3491fc, size 0x300, virtual false, abstract: false, final false
inline int32_t Release(int32_t  releaseCount) ;

/// @brief Method RemoveAsyncWaiter, addr 0xa34910c, size 0xe8, virtual false, abstract: false, final false
inline bool RemoveAsyncWaiter(::System::Threading::SemaphoreSlim_TaskNode*  task) ;

/// @brief Method Wait, addr 0xa348a34, size 0x8, virtual false, abstract: false, final false
inline bool Wait(int32_t  millisecondsTimeout) ;

/// @brief Method Wait, addr 0xa3484e8, size 0x54c, virtual false, abstract: false, final false
inline bool Wait(int32_t  millisecondsTimeout, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method Wait, addr 0xa3484dc, size 0xc, virtual false, abstract: false, final false
inline void Wait() ;

/// @brief Method WaitAsync, addr 0xa348eb4, size 0xc, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* WaitAsync() ;

/// @brief Method WaitAsync, addr 0xa348ab0, size 0x33c, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<bool>* WaitAsync(int32_t  millisecondsTimeout, ::System::Threading::CancellationToken  cancellationToken) ;

/// @brief Method WaitUntilCountOrTimeout, addr 0xa348dec, size 0xc8, virtual false, abstract: false, final false
inline bool WaitUntilCountOrTimeout(int32_t  millisecondsTimeout, uint32_t  startTime, ::System::Threading::CancellationToken  cancellationToken) ;

/// [AsyncStateMachine(typeof(System.Threading.SemaphoreSlim::<WaitUntilCountOrTimeoutAsync>d__32))]
/// @brief Method WaitUntilCountOrTimeoutAsync, addr 0xa348f70, size 0x154, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<bool>* WaitUntilCountOrTimeoutAsync(::System::Threading::SemaphoreSlim_TaskNode*  asyncWaiter, int32_t  millisecondsTimeout, ::System::Threading::CancellationToken  cancellationToken) ;

constexpr ::System::Threading::SemaphoreSlim_TaskNode* const& __cordl_internal_get_m_asyncHead() const;

constexpr ::System::Threading::SemaphoreSlim_TaskNode*& __cordl_internal_get_m_asyncHead() ;

constexpr ::System::Threading::SemaphoreSlim_TaskNode* const& __cordl_internal_get_m_asyncTail() const;

constexpr ::System::Threading::SemaphoreSlim_TaskNode*& __cordl_internal_get_m_asyncTail() ;

constexpr int32_t const& __cordl_internal_get_m_currentCount() const;

constexpr int32_t& __cordl_internal_get_m_currentCount() ;

constexpr ::System::Object* const& __cordl_internal_get_m_lockObj() const;

constexpr ::System::Object*& __cordl_internal_get_m_lockObj() ;

constexpr int32_t const& __cordl_internal_get_m_maxCount() const;

constexpr int32_t& __cordl_internal_get_m_maxCount() ;

constexpr int32_t const& __cordl_internal_get_m_waitCount() const;

constexpr int32_t& __cordl_internal_get_m_waitCount() ;

constexpr ::System::Threading::ManualResetEvent* const& __cordl_internal_get_m_waitHandle() const;

constexpr ::System::Threading::ManualResetEvent*& __cordl_internal_get_m_waitHandle() ;

constexpr void __cordl_internal_set_m_asyncHead(::System::Threading::SemaphoreSlim_TaskNode*  value) ;

constexpr void __cordl_internal_set_m_asyncTail(::System::Threading::SemaphoreSlim_TaskNode*  value) ;

constexpr void __cordl_internal_set_m_currentCount(int32_t  value) ;

constexpr void __cordl_internal_set_m_lockObj(::System::Object*  value) ;

constexpr void __cordl_internal_set_m_maxCount(int32_t  value) ;

constexpr void __cordl_internal_set_m_waitCount(int32_t  value) ;

constexpr void __cordl_internal_set_m_waitHandle(::System::Threading::ManualResetEvent*  value) ;

/// @brief Method .ctor, addr 0xa348344, size 0x190, virtual false, abstract: false, final false
inline void _ctor(int32_t  initialCount, int32_t  maxCount) ;

static inline ::System::Action_1<::System::Object*>* getStaticF_s_cancellationTokenCanceledEventHandler() ;

static inline ::System::Threading::Tasks::Task_1<bool>* getStaticF_s_falseTask() ;

static inline ::System::Threading::Tasks::Task_1<bool>* getStaticF_s_trueTask() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

static inline void setStaticF_s_cancellationTokenCanceledEventHandler(::System::Action_1<::System::Object*>*  value) ;

static inline void setStaticF_s_falseTask(::System::Threading::Tasks::Task_1<bool>*  value) ;

static inline void setStaticF_s_trueTask(::System::Threading::Tasks::Task_1<bool>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SemaphoreSlim() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SemaphoreSlim", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SemaphoreSlim(SemaphoreSlim && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SemaphoreSlim", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SemaphoreSlim(SemaphoreSlim const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5826};

/// @brief Field m_currentCount, offset: 0x10, size: 0x4, def value: None
 int32_t  ___m_currentCount;

/// @brief Field m_maxCount, offset: 0x14, size: 0x4, def value: None
 int32_t  ___m_maxCount;

/// @brief Field m_waitCount, offset: 0x18, size: 0x4, def value: None
 int32_t  ___m_waitCount;

/// @brief Field m_lockObj, offset: 0x20, size: 0x8, def value: None
 ::System::Object*  ___m_lockObj;

/// @brief Field m_waitHandle, offset: 0x28, size: 0x8, def value: None
 ::System::Threading::ManualResetEvent*  ___m_waitHandle;

/// @brief Field m_asyncHead, offset: 0x30, size: 0x8, def value: None
 ::System::Threading::SemaphoreSlim_TaskNode*  ___m_asyncHead;

/// @brief Field m_asyncTail, offset: 0x38, size: 0x8, def value: None
 ::System::Threading::SemaphoreSlim_TaskNode*  ___m_asyncTail;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Threading::SemaphoreSlim, ___m_currentCount) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Threading::SemaphoreSlim, ___m_maxCount) == 0x14, "Offset mismatch!");

static_assert(offsetof(::System::Threading::SemaphoreSlim, ___m_waitCount) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Threading::SemaphoreSlim, ___m_lockObj) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Threading::SemaphoreSlim, ___m_waitHandle) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Threading::SemaphoreSlim, ___m_asyncHead) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Threading::SemaphoreSlim, ___m_asyncTail) == 0x38, "Offset mismatch!");

static_assert(sizeof(::System::Threading::SemaphoreSlim) == 0x40, "Size mismatch!");

} // namespace end def System::Threading
// Dependencies System.Threading.Tasks.Task`1<TResult>
namespace System::Threading {
// Is value type: false
// CS Name: System.Threading.SemaphoreSlim/TaskNode
class CORDL_TYPE SemaphoreSlim_TaskNode : public ::System::Threading::Tasks::Task_1<bool> {
public:
// Declarations
/// @brief Field Next, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_Next, put=__cordl_internal_set_Next)) ::System::Threading::SemaphoreSlim_TaskNode*  Next;

/// @brief Field Prev, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_Prev, put=__cordl_internal_set_Prev)) ::System::Threading::SemaphoreSlim_TaskNode*  Prev;

/// @brief Convert operator to "::System::Threading::IThreadPoolWorkItem"
constexpr operator  ::System::Threading::IThreadPoolWorkItem*() noexcept;

static inline ::System::Threading::SemaphoreSlim_TaskNode* New_ctor() ;

/// @brief Method System.Threading.IThreadPoolWorkItem.ExecuteWorkItem, addr 0xa349878, size 0x4c, virtual true, abstract: false, final true
inline void System_Threading_IThreadPoolWorkItem_ExecuteWorkItem() ;

/// @brief Method System.Threading.IThreadPoolWorkItem.MarkAborted, addr 0xa3498c4, size 0x4, virtual true, abstract: false, final true
inline void System_Threading_IThreadPoolWorkItem_MarkAborted(::System::Threading::ThreadAbortException*  tae) ;

constexpr ::System::Threading::SemaphoreSlim_TaskNode* const& __cordl_internal_get_Next() const;

constexpr ::System::Threading::SemaphoreSlim_TaskNode*& __cordl_internal_get_Next() ;

constexpr ::System::Threading::SemaphoreSlim_TaskNode* const& __cordl_internal_get_Prev() const;

constexpr ::System::Threading::SemaphoreSlim_TaskNode*& __cordl_internal_get_Prev() ;

constexpr void __cordl_internal_set_Next(::System::Threading::SemaphoreSlim_TaskNode*  value) ;

constexpr void __cordl_internal_set_Prev(::System::Threading::SemaphoreSlim_TaskNode*  value) ;

/// @brief Method .ctor, addr 0xa3490c4, size 0x48, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Convert to "::System::Threading::IThreadPoolWorkItem"
constexpr ::System::Threading::IThreadPoolWorkItem* i___System__Threading__IThreadPoolWorkItem() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SemaphoreSlim_TaskNode() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SemaphoreSlim_TaskNode", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SemaphoreSlim_TaskNode(SemaphoreSlim_TaskNode && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SemaphoreSlim_TaskNode", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SemaphoreSlim_TaskNode(SemaphoreSlim_TaskNode const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{5824};

/// @brief Field Prev, offset: 0x58, size: 0x8, def value: None
 ::System::Threading::SemaphoreSlim_TaskNode*  ___Prev;

/// @brief Field Next, offset: 0x60, size: 0x8, def value: None
 ::System::Threading::SemaphoreSlim_TaskNode*  ___Next;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Threading::SemaphoreSlim_TaskNode, ___Prev) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Threading::SemaphoreSlim_TaskNode, ___Next) == 0x60, "Offset mismatch!");

static_assert(sizeof(::System::Threading::SemaphoreSlim_TaskNode) == 0x68, "Size mismatch!");

} // namespace end def System::Threading
