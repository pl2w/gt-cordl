#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/TargetedDeviceExtensions.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(TargetedDeviceExtensions)
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation {
struct TargetedDevices;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation {
class TargetedDeviceExtensions;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDeviceExtensions*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDeviceExtensions*, "UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation", "TargetedDeviceExtensions");
// [Extension]
// Dependencies System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.TargetedDeviceExtensions
class CORDL_TYPE TargetedDeviceExtensions : public ::System::Object {
public:
// Declarations
/// [Extension]
/// @brief Method HasDevice, addr 0xb4c3cd4, size 0xc, virtual false, abstract: false, final false
static inline bool HasDevice(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDevices  devices, ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDevices  device) ;

/// [Extension]
/// @brief Method WithDevice, addr 0xb4c73d8, size 0x8, virtual false, abstract: false, final false
static inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDevices WithDevice(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDevices  devices, ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDevices  device) ;

/// [Extension]
/// @brief Method WithoutDevice, addr 0xb4c73d0, size 0x8, virtual false, abstract: false, final false
static inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDevices WithoutDevice(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDevices  devices, ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDevices  device) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TargetedDeviceExtensions() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TargetedDeviceExtensions", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TargetedDeviceExtensions(TargetedDeviceExtensions && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TargetedDeviceExtensions", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TargetedDeviceExtensions(TargetedDeviceExtensions const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11639};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDeviceExtensions) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation
