#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/VelocityBasedAudioTriggerCosmetic.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(VelocityBasedAudioTriggerCosmetic)
namespace GlobalNamespace {
class SoundBankPlayer;
}
namespace GorillaLocomotion::Climbing {
class GorillaVelocityTracker;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class AudioSource;
}
// Forward declare root types
namespace GorillaTag::Cosmetics {
class VelocityBasedAudioTriggerCosmetic;
}
// Write type traits
MARK_REF_T(::GorillaTag::Cosmetics::VelocityBasedAudioTriggerCosmetic*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Cosmetics::VelocityBasedAudioTriggerCosmetic*, "GorillaTag.Cosmetics", "VelocityBasedAudioTriggerCosmetic");
// Dependencies UnityEngine.MonoBehaviour
namespace GorillaTag::Cosmetics {
// Is value type: false
// CS Name: GorillaTag.Cosmetics.VelocityBasedAudioTriggerCosmetic
class CORDL_TYPE VelocityBasedAudioTriggerCosmetic : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field audioClip, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioClip, put=__cordl_internal_set_audioClip)) ::UnityW<::UnityEngine::AudioClip>  audioClip;

/// @brief Field audioSource, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSource, put=__cordl_internal_set_audioSource)) ::UnityW<::UnityEngine::AudioSource>  audioSource;

/// @brief Field maxOutputVolume, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxOutputVolume, put=__cordl_internal_set_maxOutputVolume)) float_t  maxOutputVolume;

/// @brief Field maxVelocity, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxVelocity, put=__cordl_internal_set_maxVelocity)) float_t  maxVelocity;

/// @brief Field minOutputVolume, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_minOutputVolume, put=__cordl_internal_set_minOutputVolume)) float_t  minOutputVolume;

/// @brief Field minVelocityThreshold, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_minVelocityThreshold, put=__cordl_internal_set_minVelocityThreshold)) float_t  minVelocityThreshold;

/// @brief Field soundBank, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_soundBank, put=__cordl_internal_set_soundBank)) ::UnityW<::GlobalNamespace::SoundBankPlayer>  soundBank;

/// @brief Field velocityTracker, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_velocityTracker, put=__cordl_internal_set_velocityTracker)) ::UnityW<::GorillaLocomotion::Climbing::GorillaVelocityTracker>  velocityTracker;

/// @brief Method Awake, addr 0x5da43e4, size 0xec, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GorillaTag::Cosmetics::VelocityBasedAudioTriggerCosmetic* New_ctor() ;

/// @brief Method Update, addr 0x5da44d0, size 0x2c8, virtual false, abstract: false, final false
inline void Update() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_audioClip() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_audioClip() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSource() ;

constexpr float_t const& __cordl_internal_get_maxOutputVolume() const;

constexpr float_t& __cordl_internal_get_maxOutputVolume() ;

constexpr float_t const& __cordl_internal_get_maxVelocity() const;

constexpr float_t& __cordl_internal_get_maxVelocity() ;

constexpr float_t const& __cordl_internal_get_minOutputVolume() const;

constexpr float_t& __cordl_internal_get_minOutputVolume() ;

constexpr float_t const& __cordl_internal_get_minVelocityThreshold() const;

constexpr float_t& __cordl_internal_get_minVelocityThreshold() ;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& __cordl_internal_get_soundBank() const;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& __cordl_internal_get_soundBank() ;

constexpr ::UnityW<::GorillaLocomotion::Climbing::GorillaVelocityTracker> const& __cordl_internal_get_velocityTracker() const;

constexpr ::UnityW<::GorillaLocomotion::Climbing::GorillaVelocityTracker>& __cordl_internal_get_velocityTracker() ;

constexpr void __cordl_internal_set_audioClip(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_maxOutputVolume(float_t  value) ;

constexpr void __cordl_internal_set_maxVelocity(float_t  value) ;

constexpr void __cordl_internal_set_minOutputVolume(float_t  value) ;

constexpr void __cordl_internal_set_minVelocityThreshold(float_t  value) ;

constexpr void __cordl_internal_set_soundBank(::UnityW<::GlobalNamespace::SoundBankPlayer>  value) ;

constexpr void __cordl_internal_set_velocityTracker(::UnityW<::GorillaLocomotion::Climbing::GorillaVelocityTracker>  value) ;

/// @brief Method .ctor, addr 0x5da4798, size 0x1c, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VelocityBasedAudioTriggerCosmetic() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VelocityBasedAudioTriggerCosmetic", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VelocityBasedAudioTriggerCosmetic(VelocityBasedAudioTriggerCosmetic && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VelocityBasedAudioTriggerCosmetic", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VelocityBasedAudioTriggerCosmetic(VelocityBasedAudioTriggerCosmetic const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4981};

/// [SerializeField]
/// @brief Field velocityTracker, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GorillaLocomotion::Climbing::GorillaVelocityTracker>  ___velocityTracker;

/// [SerializeField]
/// @brief Field audioSource, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSource;

/// [SerializeField]
/// @brief Field audioClip, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___audioClip;

/// [SerializeField]
/// @brief Field soundBank, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundBankPlayer>  ___soundBank;

/// [Tooltip(" Minimum velocity to trigger audio")]
/// [SerializeField]
/// @brief Field minVelocityThreshold, offset: 0x40, size: 0x4, def value: None
 float_t  ___minVelocityThreshold;

/// [SerializeField]
/// @brief Field maxVelocity, offset: 0x44, size: 0x4, def value: None
 float_t  ___maxVelocity;

/// [SerializeField]
/// @brief Field minOutputVolume, offset: 0x48, size: 0x4, def value: None
 float_t  ___minOutputVolume;

/// [SerializeField]
/// @brief Field maxOutputVolume, offset: 0x4c, size: 0x4, def value: None
 float_t  ___maxOutputVolume;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Cosmetics::VelocityBasedAudioTriggerCosmetic, ___velocityTracker) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::VelocityBasedAudioTriggerCosmetic, ___audioSource) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::VelocityBasedAudioTriggerCosmetic, ___audioClip) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::VelocityBasedAudioTriggerCosmetic, ___soundBank) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::VelocityBasedAudioTriggerCosmetic, ___minVelocityThreshold) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::VelocityBasedAudioTriggerCosmetic, ___maxVelocity) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::VelocityBasedAudioTriggerCosmetic, ___minOutputVolume) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Cosmetics::VelocityBasedAudioTriggerCosmetic, ___maxOutputVolume) == 0x4c, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Cosmetics::VelocityBasedAudioTriggerCosmetic) == 0x50, "Size mismatch!");

} // namespace end def GorillaTag::Cosmetics
