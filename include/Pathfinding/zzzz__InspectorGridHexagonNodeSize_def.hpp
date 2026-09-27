#pragma once
// IWYU pragma private; include "Pathfinding/InspectorGridHexagonNodeSize.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(InspectorGridHexagonNodeSize)
// Forward declare root types
namespace Pathfinding {
struct InspectorGridHexagonNodeSize;
}
// Write type traits
MARK_VAL_T(::Pathfinding::InspectorGridHexagonNodeSize);
DEFINE_IL2CPP_CLASS(::Pathfinding::InspectorGridHexagonNodeSize, "Pathfinding", "InspectorGridHexagonNodeSize");
// Dependencies 
namespace Pathfinding {
// Is value type: true
// CS Name: Pathfinding.InspectorGridHexagonNodeSize
struct CORDL_TYPE InspectorGridHexagonNodeSize {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __InspectorGridHexagonNodeSize_Unwrapped
enum struct __InspectorGridHexagonNodeSize_Unwrapped : int32_t {
__E_Width = static_cast<int32_t>(0x0),
__E_Diameter = static_cast<int32_t>(0x1),
__E_NodeSize = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __InspectorGridHexagonNodeSize_Unwrapped () const noexcept {
return static_cast<__InspectorGridHexagonNodeSize_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr InspectorGridHexagonNodeSize() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr InspectorGridHexagonNodeSize(int32_t  value__) noexcept;

/// @brief Field Diameter value: I32(1)
static ::Pathfinding::InspectorGridHexagonNodeSize const Diameter;

/// @brief Field NodeSize value: I32(2)
static ::Pathfinding::InspectorGridHexagonNodeSize const NodeSize;

/// @brief Field Width value: I32(0)
static ::Pathfinding::InspectorGridHexagonNodeSize const Width;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21217};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::InspectorGridHexagonNodeSize, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::InspectorGridHexagonNodeSize) == 0x4, "Size mismatch!");

} // namespace end def Pathfinding
