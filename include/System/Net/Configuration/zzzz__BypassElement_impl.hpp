#pragma once
// IWYU pragma private; include "System/Net/Configuration/BypassElement.hpp"
#include "System/Configuration/zzzz__ConfigurationElement_impl.hpp"
#include "System/Net/Configuration/zzzz__BypassElement_def.hpp"
#include "System/Configuration/zzzz__ConfigurationPropertyCollection_def.hpp"
//  Writing Method size for method: ::System::Net::Configuration::BypassElement._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Configuration::BypassElement::*)()>(&::System::Net::Configuration::BypassElement::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf7e20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::BypassElement*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::BypassElement._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Configuration::BypassElement::*)(::StringW)>(&::System::Net::Configuration::BypassElement::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf7e58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::BypassElement*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::BypassElement.get_Address
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::Configuration::BypassElement::*)()>(&::System::Net::Configuration::BypassElement::get_Address)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf7e90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::BypassElement*>(),
                        {"get_Address", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::BypassElement.set_Address
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Configuration::BypassElement::*)(::StringW)>(&::System::Net::Configuration::BypassElement::set_Address)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf7ec8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::BypassElement*>(),
                        {"set_Address", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::BypassElement.get_Properties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Configuration::ConfigurationPropertyCollection* (::System::Net::Configuration::BypassElement::*)()>(&::System::Net::Configuration::BypassElement::get_Properties)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf7f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::Configuration::BypassElement*>(),
                    {::i2c::class_of<::System::Net::Configuration::BypassElement*>(), 4}
                ));
    return ___internal_method;
  }
};
inline void System::Net::Configuration::BypassElement::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::BypassElement*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::Configuration::BypassElement::_ctor(::StringW  address)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::BypassElement*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, address);
}
inline ::StringW System::Net::Configuration::BypassElement::get_Address()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::BypassElement*>(),
                        {"get_Address", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Net::Configuration::BypassElement::set_Address(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::BypassElement*>(),
                        {"set_Address", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Configuration::ConfigurationPropertyCollection* System::Net::Configuration::BypassElement::get_Properties()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::Configuration::BypassElement*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Configuration::ConfigurationPropertyCollection*>(this, ___internal_method);
}
inline ::System::Net::Configuration::BypassElement* System::Net::Configuration::BypassElement::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Configuration::BypassElement*>());
}
inline ::System::Net::Configuration::BypassElement* System::Net::Configuration::BypassElement::New_ctor(::StringW  address)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Configuration::BypassElement*>(address));
}
// Ctor Parameters []
constexpr ::System::Net::Configuration::BypassElement::BypassElement()   {
}
