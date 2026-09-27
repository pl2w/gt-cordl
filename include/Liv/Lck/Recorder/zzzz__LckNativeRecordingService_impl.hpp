#pragma once
// IWYU pragma private; include "Liv/Lck/Recorder/LckNativeRecordingService.hpp"
#include "Liv/NGFX/zzzz__LogLevel_impl.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Liv/Lck/Recorder/zzzz__LckNativeRecordingService_def.hpp"
#include "Liv/Lck/Encoding/zzzz__LckEncodedPacketCallback_def.hpp"
#include "Liv/Lck/Recorder/zzzz__ILckNativeRecordingService_def.hpp"
#include "Liv/Lck/Recorder/zzzz__MuxerConfig_def.hpp"
#include "Liv/NGFX/zzzz__LogLevel_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Liv::Lck::Recorder::LckNativeRecordingService.GetMuxerCallbackFunction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::Liv::Lck::Recorder::LckNativeRecordingService::GetMuxerCallbackFunction)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x9d64aec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckNativeRecordingService*>(),
                        {"GetMuxerCallbackFunction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Recorder::LckNativeRecordingService.CreateMuxer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)()>(&::Liv::Lck::Recorder::LckNativeRecordingService::CreateMuxer)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x9d64b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckNativeRecordingService*>(),
                        {"CreateMuxer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Recorder::LckNativeRecordingService.DestroyMuxer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::Liv::Lck::Recorder::LckNativeRecordingService::DestroyMuxer)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x9d64bb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckNativeRecordingService*>(),
                        {"DestroyMuxer", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Recorder::LckNativeRecordingService.StartMuxer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, ::by_ref<::Liv::Lck::Recorder::MuxerConfig>)>(&::Liv::Lck::Recorder::LckNativeRecordingService::StartMuxer)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x9d64c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckNativeRecordingService*>(),
                        {"StartMuxer", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Liv::Lck::Recorder::MuxerConfig>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Recorder::LckNativeRecordingService.StopMuxer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::Liv::Lck::Recorder::LckNativeRecordingService::StopMuxer)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x9d64d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckNativeRecordingService*>(),
                        {"StopMuxer", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Recorder::LckNativeRecordingService.SetMuxerLogLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, uint32_t)>(&::Liv::Lck::Recorder::LckNativeRecordingService::SetMuxerLogLevel)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x9d64dac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckNativeRecordingService*>(),
                        {"SetMuxerLogLevel", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Recorder::LckNativeRecordingService._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Recorder::LckNativeRecordingService::*)()>(&::Liv::Lck::Recorder::LckNativeRecordingService::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x9d64e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckNativeRecordingService*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Recorder::LckNativeRecordingService.CreateNativeMuxer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Liv::Lck::Recorder::LckNativeRecordingService::*)()>(&::Liv::Lck::Recorder::LckNativeRecordingService::CreateNativeMuxer)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x9d64e44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckNativeRecordingService*>(),
                        {"CreateNativeMuxer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Recorder::LckNativeRecordingService.DestroyNativeMuxer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Recorder::LckNativeRecordingService::*)()>(&::Liv::Lck::Recorder::LckNativeRecordingService::DestroyNativeMuxer)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x9d64ea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckNativeRecordingService*>(),
                        {"DestroyNativeMuxer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Recorder::LckNativeRecordingService.HasNativeMuxer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Liv::Lck::Recorder::LckNativeRecordingService::*)()>(&::Liv::Lck::Recorder::LckNativeRecordingService::HasNativeMuxer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9d64e80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckNativeRecordingService*>(),
                        {"HasNativeMuxer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Recorder::LckNativeRecordingService.StartNativeMuxer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Liv::Lck::Recorder::LckNativeRecordingService::*)(::by_ref<::Liv::Lck::Recorder::MuxerConfig>)>(&::Liv::Lck::Recorder::LckNativeRecordingService::StartNativeMuxer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d64ec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckNativeRecordingService*>(),
                        {"StartNativeMuxer", {}, {::i2c::type_of<::by_ref<::Liv::Lck::Recorder::MuxerConfig>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Recorder::LckNativeRecordingService.StopNativeMuxer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Liv::Lck::Recorder::LckNativeRecordingService::*)()>(&::Liv::Lck::Recorder::LckNativeRecordingService::StopNativeMuxer)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9d64ec8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckNativeRecordingService*>(),
                        {"StopNativeMuxer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Recorder::LckNativeRecordingService.SetNativeMuxerLogLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Recorder::LckNativeRecordingService::*)(::Liv::NGFX::LogLevel)>(&::Liv::Lck::Recorder::LckNativeRecordingService::SetNativeMuxerLogLevel)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x9d64ee0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckNativeRecordingService*>(),
                        {"SetNativeMuxerLogLevel", {}, {::i2c::type_of<::Liv::NGFX::LogLevel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Recorder::LckNativeRecordingService.GetMuxPacketCallback
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Liv::Lck::Encoding::LckEncodedPacketCallback (::Liv::Lck::Recorder::LckNativeRecordingService::*)()>(&::Liv::Lck::Recorder::LckNativeRecordingService::GetMuxPacketCallback)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9d64ef8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckNativeRecordingService*>(),
                        {"GetMuxPacketCallback", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Liv::Lck::Recorder::LckNativeRecordingService.UpdateNativeMuxerLogLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Liv::Lck::Recorder::LckNativeRecordingService::*)()>(&::Liv::Lck::Recorder::LckNativeRecordingService::UpdateNativeMuxerLogLevel)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x9d64e90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckNativeRecordingService*>(),
                        {"UpdateNativeMuxerLogLevel", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::IntPtr& Liv::Lck::Recorder::LckNativeRecordingService::__cordl_internal_get__nativeMuxerContext()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nativeMuxerContext;
}
constexpr ::System::IntPtr const& Liv::Lck::Recorder::LckNativeRecordingService::__cordl_internal_get__nativeMuxerContext() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nativeMuxerContext;
}
constexpr void Liv::Lck::Recorder::LckNativeRecordingService::__cordl_internal_set__nativeMuxerContext(::System::IntPtr  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____nativeMuxerContext = value;
}
constexpr ::Liv::NGFX::LogLevel& Liv::Lck::Recorder::LckNativeRecordingService::__cordl_internal_get__logLevel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____logLevel;
}
constexpr ::Liv::NGFX::LogLevel const& Liv::Lck::Recorder::LckNativeRecordingService::__cordl_internal_get__logLevel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____logLevel;
}
constexpr void Liv::Lck::Recorder::LckNativeRecordingService::__cordl_internal_set__logLevel(::Liv::NGFX::LogLevel  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____logLevel = value;
}
inline ::System::IntPtr Liv::Lck::Recorder::LckNativeRecordingService::GetMuxerCallbackFunction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckNativeRecordingService*>(),
                        {"GetMuxerCallbackFunction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline ::System::IntPtr Liv::Lck::Recorder::LckNativeRecordingService::CreateMuxer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckNativeRecordingService*>(),
                        {"CreateMuxer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method);
}
inline void Liv::Lck::Recorder::LckNativeRecordingService::DestroyMuxer(::System::IntPtr  muxerContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckNativeRecordingService*>(),
                        {"DestroyMuxer", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, muxerContext);
}
inline bool Liv::Lck::Recorder::LckNativeRecordingService::StartMuxer(::System::IntPtr  muxerContext, ::by_ref<::Liv::Lck::Recorder::MuxerConfig>  config)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckNativeRecordingService*>(),
                        {"StartMuxer", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::Liv::Lck::Recorder::MuxerConfig>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, muxerContext, config);
}
inline void Liv::Lck::Recorder::LckNativeRecordingService::StopMuxer(::System::IntPtr  muxerContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckNativeRecordingService*>(),
                        {"StopMuxer", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, muxerContext);
}
inline void Liv::Lck::Recorder::LckNativeRecordingService::SetMuxerLogLevel(::System::IntPtr  muxerContext, uint32_t  level)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckNativeRecordingService*>(),
                        {"SetMuxerLogLevel", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, muxerContext, level);
}
inline void Liv::Lck::Recorder::LckNativeRecordingService::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckNativeRecordingService*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Liv::Lck::Recorder::LckNativeRecordingService::CreateNativeMuxer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckNativeRecordingService*>(),
                        {"CreateNativeMuxer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Liv::Lck::Recorder::LckNativeRecordingService::DestroyNativeMuxer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckNativeRecordingService*>(),
                        {"DestroyNativeMuxer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Liv::Lck::Recorder::LckNativeRecordingService::HasNativeMuxer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckNativeRecordingService*>(),
                        {"HasNativeMuxer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool Liv::Lck::Recorder::LckNativeRecordingService::StartNativeMuxer(::by_ref<::Liv::Lck::Recorder::MuxerConfig>  config)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckNativeRecordingService*>(),
                        {"StartNativeMuxer", {}, {::i2c::type_of<::by_ref<::Liv::Lck::Recorder::MuxerConfig>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, config);
}
inline bool Liv::Lck::Recorder::LckNativeRecordingService::StopNativeMuxer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckNativeRecordingService*>(),
                        {"StopNativeMuxer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Liv::Lck::Recorder::LckNativeRecordingService::SetNativeMuxerLogLevel(::Liv::NGFX::LogLevel  logLevel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckNativeRecordingService*>(),
                        {"SetNativeMuxerLogLevel", {}, {::i2c::type_of<::Liv::NGFX::LogLevel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, logLevel);
}
inline ::Liv::Lck::Encoding::LckEncodedPacketCallback Liv::Lck::Recorder::LckNativeRecordingService::GetMuxPacketCallback()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckNativeRecordingService*>(),
                        {"GetMuxPacketCallback", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Liv::Lck::Encoding::LckEncodedPacketCallback>(this, ___internal_method);
}
inline void Liv::Lck::Recorder::LckNativeRecordingService::UpdateNativeMuxerLogLevel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Liv::Lck::Recorder::LckNativeRecordingService*>(),
                        {"UpdateNativeMuxerLogLevel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
/// @brief [Preserve]
inline ::Liv::Lck::Recorder::LckNativeRecordingService* Liv::Lck::Recorder::LckNativeRecordingService::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Liv::Lck::Recorder::LckNativeRecordingService*>());
}
/// @brief Convert operator to "::Liv::Lck::Recorder::ILckNativeRecordingService"
constexpr  Liv::Lck::Recorder::LckNativeRecordingService::operator ::Liv::Lck::Recorder::ILckNativeRecordingService*() noexcept {
return static_cast<::Liv::Lck::Recorder::ILckNativeRecordingService*>(static_cast<void*>(this));
}
/// @brief Convert to "::Liv::Lck::Recorder::ILckNativeRecordingService"
constexpr ::Liv::Lck::Recorder::ILckNativeRecordingService* Liv::Lck::Recorder::LckNativeRecordingService::i___Liv__Lck__Recorder__ILckNativeRecordingService() noexcept {
return static_cast<::Liv::Lck::Recorder::ILckNativeRecordingService*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Liv::Lck::Recorder::LckNativeRecordingService::LckNativeRecordingService()   {
}
