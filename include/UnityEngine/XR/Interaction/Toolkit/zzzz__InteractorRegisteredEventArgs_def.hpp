#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/InteractorRegisteredEventArgs.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__BaseRegistrationEventArgs_def.hpp"
CORDL_MODULE_EXPORT(InteractorRegisteredEventArgs)
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class IXRInteractionGroup;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class IXRInteractor;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class XRBaseInteractor;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
class InteractorRegisteredEventArgs;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs*, "UnityEngine.XR.Interaction.Toolkit", "InteractorRegisteredEventArgs");
// Dependencies UnityEngine.XR.Interaction.Toolkit.BaseRegistrationEventArgs
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.InteractorRegisteredEventArgs
class CORDL_TYPE InteractorRegisteredEventArgs : public ::UnityEngine::XR::Interaction::Toolkit::BaseRegistrationEventArgs {
public:
// Declarations
/// @brief Field <containingGroupObject>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__containingGroupObject_k__BackingField, put=__cordl_internal_set__containingGroupObject_k__BackingField)) ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*  _containingGroupObject_k__BackingField;

/// @brief Field <interactorObject>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__interactorObject_k__BackingField, put=__cordl_internal_set__interactorObject_k__BackingField)) ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  _interactorObject_k__BackingField;

 __declspec(property(get=get_containingGroupObject, put=set_containingGroupObject)) ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*  containingGroupObject;

/// @brief [Obsolete("interactor has been deprecated. Use interactorObject instead.", true)]
 __declspec(property(get=get_interactor, put=set_interactor)) ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor>  interactor;

 __declspec(property(get=get_interactorObject, put=set_interactorObject)) ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  interactorObject;

static inline ::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs* New_ctor() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup* const& __cordl_internal_get__containingGroupObject_k__BackingField() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*& __cordl_internal_get__containingGroupObject_k__BackingField() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor* const& __cordl_internal_get__interactorObject_k__BackingField() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*& __cordl_internal_get__interactorObject_k__BackingField() ;

constexpr void __cordl_internal_set__containingGroupObject_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*  value) ;

constexpr void __cordl_internal_set__interactorObject_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  value) ;

/// @brief Method .ctor, addr 0xb4085d8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_containingGroupObject, addr 0xb4085bc, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup* get_containingGroupObject() ;

/// @brief Method get_interactor, addr 0xb4085cc, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor> get_interactor() ;

/// [CompilerGenerated]
/// @brief Method get_interactorObject, addr 0xb4085ac, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor* get_interactorObject() ;

/// [CompilerGenerated]
/// @brief Method set_containingGroupObject, addr 0xb4085c4, size 0x8, virtual false, abstract: false, final false
inline void set_containingGroupObject(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*  value) ;

/// @brief Method set_interactor, addr 0xb4085d4, size 0x4, virtual false, abstract: false, final false
inline void set_interactor(::UnityEngine::XR::Interaction::Toolkit::Interactors::XRBaseInteractor*  value) ;

/// [CompilerGenerated]
/// @brief Method set_interactorObject, addr 0xb4085b4, size 0x8, virtual false, abstract: false, final false
inline void set_interactorObject(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InteractorRegisteredEventArgs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InteractorRegisteredEventArgs", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InteractorRegisteredEventArgs(InteractorRegisteredEventArgs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InteractorRegisteredEventArgs", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InteractorRegisteredEventArgs(InteractorRegisteredEventArgs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11100};

/// [CompilerGenerated]
/// @brief Field <interactorObject>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractor*  ____interactorObject_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <containingGroupObject>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*  ____containingGroupObject_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs, ____interactorObject_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs, ____containingGroupObject_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::InteractorRegisteredEventArgs) == 0x28, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit
