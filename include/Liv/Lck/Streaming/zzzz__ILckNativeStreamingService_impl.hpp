#pragma once
// IWYU pragma private; include "Liv/Lck/Streaming/ILckNativeStreamingService.hpp"
#include "Liv/Lck/Streaming/zzzz__ILckNativeStreamingService_def.hpp"
#include "Liv/Lck/Encoding/zzzz__LckEncodedPacketCallback_def.hpp"
#include "Liv/NGFX/zzzz__LogLevel_def.hpp"
//  Writing Method size for method: ::Liv::Lck::Streaming::ILckNativeStreamingService.CreateNativeStreamer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Liv::Lck::Streaming::ILckNativeStreamingService::*)()>(&::Liv::Lck::Streaming::ILckNativeStreamingService::CreateNativeStreamer)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::Streaming::ILckNativeStreamingService*>(),
                    {::i2c::class_of<::Liv::Lck::Streaming::ILckNativeStreamingService*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Streaming::ILckNativeStreamingService.DestroyNativeStreamer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Streaming::ILckNativeStreamingService::*)()>(&::Liv::Lck::Streaming::ILckNativeStreamingService::DestroyNativeStreamer)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::Streaming::ILckNativeStreamingService*>(),
                    {::i2c::class_of<::Liv::Lck::Streaming::ILckNativeStreamingService*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Streaming::ILckNativeStreamingService.HasNativeStreamer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Liv::Lck::Streaming::ILckNativeStreamingService::*)()>(&::Liv::Lck::Streaming::ILckNativeStreamingService::HasNativeStreamer)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::Streaming::ILckNativeStreamingService*>(),
                    {::i2c::class_of<::Liv::Lck::Streaming::ILckNativeStreamingService*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Streaming::ILckNativeStreamingService.StartNativeStreamer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Liv::Lck::Streaming::ILckNativeStreamingService::*)(int32_t, int32_t)>(&::Liv::Lck::Streaming::ILckNativeStreamingService::StartNativeStreamer)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::Streaming::ILckNativeStreamingService*>(),
                    {::i2c::class_of<::Liv::Lck::Streaming::ILckNativeStreamingService*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Streaming::ILckNativeStreamingService.StopNativeStreamer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Liv::Lck::Streaming::ILckNativeStreamingService::*)()>(&::Liv::Lck::Streaming::ILckNativeStreamingService::StopNativeStreamer)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::Streaming::ILckNativeStreamingService*>(),
                    {::i2c::class_of<::Liv::Lck::Streaming::ILckNativeStreamingService*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Streaming::ILckNativeStreamingService.SetNativeStreamerLogLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Streaming::ILckNativeStreamingService::*)(::Liv::NGFX::LogLevel)>(&::Liv::Lck::Streaming::ILckNativeStreamingService::SetNativeStreamerLogLevel)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::Streaming::ILckNativeStreamingService*>(),
                    {::i2c::class_of<::Liv::Lck::Streaming::ILckNativeStreamingService*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Streaming::ILckNativeStreamingService.GetStreamPacketCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::Encoding::LckEncodedPacketCallback (::Liv::Lck::Streaming::ILckNativeStreamingService::*)()>(&::Liv::Lck::Streaming::ILckNativeStreamingService::GetStreamPacketCallback)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::Streaming::ILckNativeStreamingService*>(),
                    {::i2c::class_of<::Liv::Lck::Streaming::ILckNativeStreamingService*>(), 6}
                ));
    return ___internal_method;
  }
};
inline bool Liv::Lck::Streaming::ILckNativeStreamingService::CreateNativeStreamer()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::Streaming::ILckNativeStreamingService*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Liv::Lck::Streaming::ILckNativeStreamingService::DestroyNativeStreamer()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::Streaming::ILckNativeStreamingService*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Liv::Lck::Streaming::ILckNativeStreamingService::HasNativeStreamer()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::Streaming::ILckNativeStreamingService*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Liv::Lck::Streaming::ILckNativeStreamingService::StartNativeStreamer(int32_t  width, int32_t  height)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::Streaming::ILckNativeStreamingService*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, width, height);
}
inline bool Liv::Lck::Streaming::ILckNativeStreamingService::StopNativeStreamer()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::Streaming::ILckNativeStreamingService*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Liv::Lck::Streaming::ILckNativeStreamingService::SetNativeStreamerLogLevel(::Liv::NGFX::LogLevel  logLevel)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::Streaming::ILckNativeStreamingService*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, logLevel);
}
inline ::Liv::Lck::Encoding::LckEncodedPacketCallback Liv::Lck::Streaming::ILckNativeStreamingService::GetStreamPacketCallback()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::Streaming::ILckNativeStreamingService*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::Encoding::LckEncodedPacketCallback>(this, ___internal_method);
}
