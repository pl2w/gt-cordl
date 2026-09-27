#pragma once
// IWYU pragma private; include "DigitalOpus/MB/Core/MB2_Log.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB2_Log_def.hpp"
#include "DigitalOpus/MB/Core/zzzz__MB2_LogLevel_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB2_Log.Log
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::DigitalOpus::MB::Core::MB2_LogLevel, ::StringW, ::DigitalOpus::MB::Core::MB2_LogLevel)>(&::DigitalOpus::MB::Core::MB2_Log::Log)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x9d7e9f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB2_Log*>(),
                        {"Log", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB2_LogLevel>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_LogLevel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB2_Log.Error
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::ArrayW<::System::Object*>)>(&::DigitalOpus::MB::Core::MB2_Log::Error)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x9d7ec18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB2_Log*>(),
                        {"Error", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB2_Log.Warn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::ArrayW<::System::Object*>)>(&::DigitalOpus::MB::Core::MB2_Log::Warn)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x9d7ecf8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB2_Log*>(),
                        {"Warn", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB2_Log.Info
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::ArrayW<::System::Object*>)>(&::DigitalOpus::MB::Core::MB2_Log::Info)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x9d7edd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB2_Log*>(),
                        {"Info", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB2_Log.LogDebug
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::ArrayW<::System::Object*>)>(&::DigitalOpus::MB::Core::MB2_Log::LogDebug)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x9d7eeb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB2_Log*>(),
                        {"LogDebug", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB2_Log.Trace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::StringW, ::ArrayW<::System::Object*>)>(&::DigitalOpus::MB::Core::MB2_Log::Trace)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x9d7ef98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB2_Log*>(),
                        {"Trace", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::DigitalOpus::MB::Core::MB2_Log._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::DigitalOpus::MB::Core::MB2_Log::*)()>(&::DigitalOpus::MB::Core::MB2_Log::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9d7f078;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB2_Log*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void DigitalOpus::MB::Core::MB2_Log::Log(::DigitalOpus::MB::Core::MB2_LogLevel  l, ::StringW  msg, ::DigitalOpus::MB::Core::MB2_LogLevel  currentThreshold)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB2_Log*>(),
                        {"Log", {}, {::i2c::type_of<::DigitalOpus::MB::Core::MB2_LogLevel>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::DigitalOpus::MB::Core::MB2_LogLevel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, l, msg, currentThreshold);
}
inline ::StringW DigitalOpus::MB::Core::MB2_Log::Error(::StringW  msg, /* [ParamArray] */ ::ArrayW<::System::Object*>  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB2_Log*>(),
                        {"Error", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, msg, args);
}
inline ::StringW DigitalOpus::MB::Core::MB2_Log::Warn(::StringW  msg, /* [ParamArray] */ ::ArrayW<::System::Object*>  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB2_Log*>(),
                        {"Warn", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, msg, args);
}
inline ::StringW DigitalOpus::MB::Core::MB2_Log::Info(::StringW  msg, /* [ParamArray] */ ::ArrayW<::System::Object*>  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB2_Log*>(),
                        {"Info", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, msg, args);
}
inline ::StringW DigitalOpus::MB::Core::MB2_Log::LogDebug(::StringW  msg, /* [ParamArray] */ ::ArrayW<::System::Object*>  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB2_Log*>(),
                        {"LogDebug", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, msg, args);
}
inline ::StringW DigitalOpus::MB::Core::MB2_Log::Trace(::StringW  msg, /* [ParamArray] */ ::ArrayW<::System::Object*>  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB2_Log*>(),
                        {"Trace", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, msg, args);
}
inline void DigitalOpus::MB::Core::MB2_Log::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::DigitalOpus::MB::Core::MB2_Log*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::DigitalOpus::MB::Core::MB2_Log* DigitalOpus::MB::Core::MB2_Log::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::DigitalOpus::MB::Core::MB2_Log*>());
}
// Ctor Parameters []
constexpr ::DigitalOpus::MB::Core::MB2_Log::MB2_Log()   {
}
