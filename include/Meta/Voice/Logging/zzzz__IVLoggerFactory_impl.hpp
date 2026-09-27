#pragma once
// IWYU pragma private; include "Meta/Voice/Logging/IVLoggerFactory.hpp"
#include "Meta/Voice/Logging/zzzz__IVLoggerFactory_def.hpp"
#include "Meta/Voice/Logging/zzzz__ILogSink_def.hpp"
#include "Meta/Voice/Logging/zzzz__IVLogger_def.hpp"
//  Writing Method size for method: ::Meta::Voice::Logging::IVLoggerFactory.GetLogger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::Voice::Logging::IVLogger* (::Meta::Voice::Logging::IVLoggerFactory::*)(::StringW, ::Meta::Voice::Logging::ILogSink*)>(&::Meta::Voice::Logging::IVLoggerFactory::GetLogger)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Logging::IVLoggerFactory*>(),
                    {::i2c::class_of<::Meta::Voice::Logging::IVLoggerFactory*>(), 0}
                ));
    return ___internal_method;
  }
};
inline ::Meta::Voice::Logging::IVLogger* Meta::Voice::Logging::IVLoggerFactory::GetLogger(::StringW  category, ::Meta::Voice::Logging::ILogSink*  logSink)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Logging::IVLoggerFactory*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::Logging::IVLogger*>(this, ___internal_method, category, logSink);
}
