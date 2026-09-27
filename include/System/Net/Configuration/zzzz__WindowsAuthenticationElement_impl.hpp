#pragma once
// IWYU pragma private; include "System/Net/Configuration/WindowsAuthenticationElement.hpp"
#include "System/Configuration/zzzz__ConfigurationElement_impl.hpp"
#include "System/Net/Configuration/zzzz__WindowsAuthenticationElement_def.hpp"
#include "System/Configuration/zzzz__ConfigurationPropertyCollection_def.hpp"
//  Writing Method size for method: ::System::Net::Configuration::WindowsAuthenticationElement._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Configuration::WindowsAuthenticationElement::*)()>(&::System::Net::Configuration::WindowsAuthenticationElement::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfaf90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::WindowsAuthenticationElement*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::WindowsAuthenticationElement.get_DefaultCredentialsHandleCacheSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Net::Configuration::WindowsAuthenticationElement::*)()>(&::System::Net::Configuration::WindowsAuthenticationElement::get_DefaultCredentialsHandleCacheSize)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfafc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::WindowsAuthenticationElement*>(),
                        {"get_DefaultCredentialsHandleCacheSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::WindowsAuthenticationElement.set_DefaultCredentialsHandleCacheSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Configuration::WindowsAuthenticationElement::*)(int32_t)>(&::System::Net::Configuration::WindowsAuthenticationElement::set_DefaultCredentialsHandleCacheSize)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfb000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::WindowsAuthenticationElement*>(),
                        {"set_DefaultCredentialsHandleCacheSize", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::WindowsAuthenticationElement.get_Properties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Configuration::ConfigurationPropertyCollection* (::System::Net::Configuration::WindowsAuthenticationElement::*)()>(&::System::Net::Configuration::WindowsAuthenticationElement::get_Properties)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfb038;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::Configuration::WindowsAuthenticationElement*>(),
                    {::i2c::class_of<::System::Net::Configuration::WindowsAuthenticationElement*>(), 4}
                ));
    return ___internal_method;
  }
};
inline void System::Net::Configuration::WindowsAuthenticationElement::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::WindowsAuthenticationElement*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t System::Net::Configuration::WindowsAuthenticationElement::get_DefaultCredentialsHandleCacheSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::WindowsAuthenticationElement*>(),
                        {"get_DefaultCredentialsHandleCacheSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Net::Configuration::WindowsAuthenticationElement::set_DefaultCredentialsHandleCacheSize(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::WindowsAuthenticationElement*>(),
                        {"set_DefaultCredentialsHandleCacheSize", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Configuration::ConfigurationPropertyCollection* System::Net::Configuration::WindowsAuthenticationElement::get_Properties()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::Configuration::WindowsAuthenticationElement*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Configuration::ConfigurationPropertyCollection*>(this, ___internal_method);
}
inline ::System::Net::Configuration::WindowsAuthenticationElement* System::Net::Configuration::WindowsAuthenticationElement::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Configuration::WindowsAuthenticationElement*>());
}
// Ctor Parameters []
constexpr ::System::Net::Configuration::WindowsAuthenticationElement::WindowsAuthenticationElement()   {
}
