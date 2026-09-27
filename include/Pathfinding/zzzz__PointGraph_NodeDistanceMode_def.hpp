#pragma once
// IWYU pragma private; include "Pathfinding/PointGraph_NodeDistanceMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PointGraph_NodeDistanceMode)
// Forward declare root types
namespace GlobalNamespace {
struct PointGraph_NodeDistanceMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PointGraph_NodeDistanceMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PointGraph_NodeDistanceMode, "Pathfinding", "PointGraph/NodeDistanceMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Pathfinding.PointGraph/NodeDistanceMode
struct CORDL_TYPE PointGraph_NodeDistanceMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PointGraph_NodeDistanceMode_Unwrapped
enum struct __PointGraph_NodeDistanceMode_Unwrapped : int32_t {
__E_Node = static_cast<int32_t>(0x0),
__E_Connection = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PointGraph_NodeDistanceMode_Unwrapped () const noexcept {
return static_cast<__PointGraph_NodeDistanceMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PointGraph_NodeDistanceMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr PointGraph_NodeDistanceMode(int32_t  value__) noexcept;

/// @brief Field Connection value: I32(1)
static ::GlobalNamespace::PointGraph_NodeDistanceMode const Connection;

/// @brief Field Node value: I32(0)
static ::GlobalNamespace::PointGraph_NodeDistanceMode const Node;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21327};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PointGraph_NodeDistanceMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PointGraph_NodeDistanceMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
