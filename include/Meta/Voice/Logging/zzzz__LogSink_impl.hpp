#pragma once
// IWYU pragma private; include "Meta/Voice/Logging/LogSink.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/Voice/Logging/zzzz__LogSink_def.hpp"
#include "Meta/Voice/Logging/zzzz__CorrelationID_def.hpp"
#include "Meta/Voice/Logging/zzzz__IErrorMitigator_def.hpp"
#include "Meta/Voice/Logging/zzzz__ILogSink_def.hpp"
#include "Meta/Voice/Logging/zzzz__ILogWriter_def.hpp"
#include "Meta/Voice/Logging/zzzz__LogEntry_def.hpp"
#include "Meta/Voice/Logging/zzzz__LogSink_def.hpp"
#include "Meta/Voice/Logging/zzzz__LoggerOptions_def.hpp"
#include "Meta/Voice/Logging/zzzz__RingDictionaryBuffer_2_def.hpp"
#include "Meta/Voice/Logging/zzzz__VLoggerVerbosity_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
#include "System/Threading/zzzz__Thread_def.hpp"
//  Writing Method size for method: ::Meta::Voice::Logging::LogSink.get_LogWriter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::Voice::Logging::ILogWriter* (::Meta::Voice::Logging::LogSink::*)()>(&::Meta::Voice::Logging::LogSink::get_LogWriter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e38a24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LogSink*>(),
                        {"get_LogWriter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::LogSink.set_LogWriter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Logging::LogSink::*)(::Meta::Voice::Logging::ILogWriter*)>(&::Meta::Voice::Logging::LogSink::set_LogWriter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e38a2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LogSink*>(),
                        {"set_LogWriter", {}, {::i2c::type_of<::Meta::Voice::Logging::ILogWriter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::LogSink.get_Options
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::Voice::Logging::LoggerOptions* (::Meta::Voice::Logging::LogSink::*)()>(&::Meta::Voice::Logging::LogSink::get_Options)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e38a34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LogSink*>(),
                        {"get_Options", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::LogSink.set_Options
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Logging::LogSink::*)(::Meta::Voice::Logging::LoggerOptions*)>(&::Meta::Voice::Logging::LogSink::set_Options)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e38a3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LogSink*>(),
                        {"set_Options", {}, {::i2c::type_of<::Meta::Voice::Logging::LoggerOptions*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::LogSink._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Logging::LogSink::*)(::Meta::Voice::Logging::ILogWriter*, ::Meta::Voice::Logging::LoggerOptions*, ::Meta::Voice::Logging::IErrorMitigator*)>(&::Meta::Voice::Logging::LogSink::_ctor)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x9e375d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LogSink*>(),
                        {".ctor", {}, {::i2c::type_of<::Meta::Voice::Logging::ILogWriter*>(), ::i2c::type_of<::Meta::Voice::Logging::LoggerOptions*>(), ::i2c::type_of<::Meta::Voice::Logging::IErrorMitigator*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::LogSink.WriteEntry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Logging::LogSink::*)(::Meta::Voice::Logging::LogEntry)>(&::Meta::Voice::Logging::LogSink::WriteEntry)> {
  constexpr static std::size_t size = 0x57c;
  constexpr static std::size_t addrs = 0x9e38a44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LogSink*>(),
                        {"WriteEntry", {}, {::i2c::type_of<::Meta::Voice::Logging::LogEntry>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::LogSink.SendEntryToLogWriter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Logging::LogSink::*)(::Meta::Voice::Logging::LogEntry)>(&::Meta::Voice::Logging::LogSink::SendEntryToLogWriter)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9e39220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LogSink*>(),
                        {"SendEntryToLogWriter", {}, {::i2c::type_of<::Meta::Voice::Logging::LogEntry>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::LogSink.WrapWithLogColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Logging::LogSink::*)(::System::Text::StringBuilder*, int32_t, ::Meta::Voice::Logging::VLoggerVerbosity)>(&::Meta::Voice::Logging::LogSink::WrapWithLogColor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x9e38fc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LogSink*>(),
                        {"WrapWithLogColor", {}, {::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Meta::Voice::Logging::VLoggerVerbosity>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::LogSink.Annotate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Logging::LogSink::*)(::System::Text::StringBuilder*, ::Meta::Voice::Logging::LogEntry)>(&::Meta::Voice::Logging::LogSink::Annotate)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0x9e38fc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LogSink*>(),
                        {"Annotate", {}, {::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::Meta::Voice::Logging::LogEntry>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::LogSink.WriteVerbose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Logging::LogSink::*)(::StringW)>(&::Meta::Voice::Logging::LogSink::WriteVerbose)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x9e3976c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LogSink*>(),
                        {"WriteVerbose", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::LogSink.WriteDebug
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Logging::LogSink::*)(::StringW)>(&::Meta::Voice::Logging::LogSink::WriteDebug)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x9e39640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LogSink*>(),
                        {"WriteDebug", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::LogSink.WriteInfo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Logging::LogSink::*)(::StringW)>(&::Meta::Voice::Logging::LogSink::WriteInfo)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x9e39514;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LogSink*>(),
                        {"WriteInfo", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::LogSink.WriteWarning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Logging::LogSink::*)(::StringW)>(&::Meta::Voice::Logging::LogSink::WriteWarning)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x9e393e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LogSink*>(),
                        {"WriteWarning", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::LogSink.WriteError
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Logging::LogSink::*)(::StringW)>(&::Meta::Voice::Logging::LogSink::WriteError)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x9e392bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LogSink*>(),
                        {"WriteError", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::LogSink.IsSafeToLog
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::Voice::Logging::LogSink::*)()>(&::Meta::Voice::Logging::LogSink::IsSafeToLog)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x9e3989c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LogSink*>(),
                        {"IsSafeToLog", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Meta::Voice::Logging::LogSink::__cordl_internal_get__workingDirectory()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____workingDirectory;
}
constexpr ::StringW const& Meta::Voice::Logging::LogSink::__cordl_internal_get__workingDirectory() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____workingDirectory;
}
constexpr void Meta::Voice::Logging::LogSink::__cordl_internal_set__workingDirectory(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____workingDirectory = value;
}
constexpr ::Meta::Voice::Logging::ILogWriter*& Meta::Voice::Logging::LogSink::__cordl_internal_get__LogWriter_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LogWriter_k__BackingField;
}
constexpr ::Meta::Voice::Logging::ILogWriter* const& Meta::Voice::Logging::LogSink::__cordl_internal_get__LogWriter_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____LogWriter_k__BackingField;
}
constexpr void Meta::Voice::Logging::LogSink::__cordl_internal_set__LogWriter_k__BackingField(::Meta::Voice::Logging::ILogWriter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____LogWriter_k__BackingField = value;
}
constexpr ::Meta::Voice::Logging::LoggerOptions*& Meta::Voice::Logging::LogSink::__cordl_internal_get__Options_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Options_k__BackingField;
}
constexpr ::Meta::Voice::Logging::LoggerOptions* const& Meta::Voice::Logging::LogSink::__cordl_internal_get__Options_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Options_k__BackingField;
}
constexpr void Meta::Voice::Logging::LogSink::__cordl_internal_set__Options_k__BackingField(::Meta::Voice::Logging::LoggerOptions*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Options_k__BackingField = value;
}
constexpr ::Meta::Voice::Logging::RingDictionaryBuffer_2<::StringW,::Meta::Voice::Logging::CorrelationID>*& Meta::Voice::Logging::LogSink::__cordl_internal_get__messagesCache()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____messagesCache;
}
constexpr ::Meta::Voice::Logging::RingDictionaryBuffer_2<::StringW,::Meta::Voice::Logging::CorrelationID>* const& Meta::Voice::Logging::LogSink::__cordl_internal_get__messagesCache() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____messagesCache;
}
constexpr void Meta::Voice::Logging::LogSink::__cordl_internal_set__messagesCache(::Meta::Voice::Logging::RingDictionaryBuffer_2<::StringW,::Meta::Voice::Logging::CorrelationID>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____messagesCache = value;
}
inline void Meta::Voice::Logging::LogSink::setStaticF_mainThread(::System::Threading::Thread*  value)  {
::cordl_internals::setStaticField<::System::Threading::Thread*, "mainThread", ::Meta::Voice::Logging::LogSink*>(std::forward<::System::Threading::Thread*>(value));
}
inline ::System::Threading::Thread* Meta::Voice::Logging::LogSink::getStaticF_mainThread()  {
return ::cordl_internals::getStaticField<::System::Threading::Thread*, "mainThread", ::Meta::Voice::Logging::LogSink*>();
}
inline void Meta::Voice::Logging::LogSink::setStaticF__errorMitigator(::Meta::Voice::Logging::IErrorMitigator*  value)  {
::cordl_internals::setStaticField<::Meta::Voice::Logging::IErrorMitigator*, "_errorMitigator", ::Meta::Voice::Logging::LogSink*>(std::forward<::Meta::Voice::Logging::IErrorMitigator*>(value));
}
inline ::Meta::Voice::Logging::IErrorMitigator* Meta::Voice::Logging::LogSink::getStaticF__errorMitigator()  {
return ::cordl_internals::getStaticField<::Meta::Voice::Logging::IErrorMitigator*, "_errorMitigator", ::Meta::Voice::Logging::LogSink*>();
}
inline ::Meta::Voice::Logging::ILogWriter* Meta::Voice::Logging::LogSink::get_LogWriter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LogSink*>(),
                        {"get_LogWriter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::Logging::ILogWriter*>(this, ___internal_method);
}
inline void Meta::Voice::Logging::LogSink::set_LogWriter(::Meta::Voice::Logging::ILogWriter*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LogSink*>(),
                        {"set_LogWriter", {}, {::i2c::type_of<::Meta::Voice::Logging::ILogWriter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Meta::Voice::Logging::LoggerOptions* Meta::Voice::Logging::LogSink::get_Options()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LogSink*>(),
                        {"get_Options", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::Logging::LoggerOptions*>(this, ___internal_method);
}
inline void Meta::Voice::Logging::LogSink::set_Options(::Meta::Voice::Logging::LoggerOptions*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LogSink*>(),
                        {"set_Options", {}, {::i2c::type_of<::Meta::Voice::Logging::LoggerOptions*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::Voice::Logging::LogSink::_ctor(::Meta::Voice::Logging::ILogWriter*  logWriter, ::Meta::Voice::Logging::LoggerOptions*  options, ::Meta::Voice::Logging::IErrorMitigator*  errorMitigator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LogSink*>(),
                        {".ctor", {}, {::i2c::type_of<::Meta::Voice::Logging::ILogWriter*>(), ::i2c::type_of<::Meta::Voice::Logging::LoggerOptions*>(), ::i2c::type_of<::Meta::Voice::Logging::IErrorMitigator*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, logWriter, options, errorMitigator);
}
inline void Meta::Voice::Logging::LogSink::WriteEntry(::Meta::Voice::Logging::LogEntry  logEntry)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LogSink*>(),
                        {"WriteEntry", {}, {::i2c::type_of<::Meta::Voice::Logging::LogEntry>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, logEntry);
}
inline void Meta::Voice::Logging::LogSink::SendEntryToLogWriter(::Meta::Voice::Logging::LogEntry  logEntry)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LogSink*>(),
                        {"SendEntryToLogWriter", {}, {::i2c::type_of<::Meta::Voice::Logging::LogEntry>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, logEntry);
}
inline void Meta::Voice::Logging::LogSink::WrapWithLogColor(::System::Text::StringBuilder*  builder, int32_t  startIndex, ::Meta::Voice::Logging::VLoggerVerbosity  logType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LogSink*>(),
                        {"WrapWithLogColor", {}, {::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Meta::Voice::Logging::VLoggerVerbosity>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, builder, startIndex, logType);
}
inline void Meta::Voice::Logging::LogSink::Annotate(::System::Text::StringBuilder*  sb, ::Meta::Voice::Logging::LogEntry  logEntry)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LogSink*>(),
                        {"Annotate", {}, {::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::Meta::Voice::Logging::LogEntry>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sb, logEntry);
}
inline void Meta::Voice::Logging::LogSink::WriteVerbose(::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LogSink*>(),
                        {"WriteVerbose", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void Meta::Voice::Logging::LogSink::WriteDebug(::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LogSink*>(),
                        {"WriteDebug", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void Meta::Voice::Logging::LogSink::WriteInfo(::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LogSink*>(),
                        {"WriteInfo", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void Meta::Voice::Logging::LogSink::WriteWarning(::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LogSink*>(),
                        {"WriteWarning", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline void Meta::Voice::Logging::LogSink::WriteError(::StringW  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LogSink*>(),
                        {"WriteError", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline bool Meta::Voice::Logging::LogSink::IsSafeToLog()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LogSink*>(),
                        {"IsSafeToLog", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::Meta::Voice::Logging::LogSink* Meta::Voice::Logging::LogSink::New_ctor(::Meta::Voice::Logging::ILogWriter*  logWriter, ::Meta::Voice::Logging::LoggerOptions*  options, ::Meta::Voice::Logging::IErrorMitigator*  errorMitigator)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::Voice::Logging::LogSink*>(logWriter, options, errorMitigator));
}
/// @brief Convert operator to "::Meta::Voice::Logging::ILogSink"
constexpr  Meta::Voice::Logging::LogSink::operator ::Meta::Voice::Logging::ILogSink*() noexcept {
return static_cast<::Meta::Voice::Logging::ILogSink*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::Voice::Logging::ILogSink"
constexpr ::Meta::Voice::Logging::ILogSink* Meta::Voice::Logging::LogSink::i___Meta__Voice__Logging__ILogSink() noexcept {
return static_cast<::Meta::Voice::Logging::ILogSink*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Meta::Voice::Logging::LogSink::LogSink()   {
}
//  Writing Method size for method: ::Meta::Voice::Logging::LogSink___c__DisplayClass26_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Logging::LogSink___c__DisplayClass26_0::*)()>(&::Meta::Voice::Logging::LogSink___c__DisplayClass26_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e39954;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LogSink___c__DisplayClass26_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::LogSink___c__DisplayClass26_0._WriteError_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Logging::LogSink___c__DisplayClass26_0::*)()>(&::Meta::Voice::Logging::LogSink___c__DisplayClass26_0::_WriteError_b__0)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x9e39d14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LogSink___c__DisplayClass26_0*>(),
                        {"<WriteError>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Meta::Voice::Logging::LogSink*& Meta::Voice::Logging::LogSink___c__DisplayClass26_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::Meta::Voice::Logging::LogSink* const& Meta::Voice::Logging::LogSink___c__DisplayClass26_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Meta::Voice::Logging::LogSink___c__DisplayClass26_0::__cordl_internal_set___4__this(::Meta::Voice::Logging::LogSink*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::StringW& Meta::Voice::Logging::LogSink___c__DisplayClass26_0::__cordl_internal_get_message()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___message;
}
constexpr ::StringW const& Meta::Voice::Logging::LogSink___c__DisplayClass26_0::__cordl_internal_get_message() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___message;
}
constexpr void Meta::Voice::Logging::LogSink___c__DisplayClass26_0::__cordl_internal_set_message(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___message = value;
}
inline void Meta::Voice::Logging::LogSink___c__DisplayClass26_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LogSink___c__DisplayClass26_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::Voice::Logging::LogSink___c__DisplayClass26_0::_WriteError_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LogSink___c__DisplayClass26_0*>(),
                        {"<WriteError>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::Voice::Logging::LogSink___c__DisplayClass26_0* Meta::Voice::Logging::LogSink___c__DisplayClass26_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::Voice::Logging::LogSink___c__DisplayClass26_0*>());
}
// Ctor Parameters []
constexpr ::Meta::Voice::Logging::LogSink___c__DisplayClass26_0::LogSink___c__DisplayClass26_0()   {
}
//  Writing Method size for method: ::Meta::Voice::Logging::LogSink___c__DisplayClass25_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Logging::LogSink___c__DisplayClass25_0::*)()>(&::Meta::Voice::Logging::LogSink___c__DisplayClass25_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e3994c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LogSink___c__DisplayClass25_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::LogSink___c__DisplayClass25_0._WriteWarning_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Logging::LogSink___c__DisplayClass25_0::*)()>(&::Meta::Voice::Logging::LogSink___c__DisplayClass25_0::_WriteWarning_b__0)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x9e39c60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LogSink___c__DisplayClass25_0*>(),
                        {"<WriteWarning>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Meta::Voice::Logging::LogSink*& Meta::Voice::Logging::LogSink___c__DisplayClass25_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::Meta::Voice::Logging::LogSink* const& Meta::Voice::Logging::LogSink___c__DisplayClass25_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Meta::Voice::Logging::LogSink___c__DisplayClass25_0::__cordl_internal_set___4__this(::Meta::Voice::Logging::LogSink*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::StringW& Meta::Voice::Logging::LogSink___c__DisplayClass25_0::__cordl_internal_get_message()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___message;
}
constexpr ::StringW const& Meta::Voice::Logging::LogSink___c__DisplayClass25_0::__cordl_internal_get_message() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___message;
}
constexpr void Meta::Voice::Logging::LogSink___c__DisplayClass25_0::__cordl_internal_set_message(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___message = value;
}
inline void Meta::Voice::Logging::LogSink___c__DisplayClass25_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LogSink___c__DisplayClass25_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::Voice::Logging::LogSink___c__DisplayClass25_0::_WriteWarning_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LogSink___c__DisplayClass25_0*>(),
                        {"<WriteWarning>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::Voice::Logging::LogSink___c__DisplayClass25_0* Meta::Voice::Logging::LogSink___c__DisplayClass25_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::Voice::Logging::LogSink___c__DisplayClass25_0*>());
}
// Ctor Parameters []
constexpr ::Meta::Voice::Logging::LogSink___c__DisplayClass25_0::LogSink___c__DisplayClass25_0()   {
}
//  Writing Method size for method: ::Meta::Voice::Logging::LogSink___c__DisplayClass24_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Logging::LogSink___c__DisplayClass24_0::*)()>(&::Meta::Voice::Logging::LogSink___c__DisplayClass24_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e39944;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LogSink___c__DisplayClass24_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::LogSink___c__DisplayClass24_0._WriteInfo_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Logging::LogSink___c__DisplayClass24_0::*)()>(&::Meta::Voice::Logging::LogSink___c__DisplayClass24_0::_WriteInfo_b__0)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x9e39bac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LogSink___c__DisplayClass24_0*>(),
                        {"<WriteInfo>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Meta::Voice::Logging::LogSink*& Meta::Voice::Logging::LogSink___c__DisplayClass24_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::Meta::Voice::Logging::LogSink* const& Meta::Voice::Logging::LogSink___c__DisplayClass24_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Meta::Voice::Logging::LogSink___c__DisplayClass24_0::__cordl_internal_set___4__this(::Meta::Voice::Logging::LogSink*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::StringW& Meta::Voice::Logging::LogSink___c__DisplayClass24_0::__cordl_internal_get_message()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___message;
}
constexpr ::StringW const& Meta::Voice::Logging::LogSink___c__DisplayClass24_0::__cordl_internal_get_message() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___message;
}
constexpr void Meta::Voice::Logging::LogSink___c__DisplayClass24_0::__cordl_internal_set_message(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___message = value;
}
inline void Meta::Voice::Logging::LogSink___c__DisplayClass24_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LogSink___c__DisplayClass24_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::Voice::Logging::LogSink___c__DisplayClass24_0::_WriteInfo_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LogSink___c__DisplayClass24_0*>(),
                        {"<WriteInfo>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::Voice::Logging::LogSink___c__DisplayClass24_0* Meta::Voice::Logging::LogSink___c__DisplayClass24_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::Voice::Logging::LogSink___c__DisplayClass24_0*>());
}
// Ctor Parameters []
constexpr ::Meta::Voice::Logging::LogSink___c__DisplayClass24_0::LogSink___c__DisplayClass24_0()   {
}
//  Writing Method size for method: ::Meta::Voice::Logging::LogSink___c__DisplayClass23_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Logging::LogSink___c__DisplayClass23_0::*)()>(&::Meta::Voice::Logging::LogSink___c__DisplayClass23_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e3993c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LogSink___c__DisplayClass23_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::LogSink___c__DisplayClass23_0._WriteDebug_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Logging::LogSink___c__DisplayClass23_0::*)()>(&::Meta::Voice::Logging::LogSink___c__DisplayClass23_0::_WriteDebug_b__0)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x9e39af8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LogSink___c__DisplayClass23_0*>(),
                        {"<WriteDebug>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Meta::Voice::Logging::LogSink*& Meta::Voice::Logging::LogSink___c__DisplayClass23_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::Meta::Voice::Logging::LogSink* const& Meta::Voice::Logging::LogSink___c__DisplayClass23_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Meta::Voice::Logging::LogSink___c__DisplayClass23_0::__cordl_internal_set___4__this(::Meta::Voice::Logging::LogSink*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::StringW& Meta::Voice::Logging::LogSink___c__DisplayClass23_0::__cordl_internal_get_message()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___message;
}
constexpr ::StringW const& Meta::Voice::Logging::LogSink___c__DisplayClass23_0::__cordl_internal_get_message() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___message;
}
constexpr void Meta::Voice::Logging::LogSink___c__DisplayClass23_0::__cordl_internal_set_message(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___message = value;
}
inline void Meta::Voice::Logging::LogSink___c__DisplayClass23_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LogSink___c__DisplayClass23_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::Voice::Logging::LogSink___c__DisplayClass23_0::_WriteDebug_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LogSink___c__DisplayClass23_0*>(),
                        {"<WriteDebug>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::Voice::Logging::LogSink___c__DisplayClass23_0* Meta::Voice::Logging::LogSink___c__DisplayClass23_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::Voice::Logging::LogSink___c__DisplayClass23_0*>());
}
// Ctor Parameters []
constexpr ::Meta::Voice::Logging::LogSink___c__DisplayClass23_0::LogSink___c__DisplayClass23_0()   {
}
//  Writing Method size for method: ::Meta::Voice::Logging::LogSink___c__DisplayClass22_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Logging::LogSink___c__DisplayClass22_0::*)()>(&::Meta::Voice::Logging::LogSink___c__DisplayClass22_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e39894;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LogSink___c__DisplayClass22_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::LogSink___c__DisplayClass22_0._WriteVerbose_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Logging::LogSink___c__DisplayClass22_0::*)()>(&::Meta::Voice::Logging::LogSink___c__DisplayClass22_0::_WriteVerbose_b__0)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x9e39a48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LogSink___c__DisplayClass22_0*>(),
                        {"<WriteVerbose>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Meta::Voice::Logging::LogSink*& Meta::Voice::Logging::LogSink___c__DisplayClass22_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::Meta::Voice::Logging::LogSink* const& Meta::Voice::Logging::LogSink___c__DisplayClass22_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void Meta::Voice::Logging::LogSink___c__DisplayClass22_0::__cordl_internal_set___4__this(::Meta::Voice::Logging::LogSink*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::StringW& Meta::Voice::Logging::LogSink___c__DisplayClass22_0::__cordl_internal_get_message()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___message;
}
constexpr ::StringW const& Meta::Voice::Logging::LogSink___c__DisplayClass22_0::__cordl_internal_get_message() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___message;
}
constexpr void Meta::Voice::Logging::LogSink___c__DisplayClass22_0::__cordl_internal_set_message(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___message = value;
}
inline void Meta::Voice::Logging::LogSink___c__DisplayClass22_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LogSink___c__DisplayClass22_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::Voice::Logging::LogSink___c__DisplayClass22_0::_WriteVerbose_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LogSink___c__DisplayClass22_0*>(),
                        {"<WriteVerbose>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::Voice::Logging::LogSink___c__DisplayClass22_0* Meta::Voice::Logging::LogSink___c__DisplayClass22_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::Voice::Logging::LogSink___c__DisplayClass22_0*>());
}
// Ctor Parameters []
constexpr ::Meta::Voice::Logging::LogSink___c__DisplayClass22_0::LogSink___c__DisplayClass22_0()   {
}
//  Writing Method size for method: ::Meta::Voice::Logging::LogSink___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Logging::LogSink___c::*)()>(&::Meta::Voice::Logging::LogSink___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e399c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LogSink___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::LogSink___c.__cctor_b__1_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Thread* (::Meta::Voice::Logging::LogSink___c::*)()>(&::Meta::Voice::Logging::LogSink___c::__cctor_b__1_0)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x9e399cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LogSink___c*>(),
                        {"<.cctor>b__1_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Meta::Voice::Logging::LogSink___c::setStaticF___9(::Meta::Voice::Logging::LogSink___c*  value)  {
::cordl_internals::setStaticField<::Meta::Voice::Logging::LogSink___c*, "<>9", ::Meta::Voice::Logging::LogSink___c*>(std::forward<::Meta::Voice::Logging::LogSink___c*>(value));
}
inline ::Meta::Voice::Logging::LogSink___c* Meta::Voice::Logging::LogSink___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::Meta::Voice::Logging::LogSink___c*, "<>9", ::Meta::Voice::Logging::LogSink___c*>();
}
inline void Meta::Voice::Logging::LogSink___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LogSink___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Thread* Meta::Voice::Logging::LogSink___c::__cctor_b__1_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LogSink___c*>(),
                        {"<.cctor>b__1_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Threading::Thread*>(this, ___internal_method);
}
inline ::Meta::Voice::Logging::LogSink___c* Meta::Voice::Logging::LogSink___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::Voice::Logging::LogSink___c*>());
}
// Ctor Parameters []
constexpr ::Meta::Voice::Logging::LogSink___c::LogSink___c()   {
}
