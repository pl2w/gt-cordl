#pragma once
// IWYU pragma private; include "Pathfinding/RVO/RVOQuadtree_QuadtreeQuery.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/RVO/zzzz__RVOQuadtree_Node_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RVOQuadtree_QuadtreeQuery)
namespace GlobalNamespace {
struct RVOQuadtree_Node;
}
namespace Pathfinding::RVO::Sampled {
class Agent;
}
namespace UnityEngine {
struct Rect;
}
// Forward declare root types
namespace GlobalNamespace {
struct RVOQuadtree_QuadtreeQuery;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::RVOQuadtree_QuadtreeQuery);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RVOQuadtree_QuadtreeQuery, "Pathfinding.RVO", "RVOQuadtree/QuadtreeQuery");
// Dependencies Pathfinding.RVO.RVOQuadtree::Node, UnityEngine.Vector2
namespace GlobalNamespace {
// Is value type: true
// CS Name: Pathfinding.RVO.RVOQuadtree/QuadtreeQuery
struct CORDL_TYPE RVOQuadtree_QuadtreeQuery {
public:
// Declarations
/// @brief Method QueryRec, addr 0x5ee6588, size 0x318, virtual false, abstract: false, final false
inline void QueryRec(int32_t  i, ::UnityEngine::Rect  r) ;

// Ctor Parameters []
// @brief default ctor
constexpr RVOQuadtree_QuadtreeQuery() ;

// Ctor Parameters [CppParam { name: "p", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None, comment: None }, CppParam { name: "speed", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "timeHorizon", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "agentRadius", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "maxRadius", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "agent", ty: "::Pathfinding::RVO::Sampled::Agent*", modifiers: "", def_value: None, comment: None }, CppParam { name: "nodes", ty: "::ArrayW<::GlobalNamespace::RVOQuadtree_Node>", modifiers: "", def_value: None, comment: None }]
constexpr RVOQuadtree_QuadtreeQuery(::UnityEngine::Vector2  p, float_t  speed, float_t  timeHorizon, float_t  agentRadius, float_t  maxRadius, ::Pathfinding::RVO::Sampled::Agent*  agent, ::ArrayW<::GlobalNamespace::RVOQuadtree_Node>  nodes) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21501};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x28};

/// @brief Field p, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::Vector2  p;

/// @brief Field speed, offset: 0x8, size: 0x4, def value: None
 float_t  speed;

/// @brief Field timeHorizon, offset: 0xc, size: 0x4, def value: None
 float_t  timeHorizon;

/// @brief Field agentRadius, offset: 0x10, size: 0x4, def value: None
 float_t  agentRadius;

/// @brief Field maxRadius, offset: 0x14, size: 0x4, def value: None
 float_t  maxRadius;

/// @brief Field agent, offset: 0x18, size: 0x8, def value: None
 ::Pathfinding::RVO::Sampled::Agent*  agent;

/// @brief Field nodes, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::RVOQuadtree_Node>  nodes;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RVOQuadtree_QuadtreeQuery, p) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RVOQuadtree_QuadtreeQuery, speed) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RVOQuadtree_QuadtreeQuery, timeHorizon) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RVOQuadtree_QuadtreeQuery, agentRadius) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RVOQuadtree_QuadtreeQuery, maxRadius) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RVOQuadtree_QuadtreeQuery, agent) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RVOQuadtree_QuadtreeQuery, nodes) == 0x20, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RVOQuadtree_QuadtreeQuery) == 0x28, "Size mismatch!");

} // namespace end def GlobalNamespace
