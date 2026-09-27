#pragma once
// IWYU pragma private; include "Meta/WitAi/Interfaces/IWitConfigurationProvider.hpp"
#include "Meta/WitAi/Interfaces/zzzz__IWitConfigurationProvider_def.hpp"
#include "Meta/WitAi/Data/Configuration/zzzz__WitConfiguration_def.hpp"
//  Writing Method size for method: ::Meta::WitAi::Interfaces::IWitConfigurationProvider.get_Configuration
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Meta::WitAi::Data::Configuration::WitConfiguration> (::Meta::WitAi::Interfaces::IWitConfigurationProvider::*)()>(&::Meta::WitAi::Interfaces::IWitConfigurationProvider::get_Configuration)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Meta::WitAi::Interfaces::IWitConfigurationProvider*>(),
                    {::i2c::class_of<::Meta::WitAi::Interfaces::IWitConfigurationProvider*>(), 0}
                ));
    return ___internal_method;
  }
};
inline ::UnityW<::Meta::WitAi::Data::Configuration::WitConfiguration> Meta::WitAi::Interfaces::IWitConfigurationProvider::get_Configuration()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Meta::WitAi::Interfaces::IWitConfigurationProvider*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Meta::WitAi::Data::Configuration::WitConfiguration>>(this, ___internal_method);
}
