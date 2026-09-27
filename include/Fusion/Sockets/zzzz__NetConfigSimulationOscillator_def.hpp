#pragma once
// IWYU pragma private; include "Fusion/Sockets/NetConfigSimulationOscillator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/Sockets/zzzz__NetConfigSimulationOscillator_WaveShape_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(NetConfigSimulationOscillator)
namespace GlobalNamespace {
struct NetConfigSimulationOscillator_WaveShape;
}
namespace System {
class Random;
}
// Forward declare root types
namespace Fusion::Sockets {
struct NetConfigSimulationOscillator;
}
// Write type traits
MARK_VAL_T(::Fusion::Sockets::NetConfigSimulationOscillator);
DEFINE_IL2CPP_CLASS(::Fusion::Sockets::NetConfigSimulationOscillator, "Fusion.Sockets", "NetConfigSimulationOscillator");
// Dependencies Fusion.Sockets.NetConfigSimulationOscillator::WaveShape
namespace Fusion::Sockets {
// Is value type: true
// CS Name: Fusion.Sockets.NetConfigSimulationOscillator
struct CORDL_TYPE NetConfigSimulationOscillator {
public:
// Declarations
using WaveShape = ::GlobalNamespace::NetConfigSimulationOscillator_WaveShape;

/// @brief Method GetCurveValue, addr 0x6029f88, size 0x1e0, virtual false, abstract: false, final false
inline double_t GetCurveValue(::System::Random*  rng, double_t  elapsedSecs) ;

// Ctor Parameters []
// @brief default ctor
constexpr NetConfigSimulationOscillator() ;

// Ctor Parameters [CppParam { name: "Shape", ty: "::GlobalNamespace::NetConfigSimulationOscillator_WaveShape", modifiers: "", def_value: None, comment: None }, CppParam { name: "Min", ty: "double_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Max", ty: "double_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Period", ty: "double_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Threshold", ty: "double_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "Additional", ty: "double_t", modifiers: "", def_value: None, comment: None }]
constexpr NetConfigSimulationOscillator(::GlobalNamespace::NetConfigSimulationOscillator_WaveShape  Shape, double_t  Min, double_t  Max, double_t  Period, double_t  Threshold, double_t  Additional) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29357};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x30};

/// @brief Field Shape, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::NetConfigSimulationOscillator_WaveShape  Shape;

/// @brief Field Min, offset: 0x8, size: 0x8, def value: None
 double_t  Min;

/// @brief Field Max, offset: 0x10, size: 0x8, def value: None
 double_t  Max;

/// @brief Field Period, offset: 0x18, size: 0x8, def value: None
 double_t  Period;

/// @brief Field Threshold, offset: 0x20, size: 0x8, def value: None
 double_t  Threshold;

/// @brief Field Additional, offset: 0x28, size: 0x8, def value: None
 double_t  Additional;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Sockets::NetConfigSimulationOscillator, Shape) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetConfigSimulationOscillator, Min) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetConfigSimulationOscillator, Max) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetConfigSimulationOscillator, Period) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetConfigSimulationOscillator, Threshold) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetConfigSimulationOscillator, Additional) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Fusion::Sockets::NetConfigSimulationOscillator) == 0x30, "Size mismatch!");

} // namespace end def Fusion::Sockets
