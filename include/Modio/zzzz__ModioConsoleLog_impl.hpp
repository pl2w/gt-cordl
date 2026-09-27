#pragma once
// IWYU pragma private; include "Modio/ModioConsoleLog.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Modio/zzzz__ModioConsoleLog_def.hpp"
#include "Modio/zzzz__IModioLogHandler_def.hpp"
#include "Modio/zzzz__LogLevel_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Modio::ModioConsoleLog._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::ModioConsoleLog::*)()>(&::Modio::ModioConsoleLog::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa01a6dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModioConsoleLog*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::ModioConsoleLog._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::ModioConsoleLog::*)(::StringW)>(&::Modio::ModioConsoleLog::_ctor)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xa01a724;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModioConsoleLog*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::ModioConsoleLog.LogHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::ModioConsoleLog::*)(::Modio::LogLevel, ::System::Object*)>(&::Modio::ModioConsoleLog::LogHandler)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0xa01a79c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModioConsoleLog*>(),
                        {"LogHandler", {}, {::i2c::type_of<::Modio::LogLevel>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Modio::ModioConsoleLog::__cordl_internal_get__logPrefix()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____logPrefix;
}
constexpr ::StringW const& Modio::ModioConsoleLog::__cordl_internal_get__logPrefix() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____logPrefix;
}
constexpr void Modio::ModioConsoleLog::__cordl_internal_set__logPrefix(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____logPrefix = value;
}
inline void Modio::ModioConsoleLog::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModioConsoleLog*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::ModioConsoleLog::_ctor(::StringW  logPrefix)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModioConsoleLog*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, logPrefix);
}
inline void Modio::ModioConsoleLog::LogHandler(::Modio::LogLevel  logLevel, ::System::Object*  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::ModioConsoleLog*>(),
                        {"LogHandler", {}, {::i2c::type_of<::Modio::LogLevel>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, logLevel, message);
}
inline ::Modio::ModioConsoleLog* Modio::ModioConsoleLog::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::ModioConsoleLog*>());
}
inline ::Modio::ModioConsoleLog* Modio::ModioConsoleLog::New_ctor(::StringW  logPrefix)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::ModioConsoleLog*>(logPrefix));
}
/// @brief Convert operator to "::Modio::IModioLogHandler"
constexpr  Modio::ModioConsoleLog::operator ::Modio::IModioLogHandler*() noexcept {
return static_cast<::Modio::IModioLogHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::Modio::IModioLogHandler"
constexpr ::Modio::IModioLogHandler* Modio::ModioConsoleLog::i___Modio__IModioLogHandler() noexcept {
return static_cast<::Modio::IModioLogHandler*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Modio::ModioConsoleLog::ModioConsoleLog()   {
}
