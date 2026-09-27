#pragma once
// IWYU pragma private; include "GlobalNamespace/AudioClipAudioSource.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(AudioClipAudioSource)
namespace GlobalNamespace {
struct AudioClipAudioSource__TransmitAudio_d__38;
}
namespace GlobalNamespace {
class AudioClipAudioSource___c__DisplayClass48_0;
}
namespace Meta::Voice::Logging {
class IVLogger;
}
namespace Meta::WitAi::Data {
class AudioEncoding;
}
namespace Meta::WitAi::Interfaces {
class IAudioInputSource;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
template<typename T1,typename T2,typename T3>
class Action_3;
}
namespace System {
class Action;
}
namespace UnityEngine {
class AudioClip;
}
namespace UnityEngine {
class AudioSource;
}
// Forward declare root types
namespace GlobalNamespace {
class AudioClipAudioSource;
}
namespace GlobalNamespace {
class AudioClipAudioSource___c__DisplayClass48_0;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::AudioClipAudioSource*);
MARK_REF_T(::GlobalNamespace::AudioClipAudioSource___c__DisplayClass48_0*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AudioClipAudioSource*, "", "AudioClipAudioSource");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::AudioClipAudioSource___c__DisplayClass48_0*, "", "AudioClipAudioSource/<>c__DisplayClass48_0");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: AudioClipAudioSource
class CORDL_TYPE AudioClipAudioSource : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using _TransmitAudio_d__38 = ::GlobalNamespace::AudioClipAudioSource__TransmitAudio_d__38;

using __c__DisplayClass48_0 = ::GlobalNamespace::AudioClipAudioSource___c__DisplayClass48_0;

 __declspec(property(get=get_AudioEncoding)) ::Meta::WitAi::Data::AudioEncoding*  AudioEncoding;

 __declspec(property(get=get_IsInputAvailable)) bool  IsInputAvailable;

 __declspec(property(get=get_IsMuted, put=set_IsMuted)) bool  IsMuted;

 __declspec(property(get=get_IsRecording)) bool  IsRecording;

/// @brief Field OnMicMuted, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnMicMuted, put=__cordl_internal_set_OnMicMuted)) ::System::Action*  OnMicMuted;

/// @brief Field OnMicUnmuted, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnMicUnmuted, put=__cordl_internal_set_OnMicUnmuted)) ::System::Action*  OnMicUnmuted;

/// @brief Field OnSampleReady, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnSampleReady, put=__cordl_internal_set_OnSampleReady)) ::System::Action_3<int32_t,::ArrayW<float_t>,float_t>*  OnSampleReady;

/// @brief Field OnStartRecording, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnStartRecording, put=__cordl_internal_set_OnStartRecording)) ::System::Action*  OnStartRecording;

/// @brief Field OnStartRecordingFailed, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnStartRecordingFailed, put=__cordl_internal_set_OnStartRecordingFailed)) ::System::Action*  OnStartRecordingFailed;

/// @brief Field OnStopRecording, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnStopRecording, put=__cordl_internal_set_OnStopRecording)) ::System::Action*  OnStopRecording;

/// @brief Field <IsMuted>k__BackingField, offset 0x58, size 0x1 
 __declspec(property(get=__cordl_internal_get__IsMuted_k__BackingField, put=__cordl_internal_set__IsMuted_k__BackingField)) bool  _IsMuted_k__BackingField;

/// @brief Field <_log>k__BackingField, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get___log_k__BackingField, put=__cordl_internal_set___log_k__BackingField)) ::Meta::Voice::Logging::IVLogger*  __log_k__BackingField;

/// @brief Field _audioClips, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__audioClips, put=__cordl_internal_set__audioClips)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioClip>>*  _audioClips;

/// @brief Field _audioEncoding, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__audioEncoding, put=__cordl_internal_set__audioEncoding)) ::Meta::WitAi::Data::AudioEncoding*  _audioEncoding;

/// @brief Field _audioQueue, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__audioQueue, put=__cordl_internal_set__audioQueue)) ::System::Collections::Generic::Queue_1<int32_t>*  _audioQueue;

/// @brief Field _audioSource, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__audioSource, put=__cordl_internal_set__audioSource)) ::UnityW<::UnityEngine::AudioSource>  _audioSource;

/// @brief Field _buffer, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__buffer, put=__cordl_internal_set__buffer)) ::ArrayW<float_t>  _buffer;

/// @brief Field _isRecording, offset 0x31, size 0x1 
 __declspec(property(get=__cordl_internal_get__isRecording, put=__cordl_internal_set__isRecording)) bool  _isRecording;

 __declspec(property(get=get__log)) ::Meta::Voice::Logging::IVLogger*  _log;

/// @brief Field _loopRequests, offset 0x30, size 0x1 
 __declspec(property(get=__cordl_internal_get__loopRequests, put=__cordl_internal_set__loopRequests)) bool  _loopRequests;

/// @brief Field clipData, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_clipData, put=__cordl_internal_set_clipData)) ::System::Collections::Generic::List_1<::ArrayW<float_t>>*  clipData;

/// @brief Field clipIndex, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_clipIndex, put=__cordl_internal_set_clipIndex)) int32_t  clipIndex;

/// @brief Convert operator to "::Meta::WitAi::Interfaces::IAudioInputSource"
constexpr operator  ::Meta::WitAi::Interfaces::IAudioInputSource*() noexcept;

/// @brief Method AddClip, addr 0x9e1ae50, size 0x124, virtual false, abstract: false, final false
inline void AddClip(::UnityEngine::AudioClip*  clip) ;

/// @brief Method AddClipData, addr 0x9e1a31c, size 0x138, virtual false, abstract: false, final false
inline void AddClipData(::UnityEngine::AudioClip*  clip) ;

/// @brief Method CheckForInput, addr 0x9e1acbc, size 0x4, virtual false, abstract: false, final false
inline void CheckForInput() ;

static inline ::GlobalNamespace::AudioClipAudioSource* New_ctor() ;

/// @brief Method PlayNextClip, addr 0x9e1a98c, size 0x200, virtual false, abstract: false, final false
inline void PlayNextClip() ;

/// @brief Method QuickResample, addr 0x9e1af74, size 0x138, virtual false, abstract: false, final false
static inline ::ArrayW<float_t> QuickResample(::ArrayW<float_t>  oldSamples, int32_t  oldChannels, int32_t  oldSampleRate, int32_t  newChannels, int32_t  newSampleRate) ;

/// @brief Method SetActiveClip, addr 0x9e1acc0, size 0x188, virtual false, abstract: false, final false
inline bool SetActiveClip(::StringW  clipName) ;

/// @brief Method SetMuted, addr 0x9e1a0d4, size 0x80, virtual true, abstract: false, final false
inline void SetMuted(bool  muted) ;

/// @brief Method Start, addr 0x9e1a154, size 0x1c8, virtual false, abstract: false, final false
inline void Start() ;

/// @brief Method StartRecording, addr 0x9e1a95c, size 0x30, virtual true, abstract: false, final true
inline void StartRecording(int32_t  sampleLen) ;

/// @brief Method StopRecording, addr 0x9e1ac84, size 0x20, virtual true, abstract: false, final true
inline void StopRecording() ;

/// [AsyncStateMachine(typeof(AudioClipAudioSource::<TransmitAudio>d__38))]
/// @brief Method TransmitAudio, addr 0x9e1ab8c, size 0xf8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* TransmitAudio(::ArrayW<float_t>  samples) ;

constexpr ::System::Action* const& __cordl_internal_get_OnMicMuted() const;

constexpr ::System::Action*& __cordl_internal_get_OnMicMuted() ;

constexpr ::System::Action* const& __cordl_internal_get_OnMicUnmuted() const;

constexpr ::System::Action*& __cordl_internal_get_OnMicUnmuted() ;

constexpr ::System::Action_3<int32_t,::ArrayW<float_t>,float_t>* const& __cordl_internal_get_OnSampleReady() const;

constexpr ::System::Action_3<int32_t,::ArrayW<float_t>,float_t>*& __cordl_internal_get_OnSampleReady() ;

constexpr ::System::Action* const& __cordl_internal_get_OnStartRecording() const;

constexpr ::System::Action*& __cordl_internal_get_OnStartRecording() ;

constexpr ::System::Action* const& __cordl_internal_get_OnStartRecordingFailed() const;

constexpr ::System::Action*& __cordl_internal_get_OnStartRecordingFailed() ;

constexpr ::System::Action* const& __cordl_internal_get_OnStopRecording() const;

constexpr ::System::Action*& __cordl_internal_get_OnStopRecording() ;

constexpr bool const& __cordl_internal_get__IsMuted_k__BackingField() const;

constexpr bool& __cordl_internal_get__IsMuted_k__BackingField() ;

constexpr ::Meta::Voice::Logging::IVLogger* const& __cordl_internal_get___log_k__BackingField() const;

constexpr ::Meta::Voice::Logging::IVLogger*& __cordl_internal_get___log_k__BackingField() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioClip>>* const& __cordl_internal_get__audioClips() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioClip>>*& __cordl_internal_get__audioClips() ;

constexpr ::Meta::WitAi::Data::AudioEncoding* const& __cordl_internal_get__audioEncoding() const;

constexpr ::Meta::WitAi::Data::AudioEncoding*& __cordl_internal_get__audioEncoding() ;

constexpr ::System::Collections::Generic::Queue_1<int32_t>* const& __cordl_internal_get__audioQueue() const;

constexpr ::System::Collections::Generic::Queue_1<int32_t>*& __cordl_internal_get__audioQueue() ;

constexpr ::UnityW<::UnityEngine::AudioSource> const& __cordl_internal_get__audioSource() const;

constexpr ::UnityW<::UnityEngine::AudioSource>& __cordl_internal_get__audioSource() ;

constexpr ::ArrayW<float_t> const& __cordl_internal_get__buffer() const;

constexpr ::ArrayW<float_t>& __cordl_internal_get__buffer() ;

constexpr bool const& __cordl_internal_get__isRecording() const;

constexpr bool& __cordl_internal_get__isRecording() ;

constexpr bool const& __cordl_internal_get__loopRequests() const;

constexpr bool& __cordl_internal_get__loopRequests() ;

constexpr ::System::Collections::Generic::List_1<::ArrayW<float_t>>* const& __cordl_internal_get_clipData() const;

constexpr ::System::Collections::Generic::List_1<::ArrayW<float_t>>*& __cordl_internal_get_clipData() ;

constexpr int32_t const& __cordl_internal_get_clipIndex() const;

constexpr int32_t& __cordl_internal_get_clipIndex() ;

constexpr void __cordl_internal_set_OnMicMuted(::System::Action*  value) ;

constexpr void __cordl_internal_set_OnMicUnmuted(::System::Action*  value) ;

constexpr void __cordl_internal_set_OnSampleReady(::System::Action_3<int32_t,::ArrayW<float_t>,float_t>*  value) ;

constexpr void __cordl_internal_set_OnStartRecording(::System::Action*  value) ;

constexpr void __cordl_internal_set_OnStartRecordingFailed(::System::Action*  value) ;

constexpr void __cordl_internal_set_OnStopRecording(::System::Action*  value) ;

constexpr void __cordl_internal_set__IsMuted_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set___log_k__BackingField(::Meta::Voice::Logging::IVLogger*  value) ;

constexpr void __cordl_internal_set__audioClips(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioClip>>*  value) ;

constexpr void __cordl_internal_set__audioEncoding(::Meta::WitAi::Data::AudioEncoding*  value) ;

constexpr void __cordl_internal_set__audioQueue(::System::Collections::Generic::Queue_1<int32_t>*  value) ;

constexpr void __cordl_internal_set__audioSource(::UnityW<::UnityEngine::AudioSource>  value) ;

constexpr void __cordl_internal_set__buffer(::ArrayW<float_t>  value) ;

constexpr void __cordl_internal_set__isRecording(bool  value) ;

constexpr void __cordl_internal_set__loopRequests(bool  value) ;

constexpr void __cordl_internal_set_clipData(::System::Collections::Generic::List_1<::ArrayW<float_t>>*  value) ;

constexpr void __cordl_internal_set_clipIndex(int32_t  value) ;

/// @brief Method .ctor, addr 0x9e1b0ac, size 0x200, virtual false, abstract: false, final false
inline void _ctor() ;

/// [CompilerGenerated]
/// @brief Method add_OnMicMuted, addr 0x9e19e64, size 0x9c, virtual true, abstract: false, final true
inline void add_OnMicMuted(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnMicUnmuted, addr 0x9e19f9c, size 0x9c, virtual true, abstract: false, final true
inline void add_OnMicUnmuted(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnSampleReady, addr 0x9e1a6c4, size 0xb0, virtual true, abstract: false, final true
inline void add_OnSampleReady(::System::Action_3<int32_t,::ArrayW<float_t>,float_t>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnStartRecording, addr 0x9e1a454, size 0x9c, virtual true, abstract: false, final true
inline void add_OnStartRecording(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnStartRecordingFailed, addr 0x9e1a58c, size 0x9c, virtual true, abstract: false, final true
inline void add_OnStartRecordingFailed(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnStopRecording, addr 0x9e1a824, size 0x9c, virtual true, abstract: false, final true
inline void add_OnStopRecording(::System::Action*  value) ;

/// @brief Method get_AudioEncoding, addr 0x9e1acac, size 0x8, virtual true, abstract: false, final true
inline ::Meta::WitAi::Data::AudioEncoding* get_AudioEncoding() ;

/// @brief Method get_IsInputAvailable, addr 0x9e1acb4, size 0x8, virtual false, abstract: false, final false
inline bool get_IsInputAvailable() ;

/// [CompilerGenerated]
/// @brief Method get_IsMuted, addr 0x9e19e54, size 0x8, virtual true, abstract: false, final false
inline bool get_IsMuted() ;

/// @brief Method get_IsRecording, addr 0x9e1aca4, size 0x8, virtual true, abstract: false, final true
inline bool get_IsRecording() ;

/// [CompilerGenerated]
/// @brief Method get__log, addr 0x9e19e4c, size 0x8, virtual false, abstract: false, final false
inline ::Meta::Voice::Logging::IVLogger* get__log() ;

/// @brief Convert to "::Meta::WitAi::Interfaces::IAudioInputSource"
constexpr ::Meta::WitAi::Interfaces::IAudioInputSource* i___Meta__WitAi__Interfaces__IAudioInputSource() noexcept;

/// [CompilerGenerated]
/// @brief Method remove_OnMicMuted, addr 0x9e19f00, size 0x9c, virtual true, abstract: false, final true
inline void remove_OnMicMuted(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnMicUnmuted, addr 0x9e1a038, size 0x9c, virtual true, abstract: false, final true
inline void remove_OnMicUnmuted(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnSampleReady, addr 0x9e1a774, size 0xb0, virtual true, abstract: false, final true
inline void remove_OnSampleReady(::System::Action_3<int32_t,::ArrayW<float_t>,float_t>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnStartRecording, addr 0x9e1a4f0, size 0x9c, virtual true, abstract: false, final true
inline void remove_OnStartRecording(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnStartRecordingFailed, addr 0x9e1a628, size 0x9c, virtual true, abstract: false, final true
inline void remove_OnStartRecordingFailed(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnStopRecording, addr 0x9e1a8c0, size 0x9c, virtual true, abstract: false, final true
inline void remove_OnStopRecording(::System::Action*  value) ;

/// [CompilerGenerated]
/// @brief Method set_IsMuted, addr 0x9e19e5c, size 0x8, virtual false, abstract: false, final false
inline void set_IsMuted(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioClipAudioSource() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioClipAudioSource", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioClipAudioSource(AudioClipAudioSource && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioClipAudioSource", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioClipAudioSource(AudioClipAudioSource const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25401};

/// @brief Field _samplesPerFrame offset 0xffffffff size 0x4
static constexpr float_t  _samplesPerFrame{static_cast<float_t>(0.01f)};

/// [SerializeField]
/// @brief Field _audioSource, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::AudioSource>  ____audioSource;

/// [SerializeField]
/// @brief Field _audioClips, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::AudioClip>>*  ____audioClips;

/// [Tooltip("If true, the associated clips will be played again from the beginning with multiple requests after the clip queue has been exhausted.")]
/// [SerializeField]
/// @brief Field _loopRequests, offset: 0x30, size: 0x1, def value: None
 bool  ____loopRequests;

/// @brief Field _isRecording, offset: 0x31, size: 0x1, def value: None
 bool  ____isRecording;

/// @brief Field _audioQueue, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::Queue_1<int32_t>*  ____audioQueue;

/// @brief Field clipIndex, offset: 0x40, size: 0x4, def value: None
 int32_t  ___clipIndex;

/// @brief Field clipData, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::ArrayW<float_t>>*  ___clipData;

/// [CompilerGenerated]
/// @brief Field <_log>k__BackingField, offset: 0x50, size: 0x8, def value: None
 ::Meta::Voice::Logging::IVLogger*  _____log_k__BackingField;

/// [CompilerGenerated]
/// @brief Field <IsMuted>k__BackingField, offset: 0x58, size: 0x1, def value: None
 bool  ____IsMuted_k__BackingField;

/// [CompilerGenerated]
/// @brief Field OnMicMuted, offset: 0x60, size: 0x8, def value: None
 ::System::Action*  ___OnMicMuted;

/// [CompilerGenerated]
/// @brief Field OnMicUnmuted, offset: 0x68, size: 0x8, def value: None
 ::System::Action*  ___OnMicUnmuted;

/// [CompilerGenerated]
/// @brief Field OnStartRecording, offset: 0x70, size: 0x8, def value: None
 ::System::Action*  ___OnStartRecording;

/// [CompilerGenerated]
/// @brief Field OnStartRecordingFailed, offset: 0x78, size: 0x8, def value: None
 ::System::Action*  ___OnStartRecordingFailed;

/// [CompilerGenerated]
/// @brief Field OnSampleReady, offset: 0x80, size: 0x8, def value: None
 ::System::Action_3<int32_t,::ArrayW<float_t>,float_t>*  ___OnSampleReady;

/// [CompilerGenerated]
/// @brief Field OnStopRecording, offset: 0x88, size: 0x8, def value: None
 ::System::Action*  ___OnStopRecording;

/// @brief Field _buffer, offset: 0x90, size: 0x8, def value: None
 ::ArrayW<float_t>  ____buffer;

/// [SerializeField]
/// @brief Field _audioEncoding, offset: 0x98, size: 0x8, def value: None
 ::Meta::WitAi::Data::AudioEncoding*  ____audioEncoding;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AudioClipAudioSource, ____audioSource) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioClipAudioSource, ____audioClips) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioClipAudioSource, ____loopRequests) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioClipAudioSource, ____isRecording) == 0x31, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioClipAudioSource, ____audioQueue) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioClipAudioSource, ___clipIndex) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioClipAudioSource, ___clipData) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioClipAudioSource, _____log_k__BackingField) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioClipAudioSource, ____IsMuted_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioClipAudioSource, ___OnMicMuted) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioClipAudioSource, ___OnMicUnmuted) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioClipAudioSource, ___OnStartRecording) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioClipAudioSource, ___OnStartRecordingFailed) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioClipAudioSource, ___OnSampleReady) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioClipAudioSource, ___OnStopRecording) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioClipAudioSource, ____buffer) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::AudioClipAudioSource, ____audioEncoding) == 0x98, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AudioClipAudioSource) == 0xa0, "Size mismatch!");

} // namespace end def GlobalNamespace
// [CompilerGenerated]
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: AudioClipAudioSource/<>c__DisplayClass48_0
class CORDL_TYPE AudioClipAudioSource___c__DisplayClass48_0 : public ::System::Object {
public:
// Declarations
/// @brief Field clipName, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_clipName, put=__cordl_internal_set_clipName)) ::StringW  clipName;

static inline ::GlobalNamespace::AudioClipAudioSource___c__DisplayClass48_0* New_ctor() ;

/// @brief Method <SetActiveClip>b__0, addr 0x9e1b2ac, size 0x2c, virtual false, abstract: false, final false
inline bool _SetActiveClip_b__0(::UnityEngine::AudioClip*  clip) ;

constexpr ::StringW const& __cordl_internal_get_clipName() const;

constexpr ::StringW& __cordl_internal_get_clipName() ;

constexpr void __cordl_internal_set_clipName(::StringW  value) ;

/// @brief Method .ctor, addr 0x9e1ae48, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AudioClipAudioSource___c__DisplayClass48_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AudioClipAudioSource___c__DisplayClass48_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
AudioClipAudioSource___c__DisplayClass48_0(AudioClipAudioSource___c__DisplayClass48_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AudioClipAudioSource___c__DisplayClass48_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
AudioClipAudioSource___c__DisplayClass48_0(AudioClipAudioSource___c__DisplayClass48_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{25399};

/// @brief Field clipName, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___clipName;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::AudioClipAudioSource___c__DisplayClass48_0, ___clipName) == 0x10, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::AudioClipAudioSource___c__DisplayClass48_0) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
