#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/SimulatedDeviceLifecycleManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/zzzz__SimulatedDeviceLifecycleManager_DeviceMode_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(SimulatedDeviceLifecycleManager)
namespace GlobalNamespace {
struct SimulatedDeviceLifecycleManager_DeviceMode;
}
namespace UnityEngine::InputSystem {
struct InputDeviceChange;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands {
struct XRSimulatedHandState;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation {
struct XRSimulatedControllerState;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation {
class XRSimulatedController;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation {
struct XRSimulatedHMDState;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation {
class XRSimulatedHMD;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation {
class SimulatedDeviceLifecycleManager;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedDeviceLifecycleManager*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedDeviceLifecycleManager*, "UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation", "SimulatedDeviceLifecycleManager");
// [AddComponentMenu("XR/Debug/Simulated Device Lifecycle Manager", 11)]
// [DefaultExecutionOrder(-29995)]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.SimulatedDeviceLifecycleManager.html")]
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.SimulatedDeviceLifecycleManager::DeviceMode
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.SimulatedDeviceLifecycleManager
class CORDL_TYPE SimulatedDeviceLifecycleManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using DeviceMode = ::GlobalNamespace::SimulatedDeviceLifecycleManager_DeviceMode;

/// @brief Field <instance>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__instance_k__BackingField, put=setStaticF__instance_k__BackingField)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedDeviceLifecycleManager>  _instance_k__BackingField;

 __declspec(property(get=get_deviceMode)) ::GlobalNamespace::SimulatedDeviceLifecycleManager_DeviceMode  deviceMode;

 __declspec(property(get=get_handTrackingCapability, put=set_handTrackingCapability)) bool  handTrackingCapability;

/// @brief Field m_DeviceMode, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_DeviceMode, put=__cordl_internal_set_m_DeviceMode)) ::GlobalNamespace::SimulatedDeviceLifecycleManager_DeviceMode  m_DeviceMode;

/// @brief Field m_DeviceModeDirty, offset 0x41, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_DeviceModeDirty, put=__cordl_internal_set_m_DeviceModeDirty)) bool  m_DeviceModeDirty;

/// @brief Field m_HMDDevice, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_HMDDevice, put=__cordl_internal_set_m_HMDDevice)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMD*  m_HMDDevice;

/// @brief Field m_HandTrackingCapability, offset 0x21, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_HandTrackingCapability, put=__cordl_internal_set_m_HandTrackingCapability)) bool  m_HandTrackingCapability;

/// @brief Field m_LeftControllerDevice, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LeftControllerDevice, put=__cordl_internal_set_m_LeftControllerDevice)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController*  m_LeftControllerDevice;

/// @brief Field m_OnInputDeviceChangeSubscribed, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_OnInputDeviceChangeSubscribed, put=__cordl_internal_set_m_OnInputDeviceChangeSubscribed)) bool  m_OnInputDeviceChangeSubscribed;

/// @brief Field m_RemoveOtherHMDDevices, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_RemoveOtherHMDDevices, put=__cordl_internal_set_m_RemoveOtherHMDDevices)) bool  m_RemoveOtherHMDDevices;

/// @brief Field m_RightControllerDevice, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_RightControllerDevice, put=__cordl_internal_set_m_RightControllerDevice)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController*  m_RightControllerDevice;

/// @brief Field m_StartedDeviceModeChange, offset 0x42, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_StartedDeviceModeChange, put=__cordl_internal_set_m_StartedDeviceModeChange)) bool  m_StartedDeviceModeChange;

 __declspec(property(get=get_removeOtherHMDDevices, put=set_removeOtherHMDDevices)) bool  removeOtherHMDDevices;

/// @brief Method AddControllerDevices, addr 0xb4b8678, size 0x610, virtual false, abstract: false, final false
inline void AddControllerDevices() ;

/// @brief Method AddDevices, addr 0xb4b8428, size 0x250, virtual true, abstract: false, final false
inline void AddDevices() ;

/// @brief Method ApplyControllerState, addr 0xb4b8318, size 0x108, virtual false, abstract: false, final false
inline void ApplyControllerState(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState  leftControllerState, ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState  rightControllerState) ;

/// @brief Method ApplyHMDState, addr 0xb4b8264, size 0xb4, virtual false, abstract: false, final false
inline void ApplyHMDState(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMDState  state) ;

/// @brief Method ApplyHandState, addr 0xb4b8420, size 0x4, virtual false, abstract: false, final false
inline void ApplyHandState(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::XRSimulatedHandState  leftHandState, ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::XRSimulatedHandState  rightHandState) ;

/// @brief Method Awake, addr 0xb4b7d98, size 0x20c, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method InitializeHandSubsystem, addr 0xb4b7fa4, size 0x4, virtual false, abstract: false, final false
inline void InitializeHandSubsystem() ;

/// @brief Method Negate, addr 0xb4b8eb4, size 0xc, virtual false, abstract: false, final false
static inline ::GlobalNamespace::SimulatedDeviceLifecycleManager_DeviceMode Negate(::GlobalNamespace::SimulatedDeviceLifecycleManager_DeviceMode  mode) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedDeviceLifecycleManager* New_ctor() ;

/// @brief Method OnDestroy, addr 0xb4b825c, size 0x4, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0xb4b81a4, size 0xb8, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xb4b7fa8, size 0x1fc, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnInputDeviceChange, addr 0xb4b8db8, size 0xfc, virtual false, abstract: false, final false
inline void OnInputDeviceChange(::UnityEngine::InputSystem::InputDevice*  device, ::UnityEngine::InputSystem::InputDeviceChange  change) ;

/// @brief Method RemoveControllerDevices, addr 0xb4b8d00, size 0xb8, virtual false, abstract: false, final false
inline void RemoveControllerDevices() ;

/// @brief Method RemoveDevices, addr 0xb4b8c88, size 0x78, virtual true, abstract: false, final false
inline void RemoveDevices() ;

/// @brief Method SwitchDeviceMode, addr 0xb4b8424, size 0x4, virtual false, abstract: false, final false
inline void SwitchDeviceMode() ;

/// @brief Method Update, addr 0xb4b8260, size 0x4, virtual true, abstract: false, final false
inline void Update() ;

constexpr ::GlobalNamespace::SimulatedDeviceLifecycleManager_DeviceMode const& __cordl_internal_get_m_DeviceMode() const;

constexpr ::GlobalNamespace::SimulatedDeviceLifecycleManager_DeviceMode& __cordl_internal_get_m_DeviceMode() ;

constexpr bool const& __cordl_internal_get_m_DeviceModeDirty() const;

constexpr bool& __cordl_internal_get_m_DeviceModeDirty() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMD* const& __cordl_internal_get_m_HMDDevice() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMD*& __cordl_internal_get_m_HMDDevice() ;

constexpr bool const& __cordl_internal_get_m_HandTrackingCapability() const;

constexpr bool& __cordl_internal_get_m_HandTrackingCapability() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController* const& __cordl_internal_get_m_LeftControllerDevice() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController*& __cordl_internal_get_m_LeftControllerDevice() ;

constexpr bool const& __cordl_internal_get_m_OnInputDeviceChangeSubscribed() const;

constexpr bool& __cordl_internal_get_m_OnInputDeviceChangeSubscribed() ;

constexpr bool const& __cordl_internal_get_m_RemoveOtherHMDDevices() const;

constexpr bool& __cordl_internal_get_m_RemoveOtherHMDDevices() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController* const& __cordl_internal_get_m_RightControllerDevice() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController*& __cordl_internal_get_m_RightControllerDevice() ;

constexpr bool const& __cordl_internal_get_m_StartedDeviceModeChange() const;

constexpr bool& __cordl_internal_get_m_StartedDeviceModeChange() ;

constexpr void __cordl_internal_set_m_DeviceMode(::GlobalNamespace::SimulatedDeviceLifecycleManager_DeviceMode  value) ;

constexpr void __cordl_internal_set_m_DeviceModeDirty(bool  value) ;

constexpr void __cordl_internal_set_m_HMDDevice(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMD*  value) ;

constexpr void __cordl_internal_set_m_HandTrackingCapability(bool  value) ;

constexpr void __cordl_internal_set_m_LeftControllerDevice(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController*  value) ;

constexpr void __cordl_internal_set_m_OnInputDeviceChangeSubscribed(bool  value) ;

constexpr void __cordl_internal_set_m_RemoveOtherHMDDevices(bool  value) ;

constexpr void __cordl_internal_set_m_RightControllerDevice(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController*  value) ;

constexpr void __cordl_internal_set_m_StartedDeviceModeChange(bool  value) ;

/// @brief Method .ctor, addr 0xb4b8ec0, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedDeviceLifecycleManager> getStaticF__instance_k__BackingField() ;

/// @brief Method get_deviceMode, addr 0xb4b7cf0, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::SimulatedDeviceLifecycleManager_DeviceMode get_deviceMode() ;

/// @brief Method get_handTrackingCapability, addr 0xb4b7ce0, size 0x8, virtual false, abstract: false, final false
inline bool get_handTrackingCapability() ;

/// [CompilerGenerated]
/// @brief Method get_instance, addr 0xb4b7cf8, size 0x48, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedDeviceLifecycleManager> get_instance() ;

/// @brief Method get_removeOtherHMDDevices, addr 0xb4b7cd0, size 0x8, virtual false, abstract: false, final false
inline bool get_removeOtherHMDDevices() ;

static inline void setStaticF__instance_k__BackingField(::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedDeviceLifecycleManager>  value) ;

/// @brief Method set_handTrackingCapability, addr 0xb4b7ce8, size 0x8, virtual false, abstract: false, final false
inline void set_handTrackingCapability(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_instance, addr 0xb4b7d40, size 0x58, virtual false, abstract: false, final false
static inline void set_instance(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedDeviceLifecycleManager*  value) ;

/// @brief Method set_removeOtherHMDDevices, addr 0xb4b7cd8, size 0x8, virtual false, abstract: false, final false
inline void set_removeOtherHMDDevices(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SimulatedDeviceLifecycleManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SimulatedDeviceLifecycleManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
SimulatedDeviceLifecycleManager(SimulatedDeviceLifecycleManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SimulatedDeviceLifecycleManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
SimulatedDeviceLifecycleManager(SimulatedDeviceLifecycleManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11613};

/// [SerializeField]
/// @brief Field m_RemoveOtherHMDDevices, offset: 0x20, size: 0x1, def value: None
 bool  ___m_RemoveOtherHMDDevices;

/// [SerializeField]
/// @brief Field m_HandTrackingCapability, offset: 0x21, size: 0x1, def value: None
 bool  ___m_HandTrackingCapability;

/// @brief Field m_DeviceMode, offset: 0x24, size: 0x4, def value: None
 ::GlobalNamespace::SimulatedDeviceLifecycleManager_DeviceMode  ___m_DeviceMode;

/// @brief Field m_HMDDevice, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMD*  ___m_HMDDevice;

/// @brief Field m_LeftControllerDevice, offset: 0x30, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController*  ___m_LeftControllerDevice;

/// @brief Field m_RightControllerDevice, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedController*  ___m_RightControllerDevice;

/// @brief Field m_OnInputDeviceChangeSubscribed, offset: 0x40, size: 0x1, def value: None
 bool  ___m_OnInputDeviceChangeSubscribed;

/// @brief Field m_DeviceModeDirty, offset: 0x41, size: 0x1, def value: None
 bool  ___m_DeviceModeDirty;

/// @brief Field m_StartedDeviceModeChange, offset: 0x42, size: 0x1, def value: None
 bool  ___m_StartedDeviceModeChange;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedDeviceLifecycleManager, ___m_RemoveOtherHMDDevices) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedDeviceLifecycleManager, ___m_HandTrackingCapability) == 0x21, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedDeviceLifecycleManager, ___m_DeviceMode) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedDeviceLifecycleManager, ___m_HMDDevice) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedDeviceLifecycleManager, ___m_LeftControllerDevice) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedDeviceLifecycleManager, ___m_RightControllerDevice) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedDeviceLifecycleManager, ___m_OnInputDeviceChangeSubscribed) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedDeviceLifecycleManager, ___m_DeviceModeDirty) == 0x41, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedDeviceLifecycleManager, ___m_StartedDeviceModeChange) == 0x42, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedDeviceLifecycleManager) == 0x48, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation
