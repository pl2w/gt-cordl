#pragma once
// IWYU pragma private; include "Pathfinding/GraphUpdateProcessor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(GraphUpdateProcessor)
namespace GlobalNamespace {
class AstarPath;
}
namespace GlobalNamespace {
struct GraphUpdateProcessor_GUOSingle;
}
namespace GlobalNamespace {
struct GraphUpdateProcessor_GraphUpdateOrder;
}
namespace Pathfinding {
struct AstarWorkItem;
}
namespace Pathfinding {
class GraphUpdateObject;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace System::Threading {
class AutoResetEvent;
}
namespace System::Threading {
class ManualResetEvent;
}
namespace System::Threading {
class Thread;
}
namespace System {
class Action;
}
namespace UnityEngine::Profiling {
class CustomSampler;
}
// Forward declare root types
namespace Pathfinding {
class GraphUpdateProcessor;
}
// Write type traits
MARK_REF_T(::Pathfinding::GraphUpdateProcessor*);
DEFINE_IL2CPP_CLASS(::Pathfinding::GraphUpdateProcessor*, "Pathfinding", "GraphUpdateProcessor");
// Dependencies System.Object
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.GraphUpdateProcessor
class CORDL_TYPE GraphUpdateProcessor : public ::System::Object {
public:
// Declarations
using GUOSingle = ::GlobalNamespace::GraphUpdateProcessor_GUOSingle;

using GraphUpdateOrder = ::GlobalNamespace::GraphUpdateProcessor_GraphUpdateOrder;

 __declspec(property(get=get_IsAnyGraphUpdateInProgress)) bool  IsAnyGraphUpdateInProgress;

 __declspec(property(get=get_IsAnyGraphUpdateQueued)) bool  IsAnyGraphUpdateQueued;

/// @brief Field OnGraphsUpdated, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnGraphsUpdated, put=__cordl_internal_set_OnGraphsUpdated)) ::System::Action*  OnGraphsUpdated;

/// @brief Field anyGraphUpdateInProgress, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_anyGraphUpdateInProgress, put=__cordl_internal_set_anyGraphUpdateInProgress)) bool  anyGraphUpdateInProgress;

/// @brief Field astar, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_astar, put=__cordl_internal_set_astar)) ::UnityW<::GlobalNamespace::AstarPath>  astar;

/// @brief Field asyncGraphUpdatesComplete, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_asyncGraphUpdatesComplete, put=__cordl_internal_set_asyncGraphUpdatesComplete)) ::System::Threading::ManualResetEvent*  asyncGraphUpdatesComplete;

/// @brief Field asyncUpdateProfilingSampler, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_asyncUpdateProfilingSampler, put=__cordl_internal_set_asyncUpdateProfilingSampler)) ::UnityEngine::Profiling::CustomSampler*  asyncUpdateProfilingSampler;

/// @brief Field exitAsyncThread, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_exitAsyncThread, put=__cordl_internal_set_exitAsyncThread)) ::System::Threading::AutoResetEvent*  exitAsyncThread;

/// @brief Field graphUpdateAsyncEvent, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_graphUpdateAsyncEvent, put=__cordl_internal_set_graphUpdateAsyncEvent)) ::System::Threading::AutoResetEvent*  graphUpdateAsyncEvent;

/// @brief Field graphUpdateQueue, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_graphUpdateQueue, put=__cordl_internal_set_graphUpdateQueue)) ::System::Collections::Generic::Queue_1<::Pathfinding::GraphUpdateObject*>*  graphUpdateQueue;

/// @brief Field graphUpdateQueueAsync, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_graphUpdateQueueAsync, put=__cordl_internal_set_graphUpdateQueueAsync)) ::System::Collections::Generic::Queue_1<::GlobalNamespace::GraphUpdateProcessor_GUOSingle>*  graphUpdateQueueAsync;

/// @brief Field graphUpdateQueuePost, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_graphUpdateQueuePost, put=__cordl_internal_set_graphUpdateQueuePost)) ::System::Collections::Generic::Queue_1<::GlobalNamespace::GraphUpdateProcessor_GUOSingle>*  graphUpdateQueuePost;

/// @brief Field graphUpdateQueueRegular, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_graphUpdateQueueRegular, put=__cordl_internal_set_graphUpdateQueueRegular)) ::System::Collections::Generic::Queue_1<::GlobalNamespace::GraphUpdateProcessor_GUOSingle>*  graphUpdateQueueRegular;

/// @brief Field graphUpdateThread, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_graphUpdateThread, put=__cordl_internal_set_graphUpdateThread)) ::System::Threading::Thread*  graphUpdateThread;

/// @brief Method AddToQueue, addr 0x5e585a4, size 0x58, virtual false, abstract: false, final false
inline void AddToQueue(::Pathfinding::GraphUpdateObject*  ob) ;

/// @brief Method DisableMultithreading, addr 0x5e584d8, size 0xcc, virtual false, abstract: false, final false
inline void DisableMultithreading() ;

/// @brief Method EnableMultithreading, addr 0x5e58360, size 0x178, virtual false, abstract: false, final false
inline void EnableMultithreading() ;

/// @brief Method GetWorkItem, addr 0x5e58234, size 0xdc, virtual false, abstract: false, final false
inline ::Pathfinding::AstarWorkItem GetWorkItem() ;

static inline ::Pathfinding::GraphUpdateProcessor* New_ctor(::GlobalNamespace::AstarPath*  astar) ;

/// @brief Method ProcessGraphUpdates, addr 0x5e58b3c, size 0xdc, virtual false, abstract: false, final false
inline bool ProcessGraphUpdates(bool  force) ;

/// @brief Method ProcessGraphUpdatesAsync, addr 0x5e593ac, size 0x400, virtual false, abstract: false, final false
inline void ProcessGraphUpdatesAsync() ;

/// @brief Method ProcessPostUpdates, addr 0x5e58c18, size 0x29c, virtual false, abstract: false, final false
inline void ProcessPostUpdates() ;

/// @brief Method ProcessRegularUpdates, addr 0x5e58eb4, size 0x480, virtual false, abstract: false, final false
inline bool ProcessRegularUpdates(bool  force) ;

/// @brief Method QueueGraphUpdatesInternal, addr 0x5e585fc, size 0x540, virtual false, abstract: false, final false
inline void QueueGraphUpdatesInternal() ;

/// @brief Method StartAsyncUpdatesIfQueued, addr 0x5e59334, size 0x78, virtual false, abstract: false, final false
inline bool StartAsyncUpdatesIfQueued() ;

constexpr ::System::Action* const& __cordl_internal_get_OnGraphsUpdated() const;

constexpr ::System::Action*& __cordl_internal_get_OnGraphsUpdated() ;

constexpr bool const& __cordl_internal_get_anyGraphUpdateInProgress() const;

constexpr bool& __cordl_internal_get_anyGraphUpdateInProgress() ;

constexpr ::UnityW<::GlobalNamespace::AstarPath> const& __cordl_internal_get_astar() const;

constexpr ::UnityW<::GlobalNamespace::AstarPath>& __cordl_internal_get_astar() ;

constexpr ::System::Threading::ManualResetEvent* const& __cordl_internal_get_asyncGraphUpdatesComplete() const;

constexpr ::System::Threading::ManualResetEvent*& __cordl_internal_get_asyncGraphUpdatesComplete() ;

constexpr ::UnityEngine::Profiling::CustomSampler* const& __cordl_internal_get_asyncUpdateProfilingSampler() const;

constexpr ::UnityEngine::Profiling::CustomSampler*& __cordl_internal_get_asyncUpdateProfilingSampler() ;

constexpr ::System::Threading::AutoResetEvent* const& __cordl_internal_get_exitAsyncThread() const;

constexpr ::System::Threading::AutoResetEvent*& __cordl_internal_get_exitAsyncThread() ;

constexpr ::System::Threading::AutoResetEvent* const& __cordl_internal_get_graphUpdateAsyncEvent() const;

constexpr ::System::Threading::AutoResetEvent*& __cordl_internal_get_graphUpdateAsyncEvent() ;

constexpr ::System::Collections::Generic::Queue_1<::Pathfinding::GraphUpdateObject*>* const& __cordl_internal_get_graphUpdateQueue() const;

constexpr ::System::Collections::Generic::Queue_1<::Pathfinding::GraphUpdateObject*>*& __cordl_internal_get_graphUpdateQueue() ;

constexpr ::System::Collections::Generic::Queue_1<::GlobalNamespace::GraphUpdateProcessor_GUOSingle>* const& __cordl_internal_get_graphUpdateQueueAsync() const;

constexpr ::System::Collections::Generic::Queue_1<::GlobalNamespace::GraphUpdateProcessor_GUOSingle>*& __cordl_internal_get_graphUpdateQueueAsync() ;

constexpr ::System::Collections::Generic::Queue_1<::GlobalNamespace::GraphUpdateProcessor_GUOSingle>* const& __cordl_internal_get_graphUpdateQueuePost() const;

constexpr ::System::Collections::Generic::Queue_1<::GlobalNamespace::GraphUpdateProcessor_GUOSingle>*& __cordl_internal_get_graphUpdateQueuePost() ;

constexpr ::System::Collections::Generic::Queue_1<::GlobalNamespace::GraphUpdateProcessor_GUOSingle>* const& __cordl_internal_get_graphUpdateQueueRegular() const;

constexpr ::System::Collections::Generic::Queue_1<::GlobalNamespace::GraphUpdateProcessor_GUOSingle>*& __cordl_internal_get_graphUpdateQueueRegular() ;

constexpr ::System::Threading::Thread* const& __cordl_internal_get_graphUpdateThread() const;

constexpr ::System::Threading::Thread*& __cordl_internal_get_graphUpdateThread() ;

constexpr void __cordl_internal_set_OnGraphsUpdated(::System::Action*  value) ;

constexpr void __cordl_internal_set_anyGraphUpdateInProgress(bool  value) ;

constexpr void __cordl_internal_set_astar(::UnityW<::GlobalNamespace::AstarPath>  value) ;

constexpr void __cordl_internal_set_asyncGraphUpdatesComplete(::System::Threading::ManualResetEvent*  value) ;

constexpr void __cordl_internal_set_asyncUpdateProfilingSampler(::UnityEngine::Profiling::CustomSampler*  value) ;

constexpr void __cordl_internal_set_exitAsyncThread(::System::Threading::AutoResetEvent*  value) ;

constexpr void __cordl_internal_set_graphUpdateAsyncEvent(::System::Threading::AutoResetEvent*  value) ;

constexpr void __cordl_internal_set_graphUpdateQueue(::System::Collections::Generic::Queue_1<::Pathfinding::GraphUpdateObject*>*  value) ;

constexpr void __cordl_internal_set_graphUpdateQueueAsync(::System::Collections::Generic::Queue_1<::GlobalNamespace::GraphUpdateProcessor_GUOSingle>*  value) ;

constexpr void __cordl_internal_set_graphUpdateQueuePost(::System::Collections::Generic::Queue_1<::GlobalNamespace::GraphUpdateProcessor_GUOSingle>*  value) ;

constexpr void __cordl_internal_set_graphUpdateQueueRegular(::System::Collections::Generic::Queue_1<::GlobalNamespace::GraphUpdateProcessor_GUOSingle>*  value) ;

constexpr void __cordl_internal_set_graphUpdateThread(::System::Threading::Thread*  value) ;

/// @brief Method .ctor, addr 0x5e58054, size 0x1e0, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::AstarPath*  astar) ;

/// [CompilerGenerated]
/// @brief Method add_OnGraphsUpdated, addr 0x5e57ec4, size 0x9c, virtual false, abstract: false, final false
inline void add_OnGraphsUpdated(::System::Action*  value) ;

/// @brief Method get_IsAnyGraphUpdateInProgress, addr 0x5e5804c, size 0x8, virtual false, abstract: false, final false
inline bool get_IsAnyGraphUpdateInProgress() ;

/// @brief Method get_IsAnyGraphUpdateQueued, addr 0x5e57ffc, size 0x50, virtual false, abstract: false, final false
inline bool get_IsAnyGraphUpdateQueued() ;

/// [CompilerGenerated]
/// @brief Method remove_OnGraphsUpdated, addr 0x5e57f60, size 0x9c, virtual false, abstract: false, final false
inline void remove_OnGraphsUpdated(::System::Action*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GraphUpdateProcessor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GraphUpdateProcessor", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GraphUpdateProcessor(GraphUpdateProcessor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GraphUpdateProcessor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GraphUpdateProcessor(GraphUpdateProcessor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21248};

/// [CompilerGenerated]
/// @brief Field OnGraphsUpdated, offset: 0x10, size: 0x8, def value: None
 ::System::Action*  ___OnGraphsUpdated;

/// @brief Field astar, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AstarPath>  ___astar;

/// @brief Field graphUpdateThread, offset: 0x20, size: 0x8, def value: None
 ::System::Threading::Thread*  ___graphUpdateThread;

/// @brief Field anyGraphUpdateInProgress, offset: 0x28, size: 0x1, def value: None
 bool  ___anyGraphUpdateInProgress;

/// @brief Field asyncUpdateProfilingSampler, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::Profiling::CustomSampler*  ___asyncUpdateProfilingSampler;

/// @brief Field graphUpdateQueue, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<::Pathfinding::GraphUpdateObject*>*  ___graphUpdateQueue;

/// @brief Field graphUpdateQueueAsync, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<::GlobalNamespace::GraphUpdateProcessor_GUOSingle>*  ___graphUpdateQueueAsync;

/// @brief Field graphUpdateQueuePost, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<::GlobalNamespace::GraphUpdateProcessor_GUOSingle>*  ___graphUpdateQueuePost;

/// @brief Field graphUpdateQueueRegular, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<::GlobalNamespace::GraphUpdateProcessor_GUOSingle>*  ___graphUpdateQueueRegular;

/// @brief Field asyncGraphUpdatesComplete, offset: 0x58, size: 0x8, def value: None
 ::System::Threading::ManualResetEvent*  ___asyncGraphUpdatesComplete;

/// @brief Field graphUpdateAsyncEvent, offset: 0x60, size: 0x8, def value: None
 ::System::Threading::AutoResetEvent*  ___graphUpdateAsyncEvent;

/// @brief Field exitAsyncThread, offset: 0x68, size: 0x8, def value: None
 ::System::Threading::AutoResetEvent*  ___exitAsyncThread;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::GraphUpdateProcessor, ___OnGraphsUpdated) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GraphUpdateProcessor, ___astar) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GraphUpdateProcessor, ___graphUpdateThread) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GraphUpdateProcessor, ___anyGraphUpdateInProgress) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GraphUpdateProcessor, ___asyncUpdateProfilingSampler) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GraphUpdateProcessor, ___graphUpdateQueue) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GraphUpdateProcessor, ___graphUpdateQueueAsync) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GraphUpdateProcessor, ___graphUpdateQueuePost) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GraphUpdateProcessor, ___graphUpdateQueueRegular) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GraphUpdateProcessor, ___asyncGraphUpdatesComplete) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GraphUpdateProcessor, ___graphUpdateAsyncEvent) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GraphUpdateProcessor, ___exitAsyncThread) == 0x68, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::GraphUpdateProcessor) == 0x70, "Size mismatch!");

} // namespace end def Pathfinding
