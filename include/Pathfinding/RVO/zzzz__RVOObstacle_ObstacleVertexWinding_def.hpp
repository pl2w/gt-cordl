#pragma once
// IWYU pragma private; include "Pathfinding/RVO/RVOObstacle_ObstacleVertexWinding.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RVOObstacle_ObstacleVertexWinding)
// Forward declare root types
namespace GlobalNamespace {
struct RVOObstacle_ObstacleVertexWinding;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::RVOObstacle_ObstacleVertexWinding);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RVOObstacle_ObstacleVertexWinding, "Pathfinding.RVO", "RVOObstacle/ObstacleVertexWinding");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Pathfinding.RVO.RVOObstacle/ObstacleVertexWinding
struct CORDL_TYPE RVOObstacle_ObstacleVertexWinding {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __RVOObstacle_ObstacleVertexWinding_Unwrapped
enum struct __RVOObstacle_ObstacleVertexWinding_Unwrapped : int32_t {
__E_KeepOut = static_cast<int32_t>(0x0),
__E_KeepIn = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RVOObstacle_ObstacleVertexWinding_Unwrapped () const noexcept {
return static_cast<__RVOObstacle_ObstacleVertexWinding_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr RVOObstacle_ObstacleVertexWinding() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr RVOObstacle_ObstacleVertexWinding(int32_t  value__) noexcept;

/// @brief Field KeepIn value: I32(1)
static ::GlobalNamespace::RVOObstacle_ObstacleVertexWinding const KeepIn;

/// @brief Field KeepOut value: I32(0)
static ::GlobalNamespace::RVOObstacle_ObstacleVertexWinding const KeepOut;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21507};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RVOObstacle_ObstacleVertexWinding, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RVOObstacle_ObstacleVertexWinding) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
