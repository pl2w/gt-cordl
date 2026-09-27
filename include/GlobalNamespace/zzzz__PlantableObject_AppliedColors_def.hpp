#pragma once
// IWYU pragma private; include "GlobalNamespace/PlantableObject_AppliedColors.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PlantableObject_AppliedColors)
// Forward declare root types
namespace GlobalNamespace {
struct PlantableObject_AppliedColors;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PlantableObject_AppliedColors);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PlantableObject_AppliedColors, "", "PlantableObject/AppliedColors");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: PlantableObject/AppliedColors
struct CORDL_TYPE PlantableObject_AppliedColors {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __PlantableObject_AppliedColors_Unwrapped
enum struct __PlantableObject_AppliedColors_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_Red = static_cast<int32_t>(0x1),
__E_Green = static_cast<int32_t>(0x2),
__E_Blue = static_cast<int32_t>(0x3),
__E_Black = static_cast<int32_t>(0x4),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PlantableObject_AppliedColors_Unwrapped () const noexcept {
return static_cast<__PlantableObject_AppliedColors_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr PlantableObject_AppliedColors() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr PlantableObject_AppliedColors(int32_t  value__) noexcept;

/// @brief Field Black value: I32(4)
static ::GlobalNamespace::PlantableObject_AppliedColors const Black;

/// @brief Field Blue value: I32(3)
static ::GlobalNamespace::PlantableObject_AppliedColors const Blue;

/// @brief Field Green value: I32(2)
static ::GlobalNamespace::PlantableObject_AppliedColors const Green;

/// @brief Field None value: I32(0)
static ::GlobalNamespace::PlantableObject_AppliedColors const None;

/// @brief Field Red value: I32(1)
static ::GlobalNamespace::PlantableObject_AppliedColors const Red;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1345};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PlantableObject_AppliedColors, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PlantableObject_AppliedColors) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
