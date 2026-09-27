#pragma once
// IWYU pragma private; include "Pathfinding/GridHitInfo.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GridHitInfo)
namespace Pathfinding {
class GridNodeBase;
}
// Forward declare root types
namespace Pathfinding {
struct GridHitInfo;
}
// Write type traits
MARK_VAL_T(::Pathfinding::GridHitInfo);
DEFINE_IL2CPP_CLASS(::Pathfinding::GridHitInfo, "Pathfinding", "GridHitInfo");
// Dependencies 
namespace Pathfinding {
// Is value type: true
// CS Name: Pathfinding.GridHitInfo
struct CORDL_TYPE GridHitInfo {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr GridHitInfo() ;

// Ctor Parameters [CppParam { name: "node", ty: "::Pathfinding::GridNodeBase*", modifiers: "", def_value: None, comment: None }, CppParam { name: "direction", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GridHitInfo(::Pathfinding::GridNodeBase*  node, int32_t  direction) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21307};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field node, offset: 0x0, size: 0x8, def value: None
 ::Pathfinding::GridNodeBase*  node;

/// @brief Field direction, offset: 0x8, size: 0x4, def value: None
 int32_t  direction;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::GridHitInfo, node) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Pathfinding::GridHitInfo, direction) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::GridHitInfo) == 0x10, "Size mismatch!");

} // namespace end def Pathfinding
