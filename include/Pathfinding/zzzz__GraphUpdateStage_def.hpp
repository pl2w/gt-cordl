#pragma once
// IWYU pragma private; include "Pathfinding/GraphUpdateStage.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(GraphUpdateStage)
// Forward declare root types
namespace Pathfinding {
struct GraphUpdateStage;
}
// Write type traits
MARK_VAL_T(::Pathfinding::GraphUpdateStage);
DEFINE_IL2CPP_CLASS(::Pathfinding::GraphUpdateStage, "Pathfinding", "GraphUpdateStage");
// Dependencies 
namespace Pathfinding {
// Is value type: true
// CS Name: Pathfinding.GraphUpdateStage
struct CORDL_TYPE GraphUpdateStage {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __GraphUpdateStage_Unwrapped
enum struct __GraphUpdateStage_Unwrapped : int32_t {
__E_Created = static_cast<int32_t>(0x0),
__E_Pending = static_cast<int32_t>(0x1),
__E_Applied = static_cast<int32_t>(0x2),
__E_Aborted = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __GraphUpdateStage_Unwrapped () const noexcept {
return static_cast<__GraphUpdateStage_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr GraphUpdateStage() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr GraphUpdateStage(int32_t  value__) noexcept;

/// @brief Field Aborted value: I32(3)
static ::Pathfinding::GraphUpdateStage const Aborted;

/// @brief Field Applied value: I32(2)
static ::Pathfinding::GraphUpdateStage const Applied;

/// @brief Field Created value: I32(0)
static ::Pathfinding::GraphUpdateStage const Created;

/// @brief Field Pending value: I32(1)
static ::Pathfinding::GraphUpdateStage const Pending;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21197};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::GraphUpdateStage, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::GraphUpdateStage) == 0x4, "Size mismatch!");

} // namespace end def Pathfinding
