#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/HID/HID_Simulation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HID_Simulation)
// Forward declare root types
namespace GlobalNamespace {
struct HID_Simulation;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::HID_Simulation);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HID_Simulation, "UnityEngine.InputSystem.HID", "HID/Simulation");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.InputSystem.HID.HID/Simulation
struct CORDL_TYPE HID_Simulation {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __HID_Simulation_Unwrapped
enum struct __HID_Simulation_Unwrapped : int32_t {
__E_Undefined = static_cast<int32_t>(0x0),
__E_FlightSimulationDevice = static_cast<int32_t>(0x1),
__E_AutomobileSimulationDevice = static_cast<int32_t>(0x2),
__E_TankSimulationDevice = static_cast<int32_t>(0x3),
__E_SpaceshipSimulationDevice = static_cast<int32_t>(0x4),
__E_SubmarineSimulationDevice = static_cast<int32_t>(0x5),
__E_SailingSimulationDevice = static_cast<int32_t>(0x6),
__E_MotorcycleSimulationDevice = static_cast<int32_t>(0x7),
__E_SportsSimulationDevice = static_cast<int32_t>(0x8),
__E_AirplaneSimulationDevice = static_cast<int32_t>(0x9),
__E_HelicopterSimulationDevice = static_cast<int32_t>(0xa),
__E_MagicCarpetSimulationDevice = static_cast<int32_t>(0xb),
__E_BicylcleSimulationDevice = static_cast<int32_t>(0xc),
__E_FlightControlStick = static_cast<int32_t>(0x20),
__E_FlightStick = static_cast<int32_t>(0x21),
__E_CyclicControl = static_cast<int32_t>(0x22),
__E_CyclicTrim = static_cast<int32_t>(0x23),
__E_FlightYoke = static_cast<int32_t>(0x24),
__E_TrackControl = static_cast<int32_t>(0x25),
__E_Aileron = static_cast<int32_t>(0xb0),
__E_AileronTrim = static_cast<int32_t>(0xb1),
__E_AntiTorqueControl = static_cast<int32_t>(0xb2),
__E_AutopilotEnable = static_cast<int32_t>(0xb3),
__E_ChaffRelease = static_cast<int32_t>(0xb4),
__E_CollectiveControl = static_cast<int32_t>(0xb5),
__E_DiveBreak = static_cast<int32_t>(0xb6),
__E_ElectronicCountermeasures = static_cast<int32_t>(0xb7),
__E_Elevator = static_cast<int32_t>(0xb8),
__E_ElevatorTrim = static_cast<int32_t>(0xb9),
__E_Rudder = static_cast<int32_t>(0xba),
__E_Throttle = static_cast<int32_t>(0xbb),
__E_FlightCommunications = static_cast<int32_t>(0xbc),
__E_FlareRelease = static_cast<int32_t>(0xbd),
__E_LandingGear = static_cast<int32_t>(0xbe),
__E_ToeBreak = static_cast<int32_t>(0xbf),
__E_Trigger = static_cast<int32_t>(0xc0),
__E_WeaponsArm = static_cast<int32_t>(0xc1),
__E_WeaponsSelect = static_cast<int32_t>(0xc2),
__E_WingFlaps = static_cast<int32_t>(0xc3),
__E_Accelerator = static_cast<int32_t>(0xc4),
__E_Brake = static_cast<int32_t>(0xc5),
__E_Clutch = static_cast<int32_t>(0xc6),
__E_Shifter = static_cast<int32_t>(0xc7),
__E_Steering = static_cast<int32_t>(0xc8),
__E_TurretDirection = static_cast<int32_t>(0xc9),
__E_BarrelElevation = static_cast<int32_t>(0xca),
__E_DivePlane = static_cast<int32_t>(0xcb),
__E_Ballast = static_cast<int32_t>(0xcc),
__E_BicycleCrank = static_cast<int32_t>(0xcd),
__E_HandleBars = static_cast<int32_t>(0xce),
__E_FrontBrake = static_cast<int32_t>(0xcf),
__E_RearBrake = static_cast<int32_t>(0xd0),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __HID_Simulation_Unwrapped () const noexcept {
return static_cast<__HID_Simulation_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr HID_Simulation() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr HID_Simulation(int32_t  value__) noexcept;

/// @brief Field Accelerator value: I32(196)
static ::GlobalNamespace::HID_Simulation const Accelerator;

/// @brief Field Aileron value: I32(176)
static ::GlobalNamespace::HID_Simulation const Aileron;

/// @brief Field AileronTrim value: I32(177)
static ::GlobalNamespace::HID_Simulation const AileronTrim;

/// @brief Field AirplaneSimulationDevice value: I32(9)
static ::GlobalNamespace::HID_Simulation const AirplaneSimulationDevice;

/// @brief Field AntiTorqueControl value: I32(178)
static ::GlobalNamespace::HID_Simulation const AntiTorqueControl;

/// @brief Field AutomobileSimulationDevice value: I32(2)
static ::GlobalNamespace::HID_Simulation const AutomobileSimulationDevice;

/// @brief Field AutopilotEnable value: I32(179)
static ::GlobalNamespace::HID_Simulation const AutopilotEnable;

/// @brief Field Ballast value: I32(204)
static ::GlobalNamespace::HID_Simulation const Ballast;

/// @brief Field BarrelElevation value: I32(202)
static ::GlobalNamespace::HID_Simulation const BarrelElevation;

/// @brief Field BicycleCrank value: I32(205)
static ::GlobalNamespace::HID_Simulation const BicycleCrank;

/// @brief Field BicylcleSimulationDevice value: I32(12)
static ::GlobalNamespace::HID_Simulation const BicylcleSimulationDevice;

/// @brief Field Brake value: I32(197)
static ::GlobalNamespace::HID_Simulation const Brake;

/// @brief Field ChaffRelease value: I32(180)
static ::GlobalNamespace::HID_Simulation const ChaffRelease;

/// @brief Field Clutch value: I32(198)
static ::GlobalNamespace::HID_Simulation const Clutch;

/// @brief Field CollectiveControl value: I32(181)
static ::GlobalNamespace::HID_Simulation const CollectiveControl;

/// @brief Field CyclicControl value: I32(34)
static ::GlobalNamespace::HID_Simulation const CyclicControl;

/// @brief Field CyclicTrim value: I32(35)
static ::GlobalNamespace::HID_Simulation const CyclicTrim;

/// @brief Field DiveBreak value: I32(182)
static ::GlobalNamespace::HID_Simulation const DiveBreak;

/// @brief Field DivePlane value: I32(203)
static ::GlobalNamespace::HID_Simulation const DivePlane;

/// @brief Field ElectronicCountermeasures value: I32(183)
static ::GlobalNamespace::HID_Simulation const ElectronicCountermeasures;

/// @brief Field Elevator value: I32(184)
static ::GlobalNamespace::HID_Simulation const Elevator;

/// @brief Field ElevatorTrim value: I32(185)
static ::GlobalNamespace::HID_Simulation const ElevatorTrim;

/// @brief Field FlareRelease value: I32(189)
static ::GlobalNamespace::HID_Simulation const FlareRelease;

/// @brief Field FlightCommunications value: I32(188)
static ::GlobalNamespace::HID_Simulation const FlightCommunications;

/// @brief Field FlightControlStick value: I32(32)
static ::GlobalNamespace::HID_Simulation const FlightControlStick;

/// @brief Field FlightSimulationDevice value: I32(1)
static ::GlobalNamespace::HID_Simulation const FlightSimulationDevice;

/// @brief Field FlightStick value: I32(33)
static ::GlobalNamespace::HID_Simulation const FlightStick;

/// @brief Field FlightYoke value: I32(36)
static ::GlobalNamespace::HID_Simulation const FlightYoke;

/// @brief Field FrontBrake value: I32(207)
static ::GlobalNamespace::HID_Simulation const FrontBrake;

/// @brief Field HandleBars value: I32(206)
static ::GlobalNamespace::HID_Simulation const HandleBars;

/// @brief Field HelicopterSimulationDevice value: I32(10)
static ::GlobalNamespace::HID_Simulation const HelicopterSimulationDevice;

/// @brief Field LandingGear value: I32(190)
static ::GlobalNamespace::HID_Simulation const LandingGear;

/// @brief Field MagicCarpetSimulationDevice value: I32(11)
static ::GlobalNamespace::HID_Simulation const MagicCarpetSimulationDevice;

/// @brief Field MotorcycleSimulationDevice value: I32(7)
static ::GlobalNamespace::HID_Simulation const MotorcycleSimulationDevice;

/// @brief Field RearBrake value: I32(208)
static ::GlobalNamespace::HID_Simulation const RearBrake;

/// @brief Field Rudder value: I32(186)
static ::GlobalNamespace::HID_Simulation const Rudder;

/// @brief Field SailingSimulationDevice value: I32(6)
static ::GlobalNamespace::HID_Simulation const SailingSimulationDevice;

/// @brief Field Shifter value: I32(199)
static ::GlobalNamespace::HID_Simulation const Shifter;

/// @brief Field SpaceshipSimulationDevice value: I32(4)
static ::GlobalNamespace::HID_Simulation const SpaceshipSimulationDevice;

/// @brief Field SportsSimulationDevice value: I32(8)
static ::GlobalNamespace::HID_Simulation const SportsSimulationDevice;

/// @brief Field Steering value: I32(200)
static ::GlobalNamespace::HID_Simulation const Steering;

/// @brief Field SubmarineSimulationDevice value: I32(5)
static ::GlobalNamespace::HID_Simulation const SubmarineSimulationDevice;

/// @brief Field TankSimulationDevice value: I32(3)
static ::GlobalNamespace::HID_Simulation const TankSimulationDevice;

/// @brief Field Throttle value: I32(187)
static ::GlobalNamespace::HID_Simulation const Throttle;

/// @brief Field ToeBreak value: I32(191)
static ::GlobalNamespace::HID_Simulation const ToeBreak;

/// @brief Field TrackControl value: I32(37)
static ::GlobalNamespace::HID_Simulation const TrackControl;

/// @brief Field Trigger value: I32(192)
static ::GlobalNamespace::HID_Simulation const Trigger;

/// @brief Field TurretDirection value: I32(201)
static ::GlobalNamespace::HID_Simulation const TurretDirection;

/// @brief Field Undefined value: I32(0)
static ::GlobalNamespace::HID_Simulation const Undefined;

/// @brief Field WeaponsArm value: I32(193)
static ::GlobalNamespace::HID_Simulation const WeaponsArm;

/// @brief Field WeaponsSelect value: I32(194)
static ::GlobalNamespace::HID_Simulation const WeaponsSelect;

/// @brief Field WingFlaps value: I32(195)
static ::GlobalNamespace::HID_Simulation const WingFlaps;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13624};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x0, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HID_Simulation, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HID_Simulation) == 0x4, "Size mismatch!");

} // namespace end def GlobalNamespace
