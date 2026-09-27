#pragma once
// IWYU pragma private; include "Fusion/Sockets/NetConfigSimulationOscillator_WaveShape.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetConfigSimulationOscillator_WaveShape)
// Forward declare root types
namespace GlobalNamespace {
struct NetConfigSimulationOscillator_WaveShape;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::NetConfigSimulationOscillator_WaveShape);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::NetConfigSimulationOscillator_WaveShape, "Fusion.Sockets", "NetConfigSimulationOscillator/WaveShape");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: Fusion.Sockets.NetConfigSimulationOscillator/WaveShape
struct CORDL_TYPE NetConfigSimulationOscillator_WaveShape {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __NetConfigSimulationOscillator_WaveShape_Unwrapped
enum struct __NetConfigSimulationOscillator_WaveShape_Unwrapped : int32_t {
__E_Noise = static_cast<int32_t>(0x0),
__E_Sine = static_cast<int32_t>(0x1),
__E_Square = static_cast<int32_t>(0x2),
__E_Triangle = static_cast<int32_t>(0x3),
__E_Saw = static_cast<int32_t>(0x4),
__E_ReverseSaw = static_cast<int32_t>(0x5),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __NetConfigSimulationOscillator_WaveShape_Unwrapped () const noexcept {
return static_cast<__NetConfigSimulationOscillator_WaveShape_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr NetConfigSimulationOscillator_WaveShape() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr NetConfigSimulationOscillator_WaveShape(int32_t  value__) noexcept;

/// @brief Field Noise value: I32(0)
static ::GlobalNamespace::NetConfigSimulationOscillator_WaveShape const Noise;

/// @brief Field ReverseSaw value: I32(5)
static ::GlobalNamespace::NetConfigSimulationOscillator_WaveShape const ReverseSaw;

/// @brief Field Saw value: I32(4)
static ::GlobalNamespace::NetConfigSimulationOscillator_WaveShape const Saw;

/// @brief Field Sine value: I32(1)
static ::GlobalNamespace::NetConfigSimulationOscillator_WaveShape const Sine;

/// @brief Field Square value: I32(2)
static ::GlobalNamespace::NetConfigSimulationOscillator_WaveShape const Square;

/// @brief Field Triangle value: I32(3)
static ::GlobalNamespace::NetConfigSimulationOscillator_WaveShape const Triangle;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29356};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::NetConfigSimulationOscillator_WaveShape, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::NetConfigSimulationOscillator_WaveShape) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
