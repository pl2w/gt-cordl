#pragma once
// IWYU pragma private; include "Liv/Lck/LckService.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Liv/Lck/zzzz__LckService_def.hpp"
#include "Liv/Lck/Echo/zzzz__ILckEcho_def.hpp"
#include "Liv/Lck/Encoding/zzzz__ILckEncoder_def.hpp"
#include "Liv/Lck/Recorder/zzzz__ILckRecorder_def.hpp"
#include "Liv/Lck/Recorder/zzzz__RecordingData_def.hpp"
#include "Liv/Lck/Streaming/zzzz__ILckStreamer_def.hpp"
#include "Liv/Lck/Telemetry/zzzz__ILckTelemetryClient_def.hpp"
#include "Liv/Lck/zzzz__CameraResolutionDescriptor_def.hpp"
#include "Liv/Lck/zzzz__CameraTrackDescriptor_def.hpp"
#include "Liv/Lck/zzzz__EchoDisableReason_def.hpp"
#include "Liv/Lck/zzzz__ILckAudioMixer_def.hpp"
#include "Liv/Lck/zzzz__ILckCamera_def.hpp"
#include "Liv/Lck/zzzz__ILckEncodeLooper_def.hpp"
#include "Liv/Lck/zzzz__ILckEventBus_def.hpp"
#include "Liv/Lck/zzzz__ILckOutputConfigurer_def.hpp"
#include "Liv/Lck/zzzz__ILckPhotoCapture_def.hpp"
#include "Liv/Lck/zzzz__ILckPreviewer_def.hpp"
#include "Liv/Lck/zzzz__ILckResult_def.hpp"
#include "Liv/Lck/zzzz__ILckService_def.hpp"
#include "Liv/Lck/zzzz__ILckStorageWatcher_def.hpp"
#include "Liv/Lck/zzzz__ILckVideoCapturer_def.hpp"
#include "Liv/Lck/zzzz__ILckVideoMixer_def.hpp"
#include "Liv/Lck/zzzz__LckCameraOrientation_def.hpp"
#include "Liv/Lck/zzzz__LckCaptureType_def.hpp"
#include "Liv/Lck/zzzz__LckDescriptor_def.hpp"
#include "Liv/Lck/zzzz__LckEventErrorLogger_def.hpp"
#include "Liv/Lck/zzzz__LckEvents_ActiveCameraChangedEvent_def.hpp"
#include "Liv/Lck/zzzz__LckEvents_EchoDisabledEvent_def.hpp"
#include "Liv/Lck/zzzz__LckEvents_EchoSavedEvent_def.hpp"
#include "Liv/Lck/zzzz__LckEvents_RecordingSavedEvent_def.hpp"
#include "Liv/Lck/zzzz__LckPublicApiEventBridge_def.hpp"
#include "Liv/Lck/zzzz__LckResult_1_def.hpp"
#include "Liv/Lck/zzzz__LckResult_def.hpp"
#include "Liv/Lck/zzzz__LckService_StopReason_def.hpp"
#include "Liv/Lck/zzzz__LckService__SetEchoEnabledAsync_d__94_def.hpp"
#include "Liv/Lck/zzzz__LckService_def.hpp"
#include "Liv/NativeAudioBridge/zzzz__INativeAudioPlayer_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
//  Writing Method size for method: ::Liv::Lck::LckService.add_OnRecordingStarted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckService::*)(::System::Action_1<::Liv::Lck::LckResult*>*)>(&::Liv::Lck::LckService::add_OnRecordingStarted)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9cebf38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"add_OnRecordingStarted", {}, {::i2c::type_of<::System::Action_1<::Liv::Lck::LckResult*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckService.remove_OnRecordingStarted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckService::*)(::System::Action_1<::Liv::Lck::LckResult*>*)>(&::Liv::Lck::LckService::remove_OnRecordingStarted)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9cec1dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"remove_OnRecordingStarted", {}, {::i2c::type_of<::System::Action_1<::Liv::Lck::LckResult*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckService.add_OnRecordingStopped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckService::*)(::System::Action_1<::Liv::Lck::LckResult*>*)>(&::Liv::Lck::LckService::add_OnRecordingStopped)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9cebfe8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"add_OnRecordingStopped", {}, {::i2c::type_of<::System::Action_1<::Liv::Lck::LckResult*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckService.remove_OnRecordingStopped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckService::*)(::System::Action_1<::Liv::Lck::LckResult*>*)>(&::Liv::Lck::LckService::remove_OnRecordingStopped)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9cec28c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"remove_OnRecordingStopped", {}, {::i2c::type_of<::System::Action_1<::Liv::Lck::LckResult*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckService.add_OnRecordingPaused
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckService::*)(::System::Action_1<::Liv::Lck::LckResult*>*)>(&::Liv::Lck::LckService::add_OnRecordingPaused)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9cf3a74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"add_OnRecordingPaused", {}, {::i2c::type_of<::System::Action_1<::Liv::Lck::LckResult*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckService.remove_OnRecordingPaused
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckService::*)(::System::Action_1<::Liv::Lck::LckResult*>*)>(&::Liv::Lck::LckService::remove_OnRecordingPaused)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9cf3b24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"remove_OnRecordingPaused", {}, {::i2c::type_of<::System::Action_1<::Liv::Lck::LckResult*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckService.add_OnRecordingResumed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckService::*)(::System::Action_1<::Liv::Lck::LckResult*>*)>(&::Liv::Lck::LckService::add_OnRecordingResumed)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9cf3bd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"add_OnRecordingResumed", {}, {::i2c::type_of<::System::Action_1<::Liv::Lck::LckResult*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckService.remove_OnRecordingResumed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckService::*)(::System::Action_1<::Liv::Lck::LckResult*>*)>(&::Liv::Lck::LckService::remove_OnRecordingResumed)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9cf3c84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"remove_OnRecordingResumed", {}, {::i2c::type_of<::System::Action_1<::Liv::Lck::LckResult*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckService.add_OnStreamingStarted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckService::*)(::System::Action_1<::Liv::Lck::LckResult*>*)>(&::Liv::Lck::LckService::add_OnStreamingStarted)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9cf3d34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"add_OnStreamingStarted", {}, {::i2c::type_of<::System::Action_1<::Liv::Lck::LckResult*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckService.remove_OnStreamingStarted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckService::*)(::System::Action_1<::Liv::Lck::LckResult*>*)>(&::Liv::Lck::LckService::remove_OnStreamingStarted)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9cf3de4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"remove_OnStreamingStarted", {}, {::i2c::type_of<::System::Action_1<::Liv::Lck::LckResult*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckService.add_OnStreamingStopped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckService::*)(::System::Action_1<::Liv::Lck::LckResult*>*)>(&::Liv::Lck::LckService::add_OnStreamingStopped)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9cf3e94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"add_OnStreamingStopped", {}, {::i2c::type_of<::System::Action_1<::Liv::Lck::LckResult*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckService.remove_OnStreamingStopped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckService::*)(::System::Action_1<::Liv::Lck::LckResult*>*)>(&::Liv::Lck::LckService::remove_OnStreamingStopped)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9cf3f44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"remove_OnStreamingStopped", {}, {::i2c::type_of<::System::Action_1<::Liv::Lck::LckResult*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckService.add_OnLowStorageSpace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckService::*)(::System::Action_1<::Liv::Lck::LckResult*>*)>(&::Liv::Lck::LckService::add_OnLowStorageSpace)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9cf3ff4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"add_OnLowStorageSpace", {}, {::i2c::type_of<::System::Action_1<::Liv::Lck::LckResult*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckService.remove_OnLowStorageSpace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckService::*)(::System::Action_1<::Liv::Lck::LckResult*>*)>(&::Liv::Lck::LckService::remove_OnLowStorageSpace)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9cf40a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"remove_OnLowStorageSpace", {}, {::i2c::type_of<::System::Action_1<::Liv::Lck::LckResult*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckService.add_OnRecordingSaved
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckService::*)(::System::Action_1<::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*>*)>(&::Liv::Lck::LckService::add_OnRecordingSaved)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9cf4154;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"add_OnRecordingSaved", {}, {::i2c::type_of<::System::Action_1<::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckService.remove_OnRecordingSaved
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckService::*)(::System::Action_1<::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*>*)>(&::Liv::Lck::LckService::remove_OnRecordingSaved)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9cf4204;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"remove_OnRecordingSaved", {}, {::i2c::type_of<::System::Action_1<::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckService.add_OnPhotoSaved
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckService::*)(::System::Action_1<::Liv::Lck::LckResult*>*)>(&::Liv::Lck::LckService::add_OnPhotoSaved)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9cf42b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"add_OnPhotoSaved", {}, {::i2c::type_of<::System::Action_1<::Liv::Lck::LckResult*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckService.remove_OnPhotoSaved
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckService::*)(::System::Action_1<::Liv::Lck::LckResult*>*)>(&::Liv::Lck::LckService::remove_OnPhotoSaved)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9cf4364;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"remove_OnPhotoSaved", {}, {::i2c::type_of<::System::Action_1<::Liv::Lck::LckResult*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckService.add_OnEchoSaved
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckService::*)(::System::Action_1<::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*>*)>(&::Liv::Lck::LckService::add_OnEchoSaved)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9cf4414;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"add_OnEchoSaved", {}, {::i2c::type_of<::System::Action_1<::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckService.remove_OnEchoSaved
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckService::*)(::System::Action_1<::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*>*)>(&::Liv::Lck::LckService::remove_OnEchoSaved)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9cf44c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"remove_OnEchoSaved", {}, {::i2c::type_of<::System::Action_1<::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckService.add_OnEchoEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckService::*)(::System::Action_1<::Liv::Lck::LckResult*>*)>(&::Liv::Lck::LckService::add_OnEchoEnabled)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9cf4574;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"add_OnEchoEnabled", {}, {::i2c::type_of<::System::Action_1<::Liv::Lck::LckResult*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckService.remove_OnEchoEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckService::*)(::System::Action_1<::Liv::Lck::LckResult*>*)>(&::Liv::Lck::LckService::remove_OnEchoEnabled)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9cf4624;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"remove_OnEchoEnabled", {}, {::i2c::type_of<::System::Action_1<::Liv::Lck::LckResult*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckService.add_OnEchoDisabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckService::*)(::System::Action_2<::Liv::Lck::LckResult*,::Liv::Lck::EchoDisableReason>*)>(&::Liv::Lck::LckService::add_OnEchoDisabled)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9cf46d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"add_OnEchoDisabled", {}, {::i2c::type_of<::System::Action_2<::Liv::Lck::LckResult*,::Liv::Lck::EchoDisableReason>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckService.remove_OnEchoDisabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckService::*)(::System::Action_2<::Liv::Lck::LckResult*,::Liv::Lck::EchoDisableReason>*)>(&::Liv::Lck::LckService::remove_OnEchoDisabled)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9cf4784;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"remove_OnEchoDisabled", {}, {::i2c::type_of<::System::Action_2<::Liv::Lck::LckResult*,::Liv::Lck::EchoDisableReason>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckService.add_OnActiveCameraSet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckService::*)(::System::Action_1<::Liv::Lck::LckResult_1<::Liv::Lck::ILckCamera*>*>*)>(&::Liv::Lck::LckService::add_OnActiveCameraSet)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9cf4834;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"add_OnActiveCameraSet", {}, {::i2c::type_of<::System::Action_1<::Liv::Lck::LckResult_1<::Liv::Lck::ILckCamera*>*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckService.remove_OnActiveCameraSet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckService::*)(::System::Action_1<::Liv::Lck::LckResult_1<::Liv::Lck::ILckCamera*>*>*)>(&::Liv::Lck::LckService::remove_OnActiveCameraSet)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9cf48e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"remove_OnActiveCameraSet", {}, {::i2c::type_of<::System::Action_1<::Liv::Lck::LckResult_1<::Liv::Lck::ILckCamera*>*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckService._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckService::*)(::Liv::Lck::Encoding::ILckEncoder*, ::Liv::Lck::Recorder::ILckRecorder*, ::Liv::Lck::Streaming::ILckStreamer*, ::Liv::Lck::Echo::ILckEcho*, ::Liv::Lck::ILckEncodeLooper*, ::Liv::Lck::ILckPhotoCapture*, ::Liv::Lck::ILckStorageWatcher*, ::Liv::Lck::ILckVideoCapturer*, ::Liv::Lck::ILckVideoMixer*, ::Liv::Lck::ILckAudioMixer*, ::Liv::Lck::ILckOutputConfigurer*, ::Liv::Lck::ILckPreviewer*, ::Liv::NativeAudioBridge::INativeAudioPlayer*, ::Liv::Lck::ILckEventBus*, ::Liv::Lck::Telemetry::ILckTelemetryClient*)>(&::Liv::Lck::LckService::_ctor)> {
  constexpr static std::size_t size = 0xe24;
  constexpr static std::size_t addrs = 0x9cf4994;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {".ctor", {}, {::i2c::type_of<::Liv::Lck::Encoding::ILckEncoder*>(), ::i2c::type_of<::Liv::Lck::Recorder::ILckRecorder*>(), ::i2c::type_of<::Liv::Lck::Streaming::ILckStreamer*>(), ::i2c::type_of<::Liv::Lck::Echo::ILckEcho*>(), ::i2c::type_of<::Liv::Lck::ILckEncodeLooper*>(), ::i2c::type_of<::Liv::Lck::ILckPhotoCapture*>(), ::i2c::type_of<::Liv::Lck::ILckStorageWatcher*>(), ::i2c::type_of<::Liv::Lck::ILckVideoCapturer*>(), ::i2c::type_of<::Liv::Lck::ILckVideoMixer*>(), ::i2c::type_of<::Liv::Lck::ILckAudioMixer*>(), ::i2c::type_of<::Liv::Lck::ILckOutputConfigurer*>(), ::i2c::type_of<::Liv::Lck::ILckPreviewer*>(), ::i2c::type_of<::Liv::NativeAudioBridge::INativeAudioPlayer*>(), ::i2c::type_of<::Liv::Lck::ILckEventBus*>(), ::i2c::type_of<::Liv::Lck::Telemetry::ILckTelemetryClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckService.GetService
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult_1<::Liv::Lck::LckService*>* (*)()>(&::Liv::Lck::LckService::GetService)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x9cf5914;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"GetService", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckService.StartRecording
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult* (::Liv::Lck::LckService::*)()>(&::Liv::Lck::LckService::StartRecording)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x9cf59fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"StartRecording", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckService.PauseRecording
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult* (::Liv::Lck::LckService::*)()>(&::Liv::Lck::LckService::PauseRecording)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x9cf5acc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"PauseRecording", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckService.ResumeRecording
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult* (::Liv::Lck::LckService::*)()>(&::Liv::Lck::LckService::ResumeRecording)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x9cf5ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"ResumeRecording", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckService.StopRecording
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult* (::Liv::Lck::LckService::*)()>(&::Liv::Lck::LckService::StopRecording)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cf5c74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"StopRecording", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckService.StartStreaming
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult* (::Liv::Lck::LckService::*)()>(&::Liv::Lck::LckService::StartStreaming)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x9cf5d58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"StartStreaming", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckService.StopStreaming
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult* (::Liv::Lck::LckService::*)()>(&::Liv::Lck::LckService::StopStreaming)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cf5e80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"StopStreaming", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckService.StopStreaming
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult* (::Liv::Lck::LckService::*)(::GlobalNamespace::LckService_StopReason)>(&::Liv::Lck::LckService::StopStreaming)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x9cf5e88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"StopStreaming", {}, {::i2c::type_of<::GlobalNamespace::LckService_StopReason>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckService.GetRecordingDuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult_1<::System::TimeSpan>* (::Liv::Lck::LckService::*)()>(&::Liv::Lck::LckService::GetRecordingDuration)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x9cf5fb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"GetRecordingDuration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckService.GetStreamDuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult_1<::System::TimeSpan>* (::Liv::Lck::LckService::*)()>(&::Liv::Lck::LckService::GetStreamDuration)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x9cf605c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"GetStreamDuration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckService.SetTrackResolution
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult* (::Liv::Lck::LckService::*)(::Liv::Lck::CameraResolutionDescriptor)>(&::Liv::Lck::LckService::SetTrackResolution)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x9cf6100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"SetTrackResolution", {}, {::i2c::type_of<::Liv::Lck::CameraResolutionDescriptor>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckService.SetCameraOrientation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult* (::Liv::Lck::LckService::*)(::Liv::Lck::LckCameraOrientation)>(&::Liv::Lck::LckService::SetCameraOrientation)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x9cf6320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"SetCameraOrientation", {}, {::i2c::type_of<::Liv::Lck::LckCameraOrientation>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckService.SetTrackFramerate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult* (::Liv::Lck::LckService::*)(uint32_t)>(&::Liv::Lck::LckService::SetTrackFramerate)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x9cf6438;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"SetTrackFramerate", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckService.SetPreviewActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult* (::Liv::Lck::LckService::*)(bool)>(&::Liv::Lck::LckService::SetPreviewActive)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x9cf6550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"SetPreviewActive", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckService.SetTrackDescriptor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult* (::Liv::Lck::LckService::*)(::Liv::Lck::CameraTrackDescriptor)>(&::Liv::Lck::LckService::SetTrackDescriptor)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x9cf6630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"SetTrackDescriptor", {}, {::i2c::type_of<::Liv::Lck::CameraTrackDescriptor>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckService.SetTrackDescriptor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult* (::Liv::Lck::LckService::*)(::Liv::Lck::LckCaptureType, ::Liv::Lck::CameraTrackDescriptor)>(&::Liv::Lck::LckService::SetTrackDescriptor)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x9cf677c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"SetTrackDescriptor", {}, {::i2c::type_of<::Liv::Lck::LckCaptureType>(), ::i2c::type_of<::Liv::Lck::CameraTrackDescriptor>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckService.SetTrackBitrate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult* (::Liv::Lck::LckService::*)(uint32_t)>(&::Liv::Lck::LckService::SetTrackBitrate)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x9cf68dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"SetTrackBitrate", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckService.SetTrackAudioBitrate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult* (::Liv::Lck::LckService::*)(uint32_t)>(&::Liv::Lck::LckService::SetTrackAudioBitrate)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x9cf69f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"SetTrackAudioBitrate", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckService.IsRecording
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult_1<bool>* (::Liv::Lck::LckService::*)()>(&::Liv::Lck::LckService::IsRecording)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x9cf6b0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"IsRecording", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckService.IsStreaming
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult_1<bool>* (::Liv::Lck::LckService::*)()>(&::Liv::Lck::LckService::IsStreaming)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x9cf6bf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"IsStreaming", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckService.IsPaused
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult_1<bool>* (::Liv::Lck::LckService::*)()>(&::Liv::Lck::LckService::IsPaused)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x9cf6d54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"IsPaused", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckService.IsCapturing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult_1<bool>* (::Liv::Lck::LckService::*)()>(&::Liv::Lck::LckService::IsCapturing)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x9cf6218;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"IsCapturing", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckService.SetGameAudioCaptureActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult* (::Liv::Lck::LckService::*)(bool)>(&::Liv::Lck::LckService::SetGameAudioCaptureActive)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x9cf6e40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"SetGameAudioCaptureActive", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckService.SetMicrophoneCaptureActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult* (::Liv::Lck::LckService::*)(bool)>(&::Liv::Lck::LckService::SetMicrophoneCaptureActive)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x9cf6f20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"SetMicrophoneCaptureActive", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckService.GetMicrophoneOutputLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult_1<float_t>* (::Liv::Lck::LckService::*)()>(&::Liv::Lck::LckService::GetMicrophoneOutputLevel)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x9cf6ffc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"GetMicrophoneOutputLevel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckService.SetMicrophoneGain
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult* (::Liv::Lck::LckService::*)(float_t)>(&::Liv::Lck::LckService::SetMicrophoneGain)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x9cf7104;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"SetMicrophoneGain", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckService.SetGameAudioGain
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult* (::Liv::Lck::LckService::*)(float_t)>(&::Liv::Lck::LckService::SetGameAudioGain)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x9cf71f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"SetGameAudioGain", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckService.GetGameOutputLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult_1<float_t>* (::Liv::Lck::LckService::*)()>(&::Liv::Lck::LckService::GetGameOutputLevel)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x9cf72dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"GetGameOutputLevel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckService.IsGameAudioMute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult_1<bool>* (::Liv::Lck::LckService::*)()>(&::Liv::Lck::LckService::IsGameAudioMute)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x9cf73e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"IsGameAudioMute", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckService.SetActiveCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult* (::Liv::Lck::LckService::*)(::StringW, ::StringW)>(&::Liv::Lck::LckService::SetActiveCamera)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x9cf74d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"SetActiveCamera", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckService.GetActiveCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult_1<::Liv::Lck::ILckCamera*>* (::Liv::Lck::LckService::*)()>(&::Liv::Lck::LckService::GetActiveCamera)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x9cf75c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"GetActiveCamera", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckService.PreloadDiscreetAudio
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult* (::Liv::Lck::LckService::*)(::UnityEngine::AudioClip*, float_t, bool)>(&::Liv::Lck::LckService::PreloadDiscreetAudio)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x9cf76a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"PreloadDiscreetAudio", {}, {::i2c::type_of<::UnityEngine::AudioClip*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckService.PlayDiscreetAudioClip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult* (::Liv::Lck::LckService::*)(::UnityEngine::AudioClip*)>(&::Liv::Lck::LckService::PlayDiscreetAudioClip)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x9cf77a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"PlayDiscreetAudioClip", {}, {::i2c::type_of<::UnityEngine::AudioClip*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckService.StopAllDiscreetAudio
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult* (::Liv::Lck::LckService::*)()>(&::Liv::Lck::LckService::StopAllDiscreetAudio)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x9cf7888;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"StopAllDiscreetAudio", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckService.SetEchoEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult* (::Liv::Lck::LckService::*)(bool)>(&::Liv::Lck::LckService::SetEchoEnabled)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0x9cf795c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"SetEchoEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckService.SetEchoEnabledAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Liv::Lck::LckResult*>* (::Liv::Lck::LckService::*)(bool)>(&::Liv::Lck::LckService::SetEchoEnabledAsync)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x9cf7b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"SetEchoEnabledAsync", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckService.IsEchoEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult_1<bool>* (::Liv::Lck::LckService::*)()>(&::Liv::Lck::LckService::IsEchoEnabled)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x9cf7c38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"IsEchoEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckService.TriggerEchoSave
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult* (::Liv::Lck::LckService::*)()>(&::Liv::Lck::LckService::TriggerEchoSave)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x9cf7d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"TriggerEchoSave", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckService.GetEchoBufferDuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult_1<::System::TimeSpan>* (::Liv::Lck::LckService::*)()>(&::Liv::Lck::LckService::GetEchoBufferDuration)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x9cf7e14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"GetEchoBufferDuration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckService.GetEchoMaxBufferDuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult_1<::System::TimeSpan>* (::Liv::Lck::LckService::*)()>(&::Liv::Lck::LckService::GetEchoMaxBufferDuration)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x9cf7f1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"GetEchoMaxBufferDuration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckService.GetDescriptor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult_1<::Liv::Lck::LckDescriptor*>* (::Liv::Lck::LckService::*)()>(&::Liv::Lck::LckService::GetDescriptor)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x9cf8024;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"GetDescriptor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckService.CapturePhoto
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult* (::Liv::Lck::LckService::*)()>(&::Liv::Lck::LckService::CapturePhoto)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x9cf82f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"CapturePhoto", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckService.GetActiveCaptureType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult_1<::Liv::Lck::LckCaptureType>* (::Liv::Lck::LckService::*)()>(&::Liv::Lck::LckService::GetActiveCaptureType)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x9cf8204;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"GetActiveCaptureType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckService.SetActiveCaptureType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult* (::Liv::Lck::LckService::*)(::Liv::Lck::LckCaptureType)>(&::Liv::Lck::LckService::SetActiveCaptureType)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x9cf83d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"SetActiveCaptureType", {}, {::i2c::type_of<::Liv::Lck::LckCaptureType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckService.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckService::*)()>(&::Liv::Lck::LckService::Dispose)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x9cf84b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckService.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckService::*)(bool)>(&::Liv::Lck::LckService::Dispose)> {
  constexpr static std::size_t size = 0x770;
  constexpr static std::size_t addrs = 0x9cf8524;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::LckService*>(),
                    {::i2c::class_of<::Liv::Lck::LckService*>(), 73}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckService.Finalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckService::*)()>(&::Liv::Lck::LckService::Finalize)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x9cf8c94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::LckService*>(),
                    {::i2c::class_of<::Liv::Lck::LckService*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckService.StopRecording
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult* (::Liv::Lck::LckService::*)(::GlobalNamespace::LckService_StopReason)>(&::Liv::Lck::LckService::StopRecording)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x9cf5c7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"StopRecording", {}, {::i2c::type_of<::GlobalNamespace::LckService_StopReason>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckService.VerifyGraphicsApi
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Liv::Lck::LckService::VerifyGraphicsApi)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x9cf57b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"VerifyGraphicsApi", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckService.VerifyPlatform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Liv::Lck::LckService::VerifyPlatform)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x9cf8d28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"VerifyPlatform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckService.__ctor_b__58_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckService::*)(::Liv::Lck::LckResult*)>(&::Liv::Lck::LckService::__ctor_b__58_0)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x9cf8ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"<.ctor>b__58_0", {}, {::i2c::type_of<::Liv::Lck::LckResult*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckService.__ctor_b__58_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckService::*)(::Liv::Lck::LckResult*)>(&::Liv::Lck::LckService::__ctor_b__58_1)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9cf8fac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"<.ctor>b__58_1", {}, {::i2c::type_of<::Liv::Lck::LckResult*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckService.__ctor_b__58_2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckService::*)(::Liv::Lck::LckResult*)>(&::Liv::Lck::LckService::__ctor_b__58_2)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9cf8fc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"<.ctor>b__58_2", {}, {::i2c::type_of<::Liv::Lck::LckResult*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckService.__ctor_b__58_3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckService::*)(::Liv::Lck::LckResult*)>(&::Liv::Lck::LckService::__ctor_b__58_3)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9cf8fe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"<.ctor>b__58_3", {}, {::i2c::type_of<::Liv::Lck::LckResult*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckService.__ctor_b__58_4
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckService::*)(::Liv::Lck::LckResult*)>(&::Liv::Lck::LckService::__ctor_b__58_4)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x9cf9000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"<.ctor>b__58_4", {}, {::i2c::type_of<::Liv::Lck::LckResult*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckService.__ctor_b__58_5
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckService::*)(::Liv::Lck::LckResult*)>(&::Liv::Lck::LckService::__ctor_b__58_5)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9cf910c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"<.ctor>b__58_5", {}, {::i2c::type_of<::Liv::Lck::LckResult*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckService.__ctor_b__58_6
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckService::*)(::Liv::Lck::LckResult*)>(&::Liv::Lck::LckService::__ctor_b__58_6)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9cf9128;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"<.ctor>b__58_6", {}, {::i2c::type_of<::Liv::Lck::LckResult*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckService.__ctor_b__58_7
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckService::*)(::Liv::Lck::LckResult*)>(&::Liv::Lck::LckService::__ctor_b__58_7)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9cf9144;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"<.ctor>b__58_7", {}, {::i2c::type_of<::Liv::Lck::LckResult*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckService.__ctor_b__58_9
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckService::*)(::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*)>(&::Liv::Lck::LckService::__ctor_b__58_9)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9cf9160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"<.ctor>b__58_9", {}, {::i2c::type_of<::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckService.__ctor_b__58_11
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckService::*)(::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*)>(&::Liv::Lck::LckService::__ctor_b__58_11)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9cf917c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"<.ctor>b__58_11", {}, {::i2c::type_of<::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckService.__ctor_b__58_12
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckService::*)(::Liv::Lck::LckResult*)>(&::Liv::Lck::LckService::__ctor_b__58_12)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9cf9198;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"<.ctor>b__58_12", {}, {::i2c::type_of<::Liv::Lck::LckResult*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckService.__ctor_b__58_13
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckService::*)(::GlobalNamespace::LckEvents_EchoDisabledEvent)>(&::Liv::Lck::LckService::__ctor_b__58_13)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9cf91b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"<.ctor>b__58_13", {}, {::i2c::type_of<::GlobalNamespace::LckEvents_EchoDisabledEvent>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckService.__ctor_b__58_15
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckService::*)(::Liv::Lck::LckResult_1<::Liv::Lck::ILckCamera*>*)>(&::Liv::Lck::LckService::__ctor_b__58_15)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x9cf91d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"<.ctor>b__58_15", {}, {::i2c::type_of<::Liv::Lck::LckResult_1<::Liv::Lck::ILckCamera*>*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Liv::Lck::ILckOutputConfigurer*& Liv::Lck::LckService::__cordl_internal_get__outputConfigurer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____outputConfigurer;
}
constexpr ::Liv::Lck::ILckOutputConfigurer* const& Liv::Lck::LckService::__cordl_internal_get__outputConfigurer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____outputConfigurer;
}
constexpr void Liv::Lck::LckService::__cordl_internal_set__outputConfigurer(::Liv::Lck::ILckOutputConfigurer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____outputConfigurer = value;
}
constexpr ::Liv::Lck::ILckEncodeLooper*& Liv::Lck::LckService::__cordl_internal_get__encodeLooper()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____encodeLooper;
}
constexpr ::Liv::Lck::ILckEncodeLooper* const& Liv::Lck::LckService::__cordl_internal_get__encodeLooper() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____encodeLooper;
}
constexpr void Liv::Lck::LckService::__cordl_internal_set__encodeLooper(::Liv::Lck::ILckEncodeLooper*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____encodeLooper = value;
}
constexpr ::Liv::NativeAudioBridge::INativeAudioPlayer*& Liv::Lck::LckService::__cordl_internal_get__nativeAudioPlayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nativeAudioPlayer;
}
constexpr ::Liv::NativeAudioBridge::INativeAudioPlayer* const& Liv::Lck::LckService::__cordl_internal_get__nativeAudioPlayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nativeAudioPlayer;
}
constexpr void Liv::Lck::LckService::__cordl_internal_set__nativeAudioPlayer(::Liv::NativeAudioBridge::INativeAudioPlayer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____nativeAudioPlayer = value;
}
constexpr ::Liv::Lck::Encoding::ILckEncoder*& Liv::Lck::LckService::__cordl_internal_get__encoder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____encoder;
}
constexpr ::Liv::Lck::Encoding::ILckEncoder* const& Liv::Lck::LckService::__cordl_internal_get__encoder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____encoder;
}
constexpr void Liv::Lck::LckService::__cordl_internal_set__encoder(::Liv::Lck::Encoding::ILckEncoder*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____encoder = value;
}
constexpr ::Liv::Lck::Echo::ILckEcho*& Liv::Lck::LckService::__cordl_internal_get__echo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____echo;
}
constexpr ::Liv::Lck::Echo::ILckEcho* const& Liv::Lck::LckService::__cordl_internal_get__echo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____echo;
}
constexpr void Liv::Lck::LckService::__cordl_internal_set__echo(::Liv::Lck::Echo::ILckEcho*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____echo = value;
}
constexpr bool& Liv::Lck::LckService::__cordl_internal_get__disposed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disposed;
}
constexpr bool const& Liv::Lck::LckService::__cordl_internal_get__disposed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disposed;
}
constexpr void Liv::Lck::LckService::__cordl_internal_set__disposed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____disposed = value;
}
constexpr ::Liv::Lck::Recorder::ILckRecorder*& Liv::Lck::LckService::__cordl_internal_get__recorder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____recorder;
}
constexpr ::Liv::Lck::Recorder::ILckRecorder* const& Liv::Lck::LckService::__cordl_internal_get__recorder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____recorder;
}
constexpr void Liv::Lck::LckService::__cordl_internal_set__recorder(::Liv::Lck::Recorder::ILckRecorder*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____recorder = value;
}
constexpr ::Liv::Lck::Streaming::ILckStreamer*& Liv::Lck::LckService::__cordl_internal_get__streamer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____streamer;
}
constexpr ::Liv::Lck::Streaming::ILckStreamer* const& Liv::Lck::LckService::__cordl_internal_get__streamer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____streamer;
}
constexpr void Liv::Lck::LckService::__cordl_internal_set__streamer(::Liv::Lck::Streaming::ILckStreamer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____streamer = value;
}
constexpr ::Liv::Lck::ILckPhotoCapture*& Liv::Lck::LckService::__cordl_internal_get__photoCapture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____photoCapture;
}
constexpr ::Liv::Lck::ILckPhotoCapture* const& Liv::Lck::LckService::__cordl_internal_get__photoCapture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____photoCapture;
}
constexpr void Liv::Lck::LckService::__cordl_internal_set__photoCapture(::Liv::Lck::ILckPhotoCapture*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____photoCapture = value;
}
constexpr ::Liv::Lck::ILckStorageWatcher*& Liv::Lck::LckService::__cordl_internal_get__storageWatcher()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____storageWatcher;
}
constexpr ::Liv::Lck::ILckStorageWatcher* const& Liv::Lck::LckService::__cordl_internal_get__storageWatcher() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____storageWatcher;
}
constexpr void Liv::Lck::LckService::__cordl_internal_set__storageWatcher(::Liv::Lck::ILckStorageWatcher*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____storageWatcher = value;
}
constexpr ::Liv::Lck::ILckVideoMixer*& Liv::Lck::LckService::__cordl_internal_get__videoMixer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____videoMixer;
}
constexpr ::Liv::Lck::ILckVideoMixer* const& Liv::Lck::LckService::__cordl_internal_get__videoMixer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____videoMixer;
}
constexpr void Liv::Lck::LckService::__cordl_internal_set__videoMixer(::Liv::Lck::ILckVideoMixer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____videoMixer = value;
}
constexpr ::Liv::Lck::ILckAudioMixer*& Liv::Lck::LckService::__cordl_internal_get__audioMixer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioMixer;
}
constexpr ::Liv::Lck::ILckAudioMixer* const& Liv::Lck::LckService::__cordl_internal_get__audioMixer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioMixer;
}
constexpr void Liv::Lck::LckService::__cordl_internal_set__audioMixer(::Liv::Lck::ILckAudioMixer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____audioMixer = value;
}
constexpr ::Liv::Lck::ILckPreviewer*& Liv::Lck::LckService::__cordl_internal_get__previewer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____previewer;
}
constexpr ::Liv::Lck::ILckPreviewer* const& Liv::Lck::LckService::__cordl_internal_get__previewer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____previewer;
}
constexpr void Liv::Lck::LckService::__cordl_internal_set__previewer(::Liv::Lck::ILckPreviewer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____previewer = value;
}
constexpr ::Liv::Lck::ILckEventBus*& Liv::Lck::LckService::__cordl_internal_get__eventBus()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____eventBus;
}
constexpr ::Liv::Lck::ILckEventBus* const& Liv::Lck::LckService::__cordl_internal_get__eventBus() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____eventBus;
}
constexpr void Liv::Lck::LckService::__cordl_internal_set__eventBus(::Liv::Lck::ILckEventBus*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____eventBus = value;
}
constexpr ::Liv::Lck::ILckVideoCapturer*& Liv::Lck::LckService::__cordl_internal_get__videoCapturer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____videoCapturer;
}
constexpr ::Liv::Lck::ILckVideoCapturer* const& Liv::Lck::LckService::__cordl_internal_get__videoCapturer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____videoCapturer;
}
constexpr void Liv::Lck::LckService::__cordl_internal_set__videoCapturer(::Liv::Lck::ILckVideoCapturer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____videoCapturer = value;
}
constexpr ::Liv::Lck::Telemetry::ILckTelemetryClient*& Liv::Lck::LckService::__cordl_internal_get__telemetryClient()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____telemetryClient;
}
constexpr ::Liv::Lck::Telemetry::ILckTelemetryClient* const& Liv::Lck::LckService::__cordl_internal_get__telemetryClient() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____telemetryClient;
}
constexpr void Liv::Lck::LckService::__cordl_internal_set__telemetryClient(::Liv::Lck::Telemetry::ILckTelemetryClient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____telemetryClient = value;
}
constexpr ::Liv::Lck::LckPublicApiEventBridge*& Liv::Lck::LckService::__cordl_internal_get__eventBridge()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____eventBridge;
}
constexpr ::Liv::Lck::LckPublicApiEventBridge* const& Liv::Lck::LckService::__cordl_internal_get__eventBridge() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____eventBridge;
}
constexpr void Liv::Lck::LckService::__cordl_internal_set__eventBridge(::Liv::Lck::LckPublicApiEventBridge*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____eventBridge = value;
}
constexpr ::Liv::Lck::LckEventErrorLogger*& Liv::Lck::LckService::__cordl_internal_get__eventErrorLogger()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____eventErrorLogger;
}
constexpr ::Liv::Lck::LckEventErrorLogger* const& Liv::Lck::LckService::__cordl_internal_get__eventErrorLogger() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____eventErrorLogger;
}
constexpr void Liv::Lck::LckService::__cordl_internal_set__eventErrorLogger(::Liv::Lck::LckEventErrorLogger*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____eventErrorLogger = value;
}
constexpr ::System::Action_1<::Liv::Lck::LckResult*>*& Liv::Lck::LckService::__cordl_internal_get_OnRecordingStarted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnRecordingStarted;
}
constexpr ::System::Action_1<::Liv::Lck::LckResult*>* const& Liv::Lck::LckService::__cordl_internal_get_OnRecordingStarted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnRecordingStarted;
}
constexpr void Liv::Lck::LckService::__cordl_internal_set_OnRecordingStarted(::System::Action_1<::Liv::Lck::LckResult*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnRecordingStarted = value;
}
constexpr ::System::Action_1<::Liv::Lck::LckResult*>*& Liv::Lck::LckService::__cordl_internal_get_OnRecordingStopped()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnRecordingStopped;
}
constexpr ::System::Action_1<::Liv::Lck::LckResult*>* const& Liv::Lck::LckService::__cordl_internal_get_OnRecordingStopped() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnRecordingStopped;
}
constexpr void Liv::Lck::LckService::__cordl_internal_set_OnRecordingStopped(::System::Action_1<::Liv::Lck::LckResult*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnRecordingStopped = value;
}
constexpr ::System::Action_1<::Liv::Lck::LckResult*>*& Liv::Lck::LckService::__cordl_internal_get_OnRecordingPaused()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnRecordingPaused;
}
constexpr ::System::Action_1<::Liv::Lck::LckResult*>* const& Liv::Lck::LckService::__cordl_internal_get_OnRecordingPaused() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnRecordingPaused;
}
constexpr void Liv::Lck::LckService::__cordl_internal_set_OnRecordingPaused(::System::Action_1<::Liv::Lck::LckResult*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnRecordingPaused = value;
}
constexpr ::System::Action_1<::Liv::Lck::LckResult*>*& Liv::Lck::LckService::__cordl_internal_get_OnRecordingResumed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnRecordingResumed;
}
constexpr ::System::Action_1<::Liv::Lck::LckResult*>* const& Liv::Lck::LckService::__cordl_internal_get_OnRecordingResumed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnRecordingResumed;
}
constexpr void Liv::Lck::LckService::__cordl_internal_set_OnRecordingResumed(::System::Action_1<::Liv::Lck::LckResult*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnRecordingResumed = value;
}
constexpr ::System::Action_1<::Liv::Lck::LckResult*>*& Liv::Lck::LckService::__cordl_internal_get_OnStreamingStarted()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnStreamingStarted;
}
constexpr ::System::Action_1<::Liv::Lck::LckResult*>* const& Liv::Lck::LckService::__cordl_internal_get_OnStreamingStarted() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnStreamingStarted;
}
constexpr void Liv::Lck::LckService::__cordl_internal_set_OnStreamingStarted(::System::Action_1<::Liv::Lck::LckResult*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnStreamingStarted = value;
}
constexpr ::System::Action_1<::Liv::Lck::LckResult*>*& Liv::Lck::LckService::__cordl_internal_get_OnStreamingStopped()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnStreamingStopped;
}
constexpr ::System::Action_1<::Liv::Lck::LckResult*>* const& Liv::Lck::LckService::__cordl_internal_get_OnStreamingStopped() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnStreamingStopped;
}
constexpr void Liv::Lck::LckService::__cordl_internal_set_OnStreamingStopped(::System::Action_1<::Liv::Lck::LckResult*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnStreamingStopped = value;
}
constexpr ::System::Action_1<::Liv::Lck::LckResult*>*& Liv::Lck::LckService::__cordl_internal_get_OnLowStorageSpace()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnLowStorageSpace;
}
constexpr ::System::Action_1<::Liv::Lck::LckResult*>* const& Liv::Lck::LckService::__cordl_internal_get_OnLowStorageSpace() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnLowStorageSpace;
}
constexpr void Liv::Lck::LckService::__cordl_internal_set_OnLowStorageSpace(::System::Action_1<::Liv::Lck::LckResult*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnLowStorageSpace = value;
}
constexpr ::System::Action_1<::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*>*& Liv::Lck::LckService::__cordl_internal_get_OnRecordingSaved()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnRecordingSaved;
}
constexpr ::System::Action_1<::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*>* const& Liv::Lck::LckService::__cordl_internal_get_OnRecordingSaved() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnRecordingSaved;
}
constexpr void Liv::Lck::LckService::__cordl_internal_set_OnRecordingSaved(::System::Action_1<::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnRecordingSaved = value;
}
constexpr ::System::Action_1<::Liv::Lck::LckResult*>*& Liv::Lck::LckService::__cordl_internal_get_OnPhotoSaved()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnPhotoSaved;
}
constexpr ::System::Action_1<::Liv::Lck::LckResult*>* const& Liv::Lck::LckService::__cordl_internal_get_OnPhotoSaved() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnPhotoSaved;
}
constexpr void Liv::Lck::LckService::__cordl_internal_set_OnPhotoSaved(::System::Action_1<::Liv::Lck::LckResult*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnPhotoSaved = value;
}
constexpr ::System::Action_1<::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*>*& Liv::Lck::LckService::__cordl_internal_get_OnEchoSaved()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnEchoSaved;
}
constexpr ::System::Action_1<::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*>* const& Liv::Lck::LckService::__cordl_internal_get_OnEchoSaved() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnEchoSaved;
}
constexpr void Liv::Lck::LckService::__cordl_internal_set_OnEchoSaved(::System::Action_1<::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnEchoSaved = value;
}
constexpr ::System::Action_1<::Liv::Lck::LckResult*>*& Liv::Lck::LckService::__cordl_internal_get_OnEchoEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnEchoEnabled;
}
constexpr ::System::Action_1<::Liv::Lck::LckResult*>* const& Liv::Lck::LckService::__cordl_internal_get_OnEchoEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnEchoEnabled;
}
constexpr void Liv::Lck::LckService::__cordl_internal_set_OnEchoEnabled(::System::Action_1<::Liv::Lck::LckResult*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnEchoEnabled = value;
}
constexpr ::System::Action_2<::Liv::Lck::LckResult*,::Liv::Lck::EchoDisableReason>*& Liv::Lck::LckService::__cordl_internal_get_OnEchoDisabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnEchoDisabled;
}
constexpr ::System::Action_2<::Liv::Lck::LckResult*,::Liv::Lck::EchoDisableReason>* const& Liv::Lck::LckService::__cordl_internal_get_OnEchoDisabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnEchoDisabled;
}
constexpr void Liv::Lck::LckService::__cordl_internal_set_OnEchoDisabled(::System::Action_2<::Liv::Lck::LckResult*,::Liv::Lck::EchoDisableReason>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnEchoDisabled = value;
}
constexpr ::System::Action_1<::Liv::Lck::LckResult_1<::Liv::Lck::ILckCamera*>*>*& Liv::Lck::LckService::__cordl_internal_get_OnActiveCameraSet()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnActiveCameraSet;
}
constexpr ::System::Action_1<::Liv::Lck::LckResult_1<::Liv::Lck::ILckCamera*>*>* const& Liv::Lck::LckService::__cordl_internal_get_OnActiveCameraSet() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___OnActiveCameraSet;
}
constexpr void Liv::Lck::LckService::__cordl_internal_set_OnActiveCameraSet(::System::Action_1<::Liv::Lck::LckResult_1<::Liv::Lck::ILckCamera*>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___OnActiveCameraSet = value;
}
inline void Liv::Lck::LckService::add_OnRecordingStarted(::System::Action_1<::Liv::Lck::LckResult*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"add_OnRecordingStarted", {}, {::i2c::type_of<::System::Action_1<::Liv::Lck::LckResult*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Liv::Lck::LckService::remove_OnRecordingStarted(::System::Action_1<::Liv::Lck::LckResult*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"remove_OnRecordingStarted", {}, {::i2c::type_of<::System::Action_1<::Liv::Lck::LckResult*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Liv::Lck::LckService::add_OnRecordingStopped(::System::Action_1<::Liv::Lck::LckResult*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"add_OnRecordingStopped", {}, {::i2c::type_of<::System::Action_1<::Liv::Lck::LckResult*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Liv::Lck::LckService::remove_OnRecordingStopped(::System::Action_1<::Liv::Lck::LckResult*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"remove_OnRecordingStopped", {}, {::i2c::type_of<::System::Action_1<::Liv::Lck::LckResult*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Liv::Lck::LckService::add_OnRecordingPaused(::System::Action_1<::Liv::Lck::LckResult*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"add_OnRecordingPaused", {}, {::i2c::type_of<::System::Action_1<::Liv::Lck::LckResult*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Liv::Lck::LckService::remove_OnRecordingPaused(::System::Action_1<::Liv::Lck::LckResult*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"remove_OnRecordingPaused", {}, {::i2c::type_of<::System::Action_1<::Liv::Lck::LckResult*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Liv::Lck::LckService::add_OnRecordingResumed(::System::Action_1<::Liv::Lck::LckResult*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"add_OnRecordingResumed", {}, {::i2c::type_of<::System::Action_1<::Liv::Lck::LckResult*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Liv::Lck::LckService::remove_OnRecordingResumed(::System::Action_1<::Liv::Lck::LckResult*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"remove_OnRecordingResumed", {}, {::i2c::type_of<::System::Action_1<::Liv::Lck::LckResult*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Liv::Lck::LckService::add_OnStreamingStarted(::System::Action_1<::Liv::Lck::LckResult*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"add_OnStreamingStarted", {}, {::i2c::type_of<::System::Action_1<::Liv::Lck::LckResult*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Liv::Lck::LckService::remove_OnStreamingStarted(::System::Action_1<::Liv::Lck::LckResult*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"remove_OnStreamingStarted", {}, {::i2c::type_of<::System::Action_1<::Liv::Lck::LckResult*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Liv::Lck::LckService::add_OnStreamingStopped(::System::Action_1<::Liv::Lck::LckResult*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"add_OnStreamingStopped", {}, {::i2c::type_of<::System::Action_1<::Liv::Lck::LckResult*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Liv::Lck::LckService::remove_OnStreamingStopped(::System::Action_1<::Liv::Lck::LckResult*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"remove_OnStreamingStopped", {}, {::i2c::type_of<::System::Action_1<::Liv::Lck::LckResult*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Liv::Lck::LckService::add_OnLowStorageSpace(::System::Action_1<::Liv::Lck::LckResult*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"add_OnLowStorageSpace", {}, {::i2c::type_of<::System::Action_1<::Liv::Lck::LckResult*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Liv::Lck::LckService::remove_OnLowStorageSpace(::System::Action_1<::Liv::Lck::LckResult*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"remove_OnLowStorageSpace", {}, {::i2c::type_of<::System::Action_1<::Liv::Lck::LckResult*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Liv::Lck::LckService::add_OnRecordingSaved(::System::Action_1<::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"add_OnRecordingSaved", {}, {::i2c::type_of<::System::Action_1<::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Liv::Lck::LckService::remove_OnRecordingSaved(::System::Action_1<::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"remove_OnRecordingSaved", {}, {::i2c::type_of<::System::Action_1<::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Liv::Lck::LckService::add_OnPhotoSaved(::System::Action_1<::Liv::Lck::LckResult*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"add_OnPhotoSaved", {}, {::i2c::type_of<::System::Action_1<::Liv::Lck::LckResult*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Liv::Lck::LckService::remove_OnPhotoSaved(::System::Action_1<::Liv::Lck::LckResult*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"remove_OnPhotoSaved", {}, {::i2c::type_of<::System::Action_1<::Liv::Lck::LckResult*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Liv::Lck::LckService::add_OnEchoSaved(::System::Action_1<::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"add_OnEchoSaved", {}, {::i2c::type_of<::System::Action_1<::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Liv::Lck::LckService::remove_OnEchoSaved(::System::Action_1<::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"remove_OnEchoSaved", {}, {::i2c::type_of<::System::Action_1<::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Liv::Lck::LckService::add_OnEchoEnabled(::System::Action_1<::Liv::Lck::LckResult*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"add_OnEchoEnabled", {}, {::i2c::type_of<::System::Action_1<::Liv::Lck::LckResult*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Liv::Lck::LckService::remove_OnEchoEnabled(::System::Action_1<::Liv::Lck::LckResult*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"remove_OnEchoEnabled", {}, {::i2c::type_of<::System::Action_1<::Liv::Lck::LckResult*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Liv::Lck::LckService::add_OnEchoDisabled(::System::Action_2<::Liv::Lck::LckResult*,::Liv::Lck::EchoDisableReason>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"add_OnEchoDisabled", {}, {::i2c::type_of<::System::Action_2<::Liv::Lck::LckResult*,::Liv::Lck::EchoDisableReason>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Liv::Lck::LckService::remove_OnEchoDisabled(::System::Action_2<::Liv::Lck::LckResult*,::Liv::Lck::EchoDisableReason>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"remove_OnEchoDisabled", {}, {::i2c::type_of<::System::Action_2<::Liv::Lck::LckResult*,::Liv::Lck::EchoDisableReason>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Liv::Lck::LckService::add_OnActiveCameraSet(::System::Action_1<::Liv::Lck::LckResult_1<::Liv::Lck::ILckCamera*>*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"add_OnActiveCameraSet", {}, {::i2c::type_of<::System::Action_1<::Liv::Lck::LckResult_1<::Liv::Lck::ILckCamera*>*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Liv::Lck::LckService::remove_OnActiveCameraSet(::System::Action_1<::Liv::Lck::LckResult_1<::Liv::Lck::ILckCamera*>*>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"remove_OnActiveCameraSet", {}, {::i2c::type_of<::System::Action_1<::Liv::Lck::LckResult_1<::Liv::Lck::ILckCamera*>*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Liv::Lck::LckService::_ctor(::Liv::Lck::Encoding::ILckEncoder*  encoder, ::Liv::Lck::Recorder::ILckRecorder*  recorder, ::Liv::Lck::Streaming::ILckStreamer*  streamer, ::Liv::Lck::Echo::ILckEcho*  echo, ::Liv::Lck::ILckEncodeLooper*  encodeLooper, ::Liv::Lck::ILckPhotoCapture*  photoCapture, ::Liv::Lck::ILckStorageWatcher*  storageWatcher, ::Liv::Lck::ILckVideoCapturer*  videoCapturer, ::Liv::Lck::ILckVideoMixer*  videoMixer, ::Liv::Lck::ILckAudioMixer*  audioMixer, ::Liv::Lck::ILckOutputConfigurer*  outputConfigurer, ::Liv::Lck::ILckPreviewer*  previewer, ::Liv::NativeAudioBridge::INativeAudioPlayer*  nativeAudioPlayer, ::Liv::Lck::ILckEventBus*  eventBus, ::Liv::Lck::Telemetry::ILckTelemetryClient*  telemetryClient)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {".ctor", {}, {::i2c::type_of<::Liv::Lck::Encoding::ILckEncoder*>(), ::i2c::type_of<::Liv::Lck::Recorder::ILckRecorder*>(), ::i2c::type_of<::Liv::Lck::Streaming::ILckStreamer*>(), ::i2c::type_of<::Liv::Lck::Echo::ILckEcho*>(), ::i2c::type_of<::Liv::Lck::ILckEncodeLooper*>(), ::i2c::type_of<::Liv::Lck::ILckPhotoCapture*>(), ::i2c::type_of<::Liv::Lck::ILckStorageWatcher*>(), ::i2c::type_of<::Liv::Lck::ILckVideoCapturer*>(), ::i2c::type_of<::Liv::Lck::ILckVideoMixer*>(), ::i2c::type_of<::Liv::Lck::ILckAudioMixer*>(), ::i2c::type_of<::Liv::Lck::ILckOutputConfigurer*>(), ::i2c::type_of<::Liv::Lck::ILckPreviewer*>(), ::i2c::type_of<::Liv::NativeAudioBridge::INativeAudioPlayer*>(), ::i2c::type_of<::Liv::Lck::ILckEventBus*>(), ::i2c::type_of<::Liv::Lck::Telemetry::ILckTelemetryClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, encoder, recorder, streamer, echo, encodeLooper, photoCapture, storageWatcher, videoCapturer, videoMixer, audioMixer, outputConfigurer, previewer, nativeAudioPlayer, eventBus, telemetryClient);
}
inline ::Liv::Lck::LckResult_1<::Liv::Lck::LckService*>* Liv::Lck::LckService::GetService()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"GetService", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult_1<::Liv::Lck::LckService*>*>(nullptr, ___internal_method);
}
inline ::Liv::Lck::LckResult* Liv::Lck::LckService::StartRecording()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"StartRecording", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult*>(this, ___internal_method);
}
inline ::Liv::Lck::LckResult* Liv::Lck::LckService::PauseRecording()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"PauseRecording", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult*>(this, ___internal_method);
}
inline ::Liv::Lck::LckResult* Liv::Lck::LckService::ResumeRecording()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"ResumeRecording", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult*>(this, ___internal_method);
}
inline ::Liv::Lck::LckResult* Liv::Lck::LckService::StopRecording()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"StopRecording", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult*>(this, ___internal_method);
}
inline ::Liv::Lck::LckResult* Liv::Lck::LckService::StartStreaming()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"StartStreaming", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult*>(this, ___internal_method);
}
inline ::Liv::Lck::LckResult* Liv::Lck::LckService::StopStreaming()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"StopStreaming", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult*>(this, ___internal_method);
}
inline ::Liv::Lck::LckResult* Liv::Lck::LckService::StopStreaming(::GlobalNamespace::LckService_StopReason  stopReason)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"StopStreaming", {}, {::i2c::type_of<::GlobalNamespace::LckService_StopReason>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult*>(this, ___internal_method, stopReason);
}
inline ::Liv::Lck::LckResult_1<::System::TimeSpan>* Liv::Lck::LckService::GetRecordingDuration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"GetRecordingDuration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult_1<::System::TimeSpan>*>(this, ___internal_method);
}
inline ::Liv::Lck::LckResult_1<::System::TimeSpan>* Liv::Lck::LckService::GetStreamDuration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"GetStreamDuration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult_1<::System::TimeSpan>*>(this, ___internal_method);
}
inline ::Liv::Lck::LckResult* Liv::Lck::LckService::SetTrackResolution(::Liv::Lck::CameraResolutionDescriptor  cameraResolutionDescriptor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"SetTrackResolution", {}, {::i2c::type_of<::Liv::Lck::CameraResolutionDescriptor>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult*>(this, ___internal_method, cameraResolutionDescriptor);
}
inline ::Liv::Lck::LckResult* Liv::Lck::LckService::SetCameraOrientation(::Liv::Lck::LckCameraOrientation  orientation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"SetCameraOrientation", {}, {::i2c::type_of<::Liv::Lck::LckCameraOrientation>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult*>(this, ___internal_method, orientation);
}
inline ::Liv::Lck::LckResult* Liv::Lck::LckService::SetTrackFramerate(uint32_t  framerate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"SetTrackFramerate", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult*>(this, ___internal_method, framerate);
}
inline ::Liv::Lck::LckResult* Liv::Lck::LckService::SetPreviewActive(bool  isActive)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"SetPreviewActive", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult*>(this, ___internal_method, isActive);
}
inline ::Liv::Lck::LckResult* Liv::Lck::LckService::SetTrackDescriptor(::Liv::Lck::CameraTrackDescriptor  cameraTrackDescriptor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"SetTrackDescriptor", {}, {::i2c::type_of<::Liv::Lck::CameraTrackDescriptor>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult*>(this, ___internal_method, cameraTrackDescriptor);
}
inline ::Liv::Lck::LckResult* Liv::Lck::LckService::SetTrackDescriptor(::Liv::Lck::LckCaptureType  captureType, ::Liv::Lck::CameraTrackDescriptor  cameraTrackDescriptor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"SetTrackDescriptor", {}, {::i2c::type_of<::Liv::Lck::LckCaptureType>(), ::i2c::type_of<::Liv::Lck::CameraTrackDescriptor>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult*>(this, ___internal_method, captureType, cameraTrackDescriptor);
}
inline ::Liv::Lck::LckResult* Liv::Lck::LckService::SetTrackBitrate(uint32_t  bitrate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"SetTrackBitrate", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult*>(this, ___internal_method, bitrate);
}
inline ::Liv::Lck::LckResult* Liv::Lck::LckService::SetTrackAudioBitrate(uint32_t  audioBitrate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"SetTrackAudioBitrate", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult*>(this, ___internal_method, audioBitrate);
}
inline ::Liv::Lck::LckResult_1<bool>* Liv::Lck::LckService::IsRecording()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"IsRecording", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult_1<bool>*>(this, ___internal_method);
}
inline ::Liv::Lck::LckResult_1<bool>* Liv::Lck::LckService::IsStreaming()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"IsStreaming", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult_1<bool>*>(this, ___internal_method);
}
inline ::Liv::Lck::LckResult_1<bool>* Liv::Lck::LckService::IsPaused()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"IsPaused", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult_1<bool>*>(this, ___internal_method);
}
inline ::Liv::Lck::LckResult_1<bool>* Liv::Lck::LckService::IsCapturing()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"IsCapturing", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult_1<bool>*>(this, ___internal_method);
}
inline ::Liv::Lck::LckResult* Liv::Lck::LckService::SetGameAudioCaptureActive(bool  isActive)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"SetGameAudioCaptureActive", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult*>(this, ___internal_method, isActive);
}
inline ::Liv::Lck::LckResult* Liv::Lck::LckService::SetMicrophoneCaptureActive(bool  isActive)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"SetMicrophoneCaptureActive", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult*>(this, ___internal_method, isActive);
}
inline ::Liv::Lck::LckResult_1<float_t>* Liv::Lck::LckService::GetMicrophoneOutputLevel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"GetMicrophoneOutputLevel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult_1<float_t>*>(this, ___internal_method);
}
inline ::Liv::Lck::LckResult* Liv::Lck::LckService::SetMicrophoneGain(float_t  gain)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"SetMicrophoneGain", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult*>(this, ___internal_method, gain);
}
inline ::Liv::Lck::LckResult* Liv::Lck::LckService::SetGameAudioGain(float_t  gain)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"SetGameAudioGain", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult*>(this, ___internal_method, gain);
}
inline ::Liv::Lck::LckResult_1<float_t>* Liv::Lck::LckService::GetGameOutputLevel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"GetGameOutputLevel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult_1<float_t>*>(this, ___internal_method);
}
inline ::Liv::Lck::LckResult_1<bool>* Liv::Lck::LckService::IsGameAudioMute()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"IsGameAudioMute", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult_1<bool>*>(this, ___internal_method);
}
inline ::Liv::Lck::LckResult* Liv::Lck::LckService::SetActiveCamera(::StringW  cameraId, ::StringW  monitorId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"SetActiveCamera", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult*>(this, ___internal_method, cameraId, monitorId);
}
inline ::Liv::Lck::LckResult_1<::Liv::Lck::ILckCamera*>* Liv::Lck::LckService::GetActiveCamera()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"GetActiveCamera", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult_1<::Liv::Lck::ILckCamera*>*>(this, ___internal_method);
}
inline ::Liv::Lck::LckResult* Liv::Lck::LckService::PreloadDiscreetAudio(::UnityEngine::AudioClip*  audioClip, float_t  volume, bool  forceReload)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"PreloadDiscreetAudio", {}, {::i2c::type_of<::UnityEngine::AudioClip*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult*>(this, ___internal_method, audioClip, volume, forceReload);
}
inline ::Liv::Lck::LckResult* Liv::Lck::LckService::PlayDiscreetAudioClip(::UnityEngine::AudioClip*  audioClip)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"PlayDiscreetAudioClip", {}, {::i2c::type_of<::UnityEngine::AudioClip*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult*>(this, ___internal_method, audioClip);
}
inline ::Liv::Lck::LckResult* Liv::Lck::LckService::StopAllDiscreetAudio()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"StopAllDiscreetAudio", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult*>(this, ___internal_method);
}
inline ::Liv::Lck::LckResult* Liv::Lck::LckService::SetEchoEnabled(bool  enabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"SetEchoEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult*>(this, ___internal_method, enabled);
}
inline ::System::Threading::Tasks::Task_1<::Liv::Lck::LckResult*>* Liv::Lck::LckService::SetEchoEnabledAsync(bool  enabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"SetEchoEnabledAsync", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Liv::Lck::LckResult*>*>(this, ___internal_method, enabled);
}
inline ::Liv::Lck::LckResult_1<bool>* Liv::Lck::LckService::IsEchoEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"IsEchoEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult_1<bool>*>(this, ___internal_method);
}
inline ::Liv::Lck::LckResult* Liv::Lck::LckService::TriggerEchoSave()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"TriggerEchoSave", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult*>(this, ___internal_method);
}
inline ::Liv::Lck::LckResult_1<::System::TimeSpan>* Liv::Lck::LckService::GetEchoBufferDuration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"GetEchoBufferDuration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult_1<::System::TimeSpan>*>(this, ___internal_method);
}
inline ::Liv::Lck::LckResult_1<::System::TimeSpan>* Liv::Lck::LckService::GetEchoMaxBufferDuration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"GetEchoMaxBufferDuration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult_1<::System::TimeSpan>*>(this, ___internal_method);
}
inline ::Liv::Lck::LckResult_1<::Liv::Lck::LckDescriptor*>* Liv::Lck::LckService::GetDescriptor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"GetDescriptor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult_1<::Liv::Lck::LckDescriptor*>*>(this, ___internal_method);
}
inline ::Liv::Lck::LckResult* Liv::Lck::LckService::CapturePhoto()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"CapturePhoto", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult*>(this, ___internal_method);
}
inline ::Liv::Lck::LckResult_1<::Liv::Lck::LckCaptureType>* Liv::Lck::LckService::GetActiveCaptureType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"GetActiveCaptureType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult_1<::Liv::Lck::LckCaptureType>*>(this, ___internal_method);
}
inline ::Liv::Lck::LckResult* Liv::Lck::LckService::SetActiveCaptureType(::Liv::Lck::LckCaptureType  captureType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"SetActiveCaptureType", {}, {::i2c::type_of<::Liv::Lck::LckCaptureType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult*>(this, ___internal_method, captureType);
}
inline void Liv::Lck::LckService::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::LckService::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::LckService*>(), 73}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void Liv::Lck::LckService::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::LckService*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::LckResult* Liv::Lck::LckService::StopRecording(::GlobalNamespace::LckService_StopReason  stopReason)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"StopRecording", {}, {::i2c::type_of<::GlobalNamespace::LckService_StopReason>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult*>(this, ___internal_method, stopReason);
}
inline bool Liv::Lck::LckService::VerifyGraphicsApi()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"VerifyGraphicsApi", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool Liv::Lck::LckService::VerifyPlatform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"VerifyPlatform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void Liv::Lck::LckService::__ctor_b__58_0(::Liv::Lck::LckResult*  r)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"<.ctor>b__58_0", {}, {::i2c::type_of<::Liv::Lck::LckResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, r);
}
inline void Liv::Lck::LckService::__ctor_b__58_1(::Liv::Lck::LckResult*  r)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"<.ctor>b__58_1", {}, {::i2c::type_of<::Liv::Lck::LckResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, r);
}
inline void Liv::Lck::LckService::__ctor_b__58_2(::Liv::Lck::LckResult*  r)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"<.ctor>b__58_2", {}, {::i2c::type_of<::Liv::Lck::LckResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, r);
}
inline void Liv::Lck::LckService::__ctor_b__58_3(::Liv::Lck::LckResult*  r)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"<.ctor>b__58_3", {}, {::i2c::type_of<::Liv::Lck::LckResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, r);
}
inline void Liv::Lck::LckService::__ctor_b__58_4(::Liv::Lck::LckResult*  r)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"<.ctor>b__58_4", {}, {::i2c::type_of<::Liv::Lck::LckResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, r);
}
inline void Liv::Lck::LckService::__ctor_b__58_5(::Liv::Lck::LckResult*  r)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"<.ctor>b__58_5", {}, {::i2c::type_of<::Liv::Lck::LckResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, r);
}
inline void Liv::Lck::LckService::__ctor_b__58_6(::Liv::Lck::LckResult*  r)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"<.ctor>b__58_6", {}, {::i2c::type_of<::Liv::Lck::LckResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, r);
}
inline void Liv::Lck::LckService::__ctor_b__58_7(::Liv::Lck::LckResult*  r)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"<.ctor>b__58_7", {}, {::i2c::type_of<::Liv::Lck::LckResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, r);
}
inline void Liv::Lck::LckService::__ctor_b__58_9(::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*  r)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"<.ctor>b__58_9", {}, {::i2c::type_of<::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, r);
}
inline void Liv::Lck::LckService::__ctor_b__58_11(::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*  r)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"<.ctor>b__58_11", {}, {::i2c::type_of<::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, r);
}
inline void Liv::Lck::LckService::__ctor_b__58_12(::Liv::Lck::LckResult*  r)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"<.ctor>b__58_12", {}, {::i2c::type_of<::Liv::Lck::LckResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, r);
}
inline void Liv::Lck::LckService::__ctor_b__58_13(::GlobalNamespace::LckEvents_EchoDisabledEvent  e)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"<.ctor>b__58_13", {}, {::i2c::type_of<::GlobalNamespace::LckEvents_EchoDisabledEvent>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, e);
}
inline void Liv::Lck::LckService::__ctor_b__58_15(::Liv::Lck::LckResult_1<::Liv::Lck::ILckCamera*>*  r)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService*>(),
                        {"<.ctor>b__58_15", {}, {::i2c::type_of<::Liv::Lck::LckResult_1<::Liv::Lck::ILckCamera*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, r);
}
/// @brief [Preserve]
inline ::Liv::Lck::LckService* Liv::Lck::LckService::New_ctor(::Liv::Lck::Encoding::ILckEncoder*  encoder, ::Liv::Lck::Recorder::ILckRecorder*  recorder, ::Liv::Lck::Streaming::ILckStreamer*  streamer, ::Liv::Lck::Echo::ILckEcho*  echo, ::Liv::Lck::ILckEncodeLooper*  encodeLooper, ::Liv::Lck::ILckPhotoCapture*  photoCapture, ::Liv::Lck::ILckStorageWatcher*  storageWatcher, ::Liv::Lck::ILckVideoCapturer*  videoCapturer, ::Liv::Lck::ILckVideoMixer*  videoMixer, ::Liv::Lck::ILckAudioMixer*  audioMixer, ::Liv::Lck::ILckOutputConfigurer*  outputConfigurer, ::Liv::Lck::ILckPreviewer*  previewer, ::Liv::NativeAudioBridge::INativeAudioPlayer*  nativeAudioPlayer, ::Liv::Lck::ILckEventBus*  eventBus, ::Liv::Lck::Telemetry::ILckTelemetryClient*  telemetryClient)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::LckService*>(encoder, recorder, streamer, echo, encodeLooper, photoCapture, storageWatcher, videoCapturer, videoMixer, audioMixer, outputConfigurer, previewer, nativeAudioPlayer, eventBus, telemetryClient));
}
/// @brief Convert operator to "::Liv::Lck::ILckService"
constexpr  Liv::Lck::LckService::operator ::Liv::Lck::ILckService*() noexcept {
return static_cast<::Liv::Lck::ILckService*>(static_cast<void*>(this));
}
/// @brief Convert to "::Liv::Lck::ILckService"
constexpr ::Liv::Lck::ILckService* Liv::Lck::LckService::i___Liv__Lck__ILckService() noexcept {
return static_cast<::Liv::Lck::ILckService*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Liv::Lck::LckService::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Liv::Lck::LckService::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Liv::Lck::LckService::LckService()   {
}
//  Writing Method size for method: ::Liv::Lck::LckService___c__DisplayClass58_1._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckService___c__DisplayClass58_1::*)()>(&::Liv::Lck::LckService___c__DisplayClass58_1::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d31fe8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService___c__DisplayClass58_1*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckService___c__DisplayClass58_1.__ctor_b__18
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckService___c__DisplayClass58_1::*)()>(&::Liv::Lck::LckService___c__DisplayClass58_1::__ctor_b__18)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x9d31ff0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService___c__DisplayClass58_1*>(),
                        {"<.ctor>b__18", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Liv::Lck::LckResult*& Liv::Lck::LckService___c__DisplayClass58_1::__cordl_internal_get_r()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___r;
}
constexpr ::Liv::Lck::LckResult* const& Liv::Lck::LckService___c__DisplayClass58_1::__cordl_internal_get_r() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___r;
}
constexpr void Liv::Lck::LckService___c__DisplayClass58_1::__cordl_internal_set_r(::Liv::Lck::LckResult*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___r = value;
}
constexpr ::Liv::Lck::LckService*& Liv::Lck::LckService___c__DisplayClass58_1::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::Liv::Lck::LckService* const& Liv::Lck::LckService___c__DisplayClass58_1::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Liv::Lck::LckService___c__DisplayClass58_1::__cordl_internal_set___4__this(::Liv::Lck::LckService*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void Liv::Lck::LckService___c__DisplayClass58_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService___c__DisplayClass58_1*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::LckService___c__DisplayClass58_1::__ctor_b__18()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService___c__DisplayClass58_1*>(),
                        {"<.ctor>b__18", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::LckService___c__DisplayClass58_1* Liv::Lck::LckService___c__DisplayClass58_1::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::LckService___c__DisplayClass58_1*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::LckService___c__DisplayClass58_1::LckService___c__DisplayClass58_1()   {
}
//  Writing Method size for method: ::Liv::Lck::LckService___c__DisplayClass58_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckService___c__DisplayClass58_0::*)()>(&::Liv::Lck::LckService___c__DisplayClass58_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d31fb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService___c__DisplayClass58_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckService___c__DisplayClass58_0.__ctor_b__17
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckService___c__DisplayClass58_0::*)()>(&::Liv::Lck::LckService___c__DisplayClass58_0::__ctor_b__17)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x9d31fb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService___c__DisplayClass58_0*>(),
                        {"<.ctor>b__17", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Liv::Lck::LckResult*& Liv::Lck::LckService___c__DisplayClass58_0::__cordl_internal_get_r()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___r;
}
constexpr ::Liv::Lck::LckResult* const& Liv::Lck::LckService___c__DisplayClass58_0::__cordl_internal_get_r() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___r;
}
constexpr void Liv::Lck::LckService___c__DisplayClass58_0::__cordl_internal_set_r(::Liv::Lck::LckResult*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___r = value;
}
constexpr ::Liv::Lck::LckService*& Liv::Lck::LckService___c__DisplayClass58_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::Liv::Lck::LckService* const& Liv::Lck::LckService___c__DisplayClass58_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Liv::Lck::LckService___c__DisplayClass58_0::__cordl_internal_set___4__this(::Liv::Lck::LckService*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void Liv::Lck::LckService___c__DisplayClass58_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService___c__DisplayClass58_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::LckService___c__DisplayClass58_0::__ctor_b__17()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService___c__DisplayClass58_0*>(),
                        {"<.ctor>b__17", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::LckService___c__DisplayClass58_0* Liv::Lck::LckService___c__DisplayClass58_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::LckService___c__DisplayClass58_0*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::LckService___c__DisplayClass58_0::LckService___c__DisplayClass58_0()   {
}
//  Writing Method size for method: ::Liv::Lck::LckService___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckService___c::*)()>(&::Liv::Lck::LckService___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d31c34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckService___c.__ctor_b__58_8
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>* (::Liv::Lck::LckService___c::*)(::GlobalNamespace::LckEvents_RecordingSavedEvent)>(&::Liv::Lck::LckService___c::__ctor_b__58_8)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d31c3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService___c*>(),
                        {"<.ctor>b__58_8", {}, {::i2c::type_of<::GlobalNamespace::LckEvents_RecordingSavedEvent>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckService___c.__ctor_b__58_10
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>* (::Liv::Lck::LckService___c::*)(::GlobalNamespace::LckEvents_EchoSavedEvent)>(&::Liv::Lck::LckService___c::__ctor_b__58_10)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d31c44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService___c*>(),
                        {"<.ctor>b__58_10", {}, {::i2c::type_of<::GlobalNamespace::LckEvents_EchoSavedEvent>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckService___c.__ctor_b__58_14
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult_1<::Liv::Lck::ILckCamera*>* (::Liv::Lck::LckService___c::*)(::GlobalNamespace::LckEvents_ActiveCameraChangedEvent)>(&::Liv::Lck::LckService___c::__ctor_b__58_14)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d31c4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService___c*>(),
                        {"<.ctor>b__58_14", {}, {::i2c::type_of<::GlobalNamespace::LckEvents_ActiveCameraChangedEvent>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckService___c.__ctor_b__58_16
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckService___c::*)(::Liv::Lck::ILckResult*)>(&::Liv::Lck::LckService___c::__ctor_b__58_16)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x9d31c54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService___c*>(),
                        {"<.ctor>b__58_16", {}, {::i2c::type_of<::Liv::Lck::ILckResult*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckService___c._SetEchoEnabled_b__93_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckService___c::*)(::System::Threading::Tasks::Task_1<::Liv::Lck::LckResult*>*)>(&::Liv::Lck::LckService___c::_SetEchoEnabled_b__93_0)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x9d31e28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService___c*>(),
                        {"<SetEchoEnabled>b__93_0", {}, {::i2c::type_of<::System::Threading::Tasks::Task_1<::Liv::Lck::LckResult*>*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Liv::Lck::LckService___c::setStaticF___9(::Liv::Lck::LckService___c*  value)  {
::cordl_internals::setStaticField<::Liv::Lck::LckService___c*, "<>9", ::Liv::Lck::LckService___c*>(std::forward<::Liv::Lck::LckService___c*>(value));
}
inline ::Liv::Lck::LckService___c* Liv::Lck::LckService___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Liv::Lck::LckService___c*, "<>9", ::Liv::Lck::LckService___c*>();
}
inline void Liv::Lck::LckService___c::setStaticF___9__58_8(::System::Func_2<::GlobalNamespace::LckEvents_RecordingSavedEvent,::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::GlobalNamespace::LckEvents_RecordingSavedEvent,::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*>*, "<>9__58_8", ::Liv::Lck::LckService___c*>(std::forward<::System::Func_2<::GlobalNamespace::LckEvents_RecordingSavedEvent,::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*>*>(value));
}
inline ::System::Func_2<::GlobalNamespace::LckEvents_RecordingSavedEvent,::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*>* Liv::Lck::LckService___c::getStaticF___9__58_8()  {
return ::cordl_internals::getStaticField<::System::Func_2<::GlobalNamespace::LckEvents_RecordingSavedEvent,::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*>*, "<>9__58_8", ::Liv::Lck::LckService___c*>();
}
inline void Liv::Lck::LckService___c::setStaticF___9__58_10(::System::Func_2<::GlobalNamespace::LckEvents_EchoSavedEvent,::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::GlobalNamespace::LckEvents_EchoSavedEvent,::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*>*, "<>9__58_10", ::Liv::Lck::LckService___c*>(std::forward<::System::Func_2<::GlobalNamespace::LckEvents_EchoSavedEvent,::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*>*>(value));
}
inline ::System::Func_2<::GlobalNamespace::LckEvents_EchoSavedEvent,::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*>* Liv::Lck::LckService___c::getStaticF___9__58_10()  {
return ::cordl_internals::getStaticField<::System::Func_2<::GlobalNamespace::LckEvents_EchoSavedEvent,::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*>*, "<>9__58_10", ::Liv::Lck::LckService___c*>();
}
inline void Liv::Lck::LckService___c::setStaticF___9__58_14(::System::Func_2<::GlobalNamespace::LckEvents_ActiveCameraChangedEvent,::Liv::Lck::LckResult_1<::Liv::Lck::ILckCamera*>*>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::GlobalNamespace::LckEvents_ActiveCameraChangedEvent,::Liv::Lck::LckResult_1<::Liv::Lck::ILckCamera*>*>*, "<>9__58_14", ::Liv::Lck::LckService___c*>(std::forward<::System::Func_2<::GlobalNamespace::LckEvents_ActiveCameraChangedEvent,::Liv::Lck::LckResult_1<::Liv::Lck::ILckCamera*>*>*>(value));
}
inline ::System::Func_2<::GlobalNamespace::LckEvents_ActiveCameraChangedEvent,::Liv::Lck::LckResult_1<::Liv::Lck::ILckCamera*>*>* Liv::Lck::LckService___c::getStaticF___9__58_14()  {
return ::cordl_internals::getStaticField<::System::Func_2<::GlobalNamespace::LckEvents_ActiveCameraChangedEvent,::Liv::Lck::LckResult_1<::Liv::Lck::ILckCamera*>*>*, "<>9__58_14", ::Liv::Lck::LckService___c*>();
}
inline void Liv::Lck::LckService___c::setStaticF___9__58_16(::System::Action_1<::Liv::Lck::ILckResult*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::Liv::Lck::ILckResult*>*, "<>9__58_16", ::Liv::Lck::LckService___c*>(std::forward<::System::Action_1<::Liv::Lck::ILckResult*>*>(value));
}
inline ::System::Action_1<::Liv::Lck::ILckResult*>* Liv::Lck::LckService___c::getStaticF___9__58_16()  {
return ::cordl_internals::getStaticField<::System::Action_1<::Liv::Lck::ILckResult*>*, "<>9__58_16", ::Liv::Lck::LckService___c*>();
}
inline void Liv::Lck::LckService___c::setStaticF___9__93_0(::System::Action_1<::System::Threading::Tasks::Task_1<::Liv::Lck::LckResult*>*>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::System::Threading::Tasks::Task_1<::Liv::Lck::LckResult*>*>*, "<>9__93_0", ::Liv::Lck::LckService___c*>(std::forward<::System::Action_1<::System::Threading::Tasks::Task_1<::Liv::Lck::LckResult*>*>*>(value));
}
inline ::System::Action_1<::System::Threading::Tasks::Task_1<::Liv::Lck::LckResult*>*>* Liv::Lck::LckService___c::getStaticF___9__93_0()  {
return ::cordl_internals::getStaticField<::System::Action_1<::System::Threading::Tasks::Task_1<::Liv::Lck::LckResult*>*>*, "<>9__93_0", ::Liv::Lck::LckService___c*>();
}
inline void Liv::Lck::LckService___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>* Liv::Lck::LckService___c::__ctor_b__58_8(::GlobalNamespace::LckEvents_RecordingSavedEvent  evt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService___c*>(),
                        {"<.ctor>b__58_8", {}, {::i2c::type_of<::GlobalNamespace::LckEvents_RecordingSavedEvent>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*>(this, ___internal_method, evt);
}
inline ::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>* Liv::Lck::LckService___c::__ctor_b__58_10(::GlobalNamespace::LckEvents_EchoSavedEvent  evt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService___c*>(),
                        {"<.ctor>b__58_10", {}, {::i2c::type_of<::GlobalNamespace::LckEvents_EchoSavedEvent>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*>(this, ___internal_method, evt);
}
inline ::Liv::Lck::LckResult_1<::Liv::Lck::ILckCamera*>* Liv::Lck::LckService___c::__ctor_b__58_14(::GlobalNamespace::LckEvents_ActiveCameraChangedEvent  evt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService___c*>(),
                        {"<.ctor>b__58_14", {}, {::i2c::type_of<::GlobalNamespace::LckEvents_ActiveCameraChangedEvent>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult_1<::Liv::Lck::ILckCamera*>*>(this, ___internal_method, evt);
}
inline void Liv::Lck::LckService___c::__ctor_b__58_16(::Liv::Lck::ILckResult*  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService___c*>(),
                        {"<.ctor>b__58_16", {}, {::i2c::type_of<::Liv::Lck::ILckResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline void Liv::Lck::LckService___c::_SetEchoEnabled_b__93_0(::System::Threading::Tasks::Task_1<::Liv::Lck::LckResult*>*  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckService___c*>(),
                        {"<SetEchoEnabled>b__93_0", {}, {::i2c::type_of<::System::Threading::Tasks::Task_1<::Liv::Lck::LckResult*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, t);
}
inline ::Liv::Lck::LckService___c* Liv::Lck::LckService___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::LckService___c*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::LckService___c::LckService___c()   {
}
