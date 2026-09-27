#pragma once
// IWYU pragma private; include "Liv/Lck/LckOutputConfigurer.hpp"
#include "Liv/Lck/zzzz__CameraTrackDescriptor_impl.hpp"
#include "Liv/Lck/zzzz__LckCaptureType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Liv/Lck/zzzz__LckOutputConfigurer_def.hpp"
#include "Liv/Lck/zzzz__CameraResolutionDescriptor_def.hpp"
#include "Liv/Lck/zzzz__CameraTrackDescriptor_def.hpp"
#include "Liv/Lck/zzzz__ILckEventBus_def.hpp"
#include "Liv/Lck/zzzz__ILckOutputConfigurer_def.hpp"
#include "Liv/Lck/zzzz__ILckQualityConfig_def.hpp"
#include "Liv/Lck/zzzz__LckCameraOrientation_def.hpp"
#include "Liv/Lck/zzzz__LckCaptureType_def.hpp"
#include "Liv/Lck/zzzz__LckOutputConfigurer_def.hpp"
#include "Liv/Lck/zzzz__LckResult_1_def.hpp"
#include "Liv/Lck/zzzz__LckResult_def.hpp"
#include "Liv/Lck/zzzz__QualityOption_def.hpp"
#include "System/zzzz__Predicate_1_def.hpp"
//  Writing Method size for method: ::Liv::Lck::LckOutputConfigurer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckOutputConfigurer::*)(::Liv::Lck::ILckQualityConfig*, ::Liv::Lck::ILckEventBus*)>(&::Liv::Lck::LckOutputConfigurer::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x9cef6f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckOutputConfigurer*>(),
                        {".ctor", {}, {::i2c::type_of<::Liv::Lck::ILckQualityConfig*>(), ::i2c::type_of<::Liv::Lck::ILckEventBus*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckOutputConfigurer.ConfigureFromQualityConfig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult* (::Liv::Lck::LckOutputConfigurer::*)(::Liv::Lck::QualityOption)>(&::Liv::Lck::LckOutputConfigurer::ConfigureFromQualityConfig)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x9cef988;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckOutputConfigurer*>(),
                        {"ConfigureFromQualityConfig", {}, {::i2c::type_of<::Liv::Lck::QualityOption>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckOutputConfigurer.GetActiveCaptureType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult_1<::Liv::Lck::LckCaptureType>* (::Liv::Lck::LckOutputConfigurer::*)()>(&::Liv::Lck::LckOutputConfigurer::GetActiveCaptureType)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x9cefc6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckOutputConfigurer*>(),
                        {"GetActiveCaptureType", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckOutputConfigurer.SetActiveCaptureType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult* (::Liv::Lck::LckOutputConfigurer::*)(::Liv::Lck::LckCaptureType)>(&::Liv::Lck::LckOutputConfigurer::SetActiveCaptureType)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9cefcb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckOutputConfigurer*>(),
                        {"SetActiveCaptureType", {}, {::i2c::type_of<::Liv::Lck::LckCaptureType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckOutputConfigurer.SetActiveVideoFramerate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult* (::Liv::Lck::LckOutputConfigurer::*)(uint32_t)>(&::Liv::Lck::LckOutputConfigurer::SetActiveVideoFramerate)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x9cefd34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckOutputConfigurer*>(),
                        {"SetActiveVideoFramerate", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckOutputConfigurer.SetActiveVideoBitrate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult* (::Liv::Lck::LckOutputConfigurer::*)(uint32_t)>(&::Liv::Lck::LckOutputConfigurer::SetActiveVideoBitrate)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9cefeac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckOutputConfigurer*>(),
                        {"SetActiveVideoBitrate", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckOutputConfigurer.SetActiveAudioBitrate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult* (::Liv::Lck::LckOutputConfigurer::*)(uint32_t)>(&::Liv::Lck::LckOutputConfigurer::SetActiveAudioBitrate)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x9cefed4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckOutputConfigurer*>(),
                        {"SetActiveAudioBitrate", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckOutputConfigurer.SetActiveResolution
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult* (::Liv::Lck::LckOutputConfigurer::*)(::Liv::Lck::CameraResolutionDescriptor)>(&::Liv::Lck::LckOutputConfigurer::SetActiveResolution)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9cefefc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckOutputConfigurer*>(),
                        {"SetActiveResolution", {}, {::i2c::type_of<::Liv::Lck::CameraResolutionDescriptor>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckOutputConfigurer.GetCameraTrackDescriptor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult_1<::Liv::Lck::CameraTrackDescriptor>* (::Liv::Lck::LckOutputConfigurer::*)(::Liv::Lck::LckCaptureType)>(&::Liv::Lck::LckOutputConfigurer::GetCameraTrackDescriptor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9ceff4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckOutputConfigurer*>(),
                        {"GetCameraTrackDescriptor", {}, {::i2c::type_of<::Liv::Lck::LckCaptureType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckOutputConfigurer.SetCameraTrackDescriptor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult* (::Liv::Lck::LckOutputConfigurer::*)(::Liv::Lck::LckCaptureType, ::Liv::Lck::CameraTrackDescriptor)>(&::Liv::Lck::LckOutputConfigurer::SetCameraTrackDescriptor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x9cefacc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckOutputConfigurer*>(),
                        {"SetCameraTrackDescriptor", {}, {::i2c::type_of<::Liv::Lck::LckCaptureType>(), ::i2c::type_of<::Liv::Lck::CameraTrackDescriptor>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckOutputConfigurer.SetCameraOrientation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult* (::Liv::Lck::LckOutputConfigurer::*)(::Liv::Lck::LckCameraOrientation)>(&::Liv::Lck::LckOutputConfigurer::SetCameraOrientation)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x9cefffc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckOutputConfigurer*>(),
                        {"SetCameraOrientation", {}, {::i2c::type_of<::Liv::Lck::LckCameraOrientation>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckOutputConfigurer.GetActiveCameraTrackDescriptor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult_1<::Liv::Lck::CameraTrackDescriptor>* (::Liv::Lck::LckOutputConfigurer::*)()>(&::Liv::Lck::LckOutputConfigurer::GetActiveCameraTrackDescriptor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9cf0170;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckOutputConfigurer*>(),
                        {"GetActiveCameraTrackDescriptor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckOutputConfigurer.SetActiveCameraTrackDescriptor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult* (::Liv::Lck::LckOutputConfigurer::*)(::Liv::Lck::CameraTrackDescriptor)>(&::Liv::Lck::LckOutputConfigurer::SetActiveCameraTrackDescriptor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x9cf0220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckOutputConfigurer*>(),
                        {"SetActiveCameraTrackDescriptor", {}, {::i2c::type_of<::Liv::Lck::CameraTrackDescriptor>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckOutputConfigurer.GetNumberOfAudioChannels
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult_1<uint32_t>* (::Liv::Lck::LckOutputConfigurer::*)()>(&::Liv::Lck::LckOutputConfigurer::GetNumberOfAudioChannels)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x9cf0250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckOutputConfigurer*>(),
                        {"GetNumberOfAudioChannels", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckOutputConfigurer.GetAudioSampleRate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult_1<uint32_t>* (::Liv::Lck::LckOutputConfigurer::*)()>(&::Liv::Lck::LckOutputConfigurer::GetAudioSampleRate)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x9cf0294;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckOutputConfigurer*>(),
                        {"GetAudioSampleRate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckOutputConfigurer.ConfigureDefaultSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckOutputConfigurer::*)(::Liv::Lck::ILckQualityConfig*)>(&::Liv::Lck::LckOutputConfigurer::ConfigureDefaultSettings)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x9cef738;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckOutputConfigurer*>(),
                        {"ConfigureDefaultSettings", {}, {::i2c::type_of<::Liv::Lck::ILckQualityConfig*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckOutputConfigurer.TriggerCameraResolutionChangedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckOutputConfigurer::*)(::Liv::Lck::CameraResolutionDescriptor)>(&::Liv::Lck::LckOutputConfigurer::TriggerCameraResolutionChangedEvent)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x9cf0360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckOutputConfigurer*>(),
                        {"TriggerCameraResolutionChangedEvent", {}, {::i2c::type_of<::Liv::Lck::CameraResolutionDescriptor>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckOutputConfigurer.TriggerCameraFramerateChangedEvent
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckOutputConfigurer::*)(uint32_t)>(&::Liv::Lck::LckOutputConfigurer::TriggerCameraFramerateChangedEvent)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x9cefdac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckOutputConfigurer*>(),
                        {"TriggerCameraFramerateChangedEvent", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckOutputConfigurer.OnActiveCameraTrackDescriptorChanged
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckOutputConfigurer::*)()>(&::Liv::Lck::LckOutputConfigurer::OnActiveCameraTrackDescriptorChanged)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x9cefcd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckOutputConfigurer*>(),
                        {"OnActiveCameraTrackDescriptorChanged", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckOutputConfigurer.GetResolution
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::CameraResolutionDescriptor (::Liv::Lck::LckOutputConfigurer::*)(::Liv::Lck::LckCaptureType)>(&::Liv::Lck::LckOutputConfigurer::GetResolution)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x9cf0460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckOutputConfigurer*>(),
                        {"GetResolution", {}, {::i2c::type_of<::Liv::Lck::LckCaptureType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckOutputConfigurer.SetResolution
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult* (::Liv::Lck::LckOutputConfigurer::*)(::Liv::Lck::LckCaptureType, ::Liv::Lck::CameraResolutionDescriptor)>(&::Liv::Lck::LckOutputConfigurer::SetResolution)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x9ceff0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckOutputConfigurer*>(),
                        {"SetResolution", {}, {::i2c::type_of<::Liv::Lck::LckCaptureType>(), ::i2c::type_of<::Liv::Lck::CameraResolutionDescriptor>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckOutputConfigurer.SetCameraOrientation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult* (::Liv::Lck::LckOutputConfigurer::*)(::Liv::Lck::LckCaptureType, ::Liv::Lck::LckCameraOrientation)>(&::Liv::Lck::LckOutputConfigurer::SetCameraOrientation)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x9cf0100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckOutputConfigurer*>(),
                        {"SetCameraOrientation", {}, {::i2c::type_of<::Liv::Lck::LckCaptureType>(), ::i2c::type_of<::Liv::Lck::LckCameraOrientation>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckOutputConfigurer.CreateQualityConfigurationResult
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult* (*)(::Liv::Lck::QualityOption, bool, bool)>(&::Liv::Lck::LckOutputConfigurer::CreateQualityConfigurationResult)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x9cefb78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckOutputConfigurer*>(),
                        {"CreateQualityConfigurationResult", {}, {::i2c::type_of<::Liv::Lck::QualityOption>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckOutputConfigurer.DetermineAudioSystemSampleRate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::Liv::Lck::LckOutputConfigurer::DetermineAudioSystemSampleRate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cf0358;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckOutputConfigurer*>(),
                        {"DetermineAudioSystemSampleRate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckOutputConfigurer.IsValidDescriptor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Liv::Lck::CameraTrackDescriptor)>(&::Liv::Lck::LckOutputConfigurer::IsValidDescriptor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9cefa94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckOutputConfigurer*>(),
                        {"IsValidDescriptor", {}, {::i2c::type_of<::Liv::Lck::CameraTrackDescriptor>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckOutputConfigurer.GetCameraOrientation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckCameraOrientation (*)(::Liv::Lck::CameraResolutionDescriptor)>(&::Liv::Lck::LckOutputConfigurer::GetCameraOrientation)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9cf04b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckOutputConfigurer*>(),
                        {"GetCameraOrientation", {}, {::i2c::type_of<::Liv::Lck::CameraResolutionDescriptor>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckOutputConfigurer.NewUnknownCaptureTypeError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult* (*)()>(&::Liv::Lck::LckOutputConfigurer::NewUnknownCaptureTypeError)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x9cefd68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckOutputConfigurer*>(),
                        {"NewUnknownCaptureTypeError", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Liv::Lck::ILckEventBus*& Liv::Lck::LckOutputConfigurer::__cordl_internal_get__eventBus()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____eventBus;
}
constexpr ::Liv::Lck::ILckEventBus* const& Liv::Lck::LckOutputConfigurer::__cordl_internal_get__eventBus() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____eventBus;
}
constexpr void Liv::Lck::LckOutputConfigurer::__cordl_internal_set__eventBus(::Liv::Lck::ILckEventBus*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____eventBus = value;
}
constexpr ::Liv::Lck::CameraTrackDescriptor& Liv::Lck::LckOutputConfigurer::__cordl_internal_get__recordingCameraTrackDescriptor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____recordingCameraTrackDescriptor;
}
constexpr ::Liv::Lck::CameraTrackDescriptor const& Liv::Lck::LckOutputConfigurer::__cordl_internal_get__recordingCameraTrackDescriptor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____recordingCameraTrackDescriptor;
}
constexpr void Liv::Lck::LckOutputConfigurer::__cordl_internal_set__recordingCameraTrackDescriptor(::Liv::Lck::CameraTrackDescriptor  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____recordingCameraTrackDescriptor = value;
}
constexpr ::Liv::Lck::CameraTrackDescriptor& Liv::Lck::LckOutputConfigurer::__cordl_internal_get__streamingCameraTrackDescriptor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____streamingCameraTrackDescriptor;
}
constexpr ::Liv::Lck::CameraTrackDescriptor const& Liv::Lck::LckOutputConfigurer::__cordl_internal_get__streamingCameraTrackDescriptor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____streamingCameraTrackDescriptor;
}
constexpr void Liv::Lck::LckOutputConfigurer::__cordl_internal_set__streamingCameraTrackDescriptor(::Liv::Lck::CameraTrackDescriptor  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____streamingCameraTrackDescriptor = value;
}
constexpr ::Liv::Lck::LckCaptureType& Liv::Lck::LckOutputConfigurer::__cordl_internal_get__activeCaptureType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activeCaptureType;
}
constexpr ::Liv::Lck::LckCaptureType const& Liv::Lck::LckOutputConfigurer::__cordl_internal_get__activeCaptureType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____activeCaptureType;
}
constexpr void Liv::Lck::LckOutputConfigurer::__cordl_internal_set__activeCaptureType(::Liv::Lck::LckCaptureType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____activeCaptureType = value;
}
inline void Liv::Lck::LckOutputConfigurer::_ctor(::Liv::Lck::ILckQualityConfig*  qualityConfig, ::Liv::Lck::ILckEventBus*  eventBus)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckOutputConfigurer*>(),
                        {".ctor", {}, {::i2c::type_of<::Liv::Lck::ILckQualityConfig*>(), ::i2c::type_of<::Liv::Lck::ILckEventBus*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, qualityConfig, eventBus);
}
inline ::Liv::Lck::LckResult* Liv::Lck::LckOutputConfigurer::ConfigureFromQualityConfig(::Liv::Lck::QualityOption  qualityOption)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckOutputConfigurer*>(),
                        {"ConfigureFromQualityConfig", {}, {::i2c::type_of<::Liv::Lck::QualityOption>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult*>(this, ___internal_method, qualityOption);
}
inline ::Liv::Lck::LckResult_1<::Liv::Lck::LckCaptureType>* Liv::Lck::LckOutputConfigurer::GetActiveCaptureType()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckOutputConfigurer*>(),
                        {"GetActiveCaptureType", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult_1<::Liv::Lck::LckCaptureType>*>(this, ___internal_method);
}
inline ::Liv::Lck::LckResult* Liv::Lck::LckOutputConfigurer::SetActiveCaptureType(::Liv::Lck::LckCaptureType  captureType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckOutputConfigurer*>(),
                        {"SetActiveCaptureType", {}, {::i2c::type_of<::Liv::Lck::LckCaptureType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult*>(this, ___internal_method, captureType);
}
inline ::Liv::Lck::LckResult* Liv::Lck::LckOutputConfigurer::SetActiveVideoFramerate(uint32_t  framerate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckOutputConfigurer*>(),
                        {"SetActiveVideoFramerate", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult*>(this, ___internal_method, framerate);
}
inline ::Liv::Lck::LckResult* Liv::Lck::LckOutputConfigurer::SetActiveVideoBitrate(uint32_t  bitrate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckOutputConfigurer*>(),
                        {"SetActiveVideoBitrate", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult*>(this, ___internal_method, bitrate);
}
inline ::Liv::Lck::LckResult* Liv::Lck::LckOutputConfigurer::SetActiveAudioBitrate(uint32_t  bitrate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckOutputConfigurer*>(),
                        {"SetActiveAudioBitrate", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult*>(this, ___internal_method, bitrate);
}
inline ::Liv::Lck::LckResult* Liv::Lck::LckOutputConfigurer::SetActiveResolution(::Liv::Lck::CameraResolutionDescriptor  resolution)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckOutputConfigurer*>(),
                        {"SetActiveResolution", {}, {::i2c::type_of<::Liv::Lck::CameraResolutionDescriptor>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult*>(this, ___internal_method, resolution);
}
inline ::Liv::Lck::LckResult_1<::Liv::Lck::CameraTrackDescriptor>* Liv::Lck::LckOutputConfigurer::GetCameraTrackDescriptor(::Liv::Lck::LckCaptureType  captureType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckOutputConfigurer*>(),
                        {"GetCameraTrackDescriptor", {}, {::i2c::type_of<::Liv::Lck::LckCaptureType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult_1<::Liv::Lck::CameraTrackDescriptor>*>(this, ___internal_method, captureType);
}
inline ::Liv::Lck::LckResult* Liv::Lck::LckOutputConfigurer::SetCameraTrackDescriptor(::Liv::Lck::LckCaptureType  captureType, ::Liv::Lck::CameraTrackDescriptor  trackDescriptor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckOutputConfigurer*>(),
                        {"SetCameraTrackDescriptor", {}, {::i2c::type_of<::Liv::Lck::LckCaptureType>(), ::i2c::type_of<::Liv::Lck::CameraTrackDescriptor>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult*>(this, ___internal_method, captureType, trackDescriptor);
}
inline ::Liv::Lck::LckResult* Liv::Lck::LckOutputConfigurer::SetCameraOrientation(::Liv::Lck::LckCameraOrientation  orientation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckOutputConfigurer*>(),
                        {"SetCameraOrientation", {}, {::i2c::type_of<::Liv::Lck::LckCameraOrientation>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult*>(this, ___internal_method, orientation);
}
inline ::Liv::Lck::LckResult_1<::Liv::Lck::CameraTrackDescriptor>* Liv::Lck::LckOutputConfigurer::GetActiveCameraTrackDescriptor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckOutputConfigurer*>(),
                        {"GetActiveCameraTrackDescriptor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult_1<::Liv::Lck::CameraTrackDescriptor>*>(this, ___internal_method);
}
inline ::Liv::Lck::LckResult* Liv::Lck::LckOutputConfigurer::SetActiveCameraTrackDescriptor(::Liv::Lck::CameraTrackDescriptor  trackDescriptor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckOutputConfigurer*>(),
                        {"SetActiveCameraTrackDescriptor", {}, {::i2c::type_of<::Liv::Lck::CameraTrackDescriptor>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult*>(this, ___internal_method, trackDescriptor);
}
inline ::Liv::Lck::LckResult_1<uint32_t>* Liv::Lck::LckOutputConfigurer::GetNumberOfAudioChannels()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckOutputConfigurer*>(),
                        {"GetNumberOfAudioChannels", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult_1<uint32_t>*>(this, ___internal_method);
}
inline ::Liv::Lck::LckResult_1<uint32_t>* Liv::Lck::LckOutputConfigurer::GetAudioSampleRate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckOutputConfigurer*>(),
                        {"GetAudioSampleRate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult_1<uint32_t>*>(this, ___internal_method);
}
inline void Liv::Lck::LckOutputConfigurer::ConfigureDefaultSettings(::Liv::Lck::ILckQualityConfig*  qualityConfig)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckOutputConfigurer*>(),
                        {"ConfigureDefaultSettings", {}, {::i2c::type_of<::Liv::Lck::ILckQualityConfig*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, qualityConfig);
}
inline void Liv::Lck::LckOutputConfigurer::TriggerCameraResolutionChangedEvent(::Liv::Lck::CameraResolutionDescriptor  resolution)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckOutputConfigurer*>(),
                        {"TriggerCameraResolutionChangedEvent", {}, {::i2c::type_of<::Liv::Lck::CameraResolutionDescriptor>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, resolution);
}
inline void Liv::Lck::LckOutputConfigurer::TriggerCameraFramerateChangedEvent(uint32_t  framerate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckOutputConfigurer*>(),
                        {"TriggerCameraFramerateChangedEvent", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, framerate);
}
inline void Liv::Lck::LckOutputConfigurer::OnActiveCameraTrackDescriptorChanged()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckOutputConfigurer*>(),
                        {"OnActiveCameraTrackDescriptorChanged", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::CameraResolutionDescriptor Liv::Lck::LckOutputConfigurer::GetResolution(::Liv::Lck::LckCaptureType  captureType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckOutputConfigurer*>(),
                        {"GetResolution", {}, {::i2c::type_of<::Liv::Lck::LckCaptureType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::CameraResolutionDescriptor>(this, ___internal_method, captureType);
}
inline ::Liv::Lck::LckResult* Liv::Lck::LckOutputConfigurer::SetResolution(::Liv::Lck::LckCaptureType  captureType, ::Liv::Lck::CameraResolutionDescriptor  resolution)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckOutputConfigurer*>(),
                        {"SetResolution", {}, {::i2c::type_of<::Liv::Lck::LckCaptureType>(), ::i2c::type_of<::Liv::Lck::CameraResolutionDescriptor>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult*>(this, ___internal_method, captureType, resolution);
}
inline ::Liv::Lck::LckResult* Liv::Lck::LckOutputConfigurer::SetCameraOrientation(::Liv::Lck::LckCaptureType  captureType, ::Liv::Lck::LckCameraOrientation  orientation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckOutputConfigurer*>(),
                        {"SetCameraOrientation", {}, {::i2c::type_of<::Liv::Lck::LckCaptureType>(), ::i2c::type_of<::Liv::Lck::LckCameraOrientation>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult*>(this, ___internal_method, captureType, orientation);
}
inline ::Liv::Lck::LckResult* Liv::Lck::LckOutputConfigurer::CreateQualityConfigurationResult(::Liv::Lck::QualityOption  qualityOption, bool  isRecordingValid, bool  isStreamingValid)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckOutputConfigurer*>(),
                        {"CreateQualityConfigurationResult", {}, {::i2c::type_of<::Liv::Lck::QualityOption>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult*>(nullptr, ___internal_method, qualityOption, isRecordingValid, isStreamingValid);
}
inline int32_t Liv::Lck::LckOutputConfigurer::DetermineAudioSystemSampleRate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckOutputConfigurer*>(),
                        {"DetermineAudioSystemSampleRate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline bool Liv::Lck::LckOutputConfigurer::IsValidDescriptor(::Liv::Lck::CameraTrackDescriptor  descriptor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckOutputConfigurer*>(),
                        {"IsValidDescriptor", {}, {::i2c::type_of<::Liv::Lck::CameraTrackDescriptor>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, descriptor);
}
inline ::Liv::Lck::LckCameraOrientation Liv::Lck::LckOutputConfigurer::GetCameraOrientation(::Liv::Lck::CameraResolutionDescriptor  resolution)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckOutputConfigurer*>(),
                        {"GetCameraOrientation", {}, {::i2c::type_of<::Liv::Lck::CameraResolutionDescriptor>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckCameraOrientation>(nullptr, ___internal_method, resolution);
}
template<typename T>
inline ::Liv::Lck::LckResult_1<T>* Liv::Lck::LckOutputConfigurer::NewUnknownCaptureTypeError()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::LckOutputConfigurer*>(),
                    {"NewUnknownCaptureTypeError", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult_1<T>*>(nullptr, ___internal_method);
}
inline ::Liv::Lck::LckResult* Liv::Lck::LckOutputConfigurer::NewUnknownCaptureTypeError()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckOutputConfigurer*>(),
                        {"NewUnknownCaptureTypeError", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult*>(nullptr, ___internal_method);
}
/// @brief [Preserve]
inline ::Liv::Lck::LckOutputConfigurer* Liv::Lck::LckOutputConfigurer::New_ctor(::Liv::Lck::ILckQualityConfig*  qualityConfig, ::Liv::Lck::ILckEventBus*  eventBus)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::LckOutputConfigurer*>(qualityConfig, eventBus));
}
/// @brief Convert operator to "::Liv::Lck::ILckOutputConfigurer"
constexpr  Liv::Lck::LckOutputConfigurer::operator ::Liv::Lck::ILckOutputConfigurer*() noexcept {
return static_cast<::Liv::Lck::ILckOutputConfigurer*>(static_cast<void*>(this));
}
/// @brief Convert to "::Liv::Lck::ILckOutputConfigurer"
constexpr ::Liv::Lck::ILckOutputConfigurer* Liv::Lck::LckOutputConfigurer::i___Liv__Lck__ILckOutputConfigurer() noexcept {
return static_cast<::Liv::Lck::ILckOutputConfigurer*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Liv::Lck::LckOutputConfigurer::LckOutputConfigurer()   {
}
//  Writing Method size for method: ::Liv::Lck::LckOutputConfigurer___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::LckOutputConfigurer___c::*)()>(&::Liv::Lck::LckOutputConfigurer___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cf052c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckOutputConfigurer___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::LckOutputConfigurer___c._ConfigureDefaultSettings_b__19_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Liv::Lck::LckOutputConfigurer___c::*)(::Liv::Lck::QualityOption)>(&::Liv::Lck::LckOutputConfigurer___c::_ConfigureDefaultSettings_b__19_0)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9cf0534;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckOutputConfigurer___c*>(),
                        {"<ConfigureDefaultSettings>b__19_0", {}, {::i2c::type_of<::Liv::Lck::QualityOption>()}}
                    )));
    return ___internal_method;
  }
};
inline void Liv::Lck::LckOutputConfigurer___c::setStaticF___9(::Liv::Lck::LckOutputConfigurer___c*  value)  {
::cordl_internals::setStaticField<::Liv::Lck::LckOutputConfigurer___c*, "<>9", ::Liv::Lck::LckOutputConfigurer___c*>(std::forward<::Liv::Lck::LckOutputConfigurer___c*>(value));
}
inline ::Liv::Lck::LckOutputConfigurer___c* Liv::Lck::LckOutputConfigurer___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Liv::Lck::LckOutputConfigurer___c*, "<>9", ::Liv::Lck::LckOutputConfigurer___c*>();
}
inline void Liv::Lck::LckOutputConfigurer___c::setStaticF___9__19_0(::System::Predicate_1<::Liv::Lck::QualityOption>*  value)  {
::cordl_internals::setStaticField<::System::Predicate_1<::Liv::Lck::QualityOption>*, "<>9__19_0", ::Liv::Lck::LckOutputConfigurer___c*>(std::forward<::System::Predicate_1<::Liv::Lck::QualityOption>*>(value));
}
inline ::System::Predicate_1<::Liv::Lck::QualityOption>* Liv::Lck::LckOutputConfigurer___c::getStaticF___9__19_0()  {
return ::cordl_internals::getStaticField<::System::Predicate_1<::Liv::Lck::QualityOption>*, "<>9__19_0", ::Liv::Lck::LckOutputConfigurer___c*>();
}
inline void Liv::Lck::LckOutputConfigurer___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckOutputConfigurer___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Liv::Lck::LckOutputConfigurer___c::_ConfigureDefaultSettings_b__19_0(::Liv::Lck::QualityOption  option)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::LckOutputConfigurer___c*>(),
                        {"<ConfigureDefaultSettings>b__19_0", {}, {::i2c::type_of<::Liv::Lck::QualityOption>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, option);
}
inline ::Liv::Lck::LckOutputConfigurer___c* Liv::Lck::LckOutputConfigurer___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::LckOutputConfigurer___c*>());
}
// Ctor Parameters []
constexpr ::Liv::Lck::LckOutputConfigurer___c::LckOutputConfigurer___c()   {
}
