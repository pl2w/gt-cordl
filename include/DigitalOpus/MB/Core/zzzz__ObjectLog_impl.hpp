#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/ObjectLog.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "DigitalOpus/MB/Core/zzzz__ObjectLog_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB2_LogLevel_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::DigitalOpus::MB::Core::ObjectLog._CacheLogMessage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::ObjectLog::*)(::StringW)>(&::DigitalOpus::MB::Core::ObjectLog::_CacheLogMessage)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x9d7f080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::ObjectLog*>(),
                        {"_CacheLogMessage", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::ObjectLog._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::ObjectLog::*)(int16_t)>(&::DigitalOpus::MB::Core::ObjectLog::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x9d7f0e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::ObjectLog*>(),
                        {".ctor", {}, {::i2c::type_of<int16_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::ObjectLog.Log
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::ObjectLog::*)(::DigitalOpus::MB::Core::MB2_LogLevel, ::StringW, ::DigitalOpus::MB::Core::MB2_LogLevel)>(&::DigitalOpus::MB::Core::ObjectLog::Log)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x9d7f154;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::ObjectLog*>(),
                        {"Log", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB2_LogLevel>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_LogLevel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::ObjectLog.Error
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::ObjectLog::*)(::StringW, ::ArrayW<::System::Object*>)>(&::DigitalOpus::MB::Core::ObjectLog::Error)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x9d7f188;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::ObjectLog*>(),
                        {"Error", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::ObjectLog.Warn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::ObjectLog::*)(::StringW, ::ArrayW<::System::Object*>)>(&::DigitalOpus::MB::Core::ObjectLog::Warn)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x9d7f1ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::ObjectLog*>(),
                        {"Warn", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::ObjectLog.Info
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::ObjectLog::*)(::StringW, ::ArrayW<::System::Object*>)>(&::DigitalOpus::MB::Core::ObjectLog::Info)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x9d7f1d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::ObjectLog*>(),
                        {"Info", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::ObjectLog.LogDebug
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::ObjectLog::*)(::StringW, ::ArrayW<::System::Object*>)>(&::DigitalOpus::MB::Core::ObjectLog::LogDebug)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x9d7f1f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::ObjectLog*>(),
                        {"LogDebug", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::ObjectLog.Trace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::ObjectLog::*)(::StringW, ::ArrayW<::System::Object*>)>(&::DigitalOpus::MB::Core::ObjectLog::Trace)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x9d7f218;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::ObjectLog*>(),
                        {"Trace", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::ObjectLog.Dump
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::DigitalOpus::MB::Core::ObjectLog::*)()>(&::DigitalOpus::MB::Core::ObjectLog::Dump)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x9d7f23c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::ObjectLog*>(),
                        {"Dump", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr int32_t& DigitalOpus::MB::Core::ObjectLog::__cordl_internal_get_pos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pos;
}
constexpr int32_t const& DigitalOpus::MB::Core::ObjectLog::__cordl_internal_get_pos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pos;
}
constexpr void DigitalOpus::MB::Core::ObjectLog::__cordl_internal_set_pos(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pos = value;
}
constexpr ::ArrayW<::StringW>& DigitalOpus::MB::Core::ObjectLog::__cordl_internal_get_logMessages()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logMessages;
}
constexpr ::ArrayW<::StringW> const& DigitalOpus::MB::Core::ObjectLog::__cordl_internal_get_logMessages() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logMessages;
}
constexpr void DigitalOpus::MB::Core::ObjectLog::__cordl_internal_set_logMessages(::ArrayW<::StringW>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logMessages = value;
}
inline void DigitalOpus::MB::Core::ObjectLog::_CacheLogMessage(::StringW  msg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::ObjectLog*>(),
                        {"_CacheLogMessage", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, msg);
}
inline void DigitalOpus::MB::Core::ObjectLog::_ctor(int16_t  bufferSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::ObjectLog*>(),
                        {".ctor", {}, {::i2c::type_of<int16_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bufferSize);
}
inline void DigitalOpus::MB::Core::ObjectLog::Log(::DigitalOpus::MB::Core::MB2_LogLevel  l, ::StringW  msg, ::DigitalOpus::MB::Core::MB2_LogLevel  currentThreshold)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::ObjectLog*>(),
                        {"Log", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB2_LogLevel>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_LogLevel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, l, msg, currentThreshold);
}
inline void DigitalOpus::MB::Core::ObjectLog::Error(::StringW  msg, /* [ParamArray] */ ::ArrayW<::System::Object*>  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::ObjectLog*>(),
                        {"Error", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, msg, args);
}
inline void DigitalOpus::MB::Core::ObjectLog::Warn(::StringW  msg, /* [ParamArray] */ ::ArrayW<::System::Object*>  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::ObjectLog*>(),
                        {"Warn", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, msg, args);
}
inline void DigitalOpus::MB::Core::ObjectLog::Info(::StringW  msg, /* [ParamArray] */ ::ArrayW<::System::Object*>  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::ObjectLog*>(),
                        {"Info", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, msg, args);
}
inline void DigitalOpus::MB::Core::ObjectLog::LogDebug(::StringW  msg, /* [ParamArray] */ ::ArrayW<::System::Object*>  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::ObjectLog*>(),
                        {"LogDebug", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, msg, args);
}
inline void DigitalOpus::MB::Core::ObjectLog::Trace(::StringW  msg, /* [ParamArray] */ ::ArrayW<::System::Object*>  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::ObjectLog*>(),
                        {"Trace", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, msg, args);
}
inline ::StringW DigitalOpus::MB::Core::ObjectLog::Dump()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::ObjectLog*>(),
                        {"Dump", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::DigitalOpus::MB::Core::ObjectLog* DigitalOpus::MB::Core::ObjectLog::New_ctor(int16_t  bufferSize)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::ObjectLog*>(bufferSize));
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::ObjectLog::ObjectLog()   {
}
