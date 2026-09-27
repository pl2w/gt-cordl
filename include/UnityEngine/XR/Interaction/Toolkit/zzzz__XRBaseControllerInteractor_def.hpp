#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/XRBaseControllerInteractor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__TargetPriorityMode_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__XRBaseInteractor_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__XRBaseControllerInteractor_InputTriggerType_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(XRBaseControllerInteractor)
namespace GlobalNamespace {
struct XRBaseControllerInteractor_InputTriggerType;
}
namespace GlobalNamespace {
struct XRInteractionUpdateOrder_UpdatePhase;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
class IXRActivateInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
class IXRHoverInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
class XRBaseInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class IXRActivateInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class IXRInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
struct TargetPriorityMode;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling {
template<typename T>
class LinkedPool_1;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class ActivateEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class DeactivateEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class HoverEnterEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class HoverExitEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class SelectEnterEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class SelectExitEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class XRBaseController;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
class XRBaseControllerInteractor;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor*, "UnityEngine.XR.Interaction.Toolkit", "XRBaseControllerInteractor");
// [Obsolete("XRBaseControllerInteractor has been deprecated in version 3.0.0. It has been renamed to XRBaseInputInteractor. (UnityUpgradable) -> UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInputInteractor")]
// Dependencies UnityEngine.XR.Interaction.Toolkit.Interactors.TargetPriorityMode, UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInteractor, UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor::InputTriggerType
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.XRBaseControllerInteractor
class CORDL_TYPE XRBaseControllerInteractor : public ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor {
public:
// Declarations
using InputTriggerType = ::GlobalNamespace::XRBaseControllerInteractor_InputTriggerType;

/// @brief [Obsolete("AudioClipForOnHoverEnter has been deprecated. Use audioClipForOnHoverEntered instead. (UnityUpgradable) -> audioClipForOnHoverEntered", true)]
 __declspec(property(get=get_AudioClipForOnHoverEnter, put=set_AudioClipForOnHoverEnter)) ::UnityW<::UnityEngine::AudioClip>  AudioClipForOnHoverEnter;

/// @brief [Obsolete("AudioClipForOnHoverExit has been deprecated. Use audioClipForOnHoverExited instead. (UnityUpgradable) -> audioClipForOnHoverExited", true)]
 __declspec(property(get=get_AudioClipForOnHoverExit, put=set_AudioClipForOnHoverExit)) ::UnityW<::UnityEngine::AudioClip>  AudioClipForOnHoverExit;

/// @brief [Obsolete("AudioClipForOnSelectEnter has been deprecated. Use audioClipForOnSelectEntered instead. (UnityUpgradable) -> audioClipForOnSelectEntered", true)]
 __declspec(property(get=get_AudioClipForOnSelectEnter, put=set_AudioClipForOnSelectEnter)) ::UnityW<::UnityEngine::AudioClip>  AudioClipForOnSelectEnter;

/// @brief [Obsolete("AudioClipForOnSelectExit has been deprecated. Use audioClipForOnSelectExited instead. (UnityUpgradable) -> audioClipForOnSelectExited", true)]
 __declspec(property(get=get_AudioClipForOnSelectExit, put=set_AudioClipForOnSelectExit)) ::UnityW<::UnityEngine::AudioClip>  AudioClipForOnSelectExit;

/// @brief Field <validTargets>k__BackingField, offset 0x140, size 0x8 
 __declspec(property(get=__cordl_internal_get__validTargets_k__BackingField, put=__cordl_internal_set__validTargets_k__BackingField)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable>>*  _validTargets_k__BackingField;

 __declspec(property(get=get_allowActivate, put=set_allowActivate)) bool  allowActivate;

 __declspec(property(get=get_allowHoverAudioWhileSelecting, put=set_allowHoverAudioWhileSelecting)) bool  allowHoverAudioWhileSelecting;

 __declspec(property(get=get_allowHoverHapticsWhileSelecting, put=set_allowHoverHapticsWhileSelecting)) bool  allowHoverHapticsWhileSelecting;

 __declspec(property(get=get_allowHoveredActivate, put=set_allowHoveredActivate)) bool  allowHoveredActivate;

 __declspec(property(get=get_audioClipForOnHoverCanceled, put=set_audioClipForOnHoverCanceled)) ::UnityW<::UnityEngine::AudioClip>  audioClipForOnHoverCanceled;

/// @brief [Obsolete("audioClipForOnHoverEnter has been deprecated. Use audioClipForOnHoverEntered instead. (UnityUpgradable) -> audioClipForOnHoverEntered", true)]
 __declspec(property(get=get_audioClipForOnHoverEnter)) ::UnityW<::UnityEngine::AudioClip>  audioClipForOnHoverEnter;

 __declspec(property(get=get_audioClipForOnHoverEntered, put=set_audioClipForOnHoverEntered)) ::UnityW<::UnityEngine::AudioClip>  audioClipForOnHoverEntered;

/// @brief [Obsolete("audioClipForOnHoverExit has been deprecated. Use audioClipForOnHoverExited instead. (UnityUpgradable) -> audioClipForOnHoverExited", true)]
 __declspec(property(get=get_audioClipForOnHoverExit)) ::UnityW<::UnityEngine::AudioClip>  audioClipForOnHoverExit;

 __declspec(property(get=get_audioClipForOnHoverExited, put=set_audioClipForOnHoverExited)) ::UnityW<::UnityEngine::AudioClip>  audioClipForOnHoverExited;

 __declspec(property(get=get_audioClipForOnSelectCanceled, put=set_audioClipForOnSelectCanceled)) ::UnityW<::UnityEngine::AudioClip>  audioClipForOnSelectCanceled;

/// @brief [Obsolete("audioClipForOnSelectEnter has been deprecated. Use audioClipForOnSelectEntered instead. (UnityUpgradable) -> audioClipForOnSelectEntered", true)]
 __declspec(property(get=get_audioClipForOnSelectEnter)) ::UnityW<::UnityEngine::AudioClip>  audioClipForOnSelectEnter;

 __declspec(property(get=get_audioClipForOnSelectEntered, put=set_audioClipForOnSelectEntered)) ::UnityW<::UnityEngine::AudioClip>  audioClipForOnSelectEntered;

/// @brief [Obsolete("audioClipForOnSelectExit has been deprecated. Use audioClipForOnSelectExited instead. (UnityUpgradable) -> audioClipForOnSelectExited", true)]
 __declspec(property(get=get_audioClipForOnSelectExit)) ::UnityW<::UnityEngine::AudioClip>  audioClipForOnSelectExit;

 __declspec(property(get=get_audioClipForOnSelectExited, put=set_audioClipForOnSelectExited)) ::UnityW<::UnityEngine::AudioClip>  audioClipForOnSelectExited;

 __declspec(property(get=get_hapticHoverCancelDuration, put=set_hapticHoverCancelDuration)) float_t  hapticHoverCancelDuration;

 __declspec(property(get=get_hapticHoverCancelIntensity, put=set_hapticHoverCancelIntensity)) float_t  hapticHoverCancelIntensity;

 __declspec(property(get=get_hapticHoverEnterDuration, put=set_hapticHoverEnterDuration)) float_t  hapticHoverEnterDuration;

 __declspec(property(get=get_hapticHoverEnterIntensity, put=set_hapticHoverEnterIntensity)) float_t  hapticHoverEnterIntensity;

 __declspec(property(get=get_hapticHoverExitDuration, put=set_hapticHoverExitDuration)) float_t  hapticHoverExitDuration;

 __declspec(property(get=get_hapticHoverExitIntensity, put=set_hapticHoverExitIntensity)) float_t  hapticHoverExitIntensity;

 __declspec(property(get=get_hapticSelectCancelDuration, put=set_hapticSelectCancelDuration)) float_t  hapticSelectCancelDuration;

 __declspec(property(get=get_hapticSelectCancelIntensity, put=set_hapticSelectCancelIntensity)) float_t  hapticSelectCancelIntensity;

 __declspec(property(get=get_hapticSelectEnterDuration, put=set_hapticSelectEnterDuration)) float_t  hapticSelectEnterDuration;

 __declspec(property(get=get_hapticSelectEnterIntensity, put=set_hapticSelectEnterIntensity)) float_t  hapticSelectEnterIntensity;

 __declspec(property(get=get_hapticSelectExitDuration, put=set_hapticSelectExitDuration)) float_t  hapticSelectExitDuration;

 __declspec(property(get=get_hapticSelectExitIntensity, put=set_hapticSelectExitIntensity)) float_t  hapticSelectExitIntensity;

 __declspec(property(get=get_hideControllerOnSelect, put=set_hideControllerOnSelect)) bool  hideControllerOnSelect;

 __declspec(property(get=get_isSelectActive)) bool  isSelectActive;

 __declspec(property(get=get_isUISelectActive)) bool  isUISelectActive;

/// @brief Field m_ActivateEventArgs, offset 0x208, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ActivateEventArgs, put=__cordl_internal_set_m_ActivateEventArgs)) ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs*>*  m_ActivateEventArgs;

/// @brief Field m_AllowActivate, offset 0x1f9, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_AllowActivate, put=__cordl_internal_set_m_AllowActivate)) bool  m_AllowActivate;

/// @brief Field m_AllowHoverAudioWhileSelecting, offset 0x1b0, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_AllowHoverAudioWhileSelecting, put=__cordl_internal_set_m_AllowHoverAudioWhileSelecting)) bool  m_AllowHoverAudioWhileSelecting;

/// @brief Field m_AllowHoverHapticsWhileSelecting, offset 0x1f8, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_AllowHoverHapticsWhileSelecting, put=__cordl_internal_set_m_AllowHoverHapticsWhileSelecting)) bool  m_AllowHoverHapticsWhileSelecting;

/// @brief Field m_AllowHoveredActivate, offset 0x14d, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_AllowHoveredActivate, put=__cordl_internal_set_m_AllowHoveredActivate)) bool  m_AllowHoveredActivate;

/// @brief Field m_AudioClipForOnHoverCanceled, offset 0x1a8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AudioClipForOnHoverCanceled, put=__cordl_internal_set_m_AudioClipForOnHoverCanceled)) ::UnityW<::UnityEngine::AudioClip>  m_AudioClipForOnHoverCanceled;

/// @brief Field m_AudioClipForOnHoverEntered, offset 0x188, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AudioClipForOnHoverEntered, put=__cordl_internal_set_m_AudioClipForOnHoverEntered)) ::UnityW<::UnityEngine::AudioClip>  m_AudioClipForOnHoverEntered;

/// @brief Field m_AudioClipForOnHoverExited, offset 0x198, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AudioClipForOnHoverExited, put=__cordl_internal_set_m_AudioClipForOnHoverExited)) ::UnityW<::UnityEngine::AudioClip>  m_AudioClipForOnHoverExited;

/// @brief Field m_AudioClipForOnSelectCanceled, offset 0x178, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AudioClipForOnSelectCanceled, put=__cordl_internal_set_m_AudioClipForOnSelectCanceled)) ::UnityW<::UnityEngine::AudioClip>  m_AudioClipForOnSelectCanceled;

/// @brief Field m_AudioClipForOnSelectEntered, offset 0x158, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AudioClipForOnSelectEntered, put=__cordl_internal_set_m_AudioClipForOnSelectEntered)) ::UnityW<::UnityEngine::AudioClip>  m_AudioClipForOnSelectEntered;

/// @brief Field m_AudioClipForOnSelectExited, offset 0x168, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AudioClipForOnSelectExited, put=__cordl_internal_set_m_AudioClipForOnSelectExited)) ::UnityW<::UnityEngine::AudioClip>  m_AudioClipForOnSelectExited;

/// @brief Field m_Controller, offset 0x200, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Controller, put=__cordl_internal_set_m_Controller)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController>  m_Controller;

/// @brief Field m_DeactivateEventArgs, offset 0x210, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_DeactivateEventArgs, put=__cordl_internal_set_m_DeactivateEventArgs)) ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs*>*  m_DeactivateEventArgs;

/// @brief Field m_EffectsAudioSource, offset 0x220, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_EffectsAudioSource, put=__cordl_internal_set_m_EffectsAudioSource)) ::UnityW<::UnityEngine::AudioSource>  m_EffectsAudioSource;

/// @brief Field m_HapticHoverCancelDuration, offset 0x1f4, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_HapticHoverCancelDuration, put=__cordl_internal_set_m_HapticHoverCancelDuration)) float_t  m_HapticHoverCancelDuration;

/// @brief Field m_HapticHoverCancelIntensity, offset 0x1f0, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_HapticHoverCancelIntensity, put=__cordl_internal_set_m_HapticHoverCancelIntensity)) float_t  m_HapticHoverCancelIntensity;

/// @brief Field m_HapticHoverEnterDuration, offset 0x1dc, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_HapticHoverEnterDuration, put=__cordl_internal_set_m_HapticHoverEnterDuration)) float_t  m_HapticHoverEnterDuration;

/// @brief Field m_HapticHoverEnterIntensity, offset 0x1d8, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_HapticHoverEnterIntensity, put=__cordl_internal_set_m_HapticHoverEnterIntensity)) float_t  m_HapticHoverEnterIntensity;

/// @brief Field m_HapticHoverExitDuration, offset 0x1e8, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_HapticHoverExitDuration, put=__cordl_internal_set_m_HapticHoverExitDuration)) float_t  m_HapticHoverExitDuration;

/// @brief Field m_HapticHoverExitIntensity, offset 0x1e4, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_HapticHoverExitIntensity, put=__cordl_internal_set_m_HapticHoverExitIntensity)) float_t  m_HapticHoverExitIntensity;

/// @brief Field m_HapticSelectCancelDuration, offset 0x1d0, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_HapticSelectCancelDuration, put=__cordl_internal_set_m_HapticSelectCancelDuration)) float_t  m_HapticSelectCancelDuration;

/// @brief Field m_HapticSelectCancelIntensity, offset 0x1cc, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_HapticSelectCancelIntensity, put=__cordl_internal_set_m_HapticSelectCancelIntensity)) float_t  m_HapticSelectCancelIntensity;

/// @brief Field m_HapticSelectEnterDuration, offset 0x1b8, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_HapticSelectEnterDuration, put=__cordl_internal_set_m_HapticSelectEnterDuration)) float_t  m_HapticSelectEnterDuration;

/// @brief Field m_HapticSelectEnterIntensity, offset 0x1b4, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_HapticSelectEnterIntensity, put=__cordl_internal_set_m_HapticSelectEnterIntensity)) float_t  m_HapticSelectEnterIntensity;

/// @brief Field m_HapticSelectExitDuration, offset 0x1c4, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_HapticSelectExitDuration, put=__cordl_internal_set_m_HapticSelectExitDuration)) float_t  m_HapticSelectExitDuration;

/// @brief Field m_HapticSelectExitIntensity, offset 0x1c0, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_HapticSelectExitIntensity, put=__cordl_internal_set_m_HapticSelectExitIntensity)) float_t  m_HapticSelectExitIntensity;

/// @brief Field m_HideControllerOnSelect, offset 0x14c, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_HideControllerOnSelect, put=__cordl_internal_set_m_HideControllerOnSelect)) bool  m_HideControllerOnSelect;

/// @brief Field m_PlayAudioClipOnHoverCanceled, offset 0x1a0, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_PlayAudioClipOnHoverCanceled, put=__cordl_internal_set_m_PlayAudioClipOnHoverCanceled)) bool  m_PlayAudioClipOnHoverCanceled;

/// @brief Field m_PlayAudioClipOnHoverEntered, offset 0x180, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_PlayAudioClipOnHoverEntered, put=__cordl_internal_set_m_PlayAudioClipOnHoverEntered)) bool  m_PlayAudioClipOnHoverEntered;

/// @brief Field m_PlayAudioClipOnHoverExited, offset 0x190, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_PlayAudioClipOnHoverExited, put=__cordl_internal_set_m_PlayAudioClipOnHoverExited)) bool  m_PlayAudioClipOnHoverExited;

/// @brief Field m_PlayAudioClipOnSelectCanceled, offset 0x170, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_PlayAudioClipOnSelectCanceled, put=__cordl_internal_set_m_PlayAudioClipOnSelectCanceled)) bool  m_PlayAudioClipOnSelectCanceled;

/// @brief Field m_PlayAudioClipOnSelectEntered, offset 0x154, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_PlayAudioClipOnSelectEntered, put=__cordl_internal_set_m_PlayAudioClipOnSelectEntered)) bool  m_PlayAudioClipOnSelectEntered;

/// @brief Field m_PlayAudioClipOnSelectExited, offset 0x160, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_PlayAudioClipOnSelectExited, put=__cordl_internal_set_m_PlayAudioClipOnSelectExited)) bool  m_PlayAudioClipOnSelectExited;

/// @brief Field m_PlayHapticsOnHoverCanceled, offset 0x1ec, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_PlayHapticsOnHoverCanceled, put=__cordl_internal_set_m_PlayHapticsOnHoverCanceled)) bool  m_PlayHapticsOnHoverCanceled;

/// @brief Field m_PlayHapticsOnHoverEntered, offset 0x1d4, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_PlayHapticsOnHoverEntered, put=__cordl_internal_set_m_PlayHapticsOnHoverEntered)) bool  m_PlayHapticsOnHoverEntered;

/// @brief Field m_PlayHapticsOnHoverExited, offset 0x1e0, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_PlayHapticsOnHoverExited, put=__cordl_internal_set_m_PlayHapticsOnHoverExited)) bool  m_PlayHapticsOnHoverExited;

/// @brief Field m_PlayHapticsOnSelectCanceled, offset 0x1c8, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_PlayHapticsOnSelectCanceled, put=__cordl_internal_set_m_PlayHapticsOnSelectCanceled)) bool  m_PlayHapticsOnSelectCanceled;

/// @brief Field m_PlayHapticsOnSelectEntered, offset 0x1b1, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_PlayHapticsOnSelectEntered, put=__cordl_internal_set_m_PlayHapticsOnSelectEntered)) bool  m_PlayHapticsOnSelectEntered;

/// @brief Field m_PlayHapticsOnSelectExited, offset 0x1bc, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_PlayHapticsOnSelectExited, put=__cordl_internal_set_m_PlayHapticsOnSelectExited)) bool  m_PlayHapticsOnSelectExited;

/// @brief Field m_SelectActionTrigger, offset 0x148, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_SelectActionTrigger, put=__cordl_internal_set_m_SelectActionTrigger)) ::GlobalNamespace::XRBaseControllerInteractor_InputTriggerType  m_SelectActionTrigger;

/// @brief Field m_TargetPriorityMode, offset 0x150, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_TargetPriorityMode, put=__cordl_internal_set_m_TargetPriorityMode)) ::UnityEngine::XR::Interaction::Toolkit::Interactors::TargetPriorityMode  m_TargetPriorityMode;

/// @brief Field m_ToggleSelectActive, offset 0x218, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_ToggleSelectActive, put=__cordl_internal_set_m_ToggleSelectActive)) bool  m_ToggleSelectActive;

/// @brief Field m_ToggleSelectDeactivatedThisFrame, offset 0x219, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_ToggleSelectDeactivatedThisFrame, put=__cordl_internal_set_m_ToggleSelectDeactivatedThisFrame)) bool  m_ToggleSelectDeactivatedThisFrame;

/// @brief Field m_WaitingForSelectDeactivate, offset 0x21a, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_WaitingForSelectDeactivate, put=__cordl_internal_set_m_WaitingForSelectDeactivate)) bool  m_WaitingForSelectDeactivate;

 __declspec(property(get=get_playAudioClipOnHoverCanceled, put=set_playAudioClipOnHoverCanceled)) bool  playAudioClipOnHoverCanceled;

/// @brief [Obsolete("playAudioClipOnHoverEnter has been deprecated. Use playAudioClipOnHoverEntered instead. (UnityUpgradable) -> playAudioClipOnHoverEntered", true)]
 __declspec(property(get=get_playAudioClipOnHoverEnter)) bool  playAudioClipOnHoverEnter;

 __declspec(property(get=get_playAudioClipOnHoverEntered, put=set_playAudioClipOnHoverEntered)) bool  playAudioClipOnHoverEntered;

/// @brief [Obsolete("playAudioClipOnHoverExit has been deprecated. Use playAudioClipOnHoverExited instead. (UnityUpgradable) -> playAudioClipOnHoverExited", true)]
 __declspec(property(get=get_playAudioClipOnHoverExit)) bool  playAudioClipOnHoverExit;

 __declspec(property(get=get_playAudioClipOnHoverExited, put=set_playAudioClipOnHoverExited)) bool  playAudioClipOnHoverExited;

 __declspec(property(get=get_playAudioClipOnSelectCanceled, put=set_playAudioClipOnSelectCanceled)) bool  playAudioClipOnSelectCanceled;

/// @brief [Obsolete("playAudioClipOnSelectEnter has been deprecated. Use playAudioClipOnSelectEntered instead. (UnityUpgradable) -> playAudioClipOnSelectEntered", true)]
 __declspec(property(get=get_playAudioClipOnSelectEnter)) bool  playAudioClipOnSelectEnter;

 __declspec(property(get=get_playAudioClipOnSelectEntered, put=set_playAudioClipOnSelectEntered)) bool  playAudioClipOnSelectEntered;

/// @brief [Obsolete("playAudioClipOnSelectExit has been deprecated. Use playAudioClipOnSelectExited instead. (UnityUpgradable) -> playAudioClipOnSelectExited", true)]
 __declspec(property(get=get_playAudioClipOnSelectExit)) bool  playAudioClipOnSelectExit;

 __declspec(property(get=get_playAudioClipOnSelectExited, put=set_playAudioClipOnSelectExited)) bool  playAudioClipOnSelectExited;

 __declspec(property(get=get_playHapticsOnHoverCanceled, put=set_playHapticsOnHoverCanceled)) bool  playHapticsOnHoverCanceled;

/// @brief [Obsolete("playHapticsOnHoverEnter has been deprecated. Use playHapticsOnHoverEntered instead. (UnityUpgradable) -> playHapticsOnHoverEntered", true)]
 __declspec(property(get=get_playHapticsOnHoverEnter)) bool  playHapticsOnHoverEnter;

 __declspec(property(get=get_playHapticsOnHoverEntered, put=set_playHapticsOnHoverEntered)) bool  playHapticsOnHoverEntered;

 __declspec(property(get=get_playHapticsOnHoverExited, put=set_playHapticsOnHoverExited)) bool  playHapticsOnHoverExited;

 __declspec(property(get=get_playHapticsOnSelectCanceled, put=set_playHapticsOnSelectCanceled)) bool  playHapticsOnSelectCanceled;

/// @brief [Obsolete("playHapticsOnSelectEnter has been deprecated. Use playHapticsOnSelectEntered instead. (UnityUpgradable) -> playHapticsOnSelectEntered", true)]
 __declspec(property(get=get_playHapticsOnSelectEnter)) bool  playHapticsOnSelectEnter;

 __declspec(property(get=get_playHapticsOnSelectEntered, put=set_playHapticsOnSelectEntered)) bool  playHapticsOnSelectEntered;

/// @brief [Obsolete("playHapticsOnSelectExit has been deprecated. Use playHapticsOnSelectExited instead. (UnityUpgradable) -> playHapticsOnSelectExited", true)]
 __declspec(property(get=get_playHapticsOnSelectExit)) bool  playHapticsOnSelectExit;

 __declspec(property(get=get_playHapticsOnSelectExited, put=set_playHapticsOnSelectExited)) bool  playHapticsOnSelectExited;

/// @brief Field s_ActivateTargets, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_ActivateTargets, put=setStaticF_s_ActivateTargets)) ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable*>*  s_ActivateTargets;

 __declspec(property(get=get_selectActionTrigger, put=set_selectActionTrigger)) ::GlobalNamespace::XRBaseControllerInteractor_InputTriggerType  selectActionTrigger;

 __declspec(property(get=get_shouldActivate)) bool  shouldActivate;

 __declspec(property(get=get_shouldDeactivate)) bool  shouldDeactivate;

 __declspec(property(get=get_targetPriorityMode, put=set_targetPriorityMode)) ::UnityEngine::XR::Interaction::Toolkit::Interactors::TargetPriorityMode  targetPriorityMode;

 __declspec(property(get=get_uiScrollValue)) ::UnityEngine::Vector2  uiScrollValue;

/// @brief [Obsolete("validTargets has been deprecated. Use a property of type List<IXRInteractable> instead.", true)]
 __declspec(property(get=get_validTargets)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable>>*  validTargets;

 __declspec(property(get=get_xrController, put=set_xrController)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController>  xrController;

/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRActivateInteractor"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRActivateInteractor*() noexcept;

/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*() noexcept;

/// @brief Method Awake, addr 0xb40589c, size 0x218, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method CanPlayHoverAudio, addr 0xb407030, size 0x2c, virtual false, abstract: false, final false
inline bool CanPlayHoverAudio(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*  hoveredInteractable) ;

/// @brief Method CanPlayHoverHaptics, addr 0xb407004, size 0x2c, virtual false, abstract: false, final false
inline bool CanPlayHoverHaptics(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*  hoveredInteractable) ;

/// @brief Method CreateActivateEventArgs, addr 0xb4057e4, size 0x54, virtual false, abstract: false, final false
static inline ::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs* CreateActivateEventArgs() ;

/// @brief Method CreateDeactivateEventArgs, addr 0xb405840, size 0x54, virtual false, abstract: false, final false
static inline ::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs* CreateDeactivateEventArgs() ;

/// @brief Method CreateEffectsAudioSource, addr 0xb405ab4, size 0x94, virtual false, abstract: false, final false
inline void CreateEffectsAudioSource() ;

/// @brief Method GetActivateTargets, addr 0xb406884, size 0x388, virtual true, abstract: false, final false
inline void GetActivateTargets(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable*>*  targets) ;

/// @brief Method HandleDeselecting, addr 0xb406e54, size 0x94, virtual false, abstract: false, final false
inline void HandleDeselecting() ;

/// @brief Method HandleSelecting, addr 0xb406c68, size 0x98, virtual false, abstract: false, final false
inline void HandleSelecting() ;

static inline ::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor* New_ctor() ;

/// @brief Method OnHoverEntering, addr 0xb406ee8, size 0xb0, virtual true, abstract: false, final false
inline void OnHoverEntering(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*  args) ;

/// @brief Method OnHoverExiting, addr 0xb40705c, size 0x11c, virtual true, abstract: false, final false
inline void OnHoverExiting(::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*  args) ;

/// @brief Method OnSelectEntering, addr 0xb406c0c, size 0x5c, virtual true, abstract: false, final false
inline void OnSelectEntering(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*  args) ;

/// @brief Method OnSelectExiting, addr 0xb406dac, size 0xa8, virtual true, abstract: false, final false
inline void OnSelectExiting(::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*  args) ;

/// @brief Method OnXRControllerChanged, addr 0xb405b48, size 0x4, virtual true, abstract: false, final false
inline void OnXRControllerChanged() ;

/// @brief Method PlayAudio, addr 0xb4071e4, size 0xc4, virtual true, abstract: false, final false
inline void PlayAudio(::UnityEngine::AudioClip*  audioClip) ;

/// @brief Method PreprocessInteractor, addr 0xb405b4c, size 0xd8, virtual true, abstract: false, final false
inline void PreprocessInteractor(::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase  updatePhase) ;

/// @brief Method ProcessInteractor, addr 0xb405c24, size 0x130, virtual true, abstract: false, final false
inline void ProcessInteractor(::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase  updatePhase) ;

/// @brief Method SendActivateEvent, addr 0xb405d54, size 0x344, virtual false, abstract: false, final false
inline void SendActivateEvent(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable*>*  targets) ;

/// @brief Method SendDeactivateEvent, addr 0xb406098, size 0x344, virtual false, abstract: false, final false
inline void SendDeactivateEvent(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable*>*  targets) ;

/// @brief Method SendHapticImpulse, addr 0xb406d00, size 0xac, virtual false, abstract: false, final false
inline bool SendHapticImpulse(float_t  amplitude, float_t  duration) ;

/// @brief Method UnityEngine.XR.Interaction.Toolkit.Interactors.IXRInteractor.get_transform, addr 0xb40751c, size 0x8, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::Transform> UnityEngine_XR_Interaction_Toolkit_Interactors_IXRInteractor_get_transform() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable>>* const& __cordl_internal_get__validTargets_k__BackingField() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable>>*& __cordl_internal_get__validTargets_k__BackingField() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs*>* const& __cordl_internal_get_m_ActivateEventArgs() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs*>*& __cordl_internal_get_m_ActivateEventArgs() ;

constexpr bool const& __cordl_internal_get_m_AllowActivate() const;

constexpr bool& __cordl_internal_get_m_AllowActivate() ;

constexpr bool const& __cordl_internal_get_m_AllowHoverAudioWhileSelecting() const;

constexpr bool& __cordl_internal_get_m_AllowHoverAudioWhileSelecting() ;

constexpr bool const& __cordl_internal_get_m_AllowHoverHapticsWhileSelecting() const;

constexpr bool& __cordl_internal_get_m_AllowHoverHapticsWhileSelecting() ;

constexpr bool const& __cordl_internal_get_m_AllowHoveredActivate() const;

constexpr bool& __cordl_internal_get_m_AllowHoveredActivate() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_m_AudioClipForOnHoverCanceled() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_m_AudioClipForOnHoverCanceled() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_m_AudioClipForOnHoverEntered() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_m_AudioClipForOnHoverEntered() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_m_AudioClipForOnHoverExited() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_m_AudioClipForOnHoverExited() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_m_AudioClipForOnSelectCanceled() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_m_AudioClipForOnSelectCanceled() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_m_AudioClipForOnSelectEntered() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_m_AudioClipForOnSelectEntered() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_m_AudioClipForOnSelectExited() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_m_AudioClipForOnSelectExited() ;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController> const& __cordl_internal_get_m_Controller() const;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController>& __cordl_internal_get_m_Controller() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs*>* const& __cordl_internal_get_m_DeactivateEventArgs() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs*>*& __cordl_internal_get_m_DeactivateEventArgs() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_m_EffectsAudioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_m_EffectsAudioSource() ;

constexpr float_t const& __cordl_internal_get_m_HapticHoverCancelDuration() const;

constexpr float_t& __cordl_internal_get_m_HapticHoverCancelDuration() ;

constexpr float_t const& __cordl_internal_get_m_HapticHoverCancelIntensity() const;

constexpr float_t& __cordl_internal_get_m_HapticHoverCancelIntensity() ;

constexpr float_t const& __cordl_internal_get_m_HapticHoverEnterDuration() const;

constexpr float_t& __cordl_internal_get_m_HapticHoverEnterDuration() ;

constexpr float_t const& __cordl_internal_get_m_HapticHoverEnterIntensity() const;

constexpr float_t& __cordl_internal_get_m_HapticHoverEnterIntensity() ;

constexpr float_t const& __cordl_internal_get_m_HapticHoverExitDuration() const;

constexpr float_t& __cordl_internal_get_m_HapticHoverExitDuration() ;

constexpr float_t const& __cordl_internal_get_m_HapticHoverExitIntensity() const;

constexpr float_t& __cordl_internal_get_m_HapticHoverExitIntensity() ;

constexpr float_t const& __cordl_internal_get_m_HapticSelectCancelDuration() const;

constexpr float_t& __cordl_internal_get_m_HapticSelectCancelDuration() ;

constexpr float_t const& __cordl_internal_get_m_HapticSelectCancelIntensity() const;

constexpr float_t& __cordl_internal_get_m_HapticSelectCancelIntensity() ;

constexpr float_t const& __cordl_internal_get_m_HapticSelectEnterDuration() const;

constexpr float_t& __cordl_internal_get_m_HapticSelectEnterDuration() ;

constexpr float_t const& __cordl_internal_get_m_HapticSelectEnterIntensity() const;

constexpr float_t& __cordl_internal_get_m_HapticSelectEnterIntensity() ;

constexpr float_t const& __cordl_internal_get_m_HapticSelectExitDuration() const;

constexpr float_t& __cordl_internal_get_m_HapticSelectExitDuration() ;

constexpr float_t const& __cordl_internal_get_m_HapticSelectExitIntensity() const;

constexpr float_t& __cordl_internal_get_m_HapticSelectExitIntensity() ;

constexpr bool const& __cordl_internal_get_m_HideControllerOnSelect() const;

constexpr bool& __cordl_internal_get_m_HideControllerOnSelect() ;

constexpr bool const& __cordl_internal_get_m_PlayAudioClipOnHoverCanceled() const;

constexpr bool& __cordl_internal_get_m_PlayAudioClipOnHoverCanceled() ;

constexpr bool const& __cordl_internal_get_m_PlayAudioClipOnHoverEntered() const;

constexpr bool& __cordl_internal_get_m_PlayAudioClipOnHoverEntered() ;

constexpr bool const& __cordl_internal_get_m_PlayAudioClipOnHoverExited() const;

constexpr bool& __cordl_internal_get_m_PlayAudioClipOnHoverExited() ;

constexpr bool const& __cordl_internal_get_m_PlayAudioClipOnSelectCanceled() const;

constexpr bool& __cordl_internal_get_m_PlayAudioClipOnSelectCanceled() ;

constexpr bool const& __cordl_internal_get_m_PlayAudioClipOnSelectEntered() const;

constexpr bool& __cordl_internal_get_m_PlayAudioClipOnSelectEntered() ;

constexpr bool const& __cordl_internal_get_m_PlayAudioClipOnSelectExited() const;

constexpr bool& __cordl_internal_get_m_PlayAudioClipOnSelectExited() ;

constexpr bool const& __cordl_internal_get_m_PlayHapticsOnHoverCanceled() const;

constexpr bool& __cordl_internal_get_m_PlayHapticsOnHoverCanceled() ;

constexpr bool const& __cordl_internal_get_m_PlayHapticsOnHoverEntered() const;

constexpr bool& __cordl_internal_get_m_PlayHapticsOnHoverEntered() ;

constexpr bool const& __cordl_internal_get_m_PlayHapticsOnHoverExited() const;

constexpr bool& __cordl_internal_get_m_PlayHapticsOnHoverExited() ;

constexpr bool const& __cordl_internal_get_m_PlayHapticsOnSelectCanceled() const;

constexpr bool& __cordl_internal_get_m_PlayHapticsOnSelectCanceled() ;

constexpr bool const& __cordl_internal_get_m_PlayHapticsOnSelectEntered() const;

constexpr bool& __cordl_internal_get_m_PlayHapticsOnSelectEntered() ;

constexpr bool const& __cordl_internal_get_m_PlayHapticsOnSelectExited() const;

constexpr bool& __cordl_internal_get_m_PlayHapticsOnSelectExited() ;

constexpr ::GlobalNamespace::XRBaseControllerInteractor_InputTriggerType const& __cordl_internal_get_m_SelectActionTrigger() const;

constexpr ::GlobalNamespace::XRBaseControllerInteractor_InputTriggerType& __cordl_internal_get_m_SelectActionTrigger() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::TargetPriorityMode const& __cordl_internal_get_m_TargetPriorityMode() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::TargetPriorityMode& __cordl_internal_get_m_TargetPriorityMode() ;

constexpr bool const& __cordl_internal_get_m_ToggleSelectActive() const;

constexpr bool& __cordl_internal_get_m_ToggleSelectActive() ;

constexpr bool const& __cordl_internal_get_m_ToggleSelectDeactivatedThisFrame() const;

constexpr bool& __cordl_internal_get_m_ToggleSelectDeactivatedThisFrame() ;

constexpr bool const& __cordl_internal_get_m_WaitingForSelectDeactivate() const;

constexpr bool& __cordl_internal_get_m_WaitingForSelectDeactivate() ;

constexpr void __cordl_internal_set__validTargets_k__BackingField(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable>>*  value) ;

constexpr void __cordl_internal_set_m_ActivateEventArgs(::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs*>*  value) ;

constexpr void __cordl_internal_set_m_AllowActivate(bool  value) ;

constexpr void __cordl_internal_set_m_AllowHoverAudioWhileSelecting(bool  value) ;

constexpr void __cordl_internal_set_m_AllowHoverHapticsWhileSelecting(bool  value) ;

constexpr void __cordl_internal_set_m_AllowHoveredActivate(bool  value) ;

constexpr void __cordl_internal_set_m_AudioClipForOnHoverCanceled(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_m_AudioClipForOnHoverEntered(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_m_AudioClipForOnHoverExited(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_m_AudioClipForOnSelectCanceled(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_m_AudioClipForOnSelectEntered(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_m_AudioClipForOnSelectExited(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_m_Controller(::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController>  value) ;

constexpr void __cordl_internal_set_m_DeactivateEventArgs(::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs*>*  value) ;

constexpr void __cordl_internal_set_m_EffectsAudioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_m_HapticHoverCancelDuration(float_t  value) ;

constexpr void __cordl_internal_set_m_HapticHoverCancelIntensity(float_t  value) ;

constexpr void __cordl_internal_set_m_HapticHoverEnterDuration(float_t  value) ;

constexpr void __cordl_internal_set_m_HapticHoverEnterIntensity(float_t  value) ;

constexpr void __cordl_internal_set_m_HapticHoverExitDuration(float_t  value) ;

constexpr void __cordl_internal_set_m_HapticHoverExitIntensity(float_t  value) ;

constexpr void __cordl_internal_set_m_HapticSelectCancelDuration(float_t  value) ;

constexpr void __cordl_internal_set_m_HapticSelectCancelIntensity(float_t  value) ;

constexpr void __cordl_internal_set_m_HapticSelectEnterDuration(float_t  value) ;

constexpr void __cordl_internal_set_m_HapticSelectEnterIntensity(float_t  value) ;

constexpr void __cordl_internal_set_m_HapticSelectExitDuration(float_t  value) ;

constexpr void __cordl_internal_set_m_HapticSelectExitIntensity(float_t  value) ;

constexpr void __cordl_internal_set_m_HideControllerOnSelect(bool  value) ;

constexpr void __cordl_internal_set_m_PlayAudioClipOnHoverCanceled(bool  value) ;

constexpr void __cordl_internal_set_m_PlayAudioClipOnHoverEntered(bool  value) ;

constexpr void __cordl_internal_set_m_PlayAudioClipOnHoverExited(bool  value) ;

constexpr void __cordl_internal_set_m_PlayAudioClipOnSelectCanceled(bool  value) ;

constexpr void __cordl_internal_set_m_PlayAudioClipOnSelectEntered(bool  value) ;

constexpr void __cordl_internal_set_m_PlayAudioClipOnSelectExited(bool  value) ;

constexpr void __cordl_internal_set_m_PlayHapticsOnHoverCanceled(bool  value) ;

constexpr void __cordl_internal_set_m_PlayHapticsOnHoverEntered(bool  value) ;

constexpr void __cordl_internal_set_m_PlayHapticsOnHoverExited(bool  value) ;

constexpr void __cordl_internal_set_m_PlayHapticsOnSelectCanceled(bool  value) ;

constexpr void __cordl_internal_set_m_PlayHapticsOnSelectEntered(bool  value) ;

constexpr void __cordl_internal_set_m_PlayHapticsOnSelectExited(bool  value) ;

constexpr void __cordl_internal_set_m_SelectActionTrigger(::GlobalNamespace::XRBaseControllerInteractor_InputTriggerType  value) ;

constexpr void __cordl_internal_set_m_TargetPriorityMode(::UnityEngine::XR::Interaction::Toolkit::Interactors::TargetPriorityMode  value) ;

constexpr void __cordl_internal_set_m_ToggleSelectActive(bool  value) ;

constexpr void __cordl_internal_set_m_ToggleSelectDeactivatedThisFrame(bool  value) ;

constexpr void __cordl_internal_set_m_WaitingForSelectDeactivate(bool  value) ;

/// @brief Method .ctor, addr 0xb4072a8, size 0x1dc, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable*>* getStaticF_s_ActivateTargets() ;

/// @brief Method get_AudioClipForOnHoverEnter, addr 0xb4053d8, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::AudioClip> get_AudioClipForOnHoverEnter() ;

/// @brief Method get_AudioClipForOnHoverExit, addr 0xb4053f4, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::AudioClip> get_AudioClipForOnHoverExit() ;

/// @brief Method get_AudioClipForOnSelectEnter, addr 0xb4053a0, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::AudioClip> get_AudioClipForOnSelectEnter() ;

/// @brief Method get_AudioClipForOnSelectExit, addr 0xb4053bc, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::AudioClip> get_AudioClipForOnSelectExit() ;

/// @brief Method get_allowActivate, addr 0xb405728, size 0x8, virtual false, abstract: false, final false
inline bool get_allowActivate() ;

/// @brief Method get_allowHoverAudioWhileSelecting, addr 0xb4055e8, size 0x8, virtual false, abstract: false, final false
inline bool get_allowHoverAudioWhileSelecting() ;

/// @brief Method get_allowHoverHapticsWhileSelecting, addr 0xb405718, size 0x8, virtual false, abstract: false, final false
inline bool get_allowHoverHapticsWhileSelecting() ;

/// @brief Method get_allowHoveredActivate, addr 0xb4054d8, size 0x8, virtual false, abstract: false, final false
inline bool get_allowHoveredActivate() ;

/// @brief Method get_audioClipForOnHoverCanceled, addr 0xb4055d0, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::AudioClip> get_audioClipForOnHoverCanceled() ;

/// @brief Method get_audioClipForOnHoverEnter, addr 0xb4053d0, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::AudioClip> get_audioClipForOnHoverEnter() ;

/// @brief Method get_audioClipForOnHoverEntered, addr 0xb405580, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::AudioClip> get_audioClipForOnHoverEntered() ;

/// @brief Method get_audioClipForOnHoverExit, addr 0xb4053ec, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::AudioClip> get_audioClipForOnHoverExit() ;

/// @brief Method get_audioClipForOnHoverExited, addr 0xb4055a8, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::AudioClip> get_audioClipForOnHoverExited() ;

/// @brief Method get_audioClipForOnSelectCanceled, addr 0xb405558, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::AudioClip> get_audioClipForOnSelectCanceled() ;

/// @brief Method get_audioClipForOnSelectEnter, addr 0xb405398, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::AudioClip> get_audioClipForOnSelectEnter() ;

/// @brief Method get_audioClipForOnSelectEntered, addr 0xb405508, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::AudioClip> get_audioClipForOnSelectEntered() ;

/// @brief Method get_audioClipForOnSelectExit, addr 0xb4053b4, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::AudioClip> get_audioClipForOnSelectExit() ;

/// @brief Method get_audioClipForOnSelectExited, addr 0xb405530, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::AudioClip> get_audioClipForOnSelectExited() ;

/// @brief Method get_hapticHoverCancelDuration, addr 0xb405708, size 0x8, virtual false, abstract: false, final false
inline float_t get_hapticHoverCancelDuration() ;

/// @brief Method get_hapticHoverCancelIntensity, addr 0xb4056f8, size 0x8, virtual false, abstract: false, final false
inline float_t get_hapticHoverCancelIntensity() ;

/// @brief Method get_hapticHoverEnterDuration, addr 0xb4056a8, size 0x8, virtual false, abstract: false, final false
inline float_t get_hapticHoverEnterDuration() ;

/// @brief Method get_hapticHoverEnterIntensity, addr 0xb405698, size 0x8, virtual false, abstract: false, final false
inline float_t get_hapticHoverEnterIntensity() ;

/// @brief Method get_hapticHoverExitDuration, addr 0xb4056d8, size 0x8, virtual false, abstract: false, final false
inline float_t get_hapticHoverExitDuration() ;

/// @brief Method get_hapticHoverExitIntensity, addr 0xb4056c8, size 0x8, virtual false, abstract: false, final false
inline float_t get_hapticHoverExitIntensity() ;

/// @brief Method get_hapticSelectCancelDuration, addr 0xb405678, size 0x8, virtual false, abstract: false, final false
inline float_t get_hapticSelectCancelDuration() ;

/// @brief Method get_hapticSelectCancelIntensity, addr 0xb405668, size 0x8, virtual false, abstract: false, final false
inline float_t get_hapticSelectCancelIntensity() ;

/// @brief Method get_hapticSelectEnterDuration, addr 0xb405618, size 0x8, virtual false, abstract: false, final false
inline float_t get_hapticSelectEnterDuration() ;

/// @brief Method get_hapticSelectEnterIntensity, addr 0xb405608, size 0x8, virtual false, abstract: false, final false
inline float_t get_hapticSelectEnterIntensity() ;

/// @brief Method get_hapticSelectExitDuration, addr 0xb405648, size 0x8, virtual false, abstract: false, final false
inline float_t get_hapticSelectExitDuration() ;

/// @brief Method get_hapticSelectExitIntensity, addr 0xb405638, size 0x8, virtual false, abstract: false, final false
inline float_t get_hapticSelectExitIntensity() ;

/// @brief Method get_hideControllerOnSelect, addr 0xb405430, size 0x8, virtual false, abstract: false, final false
inline bool get_hideControllerOnSelect() ;

/// @brief Method get_isSelectActive, addr 0xb4063fc, size 0x1f4, virtual true, abstract: false, final false
inline bool get_isSelectActive() ;

/// @brief Method get_isUISelectActive, addr 0xb4065f0, size 0x88, virtual true, abstract: false, final false
inline bool get_isUISelectActive() ;

/// @brief Method get_playAudioClipOnHoverCanceled, addr 0xb4055c0, size 0x8, virtual false, abstract: false, final false
inline bool get_playAudioClipOnHoverCanceled() ;

/// @brief Method get_playAudioClipOnHoverEnter, addr 0xb4053c8, size 0x8, virtual false, abstract: false, final false
inline bool get_playAudioClipOnHoverEnter() ;

/// @brief Method get_playAudioClipOnHoverEntered, addr 0xb405570, size 0x8, virtual false, abstract: false, final false
inline bool get_playAudioClipOnHoverEntered() ;

/// @brief Method get_playAudioClipOnHoverExit, addr 0xb4053e4, size 0x8, virtual false, abstract: false, final false
inline bool get_playAudioClipOnHoverExit() ;

/// @brief Method get_playAudioClipOnHoverExited, addr 0xb405598, size 0x8, virtual false, abstract: false, final false
inline bool get_playAudioClipOnHoverExited() ;

/// @brief Method get_playAudioClipOnSelectCanceled, addr 0xb405548, size 0x8, virtual false, abstract: false, final false
inline bool get_playAudioClipOnSelectCanceled() ;

/// @brief Method get_playAudioClipOnSelectEnter, addr 0xb405390, size 0x8, virtual false, abstract: false, final false
inline bool get_playAudioClipOnSelectEnter() ;

/// @brief Method get_playAudioClipOnSelectEntered, addr 0xb4054f8, size 0x8, virtual false, abstract: false, final false
inline bool get_playAudioClipOnSelectEntered() ;

/// @brief Method get_playAudioClipOnSelectExit, addr 0xb4053ac, size 0x8, virtual false, abstract: false, final false
inline bool get_playAudioClipOnSelectExit() ;

/// @brief Method get_playAudioClipOnSelectExited, addr 0xb405520, size 0x8, virtual false, abstract: false, final false
inline bool get_playAudioClipOnSelectExited() ;

/// @brief Method get_playHapticsOnHoverCanceled, addr 0xb4056e8, size 0x8, virtual false, abstract: false, final false
inline bool get_playHapticsOnHoverCanceled() ;

/// @brief Method get_playHapticsOnHoverEnter, addr 0xb405410, size 0x8, virtual false, abstract: false, final false
inline bool get_playHapticsOnHoverEnter() ;

/// @brief Method get_playHapticsOnHoverEntered, addr 0xb405688, size 0x8, virtual false, abstract: false, final false
inline bool get_playHapticsOnHoverEntered() ;

/// @brief Method get_playHapticsOnHoverExited, addr 0xb4056b8, size 0x8, virtual false, abstract: false, final false
inline bool get_playHapticsOnHoverExited() ;

/// @brief Method get_playHapticsOnSelectCanceled, addr 0xb405658, size 0x8, virtual false, abstract: false, final false
inline bool get_playHapticsOnSelectCanceled() ;

/// @brief Method get_playHapticsOnSelectEnter, addr 0xb405400, size 0x8, virtual false, abstract: false, final false
inline bool get_playHapticsOnSelectEnter() ;

/// @brief Method get_playHapticsOnSelectEntered, addr 0xb4055f8, size 0x8, virtual false, abstract: false, final false
inline bool get_playHapticsOnSelectEntered() ;

/// @brief Method get_playHapticsOnSelectExit, addr 0xb405408, size 0x8, virtual false, abstract: false, final false
inline bool get_playHapticsOnSelectExit() ;

/// @brief Method get_playHapticsOnSelectExited, addr 0xb405628, size 0x8, virtual false, abstract: false, final false
inline bool get_playHapticsOnSelectExited() ;

/// @brief Method get_selectActionTrigger, addr 0xb405420, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::XRBaseControllerInteractor_InputTriggerType get_selectActionTrigger() ;

/// @brief Method get_shouldActivate, addr 0xb406734, size 0xa8, virtual true, abstract: false, final false
inline bool get_shouldActivate() ;

/// @brief Method get_shouldDeactivate, addr 0xb4067dc, size 0xa8, virtual true, abstract: false, final false
inline bool get_shouldDeactivate() ;

/// @brief Method get_targetPriorityMode, addr 0xb4054e8, size 0x8, virtual true, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::TargetPriorityMode get_targetPriorityMode() ;

/// @brief Method get_uiScrollValue, addr 0xb406678, size 0xbc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_uiScrollValue() ;

/// [CompilerGenerated]
/// @brief Method get_validTargets, addr 0xb405418, size 0x8, virtual true, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable>>* get_validTargets() ;

/// @brief Method get_xrController, addr 0xb405738, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController> get_xrController() ;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRActivateInteractor"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRActivateInteractor* i___UnityEngine__XR__Interaction__Toolkit__Interactors__IXRActivateInteractor() noexcept;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor* i___UnityEngine__XR__Interaction__Toolkit__Interactors__IXRInteractor() noexcept;

static inline void setStaticF_s_ActivateTargets(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable*>*  value) ;

/// @brief Method set_AudioClipForOnHoverEnter, addr 0xb4053e0, size 0x4, virtual false, abstract: false, final false
inline void set_AudioClipForOnHoverEnter(::UnityEngine::AudioClip*  value) ;

/// @brief Method set_AudioClipForOnHoverExit, addr 0xb4053fc, size 0x4, virtual false, abstract: false, final false
inline void set_AudioClipForOnHoverExit(::UnityEngine::AudioClip*  value) ;

/// @brief Method set_AudioClipForOnSelectEnter, addr 0xb4053a8, size 0x4, virtual false, abstract: false, final false
inline void set_AudioClipForOnSelectEnter(::UnityEngine::AudioClip*  value) ;

/// @brief Method set_AudioClipForOnSelectExit, addr 0xb4053c4, size 0x4, virtual false, abstract: false, final false
inline void set_AudioClipForOnSelectExit(::UnityEngine::AudioClip*  value) ;

/// @brief Method set_allowActivate, addr 0xb405730, size 0x8, virtual false, abstract: false, final false
inline void set_allowActivate(bool  value) ;

/// @brief Method set_allowHoverAudioWhileSelecting, addr 0xb4055f0, size 0x8, virtual false, abstract: false, final false
inline void set_allowHoverAudioWhileSelecting(bool  value) ;

/// @brief Method set_allowHoverHapticsWhileSelecting, addr 0xb405720, size 0x8, virtual false, abstract: false, final false
inline void set_allowHoverHapticsWhileSelecting(bool  value) ;

/// @brief Method set_allowHoveredActivate, addr 0xb4054e0, size 0x8, virtual false, abstract: false, final false
inline void set_allowHoveredActivate(bool  value) ;

/// @brief Method set_audioClipForOnHoverCanceled, addr 0xb4055d8, size 0x10, virtual false, abstract: false, final false
inline void set_audioClipForOnHoverCanceled(::UnityEngine::AudioClip*  value) ;

/// @brief Method set_audioClipForOnHoverEntered, addr 0xb405588, size 0x10, virtual false, abstract: false, final false
inline void set_audioClipForOnHoverEntered(::UnityEngine::AudioClip*  value) ;

/// @brief Method set_audioClipForOnHoverExited, addr 0xb4055b0, size 0x10, virtual false, abstract: false, final false
inline void set_audioClipForOnHoverExited(::UnityEngine::AudioClip*  value) ;

/// @brief Method set_audioClipForOnSelectCanceled, addr 0xb405560, size 0x10, virtual false, abstract: false, final false
inline void set_audioClipForOnSelectCanceled(::UnityEngine::AudioClip*  value) ;

/// @brief Method set_audioClipForOnSelectEntered, addr 0xb405510, size 0x10, virtual false, abstract: false, final false
inline void set_audioClipForOnSelectEntered(::UnityEngine::AudioClip*  value) ;

/// @brief Method set_audioClipForOnSelectExited, addr 0xb405538, size 0x10, virtual false, abstract: false, final false
inline void set_audioClipForOnSelectExited(::UnityEngine::AudioClip*  value) ;

/// @brief Method set_hapticHoverCancelDuration, addr 0xb405710, size 0x8, virtual false, abstract: false, final false
inline void set_hapticHoverCancelDuration(float_t  value) ;

/// @brief Method set_hapticHoverCancelIntensity, addr 0xb405700, size 0x8, virtual false, abstract: false, final false
inline void set_hapticHoverCancelIntensity(float_t  value) ;

/// @brief Method set_hapticHoverEnterDuration, addr 0xb4056b0, size 0x8, virtual false, abstract: false, final false
inline void set_hapticHoverEnterDuration(float_t  value) ;

/// @brief Method set_hapticHoverEnterIntensity, addr 0xb4056a0, size 0x8, virtual false, abstract: false, final false
inline void set_hapticHoverEnterIntensity(float_t  value) ;

/// @brief Method set_hapticHoverExitDuration, addr 0xb4056e0, size 0x8, virtual false, abstract: false, final false
inline void set_hapticHoverExitDuration(float_t  value) ;

/// @brief Method set_hapticHoverExitIntensity, addr 0xb4056d0, size 0x8, virtual false, abstract: false, final false
inline void set_hapticHoverExitIntensity(float_t  value) ;

/// @brief Method set_hapticSelectCancelDuration, addr 0xb405680, size 0x8, virtual false, abstract: false, final false
inline void set_hapticSelectCancelDuration(float_t  value) ;

/// @brief Method set_hapticSelectCancelIntensity, addr 0xb405670, size 0x8, virtual false, abstract: false, final false
inline void set_hapticSelectCancelIntensity(float_t  value) ;

/// @brief Method set_hapticSelectEnterDuration, addr 0xb405620, size 0x8, virtual false, abstract: false, final false
inline void set_hapticSelectEnterDuration(float_t  value) ;

/// @brief Method set_hapticSelectEnterIntensity, addr 0xb405610, size 0x8, virtual false, abstract: false, final false
inline void set_hapticSelectEnterIntensity(float_t  value) ;

/// @brief Method set_hapticSelectExitDuration, addr 0xb405650, size 0x8, virtual false, abstract: false, final false
inline void set_hapticSelectExitDuration(float_t  value) ;

/// @brief Method set_hapticSelectExitIntensity, addr 0xb405640, size 0x8, virtual false, abstract: false, final false
inline void set_hapticSelectExitIntensity(float_t  value) ;

/// @brief Method set_hideControllerOnSelect, addr 0xb405438, size 0xa0, virtual false, abstract: false, final false
inline void set_hideControllerOnSelect(bool  value) ;

/// @brief Method set_playAudioClipOnHoverCanceled, addr 0xb4055c8, size 0x8, virtual false, abstract: false, final false
inline void set_playAudioClipOnHoverCanceled(bool  value) ;

/// @brief Method set_playAudioClipOnHoverEntered, addr 0xb405578, size 0x8, virtual false, abstract: false, final false
inline void set_playAudioClipOnHoverEntered(bool  value) ;

/// @brief Method set_playAudioClipOnHoverExited, addr 0xb4055a0, size 0x8, virtual false, abstract: false, final false
inline void set_playAudioClipOnHoverExited(bool  value) ;

/// @brief Method set_playAudioClipOnSelectCanceled, addr 0xb405550, size 0x8, virtual false, abstract: false, final false
inline void set_playAudioClipOnSelectCanceled(bool  value) ;

/// @brief Method set_playAudioClipOnSelectEntered, addr 0xb405500, size 0x8, virtual false, abstract: false, final false
inline void set_playAudioClipOnSelectEntered(bool  value) ;

/// @brief Method set_playAudioClipOnSelectExited, addr 0xb405528, size 0x8, virtual false, abstract: false, final false
inline void set_playAudioClipOnSelectExited(bool  value) ;

/// @brief Method set_playHapticsOnHoverCanceled, addr 0xb4056f0, size 0x8, virtual false, abstract: false, final false
inline void set_playHapticsOnHoverCanceled(bool  value) ;

/// @brief Method set_playHapticsOnHoverEntered, addr 0xb405690, size 0x8, virtual false, abstract: false, final false
inline void set_playHapticsOnHoverEntered(bool  value) ;

/// @brief Method set_playHapticsOnHoverExited, addr 0xb4056c0, size 0x8, virtual false, abstract: false, final false
inline void set_playHapticsOnHoverExited(bool  value) ;

/// @brief Method set_playHapticsOnSelectCanceled, addr 0xb405660, size 0x8, virtual false, abstract: false, final false
inline void set_playHapticsOnSelectCanceled(bool  value) ;

/// @brief Method set_playHapticsOnSelectEntered, addr 0xb405600, size 0x8, virtual false, abstract: false, final false
inline void set_playHapticsOnSelectEntered(bool  value) ;

/// @brief Method set_playHapticsOnSelectExited, addr 0xb405630, size 0x8, virtual false, abstract: false, final false
inline void set_playHapticsOnSelectExited(bool  value) ;

/// @brief Method set_selectActionTrigger, addr 0xb405428, size 0x8, virtual false, abstract: false, final false
inline void set_selectActionTrigger(::GlobalNamespace::XRBaseControllerInteractor_InputTriggerType  value) ;

/// @brief Method set_targetPriorityMode, addr 0xb4054f0, size 0x8, virtual true, abstract: false, final false
inline void set_targetPriorityMode(::UnityEngine::XR::Interaction::Toolkit::Interactors::TargetPriorityMode  value) ;

/// @brief Method set_xrController, addr 0xb405740, size 0xa4, virtual false, abstract: false, final false
inline void set_xrController(::UnityEngine::XR::Interaction::Toolkit::XRBaseController*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRBaseControllerInteractor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRBaseControllerInteractor", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRBaseControllerInteractor(XRBaseControllerInteractor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRBaseControllerInteractor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRBaseControllerInteractor(XRBaseControllerInteractor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11078};

/// [CompilerGenerated]
/// @brief Field <validTargets>k__BackingField, offset: 0x140, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable>>*  ____validTargets_k__BackingField;

/// [SerializeField]
/// @brief Field m_SelectActionTrigger, offset: 0x148, size: 0x4, def value: None
 ::GlobalNamespace::XRBaseControllerInteractor_InputTriggerType  ___m_SelectActionTrigger;

/// [SerializeField]
/// @brief Field m_HideControllerOnSelect, offset: 0x14c, size: 0x1, def value: None
 bool  ___m_HideControllerOnSelect;

/// [SerializeField]
/// @brief Field m_AllowHoveredActivate, offset: 0x14d, size: 0x1, def value: None
 bool  ___m_AllowHoveredActivate;

/// [SerializeField]
/// @brief Field m_TargetPriorityMode, offset: 0x150, size: 0x4, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Interactors::TargetPriorityMode  ___m_TargetPriorityMode;

/// [SerializeField]
/// [FormerlySerializedAs("m_PlayAudioClipOnSelectEnter")]
/// @brief Field m_PlayAudioClipOnSelectEntered, offset: 0x154, size: 0x1, def value: None
 bool  ___m_PlayAudioClipOnSelectEntered;

/// [SerializeField]
/// [FormerlySerializedAs("m_AudioClipForOnSelectEnter")]
/// @brief Field m_AudioClipForOnSelectEntered, offset: 0x158, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___m_AudioClipForOnSelectEntered;

/// [SerializeField]
/// [FormerlySerializedAs("m_PlayAudioClipOnSelectExit")]
/// @brief Field m_PlayAudioClipOnSelectExited, offset: 0x160, size: 0x1, def value: None
 bool  ___m_PlayAudioClipOnSelectExited;

/// [SerializeField]
/// [FormerlySerializedAs("m_AudioClipForOnSelectExit")]
/// @brief Field m_AudioClipForOnSelectExited, offset: 0x168, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___m_AudioClipForOnSelectExited;

/// [SerializeField]
/// @brief Field m_PlayAudioClipOnSelectCanceled, offset: 0x170, size: 0x1, def value: None
 bool  ___m_PlayAudioClipOnSelectCanceled;

/// [SerializeField]
/// @brief Field m_AudioClipForOnSelectCanceled, offset: 0x178, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___m_AudioClipForOnSelectCanceled;

/// [SerializeField]
/// [FormerlySerializedAs("m_PlayAudioClipOnHoverEnter")]
/// @brief Field m_PlayAudioClipOnHoverEntered, offset: 0x180, size: 0x1, def value: None
 bool  ___m_PlayAudioClipOnHoverEntered;

/// [SerializeField]
/// [FormerlySerializedAs("m_AudioClipForOnHoverEnter")]
/// @brief Field m_AudioClipForOnHoverEntered, offset: 0x188, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___m_AudioClipForOnHoverEntered;

/// [SerializeField]
/// [FormerlySerializedAs("m_PlayAudioClipOnHoverExit")]
/// @brief Field m_PlayAudioClipOnHoverExited, offset: 0x190, size: 0x1, def value: None
 bool  ___m_PlayAudioClipOnHoverExited;

/// [SerializeField]
/// [FormerlySerializedAs("m_AudioClipForOnHoverExit")]
/// @brief Field m_AudioClipForOnHoverExited, offset: 0x198, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___m_AudioClipForOnHoverExited;

/// [SerializeField]
/// @brief Field m_PlayAudioClipOnHoverCanceled, offset: 0x1a0, size: 0x1, def value: None
 bool  ___m_PlayAudioClipOnHoverCanceled;

/// [SerializeField]
/// @brief Field m_AudioClipForOnHoverCanceled, offset: 0x1a8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___m_AudioClipForOnHoverCanceled;

/// [SerializeField]
/// @brief Field m_AllowHoverAudioWhileSelecting, offset: 0x1b0, size: 0x1, def value: None
 bool  ___m_AllowHoverAudioWhileSelecting;

/// [SerializeField]
/// [FormerlySerializedAs("m_PlayHapticsOnSelectEnter")]
/// @brief Field m_PlayHapticsOnSelectEntered, offset: 0x1b1, size: 0x1, def value: None
 bool  ___m_PlayHapticsOnSelectEntered;

/// [SerializeField]
/// [Range(0, 1)]
/// @brief Field m_HapticSelectEnterIntensity, offset: 0x1b4, size: 0x4, def value: None
 float_t  ___m_HapticSelectEnterIntensity;

/// [SerializeField]
/// @brief Field m_HapticSelectEnterDuration, offset: 0x1b8, size: 0x4, def value: None
 float_t  ___m_HapticSelectEnterDuration;

/// [SerializeField]
/// [FormerlySerializedAs("m_PlayHapticsOnSelectExit")]
/// @brief Field m_PlayHapticsOnSelectExited, offset: 0x1bc, size: 0x1, def value: None
 bool  ___m_PlayHapticsOnSelectExited;

/// [SerializeField]
/// [Range(0, 1)]
/// @brief Field m_HapticSelectExitIntensity, offset: 0x1c0, size: 0x4, def value: None
 float_t  ___m_HapticSelectExitIntensity;

/// [SerializeField]
/// @brief Field m_HapticSelectExitDuration, offset: 0x1c4, size: 0x4, def value: None
 float_t  ___m_HapticSelectExitDuration;

/// [SerializeField]
/// @brief Field m_PlayHapticsOnSelectCanceled, offset: 0x1c8, size: 0x1, def value: None
 bool  ___m_PlayHapticsOnSelectCanceled;

/// [SerializeField]
/// [Range(0, 1)]
/// @brief Field m_HapticSelectCancelIntensity, offset: 0x1cc, size: 0x4, def value: None
 float_t  ___m_HapticSelectCancelIntensity;

/// [SerializeField]
/// @brief Field m_HapticSelectCancelDuration, offset: 0x1d0, size: 0x4, def value: None
 float_t  ___m_HapticSelectCancelDuration;

/// [SerializeField]
/// [FormerlySerializedAs("m_PlayHapticsOnHoverEnter")]
/// @brief Field m_PlayHapticsOnHoverEntered, offset: 0x1d4, size: 0x1, def value: None
 bool  ___m_PlayHapticsOnHoverEntered;

/// [SerializeField]
/// [Range(0, 1)]
/// @brief Field m_HapticHoverEnterIntensity, offset: 0x1d8, size: 0x4, def value: None
 float_t  ___m_HapticHoverEnterIntensity;

/// [SerializeField]
/// @brief Field m_HapticHoverEnterDuration, offset: 0x1dc, size: 0x4, def value: None
 float_t  ___m_HapticHoverEnterDuration;

/// [SerializeField]
/// [FormerlySerializedAs("m_PlayHapticsOnHoverExit")]
/// @brief Field m_PlayHapticsOnHoverExited, offset: 0x1e0, size: 0x1, def value: None
 bool  ___m_PlayHapticsOnHoverExited;

/// [SerializeField]
/// [Range(0, 1)]
/// @brief Field m_HapticHoverExitIntensity, offset: 0x1e4, size: 0x4, def value: None
 float_t  ___m_HapticHoverExitIntensity;

/// [SerializeField]
/// @brief Field m_HapticHoverExitDuration, offset: 0x1e8, size: 0x4, def value: None
 float_t  ___m_HapticHoverExitDuration;

/// [SerializeField]
/// @brief Field m_PlayHapticsOnHoverCanceled, offset: 0x1ec, size: 0x1, def value: None
 bool  ___m_PlayHapticsOnHoverCanceled;

/// [SerializeField]
/// [Range(0, 1)]
/// @brief Field m_HapticHoverCancelIntensity, offset: 0x1f0, size: 0x4, def value: None
 float_t  ___m_HapticHoverCancelIntensity;

/// [SerializeField]
/// @brief Field m_HapticHoverCancelDuration, offset: 0x1f4, size: 0x4, def value: None
 float_t  ___m_HapticHoverCancelDuration;

/// [SerializeField]
/// @brief Field m_AllowHoverHapticsWhileSelecting, offset: 0x1f8, size: 0x1, def value: None
 bool  ___m_AllowHoverHapticsWhileSelecting;

/// @brief Field m_AllowActivate, offset: 0x1f9, size: 0x1, def value: None
 bool  ___m_AllowActivate;

/// @brief Field m_Controller, offset: 0x200, size: 0x8, def value: None
 ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController>  ___m_Controller;

/// @brief Field m_ActivateEventArgs, offset: 0x208, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs*>*  ___m_ActivateEventArgs;

/// @brief Field m_DeactivateEventArgs, offset: 0x210, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs*>*  ___m_DeactivateEventArgs;

/// @brief Field m_ToggleSelectActive, offset: 0x218, size: 0x1, def value: None
 bool  ___m_ToggleSelectActive;

/// @brief Field m_ToggleSelectDeactivatedThisFrame, offset: 0x219, size: 0x1, def value: None
 bool  ___m_ToggleSelectDeactivatedThisFrame;

/// @brief Field m_WaitingForSelectDeactivate, offset: 0x21a, size: 0x1, def value: None
 bool  ___m_WaitingForSelectDeactivate;

/// @brief Field m_EffectsAudioSource, offset: 0x220, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___m_EffectsAudioSource;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor, ____validTargets_k__BackingField) == 0x140, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor, ___m_SelectActionTrigger) == 0x148, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor, ___m_HideControllerOnSelect) == 0x14c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor, ___m_AllowHoveredActivate) == 0x14d, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor, ___m_TargetPriorityMode) == 0x150, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor, ___m_PlayAudioClipOnSelectEntered) == 0x154, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor, ___m_AudioClipForOnSelectEntered) == 0x158, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor, ___m_PlayAudioClipOnSelectExited) == 0x160, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor, ___m_AudioClipForOnSelectExited) == 0x168, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor, ___m_PlayAudioClipOnSelectCanceled) == 0x170, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor, ___m_AudioClipForOnSelectCanceled) == 0x178, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor, ___m_PlayAudioClipOnHoverEntered) == 0x180, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor, ___m_AudioClipForOnHoverEntered) == 0x188, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor, ___m_PlayAudioClipOnHoverExited) == 0x190, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor, ___m_AudioClipForOnHoverExited) == 0x198, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor, ___m_PlayAudioClipOnHoverCanceled) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor, ___m_AudioClipForOnHoverCanceled) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor, ___m_AllowHoverAudioWhileSelecting) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor, ___m_PlayHapticsOnSelectEntered) == 0x1b1, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor, ___m_HapticSelectEnterIntensity) == 0x1b4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor, ___m_HapticSelectEnterDuration) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor, ___m_PlayHapticsOnSelectExited) == 0x1bc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor, ___m_HapticSelectExitIntensity) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor, ___m_HapticSelectExitDuration) == 0x1c4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor, ___m_PlayHapticsOnSelectCanceled) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor, ___m_HapticSelectCancelIntensity) == 0x1cc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor, ___m_HapticSelectCancelDuration) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor, ___m_PlayHapticsOnHoverEntered) == 0x1d4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor, ___m_HapticHoverEnterIntensity) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor, ___m_HapticHoverEnterDuration) == 0x1dc, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor, ___m_PlayHapticsOnHoverExited) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor, ___m_HapticHoverExitIntensity) == 0x1e4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor, ___m_HapticHoverExitDuration) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor, ___m_PlayHapticsOnHoverCanceled) == 0x1ec, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor, ___m_HapticHoverCancelIntensity) == 0x1f0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor, ___m_HapticHoverCancelDuration) == 0x1f4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor, ___m_AllowHoverHapticsWhileSelecting) == 0x1f8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor, ___m_AllowActivate) == 0x1f9, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor, ___m_Controller) == 0x200, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor, ___m_ActivateEventArgs) == 0x208, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor, ___m_DeactivateEventArgs) == 0x210, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor, ___m_ToggleSelectActive) == 0x218, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor, ___m_ToggleSelectDeactivatedThisFrame) == 0x219, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor, ___m_WaitingForSelectDeactivate) == 0x21a, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor, ___m_EffectsAudioSource) == 0x220, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::XRBaseControllerInteractor) == 0x228, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit
