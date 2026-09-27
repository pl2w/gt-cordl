#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/XR/TrackedPoseDriver.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/InputSystem/XR/zzzz__TrackedPoseDriver_TrackingStates_def.hpp"
#include "UnityEngine/InputSystem/XR/zzzz__TrackedPoseDriver_TrackingType_def.hpp"
#include "UnityEngine/InputSystem/XR/zzzz__TrackedPoseDriver_UpdateType_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputActionProperty_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(TrackedPoseDriver)
namespace GlobalNamespace {
struct InputAction_CallbackContext;
}
namespace GlobalNamespace {
struct TrackedPoseDriver_TrackingStates;
}
namespace GlobalNamespace {
struct TrackedPoseDriver_TrackingType;
}
namespace GlobalNamespace {
struct TrackedPoseDriver_UpdateType;
}
namespace UnityEngine::InputSystem {
struct InputActionProperty;
}
namespace UnityEngine::InputSystem {
class InputAction;
}
namespace UnityEngine::InputSystem {
struct InputDeviceChange;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::InputSystem::XR {
class TrackedPoseDriver;
}
// Write type traits
MARK_REF_T(::UnityEngine::InputSystem::XR::TrackedPoseDriver*);
DEFINE_IL2CPP_CLASS(::UnityEngine::InputSystem::XR::TrackedPoseDriver*, "UnityEngine.InputSystem.XR", "TrackedPoseDriver");
// [AddComponentMenu("XR/Tracked Pose Driver (Input System)")]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.inputsystem@1.14/manual/TrackedInputDevices.html#tracked-pose-driver")]
// Dependencies UnityEngine.InputSystem.InputActionProperty, UnityEngine.InputSystem.XR.TrackedPoseDriver::TrackingStates, UnityEngine.InputSystem.XR.TrackedPoseDriver::TrackingType, UnityEngine.InputSystem.XR.TrackedPoseDriver::UpdateType, UnityEngine.MonoBehaviour, UnityEngine.Quaternion, UnityEngine.Vector3
namespace UnityEngine::InputSystem::XR {
// Is value type: false
// CS Name: UnityEngine.InputSystem.XR.TrackedPoseDriver
class CORDL_TYPE TrackedPoseDriver : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using TrackingStates = ::GlobalNamespace::TrackedPoseDriver_TrackingStates;

using TrackingType = ::GlobalNamespace::TrackedPoseDriver_TrackingType;

using UpdateType = ::GlobalNamespace::TrackedPoseDriver_UpdateType;

 __declspec(property(get=get_ignoreTrackingState, put=set_ignoreTrackingState)) bool  ignoreTrackingState;

/// @brief Field m_CurrentPosition, offset 0x78, size 0xc 
 __declspec(property(get=__cordl_internal_get_m_CurrentPosition, put=__cordl_internal_set_m_CurrentPosition)) ::UnityEngine::Vector3  m_CurrentPosition;

/// @brief Field m_CurrentRotation, offset 0x84, size 0x10 
 __declspec(property(get=__cordl_internal_get_m_CurrentRotation, put=__cordl_internal_set_m_CurrentRotation)) ::UnityEngine::Quaternion  m_CurrentRotation;

/// @brief Field m_CurrentTrackingState, offset 0x94, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_CurrentTrackingState, put=__cordl_internal_set_m_CurrentTrackingState)) ::GlobalNamespace::TrackedPoseDriver_TrackingStates  m_CurrentTrackingState;

/// @brief Field m_IgnoreTrackingState, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_IgnoreTrackingState, put=__cordl_internal_set_m_IgnoreTrackingState)) bool  m_IgnoreTrackingState;

/// @brief Field m_IsFirstUpdate, offset 0x9b, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_IsFirstUpdate, put=__cordl_internal_set_m_IsFirstUpdate)) bool  m_IsFirstUpdate;

/// @brief Field m_PositionAction, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_PositionAction, put=__cordl_internal_set_m_PositionAction)) ::UnityEngine::InputSystem::InputAction*  m_PositionAction;

/// @brief Field m_PositionBound, offset 0x99, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_PositionBound, put=__cordl_internal_set_m_PositionBound)) bool  m_PositionBound;

/// @brief Field m_PositionInput, offset 0x30, size 0x18 
 __declspec(property(get=__cordl_internal_get_m_PositionInput, put=__cordl_internal_set_m_PositionInput)) ::UnityEngine::InputSystem::InputActionProperty  m_PositionInput;

/// @brief Field m_RotationAction, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_RotationAction, put=__cordl_internal_set_m_RotationAction)) ::UnityEngine::InputSystem::InputAction*  m_RotationAction;

/// @brief Field m_RotationBound, offset 0x98, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_RotationBound, put=__cordl_internal_set_m_RotationBound)) bool  m_RotationBound;

/// @brief Field m_RotationInput, offset 0x48, size 0x18 
 __declspec(property(get=__cordl_internal_get_m_RotationInput, put=__cordl_internal_set_m_RotationInput)) ::UnityEngine::InputSystem::InputActionProperty  m_RotationInput;

/// @brief Field m_TrackingStateBound, offset 0x9a, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_TrackingStateBound, put=__cordl_internal_set_m_TrackingStateBound)) bool  m_TrackingStateBound;

/// @brief Field m_TrackingStateInput, offset 0x60, size 0x18 
 __declspec(property(get=__cordl_internal_get_m_TrackingStateInput, put=__cordl_internal_set_m_TrackingStateInput)) ::UnityEngine::InputSystem::InputActionProperty  m_TrackingStateInput;

/// @brief Field m_TrackingType, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_TrackingType, put=__cordl_internal_set_m_TrackingType)) ::GlobalNamespace::TrackedPoseDriver_TrackingType  m_TrackingType;

/// @brief Field m_UpdateType, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_UpdateType, put=__cordl_internal_set_m_UpdateType)) ::GlobalNamespace::TrackedPoseDriver_UpdateType  m_UpdateType;

 __declspec(property(get=get_positionAction, put=set_positionAction)) ::UnityEngine::InputSystem::InputAction*  positionAction;

 __declspec(property(get=get_positionInput, put=set_positionInput)) ::UnityEngine::InputSystem::InputActionProperty  positionInput;

 __declspec(property(get=get_rotationAction, put=set_rotationAction)) ::UnityEngine::InputSystem::InputAction*  rotationAction;

 __declspec(property(get=get_rotationInput, put=set_rotationInput)) ::UnityEngine::InputSystem::InputActionProperty  rotationInput;

 __declspec(property(get=get_trackingStateInput, put=set_trackingStateInput)) ::UnityEngine::InputSystem::InputActionProperty  trackingStateInput;

 __declspec(property(get=get_trackingType, put=set_trackingType)) ::GlobalNamespace::TrackedPoseDriver_TrackingType  trackingType;

 __declspec(property(get=get_updateType, put=set_updateType)) ::GlobalNamespace::TrackedPoseDriver_UpdateType  updateType;

/// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
constexpr operator  ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

/// @brief Method Awake, addr 0xafc7c24, size 0x28, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method BindActions, addr 0xafc77f8, size 0x20, virtual false, abstract: false, final false
inline void BindActions() ;

/// @brief Method BindPosition, addr 0xafc6f14, size 0x18c, virtual false, abstract: false, final false
inline void BindPosition() ;

/// @brief Method BindRotation, addr 0xafc72c0, size 0x18c, virtual false, abstract: false, final false
inline void BindRotation() ;

/// @brief Method BindTrackingState, addr 0xafc766c, size 0x18c, virtual false, abstract: false, final false
inline void BindTrackingState() ;

/// @brief Method HasResolvedControl, addr 0xafc8078, size 0xbc, virtual false, abstract: false, final false
static inline bool HasResolvedControl(::UnityEngine::InputSystem::InputAction*  action) ;

/// @brief Method HasStereoCamera, addr 0xafc7c4c, size 0x84, virtual false, abstract: false, final false
inline bool HasStereoCamera(::by_ref<::UnityEngine::Camera*>  cameraComponent) ;

static inline ::UnityEngine::InputSystem::XR::TrackedPoseDriver* New_ctor() ;

/// @brief Method OnBeforeRender, addr 0xafc8274, size 0x20, virtual true, abstract: false, final false
inline void OnBeforeRender() ;

/// @brief Method OnDestroy, addr 0xafc7ee4, size 0x28, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDeviceChanged, addr 0xafc81d4, size 0x10, virtual false, abstract: false, final false
inline void OnDeviceChanged(::UnityEngine::InputSystem::InputDevice*  inputDevice, ::UnityEngine::InputSystem::InputDeviceChange  inputDeviceChange) ;

/// @brief Method OnDisable, addr 0xafc7de0, size 0x104, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xafc7cd0, size 0x110, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnPositionCanceled, addr 0xafc78c0, size 0x58, virtual false, abstract: false, final false
inline void OnPositionCanceled(::GlobalNamespace::InputAction_CallbackContext  context) ;

/// @brief Method OnPositionPerformed, addr 0xafc7860, size 0x60, virtual false, abstract: false, final false
inline void OnPositionPerformed(::GlobalNamespace::InputAction_CallbackContext  context) ;

/// @brief Method OnRotationCanceled, addr 0xafc7978, size 0x50, virtual false, abstract: false, final false
inline void OnRotationCanceled(::GlobalNamespace::InputAction_CallbackContext  context) ;

/// @brief Method OnRotationPerformed, addr 0xafc7918, size 0x60, virtual false, abstract: false, final false
inline void OnRotationPerformed(::GlobalNamespace::InputAction_CallbackContext  context) ;

/// @brief Method OnTrackingStateCanceled, addr 0xafc7a24, size 0x8, virtual false, abstract: false, final false
inline void OnTrackingStateCanceled(::GlobalNamespace::InputAction_CallbackContext  context) ;

/// @brief Method OnTrackingStatePerformed, addr 0xafc79c8, size 0x5c, virtual false, abstract: false, final false
inline void OnTrackingStatePerformed(::GlobalNamespace::InputAction_CallbackContext  context) ;

/// @brief Method OnUpdate, addr 0xafc8258, size 0x1c, virtual true, abstract: false, final false
inline void OnUpdate() ;

/// @brief Method PerformUpdate, addr 0xafc8294, size 0x1c, virtual true, abstract: false, final false
inline void PerformUpdate() ;

/// @brief Method ReadTrackingState, addr 0xafc8134, size 0xa0, virtual false, abstract: false, final false
inline void ReadTrackingState() ;

/// @brief Method ReadTrackingStateWithoutTrackingAction, addr 0xafc81e4, size 0x74, virtual false, abstract: false, final false
inline void ReadTrackingStateWithoutTrackingAction() ;

/// @brief Method RenameAndEnable, addr 0xafc7838, size 0x28, virtual false, abstract: false, final false
static inline void RenameAndEnable(::UnityEngine::InputSystem::InputAction*  action, ::StringW  name) ;

/// @brief Method Reset, addr 0xafc7a2c, size 0x1f8, virtual false, abstract: false, final false
inline void Reset() ;

/// @brief Method SetLocalTransform, addr 0xafc82b0, size 0x15c, virtual true, abstract: false, final false
inline void SetLocalTransform(::UnityEngine::Vector3  newPosition, ::UnityEngine::Quaternion  newRotation) ;

/// @brief Method UnbindActions, addr 0xafc7818, size 0x20, virtual false, abstract: false, final false
inline void UnbindActions() ;

/// @brief Method UnbindPosition, addr 0xafc6dd4, size 0x140, virtual false, abstract: false, final false
inline void UnbindPosition() ;

/// @brief Method UnbindRotation, addr 0xafc7180, size 0x140, virtual false, abstract: false, final false
inline void UnbindRotation() ;

/// @brief Method UnbindTrackingState, addr 0xafc752c, size 0x140, virtual false, abstract: false, final false
inline void UnbindTrackingState() ;

/// @brief Method UnityEngine.ISerializationCallbackReceiver.OnAfterDeserialize, addr 0xafc84b8, size 0xb8, virtual true, abstract: false, final true
inline void UnityEngine_ISerializationCallbackReceiver_OnAfterDeserialize() ;

/// @brief Method UnityEngine.ISerializationCallbackReceiver.OnBeforeSerialize, addr 0xafc84b4, size 0x4, virtual true, abstract: false, final true
inline void UnityEngine_ISerializationCallbackReceiver_OnBeforeSerialize() ;

/// @brief Method UpdateCallback, addr 0xafc7f0c, size 0x16c, virtual false, abstract: false, final false
inline void UpdateCallback() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_m_CurrentPosition() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_m_CurrentPosition() ;

constexpr ::UnityEngine::Quaternion const& __cordl_internal_get_m_CurrentRotation() const;

constexpr ::UnityEngine::Quaternion& __cordl_internal_get_m_CurrentRotation() ;

constexpr ::GlobalNamespace::TrackedPoseDriver_TrackingStates const& __cordl_internal_get_m_CurrentTrackingState() const;

constexpr ::GlobalNamespace::TrackedPoseDriver_TrackingStates& __cordl_internal_get_m_CurrentTrackingState() ;

constexpr bool const& __cordl_internal_get_m_IgnoreTrackingState() const;

constexpr bool& __cordl_internal_get_m_IgnoreTrackingState() ;

constexpr bool const& __cordl_internal_get_m_IsFirstUpdate() const;

constexpr bool& __cordl_internal_get_m_IsFirstUpdate() ;

constexpr ::UnityEngine::InputSystem::InputAction* const& __cordl_internal_get_m_PositionAction() const;

constexpr ::UnityEngine::InputSystem::InputAction*& __cordl_internal_get_m_PositionAction() ;

constexpr bool const& __cordl_internal_get_m_PositionBound() const;

constexpr bool& __cordl_internal_get_m_PositionBound() ;

constexpr ::UnityEngine::InputSystem::InputActionProperty const& __cordl_internal_get_m_PositionInput() const;

constexpr ::UnityEngine::InputSystem::InputActionProperty& __cordl_internal_get_m_PositionInput() ;

constexpr ::UnityEngine::InputSystem::InputAction* const& __cordl_internal_get_m_RotationAction() const;

constexpr ::UnityEngine::InputSystem::InputAction*& __cordl_internal_get_m_RotationAction() ;

constexpr bool const& __cordl_internal_get_m_RotationBound() const;

constexpr bool& __cordl_internal_get_m_RotationBound() ;

constexpr ::UnityEngine::InputSystem::InputActionProperty const& __cordl_internal_get_m_RotationInput() const;

constexpr ::UnityEngine::InputSystem::InputActionProperty& __cordl_internal_get_m_RotationInput() ;

constexpr bool const& __cordl_internal_get_m_TrackingStateBound() const;

constexpr bool& __cordl_internal_get_m_TrackingStateBound() ;

constexpr ::UnityEngine::InputSystem::InputActionProperty const& __cordl_internal_get_m_TrackingStateInput() const;

constexpr ::UnityEngine::InputSystem::InputActionProperty& __cordl_internal_get_m_TrackingStateInput() ;

constexpr ::GlobalNamespace::TrackedPoseDriver_TrackingType const& __cordl_internal_get_m_TrackingType() const;

constexpr ::GlobalNamespace::TrackedPoseDriver_TrackingType& __cordl_internal_get_m_TrackingType() ;

constexpr ::GlobalNamespace::TrackedPoseDriver_UpdateType const& __cordl_internal_get_m_UpdateType() const;

constexpr ::GlobalNamespace::TrackedPoseDriver_UpdateType& __cordl_internal_get_m_UpdateType() ;

constexpr void __cordl_internal_set_m_CurrentPosition(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_m_CurrentRotation(::UnityEngine::Quaternion  value) ;

constexpr void __cordl_internal_set_m_CurrentTrackingState(::GlobalNamespace::TrackedPoseDriver_TrackingStates  value) ;

constexpr void __cordl_internal_set_m_IgnoreTrackingState(bool  value) ;

constexpr void __cordl_internal_set_m_IsFirstUpdate(bool  value) ;

constexpr void __cordl_internal_set_m_PositionAction(::UnityEngine::InputSystem::InputAction*  value) ;

constexpr void __cordl_internal_set_m_PositionBound(bool  value) ;

constexpr void __cordl_internal_set_m_PositionInput(::UnityEngine::InputSystem::InputActionProperty  value) ;

constexpr void __cordl_internal_set_m_RotationAction(::UnityEngine::InputSystem::InputAction*  value) ;

constexpr void __cordl_internal_set_m_RotationBound(bool  value) ;

constexpr void __cordl_internal_set_m_RotationInput(::UnityEngine::InputSystem::InputActionProperty  value) ;

constexpr void __cordl_internal_set_m_TrackingStateBound(bool  value) ;

constexpr void __cordl_internal_set_m_TrackingStateInput(::UnityEngine::InputSystem::InputActionProperty  value) ;

constexpr void __cordl_internal_set_m_TrackingType(::GlobalNamespace::TrackedPoseDriver_TrackingType  value) ;

constexpr void __cordl_internal_set_m_UpdateType(::GlobalNamespace::TrackedPoseDriver_UpdateType  value) ;

/// @brief Method .ctor, addr 0xafc8570, size 0xa8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_ignoreTrackingState, addr 0xafc6ce4, size 0x8, virtual false, abstract: false, final false
inline bool get_ignoreTrackingState() ;

/// @brief Method get_positionAction, addr 0xafc840c, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputAction* get_positionAction() ;

/// @brief Method get_positionInput, addr 0xafc6cf4, size 0x14, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputActionProperty get_positionInput() ;

/// @brief Method get_rotationAction, addr 0xafc8460, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputAction* get_rotationAction() ;

/// @brief Method get_rotationInput, addr 0xafc70a0, size 0x14, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputActionProperty get_rotationInput() ;

/// @brief Method get_trackingStateInput, addr 0xafc744c, size 0x14, virtual false, abstract: false, final false
inline ::UnityEngine::InputSystem::InputActionProperty get_trackingStateInput() ;

/// @brief Method get_trackingType, addr 0xafc6cc4, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::TrackedPoseDriver_TrackingType get_trackingType() ;

/// @brief Method get_updateType, addr 0xafc6cd4, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::TrackedPoseDriver_UpdateType get_updateType() ;

/// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
constexpr ::UnityEngine::ISerializationCallbackReceiver* i___UnityEngine__ISerializationCallbackReceiver() noexcept;

/// @brief Method set_ignoreTrackingState, addr 0xafc6cec, size 0x8, virtual false, abstract: false, final false
inline void set_ignoreTrackingState(bool  value) ;

/// @brief Method set_positionAction, addr 0xafc8418, size 0x48, virtual false, abstract: false, final false
inline void set_positionAction(::UnityEngine::InputSystem::InputAction*  value) ;

/// @brief Method set_positionInput, addr 0xafc6d08, size 0xcc, virtual false, abstract: false, final false
inline void set_positionInput(::UnityEngine::InputSystem::InputActionProperty  value) ;

/// @brief Method set_rotationAction, addr 0xafc846c, size 0x48, virtual false, abstract: false, final false
inline void set_rotationAction(::UnityEngine::InputSystem::InputAction*  value) ;

/// @brief Method set_rotationInput, addr 0xafc70b4, size 0xcc, virtual false, abstract: false, final false
inline void set_rotationInput(::UnityEngine::InputSystem::InputActionProperty  value) ;

/// @brief Method set_trackingStateInput, addr 0xafc7460, size 0xcc, virtual false, abstract: false, final false
inline void set_trackingStateInput(::UnityEngine::InputSystem::InputActionProperty  value) ;

/// @brief Method set_trackingType, addr 0xafc6ccc, size 0x8, virtual false, abstract: false, final false
inline void set_trackingType(::GlobalNamespace::TrackedPoseDriver_TrackingType  value) ;

/// @brief Method set_updateType, addr 0xafc6cdc, size 0x8, virtual false, abstract: false, final false
inline void set_updateType(::GlobalNamespace::TrackedPoseDriver_UpdateType  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr TrackedPoseDriver() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "TrackedPoseDriver", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
TrackedPoseDriver(TrackedPoseDriver && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "TrackedPoseDriver", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
TrackedPoseDriver(TrackedPoseDriver const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13546};

/// [SerializeField]
/// [Tooltip("Which Transform properties to update.")]
/// @brief Field m_TrackingType, offset: 0x20, size: 0x4, def value: None
 ::GlobalNamespace::TrackedPoseDriver_TrackingType  ___m_TrackingType;

/// [SerializeField]
/// [Tooltip("Updates the Transform properties after these phases of Input System event processing.")]
/// @brief Field m_UpdateType, offset: 0x24, size: 0x4, def value: None
 ::GlobalNamespace::TrackedPoseDriver_UpdateType  ___m_UpdateType;

/// [SerializeField]
/// [Tooltip("Ignore Tracking State and always treat the input pose as valid.")]
/// @brief Field m_IgnoreTrackingState, offset: 0x28, size: 0x1, def value: None
 bool  ___m_IgnoreTrackingState;

/// [SerializeField]
/// [Tooltip("The input action to read the position value of a tracked device. Must be a Vector 3 control type.")]
/// @brief Field m_PositionInput, offset: 0x30, size: 0x18, def value: None
 ::UnityEngine::InputSystem::InputActionProperty  ___m_PositionInput;

/// [SerializeField]
/// [Tooltip("The input action to read the rotation value of a tracked device. Must be a Quaternion control type.")]
/// @brief Field m_RotationInput, offset: 0x48, size: 0x18, def value: None
 ::UnityEngine::InputSystem::InputActionProperty  ___m_RotationInput;

/// [SerializeField]
/// [Tooltip("The input action to read the tracking state value of a tracked device. Identifies if position and rotation have valid data. Must be an Integer control type.")]
/// @brief Field m_TrackingStateInput, offset: 0x60, size: 0x18, def value: None
 ::UnityEngine::InputSystem::InputActionProperty  ___m_TrackingStateInput;

/// @brief Field m_CurrentPosition, offset: 0x78, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___m_CurrentPosition;

/// @brief Field m_CurrentRotation, offset: 0x84, size: 0x10, def value: None
 ::UnityEngine::Quaternion  ___m_CurrentRotation;

/// @brief Field m_CurrentTrackingState, offset: 0x94, size: 0x4, def value: None
 ::GlobalNamespace::TrackedPoseDriver_TrackingStates  ___m_CurrentTrackingState;

/// @brief Field m_RotationBound, offset: 0x98, size: 0x1, def value: None
 bool  ___m_RotationBound;

/// @brief Field m_PositionBound, offset: 0x99, size: 0x1, def value: None
 bool  ___m_PositionBound;

/// @brief Field m_TrackingStateBound, offset: 0x9a, size: 0x1, def value: None
 bool  ___m_TrackingStateBound;

/// @brief Field m_IsFirstUpdate, offset: 0x9b, size: 0x1, def value: None
 bool  ___m_IsFirstUpdate;

/// [Obsolete]
/// [SerializeField]
/// [HideInInspector]
/// @brief Field m_PositionAction, offset: 0xa0, size: 0x8, def value: None
 ::UnityEngine::InputSystem::InputAction*  ___m_PositionAction;

/// [Obsolete]
/// [SerializeField]
/// [HideInInspector]
/// @brief Field m_RotationAction, offset: 0xa8, size: 0x8, def value: None
 ::UnityEngine::InputSystem::InputAction*  ___m_RotationAction;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::InputSystem::XR::TrackedPoseDriver, ___m_TrackingType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::XR::TrackedPoseDriver, ___m_UpdateType) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::XR::TrackedPoseDriver, ___m_IgnoreTrackingState) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::XR::TrackedPoseDriver, ___m_PositionInput) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::XR::TrackedPoseDriver, ___m_RotationInput) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::XR::TrackedPoseDriver, ___m_TrackingStateInput) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::XR::TrackedPoseDriver, ___m_CurrentPosition) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::XR::TrackedPoseDriver, ___m_CurrentRotation) == 0x84, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::XR::TrackedPoseDriver, ___m_CurrentTrackingState) == 0x94, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::XR::TrackedPoseDriver, ___m_RotationBound) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::XR::TrackedPoseDriver, ___m_PositionBound) == 0x99, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::XR::TrackedPoseDriver, ___m_TrackingStateBound) == 0x9a, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::XR::TrackedPoseDriver, ___m_IsFirstUpdate) == 0x9b, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::XR::TrackedPoseDriver, ___m_PositionAction) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::InputSystem::XR::TrackedPoseDriver, ___m_RotationAction) == 0xa8, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::InputSystem::XR::TrackedPoseDriver) == 0xb0, "Size mismatch!");

} // namespace end def UnityEngine::InputSystem::XR
