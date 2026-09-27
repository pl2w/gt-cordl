#pragma once
// IWYU pragma private; include "Pathfinding/RVO/Line.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(Line)
// Forward declare root types
namespace Pathfinding::RVO {
struct Line;
}
// Write type traits
MARK_VAL_T(::Pathfinding::RVO::Line);
DEFINE_IL2CPP_CLASS(::Pathfinding::RVO::Line, "Pathfinding.RVO", "Line");
// Dependencies UnityEngine.Vector2
namespace Pathfinding::RVO {
// Is value type: true
// CS Name: Pathfinding.RVO.Line
struct CORDL_TYPE Line {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr Line() ;

// Ctor Parameters [CppParam { name: "point", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None, comment: None }, CppParam { name: "dir", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None, comment: None }]
constexpr Line(::UnityEngine::Vector2  point, ::UnityEngine::Vector2  dir) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21499};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field point, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::Vector2  point;

/// @brief Field dir, offset: 0x8, size: 0x8, def value: None
 ::UnityEngine::Vector2  dir;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::RVO::Line, point) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::RVO::Line, dir) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::RVO::Line) == 0x10, "Size mismatch!");

} // namespace end def Pathfinding::RVO
