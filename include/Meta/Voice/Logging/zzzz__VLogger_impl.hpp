#pragma once
// IWYU pragma private; include "Meta/Voice/Logging/VLogger.hpp"
#include "Meta/Voice/Logging/zzzz__CorrelationID_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/Voice/Logging/zzzz__VLogger_def.hpp"
#include "Meta/Voice/Logging/zzzz__CorrelationID_def.hpp"
#include "Meta/Voice/Logging/zzzz__ErrorCode_def.hpp"
#include "Meta/Voice/Logging/zzzz__ICoreLogger_def.hpp"
#include "Meta/Voice/Logging/zzzz__ILogSink_def.hpp"
#include "Meta/Voice/Logging/zzzz__IVLogger_def.hpp"
#include "Meta/Voice/Logging/zzzz__LogEntry_def.hpp"
#include "Meta/Voice/Logging/zzzz__LoggingContext_def.hpp"
#include "Meta/Voice/Logging/zzzz__RingDictionaryBuffer_2_def.hpp"
#include "Meta/Voice/Logging/zzzz__VLoggerVerbosity_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Threading/zzzz__ThreadLocal_1_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Meta::Voice::Logging::VLogger.get_CorrelationID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::Voice::Logging::CorrelationID (::Meta::Voice::Logging::VLogger::*)()>(&::Meta::Voice::Logging::VLogger::get_CorrelationID)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x9e39f80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::VLogger*>(),
                        {"get_CorrelationID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::VLogger.set_CorrelationID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Logging::VLogger::*)(::Meta::Voice::Logging::CorrelationID)>(&::Meta::Voice::Logging::VLogger::set_CorrelationID)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x9e3a0d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::VLogger*>(),
                        {"set_CorrelationID", {}, {::i2c::type_of<::Meta::Voice::Logging::CorrelationID>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::VLogger._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Logging::VLogger::*)(::StringW, ::Meta::Voice::Logging::ILogSink*)>(&::Meta::Voice::Logging::VLogger::_ctor)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x9e3a174;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::VLogger*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::Voice::Logging::ILogSink*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::VLogger.CorrelateIds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Logging::VLogger::*)(::Meta::Voice::Logging::CorrelationID)>(&::Meta::Voice::Logging::VLogger::CorrelateIds)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x9e3a2ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::VLogger*>(),
                        {"CorrelateIds", {}, {::i2c::type_of<::Meta::Voice::Logging::CorrelationID>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::VLogger.Verbose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Logging::VLogger::*)(::StringW, ::System::Object*, ::System::Object*, ::System::Object*, ::System::Object*, ::StringW, ::StringW, int32_t)>(&::Meta::Voice::Logging::VLogger::Verbose)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x9e3a4f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::VLogger*>(),
                        {"Verbose", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::VLogger.Verbose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Logging::VLogger::*)(::StringW, ::ArrayW<::System::Object*>)>(&::Meta::Voice::Logging::VLogger::Verbose)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x9e3a81c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::VLogger*>(),
                        {"Verbose", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::VLogger.Verbose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Logging::VLogger::*)(::Meta::Voice::Logging::CorrelationID, ::StringW, ::ArrayW<::System::Object*>)>(&::Meta::Voice::Logging::VLogger::Verbose)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x9e3a8c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::VLogger*>(),
                        {"Verbose", {}, {::i2c::type_of<::Meta::Voice::Logging::CorrelationID>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::VLogger.Info
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Logging::VLogger::*)(::StringW, ::System::Object*, ::System::Object*, ::System::Object*, ::System::Object*, ::StringW, ::StringW, int32_t)>(&::Meta::Voice::Logging::VLogger::Info)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x9e3a974;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::VLogger*>(),
                        {"Info", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::VLogger.Debug
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Logging::VLogger::*)(::StringW, ::System::Object*, ::System::Object*, ::System::Object*, ::System::Object*, ::StringW, ::StringW, int32_t)>(&::Meta::Voice::Logging::VLogger::Debug)> {
  constexpr static std::size_t size = 0x22c;
  constexpr static std::size_t addrs = 0x9e3aba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::VLogger*>(),
                        {"Debug", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::VLogger.Warning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Logging::VLogger::*)(::StringW, ::ArrayW<::System::Object*>)>(&::Meta::Voice::Logging::VLogger::Warning)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9e3adcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::VLogger*>(),
                        {"Warning", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::VLogger.Error
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Logging::VLogger::*)(::Meta::Voice::Logging::ErrorCode, ::StringW, ::ArrayW<::System::Object*>)>(&::Meta::Voice::Logging::VLogger::Error)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x9e3af24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::VLogger*>(),
                        {"Error", {}, {::i2c::type_of<::Meta::Voice::Logging::ErrorCode>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::VLogger.Error
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Logging::VLogger::*)(::StringW, ::ArrayW<::System::Object*>)>(&::Meta::Voice::Logging::VLogger::Error)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x9e3b094;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::VLogger*>(),
                        {"Error", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::VLogger.Error
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Logging::VLogger::*)(::System::Exception*, ::StringW, ::ArrayW<::System::Object*>)>(&::Meta::Voice::Logging::VLogger::Error)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9e3b0cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::VLogger*>(),
                        {"Error", {}, {::i2c::type_of<::System::Exception*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::VLogger.Correlate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Logging::VLogger::*)(::Meta::Voice::Logging::CorrelationID, ::Meta::Voice::Logging::CorrelationID)>(&::Meta::Voice::Logging::VLogger::Correlate)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x9e3a398;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::VLogger*>(),
                        {"Correlate", {}, {::i2c::type_of<::Meta::Voice::Logging::CorrelationID>(), ::i2c::type_of<::Meta::Voice::Logging::CorrelationID>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::VLogger.Log
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Logging::VLogger::*)(::Meta::Voice::Logging::CorrelationID, ::Meta::Voice::Logging::VLoggerVerbosity, ::StringW, ::ArrayW<::System::Object*>)>(&::Meta::Voice::Logging::VLogger::Log)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x9e3ae04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::VLogger*>(),
                        {"Log", {}, {::i2c::type_of<::Meta::Voice::Logging::CorrelationID>(), ::i2c::type_of<::Meta::Voice::Logging::VLoggerVerbosity>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::VLogger.Log
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Logging::VLogger::*)(::Meta::Voice::Logging::CorrelationID, ::Meta::Voice::Logging::VLoggerVerbosity, ::System::Exception*, ::Meta::Voice::Logging::ErrorCode, ::StringW, ::ArrayW<::System::Object*>)>(&::Meta::Voice::Logging::VLogger::Log)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x9e3b124;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::VLogger*>(),
                        {"Log", {}, {::i2c::type_of<::Meta::Voice::Logging::CorrelationID>(), ::i2c::type_of<::Meta::Voice::Logging::VLoggerVerbosity>(), ::i2c::type_of<::System::Exception*>(), ::i2c::type_of<::Meta::Voice::Logging::ErrorCode>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::VLogger.Log
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Logging::VLogger::*)(::Meta::Voice::Logging::CorrelationID, ::Meta::Voice::Logging::VLoggerVerbosity, ::Meta::Voice::Logging::ErrorCode, ::StringW, ::ArrayW<::System::Object*>)>(&::Meta::Voice::Logging::VLogger::Log)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x9e3af6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::VLogger*>(),
                        {"Log", {}, {::i2c::type_of<::Meta::Voice::Logging::CorrelationID>(), ::i2c::type_of<::Meta::Voice::Logging::VLoggerVerbosity>(), ::i2c::type_of<::Meta::Voice::Logging::ErrorCode>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::VLogger.LogEntry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Logging::VLogger::*)(::Meta::Voice::Logging::LogEntry)>(&::Meta::Voice::Logging::VLogger::LogEntry)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x9e3a724;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::VLogger*>(),
                        {"LogEntry", {}, {::i2c::type_of<::Meta::Voice::Logging::LogEntry>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::VLogger.IsFiltered
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::Voice::Logging::VLogger::*)(::Meta::Voice::Logging::LogEntry)>(&::Meta::Voice::Logging::VLogger::IsFiltered)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e3b2f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::VLogger*>(),
                        {"IsFiltered", {}, {::i2c::type_of<::Meta::Voice::Logging::LogEntry>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::VLogger.IsSuppressed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::Voice::Logging::VLogger::*)(::Meta::Voice::Logging::LogEntry)>(&::Meta::Voice::Logging::VLogger::IsSuppressed)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x9e3b250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::VLogger*>(),
                        {"IsSuppressed", {}, {::i2c::type_of<::Meta::Voice::Logging::LogEntry>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::VLogger.Flush
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Logging::VLogger::*)(::Meta::Voice::Logging::CorrelationID)>(&::Meta::Voice::Logging::VLogger::Flush)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x9e3b428;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::VLogger*>(),
                        {"Flush", {}, {::i2c::type_of<::Meta::Voice::Logging::CorrelationID>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::VLogger.ExtractRelatedEntries
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Meta::Voice::Logging::LogEntry>* (::Meta::Voice::Logging::VLogger::*)(::Meta::Voice::Logging::CorrelationID)>(&::Meta::Voice::Logging::VLogger::ExtractRelatedEntries)> {
  constexpr static std::size_t size = 0x4b4;
  constexpr static std::size_t addrs = 0x9e3b5b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::VLogger*>(),
                        {"ExtractRelatedEntries", {}, {::i2c::type_of<::Meta::Voice::Logging::CorrelationID>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::VLogger.ExtractDownstreamRelatedEntries
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Logging::VLogger::*)(::Meta::Voice::Logging::CorrelationID, ::by_ref<::System::Collections::Generic::List_1<::Meta::Voice::Logging::LogEntry>*>)>(&::Meta::Voice::Logging::VLogger::ExtractDownstreamRelatedEntries)> {
  constexpr static std::size_t size = 0x3ac;
  constexpr static std::size_t addrs = 0x9e3ba64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::VLogger*>(),
                        {"ExtractDownstreamRelatedEntries", {}, {::i2c::type_of<::Meta::Voice::Logging::CorrelationID>(), ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::Meta::Voice::Logging::LogEntry>*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::VLogger.Write
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Logging::VLogger::*)(::Meta::Voice::Logging::LogEntry, bool)>(&::Meta::Voice::Logging::VLogger::Write)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x9e3b300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::VLogger*>(),
                        {"Write", {}, {::i2c::type_of<::Meta::Voice::Logging::LogEntry>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Meta::Voice::Logging::LoggingContext*& Meta::Voice::Logging::VLogger::__cordl_internal_get__emptyContext()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____emptyContext;
}
constexpr ::Meta::Voice::Logging::LoggingContext* const& Meta::Voice::Logging::VLogger::__cordl_internal_get__emptyContext() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____emptyContext;
}
constexpr void Meta::Voice::Logging::VLogger::__cordl_internal_set__emptyContext(::Meta::Voice::Logging::LoggingContext*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____emptyContext = value;
}
constexpr int32_t& Meta::Voice::Logging::VLogger::__cordl_internal_get__nextSequenceId()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nextSequenceId;
}
constexpr int32_t const& Meta::Voice::Logging::VLogger::__cordl_internal_get__nextSequenceId() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nextSequenceId;
}
constexpr void Meta::Voice::Logging::VLogger::__cordl_internal_set__nextSequenceId(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____nextSequenceId = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::Meta::Voice::Logging::LogEntry>*& Meta::Voice::Logging::VLogger::__cordl_internal_get__scopeEntries()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scopeEntries;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t,::Meta::Voice::Logging::LogEntry>* const& Meta::Voice::Logging::VLogger::__cordl_internal_get__scopeEntries() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____scopeEntries;
}
constexpr void Meta::Voice::Logging::VLogger::__cordl_internal_set__scopeEntries(::System::Collections::Generic::Dictionary_2<int32_t,::Meta::Voice::Logging::LogEntry>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____scopeEntries = value;
}
constexpr ::Meta::Voice::Logging::RingDictionaryBuffer_2<::Meta::Voice::Logging::CorrelationID,::Meta::Voice::Logging::CorrelationID>*& Meta::Voice::Logging::VLogger::__cordl_internal_get__correlations()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____correlations;
}
constexpr ::Meta::Voice::Logging::RingDictionaryBuffer_2<::Meta::Voice::Logging::CorrelationID,::Meta::Voice::Logging::CorrelationID>* const& Meta::Voice::Logging::VLogger::__cordl_internal_get__correlations() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____correlations;
}
constexpr void Meta::Voice::Logging::VLogger::__cordl_internal_set__correlations(::Meta::Voice::Logging::RingDictionaryBuffer_2<::Meta::Voice::Logging::CorrelationID,::Meta::Voice::Logging::CorrelationID>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____correlations = value;
}
constexpr ::Meta::Voice::Logging::RingDictionaryBuffer_2<::Meta::Voice::Logging::CorrelationID,::Meta::Voice::Logging::CorrelationID>*& Meta::Voice::Logging::VLogger::__cordl_internal_get__downStreamCorrelations()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____downStreamCorrelations;
}
constexpr ::Meta::Voice::Logging::RingDictionaryBuffer_2<::Meta::Voice::Logging::CorrelationID,::Meta::Voice::Logging::CorrelationID>* const& Meta::Voice::Logging::VLogger::__cordl_internal_get__downStreamCorrelations() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____downStreamCorrelations;
}
constexpr void Meta::Voice::Logging::VLogger::__cordl_internal_set__downStreamCorrelations(::Meta::Voice::Logging::RingDictionaryBuffer_2<::Meta::Voice::Logging::CorrelationID,::Meta::Voice::Logging::CorrelationID>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____downStreamCorrelations = value;
}
constexpr ::Meta::Voice::Logging::ILogSink*& Meta::Voice::Logging::VLogger::__cordl_internal_get__logSink()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____logSink;
}
constexpr ::Meta::Voice::Logging::ILogSink* const& Meta::Voice::Logging::VLogger::__cordl_internal_get__logSink() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____logSink;
}
constexpr void Meta::Voice::Logging::VLogger::__cordl_internal_set__logSink(::Meta::Voice::Logging::ILogSink*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____logSink = value;
}
constexpr ::StringW& Meta::Voice::Logging::VLogger::__cordl_internal_get__category()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____category;
}
constexpr ::StringW const& Meta::Voice::Logging::VLogger::__cordl_internal_get__category() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____category;
}
constexpr void Meta::Voice::Logging::VLogger::__cordl_internal_set__category(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____category = value;
}
constexpr ::Meta::Voice::Logging::CorrelationID& Meta::Voice::Logging::VLogger::__cordl_internal_get__correlationID()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____correlationID;
}
constexpr ::Meta::Voice::Logging::CorrelationID const& Meta::Voice::Logging::VLogger::__cordl_internal_get__correlationID() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____correlationID;
}
constexpr void Meta::Voice::Logging::VLogger::__cordl_internal_set__correlationID(::Meta::Voice::Logging::CorrelationID  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____correlationID = value;
}
inline void Meta::Voice::Logging::VLogger::setStaticF_CorrelationIDThreadLocal(::System::Threading::ThreadLocal_1<::StringW>*  value)  {
::cordl_internals::setStaticField<::System::Threading::ThreadLocal_1<::StringW>*, "CorrelationIDThreadLocal", ::Meta::Voice::Logging::VLogger*>(std::forward<::System::Threading::ThreadLocal_1<::StringW>*>(value));
}
inline ::System::Threading::ThreadLocal_1<::StringW>* Meta::Voice::Logging::VLogger::getStaticF_CorrelationIDThreadLocal()  {
return ::cordl_internals::getStaticField<::System::Threading::ThreadLocal_1<::StringW>*, "CorrelationIDThreadLocal", ::Meta::Voice::Logging::VLogger*>();
}
inline void Meta::Voice::Logging::VLogger::setStaticF_LogBuffer(::Meta::Voice::Logging::RingDictionaryBuffer_2<::Meta::Voice::Logging::CorrelationID,::Meta::Voice::Logging::LogEntry>*  value)  {
::cordl_internals::setStaticField<::Meta::Voice::Logging::RingDictionaryBuffer_2<::Meta::Voice::Logging::CorrelationID,::Meta::Voice::Logging::LogEntry>*, "LogBuffer", ::Meta::Voice::Logging::VLogger*>(std::forward<::Meta::Voice::Logging::RingDictionaryBuffer_2<::Meta::Voice::Logging::CorrelationID,::Meta::Voice::Logging::LogEntry>*>(value));
}
inline ::Meta::Voice::Logging::RingDictionaryBuffer_2<::Meta::Voice::Logging::CorrelationID,::Meta::Voice::Logging::LogEntry>* Meta::Voice::Logging::VLogger::getStaticF_LogBuffer()  {
return ::cordl_internals::getStaticField<::Meta::Voice::Logging::RingDictionaryBuffer_2<::Meta::Voice::Logging::CorrelationID,::Meta::Voice::Logging::LogEntry>*, "LogBuffer", ::Meta::Voice::Logging::VLogger*>();
}
inline ::Meta::Voice::Logging::CorrelationID Meta::Voice::Logging::VLogger::get_CorrelationID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::VLogger*>(),
                        {"get_CorrelationID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::Logging::CorrelationID>(this, ___internal_method);
}
inline void Meta::Voice::Logging::VLogger::set_CorrelationID(::Meta::Voice::Logging::CorrelationID  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::VLogger*>(),
                        {"set_CorrelationID", {}, {::i2c::type_of<::Meta::Voice::Logging::CorrelationID>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::Voice::Logging::VLogger::_ctor(::StringW  category, ::Meta::Voice::Logging::ILogSink*  logSink)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::VLogger*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::Voice::Logging::ILogSink*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, category, logSink);
}
inline void Meta::Voice::Logging::VLogger::CorrelateIds(::Meta::Voice::Logging::CorrelationID  correlationId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::VLogger*>(),
                        {"CorrelateIds", {}, {::i2c::type_of<::Meta::Voice::Logging::CorrelationID>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, correlationId);
}
inline void Meta::Voice::Logging::VLogger::Verbose(::StringW  message, ::System::Object*  p1, ::System::Object*  p2, ::System::Object*  p3, ::System::Object*  p4, ::StringW  memberName, ::StringW  sourceFilePath, int32_t  sourceLineNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::VLogger*>(),
                        {"Verbose", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, p1, p2, p3, p4, memberName, sourceFilePath, sourceLineNumber);
}
inline void Meta::Voice::Logging::VLogger::Verbose(::StringW  message, /* [ParamArray] */ ::ArrayW<::System::Object*>  parameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::VLogger*>(),
                        {"Verbose", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, parameters);
}
inline void Meta::Voice::Logging::VLogger::Verbose(::Meta::Voice::Logging::CorrelationID  correlationId, ::StringW  message, /* [ParamArray] */ ::ArrayW<::System::Object*>  parameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::VLogger*>(),
                        {"Verbose", {}, {::i2c::type_of<::Meta::Voice::Logging::CorrelationID>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, correlationId, message, parameters);
}
inline void Meta::Voice::Logging::VLogger::Info(::StringW  message, ::System::Object*  p1, ::System::Object*  p2, ::System::Object*  p3, ::System::Object*  p4, ::StringW  memberName, ::StringW  sourceFilePath, int32_t  sourceLineNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::VLogger*>(),
                        {"Info", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, p1, p2, p3, p4, memberName, sourceFilePath, sourceLineNumber);
}
inline void Meta::Voice::Logging::VLogger::Debug(::StringW  message, ::System::Object*  p1, ::System::Object*  p2, ::System::Object*  p3, ::System::Object*  p4, ::StringW  memberName, ::StringW  sourceFilePath, int32_t  sourceLineNumber)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::VLogger*>(),
                        {"Debug", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, p1, p2, p3, p4, memberName, sourceFilePath, sourceLineNumber);
}
inline void Meta::Voice::Logging::VLogger::Warning(::StringW  message, /* [ParamArray] */ ::ArrayW<::System::Object*>  parameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::VLogger*>(),
                        {"Warning", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, parameters);
}
inline void Meta::Voice::Logging::VLogger::Error(::Meta::Voice::Logging::ErrorCode  errorCode, ::StringW  message, /* [ParamArray] */ ::ArrayW<::System::Object*>  parameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::VLogger*>(),
                        {"Error", {}, {::i2c::type_of<::Meta::Voice::Logging::ErrorCode>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, errorCode, message, parameters);
}
inline void Meta::Voice::Logging::VLogger::Error(::StringW  message, /* [ParamArray] */ ::ArrayW<::System::Object*>  parameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::VLogger*>(),
                        {"Error", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message, parameters);
}
inline void Meta::Voice::Logging::VLogger::Error(::System::Exception*  exception, ::StringW  message, /* [ParamArray] */ ::ArrayW<::System::Object*>  parameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::VLogger*>(),
                        {"Error", {}, {::i2c::type_of<::System::Exception*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, exception, message, parameters);
}
inline void Meta::Voice::Logging::VLogger::Correlate(::Meta::Voice::Logging::CorrelationID  newCorrelationId, ::Meta::Voice::Logging::CorrelationID  rootCorrelationId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::VLogger*>(),
                        {"Correlate", {}, {::i2c::type_of<::Meta::Voice::Logging::CorrelationID>(), ::i2c::type_of<::Meta::Voice::Logging::CorrelationID>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newCorrelationId, rootCorrelationId);
}
inline void Meta::Voice::Logging::VLogger::Log(::Meta::Voice::Logging::CorrelationID  correlationId, ::Meta::Voice::Logging::VLoggerVerbosity  verbosity, ::StringW  message, /* [ParamArray] */ ::ArrayW<::System::Object*>  parameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::VLogger*>(),
                        {"Log", {}, {::i2c::type_of<::Meta::Voice::Logging::CorrelationID>(), ::i2c::type_of<::Meta::Voice::Logging::VLoggerVerbosity>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, correlationId, verbosity, message, parameters);
}
inline void Meta::Voice::Logging::VLogger::Log(::Meta::Voice::Logging::CorrelationID  correlationId, ::Meta::Voice::Logging::VLoggerVerbosity  verbosity, ::System::Exception*  exception, ::Meta::Voice::Logging::ErrorCode  errorCode, ::StringW  message, /* [ParamArray] */ ::ArrayW<::System::Object*>  parameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::VLogger*>(),
                        {"Log", {}, {::i2c::type_of<::Meta::Voice::Logging::CorrelationID>(), ::i2c::type_of<::Meta::Voice::Logging::VLoggerVerbosity>(), ::i2c::type_of<::System::Exception*>(), ::i2c::type_of<::Meta::Voice::Logging::ErrorCode>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, correlationId, verbosity, exception, errorCode, message, parameters);
}
inline void Meta::Voice::Logging::VLogger::Log(::Meta::Voice::Logging::CorrelationID  correlationId, ::Meta::Voice::Logging::VLoggerVerbosity  verbosity, ::Meta::Voice::Logging::ErrorCode  errorCode, ::StringW  message, /* [ParamArray] */ ::ArrayW<::System::Object*>  parameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::VLogger*>(),
                        {"Log", {}, {::i2c::type_of<::Meta::Voice::Logging::CorrelationID>(), ::i2c::type_of<::Meta::Voice::Logging::VLoggerVerbosity>(), ::i2c::type_of<::Meta::Voice::Logging::ErrorCode>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, correlationId, verbosity, errorCode, message, parameters);
}
inline void Meta::Voice::Logging::VLogger::LogEntry(::Meta::Voice::Logging::LogEntry  logEntry)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::VLogger*>(),
                        {"LogEntry", {}, {::i2c::type_of<::Meta::Voice::Logging::LogEntry>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, logEntry);
}
inline bool Meta::Voice::Logging::VLogger::IsFiltered(::Meta::Voice::Logging::LogEntry  logEntry)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::VLogger*>(),
                        {"IsFiltered", {}, {::i2c::type_of<::Meta::Voice::Logging::LogEntry>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, logEntry);
}
inline bool Meta::Voice::Logging::VLogger::IsSuppressed(::Meta::Voice::Logging::LogEntry  logEntry)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::VLogger*>(),
                        {"IsSuppressed", {}, {::i2c::type_of<::Meta::Voice::Logging::LogEntry>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, logEntry);
}
inline void Meta::Voice::Logging::VLogger::Flush(::Meta::Voice::Logging::CorrelationID  correlationID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::VLogger*>(),
                        {"Flush", {}, {::i2c::type_of<::Meta::Voice::Logging::CorrelationID>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, correlationID);
}
inline ::System::Collections::Generic::List_1<::Meta::Voice::Logging::LogEntry>* Meta::Voice::Logging::VLogger::ExtractRelatedEntries(::Meta::Voice::Logging::CorrelationID  correlationID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::VLogger*>(),
                        {"ExtractRelatedEntries", {}, {::i2c::type_of<::Meta::Voice::Logging::CorrelationID>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Meta::Voice::Logging::LogEntry>*>(this, ___internal_method, correlationID);
}
inline void Meta::Voice::Logging::VLogger::ExtractDownstreamRelatedEntries(::Meta::Voice::Logging::CorrelationID  correlationID, ::by_ref<::System::Collections::Generic::List_1<::Meta::Voice::Logging::LogEntry>*>  entries)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::VLogger*>(),
                        {"ExtractDownstreamRelatedEntries", {}, {::i2c::type_of<::Meta::Voice::Logging::CorrelationID>(), ::i2c::type_of<::by_ref<::System::Collections::Generic::List_1<::Meta::Voice::Logging::LogEntry>*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, correlationID, entries);
}
inline void Meta::Voice::Logging::VLogger::Write(::Meta::Voice::Logging::LogEntry  logEntry, bool  force)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::VLogger*>(),
                        {"Write", {}, {::i2c::type_of<::Meta::Voice::Logging::LogEntry>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, logEntry, force);
}
inline ::Meta::Voice::Logging::VLogger* Meta::Voice::Logging::VLogger::New_ctor(::StringW  category, ::Meta::Voice::Logging::ILogSink*  logSink)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::Voice::Logging::VLogger*>(category, logSink));
}
/// @brief Convert operator to "::Meta::Voice::Logging::IVLogger"
constexpr  Meta::Voice::Logging::VLogger::operator ::Meta::Voice::Logging::IVLogger*() noexcept {
return static_cast<::Meta::Voice::Logging::IVLogger*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::Voice::Logging::IVLogger"
constexpr ::Meta::Voice::Logging::IVLogger* Meta::Voice::Logging::VLogger::i___Meta__Voice__Logging__IVLogger() noexcept {
return static_cast<::Meta::Voice::Logging::IVLogger*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Meta::Voice::Logging::ICoreLogger"
constexpr  Meta::Voice::Logging::VLogger::operator ::Meta::Voice::Logging::ICoreLogger*() noexcept {
return static_cast<::Meta::Voice::Logging::ICoreLogger*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::Voice::Logging::ICoreLogger"
constexpr ::Meta::Voice::Logging::ICoreLogger* Meta::Voice::Logging::VLogger::i___Meta__Voice__Logging__ICoreLogger() noexcept {
return static_cast<::Meta::Voice::Logging::ICoreLogger*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Meta::Voice::Logging::VLogger::VLogger()   {
}
