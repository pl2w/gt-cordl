#pragma once
// IWYU pragma private; include "Liv/Lck/Recorder/ILckNativeRecordingService.hpp"
#include "Liv/Lck/Recorder/zzzz__ILckNativeRecordingService_def.hpp"
#include "Liv/Lck/Encoding/zzzz__LckEncodedPacketCallback_def.hpp"
#include "Liv/Lck/Recorder/zzzz__MuxerConfig_def.hpp"
#include "Liv/NGFX/zzzz__LogLevel_def.hpp"
//  Writing Method size for method: ::Liv::Lck::Recorder::ILckNativeRecordingService.CreateNativeMuxer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Liv::Lck::Recorder::ILckNativeRecordingService::*)()>(&::Liv::Lck::Recorder::ILckNativeRecordingService::CreateNativeMuxer)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::Recorder::ILckNativeRecordingService*>(),
                    {::i2c::class_of<::Liv::Lck::Recorder::ILckNativeRecordingService*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Recorder::ILckNativeRecordingService.DestroyNativeMuxer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Recorder::ILckNativeRecordingService::*)()>(&::Liv::Lck::Recorder::ILckNativeRecordingService::DestroyNativeMuxer)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::Recorder::ILckNativeRecordingService*>(),
                    {::i2c::class_of<::Liv::Lck::Recorder::ILckNativeRecordingService*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Recorder::ILckNativeRecordingService.HasNativeMuxer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Liv::Lck::Recorder::ILckNativeRecordingService::*)()>(&::Liv::Lck::Recorder::ILckNativeRecordingService::HasNativeMuxer)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::Recorder::ILckNativeRecordingService*>(),
                    {::i2c::class_of<::Liv::Lck::Recorder::ILckNativeRecordingService*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Recorder::ILckNativeRecordingService.StartNativeMuxer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Liv::Lck::Recorder::ILckNativeRecordingService::*)(::by_ref<::Liv::Lck::Recorder::MuxerConfig>)>(&::Liv::Lck::Recorder::ILckNativeRecordingService::StartNativeMuxer)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::Recorder::ILckNativeRecordingService*>(),
                    {::i2c::class_of<::Liv::Lck::Recorder::ILckNativeRecordingService*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Recorder::ILckNativeRecordingService.StopNativeMuxer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Liv::Lck::Recorder::ILckNativeRecordingService::*)()>(&::Liv::Lck::Recorder::ILckNativeRecordingService::StopNativeMuxer)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::Recorder::ILckNativeRecordingService*>(),
                    {::i2c::class_of<::Liv::Lck::Recorder::ILckNativeRecordingService*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Recorder::ILckNativeRecordingService.SetNativeMuxerLogLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Recorder::ILckNativeRecordingService::*)(::Liv::NGFX::LogLevel)>(&::Liv::Lck::Recorder::ILckNativeRecordingService::SetNativeMuxerLogLevel)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::Recorder::ILckNativeRecordingService*>(),
                    {::i2c::class_of<::Liv::Lck::Recorder::ILckNativeRecordingService*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Recorder::ILckNativeRecordingService.GetMuxPacketCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::Encoding::LckEncodedPacketCallback (::Liv::Lck::Recorder::ILckNativeRecordingService::*)()>(&::Liv::Lck::Recorder::ILckNativeRecordingService::GetMuxPacketCallback)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::Recorder::ILckNativeRecordingService*>(),
                    {::i2c::class_of<::Liv::Lck::Recorder::ILckNativeRecordingService*>(), 6}
                ));
    return ___internal_method;
  }
};
inline bool Liv::Lck::Recorder::ILckNativeRecordingService::CreateNativeMuxer()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::Recorder::ILckNativeRecordingService*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Liv::Lck::Recorder::ILckNativeRecordingService::DestroyNativeMuxer()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::Recorder::ILckNativeRecordingService*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Liv::Lck::Recorder::ILckNativeRecordingService::HasNativeMuxer()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::Recorder::ILckNativeRecordingService*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Liv::Lck::Recorder::ILckNativeRecordingService::StartNativeMuxer(::by_ref<::Liv::Lck::Recorder::MuxerConfig>  config)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::Recorder::ILckNativeRecordingService*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, config);
}
inline bool Liv::Lck::Recorder::ILckNativeRecordingService::StopNativeMuxer()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::Recorder::ILckNativeRecordingService*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Liv::Lck::Recorder::ILckNativeRecordingService::SetNativeMuxerLogLevel(::Liv::NGFX::LogLevel  logLevel)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::Recorder::ILckNativeRecordingService*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, logLevel);
}
inline ::Liv::Lck::Encoding::LckEncodedPacketCallback Liv::Lck::Recorder::ILckNativeRecordingService::GetMuxPacketCallback()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::Recorder::ILckNativeRecordingService*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::Encoding::LckEncodedPacketCallback>(this, ___internal_method);
}
