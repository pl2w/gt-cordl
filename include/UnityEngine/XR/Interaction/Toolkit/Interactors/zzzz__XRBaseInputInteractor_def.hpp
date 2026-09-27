#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Interactors/XRBaseInputInteractor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__TargetPriorityMode_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__XRBaseInputInteractor_InputCompatibilityMode_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__XRBaseInputInteractor_InputTriggerType_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__XRBaseInteractor_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(XRBaseInputInteractor)
namespace GlobalNamespace {
struct XRBaseInputInteractor_InputCompatibilityMode;
}
namespace GlobalNamespace {
struct XRBaseInputInteractor_InputTriggerType;
}
namespace GlobalNamespace {
struct XRInteractionUpdateOrder_UpdatePhase;
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
template<typename TResult>
class Func_1;
}
namespace UnityEngine::XR::Interaction::Toolkit::Feedback {
class SimpleAudioFeedback;
}
namespace UnityEngine::XR::Interaction::Toolkit::Feedback {
class SimpleHapticFeedback;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics {
class HapticImpulsePlayer;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Readers {
class XRInputButtonReader;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Readers {
template<typename TValue>
class XRInputValueReader_1;
}
namespace UnityEngine::XR::Interaction::Toolkit::Inputs::Readers {
class XRInputValueReader;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
class IXRActivateInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
class IXRHoverInteractable;
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
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class XRBaseInputInteractor_LogicalInputState;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class XRBaseInputInteractor___c;
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
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class XRBaseInputInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class XRBaseInputInteractor_LogicalInputState;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class XRBaseInputInteractor___c;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor___c*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*, "UnityEngine.XR.Interaction.Toolkit.Interactors", "XRBaseInputInteractor");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState*, "UnityEngine.XR.Interaction.Toolkit.Interactors", "XRBaseInputInteractor/LogicalInputState");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor___c*, "UnityEngine.XR.Interaction.Toolkit.Interactors", "XRBaseInputInteractor/<>c");
// [MovedFrom("UnityEngine.XR.Interaction.Toolkit")]
// Dependencies UnityEngine.XR.Interaction.Toolkit.Interactors.TargetPriorityMode, UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInputInteractor::InputCompatibilityMode, UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInputInteractor::InputTriggerType, UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInteractor
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInputInteractor
class CORDL_TYPE XRBaseInputInteractor : public ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor {
public:
// Declarations
using InputCompatibilityMode = ::GlobalNamespace::XRBaseInputInteractor_InputCompatibilityMode;

using InputTriggerType = ::GlobalNamespace::XRBaseInputInteractor_InputTriggerType;

using LogicalInputState = ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState;

using __c = ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor___c;

/// @brief Field <buttonReaders>k__BackingField, offset 0x160, size 0x8 
 __declspec(property(get=__cordl_internal_get__buttonReaders_k__BackingField, put=__cordl_internal_set__buttonReaders_k__BackingField)) ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>*  _buttonReaders_k__BackingField;

/// @brief Field <valueReaders>k__BackingField, offset 0x168, size 0x8 
 __declspec(property(get=__cordl_internal_get__valueReaders_k__BackingField, put=__cordl_internal_set__valueReaders_k__BackingField)) ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader*>*  _valueReaders_k__BackingField;

 __declspec(property(get=get_activateInput, put=set_activateInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  activateInput;

 __declspec(property(get=get_allowActivate, put=set_allowActivate)) bool  allowActivate;

/// @brief [Obsolete("allowHoverAudioWhileSelecting has been deprecated in version 3.0.0. Use SimpleAudioFeedback.allowHoverAudioWhileSelecting instead.")]
 __declspec(property(get=get_allowHoverAudioWhileSelecting, put=set_allowHoverAudioWhileSelecting)) bool  allowHoverAudioWhileSelecting;

/// @brief [Obsolete("allowHoverHapticsWhileSelecting has been deprecated in version 3.0.0. Use SimpleHapticFeedback.allowHoverHapticsWhileSelecting instead.")]
 __declspec(property(get=get_allowHoverHapticsWhileSelecting, put=set_allowHoverHapticsWhileSelecting)) bool  allowHoverHapticsWhileSelecting;

 __declspec(property(get=get_allowHoveredActivate, put=set_allowHoveredActivate)) bool  allowHoveredActivate;

/// @brief [Obsolete("audioClipForOnHoverCanceled has been deprecated in version 3.0.0. Use SimpleAudioFeedback.hoverCanceledClip instead.")]
 __declspec(property(get=get_audioClipForOnHoverCanceled, put=set_audioClipForOnHoverCanceled)) ::UnityW<::UnityEngine::AudioClip>  audioClipForOnHoverCanceled;

/// @brief [Obsolete("audioClipForOnHoverEntered has been deprecated in version 3.0.0. Use SimpleAudioFeedback.hoverEnteredClip instead.")]
 __declspec(property(get=get_audioClipForOnHoverEntered, put=set_audioClipForOnHoverEntered)) ::UnityW<::UnityEngine::AudioClip>  audioClipForOnHoverEntered;

/// @brief [Obsolete("audioClipForOnHoverExited has been deprecated in version 3.0.0. Use SimpleAudioFeedback.hoverExitedClip instead.")]
 __declspec(property(get=get_audioClipForOnHoverExited, put=set_audioClipForOnHoverExited)) ::UnityW<::UnityEngine::AudioClip>  audioClipForOnHoverExited;

/// @brief [Obsolete("audioClipForOnSelectCanceled has been deprecated in version 3.0.0. Use SimpleAudioFeedback.selectCanceledClip instead.")]
 __declspec(property(get=get_audioClipForOnSelectCanceled, put=set_audioClipForOnSelectCanceled)) ::UnityW<::UnityEngine::AudioClip>  audioClipForOnSelectCanceled;

/// @brief [Obsolete("audioClipForOnSelectEntered has been deprecated in version 3.0.0. Use SimpleAudioFeedback.selectEnteredClip instead.")]
 __declspec(property(get=get_audioClipForOnSelectEntered, put=set_audioClipForOnSelectEntered)) ::UnityW<::UnityEngine::AudioClip>  audioClipForOnSelectEntered;

/// @brief [Obsolete("audioClipForOnSelectExited has been deprecated in version 3.0.0. Use SimpleAudioFeedback.selectExitedClip instead.")]
 __declspec(property(get=get_audioClipForOnSelectExited, put=set_audioClipForOnSelectExited)) ::UnityW<::UnityEngine::AudioClip>  audioClipForOnSelectExited;

 __declspec(property(get=get_buttonReaders)) ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>*  buttonReaders;

/// @brief [Obsolete("forceDeprecatedInput introduced in version 3.0.0 is marked for removal. This is only used for backwards compatibility and will be eventually removed in a future version.")]
 __declspec(property(get=get_forceDeprecatedInput, put=set_forceDeprecatedInput)) bool  forceDeprecatedInput;

/// @brief [Obsolete("hapticHoverCancelDuration has been deprecated in version 3.0.0. Use SimpleHapticFeedback.hoverCanceledData.duration instead.")]
 __declspec(property(get=get_hapticHoverCancelDuration, put=set_hapticHoverCancelDuration)) float_t  hapticHoverCancelDuration;

/// @brief [Obsolete("hapticHoverCancelIntensity has been deprecated in version 3.0.0. Use SimpleHapticFeedback.hoverCanceledData.amplitude instead.")]
 __declspec(property(get=get_hapticHoverCancelIntensity, put=set_hapticHoverCancelIntensity)) float_t  hapticHoverCancelIntensity;

/// @brief [Obsolete("hapticHoverEnterDuration has been deprecated in version 3.0.0. Use SimpleHapticFeedback.hoverEnteredData.duration instead.")]
 __declspec(property(get=get_hapticHoverEnterDuration, put=set_hapticHoverEnterDuration)) float_t  hapticHoverEnterDuration;

/// @brief [Obsolete("hapticHoverEnterIntensity has been deprecated in version 3.0.0. Use SimpleHapticFeedback.hoverEnteredData.amplitude instead.")]
 __declspec(property(get=get_hapticHoverEnterIntensity, put=set_hapticHoverEnterIntensity)) float_t  hapticHoverEnterIntensity;

/// @brief [Obsolete("hapticHoverExitDuration has been deprecated in version 3.0.0. Use SimpleHapticFeedback.hoverExitedData.duration instead.")]
 __declspec(property(get=get_hapticHoverExitDuration, put=set_hapticHoverExitDuration)) float_t  hapticHoverExitDuration;

/// @brief [Obsolete("hapticHoverExitIntensity has been deprecated in version 3.0.0. Use SimpleHapticFeedback.hoverExitedData.amplitude instead.")]
 __declspec(property(get=get_hapticHoverExitIntensity, put=set_hapticHoverExitIntensity)) float_t  hapticHoverExitIntensity;

/// @brief [Obsolete("hapticSelectCancelDuration has been deprecated in version 3.0.0. Use SimpleHapticFeedback.selectCanceledData.duration instead.")]
 __declspec(property(get=get_hapticSelectCancelDuration, put=set_hapticSelectCancelDuration)) float_t  hapticSelectCancelDuration;

/// @brief [Obsolete("hapticSelectCancelIntensity has been deprecated in version 3.0.0. Use SimpleHapticFeedback.selectCanceledData.amplitude instead.")]
 __declspec(property(get=get_hapticSelectCancelIntensity, put=set_hapticSelectCancelIntensity)) float_t  hapticSelectCancelIntensity;

/// @brief [Obsolete("hapticSelectEnterDuration has been deprecated in version 3.0.0. Use SimpleHapticFeedback.selectEnteredData.duration instead.")]
 __declspec(property(get=get_hapticSelectEnterDuration, put=set_hapticSelectEnterDuration)) float_t  hapticSelectEnterDuration;

/// @brief [Obsolete("hapticSelectEnterIntensity has been deprecated in version 3.0.0. Use SimpleHapticFeedback.selectEnteredData.amplitude instead.")]
 __declspec(property(get=get_hapticSelectEnterIntensity, put=set_hapticSelectEnterIntensity)) float_t  hapticSelectEnterIntensity;

/// @brief [Obsolete("hapticSelectExitDuration has been deprecated in version 3.0.0. Use SimpleHapticFeedback.selectExitedData.duration instead.")]
 __declspec(property(get=get_hapticSelectExitDuration, put=set_hapticSelectExitDuration)) float_t  hapticSelectExitDuration;

/// @brief [Obsolete("hapticSelectExitIntensity has been deprecated in version 3.0.0. Use SimpleHapticFeedback.selectExitedData.amplitude instead.")]
 __declspec(property(get=get_hapticSelectExitIntensity, put=set_hapticSelectExitIntensity)) float_t  hapticSelectExitIntensity;

/// @brief [Obsolete("hideControllerOnSelect has been deprecated in version 3.0.0.")]
 __declspec(property(get=get_hideControllerOnSelect, put=set_hideControllerOnSelect)) bool  hideControllerOnSelect;

/// @brief [Obsolete("inputCompatibilityMode introduced in version 3.0.0 is marked for removal. This is only used for backwards compatibility and will be eventually removed in a future version.")]
 __declspec(property(get=get_inputCompatibilityMode, put=set_inputCompatibilityMode)) ::GlobalNamespace::XRBaseInputInteractor_InputCompatibilityMode  inputCompatibilityMode;

 __declspec(property(get=get_isSelectActive)) bool  isSelectActive;

/// @brief [Obsolete("isUISelectActive has been deprecated in version 3.0.0. Use a serialized XRInputButtonReader to read button input instead. Some derived interactors have a uiPressInput property that can be used instead.")]
 __declspec(property(get=get_isUISelectActive)) bool  isUISelectActive;

 __declspec(property(get=get_logicalActivateState)) ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState*  logicalActivateState;

 __declspec(property(get=get_logicalSelectState)) ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState*  logicalSelectState;

/// @brief Field m_ActivateEventArgs, offset 0x170, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ActivateEventArgs, put=__cordl_internal_set_m_ActivateEventArgs)) ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs*>*  m_ActivateEventArgs;

/// @brief Field m_ActivateInput, offset 0x148, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ActivateInput, put=__cordl_internal_set_m_ActivateInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  m_ActivateInput;

/// @brief Field m_AllowActivate, offset 0x15c, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_AllowActivate, put=__cordl_internal_set_m_AllowActivate)) bool  m_AllowActivate;

/// @brief Field m_AllowHoverAudioWhileSelecting, offset 0x220, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_AllowHoverAudioWhileSelecting, put=__cordl_internal_set_m_AllowHoverAudioWhileSelecting)) bool  m_AllowHoverAudioWhileSelecting;

/// @brief Field m_AllowHoverHapticsWhileSelecting, offset 0x268, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_AllowHoverHapticsWhileSelecting, put=__cordl_internal_set_m_AllowHoverHapticsWhileSelecting)) bool  m_AllowHoverHapticsWhileSelecting;

/// @brief Field m_AllowHoveredActivate, offset 0x154, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_AllowHoveredActivate, put=__cordl_internal_set_m_AllowHoveredActivate)) bool  m_AllowHoveredActivate;

/// @brief Field m_AudioClipForOnHoverCanceled, offset 0x218, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AudioClipForOnHoverCanceled, put=__cordl_internal_set_m_AudioClipForOnHoverCanceled)) ::UnityW<::UnityEngine::AudioClip>  m_AudioClipForOnHoverCanceled;

/// @brief Field m_AudioClipForOnHoverEntered, offset 0x1f8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AudioClipForOnHoverEntered, put=__cordl_internal_set_m_AudioClipForOnHoverEntered)) ::UnityW<::UnityEngine::AudioClip>  m_AudioClipForOnHoverEntered;

/// @brief Field m_AudioClipForOnHoverExited, offset 0x208, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AudioClipForOnHoverExited, put=__cordl_internal_set_m_AudioClipForOnHoverExited)) ::UnityW<::UnityEngine::AudioClip>  m_AudioClipForOnHoverExited;

/// @brief Field m_AudioClipForOnSelectCanceled, offset 0x1e8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AudioClipForOnSelectCanceled, put=__cordl_internal_set_m_AudioClipForOnSelectCanceled)) ::UnityW<::UnityEngine::AudioClip>  m_AudioClipForOnSelectCanceled;

/// @brief Field m_AudioClipForOnSelectEntered, offset 0x1c8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AudioClipForOnSelectEntered, put=__cordl_internal_set_m_AudioClipForOnSelectEntered)) ::UnityW<::UnityEngine::AudioClip>  m_AudioClipForOnSelectEntered;

/// @brief Field m_AudioClipForOnSelectExited, offset 0x1d8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AudioClipForOnSelectExited, put=__cordl_internal_set_m_AudioClipForOnSelectExited)) ::UnityW<::UnityEngine::AudioClip>  m_AudioClipForOnSelectExited;

/// @brief Field m_AudioFeedback, offset 0x190, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AudioFeedback, put=__cordl_internal_set_m_AudioFeedback)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback>  m_AudioFeedback;

/// @brief Field m_AudioSource, offset 0x1a0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AudioSource, put=__cordl_internal_set_m_AudioSource)) ::UnityW<::UnityEngine::AudioSource>  m_AudioSource;

/// @brief Field m_Controller, offset 0x1b8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Controller, put=__cordl_internal_set_m_Controller)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController>  m_Controller;

/// @brief Field m_DeactivateEventArgs, offset 0x178, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_DeactivateEventArgs, put=__cordl_internal_set_m_DeactivateEventArgs)) ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs*>*  m_DeactivateEventArgs;

/// @brief Field m_HapticFeedback, offset 0x198, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_HapticFeedback, put=__cordl_internal_set_m_HapticFeedback)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback>  m_HapticFeedback;

/// @brief Field m_HapticHoverCancelDuration, offset 0x264, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_HapticHoverCancelDuration, put=__cordl_internal_set_m_HapticHoverCancelDuration)) float_t  m_HapticHoverCancelDuration;

/// @brief Field m_HapticHoverCancelIntensity, offset 0x260, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_HapticHoverCancelIntensity, put=__cordl_internal_set_m_HapticHoverCancelIntensity)) float_t  m_HapticHoverCancelIntensity;

/// @brief Field m_HapticHoverEnterDuration, offset 0x24c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_HapticHoverEnterDuration, put=__cordl_internal_set_m_HapticHoverEnterDuration)) float_t  m_HapticHoverEnterDuration;

/// @brief Field m_HapticHoverEnterIntensity, offset 0x248, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_HapticHoverEnterIntensity, put=__cordl_internal_set_m_HapticHoverEnterIntensity)) float_t  m_HapticHoverEnterIntensity;

/// @brief Field m_HapticHoverExitDuration, offset 0x258, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_HapticHoverExitDuration, put=__cordl_internal_set_m_HapticHoverExitDuration)) float_t  m_HapticHoverExitDuration;

/// @brief Field m_HapticHoverExitIntensity, offset 0x254, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_HapticHoverExitIntensity, put=__cordl_internal_set_m_HapticHoverExitIntensity)) float_t  m_HapticHoverExitIntensity;

/// @brief Field m_HapticImpulsePlayer, offset 0x1a8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_HapticImpulsePlayer, put=__cordl_internal_set_m_HapticImpulsePlayer)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulsePlayer>  m_HapticImpulsePlayer;

/// @brief Field m_HapticSelectCancelDuration, offset 0x240, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_HapticSelectCancelDuration, put=__cordl_internal_set_m_HapticSelectCancelDuration)) float_t  m_HapticSelectCancelDuration;

/// @brief Field m_HapticSelectCancelIntensity, offset 0x23c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_HapticSelectCancelIntensity, put=__cordl_internal_set_m_HapticSelectCancelIntensity)) float_t  m_HapticSelectCancelIntensity;

/// @brief Field m_HapticSelectEnterDuration, offset 0x228, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_HapticSelectEnterDuration, put=__cordl_internal_set_m_HapticSelectEnterDuration)) float_t  m_HapticSelectEnterDuration;

/// @brief Field m_HapticSelectEnterIntensity, offset 0x224, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_HapticSelectEnterIntensity, put=__cordl_internal_set_m_HapticSelectEnterIntensity)) float_t  m_HapticSelectEnterIntensity;

/// @brief Field m_HapticSelectExitDuration, offset 0x234, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_HapticSelectExitDuration, put=__cordl_internal_set_m_HapticSelectExitDuration)) float_t  m_HapticSelectExitDuration;

/// @brief Field m_HapticSelectExitIntensity, offset 0x230, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_HapticSelectExitIntensity, put=__cordl_internal_set_m_HapticSelectExitIntensity)) float_t  m_HapticSelectExitIntensity;

/// @brief Field m_HasXRController, offset 0x1c0, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_HasXRController, put=__cordl_internal_set_m_HasXRController)) bool  m_HasXRController;

/// @brief Field m_HideControllerOnSelect, offset 0x1b0, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_HideControllerOnSelect, put=__cordl_internal_set_m_HideControllerOnSelect)) bool  m_HideControllerOnSelect;

/// @brief Field m_InputCompatibilityMode, offset 0x1b4, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_InputCompatibilityMode, put=__cordl_internal_set_m_InputCompatibilityMode)) ::GlobalNamespace::XRBaseInputInteractor_InputCompatibilityMode  m_InputCompatibilityMode;

/// @brief Field m_LogicalActivateState, offset 0x188, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LogicalActivateState, put=__cordl_internal_set_m_LogicalActivateState)) ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState*  m_LogicalActivateState;

/// @brief Field m_LogicalSelectState, offset 0x180, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LogicalSelectState, put=__cordl_internal_set_m_LogicalSelectState)) ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState*  m_LogicalSelectState;

/// @brief Field m_PlayAudioClipOnHoverCanceled, offset 0x210, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_PlayAudioClipOnHoverCanceled, put=__cordl_internal_set_m_PlayAudioClipOnHoverCanceled)) bool  m_PlayAudioClipOnHoverCanceled;

/// @brief Field m_PlayAudioClipOnHoverEntered, offset 0x1f0, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_PlayAudioClipOnHoverEntered, put=__cordl_internal_set_m_PlayAudioClipOnHoverEntered)) bool  m_PlayAudioClipOnHoverEntered;

/// @brief Field m_PlayAudioClipOnHoverExited, offset 0x200, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_PlayAudioClipOnHoverExited, put=__cordl_internal_set_m_PlayAudioClipOnHoverExited)) bool  m_PlayAudioClipOnHoverExited;

/// @brief Field m_PlayAudioClipOnSelectCanceled, offset 0x1e0, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_PlayAudioClipOnSelectCanceled, put=__cordl_internal_set_m_PlayAudioClipOnSelectCanceled)) bool  m_PlayAudioClipOnSelectCanceled;

/// @brief Field m_PlayAudioClipOnSelectEntered, offset 0x1c1, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_PlayAudioClipOnSelectEntered, put=__cordl_internal_set_m_PlayAudioClipOnSelectEntered)) bool  m_PlayAudioClipOnSelectEntered;

/// @brief Field m_PlayAudioClipOnSelectExited, offset 0x1d0, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_PlayAudioClipOnSelectExited, put=__cordl_internal_set_m_PlayAudioClipOnSelectExited)) bool  m_PlayAudioClipOnSelectExited;

/// @brief Field m_PlayHapticsOnHoverCanceled, offset 0x25c, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_PlayHapticsOnHoverCanceled, put=__cordl_internal_set_m_PlayHapticsOnHoverCanceled)) bool  m_PlayHapticsOnHoverCanceled;

/// @brief Field m_PlayHapticsOnHoverEntered, offset 0x244, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_PlayHapticsOnHoverEntered, put=__cordl_internal_set_m_PlayHapticsOnHoverEntered)) bool  m_PlayHapticsOnHoverEntered;

/// @brief Field m_PlayHapticsOnHoverExited, offset 0x250, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_PlayHapticsOnHoverExited, put=__cordl_internal_set_m_PlayHapticsOnHoverExited)) bool  m_PlayHapticsOnHoverExited;

/// @brief Field m_PlayHapticsOnSelectCanceled, offset 0x238, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_PlayHapticsOnSelectCanceled, put=__cordl_internal_set_m_PlayHapticsOnSelectCanceled)) bool  m_PlayHapticsOnSelectCanceled;

/// @brief Field m_PlayHapticsOnSelectEntered, offset 0x221, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_PlayHapticsOnSelectEntered, put=__cordl_internal_set_m_PlayHapticsOnSelectEntered)) bool  m_PlayHapticsOnSelectEntered;

/// @brief Field m_PlayHapticsOnSelectExited, offset 0x22c, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_PlayHapticsOnSelectExited, put=__cordl_internal_set_m_PlayHapticsOnSelectExited)) bool  m_PlayHapticsOnSelectExited;

/// @brief Field m_SelectActionTrigger, offset 0x150, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_SelectActionTrigger, put=__cordl_internal_set_m_SelectActionTrigger)) ::GlobalNamespace::XRBaseInputInteractor_InputTriggerType  m_SelectActionTrigger;

/// @brief Field m_SelectInput, offset 0x140, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SelectInput, put=__cordl_internal_set_m_SelectInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  m_SelectInput;

/// @brief Field m_TargetPriorityMode, offset 0x158, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_TargetPriorityMode, put=__cordl_internal_set_m_TargetPriorityMode)) ::UnityEngine::XR::Interaction::Toolkit::Interactors::TargetPriorityMode  m_TargetPriorityMode;

/// @brief [Obsolete("playAudioClipOnHoverCanceled has been deprecated in version 3.0.0. Use SimpleAudioFeedback.playHoverCanceled instead.")]
 __declspec(property(get=get_playAudioClipOnHoverCanceled, put=set_playAudioClipOnHoverCanceled)) bool  playAudioClipOnHoverCanceled;

/// @brief [Obsolete("playAudioClipOnHoverEntered has been deprecated in version 3.0.0. Use SimpleAudioFeedback.playHoverEntered instead.")]
 __declspec(property(get=get_playAudioClipOnHoverEntered, put=set_playAudioClipOnHoverEntered)) bool  playAudioClipOnHoverEntered;

/// @brief [Obsolete("playAudioClipOnHoverExited has been deprecated in version 3.0.0. Use SimpleAudioFeedback.playHoverExited instead.")]
 __declspec(property(get=get_playAudioClipOnHoverExited, put=set_playAudioClipOnHoverExited)) bool  playAudioClipOnHoverExited;

/// @brief [Obsolete("playAudioClipOnSelectCanceled has been deprecated in version 3.0.0. Use SimpleAudioFeedback.playSelectCanceled instead.")]
 __declspec(property(get=get_playAudioClipOnSelectCanceled, put=set_playAudioClipOnSelectCanceled)) bool  playAudioClipOnSelectCanceled;

/// @brief [Obsolete("playAudioClipOnSelectEntered has been deprecated in version 3.0.0. Use SimpleAudioFeedback.playSelectEntered instead.")]
 __declspec(property(get=get_playAudioClipOnSelectEntered, put=set_playAudioClipOnSelectEntered)) bool  playAudioClipOnSelectEntered;

/// @brief [Obsolete("playAudioClipOnSelectExited has been deprecated in version 3.0.0. Use SimpleAudioFeedback.playSelectExited instead.")]
 __declspec(property(get=get_playAudioClipOnSelectExited, put=set_playAudioClipOnSelectExited)) bool  playAudioClipOnSelectExited;

/// @brief [Obsolete("playHapticsOnHoverCanceled has been deprecated in version 3.0.0. Use SimpleHapticFeedback.playHoverCanceled instead.")]
 __declspec(property(get=get_playHapticsOnHoverCanceled, put=set_playHapticsOnHoverCanceled)) bool  playHapticsOnHoverCanceled;

/// @brief [Obsolete("playHapticsOnHoverEntered has been deprecated in version 3.0.0. Use SimpleHapticFeedback.playHoverEntered instead.")]
 __declspec(property(get=get_playHapticsOnHoverEntered, put=set_playHapticsOnHoverEntered)) bool  playHapticsOnHoverEntered;

/// @brief [Obsolete("playHapticsOnHoverExited has been deprecated in version 3.0.0. Use SimpleHapticFeedback.playHoverExited instead.")]
 __declspec(property(get=get_playHapticsOnHoverExited, put=set_playHapticsOnHoverExited)) bool  playHapticsOnHoverExited;

/// @brief [Obsolete("playHapticsOnSelectCanceled has been deprecated in version 3.0.0. Use SimpleHapticFeedback.playSelectCanceled instead.")]
 __declspec(property(get=get_playHapticsOnSelectCanceled, put=set_playHapticsOnSelectCanceled)) bool  playHapticsOnSelectCanceled;

/// @brief [Obsolete("playHapticsOnSelectEntered has been deprecated in version 3.0.0. Use SimpleHapticFeedback.playSelectEntered instead.")]
 __declspec(property(get=get_playHapticsOnSelectEntered, put=set_playHapticsOnSelectEntered)) bool  playHapticsOnSelectEntered;

/// @brief [Obsolete("playHapticsOnSelectExited has been deprecated in version 3.0.0. Use SimpleHapticFeedback.playSelectExited instead.")]
 __declspec(property(get=get_playHapticsOnSelectExited, put=set_playHapticsOnSelectExited)) bool  playHapticsOnSelectExited;

/// @brief Field s_ActivateTargets, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_ActivateTargets, put=setStaticF_s_ActivateTargets)) ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable*>*  s_ActivateTargets;

 __declspec(property(get=get_selectActionTrigger, put=set_selectActionTrigger)) ::GlobalNamespace::XRBaseInputInteractor_InputTriggerType  selectActionTrigger;

 __declspec(property(get=get_selectInput, put=set_selectInput)) ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  selectInput;

 __declspec(property(get=get_shouldActivate)) bool  shouldActivate;

 __declspec(property(get=get_shouldDeactivate)) bool  shouldDeactivate;

 __declspec(property(get=get_targetPriorityMode, put=set_targetPriorityMode)) ::UnityEngine::XR::Interaction::Toolkit::Interactors::TargetPriorityMode  targetPriorityMode;

/// @brief [Obsolete("uiScrollValue has been deprecated in version 3.0.0. Use a serialized XRInputValueReader<Vector2> to read scroll input instead. Some derived interactors have a uiScrollInput property that can be used instead.")]
 __declspec(property(get=get_uiScrollValue)) ::UnityEngine::Vector2  uiScrollValue;

 __declspec(property(get=get_valueReaders)) ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader*>*  valueReaders;

/// @brief [Obsolete("xrController has been deprecated in version 3.0.0.")]
 __declspec(property(get=get_xrController, put=set_xrController)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController>  xrController;

/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRActivateInteractor"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRActivateInteractor*() noexcept;

/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*() noexcept;

/// @brief Method Awake, addr 0xb4616a8, size 0x404, virtual true, abstract: false, final false
inline void Awake() ;

/// [Obsolete("CanPlayHoverAudio has been deprecated in version 3.0.0.")]
/// @brief Method CanPlayHoverAudio, addr 0xb469358, size 0x28, virtual false, abstract: false, final false
inline bool CanPlayHoverAudio(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*  hoveredInteractable) ;

/// [Obsolete("CanPlayHoverHaptics has been deprecated in version 3.0.0.")]
/// @brief Method CanPlayHoverHaptics, addr 0xb4693f4, size 0x28, virtual false, abstract: false, final false
inline bool CanPlayHoverHaptics(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*  hoveredInteractable) ;

/// @brief Method CreateActivateEventArgs, addr 0xb469678, size 0x54, virtual false, abstract: false, final false
static inline ::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs* CreateActivateEventArgs() ;

/// @brief Method CreateDeactivateEventArgs, addr 0xb4696cc, size 0x54, virtual false, abstract: false, final false
static inline ::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs* CreateDeactivateEventArgs() ;

/// [Obsolete("CreateEffectsAudioSource has been deprecated in version 3.0.0.")]
/// @brief Method CreateEffectsAudioSource, addr 0xb469354, size 0x4, virtual false, abstract: false, final false
inline void CreateEffectsAudioSource() ;

/// @brief Method GetActivateTargets, addr 0xb46715c, size 0x380, virtual true, abstract: false, final false
inline void GetActivateTargets(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable*>*  targets) ;

/// @brief Method GetOrCreateAndMigrateAudioFeedback, addr 0xb4660ac, size 0x19c, virtual false, abstract: false, final false
inline void GetOrCreateAndMigrateAudioFeedback() ;

/// @brief Method GetOrCreateAndMigrateHapticFeedback, addr 0xb466248, size 0x320, virtual false, abstract: false, final false
inline void GetOrCreateAndMigrateHapticFeedback() ;

/// @brief Method GetOrCreateAudioSource, addr 0xb4679a8, size 0xb8, virtual false, abstract: false, final false
inline void GetOrCreateAudioSource() ;

/// @brief Method GetOrCreateHapticImpulsePlayer, addr 0xb4678b8, size 0x2c, virtual false, abstract: false, final false
inline void GetOrCreateHapticImpulsePlayer() ;

/// [Obsolete("HandleDeselecting has been deprecated in version 3.0.0.")]
/// @brief Method HandleDeselecting, addr 0xb469420, size 0x4, virtual false, abstract: false, final false
inline void HandleDeselecting() ;

/// [Obsolete("HandleSelecting has been deprecated in version 3.0.0.")]
/// @brief Method HandleSelecting, addr 0xb46941c, size 0x4, virtual false, abstract: false, final false
inline void HandleSelecting() ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor* New_ctor() ;

/// @brief Method OnDisable, addr 0xb461d30, size 0x1c8, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xb461ae0, size 0x1d8, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnHoverEntering, addr 0xb469424, size 0x4, virtual true, abstract: false, final false
inline void OnHoverEntering(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*  args) ;

/// @brief Method OnHoverExiting, addr 0xb469508, size 0x4, virtual true, abstract: false, final false
inline void OnHoverExiting(::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*  args) ;

/// @brief Method OnSelectEntering, addr 0xb464450, size 0xc4, virtual true, abstract: false, final false
inline void OnSelectEntering(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*  args) ;

/// @brief Method OnSelectExiting, addr 0xb464868, size 0xc8, virtual true, abstract: false, final false
inline void OnSelectExiting(::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*  args) ;

/// [Obsolete("OnXRControllerChanged has been deprecated in version 3.0.0.")]
/// @brief Method OnXRControllerChanged, addr 0xb4692e8, size 0x6c, virtual true, abstract: false, final false
inline void OnXRControllerChanged() ;

/// @brief Method PlayAudio, addr 0xb4678e4, size 0xc4, virtual true, abstract: false, final false
inline void PlayAudio(::UnityEngine::AudioClip*  audioClip) ;

/// @brief Method PreprocessInteractor, addr 0xb4622fc, size 0x230, virtual true, abstract: false, final false
inline void PreprocessInteractor(::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase  updatePhase) ;

/// @brief Method ProcessInteractor, addr 0xb4669b0, size 0x120, virtual true, abstract: false, final false
inline void ProcessInteractor(::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase  updatePhase) ;

/// @brief Method SendActivateEvent, addr 0xb466ad4, size 0x344, virtual false, abstract: false, final false
inline void SendActivateEvent(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable*>*  targets) ;

/// @brief Method SendDeactivateEvent, addr 0xb466e18, size 0x344, virtual false, abstract: false, final false
inline void SendDeactivateEvent(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable*>*  targets) ;

/// @brief Method SendHapticImpulse, addr 0xb467820, size 0x98, virtual false, abstract: false, final false
inline bool SendHapticImpulse(float_t  amplitude, float_t  duration) ;

/// @brief Method SetInputProperty, addr 0xb460f38, size 0x1c, virtual false, abstract: false, final false
inline void SetInputProperty(::by_ref<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>  property, ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value) ;

/// @brief Method SetInputProperty, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename TValue>
requires(::cordl_internals::value_type_constraint<TValue> && ::cordl_internals::default_constructor_constraint<TValue>)
inline void SetInputProperty(::by_ref<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<TValue>*>  property, ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader_1<TValue>*  value) ;

/// @brief Method UnityEngine.XR.Interaction.Toolkit.Interactors.IXRInteractor.get_transform, addr 0xb469c78, size 0x8, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::Transform> UnityEngine_XR_Interaction_Toolkit_Interactors_IXRInteractor_get_transform() ;

/// @brief Method WarnMixedInputConfiguration, addr 0xb466580, size 0x3c0, virtual false, abstract: false, final false
inline void WarnMixedInputConfiguration() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>* const& __cordl_internal_get__buttonReaders_k__BackingField() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>*& __cordl_internal_get__buttonReaders_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader*>* const& __cordl_internal_get__valueReaders_k__BackingField() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader*>*& __cordl_internal_get__valueReaders_k__BackingField() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs*>* const& __cordl_internal_get_m_ActivateEventArgs() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs*>*& __cordl_internal_get_m_ActivateEventArgs() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* const& __cordl_internal_get_m_ActivateInput() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*& __cordl_internal_get_m_ActivateInput() ;

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

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback> const& __cordl_internal_get_m_AudioFeedback() const;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback>& __cordl_internal_get_m_AudioFeedback() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_m_AudioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_m_AudioSource() ;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController> const& __cordl_internal_get_m_Controller() const;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController>& __cordl_internal_get_m_Controller() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs*>* const& __cordl_internal_get_m_DeactivateEventArgs() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs*>*& __cordl_internal_get_m_DeactivateEventArgs() ;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback> const& __cordl_internal_get_m_HapticFeedback() const;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback>& __cordl_internal_get_m_HapticFeedback() ;

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

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulsePlayer> const& __cordl_internal_get_m_HapticImpulsePlayer() const;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulsePlayer>& __cordl_internal_get_m_HapticImpulsePlayer() ;

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

constexpr bool const& __cordl_internal_get_m_HasXRController() const;

constexpr bool& __cordl_internal_get_m_HasXRController() ;

constexpr bool const& __cordl_internal_get_m_HideControllerOnSelect() const;

constexpr bool& __cordl_internal_get_m_HideControllerOnSelect() ;

constexpr ::GlobalNamespace::XRBaseInputInteractor_InputCompatibilityMode const& __cordl_internal_get_m_InputCompatibilityMode() const;

constexpr ::GlobalNamespace::XRBaseInputInteractor_InputCompatibilityMode& __cordl_internal_get_m_InputCompatibilityMode() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState* const& __cordl_internal_get_m_LogicalActivateState() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState*& __cordl_internal_get_m_LogicalActivateState() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState* const& __cordl_internal_get_m_LogicalSelectState() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState*& __cordl_internal_get_m_LogicalSelectState() ;

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

constexpr ::GlobalNamespace::XRBaseInputInteractor_InputTriggerType const& __cordl_internal_get_m_SelectActionTrigger() const;

constexpr ::GlobalNamespace::XRBaseInputInteractor_InputTriggerType& __cordl_internal_get_m_SelectActionTrigger() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* const& __cordl_internal_get_m_SelectInput() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*& __cordl_internal_get_m_SelectInput() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::TargetPriorityMode const& __cordl_internal_get_m_TargetPriorityMode() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::TargetPriorityMode& __cordl_internal_get_m_TargetPriorityMode() ;

constexpr void __cordl_internal_set__buttonReaders_k__BackingField(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>*  value) ;

constexpr void __cordl_internal_set__valueReaders_k__BackingField(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader*>*  value) ;

constexpr void __cordl_internal_set_m_ActivateEventArgs(::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs*>*  value) ;

constexpr void __cordl_internal_set_m_ActivateInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value) ;

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

constexpr void __cordl_internal_set_m_AudioFeedback(::UnityW<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback>  value) ;

constexpr void __cordl_internal_set_m_AudioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_m_Controller(::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController>  value) ;

constexpr void __cordl_internal_set_m_DeactivateEventArgs(::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs*>*  value) ;

constexpr void __cordl_internal_set_m_HapticFeedback(::UnityW<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback>  value) ;

constexpr void __cordl_internal_set_m_HapticHoverCancelDuration(float_t  value) ;

constexpr void __cordl_internal_set_m_HapticHoverCancelIntensity(float_t  value) ;

constexpr void __cordl_internal_set_m_HapticHoverEnterDuration(float_t  value) ;

constexpr void __cordl_internal_set_m_HapticHoverEnterIntensity(float_t  value) ;

constexpr void __cordl_internal_set_m_HapticHoverExitDuration(float_t  value) ;

constexpr void __cordl_internal_set_m_HapticHoverExitIntensity(float_t  value) ;

constexpr void __cordl_internal_set_m_HapticImpulsePlayer(::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulsePlayer>  value) ;

constexpr void __cordl_internal_set_m_HapticSelectCancelDuration(float_t  value) ;

constexpr void __cordl_internal_set_m_HapticSelectCancelIntensity(float_t  value) ;

constexpr void __cordl_internal_set_m_HapticSelectEnterDuration(float_t  value) ;

constexpr void __cordl_internal_set_m_HapticSelectEnterIntensity(float_t  value) ;

constexpr void __cordl_internal_set_m_HapticSelectExitDuration(float_t  value) ;

constexpr void __cordl_internal_set_m_HapticSelectExitIntensity(float_t  value) ;

constexpr void __cordl_internal_set_m_HasXRController(bool  value) ;

constexpr void __cordl_internal_set_m_HideControllerOnSelect(bool  value) ;

constexpr void __cordl_internal_set_m_InputCompatibilityMode(::GlobalNamespace::XRBaseInputInteractor_InputCompatibilityMode  value) ;

constexpr void __cordl_internal_set_m_LogicalActivateState(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState*  value) ;

constexpr void __cordl_internal_set_m_LogicalSelectState(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState*  value) ;

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

constexpr void __cordl_internal_set_m_SelectActionTrigger(::GlobalNamespace::XRBaseInputInteractor_InputTriggerType  value) ;

constexpr void __cordl_internal_set_m_SelectInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value) ;

constexpr void __cordl_internal_set_m_TargetPriorityMode(::UnityEngine::XR::Interaction::Toolkit::Interactors::TargetPriorityMode  value) ;

/// @brief Method .ctor, addr 0xb465964, size 0x420, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable*>* getStaticF_s_ActivateTargets() ;

/// @brief Method get_activateInput, addr 0xb465da0, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* get_activateInput() ;

/// @brief Method get_allowActivate, addr 0xb465dec, size 0x8, virtual false, abstract: false, final false
inline bool get_allowActivate() ;

/// @brief Method get_allowHoverAudioWhileSelecting, addr 0xb4683d8, size 0x8, virtual false, abstract: false, final false
inline bool get_allowHoverAudioWhileSelecting() ;

/// @brief Method get_allowHoverHapticsWhileSelecting, addr 0xb46925c, size 0x8, virtual false, abstract: false, final false
inline bool get_allowHoverHapticsWhileSelecting() ;

/// @brief Method get_allowHoveredActivate, addr 0xb465dcc, size 0x8, virtual false, abstract: false, final false
inline bool get_allowHoveredActivate() ;

/// @brief Method get_audioClipForOnHoverCanceled, addr 0xb46832c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::AudioClip> get_audioClipForOnHoverCanceled() ;

/// @brief Method get_audioClipForOnHoverEntered, addr 0xb4680bc, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::AudioClip> get_audioClipForOnHoverEntered() ;

/// @brief Method get_audioClipForOnHoverExited, addr 0xb4681f4, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::AudioClip> get_audioClipForOnHoverExited() ;

/// @brief Method get_audioClipForOnSelectCanceled, addr 0xb467f84, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::AudioClip> get_audioClipForOnSelectCanceled() ;

/// @brief Method get_audioClipForOnSelectEntered, addr 0xb467d14, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::AudioClip> get_audioClipForOnSelectEntered() ;

/// @brief Method get_audioClipForOnSelectExited, addr 0xb467e4c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::AudioClip> get_audioClipForOnSelectExited() ;

/// [CompilerGenerated]
/// @brief Method get_buttonReaders, addr 0xb465f1c, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>* get_buttonReaders() ;

/// @brief Method get_forceDeprecatedInput, addr 0xb466948, size 0x1c, virtual false, abstract: false, final false
inline bool get_forceDeprecatedInput() ;

/// @brief Method get_hapticHoverCancelDuration, addr 0xb469178, size 0x8, virtual false, abstract: false, final false
inline float_t get_hapticHoverCancelDuration() ;

/// @brief Method get_hapticHoverCancelIntensity, addr 0xb469094, size 0x8, virtual false, abstract: false, final false
inline float_t get_hapticHoverCancelIntensity() ;

/// @brief Method get_hapticHoverEnterDuration, addr 0xb468cd0, size 0x8, virtual false, abstract: false, final false
inline float_t get_hapticHoverEnterDuration() ;

/// @brief Method get_hapticHoverEnterIntensity, addr 0xb468bec, size 0x8, virtual false, abstract: false, final false
inline float_t get_hapticHoverEnterIntensity() ;

/// @brief Method get_hapticHoverExitDuration, addr 0xb468f24, size 0x8, virtual false, abstract: false, final false
inline float_t get_hapticHoverExitDuration() ;

/// @brief Method get_hapticHoverExitIntensity, addr 0xb468e40, size 0x8, virtual false, abstract: false, final false
inline float_t get_hapticHoverExitIntensity() ;

/// @brief Method get_hapticSelectCancelDuration, addr 0xb468a7c, size 0x8, virtual false, abstract: false, final false
inline float_t get_hapticSelectCancelDuration() ;

/// @brief Method get_hapticSelectCancelIntensity, addr 0xb468998, size 0x8, virtual false, abstract: false, final false
inline float_t get_hapticSelectCancelIntensity() ;

/// @brief Method get_hapticSelectEnterDuration, addr 0xb4685d4, size 0x8, virtual false, abstract: false, final false
inline float_t get_hapticSelectEnterDuration() ;

/// @brief Method get_hapticSelectEnterIntensity, addr 0xb4684f0, size 0x8, virtual false, abstract: false, final false
inline float_t get_hapticSelectEnterIntensity() ;

/// @brief Method get_hapticSelectExitDuration, addr 0xb468828, size 0x8, virtual false, abstract: false, final false
inline float_t get_hapticSelectExitDuration() ;

/// @brief Method get_hapticSelectExitIntensity, addr 0xb468744, size 0x8, virtual false, abstract: false, final false
inline float_t get_hapticSelectExitIntensity() ;

/// @brief Method get_hideControllerOnSelect, addr 0xb467a60, size 0x8, virtual false, abstract: false, final false
inline bool get_hideControllerOnSelect() ;

/// @brief Method get_inputCompatibilityMode, addr 0xb467b0c, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::XRBaseInputInteractor_InputCompatibilityMode get_inputCompatibilityMode() ;

/// @brief Method get_isSelectActive, addr 0xb465dfc, size 0x68, virtual true, abstract: false, final false
inline bool get_isSelectActive() ;

/// @brief Method get_isUISelectActive, addr 0xb467b44, size 0x88, virtual true, abstract: false, final false
inline bool get_isUISelectActive() ;

/// @brief Method get_logicalActivateState, addr 0xb465f14, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState* get_logicalActivateState() ;

/// @brief Method get_logicalSelectState, addr 0xb465f0c, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState* get_logicalSelectState() ;

/// @brief Method get_playAudioClipOnHoverCanceled, addr 0xb4682a0, size 0x8, virtual false, abstract: false, final false
inline bool get_playAudioClipOnHoverCanceled() ;

/// @brief Method get_playAudioClipOnHoverEntered, addr 0xb468030, size 0x8, virtual false, abstract: false, final false
inline bool get_playAudioClipOnHoverEntered() ;

/// @brief Method get_playAudioClipOnHoverExited, addr 0xb468168, size 0x8, virtual false, abstract: false, final false
inline bool get_playAudioClipOnHoverExited() ;

/// @brief Method get_playAudioClipOnSelectCanceled, addr 0xb467ef8, size 0x8, virtual false, abstract: false, final false
inline bool get_playAudioClipOnSelectCanceled() ;

/// @brief Method get_playAudioClipOnSelectEntered, addr 0xb467c88, size 0x8, virtual false, abstract: false, final false
inline bool get_playAudioClipOnSelectEntered() ;

/// @brief Method get_playAudioClipOnSelectExited, addr 0xb467dc0, size 0x8, virtual false, abstract: false, final false
inline bool get_playAudioClipOnSelectExited() ;

/// @brief Method get_playHapticsOnHoverCanceled, addr 0xb469008, size 0x8, virtual false, abstract: false, final false
inline bool get_playHapticsOnHoverCanceled() ;

/// @brief Method get_playHapticsOnHoverEntered, addr 0xb468b60, size 0x8, virtual false, abstract: false, final false
inline bool get_playHapticsOnHoverEntered() ;

/// @brief Method get_playHapticsOnHoverExited, addr 0xb468db4, size 0x8, virtual false, abstract: false, final false
inline bool get_playHapticsOnHoverExited() ;

/// @brief Method get_playHapticsOnSelectCanceled, addr 0xb46890c, size 0x8, virtual false, abstract: false, final false
inline bool get_playHapticsOnSelectCanceled() ;

/// @brief Method get_playHapticsOnSelectEntered, addr 0xb468464, size 0x8, virtual false, abstract: false, final false
inline bool get_playHapticsOnSelectEntered() ;

/// @brief Method get_playHapticsOnSelectExited, addr 0xb4686b8, size 0x8, virtual false, abstract: false, final false
inline bool get_playHapticsOnSelectExited() ;

/// @brief Method get_selectActionTrigger, addr 0xb465dbc, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::XRBaseInputInteractor_InputTriggerType get_selectActionTrigger() ;

/// @brief Method get_selectInput, addr 0xb465d84, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader* get_selectInput() ;

/// @brief Method get_shouldActivate, addr 0xb465e7c, size 0x48, virtual true, abstract: false, final false
inline bool get_shouldActivate() ;

/// @brief Method get_shouldDeactivate, addr 0xb465ec4, size 0x48, virtual true, abstract: false, final false
inline bool get_shouldDeactivate() ;

/// @brief Method get_targetPriorityMode, addr 0xb465ddc, size 0x8, virtual true, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::TargetPriorityMode get_targetPriorityMode() ;

/// @brief Method get_uiScrollValue, addr 0xb467bcc, size 0xbc, virtual false, abstract: false, final false
inline ::UnityEngine::Vector2 get_uiScrollValue() ;

/// [CompilerGenerated]
/// @brief Method get_valueReaders, addr 0xb465f24, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader*>* get_valueReaders() ;

/// @brief Method get_xrController, addr 0xb467b3c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController> get_xrController() ;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRActivateInteractor"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRActivateInteractor* i___UnityEngine__XR__Interaction__Toolkit__Interactors__IXRActivateInteractor() noexcept;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor* i___UnityEngine__XR__Interaction__Toolkit__Interactors__IXRInteractor() noexcept;

static inline void setStaticF_s_ActivateTargets(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable*>*  value) ;

/// @brief Method set_activateInput, addr 0xb465da8, size 0x14, virtual false, abstract: false, final false
inline void set_activateInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value) ;

/// @brief Method set_allowActivate, addr 0xb465df4, size 0x8, virtual false, abstract: false, final false
inline void set_allowActivate(bool  value) ;

/// @brief Method set_allowHoverAudioWhileSelecting, addr 0xb4683e0, size 0x84, virtual false, abstract: false, final false
inline void set_allowHoverAudioWhileSelecting(bool  value) ;

/// @brief Method set_allowHoverHapticsWhileSelecting, addr 0xb469264, size 0x84, virtual false, abstract: false, final false
inline void set_allowHoverHapticsWhileSelecting(bool  value) ;

/// @brief Method set_allowHoveredActivate, addr 0xb465dd4, size 0x8, virtual false, abstract: false, final false
inline void set_allowHoveredActivate(bool  value) ;

/// @brief Method set_audioClipForOnHoverCanceled, addr 0xb468334, size 0xa4, virtual false, abstract: false, final false
inline void set_audioClipForOnHoverCanceled(::UnityEngine::AudioClip*  value) ;

/// @brief Method set_audioClipForOnHoverEntered, addr 0xb4680c4, size 0xa4, virtual false, abstract: false, final false
inline void set_audioClipForOnHoverEntered(::UnityEngine::AudioClip*  value) ;

/// @brief Method set_audioClipForOnHoverExited, addr 0xb4681fc, size 0xa4, virtual false, abstract: false, final false
inline void set_audioClipForOnHoverExited(::UnityEngine::AudioClip*  value) ;

/// @brief Method set_audioClipForOnSelectCanceled, addr 0xb467f8c, size 0xa4, virtual false, abstract: false, final false
inline void set_audioClipForOnSelectCanceled(::UnityEngine::AudioClip*  value) ;

/// @brief Method set_audioClipForOnSelectEntered, addr 0xb467d1c, size 0xa4, virtual false, abstract: false, final false
inline void set_audioClipForOnSelectEntered(::UnityEngine::AudioClip*  value) ;

/// @brief Method set_audioClipForOnSelectExited, addr 0xb467e54, size 0xa4, virtual false, abstract: false, final false
inline void set_audioClipForOnSelectExited(::UnityEngine::AudioClip*  value) ;

/// @brief Method set_forceDeprecatedInput, addr 0xb467b1c, size 0x20, virtual false, abstract: false, final false
inline void set_forceDeprecatedInput(bool  value) ;

/// @brief Method set_hapticHoverCancelDuration, addr 0xb469180, size 0xdc, virtual false, abstract: false, final false
inline void set_hapticHoverCancelDuration(float_t  value) ;

/// @brief Method set_hapticHoverCancelIntensity, addr 0xb46909c, size 0xdc, virtual false, abstract: false, final false
inline void set_hapticHoverCancelIntensity(float_t  value) ;

/// @brief Method set_hapticHoverEnterDuration, addr 0xb468cd8, size 0xdc, virtual false, abstract: false, final false
inline void set_hapticHoverEnterDuration(float_t  value) ;

/// @brief Method set_hapticHoverEnterIntensity, addr 0xb468bf4, size 0xdc, virtual false, abstract: false, final false
inline void set_hapticHoverEnterIntensity(float_t  value) ;

/// @brief Method set_hapticHoverExitDuration, addr 0xb468f2c, size 0xdc, virtual false, abstract: false, final false
inline void set_hapticHoverExitDuration(float_t  value) ;

/// @brief Method set_hapticHoverExitIntensity, addr 0xb468e48, size 0xdc, virtual false, abstract: false, final false
inline void set_hapticHoverExitIntensity(float_t  value) ;

/// @brief Method set_hapticSelectCancelDuration, addr 0xb468a84, size 0xdc, virtual false, abstract: false, final false
inline void set_hapticSelectCancelDuration(float_t  value) ;

/// @brief Method set_hapticSelectCancelIntensity, addr 0xb4689a0, size 0xdc, virtual false, abstract: false, final false
inline void set_hapticSelectCancelIntensity(float_t  value) ;

/// @brief Method set_hapticSelectEnterDuration, addr 0xb4685dc, size 0xdc, virtual false, abstract: false, final false
inline void set_hapticSelectEnterDuration(float_t  value) ;

/// @brief Method set_hapticSelectEnterIntensity, addr 0xb4684f8, size 0xdc, virtual false, abstract: false, final false
inline void set_hapticSelectEnterIntensity(float_t  value) ;

/// @brief Method set_hapticSelectExitDuration, addr 0xb468830, size 0xdc, virtual false, abstract: false, final false
inline void set_hapticSelectExitDuration(float_t  value) ;

/// @brief Method set_hapticSelectExitIntensity, addr 0xb46874c, size 0xdc, virtual false, abstract: false, final false
inline void set_hapticSelectExitIntensity(float_t  value) ;

/// @brief Method set_hideControllerOnSelect, addr 0xb467a68, size 0xa4, virtual false, abstract: false, final false
inline void set_hideControllerOnSelect(bool  value) ;

/// @brief Method set_inputCompatibilityMode, addr 0xb467b14, size 0x8, virtual false, abstract: false, final false
inline void set_inputCompatibilityMode(::GlobalNamespace::XRBaseInputInteractor_InputCompatibilityMode  value) ;

/// @brief Method set_playAudioClipOnHoverCanceled, addr 0xb4682a8, size 0x84, virtual false, abstract: false, final false
inline void set_playAudioClipOnHoverCanceled(bool  value) ;

/// @brief Method set_playAudioClipOnHoverEntered, addr 0xb468038, size 0x84, virtual false, abstract: false, final false
inline void set_playAudioClipOnHoverEntered(bool  value) ;

/// @brief Method set_playAudioClipOnHoverExited, addr 0xb468170, size 0x84, virtual false, abstract: false, final false
inline void set_playAudioClipOnHoverExited(bool  value) ;

/// @brief Method set_playAudioClipOnSelectCanceled, addr 0xb467f00, size 0x84, virtual false, abstract: false, final false
inline void set_playAudioClipOnSelectCanceled(bool  value) ;

/// @brief Method set_playAudioClipOnSelectEntered, addr 0xb467c90, size 0x84, virtual false, abstract: false, final false
inline void set_playAudioClipOnSelectEntered(bool  value) ;

/// @brief Method set_playAudioClipOnSelectExited, addr 0xb467dc8, size 0x84, virtual false, abstract: false, final false
inline void set_playAudioClipOnSelectExited(bool  value) ;

/// @brief Method set_playHapticsOnHoverCanceled, addr 0xb469010, size 0x84, virtual false, abstract: false, final false
inline void set_playHapticsOnHoverCanceled(bool  value) ;

/// @brief Method set_playHapticsOnHoverEntered, addr 0xb468b68, size 0x84, virtual false, abstract: false, final false
inline void set_playHapticsOnHoverEntered(bool  value) ;

/// @brief Method set_playHapticsOnHoverExited, addr 0xb468dbc, size 0x84, virtual false, abstract: false, final false
inline void set_playHapticsOnHoverExited(bool  value) ;

/// @brief Method set_playHapticsOnSelectCanceled, addr 0xb468914, size 0x84, virtual false, abstract: false, final false
inline void set_playHapticsOnSelectCanceled(bool  value) ;

/// @brief Method set_playHapticsOnSelectEntered, addr 0xb46846c, size 0x84, virtual false, abstract: false, final false
inline void set_playHapticsOnSelectEntered(bool  value) ;

/// @brief Method set_playHapticsOnSelectExited, addr 0xb4686c0, size 0x84, virtual false, abstract: false, final false
inline void set_playHapticsOnSelectExited(bool  value) ;

/// @brief Method set_selectActionTrigger, addr 0xb465dc4, size 0x8, virtual false, abstract: false, final false
inline void set_selectActionTrigger(::GlobalNamespace::XRBaseInputInteractor_InputTriggerType  value) ;

/// @brief Method set_selectInput, addr 0xb465d8c, size 0x14, virtual false, abstract: false, final false
inline void set_selectInput(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  value) ;

/// @brief Method set_targetPriorityMode, addr 0xb465de4, size 0x8, virtual true, abstract: false, final false
inline void set_targetPriorityMode(::UnityEngine::XR::Interaction::Toolkit::Interactors::TargetPriorityMode  value) ;

/// @brief Method set_xrController, addr 0xb466008, size 0xa4, virtual false, abstract: false, final false
inline void set_xrController(::UnityEngine::XR::Interaction::Toolkit::XRBaseController*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRBaseInputInteractor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRBaseInputInteractor", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRBaseInputInteractor(XRBaseInputInteractor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRBaseInputInteractor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRBaseInputInteractor(XRBaseInputInteractor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11449};

/// [SerializeField]
/// @brief Field m_SelectInput, offset: 0x140, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  ___m_SelectInput;

/// [SerializeField]
/// @brief Field m_ActivateInput, offset: 0x148, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  ___m_ActivateInput;

/// [SerializeField]
/// @brief Field m_SelectActionTrigger, offset: 0x150, size: 0x4, def value: None
 ::GlobalNamespace::XRBaseInputInteractor_InputTriggerType  ___m_SelectActionTrigger;

/// [SerializeField]
/// @brief Field m_AllowHoveredActivate, offset: 0x154, size: 0x1, def value: None
 bool  ___m_AllowHoveredActivate;

/// [SerializeField]
/// @brief Field m_TargetPriorityMode, offset: 0x158, size: 0x4, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Interactors::TargetPriorityMode  ___m_TargetPriorityMode;

/// @brief Field m_AllowActivate, offset: 0x15c, size: 0x1, def value: None
 bool  ___m_AllowActivate;

/// [CompilerGenerated]
/// @brief Field <buttonReaders>k__BackingField, offset: 0x160, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>*  ____buttonReaders_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <valueReaders>k__BackingField, offset: 0x168, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader*>*  ____valueReaders_k__BackingField;

/// @brief Field m_ActivateEventArgs, offset: 0x170, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs*>*  ___m_ActivateEventArgs;

/// @brief Field m_DeactivateEventArgs, offset: 0x178, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs*>*  ___m_DeactivateEventArgs;

/// @brief Field m_LogicalSelectState, offset: 0x180, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState*  ___m_LogicalSelectState;

/// @brief Field m_LogicalActivateState, offset: 0x188, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState*  ___m_LogicalActivateState;

/// @brief Field m_AudioFeedback, offset: 0x190, size: 0x8, def value: None
 ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleAudioFeedback>  ___m_AudioFeedback;

/// @brief Field m_HapticFeedback, offset: 0x198, size: 0x8, def value: None
 ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Feedback::SimpleHapticFeedback>  ___m_HapticFeedback;

/// @brief Field m_AudioSource, offset: 0x1a0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___m_AudioSource;

/// @brief Field m_HapticImpulsePlayer, offset: 0x1a8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Inputs::Haptics::HapticImpulsePlayer>  ___m_HapticImpulsePlayer;

/// [SerializeField]
/// @brief Field m_HideControllerOnSelect, offset: 0x1b0, size: 0x1, def value: None
 bool  ___m_HideControllerOnSelect;

/// [SerializeField]
/// [Obsolete("m_InputCompatibilityMode introduced in version 3.0.0 is marked for removal. This is only used for backwards compatibility and will be eventually removed in a future version.")]
/// @brief Field m_InputCompatibilityMode, offset: 0x1b4, size: 0x4, def value: None
 ::GlobalNamespace::XRBaseInputInteractor_InputCompatibilityMode  ___m_InputCompatibilityMode;

/// [Obsolete("m_Controller has been deprecated in version 3.0.0.")]
/// @brief Field m_Controller, offset: 0x1b8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRBaseController>  ___m_Controller;

/// @brief Field m_HasXRController, offset: 0x1c0, size: 0x1, def value: None
 bool  ___m_HasXRController;

/// [SerializeField]
/// [FormerlySerializedAs("m_PlayAudioClipOnSelectEnter")]
/// @brief Field m_PlayAudioClipOnSelectEntered, offset: 0x1c1, size: 0x1, def value: None
 bool  ___m_PlayAudioClipOnSelectEntered;

/// [SerializeField]
/// [FormerlySerializedAs("m_AudioClipForOnSelectEnter")]
/// @brief Field m_AudioClipForOnSelectEntered, offset: 0x1c8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___m_AudioClipForOnSelectEntered;

/// [SerializeField]
/// [FormerlySerializedAs("m_PlayAudioClipOnSelectExit")]
/// @brief Field m_PlayAudioClipOnSelectExited, offset: 0x1d0, size: 0x1, def value: None
 bool  ___m_PlayAudioClipOnSelectExited;

/// [SerializeField]
/// [FormerlySerializedAs("m_AudioClipForOnSelectExit")]
/// @brief Field m_AudioClipForOnSelectExited, offset: 0x1d8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___m_AudioClipForOnSelectExited;

/// [SerializeField]
/// @brief Field m_PlayAudioClipOnSelectCanceled, offset: 0x1e0, size: 0x1, def value: None
 bool  ___m_PlayAudioClipOnSelectCanceled;

/// [SerializeField]
/// @brief Field m_AudioClipForOnSelectCanceled, offset: 0x1e8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___m_AudioClipForOnSelectCanceled;

/// [SerializeField]
/// [FormerlySerializedAs("m_PlayAudioClipOnHoverEnter")]
/// @brief Field m_PlayAudioClipOnHoverEntered, offset: 0x1f0, size: 0x1, def value: None
 bool  ___m_PlayAudioClipOnHoverEntered;

/// [SerializeField]
/// [FormerlySerializedAs("m_AudioClipForOnHoverEnter")]
/// @brief Field m_AudioClipForOnHoverEntered, offset: 0x1f8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___m_AudioClipForOnHoverEntered;

/// [SerializeField]
/// [FormerlySerializedAs("m_PlayAudioClipOnHoverExit")]
/// @brief Field m_PlayAudioClipOnHoverExited, offset: 0x200, size: 0x1, def value: None
 bool  ___m_PlayAudioClipOnHoverExited;

/// [SerializeField]
/// [FormerlySerializedAs("m_AudioClipForOnHoverExit")]
/// @brief Field m_AudioClipForOnHoverExited, offset: 0x208, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___m_AudioClipForOnHoverExited;

/// [SerializeField]
/// @brief Field m_PlayAudioClipOnHoverCanceled, offset: 0x210, size: 0x1, def value: None
 bool  ___m_PlayAudioClipOnHoverCanceled;

/// [SerializeField]
/// @brief Field m_AudioClipForOnHoverCanceled, offset: 0x218, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___m_AudioClipForOnHoverCanceled;

/// [SerializeField]
/// @brief Field m_AllowHoverAudioWhileSelecting, offset: 0x220, size: 0x1, def value: None
 bool  ___m_AllowHoverAudioWhileSelecting;

/// [SerializeField]
/// [FormerlySerializedAs("m_PlayHapticsOnSelectEnter")]
/// @brief Field m_PlayHapticsOnSelectEntered, offset: 0x221, size: 0x1, def value: None
 bool  ___m_PlayHapticsOnSelectEntered;

/// [SerializeField]
/// [Range(0, 1)]
/// @brief Field m_HapticSelectEnterIntensity, offset: 0x224, size: 0x4, def value: None
 float_t  ___m_HapticSelectEnterIntensity;

/// [SerializeField]
/// @brief Field m_HapticSelectEnterDuration, offset: 0x228, size: 0x4, def value: None
 float_t  ___m_HapticSelectEnterDuration;

/// [SerializeField]
/// [FormerlySerializedAs("m_PlayHapticsOnSelectExit")]
/// @brief Field m_PlayHapticsOnSelectExited, offset: 0x22c, size: 0x1, def value: None
 bool  ___m_PlayHapticsOnSelectExited;

/// [SerializeField]
/// [Range(0, 1)]
/// @brief Field m_HapticSelectExitIntensity, offset: 0x230, size: 0x4, def value: None
 float_t  ___m_HapticSelectExitIntensity;

/// [SerializeField]
/// @brief Field m_HapticSelectExitDuration, offset: 0x234, size: 0x4, def value: None
 float_t  ___m_HapticSelectExitDuration;

/// [SerializeField]
/// @brief Field m_PlayHapticsOnSelectCanceled, offset: 0x238, size: 0x1, def value: None
 bool  ___m_PlayHapticsOnSelectCanceled;

/// [SerializeField]
/// [Range(0, 1)]
/// @brief Field m_HapticSelectCancelIntensity, offset: 0x23c, size: 0x4, def value: None
 float_t  ___m_HapticSelectCancelIntensity;

/// [SerializeField]
/// @brief Field m_HapticSelectCancelDuration, offset: 0x240, size: 0x4, def value: None
 float_t  ___m_HapticSelectCancelDuration;

/// [SerializeField]
/// [FormerlySerializedAs("m_PlayHapticsOnHoverEnter")]
/// @brief Field m_PlayHapticsOnHoverEntered, offset: 0x244, size: 0x1, def value: None
 bool  ___m_PlayHapticsOnHoverEntered;

/// [SerializeField]
/// [Range(0, 1)]
/// @brief Field m_HapticHoverEnterIntensity, offset: 0x248, size: 0x4, def value: None
 float_t  ___m_HapticHoverEnterIntensity;

/// [SerializeField]
/// @brief Field m_HapticHoverEnterDuration, offset: 0x24c, size: 0x4, def value: None
 float_t  ___m_HapticHoverEnterDuration;

/// [SerializeField]
/// [FormerlySerializedAs("m_PlayHapticsOnHoverExit")]
/// @brief Field m_PlayHapticsOnHoverExited, offset: 0x250, size: 0x1, def value: None
 bool  ___m_PlayHapticsOnHoverExited;

/// [SerializeField]
/// [Range(0, 1)]
/// @brief Field m_HapticHoverExitIntensity, offset: 0x254, size: 0x4, def value: None
 float_t  ___m_HapticHoverExitIntensity;

/// [SerializeField]
/// @brief Field m_HapticHoverExitDuration, offset: 0x258, size: 0x4, def value: None
 float_t  ___m_HapticHoverExitDuration;

/// [SerializeField]
/// @brief Field m_PlayHapticsOnHoverCanceled, offset: 0x25c, size: 0x1, def value: None
 bool  ___m_PlayHapticsOnHoverCanceled;

/// [SerializeField]
/// [Range(0, 1)]
/// @brief Field m_HapticHoverCancelIntensity, offset: 0x260, size: 0x4, def value: None
 float_t  ___m_HapticHoverCancelIntensity;

/// [SerializeField]
/// @brief Field m_HapticHoverCancelDuration, offset: 0x264, size: 0x4, def value: None
 float_t  ___m_HapticHoverCancelDuration;

/// [SerializeField]
/// @brief Field m_AllowHoverHapticsWhileSelecting, offset: 0x268, size: 0x1, def value: None
 bool  ___m_AllowHoverHapticsWhileSelecting;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor, ___m_SelectInput) == 0x140, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor, ___m_ActivateInput) == 0x148, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor, ___m_SelectActionTrigger) == 0x150, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor, ___m_AllowHoveredActivate) == 0x154, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor, ___m_TargetPriorityMode) == 0x158, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor, ___m_AllowActivate) == 0x15c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor, ____buttonReaders_k__BackingField) == 0x160, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor, ____valueReaders_k__BackingField) == 0x168, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor, ___m_ActivateEventArgs) == 0x170, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor, ___m_DeactivateEventArgs) == 0x178, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor, ___m_LogicalSelectState) == 0x180, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor, ___m_LogicalActivateState) == 0x188, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor, ___m_AudioFeedback) == 0x190, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor, ___m_HapticFeedback) == 0x198, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor, ___m_AudioSource) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor, ___m_HapticImpulsePlayer) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor, ___m_HideControllerOnSelect) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor, ___m_InputCompatibilityMode) == 0x1b4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor, ___m_Controller) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor, ___m_HasXRController) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor, ___m_PlayAudioClipOnSelectEntered) == 0x1c1, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor, ___m_AudioClipForOnSelectEntered) == 0x1c8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor, ___m_PlayAudioClipOnSelectExited) == 0x1d0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor, ___m_AudioClipForOnSelectExited) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor, ___m_PlayAudioClipOnSelectCanceled) == 0x1e0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor, ___m_AudioClipForOnSelectCanceled) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor, ___m_PlayAudioClipOnHoverEntered) == 0x1f0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor, ___m_AudioClipForOnHoverEntered) == 0x1f8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor, ___m_PlayAudioClipOnHoverExited) == 0x200, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor, ___m_AudioClipForOnHoverExited) == 0x208, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor, ___m_PlayAudioClipOnHoverCanceled) == 0x210, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor, ___m_AudioClipForOnHoverCanceled) == 0x218, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor, ___m_AllowHoverAudioWhileSelecting) == 0x220, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor, ___m_PlayHapticsOnSelectEntered) == 0x221, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor, ___m_HapticSelectEnterIntensity) == 0x224, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor, ___m_HapticSelectEnterDuration) == 0x228, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor, ___m_PlayHapticsOnSelectExited) == 0x22c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor, ___m_HapticSelectExitIntensity) == 0x230, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor, ___m_HapticSelectExitDuration) == 0x234, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor, ___m_PlayHapticsOnSelectCanceled) == 0x238, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor, ___m_HapticSelectCancelIntensity) == 0x23c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor, ___m_HapticSelectCancelDuration) == 0x240, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor, ___m_PlayHapticsOnHoverEntered) == 0x244, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor, ___m_HapticHoverEnterIntensity) == 0x248, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor, ___m_HapticHoverEnterDuration) == 0x24c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor, ___m_PlayHapticsOnHoverExited) == 0x250, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor, ___m_HapticHoverExitIntensity) == 0x254, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor, ___m_HapticHoverExitDuration) == 0x258, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor, ___m_PlayHapticsOnHoverCanceled) == 0x25c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor, ___m_HapticHoverCancelIntensity) == 0x260, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor, ___m_HapticHoverCancelDuration) == 0x264, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor, ___m_AllowHoverHapticsWhileSelecting) == 0x268, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor) == 0x270, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Interactors
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInputInteractor/<>c
class CORDL_TYPE XRBaseInputInteractor___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor___c*  __9;

/// @brief Field <>9__229_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__229_0, put=setStaticF___9__229_0)) ::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs*>*  __9__229_0;

/// @brief Field <>9__229_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__229_1, put=setStaticF___9__229_1)) ::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs*>*  __9__229_1;

/// @brief Field <>9__52_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__52_0, put=setStaticF___9__52_0)) ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>*  __9__52_0;

/// @brief Field <>9__52_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__52_1, put=setStaticF___9__52_1)) ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader*>*  __9__52_1;

/// @brief Field <>9__53_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__53_0, put=setStaticF___9__53_0)) ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>*  __9__53_0;

/// @brief Field <>9__53_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__53_1, put=setStaticF___9__53_1)) ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader*>*  __9__53_1;

static inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor___c* New_ctor() ;

/// @brief Method <OnDisable>b__53_0, addr 0xb469e58, size 0x14, virtual false, abstract: false, final false
inline void _OnDisable_b__53_0(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  reader) ;

/// @brief Method <OnDisable>b__53_1, addr 0xb469e6c, size 0x14, virtual false, abstract: false, final false
inline void _OnDisable_b__53_1(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader*  reader) ;

/// @brief Method <OnEnable>b__52_0, addr 0xb469e30, size 0x14, virtual false, abstract: false, final false
inline void _OnEnable_b__52_0(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*  reader) ;

/// @brief Method <OnEnable>b__52_1, addr 0xb469e44, size 0x14, virtual false, abstract: false, final false
inline void _OnEnable_b__52_1(::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader*  reader) ;

/// @brief Method <.ctor>b__229_0, addr 0xb469e80, size 0x54, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs* __ctor_b__229_0() ;

/// @brief Method <.ctor>b__229_1, addr 0xb469ed4, size 0x54, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs* __ctor_b__229_1() ;

/// @brief Method .ctor, addr 0xb469e28, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor___c* getStaticF___9() ;

static inline ::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs*>* getStaticF___9__229_0() ;

static inline ::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs*>* getStaticF___9__229_1() ;

static inline ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>* getStaticF___9__52_0() ;

static inline ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader*>* getStaticF___9__52_1() ;

static inline ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>* getStaticF___9__53_0() ;

static inline ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader*>* getStaticF___9__53_1() ;

static inline void setStaticF___9(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor___c*  value) ;

static inline void setStaticF___9__229_0(::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs*>*  value) ;

static inline void setStaticF___9__229_1(::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs*>*  value) ;

static inline void setStaticF___9__52_0(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>*  value) ;

static inline void setStaticF___9__52_1(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader*>*  value) ;

static inline void setStaticF___9__53_0(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputButtonReader*>*  value) ;

static inline void setStaticF___9__53_1(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::Inputs::Readers::XRInputValueReader*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRBaseInputInteractor___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRBaseInputInteractor___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRBaseInputInteractor___c(XRBaseInputInteractor___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRBaseInputInteractor___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRBaseInputInteractor___c(XRBaseInputInteractor___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11448};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor___c) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Interactors
// Dependencies System.Object, UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInputInteractor::InputTriggerType
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInputInteractor/LogicalInputState
class CORDL_TYPE XRBaseInputInteractor_LogicalInputState : public ::System::Object {
public:
// Declarations
/// @brief Field <active>k__BackingField, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get__active_k__BackingField, put=__cordl_internal_set__active_k__BackingField)) bool  _active_k__BackingField;

/// @brief Field <isPerformed>k__BackingField, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get__isPerformed_k__BackingField, put=__cordl_internal_set__isPerformed_k__BackingField)) bool  _isPerformed_k__BackingField;

/// @brief Field <wasCompletedThisFrame>k__BackingField, offset 0x1a, size 0x1 
 __declspec(property(get=__cordl_internal_get__wasCompletedThisFrame_k__BackingField, put=__cordl_internal_set__wasCompletedThisFrame_k__BackingField)) bool  _wasCompletedThisFrame_k__BackingField;

/// @brief Field <wasPerformedThisFrame>k__BackingField, offset 0x19, size 0x1 
 __declspec(property(get=__cordl_internal_get__wasPerformedThisFrame_k__BackingField, put=__cordl_internal_set__wasPerformedThisFrame_k__BackingField)) bool  _wasPerformedThisFrame_k__BackingField;

 __declspec(property(get=get_active, put=set_active)) bool  active;

 __declspec(property(get=get_isPerformed, put=set_isPerformed)) bool  isPerformed;

/// @brief Field m_HasSelection, offset 0x1b, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_HasSelection, put=__cordl_internal_set_m_HasSelection)) bool  m_HasSelection;

/// @brief Field m_Mode, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Mode, put=__cordl_internal_set_m_Mode)) ::GlobalNamespace::XRBaseInputInteractor_InputTriggerType  m_Mode;

/// @brief Field m_TimeAtCompleted, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_TimeAtCompleted, put=__cordl_internal_set_m_TimeAtCompleted)) float_t  m_TimeAtCompleted;

/// @brief Field m_TimeAtPerformed, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_TimeAtPerformed, put=__cordl_internal_set_m_TimeAtPerformed)) float_t  m_TimeAtPerformed;

/// @brief Field m_ToggleActive, offset 0x24, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_ToggleActive, put=__cordl_internal_set_m_ToggleActive)) bool  m_ToggleActive;

/// @brief Field m_ToggleDeactivatedThisFrame, offset 0x25, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_ToggleDeactivatedThisFrame, put=__cordl_internal_set_m_ToggleDeactivatedThisFrame)) bool  m_ToggleDeactivatedThisFrame;

/// @brief Field m_WaitingForDeactivate, offset 0x26, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_WaitingForDeactivate, put=__cordl_internal_set_m_WaitingForDeactivate)) bool  m_WaitingForDeactivate;

 __declspec(property(get=get_mode, put=set_mode)) ::GlobalNamespace::XRBaseInputInteractor_InputTriggerType  mode;

 __declspec(property(get=get_wasCompletedThisFrame, put=set_wasCompletedThisFrame)) bool  wasCompletedThisFrame;

 __declspec(property(get=get_wasPerformedThisFrame, put=set_wasPerformedThisFrame)) bool  wasPerformedThisFrame;

/// @brief [Obsolete("wasUnperformedThisFrame has been deprecated in version 3.0.0-pre.2. It has been renamed to wasCompletedThisFrame. (UnityUpgradable) -> wasCompletedThisFrame")]
 __declspec(property(get=get_wasUnperformedThisFrame)) bool  wasUnperformedThisFrame;

static inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState* New_ctor() ;

/// @brief Method Refresh, addr 0xb469c98, size 0x94, virtual false, abstract: false, final false
inline void Refresh() ;

/// @brief Method UpdateHasSelection, addr 0xb467690, size 0x24, virtual false, abstract: false, final false
inline void UpdateHasSelection(bool  hasSelection) ;

/// @brief Method UpdateInput, addr 0xb466964, size 0x4c, virtual false, abstract: false, final false
inline void UpdateInput(bool  performed, bool  performedThisFrame, bool  completedThisFrame, bool  hasSelection) ;

/// @brief Method UpdateInput, addr 0xb469d5c, size 0x5c, virtual false, abstract: false, final false
inline void UpdateInput(bool  performed, bool  performedThisFrame, bool  completedThisFrame, bool  hasSelection, float_t  realtime) ;

constexpr bool const& __cordl_internal_get__active_k__BackingField() const;

constexpr bool& __cordl_internal_get__active_k__BackingField() ;

constexpr bool const& __cordl_internal_get__isPerformed_k__BackingField() const;

constexpr bool& __cordl_internal_get__isPerformed_k__BackingField() ;

constexpr bool const& __cordl_internal_get__wasCompletedThisFrame_k__BackingField() const;

constexpr bool& __cordl_internal_get__wasCompletedThisFrame_k__BackingField() ;

constexpr bool const& __cordl_internal_get__wasPerformedThisFrame_k__BackingField() const;

constexpr bool& __cordl_internal_get__wasPerformedThisFrame_k__BackingField() ;

constexpr bool const& __cordl_internal_get_m_HasSelection() const;

constexpr bool& __cordl_internal_get_m_HasSelection() ;

constexpr ::GlobalNamespace::XRBaseInputInteractor_InputTriggerType const& __cordl_internal_get_m_Mode() const;

constexpr ::GlobalNamespace::XRBaseInputInteractor_InputTriggerType& __cordl_internal_get_m_Mode() ;

constexpr float_t const& __cordl_internal_get_m_TimeAtCompleted() const;

constexpr float_t& __cordl_internal_get_m_TimeAtCompleted() ;

constexpr float_t const& __cordl_internal_get_m_TimeAtPerformed() const;

constexpr float_t& __cordl_internal_get_m_TimeAtPerformed() ;

constexpr bool const& __cordl_internal_get_m_ToggleActive() const;

constexpr bool& __cordl_internal_get_m_ToggleActive() ;

constexpr bool const& __cordl_internal_get_m_ToggleDeactivatedThisFrame() const;

constexpr bool& __cordl_internal_get_m_ToggleDeactivatedThisFrame() ;

constexpr bool const& __cordl_internal_get_m_WaitingForDeactivate() const;

constexpr bool& __cordl_internal_get_m_WaitingForDeactivate() ;

constexpr void __cordl_internal_set__active_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__isPerformed_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__wasCompletedThisFrame_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__wasPerformedThisFrame_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_m_HasSelection(bool  value) ;

constexpr void __cordl_internal_set_m_Mode(::GlobalNamespace::XRBaseInputInteractor_InputTriggerType  value) ;

constexpr void __cordl_internal_set_m_TimeAtCompleted(float_t  value) ;

constexpr void __cordl_internal_set_m_TimeAtPerformed(float_t  value) ;

constexpr void __cordl_internal_set_m_ToggleActive(bool  value) ;

constexpr void __cordl_internal_set_m_ToggleDeactivatedThisFrame(bool  value) ;

constexpr void __cordl_internal_set_m_WaitingForDeactivate(bool  value) ;

/// @brief Method .ctor, addr 0xb469720, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_active, addr 0xb469c80, size 0x8, virtual false, abstract: false, final false
inline bool get_active() ;

/// [CompilerGenerated]
/// @brief Method get_isPerformed, addr 0xb469d2c, size 0x8, virtual false, abstract: false, final false
inline bool get_isPerformed() ;

/// @brief Method get_mode, addr 0xb469c90, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::XRBaseInputInteractor_InputTriggerType get_mode() ;

/// [CompilerGenerated]
/// @brief Method get_wasCompletedThisFrame, addr 0xb469d4c, size 0x8, virtual false, abstract: false, final false
inline bool get_wasCompletedThisFrame() ;

/// [CompilerGenerated]
/// @brief Method get_wasPerformedThisFrame, addr 0xb469d3c, size 0x8, virtual false, abstract: false, final false
inline bool get_wasPerformedThisFrame() ;

/// @brief Method get_wasUnperformedThisFrame, addr 0xb469db8, size 0x8, virtual false, abstract: false, final false
inline bool get_wasUnperformedThisFrame() ;

/// [CompilerGenerated]
/// @brief Method set_active, addr 0xb469c88, size 0x8, virtual false, abstract: false, final false
inline void set_active(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_isPerformed, addr 0xb469d34, size 0x8, virtual false, abstract: false, final false
inline void set_isPerformed(bool  value) ;

/// @brief Method set_mode, addr 0xb465e64, size 0x18, virtual false, abstract: false, final false
inline void set_mode(::GlobalNamespace::XRBaseInputInteractor_InputTriggerType  value) ;

/// [CompilerGenerated]
/// @brief Method set_wasCompletedThisFrame, addr 0xb469d54, size 0x8, virtual false, abstract: false, final false
inline void set_wasCompletedThisFrame(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_wasPerformedThisFrame, addr 0xb469d44, size 0x8, virtual false, abstract: false, final false
inline void set_wasPerformedThisFrame(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRBaseInputInteractor_LogicalInputState() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRBaseInputInteractor_LogicalInputState", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRBaseInputInteractor_LogicalInputState(XRBaseInputInteractor_LogicalInputState && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRBaseInputInteractor_LogicalInputState", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRBaseInputInteractor_LogicalInputState(XRBaseInputInteractor_LogicalInputState const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11446};

/// [CompilerGenerated]
/// @brief Field <active>k__BackingField, offset: 0x10, size: 0x1, def value: None
 bool  ____active_k__BackingField;

/// @brief Field m_Mode, offset: 0x14, size: 0x4, def value: None
 ::GlobalNamespace::XRBaseInputInteractor_InputTriggerType  ___m_Mode;

/// [CompilerGenerated]
/// @brief Field <isPerformed>k__BackingField, offset: 0x18, size: 0x1, def value: None
 bool  ____isPerformed_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <wasPerformedThisFrame>k__BackingField, offset: 0x19, size: 0x1, def value: None
 bool  ____wasPerformedThisFrame_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <wasCompletedThisFrame>k__BackingField, offset: 0x1a, size: 0x1, def value: None
 bool  ____wasCompletedThisFrame_k__BackingField;

/// @brief Field m_HasSelection, offset: 0x1b, size: 0x1, def value: None
 bool  ___m_HasSelection;

/// @brief Field m_TimeAtPerformed, offset: 0x1c, size: 0x4, def value: None
 float_t  ___m_TimeAtPerformed;

/// @brief Field m_TimeAtCompleted, offset: 0x20, size: 0x4, def value: None
 float_t  ___m_TimeAtCompleted;

/// @brief Field m_ToggleActive, offset: 0x24, size: 0x1, def value: None
 bool  ___m_ToggleActive;

/// @brief Field m_ToggleDeactivatedThisFrame, offset: 0x25, size: 0x1, def value: None
 bool  ___m_ToggleDeactivatedThisFrame;

/// @brief Field m_WaitingForDeactivate, offset: 0x26, size: 0x1, def value: None
 bool  ___m_WaitingForDeactivate;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState, ____active_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState, ___m_Mode) == 0x14, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState, ____isPerformed_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState, ____wasPerformedThisFrame_k__BackingField) == 0x19, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState, ____wasCompletedThisFrame_k__BackingField) == 0x1a, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState, ___m_HasSelection) == 0x1b, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState, ___m_TimeAtPerformed) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState, ___m_TimeAtCompleted) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState, ___m_ToggleActive) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState, ___m_ToggleDeactivatedThisFrame) == 0x25, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState, ___m_WaitingForDeactivate) == 0x26, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor_LogicalInputState) == 0x28, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Interactors
