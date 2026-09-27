#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/XRDeviceSimulator.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/Hands/zzzz__HandExpressionName_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/Hands/zzzz__XRSimulatedHandState_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/zzzz__XRDeviceSimulator_Axis2DTargets_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/zzzz__XRDeviceSimulator_Space_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/zzzz__XRDeviceSimulator_TargetedDevices_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/zzzz__XRDeviceSimulator_TransformationMode_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/zzzz__XRSimulatedControllerState_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/Simulation/zzzz__XRSimulatedHMDState_def.hpp"
#include "UnityEngine/XR/zzzz__InputTrackingState_def.hpp"
#include "UnityEngine/zzzz__CursorLockMode_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(XRDeviceSimulator)
namespace GlobalNamespace {
struct InputAction_CallbackContext;
}
namespace GlobalNamespace {
struct XRDeviceSimulator_Axis2DTargets;
}
namespace GlobalNamespace {
struct XRDeviceSimulator_DeviceMode;
}
namespace GlobalNamespace {
struct XRDeviceSimulator_Space;
}
namespace GlobalNamespace {
struct XRDeviceSimulator_TargetedDevices;
}
namespace GlobalNamespace {
struct XRDeviceSimulator_TransformationMode;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace UnityEngine::InputSystem {
class InputActionAsset;
}
namespace UnityEngine::InputSystem {
class InputActionReference;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands {
class HandExpressionCapture;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands {
struct HandExpressionName;
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
class XRDeviceSimulator_SimulatedHandExpression;
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
struct CursorLockMode;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
namespace UnityEngine {
class Sprite;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation {
class XRDeviceSimulator;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation {
class XRDeviceSimulator_SimulatedHandExpression;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*, "UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation", "XRDeviceSimulator");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression*, "UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation", "XRDeviceSimulator/SimulatedHandExpression");
// [AddComponentMenu("XR/Debug/XR Device Simulator", 11)]
// [DefaultExecutionOrder(-29991)]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator.html")]
// Dependencies System.ValueTuple`2<T1, T2>, UnityEngine.CursorLockMode, UnityEngine.MonoBehaviour, UnityEngine.Vector2, UnityEngine.Vector3, UnityEngine.XR.InputTrackingState, UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.XRSimulatedHandState, UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::Axis2DTargets, UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::Space, UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::TargetedDevices, UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator::TransformationMode, UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedControllerState, UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRSimulatedHMDState
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator
class CORDL_TYPE XRDeviceSimulator : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using Axis2DTargets = ::GlobalNamespace::XRDeviceSimulator_Axis2DTargets;

using DeviceMode = ::GlobalNamespace::XRDeviceSimulator_DeviceMode;

using Space = ::GlobalNamespace::XRDeviceSimulator_Space;

using TargetedDevices = ::GlobalNamespace::XRDeviceSimulator_TargetedDevices;

using TransformationMode = ::GlobalNamespace::XRDeviceSimulator_TransformationMode;

using SimulatedHandExpression = ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression;

/// @brief Field <axis2DTargets>k__BackingField, offset 0x1dc, size 0x4 
 __declspec(property(get=__cordl_internal_get__axis2DTargets_k__BackingField, put=__cordl_internal_set__axis2DTargets_k__BackingField)) ::GlobalNamespace::XRDeviceSimulator_Axis2DTargets  _axis2DTargets_k__BackingField;

/// @brief Field <instance>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__instance_k__BackingField, put=setStaticF__instance_k__BackingField)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator>  _instance_k__BackingField;

/// @brief Field <mouseTransformationMode>k__BackingField, offset 0x1d4, size 0x4 
 __declspec(property(get=__cordl_internal_get__mouseTransformationMode_k__BackingField, put=__cordl_internal_set__mouseTransformationMode_k__BackingField)) ::GlobalNamespace::XRDeviceSimulator_TransformationMode  _mouseTransformationMode_k__BackingField;

/// @brief Field <negateMode>k__BackingField, offset 0x1d8, size 0x1 
 __declspec(property(get=__cordl_internal_get__negateMode_k__BackingField, put=__cordl_internal_set__negateMode_k__BackingField)) bool  _negateMode_k__BackingField;

 __declspec(property(get=get_axis2DAction, put=set_axis2DAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  axis2DAction;

 __declspec(property(get=get_axis2DTargets, put=set_axis2DTargets)) ::GlobalNamespace::XRDeviceSimulator_Axis2DTargets  axis2DTargets;

 __declspec(property(get=get_cameraTransform, put=set_cameraTransform)) ::UnityW<::UnityEngine::Transform>  cameraTransform;

 __declspec(property(get=get_controllerActionAsset, put=set_controllerActionAsset)) ::UnityW<::UnityEngine::InputSystem::InputActionAsset>  controllerActionAsset;

 __declspec(property(get=get_cycleDevicesAction, put=set_cycleDevicesAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  cycleDevicesAction;

 __declspec(property(get=get_desiredCursorLockMode, put=set_desiredCursorLockMode)) ::UnityEngine::CursorLockMode  desiredCursorLockMode;

/// @brief [Obsolete("deviceMode has been deprecated in XRI 3.1.0 due to being moved out XR Device Simulator. Use deviceMode in the SimulatedDeviceLifecycleManager instead.")]
 __declspec(property(get=get_deviceMode)) ::GlobalNamespace::XRDeviceSimulator_DeviceMode  deviceMode;

 __declspec(property(get=get_deviceSimulatorActionAsset, put=set_deviceSimulatorActionAsset)) ::UnityW<::UnityEngine::InputSystem::InputActionAsset>  deviceSimulatorActionAsset;

 __declspec(property(get=get_deviceSimulatorUI, put=set_deviceSimulatorUI)) ::UnityW<::UnityEngine::GameObject>  deviceSimulatorUI;

 __declspec(property(get=get_gripAction, put=set_gripAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  gripAction;

 __declspec(property(get=get_gripAmount, put=set_gripAmount)) float_t  gripAmount;

 __declspec(property(get=get_handActionAsset, put=set_handActionAsset)) ::UnityW<::UnityEngine::InputSystem::InputActionAsset>  handActionAsset;

 __declspec(property(get=get_handControllerModeAction, put=set_handControllerModeAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  handControllerModeAction;

/// @brief [Obsolete("handTrackingCapability has been deprecated in XRI 3.1.0. Use handTrackingCapability in the SimulatedDeviceLifecycleManager instead.")]
 __declspec(property(get=get_handTrackingCapability, put=set_handTrackingCapability)) bool  handTrackingCapability;

 __declspec(property(get=get_hmdIsTracked, put=set_hmdIsTracked)) bool  hmdIsTracked;

 __declspec(property(get=get_hmdTrackingState, put=set_hmdTrackingState)) ::UnityEngine::XR::InputTrackingState  hmdTrackingState;

/// @brief Field instanceChanged, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_instanceChanged, put=setStaticF_instanceChanged)) ::System::Action_1<bool>*  instanceChanged;

 __declspec(property(get=get_keyboardBodyTranslateMultiplier, put=set_keyboardBodyTranslateMultiplier)) float_t  keyboardBodyTranslateMultiplier;

 __declspec(property(get=get_keyboardTranslateSpace, put=set_keyboardTranslateSpace)) ::GlobalNamespace::XRDeviceSimulator_Space  keyboardTranslateSpace;

 __declspec(property(get=get_keyboardXTranslateAction, put=set_keyboardXTranslateAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  keyboardXTranslateAction;

 __declspec(property(get=get_keyboardXTranslateSpeed, put=set_keyboardXTranslateSpeed)) float_t  keyboardXTranslateSpeed;

 __declspec(property(get=get_keyboardYTranslateAction, put=set_keyboardYTranslateAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  keyboardYTranslateAction;

 __declspec(property(get=get_keyboardYTranslateSpeed, put=set_keyboardYTranslateSpeed)) float_t  keyboardYTranslateSpeed;

 __declspec(property(get=get_keyboardZTranslateAction, put=set_keyboardZTranslateAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  keyboardZTranslateAction;

 __declspec(property(get=get_keyboardZTranslateSpeed, put=set_keyboardZTranslateSpeed)) float_t  keyboardZTranslateSpeed;

 __declspec(property(get=get_leftControllerIsTracked, put=set_leftControllerIsTracked)) bool  leftControllerIsTracked;

 __declspec(property(get=get_leftControllerTrackingState, put=set_leftControllerTrackingState)) ::UnityEngine::XR::InputTrackingState  leftControllerTrackingState;

 __declspec(property(get=get_leftHandIsTracked, put=set_leftHandIsTracked)) bool  leftHandIsTracked;

/// @brief Field m_Axis2DAction, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Axis2DAction, put=__cordl_internal_set_m_Axis2DAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  m_Axis2DAction;

/// @brief Field m_Axis2DInput, offset 0x21c, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Axis2DInput, put=__cordl_internal_set_m_Axis2DInput)) ::UnityEngine::Vector2  m_Axis2DInput;

/// @brief Field m_CachedCamera, offset 0x1e8, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_CachedCamera, put=__cordl_internal_set_m_CachedCamera)) ::System::ValueTuple_2<::UnityW<::UnityEngine::Transform>,::UnityW<::UnityEngine::Camera>>  m_CachedCamera;

/// @brief Field m_CameraTransform, offset 0x168, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CameraTransform, put=__cordl_internal_set_m_CameraTransform)) ::UnityW<::UnityEngine::Transform>  m_CameraTransform;

/// @brief Field m_CenterEyeEuler, offset 0x250, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_CenterEyeEuler, put=__cordl_internal_set_m_CenterEyeEuler)) ::UnityEngine::Vector3  m_CenterEyeEuler;

/// @brief Field m_ControllerActionAsset, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ControllerActionAsset, put=__cordl_internal_set_m_ControllerActionAsset)) ::UnityW<::UnityEngine::InputSystem::InputActionAsset>  m_ControllerActionAsset;

/// @brief Field m_CycleDevicesAction, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CycleDevicesAction, put=__cordl_internal_set_m_CycleDevicesAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  m_CycleDevicesAction;

/// @brief Field m_DesiredCursorLockMode, offset 0x1a4, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_DesiredCursorLockMode, put=__cordl_internal_set_m_DesiredCursorLockMode)) ::UnityEngine::CursorLockMode  m_DesiredCursorLockMode;

/// @brief Field m_DeviceLifecycleManager, offset 0x3d8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_DeviceLifecycleManager, put=__cordl_internal_set_m_DeviceLifecycleManager)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedDeviceLifecycleManager>  m_DeviceLifecycleManager;

/// @brief Field m_DeviceSimulatorActionAsset, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_DeviceSimulatorActionAsset, put=__cordl_internal_set_m_DeviceSimulatorActionAsset)) ::UnityW<::UnityEngine::InputSystem::InputActionAsset>  m_DeviceSimulatorActionAsset;

/// @brief Field m_DeviceSimulatorUI, offset 0x1a8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_DeviceSimulatorUI, put=__cordl_internal_set_m_DeviceSimulatorUI)) ::UnityW<::UnityEngine::GameObject>  m_DeviceSimulatorUI;

/// @brief Field m_GripAction, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_GripAction, put=__cordl_internal_set_m_GripAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  m_GripAction;

/// @brief Field m_GripAmount, offset 0x1b0, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_GripAmount, put=__cordl_internal_set_m_GripAmount)) float_t  m_GripAmount;

/// @brief Field m_GripInput, offset 0x22c, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_GripInput, put=__cordl_internal_set_m_GripInput)) bool  m_GripInput;

/// @brief Field m_HMDIsTracked, offset 0x1b8, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_HMDIsTracked, put=__cordl_internal_set_m_HMDIsTracked)) bool  m_HMDIsTracked;

/// @brief Field m_HMDState, offset 0x25c, size 0x75 
 __declspec(property(get=__cordl_internal_get_m_HMDState, put=__cordl_internal_set_m_HMDState)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMDState  m_HMDState;

/// @brief Field m_HMDTrackingState, offset 0x1bc, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_HMDTrackingState, put=__cordl_internal_set_m_HMDTrackingState)) ::UnityEngine::XR::InputTrackingState  m_HMDTrackingState;

/// @brief Field m_HandActionAsset, offset 0x160, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_HandActionAsset, put=__cordl_internal_set_m_HandActionAsset)) ::UnityW<::UnityEngine::InputSystem::InputActionAsset>  m_HandActionAsset;

/// @brief Field m_HandControllerModeAction, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_HandControllerModeAction, put=__cordl_internal_set_m_HandControllerModeAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  m_HandControllerModeAction;

/// @brief Field m_HandExpressionManager, offset 0x3e0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_HandExpressionManager, put=__cordl_internal_set_m_HandExpressionManager)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpressionManager>  m_HandExpressionManager;

/// @brief Field m_KeyboardBodyTranslateMultiplier, offset 0x184, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_KeyboardBodyTranslateMultiplier, put=__cordl_internal_set_m_KeyboardBodyTranslateMultiplier)) float_t  m_KeyboardBodyTranslateMultiplier;

/// @brief Field m_KeyboardTranslateSpace, offset 0x170, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_KeyboardTranslateSpace, put=__cordl_internal_set_m_KeyboardTranslateSpace)) ::GlobalNamespace::XRDeviceSimulator_Space  m_KeyboardTranslateSpace;

/// @brief Field m_KeyboardXTranslateAction, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_KeyboardXTranslateAction, put=__cordl_internal_set_m_KeyboardXTranslateAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  m_KeyboardXTranslateAction;

/// @brief Field m_KeyboardXTranslateInput, offset 0x1f8, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_KeyboardXTranslateInput, put=__cordl_internal_set_m_KeyboardXTranslateInput)) float_t  m_KeyboardXTranslateInput;

/// @brief Field m_KeyboardXTranslateSpeed, offset 0x178, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_KeyboardXTranslateSpeed, put=__cordl_internal_set_m_KeyboardXTranslateSpeed)) float_t  m_KeyboardXTranslateSpeed;

/// @brief Field m_KeyboardYTranslateAction, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_KeyboardYTranslateAction, put=__cordl_internal_set_m_KeyboardYTranslateAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  m_KeyboardYTranslateAction;

/// @brief Field m_KeyboardYTranslateInput, offset 0x1fc, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_KeyboardYTranslateInput, put=__cordl_internal_set_m_KeyboardYTranslateInput)) float_t  m_KeyboardYTranslateInput;

/// @brief Field m_KeyboardYTranslateSpeed, offset 0x17c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_KeyboardYTranslateSpeed, put=__cordl_internal_set_m_KeyboardYTranslateSpeed)) float_t  m_KeyboardYTranslateSpeed;

/// @brief Field m_KeyboardZTranslateAction, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_KeyboardZTranslateAction, put=__cordl_internal_set_m_KeyboardZTranslateAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  m_KeyboardZTranslateAction;

/// @brief Field m_KeyboardZTranslateInput, offset 0x200, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_KeyboardZTranslateInput, put=__cordl_internal_set_m_KeyboardZTranslateInput)) float_t  m_KeyboardZTranslateInput;

/// @brief Field m_KeyboardZTranslateSpeed, offset 0x180, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_KeyboardZTranslateSpeed, put=__cordl_internal_set_m_KeyboardZTranslateSpeed)) float_t  m_KeyboardZTranslateSpeed;

/// @brief Field m_LeftControllerEuler, offset 0x238, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_LeftControllerEuler, put=__cordl_internal_set_m_LeftControllerEuler)) ::UnityEngine::Vector3  m_LeftControllerEuler;

/// @brief Field m_LeftControllerIsTracked, offset 0x1c0, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_LeftControllerIsTracked, put=__cordl_internal_set_m_LeftControllerIsTracked)) bool  m_LeftControllerIsTracked;

/// @brief Field m_LeftControllerState, offset 0x2d4, size 0x3f 
 __declspec(property(get=__cordl_internal_get_m_LeftControllerState, put=__cordl_internal_set_m_LeftControllerState)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState  m_LeftControllerState;

/// @brief Field m_LeftControllerTrackingState, offset 0x1c4, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_LeftControllerTrackingState, put=__cordl_internal_set_m_LeftControllerTrackingState)) ::UnityEngine::XR::InputTrackingState  m_LeftControllerTrackingState;

/// @brief Field m_LeftHandIsTracked, offset 0x1d0, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_LeftHandIsTracked, put=__cordl_internal_set_m_LeftHandIsTracked)) bool  m_LeftHandIsTracked;

/// @brief Field m_LeftHandState, offset 0x358, size 0x40 
 __declspec(property(get=__cordl_internal_get_m_LeftHandState, put=__cordl_internal_set_m_LeftHandState)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::XRSimulatedHandState  m_LeftHandState;

/// @brief Field m_ManipulateHeadAction, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ManipulateHeadAction, put=__cordl_internal_set_m_ManipulateHeadAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  m_ManipulateHeadAction;

/// @brief Field m_ManipulateLeftAction, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ManipulateLeftAction, put=__cordl_internal_set_m_ManipulateLeftAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  m_ManipulateLeftAction;

/// @brief Field m_ManipulateRightAction, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ManipulateRightAction, put=__cordl_internal_set_m_ManipulateRightAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  m_ManipulateRightAction;

/// @brief Field m_ManipulatedRestingHandAxis2D, offset 0x237, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_ManipulatedRestingHandAxis2D, put=__cordl_internal_set_m_ManipulatedRestingHandAxis2D)) bool  m_ManipulatedRestingHandAxis2D;

/// @brief Field m_MenuAction, offset 0x128, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_MenuAction, put=__cordl_internal_set_m_MenuAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  m_MenuAction;

/// @brief Field m_MenuInput, offset 0x230, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_MenuInput, put=__cordl_internal_set_m_MenuInput)) bool  m_MenuInput;

/// @brief Field m_MouseDeltaAction, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_MouseDeltaAction, put=__cordl_internal_set_m_MouseDeltaAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  m_MouseDeltaAction;

/// @brief Field m_MouseDeltaInput, offset 0x204, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_MouseDeltaInput, put=__cordl_internal_set_m_MouseDeltaInput)) ::UnityEngine::Vector2  m_MouseDeltaInput;

/// @brief Field m_MouseScrollAction, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_MouseScrollAction, put=__cordl_internal_set_m_MouseScrollAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  m_MouseScrollAction;

/// @brief Field m_MouseScrollInput, offset 0x20c, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_MouseScrollInput, put=__cordl_internal_set_m_MouseScrollInput)) ::UnityEngine::Vector2  m_MouseScrollInput;

/// @brief Field m_MouseScrollRotateSensitivity, offset 0x19c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_MouseScrollRotateSensitivity, put=__cordl_internal_set_m_MouseScrollRotateSensitivity)) float_t  m_MouseScrollRotateSensitivity;

/// @brief Field m_MouseScrollTranslateSensitivity, offset 0x190, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_MouseScrollTranslateSensitivity, put=__cordl_internal_set_m_MouseScrollTranslateSensitivity)) float_t  m_MouseScrollTranslateSensitivity;

/// @brief Field m_MouseTranslateSpace, offset 0x174, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_MouseTranslateSpace, put=__cordl_internal_set_m_MouseTranslateSpace)) ::GlobalNamespace::XRDeviceSimulator_Space  m_MouseTranslateSpace;

/// @brief Field m_MouseXRotateSensitivity, offset 0x194, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_MouseXRotateSensitivity, put=__cordl_internal_set_m_MouseXRotateSensitivity)) float_t  m_MouseXRotateSensitivity;

/// @brief Field m_MouseXTranslateSensitivity, offset 0x188, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_MouseXTranslateSensitivity, put=__cordl_internal_set_m_MouseXTranslateSensitivity)) float_t  m_MouseXTranslateSensitivity;

/// @brief Field m_MouseYRotateInvert, offset 0x1a0, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_MouseYRotateInvert, put=__cordl_internal_set_m_MouseYRotateInvert)) bool  m_MouseYRotateInvert;

/// @brief Field m_MouseYRotateSensitivity, offset 0x198, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_MouseYRotateSensitivity, put=__cordl_internal_set_m_MouseYRotateSensitivity)) float_t  m_MouseYRotateSensitivity;

/// @brief Field m_MouseYTranslateSensitivity, offset 0x18c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_MouseYTranslateSensitivity, put=__cordl_internal_set_m_MouseYTranslateSensitivity)) float_t  m_MouseYTranslateSensitivity;

/// @brief Field m_NegateModeAction, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_NegateModeAction, put=__cordl_internal_set_m_NegateModeAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  m_NegateModeAction;

/// @brief Field m_Primary2DAxisClickAction, offset 0x130, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Primary2DAxisClickAction, put=__cordl_internal_set_m_Primary2DAxisClickAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  m_Primary2DAxisClickAction;

/// @brief Field m_Primary2DAxisClickInput, offset 0x231, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_Primary2DAxisClickInput, put=__cordl_internal_set_m_Primary2DAxisClickInput)) bool  m_Primary2DAxisClickInput;

/// @brief Field m_Primary2DAxisTouchAction, offset 0x140, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Primary2DAxisTouchAction, put=__cordl_internal_set_m_Primary2DAxisTouchAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  m_Primary2DAxisTouchAction;

/// @brief Field m_Primary2DAxisTouchInput, offset 0x233, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_Primary2DAxisTouchInput, put=__cordl_internal_set_m_Primary2DAxisTouchInput)) bool  m_Primary2DAxisTouchInput;

/// @brief Field m_PrimaryButtonAction, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PrimaryButtonAction, put=__cordl_internal_set_m_PrimaryButtonAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  m_PrimaryButtonAction;

/// @brief Field m_PrimaryButtonInput, offset 0x22e, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_PrimaryButtonInput, put=__cordl_internal_set_m_PrimaryButtonInput)) bool  m_PrimaryButtonInput;

/// @brief Field m_PrimaryTouchAction, offset 0x150, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PrimaryTouchAction, put=__cordl_internal_set_m_PrimaryTouchAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  m_PrimaryTouchAction;

/// @brief Field m_PrimaryTouchInput, offset 0x235, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_PrimaryTouchInput, put=__cordl_internal_set_m_PrimaryTouchInput)) bool  m_PrimaryTouchInput;

/// @brief Field m_ResetAction, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ResetAction, put=__cordl_internal_set_m_ResetAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  m_ResetAction;

/// @brief Field m_ResetInput, offset 0x218, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_ResetInput, put=__cordl_internal_set_m_ResetInput)) bool  m_ResetInput;

/// @brief Field m_RestingHandAxis2DAction, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_RestingHandAxis2DAction, put=__cordl_internal_set_m_RestingHandAxis2DAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  m_RestingHandAxis2DAction;

/// @brief Field m_RestingHandAxis2DInput, offset 0x224, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_RestingHandAxis2DInput, put=__cordl_internal_set_m_RestingHandAxis2DInput)) ::UnityEngine::Vector2  m_RestingHandAxis2DInput;

/// @brief Field m_RestingHandExpressionCapture, offset 0x3e8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_RestingHandExpressionCapture, put=__cordl_internal_set_m_RestingHandExpressionCapture)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionCapture>  m_RestingHandExpressionCapture;

/// @brief Field m_RightControllerEuler, offset 0x244, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_RightControllerEuler, put=__cordl_internal_set_m_RightControllerEuler)) ::UnityEngine::Vector3  m_RightControllerEuler;

/// @brief Field m_RightControllerIsTracked, offset 0x1c8, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_RightControllerIsTracked, put=__cordl_internal_set_m_RightControllerIsTracked)) bool  m_RightControllerIsTracked;

/// @brief Field m_RightControllerState, offset 0x314, size 0x3f 
 __declspec(property(get=__cordl_internal_get_m_RightControllerState, put=__cordl_internal_set_m_RightControllerState)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState  m_RightControllerState;

/// @brief Field m_RightControllerTrackingState, offset 0x1cc, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_RightControllerTrackingState, put=__cordl_internal_set_m_RightControllerTrackingState)) ::UnityEngine::XR::InputTrackingState  m_RightControllerTrackingState;

/// @brief Field m_RightHandIsTracked, offset 0x1d1, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_RightHandIsTracked, put=__cordl_internal_set_m_RightHandIsTracked)) bool  m_RightHandIsTracked;

/// @brief Field m_RightHandState, offset 0x398, size 0x40 
 __declspec(property(get=__cordl_internal_get_m_RightHandState, put=__cordl_internal_set_m_RightHandState)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::XRSimulatedHandState  m_RightHandState;

/// @brief Field m_RotateModeOverrideAction, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_RotateModeOverrideAction, put=__cordl_internal_set_m_RotateModeOverrideAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  m_RotateModeOverrideAction;

/// @brief Field m_RotateModeOverrideInput, offset 0x214, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_RotateModeOverrideInput, put=__cordl_internal_set_m_RotateModeOverrideInput)) bool  m_RotateModeOverrideInput;

/// @brief Field m_Secondary2DAxisClickAction, offset 0x138, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Secondary2DAxisClickAction, put=__cordl_internal_set_m_Secondary2DAxisClickAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  m_Secondary2DAxisClickAction;

/// @brief Field m_Secondary2DAxisClickInput, offset 0x232, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_Secondary2DAxisClickInput, put=__cordl_internal_set_m_Secondary2DAxisClickInput)) bool  m_Secondary2DAxisClickInput;

/// @brief Field m_Secondary2DAxisTouchAction, offset 0x148, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Secondary2DAxisTouchAction, put=__cordl_internal_set_m_Secondary2DAxisTouchAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  m_Secondary2DAxisTouchAction;

/// @brief Field m_Secondary2DAxisTouchInput, offset 0x234, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_Secondary2DAxisTouchInput, put=__cordl_internal_set_m_Secondary2DAxisTouchInput)) bool  m_Secondary2DAxisTouchInput;

/// @brief Field m_SecondaryButtonAction, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SecondaryButtonAction, put=__cordl_internal_set_m_SecondaryButtonAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  m_SecondaryButtonAction;

/// @brief Field m_SecondaryButtonInput, offset 0x22f, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_SecondaryButtonInput, put=__cordl_internal_set_m_SecondaryButtonInput)) bool  m_SecondaryButtonInput;

/// @brief Field m_SecondaryTouchAction, offset 0x158, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SecondaryTouchAction, put=__cordl_internal_set_m_SecondaryTouchAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  m_SecondaryTouchAction;

/// @brief Field m_SecondaryTouchInput, offset 0x236, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_SecondaryTouchInput, put=__cordl_internal_set_m_SecondaryTouchInput)) bool  m_SecondaryTouchInput;

/// @brief Field m_SimulatedHandExpressions, offset 0x3f0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SimulatedHandExpressions, put=__cordl_internal_set_m_SimulatedHandExpressions)) ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression*>*  m_SimulatedHandExpressions;

/// @brief Field m_StopManipulationAction, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_StopManipulationAction, put=__cordl_internal_set_m_StopManipulationAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  m_StopManipulationAction;

/// @brief Field m_TargetedDeviceInput, offset 0x1e0, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_TargetedDeviceInput, put=__cordl_internal_set_m_TargetedDeviceInput)) ::GlobalNamespace::XRDeviceSimulator_TargetedDevices  m_TargetedDeviceInput;

/// @brief Field m_ToggleCursorLockAction, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ToggleCursorLockAction, put=__cordl_internal_set_m_ToggleCursorLockAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  m_ToggleCursorLockAction;

/// @brief Field m_ToggleDevicePositionTargetAction, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ToggleDevicePositionTargetAction, put=__cordl_internal_set_m_ToggleDevicePositionTargetAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  m_ToggleDevicePositionTargetAction;

/// @brief Field m_ToggleManipulateBodyAction, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ToggleManipulateBodyAction, put=__cordl_internal_set_m_ToggleManipulateBodyAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  m_ToggleManipulateBodyAction;

/// @brief Field m_ToggleManipulateLeftAction, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ToggleManipulateLeftAction, put=__cordl_internal_set_m_ToggleManipulateLeftAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  m_ToggleManipulateLeftAction;

/// @brief Field m_ToggleManipulateRightAction, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ToggleManipulateRightAction, put=__cordl_internal_set_m_ToggleManipulateRightAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  m_ToggleManipulateRightAction;

/// @brief Field m_ToggleMouseTransformationModeAction, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ToggleMouseTransformationModeAction, put=__cordl_internal_set_m_ToggleMouseTransformationModeAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  m_ToggleMouseTransformationModeAction;

/// @brief Field m_TogglePrimary2DAxisTargetAction, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_TogglePrimary2DAxisTargetAction, put=__cordl_internal_set_m_TogglePrimary2DAxisTargetAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  m_TogglePrimary2DAxisTargetAction;

/// @brief Field m_ToggleSecondary2DAxisTargetAction, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ToggleSecondary2DAxisTargetAction, put=__cordl_internal_set_m_ToggleSecondary2DAxisTargetAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  m_ToggleSecondary2DAxisTargetAction;

/// @brief Field m_TriggerAction, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_TriggerAction, put=__cordl_internal_set_m_TriggerAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  m_TriggerAction;

/// @brief Field m_TriggerAmount, offset 0x1b4, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_TriggerAmount, put=__cordl_internal_set_m_TriggerAmount)) float_t  m_TriggerAmount;

/// @brief Field m_TriggerInput, offset 0x22d, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_TriggerInput, put=__cordl_internal_set_m_TriggerInput)) bool  m_TriggerInput;

/// @brief Field m_XConstraintAction, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_XConstraintAction, put=__cordl_internal_set_m_XConstraintAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  m_XConstraintAction;

/// @brief Field m_XConstraintInput, offset 0x215, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_XConstraintInput, put=__cordl_internal_set_m_XConstraintInput)) bool  m_XConstraintInput;

/// @brief Field m_YConstraintAction, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_YConstraintAction, put=__cordl_internal_set_m_YConstraintAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  m_YConstraintAction;

/// @brief Field m_YConstraintInput, offset 0x216, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_YConstraintInput, put=__cordl_internal_set_m_YConstraintInput)) bool  m_YConstraintInput;

/// @brief Field m_ZConstraintAction, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ZConstraintAction, put=__cordl_internal_set_m_ZConstraintAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  m_ZConstraintAction;

/// @brief Field m_ZConstraintInput, offset 0x217, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_ZConstraintInput, put=__cordl_internal_set_m_ZConstraintInput)) bool  m_ZConstraintInput;

 __declspec(property(get=get_manipulateHeadAction, put=set_manipulateHeadAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  manipulateHeadAction;

 __declspec(property(get=get_manipulateLeftAction, put=set_manipulateLeftAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  manipulateLeftAction;

 __declspec(property(get=get_manipulateRightAction, put=set_manipulateRightAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  manipulateRightAction;

 __declspec(property(get=get_manipulatingFPS)) bool  manipulatingFPS;

 __declspec(property(get=get_manipulatingLeftController)) bool  manipulatingLeftController;

 __declspec(property(get=get_manipulatingLeftDevice)) bool  manipulatingLeftDevice;

 __declspec(property(get=get_manipulatingLeftHand)) bool  manipulatingLeftHand;

 __declspec(property(get=get_manipulatingRightController)) bool  manipulatingRightController;

 __declspec(property(get=get_manipulatingRightDevice)) bool  manipulatingRightDevice;

 __declspec(property(get=get_manipulatingRightHand)) bool  manipulatingRightHand;

 __declspec(property(get=get_menuAction, put=set_menuAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  menuAction;

 __declspec(property(get=get_mouseDeltaAction, put=set_mouseDeltaAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  mouseDeltaAction;

 __declspec(property(get=get_mouseScrollAction, put=set_mouseScrollAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  mouseScrollAction;

 __declspec(property(get=get_mouseScrollRotateSensitivity, put=set_mouseScrollRotateSensitivity)) float_t  mouseScrollRotateSensitivity;

 __declspec(property(get=get_mouseScrollTranslateSensitivity, put=set_mouseScrollTranslateSensitivity)) float_t  mouseScrollTranslateSensitivity;

 __declspec(property(get=get_mouseTransformationMode, put=set_mouseTransformationMode)) ::GlobalNamespace::XRDeviceSimulator_TransformationMode  mouseTransformationMode;

 __declspec(property(get=get_mouseTranslateSpace, put=set_mouseTranslateSpace)) ::GlobalNamespace::XRDeviceSimulator_Space  mouseTranslateSpace;

 __declspec(property(get=get_mouseXRotateSensitivity, put=set_mouseXRotateSensitivity)) float_t  mouseXRotateSensitivity;

 __declspec(property(get=get_mouseXTranslateSensitivity, put=set_mouseXTranslateSensitivity)) float_t  mouseXTranslateSensitivity;

 __declspec(property(get=get_mouseYRotateInvert, put=set_mouseYRotateInvert)) bool  mouseYRotateInvert;

 __declspec(property(get=get_mouseYRotateSensitivity, put=set_mouseYRotateSensitivity)) float_t  mouseYRotateSensitivity;

 __declspec(property(get=get_mouseYTranslateSensitivity, put=set_mouseYTranslateSensitivity)) float_t  mouseYTranslateSensitivity;

 __declspec(property(get=get_negateMode, put=set_negateMode)) bool  negateMode;

 __declspec(property(get=get_negateModeAction, put=set_negateModeAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  negateModeAction;

 __declspec(property(get=get_primary2DAxisClickAction, put=set_primary2DAxisClickAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  primary2DAxisClickAction;

 __declspec(property(get=get_primary2DAxisTouchAction, put=set_primary2DAxisTouchAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  primary2DAxisTouchAction;

 __declspec(property(get=get_primaryButtonAction, put=set_primaryButtonAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  primaryButtonAction;

 __declspec(property(get=get_primaryTouchAction, put=set_primaryTouchAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  primaryTouchAction;

/// @brief [Obsolete("removeOtherHMDDevices has been deprecated in XRI 3.1.0. Use removeOtherHMDDevices in the SimulatedDeviceLifecycleManager instead.")]
 __declspec(property(get=get_removeOtherHMDDevices, put=set_removeOtherHMDDevices)) bool  removeOtherHMDDevices;

 __declspec(property(get=get_resetAction, put=set_resetAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  resetAction;

 __declspec(property(get=get_restingHandAxis2DAction, put=set_restingHandAxis2DAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  restingHandAxis2DAction;

 __declspec(property(get=get_rightControllerIsTracked, put=set_rightControllerIsTracked)) bool  rightControllerIsTracked;

 __declspec(property(get=get_rightControllerTrackingState, put=set_rightControllerTrackingState)) ::UnityEngine::XR::InputTrackingState  rightControllerTrackingState;

 __declspec(property(get=get_rightHandIsTracked, put=set_rightHandIsTracked)) bool  rightHandIsTracked;

 __declspec(property(get=get_rotateModeOverrideAction, put=set_rotateModeOverrideAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  rotateModeOverrideAction;

 __declspec(property(get=get_secondary2DAxisClickAction, put=set_secondary2DAxisClickAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  secondary2DAxisClickAction;

 __declspec(property(get=get_secondary2DAxisTouchAction, put=set_secondary2DAxisTouchAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  secondary2DAxisTouchAction;

 __declspec(property(get=get_secondaryButtonAction, put=set_secondaryButtonAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  secondaryButtonAction;

 __declspec(property(get=get_secondaryTouchAction, put=set_secondaryTouchAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  secondaryTouchAction;

/// @brief [Obsolete("simulatedHandExpressions has been deprecated in XRI 3.1.0. Update the XR Device Simulator sample in Package Manager or use simulatedHandExpressions in the SimulatedHandExpressionManager instead.")]
 __declspec(property(get=get_simulatedHandExpressions)) ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression*>*  simulatedHandExpressions;

 __declspec(property(get=get_stopManipulationAction, put=set_stopManipulationAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  stopManipulationAction;

 __declspec(property(get=get_targetedDeviceInput, put=set_targetedDeviceInput)) ::GlobalNamespace::XRDeviceSimulator_TargetedDevices  targetedDeviceInput;

 __declspec(property(get=get_toggleCursorLockAction, put=set_toggleCursorLockAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  toggleCursorLockAction;

 __declspec(property(get=get_toggleDevicePositionTargetAction, put=set_toggleDevicePositionTargetAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  toggleDevicePositionTargetAction;

 __declspec(property(get=get_toggleManipulateBodyAction, put=set_toggleManipulateBodyAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  toggleManipulateBodyAction;

 __declspec(property(get=get_toggleManipulateLeftAction, put=set_toggleManipulateLeftAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  toggleManipulateLeftAction;

 __declspec(property(get=get_toggleManipulateRightAction, put=set_toggleManipulateRightAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  toggleManipulateRightAction;

 __declspec(property(get=get_toggleMouseTransformationModeAction, put=set_toggleMouseTransformationModeAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  toggleMouseTransformationModeAction;

 __declspec(property(get=get_togglePrimary2DAxisTargetAction, put=set_togglePrimary2DAxisTargetAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  togglePrimary2DAxisTargetAction;

 __declspec(property(get=get_toggleSecondary2DAxisTargetAction, put=set_toggleSecondary2DAxisTargetAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  toggleSecondary2DAxisTargetAction;

 __declspec(property(get=get_triggerAction, put=set_triggerAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  triggerAction;

 __declspec(property(get=get_triggerAmount, put=set_triggerAmount)) float_t  triggerAmount;

 __declspec(property(get=get_xConstraintAction, put=set_xConstraintAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  xConstraintAction;

 __declspec(property(get=get_yConstraintAction, put=set_yConstraintAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  yConstraintAction;

 __declspec(property(get=get_zConstraintAction, put=set_zConstraintAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  zConstraintAction;

/// [Obsolete("AddDevices has been deprecated in XRI 3.1.0 and will be removed in a future release. It has instead been moved to the SimulatedDeviceLifecycleManager.", false)]
/// @brief Method AddDevices, addr 0xb4c197c, size 0xcc, virtual true, abstract: false, final false
inline void AddDevices() ;

/// @brief Method Awake, addr 0xb4bdf7c, size 0x920, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method GetResetScale, addr 0xb4c07ac, size 0x9c, virtual false, abstract: false, final false
inline ::UnityEngine::Vector3 GetResetScale() ;

/// [Obsolete("InitializeHandExpressions has been deprecated in XRI 3.1.0 and moved to SimulatedHandExpressionManager.")]
/// @brief Method InitializeHandExpressions, addr 0xb4bed88, size 0x4, virtual false, abstract: false, final false
inline void InitializeHandExpressions() ;

/// @brief Method Negate, addr 0xb4c0d88, size 0xc, virtual false, abstract: false, final false
static inline ::GlobalNamespace::XRDeviceSimulator_TransformationMode Negate(::GlobalNamespace::XRDeviceSimulator_TransformationMode  mode) ;

/// @brief Method Negate, addr 0xb4c0d94, size 0x14, virtual false, abstract: false, final false
inline ::UnityEngine::CursorLockMode Negate(::UnityEngine::CursorLockMode  mode) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator* New_ctor() ;

/// @brief Method OnAxis2DCanceled, addr 0xb4c147c, size 0x54, virtual false, abstract: false, final false
inline void OnAxis2DCanceled(::GlobalNamespace::InputAction_CallbackContext  context) ;

/// @brief Method OnAxis2DPerformed, addr 0xb4c13a8, size 0xd4, virtual false, abstract: false, final false
inline void OnAxis2DPerformed(::GlobalNamespace::InputAction_CallbackContext  context) ;

/// @brief Method OnCycleDevicesPerformed, addr 0xb4c10c4, size 0x5c, virtual false, abstract: false, final false
inline void OnCycleDevicesPerformed(::GlobalNamespace::InputAction_CallbackContext  context) ;

/// @brief Method OnDestroy, addr 0xb4beca8, size 0xdc, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0xb4beabc, size 0x1ec, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xb4be89c, size 0x220, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnGripCanceled, addr 0xb4c1604, size 0x8, virtual false, abstract: false, final false
inline void OnGripCanceled(::GlobalNamespace::InputAction_CallbackContext  context) ;

/// @brief Method OnGripPerformed, addr 0xb4c15f8, size 0xc, virtual false, abstract: false, final false
inline void OnGripPerformed(::GlobalNamespace::InputAction_CallbackContext  context) ;

/// @brief Method OnHandControllerModePerformed, addr 0xb4c1050, size 0x74, virtual false, abstract: false, final false
inline void OnHandControllerModePerformed(::GlobalNamespace::InputAction_CallbackContext  context) ;

/// @brief Method OnKeyboardXTranslateCanceled, addr 0xb4c0e04, size 0x8, virtual false, abstract: false, final false
inline void OnKeyboardXTranslateCanceled(::GlobalNamespace::InputAction_CallbackContext  context) ;

/// @brief Method OnKeyboardXTranslatePerformed, addr 0xb4c0da8, size 0x5c, virtual false, abstract: false, final false
inline void OnKeyboardXTranslatePerformed(::GlobalNamespace::InputAction_CallbackContext  context) ;

/// @brief Method OnKeyboardYTranslateCanceled, addr 0xb4c0e68, size 0x8, virtual false, abstract: false, final false
inline void OnKeyboardYTranslateCanceled(::GlobalNamespace::InputAction_CallbackContext  context) ;

/// @brief Method OnKeyboardYTranslatePerformed, addr 0xb4c0e0c, size 0x5c, virtual false, abstract: false, final false
inline void OnKeyboardYTranslatePerformed(::GlobalNamespace::InputAction_CallbackContext  context) ;

/// @brief Method OnKeyboardZTranslateCanceled, addr 0xb4c0ecc, size 0x8, virtual false, abstract: false, final false
inline void OnKeyboardZTranslateCanceled(::GlobalNamespace::InputAction_CallbackContext  context) ;

/// @brief Method OnKeyboardZTranslatePerformed, addr 0xb4c0e70, size 0x5c, virtual false, abstract: false, final false
inline void OnKeyboardZTranslatePerformed(::GlobalNamespace::InputAction_CallbackContext  context) ;

/// @brief Method OnManipulateHeadCanceled, addr 0xb4c102c, size 0x24, virtual false, abstract: false, final false
inline void OnManipulateHeadCanceled(::GlobalNamespace::InputAction_CallbackContext  context) ;

/// @brief Method OnManipulateHeadPerformed, addr 0xb4c1008, size 0x24, virtual false, abstract: false, final false
inline void OnManipulateHeadPerformed(::GlobalNamespace::InputAction_CallbackContext  context) ;

/// @brief Method OnManipulateLeftCanceled, addr 0xb4c0ef8, size 0x24, virtual false, abstract: false, final false
inline void OnManipulateLeftCanceled(::GlobalNamespace::InputAction_CallbackContext  context) ;

/// @brief Method OnManipulateLeftPerformed, addr 0xb4c0ed4, size 0x24, virtual false, abstract: false, final false
inline void OnManipulateLeftPerformed(::GlobalNamespace::InputAction_CallbackContext  context) ;

/// @brief Method OnManipulateRightCanceled, addr 0xb4c0f40, size 0x24, virtual false, abstract: false, final false
inline void OnManipulateRightCanceled(::GlobalNamespace::InputAction_CallbackContext  context) ;

/// @brief Method OnManipulateRightPerformed, addr 0xb4c0f1c, size 0x24, virtual false, abstract: false, final false
inline void OnManipulateRightPerformed(::GlobalNamespace::InputAction_CallbackContext  context) ;

/// @brief Method OnMenuCanceled, addr 0xb4c1654, size 0x8, virtual false, abstract: false, final false
inline void OnMenuCanceled(::GlobalNamespace::InputAction_CallbackContext  context) ;

/// @brief Method OnMenuPerformed, addr 0xb4c1648, size 0xc, virtual false, abstract: false, final false
inline void OnMenuPerformed(::GlobalNamespace::InputAction_CallbackContext  context) ;

/// @brief Method OnMouseDeltaCanceled, addr 0xb4c1188, size 0x54, virtual false, abstract: false, final false
inline void OnMouseDeltaCanceled(::GlobalNamespace::InputAction_CallbackContext  context) ;

/// @brief Method OnMouseDeltaPerformed, addr 0xb4c1128, size 0x60, virtual false, abstract: false, final false
inline void OnMouseDeltaPerformed(::GlobalNamespace::InputAction_CallbackContext  context) ;

/// @brief Method OnMouseScrollCanceled, addr 0xb4c123c, size 0x54, virtual false, abstract: false, final false
inline void OnMouseScrollCanceled(::GlobalNamespace::InputAction_CallbackContext  context) ;

/// @brief Method OnMouseScrollPerformed, addr 0xb4c11dc, size 0x60, virtual false, abstract: false, final false
inline void OnMouseScrollPerformed(::GlobalNamespace::InputAction_CallbackContext  context) ;

/// @brief Method OnNegateModeCanceled, addr 0xb4c12c4, size 0x8, virtual false, abstract: false, final false
inline void OnNegateModeCanceled(::GlobalNamespace::InputAction_CallbackContext  context) ;

/// @brief Method OnNegateModePerformed, addr 0xb4c12b8, size 0xc, virtual false, abstract: false, final false
inline void OnNegateModePerformed(::GlobalNamespace::InputAction_CallbackContext  context) ;

/// @brief Method OnPrimary2DAxisClickCanceled, addr 0xb4c1668, size 0x8, virtual false, abstract: false, final false
inline void OnPrimary2DAxisClickCanceled(::GlobalNamespace::InputAction_CallbackContext  context) ;

/// @brief Method OnPrimary2DAxisClickPerformed, addr 0xb4c165c, size 0xc, virtual false, abstract: false, final false
inline void OnPrimary2DAxisClickPerformed(::GlobalNamespace::InputAction_CallbackContext  context) ;

/// @brief Method OnPrimary2DAxisTouchCanceled, addr 0xb4c1690, size 0x8, virtual false, abstract: false, final false
inline void OnPrimary2DAxisTouchCanceled(::GlobalNamespace::InputAction_CallbackContext  context) ;

/// @brief Method OnPrimary2DAxisTouchPerformed, addr 0xb4c1684, size 0xc, virtual false, abstract: false, final false
inline void OnPrimary2DAxisTouchPerformed(::GlobalNamespace::InputAction_CallbackContext  context) ;

/// @brief Method OnPrimaryButtonCanceled, addr 0xb4c162c, size 0x8, virtual false, abstract: false, final false
inline void OnPrimaryButtonCanceled(::GlobalNamespace::InputAction_CallbackContext  context) ;

/// @brief Method OnPrimaryButtonPerformed, addr 0xb4c1620, size 0xc, virtual false, abstract: false, final false
inline void OnPrimaryButtonPerformed(::GlobalNamespace::InputAction_CallbackContext  context) ;

/// @brief Method OnPrimaryTouchCanceled, addr 0xb4c16b8, size 0x8, virtual false, abstract: false, final false
inline void OnPrimaryTouchCanceled(::GlobalNamespace::InputAction_CallbackContext  context) ;

/// @brief Method OnPrimaryTouchPerformed, addr 0xb4c16ac, size 0xc, virtual false, abstract: false, final false
inline void OnPrimaryTouchPerformed(::GlobalNamespace::InputAction_CallbackContext  context) ;

/// @brief Method OnResetCanceled, addr 0xb4c1314, size 0x8, virtual false, abstract: false, final false
inline void OnResetCanceled(::GlobalNamespace::InputAction_CallbackContext  context) ;

/// @brief Method OnResetPerformed, addr 0xb4c1308, size 0xc, virtual false, abstract: false, final false
inline void OnResetPerformed(::GlobalNamespace::InputAction_CallbackContext  context) ;

/// @brief Method OnRestingHandAxis2DCanceled, addr 0xb4c15a4, size 0x54, virtual false, abstract: false, final false
inline void OnRestingHandAxis2DCanceled(::GlobalNamespace::InputAction_CallbackContext  context) ;

/// @brief Method OnRestingHandAxis2DPerformed, addr 0xb4c14d0, size 0xd4, virtual false, abstract: false, final false
inline void OnRestingHandAxis2DPerformed(::GlobalNamespace::InputAction_CallbackContext  context) ;

/// @brief Method OnRotateModeOverrideCanceled, addr 0xb4c129c, size 0x8, virtual false, abstract: false, final false
inline void OnRotateModeOverrideCanceled(::GlobalNamespace::InputAction_CallbackContext  context) ;

/// @brief Method OnRotateModeOverridePerformed, addr 0xb4c1290, size 0xc, virtual false, abstract: false, final false
inline void OnRotateModeOverridePerformed(::GlobalNamespace::InputAction_CallbackContext  context) ;

/// @brief Method OnSecondary2DAxisClickCanceled, addr 0xb4c167c, size 0x8, virtual false, abstract: false, final false
inline void OnSecondary2DAxisClickCanceled(::GlobalNamespace::InputAction_CallbackContext  context) ;

/// @brief Method OnSecondary2DAxisClickPerformed, addr 0xb4c1670, size 0xc, virtual false, abstract: false, final false
inline void OnSecondary2DAxisClickPerformed(::GlobalNamespace::InputAction_CallbackContext  context) ;

/// @brief Method OnSecondary2DAxisTouchCanceled, addr 0xb4c16a4, size 0x8, virtual false, abstract: false, final false
inline void OnSecondary2DAxisTouchCanceled(::GlobalNamespace::InputAction_CallbackContext  context) ;

/// @brief Method OnSecondary2DAxisTouchPerformed, addr 0xb4c1698, size 0xc, virtual false, abstract: false, final false
inline void OnSecondary2DAxisTouchPerformed(::GlobalNamespace::InputAction_CallbackContext  context) ;

/// @brief Method OnSecondaryButtonCanceled, addr 0xb4c1640, size 0x8, virtual false, abstract: false, final false
inline void OnSecondaryButtonCanceled(::GlobalNamespace::InputAction_CallbackContext  context) ;

/// @brief Method OnSecondaryButtonPerformed, addr 0xb4c1634, size 0xc, virtual false, abstract: false, final false
inline void OnSecondaryButtonPerformed(::GlobalNamespace::InputAction_CallbackContext  context) ;

/// @brief Method OnSecondaryTouchCanceled, addr 0xb4c16cc, size 0x8, virtual false, abstract: false, final false
inline void OnSecondaryTouchCanceled(::GlobalNamespace::InputAction_CallbackContext  context) ;

/// @brief Method OnSecondaryTouchPerformed, addr 0xb4c16c0, size 0xc, virtual false, abstract: false, final false
inline void OnSecondaryTouchPerformed(::GlobalNamespace::InputAction_CallbackContext  context) ;

/// @brief Method OnStopManipulationPerformed, addr 0xb4c1120, size 0x8, virtual false, abstract: false, final false
inline void OnStopManipulationPerformed(::GlobalNamespace::InputAction_CallbackContext  context) ;

/// @brief Method OnToggleCursorLockPerformed, addr 0xb4c131c, size 0x2c, virtual false, abstract: false, final false
inline void OnToggleCursorLockPerformed(::GlobalNamespace::InputAction_CallbackContext  context) ;

/// @brief Method OnToggleDevicePositionTargetPerformed, addr 0xb4c1348, size 0x20, virtual false, abstract: false, final false
inline void OnToggleDevicePositionTargetPerformed(::GlobalNamespace::InputAction_CallbackContext  context) ;

/// @brief Method OnToggleManipulateBodyPerformed, addr 0xb4c0ffc, size 0xc, virtual false, abstract: false, final false
inline void OnToggleManipulateBodyPerformed(::GlobalNamespace::InputAction_CallbackContext  context) ;

/// @brief Method OnToggleManipulateLeftPerformed, addr 0xb4c0f64, size 0x4c, virtual false, abstract: false, final false
inline void OnToggleManipulateLeftPerformed(::GlobalNamespace::InputAction_CallbackContext  context) ;

/// @brief Method OnToggleManipulateRightPerformed, addr 0xb4c0fb0, size 0x4c, virtual false, abstract: false, final false
inline void OnToggleManipulateRightPerformed(::GlobalNamespace::InputAction_CallbackContext  context) ;

/// @brief Method OnToggleMouseTransformationModePerformed, addr 0xb4c12a4, size 0x14, virtual false, abstract: false, final false
inline void OnToggleMouseTransformationModePerformed(::GlobalNamespace::InputAction_CallbackContext  context) ;

/// @brief Method OnTogglePrimary2DAxisTargetPerformed, addr 0xb4c1368, size 0x20, virtual false, abstract: false, final false
inline void OnTogglePrimary2DAxisTargetPerformed(::GlobalNamespace::InputAction_CallbackContext  context) ;

/// @brief Method OnToggleSecondary2DAxisTargetPerformed, addr 0xb4c1388, size 0x20, virtual false, abstract: false, final false
inline void OnToggleSecondary2DAxisTargetPerformed(::GlobalNamespace::InputAction_CallbackContext  context) ;

/// @brief Method OnTriggerCanceled, addr 0xb4c1618, size 0x8, virtual false, abstract: false, final false
inline void OnTriggerCanceled(::GlobalNamespace::InputAction_CallbackContext  context) ;

/// @brief Method OnTriggerPerformed, addr 0xb4c160c, size 0xc, virtual false, abstract: false, final false
inline void OnTriggerPerformed(::GlobalNamespace::InputAction_CallbackContext  context) ;

/// @brief Method OnXConstraintCanceled, addr 0xb4c12d8, size 0x8, virtual false, abstract: false, final false
inline void OnXConstraintCanceled(::GlobalNamespace::InputAction_CallbackContext  context) ;

/// @brief Method OnXConstraintPerformed, addr 0xb4c12cc, size 0xc, virtual false, abstract: false, final false
inline void OnXConstraintPerformed(::GlobalNamespace::InputAction_CallbackContext  context) ;

/// @brief Method OnYConstraintCanceled, addr 0xb4c12ec, size 0x8, virtual false, abstract: false, final false
inline void OnYConstraintCanceled(::GlobalNamespace::InputAction_CallbackContext  context) ;

/// @brief Method OnYConstraintPerformed, addr 0xb4c12e0, size 0xc, virtual false, abstract: false, final false
inline void OnYConstraintPerformed(::GlobalNamespace::InputAction_CallbackContext  context) ;

/// @brief Method OnZConstraintCanceled, addr 0xb4c1300, size 0x8, virtual false, abstract: false, final false
inline void OnZConstraintCanceled(::GlobalNamespace::InputAction_CallbackContext  context) ;

/// @brief Method OnZConstraintPerformed, addr 0xb4c12f4, size 0xc, virtual false, abstract: false, final false
inline void OnZConstraintPerformed(::GlobalNamespace::InputAction_CallbackContext  context) ;

/// @brief Method ProcessAnalogButtonControlInput, addr 0xb4c0d34, size 0x54, virtual true, abstract: false, final false
inline void ProcessAnalogButtonControlInput(::by_ref<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState>  controllerState) ;

/// @brief Method ProcessAxis2DControlInput, addr 0xb4c0900, size 0x2b8, virtual true, abstract: false, final false
inline void ProcessAxis2DControlInput() ;

/// @brief Method ProcessButtonControlInput, addr 0xb4c0bb8, size 0x17c, virtual true, abstract: false, final false
inline void ProcessButtonControlInput(::by_ref<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState>  controllerState) ;

/// @brief Method ProcessControlInput, addr 0xb4c0848, size 0xb4, virtual true, abstract: false, final false
inline void ProcessControlInput() ;

/// @brief Method ProcessHandExpressionInput, addr 0xb4bee70, size 0x4, virtual false, abstract: false, final false
inline void ProcessHandExpressionInput() ;

/// @brief Method ProcessPoseInput, addr 0xb4bee74, size 0x1938, virtual true, abstract: false, final false
inline void ProcessPoseInput() ;

/// [Obsolete("RemoveDevices has been deprecated in XRI 3.1.0 and will be removed in a future release. It has instead been moved to the SimulatedDeviceLifecycleManager.", false)]
/// @brief Method RemoveDevices, addr 0xb4c1a48, size 0xcc, virtual true, abstract: false, final false
inline void RemoveDevices() ;

/// @brief Method Start, addr 0xb4bed84, size 0x4, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method SubscribeAxis2DAction, addr 0xb4bc264, size 0xe8, virtual false, abstract: false, final false
inline void SubscribeAxis2DAction() ;

/// @brief Method SubscribeCycleDevicesAction, addr 0xb4ba688, size 0xb0, virtual false, abstract: false, final false
inline void SubscribeCycleDevicesAction() ;

/// @brief Method SubscribeGripAction, addr 0xb4bc67c, size 0xe8, virtual false, abstract: false, final false
inline void SubscribeGripAction() ;

/// @brief Method SubscribeHandControllerModeAction, addr 0xb4ba4ec, size 0xb0, virtual false, abstract: false, final false
inline void SubscribeHandControllerModeAction() ;

/// @brief Method SubscribeKeyboardXTranslateAction, addr 0xb4b9408, size 0xe8, virtual false, abstract: false, final false
inline void SubscribeKeyboardXTranslateAction() ;

/// @brief Method SubscribeKeyboardYTranslateAction, addr 0xb4b9614, size 0xe8, virtual false, abstract: false, final false
inline void SubscribeKeyboardYTranslateAction() ;

/// @brief Method SubscribeKeyboardZTranslateAction, addr 0xb4b9820, size 0xe8, virtual false, abstract: false, final false
inline void SubscribeKeyboardZTranslateAction() ;

/// @brief Method SubscribeManipulateHeadAction, addr 0xb4ba318, size 0xe8, virtual false, abstract: false, final false
inline void SubscribeManipulateHeadAction() ;

/// @brief Method SubscribeManipulateLeftAction, addr 0xb4b9a2c, size 0xe8, virtual false, abstract: false, final false
inline void SubscribeManipulateLeftAction() ;

/// @brief Method SubscribeManipulateRightAction, addr 0xb4b9c38, size 0xe8, virtual false, abstract: false, final false
inline void SubscribeManipulateRightAction() ;

/// @brief Method SubscribeMenuAction, addr 0xb4bceac, size 0xe8, virtual false, abstract: false, final false
inline void SubscribeMenuAction() ;

/// @brief Method SubscribeMouseDeltaAction, addr 0xb4ba9f8, size 0xe8, virtual false, abstract: false, final false
inline void SubscribeMouseDeltaAction() ;

/// @brief Method SubscribeMouseScrollAction, addr 0xb4bac04, size 0xe8, virtual false, abstract: false, final false
inline void SubscribeMouseScrollAction() ;

/// @brief Method SubscribeNegateModeAction, addr 0xb4bb1b8, size 0xe8, virtual false, abstract: false, final false
inline void SubscribeNegateModeAction() ;

/// @brief Method SubscribePrimary2DAxisClickAction, addr 0xb4bd0b8, size 0xe8, virtual false, abstract: false, final false
inline void SubscribePrimary2DAxisClickAction() ;

/// @brief Method SubscribePrimary2DAxisTouchAction, addr 0xb4bd4d0, size 0xe8, virtual false, abstract: false, final false
inline void SubscribePrimary2DAxisTouchAction() ;

/// @brief Method SubscribePrimaryButtonAction, addr 0xb4bca94, size 0xe8, virtual false, abstract: false, final false
inline void SubscribePrimaryButtonAction() ;

/// @brief Method SubscribePrimaryTouchAction, addr 0xb4bd8e8, size 0xe8, virtual false, abstract: false, final false
inline void SubscribePrimaryTouchAction() ;

/// @brief Method SubscribeResetAction, addr 0xb4bb9e8, size 0xe8, virtual false, abstract: false, final false
inline void SubscribeResetAction() ;

/// @brief Method SubscribeRestingHandAxis2DAction, addr 0xb4bc470, size 0xe8, virtual false, abstract: false, final false
inline void SubscribeRestingHandAxis2DAction() ;

/// @brief Method SubscribeRotateModeOverrideAction, addr 0xb4bae10, size 0xe8, virtual false, abstract: false, final false
inline void SubscribeRotateModeOverrideAction() ;

/// @brief Method SubscribeSecondary2DAxisClickAction, addr 0xb4bd2c4, size 0xe8, virtual false, abstract: false, final false
inline void SubscribeSecondary2DAxisClickAction() ;

/// @brief Method SubscribeSecondary2DAxisTouchAction, addr 0xb4bd6dc, size 0xe8, virtual false, abstract: false, final false
inline void SubscribeSecondary2DAxisTouchAction() ;

/// @brief Method SubscribeSecondaryButtonAction, addr 0xb4bcca0, size 0xe8, virtual false, abstract: false, final false
inline void SubscribeSecondaryButtonAction() ;

/// @brief Method SubscribeSecondaryTouchAction, addr 0xb4bdaf4, size 0xe8, virtual false, abstract: false, final false
inline void SubscribeSecondaryTouchAction() ;

/// @brief Method SubscribeStopManipulationAction, addr 0xb4ba824, size 0xb0, virtual false, abstract: false, final false
inline void SubscribeStopManipulationAction() ;

/// @brief Method SubscribeToggleCursorLockAction, addr 0xb4bbbbc, size 0xb0, virtual false, abstract: false, final false
inline void SubscribeToggleCursorLockAction() ;

/// @brief Method SubscribeToggleDevicePositionTargetAction, addr 0xb4bbd58, size 0xb0, virtual false, abstract: false, final false
inline void SubscribeToggleDevicePositionTargetAction() ;

/// @brief Method SubscribeToggleManipulateBodyAction, addr 0xb4ba144, size 0xb0, virtual false, abstract: false, final false
inline void SubscribeToggleManipulateBodyAction() ;

/// @brief Method SubscribeToggleManipulateLeftAction, addr 0xb4b9e0c, size 0xb0, virtual false, abstract: false, final false
inline void SubscribeToggleManipulateLeftAction() ;

/// @brief Method SubscribeToggleManipulateRightAction, addr 0xb4b9fa8, size 0xb0, virtual false, abstract: false, final false
inline void SubscribeToggleManipulateRightAction() ;

/// @brief Method SubscribeToggleMouseTransformationModeAction, addr 0xb4bafe4, size 0xb0, virtual false, abstract: false, final false
inline void SubscribeToggleMouseTransformationModeAction() ;

/// @brief Method SubscribeTogglePrimary2DAxisTargetAction, addr 0xb4bbef4, size 0xb0, virtual false, abstract: false, final false
inline void SubscribeTogglePrimary2DAxisTargetAction() ;

/// @brief Method SubscribeToggleSecondary2DAxisTargetAction, addr 0xb4bc090, size 0xb0, virtual false, abstract: false, final false
inline void SubscribeToggleSecondary2DAxisTargetAction() ;

/// @brief Method SubscribeTriggerAction, addr 0xb4bc888, size 0xe8, virtual false, abstract: false, final false
inline void SubscribeTriggerAction() ;

/// @brief Method SubscribeXConstraintAction, addr 0xb4bb3c4, size 0xe8, virtual false, abstract: false, final false
inline void SubscribeXConstraintAction() ;

/// @brief Method SubscribeYConstraintAction, addr 0xb4bb5d0, size 0xe8, virtual false, abstract: false, final false
inline void SubscribeYConstraintAction() ;

/// @brief Method SubscribeZConstraintAction, addr 0xb4bb7dc, size 0xe8, virtual false, abstract: false, final false
inline void SubscribeZConstraintAction() ;

/// @brief Method ToggleHandExpression, addr 0xb4c08fc, size 0x4, virtual false, abstract: false, final false
inline void ToggleHandExpression(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpression*  simulatedExpression) ;

/// [Obsolete("ToggleHandExpressionDeprecated has been deprecated in XRI 3.1.0 and replaced with ToggleHandExpression.")]
/// @brief Method ToggleHandExpressionDeprecated, addr 0xb4c1b14, size 0x4, virtual false, abstract: false, final false
inline void ToggleHandExpressionDeprecated(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression*  simulatedExpression) ;

/// @brief Method UnsubscribeAxis2DAction, addr 0xb4bc17c, size 0xe8, virtual false, abstract: false, final false
inline void UnsubscribeAxis2DAction() ;

/// @brief Method UnsubscribeCycleDevicesAction, addr 0xb4ba5d8, size 0xb0, virtual false, abstract: false, final false
inline void UnsubscribeCycleDevicesAction() ;

/// @brief Method UnsubscribeGripAction, addr 0xb4bc594, size 0xe8, virtual false, abstract: false, final false
inline void UnsubscribeGripAction() ;

/// @brief Method UnsubscribeHandControllerModeAction, addr 0xb4ba43c, size 0xb0, virtual false, abstract: false, final false
inline void UnsubscribeHandControllerModeAction() ;

/// @brief Method UnsubscribeKeyboardXTranslateAction, addr 0xb4b9320, size 0xe8, virtual false, abstract: false, final false
inline void UnsubscribeKeyboardXTranslateAction() ;

/// @brief Method UnsubscribeKeyboardYTranslateAction, addr 0xb4b952c, size 0xe8, virtual false, abstract: false, final false
inline void UnsubscribeKeyboardYTranslateAction() ;

/// @brief Method UnsubscribeKeyboardZTranslateAction, addr 0xb4b9738, size 0xe8, virtual false, abstract: false, final false
inline void UnsubscribeKeyboardZTranslateAction() ;

/// @brief Method UnsubscribeManipulateHeadAction, addr 0xb4ba230, size 0xe8, virtual false, abstract: false, final false
inline void UnsubscribeManipulateHeadAction() ;

/// @brief Method UnsubscribeManipulateLeftAction, addr 0xb4b9944, size 0xe8, virtual false, abstract: false, final false
inline void UnsubscribeManipulateLeftAction() ;

/// @brief Method UnsubscribeManipulateRightAction, addr 0xb4b9b50, size 0xe8, virtual false, abstract: false, final false
inline void UnsubscribeManipulateRightAction() ;

/// @brief Method UnsubscribeMenuAction, addr 0xb4bcdc4, size 0xe8, virtual false, abstract: false, final false
inline void UnsubscribeMenuAction() ;

/// @brief Method UnsubscribeMouseDeltaAction, addr 0xb4ba910, size 0xe8, virtual false, abstract: false, final false
inline void UnsubscribeMouseDeltaAction() ;

/// @brief Method UnsubscribeMouseScrollAction, addr 0xb4bab1c, size 0xe8, virtual false, abstract: false, final false
inline void UnsubscribeMouseScrollAction() ;

/// @brief Method UnsubscribeNegateModeAction, addr 0xb4bb0d0, size 0xe8, virtual false, abstract: false, final false
inline void UnsubscribeNegateModeAction() ;

/// @brief Method UnsubscribePrimary2DAxisClickAction, addr 0xb4bcfd0, size 0xe8, virtual false, abstract: false, final false
inline void UnsubscribePrimary2DAxisClickAction() ;

/// @brief Method UnsubscribePrimary2DAxisTouchAction, addr 0xb4bd3e8, size 0xe8, virtual false, abstract: false, final false
inline void UnsubscribePrimary2DAxisTouchAction() ;

/// @brief Method UnsubscribePrimaryButtonAction, addr 0xb4bc9ac, size 0xe8, virtual false, abstract: false, final false
inline void UnsubscribePrimaryButtonAction() ;

/// @brief Method UnsubscribePrimaryTouchAction, addr 0xb4bd800, size 0xe8, virtual false, abstract: false, final false
inline void UnsubscribePrimaryTouchAction() ;

/// @brief Method UnsubscribeResetAction, addr 0xb4bb900, size 0xe8, virtual false, abstract: false, final false
inline void UnsubscribeResetAction() ;

/// @brief Method UnsubscribeRestingHandAxis2DAction, addr 0xb4bc388, size 0xe8, virtual false, abstract: false, final false
inline void UnsubscribeRestingHandAxis2DAction() ;

/// @brief Method UnsubscribeRotateModeOverrideAction, addr 0xb4bad28, size 0xe8, virtual false, abstract: false, final false
inline void UnsubscribeRotateModeOverrideAction() ;

/// @brief Method UnsubscribeSecondary2DAxisClickAction, addr 0xb4bd1dc, size 0xe8, virtual false, abstract: false, final false
inline void UnsubscribeSecondary2DAxisClickAction() ;

/// @brief Method UnsubscribeSecondary2DAxisTouchAction, addr 0xb4bd5f4, size 0xe8, virtual false, abstract: false, final false
inline void UnsubscribeSecondary2DAxisTouchAction() ;

/// @brief Method UnsubscribeSecondaryButtonAction, addr 0xb4bcbb8, size 0xe8, virtual false, abstract: false, final false
inline void UnsubscribeSecondaryButtonAction() ;

/// @brief Method UnsubscribeSecondaryTouchAction, addr 0xb4bda0c, size 0xe8, virtual false, abstract: false, final false
inline void UnsubscribeSecondaryTouchAction() ;

/// @brief Method UnsubscribeStopManipulationAction, addr 0xb4ba774, size 0xb0, virtual false, abstract: false, final false
inline void UnsubscribeStopManipulationAction() ;

/// @brief Method UnsubscribeToggleCursorLockAction, addr 0xb4bbb0c, size 0xb0, virtual false, abstract: false, final false
inline void UnsubscribeToggleCursorLockAction() ;

/// @brief Method UnsubscribeToggleDevicePositionTargetAction, addr 0xb4bbca8, size 0xb0, virtual false, abstract: false, final false
inline void UnsubscribeToggleDevicePositionTargetAction() ;

/// @brief Method UnsubscribeToggleManipulateBodyAction, addr 0xb4ba094, size 0xb0, virtual false, abstract: false, final false
inline void UnsubscribeToggleManipulateBodyAction() ;

/// @brief Method UnsubscribeToggleManipulateLeftAction, addr 0xb4b9d5c, size 0xb0, virtual false, abstract: false, final false
inline void UnsubscribeToggleManipulateLeftAction() ;

/// @brief Method UnsubscribeToggleManipulateRightAction, addr 0xb4b9ef8, size 0xb0, virtual false, abstract: false, final false
inline void UnsubscribeToggleManipulateRightAction() ;

/// @brief Method UnsubscribeToggleMouseTransformationModeAction, addr 0xb4baf34, size 0xb0, virtual false, abstract: false, final false
inline void UnsubscribeToggleMouseTransformationModeAction() ;

/// @brief Method UnsubscribeTogglePrimary2DAxisTargetAction, addr 0xb4bbe44, size 0xb0, virtual false, abstract: false, final false
inline void UnsubscribeTogglePrimary2DAxisTargetAction() ;

/// @brief Method UnsubscribeToggleSecondary2DAxisTargetAction, addr 0xb4bbfe0, size 0xb0, virtual false, abstract: false, final false
inline void UnsubscribeToggleSecondary2DAxisTargetAction() ;

/// @brief Method UnsubscribeTriggerAction, addr 0xb4bc7a0, size 0xe8, virtual false, abstract: false, final false
inline void UnsubscribeTriggerAction() ;

/// @brief Method UnsubscribeXConstraintAction, addr 0xb4bb2dc, size 0xe8, virtual false, abstract: false, final false
inline void UnsubscribeXConstraintAction() ;

/// @brief Method UnsubscribeYConstraintAction, addr 0xb4bb4e8, size 0xe8, virtual false, abstract: false, final false
inline void UnsubscribeYConstraintAction() ;

/// @brief Method UnsubscribeZConstraintAction, addr 0xb4bb6f4, size 0xe8, virtual false, abstract: false, final false
inline void UnsubscribeZConstraintAction() ;

/// @brief Method Update, addr 0xb4bed8c, size 0xe4, virtual true, abstract: false, final false
inline void Update() ;

constexpr ::GlobalNamespace::XRDeviceSimulator_Axis2DTargets const& __cordl_internal_get__axis2DTargets_k__BackingField() const;

constexpr ::GlobalNamespace::XRDeviceSimulator_Axis2DTargets& __cordl_internal_get__axis2DTargets_k__BackingField() ;

constexpr ::GlobalNamespace::XRDeviceSimulator_TransformationMode const& __cordl_internal_get__mouseTransformationMode_k__BackingField() const;

constexpr ::GlobalNamespace::XRDeviceSimulator_TransformationMode& __cordl_internal_get__mouseTransformationMode_k__BackingField() ;

constexpr bool const& __cordl_internal_get__negateMode_k__BackingField() const;

constexpr bool& __cordl_internal_get__negateMode_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_Axis2DAction() const;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_Axis2DAction() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_m_Axis2DInput() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_m_Axis2DInput() ;

constexpr ::System::ValueTuple_2<::UnityW<::UnityEngine::Transform>,::UnityW<::UnityEngine::Camera>> const& __cordl_internal_get_m_CachedCamera() const;

constexpr ::System::ValueTuple_2<::UnityW<::UnityEngine::Transform>,::UnityW<::UnityEngine::Camera>>& __cordl_internal_get_m_CachedCamera() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_CameraTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_CameraTransform() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_CenterEyeEuler() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_CenterEyeEuler() ;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionAsset> const& __cordl_internal_get_m_ControllerActionAsset() const;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionAsset>& __cordl_internal_get_m_ControllerActionAsset() ;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_CycleDevicesAction() const;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_CycleDevicesAction() ;

constexpr ::UnityEngine::CursorLockMode const& __cordl_internal_get_m_DesiredCursorLockMode() const;

constexpr ::UnityEngine::CursorLockMode& __cordl_internal_get_m_DesiredCursorLockMode() ;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedDeviceLifecycleManager> const& __cordl_internal_get_m_DeviceLifecycleManager() const;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedDeviceLifecycleManager>& __cordl_internal_get_m_DeviceLifecycleManager() ;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionAsset> const& __cordl_internal_get_m_DeviceSimulatorActionAsset() const;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionAsset>& __cordl_internal_get_m_DeviceSimulatorActionAsset() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_m_DeviceSimulatorUI() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_m_DeviceSimulatorUI() ;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_GripAction() const;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_GripAction() ;

constexpr float_t const& __cordl_internal_get_m_GripAmount() const;

constexpr float_t& __cordl_internal_get_m_GripAmount() ;

constexpr bool const& __cordl_internal_get_m_GripInput() const;

constexpr bool& __cordl_internal_get_m_GripInput() ;

constexpr bool const& __cordl_internal_get_m_HMDIsTracked() const;

constexpr bool& __cordl_internal_get_m_HMDIsTracked() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMDState const& __cordl_internal_get_m_HMDState() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMDState& __cordl_internal_get_m_HMDState() ;

constexpr ::UnityEngine::XR::InputTrackingState const& __cordl_internal_get_m_HMDTrackingState() const;

constexpr ::UnityEngine::XR::InputTrackingState& __cordl_internal_get_m_HMDTrackingState() ;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionAsset> const& __cordl_internal_get_m_HandActionAsset() const;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionAsset>& __cordl_internal_get_m_HandActionAsset() ;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_HandControllerModeAction() const;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_HandControllerModeAction() ;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpressionManager> const& __cordl_internal_get_m_HandExpressionManager() const;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpressionManager>& __cordl_internal_get_m_HandExpressionManager() ;

constexpr float_t const& __cordl_internal_get_m_KeyboardBodyTranslateMultiplier() const;

constexpr float_t& __cordl_internal_get_m_KeyboardBodyTranslateMultiplier() ;

constexpr ::GlobalNamespace::XRDeviceSimulator_Space const& __cordl_internal_get_m_KeyboardTranslateSpace() const;

constexpr ::GlobalNamespace::XRDeviceSimulator_Space& __cordl_internal_get_m_KeyboardTranslateSpace() ;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_KeyboardXTranslateAction() const;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_KeyboardXTranslateAction() ;

constexpr float_t const& __cordl_internal_get_m_KeyboardXTranslateInput() const;

constexpr float_t& __cordl_internal_get_m_KeyboardXTranslateInput() ;

constexpr float_t const& __cordl_internal_get_m_KeyboardXTranslateSpeed() const;

constexpr float_t& __cordl_internal_get_m_KeyboardXTranslateSpeed() ;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_KeyboardYTranslateAction() const;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_KeyboardYTranslateAction() ;

constexpr float_t const& __cordl_internal_get_m_KeyboardYTranslateInput() const;

constexpr float_t& __cordl_internal_get_m_KeyboardYTranslateInput() ;

constexpr float_t const& __cordl_internal_get_m_KeyboardYTranslateSpeed() const;

constexpr float_t& __cordl_internal_get_m_KeyboardYTranslateSpeed() ;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_KeyboardZTranslateAction() const;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_KeyboardZTranslateAction() ;

constexpr float_t const& __cordl_internal_get_m_KeyboardZTranslateInput() const;

constexpr float_t& __cordl_internal_get_m_KeyboardZTranslateInput() ;

constexpr float_t const& __cordl_internal_get_m_KeyboardZTranslateSpeed() const;

constexpr float_t& __cordl_internal_get_m_KeyboardZTranslateSpeed() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_LeftControllerEuler() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_LeftControllerEuler() ;

constexpr bool const& __cordl_internal_get_m_LeftControllerIsTracked() const;

constexpr bool& __cordl_internal_get_m_LeftControllerIsTracked() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState const& __cordl_internal_get_m_LeftControllerState() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState& __cordl_internal_get_m_LeftControllerState() ;

constexpr ::UnityEngine::XR::InputTrackingState const& __cordl_internal_get_m_LeftControllerTrackingState() const;

constexpr ::UnityEngine::XR::InputTrackingState& __cordl_internal_get_m_LeftControllerTrackingState() ;

constexpr bool const& __cordl_internal_get_m_LeftHandIsTracked() const;

constexpr bool& __cordl_internal_get_m_LeftHandIsTracked() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::XRSimulatedHandState const& __cordl_internal_get_m_LeftHandState() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::XRSimulatedHandState& __cordl_internal_get_m_LeftHandState() ;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_ManipulateHeadAction() const;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_ManipulateHeadAction() ;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_ManipulateLeftAction() const;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_ManipulateLeftAction() ;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_ManipulateRightAction() const;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_ManipulateRightAction() ;

constexpr bool const& __cordl_internal_get_m_ManipulatedRestingHandAxis2D() const;

constexpr bool& __cordl_internal_get_m_ManipulatedRestingHandAxis2D() ;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_MenuAction() const;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_MenuAction() ;

constexpr bool const& __cordl_internal_get_m_MenuInput() const;

constexpr bool& __cordl_internal_get_m_MenuInput() ;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_MouseDeltaAction() const;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_MouseDeltaAction() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_m_MouseDeltaInput() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_m_MouseDeltaInput() ;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_MouseScrollAction() const;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_MouseScrollAction() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_m_MouseScrollInput() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_m_MouseScrollInput() ;

constexpr float_t const& __cordl_internal_get_m_MouseScrollRotateSensitivity() const;

constexpr float_t& __cordl_internal_get_m_MouseScrollRotateSensitivity() ;

constexpr float_t const& __cordl_internal_get_m_MouseScrollTranslateSensitivity() const;

constexpr float_t& __cordl_internal_get_m_MouseScrollTranslateSensitivity() ;

constexpr ::GlobalNamespace::XRDeviceSimulator_Space const& __cordl_internal_get_m_MouseTranslateSpace() const;

constexpr ::GlobalNamespace::XRDeviceSimulator_Space& __cordl_internal_get_m_MouseTranslateSpace() ;

constexpr float_t const& __cordl_internal_get_m_MouseXRotateSensitivity() const;

constexpr float_t& __cordl_internal_get_m_MouseXRotateSensitivity() ;

constexpr float_t const& __cordl_internal_get_m_MouseXTranslateSensitivity() const;

constexpr float_t& __cordl_internal_get_m_MouseXTranslateSensitivity() ;

constexpr bool const& __cordl_internal_get_m_MouseYRotateInvert() const;

constexpr bool& __cordl_internal_get_m_MouseYRotateInvert() ;

constexpr float_t const& __cordl_internal_get_m_MouseYRotateSensitivity() const;

constexpr float_t& __cordl_internal_get_m_MouseYRotateSensitivity() ;

constexpr float_t const& __cordl_internal_get_m_MouseYTranslateSensitivity() const;

constexpr float_t& __cordl_internal_get_m_MouseYTranslateSensitivity() ;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_NegateModeAction() const;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_NegateModeAction() ;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_Primary2DAxisClickAction() const;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_Primary2DAxisClickAction() ;

constexpr bool const& __cordl_internal_get_m_Primary2DAxisClickInput() const;

constexpr bool& __cordl_internal_get_m_Primary2DAxisClickInput() ;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_Primary2DAxisTouchAction() const;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_Primary2DAxisTouchAction() ;

constexpr bool const& __cordl_internal_get_m_Primary2DAxisTouchInput() const;

constexpr bool& __cordl_internal_get_m_Primary2DAxisTouchInput() ;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_PrimaryButtonAction() const;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_PrimaryButtonAction() ;

constexpr bool const& __cordl_internal_get_m_PrimaryButtonInput() const;

constexpr bool& __cordl_internal_get_m_PrimaryButtonInput() ;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_PrimaryTouchAction() const;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_PrimaryTouchAction() ;

constexpr bool const& __cordl_internal_get_m_PrimaryTouchInput() const;

constexpr bool& __cordl_internal_get_m_PrimaryTouchInput() ;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_ResetAction() const;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_ResetAction() ;

constexpr bool const& __cordl_internal_get_m_ResetInput() const;

constexpr bool& __cordl_internal_get_m_ResetInput() ;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_RestingHandAxis2DAction() const;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_RestingHandAxis2DAction() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_m_RestingHandAxis2DInput() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_m_RestingHandAxis2DInput() ;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionCapture> const& __cordl_internal_get_m_RestingHandExpressionCapture() const;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionCapture>& __cordl_internal_get_m_RestingHandExpressionCapture() ;

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

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_RotateModeOverrideAction() const;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_RotateModeOverrideAction() ;

constexpr bool const& __cordl_internal_get_m_RotateModeOverrideInput() const;

constexpr bool& __cordl_internal_get_m_RotateModeOverrideInput() ;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_Secondary2DAxisClickAction() const;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_Secondary2DAxisClickAction() ;

constexpr bool const& __cordl_internal_get_m_Secondary2DAxisClickInput() const;

constexpr bool& __cordl_internal_get_m_Secondary2DAxisClickInput() ;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_Secondary2DAxisTouchAction() const;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_Secondary2DAxisTouchAction() ;

constexpr bool const& __cordl_internal_get_m_Secondary2DAxisTouchInput() const;

constexpr bool& __cordl_internal_get_m_Secondary2DAxisTouchInput() ;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_SecondaryButtonAction() const;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_SecondaryButtonAction() ;

constexpr bool const& __cordl_internal_get_m_SecondaryButtonInput() const;

constexpr bool& __cordl_internal_get_m_SecondaryButtonInput() ;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_SecondaryTouchAction() const;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_SecondaryTouchAction() ;

constexpr bool const& __cordl_internal_get_m_SecondaryTouchInput() const;

constexpr bool& __cordl_internal_get_m_SecondaryTouchInput() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression*>* const& __cordl_internal_get_m_SimulatedHandExpressions() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression*>*& __cordl_internal_get_m_SimulatedHandExpressions() ;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_StopManipulationAction() const;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_StopManipulationAction() ;

constexpr ::GlobalNamespace::XRDeviceSimulator_TargetedDevices const& __cordl_internal_get_m_TargetedDeviceInput() const;

constexpr ::GlobalNamespace::XRDeviceSimulator_TargetedDevices& __cordl_internal_get_m_TargetedDeviceInput() ;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_ToggleCursorLockAction() const;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_ToggleCursorLockAction() ;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_ToggleDevicePositionTargetAction() const;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_ToggleDevicePositionTargetAction() ;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_ToggleManipulateBodyAction() const;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_ToggleManipulateBodyAction() ;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_ToggleManipulateLeftAction() const;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_ToggleManipulateLeftAction() ;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_ToggleManipulateRightAction() const;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_ToggleManipulateRightAction() ;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_ToggleMouseTransformationModeAction() const;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_ToggleMouseTransformationModeAction() ;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_TogglePrimary2DAxisTargetAction() const;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_TogglePrimary2DAxisTargetAction() ;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_ToggleSecondary2DAxisTargetAction() const;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_ToggleSecondary2DAxisTargetAction() ;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_TriggerAction() const;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_TriggerAction() ;

constexpr float_t const& __cordl_internal_get_m_TriggerAmount() const;

constexpr float_t& __cordl_internal_get_m_TriggerAmount() ;

constexpr bool const& __cordl_internal_get_m_TriggerInput() const;

constexpr bool& __cordl_internal_get_m_TriggerInput() ;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_XConstraintAction() const;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_XConstraintAction() ;

constexpr bool const& __cordl_internal_get_m_XConstraintInput() const;

constexpr bool& __cordl_internal_get_m_XConstraintInput() ;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_YConstraintAction() const;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_YConstraintAction() ;

constexpr bool const& __cordl_internal_get_m_YConstraintInput() const;

constexpr bool& __cordl_internal_get_m_YConstraintInput() ;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_ZConstraintAction() const;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_ZConstraintAction() ;

constexpr bool const& __cordl_internal_get_m_ZConstraintInput() const;

constexpr bool& __cordl_internal_get_m_ZConstraintInput() ;

constexpr void __cordl_internal_set__axis2DTargets_k__BackingField(::GlobalNamespace::XRDeviceSimulator_Axis2DTargets  value) ;

constexpr void __cordl_internal_set__mouseTransformationMode_k__BackingField(::GlobalNamespace::XRDeviceSimulator_TransformationMode  value) ;

constexpr void __cordl_internal_set__negateMode_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_m_Axis2DAction(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value) ;

constexpr void __cordl_internal_set_m_Axis2DInput(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_m_CachedCamera(::System::ValueTuple_2<::UnityW<::UnityEngine::Transform>,::UnityW<::UnityEngine::Camera>>  value) ;

constexpr void __cordl_internal_set_m_CameraTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_m_CenterEyeEuler(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_ControllerActionAsset(::UnityW<::UnityEngine::InputSystem::InputActionAsset>  value) ;

constexpr void __cordl_internal_set_m_CycleDevicesAction(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value) ;

constexpr void __cordl_internal_set_m_DesiredCursorLockMode(::UnityEngine::CursorLockMode  value) ;

constexpr void __cordl_internal_set_m_DeviceLifecycleManager(::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedDeviceLifecycleManager>  value) ;

constexpr void __cordl_internal_set_m_DeviceSimulatorActionAsset(::UnityW<::UnityEngine::InputSystem::InputActionAsset>  value) ;

constexpr void __cordl_internal_set_m_DeviceSimulatorUI(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_m_GripAction(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value) ;

constexpr void __cordl_internal_set_m_GripAmount(float_t  value) ;

constexpr void __cordl_internal_set_m_GripInput(bool  value) ;

constexpr void __cordl_internal_set_m_HMDIsTracked(bool  value) ;

constexpr void __cordl_internal_set_m_HMDState(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMDState  value) ;

constexpr void __cordl_internal_set_m_HMDTrackingState(::UnityEngine::XR::InputTrackingState  value) ;

constexpr void __cordl_internal_set_m_HandActionAsset(::UnityW<::UnityEngine::InputSystem::InputActionAsset>  value) ;

constexpr void __cordl_internal_set_m_HandControllerModeAction(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value) ;

constexpr void __cordl_internal_set_m_HandExpressionManager(::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpressionManager>  value) ;

constexpr void __cordl_internal_set_m_KeyboardBodyTranslateMultiplier(float_t  value) ;

constexpr void __cordl_internal_set_m_KeyboardTranslateSpace(::GlobalNamespace::XRDeviceSimulator_Space  value) ;

constexpr void __cordl_internal_set_m_KeyboardXTranslateAction(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value) ;

constexpr void __cordl_internal_set_m_KeyboardXTranslateInput(float_t  value) ;

constexpr void __cordl_internal_set_m_KeyboardXTranslateSpeed(float_t  value) ;

constexpr void __cordl_internal_set_m_KeyboardYTranslateAction(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value) ;

constexpr void __cordl_internal_set_m_KeyboardYTranslateInput(float_t  value) ;

constexpr void __cordl_internal_set_m_KeyboardYTranslateSpeed(float_t  value) ;

constexpr void __cordl_internal_set_m_KeyboardZTranslateAction(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value) ;

constexpr void __cordl_internal_set_m_KeyboardZTranslateInput(float_t  value) ;

constexpr void __cordl_internal_set_m_KeyboardZTranslateSpeed(float_t  value) ;

constexpr void __cordl_internal_set_m_LeftControllerEuler(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_LeftControllerIsTracked(bool  value) ;

constexpr void __cordl_internal_set_m_LeftControllerState(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState  value) ;

constexpr void __cordl_internal_set_m_LeftControllerTrackingState(::UnityEngine::XR::InputTrackingState  value) ;

constexpr void __cordl_internal_set_m_LeftHandIsTracked(bool  value) ;

constexpr void __cordl_internal_set_m_LeftHandState(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::XRSimulatedHandState  value) ;

constexpr void __cordl_internal_set_m_ManipulateHeadAction(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value) ;

constexpr void __cordl_internal_set_m_ManipulateLeftAction(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value) ;

constexpr void __cordl_internal_set_m_ManipulateRightAction(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value) ;

constexpr void __cordl_internal_set_m_ManipulatedRestingHandAxis2D(bool  value) ;

constexpr void __cordl_internal_set_m_MenuAction(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value) ;

constexpr void __cordl_internal_set_m_MenuInput(bool  value) ;

constexpr void __cordl_internal_set_m_MouseDeltaAction(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value) ;

constexpr void __cordl_internal_set_m_MouseDeltaInput(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_m_MouseScrollAction(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value) ;

constexpr void __cordl_internal_set_m_MouseScrollInput(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_m_MouseScrollRotateSensitivity(float_t  value) ;

constexpr void __cordl_internal_set_m_MouseScrollTranslateSensitivity(float_t  value) ;

constexpr void __cordl_internal_set_m_MouseTranslateSpace(::GlobalNamespace::XRDeviceSimulator_Space  value) ;

constexpr void __cordl_internal_set_m_MouseXRotateSensitivity(float_t  value) ;

constexpr void __cordl_internal_set_m_MouseXTranslateSensitivity(float_t  value) ;

constexpr void __cordl_internal_set_m_MouseYRotateInvert(bool  value) ;

constexpr void __cordl_internal_set_m_MouseYRotateSensitivity(float_t  value) ;

constexpr void __cordl_internal_set_m_MouseYTranslateSensitivity(float_t  value) ;

constexpr void __cordl_internal_set_m_NegateModeAction(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value) ;

constexpr void __cordl_internal_set_m_Primary2DAxisClickAction(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value) ;

constexpr void __cordl_internal_set_m_Primary2DAxisClickInput(bool  value) ;

constexpr void __cordl_internal_set_m_Primary2DAxisTouchAction(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value) ;

constexpr void __cordl_internal_set_m_Primary2DAxisTouchInput(bool  value) ;

constexpr void __cordl_internal_set_m_PrimaryButtonAction(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value) ;

constexpr void __cordl_internal_set_m_PrimaryButtonInput(bool  value) ;

constexpr void __cordl_internal_set_m_PrimaryTouchAction(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value) ;

constexpr void __cordl_internal_set_m_PrimaryTouchInput(bool  value) ;

constexpr void __cordl_internal_set_m_ResetAction(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value) ;

constexpr void __cordl_internal_set_m_ResetInput(bool  value) ;

constexpr void __cordl_internal_set_m_RestingHandAxis2DAction(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value) ;

constexpr void __cordl_internal_set_m_RestingHandAxis2DInput(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_m_RestingHandExpressionCapture(::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionCapture>  value) ;

constexpr void __cordl_internal_set_m_RightControllerEuler(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_RightControllerIsTracked(bool  value) ;

constexpr void __cordl_internal_set_m_RightControllerState(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState  value) ;

constexpr void __cordl_internal_set_m_RightControllerTrackingState(::UnityEngine::XR::InputTrackingState  value) ;

constexpr void __cordl_internal_set_m_RightHandIsTracked(bool  value) ;

constexpr void __cordl_internal_set_m_RightHandState(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::XRSimulatedHandState  value) ;

constexpr void __cordl_internal_set_m_RotateModeOverrideAction(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value) ;

constexpr void __cordl_internal_set_m_RotateModeOverrideInput(bool  value) ;

constexpr void __cordl_internal_set_m_Secondary2DAxisClickAction(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value) ;

constexpr void __cordl_internal_set_m_Secondary2DAxisClickInput(bool  value) ;

constexpr void __cordl_internal_set_m_Secondary2DAxisTouchAction(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value) ;

constexpr void __cordl_internal_set_m_Secondary2DAxisTouchInput(bool  value) ;

constexpr void __cordl_internal_set_m_SecondaryButtonAction(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value) ;

constexpr void __cordl_internal_set_m_SecondaryButtonInput(bool  value) ;

constexpr void __cordl_internal_set_m_SecondaryTouchAction(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value) ;

constexpr void __cordl_internal_set_m_SecondaryTouchInput(bool  value) ;

constexpr void __cordl_internal_set_m_SimulatedHandExpressions(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression*>*  value) ;

constexpr void __cordl_internal_set_m_StopManipulationAction(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value) ;

constexpr void __cordl_internal_set_m_TargetedDeviceInput(::GlobalNamespace::XRDeviceSimulator_TargetedDevices  value) ;

constexpr void __cordl_internal_set_m_ToggleCursorLockAction(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value) ;

constexpr void __cordl_internal_set_m_ToggleDevicePositionTargetAction(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value) ;

constexpr void __cordl_internal_set_m_ToggleManipulateBodyAction(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value) ;

constexpr void __cordl_internal_set_m_ToggleManipulateLeftAction(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value) ;

constexpr void __cordl_internal_set_m_ToggleManipulateRightAction(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value) ;

constexpr void __cordl_internal_set_m_ToggleMouseTransformationModeAction(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value) ;

constexpr void __cordl_internal_set_m_TogglePrimary2DAxisTargetAction(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value) ;

constexpr void __cordl_internal_set_m_ToggleSecondary2DAxisTargetAction(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value) ;

constexpr void __cordl_internal_set_m_TriggerAction(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value) ;

constexpr void __cordl_internal_set_m_TriggerAmount(float_t  value) ;

constexpr void __cordl_internal_set_m_TriggerInput(bool  value) ;

constexpr void __cordl_internal_set_m_XConstraintAction(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value) ;

constexpr void __cordl_internal_set_m_XConstraintInput(bool  value) ;

constexpr void __cordl_internal_set_m_YConstraintAction(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value) ;

constexpr void __cordl_internal_set_m_YConstraintInput(bool  value) ;

constexpr void __cordl_internal_set_m_ZConstraintAction(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value) ;

constexpr void __cordl_internal_set_m_ZConstraintInput(bool  value) ;

/// @brief Method .ctor, addr 0xb4c1b18, size 0x1300, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator> getStaticF__instance_k__BackingField() ;

static inline ::System::Action_1<bool>* getStaticF_instanceChanged() ;

/// @brief Method get_axis2DAction, addr 0xb4bc140, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_axis2DAction() ;

/// [CompilerGenerated]
/// @brief Method get_axis2DTargets, addr 0xb4bddc4, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::XRDeviceSimulator_Axis2DTargets get_axis2DTargets() ;

/// @brief Method get_cameraTransform, addr 0xb4bdbf4, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_cameraTransform() ;

/// @brief Method get_controllerActionAsset, addr 0xb4b92d4, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::InputSystem::InputActionAsset> get_controllerActionAsset() ;

/// @brief Method get_cycleDevicesAction, addr 0xb4ba59c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_cycleDevicesAction() ;

/// @brief Method get_desiredCursorLockMode, addr 0xb4bdcdc, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::CursorLockMode get_desiredCursorLockMode() ;

/// @brief Method get_deviceMode, addr 0xb4c18fc, size 0x80, virtual false, abstract: false, final false
inline ::GlobalNamespace::XRDeviceSimulator_DeviceMode get_deviceMode() ;

/// @brief Method get_deviceSimulatorActionAsset, addr 0xb4b92c4, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::InputSystem::InputActionAsset> get_deviceSimulatorActionAsset() ;

/// @brief Method get_deviceSimulatorUI, addr 0xb4bdcec, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> get_deviceSimulatorUI() ;

/// @brief Method get_gripAction, addr 0xb4bc558, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_gripAction() ;

/// @brief Method get_gripAmount, addr 0xb4bdd04, size 0x8, virtual false, abstract: false, final false
inline float_t get_gripAmount() ;

/// @brief Method get_handActionAsset, addr 0xb4bdbdc, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::InputSystem::InputActionAsset> get_handActionAsset() ;

/// @brief Method get_handControllerModeAction, addr 0xb4ba400, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_handControllerModeAction() ;

/// @brief Method get_handTrackingCapability, addr 0xb4c17ec, size 0x88, virtual false, abstract: false, final false
inline bool get_handTrackingCapability() ;

/// @brief Method get_hmdIsTracked, addr 0xb4bdd24, size 0x8, virtual false, abstract: false, final false
inline bool get_hmdIsTracked() ;

/// @brief Method get_hmdTrackingState, addr 0xb4bdd34, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::InputTrackingState get_hmdTrackingState() ;

/// [CompilerGenerated]
/// @brief Method get_instance, addr 0xb4bdecc, size 0x48, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator> get_instance() ;

/// @brief Method get_keyboardBodyTranslateMultiplier, addr 0xb4bdc5c, size 0x8, virtual false, abstract: false, final false
inline float_t get_keyboardBodyTranslateMultiplier() ;

/// @brief Method get_keyboardTranslateSpace, addr 0xb4bdc0c, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::XRDeviceSimulator_Space get_keyboardTranslateSpace() ;

/// @brief Method get_keyboardXTranslateAction, addr 0xb4b92e4, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_keyboardXTranslateAction() ;

/// @brief Method get_keyboardXTranslateSpeed, addr 0xb4bdc2c, size 0x8, virtual false, abstract: false, final false
inline float_t get_keyboardXTranslateSpeed() ;

/// @brief Method get_keyboardYTranslateAction, addr 0xb4b94f0, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_keyboardYTranslateAction() ;

/// @brief Method get_keyboardYTranslateSpeed, addr 0xb4bdc3c, size 0x8, virtual false, abstract: false, final false
inline float_t get_keyboardYTranslateSpeed() ;

/// @brief Method get_keyboardZTranslateAction, addr 0xb4b96fc, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_keyboardZTranslateAction() ;

/// @brief Method get_keyboardZTranslateSpeed, addr 0xb4bdc4c, size 0x8, virtual false, abstract: false, final false
inline float_t get_keyboardZTranslateSpeed() ;

/// @brief Method get_leftControllerIsTracked, addr 0xb4bdd44, size 0x8, virtual false, abstract: false, final false
inline bool get_leftControllerIsTracked() ;

/// @brief Method get_leftControllerTrackingState, addr 0xb4bdd54, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::InputTrackingState get_leftControllerTrackingState() ;

/// @brief Method get_leftHandIsTracked, addr 0xb4bdd84, size 0x8, virtual false, abstract: false, final false
inline bool get_leftHandIsTracked() ;

/// @brief Method get_manipulateHeadAction, addr 0xb4ba1f4, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_manipulateHeadAction() ;

/// @brief Method get_manipulateLeftAction, addr 0xb4b9908, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_manipulateLeftAction() ;

/// @brief Method get_manipulateRightAction, addr 0xb4b9b14, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_manipulateRightAction() ;

/// @brief Method get_manipulatingFPS, addr 0xb4bdebc, size 0x10, virtual false, abstract: false, final false
inline bool get_manipulatingFPS() ;

/// @brief Method get_manipulatingLeftController, addr 0xb4bddf4, size 0x30, virtual false, abstract: false, final false
inline bool get_manipulatingLeftController() ;

/// @brief Method get_manipulatingLeftDevice, addr 0xb4bddd4, size 0x10, virtual false, abstract: false, final false
inline bool get_manipulatingLeftDevice() ;

/// @brief Method get_manipulatingLeftHand, addr 0xb4bde54, size 0x34, virtual false, abstract: false, final false
inline bool get_manipulatingLeftHand() ;

/// @brief Method get_manipulatingRightController, addr 0xb4bde24, size 0x30, virtual false, abstract: false, final false
inline bool get_manipulatingRightController() ;

/// @brief Method get_manipulatingRightDevice, addr 0xb4bdde4, size 0x10, virtual false, abstract: false, final false
inline bool get_manipulatingRightDevice() ;

/// @brief Method get_manipulatingRightHand, addr 0xb4bde88, size 0x34, virtual false, abstract: false, final false
inline bool get_manipulatingRightHand() ;

/// @brief Method get_menuAction, addr 0xb4bcd88, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_menuAction() ;

/// @brief Method get_mouseDeltaAction, addr 0xb4ba8d4, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_mouseDeltaAction() ;

/// @brief Method get_mouseScrollAction, addr 0xb4baae0, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_mouseScrollAction() ;

/// @brief Method get_mouseScrollRotateSensitivity, addr 0xb4bdcbc, size 0x8, virtual false, abstract: false, final false
inline float_t get_mouseScrollRotateSensitivity() ;

/// @brief Method get_mouseScrollTranslateSensitivity, addr 0xb4bdc8c, size 0x8, virtual false, abstract: false, final false
inline float_t get_mouseScrollTranslateSensitivity() ;

/// [CompilerGenerated]
/// @brief Method get_mouseTransformationMode, addr 0xb4bdda4, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::XRDeviceSimulator_TransformationMode get_mouseTransformationMode() ;

/// @brief Method get_mouseTranslateSpace, addr 0xb4bdc1c, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::XRDeviceSimulator_Space get_mouseTranslateSpace() ;

/// @brief Method get_mouseXRotateSensitivity, addr 0xb4bdc9c, size 0x8, virtual false, abstract: false, final false
inline float_t get_mouseXRotateSensitivity() ;

/// @brief Method get_mouseXTranslateSensitivity, addr 0xb4bdc6c, size 0x8, virtual false, abstract: false, final false
inline float_t get_mouseXTranslateSensitivity() ;

/// @brief Method get_mouseYRotateInvert, addr 0xb4bdccc, size 0x8, virtual false, abstract: false, final false
inline bool get_mouseYRotateInvert() ;

/// @brief Method get_mouseYRotateSensitivity, addr 0xb4bdcac, size 0x8, virtual false, abstract: false, final false
inline float_t get_mouseYRotateSensitivity() ;

/// @brief Method get_mouseYTranslateSensitivity, addr 0xb4bdc7c, size 0x8, virtual false, abstract: false, final false
inline float_t get_mouseYTranslateSensitivity() ;

/// [CompilerGenerated]
/// @brief Method get_negateMode, addr 0xb4bddb4, size 0x8, virtual false, abstract: false, final false
inline bool get_negateMode() ;

/// @brief Method get_negateModeAction, addr 0xb4bb094, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_negateModeAction() ;

/// @brief Method get_primary2DAxisClickAction, addr 0xb4bcf94, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_primary2DAxisClickAction() ;

/// @brief Method get_primary2DAxisTouchAction, addr 0xb4bd3ac, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_primary2DAxisTouchAction() ;

/// @brief Method get_primaryButtonAction, addr 0xb4bc970, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_primaryButtonAction() ;

/// @brief Method get_primaryTouchAction, addr 0xb4bd7c4, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_primaryTouchAction() ;

/// @brief Method get_removeOtherHMDDevices, addr 0xb4c16dc, size 0x88, virtual false, abstract: false, final false
inline bool get_removeOtherHMDDevices() ;

/// @brief Method get_resetAction, addr 0xb4bb8c4, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_resetAction() ;

/// @brief Method get_restingHandAxis2DAction, addr 0xb4bc34c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_restingHandAxis2DAction() ;

/// @brief Method get_rightControllerIsTracked, addr 0xb4bdd64, size 0x8, virtual false, abstract: false, final false
inline bool get_rightControllerIsTracked() ;

/// @brief Method get_rightControllerTrackingState, addr 0xb4bdd74, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::InputTrackingState get_rightControllerTrackingState() ;

/// @brief Method get_rightHandIsTracked, addr 0xb4bdd94, size 0x8, virtual false, abstract: false, final false
inline bool get_rightHandIsTracked() ;

/// @brief Method get_rotateModeOverrideAction, addr 0xb4bacec, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_rotateModeOverrideAction() ;

/// @brief Method get_secondary2DAxisClickAction, addr 0xb4bd1a0, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_secondary2DAxisClickAction() ;

/// @brief Method get_secondary2DAxisTouchAction, addr 0xb4bd5b8, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_secondary2DAxisTouchAction() ;

/// @brief Method get_secondaryButtonAction, addr 0xb4bcb7c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_secondaryButtonAction() ;

/// @brief Method get_secondaryTouchAction, addr 0xb4bd9d0, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_secondaryTouchAction() ;

/// @brief Method get_simulatedHandExpressions, addr 0xb4c16d4, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression*>* get_simulatedHandExpressions() ;

/// @brief Method get_stopManipulationAction, addr 0xb4ba738, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_stopManipulationAction() ;

/// @brief Method get_targetedDeviceInput, addr 0xb4bdf6c, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::XRDeviceSimulator_TargetedDevices get_targetedDeviceInput() ;

/// @brief Method get_toggleCursorLockAction, addr 0xb4bbad0, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_toggleCursorLockAction() ;

/// @brief Method get_toggleDevicePositionTargetAction, addr 0xb4bbc6c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_toggleDevicePositionTargetAction() ;

/// @brief Method get_toggleManipulateBodyAction, addr 0xb4ba058, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_toggleManipulateBodyAction() ;

/// @brief Method get_toggleManipulateLeftAction, addr 0xb4b9d20, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_toggleManipulateLeftAction() ;

/// @brief Method get_toggleManipulateRightAction, addr 0xb4b9ebc, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_toggleManipulateRightAction() ;

/// @brief Method get_toggleMouseTransformationModeAction, addr 0xb4baef8, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_toggleMouseTransformationModeAction() ;

/// @brief Method get_togglePrimary2DAxisTargetAction, addr 0xb4bbe08, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_togglePrimary2DAxisTargetAction() ;

/// @brief Method get_toggleSecondary2DAxisTargetAction, addr 0xb4bbfa4, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_toggleSecondary2DAxisTargetAction() ;

/// @brief Method get_triggerAction, addr 0xb4bc764, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_triggerAction() ;

/// @brief Method get_triggerAmount, addr 0xb4bdd14, size 0x8, virtual false, abstract: false, final false
inline float_t get_triggerAmount() ;

/// @brief Method get_xConstraintAction, addr 0xb4bb2a0, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_xConstraintAction() ;

/// @brief Method get_yConstraintAction, addr 0xb4bb4ac, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_yConstraintAction() ;

/// @brief Method get_zConstraintAction, addr 0xb4bb6b8, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_zConstraintAction() ;

static inline void setStaticF__instance_k__BackingField(::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator>  value) ;

static inline void setStaticF_instanceChanged(::System::Action_1<bool>*  value) ;

/// @brief Method set_axis2DAction, addr 0xb4bc148, size 0x34, virtual false, abstract: false, final false
inline void set_axis2DAction(::UnityEngine::InputSystem::InputActionReference*  value) ;

/// [CompilerGenerated]
/// @brief Method set_axis2DTargets, addr 0xb4bddcc, size 0x8, virtual false, abstract: false, final false
inline void set_axis2DTargets(::GlobalNamespace::XRDeviceSimulator_Axis2DTargets  value) ;

/// @brief Method set_cameraTransform, addr 0xb4bdbfc, size 0x10, virtual false, abstract: false, final false
inline void set_cameraTransform(::UnityEngine::Transform*  value) ;

/// @brief Method set_controllerActionAsset, addr 0xb4b92dc, size 0x8, virtual false, abstract: false, final false
inline void set_controllerActionAsset(::UnityEngine::InputSystem::InputActionAsset*  value) ;

/// @brief Method set_cycleDevicesAction, addr 0xb4ba5a4, size 0x34, virtual false, abstract: false, final false
inline void set_cycleDevicesAction(::UnityEngine::InputSystem::InputActionReference*  value) ;

/// @brief Method set_desiredCursorLockMode, addr 0xb4bdce4, size 0x8, virtual false, abstract: false, final false
inline void set_desiredCursorLockMode(::UnityEngine::CursorLockMode  value) ;

/// @brief Method set_deviceSimulatorActionAsset, addr 0xb4b92cc, size 0x8, virtual false, abstract: false, final false
inline void set_deviceSimulatorActionAsset(::UnityEngine::InputSystem::InputActionAsset*  value) ;

/// @brief Method set_deviceSimulatorUI, addr 0xb4bdcf4, size 0x10, virtual false, abstract: false, final false
inline void set_deviceSimulatorUI(::UnityEngine::GameObject*  value) ;

/// @brief Method set_gripAction, addr 0xb4bc560, size 0x34, virtual false, abstract: false, final false
inline void set_gripAction(::UnityEngine::InputSystem::InputActionReference*  value) ;

/// @brief Method set_gripAmount, addr 0xb4bdd0c, size 0x8, virtual false, abstract: false, final false
inline void set_gripAmount(float_t  value) ;

/// @brief Method set_handActionAsset, addr 0xb4bdbe4, size 0x10, virtual false, abstract: false, final false
inline void set_handActionAsset(::UnityEngine::InputSystem::InputActionAsset*  value) ;

/// @brief Method set_handControllerModeAction, addr 0xb4ba408, size 0x34, virtual false, abstract: false, final false
inline void set_handControllerModeAction(::UnityEngine::InputSystem::InputActionReference*  value) ;

/// @brief Method set_handTrackingCapability, addr 0xb4c1874, size 0x88, virtual false, abstract: false, final false
inline void set_handTrackingCapability(bool  value) ;

/// @brief Method set_hmdIsTracked, addr 0xb4bdd2c, size 0x8, virtual false, abstract: false, final false
inline void set_hmdIsTracked(bool  value) ;

/// @brief Method set_hmdTrackingState, addr 0xb4bdd3c, size 0x8, virtual false, abstract: false, final false
inline void set_hmdTrackingState(::UnityEngine::XR::InputTrackingState  value) ;

/// [CompilerGenerated]
/// @brief Method set_instance, addr 0xb4bdf14, size 0x58, virtual false, abstract: false, final false
static inline void set_instance(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator*  value) ;

/// @brief Method set_keyboardBodyTranslateMultiplier, addr 0xb4bdc64, size 0x8, virtual false, abstract: false, final false
inline void set_keyboardBodyTranslateMultiplier(float_t  value) ;

/// @brief Method set_keyboardTranslateSpace, addr 0xb4bdc14, size 0x8, virtual false, abstract: false, final false
inline void set_keyboardTranslateSpace(::GlobalNamespace::XRDeviceSimulator_Space  value) ;

/// @brief Method set_keyboardXTranslateAction, addr 0xb4b92ec, size 0x34, virtual false, abstract: false, final false
inline void set_keyboardXTranslateAction(::UnityEngine::InputSystem::InputActionReference*  value) ;

/// @brief Method set_keyboardXTranslateSpeed, addr 0xb4bdc34, size 0x8, virtual false, abstract: false, final false
inline void set_keyboardXTranslateSpeed(float_t  value) ;

/// @brief Method set_keyboardYTranslateAction, addr 0xb4b94f8, size 0x34, virtual false, abstract: false, final false
inline void set_keyboardYTranslateAction(::UnityEngine::InputSystem::InputActionReference*  value) ;

/// @brief Method set_keyboardYTranslateSpeed, addr 0xb4bdc44, size 0x8, virtual false, abstract: false, final false
inline void set_keyboardYTranslateSpeed(float_t  value) ;

/// @brief Method set_keyboardZTranslateAction, addr 0xb4b9704, size 0x34, virtual false, abstract: false, final false
inline void set_keyboardZTranslateAction(::UnityEngine::InputSystem::InputActionReference*  value) ;

/// @brief Method set_keyboardZTranslateSpeed, addr 0xb4bdc54, size 0x8, virtual false, abstract: false, final false
inline void set_keyboardZTranslateSpeed(float_t  value) ;

/// @brief Method set_leftControllerIsTracked, addr 0xb4bdd4c, size 0x8, virtual false, abstract: false, final false
inline void set_leftControllerIsTracked(bool  value) ;

/// @brief Method set_leftControllerTrackingState, addr 0xb4bdd5c, size 0x8, virtual false, abstract: false, final false
inline void set_leftControllerTrackingState(::UnityEngine::XR::InputTrackingState  value) ;

/// @brief Method set_leftHandIsTracked, addr 0xb4bdd8c, size 0x8, virtual false, abstract: false, final false
inline void set_leftHandIsTracked(bool  value) ;

/// @brief Method set_manipulateHeadAction, addr 0xb4ba1fc, size 0x34, virtual false, abstract: false, final false
inline void set_manipulateHeadAction(::UnityEngine::InputSystem::InputActionReference*  value) ;

/// @brief Method set_manipulateLeftAction, addr 0xb4b9910, size 0x34, virtual false, abstract: false, final false
inline void set_manipulateLeftAction(::UnityEngine::InputSystem::InputActionReference*  value) ;

/// @brief Method set_manipulateRightAction, addr 0xb4b9b1c, size 0x34, virtual false, abstract: false, final false
inline void set_manipulateRightAction(::UnityEngine::InputSystem::InputActionReference*  value) ;

/// @brief Method set_menuAction, addr 0xb4bcd90, size 0x34, virtual false, abstract: false, final false
inline void set_menuAction(::UnityEngine::InputSystem::InputActionReference*  value) ;

/// @brief Method set_mouseDeltaAction, addr 0xb4ba8dc, size 0x34, virtual false, abstract: false, final false
inline void set_mouseDeltaAction(::UnityEngine::InputSystem::InputActionReference*  value) ;

/// @brief Method set_mouseScrollAction, addr 0xb4baae8, size 0x34, virtual false, abstract: false, final false
inline void set_mouseScrollAction(::UnityEngine::InputSystem::InputActionReference*  value) ;

/// @brief Method set_mouseScrollRotateSensitivity, addr 0xb4bdcc4, size 0x8, virtual false, abstract: false, final false
inline void set_mouseScrollRotateSensitivity(float_t  value) ;

/// @brief Method set_mouseScrollTranslateSensitivity, addr 0xb4bdc94, size 0x8, virtual false, abstract: false, final false
inline void set_mouseScrollTranslateSensitivity(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_mouseTransformationMode, addr 0xb4bddac, size 0x8, virtual false, abstract: false, final false
inline void set_mouseTransformationMode(::GlobalNamespace::XRDeviceSimulator_TransformationMode  value) ;

/// @brief Method set_mouseTranslateSpace, addr 0xb4bdc24, size 0x8, virtual false, abstract: false, final false
inline void set_mouseTranslateSpace(::GlobalNamespace::XRDeviceSimulator_Space  value) ;

/// @brief Method set_mouseXRotateSensitivity, addr 0xb4bdca4, size 0x8, virtual false, abstract: false, final false
inline void set_mouseXRotateSensitivity(float_t  value) ;

/// @brief Method set_mouseXTranslateSensitivity, addr 0xb4bdc74, size 0x8, virtual false, abstract: false, final false
inline void set_mouseXTranslateSensitivity(float_t  value) ;

/// @brief Method set_mouseYRotateInvert, addr 0xb4bdcd4, size 0x8, virtual false, abstract: false, final false
inline void set_mouseYRotateInvert(bool  value) ;

/// @brief Method set_mouseYRotateSensitivity, addr 0xb4bdcb4, size 0x8, virtual false, abstract: false, final false
inline void set_mouseYRotateSensitivity(float_t  value) ;

/// @brief Method set_mouseYTranslateSensitivity, addr 0xb4bdc84, size 0x8, virtual false, abstract: false, final false
inline void set_mouseYTranslateSensitivity(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_negateMode, addr 0xb4bddbc, size 0x8, virtual false, abstract: false, final false
inline void set_negateMode(bool  value) ;

/// @brief Method set_negateModeAction, addr 0xb4bb09c, size 0x34, virtual false, abstract: false, final false
inline void set_negateModeAction(::UnityEngine::InputSystem::InputActionReference*  value) ;

/// @brief Method set_primary2DAxisClickAction, addr 0xb4bcf9c, size 0x34, virtual false, abstract: false, final false
inline void set_primary2DAxisClickAction(::UnityEngine::InputSystem::InputActionReference*  value) ;

/// @brief Method set_primary2DAxisTouchAction, addr 0xb4bd3b4, size 0x34, virtual false, abstract: false, final false
inline void set_primary2DAxisTouchAction(::UnityEngine::InputSystem::InputActionReference*  value) ;

/// @brief Method set_primaryButtonAction, addr 0xb4bc978, size 0x34, virtual false, abstract: false, final false
inline void set_primaryButtonAction(::UnityEngine::InputSystem::InputActionReference*  value) ;

/// @brief Method set_primaryTouchAction, addr 0xb4bd7cc, size 0x34, virtual false, abstract: false, final false
inline void set_primaryTouchAction(::UnityEngine::InputSystem::InputActionReference*  value) ;

/// @brief Method set_removeOtherHMDDevices, addr 0xb4c1764, size 0x88, virtual false, abstract: false, final false
inline void set_removeOtherHMDDevices(bool  value) ;

/// @brief Method set_resetAction, addr 0xb4bb8cc, size 0x34, virtual false, abstract: false, final false
inline void set_resetAction(::UnityEngine::InputSystem::InputActionReference*  value) ;

/// @brief Method set_restingHandAxis2DAction, addr 0xb4bc354, size 0x34, virtual false, abstract: false, final false
inline void set_restingHandAxis2DAction(::UnityEngine::InputSystem::InputActionReference*  value) ;

/// @brief Method set_rightControllerIsTracked, addr 0xb4bdd6c, size 0x8, virtual false, abstract: false, final false
inline void set_rightControllerIsTracked(bool  value) ;

/// @brief Method set_rightControllerTrackingState, addr 0xb4bdd7c, size 0x8, virtual false, abstract: false, final false
inline void set_rightControllerTrackingState(::UnityEngine::XR::InputTrackingState  value) ;

/// @brief Method set_rightHandIsTracked, addr 0xb4bdd9c, size 0x8, virtual false, abstract: false, final false
inline void set_rightHandIsTracked(bool  value) ;

/// @brief Method set_rotateModeOverrideAction, addr 0xb4bacf4, size 0x34, virtual false, abstract: false, final false
inline void set_rotateModeOverrideAction(::UnityEngine::InputSystem::InputActionReference*  value) ;

/// @brief Method set_secondary2DAxisClickAction, addr 0xb4bd1a8, size 0x34, virtual false, abstract: false, final false
inline void set_secondary2DAxisClickAction(::UnityEngine::InputSystem::InputActionReference*  value) ;

/// @brief Method set_secondary2DAxisTouchAction, addr 0xb4bd5c0, size 0x34, virtual false, abstract: false, final false
inline void set_secondary2DAxisTouchAction(::UnityEngine::InputSystem::InputActionReference*  value) ;

/// @brief Method set_secondaryButtonAction, addr 0xb4bcb84, size 0x34, virtual false, abstract: false, final false
inline void set_secondaryButtonAction(::UnityEngine::InputSystem::InputActionReference*  value) ;

/// @brief Method set_secondaryTouchAction, addr 0xb4bd9d8, size 0x34, virtual false, abstract: false, final false
inline void set_secondaryTouchAction(::UnityEngine::InputSystem::InputActionReference*  value) ;

/// @brief Method set_stopManipulationAction, addr 0xb4ba740, size 0x34, virtual false, abstract: false, final false
inline void set_stopManipulationAction(::UnityEngine::InputSystem::InputActionReference*  value) ;

/// @brief Method set_targetedDeviceInput, addr 0xb4bdf74, size 0x8, virtual false, abstract: false, final false
inline void set_targetedDeviceInput(::GlobalNamespace::XRDeviceSimulator_TargetedDevices  value) ;

/// @brief Method set_toggleCursorLockAction, addr 0xb4bbad8, size 0x34, virtual false, abstract: false, final false
inline void set_toggleCursorLockAction(::UnityEngine::InputSystem::InputActionReference*  value) ;

/// @brief Method set_toggleDevicePositionTargetAction, addr 0xb4bbc74, size 0x34, virtual false, abstract: false, final false
inline void set_toggleDevicePositionTargetAction(::UnityEngine::InputSystem::InputActionReference*  value) ;

/// @brief Method set_toggleManipulateBodyAction, addr 0xb4ba060, size 0x34, virtual false, abstract: false, final false
inline void set_toggleManipulateBodyAction(::UnityEngine::InputSystem::InputActionReference*  value) ;

/// @brief Method set_toggleManipulateLeftAction, addr 0xb4b9d28, size 0x34, virtual false, abstract: false, final false
inline void set_toggleManipulateLeftAction(::UnityEngine::InputSystem::InputActionReference*  value) ;

/// @brief Method set_toggleManipulateRightAction, addr 0xb4b9ec4, size 0x34, virtual false, abstract: false, final false
inline void set_toggleManipulateRightAction(::UnityEngine::InputSystem::InputActionReference*  value) ;

/// @brief Method set_toggleMouseTransformationModeAction, addr 0xb4baf00, size 0x34, virtual false, abstract: false, final false
inline void set_toggleMouseTransformationModeAction(::UnityEngine::InputSystem::InputActionReference*  value) ;

/// @brief Method set_togglePrimary2DAxisTargetAction, addr 0xb4bbe10, size 0x34, virtual false, abstract: false, final false
inline void set_togglePrimary2DAxisTargetAction(::UnityEngine::InputSystem::InputActionReference*  value) ;

/// @brief Method set_toggleSecondary2DAxisTargetAction, addr 0xb4bbfac, size 0x34, virtual false, abstract: false, final false
inline void set_toggleSecondary2DAxisTargetAction(::UnityEngine::InputSystem::InputActionReference*  value) ;

/// @brief Method set_triggerAction, addr 0xb4bc76c, size 0x34, virtual false, abstract: false, final false
inline void set_triggerAction(::UnityEngine::InputSystem::InputActionReference*  value) ;

/// @brief Method set_triggerAmount, addr 0xb4bdd1c, size 0x8, virtual false, abstract: false, final false
inline void set_triggerAmount(float_t  value) ;

/// @brief Method set_xConstraintAction, addr 0xb4bb2a8, size 0x34, virtual false, abstract: false, final false
inline void set_xConstraintAction(::UnityEngine::InputSystem::InputActionReference*  value) ;

/// @brief Method set_yConstraintAction, addr 0xb4bb4b4, size 0x34, virtual false, abstract: false, final false
inline void set_yConstraintAction(::UnityEngine::InputSystem::InputActionReference*  value) ;

/// @brief Method set_zConstraintAction, addr 0xb4bb6c0, size 0x34, virtual false, abstract: false, final false
inline void set_zConstraintAction(::UnityEngine::InputSystem::InputActionReference*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRDeviceSimulator() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRDeviceSimulator", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRDeviceSimulator(XRDeviceSimulator && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRDeviceSimulator", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRDeviceSimulator(XRDeviceSimulator const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11623};

/// [SerializeField]
/// [Tooltip("Input Action asset containing controls for the simulator itself. Unity will automatically enable and disable it with this component.")]
/// @brief Field m_DeviceSimulatorActionAsset, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::InputSystem::InputActionAsset>  ___m_DeviceSimulatorActionAsset;

/// [SerializeField]
/// [Tooltip("Input Action asset containing controls for the simulated controllers. Unity will automatically enable and disable it as needed.")]
/// @brief Field m_ControllerActionAsset, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::InputSystem::InputActionAsset>  ___m_ControllerActionAsset;

/// [SerializeField]
/// [Tooltip("The Input System Action used to translate in the x-axis (left/right) while held. Must be a Value Axis Control.")]
/// @brief Field m_KeyboardXTranslateAction, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::InputSystem::InputActionReference>  ___m_KeyboardXTranslateAction;

/// [SerializeField]
/// [Tooltip("The Input System Action used to translate in the y-axis (up/down) while held. Must be a Value Axis Control.")]
/// @brief Field m_KeyboardYTranslateAction, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::InputSystem::InputActionReference>  ___m_KeyboardYTranslateAction;

/// [SerializeField]
/// [Tooltip("The Input System Action used to translate in the z-axis (forward/back) while held. Must be a Value Axis Control.")]
/// @brief Field m_KeyboardZTranslateAction, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::InputSystem::InputActionReference>  ___m_KeyboardZTranslateAction;

/// [SerializeField]
/// [Tooltip("The Input System Action used to enable manipulation of the left-hand controller while held. Must be a Button Control.")]
/// @brief Field m_ManipulateLeftAction, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::InputSystem::InputActionReference>  ___m_ManipulateLeftAction;

/// [SerializeField]
/// [Tooltip("The Input System Action used to enable manipulation of the right-hand controller while held. Must be a Button Control.")]
/// @brief Field m_ManipulateRightAction, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::InputSystem::InputActionReference>  ___m_ManipulateRightAction;

/// [SerializeField]
/// [Tooltip("The Input System Action used to toggle enable manipulation of the left-hand controller when pressed. Must be a Button Control.")]
/// @brief Field m_ToggleManipulateLeftAction, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::InputSystem::InputActionReference>  ___m_ToggleManipulateLeftAction;

/// [SerializeField]
/// [Tooltip("The Input System Action used to toggle enable manipulation of the right-hand controller when pressed. Must be a Button Control.")]
/// @brief Field m_ToggleManipulateRightAction, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::InputSystem::InputActionReference>  ___m_ToggleManipulateRightAction;

/// [SerializeField]
/// [Tooltip("The Input System Action used to toggle enable looking around with the HMD and controllers. Must be a Button Control.")]
/// @brief Field m_ToggleManipulateBodyAction, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::InputSystem::InputActionReference>  ___m_ToggleManipulateBodyAction;

/// [SerializeField]
/// [Tooltip("The Input System Action used to enable manipulation of the HMD while held. Must be a Button Control.")]
/// @brief Field m_ManipulateHeadAction, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::InputSystem::InputActionReference>  ___m_ManipulateHeadAction;

/// [SerializeField]
/// [Tooltip("The Input System Action used to change between hand and controller mode. Must be a Button Control.")]
/// @brief Field m_HandControllerModeAction, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::InputSystem::InputActionReference>  ___m_HandControllerModeAction;

/// [SerializeField]
/// [Tooltip("The Input System Action used to cycle between the different available devices. Must be a Button Control.")]
/// @brief Field m_CycleDevicesAction, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::InputSystem::InputActionReference>  ___m_CycleDevicesAction;

/// [SerializeField]
/// [Tooltip("The Input System Action used to stop all manipulation. Must be a Button Control.")]
/// @brief Field m_StopManipulationAction, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::UnityEngine::InputSystem::InputActionReference>  ___m_StopManipulationAction;

/// [SerializeField]
/// [Tooltip("The Input System Action used to translate or rotate by a scaled amount along or about the x- and y-axes. Must be a Value Vector2 Control.")]
/// @brief Field m_MouseDeltaAction, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::UnityEngine::InputSystem::InputActionReference>  ___m_MouseDeltaAction;

/// [SerializeField]
/// [Tooltip("The Input System Action used to translate or rotate by a scaled amount along or about the z-axis. Must be a Value Vector2 Control.")]
/// @brief Field m_MouseScrollAction, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::UnityEngine::InputSystem::InputActionReference>  ___m_MouseScrollAction;

/// [SerializeField]
/// [Tooltip("The Input System Action used to cause the manipulated device(s) to rotate when moving the mouse when held. Must be a Button Control.")]
/// @brief Field m_RotateModeOverrideAction, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::InputSystem::InputActionReference>  ___m_RotateModeOverrideAction;

/// [SerializeField]
/// [Tooltip("The Input System Action used to toggle between translating or rotating the manipulated device(s) when moving the mouse when pressed. Must be a Button Control.")]
/// @brief Field m_ToggleMouseTransformationModeAction, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::InputSystem::InputActionReference>  ___m_ToggleMouseTransformationModeAction;

/// [SerializeField]
/// [Tooltip("The Input System Action used to cause the manipulated device(s) to rotate when moving the mouse while held when it would normally translate, and vice-versa. Must be a Button Control.")]
/// @brief Field m_NegateModeAction, offset: 0xb0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::InputSystem::InputActionReference>  ___m_NegateModeAction;

/// [SerializeField]
/// [Tooltip("The Input System Action used to constrain the translation or rotation to the x-axis when moving the mouse or resetting. May be combined with another axis constraint to constrain to a plane. Must be a Button Control.")]
/// @brief Field m_XConstraintAction, offset: 0xb8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::InputSystem::InputActionReference>  ___m_XConstraintAction;

/// [SerializeField]
/// [Tooltip("The Input System Action used to constrain the translation or rotation to the y-axis when moving the mouse or resetting. May be combined with another axis constraint to constrain to a plane. Must be a Button Control.")]
/// @brief Field m_YConstraintAction, offset: 0xc0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::InputSystem::InputActionReference>  ___m_YConstraintAction;

/// [SerializeField]
/// [Tooltip("The Input System Action used to constrain the translation or rotation to the z-axis when moving the mouse or resetting. May be combined with another axis constraint to constrain to a plane. Must be a Button Control.")]
/// @brief Field m_ZConstraintAction, offset: 0xc8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::InputSystem::InputActionReference>  ___m_ZConstraintAction;

/// [SerializeField]
/// [Tooltip("The Input System Action used to cause the manipulated device(s) to reset position or rotation (depending on the effective manipulation mode). Must be a Button Control.")]
/// @brief Field m_ResetAction, offset: 0xd0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::InputSystem::InputActionReference>  ___m_ResetAction;

/// [SerializeField]
/// [Tooltip("The Input System Action used to toggle the cursor lock mode for the game window when pressed. Must be a Button Control.")]
/// @brief Field m_ToggleCursorLockAction, offset: 0xd8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::InputSystem::InputActionReference>  ___m_ToggleCursorLockAction;

/// [SerializeField]
/// [Tooltip("The Input System Action used to toggle enable translation from keyboard inputs when pressed. Must be a Button Control.")]
/// @brief Field m_ToggleDevicePositionTargetAction, offset: 0xe0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::InputSystem::InputActionReference>  ___m_ToggleDevicePositionTargetAction;

/// [SerializeField]
/// [Tooltip("The Input System Action used to toggle enable manipulation of the Primary2DAxis of the controllers when pressed. Must be a Button Control.")]
/// @brief Field m_TogglePrimary2DAxisTargetAction, offset: 0xe8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::InputSystem::InputActionReference>  ___m_TogglePrimary2DAxisTargetAction;

/// [SerializeField]
/// [Tooltip("The Input System Action used to toggle enable manipulation of the Secondary2DAxis of the controllers when pressed. Must be a Button Control.")]
/// @brief Field m_ToggleSecondary2DAxisTargetAction, offset: 0xf0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::InputSystem::InputActionReference>  ___m_ToggleSecondary2DAxisTargetAction;

/// [SerializeField]
/// [Tooltip("The Input System Action used to control the value of one or more 2D Axis controls on the manipulated controller device(s). Must be a Value Vector2 Control.")]
/// @brief Field m_Axis2DAction, offset: 0xf8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::InputSystem::InputActionReference>  ___m_Axis2DAction;

/// [SerializeField]
/// [Tooltip("The Input System Action used to control one or more 2D Axis controls on the opposite hand of the exclusively manipulated controller device. Must be a Value Vector2 Control.")]
/// @brief Field m_RestingHandAxis2DAction, offset: 0x100, size: 0x8, def value: None
 ::UnityW<::UnityEngine::InputSystem::InputActionReference>  ___m_RestingHandAxis2DAction;

/// [SerializeField]
/// [Tooltip("The Input System Action used to control the Grip control of the manipulated controller device(s). Must be a Button Control.")]
/// @brief Field m_GripAction, offset: 0x108, size: 0x8, def value: None
 ::UnityW<::UnityEngine::InputSystem::InputActionReference>  ___m_GripAction;

/// [SerializeField]
/// [Tooltip("The Input System Action used to control the Trigger control of the manipulated controller device(s). Must be a Button Control.")]
/// @brief Field m_TriggerAction, offset: 0x110, size: 0x8, def value: None
 ::UnityW<::UnityEngine::InputSystem::InputActionReference>  ___m_TriggerAction;

/// [SerializeField]
/// [Tooltip("The Input System Action used to control the PrimaryButton control of the manipulated controller device(s). Must be a Button Control.")]
/// @brief Field m_PrimaryButtonAction, offset: 0x118, size: 0x8, def value: None
 ::UnityW<::UnityEngine::InputSystem::InputActionReference>  ___m_PrimaryButtonAction;

/// [SerializeField]
/// [Tooltip("The Input System Action used to control the SecondaryButton control of the manipulated controller device(s). Must be a Button Control.")]
/// @brief Field m_SecondaryButtonAction, offset: 0x120, size: 0x8, def value: None
 ::UnityW<::UnityEngine::InputSystem::InputActionReference>  ___m_SecondaryButtonAction;

/// [SerializeField]
/// [Tooltip("The Input System Action used to control the Menu control of the manipulated controller device(s). Must be a Button Control.")]
/// @brief Field m_MenuAction, offset: 0x128, size: 0x8, def value: None
 ::UnityW<::UnityEngine::InputSystem::InputActionReference>  ___m_MenuAction;

/// [SerializeField]
/// [Tooltip("The Input System Action used to control the Primary2DAxisClick control of the manipulated controller device(s). Must be a Button Control.")]
/// @brief Field m_Primary2DAxisClickAction, offset: 0x130, size: 0x8, def value: None
 ::UnityW<::UnityEngine::InputSystem::InputActionReference>  ___m_Primary2DAxisClickAction;

/// [SerializeField]
/// [Tooltip("The Input System Action used to control the Secondary2DAxisClick control of the manipulated controller device(s). Must be a Button Control.")]
/// @brief Field m_Secondary2DAxisClickAction, offset: 0x138, size: 0x8, def value: None
 ::UnityW<::UnityEngine::InputSystem::InputActionReference>  ___m_Secondary2DAxisClickAction;

/// [SerializeField]
/// [Tooltip("The Input System Action used to control the Primary2DAxisTouch control of the manipulated controller device(s). Must be a Button Control.")]
/// @brief Field m_Primary2DAxisTouchAction, offset: 0x140, size: 0x8, def value: None
 ::UnityW<::UnityEngine::InputSystem::InputActionReference>  ___m_Primary2DAxisTouchAction;

/// [SerializeField]
/// [Tooltip("The Input System Action used to control the Secondary2DAxisTouch control of the manipulated controller device(s). Must be a Button Control.")]
/// @brief Field m_Secondary2DAxisTouchAction, offset: 0x148, size: 0x8, def value: None
 ::UnityW<::UnityEngine::InputSystem::InputActionReference>  ___m_Secondary2DAxisTouchAction;

/// [SerializeField]
/// [Tooltip("The Input System Action used to control the PrimaryTouch control of the manipulated controller device(s). Must be a Button Control.")]
/// @brief Field m_PrimaryTouchAction, offset: 0x150, size: 0x8, def value: None
 ::UnityW<::UnityEngine::InputSystem::InputActionReference>  ___m_PrimaryTouchAction;

/// [SerializeField]
/// [Tooltip("The Input System Action used to control the SecondaryTouch control of the manipulated controller device(s). Must be a Button Control.")]
/// @brief Field m_SecondaryTouchAction, offset: 0x158, size: 0x8, def value: None
 ::UnityW<::UnityEngine::InputSystem::InputActionReference>  ___m_SecondaryTouchAction;

/// [SerializeField]
/// [Tooltip("Input Action asset containing controls for the simulated hands. Unity will automatically enable and disable it as needed.")]
/// @brief Field m_HandActionAsset, offset: 0x160, size: 0x8, def value: None
 ::UnityW<::UnityEngine::InputSystem::InputActionAsset>  ___m_HandActionAsset;

/// [SerializeField]
/// [Tooltip("The Transform that contains the Camera. This is usually the \"Head\" of XR Origins. Automatically set to the first enabled camera tagged MainCamera if unset.")]
/// @brief Field m_CameraTransform, offset: 0x168, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___m_CameraTransform;

/// [SerializeField]
/// [Tooltip("The coordinate space in which keyboard translation should operate.")]
/// @brief Field m_KeyboardTranslateSpace, offset: 0x170, size: 0x4, def value: None
 ::GlobalNamespace::XRDeviceSimulator_Space  ___m_KeyboardTranslateSpace;

/// [SerializeField]
/// [Tooltip("The coordinate space in which mouse translation should operate.")]
/// @brief Field m_MouseTranslateSpace, offset: 0x174, size: 0x4, def value: None
 ::GlobalNamespace::XRDeviceSimulator_Space  ___m_MouseTranslateSpace;

/// [SerializeField]
/// [Tooltip("Speed of translation in the x-axis (left/right) when triggered by keyboard input.")]
/// @brief Field m_KeyboardXTranslateSpeed, offset: 0x178, size: 0x4, def value: None
 float_t  ___m_KeyboardXTranslateSpeed;

/// [SerializeField]
/// [Tooltip("Speed of translation in the y-axis (up/down) when triggered by keyboard input.")]
/// @brief Field m_KeyboardYTranslateSpeed, offset: 0x17c, size: 0x4, def value: None
 float_t  ___m_KeyboardYTranslateSpeed;

/// [SerializeField]
/// [Tooltip("Speed of translation in the z-axis (forward/back) when triggered by keyboard input.")]
/// @brief Field m_KeyboardZTranslateSpeed, offset: 0x180, size: 0x4, def value: None
 float_t  ___m_KeyboardZTranslateSpeed;

/// [SerializeField]
/// [Tooltip("Speed multiplier applied for body translation when triggered by keyboard input.")]
/// @brief Field m_KeyboardBodyTranslateMultiplier, offset: 0x184, size: 0x4, def value: None
 float_t  ___m_KeyboardBodyTranslateMultiplier;

/// [SerializeField]
/// [Tooltip("Sensitivity of translation in the x-axis (left/right) when triggered by mouse input.")]
/// @brief Field m_MouseXTranslateSensitivity, offset: 0x188, size: 0x4, def value: None
 float_t  ___m_MouseXTranslateSensitivity;

/// [SerializeField]
/// [Tooltip("Sensitivity of translation in the y-axis (up/down) when triggered by mouse input.")]
/// @brief Field m_MouseYTranslateSensitivity, offset: 0x18c, size: 0x4, def value: None
 float_t  ___m_MouseYTranslateSensitivity;

/// [SerializeField]
/// [Tooltip("Sensitivity of translation in the z-axis (forward/back) when triggered by mouse scroll input.")]
/// @brief Field m_MouseScrollTranslateSensitivity, offset: 0x190, size: 0x4, def value: None
 float_t  ___m_MouseScrollTranslateSensitivity;

/// [SerializeField]
/// [Tooltip("Sensitivity of rotation along the x-axis (pitch) when triggered by mouse input.")]
/// @brief Field m_MouseXRotateSensitivity, offset: 0x194, size: 0x4, def value: None
 float_t  ___m_MouseXRotateSensitivity;

/// [SerializeField]
/// [Tooltip("Sensitivity of rotation along the y-axis (yaw) when triggered by mouse input.")]
/// @brief Field m_MouseYRotateSensitivity, offset: 0x198, size: 0x4, def value: None
 float_t  ___m_MouseYRotateSensitivity;

/// [SerializeField]
/// [Tooltip("Sensitivity of rotation along the z-axis (roll) when triggered by mouse scroll input.")]
/// @brief Field m_MouseScrollRotateSensitivity, offset: 0x19c, size: 0x4, def value: None
 float_t  ___m_MouseScrollRotateSensitivity;

/// [SerializeField]
/// [Tooltip("A boolean value of whether to invert the y-axis of mouse input when rotating by mouse input.\nA false value (default) means typical FPS style where moving the mouse up/down pitches up/down.\nA true value means flight control style where moving the mouse up/down pitches down/up.")]
/// @brief Field m_MouseYRotateInvert, offset: 0x1a0, size: 0x1, def value: None
 bool  ___m_MouseYRotateInvert;

/// [SerializeField]
/// [Tooltip("The desired cursor lock mode to toggle to from None (either Locked or Confined).")]
/// @brief Field m_DesiredCursorLockMode, offset: 0x1a4, size: 0x4, def value: None
 ::UnityEngine::CursorLockMode  ___m_DesiredCursorLockMode;

/// [SerializeField]
/// [Tooltip("The optional Device Simulator UI prefab to use along with the XR Device Simulator.")]
/// @brief Field m_DeviceSimulatorUI, offset: 0x1a8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___m_DeviceSimulatorUI;

/// [SerializeField]
/// [Range(0, 1)]
/// [Tooltip("The amount of the simulated grip on the controller when the Grip control is pressed.")]
/// @brief Field m_GripAmount, offset: 0x1b0, size: 0x4, def value: None
 float_t  ___m_GripAmount;

/// [SerializeField]
/// [Range(0, 1)]
/// [Tooltip("The amount of the simulated trigger pull on the controller when the Trigger control is pressed.")]
/// @brief Field m_TriggerAmount, offset: 0x1b4, size: 0x4, def value: None
 float_t  ___m_TriggerAmount;

/// [SerializeField]
/// [Tooltip("Whether the HMD should report the pose as fully tracked or unavailable/inferred.")]
/// @brief Field m_HMDIsTracked, offset: 0x1b8, size: 0x1, def value: None
 bool  ___m_HMDIsTracked;

/// [SerializeField]
/// [Tooltip("Which tracking values the HMD should report as being valid or meaningful to use, which could mean either tracked or inferred.")]
/// @brief Field m_HMDTrackingState, offset: 0x1bc, size: 0x4, def value: None
 ::UnityEngine::XR::InputTrackingState  ___m_HMDTrackingState;

/// [SerializeField]
/// [Tooltip("Whether the left-hand controller should report the pose as fully tracked or unavailable/inferred.")]
/// @brief Field m_LeftControllerIsTracked, offset: 0x1c0, size: 0x1, def value: None
 bool  ___m_LeftControllerIsTracked;

/// [SerializeField]
/// [Tooltip("Which tracking values the left-hand controller should report as being valid or meaningful to use, which could mean either tracked or inferred.")]
/// @brief Field m_LeftControllerTrackingState, offset: 0x1c4, size: 0x4, def value: None
 ::UnityEngine::XR::InputTrackingState  ___m_LeftControllerTrackingState;

/// [SerializeField]
/// [Tooltip("Whether the right-hand controller should report the pose as fully tracked or unavailable/inferred.")]
/// @brief Field m_RightControllerIsTracked, offset: 0x1c8, size: 0x1, def value: None
 bool  ___m_RightControllerIsTracked;

/// [SerializeField]
/// [Tooltip("Which tracking values the right-hand controller should report as being valid or meaningful to use, which could mean either tracked or inferred.")]
/// @brief Field m_RightControllerTrackingState, offset: 0x1cc, size: 0x4, def value: None
 ::UnityEngine::XR::InputTrackingState  ___m_RightControllerTrackingState;

/// [SerializeField]
/// [Tooltip("Whether the left hand should report the pose as fully tracked or unavailable/inferred.")]
/// @brief Field m_LeftHandIsTracked, offset: 0x1d0, size: 0x1, def value: None
 bool  ___m_LeftHandIsTracked;

/// [SerializeField]
/// [Tooltip("Whether the right hand should report the pose as fully tracked or unavailable/inferred.")]
/// @brief Field m_RightHandIsTracked, offset: 0x1d1, size: 0x1, def value: None
 bool  ___m_RightHandIsTracked;

/// [CompilerGenerated]
/// @brief Field <mouseTransformationMode>k__BackingField, offset: 0x1d4, size: 0x4, def value: None
 ::GlobalNamespace::XRDeviceSimulator_TransformationMode  ____mouseTransformationMode_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <negateMode>k__BackingField, offset: 0x1d8, size: 0x1, def value: None
 bool  ____negateMode_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <axis2DTargets>k__BackingField, offset: 0x1dc, size: 0x4, def value: None
 ::GlobalNamespace::XRDeviceSimulator_Axis2DTargets  ____axis2DTargets_k__BackingField;

/// @brief Field m_TargetedDeviceInput, offset: 0x1e0, size: 0x4, def value: None
 ::GlobalNamespace::XRDeviceSimulator_TargetedDevices  ___m_TargetedDeviceInput;

/// [TupleElementNames(new[] { "transform", "camera" })]
/// @brief Field m_CachedCamera, offset: 0x1e8, size: 0x10, def value: None
 ::System::ValueTuple_2<::UnityW<::UnityEngine::Transform>,::UnityW<::UnityEngine::Camera>>  ___m_CachedCamera;

/// @brief Field m_KeyboardXTranslateInput, offset: 0x1f8, size: 0x4, def value: None
 float_t  ___m_KeyboardXTranslateInput;

/// @brief Field m_KeyboardYTranslateInput, offset: 0x1fc, size: 0x4, def value: None
 float_t  ___m_KeyboardYTranslateInput;

/// @brief Field m_KeyboardZTranslateInput, offset: 0x200, size: 0x4, def value: None
 float_t  ___m_KeyboardZTranslateInput;

/// @brief Field m_MouseDeltaInput, offset: 0x204, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___m_MouseDeltaInput;

/// @brief Field m_MouseScrollInput, offset: 0x20c, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___m_MouseScrollInput;

/// @brief Field m_RotateModeOverrideInput, offset: 0x214, size: 0x1, def value: None
 bool  ___m_RotateModeOverrideInput;

/// @brief Field m_XConstraintInput, offset: 0x215, size: 0x1, def value: None
 bool  ___m_XConstraintInput;

/// @brief Field m_YConstraintInput, offset: 0x216, size: 0x1, def value: None
 bool  ___m_YConstraintInput;

/// @brief Field m_ZConstraintInput, offset: 0x217, size: 0x1, def value: None
 bool  ___m_ZConstraintInput;

/// @brief Field m_ResetInput, offset: 0x218, size: 0x1, def value: None
 bool  ___m_ResetInput;

/// @brief Field m_Axis2DInput, offset: 0x21c, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___m_Axis2DInput;

/// @brief Field m_RestingHandAxis2DInput, offset: 0x224, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___m_RestingHandAxis2DInput;

/// @brief Field m_GripInput, offset: 0x22c, size: 0x1, def value: None
 bool  ___m_GripInput;

/// @brief Field m_TriggerInput, offset: 0x22d, size: 0x1, def value: None
 bool  ___m_TriggerInput;

/// @brief Field m_PrimaryButtonInput, offset: 0x22e, size: 0x1, def value: None
 bool  ___m_PrimaryButtonInput;

/// @brief Field m_SecondaryButtonInput, offset: 0x22f, size: 0x1, def value: None
 bool  ___m_SecondaryButtonInput;

/// @brief Field m_MenuInput, offset: 0x230, size: 0x1, def value: None
 bool  ___m_MenuInput;

/// @brief Field m_Primary2DAxisClickInput, offset: 0x231, size: 0x1, def value: None
 bool  ___m_Primary2DAxisClickInput;

/// @brief Field m_Secondary2DAxisClickInput, offset: 0x232, size: 0x1, def value: None
 bool  ___m_Secondary2DAxisClickInput;

/// @brief Field m_Primary2DAxisTouchInput, offset: 0x233, size: 0x1, def value: None
 bool  ___m_Primary2DAxisTouchInput;

/// @brief Field m_Secondary2DAxisTouchInput, offset: 0x234, size: 0x1, def value: None
 bool  ___m_Secondary2DAxisTouchInput;

/// @brief Field m_PrimaryTouchInput, offset: 0x235, size: 0x1, def value: None
 bool  ___m_PrimaryTouchInput;

/// @brief Field m_SecondaryTouchInput, offset: 0x236, size: 0x1, def value: None
 bool  ___m_SecondaryTouchInput;

/// @brief Field m_ManipulatedRestingHandAxis2D, offset: 0x237, size: 0x1, def value: None
 bool  ___m_ManipulatedRestingHandAxis2D;

/// @brief Field m_LeftControllerEuler, offset: 0x238, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_LeftControllerEuler;

/// @brief Field m_RightControllerEuler, offset: 0x244, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_RightControllerEuler;

/// @brief Field m_CenterEyeEuler, offset: 0x250, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_CenterEyeEuler;

/// @brief Field m_HMDState, offset: 0x25c, size: 0x75, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedHMDState  ___m_HMDState;

/// @brief Field m_LeftControllerState, offset: 0x2d4, size: 0x3f, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState  ___m_LeftControllerState;

/// @brief Field m_RightControllerState, offset: 0x314, size: 0x3f, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRSimulatedControllerState  ___m_RightControllerState;

/// @brief Field m_LeftHandState, offset: 0x358, size: 0x40, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::XRSimulatedHandState  ___m_LeftHandState;

/// @brief Field m_RightHandState, offset: 0x398, size: 0x40, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::XRSimulatedHandState  ___m_RightHandState;

/// @brief Field m_DeviceLifecycleManager, offset: 0x3d8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedDeviceLifecycleManager>  ___m_DeviceLifecycleManager;

/// @brief Field m_HandExpressionManager, offset: 0x3e0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::SimulatedHandExpressionManager>  ___m_HandExpressionManager;

/// [SerializeField]
/// [Obsolete("m_RestingHandExpressionCapture has been deprecated in XRI 3.1.0 and moved to SimulatedHandExpressionManager.")]
/// @brief Field m_RestingHandExpressionCapture, offset: 0x3e8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionCapture>  ___m_RestingHandExpressionCapture;

/// [SerializeField]
/// [Tooltip("The list of hand expressions to simulate.")]
/// [Obsolete("m_SimulatedHandExpressions has been deprecated in XRI 3.1.0 and moved to SimulatedHandExpressionManager.")]
/// @brief Field m_SimulatedHandExpressions, offset: 0x3f0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression*>*  ___m_SimulatedHandExpressions;

/// @brief Size padding 0x3f0 - 0x3f8 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_DeviceSimulatorActionAsset) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_ControllerActionAsset) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_KeyboardXTranslateAction) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_KeyboardYTranslateAction) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_KeyboardZTranslateAction) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_ManipulateLeftAction) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_ManipulateRightAction) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_ToggleManipulateLeftAction) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_ToggleManipulateRightAction) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_ToggleManipulateBodyAction) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_ManipulateHeadAction) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_HandControllerModeAction) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_CycleDevicesAction) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_StopManipulationAction) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_MouseDeltaAction) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_MouseScrollAction) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_RotateModeOverrideAction) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_ToggleMouseTransformationModeAction) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_NegateModeAction) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_XConstraintAction) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_YConstraintAction) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_ZConstraintAction) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_ResetAction) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_ToggleCursorLockAction) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_ToggleDevicePositionTargetAction) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_TogglePrimary2DAxisTargetAction) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_ToggleSecondary2DAxisTargetAction) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_Axis2DAction) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_RestingHandAxis2DAction) == 0x100, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_GripAction) == 0x108, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_TriggerAction) == 0x110, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_PrimaryButtonAction) == 0x118, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_SecondaryButtonAction) == 0x120, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_MenuAction) == 0x128, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_Primary2DAxisClickAction) == 0x130, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_Secondary2DAxisClickAction) == 0x138, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_Primary2DAxisTouchAction) == 0x140, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_Secondary2DAxisTouchAction) == 0x148, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_PrimaryTouchAction) == 0x150, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_SecondaryTouchAction) == 0x158, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_HandActionAsset) == 0x160, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_CameraTransform) == 0x168, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_KeyboardTranslateSpace) == 0x170, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_MouseTranslateSpace) == 0x174, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_KeyboardXTranslateSpeed) == 0x178, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_KeyboardYTranslateSpeed) == 0x17c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_KeyboardZTranslateSpeed) == 0x180, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_KeyboardBodyTranslateMultiplier) == 0x184, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_MouseXTranslateSensitivity) == 0x188, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_MouseYTranslateSensitivity) == 0x18c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_MouseScrollTranslateSensitivity) == 0x190, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_MouseXRotateSensitivity) == 0x194, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_MouseYRotateSensitivity) == 0x198, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_MouseScrollRotateSensitivity) == 0x19c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_MouseYRotateInvert) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_DesiredCursorLockMode) == 0x1a4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_DeviceSimulatorUI) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_GripAmount) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_TriggerAmount) == 0x1b4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_HMDIsTracked) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_HMDTrackingState) == 0x1bc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_LeftControllerIsTracked) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_LeftControllerTrackingState) == 0x1c4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_RightControllerIsTracked) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_RightControllerTrackingState) == 0x1cc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_LeftHandIsTracked) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_RightHandIsTracked) == 0x1d1, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ____mouseTransformationMode_k__BackingField) == 0x1d4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ____negateMode_k__BackingField) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ____axis2DTargets_k__BackingField) == 0x1dc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_TargetedDeviceInput) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_CachedCamera) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_KeyboardXTranslateInput) == 0x1f8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_KeyboardYTranslateInput) == 0x1fc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_KeyboardZTranslateInput) == 0x200, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_MouseDeltaInput) == 0x204, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_MouseScrollInput) == 0x20c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_RotateModeOverrideInput) == 0x214, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_XConstraintInput) == 0x215, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_YConstraintInput) == 0x216, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_ZConstraintInput) == 0x217, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_ResetInput) == 0x218, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_Axis2DInput) == 0x21c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_RestingHandAxis2DInput) == 0x224, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_GripInput) == 0x22c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_TriggerInput) == 0x22d, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_PrimaryButtonInput) == 0x22e, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_SecondaryButtonInput) == 0x22f, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_MenuInput) == 0x230, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_Primary2DAxisClickInput) == 0x231, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_Secondary2DAxisClickInput) == 0x232, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_Primary2DAxisTouchInput) == 0x233, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_Secondary2DAxisTouchInput) == 0x234, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_PrimaryTouchInput) == 0x235, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_SecondaryTouchInput) == 0x236, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_ManipulatedRestingHandAxis2D) == 0x237, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_LeftControllerEuler) == 0x238, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_RightControllerEuler) == 0x244, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_CenterEyeEuler) == 0x250, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_HMDState) == 0x25c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_LeftControllerState) == 0x2d4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_RightControllerState) == 0x314, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_LeftHandState) == 0x358, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_RightHandState) == 0x398, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_DeviceLifecycleManager) == 0x3d8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_HandExpressionManager) == 0x3e0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_RestingHandExpressionCapture) == 0x3e8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator, ___m_SimulatedHandExpressions) == 0x3f0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator) == 0x3f0, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation
// [Obsolete("XRDeviceSimulator.SimulatedHandExpression has been deprecated in XRI 3.1.0. Update the XR Device Simulator sample in Package Manager or use the unnested version of SimulatedHandExpression instead.")]
// Dependencies System.Object, UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.Hands.HandExpressionName
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator/SimulatedHandExpression
class CORDL_TYPE XRDeviceSimulator_SimulatedHandExpression : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_capture, put=set_capture)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionCapture>  capture;

 __declspec(property(get=get_expressionName, put=set_expressionName)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionName  expressionName;

 __declspec(property(get=get_icon)) ::UnityW<::UnityEngine::Sprite>  icon;

/// @brief Field m_Capture, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Capture, put=__cordl_internal_set_m_Capture)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionCapture>  m_Capture;

/// @brief Field m_ExpressionName, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_ExpressionName, put=__cordl_internal_set_m_ExpressionName)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionName  m_ExpressionName;

/// @brief Field m_Name, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Name, put=__cordl_internal_set_m_Name)) ::StringW  m_Name;

/// @brief Field m_Performed, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Performed, put=__cordl_internal_set_m_Performed)) ::System::Action_2<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression*,::GlobalNamespace::InputAction_CallbackContext>*  m_Performed;

/// @brief Field m_Subscribed, offset 0x40, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_Subscribed, put=__cordl_internal_set_m_Subscribed)) bool  m_Subscribed;

/// @brief Field m_ToggleAction, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ToggleAction, put=__cordl_internal_set_m_ToggleAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  m_ToggleAction;

 __declspec(property(get=get_name)) ::StringW  name;

 __declspec(property(get=get_toggleAction)) ::UnityW<::UnityEngine::InputSystem::InputActionReference>  toggleAction;

/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr operator  ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

static inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression* New_ctor() ;

/// @brief Method OnActionPerformed, addr 0xb4c3280, size 0x2c, virtual false, abstract: false, final false
inline void OnActionPerformed(::GlobalNamespace::InputAction_CallbackContext  context) ;

/// @brief Method UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize, addr 0xb4c31ec, size 0x58, virtual true, abstract: false, final true
inline void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize() ;

/// @brief Method UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize, addr 0xb4c3170, size 0x7c, virtual true, abstract: false, final true
inline void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize() ;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionCapture> const& __cordl_internal_get_m_Capture() const;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionCapture>& __cordl_internal_get_m_Capture() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionName const& __cordl_internal_get_m_ExpressionName() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionName& __cordl_internal_get_m_ExpressionName() ;

constexpr ::StringW const& __cordl_internal_get_m_Name() const;

constexpr ::StringW& __cordl_internal_get_m_Name() ;

constexpr ::System::Action_2<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression*,::GlobalNamespace::InputAction_CallbackContext>* const& __cordl_internal_get_m_Performed() const;

constexpr ::System::Action_2<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression*,::GlobalNamespace::InputAction_CallbackContext>*& __cordl_internal_get_m_Performed() ;

constexpr bool const& __cordl_internal_get_m_Subscribed() const;

constexpr bool& __cordl_internal_get_m_Subscribed() ;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference> const& __cordl_internal_get_m_ToggleAction() const;

constexpr ::UnityW<::UnityEngine::InputSystem::InputActionReference>& __cordl_internal_get_m_ToggleAction() ;

constexpr void __cordl_internal_set_m_Capture(::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionCapture>  value) ;

constexpr void __cordl_internal_set_m_ExpressionName(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionName  value) ;

constexpr void __cordl_internal_set_m_Name(::StringW  value) ;

constexpr void __cordl_internal_set_m_Performed(::System::Action_2<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression*,::GlobalNamespace::InputAction_CallbackContext>*  value) ;

constexpr void __cordl_internal_set_m_Subscribed(bool  value) ;

constexpr void __cordl_internal_set_m_ToggleAction(::UnityW<::UnityEngine::InputSystem::InputActionReference>  value) ;

/// @brief Method .ctor, addr 0xb4c32ac, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method add_performed, addr 0xb4c2ef4, size 0x140, virtual false, abstract: false, final false
inline void add_performed(::System::Action_2<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression*,::GlobalNamespace::InputAction_CallbackContext>*  value) ;

/// @brief Method get_capture, addr 0xb4c2eb4, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionCapture> get_capture() ;

/// @brief Method get_expressionName, addr 0xb4c2ec4, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionName get_expressionName() ;

/// @brief Method get_icon, addr 0xb4c2edc, size 0x18, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Sprite> get_icon() ;

/// @brief Method get_name, addr 0xb4c2e18, size 0x6c, virtual false, abstract: false, final false
inline ::StringW get_name() ;

/// @brief Method get_toggleAction, addr 0xb4c2eac, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::InputSystem::InputActionReference> get_toggleAction() ;

/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* i___UnityEngine__ISerializationCallbackReceiver() noexcept;

/// @brief Method remove_performed, addr 0xb4c3034, size 0x13c, virtual false, abstract: false, final false
inline void remove_performed(::System::Action_2<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression*,::GlobalNamespace::InputAction_CallbackContext>*  value) ;

/// @brief Method set_capture, addr 0xb4c2ebc, size 0x8, virtual false, abstract: false, final false
inline void set_capture(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionCapture*  value) ;

/// @brief Method set_expressionName, addr 0xb4c2ed0, size 0xc, virtual false, abstract: false, final false
inline void set_expressionName(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionName  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRDeviceSimulator_SimulatedHandExpression() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRDeviceSimulator_SimulatedHandExpression", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRDeviceSimulator_SimulatedHandExpression(XRDeviceSimulator_SimulatedHandExpression && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRDeviceSimulator_SimulatedHandExpression", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRDeviceSimulator_SimulatedHandExpression(XRDeviceSimulator_SimulatedHandExpression const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11621};

/// [SerializeField]
/// [Tooltip("The unique name for the hand expression.")]
/// [Delayed]
/// @brief Field m_Name, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___m_Name;

/// [SerializeField]
/// [Tooltip("The input action to trigger the hand expression.")]
/// @brief Field m_ToggleAction, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::InputSystem::InputActionReference>  ___m_ToggleAction;

/// [SerializeField]
/// [Tooltip("The captured hand expression to simulate when the input action is performed.")]
/// @brief Field m_Capture, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionCapture>  ___m_Capture;

/// @brief Field m_ExpressionName, offset: 0x28, size: 0x10, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::Hands::HandExpressionName  ___m_ExpressionName;

/// @brief Field m_Performed, offset: 0x38, size: 0x8, def value: None
 ::System::Action_2<::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression*,::GlobalNamespace::InputAction_CallbackContext>*  ___m_Performed;

/// @brief Field m_Subscribed, offset: 0x40, size: 0x1, def value: None
 bool  ___m_Subscribed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression, ___m_Name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression, ___m_ToggleAction) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression, ___m_Capture) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression, ___m_ExpressionName) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression, ___m_Performed) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression, ___m_Subscribed) == 0x40, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation::XRDeviceSimulator_SimulatedHandExpression) == 0x48, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Inputs::Simulation
