#pragma once
// IWYU pragma private; include "System/Configuration/Provider/ProviderCollection.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Configuration/Provider/zzzz__ProviderCollection_def.hpp"
#include "System/Configuration/Provider/zzzz__ProviderBase_def.hpp"
//  Writing Method size for method: ::System::Configuration::Provider::ProviderCollection.Add
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::Provider::ProviderCollection::*)(::System::Configuration::Provider::ProviderBase*)>(&::System::Configuration::Provider::ProviderCollection::Add)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa84ed74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Configuration::Provider::ProviderCollection*>(),
                    {::i2c::class_of<::System::Configuration::Provider::ProviderCollection*>(), 4}
                ));
    return ___internal_method;
  }
};
inline void System::Configuration::Provider::ProviderCollection::Add(::System::Configuration::Provider::ProviderBase*  provider)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Configuration::Provider::ProviderCollection*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, provider);
}
// Ctor Parameters []
constexpr ::System::Configuration::Provider::ProviderCollection::ProviderCollection()   {
}
