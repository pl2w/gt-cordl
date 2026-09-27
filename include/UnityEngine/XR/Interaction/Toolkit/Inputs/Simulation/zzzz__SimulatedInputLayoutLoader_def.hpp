#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/SimulatedInputLayoutLoader.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(SimulatedInputLayoutLoader)
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation {
class SimulatedInputLayoutLoader;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedInputLayoutLoader*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedInputLayoutLoader*, "UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation", "SimulatedInputLayoutLoader");
// [Preserve]
// Dependencies System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.SimulatedInputLayoutLoader
class CORDL_TYPE SimulatedInputLayoutLoader : public ::System::Object {
public:
// Declarations
/// [RuntimeInitializeOnLoadMethod((UnityEngine.RuntimeInitializeLoadType)1)]
/// [Preserve]
/// @brief Method Initialize, addr 0xb4b92c0, size 0x4, virtual false, abstract: false, final false
static inline void Initialize() ;

/// @brief Method RegisterInputLayouts, addr 0xb4b915c, size 0x164, virtual false, abstract: false, final false
static inline void RegisterInputLayouts() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SimulatedInputLayoutLoader() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SimulatedInputLayoutLoader", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SimulatedInputLayoutLoader(SimulatedInputLayoutLoader && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SimulatedInputLayoutLoader", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SimulatedInputLayoutLoader(SimulatedInputLayoutLoader const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11616};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedInputLayoutLoader) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation
