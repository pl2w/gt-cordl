#pragma once
// IWYU pragma private; include "Meta/Voice/Logging/VLoggerFactory.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/Voice/Logging/zzzz__VLoggerFactory_def.hpp"
#include "Meta/Voice/Logging/zzzz__ILogSink_def.hpp"
#include "Meta/Voice/Logging/zzzz__IVLoggerFactory_def.hpp"
#include "Meta/Voice/Logging/zzzz__IVLogger_def.hpp"
//  Writing Method size for method: ::Meta::Voice::Logging::VLoggerFactory.GetLogger
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::Voice::Logging::IVLogger* (::Meta::Voice::Logging::VLoggerFactory::*)(::StringW, ::Meta::Voice::Logging::ILogSink*)>(&::Meta::Voice::Logging::VLoggerFactory::GetLogger)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x9e3bf04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::VLoggerFactory*>(),
                        {"GetLogger", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::Voice::Logging::ILogSink*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::VLoggerFactory._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Logging::VLoggerFactory::*)()>(&::Meta::Voice::Logging::VLoggerFactory::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x9e375c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::VLoggerFactory*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::Meta::Voice::Logging::IVLogger* Meta::Voice::Logging::VLoggerFactory::GetLogger(::StringW  category, ::Meta::Voice::Logging::ILogSink*  logSink)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::VLoggerFactory*>(),
                        {"GetLogger", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Meta::Voice::Logging::ILogSink*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Meta::Voice::Logging::IVLogger*>(this, ___internal_method, category, logSink);
}
inline void Meta::Voice::Logging::VLoggerFactory::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::VLoggerFactory*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::Voice::Logging::VLoggerFactory* Meta::Voice::Logging::VLoggerFactory::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::Voice::Logging::VLoggerFactory*>());
}
/// @brief Convert operator to "::Meta::Voice::Logging::IVLoggerFactory"
constexpr  Meta::Voice::Logging::VLoggerFactory::operator ::Meta::Voice::Logging::IVLoggerFactory*() noexcept {
return static_cast<::Meta::Voice::Logging::IVLoggerFactory*>(static_cast<void*>(this));
}
/// @brief Convert to "::Meta::Voice::Logging::IVLoggerFactory"
constexpr ::Meta::Voice::Logging::IVLoggerFactory* Meta::Voice::Logging::VLoggerFactory::i___Meta__Voice__Logging__IVLoggerFactory() noexcept {
return static_cast<::Meta::Voice::Logging::IVLoggerFactory*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Meta::Voice::Logging::VLoggerFactory::VLoggerFactory()   {
}
