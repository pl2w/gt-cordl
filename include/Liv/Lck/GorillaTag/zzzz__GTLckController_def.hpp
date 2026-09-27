#pragma once
// IWYU pragma private; include "Liv/Lck/GorillaTag/GTLckController.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Liv/Lck/GorillaTag/zzzz__CameraMode_def.hpp"
#include "Liv/Lck/GorillaTag/zzzz__GtCameraModeTransform_def.hpp"
#include "Liv/Lck/zzzz__CameraTrackDescriptor_def.hpp"
#include "Liv/Lck/zzzz__LckCameraOrientation_def.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(GTLckController)
namespace GlobalNamespace {
struct GTLckController__OnQualityOptionSelected_d__81;
}
namespace GlobalNamespace {
struct GTLckController__StopEchoIfActiveAsync_d__134;
}
namespace GlobalNamespace {
struct GTLckController__ToggleOrientation_d__131;
}
namespace GlobalNamespace {
class GtThirdPersonCameraBehaviour;
}
namespace Liv::Lck::GorillaTag {
struct CameraMode;
}
namespace Liv::Lck::GorillaTag {
class CoconutCamera;
}
namespace Liv::Lck::GorillaTag {
class DroneSystem;
}
namespace Liv::Lck::GorillaTag {
class GTLckController_CameraModeDelegate;
}
namespace Liv::Lck::GorillaTag {
class GTLckController___c;
}
namespace Liv::Lck::GorillaTag {
class GtAudioButton;
}
namespace Liv::Lck::GorillaTag {
class GtButton;
}
namespace Liv::Lck::GorillaTag {
struct GtCameraDockSettings;
}
namespace Liv::Lck::GorillaTag {
struct GtCameraModeTransform;
}
namespace Liv::Lck::GorillaTag {
class GtColliderTriggerProcessorsGroup;
}
namespace Liv::Lck::GorillaTag {
class GtCounter;
}
namespace Liv::Lck::GorillaTag {
class GtDroneModeTabletUIAppearance;
}
namespace Liv::Lck::GorillaTag {
class GtRecordButton;
}
namespace Liv::Lck::GorillaTag {
class GtSaveEchoButton;
}
namespace Liv::Lck::GorillaTag {
class GtScreenButton;
}
namespace Liv::Lck::GorillaTag {
class GtSelectorsGroup;
}
namespace Liv::Lck::GorillaTag {
class GtSettingsSectionGroup;
}
namespace Liv::Lck::GorillaTag {
class GtToggle;
}
namespace Liv::Lck::GorillaTag {
class GtUiSettings;
}
namespace Liv::Lck::Smoothing {
class LckStabilizer;
}
namespace Liv::Lck::Tablet {
class LckNotificationController;
}
namespace Liv::Lck::Tablet {
class LckTopButtonsController;
}
namespace Liv::Lck::UI {
class LckQualitySelector;
}
namespace Liv::Lck {
struct CameraTrackDescriptor;
}
namespace Liv::Lck {
class ILckCamera;
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
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace UnityEngine::Events {
template<typename T0>
class UnityAction_1;
}
namespace UnityEngine {
class Camera;
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
// Forward declare root types
namespace Liv::Lck::GorillaTag {
class GTLckController;
}
namespace Liv::Lck::GorillaTag {
class GTLckController_CameraModeDelegate;
}
namespace Liv::Lck::GorillaTag {
class GTLckController___c;
}
// Write type traits
MARK_REF_T(::Liv::Lck::GorillaTag::GTLckController*);
MARK_REF_T(::Liv::Lck::GorillaTag::GTLckController_CameraModeDelegate*);
MARK_REF_T(::Liv::Lck::GorillaTag::GTLckController___c*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::GorillaTag::GTLckController*, "Liv.Lck.GorillaTag", "GTLckController");
DEFINE_IL2CPP_CLASS(::Liv::Lck::GorillaTag::GTLckController_CameraModeDelegate*, "Liv.Lck.GorillaTag", "GTLckController/CameraModeDelegate");
DEFINE_IL2CPP_CLASS(::Liv::Lck::GorillaTag::GTLckController___c*, "Liv.Lck.GorillaTag", "GTLckController/<>c");
// [DefaultExecutionOrder(-790)]
// Dependencies Liv.Lck.CameraTrackDescriptor, Liv.Lck.GorillaTag.CameraMode, Liv.Lck.GorillaTag.GtCameraModeTransform, Liv.Lck.LckCameraOrientation, UnityEngine.GameObject, UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace Liv::Lck::GorillaTag {
// Is value type: false
// CS Name: Liv.Lck.GorillaTag.GTLckController
class CORDL_TYPE GTLckController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _OnQualityOptionSelected_d__81 = ::GlobalNamespace::GTLckController__OnQualityOptionSelected_d__81;

using _StopEchoIfActiveAsync_d__134 = ::GlobalNamespace::GTLckController__StopEchoIfActiveAsync_d__134;

using _ToggleOrientation_d__131 = ::GlobalNamespace::GTLckController__ToggleOrientation_d__131;

using CameraModeDelegate = ::Liv::Lck::GorillaTag::GTLckController_CameraModeDelegate;

using __c = ::Liv::Lck::GorillaTag::GTLckController___c;

 __declspec(property(get=get_CurrentCameraMode)) ::Liv::Lck::GorillaTag::CameraMode  CurrentCameraMode;

 __declspec(property(get=get_GTSelectorsGroup, put=set_GTSelectorsGroup)) ::UnityW<::Liv::Lck::GorillaTag::GtSelectorsGroup>  GTSelectorsGroup;

/// @brief Field GtColliderTriggerProcessorsGroup, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_GtColliderTriggerProcessorsGroup, put=__cordl_internal_set_GtColliderTriggerProcessorsGroup)) ::UnityW<::Liv::Lck::GorillaTag::GtColliderTriggerProcessorsGroup>  GtColliderTriggerProcessorsGroup;

 __declspec(property(get=get_HorizontalMode)) bool  HorizontalMode;

 __declspec(property(get=get_IsTabletFollowingPlayer)) bool  IsTabletFollowingPlayer;

 __declspec(property(get=get_IsThirdPersonFront, put=set_IsThirdPersonFront)) bool  IsThirdPersonFront;

/// @brief Field OnCameraModeChanged, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnCameraModeChanged, put=__cordl_internal_set_OnCameraModeChanged)) ::Liv::Lck::GorillaTag::GTLckController_CameraModeDelegate*  OnCameraModeChanged;

/// @brief Field OnFOVUpdated, offset 0x148, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnFOVUpdated, put=__cordl_internal_set_OnFOVUpdated)) ::System::Action_1<::Liv::Lck::GorillaTag::CameraMode>*  OnFOVUpdated;

/// @brief Field OnHorizontalModeChanged, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnHorizontalModeChanged, put=__cordl_internal_set_OnHorizontalModeChanged)) ::UnityEngine::Events::UnityAction_1<bool>*  OnHorizontalModeChanged;

 __declspec(property(get=get_ThirdPersonHeightAngle, put=set_ThirdPersonHeightAngle)) float_t  ThirdPersonHeightAngle;

 __declspec(property(get=get_ThirdPersonSideAngle, put=set_ThirdPersonSideAngle)) float_t  ThirdPersonSideAngle;

/// @brief Field <GTSelectorsGroup>k__BackingField, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__GTSelectorsGroup_k__BackingField, put=__cordl_internal_set__GTSelectorsGroup_k__BackingField)) ::UnityW<::Liv::Lck::GorillaTag::GtSelectorsGroup>  _GTSelectorsGroup_k__BackingField;

/// @brief Field <IsThirdPersonFront>k__BackingField, offset 0x130, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsThirdPersonFront_k__BackingField, put=__cordl_internal_set__IsThirdPersonFront_k__BackingField)) bool  _IsThirdPersonFront_k__BackingField;

/// @brief Field <ThirdPersonHeightAngle>k__BackingField, offset 0x128, size 0x4 
 __declspec(property(get=__cordl_internal_get__ThirdPersonHeightAngle_k__BackingField, put=__cordl_internal_set__ThirdPersonHeightAngle_k__BackingField)) float_t  _ThirdPersonHeightAngle_k__BackingField;

/// @brief Field <ThirdPersonSideAngle>k__BackingField, offset 0x12c, size 0x4 
 __declspec(property(get=__cordl_internal_get__ThirdPersonSideAngle_k__BackingField, put=__cordl_internal_set__ThirdPersonSideAngle_k__BackingField)) float_t  _ThirdPersonSideAngle_k__BackingField;

/// @brief Field _changeOrientation, offset 0x190, size 0x8 
 __declspec(property(get=__cordl_internal_get__changeOrientation, put=__cordl_internal_set__changeOrientation)) ::UnityW<::Liv::Lck::GorillaTag::GtButton>  _changeOrientation;

/// @brief Field _coconutCamera, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get__coconutCamera, put=__cordl_internal_set__coconutCamera)) ::UnityW<::Liv::Lck::GorillaTag::CoconutCamera>  _coconutCamera;

/// @brief Field _currentCameraMode, offset 0x1c0, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentCameraMode, put=__cordl_internal_set__currentCameraMode)) ::Liv::Lck::GorillaTag::CameraMode  _currentCameraMode;

/// @brief Field _currentCameraOrientation, offset 0x1e4, size 0x4 
 __declspec(property(get=__cordl_internal_get__currentCameraOrientation, put=__cordl_internal_set__currentCameraOrientation)) ::Liv::Lck::LckCameraOrientation  _currentCameraOrientation;

/// @brief Field _currentTrackDescriptor, offset 0x1fc, size 0x14 
 __declspec(property(get=__cordl_internal_get__currentTrackDescriptor, put=__cordl_internal_set__currentTrackDescriptor)) ::Liv::Lck::CameraTrackDescriptor  _currentTrackDescriptor;

/// @brief Field _droneModeTabletUIAppearance, offset 0x158, size 0x8 
 __declspec(property(get=__cordl_internal_get__droneModeTabletUIAppearance, put=__cordl_internal_set__droneModeTabletUIAppearance)) ::UnityW<::Liv::Lck::GorillaTag::GtDroneModeTabletUIAppearance>  _droneModeTabletUIAppearance;

/// @brief Field _droneSystem, offset 0x150, size 0x8 
 __declspec(property(get=__cordl_internal_get__droneSystem, put=__cordl_internal_set__droneSystem)) ::UnityW<::Liv::Lck::GorillaTag::DroneSystem>  _droneSystem;

/// @brief Field _firstPersonCamera, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get__firstPersonCamera, put=__cordl_internal_set__firstPersonCamera)) ::UnityW<::Liv::Lck::LckCamera>  _firstPersonCamera;

/// @brief Field _firstPersonFovCounter, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__firstPersonFovCounter, put=__cordl_internal_set__firstPersonFovCounter)) ::UnityW<::Liv::Lck::GorillaTag::GtCounter>  _firstPersonFovCounter;

/// @brief Field _firstPersonSmoothnessCounter, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__firstPersonSmoothnessCounter, put=__cordl_internal_set__firstPersonSmoothnessCounter)) ::UnityW<::Liv::Lck::GorillaTag::GtCounter>  _firstPersonSmoothnessCounter;

/// @brief Field _firstPersonStabilizer, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get__firstPersonStabilizer, put=__cordl_internal_set__firstPersonStabilizer)) ::UnityW<::Liv::Lck::Smoothing::LckStabilizer>  _firstPersonStabilizer;

/// @brief Field _gtSettingsSectionGroup, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__gtSettingsSectionGroup, put=__cordl_internal_set__gtSettingsSectionGroup)) ::UnityW<::Liv::Lck::GorillaTag::GtSettingsSectionGroup>  _gtSettingsSectionGroup;

/// @brief Field _headsetCamera, offset 0x138, size 0x8 
 __declspec(property(get=__cordl_internal_get__headsetCamera, put=__cordl_internal_set__headsetCamera)) ::UnityW<::Liv::Lck::LckHeadsetCamera>  _headsetCamera;

/// @brief Field _headsetCropModeToggle, offset 0x168, size 0x8 
 __declspec(property(get=__cordl_internal_get__headsetCropModeToggle, put=__cordl_internal_set__headsetCropModeToggle)) ::UnityW<::Liv::Lck::GorillaTag::GtToggle>  _headsetCropModeToggle;

/// @brief Field _headsetEyeToggle, offset 0x160, size 0x8 
 __declspec(property(get=__cordl_internal_get__headsetEyeToggle, put=__cordl_internal_set__headsetEyeToggle)) ::UnityW<::Liv::Lck::GorillaTag::GtToggle>  _headsetEyeToggle;

/// @brief Field _isHorizontalMode, offset 0x1b0, size 0x1 
 __declspec(property(get=__cordl_internal_get__isHorizontalMode, put=__cordl_internal_set__isHorizontalMode)) bool  _isHorizontalMode;

/// @brief Field _isOverlayActive, offset 0x210, size 0x1 
 __declspec(property(get=__cordl_internal_get__isOverlayActive, put=__cordl_internal_set__isOverlayActive)) bool  _isOverlayActive;

/// @brief Field _isSelfieFront, offset 0x1e0, size 0x1 
 __declspec(property(get=__cordl_internal_get__isSelfieFront, put=__cordl_internal_set__isSelfieFront)) bool  _isSelfieFront;

/// @brief Field _isTabletFollowingPlayer, offset 0x1d9, size 0x1 
 __declspec(property(get=__cordl_internal_get__isTabletFollowingPlayer, put=__cordl_internal_set__isTabletFollowingPlayer)) bool  _isTabletFollowingPlayer;

/// @brief Field _justTransitioned, offset 0x1d8, size 0x1 
 __declspec(property(get=__cordl_internal_get__justTransitioned, put=__cordl_internal_set__justTransitioned)) bool  _justTransitioned;

/// @brief Field _lckService, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__lckService, put=__cordl_internal_set__lckService)) ::Liv::Lck::ILckService*  _lckService;

/// @brief Field _micState, offset 0x1f4, size 0x1 
 __declspec(property(get=__cordl_internal_get__micState, put=__cordl_internal_set__micState)) bool  _micState;

/// @brief Field _microphoneButton, offset 0x198, size 0x8 
 __declspec(property(get=__cordl_internal_get__microphoneButton, put=__cordl_internal_set__microphoneButton)) ::UnityW<::Liv::Lck::GorillaTag::GtAudioButton>  _microphoneButton;

/// @brief Field _monitorTransform, offset 0x1a0, size 0x8 
 __declspec(property(get=__cordl_internal_get__monitorTransform, put=__cordl_internal_set__monitorTransform)) ::UnityW<::UnityEngine::RectTransform>  _monitorTransform;

/// @brief Field _notificationController, offset 0x1b8, size 0x8 
 __declspec(property(get=__cordl_internal_get__notificationController, put=__cordl_internal_set__notificationController)) ::UnityW<::Liv::Lck::Tablet::LckNotificationController>  _notificationController;

/// @brief Field _playerCamera, offset 0x1c8, size 0x8 
 __declspec(property(get=__cordl_internal_get__playerCamera, put=__cordl_internal_set__playerCamera)) ::UnityW<::UnityEngine::Camera>  _playerCamera;

/// @brief Field _playerHead, offset 0x1d0, size 0x8 
 __declspec(property(get=__cordl_internal_get__playerHead, put=__cordl_internal_set__playerHead)) ::UnityW<::UnityEngine::Transform>  _playerHead;

/// @brief Field _qualityConfig, offset 0x180, size 0x8 
 __declspec(property(get=__cordl_internal_get__qualityConfig, put=__cordl_internal_set__qualityConfig)) ::UnityW<::UnityEngine::ScriptableObject>  _qualityConfig;

/// @brief Field _qualitySelector, offset 0x188, size 0x8 
 __declspec(property(get=__cordl_internal_get__qualitySelector, put=__cordl_internal_set__qualitySelector)) ::UnityW<::Liv::Lck::UI::LckQualitySelector>  _qualitySelector;

/// @brief Field _recordButton, offset 0x170, size 0x8 
 __declspec(property(get=__cordl_internal_get__recordButton, put=__cordl_internal_set__recordButton)) ::UnityW<::Liv::Lck::GorillaTag::GtRecordButton>  _recordButton;

/// @brief Field _saveEchoButton, offset 0x178, size 0x8 
 __declspec(property(get=__cordl_internal_get__saveEchoButton, put=__cordl_internal_set__saveEchoButton)) ::UnityW<::Liv::Lck::GorillaTag::GtSaveEchoButton>  _saveEchoButton;

/// @brief Field _selfieBackTransform, offset 0xd0, size 0x18 
 __declspec(property(get=__cordl_internal_get__selfieBackTransform, put=__cordl_internal_set__selfieBackTransform)) ::Liv::Lck::GorillaTag::GtCameraModeTransform  _selfieBackTransform;

/// @brief Field _selfieCamera, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get__selfieCamera, put=__cordl_internal_set__selfieCamera)) ::UnityW<::Liv::Lck::LckCamera>  _selfieCamera;

/// @brief Field _selfieFlipButton, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__selfieFlipButton, put=__cordl_internal_set__selfieFlipButton)) ::UnityW<::Liv::Lck::GorillaTag::GtScreenButton>  _selfieFlipButton;

/// @brief Field _selfieFollowModeOffset, offset 0x1e8, size 0xc 
 __declspec(property(get=__cordl_internal_get__selfieFollowModeOffset, put=__cordl_internal_set__selfieFollowModeOffset)) ::UnityEngine::Vector3  _selfieFollowModeOffset;

/// @brief Field _selfieFollowModeTransform, offset 0xe8, size 0x18 
 __declspec(property(get=__cordl_internal_get__selfieFollowModeTransform, put=__cordl_internal_set__selfieFollowModeTransform)) ::Liv::Lck::GorillaTag::GtCameraModeTransform  _selfieFollowModeTransform;

/// @brief Field _selfieFovCounter, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__selfieFovCounter, put=__cordl_internal_set__selfieFovCounter)) ::UnityW<::Liv::Lck::GorillaTag::GtCounter>  _selfieFovCounter;

/// @brief Field _selfieFrontTransform, offset 0xb8, size 0x18 
 __declspec(property(get=__cordl_internal_get__selfieFrontTransform, put=__cordl_internal_set__selfieFrontTransform)) ::Liv::Lck::GorillaTag::GtCameraModeTransform  _selfieFrontTransform;

/// @brief Field _selfieSmoothness, offset 0x1dc, size 0x4 
 __declspec(property(get=__cordl_internal_get__selfieSmoothness, put=__cordl_internal_set__selfieSmoothness)) float_t  _selfieSmoothness;

/// @brief Field _selfieSmoothnessCounter, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__selfieSmoothnessCounter, put=__cordl_internal_set__selfieSmoothnessCounter)) ::UnityW<::Liv::Lck::GorillaTag::GtCounter>  _selfieSmoothnessCounter;

/// @brief Field _selfieStabilizer, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get__selfieStabilizer, put=__cordl_internal_set__selfieStabilizer)) ::UnityW<::Liv::Lck::Smoothing::LckStabilizer>  _selfieStabilizer;

/// @brief Field _settings, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__settings, put=__cordl_internal_set__settings)) ::UnityW<::Liv::Lck::GorillaTag::GtUiSettings>  _settings;

/// @brief Field _tabletFollowsPlayerToggle, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__tabletFollowsPlayerToggle, put=__cordl_internal_set__tabletFollowsPlayerToggle)) ::UnityW<::Liv::Lck::GorillaTag::GtToggle>  _tabletFollowsPlayerToggle;

/// @brief Field _thirdPersonCamera, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get__thirdPersonCamera, put=__cordl_internal_set__thirdPersonCamera)) ::UnityW<::Liv::Lck::LckCamera>  _thirdPersonCamera;

/// @brief Field _thirdPersonCameraBehaviour, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get__thirdPersonCameraBehaviour, put=__cordl_internal_set__thirdPersonCameraBehaviour)) ::UnityW<::GlobalNamespace::GtThirdPersonCameraBehaviour>  _thirdPersonCameraBehaviour;

/// @brief Field _thirdPersonDistanceCounter, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__thirdPersonDistanceCounter, put=__cordl_internal_set__thirdPersonDistanceCounter)) ::UnityW<::Liv::Lck::GorillaTag::GtCounter>  _thirdPersonDistanceCounter;

/// @brief Field _thirdPersonFovCounter, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__thirdPersonFovCounter, put=__cordl_internal_set__thirdPersonFovCounter)) ::UnityW<::Liv::Lck::GorillaTag::GtCounter>  _thirdPersonFovCounter;

/// @brief Field _thirdPersonHeightAngle, offset 0x1f8, size 0x4 
 __declspec(property(get=__cordl_internal_get__thirdPersonHeightAngle, put=__cordl_internal_set__thirdPersonHeightAngle)) float_t  _thirdPersonHeightAngle;

/// @brief Field _thirdPersonPositionToggle, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__thirdPersonPositionToggle, put=__cordl_internal_set__thirdPersonPositionToggle)) ::UnityW<::Liv::Lck::GorillaTag::GtToggle>  _thirdPersonPositionToggle;

/// @brief Field _thirdPersonSmoothnessCounter, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__thirdPersonSmoothnessCounter, put=__cordl_internal_set__thirdPersonSmoothnessCounter)) ::UnityW<::Liv::Lck::GorillaTag::GtCounter>  _thirdPersonSmoothnessCounter;

/// @brief Field _topButtonsController, offset 0x1a8, size 0x8 
 __declspec(property(get=__cordl_internal_get__topButtonsController, put=__cordl_internal_set__topButtonsController)) ::UnityW<::Liv::Lck::Tablet::LckTopButtonsController>  _topButtonsController;

/// @brief Field _virtualCameraOnlyUI, offset 0x140, size 0x8 
 __declspec(property(get=__cordl_internal_get__virtualCameraOnlyUI, put=__cordl_internal_set__virtualCameraOnlyUI)) ::ArrayW<::UnityW<::UnityEngine::GameObject>>  _virtualCameraOnlyUI;

/// @brief Method ApplyCameraSettings, addr 0x9d2833c, size 0xe8, virtual false, abstract: false, final false
inline void ApplyCameraSettings(::Liv::Lck::GorillaTag::GtCameraDockSettings  settings) ;

/// @brief Method CalculateCorrectFOV, addr 0x9d26bc4, size 0x104, virtual false, abstract: false, final false
inline float_t CalculateCorrectFOV(float_t  incomingVerticalFOV) ;

/// @brief Method ChangeCameraMode, addr 0x9d25194, size 0x268, virtual false, abstract: false, final false
inline void ChangeCameraMode(::Liv::Lck::GorillaTag::CameraMode  newMode) ;

/// @brief Method CheckMicPermission, addr 0x9d25048, size 0x6c, virtual false, abstract: false, final false
inline void CheckMicPermission() ;

/// @brief Method FindPlayerReferences, addr 0x9d267bc, size 0xbc, virtual false, abstract: false, final false
inline void FindPlayerReferences() ;

/// @brief Method GenerateVerticalCameraTrackDescriptor, addr 0x9d28120, size 0x58, virtual false, abstract: false, final false
inline ::Liv::Lck::CameraTrackDescriptor GenerateVerticalCameraTrackDescriptor() ;

/// @brief Method GetActiveCamera, addr 0x9d273a8, size 0xa0, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Camera> GetActiveCamera() ;

/// @brief Method GetCurrentModeFOV, addr 0x9d26b18, size 0xac, virtual false, abstract: false, final false
inline float_t GetCurrentModeFOV() ;

/// @brief Method GetDescriptorForCurrentOrientation, addr 0x9d2543c, size 0x48, virtual false, abstract: false, final false
inline ::Liv::Lck::CameraTrackDescriptor GetDescriptorForCurrentOrientation(::Liv::Lck::CameraTrackDescriptor  descriptor) ;

/// @brief Method IsQuest2, addr 0x9d25484, size 0xc4, virtual false, abstract: false, final false
inline bool IsQuest2() ;

static inline ::Liv::Lck::GorillaTag::GTLckController* New_ctor() ;

/// @brief Method OnCaptureStart, addr 0x9d27a54, size 0xfc, virtual false, abstract: false, final false
inline void OnCaptureStart(::Liv::Lck::LckResult*  result) ;

/// @brief Method OnCaptureStopped, addr 0x9d27cd8, size 0xe4, virtual false, abstract: false, final false
inline void OnCaptureStopped(::Liv::Lck::LckResult*  result) ;

/// @brief Method OnDestroy, addr 0x9d25d88, size 0x440, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x9d25548, size 0x840, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x9d2474c, size 0x8fc, virtual false, abstract: false, final false
inline void OnEnable() ;

/// [AsyncStateMachine(typeof(Liv.Lck.GorillaTag.GTLckController::<OnQualityOptionSelected>d__81))]
/// @brief Method OnQualityOptionSelected, addr 0x9d250b4, size 0xdc, virtual false, abstract: false, final false
inline void OnQualityOptionSelected(::Liv::Lck::QualityOption  qualityOption) ;

/// @brief Method OnValidate, addr 0x9d24674, size 0xd8, virtual false, abstract: false, final false
inline void OnValidate() ;

/// @brief Method ProcessDroneModeStateChangeRequest, addr 0x9d253fc, size 0x40, virtual false, abstract: false, final false
inline void ProcessDroneModeStateChangeRequest(bool  isActive) ;

/// @brief Method ProcessFirstCameraPosition, addr 0x9d269b8, size 0x118, virtual false, abstract: false, final false
inline void ProcessFirstCameraPosition() ;

/// @brief Method ProcessFirstPersonFov, addr 0x9d2769c, size 0x64, virtual false, abstract: false, final false
inline void ProcessFirstPersonFov(int32_t  value) ;

/// @brief Method ProcessFirstPersonSmoothness, addr 0x9d27700, size 0x34, virtual false, abstract: false, final false
inline void ProcessFirstPersonSmoothness(int32_t  value) ;

/// @brief Method ProcessHeadsetCropMode, addr 0x9d27b50, size 0x9c, virtual false, abstract: false, final false
inline void ProcessHeadsetCropMode(bool  isFirstSelected) ;

/// @brief Method ProcessHeadsetEye, addr 0x9d279b8, size 0x9c, virtual false, abstract: false, final false
inline void ProcessHeadsetEye(bool  isFirstSelected) ;

/// @brief Method ProcessSelfieFlip, addr 0x9d27638, size 0x64, virtual false, abstract: false, final false
inline void ProcessSelfieFlip() ;

/// @brief Method ProcessSelfieFov, addr 0x9d275d4, size 0x64, virtual false, abstract: false, final false
inline void ProcessSelfieFov(int32_t  value) ;

/// @brief Method ProcessSelfieSmoothness, addr 0x9d27584, size 0x50, virtual false, abstract: false, final false
inline void ProcessSelfieSmoothness(int32_t  value) ;

/// @brief Method ProcessThirdCameraPosition, addr 0x9d26ad0, size 0x38, virtual false, abstract: false, final false
inline void ProcessThirdCameraPosition() ;

/// @brief Method ProcessThirdPersonDistance, addr 0x9d27798, size 0x24, virtual false, abstract: false, final false
inline void ProcessThirdPersonDistance(int32_t  value) ;

/// @brief Method ProcessThirdPersonFov, addr 0x9d27734, size 0x30, virtual false, abstract: false, final false
inline void ProcessThirdPersonFov(int32_t  value) ;

/// @brief Method ProcessThirdPersonPosition, addr 0x9d277bc, size 0x34, virtual false, abstract: false, final false
inline void ProcessThirdPersonPosition(bool  isFirstSelected) ;

/// @brief Method ProcessThirdPersonSmoothness, addr 0x9d27764, size 0x34, virtual false, abstract: false, final false
inline void ProcessThirdPersonSmoothness(int32_t  value) ;

/// @brief Method RestartEcho, addr 0x9d28280, size 0xa8, virtual false, abstract: false, final false
inline void RestartEcho() ;

/// @brief Method SaveEcho, addr 0x9d27bec, size 0xec, virtual false, abstract: false, final false
inline void SaveEcho() ;

/// @brief Method SetActiveLckCamera, addr 0x9d272b0, size 0xf8, virtual false, abstract: false, final false
inline void SetActiveLckCamera(::StringW  cameraId) ;

/// @brief Method SetCameraMode, addr 0x9d25190, size 0x4, virtual false, abstract: false, final false
inline void SetCameraMode(::Liv::Lck::GorillaTag::CameraMode  mode) ;

/// @brief Method SetFOV, addr 0x9d26cc8, size 0x88, virtual false, abstract: false, final false
inline void SetFOV(::Liv::Lck::GorillaTag::CameraMode  mode, float_t  fov) ;

/// @brief Method SetFollowModeState, addr 0x9d27448, size 0x13c, virtual false, abstract: false, final false
inline void SetFollowModeState(bool  isFollowing) ;

/// @brief Method SetMonitorScale, addr 0x9d26d50, size 0xdc, virtual false, abstract: false, final false
inline void SetMonitorScale(::Liv::Lck::GorillaTag::CameraMode  mode) ;

/// @brief Method SetOrientationQualityAndTopButtonsIsDisabledState, addr 0x9d20b6c, size 0x54, virtual false, abstract: false, final false
inline void SetOrientationQualityAndTopButtonsIsDisabledState(bool  state) ;

/// @brief Method SetOverlayEnabled, addr 0x9d28328, size 0x14, virtual false, abstract: false, final false
inline void SetOverlayEnabled(bool  value) ;

/// @brief Method SetSelfieCameraOrientation, addr 0x9d26890, size 0xb8, virtual false, abstract: false, final false
inline void SetSelfieCameraOrientation(::Liv::Lck::GorillaTag::GtCameraModeTransform  t) ;

/// @brief Method SetUpDroneCamera, addr 0x9d26f44, size 0x36c, virtual false, abstract: false, final false
inline void SetUpDroneCamera() ;

/// @brief Method SetUpFirstPersonCamera, addr 0x9d26efc, size 0x18, virtual false, abstract: false, final false
inline void SetUpFirstPersonCamera() ;

/// @brief Method SetUpHeadsetCamera, addr 0x9d26f2c, size 0x18, virtual false, abstract: false, final false
inline void SetUpHeadsetCamera() ;

/// @brief Method SetUpSelfieCamera, addr 0x9d26878, size 0x18, virtual false, abstract: false, final false
inline void SetUpSelfieCamera() ;

/// @brief Method SetUpThirdPersonCamera, addr 0x9d26f14, size 0x18, virtual false, abstract: false, final false
inline void SetUpThirdPersonCamera() ;

/// @brief Method SetVirtualCameraUIActive, addr 0x9d26e2c, size 0xd0, virtual false, abstract: false, final false
inline void SetVirtualCameraUIActive(bool  active) ;

/// @brief Method SetupCamera, addr 0x9d265c0, size 0x1fc, virtual false, abstract: false, final false
inline void SetupCamera() ;

/// @brief Method Start, addr 0x9d261c8, size 0x3f8, virtual false, abstract: false, final false
inline void Start() ;

/// [AsyncStateMachine(typeof(Liv.Lck.GorillaTag.GTLckController::<StopEchoIfActiveAsync>d__134))]
/// @brief Method StopEchoIfActiveAsync, addr 0x9d28178, size 0x108, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<bool>* StopEchoIfActiveAsync() ;

/// @brief Method StopRecording, addr 0x9d27dbc, size 0x130, virtual false, abstract: false, final false
inline bool StopRecording() ;

/// @brief Method ToggleMicrophoneRecording, addr 0x9d27eec, size 0x18c, virtual false, abstract: false, final false
inline void ToggleMicrophoneRecording(::UnityEngine::Events::UnityAction_1<bool>*  isOn) ;

/// [AsyncStateMachine(typeof(Liv.Lck.GorillaTag.GTLckController::<ToggleOrientation>d__131))]
/// @brief Method ToggleOrientation, addr 0x9d28078, size 0xa8, virtual false, abstract: false, final false
inline void ToggleOrientation() ;

/// @brief Method ToggleRecording, addr 0x9d277f0, size 0x1c8, virtual false, abstract: false, final false
inline void ToggleRecording() ;

/// @brief Method Update, addr 0x9d26948, size 0x70, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method UpdateThirdPersonHeightAngle, addr 0x9d26b08, size 0x8, virtual false, abstract: false, final false
inline void UpdateThirdPersonHeightAngle(float_t  value) ;

/// @brief Method UpdateThirdPersonSideAngle, addr 0x9d26b10, size 0x8, virtual false, abstract: false, final false
inline void UpdateThirdPersonSideAngle(float_t  value) ;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GtColliderTriggerProcessorsGroup> const& __cordl_internal_get_GtColliderTriggerProcessorsGroup() const;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GtColliderTriggerProcessorsGroup>& __cordl_internal_get_GtColliderTriggerProcessorsGroup() ;

constexpr ::Liv::Lck::GorillaTag::GTLckController_CameraModeDelegate* const& __cordl_internal_get_OnCameraModeChanged() const;

constexpr ::Liv::Lck::GorillaTag::GTLckController_CameraModeDelegate*& __cordl_internal_get_OnCameraModeChanged() ;

constexpr ::System::Action_1<::Liv::Lck::GorillaTag::CameraMode>* const& __cordl_internal_get_OnFOVUpdated() const;

constexpr ::System::Action_1<::Liv::Lck::GorillaTag::CameraMode>*& __cordl_internal_get_OnFOVUpdated() ;

constexpr ::UnityEngine::Events::UnityAction_1<bool>* const& __cordl_internal_get_OnHorizontalModeChanged() const;

constexpr ::UnityEngine::Events::UnityAction_1<bool>*& __cordl_internal_get_OnHorizontalModeChanged() ;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GtSelectorsGroup> const& __cordl_internal_get__GTSelectorsGroup_k__BackingField() const;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GtSelectorsGroup>& __cordl_internal_get__GTSelectorsGroup_k__BackingField() ;

constexpr bool const& __cordl_internal_get__IsThirdPersonFront_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsThirdPersonFront_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__ThirdPersonHeightAngle_k__BackingField() const;

constexpr float_t& __cordl_internal_get__ThirdPersonHeightAngle_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__ThirdPersonSideAngle_k__BackingField() const;

constexpr float_t& __cordl_internal_get__ThirdPersonSideAngle_k__BackingField() ;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GtButton> const& __cordl_internal_get__changeOrientation() const;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GtButton>& __cordl_internal_get__changeOrientation() ;

constexpr ::UnityW<::Liv::Lck::GorillaTag::CoconutCamera> const& __cordl_internal_get__coconutCamera() const;

constexpr ::UnityW<::Liv::Lck::GorillaTag::CoconutCamera>& __cordl_internal_get__coconutCamera() ;

constexpr ::Liv::Lck::GorillaTag::CameraMode const& __cordl_internal_get__currentCameraMode() const;

constexpr ::Liv::Lck::GorillaTag::CameraMode& __cordl_internal_get__currentCameraMode() ;

constexpr ::Liv::Lck::LckCameraOrientation const& __cordl_internal_get__currentCameraOrientation() const;

constexpr ::Liv::Lck::LckCameraOrientation& __cordl_internal_get__currentCameraOrientation() ;

constexpr ::Liv::Lck::CameraTrackDescriptor const& __cordl_internal_get__currentTrackDescriptor() const;

constexpr ::Liv::Lck::CameraTrackDescriptor& __cordl_internal_get__currentTrackDescriptor() ;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GtDroneModeTabletUIAppearance> const& __cordl_internal_get__droneModeTabletUIAppearance() const;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GtDroneModeTabletUIAppearance>& __cordl_internal_get__droneModeTabletUIAppearance() ;

constexpr ::UnityW<::Liv::Lck::GorillaTag::DroneSystem> const& __cordl_internal_get__droneSystem() const;

constexpr ::UnityW<::Liv::Lck::GorillaTag::DroneSystem>& __cordl_internal_get__droneSystem() ;

constexpr ::UnityW<::Liv::Lck::LckCamera> const& __cordl_internal_get__firstPersonCamera() const;

constexpr ::UnityW<::Liv::Lck::LckCamera>& __cordl_internal_get__firstPersonCamera() ;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GtCounter> const& __cordl_internal_get__firstPersonFovCounter() const;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GtCounter>& __cordl_internal_get__firstPersonFovCounter() ;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GtCounter> const& __cordl_internal_get__firstPersonSmoothnessCounter() const;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GtCounter>& __cordl_internal_get__firstPersonSmoothnessCounter() ;

constexpr ::UnityW<::Liv::Lck::Smoothing::LckStabilizer> const& __cordl_internal_get__firstPersonStabilizer() const;

constexpr ::UnityW<::Liv::Lck::Smoothing::LckStabilizer>& __cordl_internal_get__firstPersonStabilizer() ;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GtSettingsSectionGroup> const& __cordl_internal_get__gtSettingsSectionGroup() const;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GtSettingsSectionGroup>& __cordl_internal_get__gtSettingsSectionGroup() ;

constexpr ::UnityW<::Liv::Lck::LckHeadsetCamera> const& __cordl_internal_get__headsetCamera() const;

constexpr ::UnityW<::Liv::Lck::LckHeadsetCamera>& __cordl_internal_get__headsetCamera() ;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GtToggle> const& __cordl_internal_get__headsetCropModeToggle() const;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GtToggle>& __cordl_internal_get__headsetCropModeToggle() ;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GtToggle> const& __cordl_internal_get__headsetEyeToggle() const;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GtToggle>& __cordl_internal_get__headsetEyeToggle() ;

constexpr bool const& __cordl_internal_get__isHorizontalMode() const;

constexpr bool& __cordl_internal_get__isHorizontalMode() ;

constexpr bool const& __cordl_internal_get__isOverlayActive() const;

constexpr bool& __cordl_internal_get__isOverlayActive() ;

constexpr bool const& __cordl_internal_get__isSelfieFront() const;

constexpr bool& __cordl_internal_get__isSelfieFront() ;

constexpr bool const& __cordl_internal_get__isTabletFollowingPlayer() const;

constexpr bool& __cordl_internal_get__isTabletFollowingPlayer() ;

constexpr bool const& __cordl_internal_get__justTransitioned() const;

constexpr bool& __cordl_internal_get__justTransitioned() ;

constexpr ::Liv::Lck::ILckService* const& __cordl_internal_get__lckService() const;

constexpr ::Liv::Lck::ILckService*& __cordl_internal_get__lckService() ;

constexpr bool const& __cordl_internal_get__micState() const;

constexpr bool& __cordl_internal_get__micState() ;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GtAudioButton> const& __cordl_internal_get__microphoneButton() const;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GtAudioButton>& __cordl_internal_get__microphoneButton() ;

constexpr ::UnityW<::UnityEngine::RectTransform> const& __cordl_internal_get__monitorTransform() const;

constexpr ::UnityW<::UnityEngine::RectTransform>& __cordl_internal_get__monitorTransform() ;

constexpr ::UnityW<::Liv::Lck::Tablet::LckNotificationController> const& __cordl_internal_get__notificationController() const;

constexpr ::UnityW<::Liv::Lck::Tablet::LckNotificationController>& __cordl_internal_get__notificationController() ;

constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get__playerCamera() const;

constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get__playerCamera() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get__playerHead() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get__playerHead() ;

constexpr ::UnityW<::UnityEngine::ScriptableObject> const& __cordl_internal_get__qualityConfig() const;

constexpr ::UnityW<::UnityEngine::ScriptableObject>& __cordl_internal_get__qualityConfig() ;

constexpr ::UnityW<::Liv::Lck::UI::LckQualitySelector> const& __cordl_internal_get__qualitySelector() const;

constexpr ::UnityW<::Liv::Lck::UI::LckQualitySelector>& __cordl_internal_get__qualitySelector() ;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GtRecordButton> const& __cordl_internal_get__recordButton() const;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GtRecordButton>& __cordl_internal_get__recordButton() ;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GtSaveEchoButton> const& __cordl_internal_get__saveEchoButton() const;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GtSaveEchoButton>& __cordl_internal_get__saveEchoButton() ;

constexpr ::Liv::Lck::GorillaTag::GtCameraModeTransform const& __cordl_internal_get__selfieBackTransform() const;

constexpr ::Liv::Lck::GorillaTag::GtCameraModeTransform& __cordl_internal_get__selfieBackTransform() ;

constexpr ::UnityW<::Liv::Lck::LckCamera> const& __cordl_internal_get__selfieCamera() const;

constexpr ::UnityW<::Liv::Lck::LckCamera>& __cordl_internal_get__selfieCamera() ;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GtScreenButton> const& __cordl_internal_get__selfieFlipButton() const;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GtScreenButton>& __cordl_internal_get__selfieFlipButton() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get__selfieFollowModeOffset() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get__selfieFollowModeOffset() ;

constexpr ::Liv::Lck::GorillaTag::GtCameraModeTransform const& __cordl_internal_get__selfieFollowModeTransform() const;

constexpr ::Liv::Lck::GorillaTag::GtCameraModeTransform& __cordl_internal_get__selfieFollowModeTransform() ;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GtCounter> const& __cordl_internal_get__selfieFovCounter() const;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GtCounter>& __cordl_internal_get__selfieFovCounter() ;

constexpr ::Liv::Lck::GorillaTag::GtCameraModeTransform const& __cordl_internal_get__selfieFrontTransform() const;

constexpr ::Liv::Lck::GorillaTag::GtCameraModeTransform& __cordl_internal_get__selfieFrontTransform() ;

constexpr float_t const& __cordl_internal_get__selfieSmoothness() const;

constexpr float_t& __cordl_internal_get__selfieSmoothness() ;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GtCounter> const& __cordl_internal_get__selfieSmoothnessCounter() const;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GtCounter>& __cordl_internal_get__selfieSmoothnessCounter() ;

constexpr ::UnityW<::Liv::Lck::Smoothing::LckStabilizer> const& __cordl_internal_get__selfieStabilizer() const;

constexpr ::UnityW<::Liv::Lck::Smoothing::LckStabilizer>& __cordl_internal_get__selfieStabilizer() ;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GtUiSettings> const& __cordl_internal_get__settings() const;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GtUiSettings>& __cordl_internal_get__settings() ;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GtToggle> const& __cordl_internal_get__tabletFollowsPlayerToggle() const;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GtToggle>& __cordl_internal_get__tabletFollowsPlayerToggle() ;

constexpr ::UnityW<::Liv::Lck::LckCamera> const& __cordl_internal_get__thirdPersonCamera() const;

constexpr ::UnityW<::Liv::Lck::LckCamera>& __cordl_internal_get__thirdPersonCamera() ;

constexpr ::UnityW<::GlobalNamespace::GtThirdPersonCameraBehaviour> const& __cordl_internal_get__thirdPersonCameraBehaviour() const;

constexpr ::UnityW<::GlobalNamespace::GtThirdPersonCameraBehaviour>& __cordl_internal_get__thirdPersonCameraBehaviour() ;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GtCounter> const& __cordl_internal_get__thirdPersonDistanceCounter() const;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GtCounter>& __cordl_internal_get__thirdPersonDistanceCounter() ;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GtCounter> const& __cordl_internal_get__thirdPersonFovCounter() const;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GtCounter>& __cordl_internal_get__thirdPersonFovCounter() ;

constexpr float_t const& __cordl_internal_get__thirdPersonHeightAngle() const;

constexpr float_t& __cordl_internal_get__thirdPersonHeightAngle() ;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GtToggle> const& __cordl_internal_get__thirdPersonPositionToggle() const;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GtToggle>& __cordl_internal_get__thirdPersonPositionToggle() ;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GtCounter> const& __cordl_internal_get__thirdPersonSmoothnessCounter() const;

constexpr ::UnityW<::Liv::Lck::GorillaTag::GtCounter>& __cordl_internal_get__thirdPersonSmoothnessCounter() ;

constexpr ::UnityW<::Liv::Lck::Tablet::LckTopButtonsController> const& __cordl_internal_get__topButtonsController() const;

constexpr ::UnityW<::Liv::Lck::Tablet::LckTopButtonsController>& __cordl_internal_get__topButtonsController() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>> const& __cordl_internal_get__virtualCameraOnlyUI() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::GameObject>>& __cordl_internal_get__virtualCameraOnlyUI() ;

constexpr void __cordl_internal_set_GtColliderTriggerProcessorsGroup(::UnityW<::Liv::Lck::GorillaTag::GtColliderTriggerProcessorsGroup>  value) ;

constexpr void __cordl_internal_set_OnCameraModeChanged(::Liv::Lck::GorillaTag::GTLckController_CameraModeDelegate*  value) ;

constexpr void __cordl_internal_set_OnFOVUpdated(::System::Action_1<::Liv::Lck::GorillaTag::CameraMode>*  value) ;

constexpr void __cordl_internal_set_OnHorizontalModeChanged(::UnityEngine::Events::UnityAction_1<bool>*  value) ;

constexpr void __cordl_internal_set__GTSelectorsGroup_k__BackingField(::UnityW<::Liv::Lck::GorillaTag::GtSelectorsGroup>  value) ;

constexpr void __cordl_internal_set__IsThirdPersonFront_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__ThirdPersonHeightAngle_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__ThirdPersonSideAngle_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__changeOrientation(::UnityW<::Liv::Lck::GorillaTag::GtButton>  value) ;

constexpr void __cordl_internal_set__coconutCamera(::UnityW<::Liv::Lck::GorillaTag::CoconutCamera>  value) ;

constexpr void __cordl_internal_set__currentCameraMode(::Liv::Lck::GorillaTag::CameraMode  value) ;

constexpr void __cordl_internal_set__currentCameraOrientation(::Liv::Lck::LckCameraOrientation  value) ;

constexpr void __cordl_internal_set__currentTrackDescriptor(::Liv::Lck::CameraTrackDescriptor  value) ;

constexpr void __cordl_internal_set__droneModeTabletUIAppearance(::UnityW<::Liv::Lck::GorillaTag::GtDroneModeTabletUIAppearance>  value) ;

constexpr void __cordl_internal_set__droneSystem(::UnityW<::Liv::Lck::GorillaTag::DroneSystem>  value) ;

constexpr void __cordl_internal_set__firstPersonCamera(::UnityW<::Liv::Lck::LckCamera>  value) ;

constexpr void __cordl_internal_set__firstPersonFovCounter(::UnityW<::Liv::Lck::GorillaTag::GtCounter>  value) ;

constexpr void __cordl_internal_set__firstPersonSmoothnessCounter(::UnityW<::Liv::Lck::GorillaTag::GtCounter>  value) ;

constexpr void __cordl_internal_set__firstPersonStabilizer(::UnityW<::Liv::Lck::Smoothing::LckStabilizer>  value) ;

constexpr void __cordl_internal_set__gtSettingsSectionGroup(::UnityW<::Liv::Lck::GorillaTag::GtSettingsSectionGroup>  value) ;

constexpr void __cordl_internal_set__headsetCamera(::UnityW<::Liv::Lck::LckHeadsetCamera>  value) ;

constexpr void __cordl_internal_set__headsetCropModeToggle(::UnityW<::Liv::Lck::GorillaTag::GtToggle>  value) ;

constexpr void __cordl_internal_set__headsetEyeToggle(::UnityW<::Liv::Lck::GorillaTag::GtToggle>  value) ;

constexpr void __cordl_internal_set__isHorizontalMode(bool  value) ;

constexpr void __cordl_internal_set__isOverlayActive(bool  value) ;

constexpr void __cordl_internal_set__isSelfieFront(bool  value) ;

constexpr void __cordl_internal_set__isTabletFollowingPlayer(bool  value) ;

constexpr void __cordl_internal_set__justTransitioned(bool  value) ;

constexpr void __cordl_internal_set__lckService(::Liv::Lck::ILckService*  value) ;

constexpr void __cordl_internal_set__micState(bool  value) ;

constexpr void __cordl_internal_set__microphoneButton(::UnityW<::Liv::Lck::GorillaTag::GtAudioButton>  value) ;

constexpr void __cordl_internal_set__monitorTransform(::UnityW<::UnityEngine::RectTransform>  value) ;

constexpr void __cordl_internal_set__notificationController(::UnityW<::Liv::Lck::Tablet::LckNotificationController>  value) ;

constexpr void __cordl_internal_set__playerCamera(::UnityW<::UnityEngine::Camera>  value) ;

constexpr void __cordl_internal_set__playerHead(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set__qualityConfig(::UnityW<::UnityEngine::ScriptableObject>  value) ;

constexpr void __cordl_internal_set__qualitySelector(::UnityW<::Liv::Lck::UI::LckQualitySelector>  value) ;

constexpr void __cordl_internal_set__recordButton(::UnityW<::Liv::Lck::GorillaTag::GtRecordButton>  value) ;

constexpr void __cordl_internal_set__saveEchoButton(::UnityW<::Liv::Lck::GorillaTag::GtSaveEchoButton>  value) ;

constexpr void __cordl_internal_set__selfieBackTransform(::Liv::Lck::GorillaTag::GtCameraModeTransform  value) ;

constexpr void __cordl_internal_set__selfieCamera(::UnityW<::Liv::Lck::LckCamera>  value) ;

constexpr void __cordl_internal_set__selfieFlipButton(::UnityW<::Liv::Lck::GorillaTag::GtScreenButton>  value) ;

constexpr void __cordl_internal_set__selfieFollowModeOffset(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set__selfieFollowModeTransform(::Liv::Lck::GorillaTag::GtCameraModeTransform  value) ;

constexpr void __cordl_internal_set__selfieFovCounter(::UnityW<::Liv::Lck::GorillaTag::GtCounter>  value) ;

constexpr void __cordl_internal_set__selfieFrontTransform(::Liv::Lck::GorillaTag::GtCameraModeTransform  value) ;

constexpr void __cordl_internal_set__selfieSmoothness(float_t  value) ;

constexpr void __cordl_internal_set__selfieSmoothnessCounter(::UnityW<::Liv::Lck::GorillaTag::GtCounter>  value) ;

constexpr void __cordl_internal_set__selfieStabilizer(::UnityW<::Liv::Lck::Smoothing::LckStabilizer>  value) ;

constexpr void __cordl_internal_set__settings(::UnityW<::Liv::Lck::GorillaTag::GtUiSettings>  value) ;

constexpr void __cordl_internal_set__tabletFollowsPlayerToggle(::UnityW<::Liv::Lck::GorillaTag::GtToggle>  value) ;

constexpr void __cordl_internal_set__thirdPersonCamera(::UnityW<::Liv::Lck::LckCamera>  value) ;

constexpr void __cordl_internal_set__thirdPersonCameraBehaviour(::UnityW<::GlobalNamespace::GtThirdPersonCameraBehaviour>  value) ;

constexpr void __cordl_internal_set__thirdPersonDistanceCounter(::UnityW<::Liv::Lck::GorillaTag::GtCounter>  value) ;

constexpr void __cordl_internal_set__thirdPersonFovCounter(::UnityW<::Liv::Lck::GorillaTag::GtCounter>  value) ;

constexpr void __cordl_internal_set__thirdPersonHeightAngle(float_t  value) ;

constexpr void __cordl_internal_set__thirdPersonPositionToggle(::UnityW<::Liv::Lck::GorillaTag::GtToggle>  value) ;

constexpr void __cordl_internal_set__thirdPersonSmoothnessCounter(::UnityW<::Liv::Lck::GorillaTag::GtCounter>  value) ;

constexpr void __cordl_internal_set__topButtonsController(::UnityW<::Liv::Lck::Tablet::LckTopButtonsController>  value) ;

constexpr void __cordl_internal_set__virtualCameraOnlyUI(::ArrayW<::UnityW<::UnityEngine::GameObject>>  value) ;

/// @brief Method .ctor, addr 0x9d28424, size 0x15c, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_OnCameraModeChanged, addr 0x9d24384, size 0x9c, virtual false, abstract: false, final false
inline void add_OnCameraModeChanged(::Liv::Lck::GorillaTag::GTLckController_CameraModeDelegate*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnHorizontalModeChanged, addr 0x9d244bc, size 0xb0, virtual false, abstract: false, final false
inline void add_OnHorizontalModeChanged(::UnityEngine::Events::UnityAction_1<bool>*  value) ;

/// @brief Method get_CurrentCameraMode, addr 0x9d24664, size 0x8, virtual false, abstract: false, final false
inline ::Liv::Lck::GorillaTag::CameraMode get_CurrentCameraMode() ;

/// [CompilerGenerated]
/// @brief Method get_GTSelectorsGroup, addr 0x9d2461c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::Liv::Lck::GorillaTag::GtSelectorsGroup> get_GTSelectorsGroup() ;

/// @brief Method get_HorizontalMode, addr 0x9d2465c, size 0x8, virtual false, abstract: false, final false
inline bool get_HorizontalMode() ;

/// @brief Method get_IsTabletFollowingPlayer, addr 0x9d2466c, size 0x8, virtual false, abstract: false, final false
inline bool get_IsTabletFollowingPlayer() ;

/// [CompilerGenerated]
/// @brief Method get_IsThirdPersonFront, addr 0x9d2464c, size 0x8, virtual false, abstract: false, final false
inline bool get_IsThirdPersonFront() ;

/// [CompilerGenerated]
/// @brief Method get_ThirdPersonHeightAngle, addr 0x9d2462c, size 0x8, virtual false, abstract: false, final false
inline float_t get_ThirdPersonHeightAngle() ;

/// [CompilerGenerated]
/// @brief Method get_ThirdPersonSideAngle, addr 0x9d2463c, size 0x8, virtual false, abstract: false, final false
inline float_t get_ThirdPersonSideAngle() ;

/// [CompilerGenerated]
/// @brief Method remove_OnCameraModeChanged, addr 0x9d24420, size 0x9c, virtual false, abstract: false, final false
inline void remove_OnCameraModeChanged(::Liv::Lck::GorillaTag::GTLckController_CameraModeDelegate*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnHorizontalModeChanged, addr 0x9d2456c, size 0xb0, virtual false, abstract: false, final false
inline void remove_OnHorizontalModeChanged(::UnityEngine::Events::UnityAction_1<bool>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_GTSelectorsGroup, addr 0x9d24624, size 0x8, virtual false, abstract: false, final false
inline void set_GTSelectorsGroup(::Liv::Lck::GorillaTag::GtSelectorsGroup*  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsThirdPersonFront, addr 0x9d24654, size 0x8, virtual false, abstract: false, final false
inline void set_IsThirdPersonFront(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_ThirdPersonHeightAngle, addr 0x9d24634, size 0x8, virtual false, abstract: false, final false
inline void set_ThirdPersonHeightAngle(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_ThirdPersonSideAngle, addr 0x9d24644, size 0x8, virtual false, abstract: false, final false
inline void set_ThirdPersonSideAngle(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GTLckController() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GTLckController", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GTLckController(GTLckController && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GTLckController", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GTLckController(GTLckController const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29641};

/// [CompilerGenerated]
/// @brief Field OnCameraModeChanged, offset: 0x20, size: 0x8, def value: None
 ::Liv::Lck::GorillaTag::GTLckController_CameraModeDelegate*  ___OnCameraModeChanged;

/// [CompilerGenerated]
/// @brief Field OnHorizontalModeChanged, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Events::UnityAction_1<bool>*  ___OnHorizontalModeChanged;

/// [InjectLck]
/// @brief Field _lckService, offset: 0x30, size: 0x8, def value: None
 ::Liv::Lck::ILckService*  ____lckService;

/// [SerializeField]
/// @brief Field _settings, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::GorillaTag::GtUiSettings>  ____settings;

/// [CompilerGenerated]
/// [SerializeField]
/// [Header("Sections References")]
/// [Space(10)]
/// @brief Field <GTSelectorsGroup>k__BackingField, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::GorillaTag::GtSelectorsGroup>  ____GTSelectorsGroup_k__BackingField;

/// [SerializeField]
/// @brief Field _gtSettingsSectionGroup, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::GorillaTag::GtSettingsSectionGroup>  ____gtSettingsSectionGroup;

/// [SerializeField]
/// @brief Field GtColliderTriggerProcessorsGroup, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::GorillaTag::GtColliderTriggerProcessorsGroup>  ___GtColliderTriggerProcessorsGroup;

/// [Space(10)]
/// [Header("Camera Settings References")]
/// [Header("Selfie")]
/// [SerializeField]
/// @brief Field _selfieFovCounter, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::GorillaTag::GtCounter>  ____selfieFovCounter;

/// [SerializeField]
/// @brief Field _selfieSmoothnessCounter, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::GorillaTag::GtCounter>  ____selfieSmoothnessCounter;

/// [SerializeField]
/// @brief Field _selfieFlipButton, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::GorillaTag::GtScreenButton>  ____selfieFlipButton;

/// [SerializeField]
/// @brief Field _tabletFollowsPlayerToggle, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::GorillaTag::GtToggle>  ____tabletFollowsPlayerToggle;

/// [Header("First Person")]
/// [SerializeField]
/// @brief Field _firstPersonFovCounter, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::GorillaTag::GtCounter>  ____firstPersonFovCounter;

/// [SerializeField]
/// @brief Field _firstPersonSmoothnessCounter, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::GorillaTag::GtCounter>  ____firstPersonSmoothnessCounter;

/// [Header("Third Person")]
/// [SerializeField]
/// @brief Field _thirdPersonFovCounter, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::GorillaTag::GtCounter>  ____thirdPersonFovCounter;

/// [SerializeField]
/// @brief Field _thirdPersonSmoothnessCounter, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::GorillaTag::GtCounter>  ____thirdPersonSmoothnessCounter;

/// [SerializeField]
/// @brief Field _thirdPersonDistanceCounter, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::GorillaTag::GtCounter>  ____thirdPersonDistanceCounter;

/// [SerializeField]
/// @brief Field _thirdPersonPositionToggle, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::GorillaTag::GtToggle>  ____thirdPersonPositionToggle;

/// [Space(10)]
/// [Header("Camera Modes")]
/// [Header("Selfie")]
/// [SerializeField]
/// @brief Field _selfieCamera, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::LckCamera>  ____selfieCamera;

/// [SerializeField]
/// @brief Field _selfieStabilizer, offset: 0xb0, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::Smoothing::LckStabilizer>  ____selfieStabilizer;

/// [SerializeField]
/// @brief Field _selfieFrontTransform, offset: 0xb8, size: 0x18, def value: None
 ::Liv::Lck::GorillaTag::GtCameraModeTransform  ____selfieFrontTransform;

/// [SerializeField]
/// @brief Field _selfieBackTransform, offset: 0xd0, size: 0x18, def value: None
 ::Liv::Lck::GorillaTag::GtCameraModeTransform  ____selfieBackTransform;

/// [SerializeField]
/// @brief Field _selfieFollowModeTransform, offset: 0xe8, size: 0x18, def value: None
 ::Liv::Lck::GorillaTag::GtCameraModeTransform  ____selfieFollowModeTransform;

/// [Header("First Person")]
/// [SerializeField]
/// @brief Field _firstPersonCamera, offset: 0x100, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::LckCamera>  ____firstPersonCamera;

/// [SerializeField]
/// @brief Field _firstPersonStabilizer, offset: 0x108, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::Smoothing::LckStabilizer>  ____firstPersonStabilizer;

/// [Header("Third Person")]
/// [SerializeField]
/// @brief Field _thirdPersonCamera, offset: 0x110, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::LckCamera>  ____thirdPersonCamera;

/// [SerializeField]
/// @brief Field _coconutCamera, offset: 0x118, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::GorillaTag::CoconutCamera>  ____coconutCamera;

/// [SerializeField]
/// @brief Field _thirdPersonCameraBehaviour, offset: 0x120, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::GtThirdPersonCameraBehaviour>  ____thirdPersonCameraBehaviour;

/// [CompilerGenerated]
/// [SerializeField]
/// @brief Field <ThirdPersonHeightAngle>k__BackingField, offset: 0x128, size: 0x4, def value: None
 float_t  ____ThirdPersonHeightAngle_k__BackingField;

/// [CompilerGenerated]
/// [SerializeField]
/// @brief Field <ThirdPersonSideAngle>k__BackingField, offset: 0x12c, size: 0x4, def value: None
 float_t  ____ThirdPersonSideAngle_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <IsThirdPersonFront>k__BackingField, offset: 0x130, size: 0x1, def value: None
 bool  ____IsThirdPersonFront_k__BackingField;

/// [Header("Headset View")]
/// [SerializeField]
/// @brief Field _headsetCamera, offset: 0x138, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::LckHeadsetCamera>  ____headsetCamera;

/// [SerializeField]
/// @brief Field _virtualCameraOnlyUI, offset: 0x140, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::GameObject>>  ____virtualCameraOnlyUI;

/// @brief Field OnFOVUpdated, offset: 0x148, size: 0x8, def value: None
 ::System::Action_1<::Liv::Lck::GorillaTag::CameraMode>*  ___OnFOVUpdated;

/// [Header("Drone")]
/// [SerializeField]
/// @brief Field _droneSystem, offset: 0x150, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::GorillaTag::DroneSystem>  ____droneSystem;

/// [SerializeField]
/// @brief Field _droneModeTabletUIAppearance, offset: 0x158, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::GorillaTag::GtDroneModeTabletUIAppearance>  ____droneModeTabletUIAppearance;

/// [SerializeField]
/// @brief Field _headsetEyeToggle, offset: 0x160, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::GorillaTag::GtToggle>  ____headsetEyeToggle;

/// [SerializeField]
/// @brief Field _headsetCropModeToggle, offset: 0x168, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::GorillaTag::GtToggle>  ____headsetCropModeToggle;

/// [Space(10)]
/// [Header("Recording And Streaming Bar")]
/// [Header("References")]
/// [SerializeField]
/// @brief Field _recordButton, offset: 0x170, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::GorillaTag::GtRecordButton>  ____recordButton;

/// [SerializeField]
/// @brief Field _saveEchoButton, offset: 0x178, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::GorillaTag::GtSaveEchoButton>  ____saveEchoButton;

/// [SerializeReference]
/// @brief Field _qualityConfig, offset: 0x180, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ScriptableObject>  ____qualityConfig;

/// [SerializeField]
/// @brief Field _qualitySelector, offset: 0x188, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::UI::LckQualitySelector>  ____qualitySelector;

/// [SerializeField]
/// @brief Field _changeOrientation, offset: 0x190, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::GorillaTag::GtButton>  ____changeOrientation;

/// [SerializeField]
/// @brief Field _microphoneButton, offset: 0x198, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::GorillaTag::GtAudioButton>  ____microphoneButton;

/// [SerializeField]
/// @brief Field _monitorTransform, offset: 0x1a0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RectTransform>  ____monitorTransform;

/// [SerializeField]
/// @brief Field _topButtonsController, offset: 0x1a8, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::Tablet::LckTopButtonsController>  ____topButtonsController;

/// @brief Field _isHorizontalMode, offset: 0x1b0, size: 0x1, def value: None
 bool  ____isHorizontalMode;

/// [SerializeField]
/// @brief Field _notificationController, offset: 0x1b8, size: 0x8, def value: None
 ::UnityW<::Liv::Lck::Tablet::LckNotificationController>  ____notificationController;

/// @brief Field _currentCameraMode, offset: 0x1c0, size: 0x4, def value: None
 ::Liv::Lck::GorillaTag::CameraMode  ____currentCameraMode;

/// @brief Field _playerCamera, offset: 0x1c8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Camera>  ____playerCamera;

/// @brief Field _playerHead, offset: 0x1d0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ____playerHead;

/// @brief Field _justTransitioned, offset: 0x1d8, size: 0x1, def value: None
 bool  ____justTransitioned;

/// @brief Field _isTabletFollowingPlayer, offset: 0x1d9, size: 0x1, def value: None
 bool  ____isTabletFollowingPlayer;

/// @brief Field _selfieSmoothness, offset: 0x1dc, size: 0x4, def value: None
 float_t  ____selfieSmoothness;

/// @brief Field _isSelfieFront, offset: 0x1e0, size: 0x1, def value: None
 bool  ____isSelfieFront;

/// @brief Field _currentCameraOrientation, offset: 0x1e4, size: 0x4, def value: None
 ::Liv::Lck::LckCameraOrientation  ____currentCameraOrientation;

/// @brief Field _selfieFollowModeOffset, offset: 0x1e8, size: 0xc, def value: None
 ::UnityEngine::Vector3  ____selfieFollowModeOffset;

/// @brief Field _micState, offset: 0x1f4, size: 0x1, def value: None
 bool  ____micState;

/// @brief Field _thirdPersonHeightAngle, offset: 0x1f8, size: 0x4, def value: None
 float_t  ____thirdPersonHeightAngle;

/// @brief Field _currentTrackDescriptor, offset: 0x1fc, size: 0x14, def value: None
 ::Liv::Lck::CameraTrackDescriptor  ____currentTrackDescriptor;

/// @brief Field _isOverlayActive, offset: 0x210, size: 0x1, def value: None
 bool  ____isOverlayActive;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::GorillaTag::GTLckController, ___OnCameraModeChanged) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GTLckController, ___OnHorizontalModeChanged) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GTLckController, ____lckService) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GTLckController, ____settings) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GTLckController, ____GTSelectorsGroup_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GTLckController, ____gtSettingsSectionGroup) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GTLckController, ___GtColliderTriggerProcessorsGroup) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GTLckController, ____selfieFovCounter) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GTLckController, ____selfieSmoothnessCounter) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GTLckController, ____selfieFlipButton) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GTLckController, ____tabletFollowsPlayerToggle) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GTLckController, ____firstPersonFovCounter) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GTLckController, ____firstPersonSmoothnessCounter) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GTLckController, ____thirdPersonFovCounter) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GTLckController, ____thirdPersonSmoothnessCounter) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GTLckController, ____thirdPersonDistanceCounter) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GTLckController, ____thirdPersonPositionToggle) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GTLckController, ____selfieCamera) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GTLckController, ____selfieStabilizer) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GTLckController, ____selfieFrontTransform) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GTLckController, ____selfieBackTransform) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GTLckController, ____selfieFollowModeTransform) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GTLckController, ____firstPersonCamera) == 0x100, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GTLckController, ____firstPersonStabilizer) == 0x108, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GTLckController, ____thirdPersonCamera) == 0x110, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GTLckController, ____coconutCamera) == 0x118, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GTLckController, ____thirdPersonCameraBehaviour) == 0x120, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GTLckController, ____ThirdPersonHeightAngle_k__BackingField) == 0x128, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GTLckController, ____ThirdPersonSideAngle_k__BackingField) == 0x12c, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GTLckController, ____IsThirdPersonFront_k__BackingField) == 0x130, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GTLckController, ____headsetCamera) == 0x138, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GTLckController, ____virtualCameraOnlyUI) == 0x140, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GTLckController, ___OnFOVUpdated) == 0x148, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GTLckController, ____droneSystem) == 0x150, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GTLckController, ____droneModeTabletUIAppearance) == 0x158, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GTLckController, ____headsetEyeToggle) == 0x160, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GTLckController, ____headsetCropModeToggle) == 0x168, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GTLckController, ____recordButton) == 0x170, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GTLckController, ____saveEchoButton) == 0x178, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GTLckController, ____qualityConfig) == 0x180, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GTLckController, ____qualitySelector) == 0x188, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GTLckController, ____changeOrientation) == 0x190, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GTLckController, ____microphoneButton) == 0x198, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GTLckController, ____monitorTransform) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GTLckController, ____topButtonsController) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GTLckController, ____isHorizontalMode) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GTLckController, ____notificationController) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GTLckController, ____currentCameraMode) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GTLckController, ____playerCamera) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GTLckController, ____playerHead) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GTLckController, ____justTransitioned) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GTLckController, ____isTabletFollowingPlayer) == 0x1d9, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GTLckController, ____selfieSmoothness) == 0x1dc, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GTLckController, ____isSelfieFront) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GTLckController, ____currentCameraOrientation) == 0x1e4, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GTLckController, ____selfieFollowModeOffset) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GTLckController, ____micState) == 0x1f4, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GTLckController, ____thirdPersonHeightAngle) == 0x1f8, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GTLckController, ____currentTrackDescriptor) == 0x1fc, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::GorillaTag::GTLckController, ____isOverlayActive) == 0x210, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::GorillaTag::GTLckController) == 0x218, "Size mismatch!");

} // namespace end def Liv::Lck::GorillaTag
// [CompilerGenerated]
// Dependencies System.Object
namespace Liv::Lck::GorillaTag {
// Is value type: false
// CS Name: Liv.Lck.GorillaTag.GTLckController/<>c
class CORDL_TYPE GTLckController___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Liv::Lck::GorillaTag::GTLckController___c*  __9;

/// @brief Field <>9__140_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__140_0, put=setStaticF___9__140_0)) ::UnityEngine::Events::UnityAction_1<bool>*  __9__140_0;

static inline ::Liv::Lck::GorillaTag::GTLckController___c* New_ctor() ;

/// @brief Method <.ctor>b__140_0, addr 0x9d28744, size 0x4, virtual false, abstract: false, final false
inline void __ctor_b__140_0(bool  _p0_) ;

/// @brief Method .ctor, addr 0x9d2873c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Liv::Lck::GorillaTag::GTLckController___c* getStaticF___9() ;

static inline ::UnityEngine::Events::UnityAction_1<bool>* getStaticF___9__140_0() ;

static inline void setStaticF___9(::Liv::Lck::GorillaTag::GTLckController___c*  value) ;

static inline void setStaticF___9__140_0(::UnityEngine::Events::UnityAction_1<bool>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GTLckController___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GTLckController___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GTLckController___c(GTLckController___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GTLckController___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GTLckController___c(GTLckController___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29637};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Liv::Lck::GorillaTag::GTLckController___c) == 0x10, "Size mismatch!");

} // namespace end def Liv::Lck::GorillaTag
// Dependencies System.MulticastDelegate
namespace Liv::Lck::GorillaTag {
// Is value type: false
// CS Name: Liv.Lck.GorillaTag.GTLckController/CameraModeDelegate
class CORDL_TYPE GTLckController_CameraModeDelegate : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief Method BeginInvoke, addr 0x9d28634, size 0x94, virtual true, abstract: false, final false
inline ::System::IAsyncResult* BeginInvoke(::Liv::Lck::GorillaTag::CameraMode  mode, ::Liv::Lck::ILckCamera*  camera, ::System::AsyncCallback*  callback, ::System::Object*  object) ;

/// @brief Method EndInvoke, addr 0x9d286c8, size 0xc, virtual true, abstract: false, final false
inline void EndInvoke(::System::IAsyncResult*  result) ;

/// @brief Method Invoke, addr 0x9d28620, size 0x14, virtual true, abstract: false, final false
inline void Invoke(::Liv::Lck::GorillaTag::CameraMode  mode, ::Liv::Lck::ILckCamera*  camera) ;

static inline ::Liv::Lck::GorillaTag::GTLckController_CameraModeDelegate* New_ctor(::System::Object*  object, ::System::IntPtr  method) ;

/// @brief Method .ctor, addr 0x9d28580, size 0xa0, virtual false, abstract: false, final false
inline void _ctor(::System::Object*  object, ::System::IntPtr  method) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr GTLckController_CameraModeDelegate() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "GTLckController_CameraModeDelegate", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
GTLckController_CameraModeDelegate(GTLckController_CameraModeDelegate && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "GTLckController_CameraModeDelegate", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
GTLckController_CameraModeDelegate(GTLckController_CameraModeDelegate const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{29636};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Liv::Lck::GorillaTag::GTLckController_CameraModeDelegate) == 0x80, "Size mismatch!");

} // namespace end def Liv::Lck::GorillaTag
