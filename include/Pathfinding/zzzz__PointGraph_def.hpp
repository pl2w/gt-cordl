#pragma once
// IWYU pragma private; include "Pathfinding/PointGraph.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/zzzz__NavGraph_def.hpp"
#include "Pathfinding/zzzz__PointGraph_NodeDistanceMode_def.hpp"
#include "Pathfinding/zzzz__PointNode_def.hpp"
#include "Pathfinding/zzzz__Progress_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(PointGraph)
namespace GlobalNamespace {
struct PointGraph_NodeDistanceMode;
}
namespace Pathfinding::Serialization {
class GraphSerializationContext;
}
namespace Pathfinding {
struct Connection;
}
namespace Pathfinding {
class GraphNode;
}
namespace Pathfinding {
class GraphUpdateObject;
}
namespace Pathfinding {
struct GraphUpdateThreading;
}
namespace Pathfinding {
class IUpdatableGraph;
}
namespace Pathfinding {
struct Int3;
}
namespace Pathfinding {
class NNConstraint;
}
namespace Pathfinding {
struct NNInfoInternal;
}
namespace Pathfinding {
class PointGraph__ConnectNodesAsync_d__37;
}
namespace Pathfinding {
class PointGraph__ScanInternal_d__35;
}
namespace Pathfinding {
class PointKDTree;
}
namespace Pathfinding {
class PointNode;
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
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Pathfinding {
class PointGraph;
}
namespace Pathfinding {
class PointGraph__ConnectNodesAsync_d__37;
}
namespace Pathfinding {
class PointGraph__ScanInternal_d__35;
}
// Write type traits
MARK_REF_T(::Pathfinding::PointGraph*);
MARK_REF_T(::Pathfinding::PointGraph__ConnectNodesAsync_d__37*);
MARK_REF_T(::Pathfinding::PointGraph__ScanInternal_d__35*);
DEFINE_IL2CPP_CLASS(::Pathfinding::PointGraph*, "Pathfinding", "PointGraph");
DEFINE_IL2CPP_CLASS(::Pathfinding::PointGraph__ConnectNodesAsync_d__37*, "Pathfinding", "PointGraph/<ConnectNodesAsync>d__37");
DEFINE_IL2CPP_CLASS(::Pathfinding::PointGraph__ScanInternal_d__35*, "Pathfinding", "PointGraph/<ScanInternal>d__35");
// [JsonOptIn]
// [Preserve]
// Dependencies Pathfinding.NavGraph, Pathfinding.PointGraph::NodeDistanceMode, Pathfinding.PointNode, UnityEngine.LayerMask, UnityEngine.Vector3
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.PointGraph
class CORDL_TYPE PointGraph : public ::Pathfinding::NavGraph {
public:
// Declarations
using NodeDistanceMode = ::GlobalNamespace::PointGraph_NodeDistanceMode;

using _ConnectNodesAsync_d__37 = ::Pathfinding::PointGraph__ConnectNodesAsync_d__37;

using _ScanInternal_d__35 = ::Pathfinding::PointGraph__ScanInternal_d__35;

/// @brief Field <nodeCount>k__BackingField, offset 0x124, size 0x4 
 __declspec(property(get=__cordl_internal_get__nodeCount_k__BackingField, put=__cordl_internal_set__nodeCount_k__BackingField)) int32_t  _nodeCount_k__BackingField;

/// @brief Field limits, offset 0xe4, size 0xc 
 __declspec(property(get=__cordl_internal_get_limits, put=__cordl_internal_set_limits)) ::UnityEngine::Vector3  limits;

/// @brief Field lookupTree, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get_lookupTree, put=__cordl_internal_set_lookupTree)) ::Pathfinding::PointKDTree*  lookupTree;

/// @brief Field mask, offset 0xfc, size 0x4 
 __declspec(property(get=__cordl_internal_get_mask, put=__cordl_internal_set_mask)) ::UnityEngine::LayerMask  mask;

/// @brief Field maxDistance, offset 0xe0, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxDistance, put=__cordl_internal_set_maxDistance)) float_t  maxDistance;

/// @brief Field maximumConnectionLength, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get_maximumConnectionLength, put=__cordl_internal_set_maximumConnectionLength)) int64_t  maximumConnectionLength;

/// @brief Field nearestNodeDistanceMode, offset 0x120, size 0x4 
 __declspec(property(get=__cordl_internal_get_nearestNodeDistanceMode, put=__cordl_internal_set_nearestNodeDistanceMode)) ::GlobalNamespace::PointGraph_NodeDistanceMode  nearestNodeDistanceMode;

 __declspec(property(get=get_nodeCount, put=set_nodeCount)) int32_t  nodeCount;

/// @brief Field nodes, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get_nodes, put=__cordl_internal_set_nodes)) ::ArrayW<::Pathfinding::PointNode*>  nodes;

/// @brief Field optimizeForSparseGraph, offset 0x100, size 0x1 
 __declspec(property(get=__cordl_internal_get_optimizeForSparseGraph, put=__cordl_internal_set_optimizeForSparseGraph)) bool  optimizeForSparseGraph;

/// @brief Field raycast, offset 0xf0, size 0x1 
 __declspec(property(get=__cordl_internal_get_raycast, put=__cordl_internal_set_raycast)) bool  raycast;

/// @brief Field recursive, offset 0xf8, size 0x1 
 __declspec(property(get=__cordl_internal_get_recursive, put=__cordl_internal_set_recursive)) bool  recursive;

/// @brief Field root, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_root, put=__cordl_internal_set_root)) ::UnityW<::UnityEngine::Transform>  root;

/// @brief Field searchTag, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_searchTag, put=__cordl_internal_set_searchTag)) ::StringW  searchTag;

/// @brief Field thickRaycast, offset 0xf2, size 0x1 
 __declspec(property(get=__cordl_internal_get_thickRaycast, put=__cordl_internal_set_thickRaycast)) bool  thickRaycast;

/// @brief Field thickRaycastRadius, offset 0xf4, size 0x4 
 __declspec(property(get=__cordl_internal_get_thickRaycastRadius, put=__cordl_internal_set_thickRaycastRadius)) float_t  thickRaycastRadius;

/// @brief Field use2DPhysics, offset 0xf1, size 0x1 
 __declspec(property(get=__cordl_internal_get_use2DPhysics, put=__cordl_internal_set_use2DPhysics)) bool  use2DPhysics;

/// @brief Convert operator to "::Pathfinding::IUpdatableGraph"
constexpr operator  ::Pathfinding::IUpdatableGraph*() noexcept;

/// @brief Method AddChildren, addr 0x5e8cb10, size 0x3cc, virtual false, abstract: false, final false
inline void AddChildren(::by_ref<int32_t>  c, ::UnityEngine::Transform*  tr) ;

/// @brief Method AddNode, addr 0x5e8c7cc, size 0x9c, virtual false, abstract: false, final false
inline ::Pathfinding::PointNode* AddNode(::Pathfinding::Int3  position) ;

/// @brief Method AddNode, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::Pathfinding::PointNode*>)
inline T AddNode(T  node, ::Pathfinding::Int3  position) ;

/// @brief Method AddToLookup, addr 0x5e8d09c, size 0x18, virtual false, abstract: false, final false
inline void AddToLookup(::Pathfinding::PointNode*  node) ;

/// @brief Method ConnectNodes, addr 0x5e8d278, size 0x128, virtual false, abstract: false, final false
inline void ConnectNodes() ;

/// [IteratorStateMachine(typeof(Pathfinding.PointGraph::<ConnectNodesAsync>d__37))]
/// @brief Method ConnectNodesAsync, addr 0x5e8d3a0, size 0x80, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>* ConnectNodesAsync() ;

/// @brief Method CountChildren, addr 0x5e8c868, size 0x2a8, virtual false, abstract: false, final false
static inline int32_t CountChildren(::UnityEngine::Transform*  tr) ;

/// @brief Method CountNodes, addr 0x5e8c1b8, size 0x8, virtual true, abstract: false, final false
inline int32_t CountNodes() ;

/// @brief Method CreateNodes, addr 0x5e8d0b4, size 0x110, virtual true, abstract: false, final false
inline ::ArrayW<::Pathfinding::PointNode*> CreateNodes(int32_t  count) ;

/// @brief Method DeserializeExtraInfo, addr 0x5e8e538, size 0x1b4, virtual true, abstract: false, final false
inline void DeserializeExtraInfo(::Pathfinding::Serialization::GraphSerializationContext*  ctx) ;

/// @brief Method DeserializeSettingsCompatibility, addr 0x5e8e1cc, size 0x248, virtual true, abstract: false, final false
inline void DeserializeSettingsCompatibility(::Pathfinding::Serialization::GraphSerializationContext*  ctx) ;

/// @brief Method FindClosestConnectionPoint, addr 0x5e8c60c, size 0x1c0, virtual false, abstract: false, final false
inline ::Pathfinding::NNInfoInternal FindClosestConnectionPoint(::Pathfinding::PointNode*  node, ::UnityEngine::Vector3  position) ;

/// @brief Method GetNearest, addr 0x5e8c240, size 0x38, virtual true, abstract: false, final false
inline ::Pathfinding::NNInfoInternal GetNearest(::UnityEngine::Vector3  position, ::Pathfinding::NNConstraint*  constraint, ::Pathfinding::GraphNode*  hint) ;

/// @brief Method GetNearestForce, addr 0x5e8c5d4, size 0x38, virtual true, abstract: false, final false
inline ::Pathfinding::NNInfoInternal GetNearestForce(::UnityEngine::Vector3  position, ::Pathfinding::NNConstraint*  constraint) ;

/// @brief Method GetNearestInternal, addr 0x5e8c278, size 0x35c, virtual false, abstract: false, final false
inline ::Pathfinding::NNInfoInternal GetNearestInternal(::UnityEngine::Vector3  position, ::Pathfinding::NNConstraint*  constraint, bool  fastCheck) ;

/// @brief Method GetNodes, addr 0x5e8c1c0, size 0x80, virtual true, abstract: false, final false
inline void GetNodes(::System::Action_1<::Pathfinding::GraphNode*>*  action) ;

/// @brief Method IsValidConnection, addr 0x5e8d454, size 0x6dc, virtual true, abstract: false, final false
inline bool IsValidConnection(::Pathfinding::GraphNode*  a, ::Pathfinding::GraphNode*  b, ::by_ref<float_t>  dist) ;

static inline ::Pathfinding::PointGraph* New_ctor() ;

/// @brief Method Pathfinding.IUpdatableGraph.CanUpdateAsync, addr 0x5e8db30, size 0x8, virtual true, abstract: false, final true
inline ::Pathfinding::GraphUpdateThreading Pathfinding_IUpdatableGraph_CanUpdateAsync(::Pathfinding::GraphUpdateObject*  o) ;

/// @brief Method Pathfinding.IUpdatableGraph.UpdateArea, addr 0x5e8db40, size 0x64c, virtual true, abstract: false, final true
inline void Pathfinding_IUpdatableGraph_UpdateArea(::Pathfinding::GraphUpdateObject*  guo) ;

/// @brief Method Pathfinding.IUpdatableGraph.UpdateAreaInit, addr 0x5e8db38, size 0x4, virtual true, abstract: false, final true
inline void Pathfinding_IUpdatableGraph_UpdateAreaInit(::Pathfinding::GraphUpdateObject*  o) ;

/// @brief Method Pathfinding.IUpdatableGraph.UpdateAreaPost, addr 0x5e8db3c, size 0x4, virtual true, abstract: false, final true
inline void Pathfinding_IUpdatableGraph_UpdateAreaPost(::Pathfinding::GraphUpdateObject*  o) ;

/// @brief Method PostDeserialization, addr 0x5e8e18c, size 0x4, virtual true, abstract: false, final false
inline void PostDeserialization(::Pathfinding::Serialization::GraphSerializationContext*  ctx) ;

/// @brief Method RebuildConnectionDistanceLookup, addr 0x5e8cf74, size 0x128, virtual false, abstract: false, final false
inline void RebuildConnectionDistanceLookup() ;

/// @brief Method RebuildNodeLookup, addr 0x5e8cedc, size 0x98, virtual false, abstract: false, final false
inline void RebuildNodeLookup() ;

/// @brief Method RegisterConnectionLength, addr 0x5e898bc, size 0x74, virtual false, abstract: false, final false
inline void RegisterConnectionLength(int64_t  sqrLength) ;

/// @brief Method RelocateNodes, addr 0x5e8e190, size 0x3c, virtual true, abstract: false, final false
inline void RelocateNodes(::UnityEngine::Matrix4x4  deltaMatrix) ;

/// [IteratorStateMachine(typeof(Pathfinding.PointGraph::<ScanInternal>d__35))]
/// @brief Method ScanInternal, addr 0x5e8d1c4, size 0x80, virtual true, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::Pathfinding::Progress>* ScanInternal() ;

/// @brief Method SerializeExtraInfo, addr 0x5e8e414, size 0x124, virtual true, abstract: false, final false
inline void SerializeExtraInfo(::Pathfinding::Serialization::GraphSerializationContext*  ctx) ;

constexpr int32_t const& __cordl_internal_get__nodeCount_k__BackingField() const;

constexpr int32_t& __cordl_internal_get__nodeCount_k__BackingField() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_limits() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_limits() ;

constexpr ::Pathfinding::PointKDTree* const& __cordl_internal_get_lookupTree() const;

constexpr ::Pathfinding::PointKDTree*& __cordl_internal_get_lookupTree() ;

constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_mask() const;

constexpr ::UnityEngine::LayerMask& __cordl_internal_get_mask() ;

constexpr float_t const& __cordl_internal_get_maxDistance() const;

constexpr float_t& __cordl_internal_get_maxDistance() ;

constexpr int64_t const& __cordl_internal_get_maximumConnectionLength() const;

constexpr int64_t& __cordl_internal_get_maximumConnectionLength() ;

constexpr ::GlobalNamespace::PointGraph_NodeDistanceMode const& __cordl_internal_get_nearestNodeDistanceMode() const;

constexpr ::GlobalNamespace::PointGraph_NodeDistanceMode& __cordl_internal_get_nearestNodeDistanceMode() ;

constexpr ::ArrayW<::Pathfinding::PointNode*> const& __cordl_internal_get_nodes() const;

constexpr ::ArrayW<::Pathfinding::PointNode*>& __cordl_internal_get_nodes() ;

constexpr bool const& __cordl_internal_get_optimizeForSparseGraph() const;

constexpr bool& __cordl_internal_get_optimizeForSparseGraph() ;

constexpr bool const& __cordl_internal_get_raycast() const;

constexpr bool& __cordl_internal_get_raycast() ;

constexpr bool const& __cordl_internal_get_recursive() const;

constexpr bool& __cordl_internal_get_recursive() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_root() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_root() ;

constexpr ::StringW const& __cordl_internal_get_searchTag() const;

constexpr ::StringW& __cordl_internal_get_searchTag() ;

constexpr bool const& __cordl_internal_get_thickRaycast() const;

constexpr bool& __cordl_internal_get_thickRaycast() ;

constexpr float_t const& __cordl_internal_get_thickRaycastRadius() const;

constexpr float_t& __cordl_internal_get_thickRaycastRadius() ;

constexpr bool const& __cordl_internal_get_use2DPhysics() const;

constexpr bool& __cordl_internal_get_use2DPhysics() ;

constexpr void __cordl_internal_set__nodeCount_k__BackingField(int32_t  value) ;

constexpr void __cordl_internal_set_limits(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_lookupTree(::Pathfinding::PointKDTree*  value) ;

constexpr void __cordl_internal_set_mask(::UnityEngine::LayerMask  value) ;

constexpr void __cordl_internal_set_maxDistance(float_t  value) ;

constexpr void __cordl_internal_set_maximumConnectionLength(int64_t  value) ;

constexpr void __cordl_internal_set_nearestNodeDistanceMode(::GlobalNamespace::PointGraph_NodeDistanceMode  value) ;

constexpr void __cordl_internal_set_nodes(::ArrayW<::Pathfinding::PointNode*>  value) ;

constexpr void __cordl_internal_set_optimizeForSparseGraph(bool  value) ;

constexpr void __cordl_internal_set_raycast(bool  value) ;

constexpr void __cordl_internal_set_recursive(bool  value) ;

constexpr void __cordl_internal_set_root(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_searchTag(::StringW  value) ;

constexpr void __cordl_internal_set_thickRaycast(bool  value) ;

constexpr void __cordl_internal_set_thickRaycastRadius(float_t  value) ;

constexpr void __cordl_internal_set_use2DPhysics(bool  value) ;

/// @brief Method .ctor, addr 0x5e8e6ec, size 0x80, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_nodeCount, addr 0x5e8c1a8, size 0x8, virtual false, abstract: false, final false
inline int32_t get_nodeCount() ;

/// @brief Convert to "::Pathfinding::IUpdatableGraph"
constexpr ::Pathfinding::IUpdatableGraph* i___Pathfinding__IUpdatableGraph() noexcept;

/// [CompilerGenerated]
/// @brief Method set_nodeCount, addr 0x5e8c1b0, size 0x8, virtual false, abstract: false, final false
inline void set_nodeCount(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr PointGraph() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PointGraph", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PointGraph(PointGraph && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PointGraph", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PointGraph(PointGraph const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21330};

/// [JsonMember]
/// @brief Field root, offset: 0xd0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___root;

/// [JsonMember]
/// @brief Field searchTag, offset: 0xd8, size: 0x8, def value: None
 ::StringW  ___searchTag;

/// [JsonMember]
/// @brief Field maxDistance, offset: 0xe0, size: 0x4, def value: None
 float_t  ___maxDistance;

/// [JsonMember]
/// @brief Field limits, offset: 0xe4, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___limits;

/// [JsonMember]
/// @brief Field raycast, offset: 0xf0, size: 0x1, def value: None
 bool  ___raycast;

/// [JsonMember]
/// @brief Field use2DPhysics, offset: 0xf1, size: 0x1, def value: None
 bool  ___use2DPhysics;

/// [JsonMember]
/// @brief Field thickRaycast, offset: 0xf2, size: 0x1, def value: None
 bool  ___thickRaycast;

/// [JsonMember]
/// @brief Field thickRaycastRadius, offset: 0xf4, size: 0x4, def value: None
 float_t  ___thickRaycastRadius;

/// [JsonMember]
/// @brief Field recursive, offset: 0xf8, size: 0x1, def value: None
 bool  ___recursive;

/// [JsonMember]
/// @brief Field mask, offset: 0xfc, size: 0x4, def value: None
 ::UnityEngine::LayerMask  ___mask;

/// [JsonMember]
/// @brief Field optimizeForSparseGraph, offset: 0x100, size: 0x1, def value: None
 bool  ___optimizeForSparseGraph;

/// @brief Field lookupTree, offset: 0x108, size: 0x8, def value: None
 ::Pathfinding::PointKDTree*  ___lookupTree;

/// @brief Field maximumConnectionLength, offset: 0x110, size: 0x8, def value: None
 int64_t  ___maximumConnectionLength;

/// @brief Field nodes, offset: 0x118, size: 0x8, def value: None
 ::ArrayW<::Pathfinding::PointNode*>  ___nodes;

/// [JsonMember]
/// @brief Field nearestNodeDistanceMode, offset: 0x120, size: 0x4, def value: None
 ::GlobalNamespace::PointGraph_NodeDistanceMode  ___nearestNodeDistanceMode;

/// [CompilerGenerated]
/// @brief Field <nodeCount>k__BackingField, offset: 0x124, size: 0x4, def value: None
 int32_t  ____nodeCount_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::PointGraph, ___root) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::PointGraph, ___searchTag) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::PointGraph, ___maxDistance) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::PointGraph, ___limits) == 0xe4, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::PointGraph, ___raycast) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::PointGraph, ___use2DPhysics) == 0xf1, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::PointGraph, ___thickRaycast) == 0xf2, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::PointGraph, ___thickRaycastRadius) == 0xf4, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::PointGraph, ___recursive) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::PointGraph, ___mask) == 0xfc, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::PointGraph, ___optimizeForSparseGraph) == 0x100, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::PointGraph, ___lookupTree) == 0x108, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::PointGraph, ___maximumConnectionLength) == 0x110, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::PointGraph, ___nodes) == 0x118, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::PointGraph, ___nearestNodeDistanceMode) == 0x120, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::PointGraph, ____nodeCount_k__BackingField) == 0x124, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::PointGraph) == 0x128, "Size mismatch!");

} // namespace end def Pathfinding
// [CompilerGenerated]
// Dependencies Pathfinding.Progress, System.Object, UnityEngine.GameObject
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.PointGraph/<ScanInternal>d__35
class CORDL_TYPE PointGraph__ScanInternal_d__35 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_Pathfinding_Progress__get_Current)) ::Pathfinding::Progress  System_Collections_Generic_IEnumerator_Pathfinding_Progress__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::Pathfinding::Progress  __2__current;

/// @brief Field <>4__this, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Pathfinding::PointGraph*  __4__this;

/// @brief Field <>7__wrap2, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get___7__wrap2, put=__cordl_internal_set___7__wrap2)) ::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>*  __7__wrap2;

/// @brief Field <>l__initialThreadId, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get___l__initialThreadId, put=__cordl_internal_set___l__initialThreadId)) int32_t  __l__initialThreadId;

/// @brief Field <gos>5__2, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__gos_5__2, put=__cordl_internal_set__gos_5__2)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  _gos_5__2;

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

/// @brief Method MoveNext, addr 0x5e8f04c, size 0xba8, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Pathfinding::PointGraph__ScanInternal_d__35* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerable<Pathfinding.Progress>.GetEnumerator, addr 0x5e8fd44, size 0xa4, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>* System_Collections_Generic_IEnumerable_Pathfinding_Progress__GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<Pathfinding.Progress>.get_Current, addr 0x5e8fca4, size 0xc, virtual true, abstract: false, final true
inline ::Pathfinding::Progress System_Collections_Generic_IEnumerator_Pathfinding_Progress__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x5e8fde8, size 0x4, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5e8fcb0, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5e8fce8, size 0x5c, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5e8f030, size 0x1c, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::Pathfinding::Progress const& __cordl_internal_get___2__current() const;

constexpr ::Pathfinding::Progress& __cordl_internal_get___2__current() ;

constexpr ::Pathfinding::PointGraph* const& __cordl_internal_get___4__this() const;

constexpr ::Pathfinding::PointGraph*& __cordl_internal_get___4__this() ;

constexpr ::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>* const& __cordl_internal_get___7__wrap2() const;

constexpr ::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>*& __cordl_internal_get___7__wrap2() ;

constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

constexpr int32_t& __cordl_internal_get___l__initialThreadId() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get__gos_5__2() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get__gos_5__2() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::Pathfinding::Progress  value) ;

constexpr void __cordl_internal_set___4__this(::Pathfinding::PointGraph*  value) ;

constexpr void __cordl_internal_set___7__wrap2(::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>*  value) ;

constexpr void __cordl_internal_set___l__initialThreadId(int32_t  value) ;

constexpr void __cordl_internal_set__gos_5__2(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

/// @brief Method <>m__Finally1, addr 0x5e8fbf4, size 0xb0, virtual false, abstract: false, final false
inline void __m__Finally1() ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5e8d244, size 0x34, virtual false, abstract: false, final false
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
constexpr PointGraph__ScanInternal_d__35() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PointGraph__ScanInternal_d__35", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PointGraph__ScanInternal_d__35(PointGraph__ScanInternal_d__35 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PointGraph__ScanInternal_d__35", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PointGraph__ScanInternal_d__35(PointGraph__ScanInternal_d__35 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21329};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x10, def value: None
 ::Pathfinding::Progress  _____2__current;

/// @brief Field <>l__initialThreadId, offset: 0x28, size: 0x4, def value: None
 int32_t  _____l__initialThreadId;

/// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
 ::Pathfinding::PointGraph*  _____4__this;

/// @brief Field <gos>5__2, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ____gos_5__2;

/// @brief Field <>7__wrap2, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>*  _____7__wrap2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::PointGraph__ScanInternal_d__35, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::PointGraph__ScanInternal_d__35, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::PointGraph__ScanInternal_d__35, _____l__initialThreadId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::PointGraph__ScanInternal_d__35, _____4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::PointGraph__ScanInternal_d__35, ____gos_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::PointGraph__ScanInternal_d__35, _____7__wrap2) == 0x40, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::PointGraph__ScanInternal_d__35) == 0x48, "Size mismatch!");

} // namespace end def Pathfinding
// [CompilerGenerated]
// Dependencies Pathfinding.Progress, System.Object
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.PointGraph/<ConnectNodesAsync>d__37
class CORDL_TYPE PointGraph__ConnectNodesAsync_d__37 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_Pathfinding_Progress__get_Current)) ::Pathfinding::Progress  System_Collections_Generic_IEnumerator_Pathfinding_Progress__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x10 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::Pathfinding::Progress  __2__current;

/// @brief Field <>4__this, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Pathfinding::PointGraph*  __4__this;

/// @brief Field <>l__initialThreadId, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get___l__initialThreadId, put=__cordl_internal_set___l__initialThreadId)) int32_t  __l__initialThreadId;

/// @brief Field <candidateConnections>5__3, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__candidateConnections_5__3, put=__cordl_internal_set__candidateConnections_5__3)) ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*  _candidateConnections_5__3;

/// @brief Field <connections>5__2, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__connections_5__2, put=__cordl_internal_set__connections_5__2)) ::System::Collections::Generic::List_1<::Pathfinding::Connection>*  _connections_5__2;

/// @brief Field <i>5__5, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__i_5__5, put=__cordl_internal_set__i_5__5)) int32_t  _i_5__5;

/// @brief Field <maxSquaredRange>5__4, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__maxSquaredRange_5__4, put=__cordl_internal_set__maxSquaredRange_5__4)) int64_t  _maxSquaredRange_5__4;

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

/// @brief Method MoveNext, addr 0x5e8e770, size 0x778, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Pathfinding::PointGraph__ConnectNodesAsync_d__37* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerable<Pathfinding.Progress>.GetEnumerator, addr 0x5e8ef88, size 0xa4, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::Pathfinding::Progress>* System_Collections_Generic_IEnumerable_Pathfinding_Progress__GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<Pathfinding.Progress>.get_Current, addr 0x5e8eee8, size 0xc, virtual true, abstract: false, final true
inline ::Pathfinding::Progress System_Collections_Generic_IEnumerator_Pathfinding_Progress__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x5e8f02c, size 0x4, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x5e8eef4, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x5e8ef2c, size 0x5c, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x5e8e76c, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::Pathfinding::Progress const& __cordl_internal_get___2__current() const;

constexpr ::Pathfinding::Progress& __cordl_internal_get___2__current() ;

constexpr ::Pathfinding::PointGraph* const& __cordl_internal_get___4__this() const;

constexpr ::Pathfinding::PointGraph*& __cordl_internal_get___4__this() ;

constexpr int32_t const& __cordl_internal_get___l__initialThreadId() const;

constexpr int32_t& __cordl_internal_get___l__initialThreadId() ;

constexpr ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>* const& __cordl_internal_get__candidateConnections_5__3() const;

constexpr ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*& __cordl_internal_get__candidateConnections_5__3() ;

constexpr ::System::Collections::Generic::List_1<::Pathfinding::Connection>* const& __cordl_internal_get__connections_5__2() const;

constexpr ::System::Collections::Generic::List_1<::Pathfinding::Connection>*& __cordl_internal_get__connections_5__2() ;

constexpr int32_t const& __cordl_internal_get__i_5__5() const;

constexpr int32_t& __cordl_internal_get__i_5__5() ;

constexpr int64_t const& __cordl_internal_get__maxSquaredRange_5__4() const;

constexpr int64_t& __cordl_internal_get__maxSquaredRange_5__4() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::Pathfinding::Progress  value) ;

constexpr void __cordl_internal_set___4__this(::Pathfinding::PointGraph*  value) ;

constexpr void __cordl_internal_set___l__initialThreadId(int32_t  value) ;

constexpr void __cordl_internal_set__candidateConnections_5__3(::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*  value) ;

constexpr void __cordl_internal_set__connections_5__2(::System::Collections::Generic::List_1<::Pathfinding::Connection>*  value) ;

constexpr void __cordl_internal_set__i_5__5(int32_t  value) ;

constexpr void __cordl_internal_set__maxSquaredRange_5__4(int64_t  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x5e8d420, size 0x34, virtual false, abstract: false, final false
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
constexpr PointGraph__ConnectNodesAsync_d__37() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "PointGraph__ConnectNodesAsync_d__37", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
PointGraph__ConnectNodesAsync_d__37(PointGraph__ConnectNodesAsync_d__37 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "PointGraph__ConnectNodesAsync_d__37", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
PointGraph__ConnectNodesAsync_d__37(PointGraph__ConnectNodesAsync_d__37 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21328};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x10, def value: None
 ::Pathfinding::Progress  _____2__current;

/// @brief Field <>l__initialThreadId, offset: 0x28, size: 0x4, def value: None
 int32_t  _____l__initialThreadId;

/// @brief Field <>4__this, offset: 0x30, size: 0x8, def value: None
 ::Pathfinding::PointGraph*  _____4__this;

/// @brief Field <connections>5__2, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Pathfinding::Connection>*  ____connections_5__2;

/// @brief Field <candidateConnections>5__3, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::Pathfinding::GraphNode*>*  ____candidateConnections_5__3;

/// @brief Field <maxSquaredRange>5__4, offset: 0x48, size: 0x8, def value: None
 int64_t  ____maxSquaredRange_5__4;

/// @brief Field <i>5__5, offset: 0x50, size: 0x4, def value: None
 int32_t  ____i_5__5;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::PointGraph__ConnectNodesAsync_d__37, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::PointGraph__ConnectNodesAsync_d__37, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::PointGraph__ConnectNodesAsync_d__37, _____l__initialThreadId) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::PointGraph__ConnectNodesAsync_d__37, _____4__this) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::PointGraph__ConnectNodesAsync_d__37, ____connections_5__2) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::PointGraph__ConnectNodesAsync_d__37, ____candidateConnections_5__3) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::PointGraph__ConnectNodesAsync_d__37, ____maxSquaredRange_5__4) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::PointGraph__ConnectNodesAsync_d__37, ____i_5__5) == 0x50, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::PointGraph__ConnectNodesAsync_d__37) == 0x58, "Size mismatch!");

} // namespace end def Pathfinding
