#pragma once
// IWYU pragma private; include "Meta/WitAi/IWitRuntimeConfigSetter.hpp"
#include "Meta/WitAi/zzzz__IWitRuntimeConfigSetter_def.hpp"
#include "Meta/WitAi/Configuration/zzzz__WitRuntimeConfiguration_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::IWitRuntimeConfigSetter.set_RuntimeConfiguration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::WitAi::IWitRuntimeConfigSetter::*)(::Meta::WitAi::Configuration::WitRuntimeConfiguration*)>(&::Meta::WitAi::IWitRuntimeConfigSetter::set_RuntimeConfiguration)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::IWitRuntimeConfigSetter*>(),
                    {::i2c::class_of<::Meta::WitAi::IWitRuntimeConfigSetter*>(), 0}
                ));
    return ___internal_method;
  }
};
inline void Meta::WitAi::IWitRuntimeConfigSetter::set_RuntimeConfiguration(::Meta::WitAi::Configuration::WitRuntimeConfiguration*  value)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::IWitRuntimeConfigSetter*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
