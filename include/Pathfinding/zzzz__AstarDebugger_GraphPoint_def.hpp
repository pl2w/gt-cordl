#pragma once
// IWYU pragma private; include "Pathfinding/AstarDebugger_GraphPoint.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(AstarDebugger_GraphPoint)
// Forward declare root types
namespace GlobalNamespace {
struct AstarDebugger_GraphPoint;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::AstarDebugger_GraphPoint);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AstarDebugger_GraphPoint, "Pathfinding", "AstarDebugger/GraphPoint");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Pathfinding.AstarDebugger/GraphPoint
struct CORDL_TYPE AstarDebugger_GraphPoint {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr AstarDebugger_GraphPoint() ;

// Ctor Parameters [CppParam { name: "fps", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "memory", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "collectEvent", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr AstarDebugger_GraphPoint(float_t  fps, float_t  memory, bool  collectEvent) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21235};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xc};

/// @brief Field fps, offset: 0x0, size: 0x4, def value: None
 float_t  fps;

/// @brief Field memory, offset: 0x4, size: 0x4, def value: None
 float_t  memory;

/// @brief Field collectEvent, offset: 0x8, size: 0x1, def value: None
 bool  collectEvent;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AstarDebugger_GraphPoint, fps) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AstarDebugger_GraphPoint, memory) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AstarDebugger_GraphPoint, collectEvent) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AstarDebugger_GraphPoint) == 0xc, "Size mismatch!");

} // namespace end def GlobalNamespace
