#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/InteractableUnregisteredEventArgs.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__BaseRegistrationEventArgs_def.hpp"
CORDL_MODULE_EXPORT(InteractableUnregisteredEventArgs)
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
class IXRInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
class XRBaseInteractable;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
class InteractableUnregisteredEventArgs;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs*, "UnityEngine.XR.Interaction.Toolkit", "InteractableUnregisteredEventArgs");
// Dependencies UnityEngine.XR.Interaction.Toolkit.BaseRegistrationEventArgs
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.InteractableUnregisteredEventArgs
class CORDL_TYPE InteractableUnregisteredEventArgs : public ::UnityEngine::XR::Interaction::Toolkit::BaseRegistrationEventArgs {
public:
// Declarations
/// @brief Field <interactableObject>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__interactableObject_k__BackingField, put=__cordl_internal_set__interactableObject_k__BackingField)) ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  _interactableObject_k__BackingField;

/// @brief [Obsolete("interactable has been deprecated. Use interactableObject instead.", true)]
 __declspec(property(get=get_interactable, put=set_interactable)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable>  interactable;

 __declspec(property(get=get_interactableObject, put=set_interactableObject)) ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  interactableObject;

static inline ::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs* New_ctor() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable* const& __cordl_internal_get__interactableObject_k__BackingField() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*& __cordl_internal_get__interactableObject_k__BackingField() ;

constexpr void __cordl_internal_set__interactableObject_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  value) ;

/// @brief Method .ctor, addr 0xb40865c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_interactable, addr 0xb408650, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable> get_interactable() ;

/// [CompilerGenerated]
/// @brief Method get_interactableObject, addr 0xb408640, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable* get_interactableObject() ;

/// @brief Method set_interactable, addr 0xb408658, size 0x4, virtual false, abstract: false, final false
inline void set_interactable(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*  value) ;

/// [CompilerGenerated]
/// @brief Method set_interactableObject, addr 0xb408648, size 0x8, virtual false, abstract: false, final false
inline void set_interactableObject(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InteractableUnregisteredEventArgs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InteractableUnregisteredEventArgs", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InteractableUnregisteredEventArgs(InteractableUnregisteredEventArgs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InteractableUnregisteredEventArgs", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InteractableUnregisteredEventArgs(InteractableUnregisteredEventArgs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11104};

/// [CompilerGenerated]
/// @brief Field <interactableObject>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  ____interactableObject_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs, ____interactableObject_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::InteractableUnregisteredEventArgs) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit
