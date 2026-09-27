#pragma once
// IWYU pragma private; include "Meta/WitAi/IWitRuntimeConfigProvider.hpp"
#include "Meta/WitAi/zzzz__IWitRuntimeConfigProvider_def.hpp"
#include "Meta/WitAi/Configuration/zzzz__WitRuntimeConfiguration_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::IWitRuntimeConfigProvider.get_RuntimeConfiguration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::WitAi::Configuration::WitRuntimeConfiguration* (::Meta::WitAi::IWitRuntimeConfigProvider::*)()>(&::Meta::WitAi::IWitRuntimeConfigProvider::get_RuntimeConfiguration)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::IWitRuntimeConfigProvider*>(),
                    {::i2c::class_of<::Meta::WitAi::IWitRuntimeConfigProvider*>(), 0}
                ));
    return ___internal_method;
  }
};
inline ::Meta::WitAi::Configuration::WitRuntimeConfiguration* Meta::WitAi::IWitRuntimeConfigProvider::get_RuntimeConfiguration()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::IWitRuntimeConfigProvider*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::Meta::WitAi::Configuration::WitRuntimeConfiguration*>(this, ___internal_method);
}
