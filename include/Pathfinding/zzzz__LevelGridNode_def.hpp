#pragma once
// IWYU pragma private; include "Pathfinding/LevelGridNode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/zzzz__GridNodeBase_def.hpp"
#include "Pathfinding/zzzz__LayerGridGraph_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LevelGridNode)
namespace GlobalNamespace {
class AstarPath;
}
namespace Pathfinding::Serialization {
class GraphSerializationContext;
}
namespace Pathfinding {
class GraphNode;
}
namespace Pathfinding {
class GridNodeBase;
}
namespace Pathfinding {
struct Int3;
}
namespace Pathfinding {
class LayerGridGraph;
}
namespace Pathfinding {
class PathHandler;
}
namespace Pathfinding {
class PathNode;
}
namespace Pathfinding {
class Path;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Pathfinding {
class LevelGridNode;
}
// Write type traits
MARK_REF_T(::Pathfinding::LevelGridNode*);
DEFINE_IL2CPP_CLASS(::Pathfinding::LevelGridNode*, "Pathfinding", "LevelGridNode");
// Dependencies Pathfinding.GridNodeBase, Pathfinding.LayerGridGraph
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.LevelGridNode
class CORDL_TYPE LevelGridNode : public ::Pathfinding::GridNodeBase {
public:
// Declarations
 __declspec(property(get=get_HasConnectionsToAllEightNeighbours)) bool  HasConnectionsToAllEightNeighbours;

 __declspec(property(get=get_LayerCoordinateInGrid, put=set_LayerCoordinateInGrid)) int32_t  LayerCoordinateInGrid;

/// @brief Field _gridGraphs, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__gridGraphs, put=setStaticF__gridGraphs)) ::ArrayW<::Pathfinding::LayerGridGraph*>  _gridGraphs;

/// @brief Field gridConnections, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_gridConnections, put=__cordl_internal_set_gridConnections)) uint64_t  gridConnections;

/// @brief Field gridGraphs, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_gridGraphs, put=setStaticF_gridGraphs)) ::ArrayW<::Pathfinding::LayerGridGraph*>  gridGraphs;

/// @brief Method AddConnection, addr 0x5e7c080, size 0xc0, virtual true, abstract: false, final false
inline void AddConnection(::Pathfinding::GraphNode*  node, uint32_t  cost) ;

/// @brief Method ClearConnections, addr 0x5e7bd8c, size 0x178, virtual true, abstract: false, final false
inline void ClearConnections(bool  alsoReverse) ;

/// @brief Method ClosestPointOnNode, addr 0x5e7cb48, size 0x148, virtual true, abstract: false, final false
inline ::UnityEngine::Vector3 ClosestPointOnNode(::UnityEngine::Vector3  p) ;

/// @brief Method DeserializeNode, addr 0x5e7cd04, size 0x108, virtual true, abstract: false, final false
inline void DeserializeNode(::Pathfinding::Serialization::GraphSerializationContext*  ctx) ;

/// [Obsolete("Use HasConnectionInDirection instead")]
/// @brief Method GetConnection, addr 0x5e7c048, size 0x1c, virtual false, abstract: false, final false
inline bool GetConnection(int32_t  i) ;

/// @brief Method GetConnectionValue, addr 0x5e7bd78, size 0x14, virtual false, abstract: false, final false
inline int32_t GetConnectionValue(int32_t  dir) ;

/// @brief Method GetConnections, addr 0x5e7bf04, size 0x144, virtual true, abstract: false, final false
inline void GetConnections(::System::Action_1<::Pathfinding::GraphNode*>*  action) ;

/// @brief Method GetGizmoHashCode, addr 0x5e7bc4c, size 0x2c, virtual true, abstract: false, final false
inline int32_t GetGizmoHashCode() ;

/// @brief Method GetGridGraph, addr 0x5e7bbbc, size 0x7c, virtual false, abstract: false, final false
static inline ::Pathfinding::LayerGridGraph* GetGridGraph(uint32_t  graphIndex) ;

/// @brief Method GetNeighbourAlongDirection, addr 0x5e7bc78, size 0x100, virtual true, abstract: false, final false
inline ::Pathfinding::GridNodeBase* GetNeighbourAlongDirection(int32_t  direction) ;

/// @brief Method GetPortal, addr 0x5e7c324, size 0x3a4, virtual true, abstract: false, final false
inline bool GetPortal(::Pathfinding::GraphNode*  other, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  left, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*  right, bool  backwards) ;

/// @brief Method HasAnyGridConnections, addr 0x5e7ba64, size 0x10, virtual false, abstract: false, final false
inline bool HasAnyGridConnections() ;

/// @brief Method HasConnectionInDirection, addr 0x5e7c064, size 0x1c, virtual true, abstract: false, final false
inline bool HasConnectionInDirection(int32_t  direction) ;

static inline ::Pathfinding::LevelGridNode* New_ctor(::GlobalNamespace::AstarPath*  astar) ;

/// @brief Method Open, addr 0x5e7c890, size 0x2b8, virtual true, abstract: false, final false
inline void Open(::Pathfinding::Path*  path, ::Pathfinding::PathNode*  pathNode, ::Pathfinding::PathHandler*  handler) ;

/// @brief Method RemoveConnection, addr 0x5e7c268, size 0xbc, virtual true, abstract: false, final false
inline void RemoveConnection(::Pathfinding::GraphNode*  node) ;

/// @brief Method RemoveGridConnection, addr 0x5e7c140, size 0x128, virtual false, abstract: false, final false
inline void RemoveGridConnection(::Pathfinding::LevelGridNode*  node) ;

/// @brief Method ResetAllGridConnections, addr 0x5e7a9dc, size 0x7c, virtual false, abstract: false, final false
inline void ResetAllGridConnections() ;

/// @brief Method SerializeNode, addr 0x5e7cc90, size 0x74, virtual true, abstract: false, final false
inline void SerializeNode(::Pathfinding::Serialization::GraphSerializationContext*  ctx) ;

/// @brief Method SetConnectionValue, addr 0x5e7aa58, size 0xa8, virtual false, abstract: false, final false
inline void SetConnectionValue(int32_t  dir, int32_t  value) ;

/// @brief Method SetGridGraph, addr 0x5e77ff4, size 0x210, virtual false, abstract: false, final false
static inline void SetGridGraph(int32_t  graphIndex, ::Pathfinding::LayerGridGraph*  graph) ;

/// @brief Method SetPosition, addr 0x5e7bc40, size 0xc, virtual false, abstract: false, final false
inline void SetPosition(::Pathfinding::Int3  position) ;

/// @brief Method UpdateRecursiveG, addr 0x5e7c6c8, size 0x1c8, virtual true, abstract: false, final false
inline void UpdateRecursiveG(::Pathfinding::Path*  path, ::Pathfinding::PathNode*  pathNode, ::Pathfinding::PathHandler*  handler) ;

constexpr uint64_t const& __cordl_internal_get_gridConnections() const;

constexpr uint64_t& __cordl_internal_get_gridConnections() ;

constexpr void __cordl_internal_set_gridConnections(uint64_t  value) ;

/// @brief Method .ctor, addr 0x5e7a350, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::AstarPath*  astar) ;

static inline ::ArrayW<::Pathfinding::LayerGridGraph*> getStaticF__gridGraphs() ;

static inline ::ArrayW<::Pathfinding::LayerGridGraph*> getStaticF_gridGraphs() ;

/// @brief Method get_HasConnectionsToAllEightNeighbours, addr 0x5e7bc38, size 0x8, virtual true, abstract: false, final false
inline bool get_HasConnectionsToAllEightNeighbours() ;

/// @brief Method get_LayerCoordinateInGrid, addr 0x5e7a544, size 0x8, virtual false, abstract: false, final false
inline int32_t get_LayerCoordinateInGrid() ;

static inline void setStaticF__gridGraphs(::ArrayW<::Pathfinding::LayerGridGraph*>  value) ;

static inline void setStaticF_gridGraphs(::ArrayW<::Pathfinding::LayerGridGraph*>  value) ;

/// @brief Method set_LayerCoordinateInGrid, addr 0x5e7a358, size 0x8, virtual false, abstract: false, final false
inline void set_LayerCoordinateInGrid(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LevelGridNode() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LevelGridNode", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LevelGridNode(LevelGridNode && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LevelGridNode", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LevelGridNode(LevelGridNode const& ) = delete;

/// @brief Field ConnectionMask offset 0xffffffff size 0x4
static constexpr int32_t  ConnectionMask{static_cast<int32_t>(0xff)};

/// @brief Field ConnectionStride offset 0xffffffff size 0x4
static constexpr int32_t  ConnectionStride{static_cast<int32_t>(0x8)};

/// @brief Field MaxLayerCount offset 0xffffffff size 0x4
static constexpr int32_t  MaxLayerCount{static_cast<int32_t>(0xff)};

/// @brief Field NoConnection offset 0xffffffff size 0x4
static constexpr int32_t  NoConnection{static_cast<int32_t>(0xff)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21312};

/// @brief Field gridConnections, offset: 0x38, size: 0x8, def value: None
 uint64_t  ___gridConnections;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::LevelGridNode, ___gridConnections) == 0x38, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::LevelGridNode) == 0x40, "Size mismatch!");

} // namespace end def Pathfinding
