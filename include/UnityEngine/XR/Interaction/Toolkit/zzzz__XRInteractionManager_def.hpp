#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/XRInteractionManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XRInteractionManager)
namespace GlobalNamespace {
struct XRInteractionUpdateOrder_UpdatePhase;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
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
namespace System {
template<typename TResult>
class Func_1;
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
class IXRSelectInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
class XRBaseInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
class XRInteractableSnapVolume;
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
class IXRTargetPriorityInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
struct InteractorHandedness;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class XRBaseInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling {
template<typename T>
class LinkedPool_1;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
template<typename T>
class ExposedRegistrationList_1;
}
namespace UnityEngine::XR::Interaction::Toolkit::Utilities {
template<typename T>
class RegistrationList_1;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class FocusEnterEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class FocusExitEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class HoverEnterEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class HoverExitEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class InteractableRegisteredEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class InteractableUnregisteredEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class InteractionGroupRegisteredEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class InteractionGroupUnregisteredEventArgs;
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
class SelectExitEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class XRInteractionManager___c;
}
namespace UnityEngine {
class Collider;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
class XRInteractionManager;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class XRInteractionManager___c;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*, "UnityEngine.XR.Interaction.Toolkit", "XRInteractionManager");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c*, "UnityEngine.XR.Interaction.Toolkit", "XRInteractionManager/<>c");
// [AddComponentMenu("XR/XR Interaction Manager", 11)]
// [DisallowMultipleComponent]
// [DefaultExecutionOrder(-105)]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.XRInteractionManager.html")]
// Dependencies Unity.Profiling.ProfilerMarker, UnityEngine.MonoBehaviour
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.XRInteractionManager
class CORDL_TYPE XRInteractionManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using __c = ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c;

/// @brief Field <activeInteractionManagers>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__activeInteractionManagers_k__BackingField, put=setStaticF__activeInteractionManagers_k__BackingField)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>>*  _activeInteractionManagers_k__BackingField;

/// @brief Field <lastFocused>k__BackingField, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__lastFocused_k__BackingField, put=__cordl_internal_set__lastFocused_k__BackingField)) ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRFocusInteractable*  _lastFocused_k__BackingField;

/// @brief Field activeInteractionManagersChanged, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_activeInteractionManagersChanged, put=setStaticF_activeInteractionManagersChanged)) ::System::Action_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>,bool>*  activeInteractionManagersChanged;

/// @brief Field focusGained, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_focusGained, put=__cordl_internal_set_focusGained)) ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::FocusEnterEventArgs*>*  focusGained;

/// @brief Field focusLost, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_focusLost, put=__cordl_internal_set_focusLost)) ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs*>*  focusLost;

 __declspec(property(get=get_hoverFilters)) ::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRFilterList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRHoverFilter*>*  hoverFilters;

/// @brief Field interactableRegistered, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_interactableRegistered, put=__cordl_internal_set_interactableRegistered)) ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*>*  interactableRegistered;

/// @brief Field interactableUnregistered, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_interactableUnregistered, put=__cordl_internal_set_interactableUnregistered)) ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*>*  interactableUnregistered;

/// @brief Field interactionGroupRegistered, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_interactionGroupRegistered, put=__cordl_internal_set_interactionGroupRegistered)) ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs*>*  interactionGroupRegistered;

/// @brief Field interactionGroupUnregistered, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_interactionGroupUnregistered, put=__cordl_internal_set_interactionGroupUnregistered)) ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs*>*  interactionGroupUnregistered;

/// @brief Field interactorRegistered, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_interactorRegistered, put=__cordl_internal_set_interactorRegistered)) ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs*>*  interactorRegistered;

/// @brief Field interactorUnregistered, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_interactorUnregistered, put=__cordl_internal_set_interactorUnregistered)) ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs*>*  interactorUnregistered;

 __declspec(property(get=get_lastFocused, put=set_lastFocused)) ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRFocusInteractable*  lastFocused;

/// @brief Field m_ColliderToInteractableMap, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ColliderToInteractableMap, put=__cordl_internal_set_m_ColliderToInteractableMap)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>,::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  m_ColliderToInteractableMap;

/// @brief Field m_ColliderToSnapVolumes, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ColliderToSnapVolumes, put=__cordl_internal_set_m_ColliderToSnapVolumes)) ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>,::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume>>*  m_ColliderToSnapVolumes;

/// @brief Field m_CurrentHovered, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CurrentHovered, put=__cordl_internal_set_m_CurrentHovered)) ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*>*  m_CurrentHovered;

/// @brief Field m_CurrentSelected, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_CurrentSelected, put=__cordl_internal_set_m_CurrentSelected)) ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*>*  m_CurrentSelected;

/// @brief Field m_FocusEnterEventArgs, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_FocusEnterEventArgs, put=__cordl_internal_set_m_FocusEnterEventArgs)) ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::FocusEnterEventArgs*>*  m_FocusEnterEventArgs;

/// @brief Field m_FocusExitEventArgs, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_FocusExitEventArgs, put=__cordl_internal_set_m_FocusExitEventArgs)) ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs*>*  m_FocusExitEventArgs;

/// @brief Field m_GroupsInGroup, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_GroupsInGroup, put=__cordl_internal_set_m_GroupsInGroup)) ::System::Collections::Generic::HashSet_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*>*  m_GroupsInGroup;

/// @brief Field m_HighestPriorityTargetMap, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_HighestPriorityTargetMap, put=__cordl_internal_set_m_HighestPriorityTargetMap)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*,::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRTargetPriorityInteractor*>*>*  m_HighestPriorityTargetMap;

/// @brief Field m_HoverEnterEventArgs, offset 0x118, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_HoverEnterEventArgs, put=__cordl_internal_set_m_HoverEnterEventArgs)) ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*>*  m_HoverEnterEventArgs;

/// @brief Field m_HoverExitEventArgs, offset 0x120, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_HoverExitEventArgs, put=__cordl_internal_set_m_HoverExitEventArgs)) ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*>*  m_HoverExitEventArgs;

/// @brief Field m_HoverFilters, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_HoverFilters, put=__cordl_internal_set_m_HoverFilters)) ::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRHoverFilter*>*  m_HoverFilters;

/// @brief Field m_InteractableRegisteredEventArgs, offset 0x148, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_InteractableRegisteredEventArgs, put=__cordl_internal_set_m_InteractableRegisteredEventArgs)) ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*>*  m_InteractableRegisteredEventArgs;

/// @brief Field m_InteractableUnregisteredEventArgs, offset 0x150, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_InteractableUnregisteredEventArgs, put=__cordl_internal_set_m_InteractableUnregisteredEventArgs)) ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*>*  m_InteractableUnregisteredEventArgs;

/// @brief Field m_Interactables, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Interactables, put=__cordl_internal_set_m_Interactables)) ::UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  m_Interactables;

/// @brief Field m_InteractionGroupRegisteredEventArgs, offset 0x128, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_InteractionGroupRegisteredEventArgs, put=__cordl_internal_set_m_InteractionGroupRegisteredEventArgs)) ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs*>*  m_InteractionGroupRegisteredEventArgs;

/// @brief Field m_InteractionGroupUnregisteredEventArgs, offset 0x130, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_InteractionGroupUnregisteredEventArgs, put=__cordl_internal_set_m_InteractionGroupUnregisteredEventArgs)) ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs*>*  m_InteractionGroupUnregisteredEventArgs;

/// @brief Field m_InteractionGroups, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_InteractionGroups, put=__cordl_internal_set_m_InteractionGroups)) ::UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*>*  m_InteractionGroups;

/// @brief Field m_InteractorRegisteredEventArgs, offset 0x138, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_InteractorRegisteredEventArgs, put=__cordl_internal_set_m_InteractorRegisteredEventArgs)) ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs*>*  m_InteractorRegisteredEventArgs;

/// @brief Field m_InteractorUnregisteredEventArgs, offset 0x140, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_InteractorUnregisteredEventArgs, put=__cordl_internal_set_m_InteractorUnregisteredEventArgs)) ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs*>*  m_InteractorUnregisteredEventArgs;

/// @brief Field m_Interactors, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Interactors, put=__cordl_internal_set_m_Interactors)) ::UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>*  m_Interactors;

/// @brief Field m_InteractorsInGroup, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_InteractorsInGroup, put=__cordl_internal_set_m_InteractorsInGroup)) ::System::Collections::Generic::HashSet_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>*  m_InteractorsInGroup;

/// @brief Field m_ScratchInteractionGroups, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ScratchInteractionGroups, put=__cordl_internal_set_m_ScratchInteractionGroups)) ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*>*  m_ScratchInteractionGroups;

/// @brief Field m_ScratchInteractors, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ScratchInteractors, put=__cordl_internal_set_m_ScratchInteractors)) ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>*  m_ScratchInteractors;

/// @brief Field m_SelectEnterEventArgs, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SelectEnterEventArgs, put=__cordl_internal_set_m_SelectEnterEventArgs)) ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*>*  m_SelectEnterEventArgs;

/// @brief Field m_SelectExitEventArgs, offset 0x110, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SelectExitEventArgs, put=__cordl_internal_set_m_SelectExitEventArgs)) ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*>*  m_SelectExitEventArgs;

/// @brief Field m_SelectFilters, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_SelectFilters, put=__cordl_internal_set_m_SelectFilters)) ::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter*>*  m_SelectFilters;

/// @brief Field m_StartingHoverFilters, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_StartingHoverFilters, put=__cordl_internal_set_m_StartingHoverFilters)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  m_StartingHoverFilters;

/// @brief Field m_StartingSelectFilters, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_StartingSelectFilters, put=__cordl_internal_set_m_StartingSelectFilters)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  m_StartingSelectFilters;

/// @brief Field m_UnorderedValidTargets, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_UnorderedValidTargets, put=__cordl_internal_set_m_UnorderedValidTargets)) ::System::Collections::Generic::HashSet_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  m_UnorderedValidTargets;

/// @brief Field m_ValidTargets, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ValidTargets, put=__cordl_internal_set_m_ValidTargets)) ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  m_ValidTargets;

/// @brief Field s_EvaluateInvalidFocusMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_EvaluateInvalidFocusMarker, put=setStaticF_s_EvaluateInvalidFocusMarker)) ::Unity::Profiling::ProfilerMarker  s_EvaluateInvalidFocusMarker;

/// @brief Field s_EvaluateInvalidHoversMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_EvaluateInvalidHoversMarker, put=setStaticF_s_EvaluateInvalidHoversMarker)) ::Unity::Profiling::ProfilerMarker  s_EvaluateInvalidHoversMarker;

/// @brief Field s_EvaluateInvalidSelectionsMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_EvaluateInvalidSelectionsMarker, put=setStaticF_s_EvaluateInvalidSelectionsMarker)) ::Unity::Profiling::ProfilerMarker  s_EvaluateInvalidSelectionsMarker;

/// @brief Field s_EvaluateValidHoversMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_EvaluateValidHoversMarker, put=setStaticF_s_EvaluateValidHoversMarker)) ::Unity::Profiling::ProfilerMarker  s_EvaluateValidHoversMarker;

/// @brief Field s_EvaluateValidSelectionsMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_EvaluateValidSelectionsMarker, put=setStaticF_s_EvaluateValidSelectionsMarker)) ::Unity::Profiling::ProfilerMarker  s_EvaluateValidSelectionsMarker;

/// @brief Field s_FilterRegisteredValidTargetsMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_FilterRegisteredValidTargetsMarker, put=setStaticF_s_FilterRegisteredValidTargetsMarker)) ::Unity::Profiling::ProfilerMarker  s_FilterRegisteredValidTargetsMarker;

/// @brief Field s_FocusEnterMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_FocusEnterMarker, put=setStaticF_s_FocusEnterMarker)) ::Unity::Profiling::ProfilerMarker  s_FocusEnterMarker;

/// @brief Field s_FocusExitMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_FocusExitMarker, put=setStaticF_s_FocusExitMarker)) ::Unity::Profiling::ProfilerMarker  s_FocusExitMarker;

/// @brief Field s_GetValidTargetsMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_GetValidTargetsMarker, put=setStaticF_s_GetValidTargetsMarker)) ::Unity::Profiling::ProfilerMarker  s_GetValidTargetsMarker;

/// @brief Field s_HoverEnterMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_HoverEnterMarker, put=setStaticF_s_HoverEnterMarker)) ::Unity::Profiling::ProfilerMarker  s_HoverEnterMarker;

/// @brief Field s_HoverExitMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_HoverExitMarker, put=setStaticF_s_HoverExitMarker)) ::Unity::Profiling::ProfilerMarker  s_HoverExitMarker;

/// @brief Field s_PreprocessInteractorsMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_PreprocessInteractorsMarker, put=setStaticF_s_PreprocessInteractorsMarker)) ::Unity::Profiling::ProfilerMarker  s_PreprocessInteractorsMarker;

/// @brief Field s_ProcessInteractablesMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_ProcessInteractablesMarker, put=setStaticF_s_ProcessInteractablesMarker)) ::Unity::Profiling::ProfilerMarker  s_ProcessInteractablesMarker;

/// @brief Field s_ProcessInteractionStrengthMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_ProcessInteractionStrengthMarker, put=setStaticF_s_ProcessInteractionStrengthMarker)) ::Unity::Profiling::ProfilerMarker  s_ProcessInteractionStrengthMarker;

/// @brief Field s_ProcessInteractorsMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_ProcessInteractorsMarker, put=setStaticF_s_ProcessInteractorsMarker)) ::Unity::Profiling::ProfilerMarker  s_ProcessInteractorsMarker;

/// @brief Field s_SelectEnterMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_SelectEnterMarker, put=setStaticF_s_SelectEnterMarker)) ::Unity::Profiling::ProfilerMarker  s_SelectEnterMarker;

/// @brief Field s_SelectExitMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_SelectExitMarker, put=setStaticF_s_SelectExitMarker)) ::Unity::Profiling::ProfilerMarker  s_SelectExitMarker;

/// @brief Field s_TargetPriorityInteractorListPool, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_TargetPriorityInteractorListPool, put=setStaticF_s_TargetPriorityInteractorListPool)) ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRTargetPriorityInteractor*>*>*  s_TargetPriorityInteractorListPool;

/// @brief Field s_UpdateGroupMemberInteractionsMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_UpdateGroupMemberInteractionsMarker, put=setStaticF_s_UpdateGroupMemberInteractionsMarker)) ::Unity::Profiling::ProfilerMarker  s_UpdateGroupMemberInteractionsMarker;

 __declspec(property(get=get_selectFilters)) ::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRFilterList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter*>*  selectFilters;

 __declspec(property(get=get_startingHoverFilters, put=set_startingHoverFilters)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  startingHoverFilters;

 __declspec(property(get=get_startingSelectFilters, put=set_startingSelectFilters)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  startingSelectFilters;

/// @brief Method Awake, addr 0xb40946c, size 0x84, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method CanFocus, addr 0xb40c4e0, size 0x4, virtual true, abstract: false, final false
inline bool CanFocus(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRFocusInteractable*  interactable) ;

/// @brief Method CanHover, addr 0xb40bec8, size 0xd8, virtual true, abstract: false, final false
inline bool CanHover(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*  interactor, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*  interactable) ;

/// @brief Method CanSelect, addr 0xb40c26c, size 0xd8, virtual true, abstract: false, final false
inline bool CanSelect(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*  interactor, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*  interactable) ;

/// @brief Method CancelInteractableFocus, addr 0xb40f7c4, size 0x174, virtual true, abstract: false, final false
inline void CancelInteractableFocus(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRFocusInteractable*  interactable) ;

/// @brief Method CancelInteractableHover, addr 0xb41054c, size 0x174, virtual true, abstract: false, final false
inline void CancelInteractableHover(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*  interactable) ;

/// [Obsolete("CancelInteractableHover(XRBaseInteractable) has been deprecated. Use CancelInteractableHover(IXRHoverInteractable) instead.", true)]
/// @brief Method CancelInteractableHover, addr 0xb414158, size 0x7c, virtual true, abstract: false, final false
inline void CancelInteractableHover(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*  interactable) ;

/// @brief Method CancelInteractableSelection, addr 0xb40feb8, size 0x174, virtual true, abstract: false, final false
inline void CancelInteractableSelection(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*  interactable) ;

/// [Obsolete("CancelInteractableSelection(XRBaseInteractable) has been deprecated. Use CancelInteractableSelection(IXRSelectInteractable) instead.", true)]
/// @brief Method CancelInteractableSelection, addr 0xb413fe4, size 0x7c, virtual true, abstract: false, final false
inline void CancelInteractableSelection(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*  interactable) ;

/// @brief Method CancelInteractorFocus, addr 0xb40da7c, size 0x21c, virtual false, abstract: false, final false
inline void CancelInteractorFocus(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor) ;

/// @brief Method CancelInteractorHover, addr 0xb4103d8, size 0x174, virtual true, abstract: false, final false
inline void CancelInteractorHover(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*  interactor) ;

/// [Obsolete("CancelInteractorHover(XRBaseInteractor) has been deprecated. Use CancelInteractorHover(IXRHoverInteractor) instead.", true)]
/// @brief Method CancelInteractorHover, addr 0xb4140dc, size 0x7c, virtual true, abstract: false, final false
inline void CancelInteractorHover(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*  interactor) ;

/// @brief Method CancelInteractorSelection, addr 0xb40fd44, size 0x174, virtual true, abstract: false, final false
inline void CancelInteractorSelection(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*  interactor) ;

/// [Obsolete("CancelInteractorSelection(XRBaseInteractor) has been deprecated. Use CancelInteractorSelection(IXRSelectInteractor) instead.", true)]
/// @brief Method CancelInteractorSelection, addr 0xb413f68, size 0x7c, virtual true, abstract: false, final false
inline void CancelInteractorSelection(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*  interactor) ;

/// @brief Method ClearInteractionGroupFocus, addr 0xb40f4e8, size 0x2dc, virtual true, abstract: false, final false
inline void ClearInteractionGroupFocus(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*  interactionGroup) ;

/// @brief Method ClearInteractorHover, addr 0xb41002c, size 0x3ac, virtual true, abstract: false, final false
inline void ClearInteractorHover(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*  interactor, ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  validTargets) ;

/// [Obsolete("ClearInteractorHover(XRBaseInteractor, List<XRBaseInteractable>) has been deprecated. Use ClearInteractorHover(IXRHoverInteractor, List<IXRInteractable>) instead.", true)]
/// @brief Method ClearInteractorHover, addr 0xb414060, size 0x7c, virtual true, abstract: false, final false
inline void ClearInteractorHover(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*  interactor, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable>>*  validTargets) ;

/// @brief Method ClearInteractorSelection, addr 0xb40f938, size 0x40c, virtual true, abstract: false, final false
inline void ClearInteractorSelection(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*  interactor, ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  validTargets) ;

/// [Obsolete("ClearInteractorSelection(XRBaseInteractor) has been deprecated. Use ClearInteractorSelection(IXRSelectInteractor, List<IXRInteractable>) instead.", true)]
/// @brief Method ClearInteractorSelection, addr 0xb413eec, size 0x7c, virtual true, abstract: false, final false
inline void ClearInteractorSelection(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*  interactor) ;

/// @brief Method ClearPriorityForSelectionMap, addr 0xb409884, size 0x3f8, virtual false, abstract: false, final false
inline void ClearPriorityForSelectionMap() ;

/// @brief Method ExitInteractableFocus, addr 0xb413464, size 0x174, virtual false, abstract: false, final false
inline void ExitInteractableFocus(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRFocusInteractable*  interactable) ;

/// @brief Method ExitInteractableSelection, addr 0xb41372c, size 0x174, virtual false, abstract: false, final false
inline void ExitInteractableSelection(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*  interactable) ;

/// @brief Method FixedUpdate, addr 0xb40ad3c, size 0x1b0, virtual true, abstract: false, final false
inline void FixedUpdate() ;

/// @brief Method FlushRegistration, addr 0xb40a980, size 0x4c, virtual false, abstract: false, final false
inline void FlushRegistration() ;

/// @brief Method FocusCancel, addr 0xb410ba8, size 0x21c, virtual true, abstract: false, final false
inline void FocusCancel(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*  group, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRFocusInteractable*  interactable) ;

/// @brief Method FocusEnter, addr 0xb41176c, size 0x42c, virtual true, abstract: false, final false
inline void FocusEnter(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*  group, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRFocusInteractable*  interactable, ::UnityEngine::XR::Interaction::Toolkit::FocusEnterEventArgs*  args) ;

/// @brief Method FocusEnter, addr 0xb4106c0, size 0x2d0, virtual true, abstract: false, final false
inline void FocusEnter(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRFocusInteractable*  interactable) ;

/// @brief Method FocusExit, addr 0xb410990, size 0x218, virtual true, abstract: false, final false
inline void FocusExit(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*  group, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRFocusInteractable*  interactable) ;

/// @brief Method FocusExit, addr 0xb411b98, size 0x438, virtual true, abstract: false, final false
inline void FocusExit(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*  group, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRFocusInteractable*  interactable, ::UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs*  args) ;

/// [Obsolete("ForceSelect(XRBaseInteractor, XRBaseInteractable) has been deprecated. Use SelectEnter(IXRSelectInteractor, IXRSelectInteractable) instead.", true)]
/// @brief Method ForceSelect, addr 0xb413e70, size 0x7c, virtual false, abstract: false, final false
inline void ForceSelect(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*  interactor, ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*  interactable) ;

/// [Obsolete("GetColliderToInteractableMap has been deprecated. The signature no longer matches the field used by the XRInteractionManager, so a copy is returned instead of a ref. Changes to the returned Dictionary will not be observed by the XRInteractionManager.", true)]
/// @brief Method GetColliderToInteractableMap, addr 0xb413d78, size 0x7c, virtual false, abstract: false, final false
inline void GetColliderToInteractableMap(::by_ref<::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>,::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable>>*>  map) ;

/// [Obsolete("GetInteractableForCollider has been deprecated. Use TryGetInteractableForCollider(Collider, out IXRInteractable) instead.", true)]
/// @brief Method GetInteractableForCollider, addr 0xb413cfc, size 0x7c, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable> GetInteractableForCollider(::UnityEngine::Collider*  interactableCollider) ;

/// @brief Method GetInteractionGroup, addr 0xb40d1c0, size 0x1dc, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup* GetInteractionGroup(::StringW  groupName) ;

/// @brief Method GetInteractionGroups, addr 0xb40d1a4, size 0x1c, virtual false, abstract: false, final false
inline void GetInteractionGroups(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*>*  interactionGroups) ;

/// @brief Method GetRegisteredInteractables, addr 0xb40ebb8, size 0x6c, virtual false, abstract: false, final false
inline void GetRegisteredInteractables(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  results) ;

/// [Obsolete("GetRegisteredInteractables(List<XRBaseInteractable>) has been deprecated. Use GetRegisteredInteractables(List<IXRInteractable>) instead.", true)]
/// @brief Method GetRegisteredInteractables, addr 0xb413b0c, size 0x7c, virtual false, abstract: false, final false
inline void GetRegisteredInteractables(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable>>*  results) ;

/// @brief Method GetRegisteredInteractionGroups, addr 0xb40eae0, size 0x6c, virtual false, abstract: false, final false
inline void GetRegisteredInteractionGroups(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*>*  results) ;

/// @brief Method GetRegisteredInteractors, addr 0xb40eb4c, size 0x6c, virtual false, abstract: false, final false
inline void GetRegisteredInteractors(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>*  results) ;

/// [Obsolete("GetRegisteredInteractors(List<XRBaseInteractor>) has been deprecated. Use GetRegisteredInteractors(List<IXRInteractor>) instead.", true)]
/// @brief Method GetRegisteredInteractors, addr 0xb413a90, size 0x7c, virtual false, abstract: false, final false
inline void GetRegisteredInteractors(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor>>*  results) ;

/// [Obsolete("GetValidTargets(XRBaseInteractor, List<XRBaseInteractable>) has been deprecated. Use GetValidTargets(IXRInteractor, List<IXRInteractable>) instead.", true)]
/// @brief Method GetValidTargets, addr 0xb413df4, size 0x7c, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable>>* GetValidTargets(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*  interactor, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable>>*  validTargets) ;

/// @brief Method GetValidTargets, addr 0xb40a9cc, size 0x1c0, virtual false, abstract: false, final false
inline void GetValidTargets(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor, ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  targets) ;

/// @brief Method HasInteractionLayerOverlap, addr 0xb40c130, size 0x130, virtual false, abstract: false, final false
static inline bool HasInteractionLayerOverlap(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  interactable) ;

/// @brief Method HoverCancel, addr 0xb4115ec, size 0x180, virtual true, abstract: false, final false
inline void HoverCancel(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*  interactor, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*  interactable) ;

/// [Obsolete("HoverCancel(XRBaseInteractor, XRBaseInteractable) has been deprecated. Use HoverCancel(IXRHoverInteractor, IXRHoverInteractable) instead. You may need to modify your code by casting the argument to call the intended method, such as `HoverCancel((IXRHoverInteractor)interactor, (IXRHoverInteractable)interactable)` instead.", true)]
/// @brief Method HoverCancel, addr 0xb414440, size 0x7c, virtual true, abstract: false, final false
inline void HoverCancel(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*  interactor, ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*  interactable) ;

/// @brief Method HoverEnter, addr 0xb411304, size 0x16c, virtual true, abstract: false, final false
inline void HoverEnter(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*  interactor, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*  interactable) ;

/// @brief Method HoverEnter, addr 0xb412580, size 0x2d8, virtual true, abstract: false, final false
inline void HoverEnter(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*  interactor, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*  interactable, ::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*  args) ;

/// [Obsolete("HoverEnter(XRBaseInteractor, XRBaseInteractable) has been deprecated. Use HoverEnter(IXRHoverInteractor, IXRHoverInteractable) instead. You may need to modify your code by casting the argument to call the intended method, such as `HoverEnter((IXRHoverInteractor)interactor, (IXRHoverInteractable)interactable)` instead.", true)]
/// @brief Method HoverEnter, addr 0xb414348, size 0x7c, virtual true, abstract: false, final false
inline void HoverEnter(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*  interactor, ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*  interactable) ;

/// [Obsolete("HoverEnter(XRBaseInteractor, XRBaseInteractable, HoverEnterEventArgs) has been deprecated. Use HoverEnter(IXRHoverInteractor, IXRHoverInteractable, HoverEnterEventArgs) instead.", true)]
/// @brief Method HoverEnter, addr 0xb4145b4, size 0x7c, virtual true, abstract: false, final false
inline void HoverEnter(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*  interactor, ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*  interactable, ::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*  args) ;

/// @brief Method HoverExit, addr 0xb411470, size 0x17c, virtual true, abstract: false, final false
inline void HoverExit(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*  interactor, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*  interactable) ;

/// @brief Method HoverExit, addr 0xb412858, size 0x2d8, virtual true, abstract: false, final false
inline void HoverExit(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*  interactor, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*  interactable, ::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*  args) ;

/// [Obsolete("HoverExit(XRBaseInteractor, XRBaseInteractable) has been deprecated. Use HoverExit(IXRHoverInteractor, IXRHoverInteractable) instead. You may need to modify your code by casting the argument to call the intended method, such as `HoverExit((IXRHoverInteractor)interactor, (IXRHoverInteractable)interactable)` instead.", true)]
/// @brief Method HoverExit, addr 0xb4143c4, size 0x7c, virtual true, abstract: false, final false
inline void HoverExit(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*  interactor, ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*  interactable) ;

/// [Obsolete("HoverExit(XRBaseInteractor, XRBaseInteractable, HoverExitEventArgs) has been deprecated. Use HoverExit(IXRHoverInteractor, IXRHoverInteractable, HoverExitEventArgs) instead.", true)]
/// @brief Method HoverExit, addr 0xb414630, size 0x7c, virtual true, abstract: false, final false
inline void HoverExit(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*  interactor, ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*  interactable, ::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*  args) ;

/// @brief Method InteractorHoverValidTargets, addr 0xb4130c4, size 0x248, virtual true, abstract: false, final false
inline void InteractorHoverValidTargets(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*  interactor, ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  validTargets) ;

/// [Obsolete("InteractorHoverValidTargets(XRBaseInteractor, List<XRBaseInteractable>) has been deprecated. Use InteractorHoverValidTargets(IXRHoverInteractor, List<IXRInteractable>) instead.", true)]
/// @brief Method InteractorHoverValidTargets, addr 0xb414728, size 0x7c, virtual true, abstract: false, final false
inline void InteractorHoverValidTargets(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*  interactor, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable>>*  validTargets) ;

/// @brief Method InteractorSelectValidTargets, addr 0xb412b30, size 0x594, virtual true, abstract: false, final false
inline void InteractorSelectValidTargets(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*  interactor, ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  validTargets) ;

/// [Obsolete("InteractorSelectValidTargets(XRBaseInteractor, List<XRBaseInteractable>) has been deprecated. Use InteractorSelectValidTargets(IXRSelectInteractor, List<IXRInteractable>) instead.", true)]
/// @brief Method InteractorSelectValidTargets, addr 0xb4146ac, size 0x7c, virtual true, abstract: false, final false
inline void InteractorSelectValidTargets(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*  interactor, ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable>>*  validTargets) ;

/// @brief Method IsColliderRegisteredSnapVolume, addr 0xb40f02c, size 0x58, virtual false, abstract: false, final false
inline bool IsColliderRegisteredSnapVolume(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Collider*>  potentialSnapVolumeCollider) ;

/// @brief Method IsColliderRegisteredToInteractable, addr 0xb40ef98, size 0x94, virtual false, abstract: false, final false
inline bool IsColliderRegisteredToInteractable(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Collider*>  colliderToCheck) ;

/// @brief Method IsFocusPossible, addr 0xb40c4e4, size 0x170, virtual false, abstract: false, final false
inline bool IsFocusPossible(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRFocusInteractable*  interactable) ;

/// @brief Method IsHandSelecting, addr 0xb40f158, size 0x2a4, virtual false, abstract: false, final false
inline bool IsHandSelecting(::UnityEngine::XR::Interaction::Toolkit::Interactors::InteractorHandedness  hand) ;

/// @brief Method IsHighestPriorityTarget, addr 0xb40f084, size 0xd4, virtual false, abstract: false, final false
inline bool IsHighestPriorityTarget(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*  target, ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRTargetPriorityInteractor*>*  interactors) ;

/// @brief Method IsHoverPossible, addr 0xb40bfa0, size 0x190, virtual false, abstract: false, final false
inline bool IsHoverPossible(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*  interactor, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*  interactable) ;

/// @brief Method IsRegistered, addr 0xb40e71c, size 0x1c, virtual false, abstract: false, final false
inline bool IsRegistered(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  interactable) ;

/// [Obsolete("IsRegistered(XRBaseInteractable) has been deprecated. Use IsRegistered(IXRInteractable) instead. You may need to modify your code by casting the argument to call the intended method, such as `IsRegistered((IXRInteractable)this)` instead.", true)]
/// @brief Method IsRegistered, addr 0xb413c04, size 0x7c, virtual false, abstract: false, final false
inline bool IsRegistered(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*  interactable) ;

/// @brief Method IsRegistered, addr 0xb40c944, size 0x1c, virtual false, abstract: false, final false
inline bool IsRegistered(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*  interactionGroup) ;

/// @brief Method IsRegistered, addr 0xb40da60, size 0x1c, virtual false, abstract: false, final false
inline bool IsRegistered(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor) ;

/// [Obsolete("IsRegistered(XRBaseInteractor) has been deprecated. Use IsRegistered(IXRInteractor) instead. You may need to modify your code by casting the argument to call the intended method, such as `IsRegistered((IXRInteractor)this)` instead.", true)]
/// @brief Method IsRegistered, addr 0xb413b88, size 0x7c, virtual false, abstract: false, final false
inline bool IsRegistered(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*  interactor) ;

/// @brief Method IsSelectPossible, addr 0xb40c344, size 0x190, virtual false, abstract: false, final false
inline bool IsSelectPossible(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*  interactor, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*  interactable) ;

/// @brief Method LateUpdate, addr 0xb40ab8c, size 0x1b0, virtual true, abstract: false, final false
inline void LateUpdate() ;

static inline ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager* New_ctor() ;

/// [BeforeRenderOrder(100)]
/// @brief Method OnBeforeRender, addr 0xb40aeec, size 0x1b0, virtual true, abstract: false, final false
inline void OnBeforeRender() ;

/// @brief Method OnDisable, addr 0xb409734, size 0x150, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xb4094f0, size 0x244, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnRegistered, addr 0xb40e1e4, size 0xd8, virtual true, abstract: false, final false
inline void OnRegistered(::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*  args) ;

/// @brief Method OnRegistered, addr 0xb40c960, size 0xd8, virtual true, abstract: false, final false
inline void OnRegistered(::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs*  args) ;

/// @brief Method OnRegistered, addr 0xb40d68c, size 0xd8, virtual true, abstract: false, final false
inline void OnRegistered(::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs*  args) ;

/// @brief Method OnUnregistered, addr 0xb40e738, size 0xd8, virtual true, abstract: false, final false
inline void OnUnregistered(::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*  args) ;

/// @brief Method OnUnregistered, addr 0xb40d0cc, size 0xd8, virtual true, abstract: false, final false
inline void OnUnregistered(::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs*  args) ;

/// @brief Method OnUnregistered, addr 0xb40dc98, size 0xd8, virtual true, abstract: false, final false
inline void OnUnregistered(::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs*  args) ;

/// @brief Method PreprocessInteractors, addr 0xb40b09c, size 0x448, virtual true, abstract: false, final false
inline void PreprocessInteractors(::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase  updatePhase) ;

/// @brief Method ProcessHoverFilters, addr 0xb40c260, size 0xc, virtual false, abstract: false, final false
inline bool ProcessHoverFilters(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*  interactor, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*  interactable) ;

/// @brief Method ProcessInteractables, addr 0xb40b900, size 0x1fc, virtual true, abstract: false, final false
inline void ProcessInteractables(::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase  updatePhase) ;

/// @brief Method ProcessInteractionStrength, addr 0xb40bafc, size 0x3cc, virtual true, abstract: false, final false
inline void ProcessInteractionStrength(::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase  updatePhase) ;

/// @brief Method ProcessInteractors, addr 0xb40b4e4, size 0x41c, virtual true, abstract: false, final false
inline void ProcessInteractors(::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase  updatePhase) ;

/// @brief Method ProcessSelectFilters, addr 0xb40c4d4, size 0xc, virtual false, abstract: false, final false
inline bool ProcessSelectFilters(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*  interactor, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*  interactable) ;

/// @brief Method RegisterInteractable, addr 0xb40dd70, size 0x474, virtual true, abstract: false, final false
inline void RegisterInteractable(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  interactable) ;

/// [Obsolete("RegisterInteractable(XRBaseInteractable) has been deprecated. Use RegisterInteractable(IXRInteractable) instead. You may need to modify your code by casting the argument to call the intended method, such as `RegisterInteractable((IXRInteractable)this)` instead.", true)]
/// @brief Method RegisterInteractable, addr 0xb413998, size 0x7c, virtual true, abstract: false, final false
inline void RegisterInteractable(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*  interactable) ;

/// @brief Method RegisterInteractionGroup, addr 0xb40c654, size 0x2f0, virtual true, abstract: false, final false
inline void RegisterInteractionGroup(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*  interactionGroup) ;

/// @brief Method RegisterInteractor, addr 0xb40d39c, size 0x2f0, virtual true, abstract: false, final false
inline void RegisterInteractor(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor) ;

/// [Obsolete("RegisterInteractor(XRBaseInteractor) has been deprecated. Use RegisterInteractor(IXRInteractor) instead. You may need to modify your code by casting the argument to call the intended method, such as `RegisterInteractor((IXRInteractor)this)` instead.", true)]
/// @brief Method RegisterInteractor, addr 0xb4138a0, size 0x7c, virtual true, abstract: false, final false
inline void RegisterInteractor(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*  interactor) ;

/// @brief Method RegisterSnapVolume, addr 0xb40e810, size 0x1ac, virtual false, abstract: false, final false
inline void RegisterSnapVolume(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume*  snapVolume) ;

/// @brief Method RemoveAllUnregistered, addr 0xb40f3fc, size 0xec, virtual false, abstract: false, final false
static inline int32_t RemoveAllUnregistered(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*  manager, ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  interactables) ;

/// @brief Method ResolveExistingFocus, addr 0xb41330c, size 0x158, virtual true, abstract: false, final false
inline bool ResolveExistingFocus(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*  interactionGroup, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRFocusInteractable*  interactable) ;

/// @brief Method ResolveExistingSelect, addr 0xb4135d8, size 0x154, virtual true, abstract: false, final false
inline bool ResolveExistingSelect(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*  interactor, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*  interactable) ;

/// @brief Method SelectCancel, addr 0xb411184, size 0x180, virtual true, abstract: false, final false
inline void SelectCancel(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*  interactor, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*  interactable) ;

/// [Obsolete("SelectCancel(XRBaseInteractor, XRBaseInteractable) has been deprecated. Use SelectCancel(IXRSelectInteractor, IXRSelectInteractable) instead. You may need to modify your code by casting the argument to call the intended method, such as `SelectCancel((IXRSelectInteractor)interactor, (IXRSelectInteractable)interactable)` instead.", true)]
/// @brief Method SelectCancel, addr 0xb4142cc, size 0x7c, virtual true, abstract: false, final false
inline void SelectCancel(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*  interactor, ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*  interactable) ;

/// @brief Method SelectEnter, addr 0xb410dc4, size 0x244, virtual true, abstract: false, final false
inline void SelectEnter(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*  interactor, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*  interactable) ;

/// @brief Method SelectEnter, addr 0xb411fd0, size 0x2d8, virtual true, abstract: false, final false
inline void SelectEnter(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*  interactor, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*  interactable, ::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*  args) ;

/// [Obsolete("SelectEnter(XRBaseInteractor, XRBaseInteractable) has been deprecated. Use SelectEnter(IXRSelectInteractor, IXRSelectInteractable) instead. You may need to modify your code by casting the argument to call the intended method, such as `SelectEnter((IXRSelectInteractor)interactor, (IXRSelectInteractable)interactable)` instead.", true)]
/// @brief Method SelectEnter, addr 0xb4141d4, size 0x7c, virtual true, abstract: false, final false
inline void SelectEnter(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*  interactor, ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*  interactable) ;

/// [Obsolete("SelectEnter(XRBaseInteractor, XRBaseInteractable, SelectEnterEventArgs) has been deprecated. Use SelectEnter(IXRSelectInteractor, IXRSelectInteractable, SelectEnterEventArgs) instead.", true)]
/// @brief Method SelectEnter, addr 0xb4144bc, size 0x7c, virtual true, abstract: false, final false
inline void SelectEnter(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*  interactor, ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*  interactable, ::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*  args) ;

/// @brief Method SelectExit, addr 0xb411008, size 0x17c, virtual true, abstract: false, final false
inline void SelectExit(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*  interactor, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*  interactable) ;

/// @brief Method SelectExit, addr 0xb4122a8, size 0x2d8, virtual true, abstract: false, final false
inline void SelectExit(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*  interactor, ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*  interactable, ::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*  args) ;

/// [Obsolete("SelectExit(XRBaseInteractor, XRBaseInteractable) has been deprecated. Use SelectExit(IXRSelectInteractor, IXRSelectInteractable) instead. You may need to modify your code by casting the argument to call the intended method, such as `SelectExit((IXRSelectInteractor)interactor, (IXRSelectInteractable)interactable)` instead.", true)]
/// @brief Method SelectExit, addr 0xb414250, size 0x7c, virtual true, abstract: false, final false
inline void SelectExit(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*  interactor, ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*  interactable) ;

/// [Obsolete("SelectExit(XRBaseInteractor, XRBaseInteractable, SelectExitEventArgs) has been deprecated. Use SelectExit(IXRSelectInteractor, IXRSelectInteractable, SelectExitEventArgs) instead.", true)]
/// @brief Method SelectExit, addr 0xb414538, size 0x7c, virtual true, abstract: false, final false
inline void SelectExit(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*  interactor, ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*  interactable, ::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*  args) ;

/// [Obsolete("TryGetInteractableForCollider has been deprecated. Use GetInteractableForCollider instead. (UnityUpgradable) -> GetInteractableForCollider(*)", true)]
/// @brief Method TryGetInteractableForCollider, addr 0xb413c80, size 0x7c, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable> TryGetInteractableForCollider(::UnityEngine::Collider*  interactableCollider) ;

/// @brief Method TryGetInteractableForCollider, addr 0xb40ec24, size 0x198, virtual false, abstract: false, final false
inline bool TryGetInteractableForCollider(::UnityEngine::Collider*  interactableCollider, ::by_ref<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>  interactable) ;

/// @brief Method TryGetInteractableForCollider, addr 0xb40edbc, size 0x1dc, virtual false, abstract: false, final false
inline bool TryGetInteractableForCollider(::UnityEngine::Collider*  interactableCollider, ::by_ref<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>  interactable, ::by_ref<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume*>  snapVolume) ;

/// @brief Method UnregisterInteractable, addr 0xb40e2bc, size 0x460, virtual true, abstract: false, final false
inline void UnregisterInteractable(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  interactable) ;

/// [Obsolete("UnregisterInteractable(XRBaseInteractable) has been deprecated. Use UnregisterInteractable(IXRInteractable) instead. You may need to modify your code by casting the argument to call the intended method, such as `UnregisterInteractable((IXRInteractable)this)` instead.", true)]
/// @brief Method UnregisterInteractable, addr 0xb413a14, size 0x7c, virtual true, abstract: false, final false
inline void UnregisterInteractable(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*  interactable) ;

/// @brief Method UnregisterInteractionGroup, addr 0xb40ca38, size 0x694, virtual true, abstract: false, final false
inline void UnregisterInteractionGroup(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*  interactionGroup) ;

/// @brief Method UnregisterInteractor, addr 0xb40d764, size 0x2fc, virtual true, abstract: false, final false
inline void UnregisterInteractor(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor) ;

/// [Obsolete("UnregisterInteractor(XRBaseInteractor) has been deprecated. Use UnregisterInteractor(IXRInteractor) instead. You may need to modify your code by casting the argument to call the intended method, such as `UnregisterInteractor((IXRInteractor)this)` instead.", true)]
/// @brief Method UnregisterInteractor, addr 0xb41391c, size 0x7c, virtual true, abstract: false, final false
inline void UnregisterInteractor(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*  interactor) ;

/// @brief Method UnregisterSnapVolume, addr 0xb40e9bc, size 0x124, virtual false, abstract: false, final false
inline void UnregisterSnapVolume(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume*  snapVolume) ;

/// @brief Method Update, addr 0xb409c7c, size 0xd04, virtual true, abstract: false, final false
inline void Update() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRFocusInteractable* const& __cordl_internal_get__lastFocused_k__BackingField() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRFocusInteractable*& __cordl_internal_get__lastFocused_k__BackingField() ;

constexpr ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::FocusEnterEventArgs*>* const& __cordl_internal_get_focusGained() const;

constexpr ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::FocusEnterEventArgs*>*& __cordl_internal_get_focusGained() ;

constexpr ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs*>* const& __cordl_internal_get_focusLost() const;

constexpr ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs*>*& __cordl_internal_get_focusLost() ;

constexpr ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*>* const& __cordl_internal_get_interactableRegistered() const;

constexpr ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*>*& __cordl_internal_get_interactableRegistered() ;

constexpr ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*>* const& __cordl_internal_get_interactableUnregistered() const;

constexpr ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*>*& __cordl_internal_get_interactableUnregistered() ;

constexpr ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs*>* const& __cordl_internal_get_interactionGroupRegistered() const;

constexpr ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs*>*& __cordl_internal_get_interactionGroupRegistered() ;

constexpr ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs*>* const& __cordl_internal_get_interactionGroupUnregistered() const;

constexpr ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs*>*& __cordl_internal_get_interactionGroupUnregistered() ;

constexpr ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs*>* const& __cordl_internal_get_interactorRegistered() const;

constexpr ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs*>*& __cordl_internal_get_interactorRegistered() ;

constexpr ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs*>* const& __cordl_internal_get_interactorUnregistered() const;

constexpr ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs*>*& __cordl_internal_get_interactorUnregistered() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>,::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>* const& __cordl_internal_get_m_ColliderToInteractableMap() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>,::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*& __cordl_internal_get_m_ColliderToInteractableMap() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>,::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume>>* const& __cordl_internal_get_m_ColliderToSnapVolumes() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>,::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume>>*& __cordl_internal_get_m_ColliderToSnapVolumes() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*>* const& __cordl_internal_get_m_CurrentHovered() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*>*& __cordl_internal_get_m_CurrentHovered() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*>* const& __cordl_internal_get_m_CurrentSelected() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*>*& __cordl_internal_get_m_CurrentSelected() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::FocusEnterEventArgs*>* const& __cordl_internal_get_m_FocusEnterEventArgs() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::FocusEnterEventArgs*>*& __cordl_internal_get_m_FocusEnterEventArgs() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs*>* const& __cordl_internal_get_m_FocusExitEventArgs() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs*>*& __cordl_internal_get_m_FocusExitEventArgs() ;

constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*>* const& __cordl_internal_get_m_GroupsInGroup() const;

constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*>*& __cordl_internal_get_m_GroupsInGroup() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*,::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRTargetPriorityInteractor*>*>* const& __cordl_internal_get_m_HighestPriorityTargetMap() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*,::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRTargetPriorityInteractor*>*>*& __cordl_internal_get_m_HighestPriorityTargetMap() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*>* const& __cordl_internal_get_m_HoverEnterEventArgs() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*>*& __cordl_internal_get_m_HoverEnterEventArgs() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*>* const& __cordl_internal_get_m_HoverExitEventArgs() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*>*& __cordl_internal_get_m_HoverExitEventArgs() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRHoverFilter*>* const& __cordl_internal_get_m_HoverFilters() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRHoverFilter*>*& __cordl_internal_get_m_HoverFilters() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*>* const& __cordl_internal_get_m_InteractableRegisteredEventArgs() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*>*& __cordl_internal_get_m_InteractableRegisteredEventArgs() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*>* const& __cordl_internal_get_m_InteractableUnregisteredEventArgs() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*>*& __cordl_internal_get_m_InteractableUnregisteredEventArgs() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>* const& __cordl_internal_get_m_Interactables() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*& __cordl_internal_get_m_Interactables() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs*>* const& __cordl_internal_get_m_InteractionGroupRegisteredEventArgs() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs*>*& __cordl_internal_get_m_InteractionGroupRegisteredEventArgs() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs*>* const& __cordl_internal_get_m_InteractionGroupUnregisteredEventArgs() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs*>*& __cordl_internal_get_m_InteractionGroupUnregisteredEventArgs() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*>* const& __cordl_internal_get_m_InteractionGroups() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*>*& __cordl_internal_get_m_InteractionGroups() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs*>* const& __cordl_internal_get_m_InteractorRegisteredEventArgs() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs*>*& __cordl_internal_get_m_InteractorRegisteredEventArgs() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs*>* const& __cordl_internal_get_m_InteractorUnregisteredEventArgs() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs*>*& __cordl_internal_get_m_InteractorUnregisteredEventArgs() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>* const& __cordl_internal_get_m_Interactors() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>*& __cordl_internal_get_m_Interactors() ;

constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>* const& __cordl_internal_get_m_InteractorsInGroup() const;

constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>*& __cordl_internal_get_m_InteractorsInGroup() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*>* const& __cordl_internal_get_m_ScratchInteractionGroups() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*>*& __cordl_internal_get_m_ScratchInteractionGroups() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>* const& __cordl_internal_get_m_ScratchInteractors() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>*& __cordl_internal_get_m_ScratchInteractors() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*>* const& __cordl_internal_get_m_SelectEnterEventArgs() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*>*& __cordl_internal_get_m_SelectEnterEventArgs() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*>* const& __cordl_internal_get_m_SelectExitEventArgs() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*>*& __cordl_internal_get_m_SelectExitEventArgs() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter*>* const& __cordl_internal_get_m_SelectFilters() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter*>*& __cordl_internal_get_m_SelectFilters() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* const& __cordl_internal_get_m_StartingHoverFilters() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*& __cordl_internal_get_m_StartingHoverFilters() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* const& __cordl_internal_get_m_StartingSelectFilters() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*& __cordl_internal_get_m_StartingSelectFilters() ;

constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>* const& __cordl_internal_get_m_UnorderedValidTargets() const;

constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*& __cordl_internal_get_m_UnorderedValidTargets() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>* const& __cordl_internal_get_m_ValidTargets() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*& __cordl_internal_get_m_ValidTargets() ;

constexpr void __cordl_internal_set__lastFocused_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRFocusInteractable*  value) ;

constexpr void __cordl_internal_set_focusGained(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::FocusEnterEventArgs*>*  value) ;

constexpr void __cordl_internal_set_focusLost(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs*>*  value) ;

constexpr void __cordl_internal_set_interactableRegistered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*>*  value) ;

constexpr void __cordl_internal_set_interactableUnregistered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*>*  value) ;

constexpr void __cordl_internal_set_interactionGroupRegistered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs*>*  value) ;

constexpr void __cordl_internal_set_interactionGroupUnregistered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs*>*  value) ;

constexpr void __cordl_internal_set_interactorRegistered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs*>*  value) ;

constexpr void __cordl_internal_set_interactorUnregistered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs*>*  value) ;

constexpr void __cordl_internal_set_m_ColliderToInteractableMap(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>,::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  value) ;

constexpr void __cordl_internal_set_m_ColliderToSnapVolumes(::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>,::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume>>*  value) ;

constexpr void __cordl_internal_set_m_CurrentHovered(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*>*  value) ;

constexpr void __cordl_internal_set_m_CurrentSelected(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*>*  value) ;

constexpr void __cordl_internal_set_m_FocusEnterEventArgs(::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::FocusEnterEventArgs*>*  value) ;

constexpr void __cordl_internal_set_m_FocusExitEventArgs(::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs*>*  value) ;

constexpr void __cordl_internal_set_m_GroupsInGroup(::System::Collections::Generic::HashSet_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*>*  value) ;

constexpr void __cordl_internal_set_m_HighestPriorityTargetMap(::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*,::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRTargetPriorityInteractor*>*>*  value) ;

constexpr void __cordl_internal_set_m_HoverEnterEventArgs(::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*>*  value) ;

constexpr void __cordl_internal_set_m_HoverExitEventArgs(::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*>*  value) ;

constexpr void __cordl_internal_set_m_HoverFilters(::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRHoverFilter*>*  value) ;

constexpr void __cordl_internal_set_m_InteractableRegisteredEventArgs(::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*>*  value) ;

constexpr void __cordl_internal_set_m_InteractableUnregisteredEventArgs(::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*>*  value) ;

constexpr void __cordl_internal_set_m_Interactables(::UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  value) ;

constexpr void __cordl_internal_set_m_InteractionGroupRegisteredEventArgs(::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs*>*  value) ;

constexpr void __cordl_internal_set_m_InteractionGroupUnregisteredEventArgs(::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs*>*  value) ;

constexpr void __cordl_internal_set_m_InteractionGroups(::UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*>*  value) ;

constexpr void __cordl_internal_set_m_InteractorRegisteredEventArgs(::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs*>*  value) ;

constexpr void __cordl_internal_set_m_InteractorUnregisteredEventArgs(::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs*>*  value) ;

constexpr void __cordl_internal_set_m_Interactors(::UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>*  value) ;

constexpr void __cordl_internal_set_m_InteractorsInGroup(::System::Collections::Generic::HashSet_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>*  value) ;

constexpr void __cordl_internal_set_m_ScratchInteractionGroups(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*>*  value) ;

constexpr void __cordl_internal_set_m_ScratchInteractors(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>*  value) ;

constexpr void __cordl_internal_set_m_SelectEnterEventArgs(::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*>*  value) ;

constexpr void __cordl_internal_set_m_SelectExitEventArgs(::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*>*  value) ;

constexpr void __cordl_internal_set_m_SelectFilters(::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter*>*  value) ;

constexpr void __cordl_internal_set_m_StartingHoverFilters(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  value) ;

constexpr void __cordl_internal_set_m_StartingSelectFilters(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  value) ;

constexpr void __cordl_internal_set_m_UnorderedValidTargets(::System::Collections::Generic::HashSet_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  value) ;

constexpr void __cordl_internal_set_m_ValidTargets(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  value) ;

/// @brief Method .ctor, addr 0xb4147a4, size 0x115c, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_activeInteractionManagersChanged, addr 0xb4091f4, size 0xf0, virtual false, abstract: false, final false
static inline void add_activeInteractionManagersChanged(::System::Action_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>,bool>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_focusGained, addr 0xb408f34, size 0xb0, virtual false, abstract: false, final false
inline void add_focusGained(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::FocusEnterEventArgs*>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_focusLost, addr 0xb409094, size 0xb0, virtual false, abstract: false, final false
inline void add_focusLost(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs*>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_interactableRegistered, addr 0xb408c74, size 0xb0, virtual false, abstract: false, final false
inline void add_interactableRegistered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_interactableUnregistered, addr 0xb408dd4, size 0xb0, virtual false, abstract: false, final false
inline void add_interactableUnregistered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_interactionGroupRegistered, addr 0xb4086f4, size 0xb0, virtual false, abstract: false, final false
inline void add_interactionGroupRegistered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs*>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_interactionGroupUnregistered, addr 0xb408854, size 0xb0, virtual false, abstract: false, final false
inline void add_interactionGroupUnregistered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs*>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_interactorRegistered, addr 0xb4089b4, size 0xb0, virtual false, abstract: false, final false
inline void add_interactorRegistered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs*>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_interactorUnregistered, addr 0xb408b14, size 0xb0, virtual false, abstract: false, final false
inline void add_interactorUnregistered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs*>*  value) ;

static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>>* getStaticF__activeInteractionManagers_k__BackingField() ;

static inline ::System::Action_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>,bool>* getStaticF_activeInteractionManagersChanged() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_EvaluateInvalidFocusMarker() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_EvaluateInvalidHoversMarker() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_EvaluateInvalidSelectionsMarker() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_EvaluateValidHoversMarker() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_EvaluateValidSelectionsMarker() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_FilterRegisteredValidTargetsMarker() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_FocusEnterMarker() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_FocusExitMarker() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_GetValidTargetsMarker() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_HoverEnterMarker() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_HoverExitMarker() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_PreprocessInteractorsMarker() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_ProcessInteractablesMarker() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_ProcessInteractionStrengthMarker() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_ProcessInteractorsMarker() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_SelectEnterMarker() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_SelectExitMarker() ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRTargetPriorityInteractor*>*>* getStaticF_s_TargetPriorityInteractorListPool() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF_s_UpdateGroupMemberInteractionsMarker() ;

/// [CompilerGenerated]
/// @brief Method get_activeInteractionManagers, addr 0xb409414, size 0x58, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>>* get_activeInteractionManagers() ;

/// @brief Method get_hoverFilters, addr 0xb4093e4, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRFilterList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRHoverFilter*>* get_hoverFilters() ;

/// [CompilerGenerated]
/// @brief Method get_lastFocused, addr 0xb409404, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRFocusInteractable* get_lastFocused() ;

/// @brief Method get_selectFilters, addr 0xb4093fc, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRFilterList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter*>* get_selectFilters() ;

/// @brief Method get_startingHoverFilters, addr 0xb4093d4, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* get_startingHoverFilters() ;

/// @brief Method get_startingSelectFilters, addr 0xb4093ec, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* get_startingSelectFilters() ;

/// [CompilerGenerated]
/// @brief Method remove_activeInteractionManagersChanged, addr 0xb4092e4, size 0xf0, virtual false, abstract: false, final false
static inline void remove_activeInteractionManagersChanged(::System::Action_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>,bool>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_focusGained, addr 0xb408fe4, size 0xb0, virtual false, abstract: false, final false
inline void remove_focusGained(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::FocusEnterEventArgs*>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_focusLost, addr 0xb409144, size 0xb0, virtual false, abstract: false, final false
inline void remove_focusLost(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs*>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_interactableRegistered, addr 0xb408d24, size 0xb0, virtual false, abstract: false, final false
inline void remove_interactableRegistered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_interactableUnregistered, addr 0xb408e84, size 0xb0, virtual false, abstract: false, final false
inline void remove_interactableUnregistered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_interactionGroupRegistered, addr 0xb4087a4, size 0xb0, virtual false, abstract: false, final false
inline void remove_interactionGroupRegistered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs*>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_interactionGroupUnregistered, addr 0xb408904, size 0xb0, virtual false, abstract: false, final false
inline void remove_interactionGroupUnregistered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs*>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_interactorRegistered, addr 0xb408a64, size 0xb0, virtual false, abstract: false, final false
inline void remove_interactorRegistered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs*>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_interactorUnregistered, addr 0xb408bc4, size 0xb0, virtual false, abstract: false, final false
inline void remove_interactorUnregistered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs*>*  value) ;

static inline void setStaticF__activeInteractionManagers_k__BackingField(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>>*  value) ;

static inline void setStaticF_activeInteractionManagersChanged(::System::Action_2<::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>,bool>*  value) ;

static inline void setStaticF_s_EvaluateInvalidFocusMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_s_EvaluateInvalidHoversMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_s_EvaluateInvalidSelectionsMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_s_EvaluateValidHoversMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_s_EvaluateValidSelectionsMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_s_FilterRegisteredValidTargetsMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_s_FocusEnterMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_s_FocusExitMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_s_GetValidTargetsMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_s_HoverEnterMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_s_HoverExitMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_s_PreprocessInteractorsMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_s_ProcessInteractablesMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_s_ProcessInteractionStrengthMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_s_ProcessInteractorsMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_s_SelectEnterMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_s_SelectExitMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF_s_TargetPriorityInteractorListPool(::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRTargetPriorityInteractor*>*>*  value) ;

static inline void setStaticF_s_UpdateGroupMemberInteractionsMarker(::Unity::Profiling::ProfilerMarker  value) ;

/// [CompilerGenerated]
/// @brief Method set_lastFocused, addr 0xb40940c, size 0x8, virtual false, abstract: false, final false
inline void set_lastFocused(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRFocusInteractable*  value) ;

/// @brief Method set_startingHoverFilters, addr 0xb4093dc, size 0x8, virtual false, abstract: false, final false
inline void set_startingHoverFilters(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  value) ;

/// @brief Method set_startingSelectFilters, addr 0xb4093f4, size 0x8, virtual false, abstract: false, final false
inline void set_startingSelectFilters(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRInteractionManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRInteractionManager", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRInteractionManager(XRInteractionManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRInteractionManager", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRInteractionManager(XRInteractionManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11108};

/// @brief Field k_CancelInteractableHoverDeprecated offset 0xffffffff size 0x8
static constexpr ::ConstString  k_CancelInteractableHoverDeprecated{u"CancelInteractableHover(XRBaseInteractable) has been deprecated. Use CancelInteractableHover(IXRHoverInteractable) instead."};

/// @brief Field k_CancelInteractableSelectionDeprecated offset 0xffffffff size 0x8
static constexpr ::ConstString  k_CancelInteractableSelectionDeprecated{u"CancelInteractableSelection(XRBaseInteractable) has been deprecated. Use CancelInteractableSelection(IXRSelectInteractable) instead."};

/// @brief Field k_CancelInteractorHoverDeprecated offset 0xffffffff size 0x8
static constexpr ::ConstString  k_CancelInteractorHoverDeprecated{u"CancelInteractorHover(XRBaseInteractor) has been deprecated. Use CancelInteractorHover(IXRHoverInteractor) instead."};

/// @brief Field k_CancelInteractorSelectionDeprecated offset 0xffffffff size 0x8
static constexpr ::ConstString  k_CancelInteractorSelectionDeprecated{u"CancelInteractorSelection(XRBaseInteractor) has been deprecated. Use CancelInteractorSelection(IXRSelectInteractor) instead."};

/// @brief Field k_ClearInteractorHoverDeprecated offset 0xffffffff size 0x8
static constexpr ::ConstString  k_ClearInteractorHoverDeprecated{u"ClearInteractorHover(XRBaseInteractor, List<XRBaseInteractable>) has been deprecated. Use ClearInteractorHover(IXRHoverInteractor, List<IXRInteractable>) instead."};

/// @brief Field k_ClearInteractorSelectionDeprecated offset 0xffffffff size 0x8
static constexpr ::ConstString  k_ClearInteractorSelectionDeprecated{u"ClearInteractorSelection(XRBaseInteractor) has been deprecated. Use ClearInteractorSelection(IXRSelectInteractor, List<IXRInteractable>) instead."};

/// @brief Field k_ForceSelectDeprecated offset 0xffffffff size 0x8
static constexpr ::ConstString  k_ForceSelectDeprecated{u"ForceSelect(XRBaseInteractor, XRBaseInteractable) has been deprecated. Use SelectEnter(IXRSelectInteractor, IXRSelectInteractable) instead."};

/// @brief Field k_GetColliderToInteractableMapDeprecated offset 0xffffffff size 0x8
static constexpr ::ConstString  k_GetColliderToInteractableMapDeprecated{u"GetColliderToInteractableMap has been deprecated. The signature no longer matches the field used by the XRInteractionManager, so a copy is returned instead of a ref. Changes to the returned Dictionary will not be observed by the XRInteractionManager."};

/// @brief Field k_GetInteractableForColliderDeprecated offset 0xffffffff size 0x8
static constexpr ::ConstString  k_GetInteractableForColliderDeprecated{u"GetInteractableForCollider has been deprecated. Use TryGetInteractableForCollider(Collider, out IXRInteractable) instead."};

/// @brief Field k_GetRegisteredInteractablesDeprecated offset 0xffffffff size 0x8
static constexpr ::ConstString  k_GetRegisteredInteractablesDeprecated{u"GetRegisteredInteractables(List<XRBaseInteractable>) has been deprecated. Use GetRegisteredInteractables(List<IXRInteractable>) instead."};

/// @brief Field k_GetRegisteredInteractorsDeprecated offset 0xffffffff size 0x8
static constexpr ::ConstString  k_GetRegisteredInteractorsDeprecated{u"GetRegisteredInteractors(List<XRBaseInteractor>) has been deprecated. Use GetRegisteredInteractors(List<IXRInteractor>) instead."};

/// @brief Field k_GetValidTargetsDeprecated offset 0xffffffff size 0x8
static constexpr ::ConstString  k_GetValidTargetsDeprecated{u"GetValidTargets(XRBaseInteractor, List<XRBaseInteractable>) has been deprecated. Use GetValidTargets(IXRInteractor, List<IXRInteractable>) instead."};

/// @brief Field k_HoverCancelDeprecated offset 0xffffffff size 0x8
static constexpr ::ConstString  k_HoverCancelDeprecated{u"HoverCancel(XRBaseInteractor, XRBaseInteractable) has been deprecated. Use HoverCancel(IXRHoverInteractor, IXRHoverInteractable) instead. You may need to modify your code by casting the argument to call the intended method, such as `HoverCancel((IXRHoverInteractor)interactor, (IXRHoverInteractable)interactable)` instead."};

/// @brief Field k_HoverEnterDeprecated offset 0xffffffff size 0x8
static constexpr ::ConstString  k_HoverEnterDeprecated{u"HoverEnter(XRBaseInteractor, XRBaseInteractable) has been deprecated. Use HoverEnter(IXRHoverInteractor, IXRHoverInteractable) instead. You may need to modify your code by casting the argument to call the intended method, such as `HoverEnter((IXRHoverInteractor)interactor, (IXRHoverInteractable)interactable)` instead."};

/// @brief Field k_HoverEnterProtectedDeprecated offset 0xffffffff size 0x8
static constexpr ::ConstString  k_HoverEnterProtectedDeprecated{u"HoverEnter(XRBaseInteractor, XRBaseInteractable, HoverEnterEventArgs) has been deprecated. Use HoverEnter(IXRHoverInteractor, IXRHoverInteractable, HoverEnterEventArgs) instead."};

/// @brief Field k_HoverExitDeprecated offset 0xffffffff size 0x8
static constexpr ::ConstString  k_HoverExitDeprecated{u"HoverExit(XRBaseInteractor, XRBaseInteractable) has been deprecated. Use HoverExit(IXRHoverInteractor, IXRHoverInteractable) instead. You may need to modify your code by casting the argument to call the intended method, such as `HoverExit((IXRHoverInteractor)interactor, (IXRHoverInteractable)interactable)` instead."};

/// @brief Field k_HoverExitProtectedDeprecated offset 0xffffffff size 0x8
static constexpr ::ConstString  k_HoverExitProtectedDeprecated{u"HoverExit(XRBaseInteractor, XRBaseInteractable, HoverExitEventArgs) has been deprecated. Use HoverExit(IXRHoverInteractor, IXRHoverInteractable, HoverExitEventArgs) instead."};

/// @brief Field k_InteractorHoverValidTargetsDeprecated offset 0xffffffff size 0x8
static constexpr ::ConstString  k_InteractorHoverValidTargetsDeprecated{u"InteractorHoverValidTargets(XRBaseInteractor, List<XRBaseInteractable>) has been deprecated. Use InteractorHoverValidTargets(IXRHoverInteractor, List<IXRInteractable>) instead."};

/// @brief Field k_InteractorSelectValidTargetsDeprecated offset 0xffffffff size 0x8
static constexpr ::ConstString  k_InteractorSelectValidTargetsDeprecated{u"InteractorSelectValidTargets(XRBaseInteractor, List<XRBaseInteractable>) has been deprecated. Use InteractorSelectValidTargets(IXRSelectInteractor, List<IXRInteractable>) instead."};

/// @brief Field k_IsRegisteredInteractableDeprecated offset 0xffffffff size 0x8
static constexpr ::ConstString  k_IsRegisteredInteractableDeprecated{u"IsRegistered(XRBaseInteractable) has been deprecated. Use IsRegistered(IXRInteractable) instead. You may need to modify your code by casting the argument to call the intended method, such as `IsRegistered((IXRInteractable)this)` instead."};

/// @brief Field k_IsRegisteredInteractorDeprecated offset 0xffffffff size 0x8
static constexpr ::ConstString  k_IsRegisteredInteractorDeprecated{u"IsRegistered(XRBaseInteractor) has been deprecated. Use IsRegistered(IXRInteractor) instead. You may need to modify your code by casting the argument to call the intended method, such as `IsRegistered((IXRInteractor)this)` instead."};

/// @brief Field k_RegisterInteractableDeprecated offset 0xffffffff size 0x8
static constexpr ::ConstString  k_RegisterInteractableDeprecated{u"RegisterInteractable(XRBaseInteractable) has been deprecated. Use RegisterInteractable(IXRInteractable) instead. You may need to modify your code by casting the argument to call the intended method, such as `RegisterInteractable((IXRInteractable)this)` instead."};

/// @brief Field k_RegisterInteractorDeprecated offset 0xffffffff size 0x8
static constexpr ::ConstString  k_RegisterInteractorDeprecated{u"RegisterInteractor(XRBaseInteractor) has been deprecated. Use RegisterInteractor(IXRInteractor) instead. You may need to modify your code by casting the argument to call the intended method, such as `RegisterInteractor((IXRInteractor)this)` instead."};

/// @brief Field k_SelectCancelDeprecated offset 0xffffffff size 0x8
static constexpr ::ConstString  k_SelectCancelDeprecated{u"SelectCancel(XRBaseInteractor, XRBaseInteractable) has been deprecated. Use SelectCancel(IXRSelectInteractor, IXRSelectInteractable) instead. You may need to modify your code by casting the argument to call the intended method, such as `SelectCancel((IXRSelectInteractor)interactor, (IXRSelectInteractable)interactable)` instead."};

/// @brief Field k_SelectEnterDeprecated offset 0xffffffff size 0x8
static constexpr ::ConstString  k_SelectEnterDeprecated{u"SelectEnter(XRBaseInteractor, XRBaseInteractable) has been deprecated. Use SelectEnter(IXRSelectInteractor, IXRSelectInteractable) instead. You may need to modify your code by casting the argument to call the intended method, such as `SelectEnter((IXRSelectInteractor)interactor, (IXRSelectInteractable)interactable)` instead."};

/// @brief Field k_SelectEnterProtectedDeprecated offset 0xffffffff size 0x8
static constexpr ::ConstString  k_SelectEnterProtectedDeprecated{u"SelectEnter(XRBaseInteractor, XRBaseInteractable, SelectEnterEventArgs) has been deprecated. Use SelectEnter(IXRSelectInteractor, IXRSelectInteractable, SelectEnterEventArgs) instead."};

/// @brief Field k_SelectExitDeprecated offset 0xffffffff size 0x8
static constexpr ::ConstString  k_SelectExitDeprecated{u"SelectExit(XRBaseInteractor, XRBaseInteractable) has been deprecated. Use SelectExit(IXRSelectInteractor, IXRSelectInteractable) instead. You may need to modify your code by casting the argument to call the intended method, such as `SelectExit((IXRSelectInteractor)interactor, (IXRSelectInteractable)interactable)` instead."};

/// @brief Field k_SelectExitProtectedDeprecated offset 0xffffffff size 0x8
static constexpr ::ConstString  k_SelectExitProtectedDeprecated{u"SelectExit(XRBaseInteractor, XRBaseInteractable, SelectExitEventArgs) has been deprecated. Use SelectExit(IXRSelectInteractor, IXRSelectInteractable, SelectExitEventArgs) instead."};

/// @brief Field k_TryGetInteractableForColliderDeprecated offset 0xffffffff size 0x8
static constexpr ::ConstString  k_TryGetInteractableForColliderDeprecated{u"TryGetInteractableForCollider has been deprecated. Use GetInteractableForCollider instead. (UnityUpgradable) -> GetInteractableForCollider(*)"};

/// @brief Field k_UnregisterInteractableDeprecated offset 0xffffffff size 0x8
static constexpr ::ConstString  k_UnregisterInteractableDeprecated{u"UnregisterInteractable(XRBaseInteractable) has been deprecated. Use UnregisterInteractable(IXRInteractable) instead. You may need to modify your code by casting the argument to call the intended method, such as `UnregisterInteractable((IXRInteractable)this)` instead."};

/// @brief Field k_UnregisterInteractorDeprecated offset 0xffffffff size 0x8
static constexpr ::ConstString  k_UnregisterInteractorDeprecated{u"UnregisterInteractor(XRBaseInteractor) has been deprecated. Use UnregisterInteractor(IXRInteractor) instead. You may need to modify your code by casting the argument to call the intended method, such as `UnregisterInteractor((IXRInteractor)this)` instead."};

/// [CompilerGenerated]
/// @brief Field interactionGroupRegistered, offset: 0x20, size: 0x8, def value: None
 ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs*>*  ___interactionGroupRegistered;

/// [CompilerGenerated]
/// @brief Field interactionGroupUnregistered, offset: 0x28, size: 0x8, def value: None
 ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs*>*  ___interactionGroupUnregistered;

/// [CompilerGenerated]
/// @brief Field interactorRegistered, offset: 0x30, size: 0x8, def value: None
 ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs*>*  ___interactorRegistered;

/// [CompilerGenerated]
/// @brief Field interactorUnregistered, offset: 0x38, size: 0x8, def value: None
 ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs*>*  ___interactorUnregistered;

/// [CompilerGenerated]
/// @brief Field interactableRegistered, offset: 0x40, size: 0x8, def value: None
 ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*>*  ___interactableRegistered;

/// [CompilerGenerated]
/// @brief Field interactableUnregistered, offset: 0x48, size: 0x8, def value: None
 ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*>*  ___interactableUnregistered;

/// [CompilerGenerated]
/// @brief Field focusGained, offset: 0x50, size: 0x8, def value: None
 ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::FocusEnterEventArgs*>*  ___focusGained;

/// [CompilerGenerated]
/// @brief Field focusLost, offset: 0x58, size: 0x8, def value: None
 ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs*>*  ___focusLost;

/// [SerializeField]
/// [RequireInterface(typeof(UnityEngine.XR.Interaction.Toolkit.Filtering.IXRHoverFilter))]
/// @brief Field m_StartingHoverFilters, offset: 0x60, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  ___m_StartingHoverFilters;

/// @brief Field m_HoverFilters, offset: 0x68, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRHoverFilter*>*  ___m_HoverFilters;

/// [SerializeField]
/// [RequireInterface(typeof(UnityEngine.XR.Interaction.Toolkit.Filtering.IXRSelectFilter))]
/// @brief Field m_StartingSelectFilters, offset: 0x70, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  ___m_StartingSelectFilters;

/// @brief Field m_SelectFilters, offset: 0x78, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Utilities::ExposedRegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRSelectFilter*>*  ___m_SelectFilters;

/// [CompilerGenerated]
/// @brief Field <lastFocused>k__BackingField, offset: 0x80, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRFocusInteractable*  ____lastFocused_k__BackingField;

/// @brief Field m_ColliderToInteractableMap, offset: 0x88, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>,::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  ___m_ColliderToInteractableMap;

/// @brief Field m_ColliderToSnapVolumes, offset: 0x90, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityW<::UnityEngine::Collider>,::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRInteractableSnapVolume>>*  ___m_ColliderToSnapVolumes;

/// @brief Field m_Interactors, offset: 0x98, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>*  ___m_Interactors;

/// @brief Field m_InteractionGroups, offset: 0xa0, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*>*  ___m_InteractionGroups;

/// @brief Field m_Interactables, offset: 0xa8, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  ___m_Interactables;

/// @brief Field m_CurrentHovered, offset: 0xb0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*>*  ___m_CurrentHovered;

/// @brief Field m_CurrentSelected, offset: 0xb8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*>*  ___m_CurrentSelected;

/// @brief Field m_HighestPriorityTargetMap, offset: 0xc0, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*,::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRTargetPriorityInteractor*>*>*  ___m_HighestPriorityTargetMap;

/// @brief Field m_ValidTargets, offset: 0xc8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  ___m_ValidTargets;

/// @brief Field m_UnorderedValidTargets, offset: 0xd0, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  ___m_UnorderedValidTargets;

/// @brief Field m_InteractorsInGroup, offset: 0xd8, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>*  ___m_InteractorsInGroup;

/// @brief Field m_GroupsInGroup, offset: 0xe0, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*>*  ___m_GroupsInGroup;

/// @brief Field m_ScratchInteractionGroups, offset: 0xe8, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*>*  ___m_ScratchInteractionGroups;

/// @brief Field m_ScratchInteractors, offset: 0xf0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>*  ___m_ScratchInteractors;

/// @brief Field m_FocusEnterEventArgs, offset: 0xf8, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::FocusEnterEventArgs*>*  ___m_FocusEnterEventArgs;

/// @brief Field m_FocusExitEventArgs, offset: 0x100, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs*>*  ___m_FocusExitEventArgs;

/// @brief Field m_SelectEnterEventArgs, offset: 0x108, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*>*  ___m_SelectEnterEventArgs;

/// @brief Field m_SelectExitEventArgs, offset: 0x110, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*>*  ___m_SelectExitEventArgs;

/// @brief Field m_HoverEnterEventArgs, offset: 0x118, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*>*  ___m_HoverEnterEventArgs;

/// @brief Field m_HoverExitEventArgs, offset: 0x120, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*>*  ___m_HoverExitEventArgs;

/// @brief Field m_InteractionGroupRegisteredEventArgs, offset: 0x128, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs*>*  ___m_InteractionGroupRegisteredEventArgs;

/// @brief Field m_InteractionGroupUnregisteredEventArgs, offset: 0x130, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs*>*  ___m_InteractionGroupUnregisteredEventArgs;

/// @brief Field m_InteractorRegisteredEventArgs, offset: 0x138, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs*>*  ___m_InteractorRegisteredEventArgs;

/// @brief Field m_InteractorUnregisteredEventArgs, offset: 0x140, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs*>*  ___m_InteractorUnregisteredEventArgs;

/// @brief Field m_InteractableRegisteredEventArgs, offset: 0x148, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*>*  ___m_InteractableRegisteredEventArgs;

/// @brief Field m_InteractableUnregisteredEventArgs, offset: 0x150, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Utilities::Pooling::LinkedPool_1<::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*>*  ___m_InteractableUnregisteredEventArgs;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager, ___interactionGroupRegistered) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager, ___interactionGroupUnregistered) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager, ___interactorRegistered) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager, ___interactorUnregistered) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager, ___interactableRegistered) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager, ___interactableUnregistered) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager, ___focusGained) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager, ___focusLost) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager, ___m_StartingHoverFilters) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager, ___m_HoverFilters) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager, ___m_StartingSelectFilters) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager, ___m_SelectFilters) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager, ____lastFocused_k__BackingField) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager, ___m_ColliderToInteractableMap) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager, ___m_ColliderToSnapVolumes) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager, ___m_Interactors) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager, ___m_InteractionGroups) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager, ___m_Interactables) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager, ___m_CurrentHovered) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager, ___m_CurrentSelected) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager, ___m_HighestPriorityTargetMap) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager, ___m_ValidTargets) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager, ___m_UnorderedValidTargets) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager, ___m_InteractorsInGroup) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager, ___m_GroupsInGroup) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager, ___m_ScratchInteractionGroups) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager, ___m_ScratchInteractors) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager, ___m_FocusEnterEventArgs) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager, ___m_FocusExitEventArgs) == 0x100, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager, ___m_SelectEnterEventArgs) == 0x108, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager, ___m_SelectExitEventArgs) == 0x110, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager, ___m_HoverEnterEventArgs) == 0x118, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager, ___m_HoverExitEventArgs) == 0x120, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager, ___m_InteractionGroupRegisteredEventArgs) == 0x128, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager, ___m_InteractionGroupUnregisteredEventArgs) == 0x130, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager, ___m_InteractorRegisteredEventArgs) == 0x138, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager, ___m_InteractorUnregisteredEventArgs) == 0x140, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager, ___m_InteractableRegisteredEventArgs) == 0x148, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager, ___m_InteractableUnregisteredEventArgs) == 0x150, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager) == 0x158, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.XRInteractionManager/<>c
class CORDL_TYPE XRInteractionManager___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c*  __9;

/// @brief Field <>9__237_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__237_0, put=setStaticF___9__237_0)) ::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::FocusEnterEventArgs*>*  __9__237_0;

/// @brief Field <>9__237_1, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__237_1, put=setStaticF___9__237_1)) ::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs*>*  __9__237_1;

/// @brief Field <>9__237_10, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__237_10, put=setStaticF___9__237_10)) ::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*>*  __9__237_10;

/// @brief Field <>9__237_11, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__237_11, put=setStaticF___9__237_11)) ::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*>*  __9__237_11;

/// @brief Field <>9__237_2, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__237_2, put=setStaticF___9__237_2)) ::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*>*  __9__237_2;

/// @brief Field <>9__237_3, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__237_3, put=setStaticF___9__237_3)) ::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*>*  __9__237_3;

/// @brief Field <>9__237_4, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__237_4, put=setStaticF___9__237_4)) ::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*>*  __9__237_4;

/// @brief Field <>9__237_5, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__237_5, put=setStaticF___9__237_5)) ::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*>*  __9__237_5;

/// @brief Field <>9__237_6, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__237_6, put=setStaticF___9__237_6)) ::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs*>*  __9__237_6;

/// @brief Field <>9__237_7, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__237_7, put=setStaticF___9__237_7)) ::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs*>*  __9__237_7;

/// @brief Field <>9__237_8, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__237_8, put=setStaticF___9__237_8)) ::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs*>*  __9__237_8;

/// @brief Field <>9__237_9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__237_9, put=setStaticF___9__237_9)) ::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs*>*  __9__237_9;

static inline ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c* New_ctor() ;

/// @brief Method <.cctor>b__238_0, addr 0xb41636c, size 0x68, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRTargetPriorityInteractor*>* __cctor_b__238_0() ;

/// @brief Method <.cctor>b__238_1, addr 0xb4163d4, size 0x6c, virtual false, abstract: false, final false
inline void __cctor_b__238_1(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRTargetPriorityInteractor*>*  list) ;

/// @brief Method <.ctor>b__237_0, addr 0xb415f7c, size 0x54, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::FocusEnterEventArgs* __ctor_b__237_0() ;

/// @brief Method <.ctor>b__237_1, addr 0xb415fd0, size 0x54, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs* __ctor_b__237_1() ;

/// @brief Method <.ctor>b__237_10, addr 0xb4162c4, size 0x54, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs* __ctor_b__237_10() ;

/// @brief Method <.ctor>b__237_11, addr 0xb416318, size 0x54, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs* __ctor_b__237_11() ;

/// @brief Method <.ctor>b__237_2, addr 0xb416024, size 0x54, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs* __ctor_b__237_2() ;

/// @brief Method <.ctor>b__237_3, addr 0xb416078, size 0x54, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs* __ctor_b__237_3() ;

/// @brief Method <.ctor>b__237_4, addr 0xb4160cc, size 0x54, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs* __ctor_b__237_4() ;

/// @brief Method <.ctor>b__237_5, addr 0xb416120, size 0x54, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs* __ctor_b__237_5() ;

/// @brief Method <.ctor>b__237_6, addr 0xb416174, size 0x54, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs* __ctor_b__237_6() ;

/// @brief Method <.ctor>b__237_7, addr 0xb4161c8, size 0x54, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs* __ctor_b__237_7() ;

/// @brief Method <.ctor>b__237_8, addr 0xb41621c, size 0x54, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs* __ctor_b__237_8() ;

/// @brief Method <.ctor>b__237_9, addr 0xb416270, size 0x54, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs* __ctor_b__237_9() ;

/// @brief Method .ctor, addr 0xb415f74, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c* getStaticF___9() ;

static inline ::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::FocusEnterEventArgs*>* getStaticF___9__237_0() ;

static inline ::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs*>* getStaticF___9__237_1() ;

static inline ::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*>* getStaticF___9__237_10() ;

static inline ::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*>* getStaticF___9__237_11() ;

static inline ::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*>* getStaticF___9__237_2() ;

static inline ::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*>* getStaticF___9__237_3() ;

static inline ::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*>* getStaticF___9__237_4() ;

static inline ::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*>* getStaticF___9__237_5() ;

static inline ::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs*>* getStaticF___9__237_6() ;

static inline ::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs*>* getStaticF___9__237_7() ;

static inline ::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs*>* getStaticF___9__237_8() ;

static inline ::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs*>* getStaticF___9__237_9() ;

static inline void setStaticF___9(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c*  value) ;

static inline void setStaticF___9__237_0(::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::FocusEnterEventArgs*>*  value) ;

static inline void setStaticF___9__237_1(::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs*>*  value) ;

static inline void setStaticF___9__237_10(::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::InteractableRegisteredEventArgs*>*  value) ;

static inline void setStaticF___9__237_11(::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*>*  value) ;

static inline void setStaticF___9__237_2(::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*>*  value) ;

static inline void setStaticF___9__237_3(::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*>*  value) ;

static inline void setStaticF___9__237_4(::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*>*  value) ;

static inline void setStaticF___9__237_5(::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::HoverExitEventArgs*>*  value) ;

static inline void setStaticF___9__237_6(::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs*>*  value) ;

static inline void setStaticF___9__237_7(::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs*>*  value) ;

static inline void setStaticF___9__237_8(::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs*>*  value) ;

static inline void setStaticF___9__237_9(::System::Func_1<::UnityEngine::XR::Interaction::Toolkit::InteractorUnregisteredEventArgs*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRInteractionManager___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRInteractionManager___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRInteractionManager___c(XRInteractionManager___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRInteractionManager___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRInteractionManager___c(XRInteractionManager___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11107};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager___c) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit
