#pragma once
// IWYU pragma private; include "GlobalNamespace/MarkOneMitts.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__HandTapBehaviour_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_Burst_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_ForceOverLifetimeModule_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_MainModule_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_MinMaxCurve_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MarkOneMitts)
namespace GlobalNamespace {
class HandEffectContext;
}
namespace GlobalNamespace {
class IProximityEffectReceiver;
}
namespace GlobalNamespace {
class ITickSystemTick;
}
namespace GlobalNamespace {
class MarkOneMitts_Mitt;
}
namespace GlobalNamespace {
struct ParticleSystem_MinMaxCurve;
}
namespace GlobalNamespace {
class ProximityEffect;
}
namespace GlobalNamespace {
class ThermalSourceVolume;
}
namespace GlobalNamespace {
class VRRig;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class AudioSource;
}
namespace UnityEngine {
class ParticleSystem;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class MarkOneMitts;
}
namespace GlobalNamespace {
class MarkOneMitts_Mitt;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MarkOneMitts*);
MARK_REF_T(::GlobalNamespace::MarkOneMitts_Mitt*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MarkOneMitts*, "", "MarkOneMitts");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MarkOneMitts_Mitt*, "", "MarkOneMitts/Mitt");
// Dependencies HandTapBehaviour, UnityEngine.ParticleSystem::MinMaxCurve
namespace GlobalNamespace {
// Is value type: false
// CS Name: MarkOneMitts
class CORDL_TYPE MarkOneMitts : public ::GlobalNamespace::HandTapBehaviour {
public:
// Declarations
using Mitt = ::GlobalNamespace::MarkOneMitts_Mitt;

 __declspec(property(get=get_TickRunning, put=set_TickRunning)) bool  TickRunning;

/// @brief Field <TickRunning>k__BackingField, offset 0xe0, size 0x1 
 __declspec(property(get=__cordl_internal_get__TickRunning_k__BackingField, put=__cordl_internal_set__TickRunning_k__BackingField)) bool  _TickRunning_k__BackingField;

/// @brief Field emptyParticleCurve, offset 0xc0, size 0x20 
 __declspec(property(get=__cordl_internal_get_emptyParticleCurve, put=__cordl_internal_set_emptyParticleCurve)) ::GlobalNamespace::ParticleSystem_MinMaxCurve  emptyParticleCurve;

/// @brief Field flameScale, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_flameScale, put=__cordl_internal_set_flameScale)) float_t  flameScale;

/// @brief Field flameSpeed, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_flameSpeed, put=__cordl_internal_set_flameSpeed)) float_t  flameSpeed;

/// @brief Field flameTime, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_flameTime, put=__cordl_internal_set_flameTime)) float_t  flameTime;

/// @brief Field handSpeedToEffectStrength, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_handSpeedToEffectStrength, put=__cordl_internal_set_handSpeedToEffectStrength)) ::UnityEngine::AnimationCurve*  handSpeedToEffectStrength;

/// @brief Field heatMultiplier, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_heatMultiplier, put=__cordl_internal_set_heatMultiplier)) float_t  heatMultiplier;

/// @brief Field leftMitt, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_leftMitt, put=__cordl_internal_set_leftMitt)) ::GlobalNamespace::MarkOneMitts_Mitt*  leftMitt;

/// @brief Field minEffectStrength, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_minEffectStrength, put=__cordl_internal_set_minEffectStrength)) float_t  minEffectStrength;

/// @brief Field proximityAudioPitch, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_proximityAudioPitch, put=__cordl_internal_set_proximityAudioPitch)) ::UnityEngine::AnimationCurve*  proximityAudioPitch;

/// @brief Field proximityAudioReactionSpeed, offset 0x88, size 0x4 
 __declspec(property(get=__cordl_internal_get_proximityAudioReactionSpeed, put=__cordl_internal_set_proximityAudioReactionSpeed)) float_t  proximityAudioReactionSpeed;

/// @brief Field proximityAudioSource, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_proximityAudioSource, put=__cordl_internal_set_proximityAudioSource)) ::UnityW<::UnityEngine::AudioSource>  proximityAudioSource;

/// @brief Field proximityAudioVolume, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_proximityAudioVolume, put=__cordl_internal_set_proximityAudioVolume)) ::UnityEngine::AnimationCurve*  proximityAudioVolume;

/// @brief Field proximityEffect, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_proximityEffect, put=__cordl_internal_set_proximityEffect)) ::UnityW<::GlobalNamespace::ProximityEffect>  proximityEffect;

/// @brief Field proximitySpeedCurve, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_proximitySpeedCurve, put=__cordl_internal_set_proximitySpeedCurve)) ::UnityEngine::AnimationCurve*  proximitySpeedCurve;

/// @brief Field proximitySpreadCurve, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_proximitySpreadCurve, put=__cordl_internal_set_proximitySpreadCurve)) ::UnityEngine::AnimationCurve*  proximitySpreadCurve;

/// @brief Field proximityStartAudioClip, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_proximityStartAudioClip, put=__cordl_internal_set_proximityStartAudioClip)) ::UnityW<::UnityEngine::AudioClip>  proximityStartAudioClip;

/// @brief Field proximityStartAudioVolume, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get_proximityStartAudioVolume, put=__cordl_internal_set_proximityStartAudioVolume)) float_t  proximityStartAudioVolume;

/// @brief Field proximityStartStopAudioSource, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_proximityStartStopAudioSource, put=__cordl_internal_set_proximityStartStopAudioSource)) ::UnityW<::UnityEngine::AudioSource>  proximityStartStopAudioSource;

/// @brief Field proximityStopAudioClip, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_proximityStopAudioClip, put=__cordl_internal_set_proximityStopAudioClip)) ::UnityW<::UnityEngine::AudioClip>  proximityStopAudioClip;

/// @brief Field proximityStopAudioVolume, offset 0xb0, size 0x4 
 __declspec(property(get=__cordl_internal_get_proximityStopAudioVolume, put=__cordl_internal_set_proximityStopAudioVolume)) float_t  proximityStopAudioVolume;

/// @brief Field rig, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_rig, put=__cordl_internal_set_rig)) ::UnityW<::GlobalNamespace::VRRig>  rig;

/// @brief Field rightMitt, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_rightMitt, put=__cordl_internal_set_rightMitt)) ::GlobalNamespace::MarkOneMitts_Mitt*  rightMitt;

/// @brief Field vibrateController, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get_vibrateController, put=__cordl_internal_set_vibrateController)) bool  vibrateController;

/// @brief Field vibrationStrengthMult, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_vibrationStrengthMult, put=__cordl_internal_set_vibrationStrengthMult)) float_t  vibrationStrengthMult;

/// @brief Convert operator to "::GlobalNamespace::IProximityEffectReceiver"
constexpr operator  ::GlobalNamespace::IProximityEffectReceiver*() noexcept;

/// @brief Convert operator to "::GlobalNamespace::ITickSystemTick"
constexpr operator  ::GlobalNamespace::ITickSystemTick*() noexcept;

/// @brief Method Awake, addr 0x57f0a24, size 0xac, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::GlobalNamespace::MarkOneMitts* New_ctor() ;

/// @brief Method OnDisable, addr 0x57f0c5c, size 0x6c, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x57f0bf0, size 0x6c, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnProximityCalculated, addr 0x57f0cc8, size 0x39c, virtual true, abstract: false, final true
inline void OnProximityCalculated(float_t  distance, float_t  alignment, float_t  parallel) ;

/// @brief Method OnTap, addr 0x57f15a4, size 0x2a8, virtual true, abstract: false, final false
inline void OnTap(::GlobalNamespace::HandEffectContext*  handContext) ;

/// @brief Method RunTimer, addr 0x57f124c, size 0x208, virtual false, abstract: false, final false
inline void RunTimer(::GlobalNamespace::MarkOneMitts_Mitt*  mitt, bool  isLeftHand) ;

/// @brief Method SetInterferenceAudio, addr 0x57f11b8, size 0x94, virtual false, abstract: false, final false
inline void SetInterferenceAudio(bool  active) ;

/// @brief Method StartFlame, addr 0x57f1064, size 0x154, virtual false, abstract: false, final false
inline void StartFlame(::GlobalNamespace::MarkOneMitts_Mitt*  mitt, float_t  scale, float_t  speed, ::GlobalNamespace::ParticleSystem_MinMaxCurve  xy) ;

/// @brief Method Tick, addr 0x57f14e8, size 0xbc, virtual true, abstract: false, final true
inline void Tick() ;

/// @brief Method TryPlayProximityStartStopAudio, addr 0x57f1454, size 0x84, virtual false, abstract: false, final false
inline void TryPlayProximityStartStopAudio(::UnityEngine::AudioClip*  clip, float_t  volume) ;

constexpr bool const& __cordl_internal_get__TickRunning_k__BackingField() const;

constexpr bool& __cordl_internal_get__TickRunning_k__BackingField() ;

constexpr ::GlobalNamespace::ParticleSystem_MinMaxCurve const& __cordl_internal_get_emptyParticleCurve() const;

constexpr ::GlobalNamespace::ParticleSystem_MinMaxCurve& __cordl_internal_get_emptyParticleCurve() ;

constexpr float_t const& __cordl_internal_get_flameScale() const;

constexpr float_t& __cordl_internal_get_flameScale() ;

constexpr float_t const& __cordl_internal_get_flameSpeed() const;

constexpr float_t& __cordl_internal_get_flameSpeed() ;

constexpr float_t const& __cordl_internal_get_flameTime() const;

constexpr float_t& __cordl_internal_get_flameTime() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_handSpeedToEffectStrength() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_handSpeedToEffectStrength() ;

constexpr float_t const& __cordl_internal_get_heatMultiplier() const;

constexpr float_t& __cordl_internal_get_heatMultiplier() ;

constexpr ::GlobalNamespace::MarkOneMitts_Mitt* const& __cordl_internal_get_leftMitt() const;

constexpr ::GlobalNamespace::MarkOneMitts_Mitt*& __cordl_internal_get_leftMitt() ;

constexpr float_t const& __cordl_internal_get_minEffectStrength() const;

constexpr float_t& __cordl_internal_get_minEffectStrength() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_proximityAudioPitch() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_proximityAudioPitch() ;

constexpr float_t const& __cordl_internal_get_proximityAudioReactionSpeed() const;

constexpr float_t& __cordl_internal_get_proximityAudioReactionSpeed() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_proximityAudioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_proximityAudioSource() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_proximityAudioVolume() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_proximityAudioVolume() ;

constexpr ::UnityW<::GlobalNamespace::ProximityEffect> const& __cordl_internal_get_proximityEffect() const;

constexpr ::UnityW<::GlobalNamespace::ProximityEffect>& __cordl_internal_get_proximityEffect() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_proximitySpeedCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_proximitySpeedCurve() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_proximitySpreadCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_proximitySpreadCurve() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_proximityStartAudioClip() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_proximityStartAudioClip() ;

constexpr float_t const& __cordl_internal_get_proximityStartAudioVolume() const;

constexpr float_t& __cordl_internal_get_proximityStartAudioVolume() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_proximityStartStopAudioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_proximityStartStopAudioSource() ;

constexpr ::UnityW<::UnityEngine::AudioClip> const& __cordl_internal_get_proximityStopAudioClip() const;

constexpr ::UnityW<::UnityEngine::AudioClip>& __cordl_internal_get_proximityStopAudioClip() ;

constexpr float_t const& __cordl_internal_get_proximityStopAudioVolume() const;

constexpr float_t& __cordl_internal_get_proximityStopAudioVolume() ;

constexpr ::UnityW<::GlobalNamespace::VRRig> const& __cordl_internal_get_rig() const;

constexpr ::UnityW<::GlobalNamespace::VRRig>& __cordl_internal_get_rig() ;

constexpr ::GlobalNamespace::MarkOneMitts_Mitt* const& __cordl_internal_get_rightMitt() const;

constexpr ::GlobalNamespace::MarkOneMitts_Mitt*& __cordl_internal_get_rightMitt() ;

constexpr bool const& __cordl_internal_get_vibrateController() const;

constexpr bool& __cordl_internal_get_vibrateController() ;

constexpr float_t const& __cordl_internal_get_vibrationStrengthMult() const;

constexpr float_t& __cordl_internal_get_vibrationStrengthMult() ;

constexpr void __cordl_internal_set__TickRunning_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_emptyParticleCurve(::GlobalNamespace::ParticleSystem_MinMaxCurve  value) ;

constexpr void __cordl_internal_set_flameScale(float_t  value) ;

constexpr void __cordl_internal_set_flameSpeed(float_t  value) ;

constexpr void __cordl_internal_set_flameTime(float_t  value) ;

constexpr void __cordl_internal_set_handSpeedToEffectStrength(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_heatMultiplier(float_t  value) ;

constexpr void __cordl_internal_set_leftMitt(::GlobalNamespace::MarkOneMitts_Mitt*  value) ;

constexpr void __cordl_internal_set_minEffectStrength(float_t  value) ;

constexpr void __cordl_internal_set_proximityAudioPitch(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_proximityAudioReactionSpeed(float_t  value) ;

constexpr void __cordl_internal_set_proximityAudioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_proximityAudioVolume(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_proximityEffect(::UnityW<::GlobalNamespace::ProximityEffect>  value) ;

constexpr void __cordl_internal_set_proximitySpeedCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_proximitySpreadCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_proximityStartAudioClip(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_proximityStartAudioVolume(float_t  value) ;

constexpr void __cordl_internal_set_proximityStartStopAudioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_proximityStopAudioClip(::UnityW<::UnityEngine::AudioClip>  value) ;

constexpr void __cordl_internal_set_proximityStopAudioVolume(float_t  value) ;

constexpr void __cordl_internal_set_rig(::UnityW<::GlobalNamespace::VRRig>  value) ;

constexpr void __cordl_internal_set_rightMitt(::GlobalNamespace::MarkOneMitts_Mitt*  value) ;

constexpr void __cordl_internal_set_vibrateController(bool  value) ;

constexpr void __cordl_internal_set_vibrationStrengthMult(float_t  value) ;

/// @brief Method .ctor, addr 0x57f184c, size 0x84, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method get_TickRunning, addr 0x57f14d8, size 0x8, virtual true, abstract: false, final true
inline bool get_TickRunning() ;

/// @brief Convert to "::GlobalNamespace::IProximityEffectReceiver"
constexpr ::GlobalNamespace::IProximityEffectReceiver* i___GlobalNamespace__IProximityEffectReceiver() noexcept;

/// @brief Convert to "::GlobalNamespace::ITickSystemTick"
constexpr ::GlobalNamespace::ITickSystemTick* i___GlobalNamespace__ITickSystemTick() noexcept;

/// [CompilerGenerated]
/// @brief Method set_TickRunning, addr 0x57f14e0, size 0x8, virtual true, abstract: false, final true
inline void set_TickRunning(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MarkOneMitts() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MarkOneMitts", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MarkOneMitts(MarkOneMitts && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MarkOneMitts", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MarkOneMitts(MarkOneMitts const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{191};

/// [SerializeField]
/// @brief Field leftMitt, offset: 0x20, size: 0x8, def value: None
 ::GlobalNamespace::MarkOneMitts_Mitt*  ___leftMitt;

/// [SerializeField]
/// @brief Field rightMitt, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::MarkOneMitts_Mitt*  ___rightMitt;

/// [SerializeField]
/// @brief Field proximityEffect, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ProximityEffect>  ___proximityEffect;

/// [SerializeField]
/// @brief Field handSpeedToEffectStrength, offset: 0x38, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___handSpeedToEffectStrength;

/// [SerializeField]
/// @brief Field minEffectStrength, offset: 0x40, size: 0x4, def value: None
 float_t  ___minEffectStrength;

/// [SerializeField]
/// @brief Field flameScale, offset: 0x44, size: 0x4, def value: None
 float_t  ___flameScale;

/// [SerializeField]
/// @brief Field flameTime, offset: 0x48, size: 0x4, def value: None
 float_t  ___flameTime;

/// [SerializeField]
/// @brief Field flameSpeed, offset: 0x4c, size: 0x4, def value: None
 float_t  ___flameSpeed;

/// [SerializeField]
/// @brief Field heatMultiplier, offset: 0x50, size: 0x4, def value: None
 float_t  ___heatMultiplier;

/// [SerializeField]
/// @brief Field proximitySpeedCurve, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___proximitySpeedCurve;

/// [SerializeField]
/// @brief Field proximitySpreadCurve, offset: 0x60, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___proximitySpreadCurve;

/// [Space]
/// [SerializeField]
/// @brief Field vibrateController, offset: 0x68, size: 0x1, def value: None
 bool  ___vibrateController;

/// [SerializeField]
/// @brief Field vibrationStrengthMult, offset: 0x6c, size: 0x4, def value: None
 float_t  ___vibrationStrengthMult;

/// [Space]
/// [SerializeField]
/// @brief Field proximityAudioSource, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___proximityAudioSource;

/// [SerializeField]
/// @brief Field proximityAudioPitch, offset: 0x78, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___proximityAudioPitch;

/// [SerializeField]
/// @brief Field proximityAudioVolume, offset: 0x80, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___proximityAudioVolume;

/// [SerializeField]
/// @brief Field proximityAudioReactionSpeed, offset: 0x88, size: 0x4, def value: None
 float_t  ___proximityAudioReactionSpeed;

/// [Space]
/// [SerializeField]
/// @brief Field proximityStartStopAudioSource, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___proximityStartStopAudioSource;

/// [SerializeField]
/// @brief Field proximityStartAudioClip, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___proximityStartAudioClip;

/// [SerializeField]
/// @brief Field proximityStartAudioVolume, offset: 0xa0, size: 0x4, def value: None
 float_t  ___proximityStartAudioVolume;

/// [SerializeField]
/// @brief Field proximityStopAudioClip, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioClip>  ___proximityStopAudioClip;

/// [SerializeField]
/// @brief Field proximityStopAudioVolume, offset: 0xb0, size: 0x4, def value: None
 float_t  ___proximityStopAudioVolume;

/// @brief Field rig, offset: 0xb8, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::VRRig>  ___rig;

/// @brief Field emptyParticleCurve, offset: 0xc0, size: 0x20, def value: None
 ::GlobalNamespace::ParticleSystem_MinMaxCurve  ___emptyParticleCurve;

/// [CompilerGenerated]
/// @brief Field <TickRunning>k__BackingField, offset: 0xe0, size: 0x1, def value: None
 bool  ____TickRunning_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MarkOneMitts, ___leftMitt) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MarkOneMitts, ___rightMitt) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MarkOneMitts, ___proximityEffect) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MarkOneMitts, ___handSpeedToEffectStrength) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MarkOneMitts, ___minEffectStrength) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MarkOneMitts, ___flameScale) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MarkOneMitts, ___flameTime) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MarkOneMitts, ___flameSpeed) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MarkOneMitts, ___heatMultiplier) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MarkOneMitts, ___proximitySpeedCurve) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MarkOneMitts, ___proximitySpreadCurve) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MarkOneMitts, ___vibrateController) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MarkOneMitts, ___vibrationStrengthMult) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MarkOneMitts, ___proximityAudioSource) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MarkOneMitts, ___proximityAudioPitch) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MarkOneMitts, ___proximityAudioVolume) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MarkOneMitts, ___proximityAudioReactionSpeed) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MarkOneMitts, ___proximityStartStopAudioSource) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MarkOneMitts, ___proximityStartAudioClip) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MarkOneMitts, ___proximityStartAudioVolume) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MarkOneMitts, ___proximityStopAudioClip) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MarkOneMitts, ___proximityStopAudioVolume) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MarkOneMitts, ___rig) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MarkOneMitts, ___emptyParticleCurve) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MarkOneMitts, ____TickRunning_k__BackingField) == 0xe0, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MarkOneMitts) == 0xe8, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object, UnityEngine.ParticleSystem::Burst, UnityEngine.ParticleSystem::ForceOverLifetimeModule, UnityEngine.ParticleSystem::MainModule
namespace GlobalNamespace {
// Is value type: false
// CS Name: MarkOneMitts/Mitt
class CORDL_TYPE MarkOneMitts_Mitt : public ::System::Object {
public:
// Declarations
/// @brief Field burst, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_burst, put=__cordl_internal_set_burst)) ::UnityW<::UnityEngine::ParticleSystem>  burst;

/// @brief Field burstTransform, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_burstTransform, put=__cordl_internal_set_burstTransform)) ::UnityW<::UnityEngine::Transform>  burstTransform;

/// @brief Field bursts, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_bursts, put=__cordl_internal_set_bursts)) ::ArrayW<::GlobalNamespace::ParticleSystem_Burst>  bursts;

/// @brief Field flame, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_flame, put=__cordl_internal_set_flame)) ::UnityW<::UnityEngine::ParticleSystem>  flame;

/// @brief Field flameForce, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_flameForce, put=__cordl_internal_set_flameForce)) ::GlobalNamespace::ParticleSystem_ForceOverLifetimeModule  flameForce;

/// @brief Field flameMain, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_flameMain, put=__cordl_internal_set_flameMain)) ::GlobalNamespace::ParticleSystem_MainModule  flameMain;

/// @brief Field flameTransform, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_flameTransform, put=__cordl_internal_set_flameTransform)) ::UnityW<::UnityEngine::Transform>  flameTransform;

/// @brief Field lastTapStrength, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastTapStrength, put=__cordl_internal_set_lastTapStrength)) float_t  lastTapStrength;

/// @brief Field thermalSource, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_thermalSource, put=__cordl_internal_set_thermalSource)) ::UnityW<::GlobalNamespace::ThermalSourceVolume>  thermalSource;

/// @brief Field timer, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_timer, put=__cordl_internal_set_timer)) float_t  timer;

/// @brief Method Init, addr 0x57f0ad0, size 0x120, virtual false, abstract: false, final false
inline void Init() ;

static inline ::GlobalNamespace::MarkOneMitts_Mitt* New_ctor() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_burst() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_burst() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_burstTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_burstTransform() ;

constexpr ::ArrayW<::GlobalNamespace::ParticleSystem_Burst> const& __cordl_internal_get_bursts() const;

constexpr ::ArrayW<::GlobalNamespace::ParticleSystem_Burst>& __cordl_internal_get_bursts() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_flame() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_flame() ;

constexpr ::GlobalNamespace::ParticleSystem_ForceOverLifetimeModule const& __cordl_internal_get_flameForce() const;

constexpr ::GlobalNamespace::ParticleSystem_ForceOverLifetimeModule& __cordl_internal_get_flameForce() ;

constexpr ::GlobalNamespace::ParticleSystem_MainModule const& __cordl_internal_get_flameMain() const;

constexpr ::GlobalNamespace::ParticleSystem_MainModule& __cordl_internal_get_flameMain() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_flameTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_flameTransform() ;

constexpr float_t const& __cordl_internal_get_lastTapStrength() const;

constexpr float_t& __cordl_internal_get_lastTapStrength() ;

constexpr ::UnityW<::GlobalNamespace::ThermalSourceVolume> const& __cordl_internal_get_thermalSource() const;

constexpr ::UnityW<::GlobalNamespace::ThermalSourceVolume>& __cordl_internal_get_thermalSource() ;

constexpr float_t const& __cordl_internal_get_timer() const;

constexpr float_t& __cordl_internal_get_timer() ;

constexpr void __cordl_internal_set_burst(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set_burstTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_bursts(::ArrayW<::GlobalNamespace::ParticleSystem_Burst>  value) ;

constexpr void __cordl_internal_set_flame(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set_flameForce(::GlobalNamespace::ParticleSystem_ForceOverLifetimeModule  value) ;

constexpr void __cordl_internal_set_flameMain(::GlobalNamespace::ParticleSystem_MainModule  value) ;

constexpr void __cordl_internal_set_flameTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_lastTapStrength(float_t  value) ;

constexpr void __cordl_internal_set_thermalSource(::UnityW<::GlobalNamespace::ThermalSourceVolume>  value) ;

constexpr void __cordl_internal_set_timer(float_t  value) ;

/// @brief Method .ctor, addr 0x57f18d0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MarkOneMitts_Mitt() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MarkOneMitts_Mitt", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
MarkOneMitts_Mitt(MarkOneMitts_Mitt && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MarkOneMitts_Mitt", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
MarkOneMitts_Mitt(MarkOneMitts_Mitt const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{190};

/// @brief Field burst, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___burst;

/// @brief Field flame, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___flame;

/// @brief Field thermalSource, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::ThermalSourceVolume>  ___thermalSource;

/// @brief Field lastTapStrength, offset: 0x28, size: 0x4, def value: None
 float_t  ___lastTapStrength;

/// @brief Field bursts, offset: 0x30, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::ParticleSystem_Burst>  ___bursts;

/// @brief Field burstTransform, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___burstTransform;

/// @brief Field flameTransform, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___flameTransform;

/// @brief Field timer, offset: 0x48, size: 0x4, def value: None
 float_t  ___timer;

/// @brief Field flameMain, offset: 0x50, size: 0x8, def value: None
 ::GlobalNamespace::ParticleSystem_MainModule  ___flameMain;

/// @brief Field flameForce, offset: 0x58, size: 0x8, def value: None
 ::GlobalNamespace::ParticleSystem_ForceOverLifetimeModule  ___flameForce;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MarkOneMitts_Mitt, ___burst) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MarkOneMitts_Mitt, ___flame) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MarkOneMitts_Mitt, ___thermalSource) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MarkOneMitts_Mitt, ___lastTapStrength) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MarkOneMitts_Mitt, ___bursts) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MarkOneMitts_Mitt, ___burstTransform) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MarkOneMitts_Mitt, ___flameTransform) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MarkOneMitts_Mitt, ___timer) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MarkOneMitts_Mitt, ___flameMain) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MarkOneMitts_Mitt, ___flameForce) == 0x58, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MarkOneMitts_Mitt) == 0x60, "Size mismatch!");

} // namespace end def GlobalNamespace
