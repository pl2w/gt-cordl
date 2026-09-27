#pragma once
// IWYU pragma private; include "GlobalNamespace/TappableGuardianIdol_IdolActivationSound.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(TappableGuardianIdol_IdolActivationSound)
namespace UnityEngine {
class AudioClip;
}
// Forward declare root types
namespace GlobalNamespace {
struct TappableGuardianIdol_IdolActivationSound;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TappableGuardianIdol_IdolActivationSound);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::TappableGuardianIdol_IdolActivationSound, "", "TappableGuardianIdol/IdolActivationSound");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: TappableGuardianIdol/IdolActivationSound
struct CORDL_TYPE TappableGuardianIdol_IdolActivationSound {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr TappableGuardianIdol_IdolActivationSound() ;

// Ctor Parameters [CppParam { name: "activation", ty: "::UnityW<::UnityEngine::AudioClip>", modifiers: "", def_value: None, comment: None }, CppParam { name: "loop", ty: "::UnityW<::UnityEngine::AudioClip>", modifiers: "", def_value: None, comment: None }]
constexpr TappableGuardianIdol_IdolActivationSound(::UnityW<::UnityEngine::AudioClip>  activation, ::UnityW<::UnityEngine::AudioClip>  loop) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2565};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field activation, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  activation;

/// @brief Field loop, offset: 0x8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  loop;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TappableGuardianIdol_IdolActivationSound, activation) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TappableGuardianIdol_IdolActivationSound, loop) == 0x8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::TappableGuardianIdol_IdolActivationSound) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
