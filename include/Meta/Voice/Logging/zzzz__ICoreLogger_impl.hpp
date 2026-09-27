#pragma once
// IWYU pragma private; include "Meta/Voice/Logging/ICoreLogger.hpp"
#include "Meta/Voice/Logging/zzzz__ICoreLogger_def.hpp"
#include "Meta/Voice/Logging/zzzz__CorrelationID_def.hpp"
#include "Meta/Voice/Logging/zzzz__ErrorCode_def.hpp"
#include "Meta/Voice/Logging/zzzz__VLoggerVerbosity_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Meta::Voice::Logging::ICoreLogger.get_CorrelationID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::Voice::Logging::CorrelationID (::Meta::Voice::Logging::ICoreLogger::*)()>(&::Meta::Voice::Logging::ICoreLogger::get_CorrelationID)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Logging::ICoreLogger*>(),
                    {::i2c::class_of<::Meta::Voice::Logging::ICoreLogger*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::ICoreLogger.set_CorrelationID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Logging::ICoreLogger::*)(::Meta::Voice::Logging::CorrelationID)>(&::Meta::Voice::Logging::ICoreLogger::set_CorrelationID)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Logging::ICoreLogger*>(),
                    {::i2c::class_of<::Meta::Voice::Logging::ICoreLogger*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::ICoreLogger.Verbose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Logging::ICoreLogger::*)(::StringW, ::ArrayW<::System::Object*>)>(&::Meta::Voice::Logging::ICoreLogger::Verbose)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Logging::ICoreLogger*>(),
                    {::i2c::class_of<::Meta::Voice::Logging::ICoreLogger*>(), 2}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::ICoreLogger.Verbose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Logging::ICoreLogger::*)(::Meta::Voice::Logging::CorrelationID, ::StringW, ::ArrayW<::System::Object*>)>(&::Meta::Voice::Logging::ICoreLogger::Verbose)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Logging::ICoreLogger*>(),
                    {::i2c::class_of<::Meta::Voice::Logging::ICoreLogger*>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::ICoreLogger.Verbose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Logging::ICoreLogger::*)(::StringW, ::System::Object*, ::System::Object*, ::System::Object*, ::System::Object*, ::StringW, ::StringW, int32_t)>(&::Meta::Voice::Logging::ICoreLogger::Verbose)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Logging::ICoreLogger*>(),
                    {::i2c::class_of<::Meta::Voice::Logging::ICoreLogger*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::ICoreLogger.Info
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Logging::ICoreLogger::*)(::StringW, ::System::Object*, ::System::Object*, ::System::Object*, ::System::Object*, ::StringW, ::StringW, int32_t)>(&::Meta::Voice::Logging::ICoreLogger::Info)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Logging::ICoreLogger*>(),
                    {::i2c::class_of<::Meta::Voice::Logging::ICoreLogger*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::ICoreLogger.Debug
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Logging::ICoreLogger::*)(::StringW, ::System::Object*, ::System::Object*, ::System::Object*, ::System::Object*, ::StringW, ::StringW, int32_t)>(&::Meta::Voice::Logging::ICoreLogger::Debug)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Logging::ICoreLogger*>(),
                    {::i2c::class_of<::Meta::Voice::Logging::ICoreLogger*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::ICoreLogger.Warning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Logging::ICoreLogger::*)(::StringW, ::ArrayW<::System::Object*>)>(&::Meta::Voice::Logging::ICoreLogger::Warning)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Logging::ICoreLogger*>(),
                    {::i2c::class_of<::Meta::Voice::Logging::ICoreLogger*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::ICoreLogger.Error
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Logging::ICoreLogger::*)(::Meta::Voice::Logging::ErrorCode, ::StringW, ::ArrayW<::System::Object*>)>(&::Meta::Voice::Logging::ICoreLogger::Error)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Logging::ICoreLogger*>(),
                    {::i2c::class_of<::Meta::Voice::Logging::ICoreLogger*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::ICoreLogger.Error
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Logging::ICoreLogger::*)(::StringW, ::ArrayW<::System::Object*>)>(&::Meta::Voice::Logging::ICoreLogger::Error)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Logging::ICoreLogger*>(),
                    {::i2c::class_of<::Meta::Voice::Logging::ICoreLogger*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::ICoreLogger.Error
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Logging::ICoreLogger::*)(::System::Exception*, ::StringW, ::ArrayW<::System::Object*>)>(&::Meta::Voice::Logging::ICoreLogger::Error)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Logging::ICoreLogger*>(),
                    {::i2c::class_of<::Meta::Voice::Logging::ICoreLogger*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::ICoreLogger.Log
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Logging::ICoreLogger::*)(::Meta::Voice::Logging::CorrelationID, ::Meta::Voice::Logging::VLoggerVerbosity, ::StringW, ::ArrayW<::System::Object*>)>(&::Meta::Voice::Logging::ICoreLogger::Log)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Logging::ICoreLogger*>(),
                    {::i2c::class_of<::Meta::Voice::Logging::ICoreLogger*>(), 11}
                ));
    return ___internal_method;
  }
};
inline ::Meta::Voice::Logging::CorrelationID Meta::Voice::Logging::ICoreLogger::get_CorrelationID()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Logging::ICoreLogger*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::Logging::CorrelationID>(this, ___internal_method);
}
inline void Meta::Voice::Logging::ICoreLogger::set_CorrelationID(::Meta::Voice::Logging::CorrelationID  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Logging::ICoreLogger*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::Voice::Logging::ICoreLogger::Verbose(::StringW  message, /* [ParamArray] */ ::ArrayW<::System::Object*>  parameters)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Logging::ICoreLogger*>(), 2}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, parameters);
}
inline void Meta::Voice::Logging::ICoreLogger::Verbose(::Meta::Voice::Logging::CorrelationID  correlationId, ::StringW  message, /* [ParamArray] */ ::ArrayW<::System::Object*>  parameters)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Logging::ICoreLogger*>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, correlationId, message, parameters);
}
inline void Meta::Voice::Logging::ICoreLogger::Verbose(::StringW  message, ::System::Object*  p1, ::System::Object*  p2, ::System::Object*  p3, ::System::Object*  p4, /* [CallerMemberName] */ ::StringW  memberName, /* [CallerFilePath] */ ::StringW  sourceFilePath, /* [CallerLineNumber] */ int32_t  sourceLineNumber)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Logging::ICoreLogger*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, p1, p2, p3, p4, memberName, sourceFilePath, sourceLineNumber);
}
inline void Meta::Voice::Logging::ICoreLogger::Info(::StringW  message, ::System::Object*  p1, ::System::Object*  p2, ::System::Object*  p3, ::System::Object*  p4, /* [CallerMemberName] */ ::StringW  memberName, /* [CallerFilePath] */ ::StringW  sourceFilePath, /* [CallerLineNumber] */ int32_t  sourceLineNumber)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Logging::ICoreLogger*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, p1, p2, p3, p4, memberName, sourceFilePath, sourceLineNumber);
}
inline void Meta::Voice::Logging::ICoreLogger::Debug(::StringW  message, ::System::Object*  p1, ::System::Object*  p2, ::System::Object*  p3, ::System::Object*  p4, /* [CallerMemberName] */ ::StringW  memberName, /* [CallerFilePath] */ ::StringW  sourceFilePath, /* [CallerLineNumber] */ int32_t  sourceLineNumber)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Logging::ICoreLogger*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, p1, p2, p3, p4, memberName, sourceFilePath, sourceLineNumber);
}
inline void Meta::Voice::Logging::ICoreLogger::Warning(::StringW  message, /* [ParamArray] */ ::ArrayW<::System::Object*>  parameters)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Logging::ICoreLogger*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, parameters);
}
inline void Meta::Voice::Logging::ICoreLogger::Error(::Meta::Voice::Logging::ErrorCode  errorCode, ::StringW  message, /* [ParamArray] */ ::ArrayW<::System::Object*>  parameters)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Logging::ICoreLogger*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, errorCode, message, parameters);
}
inline void Meta::Voice::Logging::ICoreLogger::Error(::StringW  message, /* [ParamArray] */ ::ArrayW<::System::Object*>  parameters)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Logging::ICoreLogger*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, parameters);
}
inline void Meta::Voice::Logging::ICoreLogger::Error(::System::Exception*  exception, ::StringW  message, /* [ParamArray] */ ::ArrayW<::System::Object*>  parameters)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Logging::ICoreLogger*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, exception, message, parameters);
}
inline void Meta::Voice::Logging::ICoreLogger::Log(::Meta::Voice::Logging::CorrelationID  correlationId, ::Meta::Voice::Logging::VLoggerVerbosity  verbosity, ::StringW  message, /* [ParamArray] */ ::ArrayW<::System::Object*>  parameters)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Logging::ICoreLogger*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, correlationId, verbosity, message, parameters);
}
