#pragma once
// IWYU pragma private; include "Meta/Voice/Logging/LogEntry.hpp"
#include "Meta/Voice/Logging/zzzz__CorrelationID_impl.hpp"
#include "Meta/Voice/Logging/zzzz__ErrorCode_impl.hpp"
#include "Meta/Voice/Logging/zzzz__VLoggerVerbosity_impl.hpp"
#include "System/zzzz__DateTime_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/Voice/Logging/zzzz__LogEntry_def.hpp"
#include "Meta/Voice/Logging/zzzz__CorrelationID_def.hpp"
#include "Meta/Voice/Logging/zzzz__ErrorCode_def.hpp"
#include "Meta/Voice/Logging/zzzz__LoggingContext_def.hpp"
#include "Meta/Voice/Logging/zzzz__VLoggerVerbosity_def.hpp"
#include "System/zzzz__DateTime_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__IComparable_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Meta::Voice::Logging::LogEntry.get_Category
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::Voice::Logging::LogEntry::*)()>(&::Meta::Voice::Logging::LogEntry::get_Category)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e36dc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LogEntry>(),
                        {"get_Category", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::LogEntry.get_TimeStamp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::DateTime (::Meta::Voice::Logging::LogEntry::*)()>(&::Meta::Voice::Logging::LogEntry::get_TimeStamp)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e36dc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LogEntry>(),
                        {"get_TimeStamp", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::LogEntry.get_Prefix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::Voice::Logging::LogEntry::*)()>(&::Meta::Voice::Logging::LogEntry::get_Prefix)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e36dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LogEntry>(),
                        {"get_Prefix", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::LogEntry.set_Prefix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Logging::LogEntry::*)(::StringW)>(&::Meta::Voice::Logging::LogEntry::set_Prefix)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e36dd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LogEntry>(),
                        {"set_Prefix", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::LogEntry.get_Message
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::Voice::Logging::LogEntry::*)()>(&::Meta::Voice::Logging::LogEntry::get_Message)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e36de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LogEntry>(),
                        {"get_Message", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::LogEntry.set_Message
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Logging::LogEntry::*)(::StringW)>(&::Meta::Voice::Logging::LogEntry::set_Message)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e36de8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LogEntry>(),
                        {"set_Message", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::LogEntry.get_Parameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Object*> (::Meta::Voice::Logging::LogEntry::*)()>(&::Meta::Voice::Logging::LogEntry::get_Parameters)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e36df0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LogEntry>(),
                        {"get_Parameters", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::LogEntry.get_CorrelationID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::Voice::Logging::CorrelationID (::Meta::Voice::Logging::LogEntry::*)()>(&::Meta::Voice::Logging::LogEntry::get_CorrelationID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e36df8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LogEntry>(),
                        {"get_CorrelationID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::LogEntry.get_Verbosity
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::Voice::Logging::VLoggerVerbosity (::Meta::Voice::Logging::LogEntry::*)()>(&::Meta::Voice::Logging::LogEntry::get_Verbosity)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e36e00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LogEntry>(),
                        {"get_Verbosity", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::LogEntry.get_Exception
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Exception* (::Meta::Voice::Logging::LogEntry::*)()>(&::Meta::Voice::Logging::LogEntry::get_Exception)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e36e08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LogEntry>(),
                        {"get_Exception", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::LogEntry.get_ErrorCode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::Meta::Voice::Logging::ErrorCode> (::Meta::Voice::Logging::LogEntry::*)()>(&::Meta::Voice::Logging::LogEntry::get_ErrorCode)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x9e36e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LogEntry>(),
                        {"get_ErrorCode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::LogEntry.get_Context
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::Voice::Logging::LoggingContext* (::Meta::Voice::Logging::LogEntry::*)()>(&::Meta::Voice::Logging::LogEntry::get_Context)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e36e1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LogEntry>(),
                        {"get_Context", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::LogEntry._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Logging::LogEntry::*)(::StringW, ::Meta::Voice::Logging::VLoggerVerbosity, ::Meta::Voice::Logging::CorrelationID, ::Meta::Voice::Logging::LoggingContext*, ::StringW, ::StringW, ::ArrayW<::System::Object*>)>(&::Meta::Voice::Logging::LogEntry::_ctor)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x9e36e24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LogEntry>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::Voice::Logging::VLoggerVerbosity>(), ::i2c::type_of<::Meta::Voice::Logging::CorrelationID>(), ::i2c::type_of<::Meta::Voice::Logging::LoggingContext*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::LogEntry._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Logging::LogEntry::*)(::StringW, ::Meta::Voice::Logging::VLoggerVerbosity, ::Meta::Voice::Logging::CorrelationID, ::Meta::Voice::Logging::ErrorCode, ::System::Exception*, ::Meta::Voice::Logging::LoggingContext*, ::StringW, ::StringW, ::ArrayW<::System::Object*>)>(&::Meta::Voice::Logging::LogEntry::_ctor)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x9e36f88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LogEntry>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::Voice::Logging::VLoggerVerbosity>(), ::i2c::type_of<::Meta::Voice::Logging::CorrelationID>(), ::i2c::type_of<::Meta::Voice::Logging::ErrorCode>(), ::i2c::type_of<::System::Exception*>(), ::i2c::type_of<::Meta::Voice::Logging::LoggingContext*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::LogEntry._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Logging::LogEntry::*)(::StringW, ::Meta::Voice::Logging::VLoggerVerbosity, ::Meta::Voice::Logging::CorrelationID, ::Meta::Voice::Logging::ErrorCode, ::Meta::Voice::Logging::LoggingContext*, ::StringW, ::StringW, ::ArrayW<::System::Object*>)>(&::Meta::Voice::Logging::LogEntry::_ctor)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x9e370e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LogEntry>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::Voice::Logging::VLoggerVerbosity>(), ::i2c::type_of<::Meta::Voice::Logging::CorrelationID>(), ::i2c::type_of<::Meta::Voice::Logging::ErrorCode>(), ::i2c::type_of<::Meta::Voice::Logging::LoggingContext*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::LogEntry.ToString
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::Meta::Voice::Logging::LogEntry::*)()>(&::Meta::Voice::Logging::LogEntry::ToString)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x9e37238;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Logging::LogEntry>(),
                    {::i2c::class_of<::Meta::Voice::Logging::LogEntry>(), 3}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::LogEntry.CompareTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::Voice::Logging::LogEntry::*)(::Meta::Voice::Logging::LogEntry)>(&::Meta::Voice::Logging::LogEntry::CompareTo)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x9e372dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LogEntry>(),
                        {"CompareTo", {}, {::i2c::type_of<::Meta::Voice::Logging::LogEntry>()}}
                    )));
    return ___internal_method;
  }
};
inline ::StringW Meta::Voice::Logging::LogEntry::get_Category()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LogEntry>(),
                        {"get_Category", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline ::System::DateTime Meta::Voice::Logging::LogEntry::get_TimeStamp()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LogEntry>(),
                        {"get_TimeStamp", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::DateTime>(*this, ___internal_method);
}
inline ::StringW Meta::Voice::Logging::LogEntry::get_Prefix()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LogEntry>(),
                        {"get_Prefix", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline void Meta::Voice::Logging::LogEntry::set_Prefix(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LogEntry>(),
                        {"set_Prefix", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::StringW Meta::Voice::Logging::LogEntry::get_Message()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LogEntry>(),
                        {"get_Message", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline void Meta::Voice::Logging::LogEntry::set_Message(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LogEntry>(),
                        {"set_Message", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::ArrayW<::System::Object*> Meta::Voice::Logging::LogEntry::get_Parameters()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LogEntry>(),
                        {"get_Parameters", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Object*>>(*this, ___internal_method);
}
inline ::Meta::Voice::Logging::CorrelationID Meta::Voice::Logging::LogEntry::get_CorrelationID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LogEntry>(),
                        {"get_CorrelationID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::Logging::CorrelationID>(*this, ___internal_method);
}
inline ::Meta::Voice::Logging::VLoggerVerbosity Meta::Voice::Logging::LogEntry::get_Verbosity()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LogEntry>(),
                        {"get_Verbosity", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::Logging::VLoggerVerbosity>(*this, ___internal_method);
}
inline ::System::Exception* Meta::Voice::Logging::LogEntry::get_Exception()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LogEntry>(),
                        {"get_Exception", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Exception*>(*this, ___internal_method);
}
inline ::System::Nullable_1<::Meta::Voice::Logging::ErrorCode> Meta::Voice::Logging::LogEntry::get_ErrorCode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LogEntry>(),
                        {"get_ErrorCode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::Meta::Voice::Logging::ErrorCode>>(*this, ___internal_method);
}
inline ::Meta::Voice::Logging::LoggingContext* Meta::Voice::Logging::LogEntry::get_Context()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LogEntry>(),
                        {"get_Context", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::Logging::LoggingContext*>(*this, ___internal_method);
}
inline void Meta::Voice::Logging::LogEntry::_ctor(::StringW  category, ::Meta::Voice::Logging::VLoggerVerbosity  verbosity, ::Meta::Voice::Logging::CorrelationID  correlationId, ::Meta::Voice::Logging::LoggingContext*  context, ::StringW  prefix, ::StringW  message, /* [ParamArray] */ ::ArrayW<::System::Object*>  parameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LogEntry>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::Voice::Logging::VLoggerVerbosity>(), ::i2c::type_of<::Meta::Voice::Logging::CorrelationID>(), ::i2c::type_of<::Meta::Voice::Logging::LoggingContext*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, category, verbosity, correlationId, context, prefix, message, parameters);
}
inline void Meta::Voice::Logging::LogEntry::_ctor(::StringW  category, ::Meta::Voice::Logging::VLoggerVerbosity  verbosity, ::Meta::Voice::Logging::CorrelationID  correlationId, ::Meta::Voice::Logging::ErrorCode  errorCode, ::System::Exception*  exception, ::Meta::Voice::Logging::LoggingContext*  context, ::StringW  prefix, ::StringW  message, /* [ParamArray] */ ::ArrayW<::System::Object*>  parameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LogEntry>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::Voice::Logging::VLoggerVerbosity>(), ::i2c::type_of<::Meta::Voice::Logging::CorrelationID>(), ::i2c::type_of<::Meta::Voice::Logging::ErrorCode>(), ::i2c::type_of<::System::Exception*>(), ::i2c::type_of<::Meta::Voice::Logging::LoggingContext*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, category, verbosity, correlationId, errorCode, exception, context, prefix, message, parameters);
}
inline void Meta::Voice::Logging::LogEntry::_ctor(::StringW  category, ::Meta::Voice::Logging::VLoggerVerbosity  verbosity, ::Meta::Voice::Logging::CorrelationID  correlationId, ::Meta::Voice::Logging::ErrorCode  errorCode, ::Meta::Voice::Logging::LoggingContext*  context, ::StringW  prefix, ::StringW  message, /* [ParamArray] */ ::ArrayW<::System::Object*>  parameters)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LogEntry>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::Voice::Logging::VLoggerVerbosity>(), ::i2c::type_of<::Meta::Voice::Logging::CorrelationID>(), ::i2c::type_of<::Meta::Voice::Logging::ErrorCode>(), ::i2c::type_of<::Meta::Voice::Logging::LoggingContext*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::ArrayW<::System::Object*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, category, verbosity, correlationId, errorCode, context, prefix, message, parameters);
}
inline ::StringW Meta::Voice::Logging::LogEntry::ToString()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Logging::LogEntry>(), 3}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline int32_t Meta::Voice::Logging::LogEntry::CompareTo(::Meta::Voice::Logging::LogEntry  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LogEntry>(),
                        {"CompareTo", {}, {::i2c::type_of<::Meta::Voice::Logging::LogEntry>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, other);
}
/// @brief Convert operator to "::System::IComparable_1<::Meta::Voice::Logging::LogEntry>"
constexpr  Meta::Voice::Logging::LogEntry::operator ::System::IComparable_1<::Meta::Voice::Logging::LogEntry>*()  {
return static_cast<::System::IComparable_1<::Meta::Voice::Logging::LogEntry>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IComparable_1<::Meta::Voice::Logging::LogEntry>"
constexpr ::System::IComparable_1<::Meta::Voice::Logging::LogEntry>* Meta::Voice::Logging::LogEntry::i___System__IComparable_1___Meta__Voice__Logging__LogEntry_()  {
return static_cast<::System::IComparable_1<::Meta::Voice::Logging::LogEntry>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_Category_k__BackingField", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_TimeStamp_k__BackingField", ty: "::System::DateTime", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_Prefix_k__BackingField", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_Message_k__BackingField", ty: "::StringW", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_Parameters_k__BackingField", ty: "::ArrayW<::System::Object*>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_CorrelationID_k__BackingField", ty: "::Meta::Voice::Logging::CorrelationID", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_Verbosity_k__BackingField", ty: "::Meta::Voice::Logging::VLoggerVerbosity", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_Exception_k__BackingField", ty: "::System::Exception*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_ErrorCode_k__BackingField", ty: "::System::Nullable_1<::Meta::Voice::Logging::ErrorCode>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_Context_k__BackingField", ty: "::Meta::Voice::Logging::LoggingContext*", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::Meta::Voice::Logging::LogEntry::LogEntry(::StringW  _Category_k__BackingField, ::System::DateTime  _TimeStamp_k__BackingField, ::StringW  _Prefix_k__BackingField, ::StringW  _Message_k__BackingField, ::ArrayW<::System::Object*>  _Parameters_k__BackingField, ::Meta::Voice::Logging::CorrelationID  _CorrelationID_k__BackingField, ::Meta::Voice::Logging::VLoggerVerbosity  _Verbosity_k__BackingField, ::System::Exception*  _Exception_k__BackingField, ::System::Nullable_1<::Meta::Voice::Logging::ErrorCode>  _ErrorCode_k__BackingField, ::Meta::Voice::Logging::LoggingContext*  _Context_k__BackingField) noexcept  {
this->_Category_k__BackingField = _Category_k__BackingField;
this->_TimeStamp_k__BackingField = _TimeStamp_k__BackingField;
this->_Prefix_k__BackingField = _Prefix_k__BackingField;
this->_Message_k__BackingField = _Message_k__BackingField;
this->_Parameters_k__BackingField = _Parameters_k__BackingField;
this->_CorrelationID_k__BackingField = _CorrelationID_k__BackingField;
this->_Verbosity_k__BackingField = _Verbosity_k__BackingField;
this->_Exception_k__BackingField = _Exception_k__BackingField;
this->_ErrorCode_k__BackingField = _ErrorCode_k__BackingField;
this->_Context_k__BackingField = _Context_k__BackingField;
}
// Ctor Parameters []
constexpr ::Meta::Voice::Logging::LogEntry::LogEntry()   {
}
