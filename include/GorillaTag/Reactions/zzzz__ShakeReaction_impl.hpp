#pragma once
// IWYU pragma private; include "GorillaTag/Reactions/ShakeReaction.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GorillaTag/Reactions/zzzz__ShakeReaction_def.hpp"
#include "GlobalNamespace/zzzz__ITickSystemPost_def.hpp"
#include "GlobalNamespace/zzzz__SoundBankPlayer_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
#include "UnityEngine/zzzz__ParticleSystem_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GorillaTag::Reactions::ShakeReaction.get_loopSoundTotalDuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GorillaTag::Reactions::ShakeReaction::*)()>(&::GorillaTag::Reactions::ShakeReaction::get_loopSoundTotalDuration)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5d41224;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Reactions::ShakeReaction*>(),
                        {"get_loopSoundTotalDuration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Reactions::ShakeReaction.ITickSystemPost_get_PostTickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GorillaTag::Reactions::ShakeReaction::*)()>(&::GorillaTag::Reactions::ShakeReaction::ITickSystemPost_get_PostTickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d41238;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Reactions::ShakeReaction*>(),
                        {"ITickSystemPost.get_PostTickRunning", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Reactions::ShakeReaction.ITickSystemPost_set_PostTickRunning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Reactions::ShakeReaction::*)(bool)>(&::GorillaTag::Reactions::ShakeReaction::ITickSystemPost_set_PostTickRunning)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d41240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Reactions::ShakeReaction*>(),
                        {"ITickSystemPost.set_PostTickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Reactions::ShakeReaction.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Reactions::ShakeReaction::*)()>(&::GorillaTag::Reactions::ShakeReaction::Awake)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0x5d41248;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Reactions::ShakeReaction*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Reactions::ShakeReaction.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Reactions::ShakeReaction::*)()>(&::GorillaTag::Reactions::ShakeReaction::OnEnable)> {
  constexpr static std::size_t size = 0x23c;
  constexpr static std::size_t addrs = 0x5d41400;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Reactions::ShakeReaction*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Reactions::ShakeReaction.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Reactions::ShakeReaction::*)()>(&::GorillaTag::Reactions::ShakeReaction::OnDisable)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5d4163c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Reactions::ShakeReaction*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Reactions::ShakeReaction.HandleApplicationQuitting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Reactions::ShakeReaction::*)()>(&::GorillaTag::Reactions::ShakeReaction::HandleApplicationQuitting)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5d416f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Reactions::ShakeReaction*>(),
                        {"HandleApplicationQuitting", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Reactions::ShakeReaction.ITickSystemPost_PostTick
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Reactions::ShakeReaction::*)()>(&::GorillaTag::Reactions::ShakeReaction::ITickSystemPost_PostTick)> {
  constexpr static std::size_t size = 0x438;
  constexpr static std::size_t addrs = 0x5d41764;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Reactions::ShakeReaction*>(),
                        {"ITickSystemPost.PostTick", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GorillaTag::Reactions::ShakeReaction._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Reactions::ShakeReaction::*)()>(&::GorillaTag::Reactions::ShakeReaction::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5d41b9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Reactions::ShakeReaction*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GorillaTag::Reactions::ShakeReaction::__cordl_internal_get_shakeXform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shakeXform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GorillaTag::Reactions::ShakeReaction::__cordl_internal_get_shakeXform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shakeXform;
}
constexpr void GorillaTag::Reactions::ShakeReaction::__cordl_internal_set_shakeXform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shakeXform = value;
}
constexpr float_t& GorillaTag::Reactions::ShakeReaction::__cordl_internal_get_velocityThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocityThreshold;
}
constexpr float_t const& GorillaTag::Reactions::ShakeReaction::__cordl_internal_get_velocityThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocityThreshold;
}
constexpr void GorillaTag::Reactions::ShakeReaction::__cordl_internal_set_velocityThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___velocityThreshold = value;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer>& GorillaTag::Reactions::ShakeReaction::__cordl_internal_get_shakeSoundBankPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shakeSoundBankPlayer;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankPlayer> const& GorillaTag::Reactions::ShakeReaction::__cordl_internal_get_shakeSoundBankPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shakeSoundBankPlayer;
}
constexpr void GorillaTag::Reactions::ShakeReaction::__cordl_internal_set_shakeSoundBankPlayer(::UnityW<::GlobalNamespace::SoundBankPlayer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shakeSoundBankPlayer = value;
}
constexpr float_t& GorillaTag::Reactions::ShakeReaction::__cordl_internal_get_shakeSoundCooldown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shakeSoundCooldown;
}
constexpr float_t const& GorillaTag::Reactions::ShakeReaction::__cordl_internal_get_shakeSoundCooldown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shakeSoundCooldown;
}
constexpr void GorillaTag::Reactions::ShakeReaction::__cordl_internal_set_shakeSoundCooldown(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shakeSoundCooldown = value;
}
constexpr ::UnityW<::UnityEngine::AudioSource>& GorillaTag::Reactions::ShakeReaction::__cordl_internal_get_loopSoundAudioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loopSoundAudioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GorillaTag::Reactions::ShakeReaction::__cordl_internal_get_loopSoundAudioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loopSoundAudioSource;
}
constexpr void GorillaTag::Reactions::ShakeReaction::__cordl_internal_set_loopSoundAudioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loopSoundAudioSource = value;
}
constexpr float_t& GorillaTag::Reactions::ShakeReaction::__cordl_internal_get_loopSoundBaseVolume()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loopSoundBaseVolume;
}
constexpr float_t const& GorillaTag::Reactions::ShakeReaction::__cordl_internal_get_loopSoundBaseVolume() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loopSoundBaseVolume;
}
constexpr void GorillaTag::Reactions::ShakeReaction::__cordl_internal_set_loopSoundBaseVolume(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loopSoundBaseVolume = value;
}
constexpr float_t& GorillaTag::Reactions::ShakeReaction::__cordl_internal_get_loopSoundSustainDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loopSoundSustainDuration;
}
constexpr float_t const& GorillaTag::Reactions::ShakeReaction::__cordl_internal_get_loopSoundSustainDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loopSoundSustainDuration;
}
constexpr void GorillaTag::Reactions::ShakeReaction::__cordl_internal_set_loopSoundSustainDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loopSoundSustainDuration = value;
}
constexpr float_t& GorillaTag::Reactions::ShakeReaction::__cordl_internal_get_loopSoundFadeInDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loopSoundFadeInDuration;
}
constexpr float_t const& GorillaTag::Reactions::ShakeReaction::__cordl_internal_get_loopSoundFadeInDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loopSoundFadeInDuration;
}
constexpr void GorillaTag::Reactions::ShakeReaction::__cordl_internal_set_loopSoundFadeInDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loopSoundFadeInDuration = value;
}
constexpr ::UnityEngine::AnimationCurve*& GorillaTag::Reactions::ShakeReaction::__cordl_internal_get_loopSoundFadeInCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loopSoundFadeInCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GorillaTag::Reactions::ShakeReaction::__cordl_internal_get_loopSoundFadeInCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loopSoundFadeInCurve;
}
constexpr void GorillaTag::Reactions::ShakeReaction::__cordl_internal_set_loopSoundFadeInCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loopSoundFadeInCurve = value;
}
constexpr float_t& GorillaTag::Reactions::ShakeReaction::__cordl_internal_get_loopSoundFadeOutDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loopSoundFadeOutDuration;
}
constexpr float_t const& GorillaTag::Reactions::ShakeReaction::__cordl_internal_get_loopSoundFadeOutDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loopSoundFadeOutDuration;
}
constexpr void GorillaTag::Reactions::ShakeReaction::__cordl_internal_set_loopSoundFadeOutDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loopSoundFadeOutDuration = value;
}
constexpr ::UnityEngine::AnimationCurve*& GorillaTag::Reactions::ShakeReaction::__cordl_internal_get_loopSoundFadeOutCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loopSoundFadeOutCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GorillaTag::Reactions::ShakeReaction::__cordl_internal_get_loopSoundFadeOutCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___loopSoundFadeOutCurve;
}
constexpr void GorillaTag::Reactions::ShakeReaction::__cordl_internal_set_loopSoundFadeOutCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___loopSoundFadeOutCurve = value;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem>& GorillaTag::Reactions::ShakeReaction::__cordl_internal_get_particles()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___particles;
}
constexpr ::UnityW<::UnityEngine::ParticleSystem> const& GorillaTag::Reactions::ShakeReaction::__cordl_internal_get_particles() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___particles;
}
constexpr void GorillaTag::Reactions::ShakeReaction::__cordl_internal_set_particles(::UnityW<::UnityEngine::ParticleSystem>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___particles = value;
}
constexpr ::UnityEngine::AnimationCurve*& GorillaTag::Reactions::ShakeReaction::__cordl_internal_get_emissionCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___emissionCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GorillaTag::Reactions::ShakeReaction::__cordl_internal_get_emissionCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___emissionCurve;
}
constexpr void GorillaTag::Reactions::ShakeReaction::__cordl_internal_set_emissionCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___emissionCurve = value;
}
constexpr float_t& GorillaTag::Reactions::ShakeReaction::__cordl_internal_get_particleDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___particleDuration;
}
constexpr float_t const& GorillaTag::Reactions::ShakeReaction::__cordl_internal_get_particleDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___particleDuration;
}
constexpr void GorillaTag::Reactions::ShakeReaction::__cordl_internal_set_particleDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___particleDuration = value;
}
constexpr bool& GorillaTag::Reactions::ShakeReaction::__cordl_internal_get__ITickSystemPost_PostTickRunning_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ITickSystemPost_PostTickRunning_k__BackingField;
}
constexpr bool const& GorillaTag::Reactions::ShakeReaction::__cordl_internal_get__ITickSystemPost_PostTickRunning_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ITickSystemPost_PostTickRunning_k__BackingField;
}
constexpr void GorillaTag::Reactions::ShakeReaction::__cordl_internal_set__ITickSystemPost_PostTickRunning_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ITickSystemPost_PostTickRunning_k__BackingField = value;
}
constexpr ::ArrayW<float_t>& GorillaTag::Reactions::ShakeReaction::__cordl_internal_get_sampleHistoryTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sampleHistoryTime;
}
constexpr ::ArrayW<float_t> const& GorillaTag::Reactions::ShakeReaction::__cordl_internal_get_sampleHistoryTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sampleHistoryTime;
}
constexpr void GorillaTag::Reactions::ShakeReaction::__cordl_internal_set_sampleHistoryTime(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sampleHistoryTime = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3>& GorillaTag::Reactions::ShakeReaction::__cordl_internal_get_sampleHistoryPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sampleHistoryPos;
}
constexpr ::ArrayW<::UnityEngine::Vector3> const& GorillaTag::Reactions::ShakeReaction::__cordl_internal_get_sampleHistoryPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sampleHistoryPos;
}
constexpr void GorillaTag::Reactions::ShakeReaction::__cordl_internal_set_sampleHistoryPos(::ArrayW<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sampleHistoryPos = value;
}
constexpr ::ArrayW<::UnityEngine::Vector3>& GorillaTag::Reactions::ShakeReaction::__cordl_internal_get_sampleHistoryVel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sampleHistoryVel;
}
constexpr ::ArrayW<::UnityEngine::Vector3> const& GorillaTag::Reactions::ShakeReaction::__cordl_internal_get_sampleHistoryVel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sampleHistoryVel;
}
constexpr void GorillaTag::Reactions::ShakeReaction::__cordl_internal_set_sampleHistoryVel(::ArrayW<::UnityEngine::Vector3>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sampleHistoryVel = value;
}
constexpr int32_t& GorillaTag::Reactions::ShakeReaction::__cordl_internal_get_currentIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentIndex;
}
constexpr int32_t const& GorillaTag::Reactions::ShakeReaction::__cordl_internal_get_currentIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___currentIndex;
}
constexpr void GorillaTag::Reactions::ShakeReaction::__cordl_internal_set_currentIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___currentIndex = value;
}
constexpr float_t& GorillaTag::Reactions::ShakeReaction::__cordl_internal_get_lastShakeSoundTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastShakeSoundTime;
}
constexpr float_t const& GorillaTag::Reactions::ShakeReaction::__cordl_internal_get_lastShakeSoundTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastShakeSoundTime;
}
constexpr void GorillaTag::Reactions::ShakeReaction::__cordl_internal_set_lastShakeSoundTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastShakeSoundTime = value;
}
constexpr float_t& GorillaTag::Reactions::ShakeReaction::__cordl_internal_get_lastShakeTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastShakeTime;
}
constexpr float_t const& GorillaTag::Reactions::ShakeReaction::__cordl_internal_get_lastShakeTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastShakeTime;
}
constexpr void GorillaTag::Reactions::ShakeReaction::__cordl_internal_set_lastShakeTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastShakeTime = value;
}
constexpr float_t& GorillaTag::Reactions::ShakeReaction::__cordl_internal_get_maxEmissionRate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxEmissionRate;
}
constexpr float_t const& GorillaTag::Reactions::ShakeReaction::__cordl_internal_get_maxEmissionRate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxEmissionRate;
}
constexpr void GorillaTag::Reactions::ShakeReaction::__cordl_internal_set_maxEmissionRate(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxEmissionRate = value;
}
constexpr bool& GorillaTag::Reactions::ShakeReaction::__cordl_internal_get_hasLoopSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasLoopSound;
}
constexpr bool const& GorillaTag::Reactions::ShakeReaction::__cordl_internal_get_hasLoopSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasLoopSound;
}
constexpr void GorillaTag::Reactions::ShakeReaction::__cordl_internal_set_hasLoopSound(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasLoopSound = value;
}
constexpr bool& GorillaTag::Reactions::ShakeReaction::__cordl_internal_get_hasShakeSound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasShakeSound;
}
constexpr bool const& GorillaTag::Reactions::ShakeReaction::__cordl_internal_get_hasShakeSound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasShakeSound;
}
constexpr void GorillaTag::Reactions::ShakeReaction::__cordl_internal_set_hasShakeSound(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasShakeSound = value;
}
constexpr bool& GorillaTag::Reactions::ShakeReaction::__cordl_internal_get_hasParticleSystem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasParticleSystem;
}
constexpr bool const& GorillaTag::Reactions::ShakeReaction::__cordl_internal_get_hasParticleSystem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasParticleSystem;
}
constexpr void GorillaTag::Reactions::ShakeReaction::__cordl_internal_set_hasParticleSystem(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasParticleSystem = value;
}
constexpr float_t& GorillaTag::Reactions::ShakeReaction::__cordl_internal_get_poopVelocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___poopVelocity;
}
constexpr float_t const& GorillaTag::Reactions::ShakeReaction::__cordl_internal_get_poopVelocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___poopVelocity;
}
constexpr void GorillaTag::Reactions::ShakeReaction::__cordl_internal_set_poopVelocity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___poopVelocity = value;
}
inline float_t GorillaTag::Reactions::ShakeReaction::get_loopSoundTotalDuration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Reactions::ShakeReaction*>(),
                        {"get_loopSoundTotalDuration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline bool GorillaTag::Reactions::ShakeReaction::ITickSystemPost_get_PostTickRunning()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Reactions::ShakeReaction*>(),
                        {"ITickSystemPost.get_PostTickRunning", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GorillaTag::Reactions::ShakeReaction::ITickSystemPost_set_PostTickRunning(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Reactions::ShakeReaction*>(),
                        {"ITickSystemPost.set_PostTickRunning", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GorillaTag::Reactions::ShakeReaction::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Reactions::ShakeReaction*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Reactions::ShakeReaction::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Reactions::ShakeReaction*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Reactions::ShakeReaction::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Reactions::ShakeReaction*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Reactions::ShakeReaction::HandleApplicationQuitting()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Reactions::ShakeReaction*>(),
                        {"HandleApplicationQuitting", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Reactions::ShakeReaction::ITickSystemPost_PostTick()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Reactions::ShakeReaction*>(),
                        {"ITickSystemPost.PostTick", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GorillaTag::Reactions::ShakeReaction::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GorillaTag::Reactions::ShakeReaction*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GorillaTag::Reactions::ShakeReaction* GorillaTag::Reactions::ShakeReaction::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GorillaTag::Reactions::ShakeReaction*>());
}
/// @brief Convert operator to "::GlobalNamespace::ITickSystemPost"
constexpr  GorillaTag::Reactions::ShakeReaction::operator ::GlobalNamespace::ITickSystemPost*() noexcept {
return static_cast<::GlobalNamespace::ITickSystemPost*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ITickSystemPost"
constexpr ::GlobalNamespace::ITickSystemPost* GorillaTag::Reactions::ShakeReaction::i___GlobalNamespace__ITickSystemPost() noexcept {
return static_cast<::GlobalNamespace::ITickSystemPost*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GorillaTag::Reactions::ShakeReaction::ShakeReaction()   {
}
