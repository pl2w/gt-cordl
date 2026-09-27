#pragma once
// IWYU pragma private; include "Pathfinding/IntRect.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IntRect)
namespace Pathfinding::Util {
class GraphTransform;
}
namespace Pathfinding {
struct Int2;
}
namespace System {
class Object;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace Pathfinding {
struct IntRect;
}
// Write type traits
MARK_VAL_T(::Pathfinding::IntRect);
DEFINE_IL2CPP_CLASS(::Pathfinding::IntRect, "Pathfinding", "IntRect");
// Dependencies 
namespace Pathfinding {
// Is value type: true
// CS Name: Pathfinding.IntRect
struct CORDL_TYPE IntRect {
public:
// Declarations
 __declspec(property(get=get_Area)) int32_t  Area;

 __declspec(property(get=get_Height)) int32_t  Height;

 __declspec(property(get=get_Max)) ::Pathfinding::Int2  Max;

 __declspec(property(get=get_Min)) ::Pathfinding::Int2  Min;

 __declspec(property(get=get_Width)) int32_t  Width;

/// @brief Method Contains, addr 0x5e48e8c, size 0x3c, virtual false, abstract: false, final false
inline bool Contains(int32_t  x, int32_t  y) ;

/// @brief Method DebugDraw, addr 0x5e49590, size 0x204, virtual false, abstract: false, final false
inline void DebugDraw(::Pathfinding::Util::GraphTransform*  transform, ::UnityEngine::Color  color) ;

/// @brief Method Equals, addr 0x5e48fc8, size 0xb8, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Expand, addr 0x5e49368, size 0x24, virtual false, abstract: false, final false
inline ::Pathfinding::IntRect Expand(int32_t  range) ;

/// @brief Method ExpandToContain, addr 0x5e4929c, size 0xcc, virtual false, abstract: false, final false
inline ::Pathfinding::IntRect ExpandToContain(int32_t  x, int32_t  y) ;

/// @brief Method GetHashCode, addr 0x5e49080, size 0x28, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method Intersection, addr 0x5e490a8, size 0xd8, virtual false, abstract: false, final false
static inline ::Pathfinding::IntRect Intersection(::Pathfinding::IntRect  a, ::Pathfinding::IntRect  b) ;

/// @brief Method Intersects, addr 0x5e49180, size 0x44, virtual false, abstract: false, final false
static inline bool Intersects(::Pathfinding::IntRect  a, ::Pathfinding::IntRect  b) ;

/// @brief Method IsValid, addr 0x5e48f4c, size 0x2c, virtual false, abstract: false, final false
inline bool IsValid() ;

/// @brief Method ToString, addr 0x5e4938c, size 0x204, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method Union, addr 0x5e491c4, size 0xd8, virtual false, abstract: false, final false
static inline ::Pathfinding::IntRect Union(::Pathfinding::IntRect  a, ::Pathfinding::IntRect  b) ;

/// @brief Method .ctor, addr 0x5e48e80, size 0xc, virtual false, abstract: false, final false
inline void _ctor(int32_t  xmin, int32_t  ymin, int32_t  xmax, int32_t  ymax) ;

/// @brief Method get_Area, addr 0x5e48f30, size 0x1c, virtual false, abstract: false, final false
inline int32_t get_Area() ;

/// @brief Method get_Height, addr 0x5e48f1c, size 0x14, virtual false, abstract: false, final false
inline int32_t get_Height() ;

/// @brief Method get_Max, addr 0x5e48ee8, size 0x20, virtual false, abstract: false, final false
inline ::Pathfinding::Int2 get_Max() ;

/// @brief Method get_Min, addr 0x5e48ec8, size 0x20, virtual false, abstract: false, final false
inline ::Pathfinding::Int2 get_Min() ;

/// @brief Method get_Width, addr 0x5e48f08, size 0x14, virtual false, abstract: false, final false
inline int32_t get_Width() ;

/// @brief Method op_Equality, addr 0x5e48f78, size 0x28, virtual false, abstract: false, final false
static inline bool op_Equality(::Pathfinding::IntRect  a, ::Pathfinding::IntRect  b) ;

/// @brief Method op_Inequality, addr 0x5e48fa0, size 0x28, virtual false, abstract: false, final false
static inline bool op_Inequality(::Pathfinding::IntRect  a, ::Pathfinding::IntRect  b) ;

// Ctor Parameters []
// @brief default ctor
constexpr IntRect() ;

// Ctor Parameters [CppParam { name: "xmin", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ymin", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "xmax", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "ymax", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr IntRect(int32_t  xmin, int32_t  ymin, int32_t  xmax, int32_t  ymax) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21201};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field xmin, offset: 0x0, size: 0x4, def value: None
 int32_t  xmin;

/// @brief Field ymin, offset: 0x4, size: 0x4, def value: None
 int32_t  ymin;

/// @brief Field xmax, offset: 0x8, size: 0x4, def value: None
 int32_t  xmax;

/// @brief Field ymax, offset: 0xc, size: 0x4, def value: None
 int32_t  ymax;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::IntRect, xmin) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::IntRect, ymin) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::IntRect, xmax) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::IntRect, ymax) == 0xc, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::IntRect) == 0x10, "Size mismatch!");

} // namespace end def Pathfinding
