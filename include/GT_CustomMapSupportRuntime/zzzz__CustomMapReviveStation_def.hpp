#pragma once
// IWYU pragma private; include "GT_CustomMapSupportRuntime/CustomMapReviveStation.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(CustomMapReviveStation)
namespace UnityEngine {
class AudioSource;
}
// Forward declare root types
namespace GT_CustomMapSupportRuntime {
class CustomMapReviveStation;
}
// Write type traits
MARK_REF_T(::GT_CustomMapSupportRuntime::CustomMapReviveStation*);
DEFINE_IL2CPP_CLASS(::GT_CustomMapSupportRuntime::CustomMapReviveStation*, "GT_CustomMapSupportRuntime", "CustomMapReviveStation");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.ParticleSystem
namespace GT_CustomMapSupportRuntime {
// Is value type: false
// CS Name: GT_CustomMapSupportRuntime.CustomMapReviveStation
class CORDL_TYPE CustomMapReviveStation : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Field audioSource, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSource, put=__cordl_internal_set_audioSource)) ::UnityW<::UnityEngine::AudioSource>  audioSource;

/// @brief Field particleEffects, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_particleEffects, put=__cordl_internal_set_particleEffects)) ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>>  particleEffects;

/// @brief Field reviveCooldownSeconds, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_reviveCooldownSeconds, put=__cordl_internal_set_reviveCooldownSeconds)) double_t  reviveCooldownSeconds;

static inline ::GT_CustomMapSupportRuntime::CustomMapReviveStation* New_ctor() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSource() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>> const& __cordl_internal_get_particleEffects() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>>& __cordl_internal_get_particleEffects() ;

constexpr double_t const& __cordl_internal_get_reviveCooldownSeconds() const;

constexpr double_t& __cordl_internal_get_reviveCooldownSeconds() ;

constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_particleEffects(::ArrayW<::UnityW<::UnityEngine::ParticleSystem>>  value) ;

constexpr void __cordl_internal_set_reviveCooldownSeconds(double_t  value) ;

/// @brief Method .ctor, addr 0x9cb6c28, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CustomMapReviveStation() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CustomMapReviveStation", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CustomMapReviveStation(CustomMapReviveStation && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CustomMapReviveStation", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CustomMapReviveStation(CustomMapReviveStation const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30894};

/// [Nullable(2)]
/// [Tooltip("Sets the SFX, if any, that play when a player is revived.")]
/// @brief Field audioSource, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSource;

/// [Nullable(new[] { 2, 1 })]
/// [Tooltip("Sets the particle effects, if any, that play when a player is revived.")]
/// @brief Field particleEffects, offset: 0x28, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::ParticleSystem>>  ___particleEffects;

/// [Tooltip("How long (in seconds) before the revive station can be used again. A value of 0 means it can always be used")]
/// @brief Field reviveCooldownSeconds, offset: 0x30, size: 0x8, def value: None
 double_t  ___reviveCooldownSeconds;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GT_CustomMapSupportRuntime::CustomMapReviveStation, ___audioSource) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::CustomMapReviveStation, ___particleEffects) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::CustomMapReviveStation, ___reviveCooldownSeconds) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GT_CustomMapSupportRuntime::CustomMapReviveStation) == 0x38, "Size mismatch!");

} // namespace end def GT_CustomMapSupportRuntime
