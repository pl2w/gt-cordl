#pragma once
// IWYU pragma private; include "Liv/Lck/Encoding/LckEncoder.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Liv/Lck/Encoding/zzzz__EncoderSessionData_def.hpp"
#include "Liv/Lck/Encoding/zzzz__LckNativeEncodingApi_AudioTrack_def.hpp"
#include "Liv/NGFX/zzzz__LogLevel_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LckEncoder)
namespace GlobalNamespace {
class ILckVideoTextureProvider;
}
namespace GlobalNamespace {
struct LckEncoder_CaptureData;
}
namespace GlobalNamespace {
struct LckEncoder__ReleaseEncoderAsync_d__32;
}
namespace GlobalNamespace {
struct LckEncoder__StopEncoderInternal_d__36;
}
namespace GlobalNamespace {
struct LckNativeEncodingApi_AudioTrack;
}
namespace GlobalNamespace {
struct LckNativeEncodingApi_FrameTexture;
}
namespace GlobalNamespace {
struct LckNativeEncodingApi_ResourceData;
}
namespace GlobalNamespace {
struct LckNativeEncodingApi_TrackInfo;
}
namespace Liv::Lck::Collections {
class AudioBuffer;
}
namespace Liv::Lck::Encoding {
struct EncoderConsumer;
}
namespace Liv::Lck::Encoding {
struct EncoderSessionData;
}
namespace Liv::Lck::Encoding {
class ILckEncoder;
}
namespace Liv::Lck::Encoding {
struct LckEncodedPacketHandler;
}
namespace Liv::Lck::Encoding {
class LckEncoder___c;
}
namespace Liv::Lck::ErrorHandling {
struct CaptureErrorType;
}
namespace Liv::Lck::ErrorHandling {
class ILckCaptureErrorDispatcher;
}
namespace Liv::Lck::Telemetry {
class ILckTelemetryClient;
}
namespace Liv::Lck {
struct CameraTrackDescriptor;
}
namespace Liv::Lck {
class ILckEventBus;
}
namespace Liv::Lck {
class ILckOutputConfigurer;
}
namespace Liv::Lck {
class LckResult;
}
namespace Liv::NGFX {
template<typename T>
class Handle_1;
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
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
template<typename T1,typename T2,typename TResult>
class Func_3;
}
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
namespace System {
template<typename T1,typename T2>
struct ValueTuple_2;
}
// Forward declare root types
namespace Liv::Lck::Encoding {
class LckEncoder;
}
namespace Liv::Lck::Encoding {
class LckEncoder___c;
}
// Write type traits
MARK_REF_T(::Liv::Lck::Encoding::LckEncoder*);
MARK_REF_T(::Liv::Lck::Encoding::LckEncoder___c*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::Encoding::LckEncoder*, "Liv.Lck.Encoding", "LckEncoder");
DEFINE_IL2CPP_CLASS(::Liv::Lck::Encoding::LckEncoder___c*, "Liv.Lck.Encoding", "LckEncoder/<>c");
// Dependencies Liv.Lck.Encoding.EncoderSessionData, Liv.Lck.Encoding.LckNativeEncodingApi::AudioTrack, Liv.NGFX.LogLevel, System.IntPtr, System.Object, Unity.Profiling.ProfilerMarker
namespace Liv::Lck::Encoding {
// Is value type: false
// CS Name: Liv.Lck.Encoding.LckEncoder
class CORDL_TYPE LckEncoder : public ::System::Object {
public:
// Declarations
using CaptureData = ::GlobalNamespace::LckEncoder_CaptureData;

using _ReleaseEncoderAsync_d__32 = ::GlobalNamespace::LckEncoder__ReleaseEncoderAsync_d__32;

using _StopEncoderInternal_d__36 = ::GlobalNamespace::LckEncoder__StopEncoderInternal_d__36;

using __c = ::Liv::Lck::Encoding::LckEncoder___c;

/// @brief Field <CaptureErrorDispatcher>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__CaptureErrorDispatcher_k__BackingField, put=setStaticF__CaptureErrorDispatcher_k__BackingField)) ::Liv::Lck::ErrorHandling::ILckCaptureErrorDispatcher*  _CaptureErrorDispatcher_k__BackingField;

/// @brief Field _activeConsumers, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__activeConsumers, put=__cordl_internal_set__activeConsumers)) ::System::Collections::Generic::HashSet_1<::Liv::Lck::Encoding::EncoderConsumer>*  _activeConsumers;

/// @brief Field _allocateFrameSubmissionMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__allocateFrameSubmissionMarker, put=setStaticF__allocateFrameSubmissionMarker)) ::Unity::Profiling::ProfilerMarker  _allocateFrameSubmissionMarker;

/// @brief Field _audioTracks, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__audioTracks, put=__cordl_internal_set__audioTracks)) ::ArrayW<::GlobalNamespace::LckNativeEncodingApi_AudioTrack>  _audioTracks;

/// @brief Field _cameraRenderData, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__cameraRenderData, put=__cordl_internal_set__cameraRenderData)) ::System::Collections::Generic::List_1<::GlobalNamespace::LckEncoder_CaptureData>*  _cameraRenderData;

/// @brief Field _captureErrorDispatcher, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__captureErrorDispatcher, put=__cordl_internal_set__captureErrorDispatcher)) ::Liv::Lck::ErrorHandling::ILckCaptureErrorDispatcher*  _captureErrorDispatcher;

/// @brief Field _commandBufferMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__commandBufferMarker, put=setStaticF__commandBufferMarker)) ::Unity::Profiling::ProfilerMarker  _commandBufferMarker;

/// @brief Field _consumerHandlers, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__consumerHandlers, put=__cordl_internal_set__consumerHandlers)) ::System::Collections::Generic::Dictionary_2<::Liv::Lck::Encoding::EncoderConsumer,::System::Collections::Generic::List_1<::Liv::Lck::Encoding::LckEncodedPacketHandler>*>*  _consumerHandlers;

/// @brief Field _currentEncoderSessionData, offset 0xa8, size 0x18 
 __declspec(property(get=__cordl_internal_get__currentEncoderSessionData, put=__cordl_internal_set__currentEncoderSessionData)) ::Liv::Lck::Encoding::EncoderSessionData  _currentEncoderSessionData;

/// @brief Field _disposed, offset 0xa0, size 0x1 
 __declspec(property(get=__cordl_internal_get__disposed, put=__cordl_internal_set__disposed)) bool  _disposed;

/// @brief Field _encoderContext, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__encoderContext, put=__cordl_internal_set__encoderContext)) ::System::IntPtr  _encoderContext;

/// @brief Field _eventBus, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__eventBus, put=__cordl_internal_set__eventBus)) ::Liv::Lck::ILckEventBus*  _eventBus;

/// @brief Field _isActive, offset 0x90, size 0x1 
 __declspec(property(get=__cordl_internal_get__isActive, put=__cordl_internal_set__isActive)) bool  _isActive;

/// @brief Field _logLevel, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get__logLevel, put=__cordl_internal_set__logLevel)) ::Liv::NGFX::LogLevel  _logLevel;

/// @brief Field _outputConfigurer, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__outputConfigurer, put=__cordl_internal_set__outputConfigurer)) ::Liv::Lck::ILckOutputConfigurer*  _outputConfigurer;

/// @brief Field _readyVideoTracks, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__readyVideoTracks, put=__cordl_internal_set__readyVideoTracks)) ::ArrayW<bool>  _readyVideoTracks;

/// @brief Field _registeredPacketHandlers, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__registeredPacketHandlers, put=__cordl_internal_set__registeredPacketHandlers)) ::System::Collections::Generic::IList_1<::Liv::Lck::Encoding::LckEncodedPacketHandler>*  _registeredPacketHandlers;

/// @brief Field _releaseNativeRenderBufferMarker, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__releaseNativeRenderBufferMarker, put=setStaticF__releaseNativeRenderBufferMarker)) ::Unity::Profiling::ProfilerMarker  _releaseNativeRenderBufferMarker;

/// @brief Field _resourceContext, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__resourceContext, put=__cordl_internal_set__resourceContext)) ::System::IntPtr  _resourceContext;

/// @brief Field _resourceInitData, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__resourceInitData, put=__cordl_internal_set__resourceInitData)) ::Liv::NGFX::Handle_1<::GlobalNamespace::LckNativeEncodingApi_ResourceData>*  _resourceInitData;

/// @brief Field _telemetryClient, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__telemetryClient, put=__cordl_internal_set__telemetryClient)) ::Liv::Lck::Telemetry::ILckTelemetryClient*  _telemetryClient;

/// @brief Field _textureIds, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__textureIds, put=__cordl_internal_set__textureIds)) ::Liv::NGFX::Handle_1<::ArrayW<::GlobalNamespace::LckNativeEncodingApi_FrameTexture>>*  _textureIds;

/// @brief Field _texturesList, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__texturesList, put=__cordl_internal_set__texturesList)) ::System::Collections::Generic::List_1<::GlobalNamespace::LckNativeEncodingApi_FrameTexture>*  _texturesList;

/// @brief Field _videoTextureProvider, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__videoTextureProvider, put=__cordl_internal_set__videoTextureProvider)) ::GlobalNamespace::ILckVideoTextureProvider*  _videoTextureProvider;

/// @brief Convert operator to "::Liv::Lck::Encoding::ILckEncoder"
constexpr operator  ::Liv::Lck::Encoding::ILckEncoder*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method AcquireEncoder, addr 0x9d43444, size 0x29c, virtual true, abstract: false, final true
inline ::Liv::Lck::LckResult* AcquireEncoder(::Liv::Lck::Encoding::EncoderConsumer  consumer, ::Liv::Lck::CameraTrackDescriptor  descriptor, ::System::Collections::Generic::IEnumerable_1<::Liv::Lck::Encoding::LckEncodedPacketHandler>*  handlers) ;

/// @brief Method AddEncodedPacketHandler, addr 0x9d45760, size 0x310, virtual false, abstract: false, final false
inline void AddEncodedPacketHandler(::Liv::Lck::Encoding::LckEncodedPacketHandler  handler) ;

/// @brief Method AddEncodedPacketHandlers, addr 0x9d43ae4, size 0x2c8, virtual false, abstract: false, final false
inline void AddEncodedPacketHandlers(::System::Collections::Generic::IEnumerable_1<::Liv::Lck::Encoding::LckEncodedPacketHandler>*  encodedPacketHandlers) ;

/// @brief Method AllocateFrameSubmission, addr 0x9d455a8, size 0xe8, virtual false, abstract: false, final false
inline ::System::IntPtr AllocateFrameSubmission(float_t  frameTime, ::ArrayW<bool>  readyTracks, ::ArrayW<::GlobalNamespace::LckNativeEncodingApi_AudioTrack>  audioTracks) ;

/// @brief Method CreateEncoderInstance, addr 0x9d43ed8, size 0x1cc, virtual false, abstract: false, final false
inline bool CreateEncoderInstance() ;

/// @brief Method CreateTrackInfoInteropData, addr 0x9d44120, size 0xa8, virtual false, abstract: false, final false
static inline ::ArrayW<::GlobalNamespace::LckNativeEncodingApi_TrackInfo> CreateTrackInfoInteropData(::Liv::Lck::CameraTrackDescriptor  cameraTrackDescriptor, uint32_t  audioSampleRate, uint32_t  numberOfAudioChannels) ;

/// @brief Method Dispose, addr 0x9d46690, size 0x160, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method EncodeFrame, addr 0x9d44f5c, size 0x19c, virtual true, abstract: false, final true
inline bool EncodeFrame(float_t  videoTimeSeconds, ::Liv::Lck::Collections::AudioBuffer*  audioData, bool  encodeVideo) ;

/// @brief Method EncodeFrameData, addr 0x9d45690, size 0xd0, virtual false, abstract: false, final false
static inline void EncodeFrameData(::System::IntPtr  framePtr) ;

/// @brief Method ExecuteNativeInitResourcesFunction, addr 0x9d44520, size 0xfc, virtual false, abstract: false, final false
inline void ExecuteNativeInitResourcesFunction() ;

/// @brief Method FinalizeEncoderStop, addr 0x9d44a54, size 0x1c8, virtual false, abstract: false, final false
inline ::Liv::Lck::LckResult* FinalizeEncoderStop() ;

/// @brief Method GetAudioFrameSize, addr 0x9d462f4, size 0xc, virtual false, abstract: false, final false
inline int32_t GetAudioFrameSize() ;

/// @brief Method GetCurrentSessionData, addr 0x9d45594, size 0x14, virtual true, abstract: false, final true
inline ::Liv::Lck::Encoding::EncoderSessionData GetCurrentSessionData() ;

/// @brief Method HandleEncodeFrameError, addr 0x9d45458, size 0xa0, virtual false, abstract: false, final false
inline void HandleEncodeFrameError(::StringW  errorMessage) ;

/// @brief Method InitCameraRenderData, addr 0x9d463e8, size 0x244, virtual false, abstract: false, final false
inline ::GlobalNamespace::LckEncoder_CaptureData InitCameraRenderData(int32_t  trackIndex) ;

/// @brief Method InitCameraRenderData, addr 0x9d441c8, size 0x2b4, virtual false, abstract: false, final false
inline ::Liv::Lck::LckResult* InitCameraRenderData(::ArrayW<::GlobalNamespace::LckNativeEncodingApi_TrackInfo>  trackInfo) ;

/// @brief Method InitTextureHandles, addr 0x9d4461c, size 0x284, virtual false, abstract: false, final false
inline void InitTextureHandles() ;

/// @brief Method IsActive, addr 0x9d43340, size 0x8, virtual true, abstract: false, final true
inline bool IsActive() ;

/// @brief Method IsPaused, addr 0x9d43348, size 0xfc, virtual true, abstract: false, final true
inline bool IsPaused() ;

/// @brief [Preserve]
static inline ::Liv::Lck::Encoding::LckEncoder* New_ctor(::Liv::Lck::ILckOutputConfigurer*  outputConfigurer, ::GlobalNamespace::ILckVideoTextureProvider*  videoTextureProvider, ::Liv::Lck::ILckEventBus*  eventBus, ::Liv::Lck::Telemetry::ILckTelemetryClient*  telemetryClient, ::Liv::Lck::ErrorHandling::ILckCaptureErrorDispatcher*  captureErrorDispatcher) ;

/// [MonoPInvokeCallback(typeof(Liv.Lck.Encoding.LckNativeEncodingApi::CaptureErrorCallback))]
/// @brief Method OnNativeCaptureError, addr 0x9d42dbc, size 0x220, virtual false, abstract: false, final false
static inline void OnNativeCaptureError(::Liv::Lck::ErrorHandling::CaptureErrorType  errorType, ::StringW  errorMessage) ;

/// @brief Method ProvideDataToEncoder, addr 0x9d450f8, size 0x360, virtual false, abstract: false, final false
inline void ProvideDataToEncoder(float_t  videoTime, ::Liv::Lck::Collections::AudioBuffer*  audioData, bool  encodeVideo) ;

/// [AsyncStateMachine(typeof(Liv.Lck.Encoding.LckEncoder::<ReleaseEncoderAsync>d__32))]
/// @brief Method ReleaseEncoderAsync, addr 0x9d43dac, size 0x12c, virtual true, abstract: false, final true
inline ::System::Threading::Tasks::Task_1<::Liv::Lck::LckResult*>* ReleaseEncoderAsync(::Liv::Lck::Encoding::EncoderConsumer  consumer, ::System::Collections::Generic::IEnumerable_1<::Liv::Lck::Encoding::LckEncodedPacketHandler>*  handlers) ;

/// @brief Method ReleaseNativeRenderBuffers, addr 0x9d4607c, size 0x278, virtual false, abstract: false, final false
inline void ReleaseNativeRenderBuffers() ;

/// @brief Method ReleaseResources, addr 0x9d44cd8, size 0x17c, virtual false, abstract: false, final false
inline void ReleaseResources() ;

/// @brief Method RemoveEncodedPacketHandler, addr 0x9d45b00, size 0x1bc, virtual false, abstract: false, final false
inline void RemoveEncodedPacketHandler(::Liv::Lck::Encoding::LckEncodedPacketHandler  handler) ;

/// @brief Method SetLogLevel, addr 0x9d454f8, size 0x18, virtual true, abstract: false, final true
inline void SetLogLevel(::Liv::NGFX::LogLevel  logLevel) ;

/// @brief Method StartEncoderInternal, addr 0x9d436e0, size 0x404, virtual false, abstract: false, final false
inline ::Liv::Lck::LckResult* StartEncoderInternal(::Liv::Lck::CameraTrackDescriptor  cameraTrackDescriptor, ::System::Collections::Generic::IEnumerable_1<::Liv::Lck::Encoding::LckEncodedPacketHandler>*  initialHandlers) ;

/// [AsyncStateMachine(typeof(Liv.Lck.Encoding.LckEncoder::<StopEncoderInternal>d__36))]
/// @brief Method StopEncoderInternal, addr 0x9d44e54, size 0x108, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::Liv::Lck::LckResult*>* StopEncoderInternal() ;

/// @brief Method StopNativeEncoder, addr 0x9d448a0, size 0x138, virtual false, abstract: false, final false
inline ::Liv::Lck::LckResult* StopNativeEncoder() ;

/// @brief Method UnregisterEncodedPacketHandlers, addr 0x9d44c1c, size 0xbc, virtual false, abstract: false, final false
inline void UnregisterEncodedPacketHandlers() ;

constexpr ::System::Collections::Generic::HashSet_1<::Liv::Lck::Encoding::EncoderConsumer>* const& __cordl_internal_get__activeConsumers() const;

constexpr ::System::Collections::Generic::HashSet_1<::Liv::Lck::Encoding::EncoderConsumer>*& __cordl_internal_get__activeConsumers() ;

constexpr ::ArrayW<::GlobalNamespace::LckNativeEncodingApi_AudioTrack> const& __cordl_internal_get__audioTracks() const;

constexpr ::ArrayW<::GlobalNamespace::LckNativeEncodingApi_AudioTrack>& __cordl_internal_get__audioTracks() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::LckEncoder_CaptureData>* const& __cordl_internal_get__cameraRenderData() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::LckEncoder_CaptureData>*& __cordl_internal_get__cameraRenderData() ;

constexpr ::Liv::Lck::ErrorHandling::ILckCaptureErrorDispatcher* const& __cordl_internal_get__captureErrorDispatcher() const;

constexpr ::Liv::Lck::ErrorHandling::ILckCaptureErrorDispatcher*& __cordl_internal_get__captureErrorDispatcher() ;

constexpr ::System::Collections::Generic::Dictionary_2<::Liv::Lck::Encoding::EncoderConsumer,::System::Collections::Generic::List_1<::Liv::Lck::Encoding::LckEncodedPacketHandler>*>* const& __cordl_internal_get__consumerHandlers() const;

constexpr ::System::Collections::Generic::Dictionary_2<::Liv::Lck::Encoding::EncoderConsumer,::System::Collections::Generic::List_1<::Liv::Lck::Encoding::LckEncodedPacketHandler>*>*& __cordl_internal_get__consumerHandlers() ;

constexpr ::Liv::Lck::Encoding::EncoderSessionData const& __cordl_internal_get__currentEncoderSessionData() const;

constexpr ::Liv::Lck::Encoding::EncoderSessionData& __cordl_internal_get__currentEncoderSessionData() ;

constexpr bool const& __cordl_internal_get__disposed() const;

constexpr bool& __cordl_internal_get__disposed() ;

constexpr ::System::IntPtr const& __cordl_internal_get__encoderContext() const;

constexpr ::System::IntPtr& __cordl_internal_get__encoderContext() ;

constexpr ::Liv::Lck::ILckEventBus* const& __cordl_internal_get__eventBus() const;

constexpr ::Liv::Lck::ILckEventBus*& __cordl_internal_get__eventBus() ;

constexpr bool const& __cordl_internal_get__isActive() const;

constexpr bool& __cordl_internal_get__isActive() ;

constexpr ::Liv::NGFX::LogLevel const& __cordl_internal_get__logLevel() const;

constexpr ::Liv::NGFX::LogLevel& __cordl_internal_get__logLevel() ;

constexpr ::Liv::Lck::ILckOutputConfigurer* const& __cordl_internal_get__outputConfigurer() const;

constexpr ::Liv::Lck::ILckOutputConfigurer*& __cordl_internal_get__outputConfigurer() ;

constexpr ::ArrayW<bool> const& __cordl_internal_get__readyVideoTracks() const;

constexpr ::ArrayW<bool>& __cordl_internal_get__readyVideoTracks() ;

constexpr ::System::Collections::Generic::IList_1<::Liv::Lck::Encoding::LckEncodedPacketHandler>* const& __cordl_internal_get__registeredPacketHandlers() const;

constexpr ::System::Collections::Generic::IList_1<::Liv::Lck::Encoding::LckEncodedPacketHandler>*& __cordl_internal_get__registeredPacketHandlers() ;

constexpr ::System::IntPtr const& __cordl_internal_get__resourceContext() const;

constexpr ::System::IntPtr& __cordl_internal_get__resourceContext() ;

constexpr ::Liv::NGFX::Handle_1<::GlobalNamespace::LckNativeEncodingApi_ResourceData>* const& __cordl_internal_get__resourceInitData() const;

constexpr ::Liv::NGFX::Handle_1<::GlobalNamespace::LckNativeEncodingApi_ResourceData>*& __cordl_internal_get__resourceInitData() ;

constexpr ::Liv::Lck::Telemetry::ILckTelemetryClient* const& __cordl_internal_get__telemetryClient() const;

constexpr ::Liv::Lck::Telemetry::ILckTelemetryClient*& __cordl_internal_get__telemetryClient() ;

constexpr ::Liv::NGFX::Handle_1<::ArrayW<::GlobalNamespace::LckNativeEncodingApi_FrameTexture>>* const& __cordl_internal_get__textureIds() const;

constexpr ::Liv::NGFX::Handle_1<::ArrayW<::GlobalNamespace::LckNativeEncodingApi_FrameTexture>>*& __cordl_internal_get__textureIds() ;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::LckNativeEncodingApi_FrameTexture>* const& __cordl_internal_get__texturesList() const;

constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::LckNativeEncodingApi_FrameTexture>*& __cordl_internal_get__texturesList() ;

constexpr ::GlobalNamespace::ILckVideoTextureProvider* const& __cordl_internal_get__videoTextureProvider() const;

constexpr ::GlobalNamespace::ILckVideoTextureProvider*& __cordl_internal_get__videoTextureProvider() ;

constexpr void __cordl_internal_set__activeConsumers(::System::Collections::Generic::HashSet_1<::Liv::Lck::Encoding::EncoderConsumer>*  value) ;

constexpr void __cordl_internal_set__audioTracks(::ArrayW<::GlobalNamespace::LckNativeEncodingApi_AudioTrack>  value) ;

constexpr void __cordl_internal_set__cameraRenderData(::System::Collections::Generic::List_1<::GlobalNamespace::LckEncoder_CaptureData>*  value) ;

constexpr void __cordl_internal_set__captureErrorDispatcher(::Liv::Lck::ErrorHandling::ILckCaptureErrorDispatcher*  value) ;

constexpr void __cordl_internal_set__consumerHandlers(::System::Collections::Generic::Dictionary_2<::Liv::Lck::Encoding::EncoderConsumer,::System::Collections::Generic::List_1<::Liv::Lck::Encoding::LckEncodedPacketHandler>*>*  value) ;

constexpr void __cordl_internal_set__currentEncoderSessionData(::Liv::Lck::Encoding::EncoderSessionData  value) ;

constexpr void __cordl_internal_set__disposed(bool  value) ;

constexpr void __cordl_internal_set__encoderContext(::System::IntPtr  value) ;

constexpr void __cordl_internal_set__eventBus(::Liv::Lck::ILckEventBus*  value) ;

constexpr void __cordl_internal_set__isActive(bool  value) ;

constexpr void __cordl_internal_set__logLevel(::Liv::NGFX::LogLevel  value) ;

constexpr void __cordl_internal_set__outputConfigurer(::Liv::Lck::ILckOutputConfigurer*  value) ;

constexpr void __cordl_internal_set__readyVideoTracks(::ArrayW<bool>  value) ;

constexpr void __cordl_internal_set__registeredPacketHandlers(::System::Collections::Generic::IList_1<::Liv::Lck::Encoding::LckEncodedPacketHandler>*  value) ;

constexpr void __cordl_internal_set__resourceContext(::System::IntPtr  value) ;

constexpr void __cordl_internal_set__resourceInitData(::Liv::NGFX::Handle_1<::GlobalNamespace::LckNativeEncodingApi_ResourceData>*  value) ;

constexpr void __cordl_internal_set__telemetryClient(::Liv::Lck::Telemetry::ILckTelemetryClient*  value) ;

constexpr void __cordl_internal_set__textureIds(::Liv::NGFX::Handle_1<::ArrayW<::GlobalNamespace::LckNativeEncodingApi_FrameTexture>>*  value) ;

constexpr void __cordl_internal_set__texturesList(::System::Collections::Generic::List_1<::GlobalNamespace::LckNativeEncodingApi_FrameTexture>*  value) ;

constexpr void __cordl_internal_set__videoTextureProvider(::GlobalNamespace::ILckVideoTextureProvider*  value) ;

/// [Preserve]
/// @brief Method .ctor, addr 0x9d43094, size 0x2ac, virtual false, abstract: false, final false
inline void _ctor(::Liv::Lck::ILckOutputConfigurer*  outputConfigurer, ::GlobalNamespace::ILckVideoTextureProvider*  videoTextureProvider, ::Liv::Lck::ILckEventBus*  eventBus, ::Liv::Lck::Telemetry::ILckTelemetryClient*  telemetryClient, ::Liv::Lck::ErrorHandling::ILckCaptureErrorDispatcher*  captureErrorDispatcher) ;

static inline ::Liv::Lck::ErrorHandling::ILckCaptureErrorDispatcher* getStaticF__CaptureErrorDispatcher_k__BackingField() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF__allocateFrameSubmissionMarker() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF__commandBufferMarker() ;

static inline ::Unity::Profiling::ProfilerMarker getStaticF__releaseNativeRenderBufferMarker() ;

/// [CompilerGenerated]
/// @brief Method get_CaptureErrorDispatcher, addr 0x9d42fdc, size 0x58, virtual false, abstract: false, final false
static inline ::Liv::Lck::ErrorHandling::ILckCaptureErrorDispatcher* get_CaptureErrorDispatcher() ;

/// @brief Convert to "::Liv::Lck::Encoding::ILckEncoder"
constexpr ::Liv::Lck::Encoding::ILckEncoder* i___Liv__Lck__Encoding__ILckEncoder() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

static inline void setStaticF__CaptureErrorDispatcher_k__BackingField(::Liv::Lck::ErrorHandling::ILckCaptureErrorDispatcher*  value) ;

static inline void setStaticF__allocateFrameSubmissionMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF__commandBufferMarker(::Unity::Profiling::ProfilerMarker  value) ;

static inline void setStaticF__releaseNativeRenderBufferMarker(::Unity::Profiling::ProfilerMarker  value) ;

/// [CompilerGenerated]
/// @brief Method set_CaptureErrorDispatcher, addr 0x9d43034, size 0x60, virtual false, abstract: false, final false
static inline void set_CaptureErrorDispatcher(::Liv::Lck::ErrorHandling::ILckCaptureErrorDispatcher*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckEncoder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckEncoder", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckEncoder(LckEncoder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckEncoder", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckEncoder(LckEncoder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24886};

/// @brief Field _outputConfigurer, offset: 0x10, size: 0x8, def value: None
 ::Liv::Lck::ILckOutputConfigurer*  ____outputConfigurer;

/// @brief Field _videoTextureProvider, offset: 0x18, size: 0x8, def value: None
 ::GlobalNamespace::ILckVideoTextureProvider*  ____videoTextureProvider;

/// @brief Field _eventBus, offset: 0x20, size: 0x8, def value: None
 ::Liv::Lck::ILckEventBus*  ____eventBus;

/// @brief Field _telemetryClient, offset: 0x28, size: 0x8, def value: None
 ::Liv::Lck::Telemetry::ILckTelemetryClient*  ____telemetryClient;

/// @brief Field _captureErrorDispatcher, offset: 0x30, size: 0x8, def value: None
 ::Liv::Lck::ErrorHandling::ILckCaptureErrorDispatcher*  ____captureErrorDispatcher;

/// @brief Field _registeredPacketHandlers, offset: 0x38, size: 0x8, def value: None
 ::System::Collections::Generic::IList_1<::Liv::Lck::Encoding::LckEncodedPacketHandler>*  ____registeredPacketHandlers;

/// @brief Field _activeConsumers, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<::Liv::Lck::Encoding::EncoderConsumer>*  ____activeConsumers;

/// @brief Field _consumerHandlers, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::Liv::Lck::Encoding::EncoderConsumer,::System::Collections::Generic::List_1<::Liv::Lck::Encoding::LckEncodedPacketHandler>*>*  ____consumerHandlers;

/// @brief Field _audioTracks, offset: 0x50, size: 0x8, def value: None
 ::ArrayW<::GlobalNamespace::LckNativeEncodingApi_AudioTrack>  ____audioTracks;

/// @brief Field _readyVideoTracks, offset: 0x58, size: 0x8, def value: None
 ::ArrayW<bool>  ____readyVideoTracks;

/// @brief Field _logLevel, offset: 0x60, size: 0x4, def value: None
 ::Liv::NGFX::LogLevel  ____logLevel;

/// @brief Field _encoderContext, offset: 0x68, size: 0x8, def value: None
 ::System::IntPtr  ____encoderContext;

/// @brief Field _textureIds, offset: 0x70, size: 0x8, def value: None
 ::Liv::NGFX::Handle_1<::ArrayW<::GlobalNamespace::LckNativeEncodingApi_FrameTexture>>*  ____textureIds;

/// @brief Field _texturesList, offset: 0x78, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::LckNativeEncodingApi_FrameTexture>*  ____texturesList;

/// @brief Field _resourceInitData, offset: 0x80, size: 0x8, def value: None
 ::Liv::NGFX::Handle_1<::GlobalNamespace::LckNativeEncodingApi_ResourceData>*  ____resourceInitData;

/// @brief Field _cameraRenderData, offset: 0x88, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::GlobalNamespace::LckEncoder_CaptureData>*  ____cameraRenderData;

/// @brief Field _isActive, offset: 0x90, size: 0x1, def value: None
 bool  ____isActive;

/// @brief Field _resourceContext, offset: 0x98, size: 0x8, def value: None
 ::System::IntPtr  ____resourceContext;

/// @brief Field _disposed, offset: 0xa0, size: 0x1, def value: None
 bool  ____disposed;

/// @brief Field _currentEncoderSessionData, offset: 0xa8, size: 0x18, def value: None
 ::Liv::Lck::Encoding::EncoderSessionData  ____currentEncoderSessionData;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::Encoding::LckEncoder, ____outputConfigurer) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Encoding::LckEncoder, ____videoTextureProvider) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Encoding::LckEncoder, ____eventBus) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Encoding::LckEncoder, ____telemetryClient) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Encoding::LckEncoder, ____captureErrorDispatcher) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Encoding::LckEncoder, ____registeredPacketHandlers) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Encoding::LckEncoder, ____activeConsumers) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Encoding::LckEncoder, ____consumerHandlers) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Encoding::LckEncoder, ____audioTracks) == 0x50, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Encoding::LckEncoder, ____readyVideoTracks) == 0x58, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Encoding::LckEncoder, ____logLevel) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Encoding::LckEncoder, ____encoderContext) == 0x68, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Encoding::LckEncoder, ____textureIds) == 0x70, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Encoding::LckEncoder, ____texturesList) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Encoding::LckEncoder, ____resourceInitData) == 0x80, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Encoding::LckEncoder, ____cameraRenderData) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Encoding::LckEncoder, ____isActive) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Encoding::LckEncoder, ____resourceContext) == 0x98, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Encoding::LckEncoder, ____disposed) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Encoding::LckEncoder, ____currentEncoderSessionData) == 0xa8, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::Encoding::LckEncoder) == 0xc0, "Size mismatch!");

} // namespace end def Liv::Lck::Encoding
// [CompilerGenerated]
// Dependencies System.Object
namespace Liv::Lck::Encoding {
// Is value type: false
// CS Name: Liv.Lck.Encoding.LckEncoder/<>c
class CORDL_TYPE LckEncoder___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::Liv::Lck::Encoding::LckEncoder___c*  __9;

/// @brief Field <>9__30_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__30_0, put=setStaticF___9__30_0)) ::System::Func_2<::Liv::Lck::Encoding::LckEncodedPacketHandler,bool>*  __9__30_0;

/// @brief Field <>9__50_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__50_0, put=setStaticF___9__50_0)) ::System::Func_3<::GlobalNamespace::LckNativeEncodingApi_TrackInfo,int32_t,::System::ValueTuple_2<::GlobalNamespace::LckNativeEncodingApi_TrackInfo,int32_t>>*  __9__50_0;

static inline ::Liv::Lck::Encoding::LckEncoder___c* New_ctor() ;

/// @brief Method <InitCameraRenderData>b__50_0, addr 0x9d46a10, size 0x84, virtual false, abstract: false, final false
inline ::System::ValueTuple_2<::GlobalNamespace::LckNativeEncodingApi_TrackInfo,int32_t> _InitCameraRenderData_b__50_0(::GlobalNamespace::LckNativeEncodingApi_TrackInfo  track, int32_t  trackIndex) ;

/// @brief Method <IsPaused>b__30_0, addr 0x9d46954, size 0xbc, virtual false, abstract: false, final false
inline bool _IsPaused_b__30_0(::Liv::Lck::Encoding::LckEncodedPacketHandler  encodedPacketHandler) ;

/// @brief Method .ctor, addr 0x9d4694c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::Liv::Lck::Encoding::LckEncoder___c* getStaticF___9() ;

static inline ::System::Func_2<::Liv::Lck::Encoding::LckEncodedPacketHandler,bool>* getStaticF___9__30_0() ;

static inline ::System::Func_3<::GlobalNamespace::LckNativeEncodingApi_TrackInfo,int32_t,::System::ValueTuple_2<::GlobalNamespace::LckNativeEncodingApi_TrackInfo,int32_t>>* getStaticF___9__50_0() ;

static inline void setStaticF___9(::Liv::Lck::Encoding::LckEncoder___c*  value) ;

static inline void setStaticF___9__30_0(::System::Func_2<::Liv::Lck::Encoding::LckEncodedPacketHandler,bool>*  value) ;

static inline void setStaticF___9__50_0(::System::Func_3<::GlobalNamespace::LckNativeEncodingApi_TrackInfo,int32_t,::System::ValueTuple_2<::GlobalNamespace::LckNativeEncodingApi_TrackInfo,int32_t>>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckEncoder___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckEncoder___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckEncoder___c(LckEncoder___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckEncoder___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckEncoder___c(LckEncoder___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{24883};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Liv::Lck::Encoding::LckEncoder___c) == 0x10, "Size mismatch!");

} // namespace end def Liv::Lck::Encoding
