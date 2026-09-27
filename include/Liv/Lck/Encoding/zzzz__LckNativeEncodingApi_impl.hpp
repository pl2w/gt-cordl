#pragma once
// IWYU pragma private; include "Liv/Lck/Encoding/LckNativeEncodingApi.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Liv/Lck/Encoding/zzzz__LckNativeEncodingApi_def.hpp"
#include "Liv/Lck/Encoding/zzzz__LckNativeEncodingApi_AudioTrack_def.hpp"
#include "Liv/Lck/Encoding/zzzz__LckNativeEncodingApi_FrameSubmission_def.hpp"
#include "Liv/Lck/Encoding/zzzz__LckNativeEncodingApi_FrameTexture_def.hpp"
#include "Liv/Lck/Encoding/zzzz__LckNativeEncodingApi_ResourceData_def.hpp"
#include "Liv/Lck/Encoding/zzzz__LckNativeEncodingApi_TrackInfo_def.hpp"
#include "Liv/Lck/Encoding/zzzz__LckNativeEncodingApi_TrackType_def.hpp"
#include "Liv/Lck/Encoding/zzzz__LckNativeEncodingApi_def.hpp"
#include "Liv/Lck/ErrorHandling/zzzz__CaptureErrorType_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Liv::Lck::Encoding::LckNativeEncodingApi.CreateEncoder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::Liv::Lck::Encoding::LckNativeEncodingApi::CreateEncoder)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x9d45d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckNativeEncodingApi*>(),
                        {"CreateEncoder", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Encoding::LckNativeEncodingApi.DestroyEncoder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::Liv::Lck::Encoding::LckNativeEncodingApi::DestroyEncoder)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x9d475d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckNativeEncodingApi*>(),
                        {"DestroyEncoder", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Encoding::LckNativeEncodingApi.StartEncoder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, ::ArrayW<::GlobalNamespace::LckNativeEncodingApi_TrackInfo>, uint32_t)>(&::Liv::Lck::Encoding::LckNativeEncodingApi::StartEncoder)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x9d4447c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckNativeEncodingApi*>(),
                        {"StartEncoder", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<::GlobalNamespace::LckNativeEncodingApi_TrackInfo>>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Encoding::LckNativeEncodingApi.StopEncoder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::Liv::Lck::Encoding::LckNativeEncodingApi::StopEncoder)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x9d449d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckNativeEncodingApi*>(),
                        {"StopEncoder", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Encoding::LckNativeEncodingApi.AddEncoderPacketCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, ::System::IntPtr)>(&::Liv::Lck::Encoding::LckNativeEncodingApi::AddEncoderPacketCallback)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x9d45a70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckNativeEncodingApi*>(),
                        {"AddEncoderPacketCallback", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Encoding::LckNativeEncodingApi.RemoveEncoderPacketCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, ::System::IntPtr)>(&::Liv::Lck::Encoding::LckNativeEncodingApi::RemoveEncoderPacketCallback)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x9d45cbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckNativeEncodingApi*>(),
                        {"RemoveEncoderPacketCallback", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Encoding::LckNativeEncodingApi.GetResourceContext
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::Liv::Lck::Encoding::LckNativeEncodingApi::GetResourceContext)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x9d440a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckNativeEncodingApi*>(),
                        {"GetResourceContext", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Encoding::LckNativeEncodingApi.AllocateFrameSubmission
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::GlobalNamespace::LckNativeEncodingApi_FrameSubmission, ::ArrayW<::GlobalNamespace::LckNativeEncodingApi_AudioTrack>, ::ArrayW<bool>)>(&::Liv::Lck::Encoding::LckNativeEncodingApi::AllocateFrameSubmission)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x9d45ee8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckNativeEncodingApi*>(),
                        {"AllocateFrameSubmission", {}, {::i2c::type_of<::GlobalNamespace::LckNativeEncodingApi_FrameSubmission>(), ::i2c::type_of<::ArrayW<::GlobalNamespace::LckNativeEncodingApi_AudioTrack>>(), ::i2c::type_of<::ArrayW<bool>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Encoding::LckNativeEncodingApi.GetPluginUpdateFunction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::Liv::Lck::Encoding::LckNativeEncodingApi::GetPluginUpdateFunction)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x9d46018;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckNativeEncodingApi*>(),
                        {"GetPluginUpdateFunction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Encoding::LckNativeEncodingApi.GetInitResourcesFunction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::Liv::Lck::Encoding::LckNativeEncodingApi::GetInitResourcesFunction)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x9d4662c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckNativeEncodingApi*>(),
                        {"GetInitResourcesFunction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Encoding::LckNativeEncodingApi.GetReleaseResourcesFunction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::Liv::Lck::Encoding::LckNativeEncodingApi::GetReleaseResourcesFunction)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x9d46384;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckNativeEncodingApi*>(),
                        {"GetReleaseResourcesFunction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Encoding::LckNativeEncodingApi.GetAudioTrackFrameSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::System::IntPtr, uint32_t)>(&::Liv::Lck::Encoding::LckNativeEncodingApi::GetAudioTrackFrameSize)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x9d46300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckNativeEncodingApi*>(),
                        {"GetAudioTrackFrameSize", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Encoding::LckNativeEncodingApi.SetEncoderLogLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, uint32_t)>(&::Liv::Lck::Encoding::LckNativeEncodingApi::SetEncoderLogLevel)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x9d45510;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckNativeEncodingApi*>(),
                        {"SetEncoderLogLevel", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Encoding::LckNativeEncodingApi.SetCaptureErrorCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, ::Liv::Lck::Encoding::LckNativeEncodingApi_CaptureErrorCallback*)>(&::Liv::Lck::Encoding::LckNativeEncodingApi::SetCaptureErrorCallback)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x9d45e54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckNativeEncodingApi*>(),
                        {"SetCaptureErrorCallback", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Liv::Lck::Encoding::LckNativeEncodingApi_CaptureErrorCallback*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Encoding::LckNativeEncodingApi.SetAllowBFrames
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::Liv::Lck::Encoding::LckNativeEncodingApi::SetAllowBFrames)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x9d4764c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckNativeEncodingApi*>(),
                        {"SetAllowBFrames", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline ::System::IntPtr Liv::Lck::Encoding::LckNativeEncodingApi::CreateEncoder()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckNativeEncodingApi*>(),
                        {"CreateEncoder", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline void Liv::Lck::Encoding::LckNativeEncodingApi::DestroyEncoder(::System::IntPtr  encoderContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckNativeEncodingApi*>(),
                        {"DestroyEncoder", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, encoderContext);
}
inline bool Liv::Lck::Encoding::LckNativeEncodingApi::StartEncoder(::System::IntPtr  encoderContext, ::ArrayW<::GlobalNamespace::LckNativeEncodingApi_TrackInfo>  tracks, uint32_t  tracksCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckNativeEncodingApi*>(),
                        {"StartEncoder", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<::GlobalNamespace::LckNativeEncodingApi_TrackInfo>>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, encoderContext, tracks, tracksCount);
}
inline void Liv::Lck::Encoding::LckNativeEncodingApi::StopEncoder(::System::IntPtr  encoderContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckNativeEncodingApi*>(),
                        {"StopEncoder", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, encoderContext);
}
inline void Liv::Lck::Encoding::LckNativeEncodingApi::AddEncoderPacketCallback(::System::IntPtr  encoderContext, ::System::IntPtr  objectPtr, ::System::IntPtr  functionPtr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckNativeEncodingApi*>(),
                        {"AddEncoderPacketCallback", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, encoderContext, objectPtr, functionPtr);
}
inline void Liv::Lck::Encoding::LckNativeEncodingApi::RemoveEncoderPacketCallback(::System::IntPtr  encoderContext, ::System::IntPtr  objectPtr, ::System::IntPtr  functionPtr)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckNativeEncodingApi*>(),
                        {"RemoveEncoderPacketCallback", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, encoderContext, objectPtr, functionPtr);
}
inline ::System::IntPtr Liv::Lck::Encoding::LckNativeEncodingApi::GetResourceContext(::System::IntPtr  encoderContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckNativeEncodingApi*>(),
                        {"GetResourceContext", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, encoderContext);
}
inline ::System::IntPtr Liv::Lck::Encoding::LckNativeEncodingApi::AllocateFrameSubmission(::GlobalNamespace::LckNativeEncodingApi_FrameSubmission  frame, ::ArrayW<::GlobalNamespace::LckNativeEncodingApi_AudioTrack>  audioTracks, ::ArrayW<bool>  readyFrames)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckNativeEncodingApi*>(),
                        {"AllocateFrameSubmission", {}, {::i2c::type_of<::GlobalNamespace::LckNativeEncodingApi_FrameSubmission>(), ::i2c::type_of<::ArrayW<::GlobalNamespace::LckNativeEncodingApi_AudioTrack>>(), ::i2c::type_of<::ArrayW<bool>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, frame, audioTracks, readyFrames);
}
inline ::System::IntPtr Liv::Lck::Encoding::LckNativeEncodingApi::GetPluginUpdateFunction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckNativeEncodingApi*>(),
                        {"GetPluginUpdateFunction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline ::System::IntPtr Liv::Lck::Encoding::LckNativeEncodingApi::GetInitResourcesFunction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckNativeEncodingApi*>(),
                        {"GetInitResourcesFunction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline ::System::IntPtr Liv::Lck::Encoding::LckNativeEncodingApi::GetReleaseResourcesFunction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckNativeEncodingApi*>(),
                        {"GetReleaseResourcesFunction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline uint32_t Liv::Lck::Encoding::LckNativeEncodingApi::GetAudioTrackFrameSize(::System::IntPtr  encoderContext, uint32_t  track_index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckNativeEncodingApi*>(),
                        {"GetAudioTrackFrameSize", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, encoderContext, track_index);
}
inline void Liv::Lck::Encoding::LckNativeEncodingApi::SetEncoderLogLevel(::System::IntPtr  encoderContext, uint32_t  level)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckNativeEncodingApi*>(),
                        {"SetEncoderLogLevel", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, encoderContext, level);
}
inline bool Liv::Lck::Encoding::LckNativeEncodingApi::SetCaptureErrorCallback(::System::IntPtr  encoderContext, ::Liv::Lck::Encoding::LckNativeEncodingApi_CaptureErrorCallback*  errorCallback)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckNativeEncodingApi*>(),
                        {"SetCaptureErrorCallback", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Liv::Lck::Encoding::LckNativeEncodingApi_CaptureErrorCallback*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, encoderContext, errorCallback);
}
inline void Liv::Lck::Encoding::LckNativeEncodingApi::SetAllowBFrames(::System::IntPtr  encoderContext, bool  allowBFrames)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckNativeEncodingApi*>(),
                        {"SetAllowBFrames", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, encoderContext, allowBFrames);
}
// Ctor Parameters []
constexpr ::Liv::Lck::Encoding::LckNativeEncodingApi::LckNativeEncodingApi()   {
}
//  Writing Method size for method: ::Liv::Lck::Encoding::LckNativeEncodingApi_CaptureErrorCallback._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Encoding::LckNativeEncodingApi_CaptureErrorCallback::*)(::System::Object*, ::System::IntPtr)>(&::Liv::Lck::Encoding::LckNativeEncodingApi_CaptureErrorCallback::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x9d45db4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckNativeEncodingApi_CaptureErrorCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Encoding::LckNativeEncodingApi_CaptureErrorCallback.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Encoding::LckNativeEncodingApi_CaptureErrorCallback::*)(::Liv::Lck::ErrorHandling::CaptureErrorType, ::StringW)>(&::Liv::Lck::Encoding::LckNativeEncodingApi_CaptureErrorCallback::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9d476d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::Encoding::LckNativeEncodingApi_CaptureErrorCallback*>(),
                    {::i2c::class_of<::Liv::Lck::Encoding::LckNativeEncodingApi_CaptureErrorCallback*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Encoding::LckNativeEncodingApi_CaptureErrorCallback.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Liv::Lck::Encoding::LckNativeEncodingApi_CaptureErrorCallback::*)(::Liv::Lck::ErrorHandling::CaptureErrorType, ::StringW, ::System::AsyncCallback*, ::System::Object*)>(&::Liv::Lck::Encoding::LckNativeEncodingApi_CaptureErrorCallback::BeginInvoke)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x9d476e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::Encoding::LckNativeEncodingApi_CaptureErrorCallback*>(),
                    {::i2c::class_of<::Liv::Lck::Encoding::LckNativeEncodingApi_CaptureErrorCallback*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Encoding::LckNativeEncodingApi_CaptureErrorCallback.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Encoding::LckNativeEncodingApi_CaptureErrorCallback::*)(::System::IAsyncResult*)>(&::Liv::Lck::Encoding::LckNativeEncodingApi_CaptureErrorCallback::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9d47778;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::Encoding::LckNativeEncodingApi_CaptureErrorCallback*>(),
                    {::i2c::class_of<::Liv::Lck::Encoding::LckNativeEncodingApi_CaptureErrorCallback*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Liv::Lck::Encoding::LckNativeEncodingApi_CaptureErrorCallback::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Encoding::LckNativeEncodingApi_CaptureErrorCallback*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Liv::Lck::Encoding::LckNativeEncodingApi_CaptureErrorCallback::Invoke(::Liv::Lck::ErrorHandling::CaptureErrorType  errorType, ::StringW  errorMessage)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::Encoding::LckNativeEncodingApi_CaptureErrorCallback*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, errorType, errorMessage);
}
inline ::System::IAsyncResult* Liv::Lck::Encoding::LckNativeEncodingApi_CaptureErrorCallback::BeginInvoke(::Liv::Lck::ErrorHandling::CaptureErrorType  errorType, ::StringW  errorMessage, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::Encoding::LckNativeEncodingApi_CaptureErrorCallback*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, errorType, errorMessage, callback, object);
}
inline void Liv::Lck::Encoding::LckNativeEncodingApi_CaptureErrorCallback::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::Encoding::LckNativeEncodingApi_CaptureErrorCallback*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::Liv::Lck::Encoding::LckNativeEncodingApi_CaptureErrorCallback* Liv::Lck::Encoding::LckNativeEncodingApi_CaptureErrorCallback::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::Encoding::LckNativeEncodingApi_CaptureErrorCallback*>(object, method));
}
// Ctor Parameters []
constexpr ::Liv::Lck::Encoding::LckNativeEncodingApi_CaptureErrorCallback::LckNativeEncodingApi_CaptureErrorCallback()   {
}
