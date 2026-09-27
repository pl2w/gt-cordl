#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/SimulatedDeviceLifecycleManager_DeviceMode.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SimulatedDeviceLifecycleManager_DeviceMode)
// Forward declare root types
namespace GlobalNamespace {
struct SimulatedDeviceLifecycleManager_DeviceMode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SimulatedDeviceLifecycleManager_DeviceMode);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::SimulatedDeviceLifecycleManager_DeviceMode, "UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation", "SimulatedDeviceLifecycleManager/DeviceMode");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.SimulatedDeviceLifecycleManager/DeviceMode
struct CORDL_TYPE SimulatedDeviceLifecycleManager_DeviceMode {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __SimulatedDeviceLifecycleManager_DeviceMode_Unwrapped
enum struct __SimulatedDeviceLifecycleManager_DeviceMode_Unwrapped : int32_t {
__E_Controller = static_cast<int32_t>(0x0),
__E_Hand = static_cast<int32_t>(0x1),
__E_None = static_cast<int32_t>(0x2),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SimulatedDeviceLifecycleManager_DeviceMode_Unwrapped () const noexcept {
return static_cast<__SimulatedDeviceLifecycleManager_DeviceMode_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr SimulatedDeviceLifecycleManager_DeviceMode() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr SimulatedDeviceLifecycleManager_DeviceMode(int32_t  value__) noexcept;

/// @brief Field Controller value: I32(0)
static ::GlobalNamespace::SimulatedDeviceLifecycleManager_DeviceMode const Controller;

/// @brief Field Hand value: I32(1)
static ::GlobalNamespace::SimulatedDeviceLifecycleManager_DeviceMode const Hand;

/// @brief Field None value: I32(2)
static ::GlobalNamespace::SimulatedDeviceLifecycleManager_DeviceMode const None;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11612};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SimulatedDeviceLifecycleManager_DeviceMode, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::SimulatedDeviceLifecycleManager_DeviceMode) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
