#pragma once
// IWYU pragma private; include "Oculus/Interaction/PokeInteractor_CachedInteractable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Oculus/Interaction/Surfaces/zzzz__SurfaceHit_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(PokeInteractor_CachedInteractable)
namespace Oculus::Interaction {
class PokeInteractable;
}
// Forward declare root types
namespace GlobalNamespace {
struct PokeInteractor_CachedInteractable;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::PokeInteractor_CachedInteractable);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::PokeInteractor_CachedInteractable, "Oculus.Interaction", "PokeInteractor/CachedInteractable");
// Dependencies Oculus.Interaction.Surfaces.SurfaceHit
namespace GlobalNamespace {
// Is value type: true
// CS Name: Oculus.Interaction.PokeInteractor/CachedInteractable
struct CORDL_TYPE PokeInteractor_CachedInteractable {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr PokeInteractor_CachedInteractable() ;

// Ctor Parameters [CppParam { name: "interactable", ty: "::UnityW<::Oculus::Interaction::PokeInteractable>", modifiers: "", def_value: None, comment: None }, CppParam { name: "backingHit", ty: "::Oculus::Interaction::Surfaces::SurfaceHit", modifiers: "", def_value: None, comment: None }, CppParam { name: "patchHit", ty: "::Oculus::Interaction::Surfaces::SurfaceHit", modifiers: "", def_value: None, comment: None }]
constexpr PokeInteractor_CachedInteractable(::UnityW<::Oculus::Interaction::PokeInteractable>  interactable, ::Oculus::Interaction::Surfaces::SurfaceHit  backingHit, ::Oculus::Interaction::Surfaces::SurfaceHit  patchHit) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15857};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x40};

/// @brief Field interactable, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::PokeInteractable>  interactable;

/// @brief Field backingHit, offset: 0x8, size: 0x1c, def value: None
 ::Oculus::Interaction::Surfaces::SurfaceHit  backingHit;

/// @brief Field patchHit, offset: 0x24, size: 0x1c, def value: None
 ::Oculus::Interaction::Surfaces::SurfaceHit  patchHit;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::PokeInteractor_CachedInteractable, interactable) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PokeInteractor_CachedInteractable, backingHit) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PokeInteractor_CachedInteractable, patchHit) == 0x24, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::PokeInteractor_CachedInteractable) == 0x40, "Size mismatch!");

} // namespace end def GlobalNamespace
