#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/InteractionGroupRegisteredEventArgs.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/zzzz__BaseRegistrationEventArgs_def.hpp"
CORDL_MODULE_EXPORT(InteractionGroupRegisteredEventArgs)
namespace UnityEngine::XR::Interaction::Toolkit::Interactors {
class IXRInteractionGroup;
}
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit {
class InteractionGroupRegisteredEventArgs;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs*, "UnityEngine.XR.Interaction.Toolkit", "InteractionGroupRegisteredEventArgs");
// Dependencies UnityEngine.XR.Interaction.Toolkit.BaseRegistrationEventArgs
namespace UnityEngine::XR::Interaction::Toolkit {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.InteractionGroupRegisteredEventArgs
class CORDL_TYPE InteractionGroupRegisteredEventArgs : public ::UnityEngine::XR::Interaction::Toolkit::BaseRegistrationEventArgs {
public:
// Declarations
/// @brief Field <containingGroupObject>k__BackingField, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__containingGroupObject_k__BackingField, put=__cordl_internal_set__containingGroupObject_k__BackingField)) ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*  _containingGroupObject_k__BackingField;

/// @brief Field <interactionGroupObject>k__BackingField, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__interactionGroupObject_k__BackingField, put=__cordl_internal_set__interactionGroupObject_k__BackingField)) ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*  _interactionGroupObject_k__BackingField;

 __declspec(property(get=get_containingGroupObject, put=set_containingGroupObject)) ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*  containingGroupObject;

 __declspec(property(get=get_interactionGroupObject, put=set_interactionGroupObject)) ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*  interactionGroupObject;

static inline ::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs* New_ctor() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup* const& __cordl_internal_get__containingGroupObject_k__BackingField() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*& __cordl_internal_get__containingGroupObject_k__BackingField() ;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup* const& __cordl_internal_get__interactionGroupObject_k__BackingField() const;

constexpr ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*& __cordl_internal_get__interactionGroupObject_k__BackingField() ;

constexpr void __cordl_internal_set__containingGroupObject_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*  value) ;

constexpr void __cordl_internal_set__interactionGroupObject_k__BackingField(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*  value) ;

/// @brief Method .ctor, addr 0xb4085a4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_containingGroupObject, addr 0xb408594, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup* get_containingGroupObject() ;

/// [CompilerGenerated]
/// @brief Method get_interactionGroupObject, addr 0xb408584, size 0x8, virtual false, abstract: false, final false
inline ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup* get_interactionGroupObject() ;

/// [CompilerGenerated]
/// @brief Method set_containingGroupObject, addr 0xb40859c, size 0x8, virtual false, abstract: false, final false
inline void set_containingGroupObject(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*  value) ;

/// [CompilerGenerated]
/// @brief Method set_interactionGroupObject, addr 0xb40858c, size 0x8, virtual false, abstract: false, final false
inline void set_interactionGroupObject(::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr InteractionGroupRegisteredEventArgs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "InteractionGroupRegisteredEventArgs", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
InteractionGroupRegisteredEventArgs(InteractionGroupRegisteredEventArgs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "InteractionGroupRegisteredEventArgs", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
InteractionGroupRegisteredEventArgs(InteractionGroupRegisteredEventArgs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11099};

/// [CompilerGenerated]
/// @brief Field <interactionGroupObject>k__BackingField, offset: 0x18, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*  ____interactionGroupObject_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <containingGroupObject>k__BackingField, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Interactors::IXRInteractionGroup*  ____containingGroupObject_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs, ____interactionGroupObject_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs, ____containingGroupObject_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::InteractionGroupRegisteredEventArgs) == 0x28, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit
