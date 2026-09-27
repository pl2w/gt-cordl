#pragma once
// IWYU pragma private; include "Pathfinding/GraphHitInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(GraphHitInfo)
namespace Pathfinding {
class GraphNode;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Pathfinding {
struct GraphHitInfo;
}
// Write type traits
MARK_VAL_T(::Pathfinding::GraphHitInfo);
DEFINE_IL2CPP_CLASS(::Pathfinding::GraphHitInfo, "Pathfinding", "GraphHitInfo");
// Dependencies UnityEngine.Vector3
namespace Pathfinding {
// Is value type: true
// CS Name: Pathfinding.GraphHitInfo
struct CORDL_TYPE GraphHitInfo {
public:
// Declarations
 __declspec(property(get=get_distance)) float_t  distance;

/// @brief Method .ctor, addr 0x5e47f70, size 0xd0, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Vector3  point) ;

/// @brief Method get_distance, addr 0x5e47ef0, size 0x80, virtual false, abstract: false, final false
inline float_t get_distance() ;

// Ctor Parameters []
// @brief default ctor
constexpr GraphHitInfo() ;

// Ctor Parameters [CppParam { name: "origin", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "point", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "node", ty: "::Pathfinding::GraphNode*", modifiers: "", def_value: None, comment: None }, CppParam { name: "tangentOrigin", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }, CppParam { name: "tangent", ty: "::UnityEngine::Vector3", modifiers: "", def_value: None, comment: None }]
constexpr GraphHitInfo(::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  point, ::Pathfinding::GraphNode*  node, ::UnityEngine::Vector3  tangentOrigin, ::UnityEngine::Vector3  tangent) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21190};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x38};

/// @brief Field origin, offset: 0x0, size: 0xc, def value: None
 ::UnityEngine::Vector3  origin;

/// @brief Field point, offset: 0xc, size: 0xc, def value: None
 ::UnityEngine::Vector3  point;

/// @brief Field node, offset: 0x18, size: 0x8, def value: None
 ::Pathfinding::GraphNode*  node;

/// @brief Field tangentOrigin, offset: 0x20, size: 0xc, def value: None
 ::UnityEngine::Vector3  tangentOrigin;

/// @brief Field tangent, offset: 0x2c, size: 0xc, def value: None
 ::UnityEngine::Vector3  tangent;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::GraphHitInfo, origin) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GraphHitInfo, point) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GraphHitInfo, node) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GraphHitInfo, tangentOrigin) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GraphHitInfo, tangent) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::GraphHitInfo) == 0x38, "Size mismatch!");

} // namespace end def Pathfinding
