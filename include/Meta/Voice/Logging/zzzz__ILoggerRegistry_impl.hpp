#pragma once
// IWYU pragma private; include "Meta/Voice/Logging/ILoggerRegistry.hpp"
#include "Meta/Voice/Logging/zzzz__ILoggerRegistry_def.hpp"
#include "Meta/Voice/Logging/zzzz__ILogSink_def.hpp"
#include "Meta/Voice/Logging/zzzz__IVLogger_def.hpp"
#include "Meta/Voice/Logging/zzzz__LogCategory_def.hpp"
//  Writing Method size for method: ::Meta::Voice::Logging::ILoggerRegistry.GetLogger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::Voice::Logging::IVLogger* (::Meta::Voice::Logging::ILoggerRegistry::*)(::Meta::Voice::Logging::LogCategory, ::Meta::Voice::Logging::ILogSink*)>(&::Meta::Voice::Logging::ILoggerRegistry::GetLogger)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Logging::ILoggerRegistry*>(),
                    {::i2c::class_of<::Meta::Voice::Logging::ILoggerRegistry*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::ILoggerRegistry.GetLogger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::Voice::Logging::IVLogger* (::Meta::Voice::Logging::ILoggerRegistry::*)(::StringW, ::Meta::Voice::Logging::ILogSink*)>(&::Meta::Voice::Logging::ILoggerRegistry::GetLogger)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Logging::ILoggerRegistry*>(),
                    {::i2c::class_of<::Meta::Voice::Logging::ILoggerRegistry*>(), 1}
                ));
    return ___internal_method;
  }
};
inline ::Meta::Voice::Logging::IVLogger* Meta::Voice::Logging::ILoggerRegistry::GetLogger(::Meta::Voice::Logging::LogCategory  logCategory, ::Meta::Voice::Logging::ILogSink*  logSink)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Logging::ILoggerRegistry*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::Logging::IVLogger*>(this, ___internal_method, logCategory, logSink);
}
inline ::Meta::Voice::Logging::IVLogger* Meta::Voice::Logging::ILoggerRegistry::GetLogger(::StringW  category, ::Meta::Voice::Logging::ILogSink*  logSink)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Logging::ILoggerRegistry*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::Logging::IVLogger*>(this, ___internal_method, category, logSink);
}
