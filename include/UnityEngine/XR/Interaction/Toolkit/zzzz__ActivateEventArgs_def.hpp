#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/ActivateEventArgs.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__BaseInteractionEventArgs_def.hpp"
CORDL_MODULE_EXPORT(ActivateEventArgs)
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
class IXRActivateInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class IXRActivateInteractor;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
class ActivateEventArgs;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs*, "UnityEngine.XR.Interaction.Toolkit", "ActivateEventArgs");
// Dependencies UnityEngine.XR.Interaction.Toolkit.BaseInteractionEventArgs
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.ActivateEventArgs
class CORDL_TYPE ActivateEventArgs : public ::UnityEngine::XR::Interaction::Toolkit::BaseInteractionEventArgs {
public:
// Declarations
 __declspec(property(get=get_interactableObject, put=set_interactableObject)) ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable*  interactableObject;

 __declspec(property(get=get_interactorObject, put=set_interactorObject)) ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRActivateInteractor*  interactorObject;

static inline ::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs* New_ctor() ;

/// @brief Method .ctor, addr 0xb405838, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_interactableObject, addr 0xb4083e0, size 0x6c, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable* get_interactableObject() ;

/// @brief Method get_interactorObject, addr 0xb408374, size 0x6c, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRActivateInteractor* get_interactorObject() ;

/// @brief Method set_interactableObject, addr 0xb4063e4, size 0x8, virtual false, abstract: false, final false
inline void set_interactableObject(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRActivateInteractable*  value) ;

/// @brief Method set_interactorObject, addr 0xb4063dc, size 0x8, virtual false, abstract: false, final false
inline void set_interactorObject(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRActivateInteractor*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ActivateEventArgs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ActivateEventArgs", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ActivateEventArgs(ActivateEventArgs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ActivateEventArgs", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ActivateEventArgs(ActivateEventArgs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11095};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::ActivateEventArgs) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit
