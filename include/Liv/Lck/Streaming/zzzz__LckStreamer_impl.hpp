#pragma once
// IWYU pragma private; include "Liv/Lck/Streaming/LckStreamer.hpp"
#include "Liv/Lck/Encoding/zzzz__EncoderConsumer_impl.hpp"
#include "Liv/Lck/Encoding/zzzz__LckEncodedPacketHandler_impl.hpp"
#include "Liv/Lck/zzzz__CameraTrackDescriptor_impl.hpp"
#include "Liv/Lck/zzzz__LckCaptureState_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Liv/Lck/Streaming/zzzz__LckStreamer_def.hpp"
#include "GlobalNamespace/zzzz__ILckCaptureStateProvider_def.hpp"
#include "Liv/Lck/Core/zzzz__ILckTelemetryContextProvider_def.hpp"
#include "Liv/Lck/Encoding/zzzz__ILckEncoder_def.hpp"
#include "Liv/Lck/Streaming/zzzz__ILckNativeStreamingService_def.hpp"
#include "Liv/Lck/Streaming/zzzz__ILckStreamer_def.hpp"
#include "Liv/Lck/Streaming/zzzz__LckStreamer__StartNativeStreamerAsync_d__26_def.hpp"
#include "Liv/Lck/Streaming/zzzz__LckStreamer__StartStreamingAsync_d__27_def.hpp"
#include "Liv/Lck/Streaming/zzzz__LckStreamer__StopNativeStreamerAsync_d__28_def.hpp"
#include "Liv/Lck/Streaming/zzzz__LckStreamer__StopStreamingAsync_d__29_def.hpp"
#include "Liv/Lck/Streaming/zzzz__LckStreamer_def.hpp"
#include "Liv/Lck/Telemetry/zzzz__ILckTelemetryClient_def.hpp"
#include "Liv/Lck/zzzz__ILckEventBus_def.hpp"
#include "Liv/Lck/zzzz__ILckOutputConfigurer_def.hpp"
#include "Liv/Lck/zzzz__LckCaptureState_def.hpp"
#include "Liv/Lck/zzzz__LckEvents_CaptureErrorEvent_def.hpp"
#include "Liv/Lck/zzzz__LckEvents_EncoderStoppedEvent_def.hpp"
#include "Liv/Lck/zzzz__LckResult_1_def.hpp"
#include "Liv/Lck/zzzz__LckResult_def.hpp"
#include "Liv/Lck/zzzz__LckService_StopReason_def.hpp"
#include "Liv/NGFX/zzzz__LogLevel_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
//  Writing Method size for method: ::Liv::Lck::Streaming::LckStreamer.get_IsStreaming
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Liv::Lck::Streaming::LckStreamer::*)()>(&::Liv::Lck::Streaming::LckStreamer::get_IsStreaming)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9cf9744;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamer*>(),
                        {"get_IsStreaming", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Streaming::LckStreamer.IsPaused
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult_1<bool>* (::Liv::Lck::Streaming::LckStreamer::*)()>(&::Liv::Lck::Streaming::LckStreamer::IsPaused)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x9cf9754;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamer*>(),
                        {"IsPaused", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Streaming::LckStreamer.get_CurrentCaptureState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckCaptureState (::Liv::Lck::Streaming::LckStreamer::*)()>(&::Liv::Lck::Streaming::LckStreamer::get_CurrentCaptureState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cf97a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamer*>(),
                        {"get_CurrentCaptureState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Streaming::LckStreamer.set_CurrentCaptureState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Streaming::LckStreamer::*)(::Liv::Lck::LckCaptureState)>(&::Liv::Lck::Streaming::LckStreamer::set_CurrentCaptureState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cf97ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamer*>(),
                        {"set_CurrentCaptureState", {}, {::i2c::type_of<::Liv::Lck::LckCaptureState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Streaming::LckStreamer.get_CurrentStreamDurationSeconds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Liv::Lck::Streaming::LckStreamer::*)()>(&::Liv::Lck::Streaming::LckStreamer::get_CurrentStreamDurationSeconds)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9cf97b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamer*>(),
                        {"get_CurrentStreamDurationSeconds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Streaming::LckStreamer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Streaming::LckStreamer::*)(::Liv::Lck::Streaming::ILckNativeStreamingService*, ::Liv::Lck::Encoding::ILckEncoder*, ::Liv::Lck::ILckOutputConfigurer*, ::Liv::Lck::ILckEventBus*, ::Liv::Lck::Telemetry::ILckTelemetryClient*, ::Liv::Lck::Core::ILckTelemetryContextProvider*)>(&::Liv::Lck::Streaming::LckStreamer::_ctor)> {
  constexpr static std::size_t size = 0x3e4;
  constexpr static std::size_t addrs = 0x9cf97d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamer*>(),
                        {".ctor", {}, {::i2c::type_of<::Liv::Lck::Streaming::ILckNativeStreamingService*>(), ::i2c::type_of<::Liv::Lck::Encoding::ILckEncoder*>(), ::i2c::type_of<::Liv::Lck::ILckOutputConfigurer*>(), ::i2c::type_of<::Liv::Lck::ILckEventBus*>(), ::i2c::type_of<::Liv::Lck::Telemetry::ILckTelemetryClient*>(), ::i2c::type_of<::Liv::Lck::Core::ILckTelemetryContextProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Streaming::LckStreamer.StartStreaming
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult* (::Liv::Lck::Streaming::LckStreamer::*)()>(&::Liv::Lck::Streaming::LckStreamer::StartStreaming)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x9cf9bb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamer*>(),
                        {"StartStreaming", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Streaming::LckStreamer.StopStreaming
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult* (::Liv::Lck::Streaming::LckStreamer::*)(::GlobalNamespace::LckService_StopReason)>(&::Liv::Lck::Streaming::LckStreamer::StopStreaming)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x9cfa14c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamer*>(),
                        {"StopStreaming", {}, {::i2c::type_of<::GlobalNamespace::LckService_StopReason>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Streaming::LckStreamer.GetStreamDuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult_1<::System::TimeSpan>* (::Liv::Lck::Streaming::LckStreamer::*)()>(&::Liv::Lck::Streaming::LckStreamer::GetStreamDuration)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x9cfa4ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamer*>(),
                        {"GetStreamDuration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Streaming::LckStreamer.SetLogLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Streaming::LckStreamer::*)(::Liv::NGFX::LogLevel)>(&::Liv::Lck::Streaming::LckStreamer::SetLogLevel)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x9cfa584;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamer*>(),
                        {"SetLogLevel", {}, {::i2c::type_of<::Liv::NGFX::LogLevel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Streaming::LckStreamer.StartNativeStreamerAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Liv::Lck::LckResult*>* (::Liv::Lck::Streaming::LckStreamer::*)(int32_t, int32_t)>(&::Liv::Lck::Streaming::LckStreamer::StartNativeStreamerAsync)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x9cfa630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamer*>(),
                        {"StartNativeStreamerAsync", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Streaming::LckStreamer.StartStreamingAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Liv::Lck::Streaming::LckStreamer::*)()>(&::Liv::Lck::Streaming::LckStreamer::StartStreamingAsync)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x9cfa070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamer*>(),
                        {"StartStreamingAsync", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Streaming::LckStreamer.StopNativeStreamerAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Liv::Lck::LckResult*>* (::Liv::Lck::Streaming::LckStreamer::*)()>(&::Liv::Lck::Streaming::LckStreamer::StopNativeStreamerAsync)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x9cfa750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamer*>(),
                        {"StopNativeStreamerAsync", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Streaming::LckStreamer.StopStreamingAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Liv::Lck::Streaming::LckStreamer::*)(::GlobalNamespace::LckService_StopReason)>(&::Liv::Lck::Streaming::LckStreamer::StopStreamingAsync)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x9cfa3d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamer*>(),
                        {"StopStreamingAsync", {}, {::i2c::type_of<::GlobalNamespace::LckService_StopReason>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Streaming::LckStreamer.SetUpNativeStreamer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult* (::Liv::Lck::Streaming::LckStreamer::*)()>(&::Liv::Lck::Streaming::LckStreamer::SetUpNativeStreamer)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0x9cf9d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamer*>(),
                        {"SetUpNativeStreamer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Streaming::LckStreamer.OnEncoderStopped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Streaming::LckStreamer::*)(::GlobalNamespace::LckEvents_EncoderStoppedEvent)>(&::Liv::Lck::Streaming::LckStreamer::OnEncoderStopped)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x9cfa858;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamer*>(),
                        {"OnEncoderStopped", {}, {::i2c::type_of<::GlobalNamespace::LckEvents_EncoderStoppedEvent>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Streaming::LckStreamer.TriggerStreamingStoppedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Streaming::LckStreamer::*)(::Liv::Lck::LckResult*)>(&::Liv::Lck::Streaming::LckStreamer::TriggerStreamingStoppedEvent)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x9cfa968;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamer*>(),
                        {"TriggerStreamingStoppedEvent", {}, {::i2c::type_of<::Liv::Lck::LckResult*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Streaming::LckStreamer.TriggerStreamingStartedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Streaming::LckStreamer::*)(::Liv::Lck::LckResult*)>(&::Liv::Lck::Streaming::LckStreamer::TriggerStreamingStartedEvent)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x9cfaa48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamer*>(),
                        {"TriggerStreamingStartedEvent", {}, {::i2c::type_of<::Liv::Lck::LckResult*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Streaming::LckStreamer.UpdateStreamingTelemetryContext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Streaming::LckStreamer::*)()>(&::Liv::Lck::Streaming::LckStreamer::UpdateStreamingTelemetryContext)> {
  constexpr static std::size_t size = 0x448;
  constexpr static std::size_t addrs = 0x9cfab28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamer*>(),
                        {"UpdateStreamingTelemetryContext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Streaming::LckStreamer.OnCaptureError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Streaming::LckStreamer::*)(::GlobalNamespace::LckEvents_CaptureErrorEvent)>(&::Liv::Lck::Streaming::LckStreamer::OnCaptureError)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x9cfaf70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamer*>(),
                        {"OnCaptureError", {}, {::i2c::type_of<::GlobalNamespace::LckEvents_CaptureErrorEvent>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Streaming::LckStreamer.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Streaming::LckStreamer::*)()>(&::Liv::Lck::Streaming::LckStreamer::Dispose)> {
  constexpr static std::size_t size = 0x498;
  constexpr static std::size_t addrs = 0x9cfb054;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamer*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Streaming::LckStreamer._StopNativeStreamerAsync_b__28_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult* (::Liv::Lck::Streaming::LckStreamer::*)()>(&::Liv::Lck::Streaming::LckStreamer::_StopNativeStreamerAsync_b__28_0)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x9cfb4ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamer*>(),
                        {"<StopNativeStreamerAsync>b__28_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Liv::Lck::Streaming::ILckNativeStreamingService*& Liv::Lck::Streaming::LckStreamer::__cordl_internal_get__nativeStreamingService()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nativeStreamingService;
}
constexpr ::Liv::Lck::Streaming::ILckNativeStreamingService* const& Liv::Lck::Streaming::LckStreamer::__cordl_internal_get__nativeStreamingService() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nativeStreamingService;
}
constexpr void Liv::Lck::Streaming::LckStreamer::__cordl_internal_set__nativeStreamingService(::Liv::Lck::Streaming::ILckNativeStreamingService*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____nativeStreamingService = value;
}
constexpr ::Liv::Lck::Encoding::ILckEncoder*& Liv::Lck::Streaming::LckStreamer::__cordl_internal_get__encoder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____encoder;
}
constexpr ::Liv::Lck::Encoding::ILckEncoder* const& Liv::Lck::Streaming::LckStreamer::__cordl_internal_get__encoder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____encoder;
}
constexpr void Liv::Lck::Streaming::LckStreamer::__cordl_internal_set__encoder(::Liv::Lck::Encoding::ILckEncoder*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____encoder = value;
}
constexpr ::Liv::Lck::ILckOutputConfigurer*& Liv::Lck::Streaming::LckStreamer::__cordl_internal_get__outputConfigurer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____outputConfigurer;
}
constexpr ::Liv::Lck::ILckOutputConfigurer* const& Liv::Lck::Streaming::LckStreamer::__cordl_internal_get__outputConfigurer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____outputConfigurer;
}
constexpr void Liv::Lck::Streaming::LckStreamer::__cordl_internal_set__outputConfigurer(::Liv::Lck::ILckOutputConfigurer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____outputConfigurer = value;
}
constexpr ::Liv::Lck::ILckEventBus*& Liv::Lck::Streaming::LckStreamer::__cordl_internal_get__eventBus()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____eventBus;
}
constexpr ::Liv::Lck::ILckEventBus* const& Liv::Lck::Streaming::LckStreamer::__cordl_internal_get__eventBus() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____eventBus;
}
constexpr void Liv::Lck::Streaming::LckStreamer::__cordl_internal_set__eventBus(::Liv::Lck::ILckEventBus*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____eventBus = value;
}
constexpr ::Liv::Lck::Telemetry::ILckTelemetryClient*& Liv::Lck::Streaming::LckStreamer::__cordl_internal_get__telemetryClient()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____telemetryClient;
}
constexpr ::Liv::Lck::Telemetry::ILckTelemetryClient* const& Liv::Lck::Streaming::LckStreamer::__cordl_internal_get__telemetryClient() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____telemetryClient;
}
constexpr void Liv::Lck::Streaming::LckStreamer::__cordl_internal_set__telemetryClient(::Liv::Lck::Telemetry::ILckTelemetryClient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____telemetryClient = value;
}
constexpr ::Liv::Lck::Core::ILckTelemetryContextProvider*& Liv::Lck::Streaming::LckStreamer::__cordl_internal_get__telemetryContextProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____telemetryContextProvider;
}
constexpr ::Liv::Lck::Core::ILckTelemetryContextProvider* const& Liv::Lck::Streaming::LckStreamer::__cordl_internal_get__telemetryContextProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____telemetryContextProvider;
}
constexpr void Liv::Lck::Streaming::LckStreamer::__cordl_internal_set__telemetryContextProvider(::Liv::Lck::Core::ILckTelemetryContextProvider*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____telemetryContextProvider = value;
}
constexpr float_t& Liv::Lck::Streaming::LckStreamer::__cordl_internal_get__streamStartTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____streamStartTime;
}
constexpr float_t const& Liv::Lck::Streaming::LckStreamer::__cordl_internal_get__streamStartTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____streamStartTime;
}
constexpr void Liv::Lck::Streaming::LckStreamer::__cordl_internal_set__streamStartTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____streamStartTime = value;
}
constexpr bool& Liv::Lck::Streaming::LckStreamer::__cordl_internal_get__disposed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disposed;
}
constexpr bool const& Liv::Lck::Streaming::LckStreamer::__cordl_internal_get__disposed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disposed;
}
constexpr void Liv::Lck::Streaming::LckStreamer::__cordl_internal_set__disposed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____disposed = value;
}
constexpr ::Liv::Lck::CameraTrackDescriptor& Liv::Lck::Streaming::LckStreamer::__cordl_internal_get__currentStreamDescriptor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentStreamDescriptor;
}
constexpr ::Liv::Lck::CameraTrackDescriptor const& Liv::Lck::Streaming::LckStreamer::__cordl_internal_get__currentStreamDescriptor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentStreamDescriptor;
}
constexpr void Liv::Lck::Streaming::LckStreamer::__cordl_internal_set__currentStreamDescriptor(::Liv::Lck::CameraTrackDescriptor  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentStreamDescriptor = value;
}
constexpr ::Liv::Lck::Encoding::LckEncodedPacketHandler& Liv::Lck::Streaming::LckStreamer::__cordl_internal_get__streamingPacketHandler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____streamingPacketHandler;
}
constexpr ::Liv::Lck::Encoding::LckEncodedPacketHandler const& Liv::Lck::Streaming::LckStreamer::__cordl_internal_get__streamingPacketHandler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____streamingPacketHandler;
}
constexpr void Liv::Lck::Streaming::LckStreamer::__cordl_internal_set__streamingPacketHandler(::Liv::Lck::Encoding::LckEncodedPacketHandler  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____streamingPacketHandler = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*& Liv::Lck::Streaming::LckStreamer::__cordl_internal_get__streamingTelemetryContext()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____streamingTelemetryContext;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>* const& Liv::Lck::Streaming::LckStreamer::__cordl_internal_get__streamingTelemetryContext() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____streamingTelemetryContext;
}
constexpr void Liv::Lck::Streaming::LckStreamer::__cordl_internal_set__streamingTelemetryContext(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____streamingTelemetryContext = value;
}
constexpr ::Liv::Lck::LckCaptureState& Liv::Lck::Streaming::LckStreamer::__cordl_internal_get__CurrentCaptureState_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CurrentCaptureState_k__BackingField;
}
constexpr ::Liv::Lck::LckCaptureState const& Liv::Lck::Streaming::LckStreamer::__cordl_internal_get__CurrentCaptureState_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CurrentCaptureState_k__BackingField;
}
constexpr void Liv::Lck::Streaming::LckStreamer::__cordl_internal_set__CurrentCaptureState_k__BackingField(::Liv::Lck::LckCaptureState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CurrentCaptureState_k__BackingField = value;
}
inline bool Liv::Lck::Streaming::LckStreamer::get_IsStreaming()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamer*>(),
                        {"get_IsStreaming", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Liv::Lck::LckResult_1<bool>* Liv::Lck::Streaming::LckStreamer::IsPaused()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamer*>(),
                        {"IsPaused", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult_1<bool>*>(this, ___internal_method);
}
inline ::Liv::Lck::LckCaptureState Liv::Lck::Streaming::LckStreamer::get_CurrentCaptureState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamer*>(),
                        {"get_CurrentCaptureState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckCaptureState>(this, ___internal_method);
}
inline void Liv::Lck::Streaming::LckStreamer::set_CurrentCaptureState(::Liv::Lck::LckCaptureState  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamer*>(),
                        {"set_CurrentCaptureState", {}, {::i2c::type_of<::Liv::Lck::LckCaptureState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Liv::Lck::Streaming::LckStreamer::get_CurrentStreamDurationSeconds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamer*>(),
                        {"get_CurrentStreamDurationSeconds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Liv::Lck::Streaming::LckStreamer::_ctor(::Liv::Lck::Streaming::ILckNativeStreamingService*  nativeStreamingService, ::Liv::Lck::Encoding::ILckEncoder*  encoder, ::Liv::Lck::ILckOutputConfigurer*  outputConfigurer, ::Liv::Lck::ILckEventBus*  eventBus, ::Liv::Lck::Telemetry::ILckTelemetryClient*  telemetryClient, ::Liv::Lck::Core::ILckTelemetryContextProvider*  telemetryContextProvider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamer*>(),
                        {".ctor", {}, {::i2c::type_of<::Liv::Lck::Streaming::ILckNativeStreamingService*>(), ::i2c::type_of<::Liv::Lck::Encoding::ILckEncoder*>(), ::i2c::type_of<::Liv::Lck::ILckOutputConfigurer*>(), ::i2c::type_of<::Liv::Lck::ILckEventBus*>(), ::i2c::type_of<::Liv::Lck::Telemetry::ILckTelemetryClient*>(), ::i2c::type_of<::Liv::Lck::Core::ILckTelemetryContextProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nativeStreamingService, encoder, outputConfigurer, eventBus, telemetryClient, telemetryContextProvider);
}
inline ::Liv::Lck::LckResult* Liv::Lck::Streaming::LckStreamer::StartStreaming()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamer*>(),
                        {"StartStreaming", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult*>(this, ___internal_method);
}
inline ::Liv::Lck::LckResult* Liv::Lck::Streaming::LckStreamer::StopStreaming(::GlobalNamespace::LckService_StopReason  stopReason)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamer*>(),
                        {"StopStreaming", {}, {::i2c::type_of<::GlobalNamespace::LckService_StopReason>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult*>(this, ___internal_method, stopReason);
}
inline ::Liv::Lck::LckResult_1<::System::TimeSpan>* Liv::Lck::Streaming::LckStreamer::GetStreamDuration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamer*>(),
                        {"GetStreamDuration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult_1<::System::TimeSpan>*>(this, ___internal_method);
}
inline void Liv::Lck::Streaming::LckStreamer::SetLogLevel(::Liv::NGFX::LogLevel  logLevel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamer*>(),
                        {"SetLogLevel", {}, {::i2c::type_of<::Liv::NGFX::LogLevel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, logLevel);
}
inline ::System::Threading::Tasks::Task_1<::Liv::Lck::LckResult*>* Liv::Lck::Streaming::LckStreamer::StartNativeStreamerAsync(int32_t  width, int32_t  height)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamer*>(),
                        {"StartNativeStreamerAsync", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Liv::Lck::LckResult*>*>(this, ___internal_method, width, height);
}
inline ::System::Threading::Tasks::Task* Liv::Lck::Streaming::LckStreamer::StartStreamingAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamer*>(),
                        {"StartStreamingAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Liv::Lck::LckResult*>* Liv::Lck::Streaming::LckStreamer::StopNativeStreamerAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamer*>(),
                        {"StopNativeStreamerAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Liv::Lck::LckResult*>*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* Liv::Lck::Streaming::LckStreamer::StopStreamingAsync(::GlobalNamespace::LckService_StopReason  stopReason)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamer*>(),
                        {"StopStreamingAsync", {}, {::i2c::type_of<::GlobalNamespace::LckService_StopReason>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, stopReason);
}
inline ::Liv::Lck::LckResult* Liv::Lck::Streaming::LckStreamer::SetUpNativeStreamer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamer*>(),
                        {"SetUpNativeStreamer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult*>(this, ___internal_method);
}
inline void Liv::Lck::Streaming::LckStreamer::OnEncoderStopped(::GlobalNamespace::LckEvents_EncoderStoppedEvent  encoderStoppedEvent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamer*>(),
                        {"OnEncoderStopped", {}, {::i2c::type_of<::GlobalNamespace::LckEvents_EncoderStoppedEvent>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, encoderStoppedEvent);
}
inline void Liv::Lck::Streaming::LckStreamer::TriggerStreamingStoppedEvent(::Liv::Lck::LckResult*  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamer*>(),
                        {"TriggerStreamingStoppedEvent", {}, {::i2c::type_of<::Liv::Lck::LckResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline void Liv::Lck::Streaming::LckStreamer::TriggerStreamingStartedEvent(::Liv::Lck::LckResult*  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamer*>(),
                        {"TriggerStreamingStartedEvent", {}, {::i2c::type_of<::Liv::Lck::LckResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline void Liv::Lck::Streaming::LckStreamer::UpdateStreamingTelemetryContext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamer*>(),
                        {"UpdateStreamingTelemetryContext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::Streaming::LckStreamer::OnCaptureError(::GlobalNamespace::LckEvents_CaptureErrorEvent  captureErrorEvent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamer*>(),
                        {"OnCaptureError", {}, {::i2c::type_of<::GlobalNamespace::LckEvents_CaptureErrorEvent>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, captureErrorEvent);
}
inline void Liv::Lck::Streaming::LckStreamer::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamer*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::LckResult* Liv::Lck::Streaming::LckStreamer::_StopNativeStreamerAsync_b__28_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamer*>(),
                        {"<StopNativeStreamerAsync>b__28_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult*>(this, ___internal_method);
}
inline ::Liv::Lck::Streaming::LckStreamer* Liv::Lck::Streaming::LckStreamer::New_ctor(::Liv::Lck::Streaming::ILckNativeStreamingService*  nativeStreamingService, ::Liv::Lck::Encoding::ILckEncoder*  encoder, ::Liv::Lck::ILckOutputConfigurer*  outputConfigurer, ::Liv::Lck::ILckEventBus*  eventBus, ::Liv::Lck::Telemetry::ILckTelemetryClient*  telemetryClient, ::Liv::Lck::Core::ILckTelemetryContextProvider*  telemetryContextProvider)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::Streaming::LckStreamer*>(nativeStreamingService, encoder, outputConfigurer, eventBus, telemetryClient, telemetryContextProvider));
}
/// @brief Convert operator to "::Liv::Lck::Streaming::ILckStreamer"
constexpr  Liv::Lck::Streaming::LckStreamer::operator ::Liv::Lck::Streaming::ILckStreamer*() noexcept {
return static_cast<::Liv::Lck::Streaming::ILckStreamer*>(static_cast<void*>(this));
}
/// @brief Convert to "::Liv::Lck::Streaming::ILckStreamer"
constexpr ::Liv::Lck::Streaming::ILckStreamer* Liv::Lck::Streaming::LckStreamer::i___Liv__Lck__Streaming__ILckStreamer() noexcept {
return static_cast<::Liv::Lck::Streaming::ILckStreamer*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::ILckCaptureStateProvider"
constexpr  Liv::Lck::Streaming::LckStreamer::operator ::GlobalNamespace::ILckCaptureStateProvider*() noexcept {
return static_cast<::GlobalNamespace::ILckCaptureStateProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ILckCaptureStateProvider"
constexpr ::GlobalNamespace::ILckCaptureStateProvider* Liv::Lck::Streaming::LckStreamer::i___GlobalNamespace__ILckCaptureStateProvider() noexcept {
return static_cast<::GlobalNamespace::ILckCaptureStateProvider*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Liv::Lck::Streaming::LckStreamer::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Liv::Lck::Streaming::LckStreamer::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Liv::Lck::Streaming::LckStreamer::LckStreamer()   {
}
constexpr ::Liv::Lck::Encoding::EncoderConsumer  Liv::Lck::Streaming::LckStreamer::ConsumerName{static_cast<int32_t>(0x1)};
//  Writing Method size for method: ::Liv::Lck::Streaming::LckStreamer___c__DisplayClass26_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Streaming::LckStreamer___c__DisplayClass26_0::*)()>(&::Liv::Lck::Streaming::LckStreamer___c__DisplayClass26_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cfb698;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamer___c__DisplayClass26_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Streaming::LckStreamer___c__DisplayClass26_0._StartNativeStreamerAsync_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult* (::Liv::Lck::Streaming::LckStreamer___c__DisplayClass26_0::*)()>(&::Liv::Lck::Streaming::LckStreamer___c__DisplayClass26_0::_StartNativeStreamerAsync_b__0)> {
  constexpr static std::size_t size = 0x37c;
  constexpr static std::size_t addrs = 0x9cfb6a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamer___c__DisplayClass26_0*>(),
                        {"<StartNativeStreamerAsync>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Liv::Lck::Streaming::LckStreamer*& Liv::Lck::Streaming::LckStreamer___c__DisplayClass26_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::Liv::Lck::Streaming::LckStreamer* const& Liv::Lck::Streaming::LckStreamer___c__DisplayClass26_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Liv::Lck::Streaming::LckStreamer___c__DisplayClass26_0::__cordl_internal_set___4__this(::Liv::Lck::Streaming::LckStreamer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr int32_t& Liv::Lck::Streaming::LckStreamer___c__DisplayClass26_0::__cordl_internal_get_width()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___width;
}
constexpr int32_t const& Liv::Lck::Streaming::LckStreamer___c__DisplayClass26_0::__cordl_internal_get_width() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___width;
}
constexpr void Liv::Lck::Streaming::LckStreamer___c__DisplayClass26_0::__cordl_internal_set_width(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___width = value;
}
constexpr int32_t& Liv::Lck::Streaming::LckStreamer___c__DisplayClass26_0::__cordl_internal_get_height()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___height;
}
constexpr int32_t const& Liv::Lck::Streaming::LckStreamer___c__DisplayClass26_0::__cordl_internal_get_height() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___height;
}
constexpr void Liv::Lck::Streaming::LckStreamer___c__DisplayClass26_0::__cordl_internal_set_height(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___height = value;
}
inline void Liv::Lck::Streaming::LckStreamer___c__DisplayClass26_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamer___c__DisplayClass26_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::LckResult* Liv::Lck::Streaming::LckStreamer___c__DisplayClass26_0::_StartNativeStreamerAsync_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckStreamer___c__DisplayClass26_0*>(),
                        {"<StartNativeStreamerAsync>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult*>(this, ___internal_method);
}
inline ::Liv::Lck::Streaming::LckStreamer___c__DisplayClass26_0* Liv::Lck::Streaming::LckStreamer___c__DisplayClass26_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::Streaming::LckStreamer___c__DisplayClass26_0*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::Streaming::LckStreamer___c__DisplayClass26_0::LckStreamer___c__DisplayClass26_0()   {
}
