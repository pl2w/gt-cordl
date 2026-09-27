#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/FocusEnterEventArgs.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__BaseInteractionEventArgs_def.hpp"
CORDL_MODULE_EXPORT(FocusEnterEventArgs)
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
class IXRFocusInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class IXRInteractionGroup;
}
namespace UnityEngine::XR::Interaction::Toolkit {
class XRInteractionManager;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
class FocusEnterEventArgs;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::FocusEnterEventArgs*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::FocusEnterEventArgs*, "UnityEngine.XR.Interaction.Toolkit", "FocusEnterEventArgs");
// Dependencies UnityEngine.XR.Interaction.Toolkit.BaseInteractionEventArgs
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.FocusEnterEventArgs
class CORDL_TYPE FocusEnterEventArgs : public ::UnityEngine::XR::Interaction::Toolkit::BaseInteractionEventArgs {
public:
// Declarations
/// @brief Field <interactionGroup>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__interactionGroup_k__BackingField, put=__cordl_internal_set__interactionGroup_k__BackingField)) ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*  _interactionGroup_k__BackingField;

/// @brief Field <manager>k__BackingField, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__manager_k__BackingField, put=__cordl_internal_set__manager_k__BackingField)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>  _manager_k__BackingField;

 __declspec(property(get=get_interactableObject, put=set_interactableObject)) ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRFocusInteractable*  interactableObject;

 __declspec(property(get=get_interactionGroup, put=set_interactionGroup)) ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*  interactionGroup;

 __declspec(property(get=get_manager, put=set_manager)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>  manager;

static inline ::UnityEngine::XR::Interaction::Toolkit::FocusEnterEventArgs* New_ctor() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup* const& __cordl_internal_get__interactionGroup_k__BackingField() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*& __cordl_internal_get__interactionGroup_k__BackingField() ;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> const& __cordl_internal_get__manager_k__BackingField() const;

constexpr ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>& __cordl_internal_get__manager_k__BackingField() ;

constexpr void __cordl_internal_set__interactionGroup_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*  value) ;

constexpr void __cordl_internal_set__manager_k__BackingField(::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>  value) ;

/// @brief Method .ctor, addr 0xb408230, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_interactableObject, addr 0xb4081ac, size 0x6c, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRFocusInteractable* get_interactableObject() ;

/// [CompilerGenerated]
/// @brief Method get_interactionGroup, addr 0xb40819c, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup* get_interactionGroup() ;

/// [CompilerGenerated]
/// @brief Method get_manager, addr 0xb408220, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager> get_manager() ;

/// @brief Method set_interactableObject, addr 0xb408218, size 0x8, virtual false, abstract: false, final false
inline void set_interactableObject(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRFocusInteractable*  value) ;

/// [CompilerGenerated]
/// @brief Method set_interactionGroup, addr 0xb4081a4, size 0x8, virtual false, abstract: false, final false
inline void set_interactionGroup(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*  value) ;

/// [CompilerGenerated]
/// @brief Method set_manager, addr 0xb408228, size 0x8, virtual false, abstract: false, final false
inline void set_manager(::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FocusEnterEventArgs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FocusEnterEventArgs", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
FocusEnterEventArgs(FocusEnterEventArgs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FocusEnterEventArgs", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
FocusEnterEventArgs(FocusEnterEventArgs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11091};

/// [CompilerGenerated]
/// @brief Field <interactionGroup>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*  ____interactionGroup_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <manager>k__BackingField, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::XR::Interaction::Toolkit::XRInteractionManager>  ____manager_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::FocusEnterEventArgs, ____interactionGroup_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::FocusEnterEventArgs, ____manager_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::FocusEnterEventArgs) == 0x30, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit
