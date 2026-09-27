#pragma once
// IWYU pragma private; include "Liv/Lck/Tablet/LCKCameraController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Liv/Lck/Tablet/zzzz__CameraMode_def.hpp"
#include "Liv/Lck/zzzz__LckCameraOrientation_def.hpp"
#include "Liv/Lck/zzzz__UpdateTimingMode_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(LCKCameraController)
namespace GlobalNamespace {
struct LCKCameraController__OnQualityOptionSelected_d__49;
}
namespace GlobalNamespace {
struct LCKCameraController__StopEchoIfActiveAsync_d__76;
}
namespace GlobalNamespace {
struct LCKCameraController__ToggleOrientation_d__78;
}
namespace Liv::Lck::Smoothing {
class LckStabilizer;
}
namespace Liv::Lck::Tablet {
struct CameraMode;
}
namespace Liv::Lck::Tablet {
class LCKSettingsButtonsController;
}
namespace Liv::Lck::Tablet {
class LckNotificationController;
}
namespace Liv::Lck::Tablet {
class LckTopButtonsController;
}
namespace Liv::Lck::UI {
class LckButton;
}
namespace Liv::Lck::UI {
class LckDoubleButton;
}
namespace Liv::Lck::UI {
class LckQualitySelector;
}
namespace Liv::Lck {
struct CameraTrackDescriptor;
}
namespace Liv::Lck {
class ILckService;
}
namespace Liv::Lck {
class LckCamera;
}
namespace Liv::Lck {
class LckHeadsetCamera;
}
namespace Liv::Lck {
class LckResult;
}
namespace Liv::Lck {
struct QualityOption;
}
namespace Liv::Lck {
struct UpdateTimingMode;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
class ScriptableObject;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Liv::Lck::Tablet {
class LCKCameraController;
}
// Write type traits
MARK_REF_T(::Liv::Lck::Tablet::LCKCameraController*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::Tablet::LCKCameraController*, "Liv.Lck.Tablet", "LCKCameraController");
// [DefaultExecutionOrder(-890)]
// Dependencies Liv.Lck.LckCameraOrientation, Liv.Lck.Tablet.CameraMode, Liv.Lck.UpdateTimingMode, UnityEngine.MonoBehaviour
namespace Liv::Lck::Tablet {
// Is value type: false
// CS Name: Liv.Lck.Tablet.LCKCameraController
class CORDL_TYPE LCKCameraController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _OnQualityOptionSelected_d__49 = ::GlobalNamespace::LCKCameraController__OnQualityOptionSelected_d__49;

using _StopEchoIfActiveAsync_d__76 = ::GlobalNamespace::LCKCameraController__StopEchoIfActiveAsync_d__76;

using _ToggleOrientation_d__78 = ::GlobalNamespace::LCKCameraController__ToggleOrientation_d__78;

 __declspec(property(get=get_CameraPositionUpdateTimingMode, put=set_CameraPositionUpdateTimingMode)) ::Liv::Lck::UpdateTimingMode  CameraPositionUpdateTimingMode;

/// @brief Field ColliderButtonsInUse, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_ColliderButtonsInUse, put=setStaticF_ColliderButtonsInUse)) bool  ColliderButtonsInUse;

 __declspec(property(get=get_HmdTransform, put=set_HmdTransform)) ::UnityW<::UnityEngine::Transform>  HmdTransform;

/// @brief Field OnCameraModeChanged, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnCameraModeChanged, put=__cordl_internal_set_OnCameraModeChanged)) ::System::Action_1<::Liv::Lck::Tablet::CameraMode>*  OnCameraModeChanged;

/// @brief Field _cameraPositionUpdateTimingMode, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__cameraPositionUpdateTimingMode, put=__cordl_internal_set__cameraPositionUpdateTimingMode)) ::Liv::Lck::UpdateTimingMode  _cameraPositionUpdateTimingMode;

/// @brief Field _currentCameraMode, offset 0x110, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentCameraMode, put=__cordl_internal_set__currentCameraMode)) ::Liv::Lck::Tablet::CameraMode  _currentCameraMode;

/// @brief Field _currentCameraOrientation, offset 0x108, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentCameraOrientation, put=__cordl_internal_set__currentCameraOrientation)) ::Liv::Lck::LckCameraOrientation  _currentCameraOrientation;

/// @brief Field _firstPersonCamera, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get__firstPersonCamera, put=__cordl_internal_set__firstPersonCamera)) ::UnityW<::Liv::Lck::LckCamera>  _firstPersonCamera;

/// @brief Field _firstPersonFOVDoubleButton, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__firstPersonFOVDoubleButton, put=__cordl_internal_set__firstPersonFOVDoubleButton)) ::UnityW<::Liv::Lck::UI::LckDoubleButton>  _firstPersonFOVDoubleButton;

/// @brief Field _firstPersonSmoothingDoubleButton, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__firstPersonSmoothingDoubleButton, put=__cordl_internal_set__firstPersonSmoothingDoubleButton)) ::UnityW<::Liv::Lck::UI::LckDoubleButton>  _firstPersonSmoothingDoubleButton;

/// @brief Field _firstPersonStabilizer, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get__firstPersonStabilizer, put=__cordl_internal_set__firstPersonStabilizer)) ::UnityW<::Liv::Lck::Smoothing::LckStabilizer>  _firstPersonStabilizer;

/// @brief Field _gameAudioRecordingEnabled, offset 0x10d, size 0x1 
 __declspec(property(get=__cordl_internal_get__gameAudioRecordingEnabled, put=__cordl_internal_set__gameAudioRecordingEnabled)) bool  _gameAudioRecordingEnabled;

/// @brief Field _headsetCamera, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get__headsetCamera, put=__cordl_internal_set__headsetCamera)) ::UnityW<::Liv::Lck::LckHeadsetCamera>  _headsetCamera;

/// @brief Field _hmdTransform, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__hmdTransform, put=__cordl_internal_set__hmdTransform)) ::UnityW<::UnityEngine::Transform>  _hmdTransform;

/// @brief Field _isSelfieFront, offset 0x105, size 0x1 
 __declspec(property(get=__cordl_internal_get__isSelfieFront, put=__cordl_internal_set__isSelfieFront)) bool  _isSelfieFront;

/// @brief Field _isThirdPersonFront, offset 0x104, size 0x1 
 __declspec(property(get=__cordl_internal_get__isThirdPersonFront, put=__cordl_internal_set__isThirdPersonFront)) bool  _isThirdPersonFront;

/// @brief Field _justTransitioned, offset 0x10c, size 0x1 
 __declspec(property(get=__cordl_internal_get__justTransitioned, put=__cordl_internal_set__justTransitioned)) bool  _justTransitioned;

/// @brief Field _lckService, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__lckService, put=__cordl_internal_set__lckService)) ::Liv::Lck::ILckService*  _lckService;

/// @brief Field _modifyRenderLayerAndCullingMasks, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get__modifyRenderLayerAndCullingMasks, put=__cordl_internal_set__modifyRenderLayerAndCullingMasks)) bool  _modifyRenderLayerAndCullingMasks;

/// @brief Field _monitorTransform, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__monitorTransform, put=__cordl_internal_set__monitorTransform)) ::UnityW<::UnityEngine::RectTransform>  _monitorTransform;

/// @brief Field _notificationController, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__notificationController, put=__cordl_internal_set__notificationController)) ::UnityW<::Liv::Lck::Tablet::LckNotificationController>  _notificationController;

/// @brief Field _objectsHiddenFromSelfieCamera, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__objectsHiddenFromSelfieCamera, put=__cordl_internal_set__objectsHiddenFromSelfieCamera)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  _objectsHiddenFromSelfieCamera;

/// @brief Field _orientationButton, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get__orientationButton, put=__cordl_internal_set__orientationButton)) ::UnityW<::Liv::Lck::UI::LckButton>  _orientationButton;

/// @brief Field _qualityConfig, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__qualityConfig, put=__cordl_internal_set__qualityConfig)) ::UnityW<::UnityEngine::ScriptableObject>  _qualityConfig;

/// @brief Field _qualitySelector, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__qualitySelector, put=__cordl_internal_set__qualitySelector)) ::UnityW<::Liv::Lck::UI::LckQualitySelector>  _qualitySelector;

/// @brief Field _selfieCamera, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get__selfieCamera, put=__cordl_internal_set__selfieCamera)) ::UnityW<::Liv::Lck::LckCamera>  _selfieCamera;

/// @brief Field _selfieFOVDoubleButton, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__selfieFOVDoubleButton, put=__cordl_internal_set__selfieFOVDoubleButton)) ::UnityW<::Liv::Lck::UI::LckDoubleButton>  _selfieFOVDoubleButton;

/// @brief Field _selfieSmoothingDoubleButton, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__selfieSmoothingDoubleButton, put=__cordl_internal_set__selfieSmoothingDoubleButton)) ::UnityW<::Liv::Lck::UI::LckDoubleButton>  _selfieSmoothingDoubleButton;

/// @brief Field _selfieStabilizer, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get__selfieStabilizer, put=__cordl_internal_set__selfieStabilizer)) ::UnityW<::Liv::Lck::Smoothing::LckStabilizer>  _selfieStabilizer;

/// @brief Field _settingsButtonsController, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__settingsButtonsController, put=__cordl_internal_set__settingsButtonsController)) ::UnityW<::Liv::Lck::Tablet::LCKSettingsButtonsController>  _settingsButtonsController;

/// @brief Field _tabletRenderingLayer, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__tabletRenderingLayer, put=__cordl_internal_set__tabletRenderingLayer)) ::StringW  _tabletRenderingLayer;

/// @brief Field _thirdPersonCamera, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get__thirdPersonCamera, put=__cordl_internal_set__thirdPersonCamera)) ::UnityW<::Liv::Lck::LckCamera>  _thirdPersonCamera;

/// @brief Field _thirdPersonDistance, offset 0x100, size 0x4 
 __declspec(property(get=__cordl_internal_get__thirdPersonDistance, put=__cordl_internal_set__thirdPersonDistance)) float_t  _thirdPersonDistance;

/// @brief Field _thirdPersonDistanceDoubleButton, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get__thirdPersonDistanceDoubleButton, put=__cordl_internal_set__thirdPersonDistanceDoubleButton)) ::UnityW<::Liv::Lck::UI::LckDoubleButton>  _thirdPersonDistanceDoubleButton;

/// @brief Field _thirdPersonDistanceMultiplier, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__thirdPersonDistanceMultiplier, put=__cordl_internal_set__thirdPersonDistanceMultiplier)) float_t  _thirdPersonDistanceMultiplier;

/// @brief Field _thirdPersonFOVDoubleButton, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get__thirdPersonFOVDoubleButton, put=__cordl_internal_set__thirdPersonFOVDoubleButton)) ::UnityW<::Liv::Lck::UI::LckDoubleButton>  _thirdPersonFOVDoubleButton;

/// @brief Field _thirdPersonHeightAngle, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get__thirdPersonHeightAngle, put=__cordl_internal_set__thirdPersonHeightAngle)) float_t  _thirdPersonHeightAngle;

/// @brief Field _thirdPersonSmoothingDoubleButton, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get__thirdPersonSmoothingDoubleButton, put=__cordl_internal_set__thirdPersonSmoothingDoubleButton)) ::UnityW<::Liv::Lck::UI::LckDoubleButton>  _thirdPersonSmoothingDoubleButton;

/// @brief Field _thirdPersonStabilizer, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get__thirdPersonStabilizer, put=__cordl_internal_set__thirdPersonStabilizer)) ::UnityW<::Liv::Lck::Smoothing::LckStabilizer>  _thirdPersonStabilizer;

/// @brief Field _topButtonsController, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__topButtonsController, put=__cordl_internal_set__topButtonsController)) ::UnityW<::Liv::Lck::Tablet::LckTopButtonsController>  _topButtonsController;

/// @brief Method Awake, addr 0x9d543c4, size 0x104, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CalculateCorrectFOV, addr 0x9d554b8, size 0x104, virtual false, abstract: false, final false
inline float_t CalculateCorrectFOV(float_t  incomingVerticalFOV) ;

/// @brief Method CameraModeChanged, addr 0x9d56424, size 0x10c, virtual false, abstract: false, final false
inline void CameraModeChanged(::Liv::Lck::Tablet::CameraMode  mode) ;

/// @brief Method FixedUpdate, addr 0x9d5547c, size 0x10, virtual false, abstract: false, final false
inline void FixedUpdate() ;

/// @brief Method GetCurrentModeCamera, addr 0x9d560fc, size 0xb4, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Camera> GetCurrentModeCamera() ;

/// @brief Method GetCurrentModeFOV, addr 0x9d561b0, size 0xa8, virtual false, abstract: false, final false
inline float_t GetCurrentModeFOV() ;

/// @brief Method GetDescriptorForCurrentOrientation, addr 0x9d545a4, size 0x48, virtual false, abstract: false, final false
inline ::Liv::Lck::CameraTrackDescriptor GetDescriptorForCurrentOrientation(::Liv::Lck::CameraTrackDescriptor  descriptor) ;

/// @brief Method LateUpdate, addr 0x9d55454, size 0x14, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::Liv::Lck::Tablet::LCKCameraController* New_ctor() ;

/// @brief Method OnApplicationFocus, addr 0x9d53a64, size 0x50, virtual false, abstract: false, final false
inline void OnApplicationFocus(bool  focus) ;

/// @brief Method OnCaptureStart, addr 0x9d55c90, size 0x20, virtual false, abstract: false, final false
inline void OnCaptureStart(::Liv::Lck::LckResult*  result) ;

/// @brief Method OnCaptureStopped, addr 0x9d55cb0, size 0x8, virtual false, abstract: false, final false
inline void OnCaptureStopped(::Liv::Lck::LckResult*  result) ;

/// @brief Method OnDestroy, addr 0x9d55014, size 0x440, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x9d54d58, size 0x2bc, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x9d54a9c, size 0x2bc, virtual false, abstract: false, final false
inline void OnEnable() ;

/// [AsyncStateMachine(typeof(Liv.Lck.Tablet.LCKCameraController::<OnQualityOptionSelected>d__49))]
/// @brief Method OnQualityOptionSelected, addr 0x9d544c8, size 0xdc, virtual false, abstract: false, final false
inline void OnQualityOptionSelected(::Liv::Lck::QualityOption  qualityOption) ;

/// @brief Method OnValidate, addr 0x9d5398c, size 0xd8, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method ProcessFirstCameraPosition, addr 0x9d54614, size 0xf8, virtual false, abstract: false, final false
inline void ProcessFirstCameraPosition() ;

/// @brief Method ProcessFirstPersonFov, addr 0x9d555ec, size 0x2c, virtual false, abstract: false, final false
inline void ProcessFirstPersonFov(float_t  value) ;

/// @brief Method ProcessFirstPersonSmoothness, addr 0x9d55618, size 0x30, virtual false, abstract: false, final false
inline void ProcessFirstPersonSmoothness(float_t  value) ;

/// @brief Method ProcessSelfieFlip, addr 0x9d56258, size 0xd8, virtual false, abstract: false, final false
inline void ProcessSelfieFlip() ;

/// @brief Method ProcessSelfieFov, addr 0x9d5548c, size 0x2c, virtual false, abstract: false, final false
inline void ProcessSelfieFov(float_t  value) ;

/// @brief Method ProcessSelfieSmoothness, addr 0x9d555bc, size 0x30, virtual false, abstract: false, final false
inline void ProcessSelfieSmoothness(float_t  value) ;

/// @brief Method ProcessThirdCameraPosition, addr 0x9d5470c, size 0x390, virtual false, abstract: false, final false
inline void ProcessThirdCameraPosition() ;

/// @brief Method ProcessThirdPersonDistance, addr 0x9d556a4, size 0x10, virtual false, abstract: false, final false
inline void ProcessThirdPersonDistance(float_t  value) ;

/// @brief Method ProcessThirdPersonFov, addr 0x9d55648, size 0x2c, virtual false, abstract: false, final false
inline void ProcessThirdPersonFov(float_t  value) ;

/// @brief Method ProcessThirdPersonPosition, addr 0x9d56408, size 0x1c, virtual false, abstract: false, final false
inline void ProcessThirdPersonPosition() ;

/// @brief Method ProcessThirdPersonSmoothness, addr 0x9d55674, size 0x30, virtual false, abstract: false, final false
inline void ProcessThirdPersonSmoothness(float_t  value) ;

/// @brief Method RestartEcho, addr 0x9d55f04, size 0x150, virtual false, abstract: false, final false
inline void RestartEcho() ;

/// @brief Method SaveEcho, addr 0x9d55998, size 0x2f8, virtual false, abstract: false, final false
inline void SaveEcho() ;

/// @brief Method SetActiveLckCamera, addr 0x9d54104, size 0x200, virtual false, abstract: false, final false
inline void SetActiveLckCamera(::StringW  cameraId) ;

/// @brief Method SetFOV, addr 0x9d556b4, size 0x58, virtual false, abstract: false, final false
inline void SetFOV(::Liv::Lck::Tablet::CameraMode  mode, float_t  fov) ;

/// @brief Method SetMonitorScale, addr 0x9d56330, size 0xd8, virtual false, abstract: false, final false
inline void SetMonitorScale(::Liv::Lck::Tablet::CameraMode  mode) ;

/// @brief Method SetOrientationQualityAndTopButtonsIsDisabledState, addr 0x9d5594c, size 0x4c, virtual false, abstract: false, final false
inline void SetOrientationQualityAndTopButtonsIsDisabledState(bool  state) ;

/// @brief Method SetSelfieCameraOrientation, addr 0x9d54304, size 0xc0, virtual false, abstract: false, final false
inline void SetSelfieCameraOrientation(::UnityEngine::Vector3  position, ::UnityEngine::Vector3  rotation) ;

/// @brief Method SetTabletLayer, addr 0x9d53f14, size 0x1f0, virtual false, abstract: false, final false
inline void SetTabletLayer() ;

/// @brief Method Start, addr 0x9d53ab4, size 0x460, virtual false, abstract: false, final false
inline void Start() ;

/// [AsyncStateMachine(typeof(Liv.Lck.Tablet.LCKCameraController::<StopEchoIfActiveAsync>d__76))]
/// @brief Method StopEchoIfActiveAsync, addr 0x9d55dfc, size 0x108, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<bool>* StopEchoIfActiveAsync() ;

/// @brief Method ToggleGameAudio, addr 0x9d5570c, size 0xb8, virtual false, abstract: false, final false
inline void ToggleGameAudio() ;

/// @brief Method ToggleMicrophoneRecording, addr 0x9d4cf28, size 0x20c, virtual false, abstract: false, final false
inline void ToggleMicrophoneRecording(bool  isMicOn) ;

/// [AsyncStateMachine(typeof(Liv.Lck.Tablet.LCKCameraController::<ToggleOrientation>d__78))]
/// @brief Method ToggleOrientation, addr 0x9d56054, size 0xa8, virtual false, abstract: false, final false
inline void ToggleOrientation() ;

/// @brief Method ToggleRecording, addr 0x9d557c4, size 0x188, virtual false, abstract: false, final false
inline void ToggleRecording() ;

/// @brief Method Update, addr 0x9d55468, size 0x14, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateCameraPosition, addr 0x9d545ec, size 0x28, virtual false, abstract: false, final false
inline void UpdateCameraPosition() ;

constexpr ::System::Action_1<::Liv::Lck::Tablet::CameraMode>* const& __cordl_internal_get_OnCameraModeChanged() const;

constexpr ::System::Action_1<::Liv::Lck::Tablet::CameraMode>*& __cordl_internal_get_OnCameraModeChanged() ;

constexpr ::Liv::Lck::UpdateTimingMode const& __cordl_internal_get__cameraPositionUpdateTimingMode() const;

constexpr ::Liv::Lck::UpdateTimingMode& __cordl_internal_get__cameraPositionUpdateTimingMode() ;

constexpr ::Liv::Lck::Tablet::CameraMode const& __cordl_internal_get__currentCameraMode() const;

constexpr ::Liv::Lck::Tablet::CameraMode& __cordl_internal_get__currentCameraMode() ;

constexpr ::Liv::Lck::LckCameraOrientation const& __cordl_internal_get__currentCameraOrientation() const;

constexpr ::Liv::Lck::LckCameraOrientation& __cordl_internal_get__currentCameraOrientation() ;

constexpr ::UnityW<::Liv::Lck::LckCamera> const& __cordl_internal_get__firstPersonCamera() const;

constexpr ::UnityW<::Liv::Lck::LckCamera>& __cordl_internal_get__firstPersonCamera() ;

constexpr ::UnityW<::Liv::Lck::UI::LckDoubleButton> const& __cordl_internal_get__firstPersonFOVDoubleButton() const;

constexpr ::UnityW<::Liv::Lck::UI::LckDoubleButton>& __cordl_internal_get__firstPersonFOVDoubleButton() ;

constexpr ::UnityW<::Liv::Lck::UI::LckDoubleButton> const& __cordl_internal_get__firstPersonSmoothingDoubleButton() const;

constexpr ::UnityW<::Liv::Lck::UI::LckDoubleButton>& __cordl_internal_get__firstPersonSmoothingDoubleButton() ;

constexpr ::UnityW<::Liv::Lck::Smoothing::LckStabilizer> const& __cordl_internal_get__firstPersonStabilizer() const;

constexpr ::UnityW<::Liv::Lck::Smoothing::LckStabilizer>& __cordl_internal_get__firstPersonStabilizer() ;

constexpr bool const& __cordl_internal_get__gameAudioRecordingEnabled() const;

constexpr bool& __cordl_internal_get__gameAudioRecordingEnabled() ;

constexpr ::UnityW<::Liv::Lck::LckHeadsetCamera> const& __cordl_internal_get__headsetCamera() const;

constexpr ::UnityW<::Liv::Lck::LckHeadsetCamera>& __cordl_internal_get__headsetCamera() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__hmdTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__hmdTransform() ;

constexpr bool const& __cordl_internal_get__isSelfieFront() const;

constexpr bool& __cordl_internal_get__isSelfieFront() ;

constexpr bool const& __cordl_internal_get__isThirdPersonFront() const;

constexpr bool& __cordl_internal_get__isThirdPersonFront() ;

constexpr bool const& __cordl_internal_get__justTransitioned() const;

constexpr bool& __cordl_internal_get__justTransitioned() ;

constexpr ::Liv::Lck::ILckService* const& __cordl_internal_get__lckService() const;

constexpr ::Liv::Lck::ILckService*& __cordl_internal_get__lckService() ;

constexpr bool const& __cordl_internal_get__modifyRenderLayerAndCullingMasks() const;

constexpr bool& __cordl_internal_get__modifyRenderLayerAndCullingMasks() ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__monitorTransform() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__monitorTransform() ;

constexpr ::UnityW<::Liv::Lck::Tablet::LckNotificationController> const& __cordl_internal_get__notificationController() const;

constexpr ::UnityW<::Liv::Lck::Tablet::LckNotificationController>& __cordl_internal_get__notificationController() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get__objectsHiddenFromSelfieCamera() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get__objectsHiddenFromSelfieCamera() ;

constexpr ::UnityW<::Liv::Lck::UI::LckButton> const& __cordl_internal_get__orientationButton() const;

constexpr ::UnityW<::Liv::Lck::UI::LckButton>& __cordl_internal_get__orientationButton() ;

constexpr ::UnityW<::UnityEngine::ScriptableObject> const& __cordl_internal_get__qualityConfig() const;

constexpr ::UnityW<::UnityEngine::ScriptableObject>& __cordl_internal_get__qualityConfig() ;

constexpr ::UnityW<::Liv::Lck::UI::LckQualitySelector> const& __cordl_internal_get__qualitySelector() const;

constexpr ::UnityW<::Liv::Lck::UI::LckQualitySelector>& __cordl_internal_get__qualitySelector() ;

constexpr ::UnityW<::Liv::Lck::LckCamera> const& __cordl_internal_get__selfieCamera() const;

constexpr ::UnityW<::Liv::Lck::LckCamera>& __cordl_internal_get__selfieCamera() ;

constexpr ::UnityW<::Liv::Lck::UI::LckDoubleButton> const& __cordl_internal_get__selfieFOVDoubleButton() const;

constexpr ::UnityW<::Liv::Lck::UI::LckDoubleButton>& __cordl_internal_get__selfieFOVDoubleButton() ;

constexpr ::UnityW<::Liv::Lck::UI::LckDoubleButton> const& __cordl_internal_get__selfieSmoothingDoubleButton() const;

constexpr ::UnityW<::Liv::Lck::UI::LckDoubleButton>& __cordl_internal_get__selfieSmoothingDoubleButton() ;

constexpr ::UnityW<::Liv::Lck::Smoothing::LckStabilizer> const& __cordl_internal_get__selfieStabilizer() const;

constexpr ::UnityW<::Liv::Lck::Smoothing::LckStabilizer>& __cordl_internal_get__selfieStabilizer() ;

constexpr ::UnityW<::Liv::Lck::Tablet::LCKSettingsButtonsController> const& __cordl_internal_get__settingsButtonsController() const;

constexpr ::UnityW<::Liv::Lck::Tablet::LCKSettingsButtonsController>& __cordl_internal_get__settingsButtonsController() ;

constexpr ::StringW const& __cordl_internal_get__tabletRenderingLayer() const;

constexpr ::StringW& __cordl_internal_get__tabletRenderingLayer() ;

constexpr ::UnityW<::Liv::Lck::LckCamera> const& __cordl_internal_get__thirdPersonCamera() const;

constexpr ::UnityW<::Liv::Lck::LckCamera>& __cordl_internal_get__thirdPersonCamera() ;

constexpr float_t const& __cordl_internal_get__thirdPersonDistance() const;

constexpr float_t& __cordl_internal_get__thirdPersonDistance() ;

constexpr ::UnityW<::Liv::Lck::UI::LckDoubleButton> const& __cordl_internal_get__thirdPersonDistanceDoubleButton() const;

constexpr ::UnityW<::Liv::Lck::UI::LckDoubleButton>& __cordl_internal_get__thirdPersonDistanceDoubleButton() ;

constexpr float_t const& __cordl_internal_get__thirdPersonDistanceMultiplier() const;

constexpr float_t& __cordl_internal_get__thirdPersonDistanceMultiplier() ;

constexpr ::UnityW<::Liv::Lck::UI::LckDoubleButton> const& __cordl_internal_get__thirdPersonFOVDoubleButton() const;

constexpr ::UnityW<::Liv::Lck::UI::LckDoubleButton>& __cordl_internal_get__thirdPersonFOVDoubleButton() ;

constexpr float_t const& __cordl_internal_get__thirdPersonHeightAngle() const;

constexpr float_t& __cordl_internal_get__thirdPersonHeightAngle() ;

constexpr ::UnityW<::Liv::Lck::UI::LckDoubleButton> const& __cordl_internal_get__thirdPersonSmoothingDoubleButton() const;

constexpr ::UnityW<::Liv::Lck::UI::LckDoubleButton>& __cordl_internal_get__thirdPersonSmoothingDoubleButton() ;

constexpr ::UnityW<::Liv::Lck::Smoothing::LckStabilizer> const& __cordl_internal_get__thirdPersonStabilizer() const;

constexpr ::UnityW<::Liv::Lck::Smoothing::LckStabilizer>& __cordl_internal_get__thirdPersonStabilizer() ;

constexpr ::UnityW<::Liv::Lck::Tablet::LckTopButtonsController> const& __cordl_internal_get__topButtonsController() const;

constexpr ::UnityW<::Liv::Lck::Tablet::LckTopButtonsController>& __cordl_internal_get__topButtonsController() ;

constexpr void __cordl_internal_set_OnCameraModeChanged(::System::Action_1<::Liv::Lck::Tablet::CameraMode>*  value) ;

constexpr void __cordl_internal_set__cameraPositionUpdateTimingMode(::Liv::Lck::UpdateTimingMode  value) ;

constexpr void __cordl_internal_set__currentCameraMode(::Liv::Lck::Tablet::CameraMode  value) ;

constexpr void __cordl_internal_set__currentCameraOrientation(::Liv::Lck::LckCameraOrientation  value) ;

constexpr void __cordl_internal_set__firstPersonCamera(::UnityW<::Liv::Lck::LckCamera>  value) ;

constexpr void __cordl_internal_set__firstPersonFOVDoubleButton(::UnityW<::Liv::Lck::UI::LckDoubleButton>  value) ;

constexpr void __cordl_internal_set__firstPersonSmoothingDoubleButton(::UnityW<::Liv::Lck::UI::LckDoubleButton>  value) ;

constexpr void __cordl_internal_set__firstPersonStabilizer(::UnityW<::Liv::Lck::Smoothing::LckStabilizer>  value) ;

constexpr void __cordl_internal_set__gameAudioRecordingEnabled(bool  value) ;

constexpr void __cordl_internal_set__headsetCamera(::UnityW<::Liv::Lck::LckHeadsetCamera>  value) ;

constexpr void __cordl_internal_set__hmdTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__isSelfieFront(bool  value) ;

constexpr void __cordl_internal_set__isThirdPersonFront(bool  value) ;

constexpr void __cordl_internal_set__justTransitioned(bool  value) ;

constexpr void __cordl_internal_set__lckService(::Liv::Lck::ILckService*  value) ;

constexpr void __cordl_internal_set__modifyRenderLayerAndCullingMasks(bool  value) ;

constexpr void __cordl_internal_set__monitorTransform(::UnityW<::UnityEngine::RectTransform>  value) ;

constexpr void __cordl_internal_set__notificationController(::UnityW<::Liv::Lck::Tablet::LckNotificationController>  value) ;

constexpr void __cordl_internal_set__objectsHiddenFromSelfieCamera(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set__orientationButton(::UnityW<::Liv::Lck::UI::LckButton>  value) ;

constexpr void __cordl_internal_set__qualityConfig(::UnityW<::UnityEngine::ScriptableObject>  value) ;

constexpr void __cordl_internal_set__qualitySelector(::UnityW<::Liv::Lck::UI::LckQualitySelector>  value) ;

constexpr void __cordl_internal_set__selfieCamera(::UnityW<::Liv::Lck::LckCamera>  value) ;

constexpr void __cordl_internal_set__selfieFOVDoubleButton(::UnityW<::Liv::Lck::UI::LckDoubleButton>  value) ;

constexpr void __cordl_internal_set__selfieSmoothingDoubleButton(::UnityW<::Liv::Lck::UI::LckDoubleButton>  value) ;

constexpr void __cordl_internal_set__selfieStabilizer(::UnityW<::Liv::Lck::Smoothing::LckStabilizer>  value) ;

constexpr void __cordl_internal_set__settingsButtonsController(::UnityW<::Liv::Lck::Tablet::LCKSettingsButtonsController>  value) ;

constexpr void __cordl_internal_set__tabletRenderingLayer(::StringW  value) ;

constexpr void __cordl_internal_set__thirdPersonCamera(::UnityW<::Liv::Lck::LckCamera>  value) ;

constexpr void __cordl_internal_set__thirdPersonDistance(float_t  value) ;

constexpr void __cordl_internal_set__thirdPersonDistanceDoubleButton(::UnityW<::Liv::Lck::UI::LckDoubleButton>  value) ;

constexpr void __cordl_internal_set__thirdPersonDistanceMultiplier(float_t  value) ;

constexpr void __cordl_internal_set__thirdPersonFOVDoubleButton(::UnityW<::Liv::Lck::UI::LckDoubleButton>  value) ;

constexpr void __cordl_internal_set__thirdPersonHeightAngle(float_t  value) ;

constexpr void __cordl_internal_set__thirdPersonSmoothingDoubleButton(::UnityW<::Liv::Lck::UI::LckDoubleButton>  value) ;

constexpr void __cordl_internal_set__thirdPersonStabilizer(::UnityW<::Liv::Lck::Smoothing::LckStabilizer>  value) ;

constexpr void __cordl_internal_set__topButtonsController(::UnityW<::Liv::Lck::Tablet::LckTopButtonsController>  value) ;

/// @brief Method .ctor, addr 0x9d566ec, size 0xe0, virtual false, abstract: false, final false
inline void _ctor() ;

static inline bool getStaticF_ColliderButtonsInUse() ;

/// @brief Method get_CameraPositionUpdateTimingMode, addr 0x9d5397c, size 0x8, virtual false, abstract: false, final false
inline ::Liv::Lck::UpdateTimingMode get_CameraPositionUpdateTimingMode() ;

/// @brief Method get_HmdTransform, addr 0x9d538e0, size 0x94, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_HmdTransform() ;

static inline void setStaticF_ColliderButtonsInUse(bool  value) ;

/// @brief Method set_CameraPositionUpdateTimingMode, addr 0x9d53984, size 0x8, virtual false, abstract: false, final false
inline void set_CameraPositionUpdateTimingMode(::Liv::Lck::UpdateTimingMode  value) ;

/// @brief Method set_HmdTransform, addr 0x9d53974, size 0x8, virtual false, abstract: false, final false
inline void set_HmdTransform(::UnityEngine::Transform*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LCKCameraController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LCKCameraController", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LCKCameraController(LCKCameraController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LCKCameraController", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LCKCameraController(LCKCameraController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24931};

/// [InjectLck]
/// @brief Field _lckService, offset: 0x20, size: 0x8, def value: None
 ::Liv::Lck::ILckService*  ____lckService;

/// [Header("Options")]
/// [SerializeField]
/// [Tooltip("If true, the script will automatically manage layers and culling masks. It will move objects in the \'ObjectsHiddenFromSelfieCamera\' list to the \'Tablet Rendering Layer\' and adjust camera culling masks to hide this layer in Selfie mode and show it in other modes.")]
/// @brief Field _modifyRenderLayerAndCullingMasks, offset: 0x28, size: 0x1, def value: None
 bool  ____modifyRenderLayerAndCullingMasks;

/// [SerializeField]
/// [Tooltip("The name of the Unity layer used to tag objects that should be hidden from the selfie camera. This layer must exist in the project\'s Tag and Layer Manager.")]
/// @brief Field _tabletRenderingLayer, offset: 0x30, size: 0x8, def value: None
 ::StringW  ____tabletRenderingLayer;

/// [FormerlySerializedAs("_objectsOnTabletRenderingLayer")]
/// [SerializeField]
/// [Tooltip("A list of all GameObjects (e.g., the tablet model itself) that should be made invisible to the selfie camera.")]
/// @brief Field _objectsHiddenFromSelfieCamera, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::GameObject>>*  ____objectsHiddenFromSelfieCamera;

/// [SerializeReference]
/// [Tooltip("A ScriptableObject that implements the ILckQualityConfig interface. This object defines the available quality levels (resolution, bitrate, etc.) for recording and streaming.")]
/// @brief Field _qualityConfig, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ScriptableObject>  ____qualityConfig;

/// [SerializeField]
/// [Tooltip("The transform representing the user\'s head or HMD. This is the primary anchor for first-person and third-person camera positioning. If null, it will default to the main camera\'s transform.")]
/// @brief Field _hmdTransform, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____hmdTransform;

/// [SerializeField]
/// [Tooltip("A multiplier applied to the value from the third-person distance UI button to determine the actual camera distance.")]
/// @brief Field _thirdPersonDistanceMultiplier, offset: 0x50, size: 0x4, def value: None
 float_t  ____thirdPersonDistanceMultiplier;

/// [SerializeField]
/// [Tooltip("The default angle (in degrees) of the third-person camera, looking down at the player.")]
/// @brief Field _thirdPersonHeightAngle, offset: 0x54, size: 0x4, def value: None
 float_t  ____thirdPersonHeightAngle;

/// [SerializeField]
/// [Tooltip("Mode that is used to determine when the active camera\'s position is updated. Depending on update order / movement setup, changing this can fix tablet jitter in captures.")]
/// @brief Field _cameraPositionUpdateTimingMode, offset: 0x58, size: 0x4, def value: None
 ::Liv::Lck::UpdateTimingMode  ____cameraPositionUpdateTimingMode;

/// [Header("Main References")]
/// [SerializeField]
/// @brief Field _settingsButtonsController, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::Tablet::LCKSettingsButtonsController>  ____settingsButtonsController;

/// [SerializeField]
/// @brief Field _topButtonsController, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::Tablet::LckTopButtonsController>  ____topButtonsController;

/// [SerializeField]
/// @brief Field _monitorTransform, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ____monitorTransform;

/// [SerializeField]
/// @brief Field _qualitySelector, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::UI::LckQualitySelector>  ____qualitySelector;

/// [SerializeField]
/// @brief Field _notificationController, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::Tablet::LckNotificationController>  ____notificationController;

/// [Header("Button References")]
/// [Header("Selfie")]
/// [SerializeField]
/// @brief Field _selfieFOVDoubleButton, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::UI::LckDoubleButton>  ____selfieFOVDoubleButton;

/// [SerializeField]
/// @brief Field _selfieSmoothingDoubleButton, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::UI::LckDoubleButton>  ____selfieSmoothingDoubleButton;

/// [Header("First Person")]
/// [SerializeField]
/// @brief Field _firstPersonFOVDoubleButton, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::UI::LckDoubleButton>  ____firstPersonFOVDoubleButton;

/// [SerializeField]
/// @brief Field _firstPersonSmoothingDoubleButton, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::UI::LckDoubleButton>  ____firstPersonSmoothingDoubleButton;

/// [Header("Third Person")]
/// [SerializeField]
/// @brief Field _thirdPersonFOVDoubleButton, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::UI::LckDoubleButton>  ____thirdPersonFOVDoubleButton;

/// [SerializeField]
/// @brief Field _thirdPersonSmoothingDoubleButton, offset: 0xb0, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::UI::LckDoubleButton>  ____thirdPersonSmoothingDoubleButton;

/// [SerializeField]
/// @brief Field _thirdPersonDistanceDoubleButton, offset: 0xb8, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::UI::LckDoubleButton>  ____thirdPersonDistanceDoubleButton;

/// [Header("Portrait Landscape Toggle")]
/// [SerializeField]
/// @brief Field _orientationButton, offset: 0xc0, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::UI::LckButton>  ____orientationButton;

/// [Header("Camera Modes")]
/// [Header("Selfie")]
/// [SerializeField]
/// @brief Field _selfieCamera, offset: 0xc8, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::LckCamera>  ____selfieCamera;

/// [SerializeField]
/// @brief Field _selfieStabilizer, offset: 0xd0, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::Smoothing::LckStabilizer>  ____selfieStabilizer;

/// [Header("First Person")]
/// [SerializeField]
/// @brief Field _firstPersonCamera, offset: 0xd8, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::LckCamera>  ____firstPersonCamera;

/// [SerializeField]
/// @brief Field _firstPersonStabilizer, offset: 0xe0, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::Smoothing::LckStabilizer>  ____firstPersonStabilizer;

/// [Header("Third Person")]
/// [SerializeField]
/// @brief Field _thirdPersonCamera, offset: 0xe8, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::LckCamera>  ____thirdPersonCamera;

/// [SerializeField]
/// @brief Field _thirdPersonStabilizer, offset: 0xf0, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::Smoothing::LckStabilizer>  ____thirdPersonStabilizer;

/// [Header("Headset")]
/// [SerializeField]
/// @brief Field _headsetCamera, offset: 0xf8, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::LckHeadsetCamera>  ____headsetCamera;

/// @brief Field _thirdPersonDistance, offset: 0x100, size: 0x4, def value: None
 float_t  ____thirdPersonDistance;

/// @brief Field _isThirdPersonFront, offset: 0x104, size: 0x1, def value: None
 bool  ____isThirdPersonFront;

/// @brief Field _isSelfieFront, offset: 0x105, size: 0x1, def value: None
 bool  ____isSelfieFront;

/// @brief Field _currentCameraOrientation, offset: 0x108, size: 0x4, def value: None
 ::Liv::Lck::LckCameraOrientation  ____currentCameraOrientation;

/// @brief Field _justTransitioned, offset: 0x10c, size: 0x1, def value: None
 bool  ____justTransitioned;

/// @brief Field _gameAudioRecordingEnabled, offset: 0x10d, size: 0x1, def value: None
 bool  ____gameAudioRecordingEnabled;

/// @brief Field _currentCameraMode, offset: 0x110, size: 0x4, def value: None
 ::Liv::Lck::Tablet::CameraMode  ____currentCameraMode;

/// @brief Field OnCameraModeChanged, offset: 0x118, size: 0x8, def value: None
 ::System::Action_1<::Liv::Lck::Tablet::CameraMode>*  ___OnCameraModeChanged;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::Tablet::LCKCameraController, ____lckService) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Tablet::LCKCameraController, ____modifyRenderLayerAndCullingMasks) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Tablet::LCKCameraController, ____tabletRenderingLayer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Tablet::LCKCameraController, ____objectsHiddenFromSelfieCamera) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Tablet::LCKCameraController, ____qualityConfig) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Tablet::LCKCameraController, ____hmdTransform) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Tablet::LCKCameraController, ____thirdPersonDistanceMultiplier) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Tablet::LCKCameraController, ____thirdPersonHeightAngle) == 0x54, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Tablet::LCKCameraController, ____cameraPositionUpdateTimingMode) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Tablet::LCKCameraController, ____settingsButtonsController) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Tablet::LCKCameraController, ____topButtonsController) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Tablet::LCKCameraController, ____monitorTransform) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Tablet::LCKCameraController, ____qualitySelector) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Tablet::LCKCameraController, ____notificationController) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Tablet::LCKCameraController, ____selfieFOVDoubleButton) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Tablet::LCKCameraController, ____selfieSmoothingDoubleButton) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Tablet::LCKCameraController, ____firstPersonFOVDoubleButton) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Tablet::LCKCameraController, ____firstPersonSmoothingDoubleButton) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Tablet::LCKCameraController, ____thirdPersonFOVDoubleButton) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Tablet::LCKCameraController, ____thirdPersonSmoothingDoubleButton) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Tablet::LCKCameraController, ____thirdPersonDistanceDoubleButton) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Tablet::LCKCameraController, ____orientationButton) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Tablet::LCKCameraController, ____selfieCamera) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Tablet::LCKCameraController, ____selfieStabilizer) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Tablet::LCKCameraController, ____firstPersonCamera) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Tablet::LCKCameraController, ____firstPersonStabilizer) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Tablet::LCKCameraController, ____thirdPersonCamera) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Tablet::LCKCameraController, ____thirdPersonStabilizer) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Tablet::LCKCameraController, ____headsetCamera) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Tablet::LCKCameraController, ____thirdPersonDistance) == 0x100, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Tablet::LCKCameraController, ____isThirdPersonFront) == 0x104, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Tablet::LCKCameraController, ____isSelfieFront) == 0x105, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Tablet::LCKCameraController, ____currentCameraOrientation) == 0x108, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Tablet::LCKCameraController, ____justTransitioned) == 0x10c, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Tablet::LCKCameraController, ____gameAudioRecordingEnabled) == 0x10d, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Tablet::LCKCameraController, ____currentCameraMode) == 0x110, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Tablet::LCKCameraController, ___OnCameraModeChanged) == 0x118, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::Tablet::LCKCameraController) == 0x120, "Size mismatch!");

} // namespace end def Liv::Lck::Tablet
