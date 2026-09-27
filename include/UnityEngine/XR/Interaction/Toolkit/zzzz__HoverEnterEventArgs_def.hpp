#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/HoverEnterEventArgs.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__BaseInteractionEventArgs_def.hpp"
CORDL_MODULE_EXPORT(HoverEnterEventArgs)
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
class IXRHoverInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class IXRHoverInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class XRInteractionManager;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
class HoverEnterEventArgs;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs*, "UnityEngine.XR.Interaction.Toolkit", "HoverEnterEventArgs");
// Dependencies UnityEngine.XR.Interaction.Toolkit.BaseInteractionEventArgs
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.HoverEnterEventArgs
class CORDL_TYPE HoverEnterEventArgs : public ::UnityEngine::XR::Interaction::Toolkit::BaseInteractionEventArgs {
public:
// Declarations
/// @brief Field <manager>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__manager_k__BackingField, put=__cordl_internal_set__manager_k__BackingField)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>  _manager_k__BackingField;

 __declspec(property(get=get_interactableObject, put=set_interactableObject)) ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*  interactableObject;

 __declspec(property(get=get_interactorObject, put=set_interactorObject)) ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*  interactorObject;

 __declspec(property(get=get_manager, put=set_manager)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>  manager;

static inline ::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs* New_ctor() ;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> const& __cordl_internal_get__manager_k__BackingField() const;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>& __cordl_internal_get__manager_k__BackingField() ;

constexpr void __cordl_internal_set__manager_k__BackingField(::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>  value) ;

/// @brief Method .ctor, addr 0xb407dc0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_interactableObject, addr 0xb406f98, size 0x6c, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable* get_interactableObject() ;

/// @brief Method get_interactorObject, addr 0xb407d34, size 0x6c, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor* get_interactorObject() ;

/// [CompilerGenerated]
/// @brief Method get_manager, addr 0xb407db0, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> get_manager() ;

/// @brief Method set_interactableObject, addr 0xb407da8, size 0x8, virtual false, abstract: false, final false
inline void set_interactableObject(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRHoverInteractable*  value) ;

/// @brief Method set_interactorObject, addr 0xb407da0, size 0x8, virtual false, abstract: false, final false
inline void set_interactorObject(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRHoverInteractor*  value) ;

/// [CompilerGenerated]
/// @brief Method set_manager, addr 0xb407db8, size 0x8, virtual false, abstract: false, final false
inline void set_manager(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HoverEnterEventArgs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HoverEnterEventArgs", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HoverEnterEventArgs(HoverEnterEventArgs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HoverEnterEventArgs", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HoverEnterEventArgs(HoverEnterEventArgs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11083};

/// [CompilerGenerated]
/// @brief Field <manager>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>  ____manager_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs, ____manager_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::HoverEnterEventArgs) == 0x28, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit
