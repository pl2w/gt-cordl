#pragma once
// IWYU pragma private; include "Liv/Lck/Streaming/LckNativeStreamingService.hpp"
#include "Liv/NGFX/zzzz__LogLevel_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Liv/Lck/Streaming/zzzz__LckNativeStreamingService_def.hpp"
#include "Liv/Lck/Encoding/zzzz__LckEncodedPacketCallback_def.hpp"
#include "Liv/Lck/Streaming/zzzz__ILckNativeStreamingService_def.hpp"
#include "Liv/NGFX/zzzz__LogLevel_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Liv::Lck::Streaming::LckNativeStreamingService.CreateStreamer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::Liv::Lck::Streaming::LckNativeStreamingService::CreateStreamer)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x9cf92e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckNativeStreamingService*>(),
                        {"CreateStreamer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Streaming::LckNativeStreamingService.DestroyStreamer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::Liv::Lck::Streaming::LckNativeStreamingService::DestroyStreamer)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x9cf9348;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckNativeStreamingService*>(),
                        {"DestroyStreamer", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Streaming::LckNativeStreamingService.StartStreamer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, int32_t, int32_t)>(&::Liv::Lck::Streaming::LckNativeStreamingService::StartStreamer)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x9cf93c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckNativeStreamingService*>(),
                        {"StartStreamer", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Streaming::LckNativeStreamingService.StopStreamer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::Liv::Lck::Streaming::LckNativeStreamingService::StopStreamer)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x9cf945c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckNativeStreamingService*>(),
                        {"StopStreamer", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Streaming::LckNativeStreamingService.SetStreamerLogLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, uint32_t)>(&::Liv::Lck::Streaming::LckNativeStreamingService::SetStreamerLogLevel)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x9cf94d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckNativeStreamingService*>(),
                        {"SetStreamerLogLevel", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Streaming::LckNativeStreamingService.GetStreamerCallbackFunction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::Liv::Lck::Streaming::LckNativeStreamingService::GetStreamerCallbackFunction)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x9cf955c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckNativeStreamingService*>(),
                        {"GetStreamerCallbackFunction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Streaming::LckNativeStreamingService.SetPacketInterleaverEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::Liv::Lck::Streaming::LckNativeStreamingService::SetPacketInterleaverEnabled)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x9cf95c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckNativeStreamingService*>(),
                        {"SetPacketInterleaverEnabled", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Streaming::LckNativeStreamingService.CreateNativeStreamer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Liv::Lck::Streaming::LckNativeStreamingService::*)()>(&::Liv::Lck::Streaming::LckNativeStreamingService::CreateNativeStreamer)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x9cf9644;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckNativeStreamingService*>(),
                        {"CreateNativeStreamer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Streaming::LckNativeStreamingService.DestroyNativeStreamer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Streaming::LckNativeStreamingService::*)()>(&::Liv::Lck::Streaming::LckNativeStreamingService::DestroyNativeStreamer)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9cf96a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckNativeStreamingService*>(),
                        {"DestroyNativeStreamer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Streaming::LckNativeStreamingService.HasNativeStreamer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Liv::Lck::Streaming::LckNativeStreamingService::*)()>(&::Liv::Lck::Streaming::LckNativeStreamingService::HasNativeStreamer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9cf9680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckNativeStreamingService*>(),
                        {"HasNativeStreamer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Streaming::LckNativeStreamingService.StartNativeStreamer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Liv::Lck::Streaming::LckNativeStreamingService::*)(int32_t, int32_t)>(&::Liv::Lck::Streaming::LckNativeStreamingService::StartNativeStreamer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9cf96c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckNativeStreamingService*>(),
                        {"StartNativeStreamer", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Streaming::LckNativeStreamingService.StopNativeStreamer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Liv::Lck::Streaming::LckNativeStreamingService::*)()>(&::Liv::Lck::Streaming::LckNativeStreamingService::StopNativeStreamer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9cf96c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckNativeStreamingService*>(),
                        {"StopNativeStreamer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Streaming::LckNativeStreamingService.SetNativeStreamerLogLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Streaming::LckNativeStreamingService::*)(::Liv::NGFX::LogLevel)>(&::Liv::Lck::Streaming::LckNativeStreamingService::SetNativeStreamerLogLevel)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9cf96e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckNativeStreamingService*>(),
                        {"SetNativeStreamerLogLevel", {}, {::i2c::type_of<::Liv::NGFX::LogLevel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Streaming::LckNativeStreamingService.GetStreamPacketCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::Encoding::LckEncodedPacketCallback (::Liv::Lck::Streaming::LckNativeStreamingService::*)()>(&::Liv::Lck::Streaming::LckNativeStreamingService::GetStreamPacketCallback)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9cf96f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckNativeStreamingService*>(),
                        {"GetStreamPacketCallback", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Streaming::LckNativeStreamingService.UpdateNativeStreamerLogLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Streaming::LckNativeStreamingService::*)()>(&::Liv::Lck::Streaming::LckNativeStreamingService::UpdateNativeStreamerLogLevel)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9cf9690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckNativeStreamingService*>(),
                        {"UpdateNativeStreamerLogLevel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Streaming::LckNativeStreamingService._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Streaming::LckNativeStreamingService::*)()>(&::Liv::Lck::Streaming::LckNativeStreamingService::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9cf9730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckNativeStreamingService*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::IntPtr& Liv::Lck::Streaming::LckNativeStreamingService::__cordl_internal_get__streamerContext()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____streamerContext;
}
constexpr ::System::IntPtr const& Liv::Lck::Streaming::LckNativeStreamingService::__cordl_internal_get__streamerContext() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____streamerContext;
}
constexpr void Liv::Lck::Streaming::LckNativeStreamingService::__cordl_internal_set__streamerContext(::System::IntPtr  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____streamerContext = value;
}
constexpr ::Liv::NGFX::LogLevel& Liv::Lck::Streaming::LckNativeStreamingService::__cordl_internal_get__logLevel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____logLevel;
}
constexpr ::Liv::NGFX::LogLevel const& Liv::Lck::Streaming::LckNativeStreamingService::__cordl_internal_get__logLevel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____logLevel;
}
constexpr void Liv::Lck::Streaming::LckNativeStreamingService::__cordl_internal_set__logLevel(::Liv::NGFX::LogLevel  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____logLevel = value;
}
inline ::System::IntPtr Liv::Lck::Streaming::LckNativeStreamingService::CreateStreamer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckNativeStreamingService*>(),
                        {"CreateStreamer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline void Liv::Lck::Streaming::LckNativeStreamingService::DestroyStreamer(::System::IntPtr  streamerContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckNativeStreamingService*>(),
                        {"DestroyStreamer", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, streamerContext);
}
inline bool Liv::Lck::Streaming::LckNativeStreamingService::StartStreamer(::System::IntPtr  streamerContext, int32_t  width, int32_t  height)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckNativeStreamingService*>(),
                        {"StartStreamer", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, streamerContext, width, height);
}
inline void Liv::Lck::Streaming::LckNativeStreamingService::StopStreamer(::System::IntPtr  streamerContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckNativeStreamingService*>(),
                        {"StopStreamer", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, streamerContext);
}
inline void Liv::Lck::Streaming::LckNativeStreamingService::SetStreamerLogLevel(::System::IntPtr  streamerContext, uint32_t  level)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckNativeStreamingService*>(),
                        {"SetStreamerLogLevel", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, streamerContext, level);
}
inline ::System::IntPtr Liv::Lck::Streaming::LckNativeStreamingService::GetStreamerCallbackFunction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckNativeStreamingService*>(),
                        {"GetStreamerCallbackFunction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline void Liv::Lck::Streaming::LckNativeStreamingService::SetPacketInterleaverEnabled(::System::IntPtr  streamerContext, bool  enabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckNativeStreamingService*>(),
                        {"SetPacketInterleaverEnabled", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, streamerContext, enabled);
}
inline bool Liv::Lck::Streaming::LckNativeStreamingService::CreateNativeStreamer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckNativeStreamingService*>(),
                        {"CreateNativeStreamer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Liv::Lck::Streaming::LckNativeStreamingService::DestroyNativeStreamer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckNativeStreamingService*>(),
                        {"DestroyNativeStreamer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Liv::Lck::Streaming::LckNativeStreamingService::HasNativeStreamer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckNativeStreamingService*>(),
                        {"HasNativeStreamer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Liv::Lck::Streaming::LckNativeStreamingService::StartNativeStreamer(int32_t  width, int32_t  height)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckNativeStreamingService*>(),
                        {"StartNativeStreamer", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, width, height);
}
inline bool Liv::Lck::Streaming::LckNativeStreamingService::StopNativeStreamer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckNativeStreamingService*>(),
                        {"StopNativeStreamer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Liv::Lck::Streaming::LckNativeStreamingService::SetNativeStreamerLogLevel(::Liv::NGFX::LogLevel  logLevel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckNativeStreamingService*>(),
                        {"SetNativeStreamerLogLevel", {}, {::i2c::type_of<::Liv::NGFX::LogLevel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, logLevel);
}
inline ::Liv::Lck::Encoding::LckEncodedPacketCallback Liv::Lck::Streaming::LckNativeStreamingService::GetStreamPacketCallback()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckNativeStreamingService*>(),
                        {"GetStreamPacketCallback", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::Encoding::LckEncodedPacketCallback>(this, ___internal_method);
}
inline void Liv::Lck::Streaming::LckNativeStreamingService::UpdateNativeStreamerLogLevel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckNativeStreamingService*>(),
                        {"UpdateNativeStreamerLogLevel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Liv::Lck::Streaming::LckNativeStreamingService::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Streaming::LckNativeStreamingService*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Liv::Lck::Streaming::LckNativeStreamingService* Liv::Lck::Streaming::LckNativeStreamingService::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::Streaming::LckNativeStreamingService*>());
}
/// @brief Convert operator to "::Liv::Lck::Streaming::ILckNativeStreamingService"
constexpr  Liv::Lck::Streaming::LckNativeStreamingService::operator ::Liv::Lck::Streaming::ILckNativeStreamingService*() noexcept {
return static_cast<::Liv::Lck::Streaming::ILckNativeStreamingService*>(static_cast<void*>(this));
}
/// @brief Convert to "::Liv::Lck::Streaming::ILckNativeStreamingService"
constexpr ::Liv::Lck::Streaming::ILckNativeStreamingService* Liv::Lck::Streaming::LckNativeStreamingService::i___Liv__Lck__Streaming__ILckNativeStreamingService() noexcept {
return static_cast<::Liv::Lck::Streaming::ILckNativeStreamingService*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Liv::Lck::Streaming::LckNativeStreamingService::LckNativeStreamingService()   {
}
