#pragma once
// IWYU pragma private; include "Pathfinding/RVO/RVOQuadtree_Node.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RVOQuadtree_Node)
namespace Pathfinding::RVO::Sampled {
class Agent;
}
namespace UnityEngine {
struct Rect;
}
// Forward declare root types
namespace GlobalNamespace {
struct RVOQuadtree_Node;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::RVOQuadtree_Node);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RVOQuadtree_Node, "Pathfinding.RVO", "RVOQuadtree/Node");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Pathfinding.RVO.RVOQuadtree/Node
struct CORDL_TYPE RVOQuadtree_Node {
public:
// Declarations
/// @brief Method Add, addr 0x5ee6278, size 0x40, virtual false, abstract: false, final false
inline void Add(::Pathfinding::RVO::Sampled::Agent*  agent) ;

/// @brief Method CalculateMaxSpeed, addr 0x5ee6374, size 0x1a4, virtual false, abstract: false, final false
inline float_t CalculateMaxSpeed(::ArrayW<::GlobalNamespace::RVOQuadtree_Node>  nodes, int32_t  index) ;

/// @brief Method Distribute, addr 0x5ee62b8, size 0xbc, virtual false, abstract: false, final false
inline void Distribute(::ArrayW<::GlobalNamespace::RVOQuadtree_Node>  nodes, ::UnityEngine::Rect  r) ;

// Ctor Parameters []
// @brief default ctor
constexpr RVOQuadtree_Node() ;

// Ctor Parameters [CppParam { name: "child00", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "linkedList", ty: "::Pathfinding::RVO::Sampled::Agent*", modifiers: "", def_value: None, comment: None }, CppParam { name: "count", ty: "uint8_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "maxSpeed", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr RVOQuadtree_Node(int32_t  child00, ::Pathfinding::RVO::Sampled::Agent*  linkedList, uint8_t  count, float_t  maxSpeed) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21500};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field child00, offset: 0x0, size: 0x4, def value: None
 int32_t  child00;

/// @brief Field linkedList, offset: 0x8, size: 0x8, def value: None
 ::Pathfinding::RVO::Sampled::Agent*  linkedList;

/// @brief Field count, offset: 0x10, size: 0x1, def value: None
 uint8_t  count;

/// @brief Field maxSpeed, offset: 0x14, size: 0x4, def value: None
 float_t  maxSpeed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RVOQuadtree_Node, child00) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RVOQuadtree_Node, linkedList) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RVOQuadtree_Node, count) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RVOQuadtree_Node, maxSpeed) == 0x14, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RVOQuadtree_Node) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
