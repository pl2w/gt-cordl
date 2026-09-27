#pragma once
// IWYU pragma private; include "UnityEngine/AudioSource.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__AudioBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AudioSource)
namespace System {
struct IntPtr;
}
namespace UnityEngine::Audio {
class AudioMixerGroup;
}
namespace UnityEngine::Audio {
class AudioResource;
}
namespace UnityEngine::Bindings {
struct BlittableArrayWrapper;
}
namespace UnityEngine {
struct ActivePlayable;
}
namespace UnityEngine {
class AnimationCurve;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
struct AudioRolloffMode;
}
namespace UnityEngine {
struct AudioSourceCurveType;
}
namespace UnityEngine {
struct AudioVelocityUpdateMode;
}
namespace UnityEngine {
struct FFTWindow;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
class AudioSource;
}
// Write type traits
MARK_REF_T(::UnityEngine::AudioSource*);
DEFINE_IL2CPP_CLASS(::UnityEngine::AudioSource*, "UnityEngine", "AudioSource");
// [RequireComponent(typeof(UnityEngine.Transform))]
// [StaticAccessor("AudioSourceBindings", (UnityEngine.Bindings.StaticAccessorType)2)]
// Dependencies UnityEngine.AudioBehaviour
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.AudioSource
class CORDL_TYPE AudioSource : public ::UnityEngine::AudioBehaviour {
public:
// Declarations
 __declspec(property(get=get_bypassEffects, put=set_bypassEffects)) bool  bypassEffects;

 __declspec(property(get=get_bypassListenerEffects, put=set_bypassListenerEffects)) bool  bypassListenerEffects;

 __declspec(property(get=get_bypassReverbZones, put=set_bypassReverbZones)) bool  bypassReverbZones;

 __declspec(property(get=get_clip, put=set_clip)) ::UnityW<::UnityEngine::AudioClip>  clip;

 __declspec(property(get=get_containerActivePlayables)) ::ArrayW<::UnityEngine::ActivePlayable>  containerActivePlayables;

 __declspec(property(get=get_dopplerLevel, put=set_dopplerLevel)) float_t  dopplerLevel;

 __declspec(property(get=get_ignoreListenerPause, put=set_ignoreListenerPause)) bool  ignoreListenerPause;

 __declspec(property(get=get_ignoreListenerVolume, put=set_ignoreListenerVolume)) bool  ignoreListenerVolume;

 __declspec(property(get=get_isContainerPlaying)) bool  isContainerPlaying;

 __declspec(property(get=get_isPlaying)) bool  isPlaying;

 __declspec(property(get=get_isVirtual)) bool  isVirtual;

 __declspec(property(get=get_loop, put=set_loop)) bool  loop;

 __declspec(property(get=get_maxDistance, put=set_maxDistance)) float_t  maxDistance;

/// @brief [Obsolete("maxVolume is not supported anymore. Use min-, maxDistance and rolloffMode instead.", true)]
 __declspec(property(get=get_maxVolume, put=set_maxVolume)) float_t  maxVolume;

 __declspec(property(get=get_minDistance, put=set_minDistance)) float_t  minDistance;

/// @brief [Obsolete("minVolume is not supported anymore. Use min-, maxDistance and rolloffMode instead.", true)]
 __declspec(property(get=get_minVolume, put=set_minVolume)) float_t  minVolume;

 __declspec(property(get=get_mute, put=set_mute)) bool  mute;

 __declspec(property(get=get_outputAudioMixerGroup, put=set_outputAudioMixerGroup)) ::UnityW<::UnityEngine::Audio::AudioMixerGroup>  outputAudioMixerGroup;

/// @brief [NativeProperty("StereoPan")]
 __declspec(property(get=get_panStereo, put=set_panStereo)) float_t  panStereo;

 __declspec(property(get=get_pitch, put=set_pitch)) float_t  pitch;

 __declspec(property(get=get_playOnAwake, put=set_playOnAwake)) bool  playOnAwake;

 __declspec(property(get=get_priority, put=set_priority)) int32_t  priority;

 __declspec(property(get=get_resource, put=set_resource)) ::UnityW<::UnityEngine::Audio::AudioResource>  resource;

 __declspec(property(get=get_reverbZoneMix, put=set_reverbZoneMix)) float_t  reverbZoneMix;

/// @brief [Obsolete("rolloffFactor is not supported anymore. Use min-, maxDistance and rolloffMode instead.", true)]
 __declspec(property(get=get_rolloffFactor, put=set_rolloffFactor)) float_t  rolloffFactor;

 __declspec(property(get=get_rolloffMode, put=set_rolloffMode)) ::UnityEngine::AudioRolloffMode  rolloffMode;

/// @brief [NativeProperty("SpatialBlendMix")]
 __declspec(property(get=get_spatialBlend, put=set_spatialBlend)) float_t  spatialBlend;

 __declspec(property(get=get_spatialize, put=set_spatialize)) bool  spatialize;

 __declspec(property(get=get_spatializePostEffects, put=set_spatializePostEffects)) bool  spatializePostEffects;

 __declspec(property(get=get_spread, put=set_spread)) float_t  spread;

/// @brief [NativeProperty("SecPosition")]
 __declspec(property(get=get_time, put=set_time)) float_t  time;

/// @brief [NativeProperty("SamplePosition")]
 __declspec(property(get=get_timeSamples, put=set_timeSamples)) int32_t  timeSamples;

 __declspec(property(get=get_velocityUpdateMode, put=set_velocityUpdateMode)) ::UnityEngine::AudioVelocityUpdateMode  velocityUpdateMode;

 __declspec(property(get=get_volume, put=set_volume)) float_t  volume;

/// @brief Method GetAmbisonicDecoderFloat, addr 0xb557e10, size 0x90, virtual false, abstract: false, final false
inline bool GetAmbisonicDecoderFloat(int32_t  index, ::by_ref<float_t>  value) ;

/// @brief Method GetAmbisonicDecoderFloat_Injected, addr 0xb557ea0, size 0x54, virtual false, abstract: false, final false
static inline bool GetAmbisonicDecoderFloat_Injected(::System::IntPtr  _unity_self, int32_t  index, ::by_ref<float_t>  value) ;

/// @brief Method GetAudioRandomContainerRuntimeMeterValue, addr 0xb557fd8, size 0x78, virtual false, abstract: false, final false
inline float_t GetAudioRandomContainerRuntimeMeterValue() ;

/// @brief Method GetAudioRandomContainerRuntimeMeterValue_Injected, addr 0xb558050, size 0x3c, virtual false, abstract: false, final false
static inline float_t GetAudioRandomContainerRuntimeMeterValue_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method GetCustomCurve, addr 0xb556844, size 0x4, virtual false, abstract: false, final false
inline ::UnityEngine::AnimationCurve* GetCustomCurve(::UnityEngine::AudioSourceCurveType  type) ;

/// @brief Method GetCustomCurveHelper, addr 0xb5543c0, size 0xc8, virtual false, abstract: false, final false
static inline ::UnityEngine::AnimationCurve* GetCustomCurveHelper(/* [NotNull] */ ::UnityEngine::AudioSource*  source, ::UnityEngine::AudioSourceCurveType  type) ;

/// @brief Method GetCustomCurveHelper_Injected, addr 0xb554488, size 0x44, virtual false, abstract: false, final false
static inline ::System::IntPtr GetCustomCurveHelper_Injected(::System::IntPtr  source, ::UnityEngine::AudioSourceCurveType  type) ;

/// [Obsolete("GetOutputData returning a float[] is deprecated, use GetOutputData and pass a pre allocated array instead.")]
/// @brief Method GetOutputData, addr 0xb5578c0, size 0x74, virtual false, abstract: false, final false
inline ::ArrayW<float_t> GetOutputData(int32_t  numSamples, int32_t  channel) ;

/// @brief Method GetOutputData, addr 0xb557934, size 0x4, virtual false, abstract: false, final false
inline void GetOutputData(::ArrayW<float_t>  samples, int32_t  channel) ;

/// @brief Method GetOutputDataHelper, addr 0xb5544cc, size 0x198, virtual false, abstract: false, final false
static inline void GetOutputDataHelper(/* [NotNull] */ ::UnityEngine::AudioSource*  source, ::by_ref<::ArrayW<float_t>>  samples, int32_t  channel) ;

/// @brief Method GetOutputDataHelper_Injected, addr 0xb554664, size 0x54, virtual false, abstract: false, final false
static inline void GetOutputDataHelper_Injected(::System::IntPtr  source, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>  samples, int32_t  channel) ;

/// @brief Method GetPitch, addr 0xb553cb0, size 0xa8, virtual false, abstract: false, final false
static inline float_t GetPitch(/* [NotNull] */ ::UnityEngine::AudioSource*  source) ;

/// @brief Method GetPitch_Injected, addr 0xb553d58, size 0x3c, virtual false, abstract: false, final false
static inline float_t GetPitch_Injected(::System::IntPtr  source) ;

/// @brief Method GetSpatializerFloat, addr 0xb557d2c, size 0x90, virtual false, abstract: false, final false
inline bool GetSpatializerFloat(int32_t  index, ::by_ref<float_t>  value) ;

/// @brief Method GetSpatializerFloat_Injected, addr 0xb557dbc, size 0x54, virtual false, abstract: false, final false
static inline bool GetSpatializerFloat_Injected(::System::IntPtr  _unity_self, int32_t  index, ::by_ref<float_t>  value) ;

/// [Obsolete("GetSpectrumData returning a float[] is deprecated, use GetSpectrumData and pass a pre allocated array instead.")]
/// @brief Method GetSpectrumData, addr 0xb557938, size 0x84, virtual false, abstract: false, final false
inline ::ArrayW<float_t> GetSpectrumData(int32_t  numSamples, int32_t  channel, ::UnityEngine::FFTWindow  window) ;

/// @brief Method GetSpectrumData, addr 0xb5579bc, size 0x4, virtual false, abstract: false, final false
inline void GetSpectrumData(::ArrayW<float_t>  samples, int32_t  channel, ::UnityEngine::FFTWindow  window) ;

/// [NativeThrows]
/// @brief Method GetSpectrumDataHelper, addr 0xb5546b8, size 0x1ac, virtual false, abstract: false, final false
static inline void GetSpectrumDataHelper(/* [NotNull] */ ::UnityEngine::AudioSource*  source, ::by_ref<::ArrayW<float_t>>  samples, int32_t  channel, ::UnityEngine::FFTWindow  window) ;

/// @brief Method GetSpectrumDataHelper_Injected, addr 0xb554864, size 0x5c, virtual false, abstract: false, final false
static inline void GetSpectrumDataHelper_Injected(::System::IntPtr  source, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>  samples, int32_t  channel, ::UnityEngine::FFTWindow  window) ;

static inline ::UnityEngine::AudioSource* New_ctor() ;

/// @brief Method Pause, addr 0xb555420, size 0x78, virtual false, abstract: false, final false
inline void Pause() ;

/// @brief Method Pause_Injected, addr 0xb555498, size 0x3c, virtual false, abstract: false, final false
static inline void Pause_Injected(::System::IntPtr  _unity_self) ;

/// [ExcludeFromDocs]
/// @brief Method Play, addr 0xb555140, size 0x8, virtual false, abstract: false, final false
inline void Play() ;

/// @brief Method Play, addr 0xb553f8c, size 0x88, virtual false, abstract: false, final false
inline void Play(double_t  delay) ;

/// @brief Method Play, addr 0xb555148, size 0x4, virtual false, abstract: false, final false
inline void Play(/* [DefaultValue("0")] */ uint64_t  delay) ;

/// [ExcludeFromDocs]
/// @brief Method PlayClipAtPoint, addr 0xb55590c, size 0x8, virtual false, abstract: false, final false
static inline void PlayClipAtPoint(::UnityEngine::AudioClip*  clip, ::UnityEngine::Vector3  position) ;

/// @brief Method PlayClipAtPoint, addr 0xb555914, size 0x1d4, virtual false, abstract: false, final false
static inline void PlayClipAtPoint(::UnityEngine::AudioClip*  clip, ::UnityEngine::Vector3  position, /* [DefaultValue("1.0F")] */ float_t  volume) ;

/// @brief Method PlayDelayed, addr 0xb55514c, size 0x24, virtual false, abstract: false, final false
inline void PlayDelayed(float_t  delay) ;

/// @brief Method PlayHelper, addr 0xb553e98, size 0xb0, virtual false, abstract: false, final false
static inline void PlayHelper(/* [NotNull] */ ::UnityEngine::AudioSource*  source, uint64_t  delay) ;

/// @brief Method PlayHelper_Injected, addr 0xb553f48, size 0x44, virtual false, abstract: false, final false
static inline void PlayHelper_Injected(::System::IntPtr  source, uint64_t  delay) ;

/// [ExcludeFromDocs]
/// @brief Method PlayOneShot, addr 0xb55518c, size 0x8, virtual false, abstract: false, final false
inline void PlayOneShot(::UnityEngine::AudioClip*  clip) ;

/// @brief Method PlayOneShot, addr 0xb555194, size 0xdc, virtual false, abstract: false, final false
inline void PlayOneShot(::UnityEngine::AudioClip*  clip, /* [DefaultValue("1.0F")] */ float_t  volumeScale) ;

/// @brief Method PlayOneShotHelper, addr 0xb554060, size 0x12c, virtual false, abstract: false, final false
static inline void PlayOneShotHelper(/* [NotNull] */ ::UnityEngine::AudioSource*  source, /* [NotNull] */ ::UnityEngine::AudioClip*  clip, float_t  volumeScale) ;

/// @brief Method PlayOneShotHelper_Injected, addr 0xb55418c, size 0x54, virtual false, abstract: false, final false
static inline void PlayOneShotHelper_Injected(::System::IntPtr  source, ::System::IntPtr  clip, float_t  volumeScale) ;

/// @brief Method PlayScheduled, addr 0xb555170, size 0x1c, virtual false, abstract: false, final false
inline void PlayScheduled(double_t  time) ;

/// @brief Method Play_Injected, addr 0xb554014, size 0x4c, virtual false, abstract: false, final false
static inline void Play_Injected(::System::IntPtr  _unity_self, double_t  delay) ;

/// @brief Method SetAmbisonicDecoderFloat, addr 0xb557ef4, size 0x90, virtual false, abstract: false, final false
inline bool SetAmbisonicDecoderFloat(int32_t  index, float_t  value) ;

/// @brief Method SetAmbisonicDecoderFloat_Injected, addr 0xb557f84, size 0x54, virtual false, abstract: false, final false
static inline bool SetAmbisonicDecoderFloat_Injected(::System::IntPtr  _unity_self, int32_t  index, float_t  value) ;

/// @brief Method SetCustomCurve, addr 0xb556840, size 0x4, virtual false, abstract: false, final false
inline void SetCustomCurve(::UnityEngine::AudioSourceCurveType  type, ::UnityEngine::AnimationCurve*  curve) ;

/// [NativeThrows]
/// @brief Method SetCustomCurveHelper, addr 0xb5542a4, size 0xc8, virtual false, abstract: false, final false
static inline void SetCustomCurveHelper(/* [NotNull] */ ::UnityEngine::AudioSource*  source, ::UnityEngine::AudioSourceCurveType  type, ::UnityEngine::AnimationCurve*  curve) ;

/// @brief Method SetCustomCurveHelper_Injected, addr 0xb55436c, size 0x54, virtual false, abstract: false, final false
static inline void SetCustomCurveHelper_Injected(::System::IntPtr  source, ::UnityEngine::AudioSourceCurveType  type, ::System::IntPtr  curve) ;

/// @brief Method SetPitch, addr 0xb553d94, size 0xb8, virtual false, abstract: false, final false
static inline void SetPitch(/* [NotNull] */ ::UnityEngine::AudioSource*  source, float_t  pitch) ;

/// @brief Method SetPitch_Injected, addr 0xb553e4c, size 0x4c, virtual false, abstract: false, final false
static inline void SetPitch_Injected(::System::IntPtr  source, float_t  pitch) ;

/// @brief Method SetScheduledEndTime, addr 0xb555344, size 0x88, virtual false, abstract: false, final false
inline void SetScheduledEndTime(double_t  time) ;

/// @brief Method SetScheduledEndTime_Injected, addr 0xb5553cc, size 0x4c, virtual false, abstract: false, final false
static inline void SetScheduledEndTime_Injected(::System::IntPtr  _unity_self, double_t  time) ;

/// @brief Method SetScheduledStartTime, addr 0xb555270, size 0x88, virtual false, abstract: false, final false
inline void SetScheduledStartTime(double_t  time) ;

/// @brief Method SetScheduledStartTime_Injected, addr 0xb5552f8, size 0x4c, virtual false, abstract: false, final false
static inline void SetScheduledStartTime_Injected(::System::IntPtr  _unity_self, double_t  time) ;

/// @brief Method SetSpatializerFloat, addr 0xb557c48, size 0x90, virtual false, abstract: false, final false
inline bool SetSpatializerFloat(int32_t  index, float_t  value) ;

/// @brief Method SetSpatializerFloat_Injected, addr 0xb557cd8, size 0x54, virtual false, abstract: false, final false
static inline bool SetSpatializerFloat_Injected(::System::IntPtr  _unity_self, int32_t  index, float_t  value) ;

/// @brief Method SkipToNextElementIfHasContainer, addr 0xb555588, size 0x78, virtual false, abstract: false, final false
inline void SkipToNextElementIfHasContainer() ;

/// @brief Method SkipToNextElementIfHasContainer_Injected, addr 0xb555600, size 0x3c, virtual false, abstract: false, final false
static inline void SkipToNextElementIfHasContainer_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method Stop, addr 0xb555418, size 0x8, virtual false, abstract: false, final false
inline void Stop() ;

/// @brief Method Stop, addr 0xb5541e0, size 0x80, virtual false, abstract: false, final false
inline void Stop(bool  stopOneShots) ;

/// @brief Method Stop_Injected, addr 0xb554260, size 0x44, virtual false, abstract: false, final false
static inline void Stop_Injected(::System::IntPtr  _unity_self, bool  stopOneShots) ;

/// @brief Method UnPause, addr 0xb5554d4, size 0x78, virtual false, abstract: false, final false
inline void UnPause() ;

/// @brief Method UnPause_Injected, addr 0xb55554c, size 0x3c, virtual false, abstract: false, final false
static inline void UnPause_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method .ctor, addr 0xb55808c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_bypassEffects, addr 0xb5569d0, size 0x78, virtual false, abstract: false, final false
inline bool get_bypassEffects() ;

/// @brief Method get_bypassEffects_Injected, addr 0xb556a48, size 0x3c, virtual false, abstract: false, final false
static inline bool get_bypassEffects_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_bypassListenerEffects, addr 0xb556b48, size 0x78, virtual false, abstract: false, final false
inline bool get_bypassListenerEffects() ;

/// @brief Method get_bypassListenerEffects_Injected, addr 0xb556bc0, size 0x3c, virtual false, abstract: false, final false
static inline bool get_bypassListenerEffects_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_bypassReverbZones, addr 0xb556cc0, size 0x78, virtual false, abstract: false, final false
inline bool get_bypassReverbZones() ;

/// @brief Method get_bypassReverbZones_Injected, addr 0xb556d38, size 0x3c, virtual false, abstract: false, final false
static inline bool get_bypassReverbZones_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_clip, addr 0xb554d50, size 0x5c, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::AudioClip> get_clip() ;

/// @brief Method get_containerActivePlayables, addr 0xb5557a4, size 0x78, virtual false, abstract: false, final false
inline ::ArrayW<::UnityEngine::ActivePlayable> get_containerActivePlayables() ;

/// @brief Method get_containerActivePlayables_Injected, addr 0xb55581c, size 0x3c, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::ActivePlayable> get_containerActivePlayables_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_dopplerLevel, addr 0xb556e38, size 0x78, virtual false, abstract: false, final false
inline float_t get_dopplerLevel() ;

/// @brief Method get_dopplerLevel_Injected, addr 0xb556eb0, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_dopplerLevel_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_ignoreListenerPause, addr 0xb555fd8, size 0x78, virtual false, abstract: false, final false
inline bool get_ignoreListenerPause() ;

/// @brief Method get_ignoreListenerPause_Injected, addr 0xb556050, size 0x3c, virtual false, abstract: false, final false
static inline bool get_ignoreListenerPause_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_ignoreListenerVolume, addr 0xb555ce8, size 0x78, virtual false, abstract: false, final false
inline bool get_ignoreListenerVolume() ;

/// @brief Method get_ignoreListenerVolume_Injected, addr 0xb555d60, size 0x3c, virtual false, abstract: false, final false
static inline bool get_ignoreListenerVolume_Injected(::System::IntPtr  _unity_self) ;

/// [NativeName("IsContainerPlaying")]
/// @brief Method get_isContainerPlaying, addr 0xb5556f0, size 0x78, virtual false, abstract: false, final false
inline bool get_isContainerPlaying() ;

/// @brief Method get_isContainerPlaying_Injected, addr 0xb555768, size 0x3c, virtual false, abstract: false, final false
static inline bool get_isContainerPlaying_Injected(::System::IntPtr  _unity_self) ;

/// [NativeName("IsPlayingScripting")]
/// @brief Method get_isPlaying, addr 0xb55563c, size 0x78, virtual false, abstract: false, final false
inline bool get_isPlaying() ;

/// @brief Method get_isPlaying_Injected, addr 0xb5556b4, size 0x3c, virtual false, abstract: false, final false
static inline bool get_isPlaying_Injected(::System::IntPtr  _unity_self) ;

/// [NativeName("GetLastVirtualState")]
/// @brief Method get_isVirtual, addr 0xb555858, size 0x78, virtual false, abstract: false, final false
inline bool get_isVirtual() ;

/// @brief Method get_isVirtual_Injected, addr 0xb5558d0, size 0x3c, virtual false, abstract: false, final false
static inline bool get_isVirtual_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_loop, addr 0xb555b70, size 0x78, virtual false, abstract: false, final false
inline bool get_loop() ;

/// @brief Method get_loop_Injected, addr 0xb555be8, size 0x3c, virtual false, abstract: false, final false
static inline bool get_loop_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_maxDistance, addr 0xb5575c0, size 0x78, virtual false, abstract: false, final false
inline float_t get_maxDistance() ;

/// @brief Method get_maxDistance_Injected, addr 0xb557638, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_maxDistance_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_maxVolume, addr 0xb557a98, size 0x70, virtual false, abstract: false, final false
inline float_t get_maxVolume() ;

/// @brief Method get_minDistance, addr 0xb557438, size 0x78, virtual false, abstract: false, final false
inline float_t get_minDistance() ;

/// @brief Method get_minDistance_Injected, addr 0xb5574b0, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_minDistance_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_minVolume, addr 0xb5579c0, size 0x70, virtual false, abstract: false, final false
inline float_t get_minVolume() ;

/// @brief Method get_mute, addr 0xb5572c0, size 0x78, virtual false, abstract: false, final false
inline bool get_mute() ;

/// @brief Method get_mute_Injected, addr 0xb557338, size 0x3c, virtual false, abstract: false, final false
static inline bool get_mute_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_outputAudioMixerGroup, addr 0xb554f78, size 0x94, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Audio::AudioMixerGroup> get_outputAudioMixerGroup() ;

/// @brief Method get_outputAudioMixerGroup_Injected, addr 0xb55500c, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr get_outputAudioMixerGroup_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_panStereo, addr 0xb5562c8, size 0x78, virtual false, abstract: false, final false
inline float_t get_panStereo() ;

/// @brief Method get_panStereo_Injected, addr 0xb556340, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_panStereo_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_pitch, addr 0xb554a48, size 0x4, virtual false, abstract: false, final false
inline float_t get_pitch() ;

/// @brief Method get_playOnAwake, addr 0xb555e60, size 0x78, virtual false, abstract: false, final false
inline bool get_playOnAwake() ;

/// @brief Method get_playOnAwake_Injected, addr 0xb555ed8, size 0x3c, virtual false, abstract: false, final false
static inline bool get_playOnAwake_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_priority, addr 0xb557148, size 0x78, virtual false, abstract: false, final false
inline int32_t get_priority() ;

/// @brief Method get_priority_Injected, addr 0xb5571c0, size 0x3c, virtual false, abstract: false, final false
static inline int32_t get_priority_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_resource, addr 0xb554dac, size 0x94, virtual false, abstract: false, final false
inline ::UnityW<::UnityEngine::Audio::AudioResource> get_resource() ;

/// @brief Method get_resource_Injected, addr 0xb554ef8, size 0x3c, virtual false, abstract: false, final false
static inline ::System::IntPtr get_resource_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_reverbZoneMix, addr 0xb556848, size 0x78, virtual false, abstract: false, final false
inline float_t get_reverbZoneMix() ;

/// @brief Method get_reverbZoneMix_Injected, addr 0xb5568c0, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_reverbZoneMix_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_rolloffFactor, addr 0xb557b70, size 0x70, virtual false, abstract: false, final false
inline float_t get_rolloffFactor() ;

/// @brief Method get_rolloffMode, addr 0xb557748, size 0x78, virtual false, abstract: false, final false
inline ::UnityEngine::AudioRolloffMode get_rolloffMode() ;

/// @brief Method get_rolloffMode_Injected, addr 0xb5577c0, size 0x3c, virtual false, abstract: false, final false
static inline ::UnityEngine::AudioRolloffMode get_rolloffMode_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_spatialBlend, addr 0xb556450, size 0x78, virtual false, abstract: false, final false
inline float_t get_spatialBlend() ;

/// @brief Method get_spatialBlend_Injected, addr 0xb5564c8, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_spatialBlend_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_spatialize, addr 0xb556550, size 0x78, virtual false, abstract: false, final false
inline bool get_spatialize() ;

/// @brief Method get_spatializePostEffects, addr 0xb5566c8, size 0x78, virtual false, abstract: false, final false
inline bool get_spatializePostEffects() ;

/// @brief Method get_spatializePostEffects_Injected, addr 0xb556740, size 0x3c, virtual false, abstract: false, final false
static inline bool get_spatializePostEffects_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_spatialize_Injected, addr 0xb5565c8, size 0x3c, virtual false, abstract: false, final false
static inline bool get_spatialize_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_spread, addr 0xb556fc0, size 0x78, virtual false, abstract: false, final false
inline float_t get_spread() ;

/// @brief Method get_spread_Injected, addr 0xb557038, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_spread_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_time, addr 0xb554a50, size 0x78, virtual false, abstract: false, final false
inline float_t get_time() ;

/// [NativeMethod(IsThreadSafe = true)]
/// @brief Method get_timeSamples, addr 0xb554bd8, size 0x78, virtual false, abstract: false, final false
inline int32_t get_timeSamples() ;

/// @brief Method get_timeSamples_Injected, addr 0xb554c50, size 0x3c, virtual false, abstract: false, final false
static inline int32_t get_timeSamples_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_time_Injected, addr 0xb554ac8, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_time_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_velocityUpdateMode, addr 0xb556150, size 0x78, virtual false, abstract: false, final false
inline ::UnityEngine::AudioVelocityUpdateMode get_velocityUpdateMode() ;

/// @brief Method get_velocityUpdateMode_Injected, addr 0xb5561c8, size 0x3c, virtual false, abstract: false, final false
static inline ::UnityEngine::AudioVelocityUpdateMode get_velocityUpdateMode_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method get_volume, addr 0xb5548c0, size 0x78, virtual false, abstract: false, final false
inline float_t get_volume() ;

/// @brief Method get_volume_Injected, addr 0xb554938, size 0x3c, virtual false, abstract: false, final false
static inline float_t get_volume_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method set_bypassEffects, addr 0xb556a84, size 0x80, virtual false, abstract: false, final false
inline void set_bypassEffects(bool  value) ;

/// @brief Method set_bypassEffects_Injected, addr 0xb556b04, size 0x44, virtual false, abstract: false, final false
static inline void set_bypassEffects_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_bypassListenerEffects, addr 0xb556bfc, size 0x80, virtual false, abstract: false, final false
inline void set_bypassListenerEffects(bool  value) ;

/// @brief Method set_bypassListenerEffects_Injected, addr 0xb556c7c, size 0x44, virtual false, abstract: false, final false
static inline void set_bypassListenerEffects_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_bypassReverbZones, addr 0xb556d74, size 0x80, virtual false, abstract: false, final false
inline void set_bypassReverbZones(bool  value) ;

/// @brief Method set_bypassReverbZones_Injected, addr 0xb556df4, size 0x44, virtual false, abstract: false, final false
static inline void set_bypassReverbZones_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_clip, addr 0xb554e40, size 0x4, virtual false, abstract: false, final false
inline void set_clip(::UnityEngine::AudioClip*  value) ;

/// @brief Method set_dopplerLevel, addr 0xb556eec, size 0x88, virtual false, abstract: false, final false
inline void set_dopplerLevel(float_t  value) ;

/// @brief Method set_dopplerLevel_Injected, addr 0xb556f74, size 0x4c, virtual false, abstract: false, final false
static inline void set_dopplerLevel_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_ignoreListenerPause, addr 0xb55608c, size 0x80, virtual false, abstract: false, final false
inline void set_ignoreListenerPause(bool  value) ;

/// @brief Method set_ignoreListenerPause_Injected, addr 0xb55610c, size 0x44, virtual false, abstract: false, final false
static inline void set_ignoreListenerPause_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_ignoreListenerVolume, addr 0xb555d9c, size 0x80, virtual false, abstract: false, final false
inline void set_ignoreListenerVolume(bool  value) ;

/// @brief Method set_ignoreListenerVolume_Injected, addr 0xb555e1c, size 0x44, virtual false, abstract: false, final false
static inline void set_ignoreListenerVolume_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_loop, addr 0xb555c24, size 0x80, virtual false, abstract: false, final false
inline void set_loop(bool  value) ;

/// @brief Method set_loop_Injected, addr 0xb555ca4, size 0x44, virtual false, abstract: false, final false
static inline void set_loop_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_maxDistance, addr 0xb557674, size 0x88, virtual false, abstract: false, final false
inline void set_maxDistance(float_t  value) ;

/// @brief Method set_maxDistance_Injected, addr 0xb5576fc, size 0x4c, virtual false, abstract: false, final false
static inline void set_maxDistance_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_maxVolume, addr 0xb557b08, size 0x68, virtual false, abstract: false, final false
inline void set_maxVolume(float_t  value) ;

/// @brief Method set_minDistance, addr 0xb5574ec, size 0x88, virtual false, abstract: false, final false
inline void set_minDistance(float_t  value) ;

/// @brief Method set_minDistance_Injected, addr 0xb557574, size 0x4c, virtual false, abstract: false, final false
static inline void set_minDistance_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_minVolume, addr 0xb557a30, size 0x68, virtual false, abstract: false, final false
inline void set_minVolume(float_t  value) ;

/// @brief Method set_mute, addr 0xb557374, size 0x80, virtual false, abstract: false, final false
inline void set_mute(bool  value) ;

/// @brief Method set_mute_Injected, addr 0xb5573f4, size 0x44, virtual false, abstract: false, final false
static inline void set_mute_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_outputAudioMixerGroup, addr 0xb555048, size 0xb4, virtual false, abstract: false, final false
inline void set_outputAudioMixerGroup(::UnityEngine::Audio::AudioMixerGroup*  value) ;

/// @brief Method set_outputAudioMixerGroup_Injected, addr 0xb5550fc, size 0x44, virtual false, abstract: false, final false
static inline void set_outputAudioMixerGroup_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  value) ;

/// @brief Method set_panStereo, addr 0xb55637c, size 0x88, virtual false, abstract: false, final false
inline void set_panStereo(float_t  value) ;

/// @brief Method set_panStereo_Injected, addr 0xb556404, size 0x4c, virtual false, abstract: false, final false
static inline void set_panStereo_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_pitch, addr 0xb554a4c, size 0x4, virtual false, abstract: false, final false
inline void set_pitch(float_t  value) ;

/// @brief Method set_playOnAwake, addr 0xb555f14, size 0x80, virtual false, abstract: false, final false
inline void set_playOnAwake(bool  value) ;

/// @brief Method set_playOnAwake_Injected, addr 0xb555f94, size 0x44, virtual false, abstract: false, final false
static inline void set_playOnAwake_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_priority, addr 0xb5571fc, size 0x80, virtual false, abstract: false, final false
inline void set_priority(int32_t  value) ;

/// @brief Method set_priority_Injected, addr 0xb55727c, size 0x44, virtual false, abstract: false, final false
static inline void set_priority_Injected(::System::IntPtr  _unity_self, int32_t  value) ;

/// @brief Method set_resource, addr 0xb554e44, size 0xb4, virtual false, abstract: false, final false
inline void set_resource(::UnityEngine::Audio::AudioResource*  value) ;

/// @brief Method set_resource_Injected, addr 0xb554f34, size 0x44, virtual false, abstract: false, final false
static inline void set_resource_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  value) ;

/// @brief Method set_reverbZoneMix, addr 0xb5568fc, size 0x88, virtual false, abstract: false, final false
inline void set_reverbZoneMix(float_t  value) ;

/// @brief Method set_reverbZoneMix_Injected, addr 0xb556984, size 0x4c, virtual false, abstract: false, final false
static inline void set_reverbZoneMix_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_rolloffFactor, addr 0xb557be0, size 0x68, virtual false, abstract: false, final false
inline void set_rolloffFactor(float_t  value) ;

/// @brief Method set_rolloffMode, addr 0xb5577fc, size 0x80, virtual false, abstract: false, final false
inline void set_rolloffMode(::UnityEngine::AudioRolloffMode  value) ;

/// @brief Method set_rolloffMode_Injected, addr 0xb55787c, size 0x44, virtual false, abstract: false, final false
static inline void set_rolloffMode_Injected(::System::IntPtr  _unity_self, ::UnityEngine::AudioRolloffMode  value) ;

/// @brief Method set_spatialBlend, addr 0xb555ae8, size 0x88, virtual false, abstract: false, final false
inline void set_spatialBlend(float_t  value) ;

/// @brief Method set_spatialBlend_Injected, addr 0xb556504, size 0x4c, virtual false, abstract: false, final false
static inline void set_spatialBlend_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_spatialize, addr 0xb556604, size 0x80, virtual false, abstract: false, final false
inline void set_spatialize(bool  value) ;

/// @brief Method set_spatializePostEffects, addr 0xb55677c, size 0x80, virtual false, abstract: false, final false
inline void set_spatializePostEffects(bool  value) ;

/// @brief Method set_spatializePostEffects_Injected, addr 0xb5567fc, size 0x44, virtual false, abstract: false, final false
static inline void set_spatializePostEffects_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_spatialize_Injected, addr 0xb556684, size 0x44, virtual false, abstract: false, final false
static inline void set_spatialize_Injected(::System::IntPtr  _unity_self, bool  value) ;

/// @brief Method set_spread, addr 0xb557074, size 0x88, virtual false, abstract: false, final false
inline void set_spread(float_t  value) ;

/// @brief Method set_spread_Injected, addr 0xb5570fc, size 0x4c, virtual false, abstract: false, final false
static inline void set_spread_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_time, addr 0xb554b04, size 0x88, virtual false, abstract: false, final false
inline void set_time(float_t  value) ;

/// [NativeMethod(IsThreadSafe = true)]
/// @brief Method set_timeSamples, addr 0xb554c8c, size 0x80, virtual false, abstract: false, final false
inline void set_timeSamples(int32_t  value) ;

/// @brief Method set_timeSamples_Injected, addr 0xb554d0c, size 0x44, virtual false, abstract: false, final false
static inline void set_timeSamples_Injected(::System::IntPtr  _unity_self, int32_t  value) ;

/// @brief Method set_time_Injected, addr 0xb554b8c, size 0x4c, virtual false, abstract: false, final false
static inline void set_time_Injected(::System::IntPtr  _unity_self, float_t  value) ;

/// @brief Method set_velocityUpdateMode, addr 0xb556204, size 0x80, virtual false, abstract: false, final false
inline void set_velocityUpdateMode(::UnityEngine::AudioVelocityUpdateMode  value) ;

/// @brief Method set_velocityUpdateMode_Injected, addr 0xb556284, size 0x44, virtual false, abstract: false, final false
static inline void set_velocityUpdateMode_Injected(::System::IntPtr  _unity_self, ::UnityEngine::AudioVelocityUpdateMode  value) ;

/// @brief Method set_volume, addr 0xb554974, size 0x88, virtual false, abstract: false, final false
inline void set_volume(float_t  value) ;

/// @brief Method set_volume_Injected, addr 0xb5549fc, size 0x4c, virtual false, abstract: false, final false
static inline void set_volume_Injected(::System::IntPtr  _unity_self, float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioSource() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioSource", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioSource(AudioSource && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioSource", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioSource(AudioSource const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{31532};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::AudioSource) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine
