#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/XRDeviceSimulatorLoader.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(XRDeviceSimulatorLoader)
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation {
class XRDeviceSimulatorLoader;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulatorLoader*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulatorLoader*, "UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation", "XRDeviceSimulatorLoader");
// [Obsolete("XRDeviceSimulatorLoader has been replaced by the XRInteractionSimulatorLoader. ", false)]
// Dependencies System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulatorLoader
class CORDL_TYPE XRDeviceSimulatorLoader : public ::System::Object {
public:
// Declarations
/// @brief Method Initialize, addr 0xb4c32d0, size 0x4, virtual false, abstract: false, final false
static inline void Initialize() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRDeviceSimulatorLoader() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRDeviceSimulatorLoader", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRDeviceSimulatorLoader(XRDeviceSimulatorLoader && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRDeviceSimulatorLoader", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRDeviceSimulatorLoader(XRDeviceSimulatorLoader const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11625};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulatorLoader) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation
