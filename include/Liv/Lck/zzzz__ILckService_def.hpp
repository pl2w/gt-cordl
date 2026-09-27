#pragma once
// IWYU pragma private; include "Liv/Lck/ILckService.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ILckService)
namespace Liv::Lck::Recorder {
struct RecordingData;
}
namespace Liv::Lck {
struct CameraResolutionDescriptor;
}
namespace Liv::Lck {
struct CameraTrackDescriptor;
}
namespace Liv::Lck {
struct EchoDisableReason;
}
namespace Liv::Lck {
class ILckCamera;
}
namespace Liv::Lck {
struct LckCameraOrientation;
}
namespace Liv::Lck {
struct LckCaptureType;
}
namespace Liv::Lck {
class LckDescriptor;
}
namespace Liv::Lck {
template<typename T>
class LckResult_1;
}
namespace Liv::Lck {
class LckResult;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace System {
class IDisposable;
}
namespace System {
struct TimeSpan;
}
namespace UnityEngine {
class AudioClip;
}
// Forward declare root types
namespace Liv::Lck {
class ILckService;
}
// Write type traits
MARK_REF_T(::Liv::Lck::ILckService*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::ILckService*, "Liv.Lck", "ILckService");
// Dependencies 
namespace Liv::Lck {
// Is value type: false
// CS Name: Liv.Lck.ILckService
class CORDL_TYPE ILckService {
public:
// Declarations
/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method CapturePhoto, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Liv::Lck::LckResult* CapturePhoto() ;

/// @brief Method GetActiveCamera, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Liv::Lck::LckResult_1<::Liv::Lck::ILckCamera*>* GetActiveCamera() ;

/// @brief Method GetActiveCaptureType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Liv::Lck::LckResult_1<::Liv::Lck::LckCaptureType>* GetActiveCaptureType() ;

/// @brief Method GetDescriptor, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Liv::Lck::LckResult_1<::Liv::Lck::LckDescriptor*>* GetDescriptor() ;

/// @brief Method GetEchoBufferDuration, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Liv::Lck::LckResult_1<::System::TimeSpan>* GetEchoBufferDuration() ;

/// @brief Method GetEchoMaxBufferDuration, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Liv::Lck::LckResult_1<::System::TimeSpan>* GetEchoMaxBufferDuration() ;

/// @brief Method GetGameOutputLevel, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Liv::Lck::LckResult_1<float_t>* GetGameOutputLevel() ;

/// @brief Method GetMicrophoneOutputLevel, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Liv::Lck::LckResult_1<float_t>* GetMicrophoneOutputLevel() ;

/// @brief Method GetRecordingDuration, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Liv::Lck::LckResult_1<::System::TimeSpan>* GetRecordingDuration() ;

/// @brief Method GetStreamDuration, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Liv::Lck::LckResult_1<::System::TimeSpan>* GetStreamDuration() ;

/// @brief Method IsCapturing, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Liv::Lck::LckResult_1<bool>* IsCapturing() ;

/// @brief Method IsEchoEnabled, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Liv::Lck::LckResult_1<bool>* IsEchoEnabled() ;

/// @brief Method IsGameAudioMute, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Liv::Lck::LckResult_1<bool>* IsGameAudioMute() ;

/// @brief Method IsPaused, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Liv::Lck::LckResult_1<bool>* IsPaused() ;

/// @brief Method IsRecording, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Liv::Lck::LckResult_1<bool>* IsRecording() ;

/// @brief Method IsStreaming, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Liv::Lck::LckResult_1<bool>* IsStreaming() ;

/// @brief Method PauseRecording, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Liv::Lck::LckResult* PauseRecording() ;

/// @brief Method PlayDiscreetAudioClip, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Liv::Lck::LckResult* PlayDiscreetAudioClip(::UnityEngine::AudioClip*  audioClip) ;

/// @brief Method PreloadDiscreetAudio, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Liv::Lck::LckResult* PreloadDiscreetAudio(::UnityEngine::AudioClip*  audioClip, float_t  volume, bool  forceReload) ;

/// @brief Method ResumeRecording, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Liv::Lck::LckResult* ResumeRecording() ;

/// @brief Method SetActiveCamera, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Liv::Lck::LckResult* SetActiveCamera(::StringW  cameraId, ::StringW  monitorId) ;

/// @brief Method SetActiveCaptureType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Liv::Lck::LckResult* SetActiveCaptureType(::Liv::Lck::LckCaptureType  captureType) ;

/// @brief Method SetCameraOrientation, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Liv::Lck::LckResult* SetCameraOrientation(::Liv::Lck::LckCameraOrientation  orientation) ;

/// @brief Method SetEchoEnabled, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Liv::Lck::LckResult* SetEchoEnabled(bool  enabled) ;

/// @brief Method SetEchoEnabledAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::System::Threading::Tasks::Task_1<::Liv::Lck::LckResult*>* SetEchoEnabledAsync(bool  enabled) ;

/// @brief Method SetGameAudioCaptureActive, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Liv::Lck::LckResult* SetGameAudioCaptureActive(bool  isActive) ;

/// @brief Method SetGameAudioGain, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Liv::Lck::LckResult* SetGameAudioGain(float_t  gain) ;

/// @brief Method SetMicrophoneCaptureActive, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Liv::Lck::LckResult* SetMicrophoneCaptureActive(bool  isActive) ;

/// @brief Method SetMicrophoneGain, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Liv::Lck::LckResult* SetMicrophoneGain(float_t  gain) ;

/// @brief Method SetPreviewActive, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Liv::Lck::LckResult* SetPreviewActive(bool  isActive) ;

/// @brief Method SetTrackAudioBitrate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Liv::Lck::LckResult* SetTrackAudioBitrate(uint32_t  audioBitrate) ;

/// @brief Method SetTrackBitrate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Liv::Lck::LckResult* SetTrackBitrate(uint32_t  bitrate) ;

/// @brief Method SetTrackDescriptor, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Liv::Lck::LckResult* SetTrackDescriptor(::Liv::Lck::CameraTrackDescriptor  cameraTrackDescriptor) ;

/// @brief Method SetTrackDescriptor, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Liv::Lck::LckResult* SetTrackDescriptor(::Liv::Lck::LckCaptureType  captureType, ::Liv::Lck::CameraTrackDescriptor  cameraTrackDescriptor) ;

/// @brief Method SetTrackFramerate, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Liv::Lck::LckResult* SetTrackFramerate(uint32_t  framerate) ;

/// @brief Method SetTrackResolution, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Liv::Lck::LckResult* SetTrackResolution(::Liv::Lck::CameraResolutionDescriptor  cameraResolutionDescriptor) ;

/// @brief Method StartRecording, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Liv::Lck::LckResult* StartRecording() ;

/// @brief Method StartStreaming, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Liv::Lck::LckResult* StartStreaming() ;

/// @brief Method StopAllDiscreetAudio, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Liv::Lck::LckResult* StopAllDiscreetAudio() ;

/// @brief Method StopRecording, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Liv::Lck::LckResult* StopRecording() ;

/// @brief Method StopStreaming, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Liv::Lck::LckResult* StopStreaming() ;

/// @brief Method TriggerEchoSave, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline ::Liv::Lck::LckResult* TriggerEchoSave() ;

/// [CompilerGenerated]
/// @brief Method add_OnActiveCameraSet, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void add_OnActiveCameraSet(::System::Action_1<::Liv::Lck::LckResult_1<::Liv::Lck::ILckCamera*>*>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnEchoDisabled, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void add_OnEchoDisabled(::System::Action_2<::Liv::Lck::LckResult*,::Liv::Lck::EchoDisableReason>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnEchoEnabled, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void add_OnEchoEnabled(::System::Action_1<::Liv::Lck::LckResult*>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnEchoSaved, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void add_OnEchoSaved(::System::Action_1<::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnLowStorageSpace, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void add_OnLowStorageSpace(::System::Action_1<::Liv::Lck::LckResult*>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnPhotoSaved, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void add_OnPhotoSaved(::System::Action_1<::Liv::Lck::LckResult*>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnRecordingPaused, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void add_OnRecordingPaused(::System::Action_1<::Liv::Lck::LckResult*>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnRecordingResumed, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void add_OnRecordingResumed(::System::Action_1<::Liv::Lck::LckResult*>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnRecordingSaved, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void add_OnRecordingSaved(::System::Action_1<::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnRecordingStarted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void add_OnRecordingStarted(::System::Action_1<::Liv::Lck::LckResult*>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnRecordingStopped, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void add_OnRecordingStopped(::System::Action_1<::Liv::Lck::LckResult*>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnStreamingStarted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void add_OnStreamingStarted(::System::Action_1<::Liv::Lck::LckResult*>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnStreamingStopped, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void add_OnStreamingStopped(::System::Action_1<::Liv::Lck::LckResult*>*  value) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// [CompilerGenerated]
/// @brief Method remove_OnActiveCameraSet, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void remove_OnActiveCameraSet(::System::Action_1<::Liv::Lck::LckResult_1<::Liv::Lck::ILckCamera*>*>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnEchoDisabled, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void remove_OnEchoDisabled(::System::Action_2<::Liv::Lck::LckResult*,::Liv::Lck::EchoDisableReason>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnEchoEnabled, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void remove_OnEchoEnabled(::System::Action_1<::Liv::Lck::LckResult*>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnEchoSaved, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void remove_OnEchoSaved(::System::Action_1<::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnLowStorageSpace, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void remove_OnLowStorageSpace(::System::Action_1<::Liv::Lck::LckResult*>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnPhotoSaved, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void remove_OnPhotoSaved(::System::Action_1<::Liv::Lck::LckResult*>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnRecordingPaused, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void remove_OnRecordingPaused(::System::Action_1<::Liv::Lck::LckResult*>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnRecordingResumed, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void remove_OnRecordingResumed(::System::Action_1<::Liv::Lck::LckResult*>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnRecordingSaved, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void remove_OnRecordingSaved(::System::Action_1<::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnRecordingStarted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void remove_OnRecordingStarted(::System::Action_1<::Liv::Lck::LckResult*>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnRecordingStopped, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void remove_OnRecordingStopped(::System::Action_1<::Liv::Lck::LckResult*>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnStreamingStarted, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void remove_OnStreamingStarted(::System::Action_1<::Liv::Lck::LckResult*>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnStreamingStopped, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
inline void remove_OnStreamingStopped(::System::Action_1<::Liv::Lck::LckResult*>*  value) ;

// Ctor Parameters [CppParam { name: "", ty: "ILckService", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ILckService(ILckService const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24763};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Liv::Lck
