#pragma once
// IWYU pragma private; include "Liv/Lck/Recorder/LckRecorder.hpp"
#include "Liv/Lck/Encoding/zzzz__EncoderConsumer_impl.hpp"
#include "Liv/Lck/Encoding/zzzz__LckEncodedPacketHandler_impl.hpp"
#include "Liv/Lck/Recorder/zzzz__MuxerConfig_impl.hpp"
#include "Liv/Lck/zzzz__CameraTrackDescriptor_impl.hpp"
#include "Liv/Lck/zzzz__LckCaptureState_impl.hpp"
#include "Liv/Lck/zzzz__LckService_StopReason_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_AutoScope_impl.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_impl.hpp"
#include "Liv/Lck/Recorder/zzzz__LckRecorder_def.hpp"
#include "GlobalNamespace/zzzz__ILckCaptureStateProvider_def.hpp"
#include "Liv/Lck/Core/zzzz__ILckTelemetryContextProvider_def.hpp"
#include "Liv/Lck/Encoding/zzzz__ILckEncoder_def.hpp"
#include "Liv/Lck/Recorder/zzzz__ILckNativeRecordingService_def.hpp"
#include "Liv/Lck/Recorder/zzzz__ILckRecorder_def.hpp"
#include "Liv/Lck/Recorder/zzzz__LckRecorder__StartNativeMuxerAsync_d__32_def.hpp"
#include "Liv/Lck/Recorder/zzzz__LckRecorder__StartRecordingAsync_d__33_def.hpp"
#include "Liv/Lck/Recorder/zzzz__LckRecorder__StopNativeMuxerAsync_d__36_def.hpp"
#include "Liv/Lck/Recorder/zzzz__LckRecorder__StopRecordingAsync_d__37_def.hpp"
#include "Liv/Lck/Recorder/zzzz__LckRecorder_def.hpp"
#include "Liv/Lck/Recorder/zzzz__MuxerConfig_def.hpp"
#include "Liv/Lck/Recorder/zzzz__RecordingData_def.hpp"
#include "Liv/Lck/Telemetry/zzzz__ILckTelemetryClient_def.hpp"
#include "Liv/Lck/zzzz__ILckEventBus_def.hpp"
#include "Liv/Lck/zzzz__ILckOutputConfigurer_def.hpp"
#include "Liv/Lck/zzzz__ILckStorageWatcher_def.hpp"
#include "Liv/Lck/zzzz__LckCaptureState_def.hpp"
#include "Liv/Lck/zzzz__LckEvents_CaptureErrorEvent_def.hpp"
#include "Liv/Lck/zzzz__LckEvents_EncoderStoppedEvent_def.hpp"
#include "Liv/Lck/zzzz__LckEvents_LowStorageSpaceDetectedEvent_def.hpp"
#include "Liv/Lck/zzzz__LckResult_1_def.hpp"
#include "Liv/Lck/zzzz__LckResult_def.hpp"
#include "Liv/Lck/zzzz__LckService_StopReason_def.hpp"
#include "Liv/NGFX/zzzz__LogLevel_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "UnityEngine/zzzz__WaitForSeconds_def.hpp"
//  Writing Method size for method: ::Liv::Lck::Recorder::LckRecorder.get_CurrentCaptureState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckCaptureState (::Liv::Lck::Recorder::LckRecorder::*)()>(&::Liv::Lck::Recorder::LckRecorder::get_CurrentCaptureState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d5fe10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckRecorder*>(),
                        {"get_CurrentCaptureState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Recorder::LckRecorder.set_CurrentCaptureState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Recorder::LckRecorder::*)(::Liv::Lck::LckCaptureState)>(&::Liv::Lck::Recorder::LckRecorder::set_CurrentCaptureState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d5fe18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckRecorder*>(),
                        {"set_CurrentCaptureState", {}, {::i2c::type_of<::Liv::Lck::LckCaptureState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Recorder::LckRecorder._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Recorder::LckRecorder::*)(::Liv::Lck::Recorder::ILckNativeRecordingService*, ::Liv::Lck::Encoding::ILckEncoder*, ::Liv::Lck::ILckOutputConfigurer*, ::Liv::Lck::ILckStorageWatcher*, ::Liv::Lck::ILckEventBus*, ::Liv::Lck::Telemetry::ILckTelemetryClient*, ::Liv::Lck::Core::ILckTelemetryContextProvider*)>(&::Liv::Lck::Recorder::LckRecorder::_ctor)> {
  constexpr static std::size_t size = 0x3f0;
  constexpr static std::size_t addrs = 0x9d5fe20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckRecorder*>(),
                        {".ctor", {}, {::i2c::type_of<::Liv::Lck::Recorder::ILckNativeRecordingService*>(), ::i2c::type_of<::Liv::Lck::Encoding::ILckEncoder*>(), ::i2c::type_of<::Liv::Lck::ILckOutputConfigurer*>(), ::i2c::type_of<::Liv::Lck::ILckStorageWatcher*>(), ::i2c::type_of<::Liv::Lck::ILckEventBus*>(), ::i2c::type_of<::Liv::Lck::Telemetry::ILckTelemetryClient*>(), ::i2c::type_of<::Liv::Lck::Core::ILckTelemetryContextProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Recorder::LckRecorder.IsRecording
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult_1<bool>* (::Liv::Lck::Recorder::LckRecorder::*)()>(&::Liv::Lck::Recorder::LckRecorder::IsRecording)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x9d60210;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckRecorder*>(),
                        {"IsRecording", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Recorder::LckRecorder.IsPaused
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult_1<bool>* (::Liv::Lck::Recorder::LckRecorder::*)()>(&::Liv::Lck::Recorder::LckRecorder::IsPaused)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x9d60260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckRecorder*>(),
                        {"IsPaused", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Recorder::LckRecorder.SetLogLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Recorder::LckRecorder::*)(::Liv::NGFX::LogLevel)>(&::Liv::Lck::Recorder::LckRecorder::SetLogLevel)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x9d602b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckRecorder*>(),
                        {"SetLogLevel", {}, {::i2c::type_of<::Liv::NGFX::LogLevel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Recorder::LckRecorder.StartRecording
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult* (::Liv::Lck::Recorder::LckRecorder::*)()>(&::Liv::Lck::Recorder::LckRecorder::StartRecording)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x9d6035c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckRecorder*>(),
                        {"StartRecording", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Recorder::LckRecorder.StopRecording
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult* (::Liv::Lck::Recorder::LckRecorder::*)(::GlobalNamespace::LckService_StopReason)>(&::Liv::Lck::Recorder::LckRecorder::StopRecording)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x9d60474;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckRecorder*>(),
                        {"StopRecording", {}, {::i2c::type_of<::GlobalNamespace::LckService_StopReason>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Recorder::LckRecorder.PauseRecording
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult* (::Liv::Lck::Recorder::LckRecorder::*)()>(&::Liv::Lck::Recorder::LckRecorder::PauseRecording)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x9d60718;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckRecorder*>(),
                        {"PauseRecording", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Recorder::LckRecorder.ResumeRecording
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult* (::Liv::Lck::Recorder::LckRecorder::*)()>(&::Liv::Lck::Recorder::LckRecorder::ResumeRecording)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x9d6092c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckRecorder*>(),
                        {"ResumeRecording", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Recorder::LckRecorder.GetRecordingDuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult_1<::System::TimeSpan>* (::Liv::Lck::Recorder::LckRecorder::*)()>(&::Liv::Lck::Recorder::LckRecorder::GetRecordingDuration)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x9d60b28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckRecorder*>(),
                        {"GetRecordingDuration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Recorder::LckRecorder.StartNativeMuxerAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Liv::Lck::LckResult*>* (::Liv::Lck::Recorder::LckRecorder::*)()>(&::Liv::Lck::Recorder::LckRecorder::StartNativeMuxerAsync)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x9d60c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckRecorder*>(),
                        {"StartNativeMuxerAsync", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Recorder::LckRecorder.StartRecordingAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Liv::Lck::Recorder::LckRecorder::*)()>(&::Liv::Lck::Recorder::LckRecorder::StartRecordingAsync)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x9d60d58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckRecorder*>(),
                        {"StartRecordingAsync", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Recorder::LckRecorder.get_ActualRecordingDurationSeconds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Liv::Lck::Recorder::LckRecorder::*)()>(&::Liv::Lck::Recorder::LckRecorder::get_ActualRecordingDurationSeconds)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x9d60c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckRecorder*>(),
                        {"get_ActualRecordingDurationSeconds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Recorder::LckRecorder.StopNativeMuxerAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Liv::Lck::LckResult*>* (::Liv::Lck::Recorder::LckRecorder::*)()>(&::Liv::Lck::Recorder::LckRecorder::StopNativeMuxerAsync)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x9d60e34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckRecorder*>(),
                        {"StopNativeMuxerAsync", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Recorder::LckRecorder.StopRecordingAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::Liv::Lck::Recorder::LckRecorder::*)()>(&::Liv::Lck::Recorder::LckRecorder::StopRecordingAsync)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x9d60f3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckRecorder*>(),
                        {"StopRecordingAsync", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Recorder::LckRecorder.CopyRecordingToGalleryWhenReady
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::Liv::Lck::Recorder::LckRecorder::*)()>(&::Liv::Lck::Recorder::LckRecorder::CopyRecordingToGalleryWhenReady)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x9d61014;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckRecorder*>(),
                        {"CopyRecordingToGalleryWhenReady", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Recorder::LckRecorder.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Recorder::LckRecorder::*)()>(&::Liv::Lck::Recorder::LckRecorder::Dispose)> {
  constexpr static std::size_t size = 0x350;
  constexpr static std::size_t addrs = 0x9d61088;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckRecorder*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Recorder::LckRecorder.StartRecordingProcess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Recorder::LckRecorder::*)()>(&::Liv::Lck::Recorder::LckRecorder::StartRecordingProcess)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9d60468;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckRecorder*>(),
                        {"StartRecordingProcess", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Recorder::LckRecorder.StopRecordingProcess
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Recorder::LckRecorder::*)()>(&::Liv::Lck::Recorder::LckRecorder::StopRecordingProcess)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x9d60628;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckRecorder*>(),
                        {"StopRecordingProcess", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Recorder::LckRecorder.SendRecordingStoppedTelemetry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Recorder::LckRecorder::*)()>(&::Liv::Lck::Recorder::LckRecorder::SendRecordingStoppedTelemetry)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x9d613d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckRecorder*>(),
                        {"SendRecordingStoppedTelemetry", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Recorder::LckRecorder.UpdateRecordingTelemetryContext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Recorder::LckRecorder::*)()>(&::Liv::Lck::Recorder::LckRecorder::UpdateRecordingTelemetryContext)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x9d616dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckRecorder*>(),
                        {"UpdateRecordingTelemetryContext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Recorder::LckRecorder.CreateMuxerConfig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::Recorder::MuxerConfig (::Liv::Lck::Recorder::LckRecorder::*)()>(&::Liv::Lck::Recorder::LckRecorder::CreateMuxerConfig)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x9d61944;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckRecorder*>(),
                        {"CreateMuxerConfig", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Recorder::LckRecorder.OnEncoderStopped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Recorder::LckRecorder::*)(::GlobalNamespace::LckEvents_EncoderStoppedEvent)>(&::Liv::Lck::Recorder::LckRecorder::OnEncoderStopped)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x9d61c08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckRecorder*>(),
                        {"OnEncoderStopped", {}, {::i2c::type_of<::GlobalNamespace::LckEvents_EncoderStoppedEvent>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Recorder::LckRecorder.OnLowStorageSpaceDetected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Recorder::LckRecorder::*)(::GlobalNamespace::LckEvents_LowStorageSpaceDetectedEvent)>(&::Liv::Lck::Recorder::LckRecorder::OnLowStorageSpaceDetected)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d61cd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckRecorder*>(),
                        {"OnLowStorageSpaceDetected", {}, {::i2c::type_of<::GlobalNamespace::LckEvents_LowStorageSpaceDetectedEvent>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Recorder::LckRecorder.TriggerRecordingStartedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Recorder::LckRecorder::*)(::Liv::Lck::LckResult*)>(&::Liv::Lck::Recorder::LckRecorder::TriggerRecordingStartedEvent)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x9d61ce0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckRecorder*>(),
                        {"TriggerRecordingStartedEvent", {}, {::i2c::type_of<::Liv::Lck::LckResult*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Recorder::LckRecorder.TriggerRecordingPausedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Recorder::LckRecorder::*)(::Liv::Lck::LckResult*)>(&::Liv::Lck::Recorder::LckRecorder::TriggerRecordingPausedEvent)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x9d6084c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckRecorder*>(),
                        {"TriggerRecordingPausedEvent", {}, {::i2c::type_of<::Liv::Lck::LckResult*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Recorder::LckRecorder.TriggerRecordingResumedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Recorder::LckRecorder::*)(::Liv::Lck::LckResult*)>(&::Liv::Lck::Recorder::LckRecorder::TriggerRecordingResumedEvent)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x9d60a48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckRecorder*>(),
                        {"TriggerRecordingResumedEvent", {}, {::i2c::type_of<::Liv::Lck::LckResult*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Recorder::LckRecorder.TriggerRecordingStoppedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Recorder::LckRecorder::*)(::Liv::Lck::LckResult*)>(&::Liv::Lck::Recorder::LckRecorder::TriggerRecordingStoppedEvent)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x9d61dc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckRecorder*>(),
                        {"TriggerRecordingStoppedEvent", {}, {::i2c::type_of<::Liv::Lck::LckResult*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Recorder::LckRecorder.TriggerRecordingSavedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Recorder::LckRecorder::*)(::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*)>(&::Liv::Lck::Recorder::LckRecorder::TriggerRecordingSavedEvent)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x9d61ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckRecorder*>(),
                        {"TriggerRecordingSavedEvent", {}, {::i2c::type_of<::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Recorder::LckRecorder.OnCaptureError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Recorder::LckRecorder::*)(::GlobalNamespace::LckEvents_CaptureErrorEvent)>(&::Liv::Lck::Recorder::LckRecorder::OnCaptureError)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x9d61f80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckRecorder*>(),
                        {"OnCaptureError", {}, {::i2c::type_of<::GlobalNamespace::LckEvents_CaptureErrorEvent>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Recorder::LckRecorder._StartNativeMuxerAsync_b__32_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult* (::Liv::Lck::Recorder::LckRecorder::*)()>(&::Liv::Lck::Recorder::LckRecorder::_StartNativeMuxerAsync_b__32_0)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0x9d620d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckRecorder*>(),
                        {"<StartNativeMuxerAsync>b__32_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Recorder::LckRecorder._StartRecordingAsync_b__33_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Liv::Lck::Recorder::LckRecorder::*)()>(&::Liv::Lck::Recorder::LckRecorder::_StartRecordingAsync_b__33_0)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x9d622dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckRecorder*>(),
                        {"<StartRecordingAsync>b__33_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Recorder::LckRecorder._StopNativeMuxerAsync_b__36_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult* (::Liv::Lck::Recorder::LckRecorder::*)()>(&::Liv::Lck::Recorder::LckRecorder::_StopNativeMuxerAsync_b__36_0)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x9d6231c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckRecorder*>(),
                        {"<StopNativeMuxerAsync>b__36_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Recorder::LckRecorder._CopyRecordingToGalleryWhenReady_b__39_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Recorder::LckRecorder::*)(bool, ::StringW)>(&::Liv::Lck::Recorder::LckRecorder::_CopyRecordingToGalleryWhenReady_b__39_0)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x9d624c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckRecorder*>(),
                        {"<CopyRecordingToGalleryWhenReady>b__39_0", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Liv::Lck::Recorder::ILckNativeRecordingService*& Liv::Lck::Recorder::LckRecorder::__cordl_internal_get__nativeRecordingService()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nativeRecordingService;
}
constexpr ::Liv::Lck::Recorder::ILckNativeRecordingService* const& Liv::Lck::Recorder::LckRecorder::__cordl_internal_get__nativeRecordingService() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nativeRecordingService;
}
constexpr void Liv::Lck::Recorder::LckRecorder::__cordl_internal_set__nativeRecordingService(::Liv::Lck::Recorder::ILckNativeRecordingService*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____nativeRecordingService = value;
}
constexpr ::Liv::Lck::ILckStorageWatcher*& Liv::Lck::Recorder::LckRecorder::__cordl_internal_get__storageWatcher()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____storageWatcher;
}
constexpr ::Liv::Lck::ILckStorageWatcher* const& Liv::Lck::Recorder::LckRecorder::__cordl_internal_get__storageWatcher() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____storageWatcher;
}
constexpr void Liv::Lck::Recorder::LckRecorder::__cordl_internal_set__storageWatcher(::Liv::Lck::ILckStorageWatcher*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____storageWatcher = value;
}
constexpr ::Liv::Lck::Encoding::ILckEncoder*& Liv::Lck::Recorder::LckRecorder::__cordl_internal_get__encoder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____encoder;
}
constexpr ::Liv::Lck::Encoding::ILckEncoder* const& Liv::Lck::Recorder::LckRecorder::__cordl_internal_get__encoder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____encoder;
}
constexpr void Liv::Lck::Recorder::LckRecorder::__cordl_internal_set__encoder(::Liv::Lck::Encoding::ILckEncoder*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____encoder = value;
}
constexpr ::Liv::Lck::ILckOutputConfigurer*& Liv::Lck::Recorder::LckRecorder::__cordl_internal_get__outputConfigurer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____outputConfigurer;
}
constexpr ::Liv::Lck::ILckOutputConfigurer* const& Liv::Lck::Recorder::LckRecorder::__cordl_internal_get__outputConfigurer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____outputConfigurer;
}
constexpr void Liv::Lck::Recorder::LckRecorder::__cordl_internal_set__outputConfigurer(::Liv::Lck::ILckOutputConfigurer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____outputConfigurer = value;
}
constexpr ::Liv::Lck::ILckEventBus*& Liv::Lck::Recorder::LckRecorder::__cordl_internal_get__eventBus()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____eventBus;
}
constexpr ::Liv::Lck::ILckEventBus* const& Liv::Lck::Recorder::LckRecorder::__cordl_internal_get__eventBus() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____eventBus;
}
constexpr void Liv::Lck::Recorder::LckRecorder::__cordl_internal_set__eventBus(::Liv::Lck::ILckEventBus*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____eventBus = value;
}
constexpr ::Liv::Lck::Telemetry::ILckTelemetryClient*& Liv::Lck::Recorder::LckRecorder::__cordl_internal_get__telemetryClient()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____telemetryClient;
}
constexpr ::Liv::Lck::Telemetry::ILckTelemetryClient* const& Liv::Lck::Recorder::LckRecorder::__cordl_internal_get__telemetryClient() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____telemetryClient;
}
constexpr void Liv::Lck::Recorder::LckRecorder::__cordl_internal_set__telemetryClient(::Liv::Lck::Telemetry::ILckTelemetryClient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____telemetryClient = value;
}
constexpr ::Liv::Lck::Core::ILckTelemetryContextProvider*& Liv::Lck::Recorder::LckRecorder::__cordl_internal_get__telemetryContextProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____telemetryContextProvider;
}
constexpr ::Liv::Lck::Core::ILckTelemetryContextProvider* const& Liv::Lck::Recorder::LckRecorder::__cordl_internal_get__telemetryContextProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____telemetryContextProvider;
}
constexpr void Liv::Lck::Recorder::LckRecorder::__cordl_internal_set__telemetryContextProvider(::Liv::Lck::Core::ILckTelemetryContextProvider*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____telemetryContextProvider = value;
}
constexpr ::Liv::Lck::Recorder::MuxerConfig& Liv::Lck::Recorder::LckRecorder::__cordl_internal_get__muxerConfig()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____muxerConfig;
}
constexpr ::Liv::Lck::Recorder::MuxerConfig const& Liv::Lck::Recorder::LckRecorder::__cordl_internal_get__muxerConfig() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____muxerConfig;
}
constexpr void Liv::Lck::Recorder::LckRecorder::__cordl_internal_set__muxerConfig(::Liv::Lck::Recorder::MuxerConfig  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____muxerConfig = value;
}
constexpr float_t& Liv::Lck::Recorder::LckRecorder::__cordl_internal_get__recordingStartTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____recordingStartTime;
}
constexpr float_t const& Liv::Lck::Recorder::LckRecorder::__cordl_internal_get__recordingStartTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____recordingStartTime;
}
constexpr void Liv::Lck::Recorder::LckRecorder::__cordl_internal_set__recordingStartTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____recordingStartTime = value;
}
constexpr float_t& Liv::Lck::Recorder::LckRecorder::__cordl_internal_get__accumulatedRecordingDuration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____accumulatedRecordingDuration;
}
constexpr float_t const& Liv::Lck::Recorder::LckRecorder::__cordl_internal_get__accumulatedRecordingDuration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____accumulatedRecordingDuration;
}
constexpr void Liv::Lck::Recorder::LckRecorder::__cordl_internal_set__accumulatedRecordingDuration(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____accumulatedRecordingDuration = value;
}
constexpr float_t& Liv::Lck::Recorder::LckRecorder::__cordl_internal_get__lastActiveSegmentStartTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastActiveSegmentStartTime;
}
constexpr float_t const& Liv::Lck::Recorder::LckRecorder::__cordl_internal_get__lastActiveSegmentStartTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastActiveSegmentStartTime;
}
constexpr void Liv::Lck::Recorder::LckRecorder::__cordl_internal_set__lastActiveSegmentStartTime(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastActiveSegmentStartTime = value;
}
constexpr ::StringW& Liv::Lck::Recorder::LckRecorder::__cordl_internal_get__lastRecordingFilePath()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastRecordingFilePath;
}
constexpr ::StringW const& Liv::Lck::Recorder::LckRecorder::__cordl_internal_get__lastRecordingFilePath() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastRecordingFilePath;
}
constexpr void Liv::Lck::Recorder::LckRecorder::__cordl_internal_set__lastRecordingFilePath(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastRecordingFilePath = value;
}
constexpr ::GlobalNamespace::LckService_StopReason& Liv::Lck::Recorder::LckRecorder::__cordl_internal_get__stopReason()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stopReason;
}
constexpr ::GlobalNamespace::LckService_StopReason const& Liv::Lck::Recorder::LckRecorder::__cordl_internal_get__stopReason() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stopReason;
}
constexpr void Liv::Lck::Recorder::LckRecorder::__cordl_internal_set__stopReason(::GlobalNamespace::LckService_StopReason  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____stopReason = value;
}
constexpr ::Liv::Lck::CameraTrackDescriptor& Liv::Lck::Recorder::LckRecorder::__cordl_internal_get__currentRecordingDescriptor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentRecordingDescriptor;
}
constexpr ::Liv::Lck::CameraTrackDescriptor const& Liv::Lck::Recorder::LckRecorder::__cordl_internal_get__currentRecordingDescriptor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentRecordingDescriptor;
}
constexpr void Liv::Lck::Recorder::LckRecorder::__cordl_internal_set__currentRecordingDescriptor(::Liv::Lck::CameraTrackDescriptor  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentRecordingDescriptor = value;
}
constexpr ::Liv::Lck::Encoding::LckEncodedPacketHandler& Liv::Lck::Recorder::LckRecorder::__cordl_internal_get__recordingPacketHandler()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____recordingPacketHandler;
}
constexpr ::Liv::Lck::Encoding::LckEncodedPacketHandler const& Liv::Lck::Recorder::LckRecorder::__cordl_internal_get__recordingPacketHandler() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____recordingPacketHandler;
}
constexpr void Liv::Lck::Recorder::LckRecorder::__cordl_internal_set__recordingPacketHandler(::Liv::Lck::Encoding::LckEncodedPacketHandler  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____recordingPacketHandler = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*& Liv::Lck::Recorder::LckRecorder::__cordl_internal_get__recordingTelemetryContext()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____recordingTelemetryContext;
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>* const& Liv::Lck::Recorder::LckRecorder::__cordl_internal_get__recordingTelemetryContext() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____recordingTelemetryContext;
}
constexpr void Liv::Lck::Recorder::LckRecorder::__cordl_internal_set__recordingTelemetryContext(::System::Collections::Generic::Dictionary_2<::StringW,::System::Object*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____recordingTelemetryContext = value;
}
constexpr bool& Liv::Lck::Recorder::LckRecorder::__cordl_internal_get__disposed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disposed;
}
constexpr bool const& Liv::Lck::Recorder::LckRecorder::__cordl_internal_get__disposed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disposed;
}
constexpr void Liv::Lck::Recorder::LckRecorder::__cordl_internal_set__disposed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____disposed = value;
}
constexpr ::Liv::Lck::LckCaptureState& Liv::Lck::Recorder::LckRecorder::__cordl_internal_get__CurrentCaptureState_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CurrentCaptureState_k__BackingField;
}
constexpr ::Liv::Lck::LckCaptureState const& Liv::Lck::Recorder::LckRecorder::__cordl_internal_get__CurrentCaptureState_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____CurrentCaptureState_k__BackingField;
}
constexpr void Liv::Lck::Recorder::LckRecorder::__cordl_internal_set__CurrentCaptureState_k__BackingField(::Liv::Lck::LckCaptureState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____CurrentCaptureState_k__BackingField = value;
}
constexpr ::UnityEngine::WaitForSeconds*& Liv::Lck::Recorder::LckRecorder::__cordl_internal_get__copyVideoSpinWait()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____copyVideoSpinWait;
}
constexpr ::UnityEngine::WaitForSeconds* const& Liv::Lck::Recorder::LckRecorder::__cordl_internal_get__copyVideoSpinWait() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____copyVideoSpinWait;
}
constexpr void Liv::Lck::Recorder::LckRecorder::__cordl_internal_set__copyVideoSpinWait(::UnityEngine::WaitForSeconds*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____copyVideoSpinWait = value;
}
inline void Liv::Lck::Recorder::LckRecorder::setStaticF__copyOutputFileToNativeGalleryMarker(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "_copyOutputFileToNativeGalleryMarker", ::Liv::Lck::Recorder::LckRecorder*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker Liv::Lck::Recorder::LckRecorder::getStaticF__copyOutputFileToNativeGalleryMarker()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "_copyOutputFileToNativeGalleryMarker", ::Liv::Lck::Recorder::LckRecorder*>();
}
inline ::Liv::Lck::LckCaptureState Liv::Lck::Recorder::LckRecorder::get_CurrentCaptureState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckRecorder*>(),
                        {"get_CurrentCaptureState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckCaptureState>(this, ___internal_method);
}
inline void Liv::Lck::Recorder::LckRecorder::set_CurrentCaptureState(::Liv::Lck::LckCaptureState  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckRecorder*>(),
                        {"set_CurrentCaptureState", {}, {::i2c::type_of<::Liv::Lck::LckCaptureState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Liv::Lck::Recorder::LckRecorder::_ctor(::Liv::Lck::Recorder::ILckNativeRecordingService*  nativeRecordingService, ::Liv::Lck::Encoding::ILckEncoder*  encoder, ::Liv::Lck::ILckOutputConfigurer*  outputConfigurer, ::Liv::Lck::ILckStorageWatcher*  storageWatcher, ::Liv::Lck::ILckEventBus*  eventBus, ::Liv::Lck::Telemetry::ILckTelemetryClient*  telemetryClient, ::Liv::Lck::Core::ILckTelemetryContextProvider*  telemetryContextProvider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckRecorder*>(),
                        {".ctor", {}, {::i2c::type_of<::Liv::Lck::Recorder::ILckNativeRecordingService*>(), ::i2c::type_of<::Liv::Lck::Encoding::ILckEncoder*>(), ::i2c::type_of<::Liv::Lck::ILckOutputConfigurer*>(), ::i2c::type_of<::Liv::Lck::ILckStorageWatcher*>(), ::i2c::type_of<::Liv::Lck::ILckEventBus*>(), ::i2c::type_of<::Liv::Lck::Telemetry::ILckTelemetryClient*>(), ::i2c::type_of<::Liv::Lck::Core::ILckTelemetryContextProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, nativeRecordingService, encoder, outputConfigurer, storageWatcher, eventBus, telemetryClient, telemetryContextProvider);
}
inline ::Liv::Lck::LckResult_1<bool>* Liv::Lck::Recorder::LckRecorder::IsRecording()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckRecorder*>(),
                        {"IsRecording", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult_1<bool>*>(this, ___internal_method);
}
inline ::Liv::Lck::LckResult_1<bool>* Liv::Lck::Recorder::LckRecorder::IsPaused()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckRecorder*>(),
                        {"IsPaused", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult_1<bool>*>(this, ___internal_method);
}
inline void Liv::Lck::Recorder::LckRecorder::SetLogLevel(::Liv::NGFX::LogLevel  logLevel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckRecorder*>(),
                        {"SetLogLevel", {}, {::i2c::type_of<::Liv::NGFX::LogLevel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, logLevel);
}
inline ::Liv::Lck::LckResult* Liv::Lck::Recorder::LckRecorder::StartRecording()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckRecorder*>(),
                        {"StartRecording", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult*>(this, ___internal_method);
}
inline ::Liv::Lck::LckResult* Liv::Lck::Recorder::LckRecorder::StopRecording(::GlobalNamespace::LckService_StopReason  stopReason)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckRecorder*>(),
                        {"StopRecording", {}, {::i2c::type_of<::GlobalNamespace::LckService_StopReason>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult*>(this, ___internal_method, stopReason);
}
inline ::Liv::Lck::LckResult* Liv::Lck::Recorder::LckRecorder::PauseRecording()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckRecorder*>(),
                        {"PauseRecording", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult*>(this, ___internal_method);
}
inline ::Liv::Lck::LckResult* Liv::Lck::Recorder::LckRecorder::ResumeRecording()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckRecorder*>(),
                        {"ResumeRecording", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult*>(this, ___internal_method);
}
inline ::Liv::Lck::LckResult_1<::System::TimeSpan>* Liv::Lck::Recorder::LckRecorder::GetRecordingDuration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckRecorder*>(),
                        {"GetRecordingDuration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult_1<::System::TimeSpan>*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Liv::Lck::LckResult*>* Liv::Lck::Recorder::LckRecorder::StartNativeMuxerAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckRecorder*>(),
                        {"StartNativeMuxerAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Liv::Lck::LckResult*>*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* Liv::Lck::Recorder::LckRecorder::StartRecordingAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckRecorder*>(),
                        {"StartRecordingAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline float_t Liv::Lck::Recorder::LckRecorder::get_ActualRecordingDurationSeconds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckRecorder*>(),
                        {"get_ActualRecordingDurationSeconds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Liv::Lck::LckResult*>* Liv::Lck::Recorder::LckRecorder::StopNativeMuxerAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckRecorder*>(),
                        {"StopNativeMuxerAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Liv::Lck::LckResult*>*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* Liv::Lck::Recorder::LckRecorder::StopRecordingAsync()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckRecorder*>(),
                        {"StopRecordingAsync", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* Liv::Lck::Recorder::LckRecorder::CopyRecordingToGalleryWhenReady()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckRecorder*>(),
                        {"CopyRecordingToGalleryWhenReady", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void Liv::Lck::Recorder::LckRecorder::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckRecorder*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::Recorder::LckRecorder::StartRecordingProcess()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckRecorder*>(),
                        {"StartRecordingProcess", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::Recorder::LckRecorder::StopRecordingProcess()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckRecorder*>(),
                        {"StopRecordingProcess", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::Recorder::LckRecorder::SendRecordingStoppedTelemetry()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckRecorder*>(),
                        {"SendRecordingStoppedTelemetry", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::Recorder::LckRecorder::UpdateRecordingTelemetryContext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckRecorder*>(),
                        {"UpdateRecordingTelemetryContext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::Recorder::MuxerConfig Liv::Lck::Recorder::LckRecorder::CreateMuxerConfig()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckRecorder*>(),
                        {"CreateMuxerConfig", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::Recorder::MuxerConfig>(this, ___internal_method);
}
inline void Liv::Lck::Recorder::LckRecorder::OnEncoderStopped(::GlobalNamespace::LckEvents_EncoderStoppedEvent  encoderStoppedEvent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckRecorder*>(),
                        {"OnEncoderStopped", {}, {::i2c::type_of<::GlobalNamespace::LckEvents_EncoderStoppedEvent>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, encoderStoppedEvent);
}
inline void Liv::Lck::Recorder::LckRecorder::OnLowStorageSpaceDetected(::GlobalNamespace::LckEvents_LowStorageSpaceDetectedEvent  lowStorageSpaceDetectedEvent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckRecorder*>(),
                        {"OnLowStorageSpaceDetected", {}, {::i2c::type_of<::GlobalNamespace::LckEvents_LowStorageSpaceDetectedEvent>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lowStorageSpaceDetectedEvent);
}
inline void Liv::Lck::Recorder::LckRecorder::TriggerRecordingStartedEvent(::Liv::Lck::LckResult*  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckRecorder*>(),
                        {"TriggerRecordingStartedEvent", {}, {::i2c::type_of<::Liv::Lck::LckResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline void Liv::Lck::Recorder::LckRecorder::TriggerRecordingPausedEvent(::Liv::Lck::LckResult*  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckRecorder*>(),
                        {"TriggerRecordingPausedEvent", {}, {::i2c::type_of<::Liv::Lck::LckResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline void Liv::Lck::Recorder::LckRecorder::TriggerRecordingResumedEvent(::Liv::Lck::LckResult*  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckRecorder*>(),
                        {"TriggerRecordingResumedEvent", {}, {::i2c::type_of<::Liv::Lck::LckResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline void Liv::Lck::Recorder::LckRecorder::TriggerRecordingStoppedEvent(::Liv::Lck::LckResult*  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckRecorder*>(),
                        {"TriggerRecordingStoppedEvent", {}, {::i2c::type_of<::Liv::Lck::LckResult*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline void Liv::Lck::Recorder::LckRecorder::TriggerRecordingSavedEvent(::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*  result)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckRecorder*>(),
                        {"TriggerRecordingSavedEvent", {}, {::i2c::type_of<::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline void Liv::Lck::Recorder::LckRecorder::OnCaptureError(::GlobalNamespace::LckEvents_CaptureErrorEvent  captureErrorEvent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckRecorder*>(),
                        {"OnCaptureError", {}, {::i2c::type_of<::GlobalNamespace::LckEvents_CaptureErrorEvent>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, captureErrorEvent);
}
inline ::Liv::Lck::LckResult* Liv::Lck::Recorder::LckRecorder::_StartNativeMuxerAsync_b__32_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckRecorder*>(),
                        {"<StartNativeMuxerAsync>b__32_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult*>(this, ___internal_method);
}
inline float_t Liv::Lck::Recorder::LckRecorder::_StartRecordingAsync_b__33_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckRecorder*>(),
                        {"<StartRecordingAsync>b__33_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::Liv::Lck::LckResult* Liv::Lck::Recorder::LckRecorder::_StopNativeMuxerAsync_b__36_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckRecorder*>(),
                        {"<StopNativeMuxerAsync>b__36_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult*>(this, ___internal_method);
}
inline void Liv::Lck::Recorder::LckRecorder::_CopyRecordingToGalleryWhenReady_b__39_0(bool  success, ::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckRecorder*>(),
                        {"<CopyRecordingToGalleryWhenReady>b__39_0", {}, {::i2c::type_of<bool>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, success, path);
}
/// @brief [Preserve]
inline ::Liv::Lck::Recorder::LckRecorder* Liv::Lck::Recorder::LckRecorder::New_ctor(::Liv::Lck::Recorder::ILckNativeRecordingService*  nativeRecordingService, ::Liv::Lck::Encoding::ILckEncoder*  encoder, ::Liv::Lck::ILckOutputConfigurer*  outputConfigurer, ::Liv::Lck::ILckStorageWatcher*  storageWatcher, ::Liv::Lck::ILckEventBus*  eventBus, ::Liv::Lck::Telemetry::ILckTelemetryClient*  telemetryClient, ::Liv::Lck::Core::ILckTelemetryContextProvider*  telemetryContextProvider)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::Recorder::LckRecorder*>(nativeRecordingService, encoder, outputConfigurer, storageWatcher, eventBus, telemetryClient, telemetryContextProvider));
}
/// @brief Convert operator to "::Liv::Lck::Recorder::ILckRecorder"
constexpr  Liv::Lck::Recorder::LckRecorder::operator ::Liv::Lck::Recorder::ILckRecorder*() noexcept {
return static_cast<::Liv::Lck::Recorder::ILckRecorder*>(static_cast<void*>(this));
}
/// @brief Convert to "::Liv::Lck::Recorder::ILckRecorder"
constexpr ::Liv::Lck::Recorder::ILckRecorder* Liv::Lck::Recorder::LckRecorder::i___Liv__Lck__Recorder__ILckRecorder() noexcept {
return static_cast<::Liv::Lck::Recorder::ILckRecorder*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::ILckCaptureStateProvider"
constexpr  Liv::Lck::Recorder::LckRecorder::operator ::GlobalNamespace::ILckCaptureStateProvider*() noexcept {
return static_cast<::GlobalNamespace::ILckCaptureStateProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ILckCaptureStateProvider"
constexpr ::GlobalNamespace::ILckCaptureStateProvider* Liv::Lck::Recorder::LckRecorder::i___GlobalNamespace__ILckCaptureStateProvider() noexcept {
return static_cast<::GlobalNamespace::ILckCaptureStateProvider*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Liv::Lck::Recorder::LckRecorder::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Liv::Lck::Recorder::LckRecorder::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Liv::Lck::Recorder::LckRecorder::LckRecorder()   {
}
constexpr ::Liv::Lck::Encoding::EncoderConsumer  Liv::Lck::Recorder::LckRecorder::ConsumerName{static_cast<int32_t>(0x0)};
//  Writing Method size for method: ::Liv::Lck::Recorder::LckRecorder__CopyRecordingToGalleryWhenReady_d__39._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Recorder::LckRecorder__CopyRecordingToGalleryWhenReady_d__39::*)(int32_t)>(&::Liv::Lck::Recorder::LckRecorder__CopyRecordingToGalleryWhenReady_d__39::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9d627e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckRecorder__CopyRecordingToGalleryWhenReady_d__39*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Recorder::LckRecorder__CopyRecordingToGalleryWhenReady_d__39.System_IDisposable_Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Recorder::LckRecorder__CopyRecordingToGalleryWhenReady_d__39::*)()>(&::Liv::Lck::Recorder::LckRecorder__CopyRecordingToGalleryWhenReady_d__39::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x9d62810;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckRecorder__CopyRecordingToGalleryWhenReady_d__39*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Recorder::LckRecorder__CopyRecordingToGalleryWhenReady_d__39.MoveNext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Liv::Lck::Recorder::LckRecorder__CopyRecordingToGalleryWhenReady_d__39::*)()>(&::Liv::Lck::Recorder::LckRecorder__CopyRecordingToGalleryWhenReady_d__39::MoveNext)> {
  constexpr static std::size_t size = 0x2f4;
  constexpr static std::size_t addrs = 0x9d62844;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckRecorder__CopyRecordingToGalleryWhenReady_d__39*>(),
                        {"MoveNext", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Recorder::LckRecorder__CopyRecordingToGalleryWhenReady_d__39.__m__Finally1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Recorder::LckRecorder__CopyRecordingToGalleryWhenReady_d__39::*)()>(&::Liv::Lck::Recorder::LckRecorder__CopyRecordingToGalleryWhenReady_d__39::__m__Finally1)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9d62dcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckRecorder__CopyRecordingToGalleryWhenReady_d__39*>(),
                        {"<>m__Finally1", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Recorder::LckRecorder__CopyRecordingToGalleryWhenReady_d__39.System_Collections_Generic_IEnumerator_System_Object__get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Liv::Lck::Recorder::LckRecorder__CopyRecordingToGalleryWhenReady_d__39::*)()>(&::Liv::Lck::Recorder::LckRecorder__CopyRecordingToGalleryWhenReady_d__39::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d62dec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckRecorder__CopyRecordingToGalleryWhenReady_d__39*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Recorder::LckRecorder__CopyRecordingToGalleryWhenReady_d__39.System_Collections_IEnumerator_Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Recorder::LckRecorder__CopyRecordingToGalleryWhenReady_d__39::*)()>(&::Liv::Lck::Recorder::LckRecorder__CopyRecordingToGalleryWhenReady_d__39::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9d62df4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckRecorder__CopyRecordingToGalleryWhenReady_d__39*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Recorder::LckRecorder__CopyRecordingToGalleryWhenReady_d__39.System_Collections_IEnumerator_get_Current
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Liv::Lck::Recorder::LckRecorder__CopyRecordingToGalleryWhenReady_d__39::*)()>(&::Liv::Lck::Recorder::LckRecorder__CopyRecordingToGalleryWhenReady_d__39::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d62e2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckRecorder__CopyRecordingToGalleryWhenReady_d__39*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& Liv::Lck::Recorder::LckRecorder__CopyRecordingToGalleryWhenReady_d__39::__cordl_internal_get___1__state()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr int32_t const& Liv::Lck::Recorder::LckRecorder__CopyRecordingToGalleryWhenReady_d__39::__cordl_internal_get___1__state() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____1__state;
}
constexpr void Liv::Lck::Recorder::LckRecorder__CopyRecordingToGalleryWhenReady_d__39::__cordl_internal_set___1__state(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____1__state = value;
}
constexpr ::System::Object*& Liv::Lck::Recorder::LckRecorder__CopyRecordingToGalleryWhenReady_d__39::__cordl_internal_get___2__current()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr ::System::Object* const& Liv::Lck::Recorder::LckRecorder__CopyRecordingToGalleryWhenReady_d__39::__cordl_internal_get___2__current() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____2__current;
}
constexpr void Liv::Lck::Recorder::LckRecorder__CopyRecordingToGalleryWhenReady_d__39::__cordl_internal_set___2__current(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____2__current = value;
}
constexpr ::Liv::Lck::Recorder::LckRecorder*& Liv::Lck::Recorder::LckRecorder__CopyRecordingToGalleryWhenReady_d__39::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::Liv::Lck::Recorder::LckRecorder* const& Liv::Lck::Recorder::LckRecorder__CopyRecordingToGalleryWhenReady_d__39::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Liv::Lck::Recorder::LckRecorder__CopyRecordingToGalleryWhenReady_d__39::__cordl_internal_set___4__this(::Liv::Lck::Recorder::LckRecorder*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::GlobalNamespace::ProfilerMarker_AutoScope& Liv::Lck::Recorder::LckRecorder__CopyRecordingToGalleryWhenReady_d__39::__cordl_internal_get___7__wrap1()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap1;
}
constexpr ::GlobalNamespace::ProfilerMarker_AutoScope const& Liv::Lck::Recorder::LckRecorder__CopyRecordingToGalleryWhenReady_d__39::__cordl_internal_get___7__wrap1() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____7__wrap1;
}
constexpr void Liv::Lck::Recorder::LckRecorder__CopyRecordingToGalleryWhenReady_d__39::__cordl_internal_set___7__wrap1(::GlobalNamespace::ProfilerMarker_AutoScope  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____7__wrap1 = value;
}
inline void Liv::Lck::Recorder::LckRecorder__CopyRecordingToGalleryWhenReady_d__39::_ctor(int32_t  __1__state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckRecorder__CopyRecordingToGalleryWhenReady_d__39*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void Liv::Lck::Recorder::LckRecorder__CopyRecordingToGalleryWhenReady_d__39::System_IDisposable_Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckRecorder__CopyRecordingToGalleryWhenReady_d__39*>(),
                        {"System.IDisposable.Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Liv::Lck::Recorder::LckRecorder__CopyRecordingToGalleryWhenReady_d__39::MoveNext()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckRecorder__CopyRecordingToGalleryWhenReady_d__39*>(),
                        {"MoveNext", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Liv::Lck::Recorder::LckRecorder__CopyRecordingToGalleryWhenReady_d__39::__m__Finally1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckRecorder__CopyRecordingToGalleryWhenReady_d__39*>(),
                        {"<>m__Finally1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Liv::Lck::Recorder::LckRecorder__CopyRecordingToGalleryWhenReady_d__39::System_Collections_Generic_IEnumerator_System_Object__get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckRecorder__CopyRecordingToGalleryWhenReady_d__39*>(),
                        {"System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void Liv::Lck::Recorder::LckRecorder__CopyRecordingToGalleryWhenReady_d__39::System_Collections_IEnumerator_Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckRecorder__CopyRecordingToGalleryWhenReady_d__39*>(),
                        {"System.Collections.IEnumerator.Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* Liv::Lck::Recorder::LckRecorder__CopyRecordingToGalleryWhenReady_d__39::System_Collections_IEnumerator_get_Current()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckRecorder__CopyRecordingToGalleryWhenReady_d__39*>(),
                        {"System.Collections.IEnumerator.get_Current", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
/// @brief [DebuggerHidden]
inline ::Liv::Lck::Recorder::LckRecorder__CopyRecordingToGalleryWhenReady_d__39* Liv::Lck::Recorder::LckRecorder__CopyRecordingToGalleryWhenReady_d__39::New_ctor(int32_t  __1__state)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::Recorder::LckRecorder__CopyRecordingToGalleryWhenReady_d__39*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr  Liv::Lck::Recorder::LckRecorder__CopyRecordingToGalleryWhenReady_d__39::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>* Liv::Lck::Recorder::LckRecorder__CopyRecordingToGalleryWhenReady_d__39::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr  Liv::Lck::Recorder::LckRecorder__CopyRecordingToGalleryWhenReady_d__39::operator ::System::Collections::IEnumerator*() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* Liv::Lck::Recorder::LckRecorder__CopyRecordingToGalleryWhenReady_d__39::i___System__Collections__IEnumerator() noexcept {
return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Liv::Lck::Recorder::LckRecorder__CopyRecordingToGalleryWhenReady_d__39::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Liv::Lck::Recorder::LckRecorder__CopyRecordingToGalleryWhenReady_d__39::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Liv::Lck::Recorder::LckRecorder__CopyRecordingToGalleryWhenReady_d__39::LckRecorder__CopyRecordingToGalleryWhenReady_d__39()   {
}
//  Writing Method size for method: ::Liv::Lck::Recorder::LckRecorder___c__DisplayClass39_1._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Recorder::LckRecorder___c__DisplayClass39_1::*)()>(&::Liv::Lck::Recorder::LckRecorder___c__DisplayClass39_1::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d6260c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckRecorder___c__DisplayClass39_1*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Recorder::LckRecorder___c__DisplayClass39_1._CopyRecordingToGalleryWhenReady_b__2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Recorder::LckRecorder___c__DisplayClass39_1::*)()>(&::Liv::Lck::Recorder::LckRecorder___c__DisplayClass39_1::_CopyRecordingToGalleryWhenReady_b__2)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x9d62614;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckRecorder___c__DisplayClass39_1*>(),
                        {"<CopyRecordingToGalleryWhenReady>b__2", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Liv::Lck::Recorder::LckRecorder___c__DisplayClass39_1::__cordl_internal_get_success()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___success;
}
constexpr bool const& Liv::Lck::Recorder::LckRecorder___c__DisplayClass39_1::__cordl_internal_get_success() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___success;
}
constexpr void Liv::Lck::Recorder::LckRecorder___c__DisplayClass39_1::__cordl_internal_set_success(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___success = value;
}
constexpr ::StringW& Liv::Lck::Recorder::LckRecorder___c__DisplayClass39_1::__cordl_internal_get_path()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___path;
}
constexpr ::StringW const& Liv::Lck::Recorder::LckRecorder___c__DisplayClass39_1::__cordl_internal_get_path() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___path;
}
constexpr void Liv::Lck::Recorder::LckRecorder___c__DisplayClass39_1::__cordl_internal_set_path(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___path = value;
}
constexpr ::Liv::Lck::Recorder::LckRecorder*& Liv::Lck::Recorder::LckRecorder___c__DisplayClass39_1::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::Liv::Lck::Recorder::LckRecorder* const& Liv::Lck::Recorder::LckRecorder___c__DisplayClass39_1::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Liv::Lck::Recorder::LckRecorder___c__DisplayClass39_1::__cordl_internal_set___4__this(::Liv::Lck::Recorder::LckRecorder*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void Liv::Lck::Recorder::LckRecorder___c__DisplayClass39_1::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckRecorder___c__DisplayClass39_1*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::Recorder::LckRecorder___c__DisplayClass39_1::_CopyRecordingToGalleryWhenReady_b__2()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckRecorder___c__DisplayClass39_1*>(),
                        {"<CopyRecordingToGalleryWhenReady>b__2", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::Recorder::LckRecorder___c__DisplayClass39_1* Liv::Lck::Recorder::LckRecorder___c__DisplayClass39_1::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::Recorder::LckRecorder___c__DisplayClass39_1*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::Recorder::LckRecorder___c__DisplayClass39_1::LckRecorder___c__DisplayClass39_1()   {
}
//  Writing Method size for method: ::Liv::Lck::Recorder::LckRecorder___c__DisplayClass39_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Recorder::LckRecorder___c__DisplayClass39_0::*)()>(&::Liv::Lck::Recorder::LckRecorder___c__DisplayClass39_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d625ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckRecorder___c__DisplayClass39_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Recorder::LckRecorder___c__DisplayClass39_0._CopyRecordingToGalleryWhenReady_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Liv::Lck::Recorder::LckRecorder___c__DisplayClass39_0::*)()>(&::Liv::Lck::Recorder::LckRecorder___c__DisplayClass39_0::_CopyRecordingToGalleryWhenReady_b__1)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9d625f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckRecorder___c__DisplayClass39_0*>(),
                        {"<CopyRecordingToGalleryWhenReady>b__1", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Threading::Tasks::Task*& Liv::Lck::Recorder::LckRecorder___c__DisplayClass39_0::__cordl_internal_get_task()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___task;
}
constexpr ::System::Threading::Tasks::Task* const& Liv::Lck::Recorder::LckRecorder___c__DisplayClass39_0::__cordl_internal_get_task() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___task;
}
constexpr void Liv::Lck::Recorder::LckRecorder___c__DisplayClass39_0::__cordl_internal_set_task(::System::Threading::Tasks::Task*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___task = value;
}
constexpr ::Liv::Lck::Recorder::LckRecorder*& Liv::Lck::Recorder::LckRecorder___c__DisplayClass39_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::Liv::Lck::Recorder::LckRecorder* const& Liv::Lck::Recorder::LckRecorder___c__DisplayClass39_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Liv::Lck::Recorder::LckRecorder___c__DisplayClass39_0::__cordl_internal_set___4__this(::Liv::Lck::Recorder::LckRecorder*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
inline void Liv::Lck::Recorder::LckRecorder___c__DisplayClass39_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckRecorder___c__DisplayClass39_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Liv::Lck::Recorder::LckRecorder___c__DisplayClass39_0::_CopyRecordingToGalleryWhenReady_b__1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckRecorder___c__DisplayClass39_0*>(),
                        {"<CopyRecordingToGalleryWhenReady>b__1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Liv::Lck::Recorder::LckRecorder___c__DisplayClass39_0* Liv::Lck::Recorder::LckRecorder___c__DisplayClass39_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::Recorder::LckRecorder___c__DisplayClass39_0*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::Recorder::LckRecorder___c__DisplayClass39_0::LckRecorder___c__DisplayClass39_0()   {
}
