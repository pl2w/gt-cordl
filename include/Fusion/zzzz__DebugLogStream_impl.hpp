#pragma once
// IWYU pragma private; include "Fusion/DebugLogStream.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Fusion/zzzz__DebugLogStream_def.hpp"
#include "Fusion/zzzz__ILogSource_def.hpp"
#include "Fusion/zzzz__LogStream_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Fusion::DebugLogStream._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::DebugLogStream::*)(::Fusion::LogStream*, ::Fusion::LogStream*, ::Fusion::LogStream*)>(&::Fusion::DebugLogStream::_ctor)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5f44504;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DebugLogStream*>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::LogStream*>(), ::i2c::type_of<::Fusion::LogStream*>(), ::i2c::type_of<::Fusion::LogStream*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::DebugLogStream.Log
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::DebugLogStream::*)(::Fusion::ILogSource*, ::StringW)>(&::Fusion::DebugLogStream::Log)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5f44600;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DebugLogStream*>(),
                        {"Log", {}, {::i2c::type_of<::Fusion::ILogSource*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::DebugLogStream.Log
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::DebugLogStream::*)(::StringW)>(&::Fusion::DebugLogStream::Log)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5f4461c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DebugLogStream*>(),
                        {"Log", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::DebugLogStream.Error
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::DebugLogStream::*)(::Fusion::ILogSource*, ::StringW)>(&::Fusion::DebugLogStream::Error)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5f44638;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DebugLogStream*>(),
                        {"Error", {}, {::i2c::type_of<::Fusion::ILogSource*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::DebugLogStream.Error
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::DebugLogStream::*)(::StringW)>(&::Fusion::DebugLogStream::Error)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5f44654;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DebugLogStream*>(),
                        {"Error", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::DebugLogStream.Error
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::DebugLogStream::*)(::System::Exception*)>(&::Fusion::DebugLogStream::Error)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5f44670;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DebugLogStream*>(),
                        {"Error", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::DebugLogStream.Warn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::DebugLogStream::*)(::Fusion::ILogSource*, ::StringW)>(&::Fusion::DebugLogStream::Warn)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5f4468c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DebugLogStream*>(),
                        {"Warn", {}, {::i2c::type_of<::Fusion::ILogSource*>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::DebugLogStream.Warn
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::DebugLogStream::*)(::StringW)>(&::Fusion::DebugLogStream::Warn)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5f446a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DebugLogStream*>(),
                        {"Warn", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::DebugLogStream.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::DebugLogStream::*)()>(&::Fusion::DebugLogStream::Dispose)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5f446c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DebugLogStream*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Fusion::LogStream*& Fusion::DebugLogStream::__cordl_internal_get_InfoStream()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InfoStream;
}
constexpr ::Fusion::LogStream* const& Fusion::DebugLogStream::__cordl_internal_get_InfoStream() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___InfoStream;
}
constexpr void Fusion::DebugLogStream::__cordl_internal_set_InfoStream(::Fusion::LogStream*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___InfoStream = value;
}
constexpr ::Fusion::LogStream*& Fusion::DebugLogStream::__cordl_internal_get_WarnStream()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WarnStream;
}
constexpr ::Fusion::LogStream* const& Fusion::DebugLogStream::__cordl_internal_get_WarnStream() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WarnStream;
}
constexpr void Fusion::DebugLogStream::__cordl_internal_set_WarnStream(::Fusion::LogStream*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WarnStream = value;
}
constexpr ::Fusion::LogStream*& Fusion::DebugLogStream::__cordl_internal_get_ErrorStream()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ErrorStream;
}
constexpr ::Fusion::LogStream* const& Fusion::DebugLogStream::__cordl_internal_get_ErrorStream() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ErrorStream;
}
constexpr void Fusion::DebugLogStream::__cordl_internal_set_ErrorStream(::Fusion::LogStream*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ErrorStream = value;
}
inline void Fusion::DebugLogStream::_ctor(::Fusion::LogStream*  innerStream, ::Fusion::LogStream*  warnStream, ::Fusion::LogStream*  errorStream)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DebugLogStream*>(),
                        {".ctor", {}, {::i2c::type_of<::Fusion::LogStream*>(), ::i2c::type_of<::Fusion::LogStream*>(), ::i2c::type_of<::Fusion::LogStream*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, innerStream, warnStream, errorStream);
}
inline void Fusion::DebugLogStream::Log(::Fusion::ILogSource*  source, ::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DebugLogStream*>(),
                        {"Log", {}, {::i2c::type_of<::Fusion::ILogSource*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source, message);
}
inline void Fusion::DebugLogStream::Log(::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DebugLogStream*>(),
                        {"Log", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void Fusion::DebugLogStream::Error(::Fusion::ILogSource*  source, ::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DebugLogStream*>(),
                        {"Error", {}, {::i2c::type_of<::Fusion::ILogSource*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source, message);
}
inline void Fusion::DebugLogStream::Error(::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DebugLogStream*>(),
                        {"Error", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void Fusion::DebugLogStream::Error(::System::Exception*  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DebugLogStream*>(),
                        {"Error", {}, {::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void Fusion::DebugLogStream::Warn(::Fusion::ILogSource*  source, ::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DebugLogStream*>(),
                        {"Warn", {}, {::i2c::type_of<::Fusion::ILogSource*>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, source, message);
}
inline void Fusion::DebugLogStream::Warn(::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DebugLogStream*>(),
                        {"Warn", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void Fusion::DebugLogStream::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::DebugLogStream*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Fusion::DebugLogStream* Fusion::DebugLogStream::New_ctor(::Fusion::LogStream*  innerStream, ::Fusion::LogStream*  warnStream, ::Fusion::LogStream*  errorStream)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::DebugLogStream*>(innerStream, warnStream, errorStream));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Fusion::DebugLogStream::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Fusion::DebugLogStream::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::DebugLogStream::DebugLogStream()   {
}
