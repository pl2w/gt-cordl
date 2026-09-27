#pragma once
// IWYU pragma private; include "GlobalNamespace/BuilderPieceSet_BuilderPieceCategory.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BuilderPieceSet_BuilderPieceCategory)
// Forward declare root types
namespace GlobalNamespace {
struct BuilderPieceSet_BuilderPieceCategory;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::BuilderPieceSet_BuilderPieceCategory);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::BuilderPieceSet_BuilderPieceCategory, "", "BuilderPieceSet/BuilderPieceCategory");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: BuilderPieceSet/BuilderPieceCategory
struct CORDL_TYPE BuilderPieceSet_BuilderPieceCategory {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __BuilderPieceSet_BuilderPieceCategory_Unwrapped
enum struct __BuilderPieceSet_BuilderPieceCategory_Unwrapped : int32_t {
__E_FLAT = static_cast<int32_t>(0x0),
__E_TALL = static_cast<int32_t>(0x1),
__E_HALF_HEIGHT = static_cast<int32_t>(0x2),
__E_BEAM = static_cast<int32_t>(0x3),
__E_SLOPE = static_cast<int32_t>(0x4),
__E_OVERSIZED = static_cast<int32_t>(0x5),
__E_SPECIAL_DISPLAY = static_cast<int32_t>(0x6),
__E_FUNCTIONAL = static_cast<int32_t>(0x12),
__E_DECORATIVE = static_cast<int32_t>(0x13),
__E_MISC = static_cast<int32_t>(0x14),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BuilderPieceSet_BuilderPieceCategory_Unwrapped () const noexcept {
return static_cast<__BuilderPieceSet_BuilderPieceCategory_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr BuilderPieceSet_BuilderPieceCategory() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr BuilderPieceSet_BuilderPieceCategory(int32_t  value__) noexcept;

/// @brief Field BEAM value: I32(3)
static ::GlobalNamespace::BuilderPieceSet_BuilderPieceCategory const BEAM;

/// @brief Field DECORATIVE value: I32(19)
static ::GlobalNamespace::BuilderPieceSet_BuilderPieceCategory const DECORATIVE;

/// @brief Field FLAT value: I32(0)
static ::GlobalNamespace::BuilderPieceSet_BuilderPieceCategory const FLAT;

/// @brief Field FUNCTIONAL value: I32(18)
static ::GlobalNamespace::BuilderPieceSet_BuilderPieceCategory const FUNCTIONAL;

/// @brief Field HALF_HEIGHT value: I32(2)
static ::GlobalNamespace::BuilderPieceSet_BuilderPieceCategory const HALF_HEIGHT;

/// @brief Field MISC value: I32(20)
static ::GlobalNamespace::BuilderPieceSet_BuilderPieceCategory const MISC;

/// @brief Field OVERSIZED value: I32(5)
static ::GlobalNamespace::BuilderPieceSet_BuilderPieceCategory const OVERSIZED;

/// @brief Field SLOPE value: I32(4)
static ::GlobalNamespace::BuilderPieceSet_BuilderPieceCategory const SLOPE;

/// @brief Field SPECIAL_DISPLAY value: I32(6)
static ::GlobalNamespace::BuilderPieceSet_BuilderPieceCategory const SPECIAL_DISPLAY;

/// @brief Field TALL value: I32(1)
static ::GlobalNamespace::BuilderPieceSet_BuilderPieceCategory const TALL;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1612};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::BuilderPieceSet_BuilderPieceCategory, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::BuilderPieceSet_BuilderPieceCategory) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
