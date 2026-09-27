#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Interactors/XRBaseInteractor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__InteractorHandedness_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/Interactors/zzzz__TargetPriorityMode_def.hpp"
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__InteractionLayerMask_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(XRBaseInteractor)
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
template<typename T>
struct Nullable_1;
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
class IXRSelectFilter;
}
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
class IXRTargetFilter;
}
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
class XRBaseTargetFilter;
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
class XRBaseInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class IXRGroupMember;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class IXRHoverInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class IXRInteractionGroup;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class IXRInteractionStrengthInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class IXRInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class IXRSelectInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class IXRTargetPriorityInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
struct InteractorHandedness;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
struct TargetPriorityMode;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
template<typename T>
class ExposedRegistrationList_1;
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
struct InteractionLayerMask;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class InteractorRegisteredEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class InteractorUnregisteredEventArgs;
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
class XRInteractionManager;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class XRInteractorEvent;
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
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class XRBaseInteractor;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*, "UnityEngine.XR.Interaction.Toolkit.Interactors", "XRBaseInteractor");
// [MovedFrom("UnityEngine.XR.Interaction.Toolkit")]
// [SelectionBase]
// [DisallowMultipleComponent]
// [DefaultExecutionOrder(-99)]
// Dependencies Unity.Profiling.ProfilerMarker, UnityEngine.MonoBehaviour, UnityEngine.XR.Interaction.Toolkit.InteractionLayerMask, UnityEngine.XR.Interaction.Toolkit.Interactors.InteractorHandedness, UnityEngine.XR.Interaction.Toolkit.Interactors.TargetPriorityMode
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Interactors.XRBaseInteractor
class CORDL_TYPE XRBaseInteractor : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field <containingGroup>k__BackingField, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__containingGroup_k__BackingField, put=__cordl_internal_set__containingGroup_k__BackingField)) ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*  _containingGroup_k__BackingField;

/// @brief Field <firstInteractableSelected>k__BackingField, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get__firstInteractableSelected_k__BackingField, put=__cordl_internal_set__firstInteractableSelected_k__BackingField)) ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*  _firstInteractableSelected_k__BackingField;

/// @brief Field <hasHover>k__BackingField, offset 0xa8, size 0x1 
 __declspec(property(get=__cordl_internal_get__hasHover_k__BackingField, put=__cordl_internal_set__hasHover_k__BackingField)) bool  _hasHover_k__BackingField;

/// @brief Field <hasSelection>k__BackingField, offset 0xc0, size 0x1 
 __declspec(property(get=__cordl_internal_get__hasSelection_k__BackingField, put=__cordl_internal_set__hasSelection_k__BackingField)) bool  _hasSelection_k__BackingField;

/// @brief Field <targetPriorityMode>k__BackingField, offset 0x134, size 0x4 
 __declspec(property(get=__cordl_internal_get__targetPriorityMode_k__BackingField, put=__cordl_internal_set__targetPriorityMode_k__BackingField)) ::UnityEngine::XR::Interaction::Toolkit::Interactors::TargetPriorityMode  _targetPriorityMode_k__BackingField;

/// @brief Field <targetsForSelection>k__BackingField, offset 0x138, size 0x8 
 __declspec(property(get=__cordl_internal_get__targetsForSelection_k__BackingField, put=__cordl_internal_set__targetsForSelection_k__BackingField)) ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*>*  _targetsForSelection_k__BackingField;

 __declspec(property(get=get_allowHover, put=set_allowHover)) bool  allowHover;

 __declspec(property(get=get_allowSelect, put=set_allowSelect)) bool  allowSelect;

 __declspec(property(get=get_attachTransform, put=set_attachTransform)) ::UnityW<::UnityEngine::Transform>  attachTransform;

 __declspec(property(get=get_containingGroup, put=set_containingGroup)) ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*  containingGroup;

 __declspec(property(get=get_disableVisualsWhenBlockedInGroup, put=set_disableVisualsWhenBlockedInGroup)) bool  disableVisualsWhenBlockedInGroup;

/// @brief [Obsolete("enableInteractions has been deprecated. Use allowHover and allowSelect instead.", true)]
 __declspec(property(get=get_enableInteractions, put=set_enableInteractions)) bool  enableInteractions;

 __declspec(property(get=get_firstInteractableSelected, put=set_firstInteractableSelected)) ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*  firstInteractableSelected;

 __declspec(property(get=get_handedness, put=set_handedness)) ::UnityEngine::XR::Interaction::Toolkit::Interactors::InteractorHandedness  handedness;

 __declspec(property(get=get_hasHover, put=set_hasHover)) bool  hasHover;

 __declspec(property(get=get_hasSelection, put=set_hasSelection)) bool  hasSelection;

 __declspec(property(get=get_hoverEntered, put=set_hoverEntered)) ::UnityEngine::XR::Interaction::Toolkit::HoverEnterEvent*  hoverEntered;

 __declspec(property(get=get_hoverExited, put=set_hoverExited)) ::UnityEngine::XR::Interaction::Toolkit::HoverExitEvent*  hoverExited;

 __declspec(property(get=get_hoverFilters)) ::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRFilterList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRHoverFilter*>*  hoverFilters;

/// @brief [Obsolete("hoverTargets has been deprecated. Use interactablesHovered instead.", true)]
 __declspec(property(get=get_hoverTargets)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable>>*  hoverTargets;

 __declspec(property(get=get_interactablesHovered)) ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*>*  interactablesHovered;

 __declspec(property(get=get_interactablesSelected)) ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*>*  interactablesSelected;

/// @brief [Obsolete("interactionLayerMask has been deprecated. Use interactionLayers instead.", true)]
 __declspec(property(get=get_interactionLayerMask, put=set_interactionLayerMask)) ::UnityEngine::LayerMask  interactionLayerMask;

 __declspec(property(get=get_interactionLayers, put=set_interactionLayers)) ::UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask  interactionLayers;

 __declspec(property(get=get_interactionManager, put=set_interactionManager)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>  interactionManager;

 __declspec(property(get=get_isHoverActive)) bool  isHoverActive;

 __declspec(property(get=get_isPerformingManualInteraction)) bool  isPerformingManualInteraction;

 __declspec(property(get=get_isSelectActive)) bool  isSelectActive;

 __declspec(property(get=get_keepSelectedTargetValid, put=set_keepSelectedTargetValid)) bool  keepSelectedTargetValid;

 __declspec(property(get=get_largestInteractionStrength)) ::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<float_t>*  largestInteractionStrength;

/// @brief Field m_AllowHover, offset 0x98, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_AllowHover, put=__cordl_internal_set_m_AllowHover)) bool  m_AllowHover;

/// @brief Field m_AllowSelect, offset 0x99, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_AllowSelect, put=__cordl_internal_set_m_AllowSelect)) bool  m_AllowSelect;

/// @brief Field m_AttachPoseOnSelect, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AttachPoseOnSelect, put=__cordl_internal_set_m_AttachPoseOnSelect)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*,::UnityEngine::Pose>*  m_AttachPoseOnSelect;

/// @brief Field m_AttachTransform, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_AttachTransform, put=__cordl_internal_set_m_AttachTransform)) ::UnityW<::UnityEngine::Transform>  m_AttachTransform;

/// @brief Field m_ClearedLargestInteractionStrength, offset 0xf0, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_ClearedLargestInteractionStrength, put=__cordl_internal_set_m_ClearedLargestInteractionStrength)) bool  m_ClearedLargestInteractionStrength;

/// @brief Field m_DisableVisualsWhenBlockedInGroup, offset 0x59, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_DisableVisualsWhenBlockedInGroup, put=__cordl_internal_set_m_DisableVisualsWhenBlockedInGroup)) bool  m_DisableVisualsWhenBlockedInGroup;

/// @brief Field m_FailedToFindXROrigin, offset 0x131, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_FailedToFindXROrigin, put=__cordl_internal_set_m_FailedToFindXROrigin)) bool  m_FailedToFindXROrigin;

/// @brief Field m_Handedness, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_Handedness, put=__cordl_internal_set_m_Handedness)) ::UnityEngine::XR::Interaction::Toolkit::Interactors::InteractorHandedness  m_Handedness;

/// @brief Field m_HasXROrigin, offset 0x130, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_HasXROrigin, put=__cordl_internal_set_m_HasXROrigin)) bool  m_HasXROrigin;

/// @brief Field m_HoverEntered, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_HoverEntered, put=__cordl_internal_set_m_HoverEntered)) ::UnityEngine::XR::Interaction::Toolkit::HoverEnterEvent*  m_HoverEntered;

/// @brief Field m_HoverExited, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_HoverExited, put=__cordl_internal_set_m_HoverExited)) ::UnityEngine::XR::Interaction::Toolkit::HoverExitEvent*  m_HoverExited;

/// @brief Field m_HoverFilters, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_HoverFilters, put=__cordl_internal_set_m_HoverFilters)) ::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRHoverFilter*>*  m_HoverFilters;

/// @brief Field m_InteractablesHovered, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_InteractablesHovered, put=__cordl_internal_set_m_InteractablesHovered)) ::Unity::XR::CoreUtils::Collections::HashSetList_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*>*  m_InteractablesHovered;

/// @brief Field m_InteractablesSelected, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_InteractablesSelected, put=__cordl_internal_set_m_InteractablesSelected)) ::Unity::XR::CoreUtils::Collections::HashSetList_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*>*  m_InteractablesSelected;

/// @brief Field m_InteractionLayers, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_InteractionLayers, put=__cordl_internal_set_m_InteractionLayers)) ::UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask  m_InteractionLayers;

/// @brief Field m_InteractionManager, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_InteractionManager, put=__cordl_internal_set_m_InteractionManager)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>  m_InteractionManager;

/// @brief Field m_InteractionStrengthInteractables, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_InteractionStrengthInteractables, put=__cordl_internal_set_m_InteractionStrengthInteractables)) ::Unity::XR::CoreUtils::Collections::HashSetList_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractionStrengthInteractable*>*  m_InteractionStrengthInteractables;

/// @brief Field m_InteractionStrengths, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_InteractionStrengths, put=__cordl_internal_set_m_InteractionStrengths)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*,float_t>*  m_InteractionStrengths;

/// @brief Field m_IsPerformingManualInteraction, offset 0x9a, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_IsPerformingManualInteraction, put=__cordl_internal_set_m_IsPerformingManualInteraction)) bool  m_IsPerformingManualInteraction;

/// @brief Field m_KeepSelectedTargetValid, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_KeepSelectedTargetValid, put=__cordl_internal_set_m_KeepSelectedTargetValid)) bool  m_KeepSelectedTargetValid;

/// @brief Field m_LargestInteractionStrength, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LargestInteractionStrength, put=__cordl_internal_set_m_LargestInteractionStrength)) ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<float_t>*  m_LargestInteractionStrength;

/// @brief Field m_LocalAttachPoseOnSelect, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_LocalAttachPoseOnSelect, put=__cordl_internal_set_m_LocalAttachPoseOnSelect)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*,::UnityEngine::Pose>*  m_LocalAttachPoseOnSelect;

/// @brief Field m_ManualInteractionInteractable, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ManualInteractionInteractable, put=__cordl_internal_set_m_ManualInteractionInteractable)) ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*  m_ManualInteractionInteractable;

/// @brief Field m_RegisteredInteractionManager, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_RegisteredInteractionManager, put=__cordl_internal_set_m_RegisteredInteractionManager)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>  m_RegisteredInteractionManager;

/// @brief Field m_SelectEntered, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SelectEntered, put=__cordl_internal_set_m_SelectEntered)) ::UnityEngine::XR::Interaction::Toolkit::SelectEnterEvent*  m_SelectEntered;

/// @brief Field m_SelectExited, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SelectExited, put=__cordl_internal_set_m_SelectExited)) ::UnityEngine::XR::Interaction::Toolkit::SelectExitEvent*  m_SelectExited;

/// @brief Field m_SelectFilters, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SelectFilters, put=__cordl_internal_set_m_SelectFilters)) ::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter*>*  m_SelectFilters;

/// @brief Field m_StartingHoverFilters, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_StartingHoverFilters, put=__cordl_internal_set_m_StartingHoverFilters)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  m_StartingHoverFilters;

/// @brief Field m_StartingSelectFilters, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_StartingSelectFilters, put=__cordl_internal_set_m_StartingSelectFilters)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  m_StartingSelectFilters;

/// @brief Field m_StartingSelectedInteractable, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_StartingSelectedInteractable, put=__cordl_internal_set_m_StartingSelectedInteractable)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable>  m_StartingSelectedInteractable;

/// @brief Field m_StartingTargetFilter, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_StartingTargetFilter, put=__cordl_internal_set_m_StartingTargetFilter)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRBaseTargetFilter>  m_StartingTargetFilter;

/// @brief Field m_TargetFilter, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_TargetFilter, put=__cordl_internal_set_m_TargetFilter)) ::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRTargetFilter*  m_TargetFilter;

/// @brief Field m_XROriginTransform, offset 0x128, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_XROriginTransform, put=__cordl_internal_set_m_XROriginTransform)) ::UnityW<::UnityEngine::Transform>  m_XROriginTransform;

/// @brief [Obsolete("onHoverEnter has been deprecated. Use onHoverEntered instead. (UnityUpgradable) -> onHoverEntered", true)]
 __declspec(property(get=get_onHoverEnter)) ::UnityEngine::XR::Interaction::Toolkit::XRInteractorEvent*  onHoverEnter;

/// @brief [Obsolete("onHoverEntered has been deprecated. Use hoverEntered with updated signature instead.", true)]
 __declspec(property(get=get_onHoverEntered, put=set_onHoverEntered)) ::UnityEngine::XR::Interaction::Toolkit::XRInteractorEvent*  onHoverEntered;

/// @brief [Obsolete("onHoverExit has been deprecated. Use onHoverExited instead. (UnityUpgradable) -> onHoverExited", true)]
 __declspec(property(get=get_onHoverExit)) ::UnityEngine::XR::Interaction::Toolkit::XRInteractorEvent*  onHoverExit;

/// @brief [Obsolete("onHoverExited has been deprecated. Use hoverExited with updated signature instead.", true)]
 __declspec(property(get=get_onHoverExited, put=set_onHoverExited)) ::UnityEngine::XR::Interaction::Toolkit::XRInteractorEvent*  onHoverExited;

/// @brief [Obsolete("onSelectEnter has been deprecated. Use onSelectEntered instead. (UnityUpgradable) -> onSelectEntered", true)]
 __declspec(property(get=get_onSelectEnter)) ::UnityEngine::XR::Interaction::Toolkit::XRInteractorEvent*  onSelectEnter;

/// @brief [Obsolete("onSelectEntered has been deprecated. Use selectEntered with updated signature instead.", true)]
 __declspec(property(get=get_onSelectEntered, put=set_onSelectEntered)) ::UnityEngine::XR::Interaction::Toolkit::XRInteractorEvent*  onSelectEntered;

/// @brief [Obsolete("onSelectExit has been deprecated. Use onSelectExited instead. (UnityUpgradable) -> onSelectExited", true)]
 __declspec(property(get=get_onSelectExit)) ::UnityEngine::XR::Interaction::Toolkit::XRInteractorEvent*  onSelectExit;

/// @brief [Obsolete("onSelectExited has been deprecated. Use selectExited with updated signature instead.", true)]
 __declspec(property(get=get_onSelectExited, put=set_onSelectExited)) ::UnityEngine::XR::Interaction::Toolkit::XRInteractorEvent*  onSelectExited;

/// @brief Field registered, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_registered, put=__cordl_internal_set_registered)) ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs*>*  registered;

/// @brief [Obsolete("requireSelectExclusive has been deprecated. Put logic in CanSelect instead.", true)]
 __declspec(property(get=get_requireSelectExclusive)) bool  requireSelectExclusive;

/// @brief Field s_ProcessInteractionStrengthEventMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_ProcessInteractionStrengthEventMarker, put=setStaticF_s_ProcessInteractionStrengthEventMarker)) ::Unity::Profiling::ProfilerMarker  s_ProcessInteractionStrengthEventMarker;

/// @brief Field s_ProcessInteractionStrengthMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_ProcessInteractionStrengthMarker, put=setStaticF_s_ProcessInteractionStrengthMarker)) ::Unity::Profiling::ProfilerMarker  s_ProcessInteractionStrengthMarker;

 __declspec(property(get=get_selectEntered, put=set_selectEntered)) ::UnityEngine::XR::Interaction::Toolkit::SelectEnterEvent*  selectEntered;

 __declspec(property(get=get_selectExited, put=set_selectExited)) ::UnityEngine::XR::Interaction::Toolkit::SelectExitEvent*  selectExited;

 __declspec(property(get=get_selectFilters)) ::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRFilterList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter*>*  selectFilters;

/// @brief [Obsolete("selectTarget has been deprecated. Use interactablesSelected, GetOldestInteractableSelected, hasSelection, or IsSelecting for similar functionality.", true)]
 __declspec(property(get=get_selectTarget, put=set_selectTarget)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable>  selectTarget;

 __declspec(property(get=get_selectedInteractableMovementTypeOverride)) ::System::Nullable_1<::GlobalNamespace::XRBaseInteractable_MovementType>  selectedInteractableMovementTypeOverride;

 __declspec(property(get=get_startingHoverFilters, put=set_startingHoverFilters)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  startingHoverFilters;

 __declspec(property(get=get_startingSelectFilters, put=set_startingSelectFilters)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  startingSelectFilters;

 __declspec(property(get=get_startingSelectedInteractable, put=set_startingSelectedInteractable)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable>  startingSelectedInteractable;

 __declspec(property(get=get_startingTargetFilter, put=set_startingTargetFilter)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRBaseTargetFilter>  startingTargetFilter;

 __declspec(property(get=get_targetFilter, put=set_targetFilter)) ::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRTargetFilter*  targetFilter;

 __declspec(property(get=get_targetPriorityMode, put=set_targetPriorityMode)) ::UnityEngine::XR::Interaction::Toolkit::Interactors::TargetPriorityMode  targetPriorityMode;

 __declspec(property(get=get_targetsForSelection, put=set_targetsForSelection)) ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*>*  targetsForSelection;

/// @brief Field unregistered, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_unregistered, put=__cordl_internal_set_unregistered)) ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs*>*  unregistered;

/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*() noexcept;

/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*() noexcept;

/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionStrengthInteractor"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionStrengthInteractor*() noexcept;

/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*() noexcept;

/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*() noexcept;

/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRTargetPriorityInteractor"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRTargetPriorityInteractor*() noexcept;

/// @brief Method Awake, addr 0xb465f2c, size 0xdc, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method CanHover, addr 0xb46af5c, size 0x8, virtual true, abstract: false, final false
inline bool CanHover(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*  interactable) ;

/// [Obsolete("CanHover(XRBaseInteractable) has been deprecated. Use CanHover(IXRHoverInteractable) instead.", true)]
/// @brief Method CanHover, addr 0xb46c8c0, size 0x7c, virtual true, abstract: false, final false
inline bool CanHover(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*  interactable) ;

/// @brief Method CanSelect, addr 0xb46af64, size 0x8, virtual true, abstract: false, final false
inline bool CanSelect(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*  interactable) ;

/// [Obsolete("CanSelect(XRBaseInteractable) has been deprecated. Use CanSelect(IXRSelectInteractable) instead.", true)]
/// @brief Method CanSelect, addr 0xb46c93c, size 0x7c, virtual true, abstract: false, final false
inline bool CanSelect(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*  interactable) ;

/// @brief Method CaptureAttachPose, addr 0xb46b0c8, size 0x174, virtual false, abstract: false, final false
inline void CaptureAttachPose(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*  interactable) ;

/// @brief Method CreateAttachTransform, addr 0xb46a79c, size 0x1a8, virtual false, abstract: false, final false
inline void CreateAttachTransform() ;

/// @brief Method EndManualInteraction, addr 0xb46bd74, size 0x120, virtual true, abstract: false, final false
inline void EndManualInteraction() ;

/// @brief Method FindCreateInteractionManager, addr 0xb46a944, size 0xc0, virtual false, abstract: false, final false
inline void FindCreateInteractionManager() ;

/// @brief Method GetAttachPoseOnSelect, addr 0xb46ad80, size 0xd0, virtual true, abstract: false, final true
inline ::UnityEngine::Pose GetAttachPoseOnSelect(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*  interactable) ;

/// @brief Method GetAttachTransform, addr 0xb46ad00, size 0x80, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> GetAttachTransform(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  interactable) ;

/// [Obsolete("GetHoverTargets has been deprecated. Use interactablesHovered instead.", true)]
/// @brief Method GetHoverTargets, addr 0xb46c7c8, size 0x7c, virtual false, abstract: false, final false
inline void GetHoverTargets(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable>>*  targets) ;

/// @brief Method GetInteractionStrength, addr 0xb46b23c, size 0x7c, virtual true, abstract: false, final true
inline float_t GetInteractionStrength(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  interactable) ;

/// @brief Method GetLocalAttachPoseOnSelect, addr 0xb46ae50, size 0xd0, virtual true, abstract: false, final true
inline ::UnityEngine::Pose GetLocalAttachPoseOnSelect(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*  interactable) ;

/// @brief Method GetValidTargets, addr 0xb46af20, size 0x4, virtual true, abstract: false, final false
inline void GetValidTargets(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  targets) ;

/// [Obsolete("GetValidTargets(List<XRBaseInteractable>) has been deprecated. Override GetValidTargets(List<IXRInteractable>) instead.", true)]
/// @brief Method GetValidTargets, addr 0xb46c844, size 0x7c, virtual true, abstract: false, final false
inline void GetValidTargets(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable>>*  targets) ;

/// @brief Method IsHovering, addr 0xb46af6c, size 0x70, virtual true, abstract: false, final true
inline bool IsHovering(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*  interactable) ;

/// @brief Method IsHovering, addr 0xb46b04c, size 0x74, virtual false, abstract: false, final false
inline bool IsHovering(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  interactable) ;

/// @brief Method IsSelecting, addr 0xb469380, size 0x74, virtual false, abstract: false, final false
inline bool IsSelecting(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  interactable) ;

/// @brief Method IsSelecting, addr 0xb46afdc, size 0x70, virtual true, abstract: false, final true
inline bool IsSelecting(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*  interactable) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor* New_ctor() ;

/// @brief Method OnDestroy, addr 0xb46ab60, size 0x1a0, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0xb466940, size 0x4, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xb466568, size 0x18, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnHoverEntered, addr 0xb46b6a8, size 0x60, virtual true, abstract: false, final false
inline void OnHoverEntered(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*  args) ;

/// [Obsolete("OnHoverEntered(XRBaseInteractable) has been deprecated. Use OnHoverEntered(HoverEnterEventArgs) instead.", true)]
/// @brief Method OnHoverEntered, addr 0xb46c2f0, size 0x7c, virtual true, abstract: false, final false
inline void OnHoverEntered(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*  interactable) ;

/// @brief Method OnHoverEntering, addr 0xb469428, size 0xe0, virtual true, abstract: false, final false
inline void OnHoverEntering(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*  args) ;

/// [Obsolete("OnHoverEntering(XRBaseInteractable) has been deprecated. Use OnHoverEntering(HoverEnterEventArgs) instead.", true)]
/// @brief Method OnHoverEntering, addr 0xb46c274, size 0x7c, virtual true, abstract: false, final false
inline void OnHoverEntering(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*  interactable) ;

/// @brief Method OnHoverExited, addr 0xb46b708, size 0x60, virtual true, abstract: false, final false
inline void OnHoverExited(::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*  args) ;

/// [Obsolete("OnHoverExited(XRBaseInteractable) has been deprecated. Use OnHoverExited(HoverExitEventArgs) instead.", true)]
/// @brief Method OnHoverExited, addr 0xb46c3e8, size 0x7c, virtual true, abstract: false, final false
inline void OnHoverExited(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*  interactable) ;

/// @brief Method OnHoverExiting, addr 0xb46950c, size 0x16c, virtual true, abstract: false, final false
inline void OnHoverExiting(::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*  args) ;

/// [Obsolete("OnHoverExiting(XRBaseInteractable) has been deprecated. Use OnHoverExiting(HoverExitEventArgs) instead.", true)]
/// @brief Method OnHoverExiting, addr 0xb46c36c, size 0x7c, virtual true, abstract: false, final false
inline void OnHoverExiting(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*  interactable) ;

/// @brief Method OnRegistered, addr 0xb46b438, size 0x138, virtual true, abstract: false, final false
inline void OnRegistered(::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs*  args) ;

/// @brief Method OnSelectEntered, addr 0xb464690, size 0x60, virtual true, abstract: false, final false
inline void OnSelectEntered(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*  args) ;

/// [Obsolete("OnSelectEntered(XRBaseInteractable) has been deprecated. Use OnSelectEntered(SelectEnterEventArgs) instead.", true)]
/// @brief Method OnSelectEntered, addr 0xb46c4e0, size 0x7c, virtual true, abstract: false, final false
inline void OnSelectEntered(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*  interactable) ;

/// @brief Method OnSelectEntering, addr 0xb46756c, size 0x124, virtual true, abstract: false, final false
inline void OnSelectEntering(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*  args) ;

/// [Obsolete("OnSelectEntering(XRBaseInteractable) has been deprecated. Use OnSelectEntering(SelectEnterEventArgs) instead.", true)]
/// @brief Method OnSelectEntering, addr 0xb46c464, size 0x7c, virtual true, abstract: false, final false
inline void OnSelectEntering(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*  interactable) ;

/// @brief Method OnSelectExited, addr 0xb4649a4, size 0xb4, virtual true, abstract: false, final false
inline void OnSelectExited(::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*  args) ;

/// [Obsolete("OnSelectExited(XRBaseInteractable) has been deprecated. Use OnSelectExited(SelectExitEventArgs) instead.", true)]
/// @brief Method OnSelectExited, addr 0xb46c5d8, size 0x7c, virtual true, abstract: false, final false
inline void OnSelectExited(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*  interactable) ;

/// @brief Method OnSelectExiting, addr 0xb4676b4, size 0x16c, virtual true, abstract: false, final false
inline void OnSelectExiting(::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*  args) ;

/// [Obsolete("OnSelectExiting(XRBaseInteractable) has been deprecated. Use OnSelectExiting(SelectExitEventArgs) instead.", true)]
/// @brief Method OnSelectExiting, addr 0xb46c55c, size 0x7c, virtual true, abstract: false, final false
inline void OnSelectExiting(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*  interactable) ;

/// @brief Method OnUnregistered, addr 0xb46b570, size 0x138, virtual true, abstract: false, final false
inline void OnUnregistered(::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs*  args) ;

/// @brief Method PreprocessInteractor, addr 0xb466944, size 0x4, virtual true, abstract: false, final false
inline void PreprocessInteractor(::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase  updatePhase) ;

/// @brief Method ProcessHoverFilters, addr 0xb46b338, size 0x18, virtual false, abstract: false, final false
inline bool ProcessHoverFilters(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*  interactable) ;

/// @brief Method ProcessInteractionStrength, addr 0xb46b768, size 0x50c, virtual true, abstract: false, final false
inline void ProcessInteractionStrength(::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase  updatePhase) ;

/// @brief Method ProcessInteractor, addr 0xb466ad0, size 0x4, virtual true, abstract: false, final false
inline void ProcessInteractor(::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase  updatePhase) ;

/// @brief Method ProcessSelectFilters, addr 0xb46b3e0, size 0x18, virtual false, abstract: false, final false
inline bool ProcessSelectFilters(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*  interactable) ;

/// @brief Method RegisterWithInteractionManager, addr 0xb46a28c, size 0xe0, virtual false, abstract: false, final false
inline void RegisterWithInteractionManager() ;

/// [Conditional("UNITY_EDITOR")]
/// @brief Method Reset, addr 0xb46a798, size 0x4, virtual true, abstract: false, final false
inline void Reset() ;

/// @brief Method Start, addr 0xb46aaa4, size 0xbc, virtual true, abstract: false, final false
inline void Start() ;

/// @brief Method StartManualInteraction, addr 0xb46bc74, size 0x100, virtual true, abstract: false, final false
inline void StartManualInteraction(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*  interactable) ;

/// [Obsolete("StartManualInteraction(XRBaseInteractable) has been deprecated. Use StartManualInteraction(IXRSelectInteractable) instead.", true)]
/// @brief Method StartManualInteraction, addr 0xb46ca34, size 0x7c, virtual true, abstract: false, final false
inline void StartManualInteraction(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*  interactable) ;

/// @brief Method TryGetXROrigin, addr 0xb46a658, size 0x140, virtual false, abstract: false, final false
inline bool TryGetXROrigin(::by_ref<::UnityEngine::Transform*>  origin) ;

/// @brief Method UnityEngine.XR.Interaction.Toolkit.Interactors.IXRGroupMember.OnRegisteringAsGroupMember, addr 0xb46be94, size 0x194, virtual true, abstract: false, final true
inline void UnityEngine_XR_Interaction_Toolkit_Interactors_IXRGroupMember_OnRegisteringAsGroupMember(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*  group) ;

/// @brief Method UnityEngine.XR.Interaction.Toolkit.Interactors.IXRGroupMember.OnRegisteringAsNonGroupMember, addr 0xb46c028, size 0xc, virtual true, abstract: false, final true
inline void UnityEngine_XR_Interaction_Toolkit_Interactors_IXRGroupMember_OnRegisteringAsNonGroupMember() ;

/// @brief Method UnityEngine.XR.Interaction.Toolkit.Interactors.IXRHoverInteractor.CanHover, addr 0xb46b2e8, size 0x50, virtual true, abstract: false, final true
inline bool UnityEngine_XR_Interaction_Toolkit_Interactors_IXRHoverInteractor_CanHover(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*  interactable) ;

/// @brief Method UnityEngine.XR.Interaction.Toolkit.Interactors.IXRHoverInteractor.OnHoverEntered, addr 0xb46b360, size 0x10, virtual true, abstract: false, final true
inline void UnityEngine_XR_Interaction_Toolkit_Interactors_IXRHoverInteractor_OnHoverEntered(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*  args) ;

/// @brief Method UnityEngine.XR.Interaction.Toolkit.Interactors.IXRHoverInteractor.OnHoverEntering, addr 0xb46b350, size 0x10, virtual true, abstract: false, final true
inline void UnityEngine_XR_Interaction_Toolkit_Interactors_IXRHoverInteractor_OnHoverEntering(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*  args) ;

/// @brief Method UnityEngine.XR.Interaction.Toolkit.Interactors.IXRHoverInteractor.OnHoverExited, addr 0xb46b380, size 0x10, virtual true, abstract: false, final true
inline void UnityEngine_XR_Interaction_Toolkit_Interactors_IXRHoverInteractor_OnHoverExited(::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*  args) ;

/// @brief Method UnityEngine.XR.Interaction.Toolkit.Interactors.IXRHoverInteractor.OnHoverExiting, addr 0xb46b370, size 0x10, virtual true, abstract: false, final true
inline void UnityEngine_XR_Interaction_Toolkit_Interactors_IXRHoverInteractor_OnHoverExiting(::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*  args) ;

/// @brief Method UnityEngine.XR.Interaction.Toolkit.Interactors.IXRInteractionStrengthInteractor.ProcessInteractionStrength, addr 0xb46b2b8, size 0x10, virtual true, abstract: false, final true
inline void UnityEngine_XR_Interaction_Toolkit_Interactors_IXRInteractionStrengthInteractor_ProcessInteractionStrength(::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase  updatePhase) ;

/// @brief Method UnityEngine.XR.Interaction.Toolkit.Interactors.IXRInteractor.OnRegistered, addr 0xb46b2c8, size 0x10, virtual true, abstract: false, final true
inline void UnityEngine_XR_Interaction_Toolkit_Interactors_IXRInteractor_OnRegistered(::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs*  args) ;

/// @brief Method UnityEngine.XR.Interaction.Toolkit.Interactors.IXRInteractor.OnUnregistered, addr 0xb46b2d8, size 0x10, virtual true, abstract: false, final true
inline void UnityEngine_XR_Interaction_Toolkit_Interactors_IXRInteractor_OnUnregistered(::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs*  args) ;

/// @brief Method UnityEngine.XR.Interaction.Toolkit.Interactors.IXRInteractor.get_transform, addr 0xb46cb68, size 0x8, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::Transform> UnityEngine_XR_Interaction_Toolkit_Interactors_IXRInteractor_get_transform() ;

/// @brief Method UnityEngine.XR.Interaction.Toolkit.Interactors.IXRSelectInteractor.CanSelect, addr 0xb46b390, size 0x50, virtual true, abstract: false, final true
inline bool UnityEngine_XR_Interaction_Toolkit_Interactors_IXRSelectInteractor_CanSelect(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*  interactable) ;

/// @brief Method UnityEngine.XR.Interaction.Toolkit.Interactors.IXRSelectInteractor.OnSelectEntered, addr 0xb46b408, size 0x10, virtual true, abstract: false, final true
inline void UnityEngine_XR_Interaction_Toolkit_Interactors_IXRSelectInteractor_OnSelectEntered(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*  args) ;

/// @brief Method UnityEngine.XR.Interaction.Toolkit.Interactors.IXRSelectInteractor.OnSelectEntering, addr 0xb46b3f8, size 0x10, virtual true, abstract: false, final true
inline void UnityEngine_XR_Interaction_Toolkit_Interactors_IXRSelectInteractor_OnSelectEntering(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*  args) ;

/// @brief Method UnityEngine.XR.Interaction.Toolkit.Interactors.IXRSelectInteractor.OnSelectExited, addr 0xb46b428, size 0x10, virtual true, abstract: false, final true
inline void UnityEngine_XR_Interaction_Toolkit_Interactors_IXRSelectInteractor_OnSelectExited(::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*  args) ;

/// @brief Method UnityEngine.XR.Interaction.Toolkit.Interactors.IXRSelectInteractor.OnSelectExiting, addr 0xb46b418, size 0x10, virtual true, abstract: false, final true
inline void UnityEngine_XR_Interaction_Toolkit_Interactors_IXRSelectInteractor_OnSelectExiting(::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*  args) ;

/// @brief Method UnregisterWithInteractionManager, addr 0xb46aa04, size 0xa0, virtual false, abstract: false, final false
inline void UnregisterWithInteractionManager() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup* const& __cordl_internal_get__containingGroup_k__BackingField() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*& __cordl_internal_get__containingGroup_k__BackingField() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable* const& __cordl_internal_get__firstInteractableSelected_k__BackingField() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*& __cordl_internal_get__firstInteractableSelected_k__BackingField() ;

constexpr bool const& __cordl_internal_get__hasHover_k__BackingField() const;

constexpr bool& __cordl_internal_get__hasHover_k__BackingField() ;

constexpr bool const& __cordl_internal_get__hasSelection_k__BackingField() const;

constexpr bool& __cordl_internal_get__hasSelection_k__BackingField() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::TargetPriorityMode const& __cordl_internal_get__targetPriorityMode_k__BackingField() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::TargetPriorityMode& __cordl_internal_get__targetPriorityMode_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*>* const& __cordl_internal_get__targetsForSelection_k__BackingField() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*>*& __cordl_internal_get__targetsForSelection_k__BackingField() ;

constexpr bool const& __cordl_internal_get_m_AllowHover() const;

constexpr bool& __cordl_internal_get_m_AllowHover() ;

constexpr bool const& __cordl_internal_get_m_AllowSelect() const;

constexpr bool& __cordl_internal_get_m_AllowSelect() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*,::UnityEngine::Pose>* const& __cordl_internal_get_m_AttachPoseOnSelect() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*,::UnityEngine::Pose>*& __cordl_internal_get_m_AttachPoseOnSelect() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_AttachTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_AttachTransform() ;

constexpr bool const& __cordl_internal_get_m_ClearedLargestInteractionStrength() const;

constexpr bool& __cordl_internal_get_m_ClearedLargestInteractionStrength() ;

constexpr bool const& __cordl_internal_get_m_DisableVisualsWhenBlockedInGroup() const;

constexpr bool& __cordl_internal_get_m_DisableVisualsWhenBlockedInGroup() ;

constexpr bool const& __cordl_internal_get_m_FailedToFindXROrigin() const;

constexpr bool& __cordl_internal_get_m_FailedToFindXROrigin() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::InteractorHandedness const& __cordl_internal_get_m_Handedness() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::InteractorHandedness& __cordl_internal_get_m_Handedness() ;

constexpr bool const& __cordl_internal_get_m_HasXROrigin() const;

constexpr bool& __cordl_internal_get_m_HasXROrigin() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::HoverEnterEvent* const& __cordl_internal_get_m_HoverEntered() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::HoverEnterEvent*& __cordl_internal_get_m_HoverEntered() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::HoverExitEvent* const& __cordl_internal_get_m_HoverExited() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::HoverExitEvent*& __cordl_internal_get_m_HoverExited() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRHoverFilter*>* const& __cordl_internal_get_m_HoverFilters() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRHoverFilter*>*& __cordl_internal_get_m_HoverFilters() ;

constexpr ::Unity::XR::CoreUtils::Collections::HashSetList_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*>* const& __cordl_internal_get_m_InteractablesHovered() const;

constexpr ::Unity::XR::CoreUtils::Collections::HashSetList_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*>*& __cordl_internal_get_m_InteractablesHovered() ;

constexpr ::Unity::XR::CoreUtils::Collections::HashSetList_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*>* const& __cordl_internal_get_m_InteractablesSelected() const;

constexpr ::Unity::XR::CoreUtils::Collections::HashSetList_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*>*& __cordl_internal_get_m_InteractablesSelected() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask const& __cordl_internal_get_m_InteractionLayers() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask& __cordl_internal_get_m_InteractionLayers() ;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> const& __cordl_internal_get_m_InteractionManager() const;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>& __cordl_internal_get_m_InteractionManager() ;

constexpr ::Unity::XR::CoreUtils::Collections::HashSetList_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractionStrengthInteractable*>* const& __cordl_internal_get_m_InteractionStrengthInteractables() const;

constexpr ::Unity::XR::CoreUtils::Collections::HashSetList_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractionStrengthInteractable*>*& __cordl_internal_get_m_InteractionStrengthInteractables() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*,float_t>* const& __cordl_internal_get_m_InteractionStrengths() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*,float_t>*& __cordl_internal_get_m_InteractionStrengths() ;

constexpr bool const& __cordl_internal_get_m_IsPerformingManualInteraction() const;

constexpr bool& __cordl_internal_get_m_IsPerformingManualInteraction() ;

constexpr bool const& __cordl_internal_get_m_KeepSelectedTargetValid() const;

constexpr bool& __cordl_internal_get_m_KeepSelectedTargetValid() ;

constexpr ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<float_t>* const& __cordl_internal_get_m_LargestInteractionStrength() const;

constexpr ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<float_t>*& __cordl_internal_get_m_LargestInteractionStrength() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*,::UnityEngine::Pose>* const& __cordl_internal_get_m_LocalAttachPoseOnSelect() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*,::UnityEngine::Pose>*& __cordl_internal_get_m_LocalAttachPoseOnSelect() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable* const& __cordl_internal_get_m_ManualInteractionInteractable() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*& __cordl_internal_get_m_ManualInteractionInteractable() ;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> const& __cordl_internal_get_m_RegisteredInteractionManager() const;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>& __cordl_internal_get_m_RegisteredInteractionManager() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::SelectEnterEvent* const& __cordl_internal_get_m_SelectEntered() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::SelectEnterEvent*& __cordl_internal_get_m_SelectEntered() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::SelectExitEvent* const& __cordl_internal_get_m_SelectExited() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::SelectExitEvent*& __cordl_internal_get_m_SelectExited() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter*>* const& __cordl_internal_get_m_SelectFilters() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter*>*& __cordl_internal_get_m_SelectFilters() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* const& __cordl_internal_get_m_StartingHoverFilters() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*& __cordl_internal_get_m_StartingHoverFilters() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* const& __cordl_internal_get_m_StartingSelectFilters() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*& __cordl_internal_get_m_StartingSelectFilters() ;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable> const& __cordl_internal_get_m_StartingSelectedInteractable() const;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable>& __cordl_internal_get_m_StartingSelectedInteractable() ;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRBaseTargetFilter> const& __cordl_internal_get_m_StartingTargetFilter() const;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRBaseTargetFilter>& __cordl_internal_get_m_StartingTargetFilter() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRTargetFilter* const& __cordl_internal_get_m_TargetFilter() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRTargetFilter*& __cordl_internal_get_m_TargetFilter() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_XROriginTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_XROriginTransform() ;

constexpr ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs*>* const& __cordl_internal_get_registered() const;

constexpr ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs*>*& __cordl_internal_get_registered() ;

constexpr ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs*>* const& __cordl_internal_get_unregistered() const;

constexpr ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs*>*& __cordl_internal_get_unregistered() ;

constexpr void __cordl_internal_set__containingGroup_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*  value) ;

constexpr void __cordl_internal_set__firstInteractableSelected_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*  value) ;

constexpr void __cordl_internal_set__hasHover_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__hasSelection_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__targetPriorityMode_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::Interactors::TargetPriorityMode  value) ;

constexpr void __cordl_internal_set__targetsForSelection_k__BackingField(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*>*  value) ;

constexpr void __cordl_internal_set_m_AllowHover(bool  value) ;

constexpr void __cordl_internal_set_m_AllowSelect(bool  value) ;

constexpr void __cordl_internal_set_m_AttachPoseOnSelect(::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*,::UnityEngine::Pose>*  value) ;

constexpr void __cordl_internal_set_m_AttachTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_m_ClearedLargestInteractionStrength(bool  value) ;

constexpr void __cordl_internal_set_m_DisableVisualsWhenBlockedInGroup(bool  value) ;

constexpr void __cordl_internal_set_m_FailedToFindXROrigin(bool  value) ;

constexpr void __cordl_internal_set_m_Handedness(::UnityEngine::XR::Interaction::Toolkit::Interactors::InteractorHandedness  value) ;

constexpr void __cordl_internal_set_m_HasXROrigin(bool  value) ;

constexpr void __cordl_internal_set_m_HoverEntered(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEvent*  value) ;

constexpr void __cordl_internal_set_m_HoverExited(::UnityEngine::XR::Interaction::Toolkit::HoverExitEvent*  value) ;

constexpr void __cordl_internal_set_m_HoverFilters(::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRHoverFilter*>*  value) ;

constexpr void __cordl_internal_set_m_InteractablesHovered(::Unity::XR::CoreUtils::Collections::HashSetList_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*>*  value) ;

constexpr void __cordl_internal_set_m_InteractablesSelected(::Unity::XR::CoreUtils::Collections::HashSetList_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*>*  value) ;

constexpr void __cordl_internal_set_m_InteractionLayers(::UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask  value) ;

constexpr void __cordl_internal_set_m_InteractionManager(::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>  value) ;

constexpr void __cordl_internal_set_m_InteractionStrengthInteractables(::Unity::XR::CoreUtils::Collections::HashSetList_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractionStrengthInteractable*>*  value) ;

constexpr void __cordl_internal_set_m_InteractionStrengths(::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*,float_t>*  value) ;

constexpr void __cordl_internal_set_m_IsPerformingManualInteraction(bool  value) ;

constexpr void __cordl_internal_set_m_KeepSelectedTargetValid(bool  value) ;

constexpr void __cordl_internal_set_m_LargestInteractionStrength(::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<float_t>*  value) ;

constexpr void __cordl_internal_set_m_LocalAttachPoseOnSelect(::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*,::UnityEngine::Pose>*  value) ;

constexpr void __cordl_internal_set_m_ManualInteractionInteractable(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*  value) ;

constexpr void __cordl_internal_set_m_RegisteredInteractionManager(::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>  value) ;

constexpr void __cordl_internal_set_m_SelectEntered(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEvent*  value) ;

constexpr void __cordl_internal_set_m_SelectExited(::UnityEngine::XR::Interaction::Toolkit::SelectExitEvent*  value) ;

constexpr void __cordl_internal_set_m_SelectFilters(::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter*>*  value) ;

constexpr void __cordl_internal_set_m_StartingHoverFilters(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  value) ;

constexpr void __cordl_internal_set_m_StartingSelectFilters(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  value) ;

constexpr void __cordl_internal_set_m_StartingSelectedInteractable(::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable>  value) ;

constexpr void __cordl_internal_set_m_StartingTargetFilter(::UnityW<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRBaseTargetFilter>  value) ;

constexpr void __cordl_internal_set_m_TargetFilter(::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRTargetFilter*  value) ;

constexpr void __cordl_internal_set_m_XROriginTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_registered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs*>*  value) ;

constexpr void __cordl_internal_set_unregistered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs*>*  value) ;

/// @brief Method .ctor, addr 0xb469728, size 0x4b8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_registered, addr 0xb469f28, size 0xb0, virtual true, abstract: false, final true
inline void add_registered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs*>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_unregistered, addr 0xb46a088, size 0xb0, virtual true, abstract: false, final true
inline void add_unregistered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs*>*  value) ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_ProcessInteractionStrengthEventMarker() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_ProcessInteractionStrengthMarker() ;

/// @brief Method get_allowHover, addr 0xb46a5c8, size 0x8, virtual false, abstract: false, final false
inline bool get_allowHover() ;

/// @brief Method get_allowSelect, addr 0xb46a5d8, size 0x8, virtual false, abstract: false, final false
inline bool get_allowSelect() ;

/// @brief Method get_attachTransform, addr 0xb46a39c, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Transform> get_attachTransform() ;

/// [CompilerGenerated]
/// @brief Method get_containingGroup, addr 0xb46a36c, size 0x8, virtual true, abstract: false, final true
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup* get_containingGroup() ;

/// @brief Method get_disableVisualsWhenBlockedInGroup, addr 0xb46a3bc, size 0x8, virtual false, abstract: false, final false
inline bool get_disableVisualsWhenBlockedInGroup() ;

/// @brief Method get_enableInteractions, addr 0xb46c12c, size 0x7c, virtual false, abstract: false, final false
inline bool get_enableInteractions() ;

/// [CompilerGenerated]
/// @brief Method get_firstInteractableSelected, addr 0xb46a600, size 0x8, virtual true, abstract: false, final true
inline ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable* get_firstInteractableSelected() ;

/// @brief Method get_handedness, addr 0xb46a38c, size 0x8, virtual true, abstract: false, final true
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::InteractorHandedness get_handedness() ;

/// [CompilerGenerated]
/// @brief Method get_hasHover, addr 0xb46a5f0, size 0x8, virtual true, abstract: false, final true
inline bool get_hasHover() ;

/// [CompilerGenerated]
/// @brief Method get_hasSelection, addr 0xb46a610, size 0x8, virtual true, abstract: false, final true
inline bool get_hasSelection() ;

/// @brief Method get_hoverEntered, addr 0xb46a3ec, size 0x8, virtual true, abstract: false, final true
inline ::UnityEngine::XR::Interaction::Toolkit::HoverEnterEvent* get_hoverEntered() ;

/// @brief Method get_hoverExited, addr 0xb46a3fc, size 0x8, virtual true, abstract: false, final true
inline ::UnityEngine::XR::Interaction::Toolkit::HoverExitEvent* get_hoverExited() ;

/// @brief Method get_hoverFilters, addr 0xb46a630, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRFilterList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRHoverFilter*>* get_hoverFilters() ;

/// @brief Method get_hoverTargets, addr 0xb46c74c, size 0x7c, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable>>* get_hoverTargets() ;

/// @brief Method get_interactablesHovered, addr 0xb4674dc, size 0x90, virtual true, abstract: false, final true
inline ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*>* get_interactablesHovered() ;

/// @brief Method get_interactablesSelected, addr 0xb464514, size 0x90, virtual true, abstract: false, final true
inline ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*>* get_interactablesSelected() ;

/// @brief Method get_interactionLayerMask, addr 0xb46c034, size 0x7c, virtual false, abstract: false, final false
inline ::UnityEngine::LayerMask get_interactionLayerMask() ;

/// @brief Method get_interactionLayers, addr 0xb46a37c, size 0x8, virtual true, abstract: false, final true
inline ::UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask get_interactionLayers() ;

/// @brief Method get_interactionManager, addr 0xb46a1e8, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> get_interactionManager() ;

/// @brief Method get_isHoverActive, addr 0xb46af24, size 0x8, virtual true, abstract: false, final false
inline bool get_isHoverActive() ;

/// @brief Method get_isPerformingManualInteraction, addr 0xb46a5e8, size 0x8, virtual false, abstract: false, final false
inline bool get_isPerformingManualInteraction() ;

/// @brief Method get_isSelectActive, addr 0xb46af2c, size 0x8, virtual true, abstract: false, final false
inline bool get_isSelectActive() ;

/// @brief Method get_keepSelectedTargetValid, addr 0xb46a3ac, size 0x8, virtual true, abstract: false, final true
inline bool get_keepSelectedTargetValid() ;

/// @brief Method get_largestInteractionStrength, addr 0xb46a650, size 0x8, virtual true, abstract: false, final true
inline ::Unity::XR::CoreUtils::Bindings::Variables::IReadOnlyBindableVariable_1<float_t>* get_largestInteractionStrength() ;

/// @brief Method get_onHoverEnter, addr 0xb46c254, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::XRInteractorEvent* get_onHoverEnter() ;

/// @brief Method get_onHoverEntered, addr 0xb46c224, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::XRInteractorEvent* get_onHoverEntered() ;

/// @brief Method get_onHoverExit, addr 0xb46c25c, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::XRInteractorEvent* get_onHoverExit() ;

/// @brief Method get_onHoverExited, addr 0xb46c230, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::XRInteractorEvent* get_onHoverExited() ;

/// @brief Method get_onSelectEnter, addr 0xb46c264, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::XRInteractorEvent* get_onSelectEnter() ;

/// @brief Method get_onSelectEntered, addr 0xb46c23c, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::XRInteractorEvent* get_onSelectEntered() ;

/// @brief Method get_onSelectExit, addr 0xb46c26c, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::XRInteractorEvent* get_onSelectExit() ;

/// @brief Method get_onSelectExited, addr 0xb46c248, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::XRInteractorEvent* get_onSelectExited() ;

/// @brief Method get_requireSelectExclusive, addr 0xb46c9b8, size 0x7c, virtual true, abstract: false, final false
inline bool get_requireSelectExclusive() ;

/// @brief Method get_selectEntered, addr 0xb46a40c, size 0x8, virtual true, abstract: false, final true
inline ::UnityEngine::XR::Interaction::Toolkit::SelectEnterEvent* get_selectEntered() ;

/// @brief Method get_selectExited, addr 0xb46a41c, size 0x8, virtual true, abstract: false, final true
inline ::UnityEngine::XR::Interaction::Toolkit::SelectExitEvent* get_selectExited() ;

/// @brief Method get_selectFilters, addr 0xb46a648, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRFilterList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter*>* get_selectFilters() ;

/// @brief Method get_selectTarget, addr 0xb46c654, size 0x7c, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable> get_selectTarget() ;

/// @brief Method get_selectedInteractableMovementTypeOverride, addr 0xb46b0c0, size 0x8, virtual true, abstract: false, final false
inline ::System::Nullable_1<::GlobalNamespace::XRBaseInteractable_MovementType> get_selectedInteractableMovementTypeOverride() ;

/// @brief Method get_startingHoverFilters, addr 0xb46a620, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* get_startingHoverFilters() ;

/// @brief Method get_startingSelectFilters, addr 0xb46a638, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* get_startingSelectFilters() ;

/// @brief Method get_startingSelectedInteractable, addr 0xb46a3cc, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable> get_startingSelectedInteractable() ;

/// @brief Method get_startingTargetFilter, addr 0xb46a3dc, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRBaseTargetFilter> get_startingTargetFilter() ;

/// @brief Method get_targetFilter, addr 0xb4632e8, size 0xa0, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRTargetFilter* get_targetFilter() ;

/// [CompilerGenerated]
/// @brief Method get_targetPriorityMode, addr 0xb46af34, size 0x8, virtual true, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::TargetPriorityMode get_targetPriorityMode() ;

/// [CompilerGenerated]
/// @brief Method get_targetsForSelection, addr 0xb46af44, size 0x8, virtual true, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*>* get_targetsForSelection() ;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember* i___UnityEngine__XR__Interaction__Toolkit__Interactors__IXRGroupMember() noexcept;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor* i___UnityEngine__XR__Interaction__Toolkit__Interactors__IXRHoverInteractor() noexcept;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionStrengthInteractor"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionStrengthInteractor* i___UnityEngine__XR__Interaction__Toolkit__Interactors__IXRInteractionStrengthInteractor() noexcept;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor* i___UnityEngine__XR__Interaction__Toolkit__Interactors__IXRInteractor() noexcept;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor* i___UnityEngine__XR__Interaction__Toolkit__Interactors__IXRSelectInteractor() noexcept;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRTargetPriorityInteractor"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRTargetPriorityInteractor* i___UnityEngine__XR__Interaction__Toolkit__Interactors__IXRTargetPriorityInteractor() noexcept;

/// [CompilerGenerated]
/// @brief Method remove_registered, addr 0xb469fd8, size 0xb0, virtual true, abstract: false, final true
inline void remove_registered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs*>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_unregistered, addr 0xb46a138, size 0xb0, virtual true, abstract: false, final true
inline void remove_unregistered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs*>*  value) ;

static inline void setStaticF_s_ProcessInteractionStrengthEventMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_s_ProcessInteractionStrengthMarker(::Unity::Profiling::ProfilerMarker  value) ;

/// @brief Method set_allowHover, addr 0xb46a5d0, size 0x8, virtual false, abstract: false, final false
inline void set_allowHover(bool  value) ;

/// @brief Method set_allowSelect, addr 0xb46a5e0, size 0x8, virtual false, abstract: false, final false
inline void set_allowSelect(bool  value) ;

/// @brief Method set_attachTransform, addr 0xb46a3a4, size 0x8, virtual false, abstract: false, final false
inline void set_attachTransform(::UnityEngine::Transform*  value) ;

/// [CompilerGenerated]
/// @brief Method set_containingGroup, addr 0xb46a374, size 0x8, virtual false, abstract: false, final false
inline void set_containingGroup(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*  value) ;

/// @brief Method set_disableVisualsWhenBlockedInGroup, addr 0xb46a3c4, size 0x8, virtual false, abstract: false, final false
inline void set_disableVisualsWhenBlockedInGroup(bool  value) ;

/// @brief Method set_enableInteractions, addr 0xb46c1a8, size 0x7c, virtual false, abstract: false, final false
inline void set_enableInteractions(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_firstInteractableSelected, addr 0xb46a608, size 0x8, virtual false, abstract: false, final false
inline void set_firstInteractableSelected(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*  value) ;

/// @brief Method set_handedness, addr 0xb46a394, size 0x8, virtual false, abstract: false, final false
inline void set_handedness(::UnityEngine::XR::Interaction::Toolkit::Interactors::InteractorHandedness  value) ;

/// [CompilerGenerated]
/// @brief Method set_hasHover, addr 0xb46a5f8, size 0x8, virtual false, abstract: false, final false
inline void set_hasHover(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_hasSelection, addr 0xb46a618, size 0x8, virtual false, abstract: false, final false
inline void set_hasSelection(bool  value) ;

/// @brief Method set_hoverEntered, addr 0xb46a3f4, size 0x8, virtual false, abstract: false, final false
inline void set_hoverEntered(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEvent*  value) ;

/// @brief Method set_hoverExited, addr 0xb46a404, size 0x8, virtual false, abstract: false, final false
inline void set_hoverExited(::UnityEngine::XR::Interaction::Toolkit::HoverExitEvent*  value) ;

/// @brief Method set_interactionLayerMask, addr 0xb46c0b0, size 0x7c, virtual false, abstract: false, final false
inline void set_interactionLayerMask(::UnityEngine::LayerMask  value) ;

/// @brief Method set_interactionLayers, addr 0xb46a384, size 0x8, virtual false, abstract: false, final false
inline void set_interactionLayers(::UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask  value) ;

/// @brief Method set_interactionManager, addr 0xb46a1f0, size 0x9c, virtual false, abstract: false, final false
inline void set_interactionManager(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*  value) ;

/// @brief Method set_keepSelectedTargetValid, addr 0xb46a3b4, size 0x8, virtual false, abstract: false, final false
inline void set_keepSelectedTargetValid(bool  value) ;

/// @brief Method set_onHoverEntered, addr 0xb46c22c, size 0x4, virtual false, abstract: false, final false
inline void set_onHoverEntered(::UnityEngine::XR::Interaction::Toolkit::XRInteractorEvent*  value) ;

/// @brief Method set_onHoverExited, addr 0xb46c238, size 0x4, virtual false, abstract: false, final false
inline void set_onHoverExited(::UnityEngine::XR::Interaction::Toolkit::XRInteractorEvent*  value) ;

/// @brief Method set_onSelectEntered, addr 0xb46c244, size 0x4, virtual false, abstract: false, final false
inline void set_onSelectEntered(::UnityEngine::XR::Interaction::Toolkit::XRInteractorEvent*  value) ;

/// @brief Method set_onSelectExited, addr 0xb46c250, size 0x4, virtual false, abstract: false, final false
inline void set_onSelectExited(::UnityEngine::XR::Interaction::Toolkit::XRInteractorEvent*  value) ;

/// @brief Method set_selectEntered, addr 0xb46a414, size 0x8, virtual false, abstract: false, final false
inline void set_selectEntered(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEvent*  value) ;

/// @brief Method set_selectExited, addr 0xb46a424, size 0x8, virtual false, abstract: false, final false
inline void set_selectExited(::UnityEngine::XR::Interaction::Toolkit::SelectExitEvent*  value) ;

/// @brief Method set_selectTarget, addr 0xb46c6d0, size 0x7c, virtual false, abstract: false, final false
inline void set_selectTarget(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*  value) ;

/// @brief Method set_startingHoverFilters, addr 0xb46a628, size 0x8, virtual false, abstract: false, final false
inline void set_startingHoverFilters(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  value) ;

/// @brief Method set_startingSelectFilters, addr 0xb46a640, size 0x8, virtual false, abstract: false, final false
inline void set_startingSelectFilters(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  value) ;

/// @brief Method set_startingSelectedInteractable, addr 0xb46a3d4, size 0x8, virtual false, abstract: false, final false
inline void set_startingSelectedInteractable(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*  value) ;

/// @brief Method set_startingTargetFilter, addr 0xb46a3e4, size 0x8, virtual false, abstract: false, final false
inline void set_startingTargetFilter(::UnityEngine::XR::Interaction::Toolkit::Filtering::XRBaseTargetFilter*  value) ;

/// @brief Method set_targetFilter, addr 0xb46a42c, size 0x19c, virtual false, abstract: false, final false
inline void set_targetFilter(::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRTargetFilter*  value) ;

/// [CompilerGenerated]
/// @brief Method set_targetPriorityMode, addr 0xb46af3c, size 0x8, virtual true, abstract: false, final false
inline void set_targetPriorityMode(::UnityEngine::XR::Interaction::Toolkit::Interactors::TargetPriorityMode  value) ;

/// [CompilerGenerated]
/// @brief Method set_targetsForSelection, addr 0xb46af4c, size 0x10, virtual true, abstract: false, final false
inline void set_targetsForSelection(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRBaseInteractor() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRBaseInteractor", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRBaseInteractor(XRBaseInteractor && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRBaseInteractor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRBaseInteractor(XRBaseInteractor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11450};

/// @brief Field k_CanHoverDeprecated offset 0xffffffff size 0x8
static constexpr ::ConstString  k_CanHoverDeprecated{u"CanHover(XRBaseInteractable) has been deprecated. Use CanHover(IXRHoverInteractable) instead."};

/// @brief Field k_CanSelectDeprecated offset 0xffffffff size 0x8
static constexpr ::ConstString  k_CanSelectDeprecated{u"CanSelect(XRBaseInteractable) has been deprecated. Use CanSelect(IXRSelectInteractable) instead."};

/// @brief Field k_EnableInteractionsDeprecated offset 0xffffffff size 0x8
static constexpr ::ConstString  k_EnableInteractionsDeprecated{u"enableInteractions has been deprecated. Use allowHover and allowSelect instead."};

/// @brief Field k_GetHoverTargetsDeprecated offset 0xffffffff size 0x8
static constexpr ::ConstString  k_GetHoverTargetsDeprecated{u"GetHoverTargets has been deprecated. Use interactablesHovered instead."};

/// @brief Field k_GetValidTargetsDeprecated offset 0xffffffff size 0x8
static constexpr ::ConstString  k_GetValidTargetsDeprecated{u"GetValidTargets(List<XRBaseInteractable>) has been deprecated. Override GetValidTargets(List<IXRInteractable>) instead."};

/// @brief Field k_HoverTargetsDeprecated offset 0xffffffff size 0x8
static constexpr ::ConstString  k_HoverTargetsDeprecated{u"hoverTargets has been deprecated. Use interactablesHovered instead."};

/// @brief Field k_InteractionLayerMaskDeprecated offset 0xffffffff size 0x8
static constexpr ::ConstString  k_InteractionLayerMaskDeprecated{u"interactionLayerMask has been deprecated. Use interactionLayers instead."};

/// @brief Field k_InteractionStrengthHover offset 0xffffffff size 0x4
static constexpr float_t  k_InteractionStrengthHover{static_cast<float_t>(0.0f)};

/// @brief Field k_InteractionStrengthSelect offset 0xffffffff size 0x4
static constexpr float_t  k_InteractionStrengthSelect{static_cast<float_t>(1.0f)};

/// @brief Field k_OnHoverEnteredDeprecated offset 0xffffffff size 0x8
static constexpr ::ConstString  k_OnHoverEnteredDeprecated{u"OnHoverEntered(XRBaseInteractable) has been deprecated. Use OnHoverEntered(HoverEnterEventArgs) instead."};

/// @brief Field k_OnHoverEnteringDeprecated offset 0xffffffff size 0x8
static constexpr ::ConstString  k_OnHoverEnteringDeprecated{u"OnHoverEntering(XRBaseInteractable) has been deprecated. Use OnHoverEntering(HoverEnterEventArgs) instead."};

/// @brief Field k_OnHoverExitedDeprecated offset 0xffffffff size 0x8
static constexpr ::ConstString  k_OnHoverExitedDeprecated{u"OnHoverExited(XRBaseInteractable) has been deprecated. Use OnHoverExited(HoverExitEventArgs) instead."};

/// @brief Field k_OnHoverExitingDeprecated offset 0xffffffff size 0x8
static constexpr ::ConstString  k_OnHoverExitingDeprecated{u"OnHoverExiting(XRBaseInteractable) has been deprecated. Use OnHoverExiting(HoverExitEventArgs) instead."};

/// @brief Field k_OnSelectEnteredDeprecated offset 0xffffffff size 0x8
static constexpr ::ConstString  k_OnSelectEnteredDeprecated{u"OnSelectEntered(XRBaseInteractable) has been deprecated. Use OnSelectEntered(SelectEnterEventArgs) instead."};

/// @brief Field k_OnSelectEnteringDeprecated offset 0xffffffff size 0x8
static constexpr ::ConstString  k_OnSelectEnteringDeprecated{u"OnSelectEntering(XRBaseInteractable) has been deprecated. Use OnSelectEntering(SelectEnterEventArgs) instead."};

/// @brief Field k_OnSelectExitedDeprecated offset 0xffffffff size 0x8
static constexpr ::ConstString  k_OnSelectExitedDeprecated{u"OnSelectExited(XRBaseInteractable) has been deprecated. Use OnSelectExited(SelectExitEventArgs) instead."};

/// @brief Field k_OnSelectExitingDeprecated offset 0xffffffff size 0x8
static constexpr ::ConstString  k_OnSelectExitingDeprecated{u"OnSelectExiting(XRBaseInteractable) has been deprecated. Use OnSelectExiting(SelectExitEventArgs) instead."};

/// @brief Field k_RequireSelectExclusiveDeprecated offset 0xffffffff size 0x8
static constexpr ::ConstString  k_RequireSelectExclusiveDeprecated{u"requireSelectExclusive has been deprecated. Put logic in CanSelect instead."};

/// @brief Field k_SelectTargetDeprecated offset 0xffffffff size 0x8
static constexpr ::ConstString  k_SelectTargetDeprecated{u"selectTarget has been deprecated. Use interactablesSelected, GetOldestInteractableSelected, hasSelection, or IsSelecting for similar functionality."};

/// @brief Field k_StartManualInteractionDeprecated offset 0xffffffff size 0x8
static constexpr ::ConstString  k_StartManualInteractionDeprecated{u"StartManualInteraction(XRBaseInteractable) has been deprecated. Use StartManualInteraction(IXRSelectInteractable) instead."};

/// [CompilerGenerated]
/// @brief Field registered, offset: 0x20, size: 0x8, def value: None
 ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs*>*  ___registered;

/// [CompilerGenerated]
/// @brief Field unregistered, offset: 0x28, size: 0x8, def value: None
 ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs*>*  ___unregistered;

/// [SerializeField]
/// @brief Field m_InteractionManager, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>  ___m_InteractionManager;

/// [CompilerGenerated]
/// @brief Field <containingGroup>k__BackingField, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*  ____containingGroup_k__BackingField;

/// [SerializeField]
/// @brief Field m_InteractionLayers, offset: 0x40, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::InteractionLayerMask  ___m_InteractionLayers;

/// [SerializeField]
/// @brief Field m_Handedness, offset: 0x48, size: 0x4, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Interactors::InteractorHandedness  ___m_Handedness;

/// [SerializeField]
/// @brief Field m_AttachTransform, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___m_AttachTransform;

/// [SerializeField]
/// @brief Field m_KeepSelectedTargetValid, offset: 0x58, size: 0x1, def value: None
 bool  ___m_KeepSelectedTargetValid;

/// [SerializeField]
/// @brief Field m_DisableVisualsWhenBlockedInGroup, offset: 0x59, size: 0x1, def value: None
 bool  ___m_DisableVisualsWhenBlockedInGroup;

/// [SerializeField]
/// @brief Field m_StartingSelectedInteractable, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable>  ___m_StartingSelectedInteractable;

/// [SerializeField]
/// @brief Field m_StartingTargetFilter, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Filtering::XRBaseTargetFilter>  ___m_StartingTargetFilter;

/// [SerializeField]
/// @brief Field m_HoverEntered, offset: 0x70, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::HoverEnterEvent*  ___m_HoverEntered;

/// [SerializeField]
/// @brief Field m_HoverExited, offset: 0x78, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::HoverExitEvent*  ___m_HoverExited;

/// [SerializeField]
/// @brief Field m_SelectEntered, offset: 0x80, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::SelectEnterEvent*  ___m_SelectEntered;

/// [SerializeField]
/// @brief Field m_SelectExited, offset: 0x88, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::SelectExitEvent*  ___m_SelectExited;

/// @brief Field m_TargetFilter, offset: 0x90, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRTargetFilter*  ___m_TargetFilter;

/// @brief Field m_AllowHover, offset: 0x98, size: 0x1, def value: None
 bool  ___m_AllowHover;

/// @brief Field m_AllowSelect, offset: 0x99, size: 0x1, def value: None
 bool  ___m_AllowSelect;

/// @brief Field m_IsPerformingManualInteraction, offset: 0x9a, size: 0x1, def value: None
 bool  ___m_IsPerformingManualInteraction;

/// @brief Field m_InteractablesHovered, offset: 0xa0, size: 0x8, def value: None
 ::Unity::XR::CoreUtils::Collections::HashSetList_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*>*  ___m_InteractablesHovered;

/// [CompilerGenerated]
/// @brief Field <hasHover>k__BackingField, offset: 0xa8, size: 0x1, def value: None
 bool  ____hasHover_k__BackingField;

/// @brief Field m_InteractablesSelected, offset: 0xb0, size: 0x8, def value: None
 ::Unity::XR::CoreUtils::Collections::HashSetList_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*>*  ___m_InteractablesSelected;

/// [CompilerGenerated]
/// @brief Field <firstInteractableSelected>k__BackingField, offset: 0xb8, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*  ____firstInteractableSelected_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <hasSelection>k__BackingField, offset: 0xc0, size: 0x1, def value: None
 bool  ____hasSelection_k__BackingField;

/// [SerializeField]
/// [RequireInterface(typeof(UnityEngine.XR.Interaction.Toolkit.Filtering.IXRHoverFilter))]
/// @brief Field m_StartingHoverFilters, offset: 0xc8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  ___m_StartingHoverFilters;

/// @brief Field m_HoverFilters, offset: 0xd0, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRHoverFilter*>*  ___m_HoverFilters;

/// [SerializeField]
/// [RequireInterface(typeof(UnityEngine.XR.Interaction.Toolkit.Filtering.IXRSelectFilter))]
/// @brief Field m_StartingSelectFilters, offset: 0xd8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  ___m_StartingSelectFilters;

/// @brief Field m_SelectFilters, offset: 0xe0, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter*>*  ___m_SelectFilters;

/// @brief Field m_LargestInteractionStrength, offset: 0xe8, size: 0x8, def value: None
 ::Unity::XR::CoreUtils::Bindings::Variables::BindableVariable_1<float_t>*  ___m_LargestInteractionStrength;

/// @brief Field m_ClearedLargestInteractionStrength, offset: 0xf0, size: 0x1, def value: None
 bool  ___m_ClearedLargestInteractionStrength;

/// @brief Field m_AttachPoseOnSelect, offset: 0xf8, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*,::UnityEngine::Pose>*  ___m_AttachPoseOnSelect;

/// @brief Field m_LocalAttachPoseOnSelect, offset: 0x100, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*,::UnityEngine::Pose>*  ___m_LocalAttachPoseOnSelect;

/// @brief Field m_InteractionStrengthInteractables, offset: 0x108, size: 0x8, def value: None
 ::Unity::XR::CoreUtils::Collections::HashSetList_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractionStrengthInteractable*>*  ___m_InteractionStrengthInteractables;

/// @brief Field m_InteractionStrengths, offset: 0x110, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*,float_t>*  ___m_InteractionStrengths;

/// @brief Field m_ManualInteractionInteractable, offset: 0x118, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*  ___m_ManualInteractionInteractable;

/// @brief Field m_RegisteredInteractionManager, offset: 0x120, size: 0x8, def value: None
 ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>  ___m_RegisteredInteractionManager;

/// @brief Field m_XROriginTransform, offset: 0x128, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___m_XROriginTransform;

/// @brief Field m_HasXROrigin, offset: 0x130, size: 0x1, def value: None
 bool  ___m_HasXROrigin;

/// @brief Field m_FailedToFindXROrigin, offset: 0x131, size: 0x1, def value: None
 bool  ___m_FailedToFindXROrigin;

/// [CompilerGenerated]
/// @brief Field <targetPriorityMode>k__BackingField, offset: 0x134, size: 0x4, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Interactors::TargetPriorityMode  ____targetPriorityMode_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <targetsForSelection>k__BackingField, offset: 0x138, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*>*  ____targetsForSelection_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor, ___registered) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor, ___unregistered) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor, ___m_InteractionManager) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor, ____containingGroup_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor, ___m_InteractionLayers) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor, ___m_Handedness) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor, ___m_AttachTransform) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor, ___m_KeepSelectedTargetValid) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor, ___m_DisableVisualsWhenBlockedInGroup) == 0x59, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor, ___m_StartingSelectedInteractable) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor, ___m_StartingTargetFilter) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor, ___m_HoverEntered) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor, ___m_HoverExited) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor, ___m_SelectEntered) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor, ___m_SelectExited) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor, ___m_TargetFilter) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor, ___m_AllowHover) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor, ___m_AllowSelect) == 0x99, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor, ___m_IsPerformingManualInteraction) == 0x9a, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor, ___m_InteractablesHovered) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor, ____hasHover_k__BackingField) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor, ___m_InteractablesSelected) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor, ____firstInteractableSelected_k__BackingField) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor, ____hasSelection_k__BackingField) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor, ___m_StartingHoverFilters) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor, ___m_HoverFilters) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor, ___m_StartingSelectFilters) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor, ___m_SelectFilters) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor, ___m_LargestInteractionStrength) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor, ___m_ClearedLargestInteractionStrength) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor, ___m_AttachPoseOnSelect) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor, ___m_LocalAttachPoseOnSelect) == 0x100, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor, ___m_InteractionStrengthInteractables) == 0x108, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor, ___m_InteractionStrengths) == 0x110, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor, ___m_ManualInteractionInteractable) == 0x118, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor, ___m_RegisteredInteractionManager) == 0x120, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor, ___m_XROriginTransform) == 0x128, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor, ___m_HasXROrigin) == 0x130, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor, ___m_FailedToFindXROrigin) == 0x131, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor, ____targetPriorityMode_k__BackingField) == 0x134, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor, ____targetsForSelection_k__BackingField) == 0x138, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor) == 0x140, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Interactors
