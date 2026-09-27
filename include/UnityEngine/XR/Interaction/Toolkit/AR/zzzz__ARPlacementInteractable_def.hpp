#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/AR/ARPlacementInteractable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(ARPlacementInteractable)
// Forward declare root types
namespace UnityEngine::XR::Interaction::Toolkit::AR {
class ARPlacementInteractable;
}
// Write type traits
MARK_REF_T(::UnityEngine::XR::Interaction::Toolkit::AR::ARPlacementInteractable*);
DEFINE_IL2CPP_CLASS(::UnityEngine::XR::Interaction::Toolkit::AR::ARPlacementInteractable*, "UnityEngine.XR.Interaction.Toolkit.AR", "ARPlacementInteractable");
// [Obsolete("ARPlacementInteractable has been replaced by the ObjectSpawner and the ARInteractorSpawnTrigger. These can be found in the general and AR XRI Starter Assets.")]
// Dependencies System.Object
namespace UnityEngine::XR::Interaction::Toolkit::AR {
// Is value type: false
// CS Name: UnityEngine.XR.Interaction.Toolkit.AR.ARPlacementInteractable
class CORDL_TYPE ARPlacementInteractable : public ::System::Object {
public:
// Declarations
static inline ::UnityEngine::XR::Interaction::Toolkit::AR::ARPlacementInteractable* New_ctor() ;

/// @brief Method .ctor, addr 0xb4cf6c4, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ARPlacementInteractable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ARPlacementInteractable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ARPlacementInteractable(ARPlacementInteractable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ARPlacementInteractable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ARPlacementInteractable(ARPlacementInteractable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11695};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::XR::Interaction::Toolkit::AR::ARPlacementInteractable) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::XR::Interaction::Toolkit::AR
