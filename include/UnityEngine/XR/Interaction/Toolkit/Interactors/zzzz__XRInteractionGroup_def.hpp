#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Interactors/XRInteractionGroup.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XRInteractionGroup)
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
class IXRInteractionOverrideGroup;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class IXRInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class IXRSelectInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class XRInteractionGroup_GroupMemberAndOverridesPair;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class XRInteractionGroup_GroupNames;
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
class InteractionGroupRegisteredEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class InteractionGroupUnregisteredEventArgs;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class XRInteractionManager;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class XRInteractionGroup;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class XRInteractionGroup_GroupMemberAndOverridesPair;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class XRInteractionGroup_GroupNames;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup_GroupMemberAndOverridesPair*);
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup_GroupNames*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup*, "UnityEngine.XR.Interaction.Toolkit.Interactors", "XRInteractionGroup");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup_GroupMemberAndOverridesPair*, "UnityEngine.XR.Interaction.Toolkit.Interactors", "XRInteractionGroup/GroupMemberAndOverridesPair");
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup_GroupNames*, "UnityEngine.XR.Interaction.Toolkit.Interactors", "XRInteractionGroup/GroupNames");
// [MovedFrom("UnityEngine.XR.Interaction.Toolkit")]
// [DisallowMultipleComponent]
// [AddComponentMenu("XR/XR Interaction Group", 11)]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Interactors.XRInteractionGroup.html")]
// [DefaultExecutionOrder(-100)]
// Dependencies UnityEngine.MonoBehaviour
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Interactors.XRInteractionGroup
class CORDL_TYPE XRInteractionGroup : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using GroupMemberAndOverridesPair = ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup_GroupMemberAndOverridesPair;

using GroupNames = ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup_GroupNames;

/// @brief Field <activeInteractor>k__BackingField, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__activeInteractor_k__BackingField, put=__cordl_internal_set__activeInteractor_k__BackingField)) ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  _activeInteractor_k__BackingField;

/// @brief Field <containingGroup>k__BackingField, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__containingGroup_k__BackingField, put=__cordl_internal_set__containingGroup_k__BackingField)) ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*  _containingGroup_k__BackingField;

/// @brief Field <focusInteractable>k__BackingField, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__focusInteractable_k__BackingField, put=__cordl_internal_set__focusInteractable_k__BackingField)) ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRFocusInteractable*  _focusInteractable_k__BackingField;

/// @brief Field <focusInteractor>k__BackingField, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__focusInteractor_k__BackingField, put=__cordl_internal_set__focusInteractor_k__BackingField)) ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  _focusInteractor_k__BackingField;

/// @brief Field <hasRegisteredStartingMembers>k__BackingField, offset 0x78, size 0x1 
 __declspec(property(get=__cordl_internal_get__hasRegisteredStartingMembers_k__BackingField, put=__cordl_internal_set__hasRegisteredStartingMembers_k__BackingField)) bool  _hasRegisteredStartingMembers_k__BackingField;

 __declspec(property(get=get_activeInteractor, put=set_activeInteractor)) ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  activeInteractor;

 __declspec(property(get=get_containingGroup, put=set_containingGroup)) ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*  containingGroup;

 __declspec(property(get=get_focusInteractable, put=set_focusInteractable)) ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRFocusInteractable*  focusInteractable;

 __declspec(property(get=get_focusInteractor, put=set_focusInteractor)) ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  focusInteractor;

 __declspec(property(get=get_groupName)) ::StringW  groupName;

 __declspec(property(get=get_hasRegisteredStartingMembers, put=set_hasRegisteredStartingMembers)) bool  hasRegisteredStartingMembers;

 __declspec(property(get=get_interactionManager, put=set_interactionManager)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>  interactionManager;

 __declspec(property(get=get_isRegisteredWithInteractionManager)) bool  isRegisteredWithInteractionManager;

/// @brief Field m_GroupMembers, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_GroupMembers, put=__cordl_internal_set_m_GroupMembers)) ::UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*>*  m_GroupMembers;

/// @brief Field m_GroupName, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_GroupName, put=__cordl_internal_set_m_GroupName)) ::StringW  m_GroupName;

/// @brief Field m_InteractionManager, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_InteractionManager, put=__cordl_internal_set_m_InteractionManager)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>  m_InteractionManager;

/// @brief Field m_InteractionOverridesMap, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_InteractionOverridesMap, put=__cordl_internal_set_m_InteractionOverridesMap)) ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*,::System::Collections::Generic::HashSet_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*>*>*  m_InteractionOverridesMap;

/// @brief Field m_IsProcessingGroupMembers, offset 0x90, size 0x1 
 __declspec(property(get=__cordl_internal_get_m_IsProcessingGroupMembers, put=__cordl_internal_set_m_IsProcessingGroupMembers)) bool  m_IsProcessingGroupMembers;

/// @brief Field m_RegisteredInteractionManager, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_RegisteredInteractionManager, put=__cordl_internal_set_m_RegisteredInteractionManager)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>  m_RegisteredInteractionManager;

/// @brief Field m_StartingGroupMembers, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_StartingGroupMembers, put=__cordl_internal_set_m_StartingGroupMembers)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  m_StartingGroupMembers;

/// @brief Field m_StartingInteractionOverridesMap, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_StartingInteractionOverridesMap, put=__cordl_internal_set_m_StartingInteractionOverridesMap)) ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup_GroupMemberAndOverridesPair*>*  m_StartingInteractionOverridesMap;

/// @brief Field m_TempGroupMembers, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_TempGroupMembers, put=__cordl_internal_set_m_TempGroupMembers)) ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*>*  m_TempGroupMembers;

/// @brief Field m_ValidTargets, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_ValidTargets, put=__cordl_internal_set_m_ValidTargets)) ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  m_ValidTargets;

/// @brief Field registered, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_registered, put=__cordl_internal_set_registered)) ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs*>*  registered;

/// @brief Field s_InteractablesHovered, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_InteractablesHovered, put=setStaticF_s_InteractablesHovered)) ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*>*  s_InteractablesHovered;

/// @brief Field s_InteractablesSelected, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_InteractablesSelected, put=setStaticF_s_InteractablesSelected)) ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*>*  s_InteractablesSelected;

 __declspec(property(get=get_startingGroupMembers, put=set_startingGroupMembers)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  startingGroupMembers;

/// @brief Field unregistered, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_unregistered, put=__cordl_internal_set_unregistered)) ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs*>*  unregistered;

/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*() noexcept;

/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*() noexcept;

/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionOverrideGroup"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionOverrideGroup*() noexcept;

/// @brief Method AddGroupMember, addr 0xb46fab0, size 0x13c, virtual true, abstract: false, final true
inline void AddGroupMember(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*  groupMember) ;

/// @brief Method AddInteractionOverrideForGroupMember, addr 0xb46fbec, size 0x364, virtual true, abstract: false, final true
inline void AddInteractionOverrideForGroupMember(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*  sourceGroupMember, ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*  overrideGroupMember) ;

/// @brief Method AddStartingInteractionOverride, addr 0xb4700fc, size 0x440, virtual false, abstract: false, final false
inline void AddStartingInteractionOverride(::UnityEngine::Object*  sourceGroupMember, ::UnityEngine::Object*  overrideGroupMember) ;

/// @brief Method Awake, addr 0xb46f26c, size 0x594, virtual true, abstract: false, final false
inline void Awake() ;

/// @brief Method CanStartOrContinueAnySelect, addr 0xb4727e4, size 0x3ac, virtual false, abstract: false, final false
inline bool CanStartOrContinueAnySelect(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*  selectInteractor) ;

/// @brief Method ClearAllInteractorHovers, addr 0xb474244, size 0x248, virtual false, abstract: false, final false
inline void ClearAllInteractorHovers(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*  hoverInteractor) ;

/// @brief Method ClearAllInteractorSelections, addr 0xb473ffc, size 0x248, virtual false, abstract: false, final false
inline void ClearAllInteractorSelections(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*  selectInteractor) ;

/// @brief Method ClearGroupMembers, addr 0xb470058, size 0xa4, virtual true, abstract: false, final true
inline void ClearGroupMembers() ;

/// @brief Method ClearInteractionOverridesForGroupMember, addr 0xb471b7c, size 0x180, virtual true, abstract: false, final true
inline bool ClearInteractionOverridesForGroupMember(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*  sourceGroupMember) ;

/// @brief Method ContainsGroupMember, addr 0xb4715f4, size 0x1c, virtual true, abstract: false, final true
inline bool ContainsGroupMember(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*  groupMember) ;

/// @brief Method FindCreateInteractionManager, addr 0xb46f800, size 0xc0, virtual false, abstract: false, final false
inline void FindCreateInteractionManager() ;

/// @brief Method GetGroupMembers, addr 0xb471610, size 0x6c, virtual true, abstract: false, final true
inline void GetGroupMembers(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*>*  results) ;

/// @brief Method GetInteractionOverridesForGroupMember, addr 0xb471cfc, size 0x1e0, virtual true, abstract: false, final true
inline void GetInteractionOverridesForGroupMember(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*  sourceGroupMember, ::System::Collections::Generic::HashSet_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*>*  results) ;

/// @brief Method GroupMemberIsOrContainsInteractor, addr 0xb471408, size 0x1ec, virtual false, abstract: false, final false
inline bool GroupMemberIsOrContainsInteractor(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*  groupMember, ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor) ;

/// @brief Method GroupMemberIsPartOfOverrideChain, addr 0xb471860, size 0x194, virtual true, abstract: false, final true
inline bool GroupMemberIsPartOfOverrideChain(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*  sourceGroupMember, ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*  potentialOverrideGroupMember) ;

/// @brief Method HasDependencyOnGroup, addr 0xb47167c, size 0x1e4, virtual true, abstract: false, final true
inline bool HasDependencyOnGroup(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*  group) ;

/// @brief Method MoveGroupMemberTo, addr 0xb46f8c0, size 0x1f0, virtual true, abstract: false, final true
inline void MoveGroupMemberTo(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*  groupMember, int32_t  newIndex) ;

static inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup* New_ctor() ;

/// @brief Method OnDestroy, addr 0xb46fffc, size 0x5c, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0xb46ff68, size 0x4, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0xb46ff50, size 0x18, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnFocusEntering, addr 0xb47448c, size 0x4c, virtual true, abstract: false, final true
inline void OnFocusEntering(::UnityEngine::XR::Interaction::Toolkit::FocusEnterEventArgs*  args) ;

/// @brief Method OnFocusExiting, addr 0xb4744d8, size 0x60, virtual true, abstract: false, final true
inline void OnFocusExiting(::UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs*  args) ;

/// @brief Method ReRegisterGroupMemberWithInteractionManager, addr 0xb471edc, size 0x1dc, virtual false, abstract: false, final false
inline void ReRegisterGroupMemberWithInteractionManager(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*  groupMember) ;

/// @brief Method RegisterAsGroupMember, addr 0xb470bf8, size 0x108, virtual false, abstract: false, final false
inline void RegisterAsGroupMember(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*  groupMember) ;

/// @brief Method RegisterAsNonGroupMember, addr 0xb470e8c, size 0x104, virtual false, abstract: false, final false
inline void RegisterAsNonGroupMember(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*  groupMember) ;

/// @brief Method RegisterWithInteractionManager, addr 0xb46ef34, size 0xcc, virtual false, abstract: false, final false
inline void RegisterWithInteractionManager() ;

/// @brief Method RemoveGroupMember, addr 0xb471348, size 0xc0, virtual true, abstract: false, final true
inline bool RemoveGroupMember(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*  groupMember) ;

/// @brief Method RemoveInteractionOverrideForGroupMember, addr 0xb4719f4, size 0x188, virtual true, abstract: false, final true
inline bool RemoveInteractionOverrideForGroupMember(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*  sourceGroupMember, ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*  overrideGroupMember) ;

/// @brief Method RemoveMissingMembersFromStartingOverridesMap, addr 0xb46f034, size 0x194, virtual false, abstract: false, final false
inline void RemoveMissingMembersFromStartingOverridesMap() ;

/// @brief Method RemoveStartingInteractionOverride, addr 0xb4707b0, size 0x11c, virtual false, abstract: false, final false
inline bool RemoveStartingInteractionOverride(::UnityEngine::Object*  sourceGroupMember, ::UnityEngine::Object*  overrideGroupMember) ;

/// [Conditional("UNITY_EDITOR")]
/// @brief Method Reset, addr 0xb46f268, size 0x4, virtual true, abstract: false, final false
inline void Reset() ;

/// @brief Method ShouldGroupMemberOverrideInteraction, addr 0xb4739a4, size 0x178, virtual false, abstract: false, final false
inline bool ShouldGroupMemberOverrideInteraction(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactingInteractor, ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*  overrideGroupMember, ::by_ref<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*>  overridingInteractor) ;

/// @brief Method ShouldInteractorOverrideInteraction, addr 0xb473ccc, size 0x330, virtual false, abstract: false, final false
inline bool ShouldInteractorOverrideInteraction(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactingInteractor, ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*  overridingInteractor) ;

/// @brief Method TryGetOverridesForContainedInteractor, addr 0xb473774, size 0x230, virtual false, abstract: false, final false
inline bool TryGetOverridesForContainedInteractor(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor, ::by_ref<::System::Collections::Generic::HashSet_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*>*>  overrideGroupMembers) ;

/// @brief Method TryGetStartingGroupMemberAndOverridesPair, addr 0xb47053c, size 0x1ec, virtual false, abstract: false, final false
inline bool TryGetStartingGroupMemberAndOverridesPair(::UnityEngine::Object*  sourceGroupMember, ::by_ref<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup_GroupMemberAndOverridesPair*>  groupMemberAndOverrides) ;

/// @brief Method UnityEngine.XR.Interaction.Toolkit.Interactors.IXRGroupMember.OnRegisteringAsGroupMember, addr 0xb474538, size 0x194, virtual true, abstract: false, final true
inline void UnityEngine_XR_Interaction_Toolkit_Interactors_IXRGroupMember_OnRegisteringAsGroupMember(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*  group) ;

/// @brief Method UnityEngine.XR.Interaction.Toolkit.Interactors.IXRGroupMember.OnRegisteringAsNonGroupMember, addr 0xb4746cc, size 0xc, virtual true, abstract: false, final true
inline void UnityEngine_XR_Interaction_Toolkit_Interactors_IXRGroupMember_OnRegisteringAsNonGroupMember() ;

/// @brief Method UnityEngine.XR.Interaction.Toolkit.Interactors.IXRInteractionGroup.OnBeforeUnregistered, addr 0xb470d00, size 0x18c, virtual true, abstract: false, final true
inline void UnityEngine_XR_Interaction_Toolkit_Interactors_IXRInteractionGroup_OnBeforeUnregistered() ;

/// @brief Method UnityEngine.XR.Interaction.Toolkit.Interactors.IXRInteractionGroup.OnRegistered, addr 0xb4708cc, size 0x32c, virtual true, abstract: false, final true
inline void UnityEngine_XR_Interaction_Toolkit_Interactors_IXRInteractionGroup_OnRegistered(::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs*  args) ;

/// @brief Method UnityEngine.XR.Interaction.Toolkit.Interactors.IXRInteractionGroup.OnUnregistered, addr 0xb470f90, size 0x14c, virtual true, abstract: false, final true
inline void UnityEngine_XR_Interaction_Toolkit_Interactors_IXRInteractionGroup_OnUnregistered(::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs*  args) ;

/// @brief Method UnityEngine.XR.Interaction.Toolkit.Interactors.IXRInteractionGroup.PreprocessGroupMembers, addr 0xb4720b8, size 0x30c, virtual true, abstract: false, final true
inline void UnityEngine_XR_Interaction_Toolkit_Interactors_IXRInteractionGroup_PreprocessGroupMembers(::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase  updatePhase) ;

/// @brief Method UnityEngine.XR.Interaction.Toolkit.Interactors.IXRInteractionGroup.ProcessGroupMembers, addr 0xb4723c4, size 0x2f8, virtual true, abstract: false, final true
inline void UnityEngine_XR_Interaction_Toolkit_Interactors_IXRInteractionGroup_ProcessGroupMembers(::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase  updatePhase) ;

/// @brief Method UnityEngine.XR.Interaction.Toolkit.Interactors.IXRInteractionGroup.UpdateGroupMemberInteractions, addr 0xb4726bc, size 0x128, virtual true, abstract: false, final true
inline void UnityEngine_XR_Interaction_Toolkit_Interactors_IXRInteractionGroup_UpdateGroupMemberInteractions() ;

/// @brief Method UnityEngine.XR.Interaction.Toolkit.Interactors.IXRInteractionGroup.UpdateGroupMemberInteractions, addr 0xb472b90, size 0x3b0, virtual true, abstract: false, final true
inline void UnityEngine_XR_Interaction_Toolkit_Interactors_IXRInteractionGroup_UpdateGroupMemberInteractions(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  prePrioritizedInteractor, ::by_ref<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>  interactorThatPerformedInteraction) ;

/// @brief Method UnityEngine.XR.Interaction.Toolkit.Interactors.IXRInteractionOverrideGroup.ShouldAnyMemberOverrideInteraction, addr 0xb473b1c, size 0x1b0, virtual true, abstract: false, final true
inline bool UnityEngine_XR_Interaction_Toolkit_Interactors_IXRInteractionOverrideGroup_ShouldAnyMemberOverrideInteraction(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactingInteractor, ::by_ref<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*>  overridingInteractor) ;

/// @brief Method UnityEngine.XR.Interaction.Toolkit.Interactors.IXRInteractionOverrideGroup.ShouldOverrideActiveInteraction, addr 0xb473554, size 0x220, virtual true, abstract: false, final true
inline bool UnityEngine_XR_Interaction_Toolkit_Interactors_IXRInteractionOverrideGroup_ShouldOverrideActiveInteraction(::by_ref<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*>  overridingInteractor) ;

/// @brief Method UnregisterWithInteractionManager, addr 0xb46ff6c, size 0x90, virtual false, abstract: false, final false
inline void UnregisterWithInteractionManager() ;

/// @brief Method UpdateInteractorInteractions, addr 0xb472f40, size 0x614, virtual false, abstract: false, final false
inline void UpdateInteractorInteractions(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactor, bool  preventInteraction, ::by_ref<bool>  performedInteraction) ;

/// @brief Method ValidateAddGroupMember, addr 0xb4710dc, size 0x26c, virtual false, abstract: false, final false
inline bool ValidateAddGroupMember(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*  groupMember) ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor* const& __cordl_internal_get__activeInteractor_k__BackingField() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*& __cordl_internal_get__activeInteractor_k__BackingField() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup* const& __cordl_internal_get__containingGroup_k__BackingField() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*& __cordl_internal_get__containingGroup_k__BackingField() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRFocusInteractable* const& __cordl_internal_get__focusInteractable_k__BackingField() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRFocusInteractable*& __cordl_internal_get__focusInteractable_k__BackingField() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor* const& __cordl_internal_get__focusInteractor_k__BackingField() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*& __cordl_internal_get__focusInteractor_k__BackingField() ;

constexpr bool const& __cordl_internal_get__hasRegisteredStartingMembers_k__BackingField() const;

constexpr bool& __cordl_internal_get__hasRegisteredStartingMembers_k__BackingField() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*>* const& __cordl_internal_get_m_GroupMembers() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*>*& __cordl_internal_get_m_GroupMembers() ;

constexpr ::StringW const& __cordl_internal_get_m_GroupName() const;

constexpr ::StringW& __cordl_internal_get_m_GroupName() ;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> const& __cordl_internal_get_m_InteractionManager() const;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>& __cordl_internal_get_m_InteractionManager() ;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*,::System::Collections::Generic::HashSet_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*>*>* const& __cordl_internal_get_m_InteractionOverridesMap() const;

constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*,::System::Collections::Generic::HashSet_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*>*>*& __cordl_internal_get_m_InteractionOverridesMap() ;

constexpr bool const& __cordl_internal_get_m_IsProcessingGroupMembers() const;

constexpr bool& __cordl_internal_get_m_IsProcessingGroupMembers() ;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> const& __cordl_internal_get_m_RegisteredInteractionManager() const;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>& __cordl_internal_get_m_RegisteredInteractionManager() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* const& __cordl_internal_get_m_StartingGroupMembers() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*& __cordl_internal_get_m_StartingGroupMembers() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup_GroupMemberAndOverridesPair*>* const& __cordl_internal_get_m_StartingInteractionOverridesMap() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup_GroupMemberAndOverridesPair*>*& __cordl_internal_get_m_StartingInteractionOverridesMap() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*>* const& __cordl_internal_get_m_TempGroupMembers() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*>*& __cordl_internal_get_m_TempGroupMembers() ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>* const& __cordl_internal_get_m_ValidTargets() const;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*& __cordl_internal_get_m_ValidTargets() ;

constexpr ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs*>* const& __cordl_internal_get_registered() const;

constexpr ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs*>*& __cordl_internal_get_registered() ;

constexpr ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs*>* const& __cordl_internal_get_unregistered() const;

constexpr ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs*>*& __cordl_internal_get_unregistered() ;

constexpr void __cordl_internal_set__activeInteractor_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  value) ;

constexpr void __cordl_internal_set__containingGroup_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*  value) ;

constexpr void __cordl_internal_set__focusInteractable_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRFocusInteractable*  value) ;

constexpr void __cordl_internal_set__focusInteractor_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  value) ;

constexpr void __cordl_internal_set__hasRegisteredStartingMembers_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_m_GroupMembers(::UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*>*  value) ;

constexpr void __cordl_internal_set_m_GroupName(::StringW  value) ;

constexpr void __cordl_internal_set_m_InteractionManager(::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>  value) ;

constexpr void __cordl_internal_set_m_InteractionOverridesMap(::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*,::System::Collections::Generic::HashSet_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*>*>*  value) ;

constexpr void __cordl_internal_set_m_IsProcessingGroupMembers(bool  value) ;

constexpr void __cordl_internal_set_m_RegisteredInteractionManager(::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>  value) ;

constexpr void __cordl_internal_set_m_StartingGroupMembers(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  value) ;

constexpr void __cordl_internal_set_m_StartingInteractionOverridesMap(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup_GroupMemberAndOverridesPair*>*  value) ;

constexpr void __cordl_internal_set_m_TempGroupMembers(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*>*  value) ;

constexpr void __cordl_internal_set_m_ValidTargets(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  value) ;

constexpr void __cordl_internal_set_registered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs*>*  value) ;

constexpr void __cordl_internal_set_unregistered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs*>*  value) ;

/// @brief Method .ctor, addr 0xb4746d8, size 0x21c, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_registered, addr 0xb46ebc8, size 0xb0, virtual true, abstract: false, final true
inline void add_registered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs*>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_unregistered, addr 0xb46ed28, size 0xb0, virtual true, abstract: false, final true
inline void add_unregistered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs*>*  value) ;

static inline ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*>* getStaticF_s_InteractablesHovered() ;

static inline ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*>* getStaticF_s_InteractablesSelected() ;

/// [CompilerGenerated]
/// @brief Method get_activeInteractor, addr 0xb46f1c8, size 0x8, virtual true, abstract: false, final true
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor* get_activeInteractor() ;

/// [CompilerGenerated]
/// @brief Method get_containingGroup, addr 0xb46f000, size 0x8, virtual true, abstract: false, final true
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup* get_containingGroup() ;

/// [CompilerGenerated]
/// @brief Method get_focusInteractable, addr 0xb46f1e8, size 0x8, virtual true, abstract: false, final true
inline ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRFocusInteractable* get_focusInteractable() ;

/// [CompilerGenerated]
/// @brief Method get_focusInteractor, addr 0xb46f1d8, size 0x8, virtual true, abstract: false, final true
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor* get_focusInteractor() ;

/// @brief Method get_groupName, addr 0xb46ee88, size 0x8, virtual true, abstract: false, final true
inline ::StringW get_groupName() ;

/// [CompilerGenerated]
/// @brief Method get_hasRegisteredStartingMembers, addr 0xb46f258, size 0x8, virtual false, abstract: false, final false
inline bool get_hasRegisteredStartingMembers() ;

/// @brief Method get_interactionManager, addr 0xb46ee90, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> get_interactionManager() ;

/// @brief Method get_isRegisteredWithInteractionManager, addr 0xb46f1f8, size 0x60, virtual false, abstract: false, final false
inline bool get_isRegisteredWithInteractionManager() ;

/// @brief Method get_startingGroupMembers, addr 0xb46f010, size 0x8, virtual false, abstract: false, final false
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* get_startingGroupMembers() ;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember* i___UnityEngine__XR__Interaction__Toolkit__Interactors__IXRGroupMember() noexcept;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup* i___UnityEngine__XR__Interaction__Toolkit__Interactors__IXRInteractionGroup() noexcept;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionOverrideGroup"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionOverrideGroup* i___UnityEngine__XR__Interaction__Toolkit__Interactors__IXRInteractionOverrideGroup() noexcept;

/// [CompilerGenerated]
/// @brief Method remove_registered, addr 0xb46ec78, size 0xb0, virtual true, abstract: false, final true
inline void remove_registered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs*>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_unregistered, addr 0xb46edd8, size 0xb0, virtual true, abstract: false, final true
inline void remove_unregistered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs*>*  value) ;

static inline void setStaticF_s_InteractablesHovered(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*>*  value) ;

static inline void setStaticF_s_InteractablesSelected(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*>*  value) ;

/// [CompilerGenerated]
/// @brief Method set_activeInteractor, addr 0xb46f1d0, size 0x8, virtual false, abstract: false, final false
inline void set_activeInteractor(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  value) ;

/// [CompilerGenerated]
/// @brief Method set_containingGroup, addr 0xb46f008, size 0x8, virtual false, abstract: false, final false
inline void set_containingGroup(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*  value) ;

/// [CompilerGenerated]
/// @brief Method set_focusInteractable, addr 0xb46f1f0, size 0x8, virtual false, abstract: false, final false
inline void set_focusInteractable(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRFocusInteractable*  value) ;

/// [CompilerGenerated]
/// @brief Method set_focusInteractor, addr 0xb46f1e0, size 0x8, virtual false, abstract: false, final false
inline void set_focusInteractor(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  value) ;

/// [CompilerGenerated]
/// @brief Method set_hasRegisteredStartingMembers, addr 0xb46f260, size 0x8, virtual false, abstract: false, final false
inline void set_hasRegisteredStartingMembers(bool  value) ;

/// @brief Method set_interactionManager, addr 0xb46ee98, size 0x9c, virtual false, abstract: false, final false
inline void set_interactionManager(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*  value) ;

/// @brief Method set_startingGroupMembers, addr 0xb46f018, size 0x1c, virtual false, abstract: false, final false
inline void set_startingGroupMembers(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRInteractionGroup() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRInteractionGroup", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRInteractionGroup(XRInteractionGroup && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRInteractionGroup", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRInteractionGroup(XRInteractionGroup const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11457};

/// [CompilerGenerated]
/// @brief Field registered, offset: 0x20, size: 0x8, def value: None
 ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs*>*  ___registered;

/// [CompilerGenerated]
/// @brief Field unregistered, offset: 0x28, size: 0x8, def value: None
 ::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs*>*  ___unregistered;

/// [SerializeField]
/// [Tooltip("The name of the interaction group, which can be used to retrieve it from the Interaction Manager.")]
/// @brief Field m_GroupName, offset: 0x30, size: 0x8, def value: None
 ::StringW  ___m_GroupName;

/// [SerializeField]
/// [Tooltip("The XR Interaction Manager that this Interaction Group will communicate with (will find one if not set manually).")]
/// @brief Field m_InteractionManager, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>  ___m_InteractionManager;

/// @brief Field m_RegisteredInteractionManager, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>  ___m_RegisteredInteractionManager;

/// [CompilerGenerated]
/// @brief Field <containingGroup>k__BackingField, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*  ____containingGroup_k__BackingField;

/// [SerializeField]
/// [Tooltip("Ordered list of Interactors or Interaction Groups that are registered with the Group on Awake.")]
/// [RequireInterface(typeof(UnityEngine.XR.Interaction.Toolkit.Interactors.IXRGroupMember))]
/// @brief Field m_StartingGroupMembers, offset: 0x50, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  ___m_StartingGroupMembers;

/// [SerializeField]
/// [Tooltip("Configuration for each Group Member of which other Members are able to override its interaction when they attempt to select, despite the difference in priority order.")]
/// @brief Field m_StartingInteractionOverridesMap, offset: 0x58, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup_GroupMemberAndOverridesPair*>*  ___m_StartingInteractionOverridesMap;

/// [CompilerGenerated]
/// @brief Field <activeInteractor>k__BackingField, offset: 0x60, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  ____activeInteractor_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <focusInteractor>k__BackingField, offset: 0x68, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  ____focusInteractor_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <focusInteractable>k__BackingField, offset: 0x70, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRFocusInteractable*  ____focusInteractable_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <hasRegisteredStartingMembers>k__BackingField, offset: 0x78, size: 0x1, def value: None
 bool  ____hasRegisteredStartingMembers_k__BackingField;

/// @brief Field m_GroupMembers, offset: 0x80, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Utilities::RegistrationList_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*>*  ___m_GroupMembers;

/// @brief Field m_TempGroupMembers, offset: 0x88, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*>*  ___m_TempGroupMembers;

/// @brief Field m_IsProcessingGroupMembers, offset: 0x90, size: 0x1, def value: None
 bool  ___m_IsProcessingGroupMembers;

/// @brief Field m_InteractionOverridesMap, offset: 0x98, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*,::System::Collections::Generic::HashSet_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*>*>*  ___m_InteractionOverridesMap;

/// @brief Field m_ValidTargets, offset: 0xa0, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*>*  ___m_ValidTargets;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup, ___registered) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup, ___unregistered) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup, ___m_GroupName) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup, ___m_InteractionManager) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup, ___m_RegisteredInteractionManager) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup, ____containingGroup_k__BackingField) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup, ___m_StartingGroupMembers) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup, ___m_StartingInteractionOverridesMap) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup, ____activeInteractor_k__BackingField) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup, ____focusInteractor_k__BackingField) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup, ____focusInteractable_k__BackingField) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup, ____hasRegisteredStartingMembers_k__BackingField) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup, ___m_GroupMembers) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup, ___m_TempGroupMembers) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup, ___m_IsProcessingGroupMembers) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup, ___m_InteractionOverridesMap) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup, ___m_ValidTargets) == 0xa0, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup) == 0xa8, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Interactors
// Dependencies System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Interactors.XRInteractionGroup/GroupMemberAndOverridesPair
class CORDL_TYPE XRInteractionGroup_GroupMemberAndOverridesPair : public ::System::Object {
public:
// Declarations
/// @brief Field groupMember, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_groupMember, put=__cordl_internal_set_groupMember)) ::UnityW<::UnityEngine::Object>  groupMember;

/// @brief Field overrideGroupMembers, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_overrideGroupMembers, put=__cordl_internal_set_overrideGroupMembers)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  overrideGroupMembers;

static inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup_GroupMemberAndOverridesPair* New_ctor() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get_groupMember() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get_groupMember() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>* const& __cordl_internal_get_overrideGroupMembers() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*& __cordl_internal_get_overrideGroupMembers() ;

constexpr void __cordl_internal_set_groupMember(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set_overrideGroupMembers(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  value) ;

/// @brief Method .ctor, addr 0xb470728, size 0x88, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRInteractionGroup_GroupMemberAndOverridesPair() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRInteractionGroup_GroupMemberAndOverridesPair", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRInteractionGroup_GroupMemberAndOverridesPair(XRInteractionGroup_GroupMemberAndOverridesPair && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRInteractionGroup_GroupMemberAndOverridesPair", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRInteractionGroup_GroupMemberAndOverridesPair(XRInteractionGroup_GroupMemberAndOverridesPair const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11456};

/// [RequireInterface(typeof(UnityEngine.XR.Interaction.Toolkit.Interactors.IXRGroupMember))]
/// @brief Field groupMember, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ___groupMember;

/// [RequireInterface(typeof(UnityEngine.XR.Interaction.Toolkit.Interactors.IXRGroupMember))]
/// @brief Field overrideGroupMembers, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Object>>*  ___overrideGroupMembers;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup_GroupMemberAndOverridesPair, ___groupMember) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup_GroupMemberAndOverridesPair, ___overrideGroupMembers) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup_GroupMemberAndOverridesPair) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Interactors
// Dependencies System.Object
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Interactors.XRInteractionGroup/GroupNames
class CORDL_TYPE XRInteractionGroup_GroupNames : public ::System::Object {
public:
// Declarations
/// @brief Field k_Center, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_Center, put=setStaticF_k_Center)) ::StringW  k_Center;

/// @brief Field k_Left, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_Left, put=setStaticF_k_Left)) ::StringW  k_Left;

/// @brief Field k_Right, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_k_Right, put=setStaticF_k_Right)) ::StringW  k_Right;

static inline ::StringW getStaticF_k_Center() ;

static inline ::StringW getStaticF_k_Left() ;

static inline ::StringW getStaticF_k_Right() ;

static inline void setStaticF_k_Center(::StringW  value) ;

static inline void setStaticF_k_Left(::StringW  value) ;

static inline void setStaticF_k_Right(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRInteractionGroup_GroupNames() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRInteractionGroup_GroupNames", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRInteractionGroup_GroupNames(XRInteractionGroup_GroupNames && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRInteractionGroup_GroupNames", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRInteractionGroup_GroupNames(XRInteractionGroup_GroupNames const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11455};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRInteractionGroup_GroupNames) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Interactors
