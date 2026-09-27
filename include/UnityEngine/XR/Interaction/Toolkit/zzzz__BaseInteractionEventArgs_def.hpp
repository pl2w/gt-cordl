#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/BaseInteractionEventArgs.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(BaseInteractionEventArgs)
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
class IXRInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
class XRBaseInteractable;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class IXRInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class XRBaseInteractor;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
class BaseInteractionEventArgs;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::BaseInteractionEventArgs*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::BaseInteractionEventArgs*, "UnityEngine.XR.Interaction.Toolkit", "BaseInteractionEventArgs");
// Dependencies System.Object
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.BaseInteractionEventArgs
class CORDL_TYPE BaseInteractionEventArgs : public ::System::Object {
public:
// Declarations
/// @brief Field <interactableObject>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__interactableObject_k__BackingField, put=__cordl_internal_set__interactableObject_k__BackingField)) ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  _interactableObject_k__BackingField;

/// @brief Field <interactorObject>k__BackingField, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__interactorObject_k__BackingField, put=__cordl_internal_set__interactorObject_k__BackingField)) ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  _interactorObject_k__BackingField;

/// @brief [Obsolete("interactable has been deprecated. Use interactableObject instead.", true)]
 __declspec(property(get=get_interactable, put=set_interactable)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable>  interactable;

 __declspec(property(get=get_interactableObject, put=set_interactableObject)) ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  interactableObject;

/// @brief [Obsolete("interactor has been deprecated. Use interactorObject instead.", true)]
 __declspec(property(get=get_interactor, put=set_interactor)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor>  interactor;

 __declspec(property(get=get_interactorObject, put=set_interactorObject)) ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactorObject;

static inline ::UnityEngine::XR::Interaction::Toolkit::BaseInteractionEventArgs* New_ctor() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable* const& __cordl_internal_get__interactableObject_k__BackingField() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*& __cordl_internal_get__interactableObject_k__BackingField() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor* const& __cordl_internal_get__interactorObject_k__BackingField() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*& __cordl_internal_get__interactorObject_k__BackingField() ;

constexpr void __cordl_internal_set__interactableObject_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  value) ;

constexpr void __cordl_internal_set__interactorObject_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  value) ;

/// @brief Method .ctor, addr 0xb407ce4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_interactable, addr 0xb407cd8, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable> get_interactable() ;

/// [CompilerGenerated]
/// @brief Method get_interactableObject, addr 0xb407cbc, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable* get_interactableObject() ;

/// @brief Method get_interactor, addr 0xb407ccc, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor> get_interactor() ;

/// [CompilerGenerated]
/// @brief Method get_interactorObject, addr 0xb407cac, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor* get_interactorObject() ;

/// @brief Method set_interactable, addr 0xb407ce0, size 0x4, virtual false, abstract: false, final false
inline void set_interactable(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable*  value) ;

/// [CompilerGenerated]
/// @brief Method set_interactableObject, addr 0xb407cc4, size 0x8, virtual false, abstract: false, final false
inline void set_interactableObject(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  value) ;

/// @brief Method set_interactor, addr 0xb407cd4, size 0x4, virtual false, abstract: false, final false
inline void set_interactor(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*  value) ;

/// [CompilerGenerated]
/// @brief Method set_interactorObject, addr 0xb407cb4, size 0x8, virtual false, abstract: false, final false
inline void set_interactorObject(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BaseInteractionEventArgs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BaseInteractionEventArgs", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
BaseInteractionEventArgs(BaseInteractionEventArgs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BaseInteractionEventArgs", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
BaseInteractionEventArgs(BaseInteractionEventArgs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11081};

/// [CompilerGenerated]
/// @brief Field <interactorObject>k__BackingField, offset: 0x10, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  ____interactorObject_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <interactableObject>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  ____interactableObject_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::BaseInteractionEventArgs, ____interactorObject_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::BaseInteractionEventArgs, ____interactableObject_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::BaseInteractionEventArgs) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit
