#pragma once
// IWYU pragma private; include "Modio/Unity/ModioUnityLogger.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Modio/Unity/zzzz__ModioUnityLogger_def.hpp"
#include "Modio/zzzz__IModioLogHandler_def.hpp"
#include "Modio/zzzz__LogLevel_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Modio::Unity::ModioUnityLogger._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::ModioUnityLogger::*)()>(&::Modio::Unity::ModioUnityLogger::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x9f955f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::ModioUnityLogger*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::ModioUnityLogger._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::ModioUnityLogger::*)(::StringW)>(&::Modio::Unity::ModioUnityLogger::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x9f95650;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::ModioUnityLogger*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Modio::Unity::ModioUnityLogger.LogHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::Unity::ModioUnityLogger::*)(::Modio::LogLevel, ::System::Object*)>(&::Modio::Unity::ModioUnityLogger::LogHandler)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x9f95680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::ModioUnityLogger*>(),
                        {"LogHandler", {}, {::i2c::type_of<::Modio::LogLevel>(), ::i2c::type_of<::System::Object*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::StringW& Modio::Unity::ModioUnityLogger::__cordl_internal_get__prefix()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____prefix;
}
constexpr ::StringW const& Modio::Unity::ModioUnityLogger::__cordl_internal_get__prefix() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____prefix;
}
constexpr void Modio::Unity::ModioUnityLogger::__cordl_internal_set__prefix(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____prefix = value;
}
inline void Modio::Unity::ModioUnityLogger::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::ModioUnityLogger*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Modio::Unity::ModioUnityLogger::_ctor(::StringW  prefix)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::ModioUnityLogger*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, prefix);
}
inline void Modio::Unity::ModioUnityLogger::LogHandler(::Modio::LogLevel  logLevel, ::System::Object*  message)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Modio::Unity::ModioUnityLogger*>(),
                        {"LogHandler", {}, {::i2c::type_of<::Modio::LogLevel>(), ::i2c::type_of<::System::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, logLevel, message);
}
inline ::Modio::Unity::ModioUnityLogger* Modio::Unity::ModioUnityLogger::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::ModioUnityLogger*>());
}
inline ::Modio::Unity::ModioUnityLogger* Modio::Unity::ModioUnityLogger::New_ctor(::StringW  prefix)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Modio::Unity::ModioUnityLogger*>(prefix));
}
/// @brief Convert operator to "::Modio::IModioLogHandler"
constexpr  Modio::Unity::ModioUnityLogger::operator ::Modio::IModioLogHandler*() noexcept {
return static_cast<::Modio::IModioLogHandler*>(static_cast<void*>(this));
}
/// @brief Convert to "::Modio::IModioLogHandler"
constexpr ::Modio::IModioLogHandler* Modio::Unity::ModioUnityLogger::i___Modio__IModioLogHandler() noexcept {
return static_cast<::Modio::IModioLogHandler*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Modio::Unity::ModioUnityLogger::ModioUnityLogger()   {
}
