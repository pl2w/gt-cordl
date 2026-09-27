#pragma once
// IWYU pragma private; include "Liv/Lck/LckService.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LckService)
namespace GlobalNamespace {
struct LckEvents_ActiveCameraChangedEvent;
}
namespace GlobalNamespace {
struct LckEvents_EchoDisabledEvent;
}
namespace GlobalNamespace {
struct LckEvents_EchoSavedEvent;
}
namespace GlobalNamespace {
struct LckEvents_RecordingSavedEvent;
}
namespace GlobalNamespace {
struct LckService_StopReason;
}
namespace GlobalNamespace {
struct LckService__SetEchoEnabledAsync_d__94;
}
namespace Liv::Lck::Echo {
class ILckEcho;
}
namespace Liv::Lck::Encoding {
class ILckEncoder;
}
namespace Liv::Lck::Recorder {
class ILckRecorder;
}
namespace Liv::Lck::Recorder {
struct RecordingData;
}
namespace Liv::Lck::Streaming {
class ILckStreamer;
}
namespace Liv::Lck::Telemetry {
class ILckTelemetryClient;
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
class ILckAudioMixer;
}
namespace Liv::Lck {
class ILckCamera;
}
namespace Liv::Lck {
class ILckEncodeLooper;
}
namespace Liv::Lck {
class ILckEventBus;
}
namespace Liv::Lck {
class ILckOutputConfigurer;
}
namespace Liv::Lck {
class ILckPhotoCapture;
}
namespace Liv::Lck {
class ILckPreviewer;
}
namespace Liv::Lck {
class ILckResult;
}
namespace Liv::Lck {
class ILckService;
}
namespace Liv::Lck {
class ILckStorageWatcher;
}
namespace Liv::Lck {
class ILckVideoCapturer;
}
namespace Liv::Lck {
class ILckVideoMixer;
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
class LckEventErrorLogger;
}
namespace Liv::Lck {
class LckPublicApiEventBridge;
}
namespace Liv::Lck {
template<typename T>
class LckResult_1;
}
namespace Liv::Lck {
class LckResult;
}
namespace Liv::Lck {
class LckService___c;
}
namespace Liv::Lck {
class LckService___c__DisplayClass58_0;
}
namespace Liv::Lck {
class LckService___c__DisplayClass58_1;
}
namespace Liv::NativeAudioBridge {
class INativeAudioPlayer;
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
template<typename T,typename TResult>
class Func_2;
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
class LckService;
}
namespace Liv::Lck {
class LckService___c;
}
namespace Liv::Lck {
class LckService___c__DisplayClass58_0;
}
namespace Liv::Lck {
class LckService___c__DisplayClass58_1;
}
// Write type traits
MARK_REF_T(::Liv::Lck::LckService*);
MARK_REF_T(::Liv::Lck::LckService___c*);
MARK_REF_T(::Liv::Lck::LckService___c__DisplayClass58_0*);
MARK_REF_T(::Liv::Lck::LckService___c__DisplayClass58_1*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::LckService*, "Liv.Lck", "LckService");
DEFINE_IL2CPP_CLASS(::Liv::Lck::LckService___c*, "Liv.Lck", "LckService/<>c");
DEFINE_IL2CPP_CLASS(::Liv::Lck::LckService___c__DisplayClass58_0*, "Liv.Lck", "LckService/<>c__DisplayClass58_0");
DEFINE_IL2CPP_CLASS(::Liv::Lck::LckService___c__DisplayClass58_1*, "Liv.Lck", "LckService/<>c__DisplayClass58_1");
// [Preserve]
// Dependencies System.Object
namespace Liv::Lck {
// Is value type: false
// CS Name: Liv.Lck.LckService
class CORDL_TYPE LckService : public ::System::Object {
public:
// Declarations
using StopReason = ::GlobalNamespace::LckService_StopReason;

using _SetEchoEnabledAsync_d__94 = ::GlobalNamespace::LckService__SetEchoEnabledAsync_d__94;

using __c = ::Liv::Lck::LckService___c;

using __c__DisplayClass58_0 = ::Liv::Lck::LckService___c__DisplayClass58_0;

using __c__DisplayClass58_1 = ::Liv::Lck::LckService___c__DisplayClass58_1;

/// @brief Field OnActiveCameraSet, offset 0x100, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnActiveCameraSet, put=__cordl_internal_set_OnActiveCameraSet)) ::System::Action_1<::Liv::Lck::LckResult_1<::Liv::Lck::ILckCamera*>*>*  OnActiveCameraSet;

/// @brief Field OnEchoDisabled, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnEchoDisabled, put=__cordl_internal_set_OnEchoDisabled)) ::System::Action_2<::Liv::Lck::LckResult*,::Liv::Lck::EchoDisableReason>*  OnEchoDisabled;

/// @brief Field OnEchoEnabled, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnEchoEnabled, put=__cordl_internal_set_OnEchoEnabled)) ::System::Action_1<::Liv::Lck::LckResult*>*  OnEchoEnabled;

/// @brief Field OnEchoSaved, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnEchoSaved, put=__cordl_internal_set_OnEchoSaved)) ::System::Action_1<::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*>*  OnEchoSaved;

/// @brief Field OnLowStorageSpace, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnLowStorageSpace, put=__cordl_internal_set_OnLowStorageSpace)) ::System::Action_1<::Liv::Lck::LckResult*>*  OnLowStorageSpace;

/// @brief Field OnPhotoSaved, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnPhotoSaved, put=__cordl_internal_set_OnPhotoSaved)) ::System::Action_1<::Liv::Lck::LckResult*>*  OnPhotoSaved;

/// @brief Field OnRecordingPaused, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnRecordingPaused, put=__cordl_internal_set_OnRecordingPaused)) ::System::Action_1<::Liv::Lck::LckResult*>*  OnRecordingPaused;

/// @brief Field OnRecordingResumed, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnRecordingResumed, put=__cordl_internal_set_OnRecordingResumed)) ::System::Action_1<::Liv::Lck::LckResult*>*  OnRecordingResumed;

/// @brief Field OnRecordingSaved, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnRecordingSaved, put=__cordl_internal_set_OnRecordingSaved)) ::System::Action_1<::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*>*  OnRecordingSaved;

/// @brief Field OnRecordingStarted, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnRecordingStarted, put=__cordl_internal_set_OnRecordingStarted)) ::System::Action_1<::Liv::Lck::LckResult*>*  OnRecordingStarted;

/// @brief Field OnRecordingStopped, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnRecordingStopped, put=__cordl_internal_set_OnRecordingStopped)) ::System::Action_1<::Liv::Lck::LckResult*>*  OnRecordingStopped;

/// @brief Field OnStreamingStarted, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnStreamingStarted, put=__cordl_internal_set_OnStreamingStarted)) ::System::Action_1<::Liv::Lck::LckResult*>*  OnStreamingStarted;

/// @brief Field OnStreamingStopped, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get_OnStreamingStopped, put=__cordl_internal_set_OnStreamingStopped)) ::System::Action_1<::Liv::Lck::LckResult*>*  OnStreamingStopped;

/// @brief Field _audioMixer, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__audioMixer, put=__cordl_internal_set__audioMixer)) ::Liv::Lck::ILckAudioMixer*  _audioMixer;

/// @brief Field _disposed, offset 0x38, size 0x1 
 __declspec(property(get=__cordl_internal_get__disposed, put=__cordl_internal_set__disposed)) bool  _disposed;

/// @brief Field _echo, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__echo, put=__cordl_internal_set__echo)) ::Liv::Lck::Echo::ILckEcho*  _echo;

/// @brief Field _encodeLooper, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__encodeLooper, put=__cordl_internal_set__encodeLooper)) ::Liv::Lck::ILckEncodeLooper*  _encodeLooper;

/// @brief Field _encoder, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__encoder, put=__cordl_internal_set__encoder)) ::Liv::Lck::Encoding::ILckEncoder*  _encoder;

/// @brief Field _eventBridge, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__eventBridge, put=__cordl_internal_set__eventBridge)) ::Liv::Lck::LckPublicApiEventBridge*  _eventBridge;

/// @brief Field _eventBus, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__eventBus, put=__cordl_internal_set__eventBus)) ::Liv::Lck::ILckEventBus*  _eventBus;

/// @brief Field _eventErrorLogger, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__eventErrorLogger, put=__cordl_internal_set__eventErrorLogger)) ::Liv::Lck::LckEventErrorLogger*  _eventErrorLogger;

/// @brief Field _nativeAudioPlayer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__nativeAudioPlayer, put=__cordl_internal_set__nativeAudioPlayer)) ::Liv::NativeAudioBridge::INativeAudioPlayer*  _nativeAudioPlayer;

/// @brief Field _outputConfigurer, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__outputConfigurer, put=__cordl_internal_set__outputConfigurer)) ::Liv::Lck::ILckOutputConfigurer*  _outputConfigurer;

/// @brief Field _photoCapture, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__photoCapture, put=__cordl_internal_set__photoCapture)) ::Liv::Lck::ILckPhotoCapture*  _photoCapture;

/// @brief Field _previewer, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__previewer, put=__cordl_internal_set__previewer)) ::Liv::Lck::ILckPreviewer*  _previewer;

/// @brief Field _recorder, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__recorder, put=__cordl_internal_set__recorder)) ::Liv::Lck::Recorder::ILckRecorder*  _recorder;

/// @brief Field _storageWatcher, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__storageWatcher, put=__cordl_internal_set__storageWatcher)) ::Liv::Lck::ILckStorageWatcher*  _storageWatcher;

/// @brief Field _streamer, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__streamer, put=__cordl_internal_set__streamer)) ::Liv::Lck::Streaming::ILckStreamer*  _streamer;

/// @brief Field _telemetryClient, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__telemetryClient, put=__cordl_internal_set__telemetryClient)) ::Liv::Lck::Telemetry::ILckTelemetryClient*  _telemetryClient;

/// @brief Field _videoCapturer, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__videoCapturer, put=__cordl_internal_set__videoCapturer)) ::Liv::Lck::ILckVideoCapturer*  _videoCapturer;

/// @brief Field _videoMixer, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__videoMixer, put=__cordl_internal_set__videoMixer)) ::Liv::Lck::ILckVideoMixer*  _videoMixer;

/// @brief Convert operator to "::Liv::Lck::ILckService"
constexpr operator  ::Liv::Lck::ILckService*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method CapturePhoto, addr 0x9cf82f0, size 0xe8, virtual true, abstract: false, final true
inline ::Liv::Lck::LckResult* CapturePhoto() ;

/// @brief Method Dispose, addr 0x9cf84b4, size 0x70, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0x9cf8524, size 0x770, virtual true, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// @brief Method Finalize, addr 0x9cf8c94, size 0x94, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method GetActiveCamera, addr 0x9cf75c0, size 0xe8, virtual true, abstract: false, final true
inline ::Liv::Lck::LckResult_1<::Liv::Lck::ILckCamera*>* GetActiveCamera() ;

/// @brief Method GetActiveCaptureType, addr 0x9cf8204, size 0xec, virtual true, abstract: false, final true
inline ::Liv::Lck::LckResult_1<::Liv::Lck::LckCaptureType>* GetActiveCaptureType() ;

/// @brief Method GetDescriptor, addr 0x9cf8024, size 0x1e0, virtual true, abstract: false, final true
inline ::Liv::Lck::LckResult_1<::Liv::Lck::LckDescriptor*>* GetDescriptor() ;

/// @brief Method GetEchoBufferDuration, addr 0x9cf7e14, size 0x108, virtual true, abstract: false, final true
inline ::Liv::Lck::LckResult_1<::System::TimeSpan>* GetEchoBufferDuration() ;

/// @brief Method GetEchoMaxBufferDuration, addr 0x9cf7f1c, size 0x108, virtual true, abstract: false, final true
inline ::Liv::Lck::LckResult_1<::System::TimeSpan>* GetEchoMaxBufferDuration() ;

/// @brief Method GetGameOutputLevel, addr 0x9cf72dc, size 0x108, virtual true, abstract: false, final true
inline ::Liv::Lck::LckResult_1<float_t>* GetGameOutputLevel() ;

/// @brief Method GetMicrophoneOutputLevel, addr 0x9cf6ffc, size 0x108, virtual true, abstract: false, final true
inline ::Liv::Lck::LckResult_1<float_t>* GetMicrophoneOutputLevel() ;

/// @brief Method GetRecordingDuration, addr 0x9cf5fb8, size 0xa4, virtual true, abstract: false, final true
inline ::Liv::Lck::LckResult_1<::System::TimeSpan>* GetRecordingDuration() ;

/// @brief Method GetService, addr 0x9cf5914, size 0xe8, virtual false, abstract: false, final false
static inline ::Liv::Lck::LckResult_1<::Liv::Lck::LckService*>* GetService() ;

/// @brief Method GetStreamDuration, addr 0x9cf605c, size 0xa4, virtual true, abstract: false, final true
inline ::Liv::Lck::LckResult_1<::System::TimeSpan>* GetStreamDuration() ;

/// @brief Method IsCapturing, addr 0x9cf6218, size 0x108, virtual true, abstract: false, final true
inline ::Liv::Lck::LckResult_1<bool>* IsCapturing() ;

/// @brief Method IsEchoEnabled, addr 0x9cf7c38, size 0x108, virtual true, abstract: false, final true
inline ::Liv::Lck::LckResult_1<bool>* IsEchoEnabled() ;

/// @brief Method IsGameAudioMute, addr 0x9cf73e4, size 0xec, virtual true, abstract: false, final true
inline ::Liv::Lck::LckResult_1<bool>* IsGameAudioMute() ;

/// @brief Method IsPaused, addr 0x9cf6d54, size 0xec, virtual true, abstract: false, final true
inline ::Liv::Lck::LckResult_1<bool>* IsPaused() ;

/// @brief Method IsRecording, addr 0x9cf6b0c, size 0xec, virtual true, abstract: false, final true
inline ::Liv::Lck::LckResult_1<bool>* IsRecording() ;

/// @brief Method IsStreaming, addr 0x9cf6bf8, size 0x15c, virtual true, abstract: false, final true
inline ::Liv::Lck::LckResult_1<bool>* IsStreaming() ;

/// @brief [Preserve]
static inline ::Liv::Lck::LckService* New_ctor(::Liv::Lck::Encoding::ILckEncoder*  encoder, ::Liv::Lck::Recorder::ILckRecorder*  recorder, ::Liv::Lck::Streaming::ILckStreamer*  streamer, ::Liv::Lck::Echo::ILckEcho*  echo, ::Liv::Lck::ILckEncodeLooper*  encodeLooper, ::Liv::Lck::ILckPhotoCapture*  photoCapture, ::Liv::Lck::ILckStorageWatcher*  storageWatcher, ::Liv::Lck::ILckVideoCapturer*  videoCapturer, ::Liv::Lck::ILckVideoMixer*  videoMixer, ::Liv::Lck::ILckAudioMixer*  audioMixer, ::Liv::Lck::ILckOutputConfigurer*  outputConfigurer, ::Liv::Lck::ILckPreviewer*  previewer, ::Liv::NativeAudioBridge::INativeAudioPlayer*  nativeAudioPlayer, ::Liv::Lck::ILckEventBus*  eventBus, ::Liv::Lck::Telemetry::ILckTelemetryClient*  telemetryClient) ;

/// @brief Method PauseRecording, addr 0x9cf5acc, size 0xd4, virtual true, abstract: false, final true
inline ::Liv::Lck::LckResult* PauseRecording() ;

/// @brief Method PlayDiscreetAudioClip, addr 0x9cf77a8, size 0xe0, virtual true, abstract: false, final true
inline ::Liv::Lck::LckResult* PlayDiscreetAudioClip(::UnityEngine::AudioClip*  audioClip) ;

/// @brief Method PreloadDiscreetAudio, addr 0x9cf76a8, size 0x100, virtual true, abstract: false, final true
inline ::Liv::Lck::LckResult* PreloadDiscreetAudio(::UnityEngine::AudioClip*  audioClip, float_t  volume, bool  forceReload) ;

/// @brief Method ResumeRecording, addr 0x9cf5ba0, size 0xd4, virtual true, abstract: false, final true
inline ::Liv::Lck::LckResult* ResumeRecording() ;

/// @brief Method SetActiveCamera, addr 0x9cf74d0, size 0xf0, virtual true, abstract: false, final true
inline ::Liv::Lck::LckResult* SetActiveCamera(::StringW  cameraId, ::StringW  monitorId) ;

/// @brief Method SetActiveCaptureType, addr 0x9cf83d8, size 0xdc, virtual true, abstract: false, final true
inline ::Liv::Lck::LckResult* SetActiveCaptureType(::Liv::Lck::LckCaptureType  captureType) ;

/// @brief Method SetCameraOrientation, addr 0x9cf6320, size 0x118, virtual true, abstract: false, final true
inline ::Liv::Lck::LckResult* SetCameraOrientation(::Liv::Lck::LckCameraOrientation  orientation) ;

/// @brief Method SetEchoEnabled, addr 0x9cf795c, size 0x1c4, virtual true, abstract: false, final true
inline ::Liv::Lck::LckResult* SetEchoEnabled(bool  enabled) ;

/// [AsyncStateMachine(typeof(Liv.Lck.LckService::<SetEchoEnabledAsync>d__94))]
/// @brief Method SetEchoEnabledAsync, addr 0x9cf7b20, size 0x118, virtual true, abstract: false, final true
inline ::System::Threading::Tasks::Task_1<::Liv::Lck::LckResult*>* SetEchoEnabledAsync(bool  enabled) ;

/// @brief Method SetGameAudioCaptureActive, addr 0x9cf6e40, size 0xe0, virtual true, abstract: false, final true
inline ::Liv::Lck::LckResult* SetGameAudioCaptureActive(bool  isActive) ;

/// @brief Method SetGameAudioGain, addr 0x9cf71f0, size 0xec, virtual true, abstract: false, final true
inline ::Liv::Lck::LckResult* SetGameAudioGain(float_t  gain) ;

/// @brief Method SetMicrophoneCaptureActive, addr 0x9cf6f20, size 0xdc, virtual true, abstract: false, final true
inline ::Liv::Lck::LckResult* SetMicrophoneCaptureActive(bool  isActive) ;

/// @brief Method SetMicrophoneGain, addr 0x9cf7104, size 0xec, virtual true, abstract: false, final true
inline ::Liv::Lck::LckResult* SetMicrophoneGain(float_t  gain) ;

/// @brief Method SetPreviewActive, addr 0x9cf6550, size 0xe0, virtual true, abstract: false, final true
inline ::Liv::Lck::LckResult* SetPreviewActive(bool  isActive) ;

/// @brief Method SetTrackAudioBitrate, addr 0x9cf69f4, size 0x118, virtual true, abstract: false, final true
inline ::Liv::Lck::LckResult* SetTrackAudioBitrate(uint32_t  audioBitrate) ;

/// @brief Method SetTrackBitrate, addr 0x9cf68dc, size 0x118, virtual true, abstract: false, final true
inline ::Liv::Lck::LckResult* SetTrackBitrate(uint32_t  bitrate) ;

/// @brief Method SetTrackDescriptor, addr 0x9cf6630, size 0x14c, virtual true, abstract: false, final true
inline ::Liv::Lck::LckResult* SetTrackDescriptor(::Liv::Lck::CameraTrackDescriptor  cameraTrackDescriptor) ;

/// @brief Method SetTrackDescriptor, addr 0x9cf677c, size 0x160, virtual true, abstract: false, final true
inline ::Liv::Lck::LckResult* SetTrackDescriptor(::Liv::Lck::LckCaptureType  captureType, ::Liv::Lck::CameraTrackDescriptor  cameraTrackDescriptor) ;

/// @brief Method SetTrackFramerate, addr 0x9cf6438, size 0x118, virtual true, abstract: false, final true
inline ::Liv::Lck::LckResult* SetTrackFramerate(uint32_t  framerate) ;

/// @brief Method SetTrackResolution, addr 0x9cf6100, size 0x118, virtual true, abstract: false, final true
inline ::Liv::Lck::LckResult* SetTrackResolution(::Liv::Lck::CameraResolutionDescriptor  cameraResolutionDescriptor) ;

/// @brief Method StartRecording, addr 0x9cf59fc, size 0xd0, virtual true, abstract: false, final true
inline ::Liv::Lck::LckResult* StartRecording() ;

/// @brief Method StartStreaming, addr 0x9cf5d58, size 0x128, virtual true, abstract: false, final true
inline ::Liv::Lck::LckResult* StartStreaming() ;

/// @brief Method StopAllDiscreetAudio, addr 0x9cf7888, size 0xd4, virtual true, abstract: false, final true
inline ::Liv::Lck::LckResult* StopAllDiscreetAudio() ;

/// @brief Method StopRecording, addr 0x9cf5c74, size 0x8, virtual true, abstract: false, final true
inline ::Liv::Lck::LckResult* StopRecording() ;

/// @brief Method StopRecording, addr 0x9cf5c7c, size 0xdc, virtual false, abstract: false, final false
inline ::Liv::Lck::LckResult* StopRecording(::GlobalNamespace::LckService_StopReason  stopReason) ;

/// @brief Method StopStreaming, addr 0x9cf5e80, size 0x8, virtual true, abstract: false, final true
inline ::Liv::Lck::LckResult* StopStreaming() ;

/// @brief Method StopStreaming, addr 0x9cf5e88, size 0x130, virtual false, abstract: false, final false
inline ::Liv::Lck::LckResult* StopStreaming(::GlobalNamespace::LckService_StopReason  stopReason) ;

/// @brief Method TriggerEchoSave, addr 0x9cf7d40, size 0xd4, virtual true, abstract: false, final true
inline ::Liv::Lck::LckResult* TriggerEchoSave() ;

/// @brief Method VerifyGraphicsApi, addr 0x9cf57b8, size 0x15c, virtual false, abstract: false, final false
static inline bool VerifyGraphicsApi() ;

/// @brief Method VerifyPlatform, addr 0x9cf8d28, size 0x178, virtual false, abstract: false, final false
static inline bool VerifyPlatform() ;

constexpr ::System::Action_1<::Liv::Lck::LckResult_1<::Liv::Lck::ILckCamera*>*>* const& __cordl_internal_get_OnActiveCameraSet() const;

constexpr ::System::Action_1<::Liv::Lck::LckResult_1<::Liv::Lck::ILckCamera*>*>*& __cordl_internal_get_OnActiveCameraSet() ;

constexpr ::System::Action_2<::Liv::Lck::LckResult*,::Liv::Lck::EchoDisableReason>* const& __cordl_internal_get_OnEchoDisabled() const;

constexpr ::System::Action_2<::Liv::Lck::LckResult*,::Liv::Lck::EchoDisableReason>*& __cordl_internal_get_OnEchoDisabled() ;

constexpr ::System::Action_1<::Liv::Lck::LckResult*>* const& __cordl_internal_get_OnEchoEnabled() const;

constexpr ::System::Action_1<::Liv::Lck::LckResult*>*& __cordl_internal_get_OnEchoEnabled() ;

constexpr ::System::Action_1<::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*>* const& __cordl_internal_get_OnEchoSaved() const;

constexpr ::System::Action_1<::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*>*& __cordl_internal_get_OnEchoSaved() ;

constexpr ::System::Action_1<::Liv::Lck::LckResult*>* const& __cordl_internal_get_OnLowStorageSpace() const;

constexpr ::System::Action_1<::Liv::Lck::LckResult*>*& __cordl_internal_get_OnLowStorageSpace() ;

constexpr ::System::Action_1<::Liv::Lck::LckResult*>* const& __cordl_internal_get_OnPhotoSaved() const;

constexpr ::System::Action_1<::Liv::Lck::LckResult*>*& __cordl_internal_get_OnPhotoSaved() ;

constexpr ::System::Action_1<::Liv::Lck::LckResult*>* const& __cordl_internal_get_OnRecordingPaused() const;

constexpr ::System::Action_1<::Liv::Lck::LckResult*>*& __cordl_internal_get_OnRecordingPaused() ;

constexpr ::System::Action_1<::Liv::Lck::LckResult*>* const& __cordl_internal_get_OnRecordingResumed() const;

constexpr ::System::Action_1<::Liv::Lck::LckResult*>*& __cordl_internal_get_OnRecordingResumed() ;

constexpr ::System::Action_1<::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*>* const& __cordl_internal_get_OnRecordingSaved() const;

constexpr ::System::Action_1<::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*>*& __cordl_internal_get_OnRecordingSaved() ;

constexpr ::System::Action_1<::Liv::Lck::LckResult*>* const& __cordl_internal_get_OnRecordingStarted() const;

constexpr ::System::Action_1<::Liv::Lck::LckResult*>*& __cordl_internal_get_OnRecordingStarted() ;

constexpr ::System::Action_1<::Liv::Lck::LckResult*>* const& __cordl_internal_get_OnRecordingStopped() const;

constexpr ::System::Action_1<::Liv::Lck::LckResult*>*& __cordl_internal_get_OnRecordingStopped() ;

constexpr ::System::Action_1<::Liv::Lck::LckResult*>* const& __cordl_internal_get_OnStreamingStarted() const;

constexpr ::System::Action_1<::Liv::Lck::LckResult*>*& __cordl_internal_get_OnStreamingStarted() ;

constexpr ::System::Action_1<::Liv::Lck::LckResult*>* const& __cordl_internal_get_OnStreamingStopped() const;

constexpr ::System::Action_1<::Liv::Lck::LckResult*>*& __cordl_internal_get_OnStreamingStopped() ;

constexpr ::Liv::Lck::ILckAudioMixer* const& __cordl_internal_get__audioMixer() const;

constexpr ::Liv::Lck::ILckAudioMixer*& __cordl_internal_get__audioMixer() ;

constexpr bool const& __cordl_internal_get__disposed() const;

constexpr bool& __cordl_internal_get__disposed() ;

constexpr ::Liv::Lck::Echo::ILckEcho* const& __cordl_internal_get__echo() const;

constexpr ::Liv::Lck::Echo::ILckEcho*& __cordl_internal_get__echo() ;

constexpr ::Liv::Lck::ILckEncodeLooper* const& __cordl_internal_get__encodeLooper() const;

constexpr ::Liv::Lck::ILckEncodeLooper*& __cordl_internal_get__encodeLooper() ;

constexpr ::Liv::Lck::Encoding::ILckEncoder* const& __cordl_internal_get__encoder() const;

constexpr ::Liv::Lck::Encoding::ILckEncoder*& __cordl_internal_get__encoder() ;

constexpr ::Liv::Lck::LckPublicApiEventBridge* const& __cordl_internal_get__eventBridge() const;

constexpr ::Liv::Lck::LckPublicApiEventBridge*& __cordl_internal_get__eventBridge() ;

constexpr ::Liv::Lck::ILckEventBus* const& __cordl_internal_get__eventBus() const;

constexpr ::Liv::Lck::ILckEventBus*& __cordl_internal_get__eventBus() ;

constexpr ::Liv::Lck::LckEventErrorLogger* const& __cordl_internal_get__eventErrorLogger() const;

constexpr ::Liv::Lck::LckEventErrorLogger*& __cordl_internal_get__eventErrorLogger() ;

constexpr ::Liv::NativeAudioBridge::INativeAudioPlayer* const& __cordl_internal_get__nativeAudioPlayer() const;

constexpr ::Liv::NativeAudioBridge::INativeAudioPlayer*& __cordl_internal_get__nativeAudioPlayer() ;

constexpr ::Liv::Lck::ILckOutputConfigurer* const& __cordl_internal_get__outputConfigurer() const;

constexpr ::Liv::Lck::ILckOutputConfigurer*& __cordl_internal_get__outputConfigurer() ;

constexpr ::Liv::Lck::ILckPhotoCapture* const& __cordl_internal_get__photoCapture() const;

constexpr ::Liv::Lck::ILckPhotoCapture*& __cordl_internal_get__photoCapture() ;

constexpr ::Liv::Lck::ILckPreviewer* const& __cordl_internal_get__previewer() const;

constexpr ::Liv::Lck::ILckPreviewer*& __cordl_internal_get__previewer() ;

constexpr ::Liv::Lck::Recorder::ILckRecorder* const& __cordl_internal_get__recorder() const;

constexpr ::Liv::Lck::Recorder::ILckRecorder*& __cordl_internal_get__recorder() ;

constexpr ::Liv::Lck::ILckStorageWatcher* const& __cordl_internal_get__storageWatcher() const;

constexpr ::Liv::Lck::ILckStorageWatcher*& __cordl_internal_get__storageWatcher() ;

constexpr ::Liv::Lck::Streaming::ILckStreamer* const& __cordl_internal_get__streamer() const;

constexpr ::Liv::Lck::Streaming::ILckStreamer*& __cordl_internal_get__streamer() ;

constexpr ::Liv::Lck::Telemetry::ILckTelemetryClient* const& __cordl_internal_get__telemetryClient() const;

constexpr ::Liv::Lck::Telemetry::ILckTelemetryClient*& __cordl_internal_get__telemetryClient() ;

constexpr ::Liv::Lck::ILckVideoCapturer* const& __cordl_internal_get__videoCapturer() const;

constexpr ::Liv::Lck::ILckVideoCapturer*& __cordl_internal_get__videoCapturer() ;

constexpr ::Liv::Lck::ILckVideoMixer* const& __cordl_internal_get__videoMixer() const;

constexpr ::Liv::Lck::ILckVideoMixer*& __cordl_internal_get__videoMixer() ;

constexpr void __cordl_internal_set_OnActiveCameraSet(::System::Action_1<::Liv::Lck::LckResult_1<::Liv::Lck::ILckCamera*>*>*  value) ;

constexpr void __cordl_internal_set_OnEchoDisabled(::System::Action_2<::Liv::Lck::LckResult*,::Liv::Lck::EchoDisableReason>*  value) ;

constexpr void __cordl_internal_set_OnEchoEnabled(::System::Action_1<::Liv::Lck::LckResult*>*  value) ;

constexpr void __cordl_internal_set_OnEchoSaved(::System::Action_1<::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*>*  value) ;

constexpr void __cordl_internal_set_OnLowStorageSpace(::System::Action_1<::Liv::Lck::LckResult*>*  value) ;

constexpr void __cordl_internal_set_OnPhotoSaved(::System::Action_1<::Liv::Lck::LckResult*>*  value) ;

constexpr void __cordl_internal_set_OnRecordingPaused(::System::Action_1<::Liv::Lck::LckResult*>*  value) ;

constexpr void __cordl_internal_set_OnRecordingResumed(::System::Action_1<::Liv::Lck::LckResult*>*  value) ;

constexpr void __cordl_internal_set_OnRecordingSaved(::System::Action_1<::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*>*  value) ;

constexpr void __cordl_internal_set_OnRecordingStarted(::System::Action_1<::Liv::Lck::LckResult*>*  value) ;

constexpr void __cordl_internal_set_OnRecordingStopped(::System::Action_1<::Liv::Lck::LckResult*>*  value) ;

constexpr void __cordl_internal_set_OnStreamingStarted(::System::Action_1<::Liv::Lck::LckResult*>*  value) ;

constexpr void __cordl_internal_set_OnStreamingStopped(::System::Action_1<::Liv::Lck::LckResult*>*  value) ;

constexpr void __cordl_internal_set__audioMixer(::Liv::Lck::ILckAudioMixer*  value) ;

constexpr void __cordl_internal_set__disposed(bool  value) ;

constexpr void __cordl_internal_set__echo(::Liv::Lck::Echo::ILckEcho*  value) ;

constexpr void __cordl_internal_set__encodeLooper(::Liv::Lck::ILckEncodeLooper*  value) ;

constexpr void __cordl_internal_set__encoder(::Liv::Lck::Encoding::ILckEncoder*  value) ;

constexpr void __cordl_internal_set__eventBridge(::Liv::Lck::LckPublicApiEventBridge*  value) ;

constexpr void __cordl_internal_set__eventBus(::Liv::Lck::ILckEventBus*  value) ;

constexpr void __cordl_internal_set__eventErrorLogger(::Liv::Lck::LckEventErrorLogger*  value) ;

constexpr void __cordl_internal_set__nativeAudioPlayer(::Liv::NativeAudioBridge::INativeAudioPlayer*  value) ;

constexpr void __cordl_internal_set__outputConfigurer(::Liv::Lck::ILckOutputConfigurer*  value) ;

constexpr void __cordl_internal_set__photoCapture(::Liv::Lck::ILckPhotoCapture*  value) ;

constexpr void __cordl_internal_set__previewer(::Liv::Lck::ILckPreviewer*  value) ;

constexpr void __cordl_internal_set__recorder(::Liv::Lck::Recorder::ILckRecorder*  value) ;

constexpr void __cordl_internal_set__storageWatcher(::Liv::Lck::ILckStorageWatcher*  value) ;

constexpr void __cordl_internal_set__streamer(::Liv::Lck::Streaming::ILckStreamer*  value) ;

constexpr void __cordl_internal_set__telemetryClient(::Liv::Lck::Telemetry::ILckTelemetryClient*  value) ;

constexpr void __cordl_internal_set__videoCapturer(::Liv::Lck::ILckVideoCapturer*  value) ;

constexpr void __cordl_internal_set__videoMixer(::Liv::Lck::ILckVideoMixer*  value) ;

/// [CompilerGenerated]
/// @brief Method <.ctor>b__58_0, addr 0x9cf8ea0, size 0x10c, virtual false, abstract: false, final false
inline void __ctor_b__58_0(::Liv::Lck::LckResult*  r) ;

/// [CompilerGenerated]
/// @brief Method <.ctor>b__58_1, addr 0x9cf8fac, size 0x1c, virtual false, abstract: false, final false
inline void __ctor_b__58_1(::Liv::Lck::LckResult*  r) ;

/// [CompilerGenerated]
/// @brief Method <.ctor>b__58_11, addr 0x9cf917c, size 0x1c, virtual false, abstract: false, final false
inline void __ctor_b__58_11(::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*  r) ;

/// [CompilerGenerated]
/// @brief Method <.ctor>b__58_12, addr 0x9cf9198, size 0x1c, virtual false, abstract: false, final false
inline void __ctor_b__58_12(::Liv::Lck::LckResult*  r) ;

/// [CompilerGenerated]
/// @brief Method <.ctor>b__58_13, addr 0x9cf91b4, size 0x1c, virtual false, abstract: false, final false
inline void __ctor_b__58_13(::GlobalNamespace::LckEvents_EchoDisabledEvent  e) ;

/// [CompilerGenerated]
/// @brief Method <.ctor>b__58_15, addr 0x9cf91d0, size 0x1c, virtual false, abstract: false, final false
inline void __ctor_b__58_15(::Liv::Lck::LckResult_1<::Liv::Lck::ILckCamera*>*  r) ;

/// [CompilerGenerated]
/// @brief Method <.ctor>b__58_2, addr 0x9cf8fc8, size 0x1c, virtual false, abstract: false, final false
inline void __ctor_b__58_2(::Liv::Lck::LckResult*  r) ;

/// [CompilerGenerated]
/// @brief Method <.ctor>b__58_3, addr 0x9cf8fe4, size 0x1c, virtual false, abstract: false, final false
inline void __ctor_b__58_3(::Liv::Lck::LckResult*  r) ;

/// [CompilerGenerated]
/// @brief Method <.ctor>b__58_4, addr 0x9cf9000, size 0x10c, virtual false, abstract: false, final false
inline void __ctor_b__58_4(::Liv::Lck::LckResult*  r) ;

/// [CompilerGenerated]
/// @brief Method <.ctor>b__58_5, addr 0x9cf910c, size 0x1c, virtual false, abstract: false, final false
inline void __ctor_b__58_5(::Liv::Lck::LckResult*  r) ;

/// [CompilerGenerated]
/// @brief Method <.ctor>b__58_6, addr 0x9cf9128, size 0x1c, virtual false, abstract: false, final false
inline void __ctor_b__58_6(::Liv::Lck::LckResult*  r) ;

/// [CompilerGenerated]
/// @brief Method <.ctor>b__58_7, addr 0x9cf9144, size 0x1c, virtual false, abstract: false, final false
inline void __ctor_b__58_7(::Liv::Lck::LckResult*  r) ;

/// [CompilerGenerated]
/// @brief Method <.ctor>b__58_9, addr 0x9cf9160, size 0x1c, virtual false, abstract: false, final false
inline void __ctor_b__58_9(::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*  r) ;

/// [Preserve]
/// @brief Method .ctor, addr 0x9cf4994, size 0xe24, virtual false, abstract: false, final false
inline void _ctor(::Liv::Lck::Encoding::ILckEncoder*  encoder, ::Liv::Lck::Recorder::ILckRecorder*  recorder, ::Liv::Lck::Streaming::ILckStreamer*  streamer, ::Liv::Lck::Echo::ILckEcho*  echo, ::Liv::Lck::ILckEncodeLooper*  encodeLooper, ::Liv::Lck::ILckPhotoCapture*  photoCapture, ::Liv::Lck::ILckStorageWatcher*  storageWatcher, ::Liv::Lck::ILckVideoCapturer*  videoCapturer, ::Liv::Lck::ILckVideoMixer*  videoMixer, ::Liv::Lck::ILckAudioMixer*  audioMixer, ::Liv::Lck::ILckOutputConfigurer*  outputConfigurer, ::Liv::Lck::ILckPreviewer*  previewer, ::Liv::NativeAudioBridge::INativeAudioPlayer*  nativeAudioPlayer, ::Liv::Lck::ILckEventBus*  eventBus, ::Liv::Lck::Telemetry::ILckTelemetryClient*  telemetryClient) ;

/// [CompilerGenerated]
/// @brief Method add_OnActiveCameraSet, addr 0x9cf4834, size 0xb0, virtual true, abstract: false, final true
inline void add_OnActiveCameraSet(::System::Action_1<::Liv::Lck::LckResult_1<::Liv::Lck::ILckCamera*>*>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnEchoDisabled, addr 0x9cf46d4, size 0xb0, virtual true, abstract: false, final true
inline void add_OnEchoDisabled(::System::Action_2<::Liv::Lck::LckResult*,::Liv::Lck::EchoDisableReason>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnEchoEnabled, addr 0x9cf4574, size 0xb0, virtual true, abstract: false, final true
inline void add_OnEchoEnabled(::System::Action_1<::Liv::Lck::LckResult*>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnEchoSaved, addr 0x9cf4414, size 0xb0, virtual true, abstract: false, final true
inline void add_OnEchoSaved(::System::Action_1<::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnLowStorageSpace, addr 0x9cf3ff4, size 0xb0, virtual true, abstract: false, final true
inline void add_OnLowStorageSpace(::System::Action_1<::Liv::Lck::LckResult*>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnPhotoSaved, addr 0x9cf42b4, size 0xb0, virtual true, abstract: false, final true
inline void add_OnPhotoSaved(::System::Action_1<::Liv::Lck::LckResult*>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnRecordingPaused, addr 0x9cf3a74, size 0xb0, virtual true, abstract: false, final true
inline void add_OnRecordingPaused(::System::Action_1<::Liv::Lck::LckResult*>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnRecordingResumed, addr 0x9cf3bd4, size 0xb0, virtual true, abstract: false, final true
inline void add_OnRecordingResumed(::System::Action_1<::Liv::Lck::LckResult*>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnRecordingSaved, addr 0x9cf4154, size 0xb0, virtual true, abstract: false, final true
inline void add_OnRecordingSaved(::System::Action_1<::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnRecordingStarted, addr 0x9cebf38, size 0xb0, virtual true, abstract: false, final true
inline void add_OnRecordingStarted(::System::Action_1<::Liv::Lck::LckResult*>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnRecordingStopped, addr 0x9cebfe8, size 0xb0, virtual true, abstract: false, final true
inline void add_OnRecordingStopped(::System::Action_1<::Liv::Lck::LckResult*>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnStreamingStarted, addr 0x9cf3d34, size 0xb0, virtual true, abstract: false, final true
inline void add_OnStreamingStarted(::System::Action_1<::Liv::Lck::LckResult*>*  value) ;

/// [CompilerGenerated]
/// @brief Method add_OnStreamingStopped, addr 0x9cf3e94, size 0xb0, virtual true, abstract: false, final true
inline void add_OnStreamingStopped(::System::Action_1<::Liv::Lck::LckResult*>*  value) ;

/// @brief Convert to "::Liv::Lck::ILckService"
constexpr ::Liv::Lck::ILckService* i___Liv__Lck__ILckService() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// [CompilerGenerated]
/// @brief Method remove_OnActiveCameraSet, addr 0x9cf48e4, size 0xb0, virtual true, abstract: false, final true
inline void remove_OnActiveCameraSet(::System::Action_1<::Liv::Lck::LckResult_1<::Liv::Lck::ILckCamera*>*>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnEchoDisabled, addr 0x9cf4784, size 0xb0, virtual true, abstract: false, final true
inline void remove_OnEchoDisabled(::System::Action_2<::Liv::Lck::LckResult*,::Liv::Lck::EchoDisableReason>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnEchoEnabled, addr 0x9cf4624, size 0xb0, virtual true, abstract: false, final true
inline void remove_OnEchoEnabled(::System::Action_1<::Liv::Lck::LckResult*>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnEchoSaved, addr 0x9cf44c4, size 0xb0, virtual true, abstract: false, final true
inline void remove_OnEchoSaved(::System::Action_1<::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnLowStorageSpace, addr 0x9cf40a4, size 0xb0, virtual true, abstract: false, final true
inline void remove_OnLowStorageSpace(::System::Action_1<::Liv::Lck::LckResult*>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnPhotoSaved, addr 0x9cf4364, size 0xb0, virtual true, abstract: false, final true
inline void remove_OnPhotoSaved(::System::Action_1<::Liv::Lck::LckResult*>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnRecordingPaused, addr 0x9cf3b24, size 0xb0, virtual true, abstract: false, final true
inline void remove_OnRecordingPaused(::System::Action_1<::Liv::Lck::LckResult*>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnRecordingResumed, addr 0x9cf3c84, size 0xb0, virtual true, abstract: false, final true
inline void remove_OnRecordingResumed(::System::Action_1<::Liv::Lck::LckResult*>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnRecordingSaved, addr 0x9cf4204, size 0xb0, virtual true, abstract: false, final true
inline void remove_OnRecordingSaved(::System::Action_1<::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnRecordingStarted, addr 0x9cec1dc, size 0xb0, virtual true, abstract: false, final true
inline void remove_OnRecordingStarted(::System::Action_1<::Liv::Lck::LckResult*>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnRecordingStopped, addr 0x9cec28c, size 0xb0, virtual true, abstract: false, final true
inline void remove_OnRecordingStopped(::System::Action_1<::Liv::Lck::LckResult*>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnStreamingStarted, addr 0x9cf3de4, size 0xb0, virtual true, abstract: false, final true
inline void remove_OnStreamingStarted(::System::Action_1<::Liv::Lck::LckResult*>*  value) ;

/// [CompilerGenerated]
/// @brief Method remove_OnStreamingStopped, addr 0x9cf3f44, size 0xb0, virtual true, abstract: false, final true
inline void remove_OnStreamingStopped(::System::Action_1<::Liv::Lck::LckResult*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckService() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckService", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckService(LckService && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckService", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckService(LckService const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24798};

/// @brief Field _outputConfigurer, offset: 0x10, size: 0x8, def value: None
 ::Liv::Lck::ILckOutputConfigurer*  ____outputConfigurer;

/// @brief Field _encodeLooper, offset: 0x18, size: 0x8, def value: None
 ::Liv::Lck::ILckEncodeLooper*  ____encodeLooper;

/// @brief Field _nativeAudioPlayer, offset: 0x20, size: 0x8, def value: None
 ::Liv::NativeAudioBridge::INativeAudioPlayer*  ____nativeAudioPlayer;

/// @brief Field _encoder, offset: 0x28, size: 0x8, def value: None
 ::Liv::Lck::Encoding::ILckEncoder*  ____encoder;

/// @brief Field _echo, offset: 0x30, size: 0x8, def value: None
 ::Liv::Lck::Echo::ILckEcho*  ____echo;

/// @brief Field _disposed, offset: 0x38, size: 0x1, def value: None
 bool  ____disposed;

/// @brief Field _recorder, offset: 0x40, size: 0x8, def value: None
 ::Liv::Lck::Recorder::ILckRecorder*  ____recorder;

/// @brief Field _streamer, offset: 0x48, size: 0x8, def value: None
 ::Liv::Lck::Streaming::ILckStreamer*  ____streamer;

/// @brief Field _photoCapture, offset: 0x50, size: 0x8, def value: None
 ::Liv::Lck::ILckPhotoCapture*  ____photoCapture;

/// @brief Field _storageWatcher, offset: 0x58, size: 0x8, def value: None
 ::Liv::Lck::ILckStorageWatcher*  ____storageWatcher;

/// @brief Field _videoMixer, offset: 0x60, size: 0x8, def value: None
 ::Liv::Lck::ILckVideoMixer*  ____videoMixer;

/// @brief Field _audioMixer, offset: 0x68, size: 0x8, def value: None
 ::Liv::Lck::ILckAudioMixer*  ____audioMixer;

/// @brief Field _previewer, offset: 0x70, size: 0x8, def value: None
 ::Liv::Lck::ILckPreviewer*  ____previewer;

/// @brief Field _eventBus, offset: 0x78, size: 0x8, def value: None
 ::Liv::Lck::ILckEventBus*  ____eventBus;

/// @brief Field _videoCapturer, offset: 0x80, size: 0x8, def value: None
 ::Liv::Lck::ILckVideoCapturer*  ____videoCapturer;

/// @brief Field _telemetryClient, offset: 0x88, size: 0x8, def value: None
 ::Liv::Lck::Telemetry::ILckTelemetryClient*  ____telemetryClient;

/// @brief Field _eventBridge, offset: 0x90, size: 0x8, def value: None
 ::Liv::Lck::LckPublicApiEventBridge*  ____eventBridge;

/// @brief Field _eventErrorLogger, offset: 0x98, size: 0x8, def value: None
 ::Liv::Lck::LckEventErrorLogger*  ____eventErrorLogger;

/// [CompilerGenerated]
/// @brief Field OnRecordingStarted, offset: 0xa0, size: 0x8, def value: None
 ::System::Action_1<::Liv::Lck::LckResult*>*  ___OnRecordingStarted;

/// [CompilerGenerated]
/// @brief Field OnRecordingStopped, offset: 0xa8, size: 0x8, def value: None
 ::System::Action_1<::Liv::Lck::LckResult*>*  ___OnRecordingStopped;

/// [CompilerGenerated]
/// @brief Field OnRecordingPaused, offset: 0xb0, size: 0x8, def value: None
 ::System::Action_1<::Liv::Lck::LckResult*>*  ___OnRecordingPaused;

/// [CompilerGenerated]
/// @brief Field OnRecordingResumed, offset: 0xb8, size: 0x8, def value: None
 ::System::Action_1<::Liv::Lck::LckResult*>*  ___OnRecordingResumed;

/// [CompilerGenerated]
/// @brief Field OnStreamingStarted, offset: 0xc0, size: 0x8, def value: None
 ::System::Action_1<::Liv::Lck::LckResult*>*  ___OnStreamingStarted;

/// [CompilerGenerated]
/// @brief Field OnStreamingStopped, offset: 0xc8, size: 0x8, def value: None
 ::System::Action_1<::Liv::Lck::LckResult*>*  ___OnStreamingStopped;

/// [CompilerGenerated]
/// @brief Field OnLowStorageSpace, offset: 0xd0, size: 0x8, def value: None
 ::System::Action_1<::Liv::Lck::LckResult*>*  ___OnLowStorageSpace;

/// [CompilerGenerated]
/// @brief Field OnRecordingSaved, offset: 0xd8, size: 0x8, def value: None
 ::System::Action_1<::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*>*  ___OnRecordingSaved;

/// [CompilerGenerated]
/// @brief Field OnPhotoSaved, offset: 0xe0, size: 0x8, def value: None
 ::System::Action_1<::Liv::Lck::LckResult*>*  ___OnPhotoSaved;

/// [CompilerGenerated]
/// @brief Field OnEchoSaved, offset: 0xe8, size: 0x8, def value: None
 ::System::Action_1<::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*>*  ___OnEchoSaved;

/// [CompilerGenerated]
/// @brief Field OnEchoEnabled, offset: 0xf0, size: 0x8, def value: None
 ::System::Action_1<::Liv::Lck::LckResult*>*  ___OnEchoEnabled;

/// [CompilerGenerated]
/// @brief Field OnEchoDisabled, offset: 0xf8, size: 0x8, def value: None
 ::System::Action_2<::Liv::Lck::LckResult*,::Liv::Lck::EchoDisableReason>*  ___OnEchoDisabled;

/// [CompilerGenerated]
/// @brief Field OnActiveCameraSet, offset: 0x100, size: 0x8, def value: None
 ::System::Action_1<::Liv::Lck::LckResult_1<::Liv::Lck::ILckCamera*>*>*  ___OnActiveCameraSet;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::LckService, ____outputConfigurer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckService, ____encodeLooper) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckService, ____nativeAudioPlayer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckService, ____encoder) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckService, ____echo) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckService, ____disposed) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckService, ____recorder) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckService, ____streamer) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckService, ____photoCapture) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckService, ____storageWatcher) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckService, ____videoMixer) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckService, ____audioMixer) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckService, ____previewer) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckService, ____eventBus) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckService, ____videoCapturer) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckService, ____telemetryClient) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckService, ____eventBridge) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckService, ____eventErrorLogger) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckService, ___OnRecordingStarted) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckService, ___OnRecordingStopped) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckService, ___OnRecordingPaused) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckService, ___OnRecordingResumed) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckService, ___OnStreamingStarted) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckService, ___OnStreamingStopped) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckService, ___OnLowStorageSpace) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckService, ___OnRecordingSaved) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckService, ___OnPhotoSaved) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckService, ___OnEchoSaved) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckService, ___OnEchoEnabled) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckService, ___OnEchoDisabled) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckService, ___OnActiveCameraSet) == 0x100, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::LckService) == 0x108, "Size mismatch!");

} // namespace end def Liv::Lck
// [CompilerGenerated]
// Dependencies System.Object
namespace Liv::Lck {
// Is value type: false
// CS Name: Liv.Lck.LckService/<>c__DisplayClass58_1
class CORDL_TYPE LckService___c__DisplayClass58_1 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Liv::Lck::LckService*  __4__this;

/// @brief Field r, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_r, put=__cordl_internal_set_r)) ::Liv::Lck::LckResult*  r;

static inline ::Liv::Lck::LckService___c__DisplayClass58_1* New_ctor() ;

constexpr ::Liv::Lck::LckService* const& __cordl_internal_get___4__this() const;

constexpr ::Liv::Lck::LckService*& __cordl_internal_get___4__this() ;

constexpr ::Liv::Lck::LckResult* const& __cordl_internal_get_r() const;

constexpr ::Liv::Lck::LckResult*& __cordl_internal_get_r() ;

constexpr void __cordl_internal_set___4__this(::Liv::Lck::LckService*  value) ;

constexpr void __cordl_internal_set_r(::Liv::Lck::LckResult*  value) ;

/// @brief Method <.ctor>b__18, addr 0x9d31ff0, size 0x30, virtual false, abstract: false, final false
inline void __ctor_b__18() ;

/// @brief Method .ctor, addr 0x9d31fe8, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckService___c__DisplayClass58_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckService___c__DisplayClass58_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckService___c__DisplayClass58_1(LckService___c__DisplayClass58_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckService___c__DisplayClass58_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckService___c__DisplayClass58_1(LckService___c__DisplayClass58_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24796};

/// @brief Field r, offset: 0x10, size: 0x8, def value: None
 ::Liv::Lck::LckResult*  ___r;

/// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
 ::Liv::Lck::LckService*  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::LckService___c__DisplayClass58_1, ___r) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckService___c__DisplayClass58_1, _____4__this) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::LckService___c__DisplayClass58_1) == 0x20, "Size mismatch!");

} // namespace end def Liv::Lck
// [CompilerGenerated]
// Dependencies System.Object
namespace Liv::Lck {
// Is value type: false
// CS Name: Liv.Lck.LckService/<>c__DisplayClass58_0
class CORDL_TYPE LckService___c__DisplayClass58_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Liv::Lck::LckService*  __4__this;

/// @brief Field r, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_r, put=__cordl_internal_set_r)) ::Liv::Lck::LckResult*  r;

static inline ::Liv::Lck::LckService___c__DisplayClass58_0* New_ctor() ;

constexpr ::Liv::Lck::LckService* const& __cordl_internal_get___4__this() const;

constexpr ::Liv::Lck::LckService*& __cordl_internal_get___4__this() ;

constexpr ::Liv::Lck::LckResult* const& __cordl_internal_get_r() const;

constexpr ::Liv::Lck::LckResult*& __cordl_internal_get_r() ;

constexpr void __cordl_internal_set___4__this(::Liv::Lck::LckService*  value) ;

constexpr void __cordl_internal_set_r(::Liv::Lck::LckResult*  value) ;

/// @brief Method <.ctor>b__17, addr 0x9d31fb8, size 0x30, virtual false, abstract: false, final false
inline void __ctor_b__17() ;

/// @brief Method .ctor, addr 0x9d31fb0, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckService___c__DisplayClass58_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckService___c__DisplayClass58_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckService___c__DisplayClass58_0(LckService___c__DisplayClass58_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckService___c__DisplayClass58_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckService___c__DisplayClass58_0(LckService___c__DisplayClass58_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24795};

/// @brief Field r, offset: 0x10, size: 0x8, def value: None
 ::Liv::Lck::LckResult*  ___r;

/// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
 ::Liv::Lck::LckService*  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::LckService___c__DisplayClass58_0, ___r) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::LckService___c__DisplayClass58_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::LckService___c__DisplayClass58_0) == 0x20, "Size mismatch!");

} // namespace end def Liv::Lck
// [CompilerGenerated]
// Dependencies System.Object
namespace Liv::Lck {
// Is value type: false
// CS Name: Liv.Lck.LckService/<>c
class CORDL_TYPE LckService___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Liv::Lck::LckService___c*  __9;

/// @brief Field <>9__58_10, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__58_10, put=setStaticF___9__58_10)) ::System::Func_2<::GlobalNamespace::LckEvents_EchoSavedEvent,::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*>*  __9__58_10;

/// @brief Field <>9__58_14, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__58_14, put=setStaticF___9__58_14)) ::System::Func_2<::GlobalNamespace::LckEvents_ActiveCameraChangedEvent,::Liv::Lck::LckResult_1<::Liv::Lck::ILckCamera*>*>*  __9__58_14;

/// @brief Field <>9__58_16, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__58_16, put=setStaticF___9__58_16)) ::System::Action_1<::Liv::Lck::ILckResult*>*  __9__58_16;

/// @brief Field <>9__58_8, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__58_8, put=setStaticF___9__58_8)) ::System::Func_2<::GlobalNamespace::LckEvents_RecordingSavedEvent,::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*>*  __9__58_8;

/// @brief Field <>9__93_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__93_0, put=setStaticF___9__93_0)) ::System::Action_1<::System::Threading::Tasks::Task_1<::Liv::Lck::LckResult*>*>*  __9__93_0;

static inline ::Liv::Lck::LckService___c* New_ctor() ;

/// @brief Method <SetEchoEnabled>b__93_0, addr 0x9d31e28, size 0x188, virtual false, abstract: false, final false
inline void _SetEchoEnabled_b__93_0(::System::Threading::Tasks::Task_1<::Liv::Lck::LckResult*>*  t) ;

/// @brief Method <.ctor>b__58_10, addr 0x9d31c44, size 0x8, virtual false, abstract: false, final false
inline ::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>* __ctor_b__58_10(::GlobalNamespace::LckEvents_EchoSavedEvent  evt) ;

/// @brief Method <.ctor>b__58_14, addr 0x9d31c4c, size 0x8, virtual false, abstract: false, final false
inline ::Liv::Lck::LckResult_1<::Liv::Lck::ILckCamera*>* __ctor_b__58_14(::GlobalNamespace::LckEvents_ActiveCameraChangedEvent  evt) ;

/// @brief Method <.ctor>b__58_16, addr 0x9d31c54, size 0x1d4, virtual false, abstract: false, final false
inline void __ctor_b__58_16(::Liv::Lck::ILckResult*  result) ;

/// @brief Method <.ctor>b__58_8, addr 0x9d31c3c, size 0x8, virtual false, abstract: false, final false
inline ::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>* __ctor_b__58_8(::GlobalNamespace::LckEvents_RecordingSavedEvent  evt) ;

/// @brief Method .ctor, addr 0x9d31c34, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Liv::Lck::LckService___c* getStaticF___9() ;

static inline ::System::Func_2<::GlobalNamespace::LckEvents_EchoSavedEvent,::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*>* getStaticF___9__58_10() ;

static inline ::System::Func_2<::GlobalNamespace::LckEvents_ActiveCameraChangedEvent,::Liv::Lck::LckResult_1<::Liv::Lck::ILckCamera*>*>* getStaticF___9__58_14() ;

static inline ::System::Action_1<::Liv::Lck::ILckResult*>* getStaticF___9__58_16() ;

static inline ::System::Func_2<::GlobalNamespace::LckEvents_RecordingSavedEvent,::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*>* getStaticF___9__58_8() ;

static inline ::System::Action_1<::System::Threading::Tasks::Task_1<::Liv::Lck::LckResult*>*>* getStaticF___9__93_0() ;

static inline void setStaticF___9(::Liv::Lck::LckService___c*  value) ;

static inline void setStaticF___9__58_10(::System::Func_2<::GlobalNamespace::LckEvents_EchoSavedEvent,::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*>*  value) ;

static inline void setStaticF___9__58_14(::System::Func_2<::GlobalNamespace::LckEvents_ActiveCameraChangedEvent,::Liv::Lck::LckResult_1<::Liv::Lck::ILckCamera*>*>*  value) ;

static inline void setStaticF___9__58_16(::System::Action_1<::Liv::Lck::ILckResult*>*  value) ;

static inline void setStaticF___9__58_8(::System::Func_2<::GlobalNamespace::LckEvents_RecordingSavedEvent,::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*>*  value) ;

static inline void setStaticF___9__93_0(::System::Action_1<::System::Threading::Tasks::Task_1<::Liv::Lck::LckResult*>*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckService___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckService___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckService___c(LckService___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckService___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckService___c(LckService___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24794};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Liv::Lck::LckService___c) == 0x10, "Size mismatch!");

} // namespace end def Liv::Lck
