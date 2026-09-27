#pragma once
// IWYU pragma private; include "Modio/ModioLog.hpp"
#include "Modio/zzzz__LogLevel_impl.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Modio/zzzz__ModioLog_def.hpp"
#include "Modio/zzzz__IModioLogHandler_def.hpp"
#include "Modio/zzzz__LogLevel_def.hpp"
#include "Modio/zzzz__ModioLog_def.hpp"
#include "Modio/zzzz__ModioSettings_def.hpp"
#include "System/zzzz__AsyncCallback_def.hpp"
#include "System/zzzz__IAsyncResult_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Modio::ModioLog.get_Error
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::ModioLog* (*)()>(&::Modio::ModioLog::get_Error)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa01a9a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModioLog*>(),
                        {"get_Error", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::ModioLog.set_Error
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Modio::ModioLog*)>(&::Modio::ModioLog::set_Error)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa01a9fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModioLog*>(),
                        {"set_Error", {}, {::i2c::type_of<::Modio::ModioLog*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::ModioLog.get_Warning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::ModioLog* (*)()>(&::Modio::ModioLog::get_Warning)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa01aa64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModioLog*>(),
                        {"get_Warning", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::ModioLog.set_Warning
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Modio::ModioLog*)>(&::Modio::ModioLog::set_Warning)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa01aabc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModioLog*>(),
                        {"set_Warning", {}, {::i2c::type_of<::Modio::ModioLog*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::ModioLog.get_Message
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::ModioLog* (*)()>(&::Modio::ModioLog::get_Message)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa01ab1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModioLog*>(),
                        {"get_Message", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::ModioLog.set_Message
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Modio::ModioLog*)>(&::Modio::ModioLog::set_Message)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa01ab74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModioLog*>(),
                        {"set_Message", {}, {::i2c::type_of<::Modio::ModioLog*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::ModioLog.get_Verbose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::ModioLog* (*)()>(&::Modio::ModioLog::get_Verbose)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa01abd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModioLog*>(),
                        {"get_Verbose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::ModioLog.set_Verbose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Modio::ModioLog*)>(&::Modio::ModioLog::set_Verbose)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa01ac2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModioLog*>(),
                        {"set_Verbose", {}, {::i2c::type_of<::Modio::ModioLog*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::ModioLog.UpdateLogHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Modio::IModioLogHandler*)>(&::Modio::ModioLog::UpdateLogHandler)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa01b310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModioLog*>(),
                        {"UpdateLogHandler", {}, {::i2c::type_of<::Modio::IModioLogHandler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::ModioLog.GetLogLevelFromSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Modio::ModioSettings*)>(&::Modio::ModioLog::GetLogLevelFromSettings)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa01b370;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModioLog*>(),
                        {"GetLogLevelFromSettings", {}, {::i2c::type_of<::Modio::ModioSettings*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::ModioLog.ApplyLogLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Modio::LogLevel)>(&::Modio::ModioLog::ApplyLogLevel)> {
  constexpr static std::size_t size = 0x388;
  constexpr static std::size_t addrs = 0xa01af88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModioLog*>(),
                        {"ApplyLogLevel", {}, {::i2c::type_of<::Modio::LogLevel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::ModioLog._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::ModioLog::*)(::Modio::LogLevel)>(&::Modio::ModioLog::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa01b3d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModioLog*>(),
                        {".ctor", {}, {::i2c::type_of<::Modio::LogLevel>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::ModioLog.Log
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::ModioLog::*)(::System::Object*)>(&::Modio::ModioLog::Log)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0xa008f10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModioLog*>(),
                        {"Log", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::ModioLog.GetLogLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Modio::ModioLog* (*)(::Modio::LogLevel)>(&::Modio::ModioLog::GetLogLevel)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0xa01b3f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModioLog*>(),
                        {"GetLogLevel", {}, {::i2c::type_of<::Modio::LogLevel>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Modio::LogLevel& Modio::ModioLog::__cordl_internal_get__logLevel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____logLevel;
}
constexpr ::Modio::LogLevel const& Modio::ModioLog::__cordl_internal_get__logLevel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____logLevel;
}
constexpr void Modio::ModioLog::__cordl_internal_set__logLevel(::Modio::LogLevel  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____logLevel = value;
}
inline void Modio::ModioLog::setStaticF__Error_k__BackingField(::Modio::ModioLog*  value)  {
::cordl_internals::setStaticField<::Modio::ModioLog*, "<Error>k__BackingField", ::Modio::ModioLog*>(std::forward<::Modio::ModioLog*>(value));
}
inline ::Modio::ModioLog* Modio::ModioLog::getStaticF__Error_k__BackingField()  {
return ::cordl_internals::getStaticField<::Modio::ModioLog*, "<Error>k__BackingField", ::Modio::ModioLog*>();
}
inline void Modio::ModioLog::setStaticF__Warning_k__BackingField(::Modio::ModioLog*  value)  {
::cordl_internals::setStaticField<::Modio::ModioLog*, "<Warning>k__BackingField", ::Modio::ModioLog*>(std::forward<::Modio::ModioLog*>(value));
}
inline ::Modio::ModioLog* Modio::ModioLog::getStaticF__Warning_k__BackingField()  {
return ::cordl_internals::getStaticField<::Modio::ModioLog*, "<Warning>k__BackingField", ::Modio::ModioLog*>();
}
inline void Modio::ModioLog::setStaticF__Message_k__BackingField(::Modio::ModioLog*  value)  {
::cordl_internals::setStaticField<::Modio::ModioLog*, "<Message>k__BackingField", ::Modio::ModioLog*>(std::forward<::Modio::ModioLog*>(value));
}
inline ::Modio::ModioLog* Modio::ModioLog::getStaticF__Message_k__BackingField()  {
return ::cordl_internals::getStaticField<::Modio::ModioLog*, "<Message>k__BackingField", ::Modio::ModioLog*>();
}
inline void Modio::ModioLog::setStaticF__Verbose_k__BackingField(::Modio::ModioLog*  value)  {
::cordl_internals::setStaticField<::Modio::ModioLog*, "<Verbose>k__BackingField", ::Modio::ModioLog*>(std::forward<::Modio::ModioLog*>(value));
}
inline ::Modio::ModioLog* Modio::ModioLog::getStaticF__Verbose_k__BackingField()  {
return ::cordl_internals::getStaticField<::Modio::ModioLog*, "<Verbose>k__BackingField", ::Modio::ModioLog*>();
}
inline void Modio::ModioLog::setStaticF__logHandler(::Modio::IModioLogHandler*  value)  {
::cordl_internals::setStaticField<::Modio::IModioLogHandler*, "_logHandler", ::Modio::ModioLog*>(std::forward<::Modio::IModioLogHandler*>(value));
}
inline ::Modio::IModioLogHandler* Modio::ModioLog::getStaticF__logHandler()  {
return ::cordl_internals::getStaticField<::Modio::IModioLogHandler*, "_logHandler", ::Modio::ModioLog*>();
}
inline ::Modio::ModioLog* Modio::ModioLog::get_Error()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModioLog*>(),
                        {"get_Error", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::ModioLog*>(nullptr, ___internal_method);
}
inline void Modio::ModioLog::set_Error(::Modio::ModioLog*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModioLog*>(),
                        {"set_Error", {}, {::i2c::type_of<::Modio::ModioLog*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::Modio::ModioLog* Modio::ModioLog::get_Warning()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModioLog*>(),
                        {"get_Warning", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::ModioLog*>(nullptr, ___internal_method);
}
inline void Modio::ModioLog::set_Warning(::Modio::ModioLog*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModioLog*>(),
                        {"set_Warning", {}, {::i2c::type_of<::Modio::ModioLog*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::Modio::ModioLog* Modio::ModioLog::get_Message()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModioLog*>(),
                        {"get_Message", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::ModioLog*>(nullptr, ___internal_method);
}
inline void Modio::ModioLog::set_Message(::Modio::ModioLog*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModioLog*>(),
                        {"set_Message", {}, {::i2c::type_of<::Modio::ModioLog*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::Modio::ModioLog* Modio::ModioLog::get_Verbose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModioLog*>(),
                        {"get_Verbose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::ModioLog*>(nullptr, ___internal_method);
}
inline void Modio::ModioLog::set_Verbose(::Modio::ModioLog*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModioLog*>(),
                        {"set_Verbose", {}, {::i2c::type_of<::Modio::ModioLog*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void Modio::ModioLog::UpdateLogHandler(::Modio::IModioLogHandler*  logHandler)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModioLog*>(),
                        {"UpdateLogHandler", {}, {::i2c::type_of<::Modio::IModioLogHandler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, logHandler);
}
inline void Modio::ModioLog::GetLogLevelFromSettings(::Modio::ModioSettings*  settings)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModioLog*>(),
                        {"GetLogLevelFromSettings", {}, {::i2c::type_of<::Modio::ModioSettings*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, settings);
}
inline void Modio::ModioLog::ApplyLogLevel(::Modio::LogLevel  logLevel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModioLog*>(),
                        {"ApplyLogLevel", {}, {::i2c::type_of<::Modio::LogLevel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, logLevel);
}
inline void Modio::ModioLog::_ctor(::Modio::LogLevel  logLevel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModioLog*>(),
                        {".ctor", {}, {::i2c::type_of<::Modio::LogLevel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, logLevel);
}
inline void Modio::ModioLog::Log(::System::Object*  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModioLog*>(),
                        {"Log", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, message);
}
inline ::Modio::ModioLog* Modio::ModioLog::GetLogLevel(::Modio::LogLevel  logLevel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModioLog*>(),
                        {"GetLogLevel", {}, {::i2c::type_of<::Modio::LogLevel>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Modio::ModioLog*>(nullptr, ___internal_method, logLevel);
}
inline ::Modio::ModioLog* Modio::ModioLog::New_ctor(::Modio::LogLevel  logLevel)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::ModioLog*>(logLevel));
}
// Ctor Parameters []
constexpr ::Modio::ModioLog::ModioLog()   {
}
//  Writing Method size for method: ::Modio::ModioLog_LogHandler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::ModioLog_LogHandler::*)(::System::Object*, ::System::IntPtr)>(&::Modio::ModioLog_LogHandler::_ctor)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xa01b588;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModioLog_LogHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::ModioLog_LogHandler.Invoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::ModioLog_LogHandler::*)(::Modio::LogLevel, ::System::Object*)>(&::Modio::ModioLog_LogHandler::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa01b628;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::ModioLog_LogHandler*>(),
                    {::i2c::class_of<::Modio::ModioLog_LogHandler*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::ModioLog_LogHandler.BeginInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IAsyncResult* (::Modio::ModioLog_LogHandler::*)(::Modio::LogLevel, ::System::Object*, ::System::AsyncCallback*, ::System::Object*)>(&::Modio::ModioLog_LogHandler::BeginInvoke)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xa01b63c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::ModioLog_LogHandler*>(),
                    {::i2c::class_of<::Modio::ModioLog_LogHandler*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::ModioLog_LogHandler.EndInvoke
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::ModioLog_LogHandler::*)(::System::IAsyncResult*)>(&::Modio::ModioLog_LogHandler::EndInvoke)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa01b6d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::ModioLog_LogHandler*>(),
                    {::i2c::class_of<::Modio::ModioLog_LogHandler*>(), 15}
                ));
    return ___internal_method;
  }
};
inline void Modio::ModioLog_LogHandler::_ctor(::System::Object*  object, ::System::IntPtr  method)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModioLog_LogHandler*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void Modio::ModioLog_LogHandler::Invoke(::Modio::LogLevel  logLevel, ::System::Object*  message)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::ModioLog_LogHandler*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, logLevel, message);
}
inline ::System::IAsyncResult* Modio::ModioLog_LogHandler::BeginInvoke(::Modio::LogLevel  logLevel, ::System::Object*  message, ::System::AsyncCallback*  callback, ::System::Object*  object)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::ModioLog_LogHandler*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::IAsyncResult*>(this, ___internal_method, logLevel, message, callback, object);
}
inline void Modio::ModioLog_LogHandler::EndInvoke(::System::IAsyncResult*  result)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::ModioLog_LogHandler*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, result);
}
inline ::Modio::ModioLog_LogHandler* Modio::ModioLog_LogHandler::New_ctor(::System::Object*  object, ::System::IntPtr  method)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::ModioLog_LogHandler*>(object, method));
}
// Ctor Parameters []
constexpr ::Modio::ModioLog_LogHandler::ModioLog_LogHandler()   {
}
