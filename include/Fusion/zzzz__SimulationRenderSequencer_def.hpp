#pragma once
// IWYU pragma private; include "Fusion/SimulationRenderSequencer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SimulationRenderSequencer)
namespace Fusion {
class NetworkRunner;
}
namespace Fusion {
class Simulation;
}
// Forward declare root types
namespace Fusion {
struct SimulationRenderSequencer;
}
// Write type traits
MARK_VAL_T(::Fusion::SimulationRenderSequencer);
DEFINE_IL2CPP_CLASS(::Fusion::SimulationRenderSequencer, "Fusion", "SimulationRenderSequencer");
// Dependencies 
namespace Fusion {
// Is value type: true
// CS Name: Fusion.SimulationRenderSequencer
struct CORDL_TYPE SimulationRenderSequencer {
public:
// Declarations
/// @brief Method ConsumeRenderUpdate, addr 0x60066e8, size 0x38, virtual false, abstract: false, final false
inline bool ConsumeRenderUpdate(::Fusion::NetworkRunner*  runner) ;

/// @brief Method ConsumeRenderUpdate, addr 0x6006720, size 0x2c, virtual false, abstract: false, final false
inline bool ConsumeRenderUpdate(::Fusion::Simulation*  simulation) ;

// Ctor Parameters []
// @brief default ctor
constexpr SimulationRenderSequencer() ;

// Ctor Parameters [CppParam { name: "_sequence", ty: "uint64_t", modifiers: "", def_value: None, comment: None }]
constexpr SimulationRenderSequencer(uint64_t  _sequence) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19357};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field _sequence, offset: 0x0, size: 0x8, def value: None
 uint64_t  _sequence;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::SimulationRenderSequencer, _sequence) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Fusion::SimulationRenderSequencer) == 0x8, "Size mismatch!");

} // namespace end def Fusion
