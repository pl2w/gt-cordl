#pragma once
// IWYU pragma private; include "WebSocketSharp/Logger.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "WebSocketSharp/zzzz__LogLevel_impl.hpp"
#include "WebSocketSharp/zzzz__Logger_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "WebSocketSharp/zzzz__LogData_def.hpp"
#include "WebSocketSharp/zzzz__LogLevel_def.hpp"
//  Writing Method size for method: ::WebSocketSharp::Logger._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::Logger::*)()>(&::WebSocketSharp::Logger::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb978484;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Logger*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Logger._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::Logger::*)(::WebSocketSharp::LogLevel, ::StringW, ::System::Action_2<::WebSocketSharp::LogData*,::StringW>*)>(&::WebSocketSharp::Logger::_ctor)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xb9800a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Logger*>(),
                        {".ctor", {}, {::i2c::type_of<::WebSocketSharp::LogLevel>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action_2<::WebSocketSharp::LogData*,::StringW>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Logger.defaultOutput
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::WebSocketSharp::LogData*, ::StringW)>(&::WebSocketSharp::Logger::defaultOutput)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xb980198;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Logger*>(),
                        {"defaultOutput", {}, {::i2c::type_of<::WebSocketSharp::LogData*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Logger.output
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::Logger::*)(::StringW, ::WebSocketSharp::LogLevel)>(&::WebSocketSharp::Logger::output)> {
  constexpr static std::size_t size = 0x2b8;
  constexpr static std::size_t addrs = 0xb980494;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Logger*>(),
                        {"output", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::WebSocketSharp::LogLevel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Logger.writeToFile
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::StringW)>(&::WebSocketSharp::Logger::writeToFile)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0xb98023c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Logger*>(),
                        {"writeToFile", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Logger.Debug
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::Logger::*)(::StringW)>(&::WebSocketSharp::Logger::Debug)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb97a240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Logger*>(),
                        {"Debug", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Logger.Error
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::Logger::*)(::StringW)>(&::WebSocketSharp::Logger::Error)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb97a1fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Logger*>(),
                        {"Error", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Logger.Fatal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::Logger::*)(::StringW)>(&::WebSocketSharp::Logger::Fatal)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb97aea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Logger*>(),
                        {"Fatal", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Logger.Info
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::Logger::*)(::StringW)>(&::WebSocketSharp::Logger::Info)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb979bac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Logger*>(),
                        {"Info", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Logger.Trace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::Logger::*)(::StringW)>(&::WebSocketSharp::Logger::Trace)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb97a020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Logger*>(),
                        {"Trace", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WebSocketSharp::Logger.Warn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WebSocketSharp::Logger::*)(::StringW)>(&::WebSocketSharp::Logger::Warn)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb97ab8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Logger*>(),
                        {"Warn", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& WebSocketSharp::Logger::__cordl_internal_get__file()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____file;
}
constexpr ::StringW const& WebSocketSharp::Logger::__cordl_internal_get__file() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____file;
}
constexpr void WebSocketSharp::Logger::__cordl_internal_set__file(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____file = value;
}
constexpr ::WebSocketSharp::LogLevel& WebSocketSharp::Logger::__cordl_internal_get__level()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____level;
}
constexpr ::WebSocketSharp::LogLevel const& WebSocketSharp::Logger::__cordl_internal_get__level() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____level;
}
constexpr void WebSocketSharp::Logger::__cordl_internal_set__level(::WebSocketSharp::LogLevel  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____level = value;
}
constexpr ::System::Action_2<::WebSocketSharp::LogData*,::StringW>*& WebSocketSharp::Logger::__cordl_internal_get__output()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____output;
}
constexpr ::System::Action_2<::WebSocketSharp::LogData*,::StringW>* const& WebSocketSharp::Logger::__cordl_internal_get__output() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____output;
}
constexpr void WebSocketSharp::Logger::__cordl_internal_set__output(::System::Action_2<::WebSocketSharp::LogData*,::StringW>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____output = value;
}
constexpr ::System::Object*& WebSocketSharp::Logger::__cordl_internal_get__sync()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sync;
}
constexpr ::System::Object* const& WebSocketSharp::Logger::__cordl_internal_get__sync() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____sync;
}
constexpr void WebSocketSharp::Logger::__cordl_internal_set__sync(::System::Object*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____sync = value;
}
inline void WebSocketSharp::Logger::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Logger*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WebSocketSharp::Logger::_ctor(::WebSocketSharp::LogLevel  level, ::StringW  file, ::System::Action_2<::WebSocketSharp::LogData*,::StringW>*  output)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Logger*>(),
                        {".ctor", {}, {::i2c::type_of<::WebSocketSharp::LogLevel>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Action_2<::WebSocketSharp::LogData*,::StringW>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, level, file, output);
}
inline void WebSocketSharp::Logger::defaultOutput(::WebSocketSharp::LogData*  data, ::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Logger*>(),
                        {"defaultOutput", {}, {::i2c::type_of<::WebSocketSharp::LogData*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data, path);
}
inline void WebSocketSharp::Logger::output(::StringW  message, ::WebSocketSharp::LogLevel  level)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Logger*>(),
                        {"output", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::WebSocketSharp::LogLevel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, level);
}
inline void WebSocketSharp::Logger::writeToFile(::StringW  value, ::StringW  path)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Logger*>(),
                        {"writeToFile", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value, path);
}
inline void WebSocketSharp::Logger::Debug(::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Logger*>(),
                        {"Debug", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void WebSocketSharp::Logger::Error(::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Logger*>(),
                        {"Error", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void WebSocketSharp::Logger::Fatal(::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Logger*>(),
                        {"Fatal", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void WebSocketSharp::Logger::Info(::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Logger*>(),
                        {"Info", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void WebSocketSharp::Logger::Trace(::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Logger*>(),
                        {"Trace", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void WebSocketSharp::Logger::Warn(::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WebSocketSharp::Logger*>(),
                        {"Warn", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline ::WebSocketSharp::Logger* WebSocketSharp::Logger::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WebSocketSharp::Logger*>());
}
inline ::WebSocketSharp::Logger* WebSocketSharp::Logger::New_ctor(::WebSocketSharp::LogLevel  level, ::StringW  file, ::System::Action_2<::WebSocketSharp::LogData*,::StringW>*  output)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WebSocketSharp::Logger*>(level, file, output));
}
// Ctor Parameters []
constexpr ::WebSocketSharp::Logger::Logger()   {
}
