#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/XRInteractionSimulator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/Hands/zzzz__XRSimulatedHandState_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/zzzz__Axis2DTargets_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/zzzz__ControllerInputMode_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/zzzz__Space_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/zzzz__TargetedDevices_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/zzzz__XRSimulatedControllerState_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/zzzz__XRSimulatedHMDState_def.hpp"
#include "UnityEngine/XR/zzzz__InputTrackingState_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(XRInteractionSimulator)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Readers {
class XRInputButtonReader;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Readers {
template<typename TValue>
class XRInputValueReader_1;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation {
struct Axis2DTargets;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation {
struct ControllerInputMode;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation {
class SimulatedDeviceLifecycleManager;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation {
class SimulatedHandExpressionManager;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation {
class SimulatedHandExpression;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation {
struct Space;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation {
struct TargetedDevices;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation {
struct XRSimulatedControllerState;
}
namespace UnityEngine::XR {
struct InputTrackingState;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation {
class XRInteractionSimulator;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*, "UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation", "XRInteractionSimulator");
// [AddComponentMenu("XR/Debug/XR Interaction Simulator", 11)]
// [DefaultExecutionOrder(-29991)]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRInteractionSimulator.html")]
// Dependencies System.ValueTuple`2<T1, T2>, UnityEngine.MonoBehaviour, UnityEngine.Vector2, UnityEngine.Vector3, UnityEngine.XR.InputTrackingState, UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Axis2DTargets, UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.ControllerInputMode, UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.XRSimulatedHandState, UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Space, UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.TargetedDevices, UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedControllerState, UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedHMDState
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRInteractionSimulator
class CORDL_TYPE XRInteractionSimulator : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field <axis2DTargets>k__BackingField, offset 0x1a8, size 0x4 
 __declspec(property(get=__cordl_internal_get__axis2DTargets_k__BackingField, put=__cordl_internal_set__axis2DTargets_k__BackingField)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Axis2DTargets  _axis2DTargets_k__BackingField;

/// @brief Field <instance>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__instance_k__BackingField, put=setStaticF__instance_k__BackingField)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator>  _instance_k__BackingField;

 __declspec(property(get=get_axis2DInput, put=set_axis2DInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  axis2DInput;

 __declspec(property(get=get_axis2DTargets, put=set_axis2DTargets)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Axis2DTargets  axis2DTargets;

 __declspec(property(get=get_bodyTranslateMultiplier, put=set_bodyTranslateMultiplier)) float_t  bodyTranslateMultiplier;

 __declspec(property(get=get_cameraTransform, put=set_cameraTransform)) ::UnityW<::UnityEngine::Transform>  cameraTransform;

 __declspec(property(get=get_controllerInputMode)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::ControllerInputMode  controllerInputMode;

 __declspec(property(get=get_currentHandExpression)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression*  currentHandExpression;

 __declspec(property(get=get_cycleDevicesInput, put=set_cycleDevicesInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  cycleDevicesInput;

 __declspec(property(get=get_cycleQuickActionInput, put=set_cycleQuickActionInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  cycleQuickActionInput;

 __declspec(property(get=get_deviceLifecycleManager, put=set_deviceLifecycleManager)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedDeviceLifecycleManager>  deviceLifecycleManager;

 __declspec(property(get=get_gripAmount, put=set_gripAmount)) float_t  gripAmount;

 __declspec(property(get=get_gripInput, put=set_gripInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  gripInput;

 __declspec(property(get=get_handExpressionManager, put=set_handExpressionManager)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpressionManager>  handExpressionManager;

 __declspec(property(get=get_hmdIsTracked, put=set_hmdIsTracked)) bool  hmdIsTracked;

 __declspec(property(get=get_hmdTrackingState, put=set_hmdTrackingState)) ::UnityEngine::XR::InputTrackingState  hmdTrackingState;

/// @brief Field instanceChanged, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_instanceChanged, put=setStaticF_instanceChanged)) ::System::Action_1<bool>*  instanceChanged;

 __declspec(property(get=get_interactionSimulatorUI, put=set_interactionSimulatorUI)) ::UnityW<::UnityEngine::GameObject>  interactionSimulatorUI;

 __declspec(property(get=get_keyboardRotationDeltaInput, put=set_keyboardRotationDeltaInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  keyboardRotationDeltaInput;

 __declspec(property(get=get_leftControllerIsTracked, put=set_leftControllerIsTracked)) bool  leftControllerIsTracked;

 __declspec(property(get=get_leftControllerTrackingState, put=set_leftControllerTrackingState)) ::UnityEngine::XR::InputTrackingState  leftControllerTrackingState;

 __declspec(property(get=get_leftDeviceActionsInput, put=set_leftDeviceActionsInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  leftDeviceActionsInput;

 __declspec(property(get=get_leftHandIsTracked, put=set_leftHandIsTracked)) bool  leftHandIsTracked;

/// @brief Field m_Axis2DInput, offset 0x130, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Axis2DInput, put=__cordl_internal_set_m_Axis2DInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  m_Axis2DInput;

/// @brief Field m_Axis2DValue, offset 0x1e0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Axis2DValue, put=__cordl_internal_set_m_Axis2DValue)) ::UnityEngine::Vector2  m_Axis2DValue;

/// @brief Field m_BodyTranslateMultiplier, offset 0x174, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_BodyTranslateMultiplier, put=__cordl_internal_set_m_BodyTranslateMultiplier)) float_t  m_BodyTranslateMultiplier;

/// @brief Field m_CachedCamera, offset 0x1b0, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_CachedCamera, put=__cordl_internal_set_m_CachedCamera)) ::System::ValueTuple_2<::UnityW<::UnityEngine::Transform>,::UnityW<::UnityEngine::Camera>>  m_CachedCamera;

/// @brief Field m_CameraTransform, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CameraTransform, put=__cordl_internal_set_m_CameraTransform)) ::UnityW<::UnityEngine::Transform>  m_CameraTransform;

/// @brief Field m_CenterEyeEuler, offset 0x20c, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_CenterEyeEuler, put=__cordl_internal_set_m_CenterEyeEuler)) ::UnityEngine::Vector3  m_CenterEyeEuler;

/// @brief Field m_ControllerInputMode, offset 0x19c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_ControllerInputMode, put=__cordl_internal_set_m_ControllerInputMode)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::ControllerInputMode  m_ControllerInputMode;

/// @brief Field m_ControllerInputModeIndex, offset 0x1e8, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_ControllerInputModeIndex, put=__cordl_internal_set_m_ControllerInputModeIndex)) int32_t  m_ControllerInputModeIndex;

/// @brief Field m_CurrentHandExpression, offset 0x1a0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CurrentHandExpression, put=__cordl_internal_set_m_CurrentHandExpression)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression*  m_CurrentHandExpression;

/// @brief Field m_CycleDevicesInput, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CycleDevicesInput, put=__cordl_internal_set_m_CycleDevicesInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  m_CycleDevicesInput;

/// @brief Field m_CycleQuickActionInput, offset 0x148, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CycleQuickActionInput, put=__cordl_internal_set_m_CycleQuickActionInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  m_CycleQuickActionInput;

/// @brief Field m_DeviceLifecycleManager, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_DeviceLifecycleManager, put=__cordl_internal_set_m_DeviceLifecycleManager)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedDeviceLifecycleManager>  m_DeviceLifecycleManager;

/// @brief Field m_GripAmount, offset 0x160, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_GripAmount, put=__cordl_internal_set_m_GripAmount)) float_t  m_GripAmount;

/// @brief Field m_GripInput, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_GripInput, put=__cordl_internal_set_m_GripInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  m_GripInput;

/// @brief Field m_HMDIsTracked, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_HMDIsTracked, put=__cordl_internal_set_m_HMDIsTracked)) bool  m_HMDIsTracked;

/// @brief Field m_HMDState, offset 0x218, size 0x75 
 __declspec(property(get=__cordl_internal_get_m_HMDState, put=__cordl_internal_set_m_HMDState)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMDState  m_HMDState;

/// @brief Field m_HMDTrackingState, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_HMDTrackingState, put=__cordl_internal_set_m_HMDTrackingState)) ::UnityEngine::XR::InputTrackingState  m_HMDTrackingState;

/// @brief Field m_HandExpressionIndex, offset 0x1ec, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_HandExpressionIndex, put=__cordl_internal_set_m_HandExpressionIndex)) int32_t  m_HandExpressionIndex;

/// @brief Field m_HandExpressionManager, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_HandExpressionManager, put=__cordl_internal_set_m_HandExpressionManager)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpressionManager>  m_HandExpressionManager;

/// @brief Field m_InteractionSimulatorUI, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_InteractionSimulatorUI, put=__cordl_internal_set_m_InteractionSimulatorUI)) ::UnityW<::UnityEngine::GameObject>  m_InteractionSimulatorUI;

/// @brief Field m_KeyboardRotationDeltaInput, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_KeyboardRotationDeltaInput, put=__cordl_internal_set_m_KeyboardRotationDeltaInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  m_KeyboardRotationDeltaInput;

/// @brief Field m_LeftControllerEuler, offset 0x1f4, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_LeftControllerEuler, put=__cordl_internal_set_m_LeftControllerEuler)) ::UnityEngine::Vector3  m_LeftControllerEuler;

/// @brief Field m_LeftControllerIsTracked, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_LeftControllerIsTracked, put=__cordl_internal_set_m_LeftControllerIsTracked)) bool  m_LeftControllerIsTracked;

/// @brief Field m_LeftControllerState, offset 0x290, size 0x3f 
 __declspec(property(get=__cordl_internal_get_m_LeftControllerState, put=__cordl_internal_set_m_LeftControllerState)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState  m_LeftControllerState;

/// @brief Field m_LeftControllerTrackingState, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_LeftControllerTrackingState, put=__cordl_internal_set_m_LeftControllerTrackingState)) ::UnityEngine::XR::InputTrackingState  m_LeftControllerTrackingState;

/// @brief Field m_LeftDeviceActionsInput, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LeftDeviceActionsInput, put=__cordl_internal_set_m_LeftDeviceActionsInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  m_LeftDeviceActionsInput;

/// @brief Field m_LeftHandIsTracked, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_LeftHandIsTracked, put=__cordl_internal_set_m_LeftHandIsTracked)) bool  m_LeftHandIsTracked;

/// @brief Field m_LeftHandState, offset 0x310, size 0x40 
 __declspec(property(get=__cordl_internal_get_m_LeftHandState, put=__cordl_internal_set_m_LeftHandState)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::XRSimulatedHandState  m_LeftHandState;

/// @brief Field m_MenuInput, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_MenuInput, put=__cordl_internal_set_m_MenuInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  m_MenuInput;

/// @brief Field m_MouseRotationDeltaInput, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_MouseRotationDeltaInput, put=__cordl_internal_set_m_MouseRotationDeltaInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  m_MouseRotationDeltaInput;

/// @brief Field m_MouseScrollInput, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_MouseScrollInput, put=__cordl_internal_set_m_MouseScrollInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  m_MouseScrollInput;

/// @brief Field m_MouseScrollRotateSensitivity, offset 0x180, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_MouseScrollRotateSensitivity, put=__cordl_internal_set_m_MouseScrollRotateSensitivity)) float_t  m_MouseScrollRotateSensitivity;

/// @brief Field m_MouseScrollValue, offset 0x1d4, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_MouseScrollValue, put=__cordl_internal_set_m_MouseScrollValue)) ::UnityEngine::Vector2  m_MouseScrollValue;

/// @brief Field m_PreviousTargetedDevices, offset 0x390, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_PreviousTargetedDevices, put=__cordl_internal_set_m_PreviousTargetedDevices)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDevices  m_PreviousTargetedDevices;

/// @brief Field m_Primary2DAxisClickInput, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Primary2DAxisClickInput, put=__cordl_internal_set_m_Primary2DAxisClickInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  m_Primary2DAxisClickInput;

/// @brief Field m_Primary2DAxisTouchInput, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Primary2DAxisTouchInput, put=__cordl_internal_set_m_Primary2DAxisTouchInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  m_Primary2DAxisTouchInput;

/// @brief Field m_PrimaryButtonInput, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PrimaryButtonInput, put=__cordl_internal_set_m_PrimaryButtonInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  m_PrimaryButtonInput;

/// @brief Field m_PrimaryTouchInput, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PrimaryTouchInput, put=__cordl_internal_set_m_PrimaryTouchInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  m_PrimaryTouchInput;

/// @brief Field m_QuickActionControllerInputModes, offset 0x190, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_QuickActionControllerInputModes, put=__cordl_internal_set_m_QuickActionControllerInputModes)) ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::ControllerInputMode>*  m_QuickActionControllerInputModes;

/// @brief Field m_ResetInput, offset 0x128, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ResetInput, put=__cordl_internal_set_m_ResetInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  m_ResetInput;

/// @brief Field m_ResetValue, offset 0x1df, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_ResetValue, put=__cordl_internal_set_m_ResetValue)) bool  m_ResetValue;

/// @brief Field m_RightControllerEuler, offset 0x200, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_RightControllerEuler, put=__cordl_internal_set_m_RightControllerEuler)) ::UnityEngine::Vector3  m_RightControllerEuler;

/// @brief Field m_RightControllerIsTracked, offset 0x50, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_RightControllerIsTracked, put=__cordl_internal_set_m_RightControllerIsTracked)) bool  m_RightControllerIsTracked;

/// @brief Field m_RightControllerState, offset 0x2d0, size 0x3f 
 __declspec(property(get=__cordl_internal_get_m_RightControllerState, put=__cordl_internal_set_m_RightControllerState)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState  m_RightControllerState;

/// @brief Field m_RightControllerTrackingState, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_RightControllerTrackingState, put=__cordl_internal_set_m_RightControllerTrackingState)) ::UnityEngine::XR::InputTrackingState  m_RightControllerTrackingState;

/// @brief Field m_RightHandIsTracked, offset 0x59, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_RightHandIsTracked, put=__cordl_internal_set_m_RightHandIsTracked)) bool  m_RightHandIsTracked;

/// @brief Field m_RightHandState, offset 0x350, size 0x40 
 __declspec(property(get=__cordl_internal_get_m_RightHandState, put=__cordl_internal_set_m_RightHandState)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::XRSimulatedHandState  m_RightHandState;

/// @brief Field m_RotateXSensitivity, offset 0x178, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_RotateXSensitivity, put=__cordl_internal_set_m_RotateXSensitivity)) float_t  m_RotateXSensitivity;

/// @brief Field m_RotateYInvert, offset 0x184, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_RotateYInvert, put=__cordl_internal_set_m_RotateYInvert)) bool  m_RotateYInvert;

/// @brief Field m_RotateYSensitivity, offset 0x17c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_RotateYSensitivity, put=__cordl_internal_set_m_RotateYSensitivity)) float_t  m_RotateYSensitivity;

/// @brief Field m_RotationDeltaValue, offset 0x1cc, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_RotationDeltaValue, put=__cordl_internal_set_m_RotationDeltaValue)) ::UnityEngine::Vector2  m_RotationDeltaValue;

/// @brief Field m_Secondary2DAxisClickInput, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Secondary2DAxisClickInput, put=__cordl_internal_set_m_Secondary2DAxisClickInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  m_Secondary2DAxisClickInput;

/// @brief Field m_Secondary2DAxisTouchInput, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Secondary2DAxisTouchInput, put=__cordl_internal_set_m_Secondary2DAxisTouchInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  m_Secondary2DAxisTouchInput;

/// @brief Field m_SecondaryButtonInput, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SecondaryButtonInput, put=__cordl_internal_set_m_SecondaryButtonInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  m_SecondaryButtonInput;

/// @brief Field m_SecondaryTouchInput, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SecondaryTouchInput, put=__cordl_internal_set_m_SecondaryTouchInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  m_SecondaryTouchInput;

/// @brief Field m_TargetedDeviceInput, offset 0x198, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_TargetedDeviceInput, put=__cordl_internal_set_m_TargetedDeviceInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDevices  m_TargetedDeviceInput;

/// @brief Field m_ToggleManipulateHeadInput, offset 0x158, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ToggleManipulateHeadInput, put=__cordl_internal_set_m_ToggleManipulateHeadInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  m_ToggleManipulateHeadInput;

/// @brief Field m_ToggleManipulateLeftInput, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ToggleManipulateLeftInput, put=__cordl_internal_set_m_ToggleManipulateLeftInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  m_ToggleManipulateLeftInput;

/// @brief Field m_ToggleManipulateRightInput, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ToggleManipulateRightInput, put=__cordl_internal_set_m_ToggleManipulateRightInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  m_ToggleManipulateRightInput;

/// @brief Field m_ToggleManipulateWaitingForReleaseBoth, offset 0x1f0, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_ToggleManipulateWaitingForReleaseBoth, put=__cordl_internal_set_m_ToggleManipulateWaitingForReleaseBoth)) bool  m_ToggleManipulateWaitingForReleaseBoth;

/// @brief Field m_ToggleMouseInput, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ToggleMouseInput, put=__cordl_internal_set_m_ToggleMouseInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  m_ToggleMouseInput;

/// @brief Field m_TogglePerformQuickActionInput, offset 0x150, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_TogglePerformQuickActionInput, put=__cordl_internal_set_m_TogglePerformQuickActionInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  m_TogglePerformQuickActionInput;

/// @brief Field m_TogglePrimary2DAxisTargetInput, offset 0x138, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_TogglePrimary2DAxisTargetInput, put=__cordl_internal_set_m_TogglePrimary2DAxisTargetInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  m_TogglePrimary2DAxisTargetInput;

/// @brief Field m_ToggleSecondary2DAxisTargetInput, offset 0x140, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ToggleSecondary2DAxisTargetInput, put=__cordl_internal_set_m_ToggleSecondary2DAxisTargetInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  m_ToggleSecondary2DAxisTargetInput;

/// @brief Field m_TranslateSpace, offset 0x188, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_TranslateSpace, put=__cordl_internal_set_m_TranslateSpace)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Space  m_TranslateSpace;

/// @brief Field m_TranslateXInput, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_TranslateXInput, put=__cordl_internal_set_m_TranslateXInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>*  m_TranslateXInput;

/// @brief Field m_TranslateXSpeed, offset 0x168, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_TranslateXSpeed, put=__cordl_internal_set_m_TranslateXSpeed)) float_t  m_TranslateXSpeed;

/// @brief Field m_TranslateXValue, offset 0x1c0, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_TranslateXValue, put=__cordl_internal_set_m_TranslateXValue)) float_t  m_TranslateXValue;

/// @brief Field m_TranslateYInput, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_TranslateYInput, put=__cordl_internal_set_m_TranslateYInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>*  m_TranslateYInput;

/// @brief Field m_TranslateYSpeed, offset 0x16c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_TranslateYSpeed, put=__cordl_internal_set_m_TranslateYSpeed)) float_t  m_TranslateYSpeed;

/// @brief Field m_TranslateYValue, offset 0x1c4, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_TranslateYValue, put=__cordl_internal_set_m_TranslateYValue)) float_t  m_TranslateYValue;

/// @brief Field m_TranslateZInput, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_TranslateZInput, put=__cordl_internal_set_m_TranslateZInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>*  m_TranslateZInput;

/// @brief Field m_TranslateZSpeed, offset 0x170, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_TranslateZSpeed, put=__cordl_internal_set_m_TranslateZSpeed)) float_t  m_TranslateZSpeed;

/// @brief Field m_TranslateZValue, offset 0x1c8, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_TranslateZValue, put=__cordl_internal_set_m_TranslateZValue)) float_t  m_TranslateZValue;

/// @brief Field m_TriggerAmount, offset 0x164, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_TriggerAmount, put=__cordl_internal_set_m_TriggerAmount)) float_t  m_TriggerAmount;

/// @brief Field m_TriggerInput, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_TriggerInput, put=__cordl_internal_set_m_TriggerInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  m_TriggerInput;

/// @brief Field m_XConstraintInput, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_XConstraintInput, put=__cordl_internal_set_m_XConstraintInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  m_XConstraintInput;

/// @brief Field m_XConstraintValue, offset 0x1dc, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_XConstraintValue, put=__cordl_internal_set_m_XConstraintValue)) bool  m_XConstraintValue;

/// @brief Field m_YConstraintInput, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_YConstraintInput, put=__cordl_internal_set_m_YConstraintInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  m_YConstraintInput;

/// @brief Field m_YConstraintValue, offset 0x1dd, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_YConstraintValue, put=__cordl_internal_set_m_YConstraintValue)) bool  m_YConstraintValue;

/// @brief Field m_ZConstraintInput, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ZConstraintInput, put=__cordl_internal_set_m_ZConstraintInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  m_ZConstraintInput;

/// @brief Field m_ZConstraintValue, offset 0x1de, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_ZConstraintValue, put=__cordl_internal_set_m_ZConstraintValue)) bool  m_ZConstraintValue;

 __declspec(property(get=get_manipulatingFPS)) bool  manipulatingFPS;

 __declspec(property(get=get_manipulatingHMD)) bool  manipulatingHMD;

 __declspec(property(get=get_manipulatingLeftController)) bool  manipulatingLeftController;

 __declspec(property(get=get_manipulatingLeftDevice)) bool  manipulatingLeftDevice;

 __declspec(property(get=get_manipulatingLeftHand)) bool  manipulatingLeftHand;

 __declspec(property(get=get_manipulatingRightController)) bool  manipulatingRightController;

 __declspec(property(get=get_manipulatingRightDevice)) bool  manipulatingRightDevice;

 __declspec(property(get=get_manipulatingRightHand)) bool  manipulatingRightHand;

 __declspec(property(get=get_menuInput, put=set_menuInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  menuInput;

 __declspec(property(get=get_mouseRotationDeltaInput, put=set_mouseRotationDeltaInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  mouseRotationDeltaInput;

 __declspec(property(get=get_mouseScrollInput, put=set_mouseScrollInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  mouseScrollInput;

 __declspec(property(get=get_mouseScrollRotateSensitivity, put=set_mouseScrollRotateSensitivity)) float_t  mouseScrollRotateSensitivity;

 __declspec(property(get=get_primary2DAxisClickInput, put=set_primary2DAxisClickInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  primary2DAxisClickInput;

 __declspec(property(get=get_primary2DAxisTouchInput, put=set_primary2DAxisTouchInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  primary2DAxisTouchInput;

 __declspec(property(get=get_primaryButtonInput, put=set_primaryButtonInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  primaryButtonInput;

 __declspec(property(get=get_primaryTouchInput, put=set_primaryTouchInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  primaryTouchInput;

 __declspec(property(get=get_quickActionControllerInputModes, put=set_quickActionControllerInputModes)) ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::ControllerInputMode>*  quickActionControllerInputModes;

 __declspec(property(get=get_resetInput, put=set_resetInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  resetInput;

 __declspec(property(get=get_rightControllerIsTracked, put=set_rightControllerIsTracked)) bool  rightControllerIsTracked;

 __declspec(property(get=get_rightControllerTrackingState, put=set_rightControllerTrackingState)) ::UnityEngine::XR::InputTrackingState  rightControllerTrackingState;

 __declspec(property(get=get_rightHandIsTracked, put=set_rightHandIsTracked)) bool  rightHandIsTracked;

 __declspec(property(get=get_rotateXSensitivity, put=set_rotateXSensitivity)) float_t  rotateXSensitivity;

 __declspec(property(get=get_rotateYInvert, put=set_rotateYInvert)) bool  rotateYInvert;

 __declspec(property(get=get_rotateYSensitivity, put=set_rotateYSensitivity)) float_t  rotateYSensitivity;

 __declspec(property(get=get_secondary2DAxisClickInput, put=set_secondary2DAxisClickInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  secondary2DAxisClickInput;

 __declspec(property(get=get_secondary2DAxisTouchInput, put=set_secondary2DAxisTouchInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  secondary2DAxisTouchInput;

 __declspec(property(get=get_secondaryButtonInput, put=set_secondaryButtonInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  secondaryButtonInput;

 __declspec(property(get=get_secondaryTouchInput, put=set_secondaryTouchInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  secondaryTouchInput;

 __declspec(property(get=get_targetedDeviceInput, put=set_targetedDeviceInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDevices  targetedDeviceInput;

 __declspec(property(get=get_toggleManipulateHeadInput, put=set_toggleManipulateHeadInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  toggleManipulateHeadInput;

 __declspec(property(get=get_toggleManipulateLeftInput, put=set_toggleManipulateLeftInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  toggleManipulateLeftInput;

 __declspec(property(get=get_toggleManipulateRightInput, put=set_toggleManipulateRightInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  toggleManipulateRightInput;

 __declspec(property(get=get_toggleMouseInput, put=set_toggleMouseInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  toggleMouseInput;

 __declspec(property(get=get_togglePerformQuickActionInput, put=set_togglePerformQuickActionInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  togglePerformQuickActionInput;

 __declspec(property(get=get_togglePrimary2DAxisTargetInput, put=set_togglePrimary2DAxisTargetInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  togglePrimary2DAxisTargetInput;

 __declspec(property(get=get_toggleSecondary2DAxisTargetInput, put=set_toggleSecondary2DAxisTargetInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  toggleSecondary2DAxisTargetInput;

 __declspec(property(get=get_translateSpace, put=set_translateSpace)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Space  translateSpace;

 __declspec(property(get=get_translateXInput, put=set_translateXInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>*  translateXInput;

 __declspec(property(get=get_translateXSpeed, put=set_translateXSpeed)) float_t  translateXSpeed;

 __declspec(property(get=get_translateYInput, put=set_translateYInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>*  translateYInput;

 __declspec(property(get=get_translateYSpeed, put=set_translateYSpeed)) float_t  translateYSpeed;

 __declspec(property(get=get_translateZInput, put=set_translateZInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>*  translateZInput;

 __declspec(property(get=get_translateZSpeed, put=set_translateZSpeed)) float_t  translateZSpeed;

 __declspec(property(get=get_triggerAmount, put=set_triggerAmount)) float_t  triggerAmount;

 __declspec(property(get=get_triggerInput, put=set_triggerInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  triggerInput;

 __declspec(property(get=get_xConstraintInput, put=set_xConstraintInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  xConstraintInput;

 __declspec(property(get=get_yConstraintInput, put=set_yConstraintInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  yConstraintInput;

 __declspec(property(get=get_zConstraintInput, put=set_zConstraintInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  zConstraintInput;

/// @brief Method Awake, addr 0xb4c3e60, size 0x428, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method ClearControllerButtonInput, addr 0xb4c7270, size 0xc, virtual false, abstract: false, final false
static inline void ClearControllerButtonInput(::by_ref<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState>  controllerState) ;

/// @brief Method CycleQuickAction, addr 0xb4c502c, size 0x114, virtual false, abstract: false, final false
inline void CycleQuickAction() ;

/// @brief Method CycleQuickActionHandExpression, addr 0xb4c48a0, size 0x12c, virtual false, abstract: false, final false
inline void CycleQuickActionHandExpression() ;

/// @brief Method CycleTargetDevices, addr 0xb4c4fe4, size 0x48, virtual false, abstract: false, final false
inline void CycleTargetDevices() ;

/// @brief Method GetResetScale, addr 0xb4c6f60, size 0x9c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetResetScale() ;

/// @brief Method HandleHMDToggle, addr 0xb4c5140, size 0x24, virtual false, abstract: false, final false
inline void HandleHMDToggle() ;

/// @brief Method HandleLeftOrRightDeviceToggle, addr 0xb4c4c7c, size 0x110, virtual false, abstract: false, final false
inline void HandleLeftOrRightDeviceToggle() ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator* New_ctor() ;

/// @brief Method OnDestroy, addr 0xb4c49d0, size 0xdc, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0xb4c49cc, size 0x4, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xb4c4598, size 0xdc, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method PerformQuickAction, addr 0xb4c5164, size 0x38, virtual false, abstract: false, final false
inline void PerformQuickAction() ;

/// @brief Method ProcessAnalogButtonControlInput, addr 0xb4c6f28, size 0x28, virtual true, abstract: false, final false
inline void ProcessAnalogButtonControlInput(::by_ref<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState>  controllerState) ;

/// @brief Method ProcessAxis2DControlInput, addr 0xb4c69c8, size 0x2c, virtual true, abstract: false, final false
inline void ProcessAxis2DControlInput(::by_ref<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState>  controllerState) ;

/// @brief Method ProcessButtonControlInput, addr 0xb4c69f4, size 0x2a0, virtual true, abstract: false, final false
inline void ProcessButtonControlInput(::by_ref<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState>  controllerState) ;

/// @brief Method ProcessControlInput, addr 0xb4c66b8, size 0xd8, virtual true, abstract: false, final false
inline void ProcessControlInput() ;

/// @brief Method ProcessHandExpressionInput, addr 0xb4c519c, size 0x4, virtual false, abstract: false, final false
inline void ProcessHandExpressionInput() ;

/// @brief Method ProcessPoseInput, addr 0xb4c51a0, size 0x11e8, virtual true, abstract: false, final false
inline void ProcessPoseInput() ;

/// @brief Method ReadInputValues, addr 0xb4c6ffc, size 0x274, virtual true, abstract: false, final false
inline void ReadInputValues() ;

/// @brief Method SetTrackedStates, addr 0xb4c6388, size 0x48, virtual false, abstract: false, final false
inline void SetTrackedStates() ;

/// @brief Method ToggleControllerButtonInput, addr 0xb4c727c, size 0x124, virtual false, abstract: false, final false
inline void ToggleControllerButtonInput(::by_ref<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState>  controllerState) ;

/// @brief Method ToggleHandExpression, addr 0xb4c69c4, size 0x4, virtual false, abstract: false, final false
inline void ToggleHandExpression(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression*  simulatedExpression, bool  leftHand, bool  rightHand) ;

/// @brief Method Update, addr 0xb4c4aac, size 0x1d0, virtual true, abstract: false, final false
inline void Update() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Axis2DTargets const& __cordl_internal_get__axis2DTargets_k__BackingField() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Axis2DTargets& __cordl_internal_get__axis2DTargets_k__BackingField() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>* const& __cordl_internal_get_m_Axis2DInput() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*& __cordl_internal_get_m_Axis2DInput() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_m_Axis2DValue() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_m_Axis2DValue() ;

constexpr float_t const& __cordl_internal_get_m_BodyTranslateMultiplier() const;

constexpr float_t& __cordl_internal_get_m_BodyTranslateMultiplier() ;

constexpr ::System::ValueTuple_2<::UnityW<::UnityEngine::Transform>,::UnityW<::UnityEngine::Camera>> const& __cordl_internal_get_m_CachedCamera() const;

constexpr ::System::ValueTuple_2<::UnityW<::UnityEngine::Transform>,::UnityW<::UnityEngine::Camera>>& __cordl_internal_get_m_CachedCamera() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_CameraTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_CameraTransform() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_CenterEyeEuler() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_CenterEyeEuler() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::ControllerInputMode const& __cordl_internal_get_m_ControllerInputMode() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::ControllerInputMode& __cordl_internal_get_m_ControllerInputMode() ;

constexpr int32_t const& __cordl_internal_get_m_ControllerInputModeIndex() const;

constexpr int32_t& __cordl_internal_get_m_ControllerInputModeIndex() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression* const& __cordl_internal_get_m_CurrentHandExpression() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression*& __cordl_internal_get_m_CurrentHandExpression() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* const& __cordl_internal_get_m_CycleDevicesInput() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*& __cordl_internal_get_m_CycleDevicesInput() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* const& __cordl_internal_get_m_CycleQuickActionInput() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*& __cordl_internal_get_m_CycleQuickActionInput() ;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedDeviceLifecycleManager> const& __cordl_internal_get_m_DeviceLifecycleManager() const;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedDeviceLifecycleManager>& __cordl_internal_get_m_DeviceLifecycleManager() ;

constexpr float_t const& __cordl_internal_get_m_GripAmount() const;

constexpr float_t& __cordl_internal_get_m_GripAmount() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* const& __cordl_internal_get_m_GripInput() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*& __cordl_internal_get_m_GripInput() ;

constexpr bool const& __cordl_internal_get_m_HMDIsTracked() const;

constexpr bool& __cordl_internal_get_m_HMDIsTracked() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMDState const& __cordl_internal_get_m_HMDState() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMDState& __cordl_internal_get_m_HMDState() ;

constexpr ::UnityEngine::XR::InputTrackingState const& __cordl_internal_get_m_HMDTrackingState() const;

constexpr ::UnityEngine::XR::InputTrackingState& __cordl_internal_get_m_HMDTrackingState() ;

constexpr int32_t const& __cordl_internal_get_m_HandExpressionIndex() const;

constexpr int32_t& __cordl_internal_get_m_HandExpressionIndex() ;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpressionManager> const& __cordl_internal_get_m_HandExpressionManager() const;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpressionManager>& __cordl_internal_get_m_HandExpressionManager() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_m_InteractionSimulatorUI() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_m_InteractionSimulatorUI() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>* const& __cordl_internal_get_m_KeyboardRotationDeltaInput() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*& __cordl_internal_get_m_KeyboardRotationDeltaInput() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_LeftControllerEuler() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_LeftControllerEuler() ;

constexpr bool const& __cordl_internal_get_m_LeftControllerIsTracked() const;

constexpr bool& __cordl_internal_get_m_LeftControllerIsTracked() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState const& __cordl_internal_get_m_LeftControllerState() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState& __cordl_internal_get_m_LeftControllerState() ;

constexpr ::UnityEngine::XR::InputTrackingState const& __cordl_internal_get_m_LeftControllerTrackingState() const;

constexpr ::UnityEngine::XR::InputTrackingState& __cordl_internal_get_m_LeftControllerTrackingState() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* const& __cordl_internal_get_m_LeftDeviceActionsInput() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*& __cordl_internal_get_m_LeftDeviceActionsInput() ;

constexpr bool const& __cordl_internal_get_m_LeftHandIsTracked() const;

constexpr bool& __cordl_internal_get_m_LeftHandIsTracked() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::XRSimulatedHandState const& __cordl_internal_get_m_LeftHandState() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::XRSimulatedHandState& __cordl_internal_get_m_LeftHandState() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* const& __cordl_internal_get_m_MenuInput() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*& __cordl_internal_get_m_MenuInput() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>* const& __cordl_internal_get_m_MouseRotationDeltaInput() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*& __cordl_internal_get_m_MouseRotationDeltaInput() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>* const& __cordl_internal_get_m_MouseScrollInput() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*& __cordl_internal_get_m_MouseScrollInput() ;

constexpr float_t const& __cordl_internal_get_m_MouseScrollRotateSensitivity() const;

constexpr float_t& __cordl_internal_get_m_MouseScrollRotateSensitivity() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_m_MouseScrollValue() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_m_MouseScrollValue() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDevices const& __cordl_internal_get_m_PreviousTargetedDevices() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDevices& __cordl_internal_get_m_PreviousTargetedDevices() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* const& __cordl_internal_get_m_Primary2DAxisClickInput() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*& __cordl_internal_get_m_Primary2DAxisClickInput() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* const& __cordl_internal_get_m_Primary2DAxisTouchInput() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*& __cordl_internal_get_m_Primary2DAxisTouchInput() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* const& __cordl_internal_get_m_PrimaryButtonInput() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*& __cordl_internal_get_m_PrimaryButtonInput() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* const& __cordl_internal_get_m_PrimaryTouchInput() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*& __cordl_internal_get_m_PrimaryTouchInput() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::ControllerInputMode>* const& __cordl_internal_get_m_QuickActionControllerInputModes() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::ControllerInputMode>*& __cordl_internal_get_m_QuickActionControllerInputModes() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* const& __cordl_internal_get_m_ResetInput() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*& __cordl_internal_get_m_ResetInput() ;

constexpr bool const& __cordl_internal_get_m_ResetValue() const;

constexpr bool& __cordl_internal_get_m_ResetValue() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_RightControllerEuler() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_RightControllerEuler() ;

constexpr bool const& __cordl_internal_get_m_RightControllerIsTracked() const;

constexpr bool& __cordl_internal_get_m_RightControllerIsTracked() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState const& __cordl_internal_get_m_RightControllerState() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState& __cordl_internal_get_m_RightControllerState() ;

constexpr ::UnityEngine::XR::InputTrackingState const& __cordl_internal_get_m_RightControllerTrackingState() const;

constexpr ::UnityEngine::XR::InputTrackingState& __cordl_internal_get_m_RightControllerTrackingState() ;

constexpr bool const& __cordl_internal_get_m_RightHandIsTracked() const;

constexpr bool& __cordl_internal_get_m_RightHandIsTracked() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::XRSimulatedHandState const& __cordl_internal_get_m_RightHandState() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::XRSimulatedHandState& __cordl_internal_get_m_RightHandState() ;

constexpr float_t const& __cordl_internal_get_m_RotateXSensitivity() const;

constexpr float_t& __cordl_internal_get_m_RotateXSensitivity() ;

constexpr bool const& __cordl_internal_get_m_RotateYInvert() const;

constexpr bool& __cordl_internal_get_m_RotateYInvert() ;

constexpr float_t const& __cordl_internal_get_m_RotateYSensitivity() const;

constexpr float_t& __cordl_internal_get_m_RotateYSensitivity() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_m_RotationDeltaValue() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_m_RotationDeltaValue() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* const& __cordl_internal_get_m_Secondary2DAxisClickInput() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*& __cordl_internal_get_m_Secondary2DAxisClickInput() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* const& __cordl_internal_get_m_Secondary2DAxisTouchInput() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*& __cordl_internal_get_m_Secondary2DAxisTouchInput() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* const& __cordl_internal_get_m_SecondaryButtonInput() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*& __cordl_internal_get_m_SecondaryButtonInput() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* const& __cordl_internal_get_m_SecondaryTouchInput() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*& __cordl_internal_get_m_SecondaryTouchInput() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDevices const& __cordl_internal_get_m_TargetedDeviceInput() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDevices& __cordl_internal_get_m_TargetedDeviceInput() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* const& __cordl_internal_get_m_ToggleManipulateHeadInput() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*& __cordl_internal_get_m_ToggleManipulateHeadInput() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* const& __cordl_internal_get_m_ToggleManipulateLeftInput() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*& __cordl_internal_get_m_ToggleManipulateLeftInput() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* const& __cordl_internal_get_m_ToggleManipulateRightInput() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*& __cordl_internal_get_m_ToggleManipulateRightInput() ;

constexpr bool const& __cordl_internal_get_m_ToggleManipulateWaitingForReleaseBoth() const;

constexpr bool& __cordl_internal_get_m_ToggleManipulateWaitingForReleaseBoth() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* const& __cordl_internal_get_m_ToggleMouseInput() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*& __cordl_internal_get_m_ToggleMouseInput() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* const& __cordl_internal_get_m_TogglePerformQuickActionInput() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*& __cordl_internal_get_m_TogglePerformQuickActionInput() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* const& __cordl_internal_get_m_TogglePrimary2DAxisTargetInput() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*& __cordl_internal_get_m_TogglePrimary2DAxisTargetInput() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* const& __cordl_internal_get_m_ToggleSecondary2DAxisTargetInput() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*& __cordl_internal_get_m_ToggleSecondary2DAxisTargetInput() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Space const& __cordl_internal_get_m_TranslateSpace() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Space& __cordl_internal_get_m_TranslateSpace() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>* const& __cordl_internal_get_m_TranslateXInput() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>*& __cordl_internal_get_m_TranslateXInput() ;

constexpr float_t const& __cordl_internal_get_m_TranslateXSpeed() const;

constexpr float_t& __cordl_internal_get_m_TranslateXSpeed() ;

constexpr float_t const& __cordl_internal_get_m_TranslateXValue() const;

constexpr float_t& __cordl_internal_get_m_TranslateXValue() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>* const& __cordl_internal_get_m_TranslateYInput() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>*& __cordl_internal_get_m_TranslateYInput() ;

constexpr float_t const& __cordl_internal_get_m_TranslateYSpeed() const;

constexpr float_t& __cordl_internal_get_m_TranslateYSpeed() ;

constexpr float_t const& __cordl_internal_get_m_TranslateYValue() const;

constexpr float_t& __cordl_internal_get_m_TranslateYValue() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>* const& __cordl_internal_get_m_TranslateZInput() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>*& __cordl_internal_get_m_TranslateZInput() ;

constexpr float_t const& __cordl_internal_get_m_TranslateZSpeed() const;

constexpr float_t& __cordl_internal_get_m_TranslateZSpeed() ;

constexpr float_t const& __cordl_internal_get_m_TranslateZValue() const;

constexpr float_t& __cordl_internal_get_m_TranslateZValue() ;

constexpr float_t const& __cordl_internal_get_m_TriggerAmount() const;

constexpr float_t& __cordl_internal_get_m_TriggerAmount() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* const& __cordl_internal_get_m_TriggerInput() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*& __cordl_internal_get_m_TriggerInput() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* const& __cordl_internal_get_m_XConstraintInput() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*& __cordl_internal_get_m_XConstraintInput() ;

constexpr bool const& __cordl_internal_get_m_XConstraintValue() const;

constexpr bool& __cordl_internal_get_m_XConstraintValue() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* const& __cordl_internal_get_m_YConstraintInput() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*& __cordl_internal_get_m_YConstraintInput() ;

constexpr bool const& __cordl_internal_get_m_YConstraintValue() const;

constexpr bool& __cordl_internal_get_m_YConstraintValue() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* const& __cordl_internal_get_m_ZConstraintInput() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*& __cordl_internal_get_m_ZConstraintInput() ;

constexpr bool const& __cordl_internal_get_m_ZConstraintValue() const;

constexpr bool& __cordl_internal_get_m_ZConstraintValue() ;

constexpr void __cordl_internal_set__axis2DTargets_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Axis2DTargets  value) ;

constexpr void __cordl_internal_set_m_Axis2DInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  value) ;

constexpr void __cordl_internal_set_m_Axis2DValue(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_m_BodyTranslateMultiplier(float_t  value) ;

constexpr void __cordl_internal_set_m_CachedCamera(::System::ValueTuple_2<::UnityW<::UnityEngine::Transform>,::UnityW<::UnityEngine::Camera>>  value) ;

constexpr void __cordl_internal_set_m_CameraTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_m_CenterEyeEuler(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_ControllerInputMode(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::ControllerInputMode  value) ;

constexpr void __cordl_internal_set_m_ControllerInputModeIndex(int32_t  value) ;

constexpr void __cordl_internal_set_m_CurrentHandExpression(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression*  value) ;

constexpr void __cordl_internal_set_m_CycleDevicesInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value) ;

constexpr void __cordl_internal_set_m_CycleQuickActionInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value) ;

constexpr void __cordl_internal_set_m_DeviceLifecycleManager(::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedDeviceLifecycleManager>  value) ;

constexpr void __cordl_internal_set_m_GripAmount(float_t  value) ;

constexpr void __cordl_internal_set_m_GripInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value) ;

constexpr void __cordl_internal_set_m_HMDIsTracked(bool  value) ;

constexpr void __cordl_internal_set_m_HMDState(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMDState  value) ;

constexpr void __cordl_internal_set_m_HMDTrackingState(::UnityEngine::XR::InputTrackingState  value) ;

constexpr void __cordl_internal_set_m_HandExpressionIndex(int32_t  value) ;

constexpr void __cordl_internal_set_m_HandExpressionManager(::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpressionManager>  value) ;

constexpr void __cordl_internal_set_m_InteractionSimulatorUI(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_m_KeyboardRotationDeltaInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  value) ;

constexpr void __cordl_internal_set_m_LeftControllerEuler(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_LeftControllerIsTracked(bool  value) ;

constexpr void __cordl_internal_set_m_LeftControllerState(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState  value) ;

constexpr void __cordl_internal_set_m_LeftControllerTrackingState(::UnityEngine::XR::InputTrackingState  value) ;

constexpr void __cordl_internal_set_m_LeftDeviceActionsInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value) ;

constexpr void __cordl_internal_set_m_LeftHandIsTracked(bool  value) ;

constexpr void __cordl_internal_set_m_LeftHandState(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::XRSimulatedHandState  value) ;

constexpr void __cordl_internal_set_m_MenuInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value) ;

constexpr void __cordl_internal_set_m_MouseRotationDeltaInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  value) ;

constexpr void __cordl_internal_set_m_MouseScrollInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  value) ;

constexpr void __cordl_internal_set_m_MouseScrollRotateSensitivity(float_t  value) ;

constexpr void __cordl_internal_set_m_MouseScrollValue(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_m_PreviousTargetedDevices(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDevices  value) ;

constexpr void __cordl_internal_set_m_Primary2DAxisClickInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value) ;

constexpr void __cordl_internal_set_m_Primary2DAxisTouchInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value) ;

constexpr void __cordl_internal_set_m_PrimaryButtonInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value) ;

constexpr void __cordl_internal_set_m_PrimaryTouchInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value) ;

constexpr void __cordl_internal_set_m_QuickActionControllerInputModes(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::ControllerInputMode>*  value) ;

constexpr void __cordl_internal_set_m_ResetInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value) ;

constexpr void __cordl_internal_set_m_ResetValue(bool  value) ;

constexpr void __cordl_internal_set_m_RightControllerEuler(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_RightControllerIsTracked(bool  value) ;

constexpr void __cordl_internal_set_m_RightControllerState(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState  value) ;

constexpr void __cordl_internal_set_m_RightControllerTrackingState(::UnityEngine::XR::InputTrackingState  value) ;

constexpr void __cordl_internal_set_m_RightHandIsTracked(bool  value) ;

constexpr void __cordl_internal_set_m_RightHandState(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::XRSimulatedHandState  value) ;

constexpr void __cordl_internal_set_m_RotateXSensitivity(float_t  value) ;

constexpr void __cordl_internal_set_m_RotateYInvert(bool  value) ;

constexpr void __cordl_internal_set_m_RotateYSensitivity(float_t  value) ;

constexpr void __cordl_internal_set_m_RotationDeltaValue(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_m_Secondary2DAxisClickInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value) ;

constexpr void __cordl_internal_set_m_Secondary2DAxisTouchInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value) ;

constexpr void __cordl_internal_set_m_SecondaryButtonInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value) ;

constexpr void __cordl_internal_set_m_SecondaryTouchInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value) ;

constexpr void __cordl_internal_set_m_TargetedDeviceInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDevices  value) ;

constexpr void __cordl_internal_set_m_ToggleManipulateHeadInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value) ;

constexpr void __cordl_internal_set_m_ToggleManipulateLeftInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value) ;

constexpr void __cordl_internal_set_m_ToggleManipulateRightInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value) ;

constexpr void __cordl_internal_set_m_ToggleManipulateWaitingForReleaseBoth(bool  value) ;

constexpr void __cordl_internal_set_m_ToggleMouseInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value) ;

constexpr void __cordl_internal_set_m_TogglePerformQuickActionInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value) ;

constexpr void __cordl_internal_set_m_TogglePrimary2DAxisTargetInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value) ;

constexpr void __cordl_internal_set_m_ToggleSecondary2DAxisTargetInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value) ;

constexpr void __cordl_internal_set_m_TranslateSpace(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Space  value) ;

constexpr void __cordl_internal_set_m_TranslateXInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>*  value) ;

constexpr void __cordl_internal_set_m_TranslateXSpeed(float_t  value) ;

constexpr void __cordl_internal_set_m_TranslateXValue(float_t  value) ;

constexpr void __cordl_internal_set_m_TranslateYInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>*  value) ;

constexpr void __cordl_internal_set_m_TranslateYSpeed(float_t  value) ;

constexpr void __cordl_internal_set_m_TranslateYValue(float_t  value) ;

constexpr void __cordl_internal_set_m_TranslateZInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>*  value) ;

constexpr void __cordl_internal_set_m_TranslateZSpeed(float_t  value) ;

constexpr void __cordl_internal_set_m_TranslateZValue(float_t  value) ;

constexpr void __cordl_internal_set_m_TriggerAmount(float_t  value) ;

constexpr void __cordl_internal_set_m_TriggerInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value) ;

constexpr void __cordl_internal_set_m_XConstraintInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value) ;

constexpr void __cordl_internal_set_m_XConstraintValue(bool  value) ;

constexpr void __cordl_internal_set_m_YConstraintInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value) ;

constexpr void __cordl_internal_set_m_YConstraintValue(bool  value) ;

constexpr void __cordl_internal_set_m_ZConstraintInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value) ;

constexpr void __cordl_internal_set_m_ZConstraintValue(bool  value) ;

/// @brief Method .ctor, addr 0xb4c73e0, size 0x2d0, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator> getStaticF__instance_k__BackingField() ;

static inline ::System::Action_1<bool>* getStaticF_instanceChanged() ;

/// @brief Method get_axis2DInput, addr 0xb4c3b08, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>* get_axis2DInput() ;

/// [CompilerGenerated]
/// @brief Method get_axis2DTargets, addr 0xb4c3cb8, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Axis2DTargets get_axis2DTargets() ;

/// @brief Method get_bodyTranslateMultiplier, addr 0xb4c3c20, size 0x8, virtual false, abstract: false, final false
inline float_t get_bodyTranslateMultiplier() ;

/// @brief Method get_cameraTransform, addr 0xb4c3534, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_cameraTransform() ;

/// @brief Method get_controllerInputMode, addr 0xb4c3ca8, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::ControllerInputMode get_controllerInputMode() ;

/// @brief Method get_currentHandExpression, addr 0xb4c3cb0, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression* get_currentHandExpression() ;

/// @brief Method get_cycleDevicesInput, addr 0xb4c3888, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* get_cycleDevicesInput() ;

/// @brief Method get_cycleQuickActionInput, addr 0xb4c3b94, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* get_cycleQuickActionInput() ;

/// @brief Method get_deviceLifecycleManager, addr 0xb4c3544, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedDeviceLifecycleManager> get_deviceLifecycleManager() ;

/// @brief Method get_gripAmount, addr 0xb4c3bd0, size 0x8, virtual false, abstract: false, final false
inline float_t get_gripAmount() ;

/// @brief Method get_gripInput, addr 0xb4c39dc, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* get_gripInput() ;

/// @brief Method get_handExpressionManager, addr 0xb4c3554, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpressionManager> get_handExpressionManager() ;

/// @brief Method get_hmdIsTracked, addr 0xb4c3574, size 0x8, virtual false, abstract: false, final false
inline bool get_hmdIsTracked() ;

/// @brief Method get_hmdTrackingState, addr 0xb4c3584, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::InputTrackingState get_hmdTrackingState() ;

/// [CompilerGenerated]
/// @brief Method get_instance, addr 0xb4c3dc0, size 0x48, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator> get_instance() ;

/// @brief Method get_interactionSimulatorUI, addr 0xb4c3564, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> get_interactionSimulatorUI() ;

/// @brief Method get_keyboardRotationDeltaInput, addr 0xb4c389c, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>* get_keyboardRotationDeltaInput() ;

/// @brief Method get_leftControllerIsTracked, addr 0xb4c3594, size 0x8, virtual false, abstract: false, final false
inline bool get_leftControllerIsTracked() ;

/// @brief Method get_leftControllerTrackingState, addr 0xb4c35a4, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::InputTrackingState get_leftControllerTrackingState() ;

/// @brief Method get_leftDeviceActionsInput, addr 0xb4c3874, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* get_leftDeviceActionsInput() ;

/// @brief Method get_leftHandIsTracked, addr 0xb4c35d4, size 0x8, virtual false, abstract: false, final false
inline bool get_leftHandIsTracked() ;

/// @brief Method get_manipulatingFPS, addr 0xb4c3db4, size 0xc, virtual false, abstract: false, final false
inline bool get_manipulatingFPS() ;

/// @brief Method get_manipulatingHMD, addr 0xb4c3da4, size 0x10, virtual false, abstract: false, final false
inline bool get_manipulatingHMD() ;

/// @brief Method get_manipulatingLeftController, addr 0xb4c3cec, size 0x2c, virtual false, abstract: false, final false
inline bool get_manipulatingLeftController() ;

/// @brief Method get_manipulatingLeftDevice, addr 0xb4c3cc8, size 0xc, virtual false, abstract: false, final false
inline bool get_manipulatingLeftDevice() ;

/// @brief Method get_manipulatingLeftHand, addr 0xb4c3d44, size 0x30, virtual false, abstract: false, final false
inline bool get_manipulatingLeftHand() ;

/// @brief Method get_manipulatingRightController, addr 0xb4c3d18, size 0x2c, virtual false, abstract: false, final false
inline bool get_manipulatingRightController() ;

/// @brief Method get_manipulatingRightDevice, addr 0xb4c3ce0, size 0xc, virtual false, abstract: false, final false
inline bool get_manipulatingRightDevice() ;

/// @brief Method get_manipulatingRightHand, addr 0xb4c3d74, size 0x30, virtual false, abstract: false, final false
inline bool get_manipulatingRightHand() ;

/// @brief Method get_menuInput, addr 0xb4c3a2c, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* get_menuInput() ;

/// @brief Method get_mouseRotationDeltaInput, addr 0xb4c3914, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>* get_mouseRotationDeltaInput() ;

/// @brief Method get_mouseScrollInput, addr 0xb4c3978, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>* get_mouseScrollInput() ;

/// @brief Method get_mouseScrollRotateSensitivity, addr 0xb4c3c50, size 0x8, virtual false, abstract: false, final false
inline float_t get_mouseScrollRotateSensitivity() ;

/// @brief Method get_primary2DAxisClickInput, addr 0xb4c3a40, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* get_primary2DAxisClickInput() ;

/// @brief Method get_primary2DAxisTouchInput, addr 0xb4c3a68, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* get_primary2DAxisTouchInput() ;

/// @brief Method get_primaryButtonInput, addr 0xb4c3a04, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* get_primaryButtonInput() ;

/// @brief Method get_primaryTouchInput, addr 0xb4c3a90, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* get_primaryTouchInput() ;

/// @brief Method get_quickActionControllerInputModes, addr 0xb4c3c80, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::ControllerInputMode>* get_quickActionControllerInputModes() ;

/// @brief Method get_resetInput, addr 0xb4c3af4, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* get_resetInput() ;

/// @brief Method get_rightControllerIsTracked, addr 0xb4c35b4, size 0x8, virtual false, abstract: false, final false
inline bool get_rightControllerIsTracked() ;

/// @brief Method get_rightControllerTrackingState, addr 0xb4c35c4, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::InputTrackingState get_rightControllerTrackingState() ;

/// @brief Method get_rightHandIsTracked, addr 0xb4c35e4, size 0x8, virtual false, abstract: false, final false
inline bool get_rightHandIsTracked() ;

/// @brief Method get_rotateXSensitivity, addr 0xb4c3c30, size 0x8, virtual false, abstract: false, final false
inline float_t get_rotateXSensitivity() ;

/// @brief Method get_rotateYInvert, addr 0xb4c3c60, size 0x8, virtual false, abstract: false, final false
inline bool get_rotateYInvert() ;

/// @brief Method get_rotateYSensitivity, addr 0xb4c3c40, size 0x8, virtual false, abstract: false, final false
inline float_t get_rotateYSensitivity() ;

/// @brief Method get_secondary2DAxisClickInput, addr 0xb4c3a54, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* get_secondary2DAxisClickInput() ;

/// @brief Method get_secondary2DAxisTouchInput, addr 0xb4c3a7c, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* get_secondary2DAxisTouchInput() ;

/// @brief Method get_secondaryButtonInput, addr 0xb4c3a18, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* get_secondaryButtonInput() ;

/// @brief Method get_secondaryTouchInput, addr 0xb4c3aa4, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* get_secondaryTouchInput() ;

/// @brief Method get_targetedDeviceInput, addr 0xb4c3c98, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDevices get_targetedDeviceInput() ;

/// @brief Method get_toggleManipulateHeadInput, addr 0xb4c3bbc, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* get_toggleManipulateHeadInput() ;

/// @brief Method get_toggleManipulateLeftInput, addr 0xb4c3720, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* get_toggleManipulateLeftInput() ;

/// @brief Method get_toggleManipulateRightInput, addr 0xb4c3860, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* get_toggleManipulateRightInput() ;

/// @brief Method get_toggleMouseInput, addr 0xb4c3900, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* get_toggleMouseInput() ;

/// @brief Method get_togglePerformQuickActionInput, addr 0xb4c3ba8, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* get_togglePerformQuickActionInput() ;

/// @brief Method get_togglePrimary2DAxisTargetInput, addr 0xb4c3b6c, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* get_togglePrimary2DAxisTargetInput() ;

/// @brief Method get_toggleSecondary2DAxisTargetInput, addr 0xb4c3b80, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* get_toggleSecondary2DAxisTargetInput() ;

/// @brief Method get_translateSpace, addr 0xb4c3c70, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Space get_translateSpace() ;

/// @brief Method get_translateXInput, addr 0xb4c35f4, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>* get_translateXInput() ;

/// @brief Method get_translateXSpeed, addr 0xb4c3bf0, size 0x8, virtual false, abstract: false, final false
inline float_t get_translateXSpeed() ;

/// @brief Method get_translateYInput, addr 0xb4c3658, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>* get_translateYInput() ;

/// @brief Method get_translateYSpeed, addr 0xb4c3c00, size 0x8, virtual false, abstract: false, final false
inline float_t get_translateYSpeed() ;

/// @brief Method get_translateZInput, addr 0xb4c36bc, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>* get_translateZInput() ;

/// @brief Method get_translateZSpeed, addr 0xb4c3c10, size 0x8, virtual false, abstract: false, final false
inline float_t get_translateZSpeed() ;

/// @brief Method get_triggerAmount, addr 0xb4c3be0, size 0x8, virtual false, abstract: false, final false
inline float_t get_triggerAmount() ;

/// @brief Method get_triggerInput, addr 0xb4c39f0, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* get_triggerInput() ;

/// @brief Method get_xConstraintInput, addr 0xb4c3ab8, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* get_xConstraintInput() ;

/// @brief Method get_yConstraintInput, addr 0xb4c3acc, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* get_yConstraintInput() ;

/// @brief Method get_zConstraintInput, addr 0xb4c3ae0, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* get_zConstraintInput() ;

static inline void setStaticF__instance_k__BackingField(::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator>  value) ;

static inline void setStaticF_instanceChanged(::System::Action_1<bool>*  value) ;

/// @brief Method set_axis2DInput, addr 0xb4c3b10, size 0x5c, virtual false, abstract: false, final false
inline void set_axis2DInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_axis2DTargets, addr 0xb4c3cc0, size 0x8, virtual false, abstract: false, final false
inline void set_axis2DTargets(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Axis2DTargets  value) ;

/// @brief Method set_bodyTranslateMultiplier, addr 0xb4c3c28, size 0x8, virtual false, abstract: false, final false
inline void set_bodyTranslateMultiplier(float_t  value) ;

/// @brief Method set_cameraTransform, addr 0xb4c353c, size 0x8, virtual false, abstract: false, final false
inline void set_cameraTransform(::UnityEngine::Transform*  value) ;

/// @brief Method set_cycleDevicesInput, addr 0xb4c3890, size 0xc, virtual false, abstract: false, final false
inline void set_cycleDevicesInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value) ;

/// @brief Method set_cycleQuickActionInput, addr 0xb4c3b9c, size 0xc, virtual false, abstract: false, final false
inline void set_cycleQuickActionInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value) ;

/// @brief Method set_deviceLifecycleManager, addr 0xb4c354c, size 0x8, virtual false, abstract: false, final false
inline void set_deviceLifecycleManager(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedDeviceLifecycleManager*  value) ;

/// @brief Method set_gripAmount, addr 0xb4c3bd8, size 0x8, virtual false, abstract: false, final false
inline void set_gripAmount(float_t  value) ;

/// @brief Method set_gripInput, addr 0xb4c39e4, size 0xc, virtual false, abstract: false, final false
inline void set_gripInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value) ;

/// @brief Method set_handExpressionManager, addr 0xb4c355c, size 0x8, virtual false, abstract: false, final false
inline void set_handExpressionManager(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpressionManager*  value) ;

/// @brief Method set_hmdIsTracked, addr 0xb4c357c, size 0x8, virtual false, abstract: false, final false
inline void set_hmdIsTracked(bool  value) ;

/// @brief Method set_hmdTrackingState, addr 0xb4c358c, size 0x8, virtual false, abstract: false, final false
inline void set_hmdTrackingState(::UnityEngine::XR::InputTrackingState  value) ;

/// [CompilerGenerated]
/// @brief Method set_instance, addr 0xb4c3e08, size 0x58, virtual false, abstract: false, final false
static inline void set_instance(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator*  value) ;

/// @brief Method set_interactionSimulatorUI, addr 0xb4c356c, size 0x8, virtual false, abstract: false, final false
inline void set_interactionSimulatorUI(::UnityEngine::GameObject*  value) ;

/// @brief Method set_keyboardRotationDeltaInput, addr 0xb4c38a4, size 0x5c, virtual false, abstract: false, final false
inline void set_keyboardRotationDeltaInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  value) ;

/// @brief Method set_leftControllerIsTracked, addr 0xb4c359c, size 0x8, virtual false, abstract: false, final false
inline void set_leftControllerIsTracked(bool  value) ;

/// @brief Method set_leftControllerTrackingState, addr 0xb4c35ac, size 0x8, virtual false, abstract: false, final false
inline void set_leftControllerTrackingState(::UnityEngine::XR::InputTrackingState  value) ;

/// @brief Method set_leftDeviceActionsInput, addr 0xb4c387c, size 0xc, virtual false, abstract: false, final false
inline void set_leftDeviceActionsInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value) ;

/// @brief Method set_leftHandIsTracked, addr 0xb4c35dc, size 0x8, virtual false, abstract: false, final false
inline void set_leftHandIsTracked(bool  value) ;

/// @brief Method set_menuInput, addr 0xb4c3a34, size 0xc, virtual false, abstract: false, final false
inline void set_menuInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value) ;

/// @brief Method set_mouseRotationDeltaInput, addr 0xb4c391c, size 0x5c, virtual false, abstract: false, final false
inline void set_mouseRotationDeltaInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  value) ;

/// @brief Method set_mouseScrollInput, addr 0xb4c3980, size 0x5c, virtual false, abstract: false, final false
inline void set_mouseScrollInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  value) ;

/// @brief Method set_mouseScrollRotateSensitivity, addr 0xb4c3c58, size 0x8, virtual false, abstract: false, final false
inline void set_mouseScrollRotateSensitivity(float_t  value) ;

/// @brief Method set_primary2DAxisClickInput, addr 0xb4c3a48, size 0xc, virtual false, abstract: false, final false
inline void set_primary2DAxisClickInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value) ;

/// @brief Method set_primary2DAxisTouchInput, addr 0xb4c3a70, size 0xc, virtual false, abstract: false, final false
inline void set_primary2DAxisTouchInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value) ;

/// @brief Method set_primaryButtonInput, addr 0xb4c3a0c, size 0xc, virtual false, abstract: false, final false
inline void set_primaryButtonInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value) ;

/// @brief Method set_primaryTouchInput, addr 0xb4c3a98, size 0xc, virtual false, abstract: false, final false
inline void set_primaryTouchInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value) ;

/// @brief Method set_quickActionControllerInputModes, addr 0xb4c3c88, size 0x10, virtual false, abstract: false, final false
inline void set_quickActionControllerInputModes(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::ControllerInputMode>*  value) ;

/// @brief Method set_resetInput, addr 0xb4c3afc, size 0xc, virtual false, abstract: false, final false
inline void set_resetInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value) ;

/// @brief Method set_rightControllerIsTracked, addr 0xb4c35bc, size 0x8, virtual false, abstract: false, final false
inline void set_rightControllerIsTracked(bool  value) ;

/// @brief Method set_rightControllerTrackingState, addr 0xb4c35cc, size 0x8, virtual false, abstract: false, final false
inline void set_rightControllerTrackingState(::UnityEngine::XR::InputTrackingState  value) ;

/// @brief Method set_rightHandIsTracked, addr 0xb4c35ec, size 0x8, virtual false, abstract: false, final false
inline void set_rightHandIsTracked(bool  value) ;

/// @brief Method set_rotateXSensitivity, addr 0xb4c3c38, size 0x8, virtual false, abstract: false, final false
inline void set_rotateXSensitivity(float_t  value) ;

/// @brief Method set_rotateYInvert, addr 0xb4c3c68, size 0x8, virtual false, abstract: false, final false
inline void set_rotateYInvert(bool  value) ;

/// @brief Method set_rotateYSensitivity, addr 0xb4c3c48, size 0x8, virtual false, abstract: false, final false
inline void set_rotateYSensitivity(float_t  value) ;

/// @brief Method set_secondary2DAxisClickInput, addr 0xb4c3a5c, size 0xc, virtual false, abstract: false, final false
inline void set_secondary2DAxisClickInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value) ;

/// @brief Method set_secondary2DAxisTouchInput, addr 0xb4c3a84, size 0xc, virtual false, abstract: false, final false
inline void set_secondary2DAxisTouchInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value) ;

/// @brief Method set_secondaryButtonInput, addr 0xb4c3a20, size 0xc, virtual false, abstract: false, final false
inline void set_secondaryButtonInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value) ;

/// @brief Method set_secondaryTouchInput, addr 0xb4c3aac, size 0xc, virtual false, abstract: false, final false
inline void set_secondaryTouchInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value) ;

/// @brief Method set_targetedDeviceInput, addr 0xb4c3ca0, size 0x8, virtual false, abstract: false, final false
inline void set_targetedDeviceInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDevices  value) ;

/// @brief Method set_toggleManipulateHeadInput, addr 0xb4c3bc4, size 0xc, virtual false, abstract: false, final false
inline void set_toggleManipulateHeadInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value) ;

/// @brief Method set_toggleManipulateLeftInput, addr 0xb4c3728, size 0xc, virtual false, abstract: false, final false
inline void set_toggleManipulateLeftInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value) ;

/// @brief Method set_toggleManipulateRightInput, addr 0xb4c3868, size 0xc, virtual false, abstract: false, final false
inline void set_toggleManipulateRightInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value) ;

/// @brief Method set_toggleMouseInput, addr 0xb4c3908, size 0xc, virtual false, abstract: false, final false
inline void set_toggleMouseInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value) ;

/// @brief Method set_togglePerformQuickActionInput, addr 0xb4c3bb0, size 0xc, virtual false, abstract: false, final false
inline void set_togglePerformQuickActionInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value) ;

/// @brief Method set_togglePrimary2DAxisTargetInput, addr 0xb4c3b74, size 0xc, virtual false, abstract: false, final false
inline void set_togglePrimary2DAxisTargetInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value) ;

/// @brief Method set_toggleSecondary2DAxisTargetInput, addr 0xb4c3b88, size 0xc, virtual false, abstract: false, final false
inline void set_toggleSecondary2DAxisTargetInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value) ;

/// @brief Method set_translateSpace, addr 0xb4c3c78, size 0x8, virtual false, abstract: false, final false
inline void set_translateSpace(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Space  value) ;

/// @brief Method set_translateXInput, addr 0xb4c35fc, size 0x5c, virtual false, abstract: false, final false
inline void set_translateXInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>*  value) ;

/// @brief Method set_translateXSpeed, addr 0xb4c3bf8, size 0x8, virtual false, abstract: false, final false
inline void set_translateXSpeed(float_t  value) ;

/// @brief Method set_translateYInput, addr 0xb4c3660, size 0x5c, virtual false, abstract: false, final false
inline void set_translateYInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>*  value) ;

/// @brief Method set_translateYSpeed, addr 0xb4c3c08, size 0x8, virtual false, abstract: false, final false
inline void set_translateYSpeed(float_t  value) ;

/// @brief Method set_translateZInput, addr 0xb4c36c4, size 0x5c, virtual false, abstract: false, final false
inline void set_translateZInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>*  value) ;

/// @brief Method set_translateZSpeed, addr 0xb4c3c18, size 0x8, virtual false, abstract: false, final false
inline void set_translateZSpeed(float_t  value) ;

/// @brief Method set_triggerAmount, addr 0xb4c3be8, size 0x8, virtual false, abstract: false, final false
inline void set_triggerAmount(float_t  value) ;

/// @brief Method set_triggerInput, addr 0xb4c39f8, size 0xc, virtual false, abstract: false, final false
inline void set_triggerInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value) ;

/// @brief Method set_xConstraintInput, addr 0xb4c3ac0, size 0xc, virtual false, abstract: false, final false
inline void set_xConstraintInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value) ;

/// @brief Method set_yConstraintInput, addr 0xb4c3ad4, size 0xc, virtual false, abstract: false, final false
inline void set_yConstraintInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value) ;

/// @brief Method set_zConstraintInput, addr 0xb4c3ae8, size 0xc, virtual false, abstract: false, final false
inline void set_zConstraintInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRInteractionSimulator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRInteractionSimulator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRInteractionSimulator(XRInteractionSimulator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRInteractionSimulator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRInteractionSimulator(XRInteractionSimulator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11627};

/// @brief Field k_DeviceDownOffsetAmount offset 0xffffffff size 0x4
static constexpr float_t  k_DeviceDownOffsetAmount{static_cast<float_t>(0.045f)};

/// @brief Field k_DeviceForwardOffsetAmount offset 0xffffffff size 0x4
static constexpr float_t  k_DeviceForwardOffsetAmount{static_cast<float_t>(0.3f)};

/// @brief Field k_DeviceLeftRightOffsetAmount offset 0xffffffff size 0x4
static constexpr float_t  k_DeviceLeftRightOffsetAmount{static_cast<float_t>(0.1f)};

/// [SerializeField]
/// [Tooltip("The Transform that contains the Camera. This is usually the \"Head\" of XR Origins. Automatically set to the first enabled camera tagged MainCamera if unset.")]
/// @brief Field m_CameraTransform, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___m_CameraTransform;

/// [SerializeField]
/// [Tooltip("The corresponding manager for this simulator that handles the lifecycle of the simulated devices.")]
/// @brief Field m_DeviceLifecycleManager, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedDeviceLifecycleManager>  ___m_DeviceLifecycleManager;

/// [SerializeField]
/// [Tooltip("The corresponding manager for this simulator that handles the hand expressions.")]
/// @brief Field m_HandExpressionManager, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpressionManager>  ___m_HandExpressionManager;

/// [SerializeField]
/// [Tooltip("The optional Interaction Simulator UI prefab to use along with the XR Interaction Simulator.")]
/// @brief Field m_InteractionSimulatorUI, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___m_InteractionSimulatorUI;

/// [SerializeField]
/// [Tooltip("Whether the HMD should report the pose as fully tracked or unavailable/inferred.")]
/// @brief Field m_HMDIsTracked, offset: 0x40, size: 0x1, def value: None
 bool  ___m_HMDIsTracked;

/// [SerializeField]
/// [Tooltip("Which tracking values the HMD should report as being valid or meaningful to use, which could mean either tracked or inferred.")]
/// @brief Field m_HMDTrackingState, offset: 0x44, size: 0x4, def value: None
 ::UnityEngine::XR::InputTrackingState  ___m_HMDTrackingState;

/// [SerializeField]
/// [Tooltip("Whether the left-hand controller should report the pose as fully tracked or unavailable/inferred.")]
/// @brief Field m_LeftControllerIsTracked, offset: 0x48, size: 0x1, def value: None
 bool  ___m_LeftControllerIsTracked;

/// [SerializeField]
/// [Tooltip("Which tracking values the left-hand controller should report as being valid or meaningful to use, which could mean either tracked or inferred.")]
/// @brief Field m_LeftControllerTrackingState, offset: 0x4c, size: 0x4, def value: None
 ::UnityEngine::XR::InputTrackingState  ___m_LeftControllerTrackingState;

/// [SerializeField]
/// [Tooltip("Whether the right-hand controller should report the pose as fully tracked or unavailable/inferred.")]
/// @brief Field m_RightControllerIsTracked, offset: 0x50, size: 0x1, def value: None
 bool  ___m_RightControllerIsTracked;

/// [SerializeField]
/// [Tooltip("Which tracking values the right-hand controller should report as being valid or meaningful to use, which could mean either tracked or inferred.")]
/// @brief Field m_RightControllerTrackingState, offset: 0x54, size: 0x4, def value: None
 ::UnityEngine::XR::InputTrackingState  ___m_RightControllerTrackingState;

/// [SerializeField]
/// [Tooltip("Whether the left hand should report the pose as fully tracked or unavailable/inferred.")]
/// @brief Field m_LeftHandIsTracked, offset: 0x58, size: 0x1, def value: None
 bool  ___m_LeftHandIsTracked;

/// [SerializeField]
/// [Tooltip("Whether the right hand should report the pose as fully tracked or unavailable/inferred.")]
/// @brief Field m_RightHandIsTracked, offset: 0x59, size: 0x1, def value: None
 bool  ___m_RightHandIsTracked;

/// [SerializeField]
/// [Tooltip("The input used to translate in the x-axis (left/right) while held.")]
/// @brief Field m_TranslateXInput, offset: 0x60, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>*  ___m_TranslateXInput;

/// [SerializeField]
/// [Tooltip("The input used to translate in the y-axis (up/down) while held.")]
/// @brief Field m_TranslateYInput, offset: 0x68, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>*  ___m_TranslateYInput;

/// [SerializeField]
/// [Tooltip("The input used to translate in the z-axis (forward/back) while held.")]
/// @brief Field m_TranslateZInput, offset: 0x70, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<float_t>*  ___m_TranslateZInput;

/// [SerializeField]
/// [Tooltip("The input used to toggle enable manipulation of the left-hand controller when pressed.")]
/// @brief Field m_ToggleManipulateLeftInput, offset: 0x78, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  ___m_ToggleManipulateLeftInput;

/// [SerializeField]
/// [Tooltip("The input used to toggle enable manipulation of the right-hand controller when pressed")]
/// @brief Field m_ToggleManipulateRightInput, offset: 0x80, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  ___m_ToggleManipulateRightInput;

/// [SerializeField]
/// [Tooltip("The input used for controlling the left-hand device\'s actions for buttons or hand expressions.")]
/// @brief Field m_LeftDeviceActionsInput, offset: 0x88, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  ___m_LeftDeviceActionsInput;

/// [SerializeField]
/// [Tooltip("The input used to cycle between the different available devices.")]
/// @brief Field m_CycleDevicesInput, offset: 0x90, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  ___m_CycleDevicesInput;

/// [SerializeField]
/// [Tooltip("The keyboard input used to rotate by a scaled amount along or about the x- and y-axes.")]
/// @brief Field m_KeyboardRotationDeltaInput, offset: 0x98, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  ___m_KeyboardRotationDeltaInput;

/// [SerializeField]
/// [Tooltip("The input used to toggle associated inputs from a mouse device.")]
/// @brief Field m_ToggleMouseInput, offset: 0xa0, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  ___m_ToggleMouseInput;

/// [SerializeField]
/// [Tooltip("The mouse input used to rotate by a scaled amount along or about the x- and y-axes.")]
/// @brief Field m_MouseRotationDeltaInput, offset: 0xa8, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  ___m_MouseRotationDeltaInput;

/// [SerializeField]
/// [Tooltip("The input used to translate or rotate by a scaled amount along or about the z-axis.")]
/// @brief Field m_MouseScrollInput, offset: 0xb0, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  ___m_MouseScrollInput;

/// [SerializeField]
/// [Tooltip("The input used to control the Grip control of the manipulated controller device(s).")]
/// @brief Field m_GripInput, offset: 0xb8, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  ___m_GripInput;

/// [SerializeField]
/// [Tooltip("The input used to control the Trigger control of the manipulated controller device(s).")]
/// @brief Field m_TriggerInput, offset: 0xc0, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  ___m_TriggerInput;

/// [SerializeField]
/// [Tooltip("The input used to control the PrimaryButton control of the manipulated controller device(s).")]
/// @brief Field m_PrimaryButtonInput, offset: 0xc8, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  ___m_PrimaryButtonInput;

/// [SerializeField]
/// [Tooltip("The input used to control the SecondaryButton control of the manipulated controller device(s).")]
/// @brief Field m_SecondaryButtonInput, offset: 0xd0, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  ___m_SecondaryButtonInput;

/// [SerializeField]
/// [Tooltip("The input used to control the Menu control of the manipulated controller device(s).")]
/// @brief Field m_MenuInput, offset: 0xd8, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  ___m_MenuInput;

/// [SerializeField]
/// [Tooltip("The input used to control the Primary2DAxisClick control of the manipulated controller device(s).")]
/// @brief Field m_Primary2DAxisClickInput, offset: 0xe0, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  ___m_Primary2DAxisClickInput;

/// [SerializeField]
/// [Tooltip("The input used to control the Secondary2DAxisClick control of the manipulated controller device(s).")]
/// @brief Field m_Secondary2DAxisClickInput, offset: 0xe8, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  ___m_Secondary2DAxisClickInput;

/// [SerializeField]
/// [Tooltip("The input used to control the Primary2DAxisTouch control of the manipulated controller device(s).")]
/// @brief Field m_Primary2DAxisTouchInput, offset: 0xf0, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  ___m_Primary2DAxisTouchInput;

/// [SerializeField]
/// [Tooltip("The input used to control the Secondary2DAxisTouch control of the manipulated controller device(s).")]
/// @brief Field m_Secondary2DAxisTouchInput, offset: 0xf8, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  ___m_Secondary2DAxisTouchInput;

/// [SerializeField]
/// [Tooltip("The input used to control the PrimaryTouch control of the manipulated controller device(s).")]
/// @brief Field m_PrimaryTouchInput, offset: 0x100, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  ___m_PrimaryTouchInput;

/// [SerializeField]
/// [Tooltip("The input used to control the SecondaryTouch control of the manipulated controller device(s).")]
/// @brief Field m_SecondaryTouchInput, offset: 0x108, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  ___m_SecondaryTouchInput;

/// [SerializeField]
/// [Tooltip("The input used to constrain the translation or rotation to the x-axis when moving the mouse or resetting. May be combined with another axis constraint to constrain to a plane.")]
/// @brief Field m_XConstraintInput, offset: 0x110, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  ___m_XConstraintInput;

/// [SerializeField]
/// [Tooltip("The input used to constrain the translation or rotation to the y-axis when moving the mouse or resetting. May be combined with another axis constraint to constrain to a plane.")]
/// @brief Field m_YConstraintInput, offset: 0x118, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  ___m_YConstraintInput;

/// [SerializeField]
/// [Tooltip("The input used to constrain the translation or rotation to the z-axis when moving the mouse or resetting. May be combined with another axis constraint to constrain to a plane.")]
/// @brief Field m_ZConstraintInput, offset: 0x120, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  ___m_ZConstraintInput;

/// [SerializeField]
/// [Tooltip("The input used to cause the manipulated device(s) to reset position or rotation (depending on the effective manipulation mode).")]
/// @brief Field m_ResetInput, offset: 0x128, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  ___m_ResetInput;

/// [SerializeField]
/// [Tooltip("The input used to control the value of one or more 2D Axis controls on the manipulated controller device(s).")]
/// @brief Field m_Axis2DInput, offset: 0x130, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<::UnityEngine::Vector2>*  ___m_Axis2DInput;

/// [SerializeField]
/// [Tooltip("The input used to toggle enable manipulation of the Primary2DAxis of the controllers when pressed.")]
/// @brief Field m_TogglePrimary2DAxisTargetInput, offset: 0x138, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  ___m_TogglePrimary2DAxisTargetInput;

/// [SerializeField]
/// [Tooltip("The input used to toggle enable manipulation of the Secondary2DAxis of the controllers when pressed.")]
/// @brief Field m_ToggleSecondary2DAxisTargetInput, offset: 0x140, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  ___m_ToggleSecondary2DAxisTargetInput;

/// [SerializeField]
/// [Tooltip("The input used to cycle the quick-action for controller inputs or hand expressions.")]
/// @brief Field m_CycleQuickActionInput, offset: 0x148, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  ___m_CycleQuickActionInput;

/// [SerializeField]
/// [Tooltip("The input used to perform the currently active quick-action controller input or hand expression.")]
/// @brief Field m_TogglePerformQuickActionInput, offset: 0x150, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  ___m_TogglePerformQuickActionInput;

/// [SerializeField]
/// [Tooltip("The input used to toggle manipulation of only the head pose.")]
/// @brief Field m_ToggleManipulateHeadInput, offset: 0x158, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  ___m_ToggleManipulateHeadInput;

/// [SerializeField]
/// [Range(0, 1)]
/// [Tooltip("The amount of the simulated grip on the controller when the Grip control is pressed.")]
/// @brief Field m_GripAmount, offset: 0x160, size: 0x4, def value: None
 float_t  ___m_GripAmount;

/// [SerializeField]
/// [Range(0, 1)]
/// [Tooltip("The amount of the simulated trigger pull on the controller when the Trigger control is pressed.")]
/// @brief Field m_TriggerAmount, offset: 0x164, size: 0x4, def value: None
 float_t  ___m_TriggerAmount;

/// [SerializeField]
/// [Tooltip("Speed of translation in the x-axis (left/right) when triggered by input.")]
/// @brief Field m_TranslateXSpeed, offset: 0x168, size: 0x4, def value: None
 float_t  ___m_TranslateXSpeed;

/// [SerializeField]
/// [Tooltip("Speed of translation in the y-axis (up/down) when triggered by input.")]
/// @brief Field m_TranslateYSpeed, offset: 0x16c, size: 0x4, def value: None
 float_t  ___m_TranslateYSpeed;

/// [SerializeField]
/// [Tooltip("Speed of translation in the z-axis (forward/back) when triggered by input.")]
/// @brief Field m_TranslateZSpeed, offset: 0x170, size: 0x4, def value: None
 float_t  ___m_TranslateZSpeed;

/// [SerializeField]
/// [Tooltip("Speed multiplier applied for body translation when triggered by input.")]
/// @brief Field m_BodyTranslateMultiplier, offset: 0x174, size: 0x4, def value: None
 float_t  ___m_BodyTranslateMultiplier;

/// [SerializeField]
/// [Tooltip("Sensitivity of rotation along the x-axis (pitch) when triggered by input.")]
/// @brief Field m_RotateXSensitivity, offset: 0x178, size: 0x4, def value: None
 float_t  ___m_RotateXSensitivity;

/// [SerializeField]
/// [Tooltip("Sensitivity of rotation along the y-axis (yaw) when triggered by input.")]
/// @brief Field m_RotateYSensitivity, offset: 0x17c, size: 0x4, def value: None
 float_t  ___m_RotateYSensitivity;

/// [SerializeField]
/// [Tooltip("Sensitivity of rotation along the z-axis (roll) when triggered by mouse scroll input.")]
/// @brief Field m_MouseScrollRotateSensitivity, offset: 0x180, size: 0x4, def value: None
 float_t  ___m_MouseScrollRotateSensitivity;

/// [SerializeField]
/// [Tooltip("A boolean value of whether to invert the y-axis when rotating.\nA false value (default) means typical FPS style where moving up/down pitches up/down.\nA true value means flight control style where moving up/down pitches down/up.")]
/// @brief Field m_RotateYInvert, offset: 0x184, size: 0x1, def value: None
 bool  ___m_RotateYInvert;

/// [SerializeField]
/// [Tooltip("The coordinate space in which translation should operate.")]
/// @brief Field m_TranslateSpace, offset: 0x188, size: 0x4, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Space  ___m_TranslateSpace;

/// [SerializeField]
/// [Tooltip("The subset of quick-action controller buttons/inputs that a user can shift through in the simulator.")]
/// @brief Field m_QuickActionControllerInputModes, offset: 0x190, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::ControllerInputMode>*  ___m_QuickActionControllerInputModes;

/// @brief Field m_TargetedDeviceInput, offset: 0x198, size: 0x4, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDevices  ___m_TargetedDeviceInput;

/// @brief Field m_ControllerInputMode, offset: 0x19c, size: 0x4, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::ControllerInputMode  ___m_ControllerInputMode;

/// @brief Field m_CurrentHandExpression, offset: 0x1a0, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression*  ___m_CurrentHandExpression;

/// [CompilerGenerated]
/// @brief Field <axis2DTargets>k__BackingField, offset: 0x1a8, size: 0x4, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Axis2DTargets  ____axis2DTargets_k__BackingField;

/// [TupleElementNames(new[] { "transform", "camera" })]
/// @brief Field m_CachedCamera, offset: 0x1b0, size: 0x10, def value: None
 ::System::ValueTuple_2<::UnityW<::UnityEngine::Transform>,::UnityW<::UnityEngine::Camera>>  ___m_CachedCamera;

/// @brief Field m_TranslateXValue, offset: 0x1c0, size: 0x4, def value: None
 float_t  ___m_TranslateXValue;

/// @brief Field m_TranslateYValue, offset: 0x1c4, size: 0x4, def value: None
 float_t  ___m_TranslateYValue;

/// @brief Field m_TranslateZValue, offset: 0x1c8, size: 0x4, def value: None
 float_t  ___m_TranslateZValue;

/// @brief Field m_RotationDeltaValue, offset: 0x1cc, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___m_RotationDeltaValue;

/// @brief Field m_MouseScrollValue, offset: 0x1d4, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___m_MouseScrollValue;

/// @brief Field m_XConstraintValue, offset: 0x1dc, size: 0x1, def value: None
 bool  ___m_XConstraintValue;

/// @brief Field m_YConstraintValue, offset: 0x1dd, size: 0x1, def value: None
 bool  ___m_YConstraintValue;

/// @brief Field m_ZConstraintValue, offset: 0x1de, size: 0x1, def value: None
 bool  ___m_ZConstraintValue;

/// @brief Field m_ResetValue, offset: 0x1df, size: 0x1, def value: None
 bool  ___m_ResetValue;

/// @brief Field m_Axis2DValue, offset: 0x1e0, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___m_Axis2DValue;

/// @brief Field m_ControllerInputModeIndex, offset: 0x1e8, size: 0x4, def value: None
 int32_t  ___m_ControllerInputModeIndex;

/// @brief Field m_HandExpressionIndex, offset: 0x1ec, size: 0x4, def value: None
 int32_t  ___m_HandExpressionIndex;

/// @brief Field m_ToggleManipulateWaitingForReleaseBoth, offset: 0x1f0, size: 0x1, def value: None
 bool  ___m_ToggleManipulateWaitingForReleaseBoth;

/// @brief Field m_LeftControllerEuler, offset: 0x1f4, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_LeftControllerEuler;

/// @brief Field m_RightControllerEuler, offset: 0x200, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_RightControllerEuler;

/// @brief Field m_CenterEyeEuler, offset: 0x20c, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_CenterEyeEuler;

/// @brief Field m_HMDState, offset: 0x218, size: 0x75, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMDState  ___m_HMDState;

/// @brief Field m_LeftControllerState, offset: 0x290, size: 0x3f, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState  ___m_LeftControllerState;

/// @brief Field m_RightControllerState, offset: 0x2d0, size: 0x3f, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState  ___m_RightControllerState;

/// @brief Field m_LeftHandState, offset: 0x310, size: 0x40, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::XRSimulatedHandState  ___m_LeftHandState;

/// @brief Field m_RightHandState, offset: 0x350, size: 0x40, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::XRSimulatedHandState  ___m_RightHandState;

/// @brief Field m_PreviousTargetedDevices, offset: 0x390, size: 0x4, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::TargetedDevices  ___m_PreviousTargetedDevices;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator, ___m_CameraTransform) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator, ___m_DeviceLifecycleManager) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator, ___m_HandExpressionManager) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator, ___m_InteractionSimulatorUI) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator, ___m_HMDIsTracked) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator, ___m_HMDTrackingState) == 0x44, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator, ___m_LeftControllerIsTracked) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator, ___m_LeftControllerTrackingState) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator, ___m_RightControllerIsTracked) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator, ___m_RightControllerTrackingState) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator, ___m_LeftHandIsTracked) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator, ___m_RightHandIsTracked) == 0x59, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator, ___m_TranslateXInput) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator, ___m_TranslateYInput) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator, ___m_TranslateZInput) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator, ___m_ToggleManipulateLeftInput) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator, ___m_ToggleManipulateRightInput) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator, ___m_LeftDeviceActionsInput) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator, ___m_CycleDevicesInput) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator, ___m_KeyboardRotationDeltaInput) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator, ___m_ToggleMouseInput) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator, ___m_MouseRotationDeltaInput) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator, ___m_MouseScrollInput) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator, ___m_GripInput) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator, ___m_TriggerInput) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator, ___m_PrimaryButtonInput) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator, ___m_SecondaryButtonInput) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator, ___m_MenuInput) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator, ___m_Primary2DAxisClickInput) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator, ___m_Secondary2DAxisClickInput) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator, ___m_Primary2DAxisTouchInput) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator, ___m_Secondary2DAxisTouchInput) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator, ___m_PrimaryTouchInput) == 0x100, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator, ___m_SecondaryTouchInput) == 0x108, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator, ___m_XConstraintInput) == 0x110, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator, ___m_YConstraintInput) == 0x118, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator, ___m_ZConstraintInput) == 0x120, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator, ___m_ResetInput) == 0x128, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator, ___m_Axis2DInput) == 0x130, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator, ___m_TogglePrimary2DAxisTargetInput) == 0x138, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator, ___m_ToggleSecondary2DAxisTargetInput) == 0x140, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator, ___m_CycleQuickActionInput) == 0x148, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator, ___m_TogglePerformQuickActionInput) == 0x150, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator, ___m_ToggleManipulateHeadInput) == 0x158, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator, ___m_GripAmount) == 0x160, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator, ___m_TriggerAmount) == 0x164, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator, ___m_TranslateXSpeed) == 0x168, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator, ___m_TranslateYSpeed) == 0x16c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator, ___m_TranslateZSpeed) == 0x170, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator, ___m_BodyTranslateMultiplier) == 0x174, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator, ___m_RotateXSensitivity) == 0x178, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator, ___m_RotateYSensitivity) == 0x17c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator, ___m_MouseScrollRotateSensitivity) == 0x180, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator, ___m_RotateYInvert) == 0x184, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator, ___m_TranslateSpace) == 0x188, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator, ___m_QuickActionControllerInputModes) == 0x190, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator, ___m_TargetedDeviceInput) == 0x198, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator, ___m_ControllerInputMode) == 0x19c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator, ___m_CurrentHandExpression) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator, ____axis2DTargets_k__BackingField) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator, ___m_CachedCamera) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator, ___m_TranslateXValue) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator, ___m_TranslateYValue) == 0x1c4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator, ___m_TranslateZValue) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator, ___m_RotationDeltaValue) == 0x1cc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator, ___m_MouseScrollValue) == 0x1d4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator, ___m_XConstraintValue) == 0x1dc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator, ___m_YConstraintValue) == 0x1dd, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator, ___m_ZConstraintValue) == 0x1de, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator, ___m_ResetValue) == 0x1df, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator, ___m_Axis2DValue) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator, ___m_ControllerInputModeIndex) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator, ___m_HandExpressionIndex) == 0x1ec, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator, ___m_ToggleManipulateWaitingForReleaseBoth) == 0x1f0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator, ___m_LeftControllerEuler) == 0x1f4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator, ___m_RightControllerEuler) == 0x200, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator, ___m_CenterEyeEuler) == 0x20c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator, ___m_HMDState) == 0x218, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator, ___m_LeftControllerState) == 0x290, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator, ___m_RightControllerState) == 0x2d0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator, ___m_LeftHandState) == 0x310, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator, ___m_RightHandState) == 0x350, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator, ___m_PreviousTargetedDevices) == 0x390, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRInteractionSimulator) == 0x398, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation
