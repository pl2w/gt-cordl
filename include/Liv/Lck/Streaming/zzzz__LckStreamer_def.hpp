#pragma once
// IWYU pragma private; include "Liv/Lck/Streaming/LckStreamer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Liv/Lck/Encoding/zzzz__EncoderConsumer_def.hpp"
#include "Liv/Lck/Encoding/zzzz__LckEncodedPacketHandler_def.hpp"
#include "Liv/Lck/zzzz__CameraTrackDescriptor_def.hpp"
#include "Liv/Lck/zzzz__LckCaptureState_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(LckStreamer)
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
struct LckService_StopReason;
}
namespace GlobalNamespace {
struct LckStreamer__StartNativeStreamerAsync_d__26;
}
namespace GlobalNamespace {
struct LckStreamer__StartStreamingAsync_d__27;
}
namespace GlobalNamespace {
struct LckStreamer__StopNativeStreamerAsync_d__28;
}
namespace GlobalNamespace {
struct LckStreamer__StopStreamingAsync_d__29;
}
namespace Liv::Lck::Core {
class ILckTelemetryContextProvider;
}
namespace Liv::Lck::Encoding {
class ILckEncoder;
}
namespace Liv::Lck::Streaming {
class ILckNativeStreamingService;
}
namespace Liv::Lck::Streaming {
class ILckStreamer;
}
namespace Liv::Lck::Streaming {
class LckStreamer___c__DisplayClass26_0;
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
// Forward declare root types
namespace Liv::Lck::Streaming {
class LckStreamer;
}
namespace Liv::Lck::Streaming {
class LckStreamer___c__DisplayClass26_0;
}
// Write type traits
MARK_REF_T(::Liv::Lck::Streaming::LckStreamer*);
MARK_REF_T(::Liv::Lck::Streaming::LckStreamer___c__DisplayClass26_0*);
DEFINE_IL2CPP_CLASS(::Liv::Lck::Streaming::LckStreamer*, "Liv.Lck.Streaming", "LckStreamer");
DEFINE_IL2CPP_CLASS(::Liv::Lck::Streaming::LckStreamer___c__DisplayClass26_0*, "Liv.Lck.Streaming", "LckStreamer/<>c__DisplayClass26_0");
// Dependencies Liv.Lck.CameraTrackDescriptor, Liv.Lck.Encoding.EncoderConsumer, Liv.Lck.Encoding.LckEncodedPacketHandler, Liv.Lck.LckCaptureState, System.Object
namespace Liv::Lck::Streaming {
// Is value type: false
// CS Name: Liv.Lck.Streaming.LckStreamer
class CORDL_TYPE LckStreamer : public ::System::Object {
public:
// Declarations
using _StartNativeStreamerAsync_d__26 = ::GlobalNamespace::LckStreamer__StartNativeStreamerAsync_d__26;

using _StartStreamingAsync_d__27 = ::GlobalNamespace::LckStreamer__StartStreamingAsync_d__27;

using _StopNativeStreamerAsync_d__28 = ::GlobalNamespace::LckStreamer__StopNativeStreamerAsync_d__28;

using _StopStreamingAsync_d__29 = ::GlobalNamespace::LckStreamer__StopStreamingAsync_d__29;

using __c__DisplayClass26_0 = ::Liv::Lck::Streaming::LckStreamer___c__DisplayClass26_0;

 __declspec(property(get=get_CurrentCaptureState, put=set_CurrentCaptureState)) ::Liv::Lck::LckCaptureState  CurrentCaptureState;

 __declspec(property(get=get_CurrentStreamDurationSeconds)) float_t  CurrentStreamDurationSeconds;

 __declspec(property(get=get_IsStreaming)) bool  IsStreaming;

/// @brief Field <CurrentCaptureState>k__BackingField, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get__CurrentCaptureState_k__BackingField, put=__cordl_internal_set__CurrentCaptureState_k__BackingField)) ::Liv::Lck::LckCaptureState  _CurrentCaptureState_k__BackingField;

/// @brief Field _currentStreamDescriptor, offset 0x48, size 0x14 
 __declspec(property(get=__cordl_internal_get__currentStreamDescriptor, put=__cordl_internal_set__currentStreamDescriptor)) ::Liv::Lck::CameraTrackDescriptor  _currentStreamDescriptor;

/// @brief Field _disposed, offset 0x44, size 0x1 
 __declspec(property(get=__cordl_internal_get__disposed, put=__cordl_internal_set__disposed)) bool  _disposed;

/// @brief Field _encoder, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__encoder, put=__cordl_internal_set__encoder)) ::Liv::Lck::Encoding::ILckEncoder*  _encoder;

/// @brief Field _eventBus, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__eventBus, put=__cordl_internal_set__eventBus)) ::Liv::Lck::ILckEventBus*  _eventBus;

/// @brief Field _nativeStreamingService, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__nativeStreamingService, put=__cordl_internal_set__nativeStreamingService)) ::Liv::Lck::Streaming::ILckNativeStreamingService*  _nativeStreamingService;

/// @brief Field _outputConfigurer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__outputConfigurer, put=__cordl_internal_set__outputConfigurer)) ::Liv::Lck::ILckOutputConfigurer*  _outputConfigurer;

/// @brief Field _streamStartTime, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get__streamStartTime, put=__cordl_internal_set__streamStartTime)) float_t  _streamStartTime;

/// @brief Field _streamingPacketHandler, offset 0x60, size 0x18 
 __declspec(property(get=__cordl_internal_get__streamingPacketHandler, put=__cordl_internal_set__streamingPacketHandler)) ::Liv::Lck::Encoding::LckEncodedPacketHandler  _streamingPacketHandler;

/// @brief Field _streamingTelemetryContext, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__streamingTelemetryContext, put=__cordl_internal_set__streamingTelemetryContext)) ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  _streamingTelemetryContext;

/// @brief Field _telemetryClient, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__telemetryClient, put=__cordl_internal_set__telemetryClient)) ::Liv::Lck::Telemetry::ILckTelemetryClient*  _telemetryClient;

/// @brief Field _telemetryContextProvider, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__telemetryContextProvider, put=__cordl_internal_set__telemetryContextProvider)) ::Liv::Lck::Core::ILckTelemetryContextProvider*  _telemetryContextProvider;

/// @brief Convert operator to "::GlobalNamespace::ILckCaptureStateProvider"
constexpr operator  ::GlobalNamespace::ILckCaptureStateProvider*() noexcept;

/// @brief Convert operator to "::Liv::Lck::Streaming::ILckStreamer"
constexpr operator  ::Liv::Lck::Streaming::ILckStreamer*() noexcept;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method Dispose, addr 0x9cfb054, size 0x498, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method GetStreamDuration, addr 0x9cfa4ac, size 0xd8, virtual true, abstract: false, final true
inline ::Liv::Lck::LckResult_1<::System::TimeSpan>* GetStreamDuration() ;

/// @brief Method IsPaused, addr 0x9cf9754, size 0x50, virtual true, abstract: false, final true
inline ::Liv::Lck::LckResult_1<bool>* IsPaused() ;

static inline ::Liv::Lck::Streaming::LckStreamer* New_ctor(::Liv::Lck::Streaming::ILckNativeStreamingService*  nativeStreamingService, ::Liv::Lck::Encoding::ILckEncoder*  encoder, ::Liv::Lck::ILckOutputConfigurer*  outputConfigurer, ::Liv::Lck::ILckEventBus*  eventBus, ::Liv::Lck::Telemetry::ILckTelemetryClient*  telemetryClient, ::Liv::Lck::Core::ILckTelemetryContextProvider*  telemetryContextProvider) ;

/// @brief Method OnCaptureError, addr 0x9cfaf70, size 0xe4, virtual false, abstract: false, final false
inline void OnCaptureError(::GlobalNamespace::LckEvents_CaptureErrorEvent  captureErrorEvent) ;

/// @brief Method OnEncoderStopped, addr 0x9cfa858, size 0x110, virtual false, abstract: false, final false
inline void OnEncoderStopped(::GlobalNamespace::LckEvents_EncoderStoppedEvent  encoderStoppedEvent) ;

/// @brief Method SetLogLevel, addr 0x9cfa584, size 0xac, virtual true, abstract: false, final true
inline void SetLogLevel(::Liv::NGFX::LogLevel  logLevel) ;

/// @brief Method SetUpNativeStreamer, addr 0x9cf9d30, size 0x340, virtual false, abstract: false, final false
inline ::Liv::Lck::LckResult* SetUpNativeStreamer() ;

/// [AsyncStateMachine(typeof(Liv.Lck.Streaming.LckStreamer::<StartNativeStreamerAsync>d__26))]
/// @brief Method StartNativeStreamerAsync, addr 0x9cfa630, size 0x120, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::Liv::Lck::LckResult*>* StartNativeStreamerAsync(int32_t  width, int32_t  height) ;

/// @brief Method StartStreaming, addr 0x9cf9bb8, size 0x178, virtual true, abstract: false, final true
inline ::Liv::Lck::LckResult* StartStreaming() ;

/// [AsyncStateMachine(typeof(Liv.Lck.Streaming.LckStreamer::<StartStreamingAsync>d__27))]
/// @brief Method StartStreamingAsync, addr 0x9cfa070, size 0xdc, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* StartStreamingAsync() ;

/// [AsyncStateMachine(typeof(Liv.Lck.Streaming.LckStreamer::<StopNativeStreamerAsync>d__28))]
/// @brief Method StopNativeStreamerAsync, addr 0x9cfa750, size 0x108, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task_1<::Liv::Lck::LckResult*>* StopNativeStreamerAsync() ;

/// @brief Method StopStreaming, addr 0x9cfa14c, size 0x288, virtual true, abstract: false, final true
inline ::Liv::Lck::LckResult* StopStreaming(::GlobalNamespace::LckService_StopReason  stopReason) ;

/// [AsyncStateMachine(typeof(Liv.Lck.Streaming.LckStreamer::<StopStreamingAsync>d__29))]
/// @brief Method StopStreamingAsync, addr 0x9cfa3d4, size 0xd8, virtual false, abstract: false, final false
inline ::System::Threading::Tasks::Task* StopStreamingAsync(::GlobalNamespace::LckService_StopReason  stopReason) ;

/// @brief Method TriggerStreamingStartedEvent, addr 0x9cfaa48, size 0xe0, virtual false, abstract: false, final false
inline void TriggerStreamingStartedEvent(::Liv::Lck::LckResult*  result) ;

/// @brief Method TriggerStreamingStoppedEvent, addr 0x9cfa968, size 0xe0, virtual false, abstract: false, final false
inline void TriggerStreamingStoppedEvent(::Liv::Lck::LckResult*  result) ;

/// @brief Method UpdateStreamingTelemetryContext, addr 0x9cfab28, size 0x448, virtual false, abstract: false, final false
inline void UpdateStreamingTelemetryContext() ;

/// [CompilerGenerated]
/// @brief Method <StopNativeStreamerAsync>b__28_0, addr 0x9cfb4ec, size 0x1ac, virtual false, abstract: false, final false
inline ::Liv::Lck::LckResult* _StopNativeStreamerAsync_b__28_0() ;

constexpr ::Liv::Lck::LckCaptureState const& __cordl_internal_get__CurrentCaptureState_k__BackingField() const;

constexpr ::Liv::Lck::LckCaptureState& __cordl_internal_get__CurrentCaptureState_k__BackingField() ;

constexpr ::Liv::Lck::CameraTrackDescriptor const& __cordl_internal_get__currentStreamDescriptor() const;

constexpr ::Liv::Lck::CameraTrackDescriptor& __cordl_internal_get__currentStreamDescriptor() ;

constexpr bool const& __cordl_internal_get__disposed() const;

constexpr bool& __cordl_internal_get__disposed() ;

constexpr ::Liv::Lck::Encoding::ILckEncoder* const& __cordl_internal_get__encoder() const;

constexpr ::Liv::Lck::Encoding::ILckEncoder*& __cordl_internal_get__encoder() ;

constexpr ::Liv::Lck::ILckEventBus* const& __cordl_internal_get__eventBus() const;

constexpr ::Liv::Lck::ILckEventBus*& __cordl_internal_get__eventBus() ;

constexpr ::Liv::Lck::Streaming::ILckNativeStreamingService* const& __cordl_internal_get__nativeStreamingService() const;

constexpr ::Liv::Lck::Streaming::ILckNativeStreamingService*& __cordl_internal_get__nativeStreamingService() ;

constexpr ::Liv::Lck::ILckOutputConfigurer* const& __cordl_internal_get__outputConfigurer() const;

constexpr ::Liv::Lck::ILckOutputConfigurer*& __cordl_internal_get__outputConfigurer() ;

constexpr float_t const& __cordl_internal_get__streamStartTime() const;

constexpr float_t& __cordl_internal_get__streamStartTime() ;

constexpr ::Liv::Lck::Encoding::LckEncodedPacketHandler const& __cordl_internal_get__streamingPacketHandler() const;

constexpr ::Liv::Lck::Encoding::LckEncodedPacketHandler& __cordl_internal_get__streamingPacketHandler() ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>* const& __cordl_internal_get__streamingTelemetryContext() const;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*& __cordl_internal_get__streamingTelemetryContext() ;

constexpr ::Liv::Lck::Telemetry::ILckTelemetryClient* const& __cordl_internal_get__telemetryClient() const;

constexpr ::Liv::Lck::Telemetry::ILckTelemetryClient*& __cordl_internal_get__telemetryClient() ;

constexpr ::Liv::Lck::Core::ILckTelemetryContextProvider* const& __cordl_internal_get__telemetryContextProvider() const;

constexpr ::Liv::Lck::Core::ILckTelemetryContextProvider*& __cordl_internal_get__telemetryContextProvider() ;

constexpr void __cordl_internal_set__CurrentCaptureState_k__BackingField(::Liv::Lck::LckCaptureState  value) ;

constexpr void __cordl_internal_set__currentStreamDescriptor(::Liv::Lck::CameraTrackDescriptor  value) ;

constexpr void __cordl_internal_set__disposed(bool  value) ;

constexpr void __cordl_internal_set__encoder(::Liv::Lck::Encoding::ILckEncoder*  value) ;

constexpr void __cordl_internal_set__eventBus(::Liv::Lck::ILckEventBus*  value) ;

constexpr void __cordl_internal_set__nativeStreamingService(::Liv::Lck::Streaming::ILckNativeStreamingService*  value) ;

constexpr void __cordl_internal_set__outputConfigurer(::Liv::Lck::ILckOutputConfigurer*  value) ;

constexpr void __cordl_internal_set__streamStartTime(float_t  value) ;

constexpr void __cordl_internal_set__streamingPacketHandler(::Liv::Lck::Encoding::LckEncodedPacketHandler  value) ;

constexpr void __cordl_internal_set__streamingTelemetryContext(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  value) ;

constexpr void __cordl_internal_set__telemetryClient(::Liv::Lck::Telemetry::ILckTelemetryClient*  value) ;

constexpr void __cordl_internal_set__telemetryContextProvider(::Liv::Lck::Core::ILckTelemetryContextProvider*  value) ;

/// @brief Method .ctor, addr 0x9cf97d4, size 0x3e4, virtual false, abstract: false, final false
inline void _ctor(::Liv::Lck::Streaming::ILckNativeStreamingService*  nativeStreamingService, ::Liv::Lck::Encoding::ILckEncoder*  encoder, ::Liv::Lck::ILckOutputConfigurer*  outputConfigurer, ::Liv::Lck::ILckEventBus*  eventBus, ::Liv::Lck::Telemetry::ILckTelemetryClient*  telemetryClient, ::Liv::Lck::Core::ILckTelemetryContextProvider*  telemetryContextProvider) ;

/// [CompilerGenerated]
/// @brief Method get_CurrentCaptureState, addr 0x9cf97a4, size 0x8, virtual true, abstract: false, final true
inline ::Liv::Lck::LckCaptureState get_CurrentCaptureState() ;

/// @brief Method get_CurrentStreamDurationSeconds, addr 0x9cf97b4, size 0x20, virtual false, abstract: false, final false
inline float_t get_CurrentStreamDurationSeconds() ;

/// @brief Method get_IsStreaming, addr 0x9cf9744, size 0x10, virtual true, abstract: false, final true
inline bool get_IsStreaming() ;

/// @brief Convert to "::GlobalNamespace::ILckCaptureStateProvider"
constexpr ::GlobalNamespace::ILckCaptureStateProvider* i___GlobalNamespace__ILckCaptureStateProvider() noexcept;

/// @brief Convert to "::Liv::Lck::Streaming::ILckStreamer"
constexpr ::Liv::Lck::Streaming::ILckStreamer* i___Liv__Lck__Streaming__ILckStreamer() noexcept;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

/// [CompilerGenerated]
/// @brief Method set_CurrentCaptureState, addr 0x9cf97ac, size 0x8, virtual false, abstract: false, final false
inline void set_CurrentCaptureState(::Liv::Lck::LckCaptureState  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckStreamer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckStreamer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckStreamer(LckStreamer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckStreamer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckStreamer(LckStreamer const& ) = delete;

/// @brief Field ConsumerName value: I32(1)
static ::Liv::Lck::Encoding::EncoderConsumer const ConsumerName;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32678};

/// @brief Field _nativeStreamingService, offset: 0x10, size: 0x8, def value: None
 ::Liv::Lck::Streaming::ILckNativeStreamingService*  ____nativeStreamingService;

/// @brief Field _encoder, offset: 0x18, size: 0x8, def value: None
 ::Liv::Lck::Encoding::ILckEncoder*  ____encoder;

/// @brief Field _outputConfigurer, offset: 0x20, size: 0x8, def value: None
 ::Liv::Lck::ILckOutputConfigurer*  ____outputConfigurer;

/// @brief Field _eventBus, offset: 0x28, size: 0x8, def value: None
 ::Liv::Lck::ILckEventBus*  ____eventBus;

/// @brief Field _telemetryClient, offset: 0x30, size: 0x8, def value: None
 ::Liv::Lck::Telemetry::ILckTelemetryClient*  ____telemetryClient;

/// @brief Field _telemetryContextProvider, offset: 0x38, size: 0x8, def value: None
 ::Liv::Lck::Core::ILckTelemetryContextProvider*  ____telemetryContextProvider;

/// @brief Field _streamStartTime, offset: 0x40, size: 0x4, def value: None
 float_t  ____streamStartTime;

/// @brief Field _disposed, offset: 0x44, size: 0x1, def value: None
 bool  ____disposed;

/// @brief Field _currentStreamDescriptor, offset: 0x48, size: 0x14, def value: None
 ::Liv::Lck::CameraTrackDescriptor  ____currentStreamDescriptor;

/// @brief Field _streamingPacketHandler, offset: 0x60, size: 0x18, def value: None
 ::Liv::Lck::Encoding::LckEncodedPacketHandler  ____streamingPacketHandler;

/// @brief Field _streamingTelemetryContext, offset: 0x78, size: 0x8, def value: None
 ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  ____streamingTelemetryContext;

/// [CompilerGenerated]
/// @brief Field <CurrentCaptureState>k__BackingField, offset: 0x80, size: 0x4, def value: None
 ::Liv::Lck::LckCaptureState  ____CurrentCaptureState_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::Streaming::LckStreamer, ____nativeStreamingService) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Streaming::LckStreamer, ____encoder) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Streaming::LckStreamer, ____outputConfigurer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Streaming::LckStreamer, ____eventBus) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Streaming::LckStreamer, ____telemetryClient) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Streaming::LckStreamer, ____telemetryContextProvider) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Streaming::LckStreamer, ____streamStartTime) == 0x40, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Streaming::LckStreamer, ____disposed) == 0x44, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Streaming::LckStreamer, ____currentStreamDescriptor) == 0x48, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Streaming::LckStreamer, ____streamingPacketHandler) == 0x60, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Streaming::LckStreamer, ____streamingTelemetryContext) == 0x78, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Streaming::LckStreamer, ____CurrentCaptureState_k__BackingField) == 0x80, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::Streaming::LckStreamer) == 0x88, "Size mismatch!");

} // namespace end def Liv::Lck::Streaming
// [CompilerGenerated]
// Dependencies System.Object
namespace Liv::Lck::Streaming {
// Is value type: false
// CS Name: Liv.Lck.Streaming.LckStreamer/<>c__DisplayClass26_0
class CORDL_TYPE LckStreamer___c__DisplayClass26_0 : public ::System::Object {
public:
// Declarations
/// @brief Field <>4__this, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get___4__this, put=__cordl_internal_set___4__this)) ::Liv::Lck::Streaming::LckStreamer*  __4__this;

/// @brief Field height, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_height, put=__cordl_internal_set_height)) int32_t  height;

/// @brief Field width, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_width, put=__cordl_internal_set_width)) int32_t  width;

static inline ::Liv::Lck::Streaming::LckStreamer___c__DisplayClass26_0* New_ctor() ;

/// @brief Method <StartNativeStreamerAsync>b__0, addr 0x9cfb6a0, size 0x37c, virtual false, abstract: false, final false
inline ::Liv::Lck::LckResult* _StartNativeStreamerAsync_b__0() ;

constexpr ::Liv::Lck::Streaming::LckStreamer* const& __cordl_internal_get___4__this() const;

constexpr ::Liv::Lck::Streaming::LckStreamer*& __cordl_internal_get___4__this() ;

constexpr int32_t const& __cordl_internal_get_height() const;

constexpr int32_t& __cordl_internal_get_height() ;

constexpr int32_t const& __cordl_internal_get_width() const;

constexpr int32_t& __cordl_internal_get_width() ;

constexpr void __cordl_internal_set___4__this(::Liv::Lck::Streaming::LckStreamer*  value) ;

constexpr void __cordl_internal_set_height(int32_t  value) ;

constexpr void __cordl_internal_set_width(int32_t  value) ;

/// @brief Method .ctor, addr 0x9cfb698, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LckStreamer___c__DisplayClass26_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LckStreamer___c__DisplayClass26_0", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
LckStreamer___c__DisplayClass26_0(LckStreamer___c__DisplayClass26_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LckStreamer___c__DisplayClass26_0", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
LckStreamer___c__DisplayClass26_0(LckStreamer___c__DisplayClass26_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{32673};

/// @brief Field <>4__this, offset: 0x10, size: 0x8, def value: None
 ::Liv::Lck::Streaming::LckStreamer*  _____4__this;

/// @brief Field width, offset: 0x18, size: 0x4, def value: None
 int32_t  ___width;

/// @brief Field height, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___height;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Liv::Lck::Streaming::LckStreamer___c__DisplayClass26_0, _____4__this) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Streaming::LckStreamer___c__DisplayClass26_0, ___width) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Liv::Lck::Streaming::LckStreamer___c__DisplayClass26_0, ___height) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::Liv::Lck::Streaming::LckStreamer___c__DisplayClass26_0) == 0x20, "Size mismatch!");

} // namespace end def Liv::Lck::Streaming
