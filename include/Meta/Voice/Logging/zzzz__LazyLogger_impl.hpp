#pragma once
// IWYU pragma private; include "Meta/Voice/Logging/LazyLogger.hpp"
#include "System/zzzz__Lazy_1_impl.hpp"
#include "Meta/Voice/Logging/zzzz__LazyLogger_def.hpp"
#include "Meta/Voice/Logging/zzzz__CorrelationID_def.hpp"
#include "Meta/Voice/Logging/zzzz__ErrorCode_def.hpp"
#include "Meta/Voice/Logging/zzzz__ICoreLogger_def.hpp"
#include "Meta/Voice/Logging/zzzz__IVLogger_def.hpp"
#include "Meta/Voice/Logging/zzzz__VLoggerVerbosity_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Func_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Meta::Voice::Logging::LazyLogger._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Logging::LazyLogger::*)(::System::Func_1<::Meta::Voice::Logging::IVLogger*>*)>(&::Meta::Voice::Logging::LazyLogger::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9e36070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LazyLogger*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Func_1<::Meta::Voice::Logging::IVLogger*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::LazyLogger.get_CorrelationID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::Voice::Logging::CorrelationID (::Meta::Voice::Logging::LazyLogger::*)()>(&::Meta::Voice::Logging::LazyLogger::get_CorrelationID)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x9e360c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LazyLogger*>(),
                        {"get_CorrelationID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::LazyLogger.set_CorrelationID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Logging::LazyLogger::*)(::Meta::Voice::Logging::CorrelationID)>(&::Meta::Voice::Logging::LazyLogger::set_CorrelationID)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x9e36188;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LazyLogger*>(),
                        {"set_CorrelationID", {}, {::i2c::type_of<::Meta::Voice::Logging::CorrelationID>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::LazyLogger.Verbose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Logging::LazyLogger::*)(::StringW, ::ArrayW<::System::Object*>)>(&::Meta::Voice::Logging::LazyLogger::Verbose)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x9e3625c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LazyLogger*>(),
                        {"Verbose", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::LazyLogger.Verbose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Logging::LazyLogger::*)(::Meta::Voice::Logging::CorrelationID, ::StringW, ::ArrayW<::System::Object*>)>(&::Meta::Voice::Logging::LazyLogger::Verbose)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x9e36338;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LazyLogger*>(),
                        {"Verbose", {}, {::i2c::type_of<::Meta::Voice::Logging::CorrelationID>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::LazyLogger.Verbose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Logging::LazyLogger::*)(::StringW, ::System::Object*, ::System::Object*, ::System::Object*, ::System::Object*, ::StringW, ::StringW, int32_t)>(&::Meta::Voice::Logging::LazyLogger::Verbose)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x9e36424;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LazyLogger*>(),
                        {"Verbose", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::LazyLogger.Info
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Logging::LazyLogger::*)(::StringW, ::System::Object*, ::System::Object*, ::System::Object*, ::System::Object*, ::StringW, ::StringW, int32_t)>(&::Meta::Voice::Logging::LazyLogger::Info)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x9e3654c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LazyLogger*>(),
                        {"Info", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::LazyLogger.Debug
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Logging::LazyLogger::*)(::StringW, ::System::Object*, ::System::Object*, ::System::Object*, ::System::Object*, ::StringW, ::StringW, int32_t)>(&::Meta::Voice::Logging::LazyLogger::Debug)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x9e36674;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LazyLogger*>(),
                        {"Debug", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::LazyLogger.Warning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Logging::LazyLogger::*)(::StringW, ::ArrayW<::System::Object*>)>(&::Meta::Voice::Logging::LazyLogger::Warning)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x9e3679c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LazyLogger*>(),
                        {"Warning", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::LazyLogger.Error
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Logging::LazyLogger::*)(::Meta::Voice::Logging::ErrorCode, ::StringW, ::ArrayW<::System::Object*>)>(&::Meta::Voice::Logging::LazyLogger::Error)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x9e36878;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LazyLogger*>(),
                        {"Error", {}, {::i2c::type_of<::Meta::Voice::Logging::ErrorCode>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::LazyLogger.Error
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Logging::LazyLogger::*)(::StringW, ::ArrayW<::System::Object*>)>(&::Meta::Voice::Logging::LazyLogger::Error)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x9e36964;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LazyLogger*>(),
                        {"Error", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::LazyLogger.Error
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Logging::LazyLogger::*)(::System::Exception*, ::StringW, ::ArrayW<::System::Object*>)>(&::Meta::Voice::Logging::LazyLogger::Error)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x9e36a40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LazyLogger*>(),
                        {"Error", {}, {::i2c::type_of<::System::Exception*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::LazyLogger.Log
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Logging::LazyLogger::*)(::Meta::Voice::Logging::CorrelationID, ::Meta::Voice::Logging::VLoggerVerbosity, ::StringW, ::ArrayW<::System::Object*>)>(&::Meta::Voice::Logging::LazyLogger::Log)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x9e36b2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LazyLogger*>(),
                        {"Log", {}, {::i2c::type_of<::Meta::Voice::Logging::CorrelationID>(), ::i2c::type_of<::Meta::Voice::Logging::VLoggerVerbosity>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
inline void Meta::Voice::Logging::LazyLogger::_ctor(::System::Func_1<::Meta::Voice::Logging::IVLogger*>*  initializer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LazyLogger*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Func_1<::Meta::Voice::Logging::IVLogger*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, initializer);
}
inline ::Meta::Voice::Logging::CorrelationID Meta::Voice::Logging::LazyLogger::get_CorrelationID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LazyLogger*>(),
                        {"get_CorrelationID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::Logging::CorrelationID>(this, ___internal_method);
}
inline void Meta::Voice::Logging::LazyLogger::set_CorrelationID(::Meta::Voice::Logging::CorrelationID  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LazyLogger*>(),
                        {"set_CorrelationID", {}, {::i2c::type_of<::Meta::Voice::Logging::CorrelationID>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::Voice::Logging::LazyLogger::Verbose(::StringW  message, /* [ParamArray] */ ::ArrayW<::System::Object*>  parameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LazyLogger*>(),
                        {"Verbose", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, parameters);
}
inline void Meta::Voice::Logging::LazyLogger::Verbose(::Meta::Voice::Logging::CorrelationID  correlationId, ::StringW  message, /* [ParamArray] */ ::ArrayW<::System::Object*>  parameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LazyLogger*>(),
                        {"Verbose", {}, {::i2c::type_of<::Meta::Voice::Logging::CorrelationID>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, correlationId, message, parameters);
}
inline void Meta::Voice::Logging::LazyLogger::Verbose(::StringW  message, ::System::Object*  p1, ::System::Object*  p2, ::System::Object*  p3, ::System::Object*  p4, /* [CallerMemberName] */ ::StringW  memberName, /* [CallerFilePath] */ ::StringW  sourceFilePath, /* [CallerLineNumber] */ int32_t  sourceLineNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LazyLogger*>(),
                        {"Verbose", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, p1, p2, p3, p4, memberName, sourceFilePath, sourceLineNumber);
}
inline void Meta::Voice::Logging::LazyLogger::Info(::StringW  message, ::System::Object*  p1, ::System::Object*  p2, ::System::Object*  p3, ::System::Object*  p4, ::StringW  memberName, ::StringW  sourceFilePath, int32_t  sourceLineNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LazyLogger*>(),
                        {"Info", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, p1, p2, p3, p4, memberName, sourceFilePath, sourceLineNumber);
}
inline void Meta::Voice::Logging::LazyLogger::Debug(::StringW  message, ::System::Object*  p1, ::System::Object*  p2, ::System::Object*  p3, ::System::Object*  p4, ::StringW  memberName, ::StringW  sourceFilePath, int32_t  sourceLineNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LazyLogger*>(),
                        {"Debug", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, p1, p2, p3, p4, memberName, sourceFilePath, sourceLineNumber);
}
inline void Meta::Voice::Logging::LazyLogger::Warning(::StringW  message, /* [ParamArray] */ ::ArrayW<::System::Object*>  parameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LazyLogger*>(),
                        {"Warning", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, parameters);
}
inline void Meta::Voice::Logging::LazyLogger::Error(::Meta::Voice::Logging::ErrorCode  errorCode, ::StringW  message, /* [ParamArray] */ ::ArrayW<::System::Object*>  parameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LazyLogger*>(),
                        {"Error", {}, {::i2c::type_of<::Meta::Voice::Logging::ErrorCode>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, errorCode, message, parameters);
}
inline void Meta::Voice::Logging::LazyLogger::Error(::StringW  message, /* [ParamArray] */ ::ArrayW<::System::Object*>  parameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LazyLogger*>(),
                        {"Error", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, parameters);
}
inline void Meta::Voice::Logging::LazyLogger::Error(::System::Exception*  exception, ::StringW  message, /* [ParamArray] */ ::ArrayW<::System::Object*>  parameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LazyLogger*>(),
                        {"Error", {}, {::i2c::type_of<::System::Exception*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, exception, message, parameters);
}
inline void Meta::Voice::Logging::LazyLogger::Log(::Meta::Voice::Logging::CorrelationID  correlationId, ::Meta::Voice::Logging::VLoggerVerbosity  verbosity, ::StringW  message, /* [ParamArray] */ ::ArrayW<::System::Object*>  parameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LazyLogger*>(),
                        {"Log", {}, {::i2c::type_of<::Meta::Voice::Logging::CorrelationID>(), ::i2c::type_of<::Meta::Voice::Logging::VLoggerVerbosity>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, correlationId, verbosity, message, parameters);
}
inline ::Meta::Voice::Logging::LazyLogger* Meta::Voice::Logging::LazyLogger::New_ctor(::System::Func_1<::Meta::Voice::Logging::IVLogger*>*  initializer)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::Voice::Logging::LazyLogger*>(initializer));
}
/// @brief Convert operator to "::Meta::Voice::Logging::IVLogger"
constexpr  Meta::Voice::Logging::LazyLogger::operator ::Meta::Voice::Logging::IVLogger*() noexcept {
return static_cast<::Meta::Voice::Logging::IVLogger*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::Voice::Logging::IVLogger"
constexpr ::Meta::Voice::Logging::IVLogger* Meta::Voice::Logging::LazyLogger::i___Meta__Voice__Logging__IVLogger() noexcept {
return static_cast<::Meta::Voice::Logging::IVLogger*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Meta::Voice::Logging::ICoreLogger"
constexpr  Meta::Voice::Logging::LazyLogger::operator ::Meta::Voice::Logging::ICoreLogger*() noexcept {
return static_cast<::Meta::Voice::Logging::ICoreLogger*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::Voice::Logging::ICoreLogger"
constexpr ::Meta::Voice::Logging::ICoreLogger* Meta::Voice::Logging::LazyLogger::i___Meta__Voice__Logging__ICoreLogger() noexcept {
return static_cast<::Meta::Voice::Logging::ICoreLogger*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Meta::Voice::Logging::LazyLogger::LazyLogger()   {
}
