#pragma once
// IWYU pragma private; include "Pathfinding/ClipperLib/ClipType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ClipType)
// Forward declare root types
namespace Pathfinding::ClipperLib {
struct ClipType;
}
// Write type traits
MARK_VAL_T(::Pathfinding::ClipperLib::ClipType);
DEFINE_IL2CPP_CLASS(::Pathfinding::ClipperLib::ClipType, "Pathfinding.ClipperLib", "ClipType");
// Dependencies 
namespace Pathfinding::ClipperLib {
// Is value type: true
// CS Name: Pathfinding.ClipperLib.ClipType
struct CORDL_TYPE ClipType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ClipType_Unwrapped
enum struct __ClipType_Unwrapped : int32_t {
__E_ctIntersection = static_cast<int32_t>(0x0),
__E_ctUnion = static_cast<int32_t>(0x1),
__E_ctDifference = static_cast<int32_t>(0x2),
__E_ctXor = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ClipType_Unwrapped () const noexcept {
return static_cast<__ClipType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ClipType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ClipType(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31650};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field ctDifference value: I32(2)
static ::Pathfinding::ClipperLib::ClipType const ctDifference;

/// @brief Field ctIntersection value: I32(0)
static ::Pathfinding::ClipperLib::ClipType const ctIntersection;

/// @brief Field ctUnion value: I32(1)
static ::Pathfinding::ClipperLib::ClipType const ctUnion;

/// @brief Field ctXor value: I32(3)
static ::Pathfinding::ClipperLib::ClipType const ctXor;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::ClipperLib::ClipType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::ClipperLib::ClipType) == 0x4, "Size mismatch!");

} // namespace end def Pathfinding::ClipperLib
