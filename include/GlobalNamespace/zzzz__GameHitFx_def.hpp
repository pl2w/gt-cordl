#pragma once
// IWYU pragma private; include "GlobalNamespace/GameHitFx.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(GameHitFx)
namespace GlobalNamespace {
class AbilitySound;
}
namespace UnityEngine {
class ParticleSystem;
}
// Forward declare root types
namespace GlobalNamespace {
struct GameHitFx;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GameHitFx);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameHitFx, "", "GameHitFx");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GameHitFx
struct CORDL_TYPE GameHitFx {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr GameHitFx() ;

// Ctor Parameters [CppParam { name: "hitSound", ty: "::GlobalNamespace::AbilitySound*", modifiers: "", def_value: None, comment: None }, CppParam { name: "hitEffect", ty: "::UnityW<::UnityEngine::ParticleSystem>", modifiers: "", def_value: None, comment: None }]
constexpr GameHitFx(::GlobalNamespace::AbilitySound*  hitSound, ::UnityW<::UnityEngine::ParticleSystem>  hitEffect) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{1769};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field hitSound, offset: 0x0, size: 0x8, def value: None
 ::GlobalNamespace::AbilitySound*  hitSound;

/// @brief Field hitEffect, offset: 0x8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  hitEffect;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameHitFx, hitSound) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameHitFx, hitEffect) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GameHitFx) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
