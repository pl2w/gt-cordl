#pragma once
// IWYU pragma private; include "Modio/IModioLogHandler.hpp"
#include "Modio/zzzz__IModioLogHandler_def.hpp"
#include "Modio/zzzz__LogLevel_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Modio::IModioLogHandler.LogHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Modio::IModioLogHandler::*)(::Modio::LogLevel, ::System::Object*)>(&::Modio::IModioLogHandler::LogHandler)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Modio::IModioLogHandler*>(),
                    {::i2c::class_of<::Modio::IModioLogHandler*>(), 0}
                ));
    return ___internal_method;
  }
};
inline void Modio::IModioLogHandler::LogHandler(::Modio::LogLevel  logLevel, ::System::Object*  message)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Modio::IModioLogHandler*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, logLevel, message);
}
