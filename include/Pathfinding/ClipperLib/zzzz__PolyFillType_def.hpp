#pragma once
// IWYU pragma private; include "Pathfinding/ClipperLib/PolyFillType.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PolyFillType)
// Forward declare root types
namespace Pathfinding::ClipperLib {
struct PolyFillType;
}
// Write type traits
MARK_VAL_T(::Pathfinding::ClipperLib::PolyFillType);
DEFINE_IL2CPP_CLASS(::Pathfinding::ClipperLib::PolyFillType, "Pathfinding.ClipperLib", "PolyFillType");
// Dependencies 
namespace Pathfinding::ClipperLib {
// Is value type: true
// CS Name: Pathfinding.ClipperLib.PolyFillType
struct CORDL_TYPE PolyFillType {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PolyFillType_Unwrapped
enum struct __PolyFillType_Unwrapped : int32_t {
__E_pftEvenOdd = static_cast<int32_t>(0x0),
__E_pftNonZero = static_cast<int32_t>(0x1),
__E_pftPositive = static_cast<int32_t>(0x2),
__E_pftNegative = static_cast<int32_t>(0x3),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PolyFillType_Unwrapped () const noexcept {
return static_cast<__PolyFillType_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PolyFillType() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr PolyFillType(int32_t  value__) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31652};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field pftEvenOdd value: I32(0)
static ::Pathfinding::ClipperLib::PolyFillType const pftEvenOdd;

/// @brief Field pftNegative value: I32(3)
static ::Pathfinding::ClipperLib::PolyFillType const pftNegative;

/// @brief Field pftNonZero value: I32(1)
static ::Pathfinding::ClipperLib::PolyFillType const pftNonZero;

/// @brief Field pftPositive value: I32(2)
static ::Pathfinding::ClipperLib::PolyFillType const pftPositive;

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Pathfinding::ClipperLib::PolyFillType, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Pathfinding::ClipperLib::PolyFillType) == 0x4, "Size mismatch!");

} // namespace end def Pathfinding::ClipperLib
