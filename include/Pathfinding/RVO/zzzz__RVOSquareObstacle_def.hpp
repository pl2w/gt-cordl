#pragma once
// IWYU pragma private; include "Pathfinding/RVO/RVOSquareObstacle.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Pathfinding/RVO/zzzz__RVOObstacle_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(RVOSquareObstacle)
// Forward declare root types
namespace Pathfinding::RVO {
class RVOSquareObstacle;
}
// Write type traits
MARK_REF_T(::Pathfinding::RVO::RVOSquareObstacle*);
DEFINE_IL2CPP_CLASS(::Pathfinding::RVO::RVOSquareObstacle*, "Pathfinding.RVO", "RVOSquareObstacle");
// [AddComponentMenu("Pathfinding/Local Avoidance/Square Obstacle")]
// [HelpURL("http://arongranberg.com/astar/documentation/stable/class_pathfinding_1_1_r_v_o_1_1_r_v_o_square_obstacle.php")]
// Dependencies Pathfinding.RVO.RVOObstacle, UnityEngine.Vector2
namespace Pathfinding::RVO {
// Is value type: false
// CS Name: Pathfinding.RVO.RVOSquareObstacle
class CORDL_TYPE RVOSquareObstacle : public ::Pathfinding::RVO::RVOObstacle {
public:
// Declarations
 __declspec(property(get=get_ExecuteInEditor)) bool  ExecuteInEditor;

 __declspec(property(get=get_Height)) float_t  Height;

 __declspec(property(get=get_LocalCoordinates)) bool  LocalCoordinates;

 __declspec(property(get=get_StaticObstacle)) bool  StaticObstacle;

/// @brief Field center, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_center, put=__cordl_internal_set_center)) ::UnityEngine::Vector2  center;

/// @brief Field height, offset 0x9c, size 0x4 
 __declspec(property(get=__cordl_internal_get_height, put=__cordl_internal_set_height)) float_t  height;

/// @brief Field size, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_size, put=__cordl_internal_set_size)) ::UnityEngine::Vector2  size;

/// @brief Method AreGizmosDirty, addr 0x5eeb414, size 0x8, virtual true, abstract: false, final false
inline bool AreGizmosDirty() ;

/// @brief Method CreateObstacles, addr 0x5eeb41c, size 0x144, virtual true, abstract: false, final false
inline void CreateObstacles() ;

static inline ::Pathfinding::RVO::RVOSquareObstacle* New_ctor() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_center() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_center() ;

constexpr float_t const& __cordl_internal_get_height() const;

constexpr float_t& __cordl_internal_get_height() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_size() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_size() ;

constexpr void __cordl_internal_set_center(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_height(float_t  value) ;

constexpr void __cordl_internal_set_size(::UnityEngine::Vector2  value) ;

/// @brief Method .ctor, addr 0x5eeb560, size 0x94, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ExecuteInEditor, addr 0x5eeb3fc, size 0x8, virtual true, abstract: false, final false
inline bool get_ExecuteInEditor() ;

/// @brief Method get_Height, addr 0x5eeb40c, size 0x8, virtual true, abstract: false, final false
inline float_t get_Height() ;

/// @brief Method get_LocalCoordinates, addr 0x5eeb404, size 0x8, virtual true, abstract: false, final false
inline bool get_LocalCoordinates() ;

/// @brief Method get_StaticObstacle, addr 0x5eeb3f4, size 0x8, virtual true, abstract: false, final false
inline bool get_StaticObstacle() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RVOSquareObstacle() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RVOSquareObstacle", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
RVOSquareObstacle(RVOSquareObstacle && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RVOSquareObstacle", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
RVOSquareObstacle(RVOSquareObstacle const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21510};

/// @brief Field height, offset: 0x9c, size: 0x4, def value: None
 float_t  ___height;

/// @brief Field size, offset: 0xa0, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___size;

/// @brief Field center, offset: 0xa8, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___center;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::RVO::RVOSquareObstacle, ___height) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RVO::RVOSquareObstacle, ___size) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RVO::RVOSquareObstacle, ___center) == 0xa8, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::RVO::RVOSquareObstacle) == 0xb0, "Size mismatch!");

} // namespace end def Pathfinding::RVO
