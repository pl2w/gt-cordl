#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/XRInteractionSimulatorLoader.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(XRInteractionSimulatorLoader)
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation {
class XRInteractionSimulatorLoader;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulatorLoader*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulatorLoader*, "UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation", "XRInteractionSimulatorLoader");
// [Preserve]
// Dependencies System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRInteractionSimulatorLoader
class CORDL_TYPE XRInteractionSimulatorLoader : public ::System::Object {
public:
// Declarations
/// [RuntimeInitializeOnLoadMethod((UnityEngine.RuntimeInitializeLoadType)0)]
/// [Preserve]
/// @brief Method Initialize, addr 0xb4c76b0, size 0x4, virtual false, abstract: false, final false
static inline void Initialize() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRInteractionSimulatorLoader() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRInteractionSimulatorLoader", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRInteractionSimulatorLoader(XRInteractionSimulatorLoader && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRInteractionSimulatorLoader", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRInteractionSimulatorLoader(XRInteractionSimulatorLoader const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11628};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulatorLoader) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation
