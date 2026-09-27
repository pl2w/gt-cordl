#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/AR/ARAnnotationInteractable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ARAnnotationInteractable)
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::AR {
class ARAnnotationInteractable;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::AR::ARAnnotationInteractable*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::AR::ARAnnotationInteractable*, "UnityEngine.XR.Interaction.Toolkit.AR", "ARAnnotationInteractable");
// Dependencies System.Object
namespace UnityEngine::XR::Interaction::Toolkit::AR {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.AR.ARAnnotationInteractable
class CORDL_TYPE ARAnnotationInteractable : public ::System::Object {
public:
// Declarations
static inline ::UnityEngine::XR::Interaction::Toolkit::AR::ARAnnotationInteractable* New_ctor() ;

/// @brief Method .ctor, addr 0xb4cf6b4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ARAnnotationInteractable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ARAnnotationInteractable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ARAnnotationInteractable(ARAnnotationInteractable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ARAnnotationInteractable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ARAnnotationInteractable(ARAnnotationInteractable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11693};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::AR::ARAnnotationInteractable) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::AR
