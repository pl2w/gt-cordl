#pragma once
// IWYU pragma private; include "Fusion/TraceLogStream.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__TraceLogStream_def.hpp"
#include "Fusion/zzzz__ILogSource_def.hpp"
#include "Fusion/zzzz__LogStream_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Fusion::TraceLogStream._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::TraceLogStream::*)(::Fusion::LogStream*, ::Fusion::LogStream*, ::Fusion::LogStream*)>(&::Fusion::TraceLogStream::_ctor)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5f4513c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TraceLogStream*>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::LogStream*>(), ::i2c::type_of<::Fusion::LogStream*>(), ::i2c::type_of<::Fusion::LogStream*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::TraceLogStream.Log
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::TraceLogStream::*)(::Fusion::ILogSource*, ::StringW)>(&::Fusion::TraceLogStream::Log)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5f462d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TraceLogStream*>(),
                        {"Log", {}, {::i2c::type_of<::Fusion::ILogSource*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::TraceLogStream.Log
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::TraceLogStream::*)(::StringW)>(&::Fusion::TraceLogStream::Log)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5f462ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TraceLogStream*>(),
                        {"Log", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::TraceLogStream.Info
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::TraceLogStream::*)(::StringW)>(&::Fusion::TraceLogStream::Info)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5f46308;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TraceLogStream*>(),
                        {"Info", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::TraceLogStream.Error
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::TraceLogStream::*)(::StringW)>(&::Fusion::TraceLogStream::Error)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5f46324;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TraceLogStream*>(),
                        {"Error", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::TraceLogStream.Error
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::TraceLogStream::*)(::System::Exception*)>(&::Fusion::TraceLogStream::Error)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5f46340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TraceLogStream*>(),
                        {"Error", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::TraceLogStream.Warn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::TraceLogStream::*)(::Fusion::ILogSource*, ::StringW)>(&::Fusion::TraceLogStream::Warn)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5f4635c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TraceLogStream*>(),
                        {"Warn", {}, {::i2c::type_of<::Fusion::ILogSource*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::TraceLogStream.Warn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::TraceLogStream::*)(::StringW)>(&::Fusion::TraceLogStream::Warn)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5f46378;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TraceLogStream*>(),
                        {"Warn", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::TraceLogStream.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::TraceLogStream::*)()>(&::Fusion::TraceLogStream::Dispose)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5f46394;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TraceLogStream*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Fusion::LogStream*& Fusion::TraceLogStream::__cordl_internal_get_InfoStream()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InfoStream;
}
constexpr ::Fusion::LogStream* const& Fusion::TraceLogStream::__cordl_internal_get_InfoStream() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InfoStream;
}
constexpr void Fusion::TraceLogStream::__cordl_internal_set_InfoStream(::Fusion::LogStream*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___InfoStream = value;
}
constexpr ::Fusion::LogStream*& Fusion::TraceLogStream::__cordl_internal_get_WarnStream()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WarnStream;
}
constexpr ::Fusion::LogStream* const& Fusion::TraceLogStream::__cordl_internal_get_WarnStream() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WarnStream;
}
constexpr void Fusion::TraceLogStream::__cordl_internal_set_WarnStream(::Fusion::LogStream*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WarnStream = value;
}
constexpr ::Fusion::LogStream*& Fusion::TraceLogStream::__cordl_internal_get_ErrorStream()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ErrorStream;
}
constexpr ::Fusion::LogStream* const& Fusion::TraceLogStream::__cordl_internal_get_ErrorStream() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ErrorStream;
}
constexpr void Fusion::TraceLogStream::__cordl_internal_set_ErrorStream(::Fusion::LogStream*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ErrorStream = value;
}
inline void Fusion::TraceLogStream::_ctor(::Fusion::LogStream*  innerStream, ::Fusion::LogStream*  warnStream, ::Fusion::LogStream*  errorStream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TraceLogStream*>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::LogStream*>(), ::i2c::type_of<::Fusion::LogStream*>(), ::i2c::type_of<::Fusion::LogStream*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, innerStream, warnStream, errorStream);
}
inline void Fusion::TraceLogStream::Log(::Fusion::ILogSource*  source, ::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TraceLogStream*>(),
                        {"Log", {}, {::i2c::type_of<::Fusion::ILogSource*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source, message);
}
inline void Fusion::TraceLogStream::Log(::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TraceLogStream*>(),
                        {"Log", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void Fusion::TraceLogStream::Info(::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TraceLogStream*>(),
                        {"Info", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void Fusion::TraceLogStream::Error(::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TraceLogStream*>(),
                        {"Error", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void Fusion::TraceLogStream::Error(::System::Exception*  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TraceLogStream*>(),
                        {"Error", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void Fusion::TraceLogStream::Warn(::Fusion::ILogSource*  source, ::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TraceLogStream*>(),
                        {"Warn", {}, {::i2c::type_of<::Fusion::ILogSource*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source, message);
}
inline void Fusion::TraceLogStream::Warn(::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TraceLogStream*>(),
                        {"Warn", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void Fusion::TraceLogStream::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::TraceLogStream*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::TraceLogStream* Fusion::TraceLogStream::New_ctor(::Fusion::LogStream*  innerStream, ::Fusion::LogStream*  warnStream, ::Fusion::LogStream*  errorStream)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::TraceLogStream*>(innerStream, warnStream, errorStream));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Fusion::TraceLogStream::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Fusion::TraceLogStream::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::TraceLogStream::TraceLogStream()   {
}
