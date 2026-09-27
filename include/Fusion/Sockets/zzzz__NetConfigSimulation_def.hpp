#pragma once
// IWYU pragma private; include "Fusion/Sockets/NetConfigSimulation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Fusion/Sockets/zzzz__NetConfigSimulationOscillator_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NetConfigSimulation)
// Forward declare root types
namespace Fusion::Sockets {
struct NetConfigSimulation;
}
// Write type traits
MARK_VAL_T(::Fusion::Sockets::NetConfigSimulation);
DEFINE_IL2CPP_CLASS(::Fusion::Sockets::NetConfigSimulation, "Fusion.Sockets", "NetConfigSimulation");
// Dependencies Fusion.Sockets.NetConfigSimulationOscillator
namespace Fusion::Sockets {
// Is value type: true
// CS Name: Fusion.Sockets.NetConfigSimulation
struct CORDL_TYPE NetConfigSimulation {
public:
// Declarations
/// @brief Method get_Defaults, addr 0x6029ef0, size 0x80, virtual false, abstract: false, final false
static inline ::Fusion::Sockets::NetConfigSimulation get_Defaults() ;

// Ctor Parameters []
// @brief default ctor
constexpr NetConfigSimulation() ;

// Ctor Parameters [CppParam { name: "LossNotifySequences", ty: "int16_t*", modifiers: "", def_value: None, comment: None }, CppParam { name: "LossNotifySequencesLength", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "DelayOscillator", ty: "::Fusion::Sockets::NetConfigSimulationOscillator", modifiers: "", def_value: None, comment: None }, CppParam { name: "LossOscillator", ty: "::Fusion::Sockets::NetConfigSimulationOscillator", modifiers: "", def_value: None, comment: None }, CppParam { name: "DuplicateChance", ty: "double_t", modifiers: "", def_value: None, comment: None }]
constexpr NetConfigSimulation(int16_t*  LossNotifySequences, int32_t  LossNotifySequencesLength, ::Fusion::Sockets::NetConfigSimulationOscillator  DelayOscillator, ::Fusion::Sockets::NetConfigSimulationOscillator  LossOscillator, double_t  DuplicateChance) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29355};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x78};

/// @brief Field LossNotifySequences, offset: 0x0, size: 0x8, def value: None
 int16_t*  LossNotifySequences;

/// @brief Field LossNotifySequencesLength, offset: 0x8, size: 0x4, def value: None
 int32_t  LossNotifySequencesLength;

/// @brief Field DelayOscillator, offset: 0x10, size: 0x30, def value: None
 ::Fusion::Sockets::NetConfigSimulationOscillator  DelayOscillator;

/// @brief Field LossOscillator, offset: 0x40, size: 0x30, def value: None
 ::Fusion::Sockets::NetConfigSimulationOscillator  LossOscillator;

/// @brief Field DuplicateChance, offset: 0x70, size: 0x8, def value: None
 double_t  DuplicateChance;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Fusion::Sockets::NetConfigSimulation, LossNotifySequences) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetConfigSimulation, LossNotifySequencesLength) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetConfigSimulation, DelayOscillator) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetConfigSimulation, LossOscillator) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Fusion::Sockets::NetConfigSimulation, DuplicateChance) == 0x70, "Offset mismatch!");

static_assert(sizeof(::Fusion::Sockets::NetConfigSimulation) == 0x78, "Size mismatch!");

} // namespace end def Fusion::Sockets
