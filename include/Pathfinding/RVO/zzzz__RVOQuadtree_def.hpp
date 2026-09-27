#pragma once
// IWYU pragma private; include "Pathfinding/RVO/RVOQuadtree.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/RVO/zzzz__RVOQuadtree_Node_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(RVOQuadtree)
namespace GlobalNamespace {
struct RVOQuadtree_Node;
}
namespace GlobalNamespace {
struct RVOQuadtree_QuadtreeQuery;
}
namespace Pathfinding::RVO::Sampled {
class Agent;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace Pathfinding::RVO {
class RVOQuadtree;
}
// Write type traits
MARK_REF_T(::Pathfinding::RVO::RVOQuadtree*);
DEFINE_IL2CPP_CLASS(::Pathfinding::RVO::RVOQuadtree*, "Pathfinding.RVO", "RVOQuadtree");
// Dependencies Pathfinding.RVO.RVOQuadtree::Node, System.Object, UnityEngine.Rect
namespace Pathfinding::RVO {
// Is value type: false
// CS Name: Pathfinding.RVO.RVOQuadtree
class CORDL_TYPE RVOQuadtree : public ::System::Object {
public:
// Declarations
using Node = ::GlobalNamespace::RVOQuadtree_Node;

using QuadtreeQuery = ::GlobalNamespace::RVOQuadtree_QuadtreeQuery;

/// @brief Field bounds, offset 0x24, size 0x10 
 __declspec(property(get=__cordl_internal_get_bounds, put=__cordl_internal_set_bounds)) ::UnityEngine::Rect  bounds;

/// @brief Field filledNodes, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_filledNodes, put=__cordl_internal_set_filledNodes)) int32_t  filledNodes;

/// @brief Field maxRadius, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxRadius, put=__cordl_internal_set_maxRadius)) float_t  maxRadius;

/// @brief Field nodes, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_nodes, put=__cordl_internal_set_nodes)) ::ArrayW<::GlobalNamespace::RVOQuadtree_Node>  nodes;

/// @brief Method CalculateSpeeds, addr 0x5ee504c, size 0x2c, virtual false, abstract: false, final false
inline void CalculateSpeeds() ;

/// @brief Method Clear, addr 0x5ee4dd4, size 0x38, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method DebugDraw, addr 0x5ee68a0, size 0x10, virtual false, abstract: false, final false
inline void DebugDraw() ;

/// @brief Method DebugDrawRec, addr 0x5ee68b0, size 0x338, virtual false, abstract: false, final false
inline void DebugDrawRec(int32_t  i, ::UnityEngine::Rect  r) ;

/// @brief Method GetNodeIndex, addr 0x5ee6044, size 0x234, virtual false, abstract: false, final false
inline int32_t GetNodeIndex() ;

/// @brief Method Insert, addr 0x5ee4e0c, size 0x240, virtual false, abstract: false, final false
inline void Insert(::Pathfinding::RVO::Sampled::Agent*  agent) ;

static inline ::Pathfinding::RVO::RVOQuadtree* New_ctor() ;

/// @brief Method Query, addr 0x5ee6518, size 0x70, virtual false, abstract: false, final false
inline void Query(::UnityEngine::Vector2  p, float_t  speed, float_t  timeHorizon, float_t  agentRadius, ::Pathfinding::RVO::Sampled::Agent*  agent) ;

/// @brief Method SetBounds, addr 0x5ee6038, size 0xc, virtual false, abstract: false, final false
inline void SetBounds(::UnityEngine::Rect  r) ;

constexpr ::UnityEngine::Rect const& __cordl_internal_get_bounds() const;

constexpr ::UnityEngine::Rect& __cordl_internal_get_bounds() ;

constexpr int32_t const& __cordl_internal_get_filledNodes() const;

constexpr int32_t& __cordl_internal_get_filledNodes() ;

constexpr float_t const& __cordl_internal_get_maxRadius() const;

constexpr float_t& __cordl_internal_get_maxRadius() ;

constexpr ::ArrayW<::GlobalNamespace::RVOQuadtree_Node> const& __cordl_internal_get_nodes() const;

constexpr ::ArrayW<::GlobalNamespace::RVOQuadtree_Node>& __cordl_internal_get_nodes() ;

constexpr void __cordl_internal_set_bounds(::UnityEngine::Rect  value) ;

constexpr void __cordl_internal_set_filledNodes(int32_t  value) ;

constexpr void __cordl_internal_set_maxRadius(float_t  value) ;

constexpr void __cordl_internal_set_nodes(::ArrayW<::GlobalNamespace::RVOQuadtree_Node>  value) ;

/// @brief Method .ctor, addr 0x5ee3690, size 0x6c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RVOQuadtree() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RVOQuadtree", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RVOQuadtree(RVOQuadtree && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RVOQuadtree", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RVOQuadtree(RVOQuadtree const& ) = delete;

/// @brief Field LeafSize offset 0xffffffff size 0x4
static constexpr int32_t  LeafSize{static_cast<int32_t>(0xf)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21502};

/// @brief Field maxRadius, offset: 0x10, size: 0x4, def value: None
 float_t  ___maxRadius;

/// @brief Field nodes, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::RVOQuadtree_Node>  ___nodes;

/// @brief Field filledNodes, offset: 0x20, size: 0x4, def value: None
 int32_t  ___filledNodes;

/// @brief Field bounds, offset: 0x24, size: 0x10, def value: None
 ::UnityEngine::Rect  ___bounds;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::RVO::RVOQuadtree, ___maxRadius) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RVO::RVOQuadtree, ___nodes) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RVO::RVOQuadtree, ___filledNodes) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RVO::RVOQuadtree, ___bounds) == 0x24, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::RVO::RVOQuadtree) == 0x38, "Size mismatch!");

} // namespace end def Pathfinding::RVO
