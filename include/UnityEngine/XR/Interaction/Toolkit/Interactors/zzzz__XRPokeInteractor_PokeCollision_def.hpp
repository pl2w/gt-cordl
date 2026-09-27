#pragma once
// IWYU pragma private; include "UnityEngine/XR/Interaction/Toolkit/Interactors/XRPokeInteractor_PokeCollision.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(XRPokeInteractor_PokeCollision)
namespace UnityEngine::XR::Interaction::Toolkit::Filtering {
class IXRPokeFilter;
}
namespace UnityEngine::XR::Interaction::Toolkit::Interactables {
class IXRInteractable;
}
// Forward declare root types
namespace GlobalNamespace {
struct XRPokeInteractor_PokeCollision;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::XRPokeInteractor_PokeCollision);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::XRPokeInteractor_PokeCollision, "UnityEngine.XR.Interaction.Toolkit.Interactors", "XRPokeInteractor/PokeCollision");
// [IsReadOnly]
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.XR.Interaction.Toolkit.Interactors.XRPokeInteractor/PokeCollision
struct CORDL_TYPE XRPokeInteractor_PokeCollision {
public:
// Declarations
/// @brief Method .ctor, addr 0xb478078, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  interactable, ::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRPokeFilter*  filter) ;

// Ctor Parameters []
// @brief default ctor
constexpr XRPokeInteractor_PokeCollision() ;

// Ctor Parameters [CppParam { name: "interactable", ty: "::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*", modifiers: "", def_value: None, comment: None }, CppParam { name: "filter", ty: "::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRPokeFilter*", modifiers: "", def_value: None, comment: None }]
constexpr XRPokeInteractor_PokeCollision(::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  interactable, ::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRPokeFilter*  filter) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{11458};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field interactable, offset: 0x0, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Interactables::IXRInteractable*  interactable;

/// @brief Field filter, offset: 0x8, size: 0x8, def value: None
 ::UnityEngine::XR::Interaction::Toolkit::Filtering::IXRPokeFilter*  filter;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::XRPokeInteractor_PokeCollision, interactable) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::XRPokeInteractor_PokeCollision, filter) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::XRPokeInteractor_PokeCollision) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
