#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/TargetedDevices.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TargetedDevices)
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation {
struct TargetedDevices;
}
// Write type traits
MARK_VAL_T(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDevices);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDevices, "UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation", "TargetedDevices");
// [Flags]
// Dependencies 
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation {
// Is value type: true
// CS Name: UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.TargetedDevices
struct CORDL_TYPE TargetedDevices {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __TargetedDevices_Unwrapped
enum struct __TargetedDevices_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_FPS = static_cast<int32_t>(0x1),
__E_LeftDevice = static_cast<int32_t>(0x2),
__E_RightDevice = static_cast<int32_t>(0x4),
__E_HMD = static_cast<int32_t>(0x8),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __TargetedDevices_Unwrapped () const noexcept {
return static_cast<__TargetedDevices_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr TargetedDevices() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr TargetedDevices(int32_t  value__) noexcept;

/// @brief Field FPS value: I32(1)
static ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDevices const FPS;

/// @brief Field HMD value: I32(8)
static ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDevices const HMD;

/// @brief Field LeftDevice value: I32(2)
static ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDevices const LeftDevice;

/// @brief Field None value: I32(0)
static ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDevices const None;

/// @brief Field RightDevice value: I32(4)
static ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDevices const RightDevice;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11634};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDevices, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDevices) == 0x4, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation
