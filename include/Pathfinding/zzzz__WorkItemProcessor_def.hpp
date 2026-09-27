#pragma once
// IWYU pragma private; include "Pathfinding/WorkItemProcessor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WorkItemProcessor)
namespace GlobalNamespace {
class AstarPath;
}
namespace Pathfinding {
struct AstarWorkItem;
}
namespace Pathfinding {
class IWorkItemContext;
}
namespace Pathfinding {
class NavGraph;
}
namespace Pathfinding {
template<typename T>
class WorkItemProcessor_IndexedQueue_1;
}
// Forward declare root types
namespace Pathfinding {
class WorkItemProcessor;
}
namespace Pathfinding {
template<typename T>
class WorkItemProcessor_IndexedQueue_1;
}
// Write type traits
MARK_REF_T(::Pathfinding::WorkItemProcessor*);
MARK_GEN_REF_T_PTR(::Pathfinding::WorkItemProcessor_IndexedQueue_1);
DEFINE_IL2CPP_CLASS(::Pathfinding::WorkItemProcessor*, "Pathfinding", "WorkItemProcessor");
DEFINE_IL2CPP_GEN_CLASS_PTR(::Pathfinding::WorkItemProcessor_IndexedQueue_1, "Pathfinding", "WorkItemProcessor/IndexedQueue`1");
// Dependencies System.Object
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.WorkItemProcessor
class CORDL_TYPE WorkItemProcessor : public ::System::Object {
public:
// Declarations
template<typename T>
using IndexedQueue_1 = ::Pathfinding::WorkItemProcessor_IndexedQueue_1<T>;

/// @brief Field <workItemsInProgressRightNow>k__BackingField, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get__workItemsInProgressRightNow_k__BackingField, put=__cordl_internal_set__workItemsInProgressRightNow_k__BackingField)) bool  _workItemsInProgressRightNow_k__BackingField;

/// @brief Field <workItemsInProgress>k__BackingField, offset 0x2a, size 0x1 
 __declspec(property(get=__cordl_internal_get__workItemsInProgress_k__BackingField, put=__cordl_internal_set__workItemsInProgress_k__BackingField)) bool  _workItemsInProgress_k__BackingField;

/// @brief Field anyGraphsDirty, offset 0x29, size 0x1 
 __declspec(property(get=__cordl_internal_get_anyGraphsDirty, put=__cordl_internal_set_anyGraphsDirty)) bool  anyGraphsDirty;

 __declspec(property(get=get_anyQueued)) bool  anyQueued;

/// @brief Field astar, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_astar, put=__cordl_internal_set_astar)) ::UnityW<::GlobalNamespace::AstarPath>  astar;

/// @brief Field queuedWorkItemFloodFill, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_queuedWorkItemFloodFill, put=__cordl_internal_set_queuedWorkItemFloodFill)) bool  queuedWorkItemFloodFill;

/// @brief Field workItems, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_workItems, put=__cordl_internal_set_workItems)) ::Pathfinding::WorkItemProcessor_IndexedQueue_1<::Pathfinding::AstarWorkItem>*  workItems;

 __declspec(property(get=get_workItemsInProgress, put=set_workItemsInProgress)) bool  workItemsInProgress;

 __declspec(property(get=get_workItemsInProgressRightNow, put=set_workItemsInProgressRightNow)) bool  workItemsInProgressRightNow;

/// @brief Convert operator to "::Pathfinding::IWorkItemContext"
constexpr operator  ::Pathfinding::IWorkItemContext*() noexcept;

/// @brief Method AddWorkItem, addr 0x5e67294, size 0x6c, virtual false, abstract: false, final false
inline void AddWorkItem(::Pathfinding::AstarWorkItem  item) ;

/// @brief Method EnsureValidFloodFill, addr 0x5e671ac, size 0x3c, virtual true, abstract: false, final true
inline void EnsureValidFloodFill() ;

static inline ::Pathfinding::WorkItemProcessor* New_ctor(::GlobalNamespace::AstarPath*  astar) ;

/// @brief Method OnFloodFill, addr 0x5e6728c, size 0x8, virtual false, abstract: false, final false
inline void OnFloodFill() ;

/// @brief Method Pathfinding.IWorkItemContext.QueueFloodFill, addr 0x5e67194, size 0xc, virtual true, abstract: false, final true
inline void Pathfinding_IWorkItemContext_QueueFloodFill() ;

/// @brief Method Pathfinding.IWorkItemContext.SetGraphDirty, addr 0x5e671a0, size 0xc, virtual true, abstract: false, final true
inline void Pathfinding_IWorkItemContext_SetGraphDirty(::Pathfinding::NavGraph*  graph) ;

/// @brief Method ProcessWorkItems, addr 0x5e67300, size 0x410, virtual false, abstract: false, final false
inline bool ProcessWorkItems(bool  force) ;

constexpr bool const& __cordl_internal_get__workItemsInProgressRightNow_k__BackingField() const;

constexpr bool& __cordl_internal_get__workItemsInProgressRightNow_k__BackingField() ;

constexpr bool const& __cordl_internal_get__workItemsInProgress_k__BackingField() const;

constexpr bool& __cordl_internal_get__workItemsInProgress_k__BackingField() ;

constexpr bool const& __cordl_internal_get_anyGraphsDirty() const;

constexpr bool& __cordl_internal_get_anyGraphsDirty() ;

constexpr ::UnityW<::GlobalNamespace::AstarPath> const& __cordl_internal_get_astar() const;

constexpr ::UnityW<::GlobalNamespace::AstarPath>& __cordl_internal_get_astar() ;

constexpr bool const& __cordl_internal_get_queuedWorkItemFloodFill() const;

constexpr bool& __cordl_internal_get_queuedWorkItemFloodFill() ;

constexpr ::Pathfinding::WorkItemProcessor_IndexedQueue_1<::Pathfinding::AstarWorkItem>* const& __cordl_internal_get_workItems() const;

constexpr ::Pathfinding::WorkItemProcessor_IndexedQueue_1<::Pathfinding::AstarWorkItem>*& __cordl_internal_get_workItems() ;

constexpr void __cordl_internal_set__workItemsInProgressRightNow_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__workItemsInProgress_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_anyGraphsDirty(bool  value) ;

constexpr void __cordl_internal_set_astar(::UnityW<::GlobalNamespace::AstarPath>  value) ;

constexpr void __cordl_internal_set_queuedWorkItemFloodFill(bool  value) ;

constexpr void __cordl_internal_set_workItems(::Pathfinding::WorkItemProcessor_IndexedQueue_1<::Pathfinding::AstarWorkItem>*  value) ;

/// @brief Method .ctor, addr 0x5e671e8, size 0xa4, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::AstarPath*  astar) ;

/// @brief Method get_anyQueued, addr 0x5e67134, size 0x50, virtual false, abstract: false, final false
inline bool get_anyQueued() ;

/// [CompilerGenerated]
/// @brief Method get_workItemsInProgress, addr 0x5e67184, size 0x8, virtual false, abstract: false, final false
inline bool get_workItemsInProgress() ;

/// [CompilerGenerated]
/// @brief Method get_workItemsInProgressRightNow, addr 0x5e67124, size 0x8, virtual false, abstract: false, final false
inline bool get_workItemsInProgressRightNow() ;

/// @brief Convert to "::Pathfinding::IWorkItemContext"
constexpr ::Pathfinding::IWorkItemContext* i___Pathfinding__IWorkItemContext() noexcept;

/// [CompilerGenerated]
/// @brief Method set_workItemsInProgress, addr 0x5e6718c, size 0x8, virtual false, abstract: false, final false
inline void set_workItemsInProgress(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_workItemsInProgressRightNow, addr 0x5e6712c, size 0x8, virtual false, abstract: false, final false
inline void set_workItemsInProgressRightNow(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WorkItemProcessor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WorkItemProcessor", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WorkItemProcessor(WorkItemProcessor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WorkItemProcessor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WorkItemProcessor(WorkItemProcessor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21270};

/// [CompilerGenerated]
/// @brief Field <workItemsInProgressRightNow>k__BackingField, offset: 0x10, size: 0x1, def value: None
 bool  ____workItemsInProgressRightNow_k__BackingField;

/// @brief Field astar, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::AstarPath>  ___astar;

/// @brief Field workItems, offset: 0x20, size: 0x8, def value: None
 ::Pathfinding::WorkItemProcessor_IndexedQueue_1<::Pathfinding::AstarWorkItem>*  ___workItems;

/// @brief Field queuedWorkItemFloodFill, offset: 0x28, size: 0x1, def value: None
 bool  ___queuedWorkItemFloodFill;

/// @brief Field anyGraphsDirty, offset: 0x29, size: 0x1, def value: None
 bool  ___anyGraphsDirty;

/// [CompilerGenerated]
/// @brief Field <workItemsInProgress>k__BackingField, offset: 0x2a, size: 0x1, def value: None
 bool  ____workItemsInProgress_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::WorkItemProcessor, ____workItemsInProgressRightNow_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::WorkItemProcessor, ___astar) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::WorkItemProcessor, ___workItems) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::WorkItemProcessor, ___queuedWorkItemFloodFill) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::WorkItemProcessor, ___anyGraphsDirty) == 0x29, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::WorkItemProcessor, ____workItemsInProgress_k__BackingField) == 0x2a, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::WorkItemProcessor) == 0x30, "Size mismatch!");

} // namespace end def Pathfinding
// [DefaultMember("Item")]
// Dependencies System.Object
namespace Pathfinding {
// cpp template
template<typename T>
// Is value type: false
// CS Name: Pathfinding.WorkItemProcessor/IndexedQueue`1<T>
class CORDL_TYPE WorkItemProcessor_IndexedQueue_1 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Count, put=set_Count)) int32_t  Count;

 __declspec(property(get=get_Item, put=set_Item)) T  Item[];

/// @brief Field <Count>k__BackingField, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get__Count_k__BackingField, put=__cordl_internal_set__Count_k__BackingField)) int32_t  _Count_k__BackingField;

/// @brief Field buffer, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_buffer, put=__cordl_internal_set_buffer)) ::ArrayW<T>  buffer;

/// @brief Field start, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_start, put=__cordl_internal_set_start)) int32_t  start;

/// @brief Method Dequeue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T Dequeue() ;

/// @brief Method Enqueue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void Enqueue(T  item) ;

static inline ::Pathfinding::WorkItemProcessor_IndexedQueue_1<T>* New_ctor() ;

constexpr int32_t const& __cordl_internal_get__Count_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__Count_k__BackingField() ;

constexpr ::ArrayW<T> const& __cordl_internal_get_buffer() const;

constexpr ::ArrayW<T>& __cordl_internal_get_buffer() ;

constexpr int32_t const& __cordl_internal_get_start() const;

constexpr int32_t& __cordl_internal_get_start() ;

constexpr void __cordl_internal_set__Count_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set_buffer(::ArrayW<T>  value) ;

constexpr void __cordl_internal_set_start(int32_t  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline int32_t get_Count() ;

/// @brief Method get_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline T get_Item(int32_t  index) ;

/// [CompilerGenerated]
/// @brief Method set_Count, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Count(int32_t  value) ;

/// @brief Method set_Item, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void set_Item(int32_t  index, T  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WorkItemProcessor_IndexedQueue_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WorkItemProcessor_IndexedQueue_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
WorkItemProcessor_IndexedQueue_1(WorkItemProcessor_IndexedQueue_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WorkItemProcessor_IndexedQueue_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
WorkItemProcessor_IndexedQueue_1(WorkItemProcessor_IndexedQueue_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21269};

/// @brief Field buffer, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<T>  ___buffer;

/// @brief Field start, offset: 0x18, size: 0x4, def value: None
 int32_t  ___start;

/// [CompilerGenerated]
/// @brief Field <Count>k__BackingField, offset: 0x1c, size: 0x4, def value: None
 int32_t  ____Count_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Pathfinding
