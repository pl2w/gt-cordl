#pragma once
// IWYU pragma private; include "Pathfinding/PathProcessor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/zzzz__PathHandler_def.hpp"
#include "System/Threading/zzzz__Thread_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PathProcessor)
namespace GlobalNamespace {
class AstarPath;
}
namespace GlobalNamespace {
struct PathProcessor_GraphUpdateLock;
}
namespace Pathfinding {
class GraphNode;
}
namespace Pathfinding {
class IPathInternals;
}
namespace Pathfinding {
class PathHandler;
}
namespace Pathfinding {
class PathProcessor__CalculatePaths_d__36;
}
namespace Pathfinding {
class PathProcessor___c__DisplayClass24_0;
}
namespace Pathfinding {
class PathReturnQueue;
}
namespace Pathfinding {
class Path;
}
namespace Pathfinding {
class ThreadControlQueue;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class Stack_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Action;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine::Profiling {
class CustomSampler;
}
// Forward declare root types
namespace Pathfinding {
class PathProcessor;
}
namespace Pathfinding {
class PathProcessor__CalculatePaths_d__36;
}
namespace Pathfinding {
class PathProcessor___c__DisplayClass24_0;
}
// Write type traits
MARK_REF_T(::Pathfinding::PathProcessor*);
MARK_REF_T(::Pathfinding::PathProcessor__CalculatePaths_d__36*);
MARK_REF_T(::Pathfinding::PathProcessor___c__DisplayClass24_0*);
DEFINE_IL2CPP_CLASS(::Pathfinding::PathProcessor*, "Pathfinding", "PathProcessor");
DEFINE_IL2CPP_CLASS(::Pathfinding::PathProcessor__CalculatePaths_d__36*, "Pathfinding", "PathProcessor/<CalculatePaths>d__36");
DEFINE_IL2CPP_CLASS(::Pathfinding::PathProcessor___c__DisplayClass24_0*, "Pathfinding", "PathProcessor/<>c__DisplayClass24_0");
// Dependencies Pathfinding.PathHandler, System.Object, System.Threading.Thread
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.PathProcessor
class CORDL_TYPE PathProcessor : public ::System::Object {
public:
// Declarations
using GraphUpdateLock = ::GlobalNamespace::PathProcessor_GraphUpdateLock;

using _CalculatePaths_d__36 = ::Pathfinding::PathProcessor__CalculatePaths_d__36;

using __c__DisplayClass24_0 = ::Pathfinding::PathProcessor___c__DisplayClass24_0;

 __declspec(property(get=get_IsUsingMultithreading)) bool  IsUsingMultithreading;

 __declspec(property(get=get_NumThreads)) int32_t  NumThreads;

/// @brief Field OnPathPostSearch, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnPathPostSearch, put=__cordl_internal_set_OnPathPostSearch)) ::System::Action_1<::Pathfinding::Path*>*  OnPathPostSearch;

/// @brief Field OnPathPreSearch, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnPathPreSearch, put=__cordl_internal_set_OnPathPreSearch)) ::System::Action_1<::Pathfinding::Path*>*  OnPathPreSearch;

/// @brief Field OnQueueUnblocked, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnQueueUnblocked, put=__cordl_internal_set_OnQueueUnblocked)) ::System::Action*  OnQueueUnblocked;

/// @brief Field astar, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_astar, put=__cordl_internal_set_astar)) ::UnityW<::GlobalNamespace::AstarPath>  astar;

/// @brief Field locks, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_locks, put=__cordl_internal_set_locks)) ::System::Collections::Generic::List_1<int32_t>*  locks;

/// @brief Field nextLockID, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_nextLockID, put=__cordl_internal_set_nextLockID)) int32_t  nextLockID;

/// @brief Field nextNodeIndex, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_nextNodeIndex, put=__cordl_internal_set_nextNodeIndex)) int32_t  nextNodeIndex;

/// @brief Field nodeIndexPool, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_nodeIndexPool, put=__cordl_internal_set_nodeIndexPool)) ::System::Collections::Generic::Stack_1<int32_t>*  nodeIndexPool;

/// @brief Field pathHandlers, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_pathHandlers, put=__cordl_internal_set_pathHandlers)) ::ArrayW<::Pathfinding::PathHandler*>  pathHandlers;

/// @brief Field profilingSampler, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_profilingSampler, put=__cordl_internal_set_profilingSampler)) ::UnityEngine::Profiling::CustomSampler*  profilingSampler;

/// @brief Field queue, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_queue, put=__cordl_internal_set_queue)) ::Pathfinding::ThreadControlQueue*  queue;

/// @brief Field returnQueue, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_returnQueue, put=__cordl_internal_set_returnQueue)) ::Pathfinding::PathReturnQueue*  returnQueue;

/// @brief Field threadCoroutine, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_threadCoroutine, put=__cordl_internal_set_threadCoroutine)) ::System::Collections::IEnumerator*  threadCoroutine;

/// @brief Field threads, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_threads, put=__cordl_internal_set_threads)) ::ArrayW<::System::Threading::Thread*>  threads;

/// @brief Method AbortThreads, addr 0x5e64a64, size 0x88, virtual false, abstract: false, final false
inline void AbortThreads() ;

/// [IteratorStateMachine(typeof(Pathfinding.PathProcessor::<CalculatePaths>d__36))]
/// @brief Method CalculatePaths, addr 0x5e63dac, size 0x88, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* CalculatePaths(::Pathfinding::PathHandler*  pathHandler) ;

/// @brief Method CalculatePathsThreaded, addr 0x5e64f0c, size 0x870, virtual false, abstract: false, final false
inline void CalculatePathsThreaded(::Pathfinding::PathHandler*  pathHandler) ;

/// @brief Method DestroyNode, addr 0x5e64e10, size 0xbc, virtual false, abstract: false, final false
inline void DestroyNode(::Pathfinding::GraphNode*  node) ;

/// @brief Method GetNewNodeIndex, addr 0x5e64aec, size 0x80, virtual false, abstract: false, final false
inline int32_t GetNewNodeIndex() ;

/// @brief Method InitializeNode, addr 0x5e64b6c, size 0xd0, virtual false, abstract: false, final false
inline void InitializeNode(::Pathfinding::GraphNode*  node) ;

/// @brief Method JoinThreads, addr 0x5e6491c, size 0x148, virtual false, abstract: false, final false
inline void JoinThreads() ;

/// @brief Method Lock, addr 0x5e63e34, size 0xf0, virtual false, abstract: false, final false
inline int32_t Lock(bool  block) ;

static inline ::Pathfinding::PathProcessor* New_ctor(::GlobalNamespace::AstarPath*  astar, ::Pathfinding::PathReturnQueue*  returnQueue, int32_t  processors, bool  multithreaded) ;

/// @brief Method PausePathfinding, addr 0x5e644e0, size 0x2c, virtual false, abstract: false, final false
inline ::GlobalNamespace::PathProcessor_GraphUpdateLock PausePathfinding(bool  block) ;

/// @brief Method TickNonMultithreaded, addr 0x5e63ff8, size 0x244, virtual false, abstract: false, final false
inline void TickNonMultithreaded() ;

/// @brief Method Unlock, addr 0x5e64320, size 0xf0, virtual false, abstract: false, final false
inline void Unlock(int32_t  id) ;

constexpr ::System::Action_1<::Pathfinding::Path*>* const& __cordl_internal_get_OnPathPostSearch() const;

constexpr ::System::Action_1<::Pathfinding::Path*>*& __cordl_internal_get_OnPathPostSearch() ;

constexpr ::System::Action_1<::Pathfinding::Path*>* const& __cordl_internal_get_OnPathPreSearch() const;

constexpr ::System::Action_1<::Pathfinding::Path*>*& __cordl_internal_get_OnPathPreSearch() ;

constexpr ::System::Action* const& __cordl_internal_get_OnQueueUnblocked() const;

constexpr ::System::Action*& __cordl_internal_get_OnQueueUnblocked() ;

constexpr ::UnityW<::GlobalNamespace::AstarPath> const& __cordl_internal_get_astar() const;

constexpr ::UnityW<::GlobalNamespace::AstarPath>& __cordl_internal_get_astar() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_locks() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_locks() ;

constexpr int32_t const& __cordl_internal_get_nextLockID() const;

constexpr int32_t& __cordl_internal_get_nextLockID() ;

constexpr int32_t const& __cordl_internal_get_nextNodeIndex() const;

constexpr int32_t& __cordl_internal_get_nextNodeIndex() ;

constexpr ::System::Collections::Generic::Stack_1<int32_t>* const& __cordl_internal_get_nodeIndexPool() const;

constexpr ::System::Collections::Generic::Stack_1<int32_t>*& __cordl_internal_get_nodeIndexPool() ;

constexpr ::ArrayW<::Pathfinding::PathHandler*> const& __cordl_internal_get_pathHandlers() const;

constexpr ::ArrayW<::Pathfinding::PathHandler*>& __cordl_internal_get_pathHandlers() ;

constexpr ::UnityEngine::Profiling::CustomSampler* const& __cordl_internal_get_profilingSampler() const;

constexpr ::UnityEngine::Profiling::CustomSampler*& __cordl_internal_get_profilingSampler() ;

constexpr ::Pathfinding::ThreadControlQueue* const& __cordl_internal_get_queue() const;

constexpr ::Pathfinding::ThreadControlQueue*& __cordl_internal_get_queue() ;

constexpr ::Pathfinding::PathReturnQueue* const& __cordl_internal_get_returnQueue() const;

constexpr ::Pathfinding::PathReturnQueue*& __cordl_internal_get_returnQueue() ;

constexpr ::System::Collections::IEnumerator* const& __cordl_internal_get_threadCoroutine() const;

constexpr ::System::Collections::IEnumerator*& __cordl_internal_get_threadCoroutine() ;

constexpr ::ArrayW<::System::Threading::Thread*> const& __cordl_internal_get_threads() const;

constexpr ::ArrayW<::System::Threading::Thread*>& __cordl_internal_get_threads() ;

constexpr void __cordl_internal_set_OnPathPostSearch(::System::Action_1<::Pathfinding::Path*>*  value) ;

constexpr void __cordl_internal_set_OnPathPreSearch(::System::Action_1<::Pathfinding::Path*>*  value) ;

constexpr void __cordl_internal_set_OnQueueUnblocked(::System::Action*  value) ;

constexpr void __cordl_internal_set_astar(::UnityW<::GlobalNamespace::AstarPath>  value) ;

constexpr void __cordl_internal_set_locks(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_nextLockID(int32_t  value) ;

constexpr void __cordl_internal_set_nextNodeIndex(int32_t  value) ;

constexpr void __cordl_internal_set_nodeIndexPool(::System::Collections::Generic::Stack_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_pathHandlers(::ArrayW<::Pathfinding::PathHandler*>  value) ;

constexpr void __cordl_internal_set_profilingSampler(::UnityEngine::Profiling::CustomSampler*  value) ;

constexpr void __cordl_internal_set_queue(::Pathfinding::ThreadControlQueue*  value) ;

constexpr void __cordl_internal_set_returnQueue(::Pathfinding::PathReturnQueue*  value) ;

constexpr void __cordl_internal_set_threadCoroutine(::System::Collections::IEnumerator*  value) ;

constexpr void __cordl_internal_set_threads(::ArrayW<::System::Threading::Thread*>  value) ;

/// @brief Method .ctor, addr 0x5e63670, size 0x580, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::AstarPath*  astar, ::Pathfinding::PathReturnQueue*  returnQueue, int32_t  processors, bool  multithreaded) ;

/// [CompilerGenerated]
/// @brief Method add_OnPathPostSearch, addr 0x5e633b0, size 0xb0, virtual false, abstract: false, final false
inline void add_OnPathPostSearch(::System::Action_1<::Pathfinding::Path*>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnPathPreSearch, addr 0x5e63250, size 0xb0, virtual false, abstract: false, final false
inline void add_OnPathPreSearch(::System::Action_1<::Pathfinding::Path*>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnQueueUnblocked, addr 0x5e63510, size 0x9c, virtual false, abstract: false, final false
inline void add_OnQueueUnblocked(::System::Action*  value) ;

/// @brief Method get_IsUsingMultithreading, addr 0x5e63660, size 0x10, virtual false, abstract: false, final false
inline bool get_IsUsingMultithreading() ;

/// @brief Method get_NumThreads, addr 0x5e63648, size 0x18, virtual false, abstract: false, final false
inline int32_t get_NumThreads() ;

/// [CompilerGenerated]
/// @brief Method remove_OnPathPostSearch, addr 0x5e63460, size 0xb0, virtual false, abstract: false, final false
inline void remove_OnPathPostSearch(::System::Action_1<::Pathfinding::Path*>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnPathPreSearch, addr 0x5e63300, size 0xb0, virtual false, abstract: false, final false
inline void remove_OnPathPreSearch(::System::Action_1<::Pathfinding::Path*>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnQueueUnblocked, addr 0x5e635ac, size 0x9c, virtual false, abstract: false, final false
inline void remove_OnQueueUnblocked(::System::Action*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PathProcessor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PathProcessor", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PathProcessor(PathProcessor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PathProcessor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PathProcessor(PathProcessor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21263};

/// [CompilerGenerated]
/// @brief Field OnPathPreSearch, offset: 0x10, size: 0x8, def value: None
 ::System::Action_1<::Pathfinding::Path*>*  ___OnPathPreSearch;

/// [CompilerGenerated]
/// @brief Field OnPathPostSearch, offset: 0x18, size: 0x8, def value: None
 ::System::Action_1<::Pathfinding::Path*>*  ___OnPathPostSearch;

/// [CompilerGenerated]
/// @brief Field OnQueueUnblocked, offset: 0x20, size: 0x8, def value: None
 ::System::Action*  ___OnQueueUnblocked;

/// @brief Field queue, offset: 0x28, size: 0x8, def value: None
 ::Pathfinding::ThreadControlQueue*  ___queue;

/// @brief Field astar, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AstarPath>  ___astar;

/// @brief Field returnQueue, offset: 0x38, size: 0x8, def value: None
 ::Pathfinding::PathReturnQueue*  ___returnQueue;

/// @brief Field pathHandlers, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::Pathfinding::PathHandler*>  ___pathHandlers;

/// @brief Field threads, offset: 0x48, size: 0x8, def value: None
 ::ArrayW<::System::Threading::Thread*>  ___threads;

/// @brief Field threadCoroutine, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::IEnumerator*  ___threadCoroutine;

/// @brief Field nextNodeIndex, offset: 0x58, size: 0x4, def value: None
 int32_t  ___nextNodeIndex;

/// @brief Field nodeIndexPool, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::Stack_1<int32_t>*  ___nodeIndexPool;

/// @brief Field locks, offset: 0x68, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ___locks;

/// @brief Field nextLockID, offset: 0x70, size: 0x4, def value: None
 int32_t  ___nextLockID;

/// @brief Field profilingSampler, offset: 0x78, size: 0x8, def value: None
 ::UnityEngine::Profiling::CustomSampler*  ___profilingSampler;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::PathProcessor, ___OnPathPreSearch) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::PathProcessor, ___OnPathPostSearch) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::PathProcessor, ___OnQueueUnblocked) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::PathProcessor, ___queue) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::PathProcessor, ___astar) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::PathProcessor, ___returnQueue) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::PathProcessor, ___pathHandlers) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::PathProcessor, ___threads) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::PathProcessor, ___threadCoroutine) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::PathProcessor, ___nextNodeIndex) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::PathProcessor, ___nodeIndexPool) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::PathProcessor, ___locks) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::PathProcessor, ___nextLockID) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::PathProcessor, ___profilingSampler) == 0x78, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::PathProcessor) == 0x80, "Size mismatch!");

} // namespace end def Pathfinding
// [CompilerGenerated]
// Dependencies System.Object
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.PathProcessor/<CalculatePaths>d__36
class CORDL_TYPE PathProcessor__CalculatePaths_d__36 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Pathfinding::PathProcessor*  __4__this;

/// @brief Field <blockedBefore>5__5, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get__blockedBefore_5__5, put=__cordl_internal_set__blockedBefore_5__5)) bool  _blockedBefore_5__5;

/// @brief Field <ip>5__6, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__ip_5__6, put=__cordl_internal_set__ip_5__6)) ::Pathfinding::IPathInternals*  _ip_5__6;

/// @brief Field <maxTicks>5__2, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__maxTicks_5__2, put=__cordl_internal_set__maxTicks_5__2)) int64_t  _maxTicks_5__2;

/// @brief Field <p>5__4, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__p_5__4, put=__cordl_internal_set__p_5__4)) ::Pathfinding::Path*  _p_5__4;

/// @brief Field <targetTick>5__3, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__targetTick_5__3, put=__cordl_internal_set__targetTick_5__3)) int64_t  _targetTick_5__3;

/// @brief Field <totalTicks>5__7, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__totalTicks_5__7, put=__cordl_internal_set__totalTicks_5__7)) int64_t  _totalTicks_5__7;

/// @brief Field pathHandler, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_pathHandler, put=__cordl_internal_set_pathHandler)) ::Pathfinding::PathHandler*  pathHandler;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5e65d6c, size 0x8c4, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Pathfinding::PathProcessor__CalculatePaths_d__36* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x5e66630, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5e66638, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5e66670, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5e65d68, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::Pathfinding::PathProcessor* const& __cordl_internal_get___4__this() const;

constexpr ::Pathfinding::PathProcessor*& __cordl_internal_get___4__this() ;

constexpr bool const& __cordl_internal_get__blockedBefore_5__5() const;

constexpr bool& __cordl_internal_get__blockedBefore_5__5() ;

constexpr ::Pathfinding::IPathInternals* const& __cordl_internal_get__ip_5__6() const;

constexpr ::Pathfinding::IPathInternals*& __cordl_internal_get__ip_5__6() ;

constexpr int64_t const& __cordl_internal_get__maxTicks_5__2() const;

constexpr int64_t& __cordl_internal_get__maxTicks_5__2() ;

constexpr ::Pathfinding::Path* const& __cordl_internal_get__p_5__4() const;

constexpr ::Pathfinding::Path*& __cordl_internal_get__p_5__4() ;

constexpr int64_t const& __cordl_internal_get__targetTick_5__3() const;

constexpr int64_t& __cordl_internal_get__targetTick_5__3() ;

constexpr int64_t const& __cordl_internal_get__totalTicks_5__7() const;

constexpr int64_t& __cordl_internal_get__totalTicks_5__7() ;

constexpr ::Pathfinding::PathHandler* const& __cordl_internal_get_pathHandler() const;

constexpr ::Pathfinding::PathHandler*& __cordl_internal_get_pathHandler() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::Pathfinding::PathProcessor*  value) ;

constexpr void __cordl_internal_set__blockedBefore_5__5(bool  value) ;

constexpr void __cordl_internal_set__ip_5__6(::Pathfinding::IPathInternals*  value) ;

constexpr void __cordl_internal_set__maxTicks_5__2(int64_t  value) ;

constexpr void __cordl_internal_set__p_5__4(::Pathfinding::Path*  value) ;

constexpr void __cordl_internal_set__targetTick_5__3(int64_t  value) ;

constexpr void __cordl_internal_set__totalTicks_5__7(int64_t  value) ;

constexpr void __cordl_internal_set_pathHandler(::Pathfinding::PathHandler*  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5e65c9c, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PathProcessor__CalculatePaths_d__36() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PathProcessor__CalculatePaths_d__36", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PathProcessor__CalculatePaths_d__36(PathProcessor__CalculatePaths_d__36 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PathProcessor__CalculatePaths_d__36", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PathProcessor__CalculatePaths_d__36(PathProcessor__CalculatePaths_d__36 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21262};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Pathfinding::PathProcessor*  _____4__this;

/// @brief Field pathHandler, offset: 0x28, size: 0x8, def value: None
 ::Pathfinding::PathHandler*  ___pathHandler;

/// @brief Field <maxTicks>5__2, offset: 0x30, size: 0x8, def value: None
 int64_t  ____maxTicks_5__2;

/// @brief Field <targetTick>5__3, offset: 0x38, size: 0x8, def value: None
 int64_t  ____targetTick_5__3;

/// @brief Field <p>5__4, offset: 0x40, size: 0x8, def value: None
 ::Pathfinding::Path*  ____p_5__4;

/// @brief Field <blockedBefore>5__5, offset: 0x48, size: 0x1, def value: None
 bool  ____blockedBefore_5__5;

/// @brief Field <ip>5__6, offset: 0x50, size: 0x8, def value: None
 ::Pathfinding::IPathInternals*  ____ip_5__6;

/// @brief Field <totalTicks>5__7, offset: 0x58, size: 0x8, def value: None
 int64_t  ____totalTicks_5__7;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::PathProcessor__CalculatePaths_d__36, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::PathProcessor__CalculatePaths_d__36, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::PathProcessor__CalculatePaths_d__36, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::PathProcessor__CalculatePaths_d__36, ___pathHandler) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::PathProcessor__CalculatePaths_d__36, ____maxTicks_5__2) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::PathProcessor__CalculatePaths_d__36, ____targetTick_5__3) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::PathProcessor__CalculatePaths_d__36, ____p_5__4) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::PathProcessor__CalculatePaths_d__36, ____blockedBefore_5__5) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::PathProcessor__CalculatePaths_d__36, ____ip_5__6) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::PathProcessor__CalculatePaths_d__36, ____totalTicks_5__7) == 0x58, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::PathProcessor__CalculatePaths_d__36) == 0x60, "Size mismatch!");

} // namespace end def Pathfinding
// [CompilerGenerated]
// Dependencies System.Object
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.PathProcessor/<>c__DisplayClass24_0
class CORDL_TYPE PathProcessor___c__DisplayClass24_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Pathfinding::PathProcessor*  __4__this;

/// @brief Field pathHandler, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_pathHandler, put=__cordl_internal_set_pathHandler)) ::Pathfinding::PathHandler*  pathHandler;

static inline ::Pathfinding::PathProcessor___c__DisplayClass24_0* New_ctor() ;

constexpr ::Pathfinding::PathProcessor* const& __cordl_internal_get___4__this() const;

constexpr ::Pathfinding::PathProcessor*& __cordl_internal_get___4__this() ;

constexpr ::Pathfinding::PathHandler* const& __cordl_internal_get_pathHandler() const;

constexpr ::Pathfinding::PathHandler*& __cordl_internal_get_pathHandler() ;

constexpr void __cordl_internal_set___4__this(::Pathfinding::PathProcessor*  value) ;

constexpr void __cordl_internal_set_pathHandler(::Pathfinding::PathHandler*  value) ;

/// @brief Method <.ctor>b__0, addr 0x5e65d4c, size 0x1c, virtual false, abstract: false, final false
inline void __ctor_b__0() ;

/// @brief Method .ctor, addr 0x5e63da4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PathProcessor___c__DisplayClass24_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PathProcessor___c__DisplayClass24_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PathProcessor___c__DisplayClass24_0(PathProcessor___c__DisplayClass24_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PathProcessor___c__DisplayClass24_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PathProcessor___c__DisplayClass24_0(PathProcessor___c__DisplayClass24_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21261};

/// @brief Field pathHandler, offset: 0x10, size: 0x8, def value: None
 ::Pathfinding::PathHandler*  ___pathHandler;

/// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
 ::Pathfinding::PathProcessor*  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::PathProcessor___c__DisplayClass24_0, ___pathHandler) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::PathProcessor___c__DisplayClass24_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::PathProcessor___c__DisplayClass24_0) == 0x20, "Size mismatch!");

} // namespace end def Pathfinding
