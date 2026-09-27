#pragma once
// IWYU pragma private; include "Fusion/Log_Factory.hpp"
#include "Fusion/zzzz__LogSettings_impl.hpp"
#include "Fusion/zzzz__Log_Factory_def.hpp"
#include "Fusion/zzzz__DebugLogStream_def.hpp"
#include "Fusion/zzzz__LogLevel_def.hpp"
#include "Fusion/zzzz__LogSettings_def.hpp"
#include "Fusion/zzzz__LogStream_def.hpp"
#include "Fusion/zzzz__Log_def.hpp"
#include "Fusion/zzzz__TraceChannels_def.hpp"
#include "Fusion/zzzz__TraceLogStream_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::Log_Factory._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Log_Factory::*)(::Fusion::LogSettings, ::Fusion::Log_CreateLogStreamDelegate*)>(&::GlobalNamespace::Log_Factory::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5f448e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Log_Factory>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::LogSettings>(), ::i2c::type_of<::Fusion::Log_CreateLogStreamDelegate*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Log_Factory.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Log_Factory::*)(::by_ref<::Fusion::DebugLogStream*>, ::Fusion::TraceChannels)>(&::GlobalNamespace::Log_Factory::Init)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x5f44cec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Log_Factory>(),
                        {"Init", {}, {::i2c::type_of<::by_ref<::Fusion::DebugLogStream*>>(), ::i2c::type_of<::Fusion::TraceChannels>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Log_Factory.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Log_Factory::*)(::by_ref<::Fusion::TraceLogStream*>, ::Fusion::TraceChannels)>(&::GlobalNamespace::Log_Factory::Init)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x5f44bb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Log_Factory>(),
                        {"Init", {}, {::i2c::type_of<::by_ref<::Fusion::TraceLogStream*>>(), ::i2c::type_of<::Fusion::TraceChannels>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Log_Factory.Init
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Log_Factory::*)(::by_ref<::Fusion::LogStream*>, ::Fusion::LogLevel)>(&::GlobalNamespace::Log_Factory::Init)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5f44e20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Log_Factory>(),
                        {"Init", {}, {::i2c::type_of<::by_ref<::Fusion::LogStream*>>(), ::i2c::type_of<::Fusion::LogLevel>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::Log_Factory::_ctor(::Fusion::LogSettings  settings, ::Fusion::Log_CreateLogStreamDelegate*  streamFactory)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Log_Factory>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::LogSettings>(), ::i2c::type_of<::Fusion::Log_CreateLogStreamDelegate*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, settings, streamFactory);
}
inline void GlobalNamespace::Log_Factory::Init(::by_ref<::Fusion::DebugLogStream*>  stream, ::Fusion::TraceChannels  channel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Log_Factory>(),
                        {"Init", {}, {::i2c::type_of<::by_ref<::Fusion::DebugLogStream*>>(), ::i2c::type_of<::Fusion::TraceChannels>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stream, channel);
}
inline void GlobalNamespace::Log_Factory::Init(::by_ref<::Fusion::TraceLogStream*>  stream, ::Fusion::TraceChannels  channel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Log_Factory>(),
                        {"Init", {}, {::i2c::type_of<::by_ref<::Fusion::TraceLogStream*>>(), ::i2c::type_of<::Fusion::TraceChannels>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stream, channel);
}
inline void GlobalNamespace::Log_Factory::Init(::by_ref<::Fusion::LogStream*>  stream, ::Fusion::LogLevel  logLevel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::Log_Factory>(),
                        {"Init", {}, {::i2c::type_of<::by_ref<::Fusion::LogStream*>>(), ::i2c::type_of<::Fusion::LogLevel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stream, logLevel);
}
// Ctor Parameters [CppParam { name: "StreamFactory", ty: "::Fusion::Log_CreateLogStreamDelegate*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Settings", ty: "::Fusion::LogSettings", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::Log_Factory::Log_Factory(::Fusion::Log_CreateLogStreamDelegate*  StreamFactory, ::Fusion::LogSettings  Settings) noexcept  {
this->StreamFactory = StreamFactory;
this->Settings = Settings;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Log_Factory::Log_Factory()   {
}
