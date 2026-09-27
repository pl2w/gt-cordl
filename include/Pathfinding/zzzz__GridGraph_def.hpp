#pragma once
// IWYU pragma private; include "Pathfinding/GridGraph.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/zzzz__GridGraph_TextureData_ChannelUse_def.hpp"
#include "Pathfinding/zzzz__GridNodeBase_def.hpp"
#include "Pathfinding/zzzz__InspectorGridHexagonNodeSize_def.hpp"
#include "Pathfinding/zzzz__InspectorGridMode_def.hpp"
#include "Pathfinding/zzzz__NavGraph_def.hpp"
#include "Pathfinding/zzzz__NumNeighbours_def.hpp"
#include "Pathfinding/zzzz__Progress_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color32_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GridGraph)
namespace GlobalNamespace {
struct TextureData_GridGraph_ChannelUse;
}
namespace Pathfinding::Serialization {
class GraphSerializationContext;
}
namespace Pathfinding::Util {
class GraphGizmoHelper;
}
namespace Pathfinding::Util {
class GraphTransform;
}
namespace Pathfinding::Util {
class RetainedGizmos;
}
namespace Pathfinding {
class GraphCollision;
}
namespace Pathfinding {
struct GraphHitInfo;
}
namespace Pathfinding {
class GraphNode;
}
namespace Pathfinding {
class GraphUpdateObject;
}
namespace Pathfinding {
class GraphUpdateShape;
}
namespace Pathfinding {
struct GraphUpdateThreading;
}
namespace Pathfinding {
class GridGraph_TextureData;
}
namespace Pathfinding {
class GridGraph__ScanInternal_d__92;
}
namespace Pathfinding {
class GridGraph___c;
}
namespace Pathfinding {
class GridGraph___c__DisplayClass64_0;
}
namespace Pathfinding {
struct GridHitInfo;
}
namespace Pathfinding {
class GridNodeBase;
}
namespace Pathfinding {
class GridNode;
}
namespace Pathfinding {
class IRaycastableGraph;
}
namespace Pathfinding {
class ITransformedGraph;
}
namespace Pathfinding {
class IUpdatableGraph;
}
namespace Pathfinding {
struct InspectorGridHexagonNodeSize;
}
namespace Pathfinding {
struct InspectorGridMode;
}
namespace Pathfinding {
struct Int2;
}
namespace Pathfinding {
struct Int3;
}
namespace Pathfinding {
struct IntRect;
}
namespace Pathfinding {
class NNConstraint;
}
namespace Pathfinding {
struct NNInfoInternal;
}
namespace Pathfinding {
struct Progress;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Pathfinding {
class GridGraph;
}
namespace Pathfinding {
class GridGraph_TextureData;
}
namespace Pathfinding {
class GridGraph__ScanInternal_d__92;
}
namespace Pathfinding {
class GridGraph___c;
}
namespace Pathfinding {
class GridGraph___c__DisplayClass64_0;
}
// Write type traits
MARK_REF_T(::Pathfinding::GridGraph*);
MARK_REF_T(::Pathfinding::GridGraph_TextureData*);
MARK_REF_T(::Pathfinding::GridGraph__ScanInternal_d__92*);
MARK_REF_T(::Pathfinding::GridGraph___c*);
MARK_REF_T(::Pathfinding::GridGraph___c__DisplayClass64_0*);
DEFINE_IL2CPP_CLASS(::Pathfinding::GridGraph*, "Pathfinding", "GridGraph");
DEFINE_IL2CPP_CLASS(::Pathfinding::GridGraph_TextureData*, "Pathfinding", "GridGraph/TextureData");
DEFINE_IL2CPP_CLASS(::Pathfinding::GridGraph__ScanInternal_d__92*, "Pathfinding", "GridGraph/<ScanInternal>d__92");
DEFINE_IL2CPP_CLASS(::Pathfinding::GridGraph___c*, "Pathfinding", "GridGraph/<>c");
DEFINE_IL2CPP_CLASS(::Pathfinding::GridGraph___c__DisplayClass64_0*, "Pathfinding", "GridGraph/<>c__DisplayClass64_0");
// [JsonOptIn]
// [Preserve]
// Dependencies Pathfinding.GridNodeBase, Pathfinding.InspectorGridHexagonNodeSize, Pathfinding.InspectorGridMode, Pathfinding.NavGraph, Pathfinding.NumNeighbours, UnityEngine.Vector2, UnityEngine.Vector3
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.GridGraph
class CORDL_TYPE GridGraph : public ::Pathfinding::NavGraph {
public:
// Declarations
using TextureData = ::Pathfinding::GridGraph_TextureData;

using _ScanInternal_d__92 = ::Pathfinding::GridGraph__ScanInternal_d__92;

using __c = ::Pathfinding::GridGraph___c;

using __c__DisplayClass64_0 = ::Pathfinding::GridGraph___c__DisplayClass64_0;

 __declspec(property(get=get_Depth, put=set_Depth)) int32_t  Depth;

 __declspec(property(get=get_LayerCount)) int32_t  LayerCount;

/// @brief Field StandardDimetricAngle, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_StandardDimetricAngle, put=setStaticF_StandardDimetricAngle)) float_t  StandardDimetricAngle;

/// @brief Field StandardIsometricAngle, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_StandardIsometricAngle, put=setStaticF_StandardIsometricAngle)) float_t  StandardIsometricAngle;

 __declspec(property(get=get_Width, put=set_Width)) int32_t  Width;

/// @brief Field <size>k__BackingField, offset 0x158, size 0x8 
 __declspec(property(get=__cordl_internal_get__size_k__BackingField, put=__cordl_internal_set__size_k__BackingField)) ::UnityEngine::Vector2  _size_k__BackingField;

/// @brief Field <transform>k__BackingField, offset 0x188, size 0x8 
 __declspec(property(get=__cordl_internal_get__transform_k__BackingField, put=__cordl_internal_set__transform_k__BackingField)) ::Pathfinding::Util::GraphTransform*  _transform_k__BackingField;

/// @brief Field aspectRatio, offset 0xe0, size 0x4 
 __declspec(property(get=__cordl_internal_get_aspectRatio, put=__cordl_internal_set_aspectRatio)) float_t  aspectRatio;

/// @brief Field center, offset 0xf8, size 0xc 
 __declspec(property(get=__cordl_internal_get_center, put=__cordl_internal_set_center)) ::UnityEngine::Vector3  center;

/// @brief Field collision, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get_collision, put=__cordl_internal_set_collision)) ::Pathfinding::GraphCollision*  collision;

/// @brief Field cutCorners, offset 0x130, size 0x1 
 __declspec(property(get=__cordl_internal_get_cutCorners, put=__cordl_internal_set_cutCorners)) bool  cutCorners;

/// @brief Field depth, offset 0xdc, size 0x4 
 __declspec(property(get=__cordl_internal_get_depth, put=__cordl_internal_set_depth)) int32_t  depth;

/// @brief Field erodeIterations, offset 0x120, size 0x4 
 __declspec(property(get=__cordl_internal_get_erodeIterations, put=__cordl_internal_set_erodeIterations)) int32_t  erodeIterations;

/// @brief Field erosionFirstTag, offset 0x128, size 0x4 
 __declspec(property(get=__cordl_internal_get_erosionFirstTag, put=__cordl_internal_set_erosionFirstTag)) int32_t  erosionFirstTag;

/// @brief Field erosionUseTags, offset 0x124, size 0x1 
 __declspec(property(get=__cordl_internal_get_erosionUseTags, put=__cordl_internal_set_erosionUseTags)) bool  erosionUseTags;

/// @brief Field hexagonNeighbourIndices, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_hexagonNeighbourIndices, put=setStaticF_hexagonNeighbourIndices)) ::ArrayW<int32_t>  hexagonNeighbourIndices;

/// @brief Field inspectorGridMode, offset 0xd0, size 0x4 
 __declspec(property(get=__cordl_internal_get_inspectorGridMode, put=__cordl_internal_set_inspectorGridMode)) ::Pathfinding::InspectorGridMode  inspectorGridMode;

/// @brief Field inspectorHexagonSizeMode, offset 0xd4, size 0x4 
 __declspec(property(get=__cordl_internal_get_inspectorHexagonSizeMode, put=__cordl_internal_set_inspectorHexagonSizeMode)) ::Pathfinding::InspectorGridHexagonNodeSize  inspectorHexagonSizeMode;

 __declspec(property(get=get_is2D, put=set_is2D)) bool  is2D;

/// @brief Field isometricAngle, offset 0xe4, size 0x4 
 __declspec(property(get=__cordl_internal_get_isometricAngle, put=__cordl_internal_set_isometricAngle)) float_t  isometricAngle;

/// @brief Field maxClimb, offset 0x118, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxClimb, put=__cordl_internal_set_maxClimb)) float_t  maxClimb;

/// @brief Field maxSlope, offset 0x11c, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxSlope, put=__cordl_internal_set_maxSlope)) float_t  maxSlope;

/// @brief Field neighbourCosts, offset 0x168, size 0x8 
 __declspec(property(get=__cordl_internal_get_neighbourCosts, put=__cordl_internal_set_neighbourCosts)) ::ArrayW<uint32_t>  neighbourCosts;

/// @brief Field neighbourOffsets, offset 0x160, size 0x8 
 __declspec(property(get=__cordl_internal_get_neighbourOffsets, put=__cordl_internal_set_neighbourOffsets)) ::ArrayW<int32_t>  neighbourOffsets;

/// @brief Field neighbourXOffsets, offset 0x170, size 0x8 
 __declspec(property(get=__cordl_internal_get_neighbourXOffsets, put=__cordl_internal_set_neighbourXOffsets)) ::ArrayW<int32_t>  neighbourXOffsets;

/// @brief Field neighbourZOffsets, offset 0x178, size 0x8 
 __declspec(property(get=__cordl_internal_get_neighbourZOffsets, put=__cordl_internal_set_neighbourZOffsets)) ::ArrayW<int32_t>  neighbourZOffsets;

/// @brief Field neighbours, offset 0x12c, size 0x4 
 __declspec(property(get=__cordl_internal_get_neighbours, put=__cordl_internal_set_neighbours)) ::Pathfinding::NumNeighbours  neighbours;

/// @brief Field nodeSize, offset 0x10c, size 0x4 
 __declspec(property(get=__cordl_internal_get_nodeSize, put=__cordl_internal_set_nodeSize)) float_t  nodeSize;

/// @brief Field nodes, offset 0x180, size 0x8 
 __declspec(property(get=__cordl_internal_get_nodes, put=__cordl_internal_set_nodes)) ::ArrayW<::Pathfinding::GridNodeBase*>  nodes;

/// @brief Field penaltyAngle, offset 0x140, size 0x1 
 __declspec(property(get=__cordl_internal_get_penaltyAngle, put=__cordl_internal_set_penaltyAngle)) bool  penaltyAngle;

/// @brief Field penaltyAngleFactor, offset 0x144, size 0x4 
 __declspec(property(get=__cordl_internal_get_penaltyAngleFactor, put=__cordl_internal_set_penaltyAngleFactor)) float_t  penaltyAngleFactor;

/// @brief Field penaltyAnglePower, offset 0x148, size 0x4 
 __declspec(property(get=__cordl_internal_get_penaltyAnglePower, put=__cordl_internal_set_penaltyAnglePower)) float_t  penaltyAnglePower;

/// @brief Field penaltyPosition, offset 0x138, size 0x1 
 __declspec(property(get=__cordl_internal_get_penaltyPosition, put=__cordl_internal_set_penaltyPosition)) bool  penaltyPosition;

/// @brief Field penaltyPositionFactor, offset 0x13c, size 0x4 
 __declspec(property(get=__cordl_internal_get_penaltyPositionFactor, put=__cordl_internal_set_penaltyPositionFactor)) float_t  penaltyPositionFactor;

/// @brief Field penaltyPositionOffset, offset 0x134, size 0x4 
 __declspec(property(get=__cordl_internal_get_penaltyPositionOffset, put=__cordl_internal_set_penaltyPositionOffset)) float_t  penaltyPositionOffset;

/// @brief Field rotation, offset 0xec, size 0xc 
 __declspec(property(get=__cordl_internal_get_rotation, put=__cordl_internal_set_rotation)) ::UnityEngine::Vector3  rotation;

/// @brief Field showMeshOutline, offset 0x14d, size 0x1 
 __declspec(property(get=__cordl_internal_get_showMeshOutline, put=__cordl_internal_set_showMeshOutline)) bool  showMeshOutline;

/// @brief Field showMeshSurface, offset 0x14f, size 0x1 
 __declspec(property(get=__cordl_internal_get_showMeshSurface, put=__cordl_internal_set_showMeshSurface)) bool  showMeshSurface;

/// @brief Field showNodeConnections, offset 0x14e, size 0x1 
 __declspec(property(get=__cordl_internal_get_showNodeConnections, put=__cordl_internal_set_showNodeConnections)) bool  showNodeConnections;

 __declspec(property(get=get_size, put=set_size)) ::UnityEngine::Vector2  size;

/// @brief Field textureData, offset 0x150, size 0x8 
 __declspec(property(get=__cordl_internal_get_textureData, put=__cordl_internal_set_textureData)) ::Pathfinding::GridGraph_TextureData*  textureData;

 __declspec(property(get=get_transform, put=set_transform)) ::Pathfinding::Util::GraphTransform*  transform;

/// @brief Field unclampedSize, offset 0x104, size 0x8 
 __declspec(property(get=__cordl_internal_get_unclampedSize, put=__cordl_internal_set_unclampedSize)) ::UnityEngine::Vector2  unclampedSize;

/// @brief Field uniformEdgeCosts, offset 0xe8, size 0x1 
 __declspec(property(get=__cordl_internal_get_uniformEdgeCosts, put=__cordl_internal_set_uniformEdgeCosts)) bool  uniformEdgeCosts;

 __declspec(property(get=get_uniformWidthDepthGrid)) bool  uniformWidthDepthGrid;

/// @brief Field useJumpPointSearch, offset 0x14c, size 0x1 
 __declspec(property(get=__cordl_internal_get_useJumpPointSearch, put=__cordl_internal_set_useJumpPointSearch)) bool  useJumpPointSearch;

 __declspec(property(get=get_useRaycastNormal)) bool  useRaycastNormal;

/// @brief Field width, offset 0xd8, size 0x4 
 __declspec(property(get=__cordl_internal_get_width, put=__cordl_internal_set_width)) int32_t  width;

/// @brief Convert operator to "::Pathfinding::IRaycastableGraph"
constexpr operator  ::Pathfinding::IRaycastableGraph*() noexcept;

/// @brief Convert operator to "::Pathfinding::ITransformedGraph"
constexpr operator  ::Pathfinding::ITransformedGraph*() noexcept;

/// @brief Convert operator to "::Pathfinding::IUpdatableGraph"
constexpr operator  ::Pathfinding::IUpdatableGraph*() noexcept;

/// @brief Method CalculateAffectedRegions, addr 0x5e73ba0, size 0x7a0, virtual false, abstract: false, final false
inline void CalculateAffectedRegions(::Pathfinding::GraphUpdateObject*  o, ::by_ref<::Pathfinding::IntRect>  originalRect, ::by_ref<::Pathfinding::IntRect>  affectRect, ::by_ref<::Pathfinding::IntRect>  physicsRect, ::by_ref<bool>  willChangeWalkability, ::by_ref<int32_t>  erosion) ;

/// [Obsolete("Use the instance function instead")]
/// @brief Method CalculateConnections, addr 0x5e717ac, size 0x8c, virtual false, abstract: false, final false
static inline void CalculateConnections(::Pathfinding::GridNode*  node) ;

/// @brief Method CalculateConnections, addr 0x5e71838, size 0x40, virtual true, abstract: false, final false
inline void CalculateConnections(::Pathfinding::GridNodeBase*  node) ;

/// @brief Method CalculateConnections, addr 0x5e71888, size 0x528, virtual true, abstract: false, final false
inline void CalculateConnections(int32_t  x, int32_t  z) ;

/// [Obsolete("Use CalculateConnections(x,z) or CalculateConnections(node) instead")]
/// @brief Method CalculateConnections, addr 0x5e71878, size 0x10, virtual true, abstract: false, final false
inline void CalculateConnections(int32_t  x, int32_t  z, ::Pathfinding::GridNode*  node) ;

/// @brief Method CalculateConnectionsForCellAndNeighbours, addr 0x5e716ec, size 0xc0, virtual false, abstract: false, final false
inline void CalculateConnectionsForCellAndNeighbours(int32_t  x, int32_t  z) ;

/// @brief Method CalculateDimensions, addr 0x5e6f328, size 0x3a8, virtual false, abstract: false, final false
inline void CalculateDimensions(::by_ref<int32_t>  width, ::by_ref<int32_t>  depth, ::by_ref<float_t>  nodeSize) ;

/// @brief Method CalculateTransform, addr 0x5e6f6d0, size 0x4fc, virtual false, abstract: false, final false
inline ::Pathfinding::Util::GraphTransform* CalculateTransform() ;

/// @brief Method CheckConnection, addr 0x5e76744, size 0x1b0, virtual false, abstract: false, final false
inline bool CheckConnection(::Pathfinding::GridNode*  node, int32_t  dir) ;

/// @brief Method ClipLineSegmentToBounds, addr 0x5e74ddc, size 0x4b4, virtual false, abstract: false, final false
inline bool ClipLineSegmentToBounds(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b, ::by_ref<::UnityEngine::Vector3>  outA, ::by_ref<::UnityEngine::Vector3>  outB) ;

/// @brief Method ConvertHexagonSizeToNodeSize, addr 0x5e6eb3c, size 0x9c, virtual false, abstract: false, final false
static inline float_t ConvertHexagonSizeToNodeSize(::Pathfinding::InspectorGridHexagonNodeSize  mode, float_t  value) ;

/// @brief Method ConvertNodeSizeToHexagonSize, addr 0x5e6ebd8, size 0x9c, virtual false, abstract: false, final false
static inline float_t ConvertNodeSizeToHexagonSize(::Pathfinding::InspectorGridHexagonNodeSize  mode, float_t  value) ;

/// @brief Method CountNodes, addr 0x5e6e360, size 0x18, virtual true, abstract: false, final false
inline int32_t CountNodes() ;

/// @brief Method CreateNavmeshSurfaceVisualization, addr 0x5e72618, size 0x9f8, virtual false, abstract: false, final false
inline void CreateNavmeshSurfaceVisualization(::ArrayW<::Pathfinding::GridNodeBase*>  nodes, int32_t  nodeCount, ::Pathfinding::Util::GraphGizmoHelper*  helper) ;

/// @brief Method CrossMagnitude, addr 0x5e74dc0, size 0x1c, virtual false, abstract: false, final false
static inline int64_t CrossMagnitude(::Pathfinding::Int2  a, ::Pathfinding::Int2  b) ;

/// @brief Method DeserializeExtraInfo, addr 0x5e769b4, size 0x188, virtual true, abstract: false, final false
inline void DeserializeExtraInfo(::Pathfinding::Serialization::GraphSerializationContext*  ctx) ;

/// @brief Method DeserializeSettingsCompatibility, addr 0x5e76b3c, size 0x2a0, virtual true, abstract: false, final false
inline void DeserializeSettingsCompatibility(::Pathfinding::Serialization::GraphSerializationContext*  ctx) ;

/// @brief Method DestroyAllNodes, addr 0x5e6e25c, size 0xf4, virtual true, abstract: false, final false
inline void DestroyAllNodes() ;

/// @brief Method ErodeNode, addr 0x5e70e54, size 0x68, virtual false, abstract: false, final false
inline void ErodeNode(::Pathfinding::GraphNode*  node) ;

/// @brief Method ErodeNodeWithTags, addr 0x5e70f20, size 0x1f0, virtual false, abstract: false, final false
inline void ErodeNodeWithTags(::Pathfinding::GraphNode*  node, int32_t  iteration) ;

/// @brief Method ErodeNodeWithTagsInit, addr 0x5e70ebc, size 0x64, virtual false, abstract: false, final false
inline void ErodeNodeWithTagsInit(::Pathfinding::GraphNode*  node) ;

/// @brief Method ErodeWalkableArea, addr 0x5e71110, size 0x10, virtual true, abstract: false, final false
inline void ErodeWalkableArea() ;

/// @brief Method ErodeWalkableArea, addr 0x5e71120, size 0x438, virtual false, abstract: false, final false
inline void ErodeWalkableArea(int32_t  xmin, int32_t  zmin, int32_t  xmax, int32_t  zmax) ;

/// @brief Method ErosionAnyFalseConnections, addr 0x5e70d14, size 0x140, virtual true, abstract: false, final false
inline bool ErosionAnyFalseConnections(::Pathfinding::GraphNode*  baseNode) ;

/// [Obsolete("This method has been renamed to UpdateTransform")]
/// @brief Method GenerateMatrix, addr 0x5e6f324, size 0x4, virtual false, abstract: false, final false
inline void GenerateMatrix() ;

/// @brief Method GetConnectionCost, addr 0x5e6ec94, size 0x30, virtual false, abstract: false, final false
inline uint32_t GetConnectionCost(int32_t  dir) ;

/// @brief Method GetNearest, addr 0x5e6fbcc, size 0x1b4, virtual true, abstract: false, final false
inline ::Pathfinding::NNInfoInternal GetNearest(::UnityEngine::Vector3  position, ::Pathfinding::NNConstraint*  constraint, ::Pathfinding::GraphNode*  hint) ;

/// @brief Method GetNearestForce, addr 0x5e6fe10, size 0x594, virtual true, abstract: false, final false
inline ::Pathfinding::NNInfoInternal GetNearestForce(::UnityEngine::Vector3  position, ::Pathfinding::NNConstraint*  constraint) ;

/// @brief Method GetNearestFromGraphSpace, addr 0x5e6fd80, size 0x90, virtual true, abstract: false, final false
inline ::Pathfinding::GridNodeBase* GetNearestFromGraphSpace(::UnityEngine::Vector3  positionGraphSpace) ;

/// @brief Method GetNode, addr 0x5e73b34, size 0x5c, virtual true, abstract: false, final false
inline ::Pathfinding::GridNodeBase* GetNode(int32_t  x, int32_t  z) ;

/// [Obsolete("Use GridNode.HasConnectionInDirection instead")]
/// @brief Method GetNodeConnection, addr 0x5e6ee00, size 0x178, virtual false, abstract: false, final false
inline ::Pathfinding::GridNode* GetNodeConnection(int32_t  index, int32_t  x, int32_t  z, int32_t  dir) ;

/// [Obsolete("Use GridNode.HasConnectionInDirection instead")]
/// @brief Method GetNodeConnection, addr 0x5e6ecc4, size 0x13c, virtual false, abstract: false, final false
inline ::Pathfinding::GridNode* GetNodeConnection(::Pathfinding::GridNode*  node, int32_t  dir) ;

/// @brief Method GetNodes, addr 0x5e6e378, size 0x6c, virtual true, abstract: false, final false
inline void GetNodes(::System::Action_1<::Pathfinding::GraphNode*>*  action) ;

/// [Obsolete("This method has been renamed to GetNodesInRegion", true)]
/// @brief Method GetNodesInArea, addr 0x5e733b0, size 0x3c, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>* GetNodesInArea(::UnityEngine::Bounds  bounds) ;

/// [Obsolete("This method has been renamed to GetNodesInRegion", true)]
/// @brief Method GetNodesInArea, addr 0x5e73494, size 0x38, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>* GetNodesInArea(::UnityEngine::Bounds  bounds, ::Pathfinding::GraphUpdateShape*  shape) ;

/// [Obsolete("This method has been renamed to GetNodesInRegion", true)]
/// @brief Method GetNodesInArea, addr 0x5e73428, size 0x4, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>* GetNodesInArea(::Pathfinding::GraphUpdateShape*  shape) ;

/// @brief Method GetNodesInRegion, addr 0x5e733ec, size 0x3c, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>* GetNodesInRegion(::UnityEngine::Bounds  bounds) ;

/// @brief Method GetNodesInRegion, addr 0x5e734cc, size 0x298, virtual true, abstract: false, final false
inline ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>* GetNodesInRegion(::UnityEngine::Bounds  bounds, ::Pathfinding::GraphUpdateShape*  shape) ;

/// @brief Method GetNodesInRegion, addr 0x5e73764, size 0x230, virtual true, abstract: false, final false
inline ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>* GetNodesInRegion(::Pathfinding::IntRect  rect) ;

/// @brief Method GetNodesInRegion, addr 0x5e7342c, size 0x68, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>* GetNodesInRegion(::Pathfinding::GraphUpdateShape*  shape) ;

/// @brief Method GetNodesInRegion, addr 0x5e73994, size 0x1a0, virtual true, abstract: false, final false
inline int32_t GetNodesInRegion(::Pathfinding::IntRect  rect, ::ArrayW<::Pathfinding::GridNodeBase*>  buffer) ;

/// @brief Method GetRectFromBounds, addr 0x5e73010, size 0x3a0, virtual false, abstract: false, final false
inline ::Pathfinding::IntRect GetRectFromBounds(::UnityEngine::Bounds  bounds) ;

/// @brief Method GraphPointToWorld, addr 0x5e6eaf8, size 0x44, virtual false, abstract: false, final false
inline ::Pathfinding::Int3 GraphPointToWorld(int32_t  x, int32_t  z, float_t  height) ;

/// [Obsolete("Use GridNode.HasConnectionInDirection instead")]
/// @brief Method HasNodeConnection, addr 0x5e6f008, size 0xd8, virtual false, abstract: false, final false
inline bool HasNodeConnection(int32_t  index, int32_t  x, int32_t  z, int32_t  dir) ;

/// [Obsolete("Use GridNode.HasConnectionInDirection instead")]
/// @brief Method HasNodeConnection, addr 0x5e6ef78, size 0x90, virtual false, abstract: false, final false
inline bool HasNodeConnection(::Pathfinding::GridNode*  node, int32_t  dir) ;

/// @brief Method IsValidConnection, addr 0x5e71558, size 0x194, virtual true, abstract: false, final false
inline bool IsValidConnection(::Pathfinding::GridNodeBase*  node1, ::Pathfinding::GridNodeBase*  node2) ;

/// @brief Method Linecast, addr 0x5e749b0, size 0x38, virtual true, abstract: false, final true
inline bool Linecast(::UnityEngine::Vector3  from, ::UnityEngine::Vector3  to) ;

/// [Obsolete("The hint parameter is deprecated")]
/// @brief Method Linecast, addr 0x5e74d68, size 0x38, virtual true, abstract: false, final true
inline bool Linecast(::UnityEngine::Vector3  from, ::UnityEngine::Vector3  to, ::Pathfinding::GraphNode*  hint) ;

/// [Obsolete("The hint parameter is deprecated")]
/// @brief Method Linecast, addr 0x5e74da0, size 0x10, virtual true, abstract: false, final true
inline bool Linecast(::UnityEngine::Vector3  from, ::UnityEngine::Vector3  to, ::Pathfinding::GraphNode*  hint, ::by_ref<::Pathfinding::GraphHitInfo>  hit) ;

/// [Obsolete("The hint parameter is deprecated")]
/// @brief Method Linecast, addr 0x5e74db0, size 0x10, virtual true, abstract: false, final true
inline bool Linecast(::UnityEngine::Vector3  from, ::UnityEngine::Vector3  to, ::Pathfinding::GraphNode*  hint, ::by_ref<::Pathfinding::GraphHitInfo>  hit, ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*  trace) ;

/// @brief Method Linecast, addr 0x5e749e8, size 0x380, virtual true, abstract: false, final true
inline bool Linecast(::UnityEngine::Vector3  from, ::UnityEngine::Vector3  to, ::by_ref<::Pathfinding::GraphHitInfo>  hit, ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*  trace, ::System::Func_2<::Pathfinding::GraphNode*,bool>*  filter) ;

/// @brief Method Linecast, addr 0x5e75290, size 0x2cc, virtual false, abstract: false, final false
inline bool Linecast(::UnityEngine::Vector3  from, ::UnityEngine::Vector3  to, ::by_ref<::Pathfinding::GridHitInfo>  hit, ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*  trace, ::System::Func_2<::Pathfinding::GraphNode*,bool>*  filter) ;

/// @brief Method Linecast, addr 0x5e75978, size 0xdcc, virtual false, abstract: false, final false
inline bool Linecast(::Pathfinding::GridNodeBase*  fromNode, ::Pathfinding::Int2  fixedNormalizedFromPoint, ::Pathfinding::GridNodeBase*  toNode, ::Pathfinding::Int2  fixedNormalizedToPoint, ::by_ref<::Pathfinding::GridHitInfo>  hit, ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*  trace, ::System::Func_2<::Pathfinding::GraphNode*,bool>*  filter, bool  continuePastEnd) ;

/// @brief Method Linecast, addr 0x5e75684, size 0x2f4, virtual false, abstract: false, final false
inline bool Linecast(::Pathfinding::GridNodeBase*  fromNode, ::UnityEngine::Vector2  normalizedFromPoint, ::Pathfinding::GridNodeBase*  toNode, ::UnityEngine::Vector2  normalizedToPoint, ::by_ref<::Pathfinding::GridHitInfo>  hit, ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*  trace, ::System::Func_2<::Pathfinding::GraphNode*,bool>*  filter, bool  continuePastEnd) ;

/// @brief Method Linecast, addr 0x5e75644, size 0x40, virtual false, abstract: false, final false
inline bool Linecast(::Pathfinding::GridNodeBase*  fromNode, ::Pathfinding::GridNodeBase*  toNode, ::System::Func_2<::Pathfinding::GraphNode*,bool>*  filter) ;

static inline ::Pathfinding::GridGraph* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5e6e1bc, size 0x1c, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDrawGizmos, addr 0x5e71db0, size 0x868, virtual true, abstract: false, final false
inline void OnDrawGizmos(::Pathfinding::Util::RetainedGizmos*  gizmos, bool  drawNodes) ;

/// @brief Method Pathfinding.IUpdatableGraph.CanUpdateAsync, addr 0x5e73b90, size 0x8, virtual true, abstract: false, final true
inline ::Pathfinding::GraphUpdateThreading Pathfinding_IUpdatableGraph_CanUpdateAsync(::Pathfinding::GraphUpdateObject*  o) ;

/// @brief Method Pathfinding.IUpdatableGraph.UpdateArea, addr 0x5e74340, size 0x670, virtual true, abstract: false, final true
inline void Pathfinding_IUpdatableGraph_UpdateArea(::Pathfinding::GraphUpdateObject*  o) ;

/// @brief Method Pathfinding.IUpdatableGraph.UpdateAreaInit, addr 0x5e73b98, size 0x4, virtual true, abstract: false, final true
inline void Pathfinding_IUpdatableGraph_UpdateAreaInit(::Pathfinding::GraphUpdateObject*  o) ;

/// @brief Method Pathfinding.IUpdatableGraph.UpdateAreaPost, addr 0x5e73b9c, size 0x4, virtual true, abstract: false, final true
inline void Pathfinding_IUpdatableGraph_UpdateAreaPost(::Pathfinding::GraphUpdateObject*  o) ;

/// @brief Method PostDeserialization, addr 0x5e76ddc, size 0x1c8, virtual true, abstract: false, final false
inline void PostDeserialization(::Pathfinding::Serialization::GraphSerializationContext*  ctx) ;

/// @brief Method RecalculateCell, addr 0x5e70844, size 0x4d0, virtual true, abstract: false, final false
inline void RecalculateCell(int32_t  x, int32_t  z, bool  resetPenalties, bool  resetTags) ;

/// @brief Method RelocateNodes, addr 0x5e6e930, size 0x1a0, virtual false, abstract: false, final false
inline void RelocateNodes(::UnityEngine::Vector3  center, ::UnityEngine::Quaternion  rotation, float_t  nodeSize, float_t  aspectRatio, float_t  isometricAngle) ;

/// @brief Method RelocateNodes, addr 0x5e6e8e4, size 0x4c, virtual true, abstract: false, final false
inline void RelocateNodes(::UnityEngine::Matrix4x4  deltaMatrix) ;

/// @brief Method RemoveGridGraphFromStatic, addr 0x5e6e1d8, size 0x84, virtual false, abstract: false, final false
inline void RemoveGridGraphFromStatic() ;

/// [IteratorStateMachine(typeof(Pathfinding.GridGraph::<ScanInternal>d__92))]
/// @brief Method ScanInternal, addr 0x5e70770, size 0x80, virtual true, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>* ScanInternal() ;

/// @brief Method SerializeExtraInfo, addr 0x5e768f4, size 0xc0, virtual true, abstract: false, final false
inline void SerializeExtraInfo(::Pathfinding::Serialization::GraphSerializationContext*  ctx) ;

/// @brief Method SetDimensions, addr 0x5e6ead8, size 0x20, virtual false, abstract: false, final false
inline void SetDimensions(int32_t  width, int32_t  depth, float_t  nodeSize) ;

/// @brief Method SetGridShape, addr 0x5e6f1d8, size 0xfc, virtual false, abstract: false, final false
inline void SetGridShape(::Pathfinding::InspectorGridMode  shape) ;

/// [Obsolete("Use GridNode.SetConnectionInternal instead")]
/// @brief Method SetNodeConnection, addr 0x5e6f124, size 0xb4, virtual false, abstract: false, final false
inline void SetNodeConnection(int32_t  index, int32_t  x, int32_t  z, int32_t  dir, bool  value) ;

/// [Obsolete("Use GridNode.SetConnectionInternal instead")]
/// @brief Method SetNodeConnection, addr 0x5e6f0e0, size 0x44, virtual false, abstract: false, final false
inline void SetNodeConnection(::Pathfinding::GridNode*  node, int32_t  dir, bool  value) ;

/// @brief Method SetUpOffsetsAndCosts, addr 0x5e703a4, size 0x3cc, virtual true, abstract: false, final false
inline void SetUpOffsetsAndCosts() ;

/// [Obsolete("Use Linecast instead")]
/// @brief Method SnappedLinecast, addr 0x5e7555c, size 0xe8, virtual false, abstract: false, final false
inline bool SnappedLinecast(::UnityEngine::Vector3  from, ::UnityEngine::Vector3  to, ::Pathfinding::GraphNode*  hint, ::by_ref<::Pathfinding::GraphHitInfo>  hit) ;

/// [Obsolete("Use RecalculateCell instead which works both for grid graphs and layered grid graphs")]
/// @brief Method UpdateNodePositionCollision, addr 0x5e70824, size 0x20, virtual true, abstract: false, final false
inline void UpdateNodePositionCollision(::Pathfinding::GridNode*  node, int32_t  x, int32_t  z, bool  resetPenalty) ;

/// [Obsolete("Use SetDimensions instead")]
/// @brief Method UpdateSizeFromWidthDepth, addr 0x5e6f308, size 0x1c, virtual false, abstract: false, final false
inline void UpdateSizeFromWidthDepth() ;

/// @brief Method UpdateTransform, addr 0x5e6f2d4, size 0x34, virtual false, abstract: false, final false
inline void UpdateTransform() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get__size_k__BackingField() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get__size_k__BackingField() ;

constexpr ::Pathfinding::Util::GraphTransform* const& __cordl_internal_get__transform_k__BackingField() const;

constexpr ::Pathfinding::Util::GraphTransform*& __cordl_internal_get__transform_k__BackingField() ;

constexpr float_t const& __cordl_internal_get_aspectRatio() const;

constexpr float_t& __cordl_internal_get_aspectRatio() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_center() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_center() ;

constexpr ::Pathfinding::GraphCollision* const& __cordl_internal_get_collision() const;

constexpr ::Pathfinding::GraphCollision*& __cordl_internal_get_collision() ;

constexpr bool const& __cordl_internal_get_cutCorners() const;

constexpr bool& __cordl_internal_get_cutCorners() ;

constexpr int32_t const& __cordl_internal_get_depth() const;

constexpr int32_t& __cordl_internal_get_depth() ;

constexpr int32_t const& __cordl_internal_get_erodeIterations() const;

constexpr int32_t& __cordl_internal_get_erodeIterations() ;

constexpr int32_t const& __cordl_internal_get_erosionFirstTag() const;

constexpr int32_t& __cordl_internal_get_erosionFirstTag() ;

constexpr bool const& __cordl_internal_get_erosionUseTags() const;

constexpr bool& __cordl_internal_get_erosionUseTags() ;

constexpr ::Pathfinding::InspectorGridMode const& __cordl_internal_get_inspectorGridMode() const;

constexpr ::Pathfinding::InspectorGridMode& __cordl_internal_get_inspectorGridMode() ;

constexpr ::Pathfinding::InspectorGridHexagonNodeSize const& __cordl_internal_get_inspectorHexagonSizeMode() const;

constexpr ::Pathfinding::InspectorGridHexagonNodeSize& __cordl_internal_get_inspectorHexagonSizeMode() ;

constexpr float_t const& __cordl_internal_get_isometricAngle() const;

constexpr float_t& __cordl_internal_get_isometricAngle() ;

constexpr float_t const& __cordl_internal_get_maxClimb() const;

constexpr float_t& __cordl_internal_get_maxClimb() ;

constexpr float_t const& __cordl_internal_get_maxSlope() const;

constexpr float_t& __cordl_internal_get_maxSlope() ;

constexpr ::ArrayW<uint32_t> const& __cordl_internal_get_neighbourCosts() const;

constexpr ::ArrayW<uint32_t>& __cordl_internal_get_neighbourCosts() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_neighbourOffsets() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_neighbourOffsets() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_neighbourXOffsets() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_neighbourXOffsets() ;

constexpr ::ArrayW<int32_t> const& __cordl_internal_get_neighbourZOffsets() const;

constexpr ::ArrayW<int32_t>& __cordl_internal_get_neighbourZOffsets() ;

constexpr ::Pathfinding::NumNeighbours const& __cordl_internal_get_neighbours() const;

constexpr ::Pathfinding::NumNeighbours& __cordl_internal_get_neighbours() ;

constexpr float_t const& __cordl_internal_get_nodeSize() const;

constexpr float_t& __cordl_internal_get_nodeSize() ;

constexpr ::ArrayW<::Pathfinding::GridNodeBase*> const& __cordl_internal_get_nodes() const;

constexpr ::ArrayW<::Pathfinding::GridNodeBase*>& __cordl_internal_get_nodes() ;

constexpr bool const& __cordl_internal_get_penaltyAngle() const;

constexpr bool& __cordl_internal_get_penaltyAngle() ;

constexpr float_t const& __cordl_internal_get_penaltyAngleFactor() const;

constexpr float_t& __cordl_internal_get_penaltyAngleFactor() ;

constexpr float_t const& __cordl_internal_get_penaltyAnglePower() const;

constexpr float_t& __cordl_internal_get_penaltyAnglePower() ;

constexpr bool const& __cordl_internal_get_penaltyPosition() const;

constexpr bool& __cordl_internal_get_penaltyPosition() ;

constexpr float_t const& __cordl_internal_get_penaltyPositionFactor() const;

constexpr float_t& __cordl_internal_get_penaltyPositionFactor() ;

constexpr float_t const& __cordl_internal_get_penaltyPositionOffset() const;

constexpr float_t& __cordl_internal_get_penaltyPositionOffset() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_rotation() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_rotation() ;

constexpr bool const& __cordl_internal_get_showMeshOutline() const;

constexpr bool& __cordl_internal_get_showMeshOutline() ;

constexpr bool const& __cordl_internal_get_showMeshSurface() const;

constexpr bool& __cordl_internal_get_showMeshSurface() ;

constexpr bool const& __cordl_internal_get_showNodeConnections() const;

constexpr bool& __cordl_internal_get_showNodeConnections() ;

constexpr ::Pathfinding::GridGraph_TextureData* const& __cordl_internal_get_textureData() const;

constexpr ::Pathfinding::GridGraph_TextureData*& __cordl_internal_get_textureData() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_unclampedSize() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_unclampedSize() ;

constexpr bool const& __cordl_internal_get_uniformEdgeCosts() const;

constexpr bool& __cordl_internal_get_uniformEdgeCosts() ;

constexpr bool const& __cordl_internal_get_useJumpPointSearch() const;

constexpr bool& __cordl_internal_get_useJumpPointSearch() ;

constexpr int32_t const& __cordl_internal_get_width() const;

constexpr int32_t& __cordl_internal_get_width() ;

constexpr void __cordl_internal_set__size_k__BackingField(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set__transform_k__BackingField(::Pathfinding::Util::GraphTransform*  value) ;

constexpr void __cordl_internal_set_aspectRatio(float_t  value) ;

constexpr void __cordl_internal_set_center(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_collision(::Pathfinding::GraphCollision*  value) ;

constexpr void __cordl_internal_set_cutCorners(bool  value) ;

constexpr void __cordl_internal_set_depth(int32_t  value) ;

constexpr void __cordl_internal_set_erodeIterations(int32_t  value) ;

constexpr void __cordl_internal_set_erosionFirstTag(int32_t  value) ;

constexpr void __cordl_internal_set_erosionUseTags(bool  value) ;

constexpr void __cordl_internal_set_inspectorGridMode(::Pathfinding::InspectorGridMode  value) ;

constexpr void __cordl_internal_set_inspectorHexagonSizeMode(::Pathfinding::InspectorGridHexagonNodeSize  value) ;

constexpr void __cordl_internal_set_isometricAngle(float_t  value) ;

constexpr void __cordl_internal_set_maxClimb(float_t  value) ;

constexpr void __cordl_internal_set_maxSlope(float_t  value) ;

constexpr void __cordl_internal_set_neighbourCosts(::ArrayW<uint32_t>  value) ;

constexpr void __cordl_internal_set_neighbourOffsets(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_neighbourXOffsets(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_neighbourZOffsets(::ArrayW<int32_t>  value) ;

constexpr void __cordl_internal_set_neighbours(::Pathfinding::NumNeighbours  value) ;

constexpr void __cordl_internal_set_nodeSize(float_t  value) ;

constexpr void __cordl_internal_set_nodes(::ArrayW<::Pathfinding::GridNodeBase*>  value) ;

constexpr void __cordl_internal_set_penaltyAngle(bool  value) ;

constexpr void __cordl_internal_set_penaltyAngleFactor(float_t  value) ;

constexpr void __cordl_internal_set_penaltyAnglePower(float_t  value) ;

constexpr void __cordl_internal_set_penaltyPosition(bool  value) ;

constexpr void __cordl_internal_set_penaltyPositionFactor(float_t  value) ;

constexpr void __cordl_internal_set_penaltyPositionOffset(float_t  value) ;

constexpr void __cordl_internal_set_rotation(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_showMeshOutline(bool  value) ;

constexpr void __cordl_internal_set_showMeshSurface(bool  value) ;

constexpr void __cordl_internal_set_showNodeConnections(bool  value) ;

constexpr void __cordl_internal_set_textureData(::Pathfinding::GridGraph_TextureData*  value) ;

constexpr void __cordl_internal_set_unclampedSize(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_uniformEdgeCosts(bool  value) ;

constexpr void __cordl_internal_set_useJumpPointSearch(bool  value) ;

constexpr void __cordl_internal_set_width(int32_t  value) ;

/// @brief Method .ctor, addr 0x5e6e620, size 0x228, virtual false, abstract: false, final false
inline void _ctor() ;

static inline float_t getStaticF_StandardDimetricAngle() ;

static inline float_t getStaticF_StandardIsometricAngle() ;

static inline ::ArrayW<int32_t> getStaticF_hexagonNeighbourIndices() ;

/// @brief Method get_Depth, addr 0x5e6ec84, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Depth() ;

/// @brief Method get_LayerCount, addr 0x5e6e358, size 0x8, virtual true, abstract: false, final false
inline int32_t get_LayerCount() ;

/// @brief Method get_Width, addr 0x5e6ec74, size 0x8, virtual false, abstract: false, final false
inline int32_t get_Width() ;

/// @brief Method get_is2D, addr 0x5e6e48c, size 0x120, virtual false, abstract: false, final false
inline bool get_is2D() ;

/// [CompilerGenerated]
/// @brief Method get_size, addr 0x5e6e45c, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_size() ;

/// [CompilerGenerated]
/// @brief Method get_transform, addr 0x5e6e474, size 0x8, virtual true, abstract: false, final true
inline ::Pathfinding::Util::GraphTransform* get_transform() ;

/// @brief Method get_uniformWidthDepthGrid, addr 0x5e6e350, size 0x8, virtual true, abstract: false, final false
inline bool get_uniformWidthDepthGrid() ;

/// @brief Method get_useRaycastNormal, addr 0x5e6e3e4, size 0x78, virtual false, abstract: false, final false
inline bool get_useRaycastNormal() ;

/// @brief Convert to "::Pathfinding::IRaycastableGraph"
constexpr ::Pathfinding::IRaycastableGraph* i___Pathfinding__IRaycastableGraph() noexcept;

/// @brief Convert to "::Pathfinding::ITransformedGraph"
constexpr ::Pathfinding::ITransformedGraph* i___Pathfinding__ITransformedGraph() noexcept;

/// @brief Convert to "::Pathfinding::IUpdatableGraph"
constexpr ::Pathfinding::IUpdatableGraph* i___Pathfinding__IUpdatableGraph() noexcept;

static inline void setStaticF_StandardDimetricAngle(float_t  value) ;

static inline void setStaticF_StandardIsometricAngle(float_t  value) ;

static inline void setStaticF_hexagonNeighbourIndices(::ArrayW<int32_t>  value) ;

/// @brief Method set_Depth, addr 0x5e6ec8c, size 0x8, virtual false, abstract: false, final false
inline void set_Depth(int32_t  value) ;

/// @brief Method set_Width, addr 0x5e6ec7c, size 0x8, virtual false, abstract: false, final false
inline void set_Width(int32_t  value) ;

/// @brief Method set_is2D, addr 0x5e6e5ac, size 0x74, virtual false, abstract: false, final false
inline void set_is2D(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_size, addr 0x5e6e468, size 0xc, virtual false, abstract: false, final false
inline void set_size(::UnityEngine::Vector2  value) ;

/// [CompilerGenerated]
/// @brief Method set_transform, addr 0x5e6e47c, size 0x10, virtual false, abstract: false, final false
inline void set_transform(::Pathfinding::Util::GraphTransform*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GridGraph() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GridGraph", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GridGraph(GridGraph && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GridGraph", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GridGraph(GridGraph const& ) = delete;

/// @brief Field FixedPrecisionScale offset 0xffffffff size 0x4
static constexpr int32_t  FixedPrecisionScale{static_cast<int32_t>(0x400)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21305};

/// @brief Field getNearestForceOverlap offset 0xffffffff size 0x4
static constexpr int32_t  getNearestForceOverlap{static_cast<int32_t>(0x2)};

/// [JsonMember]
/// @brief Field inspectorGridMode, offset: 0xd0, size: 0x4, def value: None
 ::Pathfinding::InspectorGridMode  ___inspectorGridMode;

/// [JsonMember]
/// @brief Field inspectorHexagonSizeMode, offset: 0xd4, size: 0x4, def value: None
 ::Pathfinding::InspectorGridHexagonNodeSize  ___inspectorHexagonSizeMode;

/// @brief Field width, offset: 0xd8, size: 0x4, def value: None
 int32_t  ___width;

/// @brief Field depth, offset: 0xdc, size: 0x4, def value: None
 int32_t  ___depth;

/// [JsonMember]
/// @brief Field aspectRatio, offset: 0xe0, size: 0x4, def value: None
 float_t  ___aspectRatio;

/// [JsonMember]
/// @brief Field isometricAngle, offset: 0xe4, size: 0x4, def value: None
 float_t  ___isometricAngle;

/// [JsonMember]
/// @brief Field uniformEdgeCosts, offset: 0xe8, size: 0x1, def value: None
 bool  ___uniformEdgeCosts;

/// [JsonMember]
/// @brief Field rotation, offset: 0xec, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___rotation;

/// [JsonMember]
/// @brief Field center, offset: 0xf8, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___center;

/// [JsonMember]
/// @brief Field unclampedSize, offset: 0x104, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___unclampedSize;

/// [JsonMember]
/// @brief Field nodeSize, offset: 0x10c, size: 0x4, def value: None
 float_t  ___nodeSize;

/// [JsonMember]
/// @brief Field collision, offset: 0x110, size: 0x8, def value: None
 ::Pathfinding::GraphCollision*  ___collision;

/// [JsonMember]
/// @brief Field maxClimb, offset: 0x118, size: 0x4, def value: None
 float_t  ___maxClimb;

/// [JsonMember]
/// @brief Field maxSlope, offset: 0x11c, size: 0x4, def value: None
 float_t  ___maxSlope;

/// [JsonMember]
/// @brief Field erodeIterations, offset: 0x120, size: 0x4, def value: None
 int32_t  ___erodeIterations;

/// [JsonMember]
/// @brief Field erosionUseTags, offset: 0x124, size: 0x1, def value: None
 bool  ___erosionUseTags;

/// [JsonMember]
/// @brief Field erosionFirstTag, offset: 0x128, size: 0x4, def value: None
 int32_t  ___erosionFirstTag;

/// [JsonMember]
/// @brief Field neighbours, offset: 0x12c, size: 0x4, def value: None
 ::Pathfinding::NumNeighbours  ___neighbours;

/// [JsonMember]
/// @brief Field cutCorners, offset: 0x130, size: 0x1, def value: None
 bool  ___cutCorners;

/// [JsonMember]
/// @brief Field penaltyPositionOffset, offset: 0x134, size: 0x4, def value: None
 float_t  ___penaltyPositionOffset;

/// [JsonMember]
/// @brief Field penaltyPosition, offset: 0x138, size: 0x1, def value: None
 bool  ___penaltyPosition;

/// [JsonMember]
/// @brief Field penaltyPositionFactor, offset: 0x13c, size: 0x4, def value: None
 float_t  ___penaltyPositionFactor;

/// [JsonMember]
/// @brief Field penaltyAngle, offset: 0x140, size: 0x1, def value: None
 bool  ___penaltyAngle;

/// [JsonMember]
/// @brief Field penaltyAngleFactor, offset: 0x144, size: 0x4, def value: None
 float_t  ___penaltyAngleFactor;

/// [JsonMember]
/// @brief Field penaltyAnglePower, offset: 0x148, size: 0x4, def value: None
 float_t  ___penaltyAnglePower;

/// [JsonMember]
/// @brief Field useJumpPointSearch, offset: 0x14c, size: 0x1, def value: None
 bool  ___useJumpPointSearch;

/// [JsonMember]
/// @brief Field showMeshOutline, offset: 0x14d, size: 0x1, def value: None
 bool  ___showMeshOutline;

/// [JsonMember]
/// @brief Field showNodeConnections, offset: 0x14e, size: 0x1, def value: None
 bool  ___showNodeConnections;

/// [JsonMember]
/// @brief Field showMeshSurface, offset: 0x14f, size: 0x1, def value: None
 bool  ___showMeshSurface;

/// [JsonMember]
/// @brief Field textureData, offset: 0x150, size: 0x8, def value: None
 ::Pathfinding::GridGraph_TextureData*  ___textureData;

/// [CompilerGenerated]
/// @brief Field <size>k__BackingField, offset: 0x158, size: 0x8, def value: None
 ::UnityEngine::Vector2  ____size_k__BackingField;

/// @brief Field neighbourOffsets, offset: 0x160, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___neighbourOffsets;

/// @brief Field neighbourCosts, offset: 0x168, size: 0x8, def value: None
 ::ArrayW<uint32_t>  ___neighbourCosts;

/// @brief Field neighbourXOffsets, offset: 0x170, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___neighbourXOffsets;

/// @brief Field neighbourZOffsets, offset: 0x178, size: 0x8, def value: None
 ::ArrayW<int32_t>  ___neighbourZOffsets;

/// @brief Field nodes, offset: 0x180, size: 0x8, def value: None
 ::ArrayW<::Pathfinding::GridNodeBase*>  ___nodes;

/// [CompilerGenerated]
/// @brief Field <transform>k__BackingField, offset: 0x188, size: 0x8, def value: None
 ::Pathfinding::Util::GraphTransform*  ____transform_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::GridGraph, ___inspectorGridMode) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GridGraph, ___inspectorHexagonSizeMode) == 0xd4, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GridGraph, ___width) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GridGraph, ___depth) == 0xdc, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GridGraph, ___aspectRatio) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GridGraph, ___isometricAngle) == 0xe4, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GridGraph, ___uniformEdgeCosts) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GridGraph, ___rotation) == 0xec, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GridGraph, ___center) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GridGraph, ___unclampedSize) == 0x104, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GridGraph, ___nodeSize) == 0x10c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GridGraph, ___collision) == 0x110, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GridGraph, ___maxClimb) == 0x118, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GridGraph, ___maxSlope) == 0x11c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GridGraph, ___erodeIterations) == 0x120, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GridGraph, ___erosionUseTags) == 0x124, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GridGraph, ___erosionFirstTag) == 0x128, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GridGraph, ___neighbours) == 0x12c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GridGraph, ___cutCorners) == 0x130, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GridGraph, ___penaltyPositionOffset) == 0x134, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GridGraph, ___penaltyPosition) == 0x138, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GridGraph, ___penaltyPositionFactor) == 0x13c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GridGraph, ___penaltyAngle) == 0x140, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GridGraph, ___penaltyAngleFactor) == 0x144, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GridGraph, ___penaltyAnglePower) == 0x148, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GridGraph, ___useJumpPointSearch) == 0x14c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GridGraph, ___showMeshOutline) == 0x14d, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GridGraph, ___showNodeConnections) == 0x14e, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GridGraph, ___showMeshSurface) == 0x14f, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GridGraph, ___textureData) == 0x150, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GridGraph, ____size_k__BackingField) == 0x158, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GridGraph, ___neighbourOffsets) == 0x160, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GridGraph, ___neighbourCosts) == 0x168, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GridGraph, ___neighbourXOffsets) == 0x170, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GridGraph, ___neighbourZOffsets) == 0x178, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GridGraph, ___nodes) == 0x180, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GridGraph, ____transform_k__BackingField) == 0x188, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::GridGraph) == 0x190, "Size mismatch!");

} // namespace end def Pathfinding
// [CompilerGenerated]
// Dependencies Pathfinding.Progress, System.Object
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.GridGraph/<ScanInternal>d__92
class CORDL_TYPE GridGraph__ScanInternal_d__92 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_Pathfinding_Progress__get_Current)) ::Pathfinding::Progress  System_Collections_Generic_IEnumerator_Pathfinding_Progress__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::Pathfinding::Progress  __2__current;

/// @brief Field <>4__this, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Pathfinding::GridGraph*  __4__this;

/// @brief Field <>l__initialThreadId, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get___l__initialThreadId, put=__cordl_internal_set___l__initialThreadId)) int32_t  __l__initialThreadId;

/// @brief Field <progressCounter>5__2, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get__progressCounter_5__2, put=__cordl_internal_set__progressCounter_5__2)) int32_t  _progressCounter_5__2;

/// @brief Field <z>5__3, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__z_5__3, put=__cordl_internal_set__z_5__3)) int32_t  _z_5__3;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x5e777b8, size 0x650, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Pathfinding::GridGraph__ScanInternal_d__92* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerable<Pathfinding.Progress>.GetEnumerator, addr 0x5e77ea8, size 0xa4, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>* System_Collections_Generic_IEnumerable_Pathfinding_Progress__GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<Pathfinding.Progress>.get_Current, addr 0x5e77e08, size 0xc, virtual true, abstract: false, final true
inline ::Pathfinding::Progress System_Collections_Generic_IEnumerator_Pathfinding_Progress__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x5e77f4c, size 0x4, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5e77e14, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5e77e4c, size 0x5c, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5e777b4, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::Pathfinding::Progress const& __cordl_internal_get___2__current() const;

constexpr ::Pathfinding::Progress& __cordl_internal_get___2__current() ;

constexpr ::Pathfinding::GridGraph* const& __cordl_internal_get___4__this() const;

constexpr ::Pathfinding::GridGraph*& __cordl_internal_get___4__this() ;

constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

constexpr int32_t& __cordl_internal_get___l__initialThreadId() ;

constexpr int32_t const& __cordl_internal_get__progressCounter_5__2() const;

constexpr int32_t& __cordl_internal_get__progressCounter_5__2() ;

constexpr int32_t const& __cordl_internal_get__z_5__3() const;

constexpr int32_t& __cordl_internal_get__z_5__3() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::Pathfinding::Progress  value) ;

constexpr void __cordl_internal_set___4__this(::Pathfinding::GridGraph*  value) ;

constexpr void __cordl_internal_set___l__initialThreadId(int32_t  value) ;

constexpr void __cordl_internal_set__progressCounter_5__2(int32_t  value) ;

constexpr void __cordl_internal_set__z_5__3(int32_t  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5e707f0, size 0x34, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>"
constexpr ::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>* i___System__Collections__Generic__IEnumerable_1___Pathfinding__Progress_() noexcept;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>"
constexpr ::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>* i___System__Collections__Generic__IEnumerator_1___Pathfinding__Progress_() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GridGraph__ScanInternal_d__92() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GridGraph__ScanInternal_d__92", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GridGraph__ScanInternal_d__92(GridGraph__ScanInternal_d__92 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GridGraph__ScanInternal_d__92", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GridGraph__ScanInternal_d__92(GridGraph__ScanInternal_d__92 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21304};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x10, def value: None
 ::Pathfinding::Progress  _____2__current;

/// @brief Field <>l__initialThreadId, offset: 0x28, size: 0x4, def value: None
 int32_t  _____l__initialThreadId;

/// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
 ::Pathfinding::GridGraph*  _____4__this;

/// @brief Field <progressCounter>5__2, offset: 0x38, size: 0x4, def value: None
 int32_t  ____progressCounter_5__2;

/// @brief Field <z>5__3, offset: 0x3c, size: 0x4, def value: None
 int32_t  ____z_5__3;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::GridGraph__ScanInternal_d__92, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GridGraph__ScanInternal_d__92, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GridGraph__ScanInternal_d__92, _____l__initialThreadId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GridGraph__ScanInternal_d__92, _____4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GridGraph__ScanInternal_d__92, ____progressCounter_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GridGraph__ScanInternal_d__92, ____z_5__3) == 0x3c, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::GridGraph__ScanInternal_d__92) == 0x40, "Size mismatch!");

} // namespace end def Pathfinding
// [CompilerGenerated]
// Dependencies System.Object
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.GridGraph/<>c__DisplayClass64_0
class CORDL_TYPE GridGraph___c__DisplayClass64_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Pathfinding::GridGraph*  __4__this;

/// @brief Field previousTransform, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_previousTransform, put=__cordl_internal_set_previousTransform)) ::Pathfinding::Util::GraphTransform*  previousTransform;

static inline ::Pathfinding::GridGraph___c__DisplayClass64_0* New_ctor() ;

/// @brief Method <RelocateNodes>b__0, addr 0x5e776b8, size 0xfc, virtual false, abstract: false, final false
inline void _RelocateNodes_b__0(::Pathfinding::GraphNode*  node) ;

constexpr ::Pathfinding::GridGraph* const& __cordl_internal_get___4__this() const;

constexpr ::Pathfinding::GridGraph*& __cordl_internal_get___4__this() ;

constexpr ::Pathfinding::Util::GraphTransform* const& __cordl_internal_get_previousTransform() const;

constexpr ::Pathfinding::Util::GraphTransform*& __cordl_internal_get_previousTransform() ;

constexpr void __cordl_internal_set___4__this(::Pathfinding::GridGraph*  value) ;

constexpr void __cordl_internal_set_previousTransform(::Pathfinding::Util::GraphTransform*  value) ;

/// @brief Method .ctor, addr 0x5e6ead0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GridGraph___c__DisplayClass64_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GridGraph___c__DisplayClass64_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GridGraph___c__DisplayClass64_0(GridGraph___c__DisplayClass64_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GridGraph___c__DisplayClass64_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GridGraph___c__DisplayClass64_0(GridGraph___c__DisplayClass64_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21303};

/// @brief Field previousTransform, offset: 0x10, size: 0x8, def value: None
 ::Pathfinding::Util::GraphTransform*  ___previousTransform;

/// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
 ::Pathfinding::GridGraph*  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::GridGraph___c__DisplayClass64_0, ___previousTransform) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GridGraph___c__DisplayClass64_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::GridGraph___c__DisplayClass64_0) == 0x20, "Size mismatch!");

} // namespace end def Pathfinding
// [CompilerGenerated]
// Dependencies System.Object
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.GridGraph/<>c
class CORDL_TYPE GridGraph___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Pathfinding::GridGraph___c*  __9;

/// @brief Field <>9__1_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__1_0, put=setStaticF___9__1_0)) ::System::Action_1<::Pathfinding::GraphNode*>*  __9__1_0;

static inline ::Pathfinding::GridGraph___c* New_ctor() ;

/// @brief Method <DestroyAllNodes>b__1_0, addr 0x5e77618, size 0xa0, virtual false, abstract: false, final false
inline void _DestroyAllNodes_b__1_0(::Pathfinding::GraphNode*  node) ;

/// @brief Method .ctor, addr 0x5e77610, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Pathfinding::GridGraph___c* getStaticF___9() ;

static inline ::System::Action_1<::Pathfinding::GraphNode*>* getStaticF___9__1_0() ;

static inline void setStaticF___9(::Pathfinding::GridGraph___c*  value) ;

static inline void setStaticF___9__1_0(::System::Action_1<::Pathfinding::GraphNode*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GridGraph___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GridGraph___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GridGraph___c(GridGraph___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GridGraph___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GridGraph___c(GridGraph___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21302};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Pathfinding::GridGraph___c) == 0x10, "Size mismatch!");

} // namespace end def Pathfinding
// Dependencies Pathfinding.GridGraph::TextureData::ChannelUse, System.Object, UnityEngine.Color32
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.GridGraph/TextureData
class CORDL_TYPE GridGraph_TextureData : public ::System::Object {
public:
// Declarations
using ChannelUse = ::GlobalNamespace::TextureData_GridGraph_ChannelUse;

/// @brief Field channels, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_channels, put=__cordl_internal_set_channels)) ::ArrayW<::GlobalNamespace::TextureData_GridGraph_ChannelUse>  channels;

/// @brief Field data, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_data, put=__cordl_internal_set_data)) ::ArrayW<::UnityEngine::Color32>  data;

/// @brief Field enabled, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_enabled, put=__cordl_internal_set_enabled)) bool  enabled;

/// @brief Field factors, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_factors, put=__cordl_internal_set_factors)) ::ArrayW<float_t>  factors;

/// @brief Field source, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_source, put=__cordl_internal_set_source)) ::UnityW<::UnityEngine::Texture2D>  source;

/// @brief Method Apply, addr 0x5e771f4, size 0x1b0, virtual false, abstract: false, final false
inline void Apply(::Pathfinding::GridNodeBase*  node, int32_t  x, int32_t  z) ;

/// @brief Method ApplyChannel, addr 0x5e773a4, size 0x204, virtual false, abstract: false, final false
inline void ApplyChannel(::Pathfinding::GridNodeBase*  node, int32_t  x, int32_t  z, int32_t  value, ::GlobalNamespace::TextureData_GridGraph_ChannelUse  channelUse, float_t  factor) ;

/// @brief Method Initialize, addr 0x5e77050, size 0x1a4, virtual false, abstract: false, final false
inline void Initialize() ;

static inline ::Pathfinding::GridGraph_TextureData* New_ctor() ;

constexpr ::ArrayW<::GlobalNamespace::TextureData_GridGraph_ChannelUse> const& __cordl_internal_get_channels() const;

constexpr ::ArrayW<::GlobalNamespace::TextureData_GridGraph_ChannelUse>& __cordl_internal_get_channels() ;

constexpr ::ArrayW<::UnityEngine::Color32> const& __cordl_internal_get_data() const;

constexpr ::ArrayW<::UnityEngine::Color32>& __cordl_internal_get_data() ;

constexpr bool const& __cordl_internal_get_enabled() const;

constexpr bool& __cordl_internal_get_enabled() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_factors() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_factors() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_source() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_source() ;

constexpr void __cordl_internal_set_channels(::ArrayW<::GlobalNamespace::TextureData_GridGraph_ChannelUse>  value) ;

constexpr void __cordl_internal_set_data(::ArrayW<::UnityEngine::Color32>  value) ;

constexpr void __cordl_internal_set_enabled(bool  value) ;

constexpr void __cordl_internal_set_factors(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set_source(::UnityW<::UnityEngine::Texture2D>  value) ;

/// @brief Method .ctor, addr 0x5e6e848, size 0x9c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GridGraph_TextureData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GridGraph_TextureData", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GridGraph_TextureData(GridGraph_TextureData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GridGraph_TextureData", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GridGraph_TextureData(GridGraph_TextureData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21301};

/// @brief Field enabled, offset: 0x10, size: 0x1, def value: None
 bool  ___enabled;

/// @brief Field source, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___source;

/// @brief Field factors, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<float_t>  ___factors;

/// @brief Field channels, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::TextureData_GridGraph_ChannelUse>  ___channels;

/// @brief Field data, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Color32>  ___data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::GridGraph_TextureData, ___enabled) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GridGraph_TextureData, ___source) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GridGraph_TextureData, ___factors) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GridGraph_TextureData, ___channels) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GridGraph_TextureData, ___data) == 0x30, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::GridGraph_TextureData) == 0x38, "Size mismatch!");

} // namespace end def Pathfinding
