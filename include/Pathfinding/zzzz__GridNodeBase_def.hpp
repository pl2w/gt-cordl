#pragma once
// IWYU pragma private; include "Pathfinding/GridNodeBase.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/zzzz__Connection_def.hpp"
#include "Pathfinding/zzzz__GraphNode_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GridNodeBase)
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
class PathHandler;
}
namespace Pathfinding {
class PathNode;
}
namespace Pathfinding {
class Path;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Pathfinding {
class GridNodeBase;
}
// Write type traits
MARK_REF_T(::Pathfinding::GridNodeBase*);
DEFINE_IL2CPP_CLASS(::Pathfinding::GridNodeBase*, "Pathfinding", "GridNodeBase");
// Dependencies Pathfinding.Connection, Pathfinding.GraphNode
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.GridNodeBase
class CORDL_TYPE GridNodeBase : public ::Pathfinding::GraphNode {
public:
// Declarations
 __declspec(property(get=get_HasConnectionsToAllEightNeighbours)) bool  HasConnectionsToAllEightNeighbours;

 __declspec(property(get=get_NodeInGridIndex, put=set_NodeInGridIndex)) int32_t  NodeInGridIndex;

 __declspec(property(get=get_TmpWalkable, put=set_TmpWalkable)) bool  TmpWalkable;

 __declspec(property(get=get_WalkableErosion, put=set_WalkableErosion)) bool  WalkableErosion;

 __declspec(property(get=get_XCoordinateInGrid)) int32_t  XCoordinateInGrid;

 __declspec(property(get=get_ZCoordinateInGrid)) int32_t  ZCoordinateInGrid;

/// @brief Field connections, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_connections, put=__cordl_internal_set_connections)) ::ArrayW<::Pathfinding::Connection>  connections;

/// @brief Field gridFlags, offset 0x2c, size 0x2 
 __declspec(property(get=__cordl_internal_get_gridFlags, put=__cordl_internal_set_gridFlags)) uint16_t  gridFlags;

/// @brief Field nodeInGridIndex, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_nodeInGridIndex, put=__cordl_internal_set_nodeInGridIndex)) int32_t  nodeInGridIndex;

/// @brief Method AddConnection, addr 0x5e88510, size 0x1f4, virtual true, abstract: false, final false
inline void AddConnection(::Pathfinding::GraphNode*  node, uint32_t  cost) ;

/// @brief Method ClearConnections, addr 0x5e8712c, size 0x8, virtual true, abstract: false, final false
inline void ClearConnections(bool  alsoReverse) ;

/// @brief Method ClearCustomConnections, addr 0x5e88ffc, size 0xe0, virtual false, abstract: false, final false
inline void ClearCustomConnections(bool  alsoReverse) ;

/// @brief Method ContainsConnection, addr 0x5e88f74, size 0x88, virtual true, abstract: false, final false
inline bool ContainsConnection(::Pathfinding::GraphNode*  node) ;

/// @brief Method DeserializeReferences, addr 0x5e891d8, size 0x1ac, virtual true, abstract: false, final false
inline void DeserializeReferences(::Pathfinding::Serialization::GraphSerializationContext*  ctx) ;

/// @brief Method GetConnections, addr 0x5e87250, size 0x7c, virtual true, abstract: false, final false
inline void GetConnections(::System::Action_1<::Pathfinding::GraphNode*>*  action) ;

/// @brief Method GetGizmoHashCode, addr 0x5e88ec0, size 0x90, virtual true, abstract: false, final false
inline int32_t GetGizmoHashCode() ;

/// @brief Method GetNeighbourAlongDirection, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Pathfinding::GridNodeBase* GetNeighbourAlongDirection(int32_t  direction) ;

/// @brief Method HasConnectionInDirection, addr 0x5e88f50, size 0x24, virtual true, abstract: false, final false
inline bool HasConnectionInDirection(int32_t  direction) ;

static inline ::Pathfinding::GridNodeBase* New_ctor(::GlobalNamespace::AstarPath*  astar) ;

/// @brief Method NormalizePoint, addr 0x5e88d04, size 0xd8, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 NormalizePoint(::UnityEngine::Vector3  worldPoint) ;

/// @brief Method Open, addr 0x5e880dc, size 0x1b4, virtual true, abstract: false, final false
inline void Open(::Pathfinding::Path*  path, ::Pathfinding::PathNode*  pathNode, ::Pathfinding::PathHandler*  handler) ;

/// @brief Method RandomPointOnSurface, addr 0x5e88c0c, size 0xf8, virtual true, abstract: false, final false
inline ::UnityEngine::Vector3 RandomPointOnSurface() ;

/// @brief Method RemoveConnection, addr 0x5e887bc, size 0x1d4, virtual true, abstract: false, final false
inline void RemoveConnection(::Pathfinding::GraphNode*  node) ;

/// @brief Method SerializeReferences, addr 0x5e890dc, size 0xfc, virtual true, abstract: false, final false
inline void SerializeReferences(::Pathfinding::Serialization::GraphSerializationContext*  ctx) ;

/// @brief Method SurfaceArea, addr 0x5e88b90, size 0x7c, virtual true, abstract: false, final false
inline float_t SurfaceArea() ;

/// @brief Method UnNormalizePoint, addr 0x5e88ddc, size 0xe4, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 UnNormalizePoint(::UnityEngine::Vector2  normalizedPointOnSurface) ;

/// @brief Method UpdateRecursiveG, addr 0x5e87d70, size 0xd0, virtual true, abstract: false, final false
inline void UpdateRecursiveG(::Pathfinding::Path*  path, ::Pathfinding::PathNode*  pathNode, ::Pathfinding::PathHandler*  handler) ;

constexpr ::ArrayW<::Pathfinding::Connection> const& __cordl_internal_get_connections() const;

constexpr ::ArrayW<::Pathfinding::Connection>& __cordl_internal_get_connections() ;

constexpr uint16_t const& __cordl_internal_get_gridFlags() const;

constexpr uint16_t& __cordl_internal_get_gridFlags() ;

constexpr int32_t const& __cordl_internal_get_nodeInGridIndex() const;

constexpr int32_t& __cordl_internal_get_nodeInGridIndex() ;

constexpr void __cordl_internal_set_connections(::ArrayW<::Pathfinding::Connection>  value) ;

constexpr void __cordl_internal_set_gridFlags(uint16_t  value) ;

constexpr void __cordl_internal_set_nodeInGridIndex(int32_t  value) ;

/// @brief Method .ctor, addr 0x5e869d0, size 0x8, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::AstarPath*  astar) ;

/// @brief Method get_HasConnectionsToAllEightNeighbours, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_HasConnectionsToAllEightNeighbours() ;

/// @brief Method get_NodeInGridIndex, addr 0x5e87044, size 0xc, virtual false, abstract: false, final false
inline int32_t get_NodeInGridIndex() ;

/// @brief Method get_TmpWalkable, addr 0x5e88b58, size 0xc, virtual false, abstract: false, final false
inline bool get_TmpWalkable() ;

/// @brief Method get_WalkableErosion, addr 0x5e88b20, size 0xc, virtual false, abstract: false, final false
inline bool get_WalkableErosion() ;

/// @brief Method get_XCoordinateInGrid, addr 0x5e88a14, size 0x88, virtual false, abstract: false, final false
inline int32_t get_XCoordinateInGrid() ;

/// @brief Method get_ZCoordinateInGrid, addr 0x5e88a9c, size 0x84, virtual false, abstract: false, final false
inline int32_t get_ZCoordinateInGrid() ;

/// @brief Method set_NodeInGridIndex, addr 0x5e88a04, size 0x10, virtual false, abstract: false, final false
inline void set_NodeInGridIndex(int32_t  value) ;

/// @brief Method set_TmpWalkable, addr 0x5e88b64, size 0x2c, virtual false, abstract: false, final false
inline void set_TmpWalkable(bool  value) ;

/// @brief Method set_WalkableErosion, addr 0x5e88b2c, size 0x2c, virtual false, abstract: false, final false
inline void set_WalkableErosion(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GridNodeBase() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GridNodeBase", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GridNodeBase(GridNodeBase && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GridNodeBase", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GridNodeBase(GridNodeBase const& ) = delete;

/// @brief Field GridFlagsWalkableErosionMask offset 0xffffffff size 0x4
static constexpr int32_t  GridFlagsWalkableErosionMask{static_cast<int32_t>(0x100)};

/// @brief Field GridFlagsWalkableErosionOffset offset 0xffffffff size 0x4
static constexpr int32_t  GridFlagsWalkableErosionOffset{static_cast<int32_t>(0x8)};

/// @brief Field GridFlagsWalkableTmpMask offset 0xffffffff size 0x4
static constexpr int32_t  GridFlagsWalkableTmpMask{static_cast<int32_t>(0x200)};

/// @brief Field GridFlagsWalkableTmpOffset offset 0xffffffff size 0x4
static constexpr int32_t  GridFlagsWalkableTmpOffset{static_cast<int32_t>(0x9)};

/// @brief Field NodeInGridIndexLayerOffset offset 0xffffffff size 0x4
static constexpr int32_t  NodeInGridIndexLayerOffset{static_cast<int32_t>(0x18)};

/// @brief Field NodeInGridIndexMask offset 0xffffffff size 0x4
static constexpr int32_t  NodeInGridIndexMask{static_cast<int32_t>(0xffffff)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21323};

/// @brief Field nodeInGridIndex, offset: 0x28, size: 0x4, def value: None
 int32_t  ___nodeInGridIndex;

/// @brief Field gridFlags, offset: 0x2c, size: 0x2, def value: None
 uint16_t  ___gridFlags;

/// @brief Field connections, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::Pathfinding::Connection>  ___connections;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::GridNodeBase, ___nodeInGridIndex) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GridNodeBase, ___gridFlags) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GridNodeBase, ___connections) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::GridNodeBase) == 0x38, "Size mismatch!");

} // namespace end def Pathfinding
