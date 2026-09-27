#pragma once
// IWYU pragma private; include "Backtrace/Unity/Common/MetricsHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Backtrace/Unity/Common/zzzz__MetricsHelper_def.hpp"
#include "System/Diagnostics/zzzz__Stopwatch_def.hpp"
//  Writing Method size for method: ::Backtrace::Unity::Common::MetricsHelper.GetMicroseconds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::System::Diagnostics::Stopwatch*)>(&::Backtrace::Unity::Common::MetricsHelper::GetMicroseconds)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5f26928;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Common::MetricsHelper*>(),
                        {"GetMicroseconds", {}, {::i2c::type_of<::System::Diagnostics::Stopwatch*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Backtrace::Unity::Common::MetricsHelper.Restart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Diagnostics::Stopwatch*)>(&::Backtrace::Unity::Common::MetricsHelper::Restart)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x5f26a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Common::MetricsHelper*>(),
                        {"Restart", {}, {::i2c::type_of<::System::Diagnostics::Stopwatch*>()}}
                    )));
    return ___internal_method;
  }
};
inline ::StringW Backtrace::Unity::Common::MetricsHelper::GetMicroseconds(::System::Diagnostics::Stopwatch*  stopwatch)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Common::MetricsHelper*>(),
                        {"GetMicroseconds", {}, {::i2c::type_of<::System::Diagnostics::Stopwatch*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, stopwatch);
}
inline void Backtrace::Unity::Common::MetricsHelper::Restart(::System::Diagnostics::Stopwatch*  stopwatch)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Backtrace::Unity::Common::MetricsHelper*>(),
                        {"Restart", {}, {::i2c::type_of<::System::Diagnostics::Stopwatch*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, stopwatch);
}
// Ctor Parameters []
constexpr ::Backtrace::Unity::Common::MetricsHelper::MetricsHelper()   {
}
