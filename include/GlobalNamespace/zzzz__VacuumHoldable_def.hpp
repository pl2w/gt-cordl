#pragma once
// IWYU pragma private; include "GlobalNamespace/VacuumHoldable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__TransferrableObject_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(VacuumHoldable)
namespace GlobalNamespace {
class VRRig;
}
namespace GlobalNamespace {
struct VacuumHoldable_VacuumState;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class ParticleSystem;
}
// Forward declare root types
namespace GlobalNamespace {
class VacuumHoldable;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::VacuumHoldable*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::VacuumHoldable*, "", "VacuumHoldable");
// Dependencies TransferrableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: VacuumHoldable
class CORDL_TYPE VacuumHoldable : public ::GlobalNamespace::TransferrableObject {
public:
// Declarations
using VacuumState = ::GlobalNamespace::VacuumHoldable_VacuumState;

/// @brief Field activationStartTime, offset 0x354, size 0x4 
 __declspec(property(get=__cordl_internal_get_activationStartTime, put=__cordl_internal_set_activationStartTime)) float_t  activationStartTime;

/// @brief Field activationVibrationLoopStrength, offset 0x350, size 0x4 
 __declspec(property(get=__cordl_internal_get_activationVibrationLoopStrength, put=__cordl_internal_set_activationVibrationLoopStrength)) float_t  activationVibrationLoopStrength;

/// @brief Field activationVibrationStartDuration, offset 0x34c, size 0x4 
 __declspec(property(get=__cordl_internal_get_activationVibrationStartDuration, put=__cordl_internal_set_activationVibrationStartDuration)) float_t  activationVibrationStartDuration;

/// @brief Field activationVibrationStartStrength, offset 0x348, size 0x4 
 __declspec(property(get=__cordl_internal_get_activationVibrationStartStrength, put=__cordl_internal_set_activationVibrationStartStrength)) float_t  activationVibrationStartStrength;

/// @brief Field audioSource, offset 0x340, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioSource, put=__cordl_internal_set_audioSource)) ::UnityW<::UnityEngine::AudioSource>  audioSource;

/// @brief Field hasAudioSource, offset 0x358, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasAudioSource, put=__cordl_internal_set_hasAudioSource)) bool  hasAudioSource;

/// @brief Field particleFX, offset 0x338, size 0x8 
 __declspec(property(get=__cordl_internal_get_particleFX, put=__cordl_internal_set_particleFX)) ::UnityW<::UnityEngine::ParticleSystem>  particleFX;

/// @brief Method InitToDefault, addr 0x5e080b4, size 0x70, virtual false, abstract: false, final false
inline void InitToDefault() ;

/// @brief Method LateUpdateShared, addr 0x5e08140, size 0x234, virtual true, abstract: false, final false
inline void LateUpdateShared() ;

static inline ::GlobalNamespace::VacuumHoldable* New_ctor() ;

/// @brief Method OnActivate, addr 0x5e08374, size 0xf0, virtual true, abstract: false, final false
inline void OnActivate() ;

/// @brief Method OnDeactivate, addr 0x5e08464, size 0x20, virtual true, abstract: false, final false
inline void OnDeactivate() ;

/// @brief Method OnDisable, addr 0x5e0803c, size 0x78, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5e07f74, size 0xc8, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnSpawn, addr 0x5e07f54, size 0x20, virtual true, abstract: false, final false
inline void OnSpawn(::GlobalNamespace::VRRig*  rig) ;

/// @brief Method ResetToDefaultState, addr 0x5e08124, size 0x1c, virtual true, abstract: false, final false
inline void ResetToDefaultState() ;

constexpr float_t const& __cordl_internal_get_activationStartTime() const;

constexpr float_t& __cordl_internal_get_activationStartTime() ;

constexpr float_t const& __cordl_internal_get_activationVibrationLoopStrength() const;

constexpr float_t& __cordl_internal_get_activationVibrationLoopStrength() ;

constexpr float_t const& __cordl_internal_get_activationVibrationStartDuration() const;

constexpr float_t& __cordl_internal_get_activationVibrationStartDuration() ;

constexpr float_t const& __cordl_internal_get_activationVibrationStartStrength() const;

constexpr float_t& __cordl_internal_get_activationVibrationStartStrength() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_audioSource() ;

constexpr bool const& __cordl_internal_get_hasAudioSource() const;

constexpr bool& __cordl_internal_get_hasAudioSource() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_particleFX() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_particleFX() ;

constexpr void __cordl_internal_set_activationStartTime(float_t  value) ;

constexpr void __cordl_internal_set_activationVibrationLoopStrength(float_t  value) ;

constexpr void __cordl_internal_set_activationVibrationStartDuration(float_t  value) ;

constexpr void __cordl_internal_set_activationVibrationStartStrength(float_t  value) ;

constexpr void __cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_hasAudioSource(bool  value) ;

constexpr void __cordl_internal_set_particleFX(::UnityW<::UnityEngine::ParticleSystem>  value) ;

/// @brief Method .ctor, addr 0x5e08484, size 0x70, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr VacuumHoldable() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "VacuumHoldable", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
VacuumHoldable(VacuumHoldable && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "VacuumHoldable", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
VacuumHoldable(VacuumHoldable const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{537};

/// [Tooltip("Emission rate will be increase when the trigger button is pressed.")]
/// @brief Field particleFX, offset: 0x338, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___particleFX;

/// [Tooltip("Sound will loop and fade in/out volume when trigger pressed.")]
/// @brief Field audioSource, offset: 0x340, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___audioSource;

/// @brief Field activationVibrationStartStrength, offset: 0x348, size: 0x4, def value: None
 float_t  ___activationVibrationStartStrength;

/// @brief Field activationVibrationStartDuration, offset: 0x34c, size: 0x4, def value: None
 float_t  ___activationVibrationStartDuration;

/// @brief Field activationVibrationLoopStrength, offset: 0x350, size: 0x4, def value: None
 float_t  ___activationVibrationLoopStrength;

/// @brief Field activationStartTime, offset: 0x354, size: 0x4, def value: None
 float_t  ___activationStartTime;

/// @brief Field hasAudioSource, offset: 0x358, size: 0x1, def value: None
 bool  ___hasAudioSource;

/// @brief Size padding 0x390 - 0x360 = 0x30, packed as 0x30
 uint8_t  _cordl_size_padding[0x30];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::VacuumHoldable, ___particleFX) == 0x338, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VacuumHoldable, ___audioSource) == 0x340, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VacuumHoldable, ___activationVibrationStartStrength) == 0x348, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VacuumHoldable, ___activationVibrationStartDuration) == 0x34c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VacuumHoldable, ___activationVibrationLoopStrength) == 0x350, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VacuumHoldable, ___activationStartTime) == 0x354, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::VacuumHoldable, ___hasAudioSource) == 0x358, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::VacuumHoldable) == 0x390, "Size mismatch!");

} // namespace end def GlobalNamespace
