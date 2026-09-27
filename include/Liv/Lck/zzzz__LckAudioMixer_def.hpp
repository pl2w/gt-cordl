#pragma once
// IWYU pragma private; include "Liv/Lck/LckAudioMixer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LckAudioMixer)
namespace GlobalNamespace {
struct LckEvents_EncoderStartedEvent;
}
namespace Liv::Lck::Collections {
class AudioBuffer;
}
namespace Liv::Lck {
class ILckAudioLimiter;
}
namespace Liv::Lck {
class ILckAudioMixer;
}
namespace Liv::Lck {
class ILckAudioSource;
}
namespace Liv::Lck {
class ILckEventBus;
}
namespace Liv::Lck {
class ILckLateUpdate;
}
namespace Liv::Lck {
class ILckOutputConfigurer;
}
namespace Liv::Lck {
template<typename T>
class LckResult_1;
}
namespace Liv::Lck {
class LckResult;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace System {
class IDisposable;
}
namespace UnityEngine {
class Component;
}
// Forward declare root types
namespace Liv::Lck {
class LckAudioMixer;
}
// Write type traits
MARK_REF_T(::Liv::Lck::LckAudioMixer*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::LckAudioMixer*, "Liv.Lck", "LckAudioMixer");
// Dependencies System.Nullable`1<T>, System.Object, Unity.Profiling.ProfilerMarker
namespace Liv::Lck {
// Is value type: false
// CS Name: Liv.Lck.LckAudioMixer
class CORDL_TYPE LckAudioMixer : public ::System::Object {
public:
// Declarations
/// @brief Field _audioCaptureMarker, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__audioCaptureMarker, put=__cordl_internal_set__audioCaptureMarker)) ::UnityW<::UnityEngine::Component>  _audioCaptureMarker;

/// @brief Field _gameAudioBuffer, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__gameAudioBuffer, put=__cordl_internal_set__gameAudioBuffer)) ::Liv::Lck::Collections::AudioBuffer*  _gameAudioBuffer;

/// @brief Field _gameAudioGain, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get__gameAudioGain, put=__cordl_internal_set__gameAudioGain)) float_t  _gameAudioGain;

/// @brief Field _gameAudioQueue, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__gameAudioQueue, put=__cordl_internal_set__gameAudioQueue)) ::System::Collections::Generic::Queue_1<float_t>*  _gameAudioQueue;

/// @brief Field _gameAudioSource, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__gameAudioSource, put=__cordl_internal_set__gameAudioSource)) ::Liv::Lck::ILckAudioSource*  _gameAudioSource;

/// @brief Field _gameAudioValueCountOffset, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get__gameAudioValueCountOffset, put=__cordl_internal_set__gameAudioValueCountOffset)) int32_t  _gameAudioValueCountOffset;

/// @brief Field _isGameAudioMuted, offset 0x18, size 0x1 
 __declspec(property(get=__cordl_internal_get__isGameAudioMuted, put=__cordl_internal_set__isGameAudioMuted)) bool  _isGameAudioMuted;

/// @brief Field _isMicrophoneMuted, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__isMicrophoneMuted, put=__cordl_internal_set__isMicrophoneMuted)) bool  _isMicrophoneMuted;

/// @brief Field _lastGameAudioLevel, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastGameAudioLevel, put=__cordl_internal_set__lastGameAudioLevel)) float_t  _lastGameAudioLevel;

/// @brief Field _lastMicrophoneLevel, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastMicrophoneLevel, put=__cordl_internal_set__lastMicrophoneLevel)) float_t  _lastMicrophoneLevel;

/// @brief Field _lateUpdateProfileMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__lateUpdateProfileMarker, put=setStaticF__lateUpdateProfileMarker)) ::Unity::Profiling::ProfilerMarker  _lateUpdateProfileMarker;

/// @brief Field _lckAudioLimiterCurve, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__lckAudioLimiterCurve, put=__cordl_internal_set__lckAudioLimiterCurve)) ::Liv::Lck::ILckAudioLimiter*  _lckAudioLimiterCurve;

/// @brief Field _lckAudioLimiterHard, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__lckAudioLimiterHard, put=__cordl_internal_set__lckAudioLimiterHard)) ::Liv::Lck::ILckAudioLimiter*  _lckAudioLimiterHard;

/// @brief Field _lckAudioLimiterSoft, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__lckAudioLimiterSoft, put=__cordl_internal_set__lckAudioLimiterSoft)) ::Liv::Lck::ILckAudioLimiter*  _lckAudioLimiterSoft;

/// @brief Field _micAudioBuffer, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__micAudioBuffer, put=__cordl_internal_set__micAudioBuffer)) ::Liv::Lck::Collections::AudioBuffer*  _micAudioBuffer;

/// @brief Field _micCaptureStartRecordingTime, offset 0x98, size 0x10 
 __declspec(property(get=__cordl_internal_get__micCaptureStartRecordingTime, put=__cordl_internal_set__micCaptureStartRecordingTime)) ::System::Nullable_1<float_t>  _micCaptureStartRecordingTime;

/// @brief Field _microphoneGain, offset 0x34, size 0x4 
 __declspec(property(get=__cordl_internal_get__microphoneGain, put=__cordl_internal_set__microphoneGain)) float_t  _microphoneGain;

/// @brief Field _microphoneQueue, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__microphoneQueue, put=__cordl_internal_set__microphoneQueue)) ::System::Collections::Generic::Queue_1<float_t>*  _microphoneQueue;

/// @brief Field _mixedAudioBuffer, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__mixedAudioBuffer, put=__cordl_internal_set__mixedAudioBuffer)) ::Liv::Lck::Collections::AudioBuffer*  _mixedAudioBuffer;

/// @brief Field _nativeMicrophoneCapture, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__nativeMicrophoneCapture, put=__cordl_internal_set__nativeMicrophoneCapture)) ::Liv::Lck::ILckAudioSource*  _nativeMicrophoneCapture;

/// @brief Field _remainingGameAudioValuesToAdjust, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get__remainingGameAudioValuesToAdjust, put=__cordl_internal_set__remainingGameAudioValuesToAdjust)) int32_t  _remainingGameAudioValuesToAdjust;

/// @brief Field _sampleRate, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get__sampleRate, put=__cordl_internal_set__sampleRate)) int32_t  _sampleRate;

/// @brief Field _totalGameSamples, offset 0xa8, size 0x4 
 __declspec(property(get=__cordl_internal_get__totalGameSamples, put=__cordl_internal_set__totalGameSamples)) int32_t  _totalGameSamples;

/// @brief Field _totalMicSamples, offset 0xac, size 0x4 
 __declspec(property(get=__cordl_internal_get__totalMicSamples, put=__cordl_internal_set__totalMicSamples)) int32_t  _totalMicSamples;

/// @brief Convert operator to "::Liv::Lck::ILckAudioMixer"
constexpr operator  ::Liv::Lck::ILckAudioMixer*() noexcept;

/// @brief Convert operator to "::Liv::Lck::ILckLateUpdate"
constexpr operator  ::Liv::Lck::ILckLateUpdate*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method ApplyLimiter, addr 0x9cdf708, size 0x48, virtual false, abstract: false, final false
inline float_t ApplyLimiter(float_t  mixedAudioRaw) ;

/// @brief Method CalculateRootMeanSquare, addr 0x9cdf888, size 0x8c, virtual false, abstract: false, final false
static inline float_t CalculateRootMeanSquare(::Liv::Lck::Collections::AudioBuffer*  audioBuffer) ;

/// @brief Method CheckMicAudioPermissions, addr 0x9cdfa60, size 0x44, virtual false, abstract: false, final false
inline bool CheckMicAudioPermissions() ;

/// @brief Method CountAvailableGameBlocks, addr 0x9cdf5e8, size 0x90, virtual false, abstract: false, final false
inline int32_t CountAvailableGameBlocks() ;

/// @brief Method CountAvailableMicrophoneBlocks, addr 0x9cdf678, size 0x90, virtual false, abstract: false, final false
inline int32_t CountAvailableMicrophoneBlocks() ;

/// @brief Method DetermineAvailableBlockCount, addr 0x9cdf464, size 0x40, virtual false, abstract: false, final false
inline int32_t DetermineAvailableBlockCount(bool  shouldIncludeMicAudio) ;

/// @brief Method DisableCapture, addr 0x9cdeda0, size 0xdc, virtual false, abstract: false, final false
inline void DisableCapture() ;

/// @brief Method Dispose, addr 0x9cdfff0, size 0x90, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method EnableCapture, addr 0x9cdeb90, size 0x16c, virtual false, abstract: false, final false
inline void EnableCapture() ;

/// @brief Method EnqueueGameBufferSamples, addr 0x9cdee7c, size 0x1f4, virtual false, abstract: false, final false
inline void EnqueueGameBufferSamples() ;

/// @brief Method EnqueueMicBufferSamples, addr 0x9cdf070, size 0xd0, virtual false, abstract: false, final false
inline void EnqueueMicBufferSamples() ;

/// @brief Method EnsureAudioSourceSamplesWithinTolerance, addr 0x9cdf140, size 0x324, virtual false, abstract: false, final false
inline void EnsureAudioSourceSamplesWithinTolerance(::StringW  audioSourceName, float_t  captureTime, ::System::Collections::Generic::Queue_1<float_t>*  audioSourceQueue, ::by_ref<int32_t>  audioSourceRunningSampleCount) ;

/// @brief Method GameAudioDataCallback, addr 0x9cdf914, size 0x14c, virtual false, abstract: false, final false
inline void GameAudioDataCallback(::Liv::Lck::Collections::AudioBuffer*  audioBuffer) ;

/// @brief Method GetGameOutputLevel, addr 0x9cdfe4c, size 0x8, virtual true, abstract: false, final true
inline float_t GetGameOutputLevel() ;

/// @brief Method GetMicrophoneCaptureActive, addr 0x9cdfd20, size 0xc4, virtual true, abstract: false, final true
inline ::Liv::Lck::LckResult_1<bool>* GetMicrophoneCaptureActive() ;

/// @brief Method GetMicrophoneOutputLevel, addr 0x9cdfe44, size 0x8, virtual true, abstract: false, final true
inline float_t GetMicrophoneOutputLevel() ;

/// @brief Method GetMixedAudio, addr 0x9cde708, size 0x4, virtual true, abstract: false, final true
inline ::Liv::Lck::Collections::AudioBuffer* GetMixedAudio(float_t  recordingTime) ;

/// @brief Method IsGameAudioMute, addr 0x9cdfdec, size 0x48, virtual true, abstract: false, final true
inline ::Liv::Lck::LckResult_1<bool>* IsGameAudioMute() ;

/// @brief Method LateUpdate, addr 0x9cdff04, size 0xec, virtual true, abstract: false, final true
inline void LateUpdate() ;

/// @brief Method MicrophoneAudioDataCallback, addr 0x9cdf750, size 0x138, virtual false, abstract: false, final false
inline void MicrophoneAudioDataCallback(::Liv::Lck::Collections::AudioBuffer*  audioBuffer) ;

/// @brief Method MixAudioArrays, addr 0x9cde70c, size 0x298, virtual false, abstract: false, final false
inline ::Liv::Lck::Collections::AudioBuffer* MixAudioArrays(float_t  recordingTime) ;

/// @brief Method MixBlocksIntoMixedAudioBuffer, addr 0x9cdf4a4, size 0x144, virtual false, abstract: false, final false
inline ::Liv::Lck::Collections::AudioBuffer* MixBlocksIntoMixedAudioBuffer(bool  shouldIncludeMicAudio, int32_t  blocks) ;

/// @brief [Preserve]
static inline ::Liv::Lck::LckAudioMixer* New_ctor(::Liv::Lck::ILckEventBus*  eventBus, ::Liv::Lck::ILckOutputConfigurer*  outputConfigurer) ;

/// @brief Method OnEncoderStarted, addr 0x9cdfee8, size 0x1c, virtual false, abstract: false, final false
inline void OnEncoderStarted(::GlobalNamespace::LckEvents_EncoderStartedEvent  encoderStartedEvent) ;

/// @brief Method PadWithSilence, addr 0x9cdfe54, size 0x94, virtual false, abstract: false, final false
static inline void PadWithSilence(::System::Collections::Generic::Queue_1<float_t>*  audioQueue, int32_t  samplesToAdd, ::by_ref<int32_t>  runningSampleCount) ;

/// @brief Method PrepareGameAudioSyncOffset, addr 0x9cdecfc, size 0xa4, virtual false, abstract: false, final false
inline void PrepareGameAudioSyncOffset() ;

/// @brief Method ReadAvailableAudioData, addr 0x9cde9a4, size 0x1ec, virtual true, abstract: false, final true
inline void ReadAvailableAudioData() ;

/// @brief Method SetGameAudioGain, addr 0x9cdfe3c, size 0x8, virtual true, abstract: false, final true
inline void SetGameAudioGain(float_t  gain) ;

/// @brief Method SetGameAudioMute, addr 0x9cdfde4, size 0x8, virtual true, abstract: false, final true
inline ::Liv::Lck::LckResult* SetGameAudioMute(bool  isMute) ;

/// @brief Method SetMicrophoneCaptureActive, addr 0x9cdfaa4, size 0x15c, virtual true, abstract: false, final true
inline ::Liv::Lck::LckResult* SetMicrophoneCaptureActive(bool  active) ;

/// @brief Method SetMicrophoneGain, addr 0x9cdfe34, size 0x8, virtual true, abstract: false, final true
inline void SetMicrophoneGain(float_t  gain) ;

/// @brief Method VerifyAudioCaptureComponent, addr 0x9cde1bc, size 0x404, virtual false, abstract: false, final false
inline bool VerifyAudioCaptureComponent() ;

constexpr ::UnityW<::UnityEngine::Component> const& __cordl_internal_get__audioCaptureMarker() const;

constexpr ::UnityW<::UnityEngine::Component>& __cordl_internal_get__audioCaptureMarker() ;

constexpr ::Liv::Lck::Collections::AudioBuffer* const& __cordl_internal_get__gameAudioBuffer() const;

constexpr ::Liv::Lck::Collections::AudioBuffer*& __cordl_internal_get__gameAudioBuffer() ;

constexpr float_t const& __cordl_internal_get__gameAudioGain() const;

constexpr float_t& __cordl_internal_get__gameAudioGain() ;

constexpr ::System::Collections::Generic::Queue_1<float_t>* const& __cordl_internal_get__gameAudioQueue() const;

constexpr ::System::Collections::Generic::Queue_1<float_t>*& __cordl_internal_get__gameAudioQueue() ;

constexpr ::Liv::Lck::ILckAudioSource* const& __cordl_internal_get__gameAudioSource() const;

constexpr ::Liv::Lck::ILckAudioSource*& __cordl_internal_get__gameAudioSource() ;

constexpr int32_t const& __cordl_internal_get__gameAudioValueCountOffset() const;

constexpr int32_t& __cordl_internal_get__gameAudioValueCountOffset() ;

constexpr bool const& __cordl_internal_get__isGameAudioMuted() const;

constexpr bool& __cordl_internal_get__isGameAudioMuted() ;

constexpr bool const& __cordl_internal_get__isMicrophoneMuted() const;

constexpr bool& __cordl_internal_get__isMicrophoneMuted() ;

constexpr float_t const& __cordl_internal_get__lastGameAudioLevel() const;

constexpr float_t& __cordl_internal_get__lastGameAudioLevel() ;

constexpr float_t const& __cordl_internal_get__lastMicrophoneLevel() const;

constexpr float_t& __cordl_internal_get__lastMicrophoneLevel() ;

constexpr ::Liv::Lck::ILckAudioLimiter* const& __cordl_internal_get__lckAudioLimiterCurve() const;

constexpr ::Liv::Lck::ILckAudioLimiter*& __cordl_internal_get__lckAudioLimiterCurve() ;

constexpr ::Liv::Lck::ILckAudioLimiter* const& __cordl_internal_get__lckAudioLimiterHard() const;

constexpr ::Liv::Lck::ILckAudioLimiter*& __cordl_internal_get__lckAudioLimiterHard() ;

constexpr ::Liv::Lck::ILckAudioLimiter* const& __cordl_internal_get__lckAudioLimiterSoft() const;

constexpr ::Liv::Lck::ILckAudioLimiter*& __cordl_internal_get__lckAudioLimiterSoft() ;

constexpr ::Liv::Lck::Collections::AudioBuffer* const& __cordl_internal_get__micAudioBuffer() const;

constexpr ::Liv::Lck::Collections::AudioBuffer*& __cordl_internal_get__micAudioBuffer() ;

constexpr ::System::Nullable_1<float_t> const& __cordl_internal_get__micCaptureStartRecordingTime() const;

constexpr ::System::Nullable_1<float_t>& __cordl_internal_get__micCaptureStartRecordingTime() ;

constexpr float_t const& __cordl_internal_get__microphoneGain() const;

constexpr float_t& __cordl_internal_get__microphoneGain() ;

constexpr ::System::Collections::Generic::Queue_1<float_t>* const& __cordl_internal_get__microphoneQueue() const;

constexpr ::System::Collections::Generic::Queue_1<float_t>*& __cordl_internal_get__microphoneQueue() ;

constexpr ::Liv::Lck::Collections::AudioBuffer* const& __cordl_internal_get__mixedAudioBuffer() const;

constexpr ::Liv::Lck::Collections::AudioBuffer*& __cordl_internal_get__mixedAudioBuffer() ;

constexpr ::Liv::Lck::ILckAudioSource* const& __cordl_internal_get__nativeMicrophoneCapture() const;

constexpr ::Liv::Lck::ILckAudioSource*& __cordl_internal_get__nativeMicrophoneCapture() ;

constexpr int32_t const& __cordl_internal_get__remainingGameAudioValuesToAdjust() const;

constexpr int32_t& __cordl_internal_get__remainingGameAudioValuesToAdjust() ;

constexpr int32_t const& __cordl_internal_get__sampleRate() const;

constexpr int32_t& __cordl_internal_get__sampleRate() ;

constexpr int32_t const& __cordl_internal_get__totalGameSamples() const;

constexpr int32_t& __cordl_internal_get__totalGameSamples() ;

constexpr int32_t const& __cordl_internal_get__totalMicSamples() const;

constexpr int32_t& __cordl_internal_get__totalMicSamples() ;

constexpr void __cordl_internal_set__audioCaptureMarker(::UnityW<::UnityEngine::Component>  value) ;

constexpr void __cordl_internal_set__gameAudioBuffer(::Liv::Lck::Collections::AudioBuffer*  value) ;

constexpr void __cordl_internal_set__gameAudioGain(float_t  value) ;

constexpr void __cordl_internal_set__gameAudioQueue(::System::Collections::Generic::Queue_1<float_t>*  value) ;

constexpr void __cordl_internal_set__gameAudioSource(::Liv::Lck::ILckAudioSource*  value) ;

constexpr void __cordl_internal_set__gameAudioValueCountOffset(int32_t  value) ;

constexpr void __cordl_internal_set__isGameAudioMuted(bool  value) ;

constexpr void __cordl_internal_set__isMicrophoneMuted(bool  value) ;

constexpr void __cordl_internal_set__lastGameAudioLevel(float_t  value) ;

constexpr void __cordl_internal_set__lastMicrophoneLevel(float_t  value) ;

constexpr void __cordl_internal_set__lckAudioLimiterCurve(::Liv::Lck::ILckAudioLimiter*  value) ;

constexpr void __cordl_internal_set__lckAudioLimiterHard(::Liv::Lck::ILckAudioLimiter*  value) ;

constexpr void __cordl_internal_set__lckAudioLimiterSoft(::Liv::Lck::ILckAudioLimiter*  value) ;

constexpr void __cordl_internal_set__micAudioBuffer(::Liv::Lck::Collections::AudioBuffer*  value) ;

constexpr void __cordl_internal_set__micCaptureStartRecordingTime(::System::Nullable_1<float_t>  value) ;

constexpr void __cordl_internal_set__microphoneGain(float_t  value) ;

constexpr void __cordl_internal_set__microphoneQueue(::System::Collections::Generic::Queue_1<float_t>*  value) ;

constexpr void __cordl_internal_set__mixedAudioBuffer(::Liv::Lck::Collections::AudioBuffer*  value) ;

constexpr void __cordl_internal_set__nativeMicrophoneCapture(::Liv::Lck::ILckAudioSource*  value) ;

constexpr void __cordl_internal_set__remainingGameAudioValuesToAdjust(int32_t  value) ;

constexpr void __cordl_internal_set__sampleRate(int32_t  value) ;

constexpr void __cordl_internal_set__totalGameSamples(int32_t  value) ;

constexpr void __cordl_internal_set__totalMicSamples(int32_t  value) ;

/// [Preserve]
/// @brief Method .ctor, addr 0x9cdde00, size 0x3bc, virtual false, abstract: false, final false
inline void _ctor(::Liv::Lck::ILckEventBus*  eventBus, ::Liv::Lck::ILckOutputConfigurer*  outputConfigurer) ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF__lateUpdateProfileMarker() ;

/// @brief Convert to "::Liv::Lck::ILckAudioMixer"
constexpr ::Liv::Lck::ILckAudioMixer* i___Liv__Lck__ILckAudioMixer() noexcept;

/// @brief Convert to "::Liv::Lck::ILckLateUpdate"
constexpr ::Liv::Lck::ILckLateUpdate* i___Liv__Lck__ILckLateUpdate() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

static inline void setStaticF__lateUpdateProfileMarker(::Unity::Profiling::ProfilerMarker  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckAudioMixer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckAudioMixer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckAudioMixer(LckAudioMixer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckAudioMixer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckAudioMixer(LckAudioMixer const& ) = delete;

/// @brief Field NumberOfChannels offset 0xffffffff size 0x4
static constexpr int32_t  NumberOfChannels{static_cast<int32_t>(0x2)};

/// @brief Field TrackTimeDifferenceToleranceMilli offset 0xffffffff size 0x4
static constexpr int32_t  TrackTimeDifferenceToleranceMilli{static_cast<int32_t>(0x64)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24695};

/// @brief Field _targetAudioBufferLength offset 0xffffffff size 0x4
static constexpr int32_t  _targetAudioBufferLength{static_cast<int32_t>(0x400)};

/// @brief Field _gameAudioSource, offset: 0x10, size: 0x8, def value: None
 ::Liv::Lck::ILckAudioSource*  ____gameAudioSource;

/// @brief Field _isGameAudioMuted, offset: 0x18, size: 0x1, def value: None
 bool  ____isGameAudioMuted;

/// @brief Field _gameAudioGain, offset: 0x1c, size: 0x4, def value: None
 float_t  ____gameAudioGain;

/// @brief Field _gameAudioQueue, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<float_t>*  ____gameAudioQueue;

/// @brief Field _nativeMicrophoneCapture, offset: 0x28, size: 0x8, def value: None
 ::Liv::Lck::ILckAudioSource*  ____nativeMicrophoneCapture;

/// @brief Field _isMicrophoneMuted, offset: 0x30, size: 0x1, def value: None
 bool  ____isMicrophoneMuted;

/// @brief Field _microphoneGain, offset: 0x34, size: 0x4, def value: None
 float_t  ____microphoneGain;

/// @brief Field _microphoneQueue, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<float_t>*  ____microphoneQueue;

/// @brief Field _micAudioBuffer, offset: 0x40, size: 0x8, def value: None
 ::Liv::Lck::Collections::AudioBuffer*  ____micAudioBuffer;

/// @brief Field _lastMicrophoneLevel, offset: 0x48, size: 0x4, def value: None
 float_t  ____lastMicrophoneLevel;

/// @brief Field _gameAudioBuffer, offset: 0x50, size: 0x8, def value: None
 ::Liv::Lck::Collections::AudioBuffer*  ____gameAudioBuffer;

/// @brief Field _lastGameAudioLevel, offset: 0x58, size: 0x4, def value: None
 float_t  ____lastGameAudioLevel;

/// @brief Field _mixedAudioBuffer, offset: 0x60, size: 0x8, def value: None
 ::Liv::Lck::Collections::AudioBuffer*  ____mixedAudioBuffer;

/// @brief Field _remainingGameAudioValuesToAdjust, offset: 0x68, size: 0x4, def value: None
 int32_t  ____remainingGameAudioValuesToAdjust;

/// @brief Field _gameAudioValueCountOffset, offset: 0x6c, size: 0x4, def value: None
 int32_t  ____gameAudioValueCountOffset;

/// @brief Field _sampleRate, offset: 0x70, size: 0x4, def value: None
 int32_t  ____sampleRate;

/// @brief Field _audioCaptureMarker, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Component>  ____audioCaptureMarker;

/// @brief Field _lckAudioLimiterHard, offset: 0x80, size: 0x8, def value: None
 ::Liv::Lck::ILckAudioLimiter*  ____lckAudioLimiterHard;

/// @brief Field _lckAudioLimiterSoft, offset: 0x88, size: 0x8, def value: None
 ::Liv::Lck::ILckAudioLimiter*  ____lckAudioLimiterSoft;

/// @brief Field _lckAudioLimiterCurve, offset: 0x90, size: 0x8, def value: None
 ::Liv::Lck::ILckAudioLimiter*  ____lckAudioLimiterCurve;

/// @brief Field _micCaptureStartRecordingTime, offset: 0x98, size: 0x10, def value: None
 ::System::Nullable_1<float_t>  ____micCaptureStartRecordingTime;

/// @brief Field _totalGameSamples, offset: 0xa8, size: 0x4, def value: None
 int32_t  ____totalGameSamples;

/// @brief Size padding 0xa8 - 0xb0 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

/// @brief Field _totalMicSamples, offset: 0xac, size: 0x4, def value: None
 int32_t  ____totalMicSamples;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::LckAudioMixer, ____gameAudioSource) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckAudioMixer, ____isGameAudioMuted) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckAudioMixer, ____gameAudioGain) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckAudioMixer, ____gameAudioQueue) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckAudioMixer, ____nativeMicrophoneCapture) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckAudioMixer, ____isMicrophoneMuted) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckAudioMixer, ____microphoneGain) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckAudioMixer, ____microphoneQueue) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckAudioMixer, ____micAudioBuffer) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckAudioMixer, ____lastMicrophoneLevel) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckAudioMixer, ____gameAudioBuffer) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckAudioMixer, ____lastGameAudioLevel) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckAudioMixer, ____mixedAudioBuffer) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckAudioMixer, ____remainingGameAudioValuesToAdjust) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckAudioMixer, ____gameAudioValueCountOffset) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckAudioMixer, ____sampleRate) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckAudioMixer, ____audioCaptureMarker) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckAudioMixer, ____lckAudioLimiterHard) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckAudioMixer, ____lckAudioLimiterSoft) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckAudioMixer, ____lckAudioLimiterCurve) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckAudioMixer, ____micCaptureStartRecordingTime) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckAudioMixer, ____totalGameSamples) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckAudioMixer, ____totalMicSamples) == 0xac, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::LckAudioMixer) == 0xa8, "Size mismatch!");

} // namespace end def Liv::Lck
