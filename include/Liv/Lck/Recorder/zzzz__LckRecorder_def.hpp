#pragma once
// IWYU pragma private; include "Liv/Lck/Recorder/LckRecorder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Liv/Lck/Encoding/zzzz__EncoderConsumer_def.hpp"
#include "Liv/Lck/Encoding/zzzz__LckEncodedPacketHandler_def.hpp"
#include "Liv/Lck/Recorder/zzzz__MuxerConfig_def.hpp"
#include "Liv/Lck/zzzz__CameraTrackDescriptor_def.hpp"
#include "Liv/Lck/zzzz__LckCaptureState_def.hpp"
#include "Liv/Lck/zzzz__LckService_StopReason_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_AutoScope_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LckRecorder)
namespace GlobalNamespace {
class ILckCaptureStateProvider;
}
namespace GlobalNamespace {
struct LckEvents_CaptureErrorEvent;
}
namespace GlobalNamespace {
struct LckEvents_EncoderStoppedEvent;
}
namespace GlobalNamespace {
struct LckEvents_LowStorageSpaceDetectedEvent;
}
namespace GlobalNamespace {
struct LckRecorder__StartNativeMuxerAsync_d__32;
}
namespace GlobalNamespace {
struct LckRecorder__StartRecordingAsync_d__33;
}
namespace GlobalNamespace {
struct LckRecorder__StopNativeMuxerAsync_d__36;
}
namespace GlobalNamespace {
struct LckRecorder__StopRecordingAsync_d__37;
}
namespace GlobalNamespace {
struct LckService_StopReason;
}
namespace Liv::Lck::Core {
class ILckTelemetryContextProvider;
}
namespace Liv::Lck::Encoding {
class ILckEncoder;
}
namespace Liv::Lck::Recorder {
class ILckNativeRecordingService;
}
namespace Liv::Lck::Recorder {
class ILckRecorder;
}
namespace Liv::Lck::Recorder {
class LckRecorder__CopyRecordingToGalleryWhenReady_d__39;
}
namespace Liv::Lck::Recorder {
class LckRecorder___c__DisplayClass39_0;
}
namespace Liv::Lck::Recorder {
class LckRecorder___c__DisplayClass39_1;
}
namespace Liv::Lck::Recorder {
struct MuxerConfig;
}
namespace Liv::Lck::Recorder {
struct RecordingData;
}
namespace Liv::Lck::Telemetry {
class ILckTelemetryClient;
}
namespace Liv::Lck {
class ILckEventBus;
}
namespace Liv::Lck {
class ILckOutputConfigurer;
}
namespace Liv::Lck {
class ILckStorageWatcher;
}
namespace Liv::Lck {
struct LckCaptureState;
}
namespace Liv::Lck {
template<typename T>
class LckResult_1;
}
namespace Liv::Lck {
class LckResult;
}
namespace Liv::NGFX {
struct LogLevel;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Threading::Tasks {
class Task;
}
namespace System {
class IDisposable;
}
namespace System {
class Object;
}
namespace System {
struct TimeSpan;
}
namespace UnityEngine {
class WaitForSeconds;
}
// Forward declare root types
namespace Liv::Lck::Recorder {
class LckRecorder;
}
namespace Liv::Lck::Recorder {
class LckRecorder__CopyRecordingToGalleryWhenReady_d__39;
}
namespace Liv::Lck::Recorder {
class LckRecorder___c__DisplayClass39_0;
}
namespace Liv::Lck::Recorder {
class LckRecorder___c__DisplayClass39_1;
}
// Write type traits
MARK_REF_T(::Liv::Lck::Recorder::LckRecorder*);
MARK_REF_T(::Liv::Lck::Recorder::LckRecorder__CopyRecordingToGalleryWhenReady_d__39*);
MARK_REF_T(::Liv::Lck::Recorder::LckRecorder___c__DisplayClass39_0*);
MARK_REF_T(::Liv::Lck::Recorder::LckRecorder___c__DisplayClass39_1*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::Recorder::LckRecorder*, "Liv.Lck.Recorder", "LckRecorder");
DEFINE_IL2CPP_CLASS(::Liv::Lck::Recorder::LckRecorder__CopyRecordingToGalleryWhenReady_d__39*, "Liv.Lck.Recorder", "LckRecorder/<CopyRecordingToGalleryWhenReady>d__39");
DEFINE_IL2CPP_CLASS(::Liv::Lck::Recorder::LckRecorder___c__DisplayClass39_0*, "Liv.Lck.Recorder", "LckRecorder/<>c__DisplayClass39_0");
DEFINE_IL2CPP_CLASS(::Liv::Lck::Recorder::LckRecorder___c__DisplayClass39_1*, "Liv.Lck.Recorder", "LckRecorder/<>c__DisplayClass39_1");
// Dependencies Liv.Lck.CameraTrackDescriptor, Liv.Lck.Encoding.EncoderConsumer, Liv.Lck.Encoding.LckEncodedPacketHandler, Liv.Lck.LckCaptureState, Liv.Lck.LckService::StopReason, Liv.Lck.Recorder.MuxerConfig, System.Object, Unity.Profiling.ProfilerMarker
namespace Liv::Lck::Recorder {
// Is value type: false
// CS Name: Liv.Lck.Recorder.LckRecorder
class CORDL_TYPE LckRecorder : public ::System::Object {
public:
// Declarations
using _StartNativeMuxerAsync_d__32 = ::GlobalNamespace::LckRecorder__StartNativeMuxerAsync_d__32;

using _StartRecordingAsync_d__33 = ::GlobalNamespace::LckRecorder__StartRecordingAsync_d__33;

using _StopNativeMuxerAsync_d__36 = ::GlobalNamespace::LckRecorder__StopNativeMuxerAsync_d__36;

using _StopRecordingAsync_d__37 = ::GlobalNamespace::LckRecorder__StopRecordingAsync_d__37;

using _CopyRecordingToGalleryWhenReady_d__39 = ::Liv::Lck::Recorder::LckRecorder__CopyRecordingToGalleryWhenReady_d__39;

using __c__DisplayClass39_0 = ::Liv::Lck::Recorder::LckRecorder___c__DisplayClass39_0;

using __c__DisplayClass39_1 = ::Liv::Lck::Recorder::LckRecorder___c__DisplayClass39_1;

 __declspec(property(get=get_ActualRecordingDurationSeconds)) float_t  ActualRecordingDurationSeconds;

 __declspec(property(get=get_CurrentCaptureState, put=set_CurrentCaptureState)) ::Liv::Lck::LckCaptureState  CurrentCaptureState;

/// @brief Field <CurrentCaptureState>k__BackingField, offset 0xcc, size 0x4 
 __declspec(property(get=__cordl_internal_get__CurrentCaptureState_k__BackingField, put=__cordl_internal_set__CurrentCaptureState_k__BackingField)) ::Liv::Lck::LckCaptureState  _CurrentCaptureState_k__BackingField;

/// @brief Field _accumulatedRecordingDuration, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get__accumulatedRecordingDuration, put=__cordl_internal_set__accumulatedRecordingDuration)) float_t  _accumulatedRecordingDuration;

/// @brief Field _copyOutputFileToNativeGalleryMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__copyOutputFileToNativeGalleryMarker, put=setStaticF__copyOutputFileToNativeGalleryMarker)) ::Unity::Profiling::ProfilerMarker  _copyOutputFileToNativeGalleryMarker;

/// @brief Field _copyVideoSpinWait, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get__copyVideoSpinWait, put=__cordl_internal_set__copyVideoSpinWait)) ::UnityEngine::WaitForSeconds*  _copyVideoSpinWait;

/// @brief Field _currentRecordingDescriptor, offset 0x94, size 0x14 
 __declspec(property(get=__cordl_internal_get__currentRecordingDescriptor, put=__cordl_internal_set__currentRecordingDescriptor)) ::Liv::Lck::CameraTrackDescriptor  _currentRecordingDescriptor;

/// @brief Field _disposed, offset 0xc8, size 0x1 
 __declspec(property(get=__cordl_internal_get__disposed, put=__cordl_internal_set__disposed)) bool  _disposed;

/// @brief Field _encoder, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__encoder, put=__cordl_internal_set__encoder)) ::Liv::Lck::Encoding::ILckEncoder*  _encoder;

/// @brief Field _eventBus, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__eventBus, put=__cordl_internal_set__eventBus)) ::Liv::Lck::ILckEventBus*  _eventBus;

/// @brief Field _lastActiveSegmentStartTime, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get__lastActiveSegmentStartTime, put=__cordl_internal_set__lastActiveSegmentStartTime)) float_t  _lastActiveSegmentStartTime;

/// @brief Field _lastRecordingFilePath, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__lastRecordingFilePath, put=__cordl_internal_set__lastRecordingFilePath)) ::StringW  _lastRecordingFilePath;

/// @brief Field _muxerConfig, offset 0x48, size 0x30 
 __declspec(property(get=__cordl_internal_get__muxerConfig, put=__cordl_internal_set__muxerConfig)) ::Liv::Lck::Recorder::MuxerConfig  _muxerConfig;

/// @brief Field _nativeRecordingService, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__nativeRecordingService, put=__cordl_internal_set__nativeRecordingService)) ::Liv::Lck::Recorder::ILckNativeRecordingService*  _nativeRecordingService;

/// @brief Field _outputConfigurer, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__outputConfigurer, put=__cordl_internal_set__outputConfigurer)) ::Liv::Lck::ILckOutputConfigurer*  _outputConfigurer;

/// @brief Field _recordingPacketHandler, offset 0xa8, size 0x18 
 __declspec(property(get=__cordl_internal_get__recordingPacketHandler, put=__cordl_internal_set__recordingPacketHandler)) ::Liv::Lck::Encoding::LckEncodedPacketHandler  _recordingPacketHandler;

/// @brief Field _recordingStartTime, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get__recordingStartTime, put=__cordl_internal_set__recordingStartTime)) float_t  _recordingStartTime;

/// @brief Field _recordingTelemetryContext, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get__recordingTelemetryContext, put=__cordl_internal_set__recordingTelemetryContext)) ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  _recordingTelemetryContext;

/// @brief Field _stopReason, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get__stopReason, put=__cordl_internal_set__stopReason)) ::GlobalNamespace::LckService_StopReason  _stopReason;

/// @brief Field _storageWatcher, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__storageWatcher, put=__cordl_internal_set__storageWatcher)) ::Liv::Lck::ILckStorageWatcher*  _storageWatcher;

/// @brief Field _telemetryClient, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__telemetryClient, put=__cordl_internal_set__telemetryClient)) ::Liv::Lck::Telemetry::ILckTelemetryClient*  _telemetryClient;

/// @brief Field _telemetryContextProvider, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__telemetryContextProvider, put=__cordl_internal_set__telemetryContextProvider)) ::Liv::Lck::Core::ILckTelemetryContextProvider*  _telemetryContextProvider;

/// @brief Convert operator to "::GlobalNamespace::ILckCaptureStateProvider"
constexpr operator  ::GlobalNamespace::ILckCaptureStateProvider*() noexcept;

/// @brief Convert operator to "::Liv::Lck::Recorder::ILckRecorder"
constexpr operator  ::Liv::Lck::Recorder::ILckRecorder*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// [IteratorStateMachine(typeof(Liv.Lck.Recorder.LckRecorder::<CopyRecordingToGalleryWhenReady>d__39))]
/// @brief Method CopyRecordingToGalleryWhenReady, addr 0x9d61014, size 0x74, virtual false, abstract: false, final false
inline ::System::Collections::IEnumerator* CopyRecordingToGalleryWhenReady() ;

/// @brief Method CreateMuxerConfig, addr 0x9d61944, size 0x2c4, virtual false, abstract: false, final false
inline ::Liv::Lck::Recorder::MuxerConfig CreateMuxerConfig() ;

/// @brief Method Dispose, addr 0x9d61088, size 0x350, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method GetRecordingDuration, addr 0x9d60b28, size 0xe8, virtual true, abstract: false, final true
inline ::Liv::Lck::LckResult_1<::System::TimeSpan>* GetRecordingDuration() ;

/// @brief Method IsPaused, addr 0x9d60260, size 0x50, virtual true, abstract: false, final true
inline ::Liv::Lck::LckResult_1<bool>* IsPaused() ;

/// @brief Method IsRecording, addr 0x9d60210, size 0x50, virtual true, abstract: false, final true
inline ::Liv::Lck::LckResult_1<bool>* IsRecording() ;

/// @brief [Preserve]
static inline ::Liv::Lck::Recorder::LckRecorder* New_ctor(::Liv::Lck::Recorder::ILckNativeRecordingService*  nativeRecordingService, ::Liv::Lck::Encoding::ILckEncoder*  encoder, ::Liv::Lck::ILckOutputConfigurer*  outputConfigurer, ::Liv::Lck::ILckStorageWatcher*  storageWatcher, ::Liv::Lck::ILckEventBus*  eventBus, ::Liv::Lck::Telemetry::ILckTelemetryClient*  telemetryClient, ::Liv::Lck::Core::ILckTelemetryContextProvider*  telemetryContextProvider) ;

/// @brief Method OnCaptureError, addr 0x9d61f80, size 0xe4, virtual false, abstract: false, final false
inline void OnCaptureError(::GlobalNamespace::LckEvents_CaptureErrorEvent  captureErrorEvent) ;

/// @brief Method OnEncoderStopped, addr 0x9d61c08, size 0xd0, virtual false, abstract: false, final false
inline void OnEncoderStopped(::GlobalNamespace::LckEvents_EncoderStoppedEvent  encoderStoppedEvent) ;

/// @brief Method OnLowStorageSpaceDetected, addr 0x9d61cd8, size 0x8, virtual false, abstract: false, final false
inline void OnLowStorageSpaceDetected(::GlobalNamespace::LckEvents_LowStorageSpaceDetectedEvent  lowStorageSpaceDetectedEvent) ;

/// @brief Method PauseRecording, addr 0x9d60718, size 0x134, virtual true, abstract: false, final true
inline ::Liv::Lck::LckResult* PauseRecording() ;

/// @brief Method ResumeRecording, addr 0x9d6092c, size 0x11c, virtual true, abstract: false, final true
inline ::Liv::Lck::LckResult* ResumeRecording() ;

/// @brief Method SendRecordingStoppedTelemetry, addr 0x9d613d8, size 0x304, virtual false, abstract: false, final false
inline void SendRecordingStoppedTelemetry() ;

/// @brief Method SetLogLevel, addr 0x9d602b0, size 0xac, virtual true, abstract: false, final true
inline void SetLogLevel(::Liv::NGFX::LogLevel  logLevel) ;

/// [AsyncStateMachine(typeof(Liv.Lck.Recorder.LckRecorder::<StartNativeMuxerAsync>d__32))]
/// @brief Method StartNativeMuxerAsync, addr 0x9d60c50, size 0x108, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::Liv::Lck::LckResult*>* StartNativeMuxerAsync() ;

/// @brief Method StartRecording, addr 0x9d6035c, size 0x10c, virtual true, abstract: false, final true
inline ::Liv::Lck::LckResult* StartRecording() ;

/// [AsyncStateMachine(typeof(Liv.Lck.Recorder.LckRecorder::<StartRecordingAsync>d__33))]
/// @brief Method StartRecordingAsync, addr 0x9d60d58, size 0xdc, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* StartRecordingAsync() ;

/// @brief Method StartRecordingProcess, addr 0x9d60468, size 0xc, virtual false, abstract: false, final false
inline void StartRecordingProcess() ;

/// [AsyncStateMachine(typeof(Liv.Lck.Recorder.LckRecorder::<StopNativeMuxerAsync>d__36))]
/// @brief Method StopNativeMuxerAsync, addr 0x9d60e34, size 0x108, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::Liv::Lck::LckResult*>* StopNativeMuxerAsync() ;

/// @brief Method StopRecording, addr 0x9d60474, size 0x1b4, virtual true, abstract: false, final true
inline ::Liv::Lck::LckResult* StopRecording(::GlobalNamespace::LckService_StopReason  stopReason) ;

/// [AsyncStateMachine(typeof(Liv.Lck.Recorder.LckRecorder::<StopRecordingAsync>d__37))]
/// @brief Method StopRecordingAsync, addr 0x9d60f3c, size 0xd8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* StopRecordingAsync() ;

/// @brief Method StopRecordingProcess, addr 0x9d60628, size 0xf0, virtual false, abstract: false, final false
inline void StopRecordingProcess() ;

/// @brief Method TriggerRecordingPausedEvent, addr 0x9d6084c, size 0xe0, virtual false, abstract: false, final false
inline void TriggerRecordingPausedEvent(::Liv::Lck::LckResult*  result) ;

/// @brief Method TriggerRecordingResumedEvent, addr 0x9d60a48, size 0xe0, virtual false, abstract: false, final false
inline void TriggerRecordingResumedEvent(::Liv::Lck::LckResult*  result) ;

/// @brief Method TriggerRecordingSavedEvent, addr 0x9d61ea0, size 0xe0, virtual false, abstract: false, final false
inline void TriggerRecordingSavedEvent(::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*  result) ;

/// @brief Method TriggerRecordingStartedEvent, addr 0x9d61ce0, size 0xe0, virtual false, abstract: false, final false
inline void TriggerRecordingStartedEvent(::Liv::Lck::LckResult*  result) ;

/// @brief Method TriggerRecordingStoppedEvent, addr 0x9d61dc0, size 0xe0, virtual false, abstract: false, final false
inline void TriggerRecordingStoppedEvent(::Liv::Lck::LckResult*  result) ;

/// @brief Method UpdateRecordingTelemetryContext, addr 0x9d616dc, size 0x268, virtual false, abstract: false, final false
inline void UpdateRecordingTelemetryContext() ;

/// [CompilerGenerated]
/// @brief Method <CopyRecordingToGalleryWhenReady>b__39_0, addr 0x9d624c8, size 0x124, virtual false, abstract: false, final false
inline void _CopyRecordingToGalleryWhenReady_b__39_0(bool  success, ::StringW  path) ;

/// [CompilerGenerated]
/// @brief Method <StartNativeMuxerAsync>b__32_0, addr 0x9d620d8, size 0x204, virtual false, abstract: false, final false
inline ::Liv::Lck::LckResult* _StartNativeMuxerAsync_b__32_0() ;

/// [CompilerGenerated]
/// @brief Method <StartRecordingAsync>b__33_0, addr 0x9d622dc, size 0x40, virtual false, abstract: false, final false
inline float_t _StartRecordingAsync_b__33_0() ;

/// [CompilerGenerated]
/// @brief Method <StopNativeMuxerAsync>b__36_0, addr 0x9d6231c, size 0x1ac, virtual false, abstract: false, final false
inline ::Liv::Lck::LckResult* _StopNativeMuxerAsync_b__36_0() ;

constexpr ::Liv::Lck::LckCaptureState const& __cordl_internal_get__CurrentCaptureState_k__BackingField() const;

constexpr ::Liv::Lck::LckCaptureState& __cordl_internal_get__CurrentCaptureState_k__BackingField() ;

constexpr float_t const& __cordl_internal_get__accumulatedRecordingDuration() const;

constexpr float_t& __cordl_internal_get__accumulatedRecordingDuration() ;

constexpr ::UnityEngine::WaitForSeconds* const& __cordl_internal_get__copyVideoSpinWait() const;

constexpr ::UnityEngine::WaitForSeconds*& __cordl_internal_get__copyVideoSpinWait() ;

constexpr ::Liv::Lck::CameraTrackDescriptor const& __cordl_internal_get__currentRecordingDescriptor() const;

constexpr ::Liv::Lck::CameraTrackDescriptor& __cordl_internal_get__currentRecordingDescriptor() ;

constexpr bool const& __cordl_internal_get__disposed() const;

constexpr bool& __cordl_internal_get__disposed() ;

constexpr ::Liv::Lck::Encoding::ILckEncoder* const& __cordl_internal_get__encoder() const;

constexpr ::Liv::Lck::Encoding::ILckEncoder*& __cordl_internal_get__encoder() ;

constexpr ::Liv::Lck::ILckEventBus* const& __cordl_internal_get__eventBus() const;

constexpr ::Liv::Lck::ILckEventBus*& __cordl_internal_get__eventBus() ;

constexpr float_t const& __cordl_internal_get__lastActiveSegmentStartTime() const;

constexpr float_t& __cordl_internal_get__lastActiveSegmentStartTime() ;

constexpr ::StringW const& __cordl_internal_get__lastRecordingFilePath() const;

constexpr ::StringW& __cordl_internal_get__lastRecordingFilePath() ;

constexpr ::Liv::Lck::Recorder::MuxerConfig const& __cordl_internal_get__muxerConfig() const;

constexpr ::Liv::Lck::Recorder::MuxerConfig& __cordl_internal_get__muxerConfig() ;

constexpr ::Liv::Lck::Recorder::ILckNativeRecordingService* const& __cordl_internal_get__nativeRecordingService() const;

constexpr ::Liv::Lck::Recorder::ILckNativeRecordingService*& __cordl_internal_get__nativeRecordingService() ;

constexpr ::Liv::Lck::ILckOutputConfigurer* const& __cordl_internal_get__outputConfigurer() const;

constexpr ::Liv::Lck::ILckOutputConfigurer*& __cordl_internal_get__outputConfigurer() ;

constexpr ::Liv::Lck::Encoding::LckEncodedPacketHandler const& __cordl_internal_get__recordingPacketHandler() const;

constexpr ::Liv::Lck::Encoding::LckEncodedPacketHandler& __cordl_internal_get__recordingPacketHandler() ;

constexpr float_t const& __cordl_internal_get__recordingStartTime() const;

constexpr float_t& __cordl_internal_get__recordingStartTime() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>* const& __cordl_internal_get__recordingTelemetryContext() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*& __cordl_internal_get__recordingTelemetryContext() ;

constexpr ::GlobalNamespace::LckService_StopReason const& __cordl_internal_get__stopReason() const;

constexpr ::GlobalNamespace::LckService_StopReason& __cordl_internal_get__stopReason() ;

constexpr ::Liv::Lck::ILckStorageWatcher* const& __cordl_internal_get__storageWatcher() const;

constexpr ::Liv::Lck::ILckStorageWatcher*& __cordl_internal_get__storageWatcher() ;

constexpr ::Liv::Lck::Telemetry::ILckTelemetryClient* const& __cordl_internal_get__telemetryClient() const;

constexpr ::Liv::Lck::Telemetry::ILckTelemetryClient*& __cordl_internal_get__telemetryClient() ;

constexpr ::Liv::Lck::Core::ILckTelemetryContextProvider* const& __cordl_internal_get__telemetryContextProvider() const;

constexpr ::Liv::Lck::Core::ILckTelemetryContextProvider*& __cordl_internal_get__telemetryContextProvider() ;

constexpr void __cordl_internal_set__CurrentCaptureState_k__BackingField(::Liv::Lck::LckCaptureState  value) ;

constexpr void __cordl_internal_set__accumulatedRecordingDuration(float_t  value) ;

constexpr void __cordl_internal_set__copyVideoSpinWait(::UnityEngine::WaitForSeconds*  value) ;

constexpr void __cordl_internal_set__currentRecordingDescriptor(::Liv::Lck::CameraTrackDescriptor  value) ;

constexpr void __cordl_internal_set__disposed(bool  value) ;

constexpr void __cordl_internal_set__encoder(::Liv::Lck::Encoding::ILckEncoder*  value) ;

constexpr void __cordl_internal_set__eventBus(::Liv::Lck::ILckEventBus*  value) ;

constexpr void __cordl_internal_set__lastActiveSegmentStartTime(float_t  value) ;

constexpr void __cordl_internal_set__lastRecordingFilePath(::StringW  value) ;

constexpr void __cordl_internal_set__muxerConfig(::Liv::Lck::Recorder::MuxerConfig  value) ;

constexpr void __cordl_internal_set__nativeRecordingService(::Liv::Lck::Recorder::ILckNativeRecordingService*  value) ;

constexpr void __cordl_internal_set__outputConfigurer(::Liv::Lck::ILckOutputConfigurer*  value) ;

constexpr void __cordl_internal_set__recordingPacketHandler(::Liv::Lck::Encoding::LckEncodedPacketHandler  value) ;

constexpr void __cordl_internal_set__recordingStartTime(float_t  value) ;

constexpr void __cordl_internal_set__recordingTelemetryContext(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  value) ;

constexpr void __cordl_internal_set__stopReason(::GlobalNamespace::LckService_StopReason  value) ;

constexpr void __cordl_internal_set__storageWatcher(::Liv::Lck::ILckStorageWatcher*  value) ;

constexpr void __cordl_internal_set__telemetryClient(::Liv::Lck::Telemetry::ILckTelemetryClient*  value) ;

constexpr void __cordl_internal_set__telemetryContextProvider(::Liv::Lck::Core::ILckTelemetryContextProvider*  value) ;

/// [Preserve]
/// @brief Method .ctor, addr 0x9d5fe20, size 0x3f0, virtual false, abstract: false, final false
inline void _ctor(::Liv::Lck::Recorder::ILckNativeRecordingService*  nativeRecordingService, ::Liv::Lck::Encoding::ILckEncoder*  encoder, ::Liv::Lck::ILckOutputConfigurer*  outputConfigurer, ::Liv::Lck::ILckStorageWatcher*  storageWatcher, ::Liv::Lck::ILckEventBus*  eventBus, ::Liv::Lck::Telemetry::ILckTelemetryClient*  telemetryClient, ::Liv::Lck::Core::ILckTelemetryContextProvider*  telemetryContextProvider) ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF__copyOutputFileToNativeGalleryMarker() ;

/// @brief Method get_ActualRecordingDurationSeconds, addr 0x9d60c10, size 0x40, virtual false, abstract: false, final false
inline float_t get_ActualRecordingDurationSeconds() ;

/// [CompilerGenerated]
/// @brief Method get_CurrentCaptureState, addr 0x9d5fe10, size 0x8, virtual true, abstract: false, final true
inline ::Liv::Lck::LckCaptureState get_CurrentCaptureState() ;

/// @brief Convert to "::GlobalNamespace::ILckCaptureStateProvider"
constexpr ::GlobalNamespace::ILckCaptureStateProvider* i___GlobalNamespace__ILckCaptureStateProvider() noexcept;

/// @brief Convert to "::Liv::Lck::Recorder::ILckRecorder"
constexpr ::Liv::Lck::Recorder::ILckRecorder* i___Liv__Lck__Recorder__ILckRecorder() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

static inline void setStaticF__copyOutputFileToNativeGalleryMarker(::Unity::Profiling::ProfilerMarker  value) ;

/// [CompilerGenerated]
/// @brief Method set_CurrentCaptureState, addr 0x9d5fe18, size 0x8, virtual false, abstract: false, final false
inline void set_CurrentCaptureState(::Liv::Lck::LckCaptureState  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckRecorder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckRecorder", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckRecorder(LckRecorder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckRecorder", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckRecorder(LckRecorder const& ) = delete;

/// @brief Field ConsumerName value: I32(0)
static ::Liv::Lck::Encoding::EncoderConsumer const ConsumerName;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24970};

/// @brief Field _nativeRecordingService, offset: 0x10, size: 0x8, def value: None
 ::Liv::Lck::Recorder::ILckNativeRecordingService*  ____nativeRecordingService;

/// @brief Field _storageWatcher, offset: 0x18, size: 0x8, def value: None
 ::Liv::Lck::ILckStorageWatcher*  ____storageWatcher;

/// @brief Field _encoder, offset: 0x20, size: 0x8, def value: None
 ::Liv::Lck::Encoding::ILckEncoder*  ____encoder;

/// @brief Field _outputConfigurer, offset: 0x28, size: 0x8, def value: None
 ::Liv::Lck::ILckOutputConfigurer*  ____outputConfigurer;

/// @brief Field _eventBus, offset: 0x30, size: 0x8, def value: None
 ::Liv::Lck::ILckEventBus*  ____eventBus;

/// @brief Field _telemetryClient, offset: 0x38, size: 0x8, def value: None
 ::Liv::Lck::Telemetry::ILckTelemetryClient*  ____telemetryClient;

/// @brief Field _telemetryContextProvider, offset: 0x40, size: 0x8, def value: None
 ::Liv::Lck::Core::ILckTelemetryContextProvider*  ____telemetryContextProvider;

/// @brief Field _muxerConfig, offset: 0x48, size: 0x30, def value: None
 ::Liv::Lck::Recorder::MuxerConfig  ____muxerConfig;

/// @brief Field _recordingStartTime, offset: 0x78, size: 0x4, def value: None
 float_t  ____recordingStartTime;

/// @brief Field _accumulatedRecordingDuration, offset: 0x7c, size: 0x4, def value: None
 float_t  ____accumulatedRecordingDuration;

/// @brief Field _lastActiveSegmentStartTime, offset: 0x80, size: 0x4, def value: None
 float_t  ____lastActiveSegmentStartTime;

/// @brief Field _lastRecordingFilePath, offset: 0x88, size: 0x8, def value: None
 ::StringW  ____lastRecordingFilePath;

/// @brief Field _stopReason, offset: 0x90, size: 0x4, def value: None
 ::GlobalNamespace::LckService_StopReason  ____stopReason;

/// @brief Field _currentRecordingDescriptor, offset: 0x94, size: 0x14, def value: None
 ::Liv::Lck::CameraTrackDescriptor  ____currentRecordingDescriptor;

/// @brief Field _recordingPacketHandler, offset: 0xa8, size: 0x18, def value: None
 ::Liv::Lck::Encoding::LckEncodedPacketHandler  ____recordingPacketHandler;

/// @brief Field _recordingTelemetryContext, offset: 0xc0, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  ____recordingTelemetryContext;

/// @brief Field _disposed, offset: 0xc8, size: 0x1, def value: None
 bool  ____disposed;

/// [CompilerGenerated]
/// @brief Field <CurrentCaptureState>k__BackingField, offset: 0xcc, size: 0x4, def value: None
 ::Liv::Lck::LckCaptureState  ____CurrentCaptureState_k__BackingField;

/// @brief Field _copyVideoSpinWait, offset: 0xd0, size: 0x8, def value: None
 ::UnityEngine::WaitForSeconds*  ____copyVideoSpinWait;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::Recorder::LckRecorder, ____nativeRecordingService) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Recorder::LckRecorder, ____storageWatcher) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Recorder::LckRecorder, ____encoder) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Recorder::LckRecorder, ____outputConfigurer) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Recorder::LckRecorder, ____eventBus) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Recorder::LckRecorder, ____telemetryClient) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Recorder::LckRecorder, ____telemetryContextProvider) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Recorder::LckRecorder, ____muxerConfig) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Recorder::LckRecorder, ____recordingStartTime) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Recorder::LckRecorder, ____accumulatedRecordingDuration) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Recorder::LckRecorder, ____lastActiveSegmentStartTime) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Recorder::LckRecorder, ____lastRecordingFilePath) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Recorder::LckRecorder, ____stopReason) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Recorder::LckRecorder, ____currentRecordingDescriptor) == 0x94, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Recorder::LckRecorder, ____recordingPacketHandler) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Recorder::LckRecorder, ____recordingTelemetryContext) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Recorder::LckRecorder, ____disposed) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Recorder::LckRecorder, ____CurrentCaptureState_k__BackingField) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Recorder::LckRecorder, ____copyVideoSpinWait) == 0xd0, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::Recorder::LckRecorder) == 0xd8, "Size mismatch!");

} // namespace end def Liv::Lck::Recorder
// [CompilerGenerated]
// Dependencies System.Object, Unity.Profiling.ProfilerMarker::AutoScope
namespace Liv::Lck::Recorder {
// Is value type: false
// CS Name: Liv.Lck.Recorder.LckRecorder/<CopyRecordingToGalleryWhenReady>d__39
class CORDL_TYPE LckRecorder__CopyRecordingToGalleryWhenReady_d__39 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=System_Collections_Generic_IEnumerator_System_Object__get_Current)) ::System::Object*  System_Collections_Generic_IEnumerator_System_Object__Current;

 __declspec(property(get=System_Collections_IEnumerator_get_Current)) ::System::Object*  System_Collections_IEnumerator_Current;

/// @brief Field <>1__state, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get___1__state, put=__cordl_internal_set___1__state)) int32_t  __1__state;

/// @brief Field <>2__current, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___2__current, put=__cordl_internal_set___2__current)) ::System::Object*  __2__current;

/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Liv::Lck::Recorder::LckRecorder*  __4__this;

/// @brief Field <>7__wrap1, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get___7__wrap1, put=__cordl_internal_set___7__wrap1)) ::GlobalNamespace::ProfilerMarker_AutoScope  __7__wrap1;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr operator  ::System::Collections::IEnumerator*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method MoveNext, addr 0x9d62844, size 0x2f4, virtual true, abstract: false, final true
inline bool MoveNext() ;

/// @brief [DebuggerHidden]
static inline ::Liv::Lck::Recorder::LckRecorder__CopyRecordingToGalleryWhenReady_d__39* New_ctor(int32_t  __1__state) ;

/// [DebuggerHidden]
/// @brief Method System.Collections.Generic.IEnumerator<System.Object>.get_Current, addr 0x9d62dec, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.Reset, addr 0x9d62df4, size 0x38, virtual true, abstract: false, final true
inline void System_Collections_IEnumerator_Reset() ;

/// [DebuggerHidden]
/// @brief Method System.Collections.IEnumerator.get_Current, addr 0x9d62e2c, size 0x8, virtual true, abstract: false, final true
inline ::System::Object* System_Collections_IEnumerator_get_Current() ;

/// [DebuggerHidden]
/// @brief Method System.IDisposable.Dispose, addr 0x9d62810, size 0x34, virtual true, abstract: false, final true
inline void System_IDisposable_Dispose() ;

constexpr int32_t const& __cordl_internal_get___1__state() const;

constexpr int32_t& __cordl_internal_get___1__state() ;

constexpr ::System::Object* const& __cordl_internal_get___2__current() const;

constexpr ::System::Object*& __cordl_internal_get___2__current() ;

constexpr ::Liv::Lck::Recorder::LckRecorder* const& __cordl_internal_get___4__this() const;

constexpr ::Liv::Lck::Recorder::LckRecorder*& __cordl_internal_get___4__this() ;

constexpr ::GlobalNamespace::ProfilerMarker_AutoScope const& __cordl_internal_get___7__wrap1() const;

constexpr ::GlobalNamespace::ProfilerMarker_AutoScope& __cordl_internal_get___7__wrap1() ;

constexpr void __cordl_internal_set___1__state(int32_t  value) ;

constexpr void __cordl_internal_set___2__current(::System::Object*  value) ;

constexpr void __cordl_internal_set___4__this(::Liv::Lck::Recorder::LckRecorder*  value) ;

constexpr void __cordl_internal_set___7__wrap1(::GlobalNamespace::ProfilerMarker_AutoScope  value) ;

/// @brief Method <>m__Finally1, addr 0x9d62dcc, size 0x20, virtual false, abstract: false, final false
inline void __m__Finally1() ;

/// [DebuggerHidden]
/// @brief Method .ctor, addr 0x9d627e8, size 0x28, virtual false, abstract: false, final false
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
constexpr LckRecorder__CopyRecordingToGalleryWhenReady_d__39() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckRecorder__CopyRecordingToGalleryWhenReady_d__39", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckRecorder__CopyRecordingToGalleryWhenReady_d__39(LckRecorder__CopyRecordingToGalleryWhenReady_d__39 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckRecorder__CopyRecordingToGalleryWhenReady_d__39", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckRecorder__CopyRecordingToGalleryWhenReady_d__39(LckRecorder__CopyRecordingToGalleryWhenReady_d__39 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24965};

/// @brief Field <>1__state, offset: 0x10, size: 0x4, def value: None
 int32_t  _____1__state;

/// @brief Field <>2__current, offset: 0x18, size: 0x8, def value: None
 ::System::Object*  _____2__current;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Liv::Lck::Recorder::LckRecorder*  _____4__this;

/// @brief Field <>7__wrap1, offset: 0x28, size: 0x8, def value: None
 ::GlobalNamespace::ProfilerMarker_AutoScope  _____7__wrap1;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::Recorder::LckRecorder__CopyRecordingToGalleryWhenReady_d__39, _____1__state) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Recorder::LckRecorder__CopyRecordingToGalleryWhenReady_d__39, _____2__current) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Recorder::LckRecorder__CopyRecordingToGalleryWhenReady_d__39, _____4__this) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Recorder::LckRecorder__CopyRecordingToGalleryWhenReady_d__39, _____7__wrap1) == 0x28, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::Recorder::LckRecorder__CopyRecordingToGalleryWhenReady_d__39) == 0x30, "Size mismatch!");

} // namespace end def Liv::Lck::Recorder
// [CompilerGenerated]
// Dependencies System.Object
namespace Liv::Lck::Recorder {
// Is value type: false
// CS Name: Liv.Lck.Recorder.LckRecorder/<>c__DisplayClass39_1
class CORDL_TYPE LckRecorder___c__DisplayClass39_1 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Liv::Lck::Recorder::LckRecorder*  __4__this;

/// @brief Field path, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_path, put=__cordl_internal_set_path)) ::StringW  path;

/// @brief Field success, offset 0x10, size 0x1 
 __declspec(property(get=__cordl_internal_get_success, put=__cordl_internal_set_success)) bool  success;

static inline ::Liv::Lck::Recorder::LckRecorder___c__DisplayClass39_1* New_ctor() ;

/// @brief Method <CopyRecordingToGalleryWhenReady>b__2, addr 0x9d62614, size 0x1d4, virtual false, abstract: false, final false
inline void _CopyRecordingToGalleryWhenReady_b__2() ;

constexpr ::Liv::Lck::Recorder::LckRecorder* const& __cordl_internal_get___4__this() const;

constexpr ::Liv::Lck::Recorder::LckRecorder*& __cordl_internal_get___4__this() ;

constexpr ::StringW const& __cordl_internal_get_path() const;

constexpr ::StringW& __cordl_internal_get_path() ;

constexpr bool const& __cordl_internal_get_success() const;

constexpr bool& __cordl_internal_get_success() ;

constexpr void __cordl_internal_set___4__this(::Liv::Lck::Recorder::LckRecorder*  value) ;

constexpr void __cordl_internal_set_path(::StringW  value) ;

constexpr void __cordl_internal_set_success(bool  value) ;

/// @brief Method .ctor, addr 0x9d6260c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckRecorder___c__DisplayClass39_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckRecorder___c__DisplayClass39_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckRecorder___c__DisplayClass39_1(LckRecorder___c__DisplayClass39_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckRecorder___c__DisplayClass39_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckRecorder___c__DisplayClass39_1(LckRecorder___c__DisplayClass39_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24964};

/// @brief Field success, offset: 0x10, size: 0x1, def value: None
 bool  ___success;

/// @brief Field path, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___path;

/// @brief Field <>4__this, offset: 0x20, size: 0x8, def value: None
 ::Liv::Lck::Recorder::LckRecorder*  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::Recorder::LckRecorder___c__DisplayClass39_1, ___success) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Recorder::LckRecorder___c__DisplayClass39_1, ___path) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Recorder::LckRecorder___c__DisplayClass39_1, _____4__this) == 0x20, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::Recorder::LckRecorder___c__DisplayClass39_1) == 0x28, "Size mismatch!");

} // namespace end def Liv::Lck::Recorder
// [CompilerGenerated]
// Dependencies System.Object
namespace Liv::Lck::Recorder {
// Is value type: false
// CS Name: Liv.Lck.Recorder.LckRecorder/<>c__DisplayClass39_0
class CORDL_TYPE LckRecorder___c__DisplayClass39_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Liv::Lck::Recorder::LckRecorder*  __4__this;

/// @brief Field task, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_task, put=__cordl_internal_set_task)) ::System::Threading::Tasks::Task*  task;

static inline ::Liv::Lck::Recorder::LckRecorder___c__DisplayClass39_0* New_ctor() ;

/// @brief Method <CopyRecordingToGalleryWhenReady>b__1, addr 0x9d625f4, size 0x18, virtual false, abstract: false, final false
inline bool _CopyRecordingToGalleryWhenReady_b__1() ;

constexpr ::Liv::Lck::Recorder::LckRecorder* const& __cordl_internal_get___4__this() const;

constexpr ::Liv::Lck::Recorder::LckRecorder*& __cordl_internal_get___4__this() ;

constexpr ::System::Threading::Tasks::Task* const& __cordl_internal_get_task() const;

constexpr ::System::Threading::Tasks::Task*& __cordl_internal_get_task() ;

constexpr void __cordl_internal_set___4__this(::Liv::Lck::Recorder::LckRecorder*  value) ;

constexpr void __cordl_internal_set_task(::System::Threading::Tasks::Task*  value) ;

/// @brief Method .ctor, addr 0x9d625ec, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckRecorder___c__DisplayClass39_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckRecorder___c__DisplayClass39_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckRecorder___c__DisplayClass39_0(LckRecorder___c__DisplayClass39_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckRecorder___c__DisplayClass39_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckRecorder___c__DisplayClass39_0(LckRecorder___c__DisplayClass39_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24963};

/// @brief Field task, offset: 0x10, size: 0x8, def value: None
 ::System::Threading::Tasks::Task*  ___task;

/// @brief Field <>4__this, offset: 0x18, size: 0x8, def value: None
 ::Liv::Lck::Recorder::LckRecorder*  _____4__this;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::Recorder::LckRecorder___c__DisplayClass39_0, ___task) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Recorder::LckRecorder___c__DisplayClass39_0, _____4__this) == 0x18, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::Recorder::LckRecorder___c__DisplayClass39_0) == 0x20, "Size mismatch!");

} // namespace end def Liv::Lck::Recorder
