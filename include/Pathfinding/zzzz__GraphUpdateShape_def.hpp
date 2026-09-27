#pragma once
// IWYU pragma private; include "Pathfinding/GraphUpdateShape.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(GraphUpdateShape)
namespace Pathfinding {
class GraphNode;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Pathfinding {
class GraphUpdateShape;
}
// Write type traits
MARK_REF_T(::Pathfinding::GraphUpdateShape*);
DEFINE_IL2CPP_CLASS(::Pathfinding::GraphUpdateShape*, "Pathfinding", "GraphUpdateShape");
// Dependencies System.Object, UnityEngine.Vector3
namespace Pathfinding {
// Is value type: false
// CS Name: Pathfinding.GraphUpdateShape
class CORDL_TYPE GraphUpdateShape : public ::System::Object {
public:
// Declarations
/// @brief Field _convex, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__convex, put=__cordl_internal_set__convex)) bool  _convex;

/// @brief Field _convexPoints, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__convexPoints, put=__cordl_internal_set__convexPoints)) ::ArrayW<::UnityEngine::Vector3>  _convexPoints;

/// @brief Field _points, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__points, put=__cordl_internal_set__points)) ::ArrayW<::UnityEngine::Vector3>  _points;

 __declspec(property(get=get_convex, put=set_convex)) bool  convex;

/// @brief Field forward, offset 0x30, size 0xc 
 __declspec(property(get=__cordl_internal_get_forward, put=__cordl_internal_set_forward)) ::UnityEngine::Vector3  forward;

/// @brief Field minimumHeight, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_minimumHeight, put=__cordl_internal_set_minimumHeight)) float_t  minimumHeight;

/// @brief Field origin, offset 0x48, size 0xc 
 __declspec(property(get=__cordl_internal_get_origin, put=__cordl_internal_set_origin)) ::UnityEngine::Vector3  origin;

 __declspec(property(get=get_points, put=set_points)) ::ArrayW<::UnityEngine::Vector3>  points;

/// @brief Field right, offset 0x24, size 0xc 
 __declspec(property(get=__cordl_internal_get_right, put=__cordl_internal_set_right)) ::UnityEngine::Vector3  right;

/// @brief Field up, offset 0x3c, size 0xc 
 __declspec(property(get=__cordl_internal_get_up, put=__cordl_internal_set_up)) ::UnityEngine::Vector3  up;

/// @brief Method CalculateConvexHull, addr 0x5e524d0, size 0x74, virtual false, abstract: false, final false
inline void CalculateConvexHull() ;

/// @brief Method Contains, addr 0x5e48dac, size 0x2c, virtual false, abstract: false, final false
inline bool Contains(::Pathfinding::GraphNode*  node) ;

/// @brief Method Contains, addr 0x5e5281c, size 0x1a8, virtual false, abstract: false, final false
inline bool Contains(::UnityEngine::Vector3  point) ;

/// @brief Method GetBounds, addr 0x5e51b5c, size 0x7c, virtual false, abstract: false, final false
inline ::UnityEngine::Bounds GetBounds() ;

/// @brief Method GetBounds, addr 0x5e51708, size 0x1e8, virtual false, abstract: false, final false
static inline ::UnityEngine::Bounds GetBounds(::ArrayW<::UnityEngine::Vector3>  points, ::UnityEngine::Matrix4x4  matrix, float_t  minimumHeight) ;

/// @brief Method GetBounds, addr 0x5e5264c, size 0x1d0, virtual false, abstract: false, final false
static inline ::UnityEngine::Bounds GetBounds(::ArrayW<::UnityEngine::Vector3>  points, ::UnityEngine::Vector3  right, ::UnityEngine::Vector3  up, ::UnityEngine::Vector3  forward, ::UnityEngine::Vector3  origin, float_t  minimumHeight) ;

static inline ::Pathfinding::GraphUpdateShape* New_ctor() ;

static inline ::Pathfinding::GraphUpdateShape* New_ctor(::ArrayW<::UnityEngine::Vector3>  points, bool  convex, ::UnityEngine::Matrix4x4  matrix, float_t  minimumHeight) ;

constexpr bool const& __cordl_internal_get__convex() const;

constexpr bool& __cordl_internal_get__convex() ;

constexpr ::ArrayW<::UnityEngine::Vector3> const& __cordl_internal_get__convexPoints() const;

constexpr ::ArrayW<::UnityEngine::Vector3>& __cordl_internal_get__convexPoints() ;

constexpr ::ArrayW<::UnityEngine::Vector3> const& __cordl_internal_get__points() const;

constexpr ::ArrayW<::UnityEngine::Vector3>& __cordl_internal_get__points() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_forward() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_forward() ;

constexpr float_t const& __cordl_internal_get_minimumHeight() const;

constexpr float_t& __cordl_internal_get_minimumHeight() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_origin() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_origin() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_right() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_right() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_up() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_up() ;

constexpr void __cordl_internal_set__convex(bool  value) ;

constexpr void __cordl_internal_set__convexPoints(::ArrayW<::UnityEngine::Vector3>  value) ;

constexpr void __cordl_internal_set__points(::ArrayW<::UnityEngine::Vector3>  value) ;

constexpr void __cordl_internal_set_forward(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_minimumHeight(float_t  value) ;

constexpr void __cordl_internal_set_origin(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_right(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_up(::UnityEngine::Vector3  value) ;

/// @brief Method .ctor, addr 0x5e52584, size 0xc8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x5e518f0, size 0x26c, virtual false, abstract: false, final false
inline void _ctor(::ArrayW<::UnityEngine::Vector3>  points, bool  convex, ::UnityEngine::Matrix4x4  matrix, float_t  minimumHeight) ;

/// @brief Method get_convex, addr 0x5e52544, size 0x8, virtual false, abstract: false, final false
inline bool get_convex() ;

/// @brief Method get_points, addr 0x5e52488, size 0x8, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::Vector3> get_points() ;

/// @brief Method set_convex, addr 0x5e5254c, size 0x38, virtual false, abstract: false, final false
inline void set_convex(bool  value) ;

/// @brief Method set_points, addr 0x5e52490, size 0x40, virtual false, abstract: false, final false
inline void set_points(::ArrayW<::UnityEngine::Vector3>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GraphUpdateShape() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GraphUpdateShape", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GraphUpdateShape(GraphUpdateShape && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GraphUpdateShape", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GraphUpdateShape(GraphUpdateShape const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21232};

/// @brief Field _points, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3>  ____points;

/// @brief Field _convexPoints, offset: 0x18, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3>  ____convexPoints;

/// @brief Field _convex, offset: 0x20, size: 0x1, def value: None
 bool  ____convex;

/// @brief Field right, offset: 0x24, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___right;

/// @brief Field forward, offset: 0x30, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___forward;

/// @brief Field up, offset: 0x3c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___up;

/// @brief Field origin, offset: 0x48, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___origin;

/// @brief Field minimumHeight, offset: 0x54, size: 0x4, def value: None
 float_t  ___minimumHeight;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::GraphUpdateShape, ____points) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GraphUpdateShape, ____convexPoints) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GraphUpdateShape, ____convex) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GraphUpdateShape, ___right) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GraphUpdateShape, ___forward) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GraphUpdateShape, ___up) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GraphUpdateShape, ___origin) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GraphUpdateShape, ___minimumHeight) == 0x54, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::GraphUpdateShape) == 0x58, "Size mismatch!");

} // namespace end def Pathfinding
