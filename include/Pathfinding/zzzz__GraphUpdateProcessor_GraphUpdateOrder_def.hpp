#pragma once
// IWYU pragma private; include "Pathfinding/GraphUpdateProcessor_GraphUpdateOrder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GraphUpdateProcessor_GraphUpdateOrder)
// Forward declare root types
namespace GlobalNamespace {
struct GraphUpdateProcessor_GraphUpdateOrder;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GraphUpdateProcessor_GraphUpdateOrder);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GraphUpdateProcessor_GraphUpdateOrder, "Pathfinding", "GraphUpdateProcessor/GraphUpdateOrder");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Pathfinding.GraphUpdateProcessor/GraphUpdateOrder
struct CORDL_TYPE GraphUpdateProcessor_GraphUpdateOrder {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GraphUpdateProcessor_GraphUpdateOrder_Unwrapped
enum struct __GraphUpdateProcessor_GraphUpdateOrder_Unwrapped : int32_t {
__E_GraphUpdate = static_cast<int32_t>(0x0),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GraphUpdateProcessor_GraphUpdateOrder_Unwrapped () const noexcept {
return static_cast<__GraphUpdateProcessor_GraphUpdateOrder_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GraphUpdateProcessor_GraphUpdateOrder() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GraphUpdateProcessor_GraphUpdateOrder(int32_t  value__) noexcept;

/// @brief Field GraphUpdate value: I32(0)
static ::GlobalNamespace::GraphUpdateProcessor_GraphUpdateOrder const GraphUpdate;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21246};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GraphUpdateProcessor_GraphUpdateOrder, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GraphUpdateProcessor_GraphUpdateOrder) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
