#pragma once
// IWYU pragma private; include "Liv/Lck/Streaming/ILckStreamer.hpp"
#include "Liv/Lck/Streaming/zzzz__ILckStreamer_def.hpp"
#include "GlobalNamespace/zzzz__ILckCaptureStateProvider_def.hpp"
#include "Liv/Lck/zzzz__LckResult_1_def.hpp"
#include "Liv/Lck/zzzz__LckResult_def.hpp"
#include "Liv/Lck/zzzz__LckService_StopReason_def.hpp"
#include "Liv/NGFX/zzzz__LogLevel_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
//  Writing Method size for method: ::Liv::Lck::Streaming::ILckStreamer.get_IsStreaming
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Liv::Lck::Streaming::ILckStreamer::*)()>(&::Liv::Lck::Streaming::ILckStreamer::get_IsStreaming)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::Streaming::ILckStreamer*>(),
                    {::i2c::class_of<::Liv::Lck::Streaming::ILckStreamer*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Streaming::ILckStreamer.StartStreaming
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult* (::Liv::Lck::Streaming::ILckStreamer::*)()>(&::Liv::Lck::Streaming::ILckStreamer::StartStreaming)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::Streaming::ILckStreamer*>(),
                    {::i2c::class_of<::Liv::Lck::Streaming::ILckStreamer*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Streaming::ILckStreamer.StopStreaming
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult* (::Liv::Lck::Streaming::ILckStreamer::*)(::GlobalNamespace::LckService_StopReason)>(&::Liv::Lck::Streaming::ILckStreamer::StopStreaming)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::Streaming::ILckStreamer*>(),
                    {::i2c::class_of<::Liv::Lck::Streaming::ILckStreamer*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Streaming::ILckStreamer.GetStreamDuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult_1<::System::TimeSpan>* (::Liv::Lck::Streaming::ILckStreamer::*)()>(&::Liv::Lck::Streaming::ILckStreamer::GetStreamDuration)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::Streaming::ILckStreamer*>(),
                    {::i2c::class_of<::Liv::Lck::Streaming::ILckStreamer*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Streaming::ILckStreamer.SetLogLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Streaming::ILckStreamer::*)(::Liv::NGFX::LogLevel)>(&::Liv::Lck::Streaming::ILckStreamer::SetLogLevel)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Liv::Lck::Streaming::ILckStreamer*>(),
                    {::i2c::class_of<::Liv::Lck::Streaming::ILckStreamer*>(), 4}
                ));
    return ___internal_method;
  }
};
inline bool Liv::Lck::Streaming::ILckStreamer::get_IsStreaming()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::Streaming::ILckStreamer*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Liv::Lck::LckResult* Liv::Lck::Streaming::ILckStreamer::StartStreaming()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::Streaming::ILckStreamer*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult*>(this, ___internal_method);
}
inline ::Liv::Lck::LckResult* Liv::Lck::Streaming::ILckStreamer::StopStreaming(::GlobalNamespace::LckService_StopReason  stopReason)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::Streaming::ILckStreamer*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult*>(this, ___internal_method, stopReason);
}
inline ::Liv::Lck::LckResult_1<::System::TimeSpan>* Liv::Lck::Streaming::ILckStreamer::GetStreamDuration()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::Streaming::ILckStreamer*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult_1<::System::TimeSpan>*>(this, ___internal_method);
}
inline void Liv::Lck::Streaming::ILckStreamer::SetLogLevel(::Liv::NGFX::LogLevel  logLevel)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Liv::Lck::Streaming::ILckStreamer*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, logLevel);
}
/// @brief Convert operator to "::GlobalNamespace::ILckCaptureStateProvider"
constexpr  Liv::Lck::Streaming::ILckStreamer::operator ::GlobalNamespace::ILckCaptureStateProvider*() noexcept {
return static_cast<::GlobalNamespace::ILckCaptureStateProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ILckCaptureStateProvider"
constexpr ::GlobalNamespace::ILckCaptureStateProvider* Liv::Lck::Streaming::ILckStreamer::i___GlobalNamespace__ILckCaptureStateProvider() noexcept {
return static_cast<::GlobalNamespace::ILckCaptureStateProvider*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Liv::Lck::Streaming::ILckStreamer::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Liv::Lck::Streaming::ILckStreamer::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
