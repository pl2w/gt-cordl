#pragma once
// IWYU pragma private; include "Liv/Lck/ILckOutputConfigurer.hpp"
#include "Liv/Lck/zzzz__ILckOutputConfigurer_def.hpp"
#include "Liv/Lck/zzzz__CameraResolutionDescriptor_def.hpp"
#include "Liv/Lck/zzzz__CameraTrackDescriptor_def.hpp"
#include "Liv/Lck/zzzz__LckCameraOrientation_def.hpp"
#include "Liv/Lck/zzzz__LckCaptureType_def.hpp"
#include "Liv/Lck/zzzz__LckResult_1_def.hpp"
#include "Liv/Lck/zzzz__LckResult_def.hpp"
#include "Liv/Lck/zzzz__QualityOption_def.hpp"
//  Writing Method size for method: ::Liv::Lck::ILckOutputConfigurer.ConfigureFromQualityConfig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult* (::Liv::Lck::ILckOutputConfigurer::*)(::Liv::Lck::QualityOption)>(&::Liv::Lck::ILckOutputConfigurer::ConfigureFromQualityConfig)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckOutputConfigurer*>(),
                    {::i2c::class_of<::Liv::Lck::ILckOutputConfigurer*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ILckOutputConfigurer.GetActiveCaptureType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult_1<::Liv::Lck::LckCaptureType>* (::Liv::Lck::ILckOutputConfigurer::*)()>(&::Liv::Lck::ILckOutputConfigurer::GetActiveCaptureType)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckOutputConfigurer*>(),
                    {::i2c::class_of<::Liv::Lck::ILckOutputConfigurer*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ILckOutputConfigurer.SetActiveCaptureType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult* (::Liv::Lck::ILckOutputConfigurer::*)(::Liv::Lck::LckCaptureType)>(&::Liv::Lck::ILckOutputConfigurer::SetActiveCaptureType)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckOutputConfigurer*>(),
                    {::i2c::class_of<::Liv::Lck::ILckOutputConfigurer*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ILckOutputConfigurer.SetActiveVideoFramerate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult* (::Liv::Lck::ILckOutputConfigurer::*)(uint32_t)>(&::Liv::Lck::ILckOutputConfigurer::SetActiveVideoFramerate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckOutputConfigurer*>(),
                    {::i2c::class_of<::Liv::Lck::ILckOutputConfigurer*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ILckOutputConfigurer.SetActiveVideoBitrate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult* (::Liv::Lck::ILckOutputConfigurer::*)(uint32_t)>(&::Liv::Lck::ILckOutputConfigurer::SetActiveVideoBitrate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckOutputConfigurer*>(),
                    {::i2c::class_of<::Liv::Lck::ILckOutputConfigurer*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ILckOutputConfigurer.SetActiveAudioBitrate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult* (::Liv::Lck::ILckOutputConfigurer::*)(uint32_t)>(&::Liv::Lck::ILckOutputConfigurer::SetActiveAudioBitrate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckOutputConfigurer*>(),
                    {::i2c::class_of<::Liv::Lck::ILckOutputConfigurer*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ILckOutputConfigurer.SetActiveResolution
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult* (::Liv::Lck::ILckOutputConfigurer::*)(::Liv::Lck::CameraResolutionDescriptor)>(&::Liv::Lck::ILckOutputConfigurer::SetActiveResolution)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckOutputConfigurer*>(),
                    {::i2c::class_of<::Liv::Lck::ILckOutputConfigurer*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ILckOutputConfigurer.SetCameraOrientation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult* (::Liv::Lck::ILckOutputConfigurer::*)(::Liv::Lck::LckCameraOrientation)>(&::Liv::Lck::ILckOutputConfigurer::SetCameraOrientation)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckOutputConfigurer*>(),
                    {::i2c::class_of<::Liv::Lck::ILckOutputConfigurer*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ILckOutputConfigurer.GetCameraTrackDescriptor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult_1<::Liv::Lck::CameraTrackDescriptor>* (::Liv::Lck::ILckOutputConfigurer::*)(::Liv::Lck::LckCaptureType)>(&::Liv::Lck::ILckOutputConfigurer::GetCameraTrackDescriptor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckOutputConfigurer*>(),
                    {::i2c::class_of<::Liv::Lck::ILckOutputConfigurer*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ILckOutputConfigurer.SetCameraTrackDescriptor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult* (::Liv::Lck::ILckOutputConfigurer::*)(::Liv::Lck::LckCaptureType, ::Liv::Lck::CameraTrackDescriptor)>(&::Liv::Lck::ILckOutputConfigurer::SetCameraTrackDescriptor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckOutputConfigurer*>(),
                    {::i2c::class_of<::Liv::Lck::ILckOutputConfigurer*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ILckOutputConfigurer.GetActiveCameraTrackDescriptor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult_1<::Liv::Lck::CameraTrackDescriptor>* (::Liv::Lck::ILckOutputConfigurer::*)()>(&::Liv::Lck::ILckOutputConfigurer::GetActiveCameraTrackDescriptor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckOutputConfigurer*>(),
                    {::i2c::class_of<::Liv::Lck::ILckOutputConfigurer*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ILckOutputConfigurer.SetActiveCameraTrackDescriptor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult* (::Liv::Lck::ILckOutputConfigurer::*)(::Liv::Lck::CameraTrackDescriptor)>(&::Liv::Lck::ILckOutputConfigurer::SetActiveCameraTrackDescriptor)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckOutputConfigurer*>(),
                    {::i2c::class_of<::Liv::Lck::ILckOutputConfigurer*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ILckOutputConfigurer.GetNumberOfAudioChannels
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult_1<uint32_t>* (::Liv::Lck::ILckOutputConfigurer::*)()>(&::Liv::Lck::ILckOutputConfigurer::GetNumberOfAudioChannels)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckOutputConfigurer*>(),
                    {::i2c::class_of<::Liv::Lck::ILckOutputConfigurer*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::ILckOutputConfigurer.GetAudioSampleRate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult_1<uint32_t>* (::Liv::Lck::ILckOutputConfigurer::*)()>(&::Liv::Lck::ILckOutputConfigurer::GetAudioSampleRate)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::ILckOutputConfigurer*>(),
                    {::i2c::class_of<::Liv::Lck::ILckOutputConfigurer*>(), 13}
                ));
    return ___internal_method;
  }
};
inline ::Liv::Lck::LckResult* Liv::Lck::ILckOutputConfigurer::ConfigureFromQualityConfig(::Liv::Lck::QualityOption  qualityOption)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckOutputConfigurer*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult*>(this, ___internal_method, qualityOption);
}
inline ::Liv::Lck::LckResult_1<::Liv::Lck::LckCaptureType>* Liv::Lck::ILckOutputConfigurer::GetActiveCaptureType()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckOutputConfigurer*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult_1<::Liv::Lck::LckCaptureType>*>(this, ___internal_method);
}
inline ::Liv::Lck::LckResult* Liv::Lck::ILckOutputConfigurer::SetActiveCaptureType(::Liv::Lck::LckCaptureType  captureType)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckOutputConfigurer*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult*>(this, ___internal_method, captureType);
}
inline ::Liv::Lck::LckResult* Liv::Lck::ILckOutputConfigurer::SetActiveVideoFramerate(uint32_t  framerate)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckOutputConfigurer*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult*>(this, ___internal_method, framerate);
}
inline ::Liv::Lck::LckResult* Liv::Lck::ILckOutputConfigurer::SetActiveVideoBitrate(uint32_t  bitrate)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckOutputConfigurer*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult*>(this, ___internal_method, bitrate);
}
inline ::Liv::Lck::LckResult* Liv::Lck::ILckOutputConfigurer::SetActiveAudioBitrate(uint32_t  bitrate)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckOutputConfigurer*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult*>(this, ___internal_method, bitrate);
}
inline ::Liv::Lck::LckResult* Liv::Lck::ILckOutputConfigurer::SetActiveResolution(::Liv::Lck::CameraResolutionDescriptor  resolution)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckOutputConfigurer*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult*>(this, ___internal_method, resolution);
}
inline ::Liv::Lck::LckResult* Liv::Lck::ILckOutputConfigurer::SetCameraOrientation(::Liv::Lck::LckCameraOrientation  orientation)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckOutputConfigurer*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult*>(this, ___internal_method, orientation);
}
inline ::Liv::Lck::LckResult_1<::Liv::Lck::CameraTrackDescriptor>* Liv::Lck::ILckOutputConfigurer::GetCameraTrackDescriptor(::Liv::Lck::LckCaptureType  captureType)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckOutputConfigurer*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult_1<::Liv::Lck::CameraTrackDescriptor>*>(this, ___internal_method, captureType);
}
inline ::Liv::Lck::LckResult* Liv::Lck::ILckOutputConfigurer::SetCameraTrackDescriptor(::Liv::Lck::LckCaptureType  captureType, ::Liv::Lck::CameraTrackDescriptor  trackDescriptor)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckOutputConfigurer*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult*>(this, ___internal_method, captureType, trackDescriptor);
}
inline ::Liv::Lck::LckResult_1<::Liv::Lck::CameraTrackDescriptor>* Liv::Lck::ILckOutputConfigurer::GetActiveCameraTrackDescriptor()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckOutputConfigurer*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult_1<::Liv::Lck::CameraTrackDescriptor>*>(this, ___internal_method);
}
inline ::Liv::Lck::LckResult* Liv::Lck::ILckOutputConfigurer::SetActiveCameraTrackDescriptor(::Liv::Lck::CameraTrackDescriptor  trackDescriptor)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckOutputConfigurer*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult*>(this, ___internal_method, trackDescriptor);
}
inline ::Liv::Lck::LckResult_1<uint32_t>* Liv::Lck::ILckOutputConfigurer::GetNumberOfAudioChannels()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckOutputConfigurer*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult_1<uint32_t>*>(this, ___internal_method);
}
inline ::Liv::Lck::LckResult_1<uint32_t>* Liv::Lck::ILckOutputConfigurer::GetAudioSampleRate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::ILckOutputConfigurer*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult_1<uint32_t>*>(this, ___internal_method);
}
