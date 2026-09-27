#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/XRDeviceSimulator_DeviceMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(XRDeviceSimulator_DeviceMode)
// Forward declare root types
namespace GlobalNamespace {
struct XRDeviceSimulator_DeviceMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::XRDeviceSimulator_DeviceMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::XRDeviceSimulator_DeviceMode, "UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation", "XRDeviceSimulator/DeviceMode");
// [Obsolete("DeviceMode has been deprecated in XRI 3.1.0 due to being moved out XR Device Simulator. Use DeviceMode in the SimulatedDeviceLifecycleManager instead.")]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator/DeviceMode
struct CORDL_TYPE XRDeviceSimulator_DeviceMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __XRDeviceSimulator_DeviceMode_Unwrapped
enum struct __XRDeviceSimulator_DeviceMode_Unwrapped : int32_t {
__E_Controller = static_cast<int32_t>(0x0),
__E_Hand = static_cast<int32_t>(0x1),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __XRDeviceSimulator_DeviceMode_Unwrapped () const noexcept {
return static_cast<__XRDeviceSimulator_DeviceMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr XRDeviceSimulator_DeviceMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr XRDeviceSimulator_DeviceMode(int32_t  value__) noexcept;

/// @brief Field Controller value: I32(0)
static ::GlobalNamespace::XRDeviceSimulator_DeviceMode const Controller;

/// @brief Field Hand value: I32(1)
static ::GlobalNamespace::XRDeviceSimulator_DeviceMode const Hand;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11622};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::XRDeviceSimulator_DeviceMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::XRDeviceSimulator_DeviceMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
