#pragma once
// IWYU pragma private; include "Liv/Lck/ILckService.hpp"
#include "Liv/Lck/zzzz__ILckService_def.hpp"
#include "Liv/Lck/Recorder/zzzz__RecordingData_def.hpp"
#include "Liv/Lck/zzzz__CameraResolutionDescriptor_def.hpp"
#include "Liv/Lck/zzzz__CameraTrackDescriptor_def.hpp"
#include "Liv/Lck/zzzz__EchoDisableReason_def.hpp"
#include "Liv/Lck/zzzz__ILckCamera_def.hpp"
#include "Liv/Lck/zzzz__LckCameraOrientation_def.hpp"
#include "Liv/Lck/zzzz__LckCaptureType_def.hpp"
#include "Liv/Lck/zzzz__LckDescriptor_def.hpp"
#include "Liv/Lck/zzzz__LckResult_1_def.hpp"
#include "Liv/Lck/zzzz__LckResult_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
//  Writing Method size for method: ::Liv::Lck::ILckService.add_OnRecordingStarted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::ILckService::*)(::System::Action_1<::Liv::Lck::LckResult*>*)>(&::Liv::Lck::ILckService::add_OnRecordingStarted)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckService*>(),
                    {::i2c::class_of<::Liv::Lck::ILckService*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ILckService.remove_OnRecordingStarted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::ILckService::*)(::System::Action_1<::Liv::Lck::LckResult*>*)>(&::Liv::Lck::ILckService::remove_OnRecordingStarted)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckService*>(),
                    {::i2c::class_of<::Liv::Lck::ILckService*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ILckService.add_OnRecordingPaused
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::ILckService::*)(::System::Action_1<::Liv::Lck::LckResult*>*)>(&::Liv::Lck::ILckService::add_OnRecordingPaused)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckService*>(),
                    {::i2c::class_of<::Liv::Lck::ILckService*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ILckService.remove_OnRecordingPaused
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::ILckService::*)(::System::Action_1<::Liv::Lck::LckResult*>*)>(&::Liv::Lck::ILckService::remove_OnRecordingPaused)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckService*>(),
                    {::i2c::class_of<::Liv::Lck::ILckService*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ILckService.add_OnRecordingResumed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::ILckService::*)(::System::Action_1<::Liv::Lck::LckResult*>*)>(&::Liv::Lck::ILckService::add_OnRecordingResumed)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckService*>(),
                    {::i2c::class_of<::Liv::Lck::ILckService*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ILckService.remove_OnRecordingResumed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::ILckService::*)(::System::Action_1<::Liv::Lck::LckResult*>*)>(&::Liv::Lck::ILckService::remove_OnRecordingResumed)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckService*>(),
                    {::i2c::class_of<::Liv::Lck::ILckService*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ILckService.add_OnRecordingStopped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::ILckService::*)(::System::Action_1<::Liv::Lck::LckResult*>*)>(&::Liv::Lck::ILckService::add_OnRecordingStopped)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckService*>(),
                    {::i2c::class_of<::Liv::Lck::ILckService*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ILckService.remove_OnRecordingStopped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::ILckService::*)(::System::Action_1<::Liv::Lck::LckResult*>*)>(&::Liv::Lck::ILckService::remove_OnRecordingStopped)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckService*>(),
                    {::i2c::class_of<::Liv::Lck::ILckService*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ILckService.add_OnStreamingStarted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::ILckService::*)(::System::Action_1<::Liv::Lck::LckResult*>*)>(&::Liv::Lck::ILckService::add_OnStreamingStarted)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckService*>(),
                    {::i2c::class_of<::Liv::Lck::ILckService*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ILckService.remove_OnStreamingStarted
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::ILckService::*)(::System::Action_1<::Liv::Lck::LckResult*>*)>(&::Liv::Lck::ILckService::remove_OnStreamingStarted)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckService*>(),
                    {::i2c::class_of<::Liv::Lck::ILckService*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ILckService.add_OnStreamingStopped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::ILckService::*)(::System::Action_1<::Liv::Lck::LckResult*>*)>(&::Liv::Lck::ILckService::add_OnStreamingStopped)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckService*>(),
                    {::i2c::class_of<::Liv::Lck::ILckService*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ILckService.remove_OnStreamingStopped
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::ILckService::*)(::System::Action_1<::Liv::Lck::LckResult*>*)>(&::Liv::Lck::ILckService::remove_OnStreamingStopped)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckService*>(),
                    {::i2c::class_of<::Liv::Lck::ILckService*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ILckService.add_OnLowStorageSpace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::ILckService::*)(::System::Action_1<::Liv::Lck::LckResult*>*)>(&::Liv::Lck::ILckService::add_OnLowStorageSpace)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckService*>(),
                    {::i2c::class_of<::Liv::Lck::ILckService*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ILckService.remove_OnLowStorageSpace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::ILckService::*)(::System::Action_1<::Liv::Lck::LckResult*>*)>(&::Liv::Lck::ILckService::remove_OnLowStorageSpace)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckService*>(),
                    {::i2c::class_of<::Liv::Lck::ILckService*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ILckService.add_OnRecordingSaved
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::ILckService::*)(::System::Action_1<::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*>*)>(&::Liv::Lck::ILckService::add_OnRecordingSaved)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckService*>(),
                    {::i2c::class_of<::Liv::Lck::ILckService*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ILckService.remove_OnRecordingSaved
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::ILckService::*)(::System::Action_1<::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*>*)>(&::Liv::Lck::ILckService::remove_OnRecordingSaved)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckService*>(),
                    {::i2c::class_of<::Liv::Lck::ILckService*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ILckService.add_OnPhotoSaved
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::ILckService::*)(::System::Action_1<::Liv::Lck::LckResult*>*)>(&::Liv::Lck::ILckService::add_OnPhotoSaved)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckService*>(),
                    {::i2c::class_of<::Liv::Lck::ILckService*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ILckService.remove_OnPhotoSaved
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::ILckService::*)(::System::Action_1<::Liv::Lck::LckResult*>*)>(&::Liv::Lck::ILckService::remove_OnPhotoSaved)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckService*>(),
                    {::i2c::class_of<::Liv::Lck::ILckService*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ILckService.add_OnActiveCameraSet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::ILckService::*)(::System::Action_1<::Liv::Lck::LckResult_1<::Liv::Lck::ILckCamera*>*>*)>(&::Liv::Lck::ILckService::add_OnActiveCameraSet)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckService*>(),
                    {::i2c::class_of<::Liv::Lck::ILckService*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ILckService.remove_OnActiveCameraSet
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::ILckService::*)(::System::Action_1<::Liv::Lck::LckResult_1<::Liv::Lck::ILckCamera*>*>*)>(&::Liv::Lck::ILckService::remove_OnActiveCameraSet)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckService*>(),
                    {::i2c::class_of<::Liv::Lck::ILckService*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ILckService.StartRecording
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult* (::Liv::Lck::ILckService::*)()>(&::Liv::Lck::ILckService::StartRecording)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckService*>(),
                    {::i2c::class_of<::Liv::Lck::ILckService*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ILckService.PauseRecording
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult* (::Liv::Lck::ILckService::*)()>(&::Liv::Lck::ILckService::PauseRecording)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckService*>(),
                    {::i2c::class_of<::Liv::Lck::ILckService*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ILckService.IsPaused
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult_1<bool>* (::Liv::Lck::ILckService::*)()>(&::Liv::Lck::ILckService::IsPaused)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckService*>(),
                    {::i2c::class_of<::Liv::Lck::ILckService*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ILckService.ResumeRecording
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult* (::Liv::Lck::ILckService::*)()>(&::Liv::Lck::ILckService::ResumeRecording)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckService*>(),
                    {::i2c::class_of<::Liv::Lck::ILckService*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ILckService.StopRecording
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult* (::Liv::Lck::ILckService::*)()>(&::Liv::Lck::ILckService::StopRecording)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckService*>(),
                    {::i2c::class_of<::Liv::Lck::ILckService*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ILckService.StartStreaming
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult* (::Liv::Lck::ILckService::*)()>(&::Liv::Lck::ILckService::StartStreaming)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckService*>(),
                    {::i2c::class_of<::Liv::Lck::ILckService*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ILckService.StopStreaming
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult* (::Liv::Lck::ILckService::*)()>(&::Liv::Lck::ILckService::StopStreaming)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckService*>(),
                    {::i2c::class_of<::Liv::Lck::ILckService*>(), 26}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ILckService.GetRecordingDuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult_1<::System::TimeSpan>* (::Liv::Lck::ILckService::*)()>(&::Liv::Lck::ILckService::GetRecordingDuration)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckService*>(),
                    {::i2c::class_of<::Liv::Lck::ILckService*>(), 27}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ILckService.GetStreamDuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult_1<::System::TimeSpan>* (::Liv::Lck::ILckService::*)()>(&::Liv::Lck::ILckService::GetStreamDuration)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckService*>(),
                    {::i2c::class_of<::Liv::Lck::ILckService*>(), 28}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ILckService.SetTrackFramerate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult* (::Liv::Lck::ILckService::*)(uint32_t)>(&::Liv::Lck::ILckService::SetTrackFramerate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckService*>(),
                    {::i2c::class_of<::Liv::Lck::ILckService*>(), 29}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ILckService.SetTrackDescriptor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult* (::Liv::Lck::ILckService::*)(::Liv::Lck::CameraTrackDescriptor)>(&::Liv::Lck::ILckService::SetTrackDescriptor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckService*>(),
                    {::i2c::class_of<::Liv::Lck::ILckService*>(), 30}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ILckService.SetTrackResolution
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult* (::Liv::Lck::ILckService::*)(::Liv::Lck::CameraResolutionDescriptor)>(&::Liv::Lck::ILckService::SetTrackResolution)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckService*>(),
                    {::i2c::class_of<::Liv::Lck::ILckService*>(), 31}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ILckService.SetTrackBitrate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult* (::Liv::Lck::ILckService::*)(uint32_t)>(&::Liv::Lck::ILckService::SetTrackBitrate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckService*>(),
                    {::i2c::class_of<::Liv::Lck::ILckService*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ILckService.SetTrackAudioBitrate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult* (::Liv::Lck::ILckService::*)(uint32_t)>(&::Liv::Lck::ILckService::SetTrackAudioBitrate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckService*>(),
                    {::i2c::class_of<::Liv::Lck::ILckService*>(), 33}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ILckService.SetCameraOrientation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult* (::Liv::Lck::ILckService::*)(::Liv::Lck::LckCameraOrientation)>(&::Liv::Lck::ILckService::SetCameraOrientation)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckService*>(),
                    {::i2c::class_of<::Liv::Lck::ILckService*>(), 34}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ILckService.SetTrackDescriptor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult* (::Liv::Lck::ILckService::*)(::Liv::Lck::LckCaptureType, ::Liv::Lck::CameraTrackDescriptor)>(&::Liv::Lck::ILckService::SetTrackDescriptor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckService*>(),
                    {::i2c::class_of<::Liv::Lck::ILckService*>(), 35}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ILckService.GetActiveCaptureType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult_1<::Liv::Lck::LckCaptureType>* (::Liv::Lck::ILckService::*)()>(&::Liv::Lck::ILckService::GetActiveCaptureType)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckService*>(),
                    {::i2c::class_of<::Liv::Lck::ILckService*>(), 36}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ILckService.SetActiveCaptureType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult* (::Liv::Lck::ILckService::*)(::Liv::Lck::LckCaptureType)>(&::Liv::Lck::ILckService::SetActiveCaptureType)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckService*>(),
                    {::i2c::class_of<::Liv::Lck::ILckService*>(), 37}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ILckService.SetPreviewActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult* (::Liv::Lck::ILckService::*)(bool)>(&::Liv::Lck::ILckService::SetPreviewActive)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckService*>(),
                    {::i2c::class_of<::Liv::Lck::ILckService*>(), 38}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ILckService.IsRecording
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult_1<bool>* (::Liv::Lck::ILckService::*)()>(&::Liv::Lck::ILckService::IsRecording)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckService*>(),
                    {::i2c::class_of<::Liv::Lck::ILckService*>(), 39}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ILckService.IsStreaming
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult_1<bool>* (::Liv::Lck::ILckService::*)()>(&::Liv::Lck::ILckService::IsStreaming)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckService*>(),
                    {::i2c::class_of<::Liv::Lck::ILckService*>(), 40}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ILckService.IsCapturing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult_1<bool>* (::Liv::Lck::ILckService::*)()>(&::Liv::Lck::ILckService::IsCapturing)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckService*>(),
                    {::i2c::class_of<::Liv::Lck::ILckService*>(), 41}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ILckService.SetGameAudioCaptureActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult* (::Liv::Lck::ILckService::*)(bool)>(&::Liv::Lck::ILckService::SetGameAudioCaptureActive)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckService*>(),
                    {::i2c::class_of<::Liv::Lck::ILckService*>(), 42}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ILckService.SetMicrophoneCaptureActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult* (::Liv::Lck::ILckService::*)(bool)>(&::Liv::Lck::ILckService::SetMicrophoneCaptureActive)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckService*>(),
                    {::i2c::class_of<::Liv::Lck::ILckService*>(), 43}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ILckService.GetMicrophoneOutputLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult_1<float_t>* (::Liv::Lck::ILckService::*)()>(&::Liv::Lck::ILckService::GetMicrophoneOutputLevel)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckService*>(),
                    {::i2c::class_of<::Liv::Lck::ILckService*>(), 44}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ILckService.SetMicrophoneGain
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult* (::Liv::Lck::ILckService::*)(float_t)>(&::Liv::Lck::ILckService::SetMicrophoneGain)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckService*>(),
                    {::i2c::class_of<::Liv::Lck::ILckService*>(), 45}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ILckService.SetGameAudioGain
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult* (::Liv::Lck::ILckService::*)(float_t)>(&::Liv::Lck::ILckService::SetGameAudioGain)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckService*>(),
                    {::i2c::class_of<::Liv::Lck::ILckService*>(), 46}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ILckService.GetGameOutputLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult_1<float_t>* (::Liv::Lck::ILckService::*)()>(&::Liv::Lck::ILckService::GetGameOutputLevel)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckService*>(),
                    {::i2c::class_of<::Liv::Lck::ILckService*>(), 47}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ILckService.IsGameAudioMute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult_1<bool>* (::Liv::Lck::ILckService::*)()>(&::Liv::Lck::ILckService::IsGameAudioMute)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckService*>(),
                    {::i2c::class_of<::Liv::Lck::ILckService*>(), 48}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ILckService.SetActiveCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult* (::Liv::Lck::ILckService::*)(::StringW, ::StringW)>(&::Liv::Lck::ILckService::SetActiveCamera)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckService*>(),
                    {::i2c::class_of<::Liv::Lck::ILckService*>(), 49}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ILckService.GetActiveCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult_1<::Liv::Lck::ILckCamera*>* (::Liv::Lck::ILckService::*)()>(&::Liv::Lck::ILckService::GetActiveCamera)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckService*>(),
                    {::i2c::class_of<::Liv::Lck::ILckService*>(), 50}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ILckService.PreloadDiscreetAudio
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult* (::Liv::Lck::ILckService::*)(::UnityEngine::AudioClip*, float_t, bool)>(&::Liv::Lck::ILckService::PreloadDiscreetAudio)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckService*>(),
                    {::i2c::class_of<::Liv::Lck::ILckService*>(), 51}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ILckService.PlayDiscreetAudioClip
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult* (::Liv::Lck::ILckService::*)(::UnityEngine::AudioClip*)>(&::Liv::Lck::ILckService::PlayDiscreetAudioClip)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckService*>(),
                    {::i2c::class_of<::Liv::Lck::ILckService*>(), 52}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ILckService.StopAllDiscreetAudio
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult* (::Liv::Lck::ILckService::*)()>(&::Liv::Lck::ILckService::StopAllDiscreetAudio)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckService*>(),
                    {::i2c::class_of<::Liv::Lck::ILckService*>(), 53}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ILckService.add_OnEchoSaved
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::ILckService::*)(::System::Action_1<::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*>*)>(&::Liv::Lck::ILckService::add_OnEchoSaved)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckService*>(),
                    {::i2c::class_of<::Liv::Lck::ILckService*>(), 54}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ILckService.remove_OnEchoSaved
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::ILckService::*)(::System::Action_1<::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*>*)>(&::Liv::Lck::ILckService::remove_OnEchoSaved)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckService*>(),
                    {::i2c::class_of<::Liv::Lck::ILckService*>(), 55}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ILckService.add_OnEchoEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::ILckService::*)(::System::Action_1<::Liv::Lck::LckResult*>*)>(&::Liv::Lck::ILckService::add_OnEchoEnabled)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckService*>(),
                    {::i2c::class_of<::Liv::Lck::ILckService*>(), 56}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ILckService.remove_OnEchoEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::ILckService::*)(::System::Action_1<::Liv::Lck::LckResult*>*)>(&::Liv::Lck::ILckService::remove_OnEchoEnabled)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckService*>(),
                    {::i2c::class_of<::Liv::Lck::ILckService*>(), 57}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ILckService.add_OnEchoDisabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::ILckService::*)(::System::Action_2<::Liv::Lck::LckResult*,::Liv::Lck::EchoDisableReason>*)>(&::Liv::Lck::ILckService::add_OnEchoDisabled)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckService*>(),
                    {::i2c::class_of<::Liv::Lck::ILckService*>(), 58}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ILckService.remove_OnEchoDisabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::ILckService::*)(::System::Action_2<::Liv::Lck::LckResult*,::Liv::Lck::EchoDisableReason>*)>(&::Liv::Lck::ILckService::remove_OnEchoDisabled)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckService*>(),
                    {::i2c::class_of<::Liv::Lck::ILckService*>(), 59}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ILckService.SetEchoEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult* (::Liv::Lck::ILckService::*)(bool)>(&::Liv::Lck::ILckService::SetEchoEnabled)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckService*>(),
                    {::i2c::class_of<::Liv::Lck::ILckService*>(), 60}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ILckService.SetEchoEnabledAsync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::Liv::Lck::LckResult*>* (::Liv::Lck::ILckService::*)(bool)>(&::Liv::Lck::ILckService::SetEchoEnabledAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckService*>(),
                    {::i2c::class_of<::Liv::Lck::ILckService*>(), 61}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ILckService.IsEchoEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult_1<bool>* (::Liv::Lck::ILckService::*)()>(&::Liv::Lck::ILckService::IsEchoEnabled)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckService*>(),
                    {::i2c::class_of<::Liv::Lck::ILckService*>(), 62}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ILckService.TriggerEchoSave
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult* (::Liv::Lck::ILckService::*)()>(&::Liv::Lck::ILckService::TriggerEchoSave)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckService*>(),
                    {::i2c::class_of<::Liv::Lck::ILckService*>(), 63}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ILckService.GetEchoBufferDuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult_1<::System::TimeSpan>* (::Liv::Lck::ILckService::*)()>(&::Liv::Lck::ILckService::GetEchoBufferDuration)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckService*>(),
                    {::i2c::class_of<::Liv::Lck::ILckService*>(), 64}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ILckService.GetEchoMaxBufferDuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult_1<::System::TimeSpan>* (::Liv::Lck::ILckService::*)()>(&::Liv::Lck::ILckService::GetEchoMaxBufferDuration)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckService*>(),
                    {::i2c::class_of<::Liv::Lck::ILckService*>(), 65}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ILckService.GetDescriptor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult_1<::Liv::Lck::LckDescriptor*>* (::Liv::Lck::ILckService::*)()>(&::Liv::Lck::ILckService::GetDescriptor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckService*>(),
                    {::i2c::class_of<::Liv::Lck::ILckService*>(), 66}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ILckService.CapturePhoto
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult* (::Liv::Lck::ILckService::*)()>(&::Liv::Lck::ILckService::CapturePhoto)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckService*>(),
                    {::i2c::class_of<::Liv::Lck::ILckService*>(), 67}
                ));
    return ___internal_method;
  }
};
inline void Liv::Lck::ILckService::add_OnRecordingStarted(::System::Action_1<::Liv::Lck::LckResult*>*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckService*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Liv::Lck::ILckService::remove_OnRecordingStarted(::System::Action_1<::Liv::Lck::LckResult*>*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckService*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Liv::Lck::ILckService::add_OnRecordingPaused(::System::Action_1<::Liv::Lck::LckResult*>*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckService*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Liv::Lck::ILckService::remove_OnRecordingPaused(::System::Action_1<::Liv::Lck::LckResult*>*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckService*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Liv::Lck::ILckService::add_OnRecordingResumed(::System::Action_1<::Liv::Lck::LckResult*>*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckService*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Liv::Lck::ILckService::remove_OnRecordingResumed(::System::Action_1<::Liv::Lck::LckResult*>*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckService*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Liv::Lck::ILckService::add_OnRecordingStopped(::System::Action_1<::Liv::Lck::LckResult*>*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckService*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Liv::Lck::ILckService::remove_OnRecordingStopped(::System::Action_1<::Liv::Lck::LckResult*>*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckService*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Liv::Lck::ILckService::add_OnStreamingStarted(::System::Action_1<::Liv::Lck::LckResult*>*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckService*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Liv::Lck::ILckService::remove_OnStreamingStarted(::System::Action_1<::Liv::Lck::LckResult*>*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckService*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Liv::Lck::ILckService::add_OnStreamingStopped(::System::Action_1<::Liv::Lck::LckResult*>*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckService*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Liv::Lck::ILckService::remove_OnStreamingStopped(::System::Action_1<::Liv::Lck::LckResult*>*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckService*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Liv::Lck::ILckService::add_OnLowStorageSpace(::System::Action_1<::Liv::Lck::LckResult*>*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckService*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Liv::Lck::ILckService::remove_OnLowStorageSpace(::System::Action_1<::Liv::Lck::LckResult*>*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckService*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Liv::Lck::ILckService::add_OnRecordingSaved(::System::Action_1<::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*>*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckService*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Liv::Lck::ILckService::remove_OnRecordingSaved(::System::Action_1<::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*>*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckService*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Liv::Lck::ILckService::add_OnPhotoSaved(::System::Action_1<::Liv::Lck::LckResult*>*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckService*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Liv::Lck::ILckService::remove_OnPhotoSaved(::System::Action_1<::Liv::Lck::LckResult*>*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckService*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Liv::Lck::ILckService::add_OnActiveCameraSet(::System::Action_1<::Liv::Lck::LckResult_1<::Liv::Lck::ILckCamera*>*>*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckService*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Liv::Lck::ILckService::remove_OnActiveCameraSet(::System::Action_1<::Liv::Lck::LckResult_1<::Liv::Lck::ILckCamera*>*>*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckService*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Liv::Lck::LckResult* Liv::Lck::ILckService::StartRecording()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckService*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult*>(this, ___internal_method);
}
inline ::Liv::Lck::LckResult* Liv::Lck::ILckService::PauseRecording()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckService*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult*>(this, ___internal_method);
}
inline ::Liv::Lck::LckResult_1<bool>* Liv::Lck::ILckService::IsPaused()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckService*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult_1<bool>*>(this, ___internal_method);
}
inline ::Liv::Lck::LckResult* Liv::Lck::ILckService::ResumeRecording()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckService*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult*>(this, ___internal_method);
}
inline ::Liv::Lck::LckResult* Liv::Lck::ILckService::StopRecording()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckService*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult*>(this, ___internal_method);
}
inline ::Liv::Lck::LckResult* Liv::Lck::ILckService::StartStreaming()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckService*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult*>(this, ___internal_method);
}
inline ::Liv::Lck::LckResult* Liv::Lck::ILckService::StopStreaming()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckService*>(), 26}
                        )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult*>(this, ___internal_method);
}
inline ::Liv::Lck::LckResult_1<::System::TimeSpan>* Liv::Lck::ILckService::GetRecordingDuration()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckService*>(), 27}
                        )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult_1<::System::TimeSpan>*>(this, ___internal_method);
}
inline ::Liv::Lck::LckResult_1<::System::TimeSpan>* Liv::Lck::ILckService::GetStreamDuration()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckService*>(), 28}
                        )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult_1<::System::TimeSpan>*>(this, ___internal_method);
}
inline ::Liv::Lck::LckResult* Liv::Lck::ILckService::SetTrackFramerate(uint32_t  framerate)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckService*>(), 29}
                        )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult*>(this, ___internal_method, framerate);
}
inline ::Liv::Lck::LckResult* Liv::Lck::ILckService::SetTrackDescriptor(::Liv::Lck::CameraTrackDescriptor  cameraTrackDescriptor)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckService*>(), 30}
                        )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult*>(this, ___internal_method, cameraTrackDescriptor);
}
inline ::Liv::Lck::LckResult* Liv::Lck::ILckService::SetTrackResolution(::Liv::Lck::CameraResolutionDescriptor  cameraResolutionDescriptor)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckService*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult*>(this, ___internal_method, cameraResolutionDescriptor);
}
inline ::Liv::Lck::LckResult* Liv::Lck::ILckService::SetTrackBitrate(uint32_t  bitrate)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckService*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult*>(this, ___internal_method, bitrate);
}
inline ::Liv::Lck::LckResult* Liv::Lck::ILckService::SetTrackAudioBitrate(uint32_t  audioBitrate)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckService*>(), 33}
                        )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult*>(this, ___internal_method, audioBitrate);
}
inline ::Liv::Lck::LckResult* Liv::Lck::ILckService::SetCameraOrientation(::Liv::Lck::LckCameraOrientation  orientation)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckService*>(), 34}
                        )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult*>(this, ___internal_method, orientation);
}
inline ::Liv::Lck::LckResult* Liv::Lck::ILckService::SetTrackDescriptor(::Liv::Lck::LckCaptureType  captureType, ::Liv::Lck::CameraTrackDescriptor  cameraTrackDescriptor)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckService*>(), 35}
                        )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult*>(this, ___internal_method, captureType, cameraTrackDescriptor);
}
inline ::Liv::Lck::LckResult_1<::Liv::Lck::LckCaptureType>* Liv::Lck::ILckService::GetActiveCaptureType()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckService*>(), 36}
                        )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult_1<::Liv::Lck::LckCaptureType>*>(this, ___internal_method);
}
inline ::Liv::Lck::LckResult* Liv::Lck::ILckService::SetActiveCaptureType(::Liv::Lck::LckCaptureType  captureType)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckService*>(), 37}
                        )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult*>(this, ___internal_method, captureType);
}
inline ::Liv::Lck::LckResult* Liv::Lck::ILckService::SetPreviewActive(bool  isActive)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckService*>(), 38}
                        )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult*>(this, ___internal_method, isActive);
}
inline ::Liv::Lck::LckResult_1<bool>* Liv::Lck::ILckService::IsRecording()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckService*>(), 39}
                        )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult_1<bool>*>(this, ___internal_method);
}
inline ::Liv::Lck::LckResult_1<bool>* Liv::Lck::ILckService::IsStreaming()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckService*>(), 40}
                        )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult_1<bool>*>(this, ___internal_method);
}
inline ::Liv::Lck::LckResult_1<bool>* Liv::Lck::ILckService::IsCapturing()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckService*>(), 41}
                        )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult_1<bool>*>(this, ___internal_method);
}
inline ::Liv::Lck::LckResult* Liv::Lck::ILckService::SetGameAudioCaptureActive(bool  isActive)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckService*>(), 42}
                        )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult*>(this, ___internal_method, isActive);
}
inline ::Liv::Lck::LckResult* Liv::Lck::ILckService::SetMicrophoneCaptureActive(bool  isActive)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckService*>(), 43}
                        )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult*>(this, ___internal_method, isActive);
}
inline ::Liv::Lck::LckResult_1<float_t>* Liv::Lck::ILckService::GetMicrophoneOutputLevel()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckService*>(), 44}
                        )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult_1<float_t>*>(this, ___internal_method);
}
inline ::Liv::Lck::LckResult* Liv::Lck::ILckService::SetMicrophoneGain(float_t  gain)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckService*>(), 45}
                        )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult*>(this, ___internal_method, gain);
}
inline ::Liv::Lck::LckResult* Liv::Lck::ILckService::SetGameAudioGain(float_t  gain)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckService*>(), 46}
                        )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult*>(this, ___internal_method, gain);
}
inline ::Liv::Lck::LckResult_1<float_t>* Liv::Lck::ILckService::GetGameOutputLevel()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckService*>(), 47}
                        )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult_1<float_t>*>(this, ___internal_method);
}
inline ::Liv::Lck::LckResult_1<bool>* Liv::Lck::ILckService::IsGameAudioMute()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckService*>(), 48}
                        )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult_1<bool>*>(this, ___internal_method);
}
inline ::Liv::Lck::LckResult* Liv::Lck::ILckService::SetActiveCamera(::StringW  cameraId, ::StringW  monitorId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckService*>(), 49}
                        )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult*>(this, ___internal_method, cameraId, monitorId);
}
inline ::Liv::Lck::LckResult_1<::Liv::Lck::ILckCamera*>* Liv::Lck::ILckService::GetActiveCamera()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckService*>(), 50}
                        )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult_1<::Liv::Lck::ILckCamera*>*>(this, ___internal_method);
}
inline ::Liv::Lck::LckResult* Liv::Lck::ILckService::PreloadDiscreetAudio(::UnityEngine::AudioClip*  audioClip, float_t  volume, bool  forceReload)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckService*>(), 51}
                        )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult*>(this, ___internal_method, audioClip, volume, forceReload);
}
inline ::Liv::Lck::LckResult* Liv::Lck::ILckService::PlayDiscreetAudioClip(::UnityEngine::AudioClip*  audioClip)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckService*>(), 52}
                        )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult*>(this, ___internal_method, audioClip);
}
inline ::Liv::Lck::LckResult* Liv::Lck::ILckService::StopAllDiscreetAudio()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckService*>(), 53}
                        )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult*>(this, ___internal_method);
}
inline void Liv::Lck::ILckService::add_OnEchoSaved(::System::Action_1<::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*>*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckService*>(), 54}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Liv::Lck::ILckService::remove_OnEchoSaved(::System::Action_1<::Liv::Lck::LckResult_1<::Liv::Lck::Recorder::RecordingData>*>*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckService*>(), 55}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Liv::Lck::ILckService::add_OnEchoEnabled(::System::Action_1<::Liv::Lck::LckResult*>*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckService*>(), 56}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Liv::Lck::ILckService::remove_OnEchoEnabled(::System::Action_1<::Liv::Lck::LckResult*>*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckService*>(), 57}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Liv::Lck::ILckService::add_OnEchoDisabled(::System::Action_2<::Liv::Lck::LckResult*,::Liv::Lck::EchoDisableReason>*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckService*>(), 58}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Liv::Lck::ILckService::remove_OnEchoDisabled(::System::Action_2<::Liv::Lck::LckResult*,::Liv::Lck::EchoDisableReason>*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckService*>(), 59}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Liv::Lck::LckResult* Liv::Lck::ILckService::SetEchoEnabled(bool  enabled)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckService*>(), 60}
                        )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult*>(this, ___internal_method, enabled);
}
inline ::System::Threading::Tasks::Task_1<::Liv::Lck::LckResult*>* Liv::Lck::ILckService::SetEchoEnabledAsync(bool  enabled)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckService*>(), 61}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::Liv::Lck::LckResult*>*>(this, ___internal_method, enabled);
}
inline ::Liv::Lck::LckResult_1<bool>* Liv::Lck::ILckService::IsEchoEnabled()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckService*>(), 62}
                        )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult_1<bool>*>(this, ___internal_method);
}
inline ::Liv::Lck::LckResult* Liv::Lck::ILckService::TriggerEchoSave()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckService*>(), 63}
                        )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult*>(this, ___internal_method);
}
inline ::Liv::Lck::LckResult_1<::System::TimeSpan>* Liv::Lck::ILckService::GetEchoBufferDuration()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckService*>(), 64}
                        )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult_1<::System::TimeSpan>*>(this, ___internal_method);
}
inline ::Liv::Lck::LckResult_1<::System::TimeSpan>* Liv::Lck::ILckService::GetEchoMaxBufferDuration()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckService*>(), 65}
                        )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult_1<::System::TimeSpan>*>(this, ___internal_method);
}
inline ::Liv::Lck::LckResult_1<::Liv::Lck::LckDescriptor*>* Liv::Lck::ILckService::GetDescriptor()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckService*>(), 66}
                        )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult_1<::Liv::Lck::LckDescriptor*>*>(this, ___internal_method);
}
inline ::Liv::Lck::LckResult* Liv::Lck::ILckService::CapturePhoto()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckService*>(), 67}
                        )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult*>(this, ___internal_method);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Liv::Lck::ILckService::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Liv::Lck::ILckService::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
