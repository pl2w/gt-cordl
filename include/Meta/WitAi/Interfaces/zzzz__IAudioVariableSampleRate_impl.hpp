#pragma once
// IWYU pragma private; include "Meta/WitAi/Interfaces/IAudioVariableSampleRate.hpp"
#include "Meta/WitAi/Interfaces/zzzz__IAudioVariableSampleRate_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::Interfaces::IAudioVariableSampleRate.get_NeedsSampleRateCalculation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Meta::WitAi::Interfaces::IAudioVariableSampleRate::*)()>(&::Meta::WitAi::Interfaces::IAudioVariableSampleRate::get_NeedsSampleRateCalculation)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Interfaces::IAudioVariableSampleRate*>(),
                    {::i2c::class_of<::Meta::WitAi::Interfaces::IAudioVariableSampleRate*>(), 0}
                ));
    return ___internal_method;
  }
};
inline bool Meta::WitAi::Interfaces::IAudioVariableSampleRate::get_NeedsSampleRateCalculation()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Interfaces::IAudioVariableSampleRate*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
