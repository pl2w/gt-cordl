#pragma once
// IWYU pragma private; include "GorillaTagScripts/IRandomIntervalSource.hpp"
#include "GorillaTagScripts/zzzz__IRandomIntervalSource_def.hpp"
//  Writing Method size for method: ::GorillaTagScripts::IRandomIntervalSource.GetNextIntervalSeconds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GorillaTagScripts::IRandomIntervalSource::*)()>(&::GorillaTagScripts::IRandomIntervalSource::GetNextIntervalSeconds)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTagScripts::IRandomIntervalSource*>(),
                    {::i2c::class_of<::GorillaTagScripts::IRandomIntervalSource*>(), 0}
                ));
    return ___internal_method;
  }
};
inline float_t GorillaTagScripts::IRandomIntervalSource::GetNextIntervalSeconds()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTagScripts::IRandomIntervalSource*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
