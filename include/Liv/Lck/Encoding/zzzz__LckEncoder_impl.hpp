#pragma once
// IWYU pragma private; include "Liv/Lck/Encoding/LckEncoder.hpp"
#include "Liv/Lck/Encoding/zzzz__EncoderSessionData_impl.hpp"
#include "Liv/Lck/Encoding/zzzz__LckNativeEncodingApi_AudioTrack_impl.hpp"
#include "Liv/NGFX/zzzz__LogLevel_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/Profiling/zzzz__ProfilerMarker_impl.hpp"
#include "Liv/Lck/Encoding/zzzz__LckEncoder_def.hpp"
#include "GlobalNamespace/zzzz__ILckVideoTextureProvider_def.hpp"
#include "Liv/Lck/Collections/zzzz__AudioBuffer_def.hpp"
#include "Liv/Lck/Encoding/zzzz__EncoderConsumer_def.hpp"
#include "Liv/Lck/Encoding/zzzz__EncoderSessionData_def.hpp"
#include "Liv/Lck/Encoding/zzzz__ILckEncoder_def.hpp"
#include "Liv/Lck/Encoding/zzzz__LckEncodedPacketHandler_def.hpp"
#include "Liv/Lck/Encoding/zzzz__LckEncoder_CaptureData_def.hpp"
#include "Liv/Lck/Encoding/zzzz__LckEncoder__ReleaseEncoderAsync_d__32_def.hpp"
#include "Liv/Lck/Encoding/zzzz__LckEncoder__StopEncoderInternal_d__36_def.hpp"
#include "Liv/Lck/Encoding/zzzz__LckEncoder_def.hpp"
#include "Liv/Lck/Encoding/zzzz__LckNativeEncodingApi_AudioTrack_def.hpp"
#include "Liv/Lck/Encoding/zzzz__LckNativeEncodingApi_FrameTexture_def.hpp"
#include "Liv/Lck/Encoding/zzzz__LckNativeEncodingApi_ResourceData_def.hpp"
#include "Liv/Lck/Encoding/zzzz__LckNativeEncodingApi_TrackInfo_def.hpp"
#include "Liv/Lck/ErrorHandling/zzzz__CaptureErrorType_def.hpp"
#include "Liv/Lck/ErrorHandling/zzzz__ILckCaptureErrorDispatcher_def.hpp"
#include "Liv/Lck/Telemetry/zzzz__ILckTelemetryClient_def.hpp"
#include "Liv/Lck/zzzz__CameraTrackDescriptor_def.hpp"
#include "Liv/Lck/zzzz__ILckEventBus_def.hpp"
#include "Liv/Lck/zzzz__ILckOutputConfigurer_def.hpp"
#include "Liv/Lck/zzzz__LckResult_def.hpp"
#include "Liv/NGFX/zzzz__Handle_1_def.hpp"
#include "Liv/NGFX/zzzz__LogLevel_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Func_3_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
//  Writing Method size for method: ::Liv::Lck::Encoding::LckEncoder.get_CaptureErrorDispatcher
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::ErrorHandling::ILckCaptureErrorDispatcher* (*)()>(&::Liv::Lck::Encoding::LckEncoder::get_CaptureErrorDispatcher)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9d42fdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckEncoder*>(),
                        {"get_CaptureErrorDispatcher", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Encoding::LckEncoder.set_CaptureErrorDispatcher
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Liv::Lck::ErrorHandling::ILckCaptureErrorDispatcher*)>(&::Liv::Lck::Encoding::LckEncoder::set_CaptureErrorDispatcher)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x9d43034;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckEncoder*>(),
                        {"set_CaptureErrorDispatcher", {}, {::i2c::type_of<::Liv::Lck::ErrorHandling::ILckCaptureErrorDispatcher*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Encoding::LckEncoder._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Encoding::LckEncoder::*)(::Liv::Lck::ILckOutputConfigurer*, ::GlobalNamespace::ILckVideoTextureProvider*, ::Liv::Lck::ILckEventBus*, ::Liv::Lck::Telemetry::ILckTelemetryClient*, ::Liv::Lck::ErrorHandling::ILckCaptureErrorDispatcher*)>(&::Liv::Lck::Encoding::LckEncoder::_ctor)> {
  constexpr static std::size_t size = 0x2ac;
  constexpr static std::size_t addrs = 0x9d43094;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckEncoder*>(),
                        {".ctor", {}, {::i2c::type_of<::Liv::Lck::ILckOutputConfigurer*>(), ::i2c::type_of<::GlobalNamespace::ILckVideoTextureProvider*>(), ::i2c::type_of<::Liv::Lck::ILckEventBus*>(), ::i2c::type_of<::Liv::Lck::Telemetry::ILckTelemetryClient*>(), ::i2c::type_of<::Liv::Lck::ErrorHandling::ILckCaptureErrorDispatcher*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Encoding::LckEncoder.IsActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Liv::Lck::Encoding::LckEncoder::*)()>(&::Liv::Lck::Encoding::LckEncoder::IsActive)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d43340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckEncoder*>(),
                        {"IsActive", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Encoding::LckEncoder.IsPaused
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Liv::Lck::Encoding::LckEncoder::*)()>(&::Liv::Lck::Encoding::LckEncoder::IsPaused)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x9d43348;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckEncoder*>(),
                        {"IsPaused", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Encoding::LckEncoder.AcquireEncoder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult* (::Liv::Lck::Encoding::LckEncoder::*)(::Liv::Lck::Encoding::EncoderConsumer, ::Liv::Lck::CameraTrackDescriptor, ::System::Collections::Generic::IEnumerable_1<::Liv::Lck::Encoding::LckEncodedPacketHandler>*)>(&::Liv::Lck::Encoding::LckEncoder::AcquireEncoder)> {
  constexpr static std::size_t size = 0x29c;
  constexpr static std::size_t addrs = 0x9d43444;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckEncoder*>(),
                        {"AcquireEncoder", {}, {::i2c::type_of<::Liv::Lck::Encoding::EncoderConsumer>(), ::i2c::type_of<::Liv::Lck::CameraTrackDescriptor>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::Liv::Lck::Encoding::LckEncodedPacketHandler>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Encoding::LckEncoder.ReleaseEncoderAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Liv::Lck::LckResult*>* (::Liv::Lck::Encoding::LckEncoder::*)(::Liv::Lck::Encoding::EncoderConsumer, ::System::Collections::Generic::IEnumerable_1<::Liv::Lck::Encoding::LckEncodedPacketHandler>*)>(&::Liv::Lck::Encoding::LckEncoder::ReleaseEncoderAsync)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x9d43dac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckEncoder*>(),
                        {"ReleaseEncoderAsync", {}, {::i2c::type_of<::Liv::Lck::Encoding::EncoderConsumer>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::Liv::Lck::Encoding::LckEncodedPacketHandler>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Encoding::LckEncoder.StartEncoderInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult* (::Liv::Lck::Encoding::LckEncoder::*)(::Liv::Lck::CameraTrackDescriptor, ::System::Collections::Generic::IEnumerable_1<::Liv::Lck::Encoding::LckEncodedPacketHandler>*)>(&::Liv::Lck::Encoding::LckEncoder::StartEncoderInternal)> {
  constexpr static std::size_t size = 0x404;
  constexpr static std::size_t addrs = 0x9d436e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckEncoder*>(),
                        {"StartEncoderInternal", {}, {::i2c::type_of<::Liv::Lck::CameraTrackDescriptor>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::Liv::Lck::Encoding::LckEncodedPacketHandler>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Encoding::LckEncoder.StopNativeEncoder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult* (::Liv::Lck::Encoding::LckEncoder::*)()>(&::Liv::Lck::Encoding::LckEncoder::StopNativeEncoder)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x9d448a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckEncoder*>(),
                        {"StopNativeEncoder", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Encoding::LckEncoder.FinalizeEncoderStop
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult* (::Liv::Lck::Encoding::LckEncoder::*)()>(&::Liv::Lck::Encoding::LckEncoder::FinalizeEncoderStop)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x9d44a54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckEncoder*>(),
                        {"FinalizeEncoderStop", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Encoding::LckEncoder.StopEncoderInternal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Liv::Lck::LckResult*>* (::Liv::Lck::Encoding::LckEncoder::*)()>(&::Liv::Lck::Encoding::LckEncoder::StopEncoderInternal)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x9d44e54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckEncoder*>(),
                        {"StopEncoderInternal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Encoding::LckEncoder.EncodeFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Liv::Lck::Encoding::LckEncoder::*)(float_t, ::Liv::Lck::Collections::AudioBuffer*, bool)>(&::Liv::Lck::Encoding::LckEncoder::EncodeFrame)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x9d44f5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckEncoder*>(),
                        {"EncodeFrame", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::Liv::Lck::Collections::AudioBuffer*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Encoding::LckEncoder.SetLogLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Encoding::LckEncoder::*)(::Liv::NGFX::LogLevel)>(&::Liv::Lck::Encoding::LckEncoder::SetLogLevel)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9d454f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckEncoder*>(),
                        {"SetLogLevel", {}, {::i2c::type_of<::Liv::NGFX::LogLevel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Encoding::LckEncoder.GetCurrentSessionData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::Encoding::EncoderSessionData (::Liv::Lck::Encoding::LckEncoder::*)()>(&::Liv::Lck::Encoding::LckEncoder::GetCurrentSessionData)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9d45594;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckEncoder*>(),
                        {"GetCurrentSessionData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Encoding::LckEncoder.ProvideDataToEncoder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Encoding::LckEncoder::*)(float_t, ::Liv::Lck::Collections::AudioBuffer*, bool)>(&::Liv::Lck::Encoding::LckEncoder::ProvideDataToEncoder)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x9d450f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckEncoder*>(),
                        {"ProvideDataToEncoder", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::Liv::Lck::Collections::AudioBuffer*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Encoding::LckEncoder.AddEncodedPacketHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Encoding::LckEncoder::*)(::Liv::Lck::Encoding::LckEncodedPacketHandler)>(&::Liv::Lck::Encoding::LckEncoder::AddEncodedPacketHandler)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x9d45760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckEncoder*>(),
                        {"AddEncodedPacketHandler", {}, {::i2c::type_of<::Liv::Lck::Encoding::LckEncodedPacketHandler>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Encoding::LckEncoder.AddEncodedPacketHandlers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Encoding::LckEncoder::*)(::System::Collections::Generic::IEnumerable_1<::Liv::Lck::Encoding::LckEncodedPacketHandler>*)>(&::Liv::Lck::Encoding::LckEncoder::AddEncodedPacketHandlers)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x9d43ae4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckEncoder*>(),
                        {"AddEncodedPacketHandlers", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::Liv::Lck::Encoding::LckEncodedPacketHandler>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Encoding::LckEncoder.RemoveEncodedPacketHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Encoding::LckEncoder::*)(::Liv::Lck::Encoding::LckEncodedPacketHandler)>(&::Liv::Lck::Encoding::LckEncoder::RemoveEncodedPacketHandler)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x9d45b00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckEncoder*>(),
                        {"RemoveEncodedPacketHandler", {}, {::i2c::type_of<::Liv::Lck::Encoding::LckEncodedPacketHandler>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Encoding::LckEncoder.CreateEncoderInstance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Liv::Lck::Encoding::LckEncoder::*)()>(&::Liv::Lck::Encoding::LckEncoder::CreateEncoderInstance)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x9d43ed8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckEncoder*>(),
                        {"CreateEncoderInstance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Encoding::LckEncoder.AllocateFrameSubmission
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (::Liv::Lck::Encoding::LckEncoder::*)(float_t, ::ArrayW<bool>, ::ArrayW<::GlobalNamespace::LckNativeEncodingApi_AudioTrack>)>(&::Liv::Lck::Encoding::LckEncoder::AllocateFrameSubmission)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x9d455a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckEncoder*>(),
                        {"AllocateFrameSubmission", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<bool>>(), ::i2c::type_of<::ArrayW<::GlobalNamespace::LckNativeEncodingApi_AudioTrack>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Encoding::LckEncoder.EncodeFrameData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::Liv::Lck::Encoding::LckEncoder::EncodeFrameData)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x9d45690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckEncoder*>(),
                        {"EncodeFrameData", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Encoding::LckEncoder.ReleaseNativeRenderBuffers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Encoding::LckEncoder::*)()>(&::Liv::Lck::Encoding::LckEncoder::ReleaseNativeRenderBuffers)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x9d4607c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckEncoder*>(),
                        {"ReleaseNativeRenderBuffers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Encoding::LckEncoder.GetAudioFrameSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Liv::Lck::Encoding::LckEncoder::*)()>(&::Liv::Lck::Encoding::LckEncoder::GetAudioFrameSize)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9d462f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckEncoder*>(),
                        {"GetAudioFrameSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Encoding::LckEncoder.ReleaseResources
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Encoding::LckEncoder::*)()>(&::Liv::Lck::Encoding::LckEncoder::ReleaseResources)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x9d44cd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckEncoder*>(),
                        {"ReleaseResources", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Encoding::LckEncoder.InitCameraRenderData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult* (::Liv::Lck::Encoding::LckEncoder::*)(::ArrayW<::GlobalNamespace::LckNativeEncodingApi_TrackInfo>)>(&::Liv::Lck::Encoding::LckEncoder::InitCameraRenderData)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0x9d441c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckEncoder*>(),
                        {"InitCameraRenderData", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::LckNativeEncodingApi_TrackInfo>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Encoding::LckEncoder.InitCameraRenderData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::LckEncoder_CaptureData (::Liv::Lck::Encoding::LckEncoder::*)(int32_t)>(&::Liv::Lck::Encoding::LckEncoder::InitCameraRenderData)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x9d463e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckEncoder*>(),
                        {"InitCameraRenderData", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Encoding::LckEncoder.InitTextureHandles
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Encoding::LckEncoder::*)()>(&::Liv::Lck::Encoding::LckEncoder::InitTextureHandles)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x9d4461c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckEncoder*>(),
                        {"InitTextureHandles", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Encoding::LckEncoder.ExecuteNativeInitResourcesFunction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Encoding::LckEncoder::*)()>(&::Liv::Lck::Encoding::LckEncoder::ExecuteNativeInitResourcesFunction)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x9d44520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckEncoder*>(),
                        {"ExecuteNativeInitResourcesFunction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Encoding::LckEncoder.UnregisterEncodedPacketHandlers
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Encoding::LckEncoder::*)()>(&::Liv::Lck::Encoding::LckEncoder::UnregisterEncodedPacketHandlers)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x9d44c1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckEncoder*>(),
                        {"UnregisterEncodedPacketHandlers", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Encoding::LckEncoder.HandleEncodeFrameError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Encoding::LckEncoder::*)(::StringW)>(&::Liv::Lck::Encoding::LckEncoder::HandleEncodeFrameError)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x9d45458;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckEncoder*>(),
                        {"HandleEncodeFrameError", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Encoding::LckEncoder.CreateTrackInfoInteropData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::GlobalNamespace::LckNativeEncodingApi_TrackInfo> (*)(::Liv::Lck::CameraTrackDescriptor, uint32_t, uint32_t)>(&::Liv::Lck::Encoding::LckEncoder::CreateTrackInfoInteropData)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x9d44120;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckEncoder*>(),
                        {"CreateTrackInfoInteropData", {}, {::i2c::type_of<::Liv::Lck::CameraTrackDescriptor>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Encoding::LckEncoder.OnNativeCaptureError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Liv::Lck::ErrorHandling::CaptureErrorType, ::StringW)>(&::Liv::Lck::Encoding::LckEncoder::OnNativeCaptureError)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x9d42dbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckEncoder*>(),
                        {"OnNativeCaptureError", {}, {::i2c::type_of<::Liv::Lck::ErrorHandling::CaptureErrorType>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Encoding::LckEncoder.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Encoding::LckEncoder::*)()>(&::Liv::Lck::Encoding::LckEncoder::Dispose)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x9d46690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckEncoder*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Liv::Lck::ILckOutputConfigurer*& Liv::Lck::Encoding::LckEncoder::__cordl_internal_get__outputConfigurer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____outputConfigurer;
}
constexpr ::Liv::Lck::ILckOutputConfigurer* const& Liv::Lck::Encoding::LckEncoder::__cordl_internal_get__outputConfigurer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____outputConfigurer;
}
constexpr void Liv::Lck::Encoding::LckEncoder::__cordl_internal_set__outputConfigurer(::Liv::Lck::ILckOutputConfigurer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____outputConfigurer = value;
}
constexpr ::GlobalNamespace::ILckVideoTextureProvider*& Liv::Lck::Encoding::LckEncoder::__cordl_internal_get__videoTextureProvider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____videoTextureProvider;
}
constexpr ::GlobalNamespace::ILckVideoTextureProvider* const& Liv::Lck::Encoding::LckEncoder::__cordl_internal_get__videoTextureProvider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____videoTextureProvider;
}
constexpr void Liv::Lck::Encoding::LckEncoder::__cordl_internal_set__videoTextureProvider(::GlobalNamespace::ILckVideoTextureProvider*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____videoTextureProvider = value;
}
constexpr ::Liv::Lck::ILckEventBus*& Liv::Lck::Encoding::LckEncoder::__cordl_internal_get__eventBus()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____eventBus;
}
constexpr ::Liv::Lck::ILckEventBus* const& Liv::Lck::Encoding::LckEncoder::__cordl_internal_get__eventBus() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____eventBus;
}
constexpr void Liv::Lck::Encoding::LckEncoder::__cordl_internal_set__eventBus(::Liv::Lck::ILckEventBus*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____eventBus = value;
}
constexpr ::Liv::Lck::Telemetry::ILckTelemetryClient*& Liv::Lck::Encoding::LckEncoder::__cordl_internal_get__telemetryClient()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____telemetryClient;
}
constexpr ::Liv::Lck::Telemetry::ILckTelemetryClient* const& Liv::Lck::Encoding::LckEncoder::__cordl_internal_get__telemetryClient() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____telemetryClient;
}
constexpr void Liv::Lck::Encoding::LckEncoder::__cordl_internal_set__telemetryClient(::Liv::Lck::Telemetry::ILckTelemetryClient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____telemetryClient = value;
}
constexpr ::Liv::Lck::ErrorHandling::ILckCaptureErrorDispatcher*& Liv::Lck::Encoding::LckEncoder::__cordl_internal_get__captureErrorDispatcher()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____captureErrorDispatcher;
}
constexpr ::Liv::Lck::ErrorHandling::ILckCaptureErrorDispatcher* const& Liv::Lck::Encoding::LckEncoder::__cordl_internal_get__captureErrorDispatcher() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____captureErrorDispatcher;
}
constexpr void Liv::Lck::Encoding::LckEncoder::__cordl_internal_set__captureErrorDispatcher(::Liv::Lck::ErrorHandling::ILckCaptureErrorDispatcher*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____captureErrorDispatcher = value;
}
constexpr ::System::Collections::Generic::IList_1<::Liv::Lck::Encoding::LckEncodedPacketHandler>*& Liv::Lck::Encoding::LckEncoder::__cordl_internal_get__registeredPacketHandlers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____registeredPacketHandlers;
}
constexpr ::System::Collections::Generic::IList_1<::Liv::Lck::Encoding::LckEncodedPacketHandler>* const& Liv::Lck::Encoding::LckEncoder::__cordl_internal_get__registeredPacketHandlers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____registeredPacketHandlers;
}
constexpr void Liv::Lck::Encoding::LckEncoder::__cordl_internal_set__registeredPacketHandlers(::System::Collections::Generic::IList_1<::Liv::Lck::Encoding::LckEncodedPacketHandler>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____registeredPacketHandlers = value;
}
constexpr ::System::Collections::Generic::HashSet_1<::Liv::Lck::Encoding::EncoderConsumer>*& Liv::Lck::Encoding::LckEncoder::__cordl_internal_get__activeConsumers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activeConsumers;
}
constexpr ::System::Collections::Generic::HashSet_1<::Liv::Lck::Encoding::EncoderConsumer>* const& Liv::Lck::Encoding::LckEncoder::__cordl_internal_get__activeConsumers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activeConsumers;
}
constexpr void Liv::Lck::Encoding::LckEncoder::__cordl_internal_set__activeConsumers(::System::Collections::Generic::HashSet_1<::Liv::Lck::Encoding::EncoderConsumer>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____activeConsumers = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::Liv::Lck::Encoding::EncoderConsumer,::System::Collections::Generic::List_1<::Liv::Lck::Encoding::LckEncodedPacketHandler>*>*& Liv::Lck::Encoding::LckEncoder::__cordl_internal_get__consumerHandlers()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____consumerHandlers;
}
constexpr ::System::Collections::Generic::Dictionary_2<::Liv::Lck::Encoding::EncoderConsumer,::System::Collections::Generic::List_1<::Liv::Lck::Encoding::LckEncodedPacketHandler>*>* const& Liv::Lck::Encoding::LckEncoder::__cordl_internal_get__consumerHandlers() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____consumerHandlers;
}
constexpr void Liv::Lck::Encoding::LckEncoder::__cordl_internal_set__consumerHandlers(::System::Collections::Generic::Dictionary_2<::Liv::Lck::Encoding::EncoderConsumer,::System::Collections::Generic::List_1<::Liv::Lck::Encoding::LckEncodedPacketHandler>*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____consumerHandlers = value;
}
constexpr ::ArrayW<::GlobalNamespace::LckNativeEncodingApi_AudioTrack>& Liv::Lck::Encoding::LckEncoder::__cordl_internal_get__audioTracks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioTracks;
}
constexpr ::ArrayW<::GlobalNamespace::LckNativeEncodingApi_AudioTrack> const& Liv::Lck::Encoding::LckEncoder::__cordl_internal_get__audioTracks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____audioTracks;
}
constexpr void Liv::Lck::Encoding::LckEncoder::__cordl_internal_set__audioTracks(::ArrayW<::GlobalNamespace::LckNativeEncodingApi_AudioTrack>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____audioTracks = value;
}
constexpr ::ArrayW<bool>& Liv::Lck::Encoding::LckEncoder::__cordl_internal_get__readyVideoTracks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____readyVideoTracks;
}
constexpr ::ArrayW<bool> const& Liv::Lck::Encoding::LckEncoder::__cordl_internal_get__readyVideoTracks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____readyVideoTracks;
}
constexpr void Liv::Lck::Encoding::LckEncoder::__cordl_internal_set__readyVideoTracks(::ArrayW<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____readyVideoTracks = value;
}
constexpr ::Liv::NGFX::LogLevel& Liv::Lck::Encoding::LckEncoder::__cordl_internal_get__logLevel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____logLevel;
}
constexpr ::Liv::NGFX::LogLevel const& Liv::Lck::Encoding::LckEncoder::__cordl_internal_get__logLevel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____logLevel;
}
constexpr void Liv::Lck::Encoding::LckEncoder::__cordl_internal_set__logLevel(::Liv::NGFX::LogLevel  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____logLevel = value;
}
constexpr ::System::IntPtr& Liv::Lck::Encoding::LckEncoder::__cordl_internal_get__encoderContext()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____encoderContext;
}
constexpr ::System::IntPtr const& Liv::Lck::Encoding::LckEncoder::__cordl_internal_get__encoderContext() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____encoderContext;
}
constexpr void Liv::Lck::Encoding::LckEncoder::__cordl_internal_set__encoderContext(::System::IntPtr  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____encoderContext = value;
}
constexpr ::Liv::NGFX::Handle_1<::ArrayW<::GlobalNamespace::LckNativeEncodingApi_FrameTexture>>*& Liv::Lck::Encoding::LckEncoder::__cordl_internal_get__textureIds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____textureIds;
}
constexpr ::Liv::NGFX::Handle_1<::ArrayW<::GlobalNamespace::LckNativeEncodingApi_FrameTexture>>* const& Liv::Lck::Encoding::LckEncoder::__cordl_internal_get__textureIds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____textureIds;
}
constexpr void Liv::Lck::Encoding::LckEncoder::__cordl_internal_set__textureIds(::Liv::NGFX::Handle_1<::ArrayW<::GlobalNamespace::LckNativeEncodingApi_FrameTexture>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____textureIds = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::LckNativeEncodingApi_FrameTexture>*& Liv::Lck::Encoding::LckEncoder::__cordl_internal_get__texturesList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____texturesList;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::LckNativeEncodingApi_FrameTexture>* const& Liv::Lck::Encoding::LckEncoder::__cordl_internal_get__texturesList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____texturesList;
}
constexpr void Liv::Lck::Encoding::LckEncoder::__cordl_internal_set__texturesList(::System::Collections::Generic::List_1<::GlobalNamespace::LckNativeEncodingApi_FrameTexture>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____texturesList = value;
}
constexpr ::Liv::NGFX::Handle_1<::GlobalNamespace::LckNativeEncodingApi_ResourceData>*& Liv::Lck::Encoding::LckEncoder::__cordl_internal_get__resourceInitData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resourceInitData;
}
constexpr ::Liv::NGFX::Handle_1<::GlobalNamespace::LckNativeEncodingApi_ResourceData>* const& Liv::Lck::Encoding::LckEncoder::__cordl_internal_get__resourceInitData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resourceInitData;
}
constexpr void Liv::Lck::Encoding::LckEncoder::__cordl_internal_set__resourceInitData(::Liv::NGFX::Handle_1<::GlobalNamespace::LckNativeEncodingApi_ResourceData>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____resourceInitData = value;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::LckEncoder_CaptureData>*& Liv::Lck::Encoding::LckEncoder::__cordl_internal_get__cameraRenderData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cameraRenderData;
}
constexpr ::System::Collections::Generic::List_1<::GlobalNamespace::LckEncoder_CaptureData>* const& Liv::Lck::Encoding::LckEncoder::__cordl_internal_get__cameraRenderData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cameraRenderData;
}
constexpr void Liv::Lck::Encoding::LckEncoder::__cordl_internal_set__cameraRenderData(::System::Collections::Generic::List_1<::GlobalNamespace::LckEncoder_CaptureData>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cameraRenderData = value;
}
constexpr bool& Liv::Lck::Encoding::LckEncoder::__cordl_internal_get__isActive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isActive;
}
constexpr bool const& Liv::Lck::Encoding::LckEncoder::__cordl_internal_get__isActive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____isActive;
}
constexpr void Liv::Lck::Encoding::LckEncoder::__cordl_internal_set__isActive(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____isActive = value;
}
constexpr ::System::IntPtr& Liv::Lck::Encoding::LckEncoder::__cordl_internal_get__resourceContext()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resourceContext;
}
constexpr ::System::IntPtr const& Liv::Lck::Encoding::LckEncoder::__cordl_internal_get__resourceContext() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____resourceContext;
}
constexpr void Liv::Lck::Encoding::LckEncoder::__cordl_internal_set__resourceContext(::System::IntPtr  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____resourceContext = value;
}
constexpr bool& Liv::Lck::Encoding::LckEncoder::__cordl_internal_get__disposed()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disposed;
}
constexpr bool const& Liv::Lck::Encoding::LckEncoder::__cordl_internal_get__disposed() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____disposed;
}
constexpr void Liv::Lck::Encoding::LckEncoder::__cordl_internal_set__disposed(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____disposed = value;
}
constexpr ::Liv::Lck::Encoding::EncoderSessionData& Liv::Lck::Encoding::LckEncoder::__cordl_internal_get__currentEncoderSessionData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentEncoderSessionData;
}
constexpr ::Liv::Lck::Encoding::EncoderSessionData const& Liv::Lck::Encoding::LckEncoder::__cordl_internal_get__currentEncoderSessionData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentEncoderSessionData;
}
constexpr void Liv::Lck::Encoding::LckEncoder::__cordl_internal_set__currentEncoderSessionData(::Liv::Lck::Encoding::EncoderSessionData  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentEncoderSessionData = value;
}
inline void Liv::Lck::Encoding::LckEncoder::setStaticF__allocateFrameSubmissionMarker(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "_allocateFrameSubmissionMarker", ::Liv::Lck::Encoding::LckEncoder*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker Liv::Lck::Encoding::LckEncoder::getStaticF__allocateFrameSubmissionMarker()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "_allocateFrameSubmissionMarker", ::Liv::Lck::Encoding::LckEncoder*>();
}
inline void Liv::Lck::Encoding::LckEncoder::setStaticF__commandBufferMarker(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "_commandBufferMarker", ::Liv::Lck::Encoding::LckEncoder*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker Liv::Lck::Encoding::LckEncoder::getStaticF__commandBufferMarker()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "_commandBufferMarker", ::Liv::Lck::Encoding::LckEncoder*>();
}
inline void Liv::Lck::Encoding::LckEncoder::setStaticF__releaseNativeRenderBufferMarker(::Unity::Profiling::ProfilerMarker  value)  {
::cordl_internals::setStaticField<::Unity::Profiling::ProfilerMarker, "_releaseNativeRenderBufferMarker", ::Liv::Lck::Encoding::LckEncoder*>(std::forward<::Unity::Profiling::ProfilerMarker>(value));
}
inline ::Unity::Profiling::ProfilerMarker Liv::Lck::Encoding::LckEncoder::getStaticF__releaseNativeRenderBufferMarker()  {
return ::cordl_internals::getStaticField<::Unity::Profiling::ProfilerMarker, "_releaseNativeRenderBufferMarker", ::Liv::Lck::Encoding::LckEncoder*>();
}
inline void Liv::Lck::Encoding::LckEncoder::setStaticF__CaptureErrorDispatcher_k__BackingField(::Liv::Lck::ErrorHandling::ILckCaptureErrorDispatcher*  value)  {
::cordl_internals::setStaticField<::Liv::Lck::ErrorHandling::ILckCaptureErrorDispatcher*, "<CaptureErrorDispatcher>k__BackingField", ::Liv::Lck::Encoding::LckEncoder*>(std::forward<::Liv::Lck::ErrorHandling::ILckCaptureErrorDispatcher*>(value));
}
inline ::Liv::Lck::ErrorHandling::ILckCaptureErrorDispatcher* Liv::Lck::Encoding::LckEncoder::getStaticF__CaptureErrorDispatcher_k__BackingField()  {
return ::cordl_internals::getStaticField<::Liv::Lck::ErrorHandling::ILckCaptureErrorDispatcher*, "<CaptureErrorDispatcher>k__BackingField", ::Liv::Lck::Encoding::LckEncoder*>();
}
inline ::Liv::Lck::ErrorHandling::ILckCaptureErrorDispatcher* Liv::Lck::Encoding::LckEncoder::get_CaptureErrorDispatcher()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckEncoder*>(),
                        {"get_CaptureErrorDispatcher", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::ErrorHandling::ILckCaptureErrorDispatcher*>(nullptr, ___internal_method);
}
inline void Liv::Lck::Encoding::LckEncoder::set_CaptureErrorDispatcher(::Liv::Lck::ErrorHandling::ILckCaptureErrorDispatcher*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckEncoder*>(),
                        {"set_CaptureErrorDispatcher", {}, {::i2c::type_of<::Liv::Lck::ErrorHandling::ILckCaptureErrorDispatcher*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Liv::Lck::Encoding::LckEncoder::_ctor(::Liv::Lck::ILckOutputConfigurer*  outputConfigurer, ::GlobalNamespace::ILckVideoTextureProvider*  videoTextureProvider, ::Liv::Lck::ILckEventBus*  eventBus, ::Liv::Lck::Telemetry::ILckTelemetryClient*  telemetryClient, ::Liv::Lck::ErrorHandling::ILckCaptureErrorDispatcher*  captureErrorDispatcher)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckEncoder*>(),
                        {".ctor", {}, {::i2c::type_of<::Liv::Lck::ILckOutputConfigurer*>(), ::i2c::type_of<::GlobalNamespace::ILckVideoTextureProvider*>(), ::i2c::type_of<::Liv::Lck::ILckEventBus*>(), ::i2c::type_of<::Liv::Lck::Telemetry::ILckTelemetryClient*>(), ::i2c::type_of<::Liv::Lck::ErrorHandling::ILckCaptureErrorDispatcher*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, outputConfigurer, videoTextureProvider, eventBus, telemetryClient, captureErrorDispatcher);
}
inline bool Liv::Lck::Encoding::LckEncoder::IsActive()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckEncoder*>(),
                        {"IsActive", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Liv::Lck::Encoding::LckEncoder::IsPaused()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckEncoder*>(),
                        {"IsPaused", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Liv::Lck::LckResult* Liv::Lck::Encoding::LckEncoder::AcquireEncoder(::Liv::Lck::Encoding::EncoderConsumer  consumer, ::Liv::Lck::CameraTrackDescriptor  descriptor, ::System::Collections::Generic::IEnumerable_1<::Liv::Lck::Encoding::LckEncodedPacketHandler>*  handlers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckEncoder*>(),
                        {"AcquireEncoder", {}, {::i2c::type_of<::Liv::Lck::Encoding::EncoderConsumer>(), ::i2c::type_of<::Liv::Lck::CameraTrackDescriptor>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::Liv::Lck::Encoding::LckEncodedPacketHandler>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult*>(this, ___internal_method, consumer, descriptor, handlers);
}
inline ::System::Threading::Tasks::Task_1<::Liv::Lck::LckResult*>* Liv::Lck::Encoding::LckEncoder::ReleaseEncoderAsync(::Liv::Lck::Encoding::EncoderConsumer  consumer, ::System::Collections::Generic::IEnumerable_1<::Liv::Lck::Encoding::LckEncodedPacketHandler>*  handlers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckEncoder*>(),
                        {"ReleaseEncoderAsync", {}, {::i2c::type_of<::Liv::Lck::Encoding::EncoderConsumer>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::Liv::Lck::Encoding::LckEncodedPacketHandler>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Liv::Lck::LckResult*>*>(this, ___internal_method, consumer, handlers);
}
inline ::Liv::Lck::LckResult* Liv::Lck::Encoding::LckEncoder::StartEncoderInternal(::Liv::Lck::CameraTrackDescriptor  cameraTrackDescriptor, ::System::Collections::Generic::IEnumerable_1<::Liv::Lck::Encoding::LckEncodedPacketHandler>*  initialHandlers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckEncoder*>(),
                        {"StartEncoderInternal", {}, {::i2c::type_of<::Liv::Lck::CameraTrackDescriptor>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::Liv::Lck::Encoding::LckEncodedPacketHandler>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult*>(this, ___internal_method, cameraTrackDescriptor, initialHandlers);
}
inline ::Liv::Lck::LckResult* Liv::Lck::Encoding::LckEncoder::StopNativeEncoder()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckEncoder*>(),
                        {"StopNativeEncoder", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult*>(this, ___internal_method);
}
inline ::Liv::Lck::LckResult* Liv::Lck::Encoding::LckEncoder::FinalizeEncoderStop()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckEncoder*>(),
                        {"FinalizeEncoderStop", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult*>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::Liv::Lck::LckResult*>* Liv::Lck::Encoding::LckEncoder::StopEncoderInternal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckEncoder*>(),
                        {"StopEncoderInternal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Liv::Lck::LckResult*>*>(this, ___internal_method);
}
inline bool Liv::Lck::Encoding::LckEncoder::EncodeFrame(float_t  videoTimeSeconds, ::Liv::Lck::Collections::AudioBuffer*  audioData, bool  encodeVideo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckEncoder*>(),
                        {"EncodeFrame", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::Liv::Lck::Collections::AudioBuffer*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, videoTimeSeconds, audioData, encodeVideo);
}
inline void Liv::Lck::Encoding::LckEncoder::SetLogLevel(::Liv::NGFX::LogLevel  logLevel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckEncoder*>(),
                        {"SetLogLevel", {}, {::i2c::type_of<::Liv::NGFX::LogLevel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, logLevel);
}
inline ::Liv::Lck::Encoding::EncoderSessionData Liv::Lck::Encoding::LckEncoder::GetCurrentSessionData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckEncoder*>(),
                        {"GetCurrentSessionData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::Encoding::EncoderSessionData>(this, ___internal_method);
}
inline void Liv::Lck::Encoding::LckEncoder::ProvideDataToEncoder(float_t  videoTime, ::Liv::Lck::Collections::AudioBuffer*  audioData, bool  encodeVideo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckEncoder*>(),
                        {"ProvideDataToEncoder", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::Liv::Lck::Collections::AudioBuffer*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, videoTime, audioData, encodeVideo);
}
inline void Liv::Lck::Encoding::LckEncoder::AddEncodedPacketHandler(::Liv::Lck::Encoding::LckEncodedPacketHandler  handler)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckEncoder*>(),
                        {"AddEncodedPacketHandler", {}, {::i2c::type_of<::Liv::Lck::Encoding::LckEncodedPacketHandler>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handler);
}
inline void Liv::Lck::Encoding::LckEncoder::AddEncodedPacketHandlers(::System::Collections::Generic::IEnumerable_1<::Liv::Lck::Encoding::LckEncodedPacketHandler>*  encodedPacketHandlers)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckEncoder*>(),
                        {"AddEncodedPacketHandlers", {}, {::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::Liv::Lck::Encoding::LckEncodedPacketHandler>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, encodedPacketHandlers);
}
inline void Liv::Lck::Encoding::LckEncoder::RemoveEncodedPacketHandler(::Liv::Lck::Encoding::LckEncodedPacketHandler  handler)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckEncoder*>(),
                        {"RemoveEncodedPacketHandler", {}, {::i2c::type_of<::Liv::Lck::Encoding::LckEncodedPacketHandler>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, handler);
}
inline bool Liv::Lck::Encoding::LckEncoder::CreateEncoderInstance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckEncoder*>(),
                        {"CreateEncoderInstance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::IntPtr Liv::Lck::Encoding::LckEncoder::AllocateFrameSubmission(float_t  frameTime, ::ArrayW<bool>  readyTracks, ::ArrayW<::GlobalNamespace::LckNativeEncodingApi_AudioTrack>  audioTracks)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckEncoder*>(),
                        {"AllocateFrameSubmission", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::ArrayW<bool>>(), ::i2c::type_of<::ArrayW<::GlobalNamespace::LckNativeEncodingApi_AudioTrack>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(this, ___internal_method, frameTime, readyTracks, audioTracks);
}
inline void Liv::Lck::Encoding::LckEncoder::EncodeFrameData(::System::IntPtr  framePtr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckEncoder*>(),
                        {"EncodeFrameData", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, framePtr);
}
inline void Liv::Lck::Encoding::LckEncoder::ReleaseNativeRenderBuffers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckEncoder*>(),
                        {"ReleaseNativeRenderBuffers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t Liv::Lck::Encoding::LckEncoder::GetAudioFrameSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckEncoder*>(),
                        {"GetAudioFrameSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Liv::Lck::Encoding::LckEncoder::ReleaseResources()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckEncoder*>(),
                        {"ReleaseResources", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::LckResult* Liv::Lck::Encoding::LckEncoder::InitCameraRenderData(::ArrayW<::GlobalNamespace::LckNativeEncodingApi_TrackInfo>  trackInfo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckEncoder*>(),
                        {"InitCameraRenderData", {}, {::i2c::type_of<::ArrayW<::GlobalNamespace::LckNativeEncodingApi_TrackInfo>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult*>(this, ___internal_method, trackInfo);
}
inline ::GlobalNamespace::LckEncoder_CaptureData Liv::Lck::Encoding::LckEncoder::InitCameraRenderData(int32_t  trackIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckEncoder*>(),
                        {"InitCameraRenderData", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LckEncoder_CaptureData>(this, ___internal_method, trackIndex);
}
inline void Liv::Lck::Encoding::LckEncoder::InitTextureHandles()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckEncoder*>(),
                        {"InitTextureHandles", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::Encoding::LckEncoder::ExecuteNativeInitResourcesFunction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckEncoder*>(),
                        {"ExecuteNativeInitResourcesFunction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::Encoding::LckEncoder::UnregisterEncodedPacketHandlers()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckEncoder*>(),
                        {"UnregisterEncodedPacketHandlers", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::Encoding::LckEncoder::HandleEncodeFrameError(::StringW  errorMessage)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckEncoder*>(),
                        {"HandleEncodeFrameError", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, errorMessage);
}
inline ::ArrayW<::GlobalNamespace::LckNativeEncodingApi_TrackInfo> Liv::Lck::Encoding::LckEncoder::CreateTrackInfoInteropData(::Liv::Lck::CameraTrackDescriptor  cameraTrackDescriptor, uint32_t  audioSampleRate, uint32_t  numberOfAudioChannels)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckEncoder*>(),
                        {"CreateTrackInfoInteropData", {}, {::i2c::type_of<::Liv::Lck::CameraTrackDescriptor>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::GlobalNamespace::LckNativeEncodingApi_TrackInfo>>(nullptr, ___internal_method, cameraTrackDescriptor, audioSampleRate, numberOfAudioChannels);
}
inline void Liv::Lck::Encoding::LckEncoder::OnNativeCaptureError(::Liv::Lck::ErrorHandling::CaptureErrorType  errorType, ::StringW  errorMessage)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckEncoder*>(),
                        {"OnNativeCaptureError", {}, {::i2c::type_of<::Liv::Lck::ErrorHandling::CaptureErrorType>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, errorType, errorMessage);
}
inline void Liv::Lck::Encoding::LckEncoder::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckEncoder*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
/// @brief [Preserve]
inline ::Liv::Lck::Encoding::LckEncoder* Liv::Lck::Encoding::LckEncoder::New_ctor(::Liv::Lck::ILckOutputConfigurer*  outputConfigurer, ::GlobalNamespace::ILckVideoTextureProvider*  videoTextureProvider, ::Liv::Lck::ILckEventBus*  eventBus, ::Liv::Lck::Telemetry::ILckTelemetryClient*  telemetryClient, ::Liv::Lck::ErrorHandling::ILckCaptureErrorDispatcher*  captureErrorDispatcher)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::Encoding::LckEncoder*>(outputConfigurer, videoTextureProvider, eventBus, telemetryClient, captureErrorDispatcher));
}
/// @brief Convert operator to "::Liv::Lck::Encoding::ILckEncoder"
constexpr  Liv::Lck::Encoding::LckEncoder::operator ::Liv::Lck::Encoding::ILckEncoder*() noexcept {
return static_cast<::Liv::Lck::Encoding::ILckEncoder*>(static_cast<void*>(this));
}
/// @brief Convert to "::Liv::Lck::Encoding::ILckEncoder"
constexpr ::Liv::Lck::Encoding::ILckEncoder* Liv::Lck::Encoding::LckEncoder::i___Liv__Lck__Encoding__ILckEncoder() noexcept {
return static_cast<::Liv::Lck::Encoding::ILckEncoder*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Liv::Lck::Encoding::LckEncoder::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Liv::Lck::Encoding::LckEncoder::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Liv::Lck::Encoding::LckEncoder::LckEncoder()   {
}
//  Writing Method size for method: ::Liv::Lck::Encoding::LckEncoder___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Encoding::LckEncoder___c::*)()>(&::Liv::Lck::Encoding::LckEncoder___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d4694c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckEncoder___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Encoding::LckEncoder___c._IsPaused_b__30_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Liv::Lck::Encoding::LckEncoder___c::*)(::Liv::Lck::Encoding::LckEncodedPacketHandler)>(&::Liv::Lck::Encoding::LckEncoder___c::_IsPaused_b__30_0)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x9d46954;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckEncoder___c*>(),
                        {"<IsPaused>b__30_0", {}, {::i2c::type_of<::Liv::Lck::Encoding::LckEncodedPacketHandler>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Encoding::LckEncoder___c._InitCameraRenderData_b__50_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_2<::GlobalNamespace::LckNativeEncodingApi_TrackInfo,int32_t> (::Liv::Lck::Encoding::LckEncoder___c::*)(::GlobalNamespace::LckNativeEncodingApi_TrackInfo, int32_t)>(&::Liv::Lck::Encoding::LckEncoder___c::_InitCameraRenderData_b__50_0)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x9d46a10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckEncoder___c*>(),
                        {"<InitCameraRenderData>b__50_0", {}, {::i2c::type_of<::GlobalNamespace::LckNativeEncodingApi_TrackInfo>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void Liv::Lck::Encoding::LckEncoder___c::setStaticF___9(::Liv::Lck::Encoding::LckEncoder___c*  value)  {
::cordl_internals::setStaticField<::Liv::Lck::Encoding::LckEncoder___c*, "<>9", ::Liv::Lck::Encoding::LckEncoder___c*>(std::forward<::Liv::Lck::Encoding::LckEncoder___c*>(value));
}
inline ::Liv::Lck::Encoding::LckEncoder___c* Liv::Lck::Encoding::LckEncoder___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Liv::Lck::Encoding::LckEncoder___c*, "<>9", ::Liv::Lck::Encoding::LckEncoder___c*>();
}
inline void Liv::Lck::Encoding::LckEncoder___c::setStaticF___9__30_0(::System::Func_2<::Liv::Lck::Encoding::LckEncodedPacketHandler,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::Liv::Lck::Encoding::LckEncodedPacketHandler,bool>*, "<>9__30_0", ::Liv::Lck::Encoding::LckEncoder___c*>(std::forward<::System::Func_2<::Liv::Lck::Encoding::LckEncodedPacketHandler,bool>*>(value));
}
inline ::System::Func_2<::Liv::Lck::Encoding::LckEncodedPacketHandler,bool>* Liv::Lck::Encoding::LckEncoder___c::getStaticF___9__30_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::Liv::Lck::Encoding::LckEncodedPacketHandler,bool>*, "<>9__30_0", ::Liv::Lck::Encoding::LckEncoder___c*>();
}
inline void Liv::Lck::Encoding::LckEncoder___c::setStaticF___9__50_0(::System::Func_3<::GlobalNamespace::LckNativeEncodingApi_TrackInfo,int32_t,::System::ValueTuple_2<::GlobalNamespace::LckNativeEncodingApi_TrackInfo,int32_t>>*  value)  {
::cordl_internals::setStaticField<::System::Func_3<::GlobalNamespace::LckNativeEncodingApi_TrackInfo,int32_t,::System::ValueTuple_2<::GlobalNamespace::LckNativeEncodingApi_TrackInfo,int32_t>>*, "<>9__50_0", ::Liv::Lck::Encoding::LckEncoder___c*>(std::forward<::System::Func_3<::GlobalNamespace::LckNativeEncodingApi_TrackInfo,int32_t,::System::ValueTuple_2<::GlobalNamespace::LckNativeEncodingApi_TrackInfo,int32_t>>*>(value));
}
inline ::System::Func_3<::GlobalNamespace::LckNativeEncodingApi_TrackInfo,int32_t,::System::ValueTuple_2<::GlobalNamespace::LckNativeEncodingApi_TrackInfo,int32_t>>* Liv::Lck::Encoding::LckEncoder___c::getStaticF___9__50_0()  {
return ::cordl_internals::getStaticField<::System::Func_3<::GlobalNamespace::LckNativeEncodingApi_TrackInfo,int32_t,::System::ValueTuple_2<::GlobalNamespace::LckNativeEncodingApi_TrackInfo,int32_t>>*, "<>9__50_0", ::Liv::Lck::Encoding::LckEncoder___c*>();
}
inline void Liv::Lck::Encoding::LckEncoder___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckEncoder___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Liv::Lck::Encoding::LckEncoder___c::_IsPaused_b__30_0(::Liv::Lck::Encoding::LckEncodedPacketHandler  encodedPacketHandler)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckEncoder___c*>(),
                        {"<IsPaused>b__30_0", {}, {::i2c::type_of<::Liv::Lck::Encoding::LckEncodedPacketHandler>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, encodedPacketHandler);
}
inline ::System::ValueTuple_2<::GlobalNamespace::LckNativeEncodingApi_TrackInfo,int32_t> Liv::Lck::Encoding::LckEncoder___c::_InitCameraRenderData_b__50_0(::GlobalNamespace::LckNativeEncodingApi_TrackInfo  track, int32_t  trackIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckEncoder___c*>(),
                        {"<InitCameraRenderData>b__50_0", {}, {::i2c::type_of<::GlobalNamespace::LckNativeEncodingApi_TrackInfo>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<::GlobalNamespace::LckNativeEncodingApi_TrackInfo,int32_t>>(this, ___internal_method, track, trackIndex);
}
inline ::Liv::Lck::Encoding::LckEncoder___c* Liv::Lck::Encoding::LckEncoder___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::Encoding::LckEncoder___c*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::Encoding::LckEncoder___c::LckEncoder___c()   {
}
