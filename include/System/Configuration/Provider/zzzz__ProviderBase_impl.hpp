#pragma once
// IWYU pragma private; include "System/Configuration/Provider/ProviderBase.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Configuration/Provider/zzzz__ProviderBase_def.hpp"
#include "System/Collections/Specialized/zzzz__NameValueCollection_def.hpp"
//  Writing Method size for method: ::System::Configuration::Provider::ProviderBase.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::Provider::ProviderBase::*)(::StringW, ::System::Collections::Specialized::NameValueCollection*)>(&::System::Configuration::Provider::ProviderBase::Initialize)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa84e9a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Configuration::Provider::ProviderBase*>(),
                    {::i2c::class_of<::System::Configuration::Provider::ProviderBase*>(), 4}
                ));
    return ___internal_method;
  }
};
inline void System::Configuration::Provider::ProviderBase::Initialize(::StringW  name, ::System::Collections::Specialized::NameValueCollection*  config)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Configuration::Provider::ProviderBase*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, name, config);
}
// Ctor Parameters []
constexpr ::System::Configuration::Provider::ProviderBase::ProviderBase()   {
}
