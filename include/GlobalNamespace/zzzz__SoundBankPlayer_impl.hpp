#pragma once
// IWYU pragma private; include "GlobalNamespace/SoundBankPlayer.hpp"
#include "GlobalNamespace/zzzz__SoundBankPlayer_PlaylistEntry_impl.hpp"
#include "UnityEngine/zzzz__AudioRolloffMode_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__SoundBankPlayer_def.hpp"
#include "GlobalNamespace/zzzz__SoundBankPlayer_PlaylistEntry_def.hpp"
#include "GlobalNamespace/zzzz__SoundBankSO_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/Audio/zzzz__AudioMixerGroup_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__AudioSource_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SoundBankPlayer.get_isPlaying
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::SoundBankPlayer::*)()>(&::GlobalNamespace::SoundBankPlayer::get_isPlaying)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5b0ebbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundBankPlayer*>(),
                        {"get_isPlaying", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoundBankPlayer.get_NormalizedTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::SoundBankPlayer::*)()>(&::GlobalNamespace::SoundBankPlayer::get_NormalizedTime)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5b0ebe0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundBankPlayer*>(),
                        {"get_NormalizedTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoundBankPlayer.get_CurrentTime
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::SoundBankPlayer::*)()>(&::GlobalNamespace::SoundBankPlayer::get_CurrentTime)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5b0ec34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundBankPlayer*>(),
                        {"get_CurrentTime", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoundBankPlayer.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SoundBankPlayer::*)()>(&::GlobalNamespace::SoundBankPlayer::Awake)> {
  constexpr static std::size_t size = 0x464;
  constexpr static std::size_t addrs = 0x5b0ec54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundBankPlayer*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoundBankPlayer.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SoundBankPlayer::*)()>(&::GlobalNamespace::SoundBankPlayer::OnEnable)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5b0f0b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundBankPlayer*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoundBankPlayer.Play
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SoundBankPlayer::*)()>(&::GlobalNamespace::SoundBankPlayer::Play)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5b0f0d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundBankPlayer*>(),
                        {"Play", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoundBankPlayer.Play
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SoundBankPlayer::*)(::System::Nullable_1<float_t>, ::System::Nullable_1<float_t>)>(&::GlobalNamespace::SoundBankPlayer::Play)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x5b0f0dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundBankPlayer*>(),
                        {"Play", {}, {::i2c::type_of<::System::Nullable_1<float_t>>(), ::i2c::type_of<::System::Nullable_1<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoundBankPlayer.RestartSequence
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SoundBankPlayer::*)()>(&::GlobalNamespace::SoundBankPlayer::RestartSequence)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5b0f3d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundBankPlayer*>(),
                        {"RestartSequence", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SoundBankPlayer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SoundBankPlayer::*)()>(&::GlobalNamespace::SoundBankPlayer::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5b0f3dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundBankPlayer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::AudioSource>& GlobalNamespace::SoundBankPlayer::__cordl_internal_get_audioSource()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr ::UnityW<::UnityEngine::AudioSource> const& GlobalNamespace::SoundBankPlayer::__cordl_internal_get_audioSource() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___audioSource;
}
constexpr void GlobalNamespace::SoundBankPlayer::__cordl_internal_set_audioSource(::UnityW<::UnityEngine::AudioSource>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___audioSource = value;
}
constexpr bool& GlobalNamespace::SoundBankPlayer::__cordl_internal_get_playOnEnable()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playOnEnable;
}
constexpr bool const& GlobalNamespace::SoundBankPlayer::__cordl_internal_get_playOnEnable() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playOnEnable;
}
constexpr void GlobalNamespace::SoundBankPlayer::__cordl_internal_set_playOnEnable(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playOnEnable = value;
}
constexpr bool& GlobalNamespace::SoundBankPlayer::__cordl_internal_get_shuffleOrder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shuffleOrder;
}
constexpr bool const& GlobalNamespace::SoundBankPlayer::__cordl_internal_get_shuffleOrder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shuffleOrder;
}
constexpr void GlobalNamespace::SoundBankPlayer::__cordl_internal_set_shuffleOrder(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shuffleOrder = value;
}
constexpr bool& GlobalNamespace::SoundBankPlayer::__cordl_internal_get_missingSoundsAreOk()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___missingSoundsAreOk;
}
constexpr bool const& GlobalNamespace::SoundBankPlayer::__cordl_internal_get_missingSoundsAreOk() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___missingSoundsAreOk;
}
constexpr void GlobalNamespace::SoundBankPlayer::__cordl_internal_set_missingSoundsAreOk(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___missingSoundsAreOk = value;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankSO>& GlobalNamespace::SoundBankPlayer::__cordl_internal_get_soundBank()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soundBank;
}
constexpr ::UnityW<::GlobalNamespace::SoundBankSO> const& GlobalNamespace::SoundBankPlayer::__cordl_internal_get_soundBank() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___soundBank;
}
constexpr void GlobalNamespace::SoundBankPlayer::__cordl_internal_set_soundBank(::UnityW<::GlobalNamespace::SoundBankSO>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___soundBank = value;
}
constexpr ::UnityW<::UnityEngine::Audio::AudioMixerGroup>& GlobalNamespace::SoundBankPlayer::__cordl_internal_get_outputAudioMixerGroup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outputAudioMixerGroup;
}
constexpr ::UnityW<::UnityEngine::Audio::AudioMixerGroup> const& GlobalNamespace::SoundBankPlayer::__cordl_internal_get_outputAudioMixerGroup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outputAudioMixerGroup;
}
constexpr void GlobalNamespace::SoundBankPlayer::__cordl_internal_set_outputAudioMixerGroup(::UnityW<::UnityEngine::Audio::AudioMixerGroup>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___outputAudioMixerGroup = value;
}
constexpr bool& GlobalNamespace::SoundBankPlayer::__cordl_internal_get_spatialize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spatialize;
}
constexpr bool const& GlobalNamespace::SoundBankPlayer::__cordl_internal_get_spatialize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spatialize;
}
constexpr void GlobalNamespace::SoundBankPlayer::__cordl_internal_set_spatialize(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spatialize = value;
}
constexpr bool& GlobalNamespace::SoundBankPlayer::__cordl_internal_get_spatializePostEffects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spatializePostEffects;
}
constexpr bool const& GlobalNamespace::SoundBankPlayer::__cordl_internal_get_spatializePostEffects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spatializePostEffects;
}
constexpr void GlobalNamespace::SoundBankPlayer::__cordl_internal_set_spatializePostEffects(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spatializePostEffects = value;
}
constexpr bool& GlobalNamespace::SoundBankPlayer::__cordl_internal_get_bypassEffects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bypassEffects;
}
constexpr bool const& GlobalNamespace::SoundBankPlayer::__cordl_internal_get_bypassEffects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bypassEffects;
}
constexpr void GlobalNamespace::SoundBankPlayer::__cordl_internal_set_bypassEffects(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bypassEffects = value;
}
constexpr bool& GlobalNamespace::SoundBankPlayer::__cordl_internal_get_bypassListenerEffects()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bypassListenerEffects;
}
constexpr bool const& GlobalNamespace::SoundBankPlayer::__cordl_internal_get_bypassListenerEffects() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bypassListenerEffects;
}
constexpr void GlobalNamespace::SoundBankPlayer::__cordl_internal_set_bypassListenerEffects(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bypassListenerEffects = value;
}
constexpr bool& GlobalNamespace::SoundBankPlayer::__cordl_internal_get_bypassReverbZones()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bypassReverbZones;
}
constexpr bool const& GlobalNamespace::SoundBankPlayer::__cordl_internal_get_bypassReverbZones() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___bypassReverbZones;
}
constexpr void GlobalNamespace::SoundBankPlayer::__cordl_internal_set_bypassReverbZones(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___bypassReverbZones = value;
}
constexpr int32_t& GlobalNamespace::SoundBankPlayer::__cordl_internal_get_priority()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___priority;
}
constexpr int32_t const& GlobalNamespace::SoundBankPlayer::__cordl_internal_get_priority() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___priority;
}
constexpr void GlobalNamespace::SoundBankPlayer::__cordl_internal_set_priority(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___priority = value;
}
constexpr float_t& GlobalNamespace::SoundBankPlayer::__cordl_internal_get_spatialBlend()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spatialBlend;
}
constexpr float_t const& GlobalNamespace::SoundBankPlayer::__cordl_internal_get_spatialBlend() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spatialBlend;
}
constexpr void GlobalNamespace::SoundBankPlayer::__cordl_internal_set_spatialBlend(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spatialBlend = value;
}
constexpr float_t& GlobalNamespace::SoundBankPlayer::__cordl_internal_get_reverbZoneMix()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reverbZoneMix;
}
constexpr float_t const& GlobalNamespace::SoundBankPlayer::__cordl_internal_get_reverbZoneMix() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___reverbZoneMix;
}
constexpr void GlobalNamespace::SoundBankPlayer::__cordl_internal_set_reverbZoneMix(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___reverbZoneMix = value;
}
constexpr float_t& GlobalNamespace::SoundBankPlayer::__cordl_internal_get_dopplerLevel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dopplerLevel;
}
constexpr float_t const& GlobalNamespace::SoundBankPlayer::__cordl_internal_get_dopplerLevel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dopplerLevel;
}
constexpr void GlobalNamespace::SoundBankPlayer::__cordl_internal_set_dopplerLevel(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dopplerLevel = value;
}
constexpr float_t& GlobalNamespace::SoundBankPlayer::__cordl_internal_get_spread()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spread;
}
constexpr float_t const& GlobalNamespace::SoundBankPlayer::__cordl_internal_get_spread() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___spread;
}
constexpr void GlobalNamespace::SoundBankPlayer::__cordl_internal_set_spread(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___spread = value;
}
constexpr ::UnityEngine::AudioRolloffMode& GlobalNamespace::SoundBankPlayer::__cordl_internal_get_rolloffMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rolloffMode;
}
constexpr ::UnityEngine::AudioRolloffMode const& GlobalNamespace::SoundBankPlayer::__cordl_internal_get_rolloffMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rolloffMode;
}
constexpr void GlobalNamespace::SoundBankPlayer::__cordl_internal_set_rolloffMode(::UnityEngine::AudioRolloffMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rolloffMode = value;
}
constexpr float_t& GlobalNamespace::SoundBankPlayer::__cordl_internal_get_minDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minDistance;
}
constexpr float_t const& GlobalNamespace::SoundBankPlayer::__cordl_internal_get_minDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___minDistance;
}
constexpr void GlobalNamespace::SoundBankPlayer::__cordl_internal_set_minDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___minDistance = value;
}
constexpr float_t& GlobalNamespace::SoundBankPlayer::__cordl_internal_get_maxDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxDistance;
}
constexpr float_t const& GlobalNamespace::SoundBankPlayer::__cordl_internal_get_maxDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxDistance;
}
constexpr void GlobalNamespace::SoundBankPlayer::__cordl_internal_set_maxDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxDistance = value;
}
constexpr ::UnityEngine::AnimationCurve*& GlobalNamespace::SoundBankPlayer::__cordl_internal_get_customRolloffCurve()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customRolloffCurve;
}
constexpr ::UnityEngine::AnimationCurve* const& GlobalNamespace::SoundBankPlayer::__cordl_internal_get_customRolloffCurve() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___customRolloffCurve;
}
constexpr void GlobalNamespace::SoundBankPlayer::__cordl_internal_set_customRolloffCurve(::UnityEngine::AnimationCurve*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___customRolloffCurve = value;
}
constexpr int32_t& GlobalNamespace::SoundBankPlayer::__cordl_internal_get_nextIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextIndex;
}
constexpr int32_t const& GlobalNamespace::SoundBankPlayer::__cordl_internal_get_nextIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___nextIndex;
}
constexpr void GlobalNamespace::SoundBankPlayer::__cordl_internal_set_nextIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___nextIndex = value;
}
constexpr float_t& GlobalNamespace::SoundBankPlayer::__cordl_internal_get_playStartTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playStartTime;
}
constexpr float_t const& GlobalNamespace::SoundBankPlayer::__cordl_internal_get_playStartTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playStartTime;
}
constexpr void GlobalNamespace::SoundBankPlayer::__cordl_internal_set_playStartTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playStartTime = value;
}
constexpr float_t& GlobalNamespace::SoundBankPlayer::__cordl_internal_get_playEndTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playEndTime;
}
constexpr float_t const& GlobalNamespace::SoundBankPlayer::__cordl_internal_get_playEndTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playEndTime;
}
constexpr void GlobalNamespace::SoundBankPlayer::__cordl_internal_set_playEndTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playEndTime = value;
}
constexpr float_t& GlobalNamespace::SoundBankPlayer::__cordl_internal_get_clipDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clipDuration;
}
constexpr float_t const& GlobalNamespace::SoundBankPlayer::__cordl_internal_get_clipDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clipDuration;
}
constexpr void GlobalNamespace::SoundBankPlayer::__cordl_internal_set_clipDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clipDuration = value;
}
constexpr ::ArrayW<::GlobalNamespace::SoundBankPlayer_PlaylistEntry>& GlobalNamespace::SoundBankPlayer::__cordl_internal_get_playlist()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playlist;
}
constexpr ::ArrayW<::GlobalNamespace::SoundBankPlayer_PlaylistEntry> const& GlobalNamespace::SoundBankPlayer::__cordl_internal_get_playlist() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___playlist;
}
constexpr void GlobalNamespace::SoundBankPlayer::__cordl_internal_set_playlist(::ArrayW<::GlobalNamespace::SoundBankPlayer_PlaylistEntry>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___playlist = value;
}
inline bool GlobalNamespace::SoundBankPlayer::get_isPlaying()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundBankPlayer*>(),
                        {"get_isPlaying", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t GlobalNamespace::SoundBankPlayer::get_NormalizedTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundBankPlayer*>(),
                        {"get_NormalizedTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::SoundBankPlayer::get_CurrentTime()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundBankPlayer*>(),
                        {"get_CurrentTime", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::SoundBankPlayer::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundBankPlayer*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SoundBankPlayer::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundBankPlayer*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SoundBankPlayer::Play()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundBankPlayer*>(),
                        {"Play", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SoundBankPlayer::Play(::System::Nullable_1<float_t>  volumeOverride, ::System::Nullable_1<float_t>  pitchOverride)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundBankPlayer*>(),
                        {"Play", {}, {::i2c::type_of<::System::Nullable_1<float_t>>(), ::i2c::type_of<::System::Nullable_1<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, volumeOverride, pitchOverride);
}
inline void GlobalNamespace::SoundBankPlayer::RestartSequence()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundBankPlayer*>(),
                        {"RestartSequence", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SoundBankPlayer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::SoundBankPlayer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SoundBankPlayer* GlobalNamespace::SoundBankPlayer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SoundBankPlayer*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SoundBankPlayer::SoundBankPlayer()   {
}
