#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Interactables/XRBaseInteractable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__InteractableFocusMode_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__InteractableSelectMode_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__XRBaseInteractable_DistanceCalculationMode_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__InteractionLayerMask_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(XRBaseInteractable)
namespace GlobalNamespace {
struct XRBaseInteractable_DistanceCalculationMode;
}
namespace GlobalNamespace {
struct XRBaseInteractable_MovementType;
}
namespace GlobalNamespace {
struct XRInteractionUpdateOrder_UpdatePhase;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
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
template<typename T1,typename T2,typename TResult>
class Func_3;
}
namespace System {
template<typename T>
class Predicate_1;
}
namespace Unity::XR::CoreUtils::Bindings::Variables {
template<typename T>
class BindableVariable_1;
}
namespace Unity::XR::CoreUtils::Bindings::Variables {
template<typename T>
class IReadOnlyBindableVariable_1;
}
namespace Unity::XR::CoreUtils::Collections {
template<typename T>
class HashSetList_1;
}
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
template<typename T>
class IXRFilterList_1;
}
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
class IXRHoverFilter;
}
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
class IXRInteractionStrengthFilter;
}
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
class IXRSelectFilter;
}
namespace UnityEngine::XR::Interaction::Toolkit::Gaze {
class IXROverridesGazeAutoSelect;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
struct DistanceInfo;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
class IXRActivateInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
class IXRFocusInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
class IXRHoverInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
class IXRInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
class IXRInteractionStrengthInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
class IXRSelectInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
struct InteractableFocusMode;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
struct InteractableSelectMode;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
class XRBaseInteractable___c;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class IXRHoverInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class IXRInteractionGroup;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class IXRInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class IXRSelectInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class XRBaseInputInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class XRBaseInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
template<typename T>
class ExposedRegistrationList_1;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class ActivateEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class ActivateEvent;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class DeactivateEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class DeactivateEvent;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class FocusEnterEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class FocusEnterEvent;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class FocusExitEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class FocusExitEvent;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class HoverEnterEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class HoverEnterEvent;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class HoverExitEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class HoverExitEvent;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class InteractableRegisteredEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class InteractableUnregisteredEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
struct InteractionLayerMask;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class SelectEnterEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class SelectEnterEvent;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class SelectExitEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class SelectExitEvent;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class XRInteractableEvent;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class XRInteractionManager;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
struct LayerMask;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct Pose;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
class XRBaseInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
class XRBaseInteractable___c;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable___c*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*, "UnityEngine.XR.Interaction.Toolkit.Interactables", "XRBaseInteractable");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable___c*, "UnityEngine.XR.Interaction.Toolkit.Interactables", "XRBaseInteractable/<>c");
// [MovedFrom("UnityEngine.XR.Interaction.Toolkit")]
// [SelectionBase]
// [DefaultExecutionOrder(-98)]
// Dependencies Unity.Profiling.ProfilerMarker, UnityEngine.MonoBehaviour, UnityEngine.XR.Interaction.Toolkit.Interactables.InteractableFocusMode, UnityEngine.XR.Interaction.Toolkit.Interactables.InteractableSelectMode, UnityEngine.XR.Interaction.Toolkit.Interactables.XRBaseInteractable::DistanceCalculationMode, UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Interactables.XRBaseInteractable
class CORDL_TYPE XRBaseInteractable : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using DistanceCalculationMode = ::GlobalNamespace::XRBaseInteractable_DistanceCalculationMode;

using MovementType = ::GlobalNamespace::XRBaseInteractable_MovementType;

using __c = ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable___c;

/// @brief Field <firstInteractionGroupFocusing>k__BackingField, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get__firstInteractionGroupFocusing_k__BackingField, put=__cordl_internal_set__firstInteractionGroupFocusing_k__BackingField)) ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*  _firstInteractionGroupFocusing_k__BackingField;

/// @brief Field <firstInteractorSelecting>k__BackingField, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get__firstInteractorSelecting_k__BackingField, put=__cordl_internal_set__firstInteractorSelecting_k__BackingField)) ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*  _firstInteractorSelecting_k__BackingField;

/// @brief Field <getDistanceOverride>k__BackingField, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__getDistanceOverride_k__BackingField, put=__cordl_internal_set__getDistanceOverride_k__BackingField)) ::System::Func_3<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*,::UnityEngine::Vector3,::UnityEngine::XR::Interaction::Toolkit::Interactables::DistanceInfo>*  _getDistanceOverride_k__BackingField;

/// @brief Field <isFocused>k__BackingField, offset 0x128, size 0x1 
 __declspec(property(get=__cordl_internal_get__isFocused_k__BackingField, put=__cordl_internal_set__isFocused_k__BackingField)) bool  _isFocused_k__BackingField;

/// @brief Field <isHovered>k__BackingField, offset 0xf8, size 0x1 
 __declspec(property(get=__cordl_internal_get__isHovered_k__BackingField, put=__cordl_internal_set__isHovered_k__BackingField)) bool  _isHovered_k__BackingField;

/// @brief Field <isSelected>k__BackingField, offset 0x110, size 0x1 
 __declspec(property(get=__cordl_internal_get__isSelected_k__BackingField, put=__cordl_internal_set__isSelected_k__BackingField)) bool  _isSelected_k__BackingField;

 __declspec(property(get=get_activated, put=set_activated)) ::UnityEngine::XR::Interaction::Toolkit::ActivateEvent*  activated;

 __declspec(property(get=get_allowGazeAssistance, put=set_allowGazeAssistance)) bool  allowGazeAssistance;

 __declspec(property(get=get_allowGazeInteraction, put=set_allowGazeInteraction)) bool  allowGazeInteraction;

 __declspec(property(get=get_allowGazeSelect, put=set_allowGazeSelect)) bool  allowGazeSelect;

 __declspec(property(get=get_canFocus)) bool  canFocus;

 __declspec(property(get=get_colliders)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  colliders;

 __declspec(property(get=get_customReticle, put=set_customReticle)) ::UnityW<::UnityEngine::GameObject>  customReticle;

 __declspec(property(get=get_deactivated, put=set_deactivated)) ::UnityEngine::XR::Interaction::Toolkit::DeactivateEvent*  deactivated;

 __declspec(property(get=get_distanceCalculationMode, put=set_distanceCalculationMode)) ::GlobalNamespace::XRBaseInteractable_DistanceCalculationMode  distanceCalculationMode;

 __declspec(property(get=get_firstFocusEntered, put=set_firstFocusEntered)) ::UnityEngine::XR::Interaction::Toolkit::FocusEnterEvent*  firstFocusEntered;

 __declspec(property(get=get_firstHoverEntered, put=set_firstHoverEntered)) ::UnityEngine::XR::Interaction::Toolkit::HoverEnterEvent*  firstHoverEntered;

 __declspec(property(get=get_firstInteractionGroupFocusing, put=set_firstInteractionGroupFocusing)) ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*  firstInteractionGroupFocusing;

 __declspec(property(get=get_firstInteractorSelecting, put=set_firstInteractorSelecting)) ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*  firstInteractorSelecting;

 __declspec(property(get=get_firstSelectEntered, put=set_firstSelectEntered)) ::UnityEngine::XR::Interaction::Toolkit::SelectEnterEvent*  firstSelectEntered;

 __declspec(property(get=get_focusEntered, put=set_focusEntered)) ::UnityEngine::XR::Interaction::Toolkit::FocusEnterEvent*  focusEntered;

 __declspec(property(get=get_focusExited, put=set_focusExited)) ::UnityEngine::XR::Interaction::Toolkit::FocusExitEvent*  focusExited;

 __declspec(property(get=get_focusMode, put=set_focusMode)) ::UnityEngine::XR::Interaction::Toolkit::Interactables::InteractableFocusMode  focusMode;

 __declspec(property(get=get_gazeTimeToSelect, put=set_gazeTimeToSelect)) float_t  gazeTimeToSelect;

 __declspec(property(get=get_getDistanceOverride, put=set_getDistanceOverride)) ::System::Func_3<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*,::UnityEngine::Vector3,::UnityEngine::XR::Interaction::Toolkit::Interactables::DistanceInfo>*  getDistanceOverride;

 __declspec(property(get=get_hoverEntered, put=set_hoverEntered)) ::UnityEngine::XR::Interaction::Toolkit::HoverEnterEvent*  hoverEntered;

 __declspec(property(get=get_hoverExited, put=set_hoverExited)) ::UnityEngine::XR::Interaction::Toolkit::HoverExitEvent*  hoverExited;

 __declspec(property(get=get_hoverFilters)) ::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRFilterList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRHoverFilter*>*  hoverFilters;

/// @brief [Obsolete("hoveringInteractors has been deprecated. Use interactorsHovering instead.", true)]
 __declspec(property(get=get_hoveringInteractors)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor>>*  hoveringInteractors;

 __declspec(property(get=get_interactionGroupsFocusing)) ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*>*  interactionGroupsFocusing;

/// @brief [Obsolete("interactionLayerMask has been deprecated. Use interactionLayers instead.", true)]
 __declspec(property(get=get_interactionLayerMask, put=set_interactionLayerMask)) ::UnityEngine::LayerMask  interactionLayerMask;

 __declspec(property(get=get_interactionLayers, put=set_interactionLayers)) ::UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask  interactionLayers;

 __declspec(property(get=get_interactionManager, put=set_interactionManager)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>  interactionManager;

 __declspec(property(get=get_interactionStrengthFilters)) ::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRFilterList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRInteractionStrengthFilter*>*  interactionStrengthFilters;

 __declspec(property(get=get_interactorsHovering)) ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*>*  interactorsHovering;

 __declspec(property(get=get_interactorsSelecting)) ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*>*  interactorsSelecting;

 __declspec(property(get=get_isFocused, put=set_isFocused)) bool  isFocused;

 __declspec(property(get=get_isHovered, put=set_isHovered)) bool  isHovered;

 __declspec(property(get=get_isSelected, put=set_isSelected)) bool  isSelected;

 __declspec(property(get=get_largestInteractionStrength)) ::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<float_t>*  largestInteractionStrength;

 __declspec(property(get=get_lastFocusExited, put=set_lastFocusExited)) ::UnityEngine::XR::Interaction::Toolkit::FocusExitEvent*  lastFocusExited;

 __declspec(property(get=get_lastHoverExited, put=set_lastHoverExited)) ::UnityEngine::XR::Interaction::Toolkit::HoverExitEvent*  lastHoverExited;

 __declspec(property(get=get_lastSelectExited, put=set_lastSelectExited)) ::UnityEngine::XR::Interaction::Toolkit::SelectExitEvent*  lastSelectExited;

/// @brief Field m_Activated, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Activated, put=__cordl_internal_set_m_Activated)) ::UnityEngine::XR::Interaction::Toolkit::ActivateEvent*  m_Activated;

/// @brief Field m_AllowGazeAssistance, offset 0x78, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_AllowGazeAssistance, put=__cordl_internal_set_m_AllowGazeAssistance)) bool  m_AllowGazeAssistance;

/// @brief Field m_AllowGazeInteraction, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_AllowGazeInteraction, put=__cordl_internal_set_m_AllowGazeInteraction)) bool  m_AllowGazeInteraction;

/// @brief Field m_AllowGazeSelect, offset 0x69, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_AllowGazeSelect, put=__cordl_internal_set_m_AllowGazeSelect)) bool  m_AllowGazeSelect;

/// @brief Field m_AttachPoseOnSelect, offset 0x170, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AttachPoseOnSelect, put=__cordl_internal_set_m_AttachPoseOnSelect)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*,::UnityEngine::Pose>*  m_AttachPoseOnSelect;

/// @brief Field m_ClearedLargestInteractionStrength, offset 0x168, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_ClearedLargestInteractionStrength, put=__cordl_internal_set_m_ClearedLargestInteractionStrength)) bool  m_ClearedLargestInteractionStrength;

/// @brief Field m_Colliders, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Colliders, put=__cordl_internal_set_m_Colliders)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  m_Colliders;

/// @brief Field m_CustomReticle, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CustomReticle, put=__cordl_internal_set_m_CustomReticle)) ::UnityW<::UnityEngine::GameObject>  m_CustomReticle;

/// @brief Field m_Deactivated, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Deactivated, put=__cordl_internal_set_m_Deactivated)) ::UnityEngine::XR::Interaction::Toolkit::DeactivateEvent*  m_Deactivated;

/// @brief Field m_DistanceCalculationMode, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_DistanceCalculationMode, put=__cordl_internal_set_m_DistanceCalculationMode)) ::GlobalNamespace::XRBaseInteractable_DistanceCalculationMode  m_DistanceCalculationMode;

/// @brief Field m_FirstFocusEntered, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_FirstFocusEntered, put=__cordl_internal_set_m_FirstFocusEntered)) ::UnityEngine::XR::Interaction::Toolkit::FocusEnterEvent*  m_FirstFocusEntered;

/// @brief Field m_FirstHoverEntered, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_FirstHoverEntered, put=__cordl_internal_set_m_FirstHoverEntered)) ::UnityEngine::XR::Interaction::Toolkit::HoverEnterEvent*  m_FirstHoverEntered;

/// @brief Field m_FirstSelectEntered, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_FirstSelectEntered, put=__cordl_internal_set_m_FirstSelectEntered)) ::UnityEngine::XR::Interaction::Toolkit::SelectEnterEvent*  m_FirstSelectEntered;

/// @brief Field m_FocusEntered, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_FocusEntered, put=__cordl_internal_set_m_FocusEntered)) ::UnityEngine::XR::Interaction::Toolkit::FocusEnterEvent*  m_FocusEntered;

/// @brief Field m_FocusExited, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_FocusExited, put=__cordl_internal_set_m_FocusExited)) ::UnityEngine::XR::Interaction::Toolkit::FocusExitEvent*  m_FocusExited;

/// @brief Field m_FocusMode, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_FocusMode, put=__cordl_internal_set_m_FocusMode)) ::UnityEngine::XR::Interaction::Toolkit::Interactables::InteractableFocusMode  m_FocusMode;

/// @brief Field m_GazeTimeToSelect, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_GazeTimeToSelect, put=__cordl_internal_set_m_GazeTimeToSelect)) float_t  m_GazeTimeToSelect;

/// @brief Field m_HoverEntered, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_HoverEntered, put=__cordl_internal_set_m_HoverEntered)) ::UnityEngine::XR::Interaction::Toolkit::HoverEnterEvent*  m_HoverEntered;

/// @brief Field m_HoverExited, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_HoverExited, put=__cordl_internal_set_m_HoverExited)) ::UnityEngine::XR::Interaction::Toolkit::HoverExitEvent*  m_HoverExited;

/// @brief Field m_HoverFilters, offset 0x138, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_HoverFilters, put=__cordl_internal_set_m_HoverFilters)) ::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRHoverFilter*>*  m_HoverFilters;

/// @brief Field m_InteractionGroupsFocusing, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_InteractionGroupsFocusing, put=__cordl_internal_set_m_InteractionGroupsFocusing)) ::Unity::XR::CoreUtils::Collections::HashSetList_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*>*  m_InteractionGroupsFocusing;

/// @brief Field m_InteractionLayers, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_InteractionLayers, put=__cordl_internal_set_m_InteractionLayers)) ::UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask  m_InteractionLayers;

/// @brief Field m_InteractionManager, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_InteractionManager, put=__cordl_internal_set_m_InteractionManager)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>  m_InteractionManager;

/// @brief Field m_InteractionStrengthFilters, offset 0x158, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_InteractionStrengthFilters, put=__cordl_internal_set_m_InteractionStrengthFilters)) ::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRInteractionStrengthFilter*>*  m_InteractionStrengthFilters;

/// @brief Field m_InteractionStrengths, offset 0x190, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_InteractionStrengths, put=__cordl_internal_set_m_InteractionStrengths)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*,float_t>*  m_InteractionStrengths;

/// @brief Field m_InteractorsHovering, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_InteractorsHovering, put=__cordl_internal_set_m_InteractorsHovering)) ::Unity::XR::CoreUtils::Collections::HashSetList_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*>*  m_InteractorsHovering;

/// @brief Field m_InteractorsSelecting, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_InteractorsSelecting, put=__cordl_internal_set_m_InteractorsSelecting)) ::Unity::XR::CoreUtils::Collections::HashSetList_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*>*  m_InteractorsSelecting;

/// @brief Field m_LargestInteractionStrength, offset 0x160, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LargestInteractionStrength, put=__cordl_internal_set_m_LargestInteractionStrength)) ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<float_t>*  m_LargestInteractionStrength;

/// @brief Field m_LastFocusExited, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LastFocusExited, put=__cordl_internal_set_m_LastFocusExited)) ::UnityEngine::XR::Interaction::Toolkit::FocusExitEvent*  m_LastFocusExited;

/// @brief Field m_LastHoverExited, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LastHoverExited, put=__cordl_internal_set_m_LastHoverExited)) ::UnityEngine::XR::Interaction::Toolkit::HoverExitEvent*  m_LastHoverExited;

/// @brief Field m_LastSelectExited, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LastSelectExited, put=__cordl_internal_set_m_LastSelectExited)) ::UnityEngine::XR::Interaction::Toolkit::SelectExitEvent*  m_LastSelectExited;

/// @brief Field m_LocalAttachPoseOnSelect, offset 0x178, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LocalAttachPoseOnSelect, put=__cordl_internal_set_m_LocalAttachPoseOnSelect)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*,::UnityEngine::Pose>*  m_LocalAttachPoseOnSelect;

/// @brief Field m_OverrideGazeTimeToSelect, offset 0x6a, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_OverrideGazeTimeToSelect, put=__cordl_internal_set_m_OverrideGazeTimeToSelect)) bool  m_OverrideGazeTimeToSelect;

/// @brief Field m_OverrideTimeToAutoDeselectGaze, offset 0x70, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_OverrideTimeToAutoDeselectGaze, put=__cordl_internal_set_m_OverrideTimeToAutoDeselectGaze)) bool  m_OverrideTimeToAutoDeselectGaze;

/// @brief Field m_RegisteredInteractionManager, offset 0x198, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_RegisteredInteractionManager, put=__cordl_internal_set_m_RegisteredInteractionManager)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>  m_RegisteredInteractionManager;

/// @brief Field m_ReticleCache, offset 0x180, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ReticleCache, put=__cordl_internal_set_m_ReticleCache)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*,::UnityW<::UnityEngine::GameObject>>*  m_ReticleCache;

/// @brief Field m_SelectEntered, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SelectEntered, put=__cordl_internal_set_m_SelectEntered)) ::UnityEngine::XR::Interaction::Toolkit::SelectEnterEvent*  m_SelectEntered;

/// @brief Field m_SelectExited, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SelectExited, put=__cordl_internal_set_m_SelectExited)) ::UnityEngine::XR::Interaction::Toolkit::SelectExitEvent*  m_SelectExited;

/// @brief Field m_SelectFilters, offset 0x148, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SelectFilters, put=__cordl_internal_set_m_SelectFilters)) ::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter*>*  m_SelectFilters;

/// @brief Field m_SelectMode, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_SelectMode, put=__cordl_internal_set_m_SelectMode)) ::UnityEngine::XR::Interaction::Toolkit::Interactables::InteractableSelectMode  m_SelectMode;

/// @brief Field m_StartingHoverFilters, offset 0x130, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_StartingHoverFilters, put=__cordl_internal_set_m_StartingHoverFilters)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  m_StartingHoverFilters;

/// @brief Field m_StartingInteractionStrengthFilters, offset 0x150, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_StartingInteractionStrengthFilters, put=__cordl_internal_set_m_StartingInteractionStrengthFilters)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  m_StartingInteractionStrengthFilters;

/// @brief Field m_StartingSelectFilters, offset 0x140, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_StartingSelectFilters, put=__cordl_internal_set_m_StartingSelectFilters)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  m_StartingSelectFilters;

/// @brief Field m_TimeToAutoDeselectGaze, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_TimeToAutoDeselectGaze, put=__cordl_internal_set_m_TimeToAutoDeselectGaze)) float_t  m_TimeToAutoDeselectGaze;

/// @brief Field m_VariableSelectInteractors, offset 0x188, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_VariableSelectInteractors, put=__cordl_internal_set_m_VariableSelectInteractors)) ::Unity::XR::CoreUtils::Collections::HashSetList_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor>>*  m_VariableSelectInteractors;

/// @brief [Obsolete("onActivate has been deprecated. Use activated with updated signature instead.", true)]
 __declspec(property(get=get_onActivate, put=set_onActivate)) ::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*  onActivate;

/// @brief [Obsolete("onDeactivate has been deprecated. Use deactivated with updated signature instead.", true)]
 __declspec(property(get=get_onDeactivate, put=set_onDeactivate)) ::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*  onDeactivate;

/// @brief [Obsolete("onFirstHoverEnter has been deprecated. Use onFirstHoverEntered instead. (UnityUpgradable) -> onFirstHoverEntered", true)]
 __declspec(property(get=get_onFirstHoverEnter)) ::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*  onFirstHoverEnter;

/// @brief [Obsolete("onFirstHoverEntered has been deprecated. Use firstHoverEntered with updated signature instead.", true)]
 __declspec(property(get=get_onFirstHoverEntered, put=set_onFirstHoverEntered)) ::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*  onFirstHoverEntered;

/// @brief [Obsolete("onHoverEnter has been deprecated. Use onHoverEntered instead. (UnityUpgradable) -> onHoverEntered", true)]
 __declspec(property(get=get_onHoverEnter)) ::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*  onHoverEnter;

/// @brief [Obsolete("onHoverEntered has been deprecated. Use hoverEntered with updated signature instead.", true)]
 __declspec(property(get=get_onHoverEntered, put=set_onHoverEntered)) ::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*  onHoverEntered;

/// @brief [Obsolete("onHoverExit has been deprecated. Use onHoverExited instead. (UnityUpgradable) -> onHoverExited", true)]
 __declspec(property(get=get_onHoverExit)) ::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*  onHoverExit;

/// @brief [Obsolete("onHoverExited has been deprecated. Use hoverExited with updated signature instead.", true)]
 __declspec(property(get=get_onHoverExited, put=set_onHoverExited)) ::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*  onHoverExited;

/// @brief [Obsolete("onLastHoverExit has been deprecated. Use onLastHoverExited instead. (UnityUpgradable) -> onLastHoverExited", true)]
 __declspec(property(get=get_onLastHoverExit)) ::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*  onLastHoverExit;

/// @brief [Obsolete("onLastHoverExited has been deprecated. Use lastHoverExited with updated signature instead.", true)]
 __declspec(property(get=get_onLastHoverExited, put=set_onLastHoverExited)) ::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*  onLastHoverExited;

/// @brief [Obsolete("onSelectCancel has been deprecated. Use onSelectCanceled instead. (UnityUpgradable) -> onSelectCanceled", true)]
 __declspec(property(get=get_onSelectCancel)) ::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*  onSelectCancel;

/// @brief [Obsolete("onSelectCanceled has been deprecated. Use selectExited with updated signature and check for args.isCanceled instead.", true)]
 __declspec(property(get=get_onSelectCanceled, put=set_onSelectCanceled)) ::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*  onSelectCanceled;

/// @brief [Obsolete("onSelectEnter has been deprecated. Use onSelectEntered instead. (UnityUpgradable) -> onSelectEntered", true)]
 __declspec(property(get=get_onSelectEnter)) ::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*  onSelectEnter;

/// @brief [Obsolete("onSelectEntered has been deprecated. Use selectEntered with updated signature instead.", true)]
 __declspec(property(get=get_onSelectEntered, put=set_onSelectEntered)) ::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*  onSelectEntered;

/// @brief [Obsolete("onSelectExit has been deprecated. Use onSelectExited instead. (UnityUpgradable) -> onSelectExited", true)]
 __declspec(property(get=get_onSelectExit)) ::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*  onSelectExit;

/// @brief [Obsolete("onSelectExited has been deprecated. Use selectExited with updated signature and check for !args.isCanceled instead.", true)]
 __declspec(property(get=get_onSelectExited, put=set_onSelectExited)) ::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*  onSelectExited;

 __declspec(property(get=get_overrideGazeTimeToSelect, put=set_overrideGazeTimeToSelect)) bool  overrideGazeTimeToSelect;

 __declspec(property(get=get_overrideTimeToAutoDeselectGaze, put=set_overrideTimeToAutoDeselectGaze)) bool  overrideTimeToAutoDeselectGaze;

/// @brief Field registered, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_registered, put=__cordl_internal_set_registered)) ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*>*  registered;

/// @brief Field s_ProcessInteractionStrengthEventMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_ProcessInteractionStrengthEventMarker, put=setStaticF_s_ProcessInteractionStrengthEventMarker)) ::Unity::Profiling::ProfilerMarker  s_ProcessInteractionStrengthEventMarker;

/// @brief Field s_ProcessInteractionStrengthMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_ProcessInteractionStrengthMarker, put=setStaticF_s_ProcessInteractionStrengthMarker)) ::Unity::Profiling::ProfilerMarker  s_ProcessInteractionStrengthMarker;

 __declspec(property(get=get_selectEntered, put=set_selectEntered)) ::UnityEngine::XR::Interaction::Toolkit::SelectEnterEvent*  selectEntered;

 __declspec(property(get=get_selectExited, put=set_selectExited)) ::UnityEngine::XR::Interaction::Toolkit::SelectExitEvent*  selectExited;

 __declspec(property(get=get_selectFilters)) ::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRFilterList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter*>*  selectFilters;

 __declspec(property(get=get_selectMode, put=set_selectMode)) ::UnityEngine::XR::Interaction::Toolkit::Interactables::InteractableSelectMode  selectMode;

/// @brief [Obsolete("selectingInteractor has been deprecated. Use interactorsSelecting, GetOldestInteractorSelecting, or isSelected for similar functionality.", true)]
 __declspec(property(get=get_selectingInteractor, put=set_selectingInteractor)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor>  selectingInteractor;

 __declspec(property(get=get_startingHoverFilters, put=set_startingHoverFilters)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  startingHoverFilters;

 __declspec(property(get=get_startingInteractionStrengthFilters, put=set_startingInteractionStrengthFilters)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  startingInteractionStrengthFilters;

 __declspec(property(get=get_startingSelectFilters, put=set_startingSelectFilters)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  startingSelectFilters;

 __declspec(property(get=get_timeToAutoDeselectGaze, put=set_timeToAutoDeselectGaze)) float_t  timeToAutoDeselectGaze;

/// @brief Field unregistered, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_unregistered, put=__cordl_internal_set_unregistered)) ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*>*  unregistered;

/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Gaze::IXROverridesGazeAutoSelect"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::Gaze::IXROverridesGazeAutoSelect*() noexcept;

/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable*() noexcept;

/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRFocusInteractable"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRFocusInteractable*() noexcept;

/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*() noexcept;

/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*() noexcept;

/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractionStrengthInteractable"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractionStrengthInteractable*() noexcept;

/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*() noexcept;

/// @brief Method AttachCustomReticle, addr 0xb492990, size 0x344, virtual true, abstract: false, final false
inline void AttachCustomReticle(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor) ;

/// [Obsolete("AttachCustomReticle(XRBaseInteractor) has been deprecated. Use AttachCustomReticle(IXRInteractor) instead.", true)]
/// @brief Method AttachCustomReticle, addr 0xb494f64, size 0x7c, virtual true, abstract: false, final false
inline void AttachCustomReticle(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*  interactor) ;

/// @brief Method Awake, addr 0xb491e78, size 0x1cc, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method CaptureAttachPose, addr 0xb492f84, size 0x174, virtual false, abstract: false, final false
inline void CaptureAttachPose(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*  interactor) ;

/// @brief Method FindCreateInteractionManager, addr 0xb492044, size 0xc0, virtual false, abstract: false, final false
inline void FindCreateInteractionManager() ;

/// @brief Method GetAttachPoseOnSelect, addr 0xb4921cc, size 0xd0, virtual true, abstract: false, final true
inline ::UnityEngine::Pose GetAttachPoseOnSelect(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*  interactor) ;

/// @brief Method GetAttachTransform, addr 0xb4921c4, size 0x8, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> GetAttachTransform(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor) ;

/// @brief Method GetCustomReticle, addr 0xb492918, size 0x78, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> GetCustomReticle(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor) ;

/// @brief Method GetDistance, addr 0xb492494, size 0x130, virtual true, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Interactables::DistanceInfo GetDistance(::UnityEngine::Vector3  position) ;

/// @brief Method GetDistanceSqrToInteractor, addr 0xb49236c, size 0x128, virtual true, abstract: false, final false
inline float_t GetDistanceSqrToInteractor(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor) ;

/// [Obsolete("GetDistanceSqrToInteractor(XRBaseInteractor) has been deprecated. Use GetDistanceSqrToInteractor(IXRInteractor) instead.", true)]
/// @brief Method GetDistanceSqrToInteractor, addr 0xb494ee8, size 0x7c, virtual true, abstract: false, final false
inline float_t GetDistanceSqrToInteractor(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*  interactor) ;

/// @brief Method GetInteractionStrength, addr 0xb4925c4, size 0x7c, virtual true, abstract: false, final true
inline float_t GetInteractionStrength(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor) ;

/// @brief Method GetLocalAttachPoseOnSelect, addr 0xb49229c, size 0xd0, virtual true, abstract: false, final true
inline ::UnityEngine::Pose GetLocalAttachPoseOnSelect(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*  interactor) ;

/// @brief Method IsHoverableBy, addr 0xb492640, size 0x84, virtual true, abstract: false, final false
inline bool IsHoverableBy(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*  interactor) ;

/// [Obsolete("IsHoverableBy(XRBaseInteractor) has been deprecated. Use IsHoverableBy(IXRHoverInteractor) instead.", true)]
/// @brief Method IsHoverableBy, addr 0xb4951d0, size 0x7c, virtual true, abstract: false, final false
inline bool IsHoverableBy(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*  interactor) ;

/// @brief Method IsHovered, addr 0xb492750, size 0x70, virtual false, abstract: false, final false
inline bool IsHovered(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*  interactor) ;

/// @brief Method IsHovered, addr 0xb492830, size 0x74, virtual false, abstract: false, final false
inline bool IsHovered(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor) ;

/// @brief Method IsSelectableBy, addr 0xb4926c4, size 0x8c, virtual true, abstract: false, final false
inline bool IsSelectableBy(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*  interactor) ;

/// [Obsolete("IsSelectableBy(XRBaseInteractor) has been deprecated. Use IsSelectableBy(IXRSelectInteractor) instead.", true)]
/// @brief Method IsSelectableBy, addr 0xb49524c, size 0x7c, virtual true, abstract: false, final false
inline bool IsSelectableBy(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*  interactor) ;

/// @brief Method IsSelected, addr 0xb4928a4, size 0x74, virtual false, abstract: false, final false
inline bool IsSelected(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor) ;

/// @brief Method IsSelected, addr 0xb4927c0, size 0x70, virtual false, abstract: false, final false
inline bool IsSelected(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*  interactor) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable* New_ctor() ;

/// [Obsolete("OnActivate(XRBaseInteractor) has been deprecated. Use OnActivated(ActivateEventArgs) instead.", true)]
/// @brief Method OnActivate, addr 0xb494df0, size 0x7c, virtual true, abstract: false, final false
inline void OnActivate(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*  interactor) ;

/// @brief Method OnActivated, addr 0xb494040, size 0x60, virtual true, abstract: false, final false
inline void OnActivated(::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs*  args) ;

/// [Obsolete("OnDeactivate(XRBaseInteractor) has been deprecated. Use OnDeactivated(DeactivateEventArgs) instead.", true)]
/// @brief Method OnDeactivate, addr 0xb494e6c, size 0x7c, virtual true, abstract: false, final false
inline void OnDeactivate(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*  interactor) ;

/// @brief Method OnDeactivated, addr 0xb4940a0, size 0x60, virtual true, abstract: false, final false
inline void OnDeactivated(::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs*  args) ;

/// @brief Method OnDestroy, addr 0xb4921c0, size 0x4, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0xb49211c, size 0x4, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xb492104, size 0x18, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnFocusEntered, addr 0xb493e94, size 0x98, virtual true, abstract: false, final false
inline void OnFocusEntered(::UnityEngine::XR::Interaction::Toolkit::FocusEnterEventArgs*  args) ;

/// @brief Method OnFocusEntering, addr 0xb493df4, size 0xa0, virtual true, abstract: false, final false
inline void OnFocusEntering(::UnityEngine::XR::Interaction::Toolkit::FocusEnterEventArgs*  args) ;

/// @brief Method OnFocusExited, addr 0xb493fac, size 0x94, virtual true, abstract: false, final false
inline void OnFocusExited(::UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs*  args) ;

/// @brief Method OnFocusExiting, addr 0xb493f2c, size 0x80, virtual true, abstract: false, final false
inline void OnFocusExiting(::UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs*  args) ;

/// @brief Method OnHoverEntered, addr 0xb4936a8, size 0x98, virtual true, abstract: false, final false
inline void OnHoverEntered(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*  args) ;

/// [Obsolete("OnHoverEntered(XRBaseInteractor) has been deprecated. Use OnHoverEntered(HoverEnterEventArgs) instead.", true)]
/// @brief Method OnHoverEntered, addr 0xb494994, size 0x7c, virtual true, abstract: false, final false
inline void OnHoverEntered(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*  interactor) ;

/// @brief Method OnHoverEntering, addr 0xb49353c, size 0x16c, virtual true, abstract: false, final false
inline void OnHoverEntering(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*  args) ;

/// [Obsolete("OnHoverEntering(XRBaseInteractor) has been deprecated. Use OnHoverEntering(HoverEnterEventArgs) instead.", true)]
/// @brief Method OnHoverEntering, addr 0xb494918, size 0x7c, virtual true, abstract: false, final false
inline void OnHoverEntering(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*  interactor) ;

/// @brief Method OnHoverExited, addr 0xb493944, size 0x7c, virtual true, abstract: false, final false
inline void OnHoverExited(::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*  args) ;

/// [Obsolete("OnHoverExited(XRBaseInteractor) has been deprecated. Use OnHoverExited(HoverExitEventArgs) instead.", true)]
/// @brief Method OnHoverExited, addr 0xb494a8c, size 0x7c, virtual true, abstract: false, final false
inline void OnHoverExited(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*  interactor) ;

/// @brief Method OnHoverExiting, addr 0xb493740, size 0x204, virtual true, abstract: false, final false
inline void OnHoverExiting(::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*  args) ;

/// [Obsolete("OnHoverExiting(XRBaseInteractor) has been deprecated. Use OnHoverExiting(HoverExitEventArgs) instead.", true)]
/// @brief Method OnHoverExiting, addr 0xb494a10, size 0x7c, virtual true, abstract: false, final false
inline void OnHoverExiting(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*  interactor) ;

/// @brief Method OnRegistered, addr 0xb4932cc, size 0x138, virtual true, abstract: false, final false
inline void OnRegistered(::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*  args) ;

/// [Obsolete("OnSelectCanceled(XRBaseInteractor) has been deprecated. Use OnSelectExited(SelectExitEventArgs) and check for args.isCanceled instead.", true)]
/// @brief Method OnSelectCanceled, addr 0xb494d74, size 0x7c, virtual true, abstract: false, final false
inline void OnSelectCanceled(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*  interactor) ;

/// [Obsolete("OnSelectCanceling(XRBaseInteractor) has been deprecated. Use OnSelectExiting(SelectExitEventArgs) and check for args.isCanceled instead.", true)]
/// @brief Method OnSelectCanceling, addr 0xb494cf8, size 0x7c, virtual true, abstract: false, final false
inline void OnSelectCanceling(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*  interactor) ;

/// @brief Method OnSelectEntered, addr 0xb493b00, size 0x98, virtual true, abstract: false, final false
inline void OnSelectEntered(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*  args) ;

/// [Obsolete("OnSelectEntered(XRBaseInteractor) has been deprecated. Use OnSelectEntered(SelectEnterEventArgs) instead.", true)]
/// @brief Method OnSelectEntered, addr 0xb494b84, size 0x7c, virtual true, abstract: false, final false
inline void OnSelectEntered(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*  interactor) ;

/// @brief Method OnSelectEntering, addr 0xb4939c0, size 0x140, virtual true, abstract: false, final false
inline void OnSelectEntering(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*  args) ;

/// [Obsolete("OnSelectEntering(XRBaseInteractor) has been deprecated. Use OnSelectEntering(SelectEnterEventArgs) instead.", true)]
/// @brief Method OnSelectEntering, addr 0xb494b08, size 0x7c, virtual true, abstract: false, final false
inline void OnSelectEntering(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*  interactor) ;

/// @brief Method OnSelectExited, addr 0xb493d28, size 0xcc, virtual true, abstract: false, final false
inline void OnSelectExited(::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*  args) ;

/// [Obsolete("OnSelectExited(XRBaseInteractor) has been deprecated. Use OnSelectExited(SelectExitEventArgs) and check for !args.isCanceled instead.", true)]
/// @brief Method OnSelectExited, addr 0xb494c7c, size 0x7c, virtual true, abstract: false, final false
inline void OnSelectExited(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*  interactor) ;

/// @brief Method OnSelectExiting, addr 0xb493b98, size 0x190, virtual true, abstract: false, final false
inline void OnSelectExiting(::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*  args) ;

/// [Obsolete("OnSelectExiting(XRBaseInteractor) has been deprecated. Use OnSelectExiting(SelectExitEventArgs) and check for !args.isCanceled instead.", true)]
/// @brief Method OnSelectExiting, addr 0xb494c00, size 0x7c, virtual true, abstract: false, final false
inline void OnSelectExiting(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*  interactor) ;

/// @brief Method OnUnregistered, addr 0xb493404, size 0x138, virtual true, abstract: false, final false
inline void OnUnregistered(::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*  args) ;

/// @brief Method ProcessHoverFilters, addr 0xb49319c, size 0x10, virtual false, abstract: false, final false
inline bool ProcessHoverFilters(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*  interactor) ;

/// @brief Method ProcessInteractable, addr 0xb4930f8, size 0x4, virtual true, abstract: false, final false
inline void ProcessInteractable(::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase  updatePhase) ;

/// @brief Method ProcessInteractionStrength, addr 0xb494100, size 0x5a4, virtual true, abstract: false, final false
inline void ProcessInteractionStrength(::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase  updatePhase) ;

/// @brief Method ProcessInteractionStrengthFilters, addr 0xb4946a4, size 0x10, virtual false, abstract: false, final false
inline float_t ProcessInteractionStrengthFilters(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor, float_t  interactionStrength) ;

/// @brief Method ProcessSelectFilters, addr 0xb49323c, size 0x10, virtual false, abstract: false, final false
inline bool ProcessSelectFilters(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*  interactor) ;

/// @brief Method ReadInteractionStrength, addr 0xb4946b4, size 0xc8, virtual false, abstract: false, final false
inline float_t ReadInteractionStrength(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor*  interactor) ;

/// @brief Method RegisterWithInteractionManager, addr 0xb491964, size 0xe0, virtual false, abstract: false, final false
inline void RegisterWithInteractionManager() ;

/// @brief Method RemoveCustomReticle, addr 0xb492cd4, size 0x2b0, virtual true, abstract: false, final false
inline void RemoveCustomReticle(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor) ;

/// [Obsolete("RemoveCustomReticle(XRBaseInteractor) has been deprecated. Use RemoveCustomReticle(IXRInteractor) instead.", true)]
/// @brief Method RemoveCustomReticle, addr 0xb494fe0, size 0x7c, virtual true, abstract: false, final false
inline void RemoveCustomReticle(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*  interactor) ;

/// [Conditional("UNITY_EDITOR")]
/// @brief Method Reset, addr 0xb491e74, size 0x4, virtual true, abstract: false, final false
inline void Reset() ;

/// @brief Method UnityEngine.XR.Interaction.Toolkit.Interactables.IXRActivateInteractable.OnActivated, addr 0xb49312c, size 0x10, virtual true, abstract: false, final true
inline void UnityEngine_XR_Interaction_Toolkit_Interactables_IXRActivateInteractable_OnActivated(::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs*  args) ;

/// @brief Method UnityEngine.XR.Interaction.Toolkit.Interactables.IXRActivateInteractable.OnDeactivated, addr 0xb49313c, size 0x10, virtual true, abstract: false, final true
inline void UnityEngine_XR_Interaction_Toolkit_Interactables_IXRActivateInteractable_OnDeactivated(::UnityEngine::XR::Interaction::Toolkit::DeactivateEventArgs*  args) ;

/// @brief Method UnityEngine.XR.Interaction.Toolkit.Interactables.IXRFocusInteractable.OnFocusEntered, addr 0xb49329c, size 0x10, virtual true, abstract: false, final true
inline void UnityEngine_XR_Interaction_Toolkit_Interactables_IXRFocusInteractable_OnFocusEntered(::UnityEngine::XR::Interaction::Toolkit::FocusEnterEventArgs*  args) ;

/// @brief Method UnityEngine.XR.Interaction.Toolkit.Interactables.IXRFocusInteractable.OnFocusEntering, addr 0xb49328c, size 0x10, virtual true, abstract: false, final true
inline void UnityEngine_XR_Interaction_Toolkit_Interactables_IXRFocusInteractable_OnFocusEntering(::UnityEngine::XR::Interaction::Toolkit::FocusEnterEventArgs*  args) ;

/// @brief Method UnityEngine.XR.Interaction.Toolkit.Interactables.IXRFocusInteractable.OnFocusExited, addr 0xb4932bc, size 0x10, virtual true, abstract: false, final true
inline void UnityEngine_XR_Interaction_Toolkit_Interactables_IXRFocusInteractable_OnFocusExited(::UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs*  args) ;

/// @brief Method UnityEngine.XR.Interaction.Toolkit.Interactables.IXRFocusInteractable.OnFocusExiting, addr 0xb4932ac, size 0x10, virtual true, abstract: false, final true
inline void UnityEngine_XR_Interaction_Toolkit_Interactables_IXRFocusInteractable_OnFocusExiting(::UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs*  args) ;

/// @brief Method UnityEngine.XR.Interaction.Toolkit.Interactables.IXRHoverInteractable.IsHoverableBy, addr 0xb49314c, size 0x50, virtual true, abstract: false, final true
inline bool UnityEngine_XR_Interaction_Toolkit_Interactables_IXRHoverInteractable_IsHoverableBy(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*  interactor) ;

/// @brief Method UnityEngine.XR.Interaction.Toolkit.Interactables.IXRHoverInteractable.OnHoverEntered, addr 0xb4931bc, size 0x10, virtual true, abstract: false, final true
inline void UnityEngine_XR_Interaction_Toolkit_Interactables_IXRHoverInteractable_OnHoverEntered(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*  args) ;

/// @brief Method UnityEngine.XR.Interaction.Toolkit.Interactables.IXRHoverInteractable.OnHoverEntering, addr 0xb4931ac, size 0x10, virtual true, abstract: false, final true
inline void UnityEngine_XR_Interaction_Toolkit_Interactables_IXRHoverInteractable_OnHoverEntering(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*  args) ;

/// @brief Method UnityEngine.XR.Interaction.Toolkit.Interactables.IXRHoverInteractable.OnHoverExited, addr 0xb4931dc, size 0x10, virtual true, abstract: false, final true
inline void UnityEngine_XR_Interaction_Toolkit_Interactables_IXRHoverInteractable_OnHoverExited(::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*  args) ;

/// @brief Method UnityEngine.XR.Interaction.Toolkit.Interactables.IXRHoverInteractable.OnHoverExiting, addr 0xb4931cc, size 0x10, virtual true, abstract: false, final true
inline void UnityEngine_XR_Interaction_Toolkit_Interactables_IXRHoverInteractable_OnHoverExiting(::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*  args) ;

/// @brief Method UnityEngine.XR.Interaction.Toolkit.Interactables.IXRInteractable.OnRegistered, addr 0xb49310c, size 0x10, virtual true, abstract: false, final true
inline void UnityEngine_XR_Interaction_Toolkit_Interactables_IXRInteractable_OnRegistered(::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*  args) ;

/// @brief Method UnityEngine.XR.Interaction.Toolkit.Interactables.IXRInteractable.OnUnregistered, addr 0xb49311c, size 0x10, virtual true, abstract: false, final true
inline void UnityEngine_XR_Interaction_Toolkit_Interactables_IXRInteractable_OnUnregistered(::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*  args) ;

/// @brief Method UnityEngine.XR.Interaction.Toolkit.Interactables.IXRInteractable.get_transform, addr 0xb495b80, size 0x8, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::Transform> UnityEngine_XR_Interaction_Toolkit_Interactables_IXRInteractable_get_transform() ;

/// @brief Method UnityEngine.XR.Interaction.Toolkit.Interactables.IXRInteractionStrengthInteractable.ProcessInteractionStrength, addr 0xb4930fc, size 0x10, virtual true, abstract: false, final true
inline void UnityEngine_XR_Interaction_Toolkit_Interactables_IXRInteractionStrengthInteractable_ProcessInteractionStrength(::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase  updatePhase) ;

/// @brief Method UnityEngine.XR.Interaction.Toolkit.Interactables.IXRSelectInteractable.IsSelectableBy, addr 0xb4931ec, size 0x50, virtual true, abstract: false, final true
inline bool UnityEngine_XR_Interaction_Toolkit_Interactables_IXRSelectInteractable_IsSelectableBy(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*  interactor) ;

/// @brief Method UnityEngine.XR.Interaction.Toolkit.Interactables.IXRSelectInteractable.OnSelectEntered, addr 0xb49325c, size 0x10, virtual true, abstract: false, final true
inline void UnityEngine_XR_Interaction_Toolkit_Interactables_IXRSelectInteractable_OnSelectEntered(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*  args) ;

/// @brief Method UnityEngine.XR.Interaction.Toolkit.Interactables.IXRSelectInteractable.OnSelectEntering, addr 0xb49324c, size 0x10, virtual true, abstract: false, final true
inline void UnityEngine_XR_Interaction_Toolkit_Interactables_IXRSelectInteractable_OnSelectEntering(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*  args) ;

/// @brief Method UnityEngine.XR.Interaction.Toolkit.Interactables.IXRSelectInteractable.OnSelectExited, addr 0xb49327c, size 0x10, virtual true, abstract: false, final true
inline void UnityEngine_XR_Interaction_Toolkit_Interactables_IXRSelectInteractable_OnSelectExited(::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*  args) ;

/// @brief Method UnityEngine.XR.Interaction.Toolkit.Interactables.IXRSelectInteractable.OnSelectExiting, addr 0xb49326c, size 0x10, virtual true, abstract: false, final true
inline void UnityEngine_XR_Interaction_Toolkit_Interactables_IXRSelectInteractable_OnSelectExiting(::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*  args) ;

/// @brief Method UnregisterWithInteractionManager, addr 0xb492120, size 0xa0, virtual false, abstract: false, final false
inline void UnregisterWithInteractionManager() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup* const& __cordl_internal_get__firstInteractionGroupFocusing_k__BackingField() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*& __cordl_internal_get__firstInteractionGroupFocusing_k__BackingField() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor* const& __cordl_internal_get__firstInteractorSelecting_k__BackingField() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*& __cordl_internal_get__firstInteractorSelecting_k__BackingField() ;

constexpr ::System::Func_3<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*,::UnityEngine::Vector3,::UnityEngine::XR::Interaction::Toolkit::Interactables::DistanceInfo>* const& __cordl_internal_get__getDistanceOverride_k__BackingField() const;

constexpr ::System::Func_3<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*,::UnityEngine::Vector3,::UnityEngine::XR::Interaction::Toolkit::Interactables::DistanceInfo>*& __cordl_internal_get__getDistanceOverride_k__BackingField() ;

constexpr bool const& __cordl_internal_get__isFocused_k__BackingField() const;

constexpr bool& __cordl_internal_get__isFocused_k__BackingField() ;

constexpr bool const& __cordl_internal_get__isHovered_k__BackingField() const;

constexpr bool& __cordl_internal_get__isHovered_k__BackingField() ;

constexpr bool const& __cordl_internal_get__isSelected_k__BackingField() const;

constexpr bool& __cordl_internal_get__isSelected_k__BackingField() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::ActivateEvent* const& __cordl_internal_get_m_Activated() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::ActivateEvent*& __cordl_internal_get_m_Activated() ;

constexpr bool const& __cordl_internal_get_m_AllowGazeAssistance() const;

constexpr bool& __cordl_internal_get_m_AllowGazeAssistance() ;

constexpr bool const& __cordl_internal_get_m_AllowGazeInteraction() const;

constexpr bool& __cordl_internal_get_m_AllowGazeInteraction() ;

constexpr bool const& __cordl_internal_get_m_AllowGazeSelect() const;

constexpr bool& __cordl_internal_get_m_AllowGazeSelect() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*,::UnityEngine::Pose>* const& __cordl_internal_get_m_AttachPoseOnSelect() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*,::UnityEngine::Pose>*& __cordl_internal_get_m_AttachPoseOnSelect() ;

constexpr bool const& __cordl_internal_get_m_ClearedLargestInteractionStrength() const;

constexpr bool& __cordl_internal_get_m_ClearedLargestInteractionStrength() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* const& __cordl_internal_get_m_Colliders() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*& __cordl_internal_get_m_Colliders() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_m_CustomReticle() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_m_CustomReticle() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::DeactivateEvent* const& __cordl_internal_get_m_Deactivated() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::DeactivateEvent*& __cordl_internal_get_m_Deactivated() ;

constexpr ::GlobalNamespace::XRBaseInteractable_DistanceCalculationMode const& __cordl_internal_get_m_DistanceCalculationMode() const;

constexpr ::GlobalNamespace::XRBaseInteractable_DistanceCalculationMode& __cordl_internal_get_m_DistanceCalculationMode() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::FocusEnterEvent* const& __cordl_internal_get_m_FirstFocusEntered() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::FocusEnterEvent*& __cordl_internal_get_m_FirstFocusEntered() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::HoverEnterEvent* const& __cordl_internal_get_m_FirstHoverEntered() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::HoverEnterEvent*& __cordl_internal_get_m_FirstHoverEntered() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::SelectEnterEvent* const& __cordl_internal_get_m_FirstSelectEntered() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::SelectEnterEvent*& __cordl_internal_get_m_FirstSelectEntered() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::FocusEnterEvent* const& __cordl_internal_get_m_FocusEntered() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::FocusEnterEvent*& __cordl_internal_get_m_FocusEntered() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::FocusExitEvent* const& __cordl_internal_get_m_FocusExited() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::FocusExitEvent*& __cordl_internal_get_m_FocusExited() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::InteractableFocusMode const& __cordl_internal_get_m_FocusMode() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::InteractableFocusMode& __cordl_internal_get_m_FocusMode() ;

constexpr float_t const& __cordl_internal_get_m_GazeTimeToSelect() const;

constexpr float_t& __cordl_internal_get_m_GazeTimeToSelect() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::HoverEnterEvent* const& __cordl_internal_get_m_HoverEntered() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::HoverEnterEvent*& __cordl_internal_get_m_HoverEntered() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::HoverExitEvent* const& __cordl_internal_get_m_HoverExited() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::HoverExitEvent*& __cordl_internal_get_m_HoverExited() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRHoverFilter*>* const& __cordl_internal_get_m_HoverFilters() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRHoverFilter*>*& __cordl_internal_get_m_HoverFilters() ;

constexpr ::Unity::XR::CoreUtils::Collections::HashSetList_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*>* const& __cordl_internal_get_m_InteractionGroupsFocusing() const;

constexpr ::Unity::XR::CoreUtils::Collections::HashSetList_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*>*& __cordl_internal_get_m_InteractionGroupsFocusing() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask const& __cordl_internal_get_m_InteractionLayers() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask& __cordl_internal_get_m_InteractionLayers() ;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> const& __cordl_internal_get_m_InteractionManager() const;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>& __cordl_internal_get_m_InteractionManager() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRInteractionStrengthFilter*>* const& __cordl_internal_get_m_InteractionStrengthFilters() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRInteractionStrengthFilter*>*& __cordl_internal_get_m_InteractionStrengthFilters() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*,float_t>* const& __cordl_internal_get_m_InteractionStrengths() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*,float_t>*& __cordl_internal_get_m_InteractionStrengths() ;

constexpr ::Unity::XR::CoreUtils::Collections::HashSetList_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*>* const& __cordl_internal_get_m_InteractorsHovering() const;

constexpr ::Unity::XR::CoreUtils::Collections::HashSetList_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*>*& __cordl_internal_get_m_InteractorsHovering() ;

constexpr ::Unity::XR::CoreUtils::Collections::HashSetList_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*>* const& __cordl_internal_get_m_InteractorsSelecting() const;

constexpr ::Unity::XR::CoreUtils::Collections::HashSetList_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*>*& __cordl_internal_get_m_InteractorsSelecting() ;

constexpr ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<float_t>* const& __cordl_internal_get_m_LargestInteractionStrength() const;

constexpr ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<float_t>*& __cordl_internal_get_m_LargestInteractionStrength() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::FocusExitEvent* const& __cordl_internal_get_m_LastFocusExited() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::FocusExitEvent*& __cordl_internal_get_m_LastFocusExited() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::HoverExitEvent* const& __cordl_internal_get_m_LastHoverExited() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::HoverExitEvent*& __cordl_internal_get_m_LastHoverExited() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::SelectExitEvent* const& __cordl_internal_get_m_LastSelectExited() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::SelectExitEvent*& __cordl_internal_get_m_LastSelectExited() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*,::UnityEngine::Pose>* const& __cordl_internal_get_m_LocalAttachPoseOnSelect() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*,::UnityEngine::Pose>*& __cordl_internal_get_m_LocalAttachPoseOnSelect() ;

constexpr bool const& __cordl_internal_get_m_OverrideGazeTimeToSelect() const;

constexpr bool& __cordl_internal_get_m_OverrideGazeTimeToSelect() ;

constexpr bool const& __cordl_internal_get_m_OverrideTimeToAutoDeselectGaze() const;

constexpr bool& __cordl_internal_get_m_OverrideTimeToAutoDeselectGaze() ;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> const& __cordl_internal_get_m_RegisteredInteractionManager() const;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>& __cordl_internal_get_m_RegisteredInteractionManager() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*,::UnityW<::UnityEngine::GameObject>>* const& __cordl_internal_get_m_ReticleCache() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*,::UnityW<::UnityEngine::GameObject>>*& __cordl_internal_get_m_ReticleCache() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::SelectEnterEvent* const& __cordl_internal_get_m_SelectEntered() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::SelectEnterEvent*& __cordl_internal_get_m_SelectEntered() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::SelectExitEvent* const& __cordl_internal_get_m_SelectExited() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::SelectExitEvent*& __cordl_internal_get_m_SelectExited() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter*>* const& __cordl_internal_get_m_SelectFilters() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter*>*& __cordl_internal_get_m_SelectFilters() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::InteractableSelectMode const& __cordl_internal_get_m_SelectMode() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::InteractableSelectMode& __cordl_internal_get_m_SelectMode() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* const& __cordl_internal_get_m_StartingHoverFilters() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*& __cordl_internal_get_m_StartingHoverFilters() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* const& __cordl_internal_get_m_StartingInteractionStrengthFilters() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*& __cordl_internal_get_m_StartingInteractionStrengthFilters() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* const& __cordl_internal_get_m_StartingSelectFilters() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*& __cordl_internal_get_m_StartingSelectFilters() ;

constexpr float_t const& __cordl_internal_get_m_TimeToAutoDeselectGaze() const;

constexpr float_t& __cordl_internal_get_m_TimeToAutoDeselectGaze() ;

constexpr ::Unity::XR::CoreUtils::Collections::HashSetList_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor>>* const& __cordl_internal_get_m_VariableSelectInteractors() const;

constexpr ::Unity::XR::CoreUtils::Collections::HashSetList_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor>>*& __cordl_internal_get_m_VariableSelectInteractors() ;

constexpr ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*>* const& __cordl_internal_get_registered() const;

constexpr ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*>*& __cordl_internal_get_registered() ;

constexpr ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*>* const& __cordl_internal_get_unregistered() const;

constexpr ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*>*& __cordl_internal_get_unregistered() ;

constexpr void __cordl_internal_set__firstInteractionGroupFocusing_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*  value) ;

constexpr void __cordl_internal_set__firstInteractorSelecting_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*  value) ;

constexpr void __cordl_internal_set__getDistanceOverride_k__BackingField(::System::Func_3<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*,::UnityEngine::Vector3,::UnityEngine::XR::Interaction::Toolkit::Interactables::DistanceInfo>*  value) ;

constexpr void __cordl_internal_set__isFocused_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__isHovered_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__isSelected_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_m_Activated(::UnityEngine::XR::Interaction::Toolkit::ActivateEvent*  value) ;

constexpr void __cordl_internal_set_m_AllowGazeAssistance(bool  value) ;

constexpr void __cordl_internal_set_m_AllowGazeInteraction(bool  value) ;

constexpr void __cordl_internal_set_m_AllowGazeSelect(bool  value) ;

constexpr void __cordl_internal_set_m_AttachPoseOnSelect(::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*,::UnityEngine::Pose>*  value) ;

constexpr void __cordl_internal_set_m_ClearedLargestInteractionStrength(bool  value) ;

constexpr void __cordl_internal_set_m_Colliders(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  value) ;

constexpr void __cordl_internal_set_m_CustomReticle(::UnityW<::UnityEngine::GameObject>  value) ;

constexpr void __cordl_internal_set_m_Deactivated(::UnityEngine::XR::Interaction::Toolkit::DeactivateEvent*  value) ;

constexpr void __cordl_internal_set_m_DistanceCalculationMode(::GlobalNamespace::XRBaseInteractable_DistanceCalculationMode  value) ;

constexpr void __cordl_internal_set_m_FirstFocusEntered(::UnityEngine::XR::Interaction::Toolkit::FocusEnterEvent*  value) ;

constexpr void __cordl_internal_set_m_FirstHoverEntered(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEvent*  value) ;

constexpr void __cordl_internal_set_m_FirstSelectEntered(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEvent*  value) ;

constexpr void __cordl_internal_set_m_FocusEntered(::UnityEngine::XR::Interaction::Toolkit::FocusEnterEvent*  value) ;

constexpr void __cordl_internal_set_m_FocusExited(::UnityEngine::XR::Interaction::Toolkit::FocusExitEvent*  value) ;

constexpr void __cordl_internal_set_m_FocusMode(::UnityEngine::XR::Interaction::Toolkit::Interactables::InteractableFocusMode  value) ;

constexpr void __cordl_internal_set_m_GazeTimeToSelect(float_t  value) ;

constexpr void __cordl_internal_set_m_HoverEntered(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEvent*  value) ;

constexpr void __cordl_internal_set_m_HoverExited(::UnityEngine::XR::Interaction::Toolkit::HoverExitEvent*  value) ;

constexpr void __cordl_internal_set_m_HoverFilters(::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRHoverFilter*>*  value) ;

constexpr void __cordl_internal_set_m_InteractionGroupsFocusing(::Unity::XR::CoreUtils::Collections::HashSetList_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*>*  value) ;

constexpr void __cordl_internal_set_m_InteractionLayers(::UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask  value) ;

constexpr void __cordl_internal_set_m_InteractionManager(::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>  value) ;

constexpr void __cordl_internal_set_m_InteractionStrengthFilters(::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRInteractionStrengthFilter*>*  value) ;

constexpr void __cordl_internal_set_m_InteractionStrengths(::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*,float_t>*  value) ;

constexpr void __cordl_internal_set_m_InteractorsHovering(::Unity::XR::CoreUtils::Collections::HashSetList_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*>*  value) ;

constexpr void __cordl_internal_set_m_InteractorsSelecting(::Unity::XR::CoreUtils::Collections::HashSetList_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*>*  value) ;

constexpr void __cordl_internal_set_m_LargestInteractionStrength(::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<float_t>*  value) ;

constexpr void __cordl_internal_set_m_LastFocusExited(::UnityEngine::XR::Interaction::Toolkit::FocusExitEvent*  value) ;

constexpr void __cordl_internal_set_m_LastHoverExited(::UnityEngine::XR::Interaction::Toolkit::HoverExitEvent*  value) ;

constexpr void __cordl_internal_set_m_LastSelectExited(::UnityEngine::XR::Interaction::Toolkit::SelectExitEvent*  value) ;

constexpr void __cordl_internal_set_m_LocalAttachPoseOnSelect(::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*,::UnityEngine::Pose>*  value) ;

constexpr void __cordl_internal_set_m_OverrideGazeTimeToSelect(bool  value) ;

constexpr void __cordl_internal_set_m_OverrideTimeToAutoDeselectGaze(bool  value) ;

constexpr void __cordl_internal_set_m_RegisteredInteractionManager(::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>  value) ;

constexpr void __cordl_internal_set_m_ReticleCache(::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*,::UnityW<::UnityEngine::GameObject>>*  value) ;

constexpr void __cordl_internal_set_m_SelectEntered(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEvent*  value) ;

constexpr void __cordl_internal_set_m_SelectExited(::UnityEngine::XR::Interaction::Toolkit::SelectExitEvent*  value) ;

constexpr void __cordl_internal_set_m_SelectFilters(::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter*>*  value) ;

constexpr void __cordl_internal_set_m_SelectMode(::UnityEngine::XR::Interaction::Toolkit::Interactables::InteractableSelectMode  value) ;

constexpr void __cordl_internal_set_m_StartingHoverFilters(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  value) ;

constexpr void __cordl_internal_set_m_StartingInteractionStrengthFilters(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  value) ;

constexpr void __cordl_internal_set_m_StartingSelectFilters(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  value) ;

constexpr void __cordl_internal_set_m_TimeToAutoDeselectGaze(float_t  value) ;

constexpr void __cordl_internal_set_m_VariableSelectInteractors(::Unity::XR::CoreUtils::Collections::HashSetList_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor>>*  value) ;

constexpr void __cordl_internal_set_registered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*>*  value) ;

constexpr void __cordl_internal_set_unregistered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*>*  value) ;

/// @brief Method .ctor, addr 0xb4952c8, size 0x800, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_registered, addr 0xb4915f0, size 0xb0, virtual true, abstract: false, final true
inline void add_registered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_unregistered, addr 0xb491750, size 0xb0, virtual true, abstract: false, final true
inline void add_unregistered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*>*  value) ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_ProcessInteractionStrengthEventMarker() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_ProcessInteractionStrengthMarker() ;

/// @brief Method get_activated, addr 0xb491bcc, size 0x8, virtual true, abstract: false, final true
inline ::UnityEngine::XR::Interaction::Toolkit::ActivateEvent* get_activated() ;

/// @brief Method get_allowGazeAssistance, addr 0xb491afc, size 0x8, virtual false, abstract: false, final false
inline bool get_allowGazeAssistance() ;

/// @brief Method get_allowGazeInteraction, addr 0xb491a9c, size 0x8, virtual false, abstract: false, final false
inline bool get_allowGazeInteraction() ;

/// @brief Method get_allowGazeSelect, addr 0xb491aac, size 0x8, virtual false, abstract: false, final false
inline bool get_allowGazeSelect() ;

/// @brief Method get_canFocus, addr 0xb491dfc, size 0x10, virtual true, abstract: false, final true
inline bool get_canFocus() ;

/// @brief Method get_colliders, addr 0xb491a44, size 0x8, virtual true, abstract: false, final true
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>* get_colliders() ;

/// @brief Method get_customReticle, addr 0xb491a8c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::GameObject> get_customReticle() ;

/// @brief Method get_deactivated, addr 0xb491bdc, size 0x8, virtual true, abstract: false, final true
inline ::UnityEngine::XR::Interaction::Toolkit::DeactivateEvent* get_deactivated() ;

/// @brief Method get_distanceCalculationMode, addr 0xb491a5c, size 0x8, virtual false, abstract: false, final false
inline ::GlobalNamespace::XRBaseInteractable_DistanceCalculationMode get_distanceCalculationMode() ;

/// @brief Method get_firstFocusEntered, addr 0xb491b8c, size 0x8, virtual true, abstract: false, final true
inline ::UnityEngine::XR::Interaction::Toolkit::FocusEnterEvent* get_firstFocusEntered() ;

/// @brief Method get_firstHoverEntered, addr 0xb491b0c, size 0x8, virtual true, abstract: false, final true
inline ::UnityEngine::XR::Interaction::Toolkit::HoverEnterEvent* get_firstHoverEntered() ;

/// [CompilerGenerated]
/// @brief Method get_firstInteractionGroupFocusing, addr 0xb491dd4, size 0x8, virtual true, abstract: false, final true
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup* get_firstInteractionGroupFocusing() ;

/// [CompilerGenerated]
/// @brief Method get_firstInteractorSelecting, addr 0xb491d1c, size 0x8, virtual true, abstract: false, final true
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor* get_firstInteractorSelecting() ;

/// @brief Method get_firstSelectEntered, addr 0xb491b4c, size 0x8, virtual true, abstract: false, final true
inline ::UnityEngine::XR::Interaction::Toolkit::SelectEnterEvent* get_firstSelectEntered() ;

/// @brief Method get_focusEntered, addr 0xb491bac, size 0x8, virtual true, abstract: false, final true
inline ::UnityEngine::XR::Interaction::Toolkit::FocusEnterEvent* get_focusEntered() ;

/// @brief Method get_focusExited, addr 0xb491bbc, size 0x8, virtual true, abstract: false, final true
inline ::UnityEngine::XR::Interaction::Toolkit::FocusExitEvent* get_focusExited() ;

/// @brief Method get_focusMode, addr 0xb491a7c, size 0x8, virtual true, abstract: false, final true
inline ::UnityEngine::XR::Interaction::Toolkit::Interactables::InteractableFocusMode get_focusMode() ;

/// @brief Method get_gazeTimeToSelect, addr 0xb491acc, size 0x8, virtual true, abstract: false, final true
inline float_t get_gazeTimeToSelect() ;

/// [CompilerGenerated]
/// @brief Method get_getDistanceOverride, addr 0xb4918b0, size 0x8, virtual false, abstract: false, final false
inline ::System::Func_3<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*,::UnityEngine::Vector3,::UnityEngine::XR::Interaction::Toolkit::Interactables::DistanceInfo>* get_getDistanceOverride() ;

/// @brief Method get_hoverEntered, addr 0xb491b2c, size 0x8, virtual true, abstract: false, final true
inline ::UnityEngine::XR::Interaction::Toolkit::HoverEnterEvent* get_hoverEntered() ;

/// @brief Method get_hoverExited, addr 0xb491b3c, size 0x8, virtual true, abstract: false, final true
inline ::UnityEngine::XR::Interaction::Toolkit::HoverExitEvent* get_hoverExited() ;

/// @brief Method get_hoverFilters, addr 0xb491e24, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRFilterList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRHoverFilter*>* get_hoverFilters() ;

/// @brief Method get_hoveringInteractors, addr 0xb49505c, size 0x7c, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor>>* get_hoveringInteractors() ;

/// @brief Method get_interactionGroupsFocusing, addr 0xb491d44, size 0x90, virtual true, abstract: false, final true
inline ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*>* get_interactionGroupsFocusing() ;

/// @brief Method get_interactionLayerMask, addr 0xb49477c, size 0x7c, virtual false, abstract: false, final false
inline ::UnityEngine::LayerMask get_interactionLayerMask() ;

/// @brief Method get_interactionLayers, addr 0xb491a4c, size 0x8, virtual true, abstract: false, final true
inline ::UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask get_interactionLayers() ;

/// @brief Method get_interactionManager, addr 0xb4918c0, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> get_interactionManager() ;

/// @brief Method get_interactionStrengthFilters, addr 0xb491e64, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRFilterList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRInteractionStrengthFilter*>* get_interactionStrengthFilters() ;

/// @brief Method get_interactorsHovering, addr 0xb491bec, size 0x90, virtual true, abstract: false, final true
inline ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*>* get_interactorsHovering() ;

/// @brief Method get_interactorsSelecting, addr 0xb491c8c, size 0x90, virtual true, abstract: false, final true
inline ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*>* get_interactorsSelecting() ;

/// [CompilerGenerated]
/// @brief Method get_isFocused, addr 0xb491dec, size 0x8, virtual true, abstract: false, final true
inline bool get_isFocused() ;

/// [CompilerGenerated]
/// @brief Method get_isHovered, addr 0xb491c7c, size 0x8, virtual true, abstract: false, final true
inline bool get_isHovered() ;

/// [CompilerGenerated]
/// @brief Method get_isSelected, addr 0xb491d34, size 0x8, virtual true, abstract: false, final true
inline bool get_isSelected() ;

/// @brief Method get_largestInteractionStrength, addr 0xb491e6c, size 0x8, virtual true, abstract: false, final true
inline ::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<float_t>* get_largestInteractionStrength() ;

/// @brief Method get_lastFocusExited, addr 0xb491b9c, size 0x8, virtual true, abstract: false, final true
inline ::UnityEngine::XR::Interaction::Toolkit::FocusExitEvent* get_lastFocusExited() ;

/// @brief Method get_lastHoverExited, addr 0xb491b1c, size 0x8, virtual true, abstract: false, final true
inline ::UnityEngine::XR::Interaction::Toolkit::HoverExitEvent* get_lastHoverExited() ;

/// @brief Method get_lastSelectExited, addr 0xb491b5c, size 0x8, virtual true, abstract: false, final true
inline ::UnityEngine::XR::Interaction::Toolkit::SelectExitEvent* get_lastSelectExited() ;

/// @brief Method get_onActivate, addr 0xb4948c8, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* get_onActivate() ;

/// @brief Method get_onDeactivate, addr 0xb4948d4, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* get_onDeactivate() ;

/// @brief Method get_onFirstHoverEnter, addr 0xb4948e0, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* get_onFirstHoverEnter() ;

/// @brief Method get_onFirstHoverEntered, addr 0xb494874, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* get_onFirstHoverEntered() ;

/// @brief Method get_onHoverEnter, addr 0xb4948e8, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* get_onHoverEnter() ;

/// @brief Method get_onHoverEntered, addr 0xb49488c, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* get_onHoverEntered() ;

/// @brief Method get_onHoverExit, addr 0xb4948f0, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* get_onHoverExit() ;

/// @brief Method get_onHoverExited, addr 0xb494898, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* get_onHoverExited() ;

/// @brief Method get_onLastHoverExit, addr 0xb4948f8, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* get_onLastHoverExit() ;

/// @brief Method get_onLastHoverExited, addr 0xb494880, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* get_onLastHoverExited() ;

/// @brief Method get_onSelectCancel, addr 0xb494910, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* get_onSelectCancel() ;

/// @brief Method get_onSelectCanceled, addr 0xb4948bc, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* get_onSelectCanceled() ;

/// @brief Method get_onSelectEnter, addr 0xb494900, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* get_onSelectEnter() ;

/// @brief Method get_onSelectEntered, addr 0xb4948a4, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* get_onSelectEntered() ;

/// @brief Method get_onSelectExit, addr 0xb494908, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* get_onSelectExit() ;

/// @brief Method get_onSelectExited, addr 0xb4948b0, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent* get_onSelectExited() ;

/// @brief Method get_overrideGazeTimeToSelect, addr 0xb491abc, size 0x8, virtual true, abstract: false, final true
inline bool get_overrideGazeTimeToSelect() ;

/// @brief Method get_overrideTimeToAutoDeselectGaze, addr 0xb491adc, size 0x8, virtual true, abstract: false, final true
inline bool get_overrideTimeToAutoDeselectGaze() ;

/// @brief Method get_selectEntered, addr 0xb491b6c, size 0x8, virtual true, abstract: false, final true
inline ::UnityEngine::XR::Interaction::Toolkit::SelectEnterEvent* get_selectEntered() ;

/// @brief Method get_selectExited, addr 0xb491b7c, size 0x8, virtual true, abstract: false, final true
inline ::UnityEngine::XR::Interaction::Toolkit::SelectExitEvent* get_selectExited() ;

/// @brief Method get_selectFilters, addr 0xb491e44, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRFilterList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter*>* get_selectFilters() ;

/// @brief Method get_selectMode, addr 0xb491a6c, size 0x8, virtual true, abstract: false, final true
inline ::UnityEngine::XR::Interaction::Toolkit::Interactables::InteractableSelectMode get_selectMode() ;

/// @brief Method get_selectingInteractor, addr 0xb4950d8, size 0x7c, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor> get_selectingInteractor() ;

/// @brief Method get_startingHoverFilters, addr 0xb491e0c, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* get_startingHoverFilters() ;

/// @brief Method get_startingInteractionStrengthFilters, addr 0xb491e4c, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* get_startingInteractionStrengthFilters() ;

/// @brief Method get_startingSelectFilters, addr 0xb491e2c, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* get_startingSelectFilters() ;

/// @brief Method get_timeToAutoDeselectGaze, addr 0xb491aec, size 0x8, virtual true, abstract: false, final true
inline float_t get_timeToAutoDeselectGaze() ;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Gaze::IXROverridesGazeAutoSelect"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Gaze::IXROverridesGazeAutoSelect* i___UnityEngine__XR__Interaction__Toolkit__Gaze__IXROverridesGazeAutoSelect() noexcept;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable* i___UnityEngine__XR__Interaction__Toolkit__Interactables__IXRActivateInteractable() noexcept;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRFocusInteractable"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRFocusInteractable* i___UnityEngine__XR__Interaction__Toolkit__Interactables__IXRFocusInteractable() noexcept;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable* i___UnityEngine__XR__Interaction__Toolkit__Interactables__IXRHoverInteractable() noexcept;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable* i___UnityEngine__XR__Interaction__Toolkit__Interactables__IXRInteractable() noexcept;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractionStrengthInteractable"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractionStrengthInteractable* i___UnityEngine__XR__Interaction__Toolkit__Interactables__IXRInteractionStrengthInteractable() noexcept;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable* i___UnityEngine__XR__Interaction__Toolkit__Interactables__IXRSelectInteractable() noexcept;

/// [CompilerGenerated]
/// @brief Method remove_registered, addr 0xb4916a0, size 0xb0, virtual true, abstract: false, final true
inline void remove_registered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_unregistered, addr 0xb491800, size 0xb0, virtual true, abstract: false, final true
inline void remove_unregistered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*>*  value) ;

static inline void setStaticF_s_ProcessInteractionStrengthEventMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_s_ProcessInteractionStrengthMarker(::Unity::Profiling::ProfilerMarker  value) ;

/// @brief Method set_activated, addr 0xb491bd4, size 0x8, virtual false, abstract: false, final false
inline void set_activated(::UnityEngine::XR::Interaction::Toolkit::ActivateEvent*  value) ;

/// @brief Method set_allowGazeAssistance, addr 0xb491b04, size 0x8, virtual false, abstract: false, final false
inline void set_allowGazeAssistance(bool  value) ;

/// @brief Method set_allowGazeInteraction, addr 0xb491aa4, size 0x8, virtual false, abstract: false, final false
inline void set_allowGazeInteraction(bool  value) ;

/// @brief Method set_allowGazeSelect, addr 0xb491ab4, size 0x8, virtual false, abstract: false, final false
inline void set_allowGazeSelect(bool  value) ;

/// @brief Method set_customReticle, addr 0xb491a94, size 0x8, virtual false, abstract: false, final false
inline void set_customReticle(::UnityEngine::GameObject*  value) ;

/// @brief Method set_deactivated, addr 0xb491be4, size 0x8, virtual false, abstract: false, final false
inline void set_deactivated(::UnityEngine::XR::Interaction::Toolkit::DeactivateEvent*  value) ;

/// @brief Method set_distanceCalculationMode, addr 0xb491a64, size 0x8, virtual false, abstract: false, final false
inline void set_distanceCalculationMode(::GlobalNamespace::XRBaseInteractable_DistanceCalculationMode  value) ;

/// @brief Method set_firstFocusEntered, addr 0xb491b94, size 0x8, virtual false, abstract: false, final false
inline void set_firstFocusEntered(::UnityEngine::XR::Interaction::Toolkit::FocusEnterEvent*  value) ;

/// @brief Method set_firstHoverEntered, addr 0xb491b14, size 0x8, virtual false, abstract: false, final false
inline void set_firstHoverEntered(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEvent*  value) ;

/// [CompilerGenerated]
/// @brief Method set_firstInteractionGroupFocusing, addr 0xb491ddc, size 0x10, virtual false, abstract: false, final false
inline void set_firstInteractionGroupFocusing(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*  value) ;

/// [CompilerGenerated]
/// @brief Method set_firstInteractorSelecting, addr 0xb491d24, size 0x10, virtual false, abstract: false, final false
inline void set_firstInteractorSelecting(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*  value) ;

/// @brief Method set_firstSelectEntered, addr 0xb491b54, size 0x8, virtual false, abstract: false, final false
inline void set_firstSelectEntered(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEvent*  value) ;

/// @brief Method set_focusEntered, addr 0xb491bb4, size 0x8, virtual false, abstract: false, final false
inline void set_focusEntered(::UnityEngine::XR::Interaction::Toolkit::FocusEnterEvent*  value) ;

/// @brief Method set_focusExited, addr 0xb491bc4, size 0x8, virtual false, abstract: false, final false
inline void set_focusExited(::UnityEngine::XR::Interaction::Toolkit::FocusExitEvent*  value) ;

/// @brief Method set_focusMode, addr 0xb491a84, size 0x8, virtual false, abstract: false, final false
inline void set_focusMode(::UnityEngine::XR::Interaction::Toolkit::Interactables::InteractableFocusMode  value) ;

/// @brief Method set_gazeTimeToSelect, addr 0xb491ad4, size 0x8, virtual false, abstract: false, final false
inline void set_gazeTimeToSelect(float_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_getDistanceOverride, addr 0xb4918b8, size 0x8, virtual false, abstract: false, final false
inline void set_getDistanceOverride(::System::Func_3<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*,::UnityEngine::Vector3,::UnityEngine::XR::Interaction::Toolkit::Interactables::DistanceInfo>*  value) ;

/// @brief Method set_hoverEntered, addr 0xb491b34, size 0x8, virtual false, abstract: false, final false
inline void set_hoverEntered(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEvent*  value) ;

/// @brief Method set_hoverExited, addr 0xb491b44, size 0x8, virtual false, abstract: false, final false
inline void set_hoverExited(::UnityEngine::XR::Interaction::Toolkit::HoverExitEvent*  value) ;

/// @brief Method set_interactionLayerMask, addr 0xb4947f8, size 0x7c, virtual false, abstract: false, final false
inline void set_interactionLayerMask(::UnityEngine::LayerMask  value) ;

/// @brief Method set_interactionLayers, addr 0xb491a54, size 0x8, virtual false, abstract: false, final false
inline void set_interactionLayers(::UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask  value) ;

/// @brief Method set_interactionManager, addr 0xb4918c8, size 0x9c, virtual false, abstract: false, final false
inline void set_interactionManager(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*  value) ;

/// [CompilerGenerated]
/// @brief Method set_isFocused, addr 0xb491df4, size 0x8, virtual false, abstract: false, final false
inline void set_isFocused(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_isHovered, addr 0xb491c84, size 0x8, virtual false, abstract: false, final false
inline void set_isHovered(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_isSelected, addr 0xb491d3c, size 0x8, virtual false, abstract: false, final false
inline void set_isSelected(bool  value) ;

/// @brief Method set_lastFocusExited, addr 0xb491ba4, size 0x8, virtual false, abstract: false, final false
inline void set_lastFocusExited(::UnityEngine::XR::Interaction::Toolkit::FocusExitEvent*  value) ;

/// @brief Method set_lastHoverExited, addr 0xb491b24, size 0x8, virtual false, abstract: false, final false
inline void set_lastHoverExited(::UnityEngine::XR::Interaction::Toolkit::HoverExitEvent*  value) ;

/// @brief Method set_lastSelectExited, addr 0xb491b64, size 0x8, virtual false, abstract: false, final false
inline void set_lastSelectExited(::UnityEngine::XR::Interaction::Toolkit::SelectExitEvent*  value) ;

/// @brief Method set_onActivate, addr 0xb4948d0, size 0x4, virtual false, abstract: false, final false
inline void set_onActivate(::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*  value) ;

/// @brief Method set_onDeactivate, addr 0xb4948dc, size 0x4, virtual false, abstract: false, final false
inline void set_onDeactivate(::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*  value) ;

/// @brief Method set_onFirstHoverEntered, addr 0xb49487c, size 0x4, virtual false, abstract: false, final false
inline void set_onFirstHoverEntered(::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*  value) ;

/// @brief Method set_onHoverEntered, addr 0xb494894, size 0x4, virtual false, abstract: false, final false
inline void set_onHoverEntered(::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*  value) ;

/// @brief Method set_onHoverExited, addr 0xb4948a0, size 0x4, virtual false, abstract: false, final false
inline void set_onHoverExited(::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*  value) ;

/// @brief Method set_onLastHoverExited, addr 0xb494888, size 0x4, virtual false, abstract: false, final false
inline void set_onLastHoverExited(::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*  value) ;

/// @brief Method set_onSelectCanceled, addr 0xb4948c4, size 0x4, virtual false, abstract: false, final false
inline void set_onSelectCanceled(::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*  value) ;

/// @brief Method set_onSelectEntered, addr 0xb4948ac, size 0x4, virtual false, abstract: false, final false
inline void set_onSelectEntered(::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*  value) ;

/// @brief Method set_onSelectExited, addr 0xb4948b8, size 0x4, virtual false, abstract: false, final false
inline void set_onSelectExited(::UnityEngine::XR::Interaction::Toolkit::XRInteractableEvent*  value) ;

/// @brief Method set_overrideGazeTimeToSelect, addr 0xb491ac4, size 0x8, virtual false, abstract: false, final false
inline void set_overrideGazeTimeToSelect(bool  value) ;

/// @brief Method set_overrideTimeToAutoDeselectGaze, addr 0xb491ae4, size 0x8, virtual false, abstract: false, final false
inline void set_overrideTimeToAutoDeselectGaze(bool  value) ;

/// @brief Method set_selectEntered, addr 0xb491b74, size 0x8, virtual false, abstract: false, final false
inline void set_selectEntered(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEvent*  value) ;

/// @brief Method set_selectExited, addr 0xb491b84, size 0x8, virtual false, abstract: false, final false
inline void set_selectExited(::UnityEngine::XR::Interaction::Toolkit::SelectExitEvent*  value) ;

/// @brief Method set_selectMode, addr 0xb491a74, size 0x8, virtual false, abstract: false, final false
inline void set_selectMode(::UnityEngine::XR::Interaction::Toolkit::Interactables::InteractableSelectMode  value) ;

/// @brief Method set_selectingInteractor, addr 0xb495154, size 0x7c, virtual false, abstract: false, final false
inline void set_selectingInteractor(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*  value) ;

/// @brief Method set_startingHoverFilters, addr 0xb491e14, size 0x10, virtual false, abstract: false, final false
inline void set_startingHoverFilters(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  value) ;

/// @brief Method set_startingInteractionStrengthFilters, addr 0xb491e54, size 0x10, virtual false, abstract: false, final false
inline void set_startingInteractionStrengthFilters(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  value) ;

/// @brief Method set_startingSelectFilters, addr 0xb491e34, size 0x10, virtual false, abstract: false, final false
inline void set_startingSelectFilters(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  value) ;

/// @brief Method set_timeToAutoDeselectGaze, addr 0xb491af4, size 0x8, virtual false, abstract: false, final false
inline void set_timeToAutoDeselectGaze(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRBaseInteractable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRBaseInteractable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRBaseInteractable(XRBaseInteractable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRBaseInteractable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRBaseInteractable(XRBaseInteractable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11521};

/// @brief Field k_AttachCustomReticleDeprecated offset 0xffffffff size 0x8
static constexpr ::ConstString  k_AttachCustomReticleDeprecated{u"AttachCustomReticle(XRBaseInteractor) has been deprecated. Use AttachCustomReticle(IXRInteractor) instead."};

/// @brief Field k_GetDistanceSqrToInteractorDeprecated offset 0xffffffff size 0x8
static constexpr ::ConstString  k_GetDistanceSqrToInteractorDeprecated{u"GetDistanceSqrToInteractor(XRBaseInteractor) has been deprecated. Use GetDistanceSqrToInteractor(IXRInteractor) instead."};

/// @brief Field k_HoveringInteractorsDeprecated offset 0xffffffff size 0x8
static constexpr ::ConstString  k_HoveringInteractorsDeprecated{u"hoveringInteractors has been deprecated. Use interactorsHovering instead."};

/// @brief Field k_InteractionLayerMaskDeprecated offset 0xffffffff size 0x8
static constexpr ::ConstString  k_InteractionLayerMaskDeprecated{u"interactionLayerMask has been deprecated. Use interactionLayers instead."};

/// @brief Field k_InteractionStrengthHover offset 0xffffffff size 0x4
static constexpr float_t  k_InteractionStrengthHover{static_cast<float_t>(0.0f)};

/// @brief Field k_InteractionStrengthSelect offset 0xffffffff size 0x4
static constexpr float_t  k_InteractionStrengthSelect{static_cast<float_t>(1.0f)};

/// @brief Field k_IsHoverableByDeprecated offset 0xffffffff size 0x8
static constexpr ::ConstString  k_IsHoverableByDeprecated{u"IsHoverableBy(XRBaseInteractor) has been deprecated. Use IsHoverableBy(IXRHoverInteractor) instead."};

/// @brief Field k_IsSelectableByDeprecated offset 0xffffffff size 0x8
static constexpr ::ConstString  k_IsSelectableByDeprecated{u"IsSelectableBy(XRBaseInteractor) has been deprecated. Use IsSelectableBy(IXRSelectInteractor) instead."};

/// @brief Field k_OnActivateDeprecated offset 0xffffffff size 0x8
static constexpr ::ConstString  k_OnActivateDeprecated{u"OnActivate(XRBaseInteractor) has been deprecated. Use OnActivated(ActivateEventArgs) instead."};

/// @brief Field k_OnDeactivateDeprecated offset 0xffffffff size 0x8
static constexpr ::ConstString  k_OnDeactivateDeprecated{u"OnDeactivate(XRBaseInteractor) has been deprecated. Use OnDeactivated(DeactivateEventArgs) instead."};

/// @brief Field k_OnHoverEnteredDeprecated offset 0xffffffff size 0x8
static constexpr ::ConstString  k_OnHoverEnteredDeprecated{u"OnHoverEntered(XRBaseInteractor) has been deprecated. Use OnHoverEntered(HoverEnterEventArgs) instead."};

/// @brief Field k_OnHoverEnteringDeprecated offset 0xffffffff size 0x8
static constexpr ::ConstString  k_OnHoverEnteringDeprecated{u"OnHoverEntering(XRBaseInteractor) has been deprecated. Use OnHoverEntering(HoverEnterEventArgs) instead."};

/// @brief Field k_OnHoverExitedDeprecated offset 0xffffffff size 0x8
static constexpr ::ConstString  k_OnHoverExitedDeprecated{u"OnHoverExited(XRBaseInteractor) has been deprecated. Use OnHoverExited(HoverExitEventArgs) instead."};

/// @brief Field k_OnHoverExitingDeprecated offset 0xffffffff size 0x8
static constexpr ::ConstString  k_OnHoverExitingDeprecated{u"OnHoverExiting(XRBaseInteractor) has been deprecated. Use OnHoverExiting(HoverExitEventArgs) instead."};

/// @brief Field k_OnSelectCanceledDeprecated offset 0xffffffff size 0x8
static constexpr ::ConstString  k_OnSelectCanceledDeprecated{u"OnSelectCanceled(XRBaseInteractor) has been deprecated. Use OnSelectExited(SelectExitEventArgs) and check for args.isCanceled instead."};

/// @brief Field k_OnSelectCancelingDeprecated offset 0xffffffff size 0x8
static constexpr ::ConstString  k_OnSelectCancelingDeprecated{u"OnSelectCanceling(XRBaseInteractor) has been deprecated. Use OnSelectExiting(SelectExitEventArgs) and check for args.isCanceled instead."};

/// @brief Field k_OnSelectEnteredDeprecated offset 0xffffffff size 0x8
static constexpr ::ConstString  k_OnSelectEnteredDeprecated{u"OnSelectEntered(XRBaseInteractor) has been deprecated. Use OnSelectEntered(SelectEnterEventArgs) instead."};

/// @brief Field k_OnSelectEnteringDeprecated offset 0xffffffff size 0x8
static constexpr ::ConstString  k_OnSelectEnteringDeprecated{u"OnSelectEntering(XRBaseInteractor) has been deprecated. Use OnSelectEntering(SelectEnterEventArgs) instead."};

/// @brief Field k_OnSelectExitedDeprecated offset 0xffffffff size 0x8
static constexpr ::ConstString  k_OnSelectExitedDeprecated{u"OnSelectExited(XRBaseInteractor) has been deprecated. Use OnSelectExited(SelectExitEventArgs) and check for !args.isCanceled instead."};

/// @brief Field k_OnSelectExitingDeprecated offset 0xffffffff size 0x8
static constexpr ::ConstString  k_OnSelectExitingDeprecated{u"OnSelectExiting(XRBaseInteractor) has been deprecated. Use OnSelectExiting(SelectExitEventArgs) and check for !args.isCanceled instead."};

/// @brief Field k_RemoveCustomReticleDeprecated offset 0xffffffff size 0x8
static constexpr ::ConstString  k_RemoveCustomReticleDeprecated{u"RemoveCustomReticle(XRBaseInteractor) has been deprecated. Use RemoveCustomReticle(IXRInteractor) instead."};

/// @brief Field k_SelectingInteractorDeprecated offset 0xffffffff size 0x8
static constexpr ::ConstString  k_SelectingInteractorDeprecated{u"selectingInteractor has been deprecated. Use interactorsSelecting, GetOldestInteractorSelecting, or isSelected for similar functionality."};

/// [CompilerGenerated]
/// @brief Field registered, offset: 0x20, size: 0x8, def value: None
 ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*>*  ___registered;

/// [CompilerGenerated]
/// @brief Field unregistered, offset: 0x28, size: 0x8, def value: None
 ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*>*  ___unregistered;

/// [CompilerGenerated]
/// @brief Field <getDistanceOverride>k__BackingField, offset: 0x30, size: 0x8, def value: None
 ::System::Func_3<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*,::UnityEngine::Vector3,::UnityEngine::XR::Interaction::Toolkit::Interactables::DistanceInfo>*  ____getDistanceOverride_k__BackingField;

/// [SerializeField]
/// @brief Field m_InteractionManager, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>  ___m_InteractionManager;

/// [SerializeField]
/// @brief Field m_Colliders, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Collider>>*  ___m_Colliders;

/// [SerializeField]
/// @brief Field m_InteractionLayers, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask  ___m_InteractionLayers;

/// [SerializeField]
/// @brief Field m_DistanceCalculationMode, offset: 0x50, size: 0x4, def value: None
 ::GlobalNamespace::XRBaseInteractable_DistanceCalculationMode  ___m_DistanceCalculationMode;

/// [SerializeField]
/// @brief Field m_SelectMode, offset: 0x54, size: 0x4, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Interactables::InteractableSelectMode  ___m_SelectMode;

/// [SerializeField]
/// @brief Field m_FocusMode, offset: 0x58, size: 0x4, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Interactables::InteractableFocusMode  ___m_FocusMode;

/// [SerializeField]
/// @brief Field m_CustomReticle, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___m_CustomReticle;

/// [SerializeField]
/// @brief Field m_AllowGazeInteraction, offset: 0x68, size: 0x1, def value: None
 bool  ___m_AllowGazeInteraction;

/// [SerializeField]
/// @brief Field m_AllowGazeSelect, offset: 0x69, size: 0x1, def value: None
 bool  ___m_AllowGazeSelect;

/// [SerializeField]
/// @brief Field m_OverrideGazeTimeToSelect, offset: 0x6a, size: 0x1, def value: None
 bool  ___m_OverrideGazeTimeToSelect;

/// [SerializeField]
/// @brief Field m_GazeTimeToSelect, offset: 0x6c, size: 0x4, def value: None
 float_t  ___m_GazeTimeToSelect;

/// [SerializeField]
/// @brief Field m_OverrideTimeToAutoDeselectGaze, offset: 0x70, size: 0x1, def value: None
 bool  ___m_OverrideTimeToAutoDeselectGaze;

/// [SerializeField]
/// @brief Field m_TimeToAutoDeselectGaze, offset: 0x74, size: 0x4, def value: None
 float_t  ___m_TimeToAutoDeselectGaze;

/// [SerializeField]
/// @brief Field m_AllowGazeAssistance, offset: 0x78, size: 0x1, def value: None
 bool  ___m_AllowGazeAssistance;

/// [SerializeField]
/// @brief Field m_FirstHoverEntered, offset: 0x80, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::HoverEnterEvent*  ___m_FirstHoverEntered;

/// [SerializeField]
/// @brief Field m_LastHoverExited, offset: 0x88, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::HoverExitEvent*  ___m_LastHoverExited;

/// [SerializeField]
/// @brief Field m_HoverEntered, offset: 0x90, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::HoverEnterEvent*  ___m_HoverEntered;

/// [SerializeField]
/// @brief Field m_HoverExited, offset: 0x98, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::HoverExitEvent*  ___m_HoverExited;

/// [SerializeField]
/// @brief Field m_FirstSelectEntered, offset: 0xa0, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::SelectEnterEvent*  ___m_FirstSelectEntered;

/// [SerializeField]
/// @brief Field m_LastSelectExited, offset: 0xa8, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::SelectExitEvent*  ___m_LastSelectExited;

/// [SerializeField]
/// @brief Field m_SelectEntered, offset: 0xb0, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::SelectEnterEvent*  ___m_SelectEntered;

/// [SerializeField]
/// @brief Field m_SelectExited, offset: 0xb8, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::SelectExitEvent*  ___m_SelectExited;

/// [SerializeField]
/// @brief Field m_FirstFocusEntered, offset: 0xc0, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::FocusEnterEvent*  ___m_FirstFocusEntered;

/// [SerializeField]
/// @brief Field m_LastFocusExited, offset: 0xc8, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::FocusExitEvent*  ___m_LastFocusExited;

/// [SerializeField]
/// @brief Field m_FocusEntered, offset: 0xd0, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::FocusEnterEvent*  ___m_FocusEntered;

/// [SerializeField]
/// @brief Field m_FocusExited, offset: 0xd8, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::FocusExitEvent*  ___m_FocusExited;

/// [SerializeField]
/// @brief Field m_Activated, offset: 0xe0, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::ActivateEvent*  ___m_Activated;

/// [SerializeField]
/// @brief Field m_Deactivated, offset: 0xe8, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::DeactivateEvent*  ___m_Deactivated;

/// @brief Field m_InteractorsHovering, offset: 0xf0, size: 0x8, def value: None
 ::Unity::XR::CoreUtils::Collections::HashSetList_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*>*  ___m_InteractorsHovering;

/// [CompilerGenerated]
/// @brief Field <isHovered>k__BackingField, offset: 0xf8, size: 0x1, def value: None
 bool  ____isHovered_k__BackingField;

/// @brief Field m_InteractorsSelecting, offset: 0x100, size: 0x8, def value: None
 ::Unity::XR::CoreUtils::Collections::HashSetList_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*>*  ___m_InteractorsSelecting;

/// [CompilerGenerated]
/// @brief Field <firstInteractorSelecting>k__BackingField, offset: 0x108, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*  ____firstInteractorSelecting_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <isSelected>k__BackingField, offset: 0x110, size: 0x1, def value: None
 bool  ____isSelected_k__BackingField;

/// @brief Field m_InteractionGroupsFocusing, offset: 0x118, size: 0x8, def value: None
 ::Unity::XR::CoreUtils::Collections::HashSetList_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*>*  ___m_InteractionGroupsFocusing;

/// [CompilerGenerated]
/// @brief Field <firstInteractionGroupFocusing>k__BackingField, offset: 0x120, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*  ____firstInteractionGroupFocusing_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <isFocused>k__BackingField, offset: 0x128, size: 0x1, def value: None
 bool  ____isFocused_k__BackingField;

/// [SerializeField]
/// [RequireInterface(typeof(UnityEngine.XR.Interaction.Toolkit.Filtering.IXRHoverFilter))]
/// @brief Field m_StartingHoverFilters, offset: 0x130, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  ___m_StartingHoverFilters;

/// @brief Field m_HoverFilters, offset: 0x138, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRHoverFilter*>*  ___m_HoverFilters;

/// [SerializeField]
/// [RequireInterface(typeof(UnityEngine.XR.Interaction.Toolkit.Filtering.IXRSelectFilter))]
/// @brief Field m_StartingSelectFilters, offset: 0x140, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  ___m_StartingSelectFilters;

/// @brief Field m_SelectFilters, offset: 0x148, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter*>*  ___m_SelectFilters;

/// [SerializeField]
/// [RequireInterface(typeof(UnityEngine.XR.Interaction.Toolkit.Filtering.IXRInteractionStrengthFilter))]
/// @brief Field m_StartingInteractionStrengthFilters, offset: 0x150, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  ___m_StartingInteractionStrengthFilters;

/// @brief Field m_InteractionStrengthFilters, offset: 0x158, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRInteractionStrengthFilter*>*  ___m_InteractionStrengthFilters;

/// @brief Field m_LargestInteractionStrength, offset: 0x160, size: 0x8, def value: None
 ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<float_t>*  ___m_LargestInteractionStrength;

/// @brief Field m_ClearedLargestInteractionStrength, offset: 0x168, size: 0x1, def value: None
 bool  ___m_ClearedLargestInteractionStrength;

/// @brief Field m_AttachPoseOnSelect, offset: 0x170, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*,::UnityEngine::Pose>*  ___m_AttachPoseOnSelect;

/// @brief Field m_LocalAttachPoseOnSelect, offset: 0x178, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*,::UnityEngine::Pose>*  ___m_LocalAttachPoseOnSelect;

/// @brief Field m_ReticleCache, offset: 0x180, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*,::UnityW<::UnityEngine::GameObject>>*  ___m_ReticleCache;

/// @brief Field m_VariableSelectInteractors, offset: 0x188, size: 0x8, def value: None
 ::Unity::XR::CoreUtils::Collections::HashSetList_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInputInteractor>>*  ___m_VariableSelectInteractors;

/// @brief Field m_InteractionStrengths, offset: 0x190, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*,float_t>*  ___m_InteractionStrengths;

/// @brief Field m_RegisteredInteractionManager, offset: 0x198, size: 0x8, def value: None
 ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>  ___m_RegisteredInteractionManager;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable, ___registered) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable, ___unregistered) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable, ____getDistanceOverride_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable, ___m_InteractionManager) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable, ___m_Colliders) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable, ___m_InteractionLayers) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable, ___m_DistanceCalculationMode) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable, ___m_SelectMode) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable, ___m_FocusMode) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable, ___m_CustomReticle) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable, ___m_AllowGazeInteraction) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable, ___m_AllowGazeSelect) == 0x69, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable, ___m_OverrideGazeTimeToSelect) == 0x6a, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable, ___m_GazeTimeToSelect) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable, ___m_OverrideTimeToAutoDeselectGaze) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable, ___m_TimeToAutoDeselectGaze) == 0x74, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable, ___m_AllowGazeAssistance) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable, ___m_FirstHoverEntered) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable, ___m_LastHoverExited) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable, ___m_HoverEntered) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable, ___m_HoverExited) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable, ___m_FirstSelectEntered) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable, ___m_LastSelectExited) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable, ___m_SelectEntered) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable, ___m_SelectExited) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable, ___m_FirstFocusEntered) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable, ___m_LastFocusExited) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable, ___m_FocusEntered) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable, ___m_FocusExited) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable, ___m_Activated) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable, ___m_Deactivated) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable, ___m_InteractorsHovering) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable, ____isHovered_k__BackingField) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable, ___m_InteractorsSelecting) == 0x100, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable, ____firstInteractorSelecting_k__BackingField) == 0x108, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable, ____isSelected_k__BackingField) == 0x110, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable, ___m_InteractionGroupsFocusing) == 0x118, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable, ____firstInteractionGroupFocusing_k__BackingField) == 0x120, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable, ____isFocused_k__BackingField) == 0x128, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable, ___m_StartingHoverFilters) == 0x130, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable, ___m_HoverFilters) == 0x138, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable, ___m_StartingSelectFilters) == 0x140, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable, ___m_SelectFilters) == 0x148, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable, ___m_StartingInteractionStrengthFilters) == 0x150, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable, ___m_InteractionStrengthFilters) == 0x158, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable, ___m_LargestInteractionStrength) == 0x160, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable, ___m_ClearedLargestInteractionStrength) == 0x168, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable, ___m_AttachPoseOnSelect) == 0x170, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable, ___m_LocalAttachPoseOnSelect) == 0x178, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable, ___m_ReticleCache) == 0x180, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable, ___m_VariableSelectInteractors) == 0x188, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable, ___m_InteractionStrengths) == 0x190, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable, ___m_RegisteredInteractionManager) == 0x198, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable) == 0x1a0, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Interactables
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Interactables.XRBaseInteractable/<>c
class CORDL_TYPE XRBaseInteractable___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable___c*  __9;

/// @brief Field <>9__190_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__190_0, put=setStaticF___9__190_0)) ::System::Predicate_1<::UnityW<::UnityEngine::Collider>>*  __9__190_0;

static inline ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable___c* New_ctor() ;

/// @brief Method <Awake>b__190_0, addr 0xb495bf8, size 0x18, virtual false, abstract: false, final false
inline bool _Awake_b__190_0(::UnityEngine::Collider*  col) ;

/// @brief Method .ctor, addr 0xb495bf0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable___c* getStaticF___9() ;

static inline ::System::Predicate_1<::UnityW<::UnityEngine::Collider>>* getStaticF___9__190_0() ;

static inline void setStaticF___9(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable___c*  value) ;

static inline void setStaticF___9__190_0(::System::Predicate_1<::UnityW<::UnityEngine::Collider>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRBaseInteractable___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRBaseInteractable___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRBaseInteractable___c(XRBaseInteractable___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRBaseInteractable___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRBaseInteractable___c(XRBaseInteractable___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11520};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable___c) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Interactables
