#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Interactors/IXRSelectInteractor.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IXRSelectInteractor)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
class IXRSelectInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class IXRInteractor;
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
namespace UnityEngine {
struct Pose;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class IXRSelectInteractor;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRSelectInteractor*, "UnityEngine.XR.Interaction.Toolkit.Interactors", "IXRSelectInteractor");
// [MovedFrom("UnityEngine.XR.Interaction.Toolkit")]
// Dependencies 
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Interactors.IXRSelectInteractor
class CORDL_TYPE IXRSelectInteractor {
public:
// Declarations
 __declspec(property(get=get_firstInteractableSelected)) ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*  firstInteractableSelected;

 __declspec(property(get=get_hasSelection)) bool  hasSelection;

 __declspec(property(get=get_interactablesSelected)) ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*>*  interactablesSelected;

 __declspec(property(get=get_isSelectActive)) bool  isSelectActive;

 __declspec(property(get=get_keepSelectedTargetValid)) bool  keepSelectedTargetValid;

 __declspec(property(get=get_selectEntered)) ::UnityEngine::XR::Interaction::Toolkit::SelectEnterEvent*  selectEntered;

 __declspec(property(get=get_selectExited)) ::UnityEngine::XR::Interaction::Toolkit::SelectExitEvent*  selectExited;

/// @brief Convert operator to "::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor"
constexpr operator  ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*() noexcept;

/// @brief Method CanSelect, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool CanSelect(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*  interactable) ;

/// @brief Method GetAttachPoseOnSelect, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::Pose GetAttachPoseOnSelect(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*  interactable) ;

/// @brief Method GetLocalAttachPoseOnSelect, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::Pose GetLocalAttachPoseOnSelect(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*  interactable) ;

/// @brief Method IsSelecting, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool IsSelecting(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*  interactable) ;

/// @brief Method OnSelectEntered, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnSelectEntered(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*  args) ;

/// @brief Method OnSelectEntering, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnSelectEntering(::UnityEngine::XR::Interaction::Toolkit::SelectEnterEventArgs*  args) ;

/// @brief Method OnSelectExited, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnSelectExited(::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*  args) ;

/// @brief Method OnSelectExiting, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void OnSelectExiting(::UnityEngine::XR::Interaction::Toolkit::SelectExitEventArgs*  args) ;

/// @brief Method get_firstInteractableSelected, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable* get_firstInteractableSelected() ;

/// @brief Method get_hasSelection, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_hasSelection() ;

/// @brief Method get_interactablesSelected, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Collections::Generic::List_1<::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRSelectInteractable*>* get_interactablesSelected() ;

/// @brief Method get_isSelectActive, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_isSelectActive() ;

/// @brief Method get_keepSelectedTargetValid, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline bool get_keepSelectedTargetValid() ;

/// @brief Method get_selectEntered, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::XR::Interaction::Toolkit::SelectEnterEvent* get_selectEntered() ;

/// @brief Method get_selectExited, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::UnityEngine::XR::Interaction::Toolkit::SelectExitEvent* get_selectExited() ;

/// @brief Convert to "::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor"
constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor* i___UnityEngine__XR__Interaction__Toolkit__Interactors__IXRInteractor() noexcept;

// Ctor Parameters [CppParam { name: "", ty: "IXRSelectInteractor", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
IXRSelectInteractor(IXRSelectInteractor const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11438};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::Interaction::Toolkit::Interactors
