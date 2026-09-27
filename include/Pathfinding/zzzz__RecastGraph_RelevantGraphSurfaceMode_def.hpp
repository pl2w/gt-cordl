#pragma once
// IWYU pragma private; include "Pathfinding/RecastGraph_RelevantGraphSurfaceMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RecastGraph_RelevantGraphSurfaceMode)
// Forward declare root types
namespace GlobalNamespace {
struct RecastGraph_RelevantGraphSurfaceMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::RecastGraph_RelevantGraphSurfaceMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RecastGraph_RelevantGraphSurfaceMode, "Pathfinding", "RecastGraph/RelevantGraphSurfaceMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Pathfinding.RecastGraph/RelevantGraphSurfaceMode
struct CORDL_TYPE RecastGraph_RelevantGraphSurfaceMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __RecastGraph_RelevantGraphSurfaceMode_Unwrapped
enum struct __RecastGraph_RelevantGraphSurfaceMode_Unwrapped : int32_t {
__E_DoNotRequire = static_cast<int32_t>(0x0),
__E_OnlyForCompletelyInsideTile = static_cast<int32_t>(0x1),
__E_RequireForAll = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __RecastGraph_RelevantGraphSurfaceMode_Unwrapped () const noexcept {
return static_cast<__RecastGraph_RelevantGraphSurfaceMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr RecastGraph_RelevantGraphSurfaceMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr RecastGraph_RelevantGraphSurfaceMode(int32_t  value__) noexcept;

/// @brief Field DoNotRequire value: I32(0)
static ::GlobalNamespace::RecastGraph_RelevantGraphSurfaceMode const DoNotRequire;

/// @brief Field OnlyForCompletelyInsideTile value: I32(1)
static ::GlobalNamespace::RecastGraph_RelevantGraphSurfaceMode const OnlyForCompletelyInsideTile;

/// @brief Field RequireForAll value: I32(2)
static ::GlobalNamespace::RecastGraph_RelevantGraphSurfaceMode const RequireForAll;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21331};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RecastGraph_RelevantGraphSurfaceMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RecastGraph_RelevantGraphSurfaceMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
