#pragma once
// IWYU pragma private; include "Meta/Voice/Logging/ILogSink.hpp"
#include "Meta/Voice/Logging/zzzz__ILogSink_def.hpp"
#include "Meta/Voice/Logging/zzzz__LogEntry_def.hpp"
#include "Meta/Voice/Logging/zzzz__LoggerOptions_def.hpp"
//  Writing Method size for method: ::Meta::Voice::Logging::ILogSink.set_Options
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Logging::ILogSink::*)(::Meta::Voice::Logging::LoggerOptions*)>(&::Meta::Voice::Logging::ILogSink::set_Options)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Logging::ILogSink*>(),
                    {::i2c::class_of<::Meta::Voice::Logging::ILogSink*>(), 0}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::Voice::Logging::ILogSink.WriteEntry
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Logging::ILogSink::*)(::Meta::Voice::Logging::LogEntry)>(&::Meta::Voice::Logging::ILogSink::WriteEntry)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::Voice::Logging::ILogSink*>(),
                    {::i2c::class_of<::Meta::Voice::Logging::ILogSink*>(), 1}
                ));
    return ___internal_method;
  }
};
inline void Meta::Voice::Logging::ILogSink::set_Options(::Meta::Voice::Logging::LoggerOptions*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Logging::ILogSink*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::Voice::Logging::ILogSink::WriteEntry(::Meta::Voice::Logging::LogEntry  logEntry)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::Voice::Logging::ILogSink*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, logEntry);
}
