#pragma once
// IWYU pragma private; include "GlobalNamespace/IProximityEffectReceiver.hpp"
#include "GlobalNamespace/zzzz__IProximityEffectReceiver_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IProximityEffectReceiver.OnProximityCalculated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::IProximityEffectReceiver::*)(float_t, float_t, float_t)>(&::GlobalNamespace::IProximityEffectReceiver::OnProximityCalculated)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::IProximityEffectReceiver*>(),
                    {::i2c::class_of<::GlobalNamespace::IProximityEffectReceiver*>(), 0}
                ));
    return ___internal_method;
  }
};
inline void GlobalNamespace::IProximityEffectReceiver::OnProximityCalculated(float_t  distance, float_t  alignment, float_t  parallel)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::IProximityEffectReceiver*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, distance, alignment, parallel);
}
