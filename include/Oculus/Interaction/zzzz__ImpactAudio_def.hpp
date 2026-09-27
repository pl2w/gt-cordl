#pragma once
// IWYU pragma private; include "Oculus/Interaction/ImpactAudio.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(ImpactAudio)
namespace Oculus::Interaction {
class AudioTrigger;
}
// Forward declare root types
namespace Oculus::Interaction {
struct ImpactAudio;
}
// Write type traits
MARK_VAL_T(::Oculus::Interaction::ImpactAudio);
DEFINE_IL2CPP_CLASS(::Oculus::Interaction::ImpactAudio, "Oculus.Interaction", "ImpactAudio");
// Dependencies 
namespace Oculus::Interaction {
// Is value type: true
// CS Name: Oculus.Interaction.ImpactAudio
struct CORDL_TYPE ImpactAudio {
public:
// Declarations
 __declspec(property(get=get_HardCollisionSound)) ::UnityW<::Oculus::Interaction::AudioTrigger>  HardCollisionSound;

 __declspec(property(get=get_SoftCollisionSound)) ::UnityW<::Oculus::Interaction::AudioTrigger>  SoftCollisionSound;

/// @brief Method get_HardCollisionSound, addr 0xa42bed0, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::Oculus::Interaction::AudioTrigger> get_HardCollisionSound() ;

/// @brief Method get_SoftCollisionSound, addr 0xa42bed8, size 0x8, virtual false, abstract: false, final false
inline ::UnityW<::Oculus::Interaction::AudioTrigger> get_SoftCollisionSound() ;

// Ctor Parameters []
// @brief default ctor
constexpr ImpactAudio() ;

// Ctor Parameters [CppParam { name: "_hardCollisionSound", ty: "::UnityW<::Oculus::Interaction::AudioTrigger>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_softCollisionSound", ty: "::UnityW<::Oculus::Interaction::AudioTrigger>", modifiers: "", def_value: None, comment: None }]
constexpr ImpactAudio(::UnityW<::Oculus::Interaction::AudioTrigger>  _hardCollisionSound, ::UnityW<::Oculus::Interaction::AudioTrigger>  _softCollisionSound) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{28257};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// [Tooltip("Hard collision sound will play when impact velocity is above the velocity split value.")]
/// [SerializeField]
/// @brief Field _hardCollisionSound, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::AudioTrigger>  _hardCollisionSound;

/// [Tooltip("Soft collision sound will play when impact velocity is below the velocity split value.")]
/// [SerializeField]
/// @brief Field _softCollisionSound, offset: 0x8, size: 0x8, def value: None
 ::UnityW<::Oculus::Interaction::AudioTrigger>  _softCollisionSound;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Oculus::Interaction::ImpactAudio, _hardCollisionSound) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Oculus::Interaction::ImpactAudio, _softCollisionSound) == 0x8, "Offset mismatch!");

static_assert(sizeof(::Oculus::Interaction::ImpactAudio) == 0x10, "Size mismatch!");

} // namespace end def Oculus::Interaction
