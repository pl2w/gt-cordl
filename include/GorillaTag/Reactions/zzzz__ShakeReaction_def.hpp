#pragma once
// IWYU pragma private; include "GorillaTag/Reactions/ShakeReaction.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ShakeReaction)
namespace GlobalNamespace {
class ITickSystemPost;
}
namespace GlobalNamespace {
class SoundBankPlayer;
}
namespace UnityEngine {
class AnimationCurve;
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
namespace GorillaTag::Reactions {
class ShakeReaction;
}
// Write type traits
MARK_REF_T(::GorillaTag::Reactions::ShakeReaction*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Reactions::ShakeReaction*, "GorillaTag.Reactions", "ShakeReaction");
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector3
namespace GorillaTag::Reactions {
// Is value type: false
// CS Name: GorillaTag.Reactions.ShakeReaction
class CORDL_TYPE ShakeReaction : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
 __declspec(property(get=ITickSystemPost_get_PostTickRunning, put=ITickSystemPost_set_PostTickRunning)) bool  ITickSystemPost_PostTickRunning;

/// @brief Field <ITickSystemPost.PostTickRunning>k__BackingField, offset 0x84, size 0x1 
 __declspec(property(get=__cordl_internal_get__ITickSystemPost_PostTickRunning_k__BackingField, put=__cordl_internal_set__ITickSystemPost_PostTickRunning_k__BackingField)) bool  _ITickSystemPost_PostTickRunning_k__BackingField;

/// @brief Field currentIndex, offset 0xa0, size 0x4 
 __declspec(property(get=__cordl_internal_get_currentIndex, put=__cordl_internal_set_currentIndex)) int32_t  currentIndex;

/// @brief Field emissionCurve, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_emissionCurve, put=__cordl_internal_set_emissionCurve)) ::UnityEngine::AnimationCurve*  emissionCurve;

/// @brief Field hasLoopSound, offset 0xb0, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasLoopSound, put=__cordl_internal_set_hasLoopSound)) bool  hasLoopSound;

/// @brief Field hasParticleSystem, offset 0xb2, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasParticleSystem, put=__cordl_internal_set_hasParticleSystem)) bool  hasParticleSystem;

/// @brief Field hasShakeSound, offset 0xb1, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasShakeSound, put=__cordl_internal_set_hasShakeSound)) bool  hasShakeSound;

/// @brief Field lastShakeSoundTime, offset 0xa4, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastShakeSoundTime, put=__cordl_internal_set_lastShakeSoundTime)) float_t  lastShakeSoundTime;

/// @brief Field lastShakeTime, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get_lastShakeTime, put=__cordl_internal_set_lastShakeTime)) float_t  lastShakeTime;

/// @brief Field loopSoundAudioSource, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_loopSoundAudioSource, put=__cordl_internal_set_loopSoundAudioSource)) ::UnityW<::UnityEngine::AudioSource>  loopSoundAudioSource;

/// @brief Field loopSoundBaseVolume, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_loopSoundBaseVolume, put=__cordl_internal_set_loopSoundBaseVolume)) float_t  loopSoundBaseVolume;

/// @brief Field loopSoundFadeInCurve, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_loopSoundFadeInCurve, put=__cordl_internal_set_loopSoundFadeInCurve)) ::UnityEngine::AnimationCurve*  loopSoundFadeInCurve;

/// @brief Field loopSoundFadeInDuration, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_loopSoundFadeInDuration, put=__cordl_internal_set_loopSoundFadeInDuration)) float_t  loopSoundFadeInDuration;

/// @brief Field loopSoundFadeOutCurve, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_loopSoundFadeOutCurve, put=__cordl_internal_set_loopSoundFadeOutCurve)) ::UnityEngine::AnimationCurve*  loopSoundFadeOutCurve;

/// @brief Field loopSoundFadeOutDuration, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_loopSoundFadeOutDuration, put=__cordl_internal_set_loopSoundFadeOutDuration)) float_t  loopSoundFadeOutDuration;

/// @brief Field loopSoundSustainDuration, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_loopSoundSustainDuration, put=__cordl_internal_set_loopSoundSustainDuration)) float_t  loopSoundSustainDuration;

 __declspec(property(get=get_loopSoundTotalDuration)) float_t  loopSoundTotalDuration;

/// @brief Field maxEmissionRate, offset 0xac, size 0x4 
 __declspec(property(get=__cordl_internal_get_maxEmissionRate, put=__cordl_internal_set_maxEmissionRate)) float_t  maxEmissionRate;

/// @brief Field particleDuration, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_particleDuration, put=__cordl_internal_set_particleDuration)) float_t  particleDuration;

/// @brief Field particles, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_particles, put=__cordl_internal_set_particles)) ::UnityW<::UnityEngine::ParticleSystem>  particles;

/// @brief Field poopVelocity, offset 0xb4, size 0x4 
 __declspec(property(get=__cordl_internal_get_poopVelocity, put=__cordl_internal_set_poopVelocity)) float_t  poopVelocity;

/// @brief Field sampleHistoryPos, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_sampleHistoryPos, put=__cordl_internal_set_sampleHistoryPos)) ::ArrayW<::UnityEngine::Vector3>  sampleHistoryPos;

/// @brief Field sampleHistoryTime, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_sampleHistoryTime, put=__cordl_internal_set_sampleHistoryTime)) ::ArrayW<float_t>  sampleHistoryTime;

/// @brief Field sampleHistoryVel, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_sampleHistoryVel, put=__cordl_internal_set_sampleHistoryVel)) ::ArrayW<::UnityEngine::Vector3>  sampleHistoryVel;

/// @brief Field shakeSoundBankPlayer, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_shakeSoundBankPlayer, put=__cordl_internal_set_shakeSoundBankPlayer)) ::UnityW<::GlobalNamespace::SoundBankPlayer>  shakeSoundBankPlayer;

/// @brief Field shakeSoundCooldown, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_shakeSoundCooldown, put=__cordl_internal_set_shakeSoundCooldown)) float_t  shakeSoundCooldown;

/// @brief Field shakeXform, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_shakeXform, put=__cordl_internal_set_shakeXform)) ::UnityW<::UnityEngine::Transform>  shakeXform;

/// @brief Field velocityThreshold, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_velocityThreshold, put=__cordl_internal_set_velocityThreshold)) float_t  velocityThreshold;

/// @brief Convert operator to "::GlobalNamespace::ITickSystemPost"
constexpr operator  ::GlobalNamespace::ITickSystemPost*() noexcept;

/// @brief Method Awake, addr 0x5d41248, size 0x1b8, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method HandleApplicationQuitting, addr 0x5d416f8, size 0x6c, virtual false, abstract: false, final false
inline void HandleApplicationQuitting() ;

/// @brief Method ITickSystemPost.PostTick, addr 0x5d41764, size 0x438, virtual true, abstract: false, final true
inline void ITickSystemPost_PostTick() ;

/// [CompilerGenerated]
/// @brief Method ITickSystemPost.get_PostTickRunning, addr 0x5d41238, size 0x8, virtual true, abstract: false, final true
inline bool ITickSystemPost_get_PostTickRunning() ;

/// [CompilerGenerated]
/// @brief Method ITickSystemPost.set_PostTickRunning, addr 0x5d41240, size 0x8, virtual true, abstract: false, final true
inline void ITickSystemPost_set_PostTickRunning(bool  value) ;

static inline ::GorillaTag::Reactions::ShakeReaction* New_ctor() ;

/// @brief Method OnDisable, addr 0x5d4163c, size 0xbc, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5d41400, size 0x23c, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr bool const& __cordl_internal_get__ITickSystemPost_PostTickRunning_k__BackingField() const;

constexpr bool& __cordl_internal_get__ITickSystemPost_PostTickRunning_k__BackingField() ;

constexpr int32_t const& __cordl_internal_get_currentIndex() const;

constexpr int32_t& __cordl_internal_get_currentIndex() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_emissionCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_emissionCurve() ;

constexpr bool const& __cordl_internal_get_hasLoopSound() const;

constexpr bool& __cordl_internal_get_hasLoopSound() ;

constexpr bool const& __cordl_internal_get_hasParticleSystem() const;

constexpr bool& __cordl_internal_get_hasParticleSystem() ;

constexpr bool const& __cordl_internal_get_hasShakeSound() const;

constexpr bool& __cordl_internal_get_hasShakeSound() ;

constexpr float_t const& __cordl_internal_get_lastShakeSoundTime() const;

constexpr float_t& __cordl_internal_get_lastShakeSoundTime() ;

constexpr float_t const& __cordl_internal_get_lastShakeTime() const;

constexpr float_t& __cordl_internal_get_lastShakeTime() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get_loopSoundAudioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get_loopSoundAudioSource() ;

constexpr float_t const& __cordl_internal_get_loopSoundBaseVolume() const;

constexpr float_t& __cordl_internal_get_loopSoundBaseVolume() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_loopSoundFadeInCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_loopSoundFadeInCurve() ;

constexpr float_t const& __cordl_internal_get_loopSoundFadeInDuration() const;

constexpr float_t& __cordl_internal_get_loopSoundFadeInDuration() ;

constexpr ::UnityEngine::AnimationCurve* const& __cordl_internal_get_loopSoundFadeOutCurve() const;

constexpr ::UnityEngine::AnimationCurve*& __cordl_internal_get_loopSoundFadeOutCurve() ;

constexpr float_t const& __cordl_internal_get_loopSoundFadeOutDuration() const;

constexpr float_t& __cordl_internal_get_loopSoundFadeOutDuration() ;

constexpr float_t const& __cordl_internal_get_loopSoundSustainDuration() const;

constexpr float_t& __cordl_internal_get_loopSoundSustainDuration() ;

constexpr float_t const& __cordl_internal_get_maxEmissionRate() const;

constexpr float_t& __cordl_internal_get_maxEmissionRate() ;

constexpr float_t const& __cordl_internal_get_particleDuration() const;

constexpr float_t& __cordl_internal_get_particleDuration() ;

constexpr ::UnityW<::UnityEngine::ParticleSystem> const& __cordl_internal_get_particles() const;

constexpr ::UnityW<::UnityEngine::ParticleSystem>& __cordl_internal_get_particles() ;

constexpr float_t const& __cordl_internal_get_poopVelocity() const;

constexpr float_t& __cordl_internal_get_poopVelocity() ;

constexpr ::ArrayW<::UnityEngine::Vector3> const& __cordl_internal_get_sampleHistoryPos() const;

constexpr ::ArrayW<::UnityEngine::Vector3>& __cordl_internal_get_sampleHistoryPos() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get_sampleHistoryTime() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get_sampleHistoryTime() ;

constexpr ::ArrayW<::UnityEngine::Vector3> const& __cordl_internal_get_sampleHistoryVel() const;

constexpr ::ArrayW<::UnityEngine::Vector3>& __cordl_internal_get_sampleHistoryVel() ;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& __cordl_internal_get_shakeSoundBankPlayer() const;

constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& __cordl_internal_get_shakeSoundBankPlayer() ;

constexpr float_t const& __cordl_internal_get_shakeSoundCooldown() const;

constexpr float_t& __cordl_internal_get_shakeSoundCooldown() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_shakeXform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_shakeXform() ;

constexpr float_t const& __cordl_internal_get_velocityThreshold() const;

constexpr float_t& __cordl_internal_get_velocityThreshold() ;

constexpr void __cordl_internal_set__ITickSystemPost_PostTickRunning_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set_currentIndex(int32_t  value) ;

constexpr void __cordl_internal_set_emissionCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_hasLoopSound(bool  value) ;

constexpr void __cordl_internal_set_hasParticleSystem(bool  value) ;

constexpr void __cordl_internal_set_hasShakeSound(bool  value) ;

constexpr void __cordl_internal_set_lastShakeSoundTime(float_t  value) ;

constexpr void __cordl_internal_set_lastShakeTime(float_t  value) ;

constexpr void __cordl_internal_set_loopSoundAudioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set_loopSoundBaseVolume(float_t  value) ;

constexpr void __cordl_internal_set_loopSoundFadeInCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_loopSoundFadeInDuration(float_t  value) ;

constexpr void __cordl_internal_set_loopSoundFadeOutCurve(::UnityEngine::AnimationCurve*  value) ;

constexpr void __cordl_internal_set_loopSoundFadeOutDuration(float_t  value) ;

constexpr void __cordl_internal_set_loopSoundSustainDuration(float_t  value) ;

constexpr void __cordl_internal_set_maxEmissionRate(float_t  value) ;

constexpr void __cordl_internal_set_particleDuration(float_t  value) ;

constexpr void __cordl_internal_set_particles(::UnityW<::UnityEngine::ParticleSystem>  value) ;

constexpr void __cordl_internal_set_poopVelocity(float_t  value) ;

constexpr void __cordl_internal_set_sampleHistoryPos(::ArrayW<::UnityEngine::Vector3>  value) ;

constexpr void __cordl_internal_set_sampleHistoryTime(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set_sampleHistoryVel(::ArrayW<::UnityEngine::Vector3>  value) ;

constexpr void __cordl_internal_set_shakeSoundBankPlayer(::UnityW<::GlobalNamespace::SoundBankPlayer>  value) ;

constexpr void __cordl_internal_set_shakeSoundCooldown(float_t  value) ;

constexpr void __cordl_internal_set_shakeXform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_velocityThreshold(float_t  value) ;

/// @brief Method .ctor, addr 0x5d41b9c, size 0x34, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_loopSoundTotalDuration, addr 0x5d41224, size 0x14, virtual false, abstract: false, final false
inline float_t get_loopSoundTotalDuration() ;

/// @brief Convert to "::GlobalNamespace::ITickSystemPost"
constexpr ::GlobalNamespace::ITickSystemPost* i___GlobalNamespace__ITickSystemPost() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ShakeReaction() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ShakeReaction", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ShakeReaction(ShakeReaction && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ShakeReaction", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ShakeReaction(ShakeReaction const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4708};

/// @brief Field sampleHistorySize offset 0xffffffff size 0x4
static constexpr int32_t  sampleHistorySize{static_cast<int32_t>(0x100)};

/// [SerializeField]
/// @brief Field shakeXform, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___shakeXform;

/// [SerializeField]
/// @brief Field velocityThreshold, offset: 0x28, size: 0x4, def value: None
 float_t  ___velocityThreshold;

/// [SerializeField]
/// @brief Field shakeSoundBankPlayer, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::GlobalNamespace::SoundBankPlayer>  ___shakeSoundBankPlayer;

/// [SerializeField]
/// @brief Field shakeSoundCooldown, offset: 0x38, size: 0x4, def value: None
 float_t  ___shakeSoundCooldown;

/// [SerializeField]
/// @brief Field loopSoundAudioSource, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ___loopSoundAudioSource;

/// [SerializeField]
/// @brief Field loopSoundBaseVolume, offset: 0x48, size: 0x4, def value: None
 float_t  ___loopSoundBaseVolume;

/// [SerializeField]
/// @brief Field loopSoundSustainDuration, offset: 0x4c, size: 0x4, def value: None
 float_t  ___loopSoundSustainDuration;

/// [SerializeField]
/// @brief Field loopSoundFadeInDuration, offset: 0x50, size: 0x4, def value: None
 float_t  ___loopSoundFadeInDuration;

/// [SerializeField]
/// @brief Field loopSoundFadeInCurve, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___loopSoundFadeInCurve;

/// [SerializeField]
/// @brief Field loopSoundFadeOutDuration, offset: 0x60, size: 0x4, def value: None
 float_t  ___loopSoundFadeOutDuration;

/// [SerializeField]
/// @brief Field loopSoundFadeOutCurve, offset: 0x68, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___loopSoundFadeOutCurve;

/// [SerializeField]
/// @brief Field particles, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ParticleSystem>  ___particles;

/// [SerializeField]
/// @brief Field emissionCurve, offset: 0x78, size: 0x8, def value: None
 ::UnityEngine::AnimationCurve*  ___emissionCurve;

/// [SerializeField]
/// @brief Field particleDuration, offset: 0x80, size: 0x4, def value: None
 float_t  ___particleDuration;

/// [CompilerGenerated]
/// @brief Field <ITickSystemPost.PostTickRunning>k__BackingField, offset: 0x84, size: 0x1, def value: None
 bool  ____ITickSystemPost_PostTickRunning_k__BackingField;

/// @brief Field sampleHistoryTime, offset: 0x88, size: 0x8, def value: None
 ::ArrayW<float_t>  ___sampleHistoryTime;

/// @brief Field sampleHistoryPos, offset: 0x90, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3>  ___sampleHistoryPos;

/// @brief Field sampleHistoryVel, offset: 0x98, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector3>  ___sampleHistoryVel;

/// @brief Field currentIndex, offset: 0xa0, size: 0x4, def value: None
 int32_t  ___currentIndex;

/// @brief Field lastShakeSoundTime, offset: 0xa4, size: 0x4, def value: None
 float_t  ___lastShakeSoundTime;

/// @brief Field lastShakeTime, offset: 0xa8, size: 0x4, def value: None
 float_t  ___lastShakeTime;

/// @brief Field maxEmissionRate, offset: 0xac, size: 0x4, def value: None
 float_t  ___maxEmissionRate;

/// @brief Field hasLoopSound, offset: 0xb0, size: 0x1, def value: None
 bool  ___hasLoopSound;

/// @brief Field hasShakeSound, offset: 0xb1, size: 0x1, def value: None
 bool  ___hasShakeSound;

/// @brief Field hasParticleSystem, offset: 0xb2, size: 0x1, def value: None
 bool  ___hasParticleSystem;

/// [DebugReadout]
/// @brief Field poopVelocity, offset: 0xb4, size: 0x4, def value: None
 float_t  ___poopVelocity;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Reactions::ShakeReaction, ___shakeXform) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Reactions::ShakeReaction, ___velocityThreshold) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Reactions::ShakeReaction, ___shakeSoundBankPlayer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Reactions::ShakeReaction, ___shakeSoundCooldown) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Reactions::ShakeReaction, ___loopSoundAudioSource) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Reactions::ShakeReaction, ___loopSoundBaseVolume) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Reactions::ShakeReaction, ___loopSoundSustainDuration) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Reactions::ShakeReaction, ___loopSoundFadeInDuration) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Reactions::ShakeReaction, ___loopSoundFadeInCurve) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Reactions::ShakeReaction, ___loopSoundFadeOutDuration) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Reactions::ShakeReaction, ___loopSoundFadeOutCurve) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Reactions::ShakeReaction, ___particles) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Reactions::ShakeReaction, ___emissionCurve) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Reactions::ShakeReaction, ___particleDuration) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Reactions::ShakeReaction, ____ITickSystemPost_PostTickRunning_k__BackingField) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Reactions::ShakeReaction, ___sampleHistoryTime) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Reactions::ShakeReaction, ___sampleHistoryPos) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Reactions::ShakeReaction, ___sampleHistoryVel) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Reactions::ShakeReaction, ___currentIndex) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Reactions::ShakeReaction, ___lastShakeSoundTime) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Reactions::ShakeReaction, ___lastShakeTime) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Reactions::ShakeReaction, ___maxEmissionRate) == 0xac, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Reactions::ShakeReaction, ___hasLoopSound) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Reactions::ShakeReaction, ___hasShakeSound) == 0xb1, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Reactions::ShakeReaction, ___hasParticleSystem) == 0xb2, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Reactions::ShakeReaction, ___poopVelocity) == 0xb4, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Reactions::ShakeReaction) == 0xb8, "Size mismatch!");

} // namespace end def GorillaTag::Reactions
