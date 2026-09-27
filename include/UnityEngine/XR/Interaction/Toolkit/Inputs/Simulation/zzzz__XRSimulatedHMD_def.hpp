#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/XRSimulatedHMD.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/XR/zzzz__XRHMD_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XRSimulatedHMD)
namespace UnityEngine::InputSystem::LowLevel {
struct InputDeviceCommand;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation {
class XRSimulatedHMD;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMD*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMD*, "UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation", "XRSimulatedHMD");
// [InputControlLayout(stateType = typeof(UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedHMDState), isGenericTypeOfDevice = false, displayName = "XR Simulated HMD", updateBeforeRender = true)]
// [Preserve]
// Dependencies UnityEngine.InputSystem.XR.XRHMD
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedHMD
class CORDL_TYPE XRSimulatedHMD : public ::UnityEngine::InputSystem::XR::XRHMD {
public:
// Declarations
/// @brief Method ExecuteCommand, addr 0xb4c8070, size 0x90, virtual true, abstract: false, final false
inline int64_t ExecuteCommand(::UnityEngine::InputSystem::LowLevel::InputDeviceCommand*  commandPtr) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMD* New_ctor() ;

/// @brief Method .ctor, addr 0xb4c8100, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRSimulatedHMD() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRSimulatedHMD", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRSimulatedHMD(XRSimulatedHMD && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRSimulatedHMD", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRSimulatedHMD(XRSimulatedHMD const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11632};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMD) == 0x1d8, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation
