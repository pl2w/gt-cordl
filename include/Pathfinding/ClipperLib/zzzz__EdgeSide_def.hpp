#pragma once
// IWYU pragma private; include "Pathfinding/ClipperLib/EdgeSide.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EdgeSide)
// Forward declare root types
namespace Pathfinding::ClipperLib {
struct EdgeSide;
}
// Write type traits
MARK_VAL_T(::Pathfinding::ClipperLib::EdgeSide);
DEFINE_IL2CPP_CLASS(::Pathfinding::ClipperLib::EdgeSide, "Pathfinding.ClipperLib", "EdgeSide");
// Dependencies 
namespace Pathfinding::ClipperLib {
// Is value type: true
// CS Name: Pathfinding.ClipperLib.EdgeSide
struct CORDL_TYPE EdgeSide {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __EdgeSide_Unwrapped
enum struct __EdgeSide_Unwrapped : int32_t {
__E_esLeft = static_cast<int32_t>(0x0),
__E_esRight = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __EdgeSide_Unwrapped () const noexcept {
return static_cast<__EdgeSide_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr EdgeSide() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr EdgeSide(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31653};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field esLeft value: I32(0)
static ::Pathfinding::ClipperLib::EdgeSide const esLeft;

/// @brief Field esRight value: I32(1)
static ::Pathfinding::ClipperLib::EdgeSide const esRight;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::ClipperLib::EdgeSide, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::ClipperLib::EdgeSide) == 0x4, "Size mismatch!");

} // namespace end def Pathfinding::ClipperLib
