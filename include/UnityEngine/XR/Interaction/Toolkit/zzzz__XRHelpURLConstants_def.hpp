#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/XRHelpURLConstants.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(XRHelpURLConstants)
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
class XRHelpURLConstants;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::XRHelpURLConstants*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::XRHelpURLConstants*, "UnityEngine.XR.Interaction.Toolkit", "XRHelpURLConstants");
// Dependencies System.Object
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.XRHelpURLConstants
class CORDL_TYPE XRHelpURLConstants : public ::System::Object {
public:
// Declarations
/// @brief Method get_currentDocsVersion, addr 0xb41d734, size 0x40, virtual false, abstract: false, final false
static inline ::StringW get_currentDocsVersion() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRHelpURLConstants() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRHelpURLConstants", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRHelpURLConstants(XRHelpURLConstants && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRHelpURLConstants", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRHelpURLConstants(XRHelpURLConstants const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11142};

/// @brief Field k_ARAnnotationInteractable offset 0xffffffff size 0x8
static constexpr ::ConstString  k_ARAnnotationInteractable{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.AR.ARAnnotationInteractable.html"};

/// @brief Field k_ARGestureInteractor offset 0xffffffff size 0x8
static constexpr ::ConstString  k_ARGestureInteractor{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.AR.ARGestureInteractor.html"};

/// @brief Field k_ARNamespace offset 0xffffffff size 0x8
static constexpr ::ConstString  k_ARNamespace{u"AR."};

/// @brief Field k_ARPlacementInteractable offset 0xffffffff size 0x8
static constexpr ::ConstString  k_ARPlacementInteractable{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.AR.ARPlacementInteractable.html"};

/// @brief Field k_ARRotationInteractable offset 0xffffffff size 0x8
static constexpr ::ConstString  k_ARRotationInteractable{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.AR.ARRotationInteractable.html"};

/// @brief Field k_ARScaleInteractable offset 0xffffffff size 0x8
static constexpr ::ConstString  k_ARScaleInteractable{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.AR.ARScaleInteractable.html"};

/// @brief Field k_ARSelectionInteractable offset 0xffffffff size 0x8
static constexpr ::ConstString  k_ARSelectionInteractable{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.AR.ARSelectionInteractable.html"};

/// @brief Field k_ARTranslationInteractable offset 0xffffffff size 0x8
static constexpr ::ConstString  k_ARTranslationInteractable{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.AR.ARTranslationInteractable.html"};

/// @brief Field k_ActionBasedContinuousMoveProvider offset 0xffffffff size 0x8
static constexpr ::ConstString  k_ActionBasedContinuousMoveProvider{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.ActionBasedContinuousMoveProvider.html"};

/// @brief Field k_ActionBasedContinuousTurnProvider offset 0xffffffff size 0x8
static constexpr ::ConstString  k_ActionBasedContinuousTurnProvider{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.ActionBasedContinuousTurnProvider.html"};

/// @brief Field k_ActionBasedController offset 0xffffffff size 0x8
static constexpr ::ConstString  k_ActionBasedController{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.ActionBasedController.html"};

/// @brief Field k_ActionBasedSnapTurnProvider offset 0xffffffff size 0x8
static constexpr ::ConstString  k_ActionBasedSnapTurnProvider{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.ActionBasedSnapTurnProvider.html"};

/// @brief Field k_AttachmentNamespace offset 0xffffffff size 0x8
static constexpr ::ConstString  k_AttachmentNamespace{u"Attachment."};

/// @brief Field k_AudioAffordanceReceiver offset 0xffffffff size 0x8
static constexpr ::ConstString  k_AudioAffordanceReceiver{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Audio.AudioAffordanceReceiver.html"};

/// @brief Field k_AudioAffordanceThemeDatum offset 0xffffffff size 0x8
static constexpr ::ConstString  k_AudioAffordanceThemeDatum{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Audio.AudioAffordanceThemeDatum.html"};

/// @brief Field k_BaseApi offset 0xffffffff size 0x8
static constexpr ::ConstString  k_BaseApi{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/"};

/// @brief Field k_BaseNamespace offset 0xffffffff size 0x8
static constexpr ::ConstString  k_BaseNamespace{u"UnityEngine.XR.Interaction.Toolkit."};

/// @brief Field k_BlendShapeAffordanceReceiver offset 0xffffffff size 0x8
static constexpr ::ConstString  k_BlendShapeAffordanceReceiver{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Rendering.BlendShapeAffordanceReceiver.html"};

/// @brief Field k_BodyUINamespace offset 0xffffffff size 0x8
static constexpr ::ConstString  k_BodyUINamespace{u"BodyUI."};

/// @brief Field k_CanvasOptimizer offset 0xffffffff size 0x8
static constexpr ::ConstString  k_CanvasOptimizer{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.UI.CanvasOptimizer.html"};

/// @brief Field k_CanvasTracker offset 0xffffffff size 0x8
static constexpr ::ConstString  k_CanvasTracker{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.UI.CanvasTracker.html"};

/// @brief Field k_CastersNamespace offset 0xffffffff size 0x8
static constexpr ::ConstString  k_CastersNamespace{u"Casters."};

/// @brief Field k_CharacterControllerBodyManipulator offset 0xffffffff size 0x8
static constexpr ::ConstString  k_CharacterControllerBodyManipulator{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Locomotion.CharacterControllerBodyManipulator.html"};

/// @brief Field k_CharacterControllerDriver offset 0xffffffff size 0x8
static constexpr ::ConstString  k_CharacterControllerDriver{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.CharacterControllerDriver.html"};

/// @brief Field k_ClimbInteractable offset 0xffffffff size 0x8
static constexpr ::ConstString  k_ClimbInteractable{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Locomotion.Climbing.ClimbInteractable.html"};

/// @brief Field k_ClimbProvider offset 0xffffffff size 0x8
static constexpr ::ConstString  k_ClimbProvider{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Locomotion.Climbing.ClimbProvider.html"};

/// @brief Field k_ClimbSettingsDatum offset 0xffffffff size 0x8
static constexpr ::ConstString  k_ClimbSettingsDatum{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Locomotion.Climbing.ClimbSettingsDatum.html"};

/// @brief Field k_ClimbTeleportInteractor offset 0xffffffff size 0x8
static constexpr ::ConstString  k_ClimbTeleportInteractor{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Locomotion.Climbing.ClimbTeleportInteractor.html"};

/// @brief Field k_ClimbingNamespace offset 0xffffffff size 0x8
static constexpr ::ConstString  k_ClimbingNamespace{u"Climbing."};

/// @brief Field k_ColorAffordanceReceiver offset 0xffffffff size 0x8
static constexpr ::ConstString  k_ColorAffordanceReceiver{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.ColorAffordanceReceiver.html"};

/// @brief Field k_ColorAffordanceThemeDatum offset 0xffffffff size 0x8
static constexpr ::ConstString  k_ColorAffordanceThemeDatum{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.ColorAffordanceThemeDatum.html"};

/// @brief Field k_ColorGradientLineRendererAffordanceReceiver offset 0xffffffff size 0x8
static constexpr ::ConstString  k_ColorGradientLineRendererAffordanceReceiver{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Rendering.ColorGradientLineRendererAffordanceReceiver.html"};

/// @brief Field k_ColorMaterialPropertyAffordanceReceiver offset 0xffffffff size 0x8
static constexpr ::ConstString  k_ColorMaterialPropertyAffordanceReceiver{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Rendering.ColorMaterialPropertyAffordanceReceiver.html"};

/// @brief Field k_ComfortNamespace offset 0xffffffff size 0x8
static constexpr ::ConstString  k_ComfortNamespace{u"Comfort."};

/// @brief Field k_ContinuousMoveProvider offset 0xffffffff size 0x8
static constexpr ::ConstString  k_ContinuousMoveProvider{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Locomotion.Movement.ContinuousMoveProvider.html"};

/// @brief Field k_ContinuousTurnProvider offset 0xffffffff size 0x8
static constexpr ::ConstString  k_ContinuousTurnProvider{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Locomotion.Turning.ContinuousTurnProvider.html"};

/// @brief Field k_CurrentDocsVersion offset 0xffffffff size 0x8
static constexpr ::ConstString  k_CurrentDocsVersion{u"3.2"};

/// @brief Field k_CurveInteractionCaster offset 0xffffffff size 0x8
static constexpr ::ConstString  k_CurveInteractionCaster{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Interactors.Casters.CurveInteractionCaster.html"};

/// @brief Field k_CurveVisualController offset 0xffffffff size 0x8
static constexpr ::ConstString  k_CurveVisualController{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Interactors.Visuals.CurveVisualController.html"};

/// @brief Field k_DeviceBasedContinuousMoveProvider offset 0xffffffff size 0x8
static constexpr ::ConstString  k_DeviceBasedContinuousMoveProvider{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.DeviceBasedContinuousMoveProvider.html"};

/// @brief Field k_DeviceBasedContinuousTurnProvider offset 0xffffffff size 0x8
static constexpr ::ConstString  k_DeviceBasedContinuousTurnProvider{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.DeviceBasedContinuousTurnProvider.html"};

/// @brief Field k_DeviceBasedSnapTurnProvider offset 0xffffffff size 0x8
static constexpr ::ConstString  k_DeviceBasedSnapTurnProvider{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.DeviceBasedSnapTurnProvider.html"};

/// @brief Field k_DisposableManagerSingleton offset 0xffffffff size 0x8
static constexpr ::ConstString  k_DisposableManagerSingleton{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Utilities.DisposableManagerSingleton.html"};

/// @brief Field k_FeedbackNamespace offset 0xffffffff size 0x8
static constexpr ::ConstString  k_FeedbackNamespace{u"Feedback."};

/// @brief Field k_FilteringNamespace offset 0xffffffff size 0x8
static constexpr ::ConstString  k_FilteringNamespace{u"Filtering."};

/// @brief Field k_FloatAffordanceReceiver offset 0xffffffff size 0x8
static constexpr ::ConstString  k_FloatAffordanceReceiver{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.FloatAffordanceReceiver.html"};

/// @brief Field k_FloatAffordanceThemeDatum offset 0xffffffff size 0x8
static constexpr ::ConstString  k_FloatAffordanceThemeDatum{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.FloatAffordanceThemeDatum.html"};

/// @brief Field k_FloatMaterialPropertyAffordanceReceiver offset 0xffffffff size 0x8
static constexpr ::ConstString  k_FloatMaterialPropertyAffordanceReceiver{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Rendering.FloatMaterialPropertyAffordanceReceiver.html"};

/// @brief Field k_FollowPresetDatum offset 0xffffffff size 0x8
static constexpr ::ConstString  k_FollowPresetDatum{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.UI.BodyUI.FollowPresetDatum.html"};

/// @brief Field k_FurthestTeleportationAnchorFilter offset 0xffffffff size 0x8
static constexpr ::ConstString  k_FurthestTeleportationAnchorFilter{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.FurthestTeleportationAnchorFilter.html"};

/// @brief Field k_GazeNamespace offset 0xffffffff size 0x8
static constexpr ::ConstString  k_GazeNamespace{u"Gaze."};

/// @brief Field k_GazeTeleportationAnchorFilter offset 0xffffffff size 0x8
static constexpr ::ConstString  k_GazeTeleportationAnchorFilter{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.GazeTeleportationAnchorFilter.html"};

/// @brief Field k_GrabMoveProvider offset 0xffffffff size 0x8
static constexpr ::ConstString  k_GrabMoveProvider{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Locomotion.Movement.GrabMoveProvider.html"};

/// @brief Field k_GravityNamespace offset 0xffffffff size 0x8
static constexpr ::ConstString  k_GravityNamespace{u"Gravity."};

/// @brief Field k_GravityProvider offset 0xffffffff size 0x8
static constexpr ::ConstString  k_GravityProvider{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Locomotion.Gravity.GravityProvider.html"};

/// @brief Field k_HandMenu offset 0xffffffff size 0x8
static constexpr ::ConstString  k_HandMenu{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.UI.BodyUI.HandMenu.html"};

/// @brief Field k_HapticImpulsePlayer offset 0xffffffff size 0x8
static constexpr ::ConstString  k_HapticImpulsePlayer{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Inputs.Haptics.HapticImpulsePlayer.html"};

/// @brief Field k_HapticsNamespace offset 0xffffffff size 0x8
static constexpr ::ConstString  k_HapticsNamespace{u"Haptics."};

/// @brief Field k_HtmlFileSuffix offset 0xffffffff size 0x8
static constexpr ::ConstString  k_HtmlFileSuffix{u".html"};

/// @brief Field k_ImageColorAffordanceReceiver offset 0xffffffff size 0x8
static constexpr ::ConstString  k_ImageColorAffordanceReceiver{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.UI.ImageColorAffordanceReceiver.html"};

/// @brief Field k_InputActionManager offset 0xffffffff size 0x8
static constexpr ::ConstString  k_InputActionManager{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Inputs.InputActionManager.html"};

/// @brief Field k_InputsNamespace offset 0xffffffff size 0x8
static constexpr ::ConstString  k_InputsNamespace{u"Inputs."};

/// @brief Field k_InteractablesNamespace offset 0xffffffff size 0x8
static constexpr ::ConstString  k_InteractablesNamespace{u"Interactables."};

/// @brief Field k_InteractionAttachController offset 0xffffffff size 0x8
static constexpr ::ConstString  k_InteractionAttachController{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Attachment.InteractionAttachController.html"};

/// @brief Field k_InteractorsNamespace offset 0xffffffff size 0x8
static constexpr ::ConstString  k_InteractorsNamespace{u"Interactors."};

/// @brief Field k_JumpNamespace offset 0xffffffff size 0x8
static constexpr ::ConstString  k_JumpNamespace{u"Jump."};

/// @brief Field k_JumpProvider offset 0xffffffff size 0x8
static constexpr ::ConstString  k_JumpProvider{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Locomotion.Jump.JumpProvider.html"};

/// @brief Field k_LazyFollow offset 0xffffffff size 0x8
static constexpr ::ConstString  k_LazyFollow{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.UI.LazyFollow.html"};

/// @brief Field k_LocomotionMediator offset 0xffffffff size 0x8
static constexpr ::ConstString  k_LocomotionMediator{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Locomotion.LocomotionMediator.html"};

/// @brief Field k_LocomotionNamespace offset 0xffffffff size 0x8
static constexpr ::ConstString  k_LocomotionNamespace{u"Locomotion."};

/// @brief Field k_LocomotionSystem offset 0xffffffff size 0x8
static constexpr ::ConstString  k_LocomotionSystem{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.LocomotionSystem.html"};

/// @brief Field k_MaterialInstanceHelper offset 0xffffffff size 0x8
static constexpr ::ConstString  k_MaterialInstanceHelper{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Rendering.MaterialInstanceHelper.html"};

/// @brief Field k_MaterialPropertyBlockHelper offset 0xffffffff size 0x8
static constexpr ::ConstString  k_MaterialPropertyBlockHelper{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Rendering.MaterialPropertyBlockHelper.html"};

/// @brief Field k_MovementNamespace offset 0xffffffff size 0x8
static constexpr ::ConstString  k_MovementNamespace{u"Movement."};

/// @brief Field k_NearFarInteractor offset 0xffffffff size 0x8
static constexpr ::ConstString  k_NearFarInteractor{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Interactors.NearFarInteractor.html"};

/// @brief Field k_PokeThresholdDatum offset 0xffffffff size 0x8
static constexpr ::ConstString  k_PokeThresholdDatum{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Filtering.PokeThresholdDatum.html"};

/// @brief Field k_QuaternionAffordanceReceiver offset 0xffffffff size 0x8
static constexpr ::ConstString  k_QuaternionAffordanceReceiver{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.QuaternionAffordanceReceiver.html"};

/// @brief Field k_QuaternionEulerAffordanceReceiver offset 0xffffffff size 0x8
static constexpr ::ConstString  k_QuaternionEulerAffordanceReceiver{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.QuaternionEulerAffordanceReceiver.html"};

/// @brief Field k_ReadersNamespace offset 0xffffffff size 0x8
static constexpr ::ConstString  k_ReadersNamespace{u"Readers."};

/// @brief Field k_ScreenSpacePinchScaleInput offset 0xffffffff size 0x8
static constexpr ::ConstString  k_ScreenSpacePinchScaleInput{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.AR.Inputs.ScreenSpacePinchScaleInput.html"};

/// @brief Field k_ScreenSpaceRayPoseDriver offset 0xffffffff size 0x8
static constexpr ::ConstString  k_ScreenSpaceRayPoseDriver{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.AR.Inputs.ScreenSpaceRayPoseDriver.html"};

/// @brief Field k_ScreenSpaceRotateInput offset 0xffffffff size 0x8
static constexpr ::ConstString  k_ScreenSpaceRotateInput{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.AR.Inputs.ScreenSpaceRotateInput.html"};

/// @brief Field k_ScreenSpaceSelectInput offset 0xffffffff size 0x8
static constexpr ::ConstString  k_ScreenSpaceSelectInput{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.AR.Inputs.ScreenSpaceSelectInput.html"};

/// @brief Field k_SimpleAudioFeedback offset 0xffffffff size 0x8
static constexpr ::ConstString  k_SimpleAudioFeedback{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Feedback.SimpleAudioFeedback.html"};

/// @brief Field k_SimpleHapticFeedback offset 0xffffffff size 0x8
static constexpr ::ConstString  k_SimpleHapticFeedback{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Feedback.SimpleHapticFeedback.html"};

/// @brief Field k_SimulatedDeviceLifecycleManager offset 0xffffffff size 0x8
static constexpr ::ConstString  k_SimulatedDeviceLifecycleManager{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.SimulatedDeviceLifecycleManager.html"};

/// @brief Field k_SimulatedHandExpressionManager offset 0xffffffff size 0x8
static constexpr ::ConstString  k_SimulatedHandExpressionManager{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.SimulatedHandExpressionManager.html"};

/// @brief Field k_SimulationNamespace offset 0xffffffff size 0x8
static constexpr ::ConstString  k_SimulationNamespace{u"Simulation."};

/// @brief Field k_SnapTurnProvider offset 0xffffffff size 0x8
static constexpr ::ConstString  k_SnapTurnProvider{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Locomotion.Turning.SnapTurnProvider.html"};

/// @brief Field k_SphereInteractionCaster offset 0xffffffff size 0x8
static constexpr ::ConstString  k_SphereInteractionCaster{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Interactors.Casters.SphereInteractionCaster.html"};

/// @brief Field k_TeleportVolumeDestinationSettingsDatum offset 0xffffffff size 0x8
static constexpr ::ConstString  k_TeleportVolumeDestinationSettingsDatum{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.TeleportVolumeDestinationSettingsDatum.html"};

/// @brief Field k_TeleportationAnchor offset 0xffffffff size 0x8
static constexpr ::ConstString  k_TeleportationAnchor{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.TeleportationAnchor.html"};

/// @brief Field k_TeleportationArea offset 0xffffffff size 0x8
static constexpr ::ConstString  k_TeleportationArea{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.TeleportationArea.html"};

/// @brief Field k_TeleportationMultiAnchorVolume offset 0xffffffff size 0x8
static constexpr ::ConstString  k_TeleportationMultiAnchorVolume{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.TeleportationMultiAnchorVolume.html"};

/// @brief Field k_TeleportationNamespace offset 0xffffffff size 0x8
static constexpr ::ConstString  k_TeleportationNamespace{u"Teleportation."};

/// @brief Field k_TeleportationProvider offset 0xffffffff size 0x8
static constexpr ::ConstString  k_TeleportationProvider{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Locomotion.Teleportation.TeleportationProvider.html"};

/// @brief Field k_TouchscreenGestureInputLoader offset 0xffffffff size 0x8
static constexpr ::ConstString  k_TouchscreenGestureInputLoader{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.AR.Inputs.TouchscreenGestureInputLoader.html"};

/// @brief Field k_TouchscreenHoverFilter offset 0xffffffff size 0x8
static constexpr ::ConstString  k_TouchscreenHoverFilter{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Filtering.TouchscreenHoverFilter.html"};

/// @brief Field k_TrackedDeviceGraphicRaycaster offset 0xffffffff size 0x8
static constexpr ::ConstString  k_TrackedDeviceGraphicRaycaster{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.UI.TrackedDeviceGraphicRaycaster.html"};

/// @brief Field k_TrackedDevicePhysicsRaycaster offset 0xffffffff size 0x8
static constexpr ::ConstString  k_TrackedDevicePhysicsRaycaster{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.UI.TrackedDevicePhysicsRaycaster.html"};

/// @brief Field k_TransformersNamespace offset 0xffffffff size 0x8
static constexpr ::ConstString  k_TransformersNamespace{u"Transformers."};

/// @brief Field k_TunnelingVignetteController offset 0xffffffff size 0x8
static constexpr ::ConstString  k_TunnelingVignetteController{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Locomotion.Comfort.TunnelingVignetteController.html"};

/// @brief Field k_TurningNamespace offset 0xffffffff size 0x8
static constexpr ::ConstString  k_TurningNamespace{u"Turning."};

/// @brief Field k_TwoHandedGrabMoveProvider offset 0xffffffff size 0x8
static constexpr ::ConstString  k_TwoHandedGrabMoveProvider{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Locomotion.Movement.TwoHandedGrabMoveProvider.html"};

/// @brief Field k_UINamespace offset 0xffffffff size 0x8
static constexpr ::ConstString  k_UINamespace{u"UI."};

/// @brief Field k_UnderCameraBodyPositionEvaluator offset 0xffffffff size 0x8
static constexpr ::ConstString  k_UnderCameraBodyPositionEvaluator{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Locomotion.UnderCameraBodyPositionEvaluator.html"};

/// @brief Field k_UniformTransformScaleAffordanceReceiver offset 0xffffffff size 0x8
static constexpr ::ConstString  k_UniformTransformScaleAffordanceReceiver{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Transformation.UniformTransformScaleAffordanceReceiver.html"};

/// @brief Field k_UtilitiesNamespace offset 0xffffffff size 0x8
static constexpr ::ConstString  k_UtilitiesNamespace{u"Utilities."};

/// @brief Field k_Vector2AffordanceReceiver offset 0xffffffff size 0x8
static constexpr ::ConstString  k_Vector2AffordanceReceiver{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.Vector2AffordanceReceiver.html"};

/// @brief Field k_Vector2AffordanceThemeDatum offset 0xffffffff size 0x8
static constexpr ::ConstString  k_Vector2AffordanceThemeDatum{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.Vector2AffordanceThemeDatum.html"};

/// @brief Field k_Vector2MaterialPropertyAffordanceReceiver offset 0xffffffff size 0x8
static constexpr ::ConstString  k_Vector2MaterialPropertyAffordanceReceiver{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Rendering.Vector2MaterialPropertyAffordanceReceiver.html"};

/// @brief Field k_Vector3AffordanceReceiver offset 0xffffffff size 0x8
static constexpr ::ConstString  k_Vector3AffordanceReceiver{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.Vector3AffordanceReceiver.html"};

/// @brief Field k_Vector3AffordanceThemeDatum offset 0xffffffff size 0x8
static constexpr ::ConstString  k_Vector3AffordanceThemeDatum{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.Vector3AffordanceThemeDatum.html"};

/// @brief Field k_Vector3MaterialPropertyAffordanceReceiver offset 0xffffffff size 0x8
static constexpr ::ConstString  k_Vector3MaterialPropertyAffordanceReceiver{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Rendering.Vector3MaterialPropertyAffordanceReceiver.html"};

/// @brief Field k_Vector4AffordanceReceiver offset 0xffffffff size 0x8
static constexpr ::ConstString  k_Vector4AffordanceReceiver{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Primitives.Vector4AffordanceReceiver.html"};

/// @brief Field k_Vector4AffordanceThemeDatum offset 0xffffffff size 0x8
static constexpr ::ConstString  k_Vector4AffordanceThemeDatum{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Theme.Primitives.Vector4AffordanceThemeDatum.html"};

/// @brief Field k_Vector4MaterialPropertyAffordanceReceiver offset 0xffffffff size 0x8
static constexpr ::ConstString  k_Vector4MaterialPropertyAffordanceReceiver{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.Receiver.Rendering.Vector4MaterialPropertyAffordanceReceiver.html"};

/// @brief Field k_VisualsNamespace offset 0xffffffff size 0x8
static constexpr ::ConstString  k_VisualsNamespace{u"Visuals."};

/// @brief Field k_XRBodyTransformer offset 0xffffffff size 0x8
static constexpr ::ConstString  k_XRBodyTransformer{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Locomotion.XRBodyTransformer.html"};

/// @brief Field k_XRController offset 0xffffffff size 0x8
static constexpr ::ConstString  k_XRController{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.XRController.html"};

/// @brief Field k_XRControllerRecorder offset 0xffffffff size 0x8
static constexpr ::ConstString  k_XRControllerRecorder{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.XRControllerRecorder.html"};

/// @brief Field k_XRControllerRecording offset 0xffffffff size 0x8
static constexpr ::ConstString  k_XRControllerRecording{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.XRControllerRecording.html"};

/// @brief Field k_XRDebugLineVisualizer offset 0xffffffff size 0x8
static constexpr ::ConstString  k_XRDebugLineVisualizer{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Utilities.XRDebugLineVisualizer.html"};

/// @brief Field k_XRDeviceSimulator offset 0xffffffff size 0x8
static constexpr ::ConstString  k_XRDeviceSimulator{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRDeviceSimulator.html"};

/// @brief Field k_XRDirectInteractor offset 0xffffffff size 0x8
static constexpr ::ConstString  k_XRDirectInteractor{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Interactors.XRDirectInteractor.html"};

/// @brief Field k_XRDualGrabFreeTransformer offset 0xffffffff size 0x8
static constexpr ::ConstString  k_XRDualGrabFreeTransformer{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Transformers.XRDualGrabFreeTransformer.html"};

/// @brief Field k_XRGazeAssistance offset 0xffffffff size 0x8
static constexpr ::ConstString  k_XRGazeAssistance{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Gaze.XRGazeAssistance.html"};

/// @brief Field k_XRGazeInteractor offset 0xffffffff size 0x8
static constexpr ::ConstString  k_XRGazeInteractor{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Interactors.XRGazeInteractor.html"};

/// @brief Field k_XRGeneralGrabTransformer offset 0xffffffff size 0x8
static constexpr ::ConstString  k_XRGeneralGrabTransformer{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Transformers.XRGeneralGrabTransformer.html"};

/// @brief Field k_XRGrabInteractable offset 0xffffffff size 0x8
static constexpr ::ConstString  k_XRGrabInteractable{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Interactables.XRGrabInteractable.html"};

/// @brief Field k_XRHandSkeletonPokeDisplacer offset 0xffffffff size 0x8
static constexpr ::ConstString  k_XRHandSkeletonPokeDisplacer{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Inputs.XRHandSkeletonPokeDisplacer.html"};

/// @brief Field k_XRInputDeviceBoolValueReader offset 0xffffffff size 0x8
static constexpr ::ConstString  k_XRInputDeviceBoolValueReader{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Inputs.Readers.XRInputDeviceBoolValueReader.html"};

/// @brief Field k_XRInputDeviceButtonReader offset 0xffffffff size 0x8
static constexpr ::ConstString  k_XRInputDeviceButtonReader{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Inputs.Readers.XRInputDeviceButtonReader.html"};

/// @brief Field k_XRInputDeviceFloatValueReader offset 0xffffffff size 0x8
static constexpr ::ConstString  k_XRInputDeviceFloatValueReader{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Inputs.Readers.XRInputDeviceFloatValueReader.html"};

/// @brief Field k_XRInputDeviceHapticImpulseProvider offset 0xffffffff size 0x8
static constexpr ::ConstString  k_XRInputDeviceHapticImpulseProvider{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Inputs.Haptics.XRInputDeviceHapticImpulseProvider.html"};

/// @brief Field k_XRInputDeviceInputTrackingStateValueReader offset 0xffffffff size 0x8
static constexpr ::ConstString  k_XRInputDeviceInputTrackingStateValueReader{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Inputs.Readers.XRInputDeviceInputTrackingStateValueReader.html"};

/// @brief Field k_XRInputDeviceQuaternionValueReader offset 0xffffffff size 0x8
static constexpr ::ConstString  k_XRInputDeviceQuaternionValueReader{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Inputs.Readers.XRInputDeviceQuaternionValueReader.html"};

/// @brief Field k_XRInputDeviceVector2ValueReader offset 0xffffffff size 0x8
static constexpr ::ConstString  k_XRInputDeviceVector2ValueReader{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Inputs.Readers.XRInputDeviceVector2ValueReader.html"};

/// @brief Field k_XRInputDeviceVector3ValueReader offset 0xffffffff size 0x8
static constexpr ::ConstString  k_XRInputDeviceVector3ValueReader{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Inputs.Readers.XRInputDeviceVector3ValueReader.html"};

/// @brief Field k_XRInputModalityManager offset 0xffffffff size 0x8
static constexpr ::ConstString  k_XRInputModalityManager{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Inputs.XRInputModalityManager.html"};

/// @brief Field k_XRInteractableAffordanceStateProvider offset 0xffffffff size 0x8
static constexpr ::ConstString  k_XRInteractableAffordanceStateProvider{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.XRInteractableAffordanceStateProvider.html"};

/// @brief Field k_XRInteractableSnapVolume offset 0xffffffff size 0x8
static constexpr ::ConstString  k_XRInteractableSnapVolume{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Interactables.XRInteractableSnapVolume.html"};

/// @brief Field k_XRInteractionGroup offset 0xffffffff size 0x8
static constexpr ::ConstString  k_XRInteractionGroup{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Interactors.XRInteractionGroup.html"};

/// @brief Field k_XRInteractionManager offset 0xffffffff size 0x8
static constexpr ::ConstString  k_XRInteractionManager{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.XRInteractionManager.html"};

/// @brief Field k_XRInteractionSimulator offset 0xffffffff size 0x8
static constexpr ::ConstString  k_XRInteractionSimulator{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Inputs.Simulation.XRInteractionSimulator.html"};

/// @brief Field k_XRInteractorAffordanceStateProvider offset 0xffffffff size 0x8
static constexpr ::ConstString  k_XRInteractorAffordanceStateProvider{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.AffordanceSystem.State.XRInteractorAffordanceStateProvider.html"};

/// @brief Field k_XRInteractorLineVisual offset 0xffffffff size 0x8
static constexpr ::ConstString  k_XRInteractorLineVisual{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Interactors.Visuals.XRInteractorLineVisual.html"};

/// @brief Field k_XRInteractorReticleVisual offset 0xffffffff size 0x8
static constexpr ::ConstString  k_XRInteractorReticleVisual{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Interactors.Visuals.XRInteractorReticleVisual.html"};

/// @brief Field k_XRLegacyGrabTransformer offset 0xffffffff size 0x8
static constexpr ::ConstString  k_XRLegacyGrabTransformer{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Transformers.XRLegacyGrabTransformer.html"};

/// @brief Field k_XRPokeFilter offset 0xffffffff size 0x8
static constexpr ::ConstString  k_XRPokeFilter{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Filtering.XRPokeFilter.html"};

/// @brief Field k_XRPokeInteractor offset 0xffffffff size 0x8
static constexpr ::ConstString  k_XRPokeInteractor{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Interactors.XRPokeInteractor.html"};

/// @brief Field k_XRRayInteractor offset 0xffffffff size 0x8
static constexpr ::ConstString  k_XRRayInteractor{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Interactors.XRRayInteractor.html"};

/// @brief Field k_XRRig offset 0xffffffff size 0x8
static constexpr ::ConstString  k_XRRig{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.XRRig.html"};

/// @brief Field k_XRScreenSpaceController offset 0xffffffff size 0x8
static constexpr ::ConstString  k_XRScreenSpaceController{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.XRScreenSpaceController.html"};

/// @brief Field k_XRSimpleInteractable offset 0xffffffff size 0x8
static constexpr ::ConstString  k_XRSimpleInteractable{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Interactables.XRSimpleInteractable.html"};

/// @brief Field k_XRSingleGrabFreeTransformer offset 0xffffffff size 0x8
static constexpr ::ConstString  k_XRSingleGrabFreeTransformer{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Transformers.XRSingleGrabFreeTransformer.html"};

/// @brief Field k_XRSingleGrabOffsetPreserveTransformer offset 0xffffffff size 0x8
static constexpr ::ConstString  k_XRSingleGrabOffsetPreserveTransformer{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Transformers.k_XRSingleGrabOffsetPreserveTransformer.html"};

/// @brief Field k_XRSocketGrabTransformer offset 0xffffffff size 0x8
static constexpr ::ConstString  k_XRSocketGrabTransformer{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Transformers.XRSocketGrabTransformer.html"};

/// @brief Field k_XRSocketInteractor offset 0xffffffff size 0x8
static constexpr ::ConstString  k_XRSocketInteractor{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Interactors.XRSocketInteractor.html"};

/// @brief Field k_XRTargetFilter offset 0xffffffff size 0x8
static constexpr ::ConstString  k_XRTargetFilter{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Filtering.XRTargetFilter.html"};

/// @brief Field k_XRTintInteractableVisual offset 0xffffffff size 0x8
static constexpr ::ConstString  k_XRTintInteractableVisual{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Interactables.Visuals.XRTintInteractableVisual.html"};

/// @brief Field k_XRTransformStabilizer offset 0xffffffff size 0x8
static constexpr ::ConstString  k_XRTransformStabilizer{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Inputs.XRTransformStabilizer.html"};

/// @brief Field k_XRUIInputModule offset 0xffffffff size 0x8
static constexpr ::ConstString  k_XRUIInputModule{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.UI.XRUIInputModule.html"};

/// @brief Field k_XRUIToolkitManager offset 0xffffffff size 0x8
static constexpr ::ConstString  k_XRUIToolkitManager{u"https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.UI.XRUIToolkitManager.html"};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::XRHelpURLConstants) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit
