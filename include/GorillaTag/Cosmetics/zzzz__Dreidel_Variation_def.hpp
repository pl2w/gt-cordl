#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/Dreidel_Variation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Dreidel_Variation)
// Forward declare root types
namespace GlobalNamespace {
struct Dreidel_Variation;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::Dreidel_Variation);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::Dreidel_Variation, "GorillaTag.Cosmetics", "Dreidel/Variation");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GorillaTag.Cosmetics.Dreidel/Variation
struct CORDL_TYPE Dreidel_Variation {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __Dreidel_Variation_Unwrapped
enum struct __Dreidel_Variation_Unwrapped : int32_t {
__E_Tumble = static_cast<int32_t>(0x0),
__E_Smooth = static_cast<int32_t>(0x1),
__E_Bounce = static_cast<int32_t>(0x2),
__E_SlowTurn = static_cast<int32_t>(0x3),
__E_FalseSlowTurn = static_cast<int32_t>(0x4),
__E_Count = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Dreidel_Variation_Unwrapped () const noexcept {
return static_cast<__Dreidel_Variation_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr Dreidel_Variation() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr Dreidel_Variation(int32_t  value__) noexcept;

/// @brief Field Bounce value: I32(2)
static ::GlobalNamespace::Dreidel_Variation const Bounce;

/// @brief Field Count value: I32(5)
static ::GlobalNamespace::Dreidel_Variation const Count;

/// @brief Field FalseSlowTurn value: I32(4)
static ::GlobalNamespace::Dreidel_Variation const FalseSlowTurn;

/// @brief Field SlowTurn value: I32(3)
static ::GlobalNamespace::Dreidel_Variation const SlowTurn;

/// @brief Field Smooth value: I32(1)
static ::GlobalNamespace::Dreidel_Variation const Smooth;

/// @brief Field Tumble value: I32(0)
static ::GlobalNamespace::Dreidel_Variation const Tumble;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4916};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::Dreidel_Variation, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::Dreidel_Variation) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
