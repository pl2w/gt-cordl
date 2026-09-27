#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Interactors/IXRInteractionGroup.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(IXRInteractionGroup)
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
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
class IXRFocusInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class IXRGroupMember;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class IXRInteractor;
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
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class IXRInteractionGroup;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*, "UnityEngine.XR.Interaction.Toolkit.Interactors", "IXRInteractionGroup");
// [MovedFrom("UnityEngine.XR.Interaction.Toolkit")]
// Dependencies 
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Interactors.IXRInteractionGroup
class CORDL_TYPE IXRInteractionGroup {
public:
// Declarations
 __declspec(property(get=get_activeInteractor)) ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  activeInteractor;

 __declspec(property(get=get_focusInteractable)) ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRFocusInteractable*  focusInteractable;

 __declspec(property(get=get_focusInteractor)) ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  focusInteractor;

 __declspec(property(get=get_groupName)) ::StringW  groupName;

/// @brief Method AddGroupMember, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void AddGroupMember(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*  groupMember) ;

/// @brief Method ClearGroupMembers, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void ClearGroupMembers() ;

/// @brief Method ContainsGroupMember, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool ContainsGroupMember(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*  groupMember) ;

/// @brief Method GetGroupMembers, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void GetGroupMembers(::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*>*  results) ;

/// @brief Method HasDependencyOnGroup, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool HasDependencyOnGroup(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*  group) ;

/// @brief Method MoveGroupMemberTo, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void MoveGroupMemberTo(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*  groupMember, int32_t  newIndex) ;

/// @brief Method OnBeforeUnregistered, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnBeforeUnregistered() ;

/// @brief Method OnFocusEntering, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnFocusEntering(::UnityEngine::XR::Interaction::Toolkit::FocusEnterEventArgs*  args) ;

/// @brief Method OnFocusExiting, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnFocusExiting(::UnityEngine::XR::Interaction::Toolkit::FocusExitEventArgs*  args) ;

/// @brief Method OnRegistered, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnRegistered(::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs*  args) ;

/// @brief Method OnUnregistered, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnUnregistered(::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs*  args) ;

/// @brief Method PreprocessGroupMembers, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void PreprocessGroupMembers(::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase  updatePhase) ;

/// @brief Method ProcessGroupMembers, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void ProcessGroupMembers(::GlobalNamespace::XRInteractionUpdateOrder_UpdatePhase  updatePhase) ;

/// @brief Method RemoveGroupMember, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool RemoveGroupMember(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRGroupMember*  groupMember) ;

/// @brief Method UpdateGroupMemberInteractions, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void UpdateGroupMemberInteractions() ;

/// @brief Method UpdateGroupMemberInteractions, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void UpdateGroupMemberInteractions(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  prePrioritizedInteractor, ::by_ref<::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*>  interactorThatPerformedInteraction) ;

/// [CompilerGenerated]
/// @brief Method add_registered, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void add_registered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs*>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_unregistered, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void add_unregistered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs*>*  value) ;

/// @brief Method get_activeInteractor, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor* get_activeInteractor() ;

/// @brief Method get_focusInteractable, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRFocusInteractable* get_focusInteractable() ;

/// @brief Method get_focusInteractor, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor* get_focusInteractor() ;

/// @brief Method get_groupName, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::StringW get_groupName() ;

/// [CompilerGenerated]
/// @brief Method remove_registered, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void remove_registered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs*>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_unregistered, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void remove_unregistered(::System::Action_1<::UnityEngine::XR::Interaction::Toolkit::InteractionGroupUnregisteredEventArgs*>*  value) ;

// Ctor Parameters [CppParam { name: "", ty: "IXRInteractionGroup", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IXRInteractionGroup(IXRInteractionGroup const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11430};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::Interaction::Toolkit::Interactors
