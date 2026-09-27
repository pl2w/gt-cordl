#pragma once
// IWYU pragma private; include "Meta/WitAi/VLog.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/WitAi/zzzz__VLog_def.hpp"
#include "Meta/Voice/Logging/zzzz__ILoggerRegistry_def.hpp"
#include "Meta/Voice/Logging/zzzz__VLoggerVerbosity_def.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::VLog.get_SuppressLogs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Meta::WitAi::VLog::get_SuppressLogs)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x9e3c744;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::VLog*>(),
                        {"get_SuppressLogs", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::VLog.I
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*)>(&::Meta::WitAi::VLog::I)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x9e3c79c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::VLog*>(),
                        {"I", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::VLog.D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*)>(&::Meta::WitAi::VLog::D)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x9e3cc78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::VLog*>(),
                        {"D", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::VLog.W
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*, ::System::Exception*)>(&::Meta::WitAi::VLog::W)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x9e3ccd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::VLog*>(),
                        {"W", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Exception*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::VLog.W
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::System::Object*, ::System::Exception*)>(&::Meta::WitAi::VLog::W)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x9e3cd44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::VLog*>(),
                        {"W", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Exception*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::VLog.E
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Object*, ::System::Exception*)>(&::Meta::WitAi::VLog::E)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x9e3cdb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::VLog*>(),
                        {"E", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Exception*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::VLog.E
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::System::Object*, ::System::Exception*)>(&::Meta::WitAi::VLog::E)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x9e3ce20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::VLog*>(),
                        {"E", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Exception*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::VLog.Log
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Meta::Voice::Logging::VLoggerVerbosity, ::StringW, ::System::Object*, ::System::Exception*)>(&::Meta::WitAi::VLog::Log)> {
  constexpr static std::size_t size = 0x47c;
  constexpr static std::size_t addrs = 0x9e3c7fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::VLog*>(),
                        {"Log", {}, {::i2c::type_of<::Meta::Voice::Logging::VLoggerVerbosity>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Exception*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::WitAi::VLog.GetCallingCategory
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::Meta::WitAi::VLog::GetCallingCategory)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x9e3ce90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::VLog*>(),
                        {"GetCallingCategory", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void Meta::WitAi::VLog::setStaticF_LoggerRegistry(::Meta::Voice::Logging::ILoggerRegistry*  value)  {
::cordl_internals::setStaticField<::Meta::Voice::Logging::ILoggerRegistry*, "LoggerRegistry", ::Meta::WitAi::VLog*>(std::forward<::Meta::Voice::Logging::ILoggerRegistry*>(value));
}
inline ::Meta::Voice::Logging::ILoggerRegistry* Meta::WitAi::VLog::getStaticF_LoggerRegistry()  {
return ::cordl_internals::getStaticField<::Meta::Voice::Logging::ILoggerRegistry*, "LoggerRegistry", ::Meta::WitAi::VLog*>();
}
inline void Meta::WitAi::VLog::setStaticF__SuppressLogs_k__BackingField(bool  value)  {
::cordl_internals::setStaticField<bool, "<SuppressLogs>k__BackingField", ::Meta::WitAi::VLog*>(std::forward<bool>(value));
}
inline bool Meta::WitAi::VLog::getStaticF__SuppressLogs_k__BackingField()  {
return ::cordl_internals::getStaticField<bool, "<SuppressLogs>k__BackingField", ::Meta::WitAi::VLog*>();
}
inline bool Meta::WitAi::VLog::get_SuppressLogs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::VLog*>(),
                        {"get_SuppressLogs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void Meta::WitAi::VLog::I(::System::Object*  log)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::VLog*>(),
                        {"I", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, log);
}
inline void Meta::WitAi::VLog::D(::System::Object*  log)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::VLog*>(),
                        {"D", {}, {::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, log);
}
inline void Meta::WitAi::VLog::W(::System::Object*  log, ::System::Exception*  e)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::VLog*>(),
                        {"W", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, log, e);
}
inline void Meta::WitAi::VLog::W(::StringW  logCategory, ::System::Object*  log, ::System::Exception*  e)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::VLog*>(),
                        {"W", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, logCategory, log, e);
}
inline void Meta::WitAi::VLog::E(::System::Object*  log, ::System::Exception*  e)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::VLog*>(),
                        {"E", {}, {::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, log, e);
}
inline void Meta::WitAi::VLog::E(::StringW  logCategory, ::System::Object*  log, ::System::Exception*  e)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::VLog*>(),
                        {"E", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, logCategory, log, e);
}
inline void Meta::WitAi::VLog::Log(::Meta::Voice::Logging::VLoggerVerbosity  logType, ::StringW  logCategory, ::System::Object*  log, ::System::Exception*  exception)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::VLog*>(),
                        {"Log", {}, {::i2c::type_of<::Meta::Voice::Logging::VLoggerVerbosity>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Exception*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, logType, logCategory, log, exception);
}
inline ::StringW Meta::WitAi::VLog::GetCallingCategory()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::WitAi::VLog*>(),
                        {"GetCallingCategory", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Meta::WitAi::VLog::VLog()   {
}
