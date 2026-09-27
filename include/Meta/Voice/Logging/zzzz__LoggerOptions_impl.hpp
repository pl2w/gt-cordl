#pragma once
// IWYU pragma private; include "Meta/Voice/Logging/LoggerOptions.hpp"
#include "Meta/Voice/Logging/zzzz__VLoggerVerbosity_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Meta/Voice/Logging/zzzz__LoggerOptions_def.hpp"
#include "Meta/Voice/Logging/zzzz__VLoggerVerbosity_def.hpp"
//  Writing Method size for method: ::Meta::Voice::Logging::LoggerOptions._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::Voice::Logging::LoggerOptions::*)(::Meta::Voice::Logging::VLoggerVerbosity, ::Meta::Voice::Logging::VLoggerVerbosity, ::Meta::Voice::Logging::VLoggerVerbosity, bool, bool)>(&::Meta::Voice::Logging::LoggerOptions::_ctor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x9e37354;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LoggerOptions*>(),
                        {".ctor", {}, {::i2c::type_of<::Meta::Voice::Logging::VLoggerVerbosity>(), ::i2c::type_of<::Meta::Voice::Logging::VLoggerVerbosity>(), ::i2c::type_of<::Meta::Voice::Logging::VLoggerVerbosity>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Meta::Voice::Logging::VLoggerVerbosity& Meta::Voice::Logging::LoggerOptions::__cordl_internal_get_MinimumVerbosity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MinimumVerbosity;
}
constexpr ::Meta::Voice::Logging::VLoggerVerbosity const& Meta::Voice::Logging::LoggerOptions::__cordl_internal_get_MinimumVerbosity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___MinimumVerbosity;
}
constexpr void Meta::Voice::Logging::LoggerOptions::__cordl_internal_set_MinimumVerbosity(::Meta::Voice::Logging::VLoggerVerbosity  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___MinimumVerbosity = value;
}
constexpr ::Meta::Voice::Logging::VLoggerVerbosity& Meta::Voice::Logging::LoggerOptions::__cordl_internal_get_SuppressionLevel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SuppressionLevel;
}
constexpr ::Meta::Voice::Logging::VLoggerVerbosity const& Meta::Voice::Logging::LoggerOptions::__cordl_internal_get_SuppressionLevel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SuppressionLevel;
}
constexpr void Meta::Voice::Logging::LoggerOptions::__cordl_internal_set_SuppressionLevel(::Meta::Voice::Logging::VLoggerVerbosity  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SuppressionLevel = value;
}
constexpr ::Meta::Voice::Logging::VLoggerVerbosity& Meta::Voice::Logging::LoggerOptions::__cordl_internal_get_StackTraceLevel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StackTraceLevel;
}
constexpr ::Meta::Voice::Logging::VLoggerVerbosity const& Meta::Voice::Logging::LoggerOptions::__cordl_internal_get_StackTraceLevel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___StackTraceLevel;
}
constexpr void Meta::Voice::Logging::LoggerOptions::__cordl_internal_set_StackTraceLevel(::Meta::Voice::Logging::VLoggerVerbosity  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___StackTraceLevel = value;
}
constexpr bool& Meta::Voice::Logging::LoggerOptions::__cordl_internal_get_ColorLogs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ColorLogs;
}
constexpr bool const& Meta::Voice::Logging::LoggerOptions::__cordl_internal_get_ColorLogs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___ColorLogs;
}
constexpr void Meta::Voice::Logging::LoggerOptions::__cordl_internal_set_ColorLogs(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___ColorLogs = value;
}
constexpr bool& Meta::Voice::Logging::LoggerOptions::__cordl_internal_get_LinkToCallSite()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LinkToCallSite;
}
constexpr bool const& Meta::Voice::Logging::LoggerOptions::__cordl_internal_get_LinkToCallSite() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LinkToCallSite;
}
constexpr void Meta::Voice::Logging::LoggerOptions::__cordl_internal_set_LinkToCallSite(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LinkToCallSite = value;
}
inline void Meta::Voice::Logging::LoggerOptions::_ctor(::Meta::Voice::Logging::VLoggerVerbosity  minimumVerbosity, ::Meta::Voice::Logging::VLoggerVerbosity  suppressionLevel, ::Meta::Voice::Logging::VLoggerVerbosity  stackTraceLevel, bool  colorLogs, bool  linkToCallSite)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Meta::Voice::Logging::LoggerOptions*>(),
                        {".ctor", {}, {::i2c::type_of<::Meta::Voice::Logging::VLoggerVerbosity>(), ::i2c::type_of<::Meta::Voice::Logging::VLoggerVerbosity>(), ::i2c::type_of<::Meta::Voice::Logging::VLoggerVerbosity>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, minimumVerbosity, suppressionLevel, stackTraceLevel, colorLogs, linkToCallSite);
}
inline ::Meta::Voice::Logging::LoggerOptions* Meta::Voice::Logging::LoggerOptions::New_ctor(::Meta::Voice::Logging::VLoggerVerbosity  minimumVerbosity, ::Meta::Voice::Logging::VLoggerVerbosity  suppressionLevel, ::Meta::Voice::Logging::VLoggerVerbosity  stackTraceLevel, bool  colorLogs, bool  linkToCallSite)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::Voice::Logging::LoggerOptions*>(minimumVerbosity, suppressionLevel, stackTraceLevel, colorLogs, linkToCallSite));
}
// Ctor Parameters []
constexpr ::Meta::Voice::Logging::LoggerOptions::LoggerOptions()   {
}
