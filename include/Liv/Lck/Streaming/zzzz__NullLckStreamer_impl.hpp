#pragma once
// IWYU pragma private; include "Liv/Lck/Streaming/NullLckStreamer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Liv/Lck/Streaming/zzzz__NullLckStreamer_def.hpp"
#include "GlobalNamespace/zzzz__ILckCaptureStateProvider_def.hpp"
#include "Liv/Lck/Streaming/zzzz__ILckStreamer_def.hpp"
#include "Liv/Lck/zzzz__LckCaptureState_def.hpp"
#include "Liv/Lck/zzzz__LckResult_1_def.hpp"
#include "Liv/Lck/zzzz__LckResult_def.hpp"
#include "Liv/Lck/zzzz__LckService_StopReason_def.hpp"
#include "Liv/NGFX/zzzz__LogLevel_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__TimeSpan_def.hpp"
//  Writing Method size for method: ::Liv::Lck::Streaming::NullLckStreamer.IsPaused
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult_1<bool>* (::Liv::Lck::Streaming::NullLckStreamer::*)()>(&::Liv::Lck::Streaming::NullLckStreamer::IsPaused)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9d3d698;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::NullLckStreamer*>(),
                        {"IsPaused", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Streaming::NullLckStreamer.get_CurrentCaptureState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckCaptureState (::Liv::Lck::Streaming::NullLckStreamer::*)()>(&::Liv::Lck::Streaming::NullLckStreamer::get_CurrentCaptureState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d3d6f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::NullLckStreamer*>(),
                        {"get_CurrentCaptureState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Streaming::NullLckStreamer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Streaming::NullLckStreamer::*)()>(&::Liv::Lck::Streaming::NullLckStreamer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d3d6fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::NullLckStreamer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Streaming::NullLckStreamer.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Streaming::NullLckStreamer::*)()>(&::Liv::Lck::Streaming::NullLckStreamer::Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9d3d704;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::NullLckStreamer*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Streaming::NullLckStreamer.get_IsStreaming
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Liv::Lck::Streaming::NullLckStreamer::*)()>(&::Liv::Lck::Streaming::NullLckStreamer::get_IsStreaming)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d3d708;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::NullLckStreamer*>(),
                        {"get_IsStreaming", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Streaming::NullLckStreamer.StartStreaming
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult* (::Liv::Lck::Streaming::NullLckStreamer::*)()>(&::Liv::Lck::Streaming::NullLckStreamer::StartStreaming)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x9d3d710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::NullLckStreamer*>(),
                        {"StartStreaming", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Streaming::NullLckStreamer.StopStreaming
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult* (::Liv::Lck::Streaming::NullLckStreamer::*)(::GlobalNamespace::LckService_StopReason)>(&::Liv::Lck::Streaming::NullLckStreamer::StopStreaming)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x9d3d758;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::NullLckStreamer*>(),
                        {"StopStreaming", {}, {::i2c::type_of<::GlobalNamespace::LckService_StopReason>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Streaming::NullLckStreamer.GetStreamDuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::LckResult_1<::System::TimeSpan>* (::Liv::Lck::Streaming::NullLckStreamer::*)()>(&::Liv::Lck::Streaming::NullLckStreamer::GetStreamDuration)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9d3d7a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::NullLckStreamer*>(),
                        {"GetStreamDuration", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Streaming::NullLckStreamer.SetLogLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Streaming::NullLckStreamer::*)(::Liv::NGFX::LogLevel)>(&::Liv::Lck::Streaming::NullLckStreamer::SetLogLevel)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9d3d7fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::NullLckStreamer*>(),
                        {"SetLogLevel", {}, {::i2c::type_of<::Liv::NGFX::LogLevel>()}}
                    )));
    return ___internal_method;
  }
};
inline ::Liv::Lck::LckResult_1<bool>* Liv::Lck::Streaming::NullLckStreamer::IsPaused()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::NullLckStreamer*>(),
                        {"IsPaused", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult_1<bool>*>(this, ___internal_method);
}
inline ::Liv::Lck::LckCaptureState Liv::Lck::Streaming::NullLckStreamer::get_CurrentCaptureState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::NullLckStreamer*>(),
                        {"get_CurrentCaptureState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckCaptureState>(this, ___internal_method);
}
inline void Liv::Lck::Streaming::NullLckStreamer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::NullLckStreamer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::Streaming::NullLckStreamer::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::NullLckStreamer*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Liv::Lck::Streaming::NullLckStreamer::get_IsStreaming()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::NullLckStreamer*>(),
                        {"get_IsStreaming", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Liv::Lck::LckResult* Liv::Lck::Streaming::NullLckStreamer::StartStreaming()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::NullLckStreamer*>(),
                        {"StartStreaming", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult*>(this, ___internal_method);
}
inline ::Liv::Lck::LckResult* Liv::Lck::Streaming::NullLckStreamer::StopStreaming(::GlobalNamespace::LckService_StopReason  stopReason)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::NullLckStreamer*>(),
                        {"StopStreaming", {}, {::i2c::type_of<::GlobalNamespace::LckService_StopReason>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult*>(this, ___internal_method, stopReason);
}
inline ::Liv::Lck::LckResult_1<::System::TimeSpan>* Liv::Lck::Streaming::NullLckStreamer::GetStreamDuration()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::NullLckStreamer*>(),
                        {"GetStreamDuration", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::LckResult_1<::System::TimeSpan>*>(this, ___internal_method);
}
inline void Liv::Lck::Streaming::NullLckStreamer::SetLogLevel(::Liv::NGFX::LogLevel  logLevel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::NullLckStreamer*>(),
                        {"SetLogLevel", {}, {::i2c::type_of<::Liv::NGFX::LogLevel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, logLevel);
}
/// @brief [Preserve]
inline ::Liv::Lck::Streaming::NullLckStreamer* Liv::Lck::Streaming::NullLckStreamer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::Streaming::NullLckStreamer*>());
}
/// @brief Convert operator to "::Liv::Lck::Streaming::ILckStreamer"
constexpr  Liv::Lck::Streaming::NullLckStreamer::operator ::Liv::Lck::Streaming::ILckStreamer*() noexcept {
return static_cast<::Liv::Lck::Streaming::ILckStreamer*>(static_cast<void*>(this));
}
/// @brief Convert to "::Liv::Lck::Streaming::ILckStreamer"
constexpr ::Liv::Lck::Streaming::ILckStreamer* Liv::Lck::Streaming::NullLckStreamer::i___Liv__Lck__Streaming__ILckStreamer() noexcept {
return static_cast<::Liv::Lck::Streaming::ILckStreamer*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::GlobalNamespace::ILckCaptureStateProvider"
constexpr  Liv::Lck::Streaming::NullLckStreamer::operator ::GlobalNamespace::ILckCaptureStateProvider*() noexcept {
return static_cast<::GlobalNamespace::ILckCaptureStateProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::ILckCaptureStateProvider"
constexpr ::GlobalNamespace::ILckCaptureStateProvider* Liv::Lck::Streaming::NullLckStreamer::i___GlobalNamespace__ILckCaptureStateProvider() noexcept {
return static_cast<::GlobalNamespace::ILckCaptureStateProvider*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Liv::Lck::Streaming::NullLckStreamer::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Liv::Lck::Streaming::NullLckStreamer::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Liv::Lck::Streaming::NullLckStreamer::NullLckStreamer()   {
}
