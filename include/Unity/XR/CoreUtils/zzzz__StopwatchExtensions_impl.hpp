#pragma once
// IWYU pragma private; include "Unity/XR/CoreUtils/StopwatchExtensions.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/XR/CoreUtils/zzzz__StopwatchExtensions_def.hpp"
#include "System/Diagnostics/zzzz__Stopwatch_def.hpp"
//  Writing Method size for method: ::Unity::XR::CoreUtils::StopwatchExtensions.Restart
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Diagnostics::Stopwatch*)>(&::Unity::XR::CoreUtils::StopwatchExtensions::Restart)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xb3f00c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::StopwatchExtensions*>(),
                        {"Restart", {}, {::i2c::type_of<::System::Diagnostics::Stopwatch*>()}}
                    )));
    return ___internal_method;
  }
};
inline void Unity::XR::CoreUtils::StopwatchExtensions::Restart(::System::Diagnostics::Stopwatch*  stopwatch)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Unity::XR::CoreUtils::StopwatchExtensions*>(),
                        {"Restart", {}, {::i2c::type_of<::System::Diagnostics::Stopwatch*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, stopwatch);
}
// Ctor Parameters []
constexpr ::Unity::XR::CoreUtils::StopwatchExtensions::StopwatchExtensions()   {
}
