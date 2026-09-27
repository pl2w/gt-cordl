#pragma once
// IWYU pragma private; include "GlobalNamespace/HorseStickNoiseMaker.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(HorseStickNoiseMaker)
namespace GlobalNamespace {
class SoundBankPlayer;
}
namespace UnityEngine {
class ParticleSystem;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class HorseStickNoiseMaker;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::HorseStickNoiseMaker*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::HorseStickNoiseMaker*, "", "HorseStickNoiseMaker");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GlobalNamespace {
// Is value type: false
// CS Name: HorseStickNoiseMaker
class CORDL_TYPE HorseStickNoiseMaker : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field distElapsed, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_distElapsed, put=__cordl_internal_set_distElapsed)) float_t  distElapsed;

/// @brief Field gorillaPlayerXform, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_gorillaPlayerXform, put=__cordl_internal_set_gorillaPlayerXform)) ::UnityW<::UnityEngine::Transform>  gorillaPlayerXform;

/// @brief Field gorillaPlayerXform_path, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_gorillaPlayerXform_path, put=__cordl_internal_set_gorillaPlayerXform_path)) ::StringW  gorillaPlayerXform_path;

/// @brief Field metersPerClip, offset 0x20, size 0x4 
 __declspec(property(get=__cordl_internal_get_metersPerClip, put=__cordl_internal_set_metersPerClip)) float_t  metersPerClip;

/// @brief Field minSecBetweenClips, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_minSecBetweenClips, put=__cordl_internal_set_minSecBetweenClips)) float_t  minSecBetweenClips;

/// @brief Field oldPos, offset 0x48, size 0xc 
 __declspec(property(get=__cordl_internal_get_oldPos, put=__cordl_internal_set_oldPos)) ::UnityEngine::Vector3  oldPos;

/// @brief Field particleFX, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_particleFX, put=__cordl_internal_set_particleFX)) ::UnityW<::UnityEngine::ParticleSystem>  particleFX;

/// @brief Field soundBankPlayer, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_soundBankPlayer, put=__cordl_internal_set_soundBankPlayer)) ::UnityW<::GlobalNamespace::SoundBankPlayer>  soundBankPlayer;

/// @brief Field timeSincePlay, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_timeSincePlay, put=__cordl_internal_set_timeSincePlay)) float_t  timeSincePlay;

/// @brief Method LateUpdate, addr 0x5e08774, size 0x188, virtual false, abstract: false, final false
inline void LateUpdate() ;

static inline ::GlobalNamespace::HorseStickNoiseMaker* New_ctor() ;

/// @brief Method OnEnable, addr 0x5e084f4, size 0x280, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr float_t const& __cordl_internal_get_distElapsed() const;

constexpr float_t& __cordl_internal_get_distElapsed() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_gorillaPlayerXform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_gorillaPlayerXform() ;

constexpr ::StringW const& __cordl_internal_get_gorillaPlayerXform_path() const;

constexpr ::StringW& __cordl_internal_get_gorillaPlayerXform_path() ;

constexpr float_t const& __cordl_internal_get_metersPerClip() const;

constexpr float_t& __cordl_internal_get_metersPerClip() ;

constexpr float_t const& __cordl_internal_get_minSecBetweenClips() const;

constexpr float_t& __cordl_internal_get_minSecBetweenClips() ;

constexpr ::UnityEngine::Vector3 const& __cordl_internal_get_oldPos() const;

constexpr ::UnityEngine::Vector3& __cordl_internal_get_oldPos() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_particleFX() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_particleFX() ;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& __cordl_internal_get_soundBankPlayer() const;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& __cordl_internal_get_soundBankPlayer() ;

constexpr float_t const& __cordl_internal_get_timeSincePlay() const;

constexpr float_t& __cordl_internal_get_timeSincePlay() ;

constexpr void __cordl_internal_set_distElapsed(float_t  value) ;

constexpr void __cordl_internal_set_gorillaPlayerXform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_gorillaPlayerXform_path(::StringW  value) ;

constexpr void __cordl_internal_set_metersPerClip(float_t  value) ;

constexpr void __cordl_internal_set_minSecBetweenClips(float_t  value) ;

constexpr void __cordl_internal_set_oldPos(::UnityEngine::Vector3  value) ;

constexpr void __cordl_internal_set_particleFX(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set_soundBankPlayer(::UnityW<::GlobalNamespace::SoundBankPlayer>  value) ;

constexpr void __cordl_internal_set_timeSincePlay(float_t  value) ;

/// @brief Method .ctor, addr 0x5e088fc, size 0x14, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr HorseStickNoiseMaker() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "HorseStickNoiseMaker", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
HorseStickNoiseMaker(HorseStickNoiseMaker && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "HorseStickNoiseMaker", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
HorseStickNoiseMaker(HorseStickNoiseMaker const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{538};

/// [Tooltip("Meters the object should traverse between playing a provided audio clip.")]
/// @brief Field metersPerClip, offset: 0x20, size: 0x4, def value: None
 float_t  ___metersPerClip;

/// [Tooltip("Number of seconds that must elapse before playing another audio clip.")]
/// @brief Field minSecBetweenClips, offset: 0x24, size: 0x4, def value: None
 float_t  ___minSecBetweenClips;

/// @brief Field soundBankPlayer, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundBankPlayer>  ___soundBankPlayer;

/// [Tooltip("Transform assigned in Gorilla Player Networked Prefab to the Gorilla Player Networked parent to keep track of distance traveled.")]
/// @brief Field gorillaPlayerXform, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___gorillaPlayerXform;

/// [Delayed]
/// @brief Field gorillaPlayerXform_path, offset: 0x38, size: 0x8, def value: None
 ::StringW  ___gorillaPlayerXform_path;

/// [Tooltip("Optional particle FX to spawn when sound plays")]
/// @brief Field particleFX, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___particleFX;

/// @brief Field oldPos, offset: 0x48, size: 0xc, def value: None
 ::UnityEngine::Vector3  ___oldPos;

/// @brief Field timeSincePlay, offset: 0x54, size: 0x4, def value: None
 float_t  ___timeSincePlay;

/// @brief Field distElapsed, offset: 0x58, size: 0x4, def value: None
 float_t  ___distElapsed;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::HorseStickNoiseMaker, ___metersPerClip) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HorseStickNoiseMaker, ___minSecBetweenClips) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HorseStickNoiseMaker, ___soundBankPlayer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HorseStickNoiseMaker, ___gorillaPlayerXform) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HorseStickNoiseMaker, ___gorillaPlayerXform_path) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HorseStickNoiseMaker, ___particleFX) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HorseStickNoiseMaker, ___oldPos) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HorseStickNoiseMaker, ___timeSincePlay) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::HorseStickNoiseMaker, ___distElapsed) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::HorseStickNoiseMaker) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace
