#pragma once
// IWYU pragma private; include "Pathfinding/Examples/ProceduralWorld_RotationRandomness.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ProceduralWorld_RotationRandomness)
// Forward declare root types
namespace GlobalNamespace {
struct ProceduralWorld_RotationRandomness;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::ProceduralWorld_RotationRandomness);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ProceduralWorld_RotationRandomness, "Pathfinding.Examples", "ProceduralWorld/RotationRandomness");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Pathfinding.Examples.ProceduralWorld/RotationRandomness
struct CORDL_TYPE ProceduralWorld_RotationRandomness {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __ProceduralWorld_RotationRandomness_Unwrapped
enum struct __ProceduralWorld_RotationRandomness_Unwrapped : int32_t {
__E_AllAxes = static_cast<int32_t>(0x0),
__E_Y = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ProceduralWorld_RotationRandomness_Unwrapped () const noexcept {
return static_cast<__ProceduralWorld_RotationRandomness_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr ProceduralWorld_RotationRandomness() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr ProceduralWorld_RotationRandomness(int32_t  value__) noexcept;

/// @brief Field AllAxes value: I32(0)
static ::GlobalNamespace::ProceduralWorld_RotationRandomness const AllAxes;

/// @brief Field Y value: I32(1)
static ::GlobalNamespace::ProceduralWorld_RotationRandomness const Y;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21521};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::ProceduralWorld_RotationRandomness, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::ProceduralWorld_RotationRandomness) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
