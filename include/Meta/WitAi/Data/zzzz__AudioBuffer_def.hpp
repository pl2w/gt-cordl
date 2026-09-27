#pragma once
// IWYU pragma private; include "Meta/WitAi/Data/AudioBuffer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Meta/Voice/zzzz__VoiceAudioInputState_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AudioBuffer)
namespace Meta::Voice::Logging {
class IVLogger;
}
namespace Meta::Voice {
struct VoiceAudioInputState;
}
namespace Meta::WitAi::Data {
class AudioBufferConfiguration;
}
namespace Meta::WitAi::Data {
class AudioBuffer__UpdateVolume_d__70;
}
namespace Meta::WitAi::Data {
class AudioBuffer__WaitForSampleReady_d__68;
}
namespace Meta::WitAi::Data {
class AudioEncoding;
}
namespace Meta::WitAi::Data {
class IAudioBufferProvider;
}
namespace Meta::WitAi::Data {
template<typename T>
class RingBuffer_1_Marker;
}
namespace Meta::WitAi::Data {
template<typename T>
class RingBuffer_1;
}
namespace Meta::WitAi::Events {
class AudioBufferEvents;
}
namespace Meta::WitAi::Interfaces {
class IAudioInputSource;
}
namespace Meta::WitAi::Lib {
class IAudioLevelRangeProvider;
}
namespace Meta::WitAi::Lib {
class Mic;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace UnityEngine {
class Component;
}
namespace UnityEngine {
class Coroutine;
}
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace Meta::WitAi::Data {
class AudioBuffer;
}
namespace Meta::WitAi::Data {
class AudioBuffer__UpdateVolume_d__70;
}
namespace Meta::WitAi::Data {
class AudioBuffer__WaitForSampleReady_d__68;
}
// Write type traits
MARK_REF_T(::Meta::WitAi::Data::AudioBuffer*);
MARK_REF_T(::Meta::WitAi::Data::AudioBuffer__UpdateVolume_d__70*);
MARK_REF_T(::Meta::WitAi::Data::AudioBuffer__WaitForSampleReady_d__68*);
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Data::AudioBuffer*, "Meta.WitAi.Data", "AudioBuffer");
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Data::AudioBuffer__UpdateVolume_d__70*, "Meta.WitAi.Data", "AudioBuffer/<UpdateVolume>d__70");
DEFINE_IL2CPP_CLASS(::Meta::WitAi::Data::AudioBuffer__WaitForSampleReady_d__68*, "Meta.WitAi.Data", "AudioBuffer/<WaitForSampleReady>d__68");
// [LogCategory((Meta.Voice.Logging.LogCategory)9, (Meta.Voice.Logging.LogCategory)16)]
// Dependencies Meta.Voice.VoiceAudioInputState, UnityEngine.MonoBehaviour
namespace Meta::WitAi::Data {
// Is value type: false
// CS Name: Meta.WitAi.Data.AudioBuffer
class CORDL_TYPE AudioBuffer : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _UpdateVolume_d__70 = ::Meta::WitAi::Data::AudioBuffer__UpdateVolume_d__70;

using _WaitForSampleReady_d__68 = ::Meta::WitAi::Data::AudioBuffer__WaitForSampleReady_d__68;

/// @brief Field ALLOWED_SAMPLE_RATES, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ALLOWED_SAMPLE_RATES, put=setStaticF_ALLOWED_SAMPLE_RATES)) ::ArrayW<int32_t>  ALLOWED_SAMPLE_RATES;

/// @brief Field AudioBufferProvider, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_AudioBufferProvider, put=setStaticF_AudioBufferProvider)) ::Meta::WitAi::Data::IAudioBufferProvider*  AudioBufferProvider;

 __declspec(property(get=get_AudioEncoding)) ::Meta::WitAi::Data::AudioEncoding*  AudioEncoding;

 __declspec(property(get=get_AudioState, put=set_AudioState)) ::Meta::Voice::VoiceAudioInputState  AudioState;

 __declspec(property(get=get_Events)) ::Meta::WitAi::Events::AudioBufferEvents*  Events;

 __declspec(property(get=get_IsInputAvailable)) bool  IsInputAvailable;

 __declspec(property(get=get_MicInput, put=set_MicInput)) ::Meta::WitAi::Interfaces::IAudioInputSource*  MicInput;

 __declspec(property(get=get_MicMaxAudioLevel)) float_t  MicMaxAudioLevel;

 __declspec(property(get=get_MicMaxLevel, put=set_MicMaxLevel)) float_t  MicMaxLevel;

 __declspec(property(get=get_MicMinAudioLevel)) float_t  MicMinAudioLevel;

/// @brief Field <AudioState>k__BackingField, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get__AudioState_k__BackingField, put=__cordl_internal_set__AudioState_k__BackingField)) ::Meta::Voice::VoiceAudioInputState  _AudioState_k__BackingField;

/// @brief Field <MicMaxLevel>k__BackingField, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get__MicMaxLevel_k__BackingField, put=__cordl_internal_set__MicMaxLevel_k__BackingField)) float_t  _MicMaxLevel_k__BackingField;

/// @brief Field <_log>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___log_k__BackingField, put=setStaticF___log_k__BackingField)) ::Meta::Voice::Logging::IVLogger*  __log_k__BackingField;

/// @brief Field _active, offset 0x48, size 0x1 
 __declspec(property(get=__cordl_internal_get__active, put=__cordl_internal_set__active)) bool  _active;

/// @brief Field _instance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__instance, put=setStaticF__instance)) ::UnityW<::Meta::WitAi::Data::AudioBuffer>  _instance;

/// @brief Field _instantiatedMic, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__instantiatedMic, put=__cordl_internal_set__instantiatedMic)) ::UnityW<::Meta::WitAi::Lib::Mic>  _instantiatedMic;

/// @brief Field _isQuitting, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__isQuitting, put=setStaticF__isQuitting)) bool  _isQuitting;

/// @brief Field _lastSampleTime, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__lastSampleTime, put=__cordl_internal_set__lastSampleTime)) int64_t  _lastSampleTime;

/// @brief Field _measureSampleTotal, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get__measureSampleTotal, put=__cordl_internal_set__measureSampleTotal)) int64_t  _measureSampleTotal;

/// @brief Field _measuredSampleRateCount, offset 0xb0, size 0x4 
 __declspec(property(get=__cordl_internal_get__measuredSampleRateCount, put=__cordl_internal_set__measuredSampleRateCount)) int32_t  _measuredSampleRateCount;

/// @brief Field _measuredSampleRates, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get__measuredSampleRates, put=__cordl_internal_set__measuredSampleRates)) ::ArrayW<double_t>  _measuredSampleRates;

/// @brief Field _micInput, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__micInput, put=__cordl_internal_set__micInput)) ::UnityW<::UnityEngine::Object>  _micInput;

/// @brief Field _micLevelRange, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__micLevelRange, put=__cordl_internal_set__micLevelRange)) ::Meta::WitAi::Lib::IAudioLevelRangeProvider*  _micLevelRange;

/// @brief Field _outputBuffer, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__outputBuffer, put=__cordl_internal_set__outputBuffer)) ::Meta::WitAi::Data::RingBuffer_1<uint8_t>*  _outputBuffer;

/// @brief Field _recorders, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__recorders, put=__cordl_internal_set__recorders)) ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Component>>*  _recorders;

/// @brief Field _sampleReadyCoroutine, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__sampleReadyCoroutine, put=__cordl_internal_set__sampleReadyCoroutine)) ::UnityEngine::Coroutine*  _sampleReadyCoroutine;

/// @brief Field _sampleReadyMarker, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__sampleReadyMarker, put=__cordl_internal_set__sampleReadyMarker)) ::Meta::WitAi::Data::RingBuffer_1_Marker<uint8_t>*  _sampleReadyMarker;

/// @brief Field _sampleReadyMaxLevel, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get__sampleReadyMaxLevel, put=__cordl_internal_set__sampleReadyMaxLevel)) float_t  _sampleReadyMaxLevel;

/// @brief Field _startSampleTime, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__startSampleTime, put=__cordl_internal_set__startSampleTime)) int64_t  _startSampleTime;

/// @brief Field _totalSampleChunks, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get__totalSampleChunks, put=__cordl_internal_set__totalSampleChunks)) int32_t  _totalSampleChunks;

/// @brief Field _volumeUpdate, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__volumeUpdate, put=__cordl_internal_set__volumeUpdate)) ::UnityEngine::Coroutine*  _volumeUpdate;

/// @brief Field alwaysRecording, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get_alwaysRecording, put=__cordl_internal_set_alwaysRecording)) bool  alwaysRecording;

/// @brief Field audioBufferConfiguration, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_audioBufferConfiguration, put=__cordl_internal_set_audioBufferConfiguration)) ::Meta::WitAi::Data::AudioBufferConfiguration*  audioBufferConfiguration;

/// @brief Field events, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_events, put=__cordl_internal_set_events)) ::Meta::WitAi::Events::AudioBufferEvents*  events;

/// @brief Field instantiateMic, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_instantiateMic, put=setStaticF_instantiateMic)) bool  instantiateMic;

/// @brief Method Awake, addr 0x9e97f8c, size 0x68, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method CallSampleReady, addr 0x9e9964c, size 0x174, virtual false, abstract: false, final false
inline void CallSampleReady(::Meta::WitAi::Data::RingBuffer_1_Marker<uint8_t>*  marker) ;

/// @brief Method CanInstantiate, addr 0x9e96d94, size 0x94, virtual false, abstract: false, final false
static inline bool CanInstantiate() ;

/// @brief Method CreateMarker, addr 0x9e99078, size 0x54, virtual false, abstract: false, final false
inline ::Meta::WitAi::Data::RingBuffer_1_Marker<uint8_t>* CreateMarker() ;

/// @brief Method CreateMarker, addr 0x9e99d70, size 0x94, virtual false, abstract: false, final false
inline ::Meta::WitAi::Data::RingBuffer_1_Marker<uint8_t>* CreateMarker(float_t  offset) ;

/// @brief Method EncodeAndPush, addr 0x9e990cc, size 0x558, virtual false, abstract: false, final false
inline float_t EncodeAndPush(::ArrayW<float_t>  samples, int32_t  offset, int32_t  length) ;

/// @brief Method FindOrCreateInputSource, addr 0x9e97624, size 0x2d0, virtual false, abstract: false, final false
inline ::Meta::WitAi::Interfaces::IAudioInputSource* FindOrCreateInputSource() ;

/// @brief Method GetAverageSampleRate, addr 0x9e99e04, size 0x58, virtual false, abstract: false, final false
static inline double_t GetAverageSampleRate(::ArrayW<double_t>  sampleRates, int32_t  sampleRateCount) ;

/// @brief Method GetClosestSampleRate, addr 0x9e99e5c, size 0x1c0, virtual false, abstract: false, final false
static inline int32_t GetClosestSampleRate(double_t  samplesPerSecond) ;

/// @brief Method GetEncodingMinMax, addr 0x9e99cf8, size 0x78, virtual false, abstract: false, final false
inline void GetEncodingMinMax(int32_t  bits, bool  _cordl_signed, ::by_ref<int64_t>  encodingMin, ::by_ref<int64_t>  encodingMax) ;

/// @brief Method InitializeMicDataBuffer, addr 0x9e97ff4, size 0x404, virtual false, abstract: false, final false
inline void InitializeMicDataBuffer() ;

/// @brief Method IsRecording, addr 0x9e97f34, size 0x58, virtual false, abstract: false, final false
inline bool IsRecording(::UnityEngine::Component*  component) ;

static inline ::Meta::WitAi::Data::AudioBuffer* New_ctor() ;

/// @brief Method OnApplicationQuit, addr 0x9e96ce0, size 0x5c, virtual false, abstract: false, final false
inline void OnApplicationQuit() ;

/// @brief Method OnAudioSampleReady, addr 0x9e98ee4, size 0x128, virtual false, abstract: false, final false
inline void OnAudioSampleReady(::ArrayW<float_t>  samples, int32_t  offset, int32_t  length) ;

/// @brief Method OnDestroy, addr 0x9e983f8, size 0xc4, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x9e98900, size 0x30, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x9e984bc, size 0x444, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method OnMicRecordFailed, addr 0x9e98c70, size 0x4, virtual false, abstract: false, final false
inline void OnMicRecordFailed() ;

/// @brief Method OnMicRecordStarted, addr 0x9e98ba4, size 0xcc, virtual false, abstract: false, final false
inline void OnMicRecordStarted(::UnityEngine::Component*  component) ;

/// @brief Method OnMicRecordStop, addr 0x9e98c74, size 0x188, virtual false, abstract: false, final false
inline void OnMicRecordStop() ;

/// @brief Method OnMicRecordStopped, addr 0x9e98dfc, size 0xcc, virtual false, abstract: false, final false
inline void OnMicRecordStopped(::UnityEngine::Component*  component) ;

/// @brief Method OnMicRecordSuccess, addr 0x9e98a78, size 0x12c, virtual false, abstract: false, final false
inline void OnMicRecordSuccess() ;

/// @brief Method OnMicSampleReady, addr 0x9e98ec8, size 0x1c, virtual false, abstract: false, final false
inline void OnMicSampleReady(int32_t  sampleCount, ::ArrayW<float_t>  samples, float_t  levelMax) ;

/// @brief Method SetAudioState, addr 0x9e98930, size 0x90, virtual false, abstract: false, final false
inline void SetAudioState(::Meta::Voice::VoiceAudioInputState  newAudioState) ;

/// @brief Method SetInputDelegates, addr 0x9e978f4, size 0x4ac, virtual false, abstract: false, final false
inline void SetInputDelegates(bool  add) ;

/// @brief Method SetInputSource, addr 0x9e96e4c, size 0x7d8, virtual false, abstract: false, final false
inline void SetInputSource(::Meta::WitAi::Interfaces::IAudioInputSource*  newInput) ;

/// [RuntimeInitializeOnLoadMethod((UnityEngine.RuntimeInitializeLoadType)4)]
/// @brief Method SingletonInit, addr 0x9e96d3c, size 0x58, virtual false, abstract: false, final false
static inline void SingletonInit() ;

/// @brief Method StartRecording, addr 0x9e8438c, size 0x1d8, virtual false, abstract: false, final false
inline void StartRecording(::UnityEngine::Component*  component) ;

/// @brief Method StopRecording, addr 0x9e847a0, size 0x1c0, virtual false, abstract: false, final false
inline void StopRecording(::UnityEngine::Component*  component) ;

/// @brief Method StopUpdateVolume, addr 0x9e989c0, size 0x4c, virtual false, abstract: false, final false
inline void StopUpdateVolume() ;

/// @brief Method UpdateSampleRate, addr 0x9e997e8, size 0x510, virtual false, abstract: false, final false
inline void UpdateSampleRate(int32_t  sampleLength) ;

/// [IteratorStateMachine(typeof(Meta.WitAi.Data.AudioBuffer::<UpdateVolume>d__70))]
/// @brief Method UpdateVolume, addr 0x9e98a0c, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* UpdateVolume() ;

/// [IteratorStateMachine(typeof(Meta.WitAi.Data.AudioBuffer::<WaitForSampleReady>d__68))]
/// @brief Method WaitForSampleReady, addr 0x9e9900c, size 0x6c, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* WaitForSampleReady() ;

constexpr ::Meta::Voice::VoiceAudioInputState const& __cordl_internal_get__AudioState_k__BackingField() const;

constexpr ::Meta::Voice::VoiceAudioInputState& __cordl_internal_get__AudioState_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__MicMaxLevel_k__BackingField() const;

constexpr float_t& __cordl_internal_get__MicMaxLevel_k__BackingField() ;

constexpr bool const& __cordl_internal_get__active() const;

constexpr bool& __cordl_internal_get__active() ;

constexpr ::UnityW<::Meta::WitAi::Lib::Mic> const& __cordl_internal_get__instantiatedMic() const;

constexpr ::UnityW<::Meta::WitAi::Lib::Mic>& __cordl_internal_get__instantiatedMic() ;

constexpr int64_t const& __cordl_internal_get__lastSampleTime() const;

constexpr int64_t& __cordl_internal_get__lastSampleTime() ;

constexpr int64_t const& __cordl_internal_get__measureSampleTotal() const;

constexpr int64_t& __cordl_internal_get__measureSampleTotal() ;

constexpr int32_t const& __cordl_internal_get__measuredSampleRateCount() const;

constexpr int32_t& __cordl_internal_get__measuredSampleRateCount() ;

constexpr ::ArrayW<double_t> const& __cordl_internal_get__measuredSampleRates() const;

constexpr ::ArrayW<double_t>& __cordl_internal_get__measuredSampleRates() ;

constexpr ::UnityW<::UnityEngine::Object> const& __cordl_internal_get__micInput() const;

constexpr ::UnityW<::UnityEngine::Object>& __cordl_internal_get__micInput() ;

constexpr ::Meta::WitAi::Lib::IAudioLevelRangeProvider* const& __cordl_internal_get__micLevelRange() const;

constexpr ::Meta::WitAi::Lib::IAudioLevelRangeProvider*& __cordl_internal_get__micLevelRange() ;

constexpr ::Meta::WitAi::Data::RingBuffer_1<uint8_t>* const& __cordl_internal_get__outputBuffer() const;

constexpr ::Meta::WitAi::Data::RingBuffer_1<uint8_t>*& __cordl_internal_get__outputBuffer() ;

constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Component>>* const& __cordl_internal_get__recorders() const;

constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Component>>*& __cordl_internal_get__recorders() ;

constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get__sampleReadyCoroutine() const;

constexpr ::UnityEngine::Coroutine*& __cordl_internal_get__sampleReadyCoroutine() ;

constexpr ::Meta::WitAi::Data::RingBuffer_1_Marker<uint8_t>* const& __cordl_internal_get__sampleReadyMarker() const;

constexpr ::Meta::WitAi::Data::RingBuffer_1_Marker<uint8_t>*& __cordl_internal_get__sampleReadyMarker() ;

constexpr float_t const& __cordl_internal_get__sampleReadyMaxLevel() const;

constexpr float_t& __cordl_internal_get__sampleReadyMaxLevel() ;

constexpr int64_t const& __cordl_internal_get__startSampleTime() const;

constexpr int64_t& __cordl_internal_get__startSampleTime() ;

constexpr int32_t const& __cordl_internal_get__totalSampleChunks() const;

constexpr int32_t& __cordl_internal_get__totalSampleChunks() ;

constexpr ::UnityEngine::Coroutine* const& __cordl_internal_get__volumeUpdate() const;

constexpr ::UnityEngine::Coroutine*& __cordl_internal_get__volumeUpdate() ;

constexpr bool const& __cordl_internal_get_alwaysRecording() const;

constexpr bool& __cordl_internal_get_alwaysRecording() ;

constexpr ::Meta::WitAi::Data::AudioBufferConfiguration* const& __cordl_internal_get_audioBufferConfiguration() const;

constexpr ::Meta::WitAi::Data::AudioBufferConfiguration*& __cordl_internal_get_audioBufferConfiguration() ;

constexpr ::Meta::WitAi::Events::AudioBufferEvents* const& __cordl_internal_get_events() const;

constexpr ::Meta::WitAi::Events::AudioBufferEvents*& __cordl_internal_get_events() ;

constexpr void __cordl_internal_set__AudioState_k__BackingField(::Meta::Voice::VoiceAudioInputState  value) ;

constexpr void __cordl_internal_set__MicMaxLevel_k__BackingField(float_t  value) ;

constexpr void __cordl_internal_set__active(bool  value) ;

constexpr void __cordl_internal_set__instantiatedMic(::UnityW<::Meta::WitAi::Lib::Mic>  value) ;

constexpr void __cordl_internal_set__lastSampleTime(int64_t  value) ;

constexpr void __cordl_internal_set__measureSampleTotal(int64_t  value) ;

constexpr void __cordl_internal_set__measuredSampleRateCount(int32_t  value) ;

constexpr void __cordl_internal_set__measuredSampleRates(::ArrayW<double_t>  value) ;

constexpr void __cordl_internal_set__micInput(::UnityW<::UnityEngine::Object>  value) ;

constexpr void __cordl_internal_set__micLevelRange(::Meta::WitAi::Lib::IAudioLevelRangeProvider*  value) ;

constexpr void __cordl_internal_set__outputBuffer(::Meta::WitAi::Data::RingBuffer_1<uint8_t>*  value) ;

constexpr void __cordl_internal_set__recorders(::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Component>>*  value) ;

constexpr void __cordl_internal_set__sampleReadyCoroutine(::UnityEngine::Coroutine*  value) ;

constexpr void __cordl_internal_set__sampleReadyMarker(::Meta::WitAi::Data::RingBuffer_1_Marker<uint8_t>*  value) ;

constexpr void __cordl_internal_set__sampleReadyMaxLevel(float_t  value) ;

constexpr void __cordl_internal_set__startSampleTime(int64_t  value) ;

constexpr void __cordl_internal_set__totalSampleChunks(int32_t  value) ;

constexpr void __cordl_internal_set__volumeUpdate(::UnityEngine::Coroutine*  value) ;

constexpr void __cordl_internal_set_alwaysRecording(bool  value) ;

constexpr void __cordl_internal_set_audioBufferConfiguration(::Meta::WitAi::Data::AudioBufferConfiguration*  value) ;

constexpr void __cordl_internal_set_events(::Meta::WitAi::Events::AudioBufferEvents*  value) ;

/// @brief Method .ctor, addr 0x9e9a01c, size 0x130, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::ArrayW<int32_t> getStaticF_ALLOWED_SAMPLE_RATES() ;

static inline ::Meta::WitAi::Data::IAudioBufferProvider* getStaticF_AudioBufferProvider() ;

static inline ::Meta::Voice::Logging::IVLogger* getStaticF___log_k__BackingField() ;

static inline ::UnityW<::Meta::WitAi::Data::AudioBuffer> getStaticF__instance() ;

static inline bool getStaticF__isQuitting() ;

static inline bool getStaticF_instantiateMic() ;

/// @brief Method get_AudioEncoding, addr 0x9e96e28, size 0x18, virtual false, abstract: false, final false
inline ::Meta::WitAi::Data::AudioEncoding* get_AudioEncoding() ;

/// [CompilerGenerated]
/// @brief Method get_AudioState, addr 0x9e97f14, size 0x8, virtual false, abstract: false, final false
inline ::Meta::Voice::VoiceAudioInputState get_AudioState() ;

/// @brief Method get_Events, addr 0x9e96e40, size 0x8, virtual false, abstract: false, final false
inline ::Meta::WitAi::Events::AudioBufferEvents* get_Events() ;

/// @brief Method get_Instance, addr 0x9e83b20, size 0x530, virtual false, abstract: false, final false
static inline ::UnityW<::Meta::WitAi::Data::AudioBuffer> get_Instance() ;

/// @brief Method get_IsInputAvailable, addr 0x9e97efc, size 0x18, virtual false, abstract: false, final false
inline bool get_IsInputAvailable() ;

/// @brief Method get_MicInput, addr 0x9e84050, size 0x48, virtual false, abstract: false, final false
inline ::Meta::WitAi::Interfaces::IAudioInputSource* get_MicInput() ;

/// @brief Method get_MicMaxAudioLevel, addr 0x9e97e4c, size 0xb0, virtual false, abstract: false, final false
inline float_t get_MicMaxAudioLevel() ;

/// [CompilerGenerated]
/// @brief Method get_MicMaxLevel, addr 0x9e97f24, size 0x8, virtual false, abstract: false, final false
inline float_t get_MicMaxLevel() ;

/// @brief Method get_MicMinAudioLevel, addr 0x9e97da0, size 0xac, virtual false, abstract: false, final false
inline float_t get_MicMinAudioLevel() ;

/// [CompilerGenerated]
/// @brief Method get__log, addr 0x9e96c88, size 0x58, virtual false, abstract: false, final false
static inline ::Meta::Voice::Logging::IVLogger* get__log() ;

static inline void setStaticF_ALLOWED_SAMPLE_RATES(::ArrayW<int32_t>  value) ;

static inline void setStaticF_AudioBufferProvider(::Meta::WitAi::Data::IAudioBufferProvider*  value) ;

static inline void setStaticF___log_k__BackingField(::Meta::Voice::Logging::IVLogger*  value) ;

static inline void setStaticF__instance(::UnityW<::Meta::WitAi::Data::AudioBuffer>  value) ;

static inline void setStaticF__isQuitting(bool  value) ;

static inline void setStaticF_instantiateMic(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_AudioState, addr 0x9e97f1c, size 0x8, virtual false, abstract: false, final false
inline void set_AudioState(::Meta::Voice::VoiceAudioInputState  value) ;

/// @brief Method set_MicInput, addr 0x9e96e48, size 0x4, virtual false, abstract: false, final false
inline void set_MicInput(::Meta::WitAi::Interfaces::IAudioInputSource*  value) ;

/// [CompilerGenerated]
/// @brief Method set_MicMaxLevel, addr 0x9e97f2c, size 0x8, virtual false, abstract: false, final false
inline void set_MicMaxLevel(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioBuffer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioBuffer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioBuffer(AudioBuffer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioBuffer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioBuffer(AudioBuffer const& ) = delete;

/// @brief Field DEFAULT_OBJECT_NAME offset 0xffffffff size 0x8
static constexpr ::ConstString  DEFAULT_OBJECT_NAME{u"AudioBuffer"};

/// @brief Field MEASURE_AVERAGE_COUNT offset 0xffffffff size 0x4
static constexpr int32_t  MEASURE_AVERAGE_COUNT{static_cast<int32_t>(0x14)};

/// @brief Field MEASURE_TICKS offset 0xffffffff size 0x4
static constexpr int32_t  MEASURE_TICKS{static_cast<int32_t>(0x2625a0)};

/// @brief Field MIC_RESET offset 0xffffffff size 0x4
static constexpr float_t  MIC_RESET{static_cast<float_t>(-1.0f)};

/// @brief Field TIMEOUT_TICKS offset 0xffffffff size 0x4
static constexpr int32_t  TIMEOUT_TICKS{static_cast<int32_t>(0x7a120)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25694};

/// [Tooltip("If set to true, the audio buffer will always be recording.")]
/// [SerializeField]
/// @brief Field alwaysRecording, offset: 0x20, size: 0x1, def value: None
 bool  ___alwaysRecording;

/// [Tooltip("Configuration settings for the audio buffer.")]
/// [SerializeField]
/// @brief Field audioBufferConfiguration, offset: 0x28, size: 0x8, def value: None
 ::Meta::WitAi::Data::AudioBufferConfiguration*  ___audioBufferConfiguration;

/// [TooltipBox("Events triggered when AudioBuffer processes and receives audio data.")]
/// [SerializeField]
/// @brief Field events, offset: 0x30, size: 0x8, def value: None
 ::Meta::WitAi::Events::AudioBufferEvents*  ___events;

/// [ObjectType(typeof(Meta.WitAi.Interfaces.IAudioInputSource), new[] {  })]
/// [SerializeField]
/// @brief Field _micInput, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Object>  ____micInput;

/// @brief Field _micLevelRange, offset: 0x40, size: 0x8, def value: None
 ::Meta::WitAi::Lib::IAudioLevelRangeProvider*  ____micLevelRange;

/// @brief Field _active, offset: 0x48, size: 0x1, def value: None
 bool  ____active;

/// @brief Field _instantiatedMic, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::Meta::WitAi::Lib::Mic>  ____instantiatedMic;

/// @brief Field _totalSampleChunks, offset: 0x58, size: 0x4, def value: None
 int32_t  ____totalSampleChunks;

/// @brief Field _outputBuffer, offset: 0x60, size: 0x8, def value: None
 ::Meta::WitAi::Data::RingBuffer_1<uint8_t>*  ____outputBuffer;

/// @brief Field _recorders, offset: 0x68, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Component>>*  ____recorders;

/// [CompilerGenerated]
/// @brief Field <AudioState>k__BackingField, offset: 0x70, size: 0x4, def value: None
 ::Meta::Voice::VoiceAudioInputState  ____AudioState_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <MicMaxLevel>k__BackingField, offset: 0x74, size: 0x4, def value: None
 float_t  ____MicMaxLevel_k__BackingField;

/// @brief Field _volumeUpdate, offset: 0x78, size: 0x8, def value: None
 ::UnityEngine::Coroutine*  ____volumeUpdate;

/// @brief Field _sampleReadyCoroutine, offset: 0x80, size: 0x8, def value: None
 ::UnityEngine::Coroutine*  ____sampleReadyCoroutine;

/// @brief Field _sampleReadyMarker, offset: 0x88, size: 0x8, def value: None
 ::Meta::WitAi::Data::RingBuffer_1_Marker<uint8_t>*  ____sampleReadyMarker;

/// @brief Field _sampleReadyMaxLevel, offset: 0x90, size: 0x4, def value: None
 float_t  ____sampleReadyMaxLevel;

/// @brief Field _lastSampleTime, offset: 0x98, size: 0x8, def value: None
 int64_t  ____lastSampleTime;

/// @brief Field _startSampleTime, offset: 0xa0, size: 0x8, def value: None
 int64_t  ____startSampleTime;

/// @brief Field _measureSampleTotal, offset: 0xa8, size: 0x8, def value: None
 int64_t  ____measureSampleTotal;

/// @brief Field _measuredSampleRateCount, offset: 0xb0, size: 0x4, def value: None
 int32_t  ____measuredSampleRateCount;

/// @brief Field _measuredSampleRates, offset: 0xb8, size: 0x8, def value: None
 ::ArrayW<double_t>  ____measuredSampleRates;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::Data::AudioBuffer, ___alwaysRecording) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Data::AudioBuffer, ___audioBufferConfiguration) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Data::AudioBuffer, ___events) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Data::AudioBuffer, ____micInput) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Data::AudioBuffer, ____micLevelRange) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Data::AudioBuffer, ____active) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Data::AudioBuffer, ____instantiatedMic) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Data::AudioBuffer, ____totalSampleChunks) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Data::AudioBuffer, ____outputBuffer) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Data::AudioBuffer, ____recorders) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Data::AudioBuffer, ____AudioState_k__BackingField) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Data::AudioBuffer, ____MicMaxLevel_k__BackingField) == 0x74, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Data::AudioBuffer, ____volumeUpdate) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Data::AudioBuffer, ____sampleReadyCoroutine) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Data::AudioBuffer, ____sampleReadyMarker) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Data::AudioBuffer, ____sampleReadyMaxLevel) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Data::AudioBuffer, ____lastSampleTime) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Data::AudioBuffer, ____startSampleTime) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Data::AudioBuffer, ____measureSampleTotal) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Data::AudioBuffer, ____measuredSampleRateCount) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Data::AudioBuffer, ____measuredSampleRates) == 0xb8, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::Data::AudioBuffer) == 0xc0, "Size mismatch!");

} // namespace end def Meta::WitAi::Data
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::WitAi::Data {
// Is value type: false
// CS Name: Meta.WitAi.Data.AudioBuffer/<WaitForSampleReady>d__68
class CORDL_TYPE AudioBuffer__WaitForSampleReady_d__68 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Meta::WitAi::Data::AudioBuffer>  __4__this;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x9e9a528, size 0x158, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Meta::WitAi::Data::AudioBuffer__WaitForSampleReady_d__68* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x9e9a680, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x9e9a688, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x9e9a6c0, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x9e9a524, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::Meta::WitAi::Data::AudioBuffer> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Meta::WitAi::Data::AudioBuffer>& __cordl_internal_get___4__this() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Meta::WitAi::Data::AudioBuffer>  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x9e99624, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioBuffer__WaitForSampleReady_d__68() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioBuffer__WaitForSampleReady_d__68", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioBuffer__WaitForSampleReady_d__68(AudioBuffer__WaitForSampleReady_d__68 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioBuffer__WaitForSampleReady_d__68", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioBuffer__WaitForSampleReady_d__68(AudioBuffer__WaitForSampleReady_d__68 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25693};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Meta::WitAi::Data::AudioBuffer>  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::Data::AudioBuffer__WaitForSampleReady_d__68, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Data::AudioBuffer__WaitForSampleReady_d__68, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Data::AudioBuffer__WaitForSampleReady_d__68, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::Data::AudioBuffer__WaitForSampleReady_d__68) == 0x28, "Size mismatch!");

} // namespace end def Meta::WitAi::Data
// [CompilerGenerated]
// Dependencies System.Object
namespace Meta::WitAi::Data {
// Is value type: false
// CS Name: Meta.WitAi.Data.AudioBuffer/<UpdateVolume>d__70
class CORDL_TYPE AudioBuffer__UpdateVolume_d__70 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::UnityW<::Meta::WitAi::Data::AudioBuffer>  __4__this;

/// @brief Field <volume>5__2, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get__volume_5__2, put=__cordl_internal_set__volume_5__2)) float_t  _volume_5__2;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x9e9a368, size 0x174, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Meta::WitAi::Data::AudioBuffer__UpdateVolume_d__70* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x9e9a4dc, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x9e9a4e4, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x9e9a51c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x9e9a364, size 0x4, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::UnityW<::Meta::WitAi::Data::AudioBuffer> const& __cordl_internal_get___4__this() const;

constexpr ::UnityW<::Meta::WitAi::Data::AudioBuffer>& __cordl_internal_get___4__this() ;

constexpr float_t const& __cordl_internal_get__volume_5__2() const;

constexpr float_t& __cordl_internal_get__volume_5__2() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::UnityW<::Meta::WitAi::Data::AudioBuffer>  value) ;

constexpr void __cordl_internal_set__volume_5__2(float_t  value) ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x9e997c0, size 0x28, virtual false, abstract: false, final false
inline void _ctor(int32_t  __1__state) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept;

/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* i___System__Collections__IEnumerator() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioBuffer__UpdateVolume_d__70() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioBuffer__UpdateVolume_d__70", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioBuffer__UpdateVolume_d__70(AudioBuffer__UpdateVolume_d__70 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioBuffer__UpdateVolume_d__70", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioBuffer__UpdateVolume_d__70(AudioBuffer__UpdateVolume_d__70 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25692};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::Meta::WitAi::Data::AudioBuffer>  _____4__this;

/// @brief Field <volume>5__2, offset: 0x28, size: 0x4, def value: None
 float_t  ____volume_5__2;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Meta::WitAi::Data::AudioBuffer__UpdateVolume_d__70, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Data::AudioBuffer__UpdateVolume_d__70, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Data::AudioBuffer__UpdateVolume_d__70, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Meta::WitAi::Data::AudioBuffer__UpdateVolume_d__70, ____volume_5__2) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Meta::WitAi::Data::AudioBuffer__UpdateVolume_d__70) == 0x30, "Size mismatch!");

} // namespace end def Meta::WitAi::Data
