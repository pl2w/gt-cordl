#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Interactables/XRSimpleInteractable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/XR/Interaction/Toolkit/Interactables/zzzz__XRBaseInteractable_def.hpp"
CORDL_MODULE_EXPORT(XRSimpleInteractable)
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
class XRSimpleInteractable;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRSimpleInteractable*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRSimpleInteractable*, "UnityEngine.XR.Interaction.Toolkit.Interactables", "XRSimpleInteractable");
// [MovedFrom("UnityEngine.XR.Interaction.Toolkit")]
// [SelectionBase]
// [DisallowMultipleComponent]
// [AddComponentMenu("XR/XR Simple Interactable", 11)]
// [HelpURL("https://docs.unity3d.com/Packages/com.unity.xr.interaction.toolkit@3.2/api/UnityEngine.XR.Interaction.Toolkit.Interactables.XRSimpleInteractable.html")]
// Dependencies UnityEngine.XR.Interaction.Toolkit.Interactables.XRBaseInteractable
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.Interactables.XRSimpleInteractable
class CORDL_TYPE XRSimpleInteractable : public ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRBaseInteractable {
public:
// Declarations
static inline ::UnityEngine::XR::Interaction::Toolkit::Interactables::XRSimpleInteractable* New_ctor() ;

/// @brief Method .ctor, addr 0xb4a0d5c, size 0x54, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr XRSimpleInteractable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "XRSimpleInteractable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
XRSimpleInteractable(XRSimpleInteractable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "XRSimpleInteractable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
XRSimpleInteractable(XRSimpleInteractable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11530};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::Interactables::XRSimpleInteractable) == 0x1a0, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::Interactables
