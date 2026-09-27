#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Inputs/XRInputModalityManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Inputs/zzzz__XRInputModalityManager_InputMode_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XRInputModalityManager)
namespace GlobalNamespace {
struct XRInputModalityManager_InputMode;
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
namespace Unity::XR::CoreUtils::Bindings::Variables {
template<typename T>
class BindableEnum_1;
}
namespace Unity::XR::CoreUtils::Bindings::Variables {
template<typename T>
class IReadOnlyBindableVariable_1;
}
namespace UnityEngine::Events {
class UnityEvent;
}
namespace UnityEngine::InputSystem::Utilities {
struct InternedString;
}
namespace UnityEngine::InputSystem::XR {
class XRController;
}
namespace UnityEngine::InputSystem {
struct InputDeviceChange;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
namespace UnityEngine::InputSystem {
class TrackedDevice;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs {
class XRInputModalityManager_InputDeviceMonitor;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs {
class XRInputModalityManager_TrackedDeviceMonitor;
}
namespace UnityEngine::XR {
struct InputDevice;
}
namespace UnityEngine::XR {
struct XRNodeState;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Inputs {
class XRInputModalityManager;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs {
class XRInputModalityManager_InputDeviceMonitor;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs {
class XRInputModalityManager_TrackedDeviceMonitor;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputModalityManager*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputModalityManager_InputDeviceMonitor*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputModalityManager_TrackedDeviceMonitor*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputModalityManager*, "UnityEngine.XR.Interaction.Toolkit.Inputs", "XRInputModalityManager");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputModalityManager_InputDeviceMonitor*, "UnityEngine.XR.Interaction.Toolkit.Inputs", "XRInputModalityManager/InputDeviceMonitor");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputModalityManager_TrackedDeviceMonitor*, "UnityEngine.XR.Interaction.Toolkit.Inputs", "XRInputModalityManager/TrackedDeviceMonitor");
// [AddComponentMenu("XR/XR Input Modality Manager", 11)]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Inputs.XRInputModalityManager.html")]
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.XR.Interaction.Toolkit.Inputs.XRInputModalityManager::InputMode
namespace UnityEngine::XR::Interaction::Toolkit::Inputs {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Inputs.XRInputModalityManager
class CORDL_TYPE XRInputModalityManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using InputMode = ::GlobalNamespace::XRInputModalityManager_InputMode;

using InputDeviceMonitor = ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputModalityManager_InputDeviceMonitor;

using TrackedDeviceMonitor = ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputModalityManager_TrackedDeviceMonitor;

/// @brief Field <activeModalityManagers>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__activeModalityManagers_k__BackingField, put=setStaticF__activeModalityManagers_k__BackingField)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputModalityManager>>*  _activeModalityManagers_k__BackingField;

/// @brief Field activeModalityManagersChanged, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_activeModalityManagersChanged, put=setStaticF_activeModalityManagersChanged)) ::System::Action_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputModalityManager>,bool>*  activeModalityManagersChanged;

 __declspec(property(get=get_leftController, put=set_leftController)) ::UnityW<::UnityEngine::GameObject>  leftController;

 __declspec(property(get=get_leftHand, put=set_leftHand)) ::UnityW<::UnityEngine::GameObject>  leftHand;

 __declspec(property(get=get_leftInputMode)) ::GlobalNamespace::XRInputModalityManager_InputMode  leftInputMode;

/// @brief Field leftInputModeChanged, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_leftInputModeChanged, put=__cordl_internal_set_leftInputModeChanged)) ::System::Action_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputModalityManager>,::GlobalNamespace::XRInputModalityManager_InputMode>*  leftInputModeChanged;

/// @brief Field m_InputDeviceMonitor, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_InputDeviceMonitor, put=__cordl_internal_set_m_InputDeviceMonitor)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputModalityManager_InputDeviceMonitor*  m_InputDeviceMonitor;

/// @brief Field m_LeftController, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LeftController, put=__cordl_internal_set_m_LeftController)) ::UnityW<::UnityEngine::GameObject>  m_LeftController;

/// @brief Field m_LeftHand, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LeftHand, put=__cordl_internal_set_m_LeftHand)) ::UnityW<::UnityEngine::GameObject>  m_LeftHand;

/// @brief Field m_LeftInputMode, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_LeftInputMode, put=__cordl_internal_set_m_LeftInputMode)) ::GlobalNamespace::XRInputModalityManager_InputMode  m_LeftInputMode;

/// @brief Field m_MotionControllerModeEnded, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_MotionControllerModeEnded, put=__cordl_internal_set_m_MotionControllerModeEnded)) ::UnityEngine::Events::UnityEvent*  m_MotionControllerModeEnded;

/// @brief Field m_MotionControllerModeStarted, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_MotionControllerModeStarted, put=__cordl_internal_set_m_MotionControllerModeStarted)) ::UnityEngine::Events::UnityEvent*  m_MotionControllerModeStarted;

/// @brief Field m_RightController, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_RightController, put=__cordl_internal_set_m_RightController)) ::UnityW<::UnityEngine::GameObject>  m_RightController;

/// @brief Field m_RightHand, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_RightHand, put=__cordl_internal_set_m_RightHand)) ::UnityW<::UnityEngine::GameObject>  m_RightHand;

/// @brief Field m_RightInputMode, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_RightInputMode, put=__cordl_internal_set_m_RightInputMode)) ::GlobalNamespace::XRInputModalityManager_InputMode  m_RightInputMode;

/// @brief Field m_TrackedDeviceMonitor, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_TrackedDeviceMonitor, put=__cordl_internal_set_m_TrackedDeviceMonitor)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputModalityManager_TrackedDeviceMonitor*  m_TrackedDeviceMonitor;

/// @brief Field m_TrackedHandModeEnded, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_TrackedHandModeEnded, put=__cordl_internal_set_m_TrackedHandModeEnded)) ::UnityEngine::Events::UnityEvent*  m_TrackedHandModeEnded;

/// @brief Field m_TrackedHandModeStarted, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_TrackedHandModeStarted, put=__cordl_internal_set_m_TrackedHandModeStarted)) ::UnityEngine::Events::UnityEvent*  m_TrackedHandModeStarted;

 __declspec(property(get=get_motionControllerModeEnded, put=set_motionControllerModeEnded)) ::UnityEngine::Events::UnityEvent*  motionControllerModeEnded;

 __declspec(property(get=get_motionControllerModeStarted, put=set_motionControllerModeStarted)) ::UnityEngine::Events::UnityEvent*  motionControllerModeStarted;

 __declspec(property(get=get_rightController, put=set_rightController)) ::UnityW<::UnityEngine::GameObject>  rightController;

 __declspec(property(get=get_rightHand, put=set_rightHand)) ::UnityW<::UnityEngine::GameObject>  rightHand;

 __declspec(property(get=get_rightInputMode)) ::GlobalNamespace::XRInputModalityManager_InputMode  rightInputMode;

/// @brief Field rightInputModeChanged, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_rightInputModeChanged, put=__cordl_internal_set_rightInputModeChanged)) ::System::Action_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputModalityManager>,::GlobalNamespace::XRInputModalityManager_InputMode>*  rightInputModeChanged;

/// @brief Field s_CurrentInputMode, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_CurrentInputMode, put=setStaticF_s_CurrentInputMode)) ::Unity::XR::CoreUtils::Bindings::Variables::BindableEnum_1<::GlobalNamespace::XRInputModalityManager_InputMode>*  s_CurrentInputMode;

 __declspec(property(get=get_trackedHandModeEnded, put=set_trackedHandModeEnded)) ::UnityEngine::Events::UnityEvent*  trackedHandModeEnded;

 __declspec(property(get=get_trackedHandModeStarted, put=set_trackedHandModeStarted)) ::UnityEngine::Events::UnityEvent*  trackedHandModeStarted;

/// @brief Method GetLeftHandIsTracked, addr 0xb4b32cc, size 0x8, virtual false, abstract: false, final false
inline bool GetLeftHandIsTracked() ;

/// @brief Method GetRightHandIsTracked, addr 0xb4b32d4, size 0x8, virtual false, abstract: false, final false
inline bool GetRightHandIsTracked() ;

/// @brief Method IsHandInteractionXRControllerType, addr 0xb4b389c, size 0xb8, virtual false, abstract: false, final false
static inline bool IsHandInteractionXRControllerType(::UnityEngine::InputSystem::XR::XRController*  device) ;

/// @brief Method IsTracked, addr 0xb4b3a24, size 0x84, virtual false, abstract: false, final false
static inline bool IsTracked(::UnityEngine::InputSystem::TrackedDevice*  device) ;

/// @brief Method IsTracked, addr 0xb4b3b88, size 0xd8, virtual false, abstract: false, final false
static inline bool IsTracked(::UnityEngine::XR::InputDevice  device) ;

/// @brief Method LogMissingHandSubsystem, addr 0xb4b2f78, size 0x4, virtual false, abstract: false, final false
inline void LogMissingHandSubsystem() ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputModalityManager* New_ctor() ;

/// @brief Method OnControllerTrackingAcquired, addr 0xb4b434c, size 0x168, virtual false, abstract: false, final false
inline void OnControllerTrackingAcquired(::UnityEngine::InputSystem::TrackedDevice*  device) ;

/// @brief Method OnControllerTrackingAcquired, addr 0xb4b44b4, size 0x64, virtual false, abstract: false, final false
inline void OnControllerTrackingAcquired(::UnityEngine::XR::InputDevice  device) ;

/// @brief Method OnDeviceChange, addr 0xb4b3e0c, size 0x288, virtual false, abstract: false, final false
inline void OnDeviceChange(::UnityEngine::InputSystem::InputDevice*  device, ::UnityEngine::InputSystem::InputDeviceChange  change) ;

/// @brief Method OnDeviceConfigChanged, addr 0xb4b4348, size 0x4, virtual false, abstract: false, final false
inline void OnDeviceConfigChanged(::UnityEngine::XR::InputDevice  device) ;

/// @brief Method OnDeviceConnected, addr 0xb4b4124, size 0xf8, virtual false, abstract: false, final false
inline void OnDeviceConnected(::UnityEngine::XR::InputDevice  device) ;

/// @brief Method OnDeviceDisconnected, addr 0xb4b421c, size 0x8c, virtual false, abstract: false, final false
inline void OnDeviceDisconnected(::UnityEngine::XR::InputDevice  device) ;

/// @brief Method OnDisable, addr 0xb4b2a28, size 0x2f8, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xb4b218c, size 0x3f8, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnModeChanged, addr 0xb4b30f4, size 0x10c, virtual false, abstract: false, final false
inline void OnModeChanged(::GlobalNamespace::XRInputModalityManager_InputMode  oldInputMode, ::GlobalNamespace::XRInputModalityManager_InputMode  newInputMode, ::GlobalNamespace::XRInputModalityManager_InputMode  otherHandInputMode) ;

/// @brief Method SafeSetActive, addr 0xb4b3048, size 0xac, virtual false, abstract: false, final false
static inline void SafeSetActive(::UnityEngine::GameObject*  gameObject, bool  active) ;

/// @brief Method SetLeftMode, addr 0xb4b2f7c, size 0xcc, virtual false, abstract: false, final false
inline void SetLeftMode(::GlobalNamespace::XRInputModalityManager_InputMode  inputMode) ;

/// @brief Method SetRightMode, addr 0xb4b3200, size 0xcc, virtual false, abstract: false, final false
inline void SetRightMode(::GlobalNamespace::XRInputModalityManager_InputMode  inputMode) ;

/// @brief Method ShouldIgnoreXRControllerType, addr 0xb4b3d54, size 0xb8, virtual false, abstract: false, final false
static inline bool ShouldIgnoreXRControllerType(::UnityEngine::InputSystem::XR::XRController*  device) ;

/// @brief Method SubscribeHandSubsystem, addr 0xb4b2584, size 0x4, virtual false, abstract: false, final false
inline void SubscribeHandSubsystem() ;

/// @brief Method TryGetControllerDevice, addr 0xb4b32dc, size 0x1e8, virtual false, abstract: false, final false
static inline bool TryGetControllerDevice(::UnityEngine::InputSystem::Utilities::InternedString  usage, ::by_ref<::UnityEngine::InputSystem::XR::XRController*>  controllerDevice) ;

/// @brief Method UnsubscribeHandSubsystem, addr 0xb4b2d20, size 0x4, virtual false, abstract: false, final false
inline void UnsubscribeHandSubsystem() ;

/// @brief Method Update, addr 0xb4b2f74, size 0x4, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateLeftMode, addr 0xb4b26e8, size 0x1a0, virtual false, abstract: false, final false
inline void UpdateLeftMode() ;

/// @brief Method UpdateLeftMode, addr 0xb4b34c4, size 0xb4, virtual false, abstract: false, final false
inline void UpdateLeftMode(::UnityEngine::InputSystem::XR::XRController*  controllerDevice) ;

/// @brief Method UpdateMode, addr 0xb4b3954, size 0xd0, virtual false, abstract: false, final false
inline void UpdateMode(::UnityEngine::InputSystem::XR::XRController*  controllerDevice, ::System::Action_1<::GlobalNamespace::XRInputModalityManager_InputMode>*  setModeMethod) ;

/// @brief Method UpdateMode, addr 0xb4b36d8, size 0xe8, virtual false, abstract: false, final false
inline void UpdateMode(::UnityEngine::XR::InputDevice  controllerDevice, ::System::Action_1<::GlobalNamespace::XRInputModalityManager_InputMode>*  setModeMethod) ;

/// @brief Method UpdateRightMode, addr 0xb4b2888, size 0x1a0, virtual false, abstract: false, final false
inline void UpdateRightMode() ;

/// @brief Method UpdateRightMode, addr 0xb4b37d0, size 0xb4, virtual false, abstract: false, final false
inline void UpdateRightMode(::UnityEngine::InputSystem::XR::XRController*  controllerDevice) ;

constexpr ::System::Action_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputModalityManager>,::GlobalNamespace::XRInputModalityManager_InputMode>* const& __cordl_internal_get_leftInputModeChanged() const;

constexpr ::System::Action_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputModalityManager>,::GlobalNamespace::XRInputModalityManager_InputMode>*& __cordl_internal_get_leftInputModeChanged() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputModalityManager_InputDeviceMonitor* const& __cordl_internal_get_m_InputDeviceMonitor() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputModalityManager_InputDeviceMonitor*& __cordl_internal_get_m_InputDeviceMonitor() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_m_LeftController() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_m_LeftController() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_m_LeftHand() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_m_LeftHand() ;

constexpr ::GlobalNamespace::XRInputModalityManager_InputMode const& __cordl_internal_get_m_LeftInputMode() const;

constexpr ::GlobalNamespace::XRInputModalityManager_InputMode& __cordl_internal_get_m_LeftInputMode() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_m_MotionControllerModeEnded() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_m_MotionControllerModeEnded() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_m_MotionControllerModeStarted() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_m_MotionControllerModeStarted() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_m_RightController() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_m_RightController() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_m_RightHand() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_m_RightHand() ;

constexpr ::GlobalNamespace::XRInputModalityManager_InputMode const& __cordl_internal_get_m_RightInputMode() const;

constexpr ::GlobalNamespace::XRInputModalityManager_InputMode& __cordl_internal_get_m_RightInputMode() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputModalityManager_TrackedDeviceMonitor* const& __cordl_internal_get_m_TrackedDeviceMonitor() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputModalityManager_TrackedDeviceMonitor*& __cordl_internal_get_m_TrackedDeviceMonitor() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_m_TrackedHandModeEnded() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_m_TrackedHandModeEnded() ;

constexpr ::UnityEngine::Events::UnityEvent* const& __cordl_internal_get_m_TrackedHandModeStarted() const;

constexpr ::UnityEngine::Events::UnityEvent*& __cordl_internal_get_m_TrackedHandModeStarted() ;

constexpr ::System::Action_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputModalityManager>,::GlobalNamespace::XRInputModalityManager_InputMode>* const& __cordl_internal_get_rightInputModeChanged() const;

constexpr ::System::Action_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputModalityManager>,::GlobalNamespace::XRInputModalityManager_InputMode>*& __cordl_internal_get_rightInputModeChanged() ;

constexpr void __cordl_internal_set_leftInputModeChanged(::System::Action_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputModalityManager>,::GlobalNamespace::XRInputModalityManager_InputMode>*  value) ;

constexpr void __cordl_internal_set_m_InputDeviceMonitor(::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputModalityManager_InputDeviceMonitor*  value) ;

constexpr void __cordl_internal_set_m_LeftController(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_m_LeftHand(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_m_LeftInputMode(::GlobalNamespace::XRInputModalityManager_InputMode  value) ;

constexpr void __cordl_internal_set_m_MotionControllerModeEnded(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_m_MotionControllerModeStarted(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_m_RightController(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_m_RightHand(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_m_RightInputMode(::GlobalNamespace::XRInputModalityManager_InputMode  value) ;

constexpr void __cordl_internal_set_m_TrackedDeviceMonitor(::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputModalityManager_TrackedDeviceMonitor*  value) ;

constexpr void __cordl_internal_set_m_TrackedHandModeEnded(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_m_TrackedHandModeStarted(::UnityEngine::Events::UnityEvent*  value) ;

constexpr void __cordl_internal_set_rightInputModeChanged(::System::Action_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputModalityManager>,::GlobalNamespace::XRInputModalityManager_InputMode>*  value) ;

/// @brief Method .ctor, addr 0xb4b4518, size 0xa4, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_activeModalityManagersChanged, addr 0xb4b1fa4, size 0xf4, virtual false, abstract: false, final false
static inline void add_activeModalityManagersChanged(::System::Action_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputModalityManager>,bool>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_leftInputModeChanged, addr 0xb4b1c8c, size 0xb0, virtual false, abstract: false, final false
inline void add_leftInputModeChanged(::System::Action_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputModalityManager>,::GlobalNamespace::XRInputModalityManager_InputMode>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_rightInputModeChanged, addr 0xb4b1dec, size 0xb0, virtual false, abstract: false, final false
inline void add_rightInputModeChanged(::System::Action_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputModalityManager>,::GlobalNamespace::XRInputModalityManager_InputMode>*  value) ;

static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputModalityManager>>* getStaticF__activeModalityManagers_k__BackingField() ;

static inline ::System::Action_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputModalityManager>,bool>* getStaticF_activeModalityManagersChanged() ;

static inline ::Unity::XR::CoreUtils::Bindings::Variables::BindableEnum_1<::GlobalNamespace::XRInputModalityManager_InputMode>* getStaticF_s_CurrentInputMode() ;

/// [CompilerGenerated]
/// @brief Method get_activeModalityManagers, addr 0xb4b1f4c, size 0x58, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputModalityManager>>* get_activeModalityManagers() ;

/// @brief Method get_currentInputMode, addr 0xb4b1c24, size 0x58, virtual false, abstract: false, final false
static inline ::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<::GlobalNamespace::XRInputModalityManager_InputMode>* get_currentInputMode() ;

/// @brief Method get_leftController, addr 0xb4b1bc4, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> get_leftController() ;

/// @brief Method get_leftHand, addr 0xb4b1ba4, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> get_leftHand() ;

/// @brief Method get_leftInputMode, addr 0xb4b1c7c, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::XRInputModalityManager_InputMode get_leftInputMode() ;

/// @brief Method get_motionControllerModeEnded, addr 0xb4b1c14, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Events::UnityEvent* get_motionControllerModeEnded() ;

/// @brief Method get_motionControllerModeStarted, addr 0xb4b1c04, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Events::UnityEvent* get_motionControllerModeStarted() ;

/// @brief Method get_rightController, addr 0xb4b1bd4, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> get_rightController() ;

/// @brief Method get_rightHand, addr 0xb4b1bb4, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> get_rightHand() ;

/// @brief Method get_rightInputMode, addr 0xb4b1c84, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::XRInputModalityManager_InputMode get_rightInputMode() ;

/// @brief Method get_trackedHandModeEnded, addr 0xb4b1bf4, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Events::UnityEvent* get_trackedHandModeEnded() ;

/// @brief Method get_trackedHandModeStarted, addr 0xb4b1be4, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::Events::UnityEvent* get_trackedHandModeStarted() ;

/// [CompilerGenerated]
/// @brief Method remove_activeModalityManagersChanged, addr 0xb4b2098, size 0xf4, virtual false, abstract: false, final false
static inline void remove_activeModalityManagersChanged(::System::Action_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputModalityManager>,bool>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_leftInputModeChanged, addr 0xb4b1d3c, size 0xb0, virtual false, abstract: false, final false
inline void remove_leftInputModeChanged(::System::Action_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputModalityManager>,::GlobalNamespace::XRInputModalityManager_InputMode>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_rightInputModeChanged, addr 0xb4b1e9c, size 0xb0, virtual false, abstract: false, final false
inline void remove_rightInputModeChanged(::System::Action_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputModalityManager>,::GlobalNamespace::XRInputModalityManager_InputMode>*  value) ;

static inline void setStaticF__activeModalityManagers_k__BackingField(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputModalityManager>>*  value) ;

static inline void setStaticF_activeModalityManagersChanged(::System::Action_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputModalityManager>,bool>*  value) ;

static inline void setStaticF_s_CurrentInputMode(::Unity::XR::CoreUtils::Bindings::Variables::BindableEnum_1<::GlobalNamespace::XRInputModalityManager_InputMode>*  value) ;

/// @brief Method set_leftController, addr 0xb4b1bcc, size 0x8, virtual false, abstract: false, final false
inline void set_leftController(::UnityEngine::GameObject*  value) ;

/// @brief Method set_leftHand, addr 0xb4b1bac, size 0x8, virtual false, abstract: false, final false
inline void set_leftHand(::UnityEngine::GameObject*  value) ;

/// @brief Method set_motionControllerModeEnded, addr 0xb4b1c1c, size 0x8, virtual false, abstract: false, final false
inline void set_motionControllerModeEnded(::UnityEngine::Events::UnityEvent*  value) ;

/// @brief Method set_motionControllerModeStarted, addr 0xb4b1c0c, size 0x8, virtual false, abstract: false, final false
inline void set_motionControllerModeStarted(::UnityEngine::Events::UnityEvent*  value) ;

/// @brief Method set_rightController, addr 0xb4b1bdc, size 0x8, virtual false, abstract: false, final false
inline void set_rightController(::UnityEngine::GameObject*  value) ;

/// @brief Method set_rightHand, addr 0xb4b1bbc, size 0x8, virtual false, abstract: false, final false
inline void set_rightHand(::UnityEngine::GameObject*  value) ;

/// @brief Method set_trackedHandModeEnded, addr 0xb4b1bfc, size 0x8, virtual false, abstract: false, final false
inline void set_trackedHandModeEnded(::UnityEngine::Events::UnityEvent*  value) ;

/// @brief Method set_trackedHandModeStarted, addr 0xb4b1bec, size 0x8, virtual false, abstract: false, final false
inline void set_trackedHandModeStarted(::UnityEngine::Events::UnityEvent*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRInputModalityManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRInputModalityManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRInputModalityManager(XRInputModalityManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRInputModalityManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRInputModalityManager(XRInputModalityManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11597};

/// [HideInInspector]
/// [SerializeField]
/// [Tooltip("GameObject representing the left hand group of interactors. Will toggle on when using hand tracking and off when using motion controllers.")]
/// @brief Field m_LeftHand, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___m_LeftHand;

/// [HideInInspector]
/// [SerializeField]
/// [Tooltip("GameObject representing the right hand group of interactors. Will toggle on when using hand tracking and off when using motion controllers.")]
/// @brief Field m_RightHand, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___m_RightHand;

/// [Header("Motion Controllers")]
/// [SerializeField]
/// [Tooltip("GameObject representing the left motion controller group of interactors. Will toggle on when using motion controllers and off when using hand tracking.")]
/// @brief Field m_LeftController, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___m_LeftController;

/// [SerializeField]
/// [Tooltip("GameObject representing the right motion controller group of interactors. Will toggle on when using motion controllers and off when using hand tracking.")]
/// @brief Field m_RightController, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___m_RightController;

/// [HideInInspector]
/// [SerializeField]
/// @brief Field m_TrackedHandModeStarted, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___m_TrackedHandModeStarted;

/// [HideInInspector]
/// [SerializeField]
/// @brief Field m_TrackedHandModeEnded, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___m_TrackedHandModeEnded;

/// [Header("Events")]
/// [SerializeField]
/// @brief Field m_MotionControllerModeStarted, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___m_MotionControllerModeStarted;

/// [SerializeField]
/// @brief Field m_MotionControllerModeEnded, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::Events::UnityEvent*  ___m_MotionControllerModeEnded;

/// @brief Field m_TrackedDeviceMonitor, offset: 0x60, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputModalityManager_TrackedDeviceMonitor*  ___m_TrackedDeviceMonitor;

/// @brief Field m_InputDeviceMonitor, offset: 0x68, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputModalityManager_InputDeviceMonitor*  ___m_InputDeviceMonitor;

/// @brief Field m_LeftInputMode, offset: 0x70, size: 0x4, def value: None
 ::GlobalNamespace::XRInputModalityManager_InputMode  ___m_LeftInputMode;

/// @brief Field m_RightInputMode, offset: 0x74, size: 0x4, def value: None
 ::GlobalNamespace::XRInputModalityManager_InputMode  ___m_RightInputMode;

/// [CompilerGenerated]
/// @brief Field leftInputModeChanged, offset: 0x78, size: 0x8, def value: None
 ::System::Action_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputModalityManager>,::GlobalNamespace::XRInputModalityManager_InputMode>*  ___leftInputModeChanged;

/// [CompilerGenerated]
/// @brief Field rightInputModeChanged, offset: 0x80, size: 0x8, def value: None
 ::System::Action_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputModalityManager>,::GlobalNamespace::XRInputModalityManager_InputMode>*  ___rightInputModeChanged;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputModalityManager, ___m_LeftHand) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputModalityManager, ___m_RightHand) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputModalityManager, ___m_LeftController) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputModalityManager, ___m_RightController) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputModalityManager, ___m_TrackedHandModeStarted) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputModalityManager, ___m_TrackedHandModeEnded) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputModalityManager, ___m_MotionControllerModeStarted) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputModalityManager, ___m_MotionControllerModeEnded) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputModalityManager, ___m_TrackedDeviceMonitor) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputModalityManager, ___m_InputDeviceMonitor) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputModalityManager, ___m_LeftInputMode) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputModalityManager, ___m_RightInputMode) == 0x74, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputModalityManager, ___leftInputModeChanged) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputModalityManager, ___rightInputModeChanged) == 0x80, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputModalityManager) == 0x88, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Inputs
// Dependencies System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Inputs {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Inputs.XRInputModalityManager/InputDeviceMonitor
class CORDL_TYPE XRInputModalityManager_InputDeviceMonitor : public ::System::Object {
public:
// Declarations
/// @brief Field m_MonitoredDevices, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_MonitoredDevices, put=__cordl_internal_set_m_MonitoredDevices)) ::System::Collections::Generic::List_1<::UnityEngine::XR::InputDevice>*  m_MonitoredDevices;

/// @brief Field m_Subscribed, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_Subscribed, put=__cordl_internal_set_m_Subscribed)) bool  m_Subscribed;

/// @brief Field trackingAcquired, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_trackingAcquired, put=__cordl_internal_set_trackingAcquired)) ::System::Action_1<::UnityEngine::XR::InputDevice>*  trackingAcquired;

/// @brief Method AddDevice, addr 0xb4b3c60, size 0xf4, virtual false, abstract: false, final false
inline void AddDevice(::UnityEngine::XR::InputDevice  device) ;

/// @brief Method ClearAllDevices, addr 0xb4b2efc, size 0x78, virtual false, abstract: false, final false
inline void ClearAllDevices() ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputModalityManager_InputDeviceMonitor* New_ctor() ;

/// @brief Method OnTrackingAcquired, addr 0xb4b4c34, size 0x134, virtual false, abstract: false, final false
inline void OnTrackingAcquired(::UnityEngine::XR::XRNodeState  nodeState) ;

/// @brief Method RemoveDevice, addr 0xb4b42a8, size 0xa0, virtual false, abstract: false, final false
inline void RemoveDevice(::UnityEngine::XR::InputDevice  device) ;

/// @brief Method Subscribe, addr 0xb4b4afc, size 0xb0, virtual false, abstract: false, final false
inline void Subscribe() ;

/// @brief Method Unsubscribe, addr 0xb4b4bac, size 0x88, virtual false, abstract: false, final false
inline void Unsubscribe() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::InputDevice>* const& __cordl_internal_get_m_MonitoredDevices() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::InputDevice>*& __cordl_internal_get_m_MonitoredDevices() ;

constexpr bool const& __cordl_internal_get_m_Subscribed() const;

constexpr bool& __cordl_internal_get_m_Subscribed() ;

constexpr ::System::Action_1<::UnityEngine::XR::InputDevice>* const& __cordl_internal_get_trackingAcquired() const;

constexpr ::System::Action_1<::UnityEngine::XR::InputDevice>*& __cordl_internal_get_trackingAcquired() ;

constexpr void __cordl_internal_set_m_MonitoredDevices(::System::Collections::Generic::List_1<::UnityEngine::XR::InputDevice>*  value) ;

constexpr void __cordl_internal_set_m_Subscribed(bool  value) ;

constexpr void __cordl_internal_set_trackingAcquired(::System::Action_1<::UnityEngine::XR::InputDevice>*  value) ;

/// @brief Method .ctor, addr 0xb4b4644, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_trackingAcquired, addr 0xb4b2638, size 0xb0, virtual false, abstract: false, final false
inline void add_trackingAcquired(::System::Action_1<::UnityEngine::XR::InputDevice>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_trackingAcquired, addr 0xb4b2e4c, size 0xb0, virtual false, abstract: false, final false
inline void remove_trackingAcquired(::System::Action_1<::UnityEngine::XR::InputDevice>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRInputModalityManager_InputDeviceMonitor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRInputModalityManager_InputDeviceMonitor", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRInputModalityManager_InputDeviceMonitor(XRInputModalityManager_InputDeviceMonitor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRInputModalityManager_InputDeviceMonitor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRInputModalityManager_InputDeviceMonitor(XRInputModalityManager_InputDeviceMonitor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11596};

/// [CompilerGenerated]
/// @brief Field trackingAcquired, offset: 0x10, size: 0x8, def value: None
 ::System::Action_1<::UnityEngine::XR::InputDevice>*  ___trackingAcquired;

/// @brief Field m_MonitoredDevices, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::XR::InputDevice>*  ___m_MonitoredDevices;

/// @brief Field m_Subscribed, offset: 0x20, size: 0x1, def value: None
 bool  ___m_Subscribed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputModalityManager_InputDeviceMonitor, ___trackingAcquired) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputModalityManager_InputDeviceMonitor, ___m_MonitoredDevices) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputModalityManager_InputDeviceMonitor, ___m_Subscribed) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputModalityManager_InputDeviceMonitor) == 0x28, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Inputs
// Dependencies System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Inputs {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Inputs.XRInputModalityManager/TrackedDeviceMonitor
class CORDL_TYPE XRInputModalityManager_TrackedDeviceMonitor : public ::System::Object {
public:
// Declarations
/// @brief Field m_MonitoredDevices, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_MonitoredDevices, put=__cordl_internal_set_m_MonitoredDevices)) ::System::Collections::Generic::List_1<int32_t>*  m_MonitoredDevices;

/// @brief Field m_Subscribed, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_Subscribed, put=__cordl_internal_set_m_Subscribed)) bool  m_Subscribed;

/// @brief Field trackingAcquired, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_trackingAcquired, put=__cordl_internal_set_trackingAcquired)) ::System::Action_1<::UnityEngine::InputSystem::TrackedDevice*>*  trackingAcquired;

/// @brief Method AddDevice, addr 0xb4b3aa8, size 0xe0, virtual false, abstract: false, final false
inline void AddDevice(::UnityEngine::InputSystem::TrackedDevice*  device) ;

/// @brief Method ClearAllDevices, addr 0xb4b2dd4, size 0x78, virtual false, abstract: false, final false
inline void ClearAllDevices() ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputModalityManager_TrackedDeviceMonitor* New_ctor() ;

/// @brief Method OnAfterInputUpdate, addr 0xb4b494c, size 0x1b0, virtual false, abstract: false, final false
inline void OnAfterInputUpdate() ;

/// @brief Method RemoveDevice, addr 0xb4b4094, size 0x90, virtual false, abstract: false, final false
inline void RemoveDevice(::UnityEngine::InputSystem::TrackedDevice*  device) ;

/// @brief Method Subscribe, addr 0xb4b47cc, size 0xd4, virtual false, abstract: false, final false
inline void Subscribe() ;

/// @brief Method Unsubscribe, addr 0xb4b48a0, size 0xac, virtual false, abstract: false, final false
inline void Unsubscribe() ;

constexpr ::System::Collections::Generic::List_1<int32_t>* const& __cordl_internal_get_m_MonitoredDevices() const;

constexpr ::System::Collections::Generic::List_1<int32_t>*& __cordl_internal_get_m_MonitoredDevices() ;

constexpr bool const& __cordl_internal_get_m_Subscribed() const;

constexpr bool& __cordl_internal_get_m_Subscribed() ;

constexpr ::System::Action_1<::UnityEngine::InputSystem::TrackedDevice*>* const& __cordl_internal_get_trackingAcquired() const;

constexpr ::System::Action_1<::UnityEngine::InputSystem::TrackedDevice*>*& __cordl_internal_get_trackingAcquired() ;

constexpr void __cordl_internal_set_m_MonitoredDevices(::System::Collections::Generic::List_1<int32_t>*  value) ;

constexpr void __cordl_internal_set_m_Subscribed(bool  value) ;

constexpr void __cordl_internal_set_trackingAcquired(::System::Action_1<::UnityEngine::InputSystem::TrackedDevice*>*  value) ;

/// @brief Method .ctor, addr 0xb4b45bc, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_trackingAcquired, addr 0xb4b2588, size 0xb0, virtual false, abstract: false, final false
inline void add_trackingAcquired(::System::Action_1<::UnityEngine::InputSystem::TrackedDevice*>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_trackingAcquired, addr 0xb4b2d24, size 0xb0, virtual false, abstract: false, final false
inline void remove_trackingAcquired(::System::Action_1<::UnityEngine::InputSystem::TrackedDevice*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRInputModalityManager_TrackedDeviceMonitor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRInputModalityManager_TrackedDeviceMonitor", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRInputModalityManager_TrackedDeviceMonitor(XRInputModalityManager_TrackedDeviceMonitor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRInputModalityManager_TrackedDeviceMonitor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRInputModalityManager_TrackedDeviceMonitor(XRInputModalityManager_TrackedDeviceMonitor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11595};

/// [CompilerGenerated]
/// @brief Field trackingAcquired, offset: 0x10, size: 0x8, def value: None
 ::System::Action_1<::UnityEngine::InputSystem::TrackedDevice*>*  ___trackingAcquired;

/// @brief Field m_MonitoredDevices, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<int32_t>*  ___m_MonitoredDevices;

/// @brief Field m_Subscribed, offset: 0x20, size: 0x1, def value: None
 bool  ___m_Subscribed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputModalityManager_TrackedDeviceMonitor, ___trackingAcquired) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputModalityManager_TrackedDeviceMonitor, ___m_MonitoredDevices) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputModalityManager_TrackedDeviceMonitor, ___m_Subscribed) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Inputs::XRInputModalityManager_TrackedDeviceMonitor) == 0x28, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Inputs
