#pragma once
// IWYU pragma private; include "Pathfinding/HierarchicalGraph.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/zzzz__GraphNode_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(HierarchicalGraph)
namespace Pathfinding::Util {
class RetainedGizmos;
}
namespace Pathfinding {
class GraphNode;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace System::Collections::Generic {
template<typename T>
class Stack_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Action;
}
// Forward declare root types
namespace Pathfinding {
class HierarchicalGraph;
}
// Write type traits
MARK_REF_T(::Pathfinding::HierarchicalGraph*);
DEFINE_IL2CPP_CLASS(::Pathfinding::HierarchicalGraph*, "Pathfinding", "HierarchicalGraph");
// Dependencies Pathfinding.GraphNode, System.Collections.Generic.List`1<T>, System.Object
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.HierarchicalGraph
class CORDL_TYPE HierarchicalGraph : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_NumConnectedComponents, put=set_NumConnectedComponents)) int32_t  NumConnectedComponents;

/// @brief Field <NumConnectedComponents>k__BackingField, offset 0x8c, size 0x4 
 __declspec(property(get=__cordl_internal_get__NumConnectedComponents_k__BackingField, put=__cordl_internal_set__NumConnectedComponents_k__BackingField)) int32_t  _NumConnectedComponents_k__BackingField;

/// @brief Field <version>k__BackingField, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__version_k__BackingField, put=__cordl_internal_set__version_k__BackingField)) int32_t  _version_k__BackingField;

/// @brief Field areas, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_areas, put=__cordl_internal_set_areas)) ::ArrayW<int32_t>  areas;

/// @brief Field children, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_children, put=__cordl_internal_set_children)) ::ArrayW<::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*>  children;

/// @brief Field connectionCallback, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_connectionCallback, put=__cordl_internal_set_connectionCallback)) ::System::Action_1<::Pathfinding::GraphNode*>*  connectionCallback;

/// @brief Field connections, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_connections, put=__cordl_internal_set_connections)) ::ArrayW<::System::Collections::Generic::List_1<int32_t>*>  connections;

/// @brief Field currentChildren, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentChildren, put=__cordl_internal_set_currentChildren)) ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*  currentChildren;

/// @brief Field currentConnections, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentConnections, put=__cordl_internal_set_currentConnections)) ::System::Collections::Generic::List_1<int32_t>*  currentConnections;

/// @brief Field currentHierarchicalNodeIndex, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentHierarchicalNodeIndex, put=__cordl_internal_set_currentHierarchicalNodeIndex)) int32_t  currentHierarchicalNodeIndex;

/// @brief Field dirty, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_dirty, put=__cordl_internal_set_dirty)) ::ArrayW<uint8_t>  dirty;

/// @brief Field dirtyNodes, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_dirtyNodes, put=__cordl_internal_set_dirtyNodes)) ::ArrayW<::Pathfinding::GraphNode*>  dirtyNodes;

/// @brief Field freeNodeIndices, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_freeNodeIndices, put=__cordl_internal_set_freeNodeIndices)) ::System::Collections::Generic::Stack_1<int32_t>*  freeNodeIndices;

/// @brief Field gizmoVersion, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_gizmoVersion, put=__cordl_internal_set_gizmoVersion)) int32_t  gizmoVersion;

/// @brief Field numDirtyNodes, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_numDirtyNodes, put=__cordl_internal_set_numDirtyNodes)) int32_t  numDirtyNodes;

/// @brief Field onConnectedComponentsChanged, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_onConnectedComponentsChanged, put=__cordl_internal_set_onConnectedComponentsChanged)) ::System::Action*  onConnectedComponentsChanged;

/// @brief Field temporaryQueue, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_temporaryQueue, put=__cordl_internal_set_temporaryQueue)) ::System::Collections::Generic::Queue_1<::Pathfinding::GraphNode*>*  temporaryQueue;

/// @brief Field temporaryStack, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_temporaryStack, put=__cordl_internal_set_temporaryStack)) ::System::Collections::Generic::Stack_1<int32_t>*  temporaryStack;

 __declspec(property(get=get_version, put=set_version)) int32_t  version;

/// @brief Method AddDirtyNode, addr 0x5e5b5ac, size 0x374, virtual false, abstract: false, final false
inline void AddDirtyNode(::Pathfinding::GraphNode*  node) ;

/// @brief Method FindHierarchicalNodeChildren, addr 0x5e5be20, size 0x2b4, virtual false, abstract: false, final false
inline void FindHierarchicalNodeChildren(int32_t  hierarchicalNode, ::Pathfinding::GraphNode*  startNode) ;

/// @brief Method FloodFill, addr 0x5e5c0d4, size 0x218, virtual false, abstract: false, final false
inline void FloodFill() ;

/// @brief Method GetConnectedComponent, addr 0x5e5b98c, size 0x30, virtual false, abstract: false, final false
inline uint32_t GetConnectedComponent(int32_t  hierarchicalNodeIndex) ;

/// @brief Method GetHierarchicalNodeIndex, addr 0x5e5b444, size 0x74, virtual false, abstract: false, final false
inline int32_t GetHierarchicalNodeIndex() ;

/// @brief Method Grow, addr 0x5e5b0dc, size 0x368, virtual false, abstract: false, final false
inline void Grow() ;

static inline ::Pathfinding::HierarchicalGraph* New_ctor() ;

/// @brief Method OnCreatedNode, addr 0x5e5b4b8, size 0xf4, virtual false, abstract: false, final false
inline void OnCreatedNode(::Pathfinding::GraphNode*  node) ;

/// @brief Method OnDrawGizmos, addr 0x5e5c3b0, size 0x3f8, virtual false, abstract: false, final false
inline void OnDrawGizmos(::Pathfinding::Util::RetainedGizmos*  gizmos) ;

/// @brief Method RecalculateAll, addr 0x5e5c2ec, size 0xc4, virtual false, abstract: false, final false
inline void RecalculateAll() ;

/// @brief Method RecalculateIfNecessary, addr 0x5e5bc0c, size 0x200, virtual false, abstract: false, final false
inline void RecalculateIfNecessary() ;

/// @brief Method RemoveHierarchicalNode, addr 0x5e5b9bc, size 0x250, virtual false, abstract: false, final false
inline void RemoveHierarchicalNode(int32_t  hierarchicalNode, bool  removeAdjacentSmallNodes) ;

/// [CompilerGenerated]
/// @brief Method <RecalculateAll>b__34_0, addr 0x5e5cbac, size 0x4, virtual false, abstract: false, final false
inline void _RecalculateAll_b__34_0(::Pathfinding::GraphNode*  node) ;

constexpr int32_t const& __cordl_internal_get__NumConnectedComponents_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__NumConnectedComponents_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get__version_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__version_k__BackingField() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_areas() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_areas() ;

constexpr ::ArrayW<::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*> const& __cordl_internal_get_children() const;

constexpr ::ArrayW<::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*>& __cordl_internal_get_children() ;

constexpr ::System::Action_1<::Pathfinding::GraphNode*>* const& __cordl_internal_get_connectionCallback() const;

constexpr ::System::Action_1<::Pathfinding::GraphNode*>*& __cordl_internal_get_connectionCallback() ;

constexpr ::ArrayW<::System::Collections::Generic::List_1<int32_t>*> const& __cordl_internal_get_connections() const;

constexpr ::ArrayW<::System::Collections::Generic::List_1<int32_t>*>& __cordl_internal_get_connections() ;

constexpr ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>* const& __cordl_internal_get_currentChildren() const;

constexpr ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*& __cordl_internal_get_currentChildren() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_currentConnections() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_currentConnections() ;

constexpr int32_t const& __cordl_internal_get_currentHierarchicalNodeIndex() const;

constexpr int32_t& __cordl_internal_get_currentHierarchicalNodeIndex() ;

constexpr ::ArrayW<uint8_t> const& __cordl_internal_get_dirty() const;

constexpr ::ArrayW<uint8_t>& __cordl_internal_get_dirty() ;

constexpr ::ArrayW<::Pathfinding::GraphNode*> const& __cordl_internal_get_dirtyNodes() const;

constexpr ::ArrayW<::Pathfinding::GraphNode*>& __cordl_internal_get_dirtyNodes() ;

constexpr ::System::Collections::Generic::Stack_1<int32_t>* const& __cordl_internal_get_freeNodeIndices() const;

constexpr ::System::Collections::Generic::Stack_1<int32_t>*& __cordl_internal_get_freeNodeIndices() ;

constexpr int32_t const& __cordl_internal_get_gizmoVersion() const;

constexpr int32_t& __cordl_internal_get_gizmoVersion() ;

constexpr int32_t const& __cordl_internal_get_numDirtyNodes() const;

constexpr int32_t& __cordl_internal_get_numDirtyNodes() ;

constexpr ::System::Action* const& __cordl_internal_get_onConnectedComponentsChanged() const;

constexpr ::System::Action*& __cordl_internal_get_onConnectedComponentsChanged() ;

constexpr ::System::Collections::Generic::Queue_1<::Pathfinding::GraphNode*>* const& __cordl_internal_get_temporaryQueue() const;

constexpr ::System::Collections::Generic::Queue_1<::Pathfinding::GraphNode*>*& __cordl_internal_get_temporaryQueue() ;

constexpr ::System::Collections::Generic::Stack_1<int32_t>* const& __cordl_internal_get_temporaryStack() const;

constexpr ::System::Collections::Generic::Stack_1<int32_t>*& __cordl_internal_get_temporaryStack() ;

constexpr void __cordl_internal_set__NumConnectedComponents_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set__version_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set_areas(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_children(::ArrayW<::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*>  value) ;

constexpr void __cordl_internal_set_connectionCallback(::System::Action_1<::Pathfinding::GraphNode*>*  value) ;

constexpr void __cordl_internal_set_connections(::ArrayW<::System::Collections::Generic::List_1<int32_t>*>  value) ;

constexpr void __cordl_internal_set_currentChildren(::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*  value) ;

constexpr void __cordl_internal_set_currentConnections(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_currentHierarchicalNodeIndex(int32_t  value) ;

constexpr void __cordl_internal_set_dirty(::ArrayW<uint8_t>  value) ;

constexpr void __cordl_internal_set_dirtyNodes(::ArrayW<::Pathfinding::GraphNode*>  value) ;

constexpr void __cordl_internal_set_freeNodeIndices(::System::Collections::Generic::Stack_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_gizmoVersion(int32_t  value) ;

constexpr void __cordl_internal_set_numDirtyNodes(int32_t  value) ;

constexpr void __cordl_internal_set_onConnectedComponentsChanged(::System::Action*  value) ;

constexpr void __cordl_internal_set_temporaryQueue(::System::Collections::Generic::Queue_1<::Pathfinding::GraphNode*>*  value) ;

constexpr void __cordl_internal_set_temporaryStack(::System::Collections::Generic::Stack_1<int32_t>*  value) ;

/// [CompilerGenerated]
/// @brief Method <.ctor>b__22_0, addr 0x5e5c9dc, size 0x1d0, virtual false, abstract: false, final false
inline void __ctor_b__22_0(::Pathfinding::GraphNode*  neighbour) ;

/// @brief Method .ctor, addr 0x5e5ae80, size 0x25c, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_NumConnectedComponents, addr 0x5e5b97c, size 0x8, virtual false, abstract: false, final false
inline int32_t get_NumConnectedComponents() ;

/// [CompilerGenerated]
/// @brief Method get_version, addr 0x5e5ae70, size 0x8, virtual false, abstract: false, final false
inline int32_t get_version() ;

/// [CompilerGenerated]
/// @brief Method set_NumConnectedComponents, addr 0x5e5b984, size 0x8, virtual false, abstract: false, final false
inline void set_NumConnectedComponents(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_version, addr 0x5e5ae78, size 0x8, virtual false, abstract: false, final false
inline void set_version(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HierarchicalGraph() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HierarchicalGraph", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HierarchicalGraph(HierarchicalGraph && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HierarchicalGraph", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HierarchicalGraph(HierarchicalGraph const& ) = delete;

/// @brief Field MaxChildrenPerNode offset 0xffffffff size 0x4
static constexpr int32_t  MaxChildrenPerNode{static_cast<int32_t>(0x100)};

/// @brief Field MinChildrenPerNode offset 0xffffffff size 0x4
static constexpr int32_t  MinChildrenPerNode{static_cast<int32_t>(0x80)};

/// @brief Field Tiling offset 0xffffffff size 0x4
static constexpr int32_t  Tiling{static_cast<int32_t>(0x10)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21252};

/// @brief Field children, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*>  ___children;

/// @brief Field connections, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::System::Collections::Generic::List_1<int32_t>*>  ___connections;

/// @brief Field areas, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___areas;

/// @brief Field dirty, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<uint8_t>  ___dirty;

/// [CompilerGenerated]
/// @brief Field <version>k__BackingField, offset: 0x30, size: 0x4, def value: None
 int32_t  ____version_k__BackingField;

/// @brief Field onConnectedComponentsChanged, offset: 0x38, size: 0x8, def value: None
 ::System::Action*  ___onConnectedComponentsChanged;

/// @brief Field connectionCallback, offset: 0x40, size: 0x8, def value: None
 ::System::Action_1<::Pathfinding::GraphNode*>*  ___connectionCallback;

/// @brief Field temporaryQueue, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<::Pathfinding::GraphNode*>*  ___temporaryQueue;

/// @brief Field currentChildren, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*  ___currentChildren;

/// @brief Field currentConnections, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ___currentConnections;

/// @brief Field currentHierarchicalNodeIndex, offset: 0x60, size: 0x4, def value: None
 int32_t  ___currentHierarchicalNodeIndex;

/// @brief Field temporaryStack, offset: 0x68, size: 0x8, def value: None
 ::System::Collections::Generic::Stack_1<int32_t>*  ___temporaryStack;

/// @brief Field numDirtyNodes, offset: 0x70, size: 0x4, def value: None
 int32_t  ___numDirtyNodes;

/// @brief Field dirtyNodes, offset: 0x78, size: 0x8, def value: None
 ::ArrayW<::Pathfinding::GraphNode*>  ___dirtyNodes;

/// @brief Field freeNodeIndices, offset: 0x80, size: 0x8, def value: None
 ::System::Collections::Generic::Stack_1<int32_t>*  ___freeNodeIndices;

/// @brief Field gizmoVersion, offset: 0x88, size: 0x4, def value: None
 int32_t  ___gizmoVersion;

/// [CompilerGenerated]
/// @brief Field <NumConnectedComponents>k__BackingField, offset: 0x8c, size: 0x4, def value: None
 int32_t  ____NumConnectedComponents_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::HierarchicalGraph, ___children) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::HierarchicalGraph, ___connections) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::HierarchicalGraph, ___areas) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::HierarchicalGraph, ___dirty) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::HierarchicalGraph, ____version_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::HierarchicalGraph, ___onConnectedComponentsChanged) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::HierarchicalGraph, ___connectionCallback) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::HierarchicalGraph, ___temporaryQueue) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::HierarchicalGraph, ___currentChildren) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::HierarchicalGraph, ___currentConnections) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::HierarchicalGraph, ___currentHierarchicalNodeIndex) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::HierarchicalGraph, ___temporaryStack) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::HierarchicalGraph, ___numDirtyNodes) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::HierarchicalGraph, ___dirtyNodes) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::HierarchicalGraph, ___freeNodeIndices) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::HierarchicalGraph, ___gizmoVersion) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::HierarchicalGraph, ____NumConnectedComponents_k__BackingField) == 0x8c, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::HierarchicalGraph) == 0x90, "Size mismatch!");

} // namespace end def Pathfinding
