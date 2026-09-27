#pragma once
// IWYU pragma private; include "System/Net/Configuration/SmtpSpecifiedPickupDirectoryElement.hpp"
#include "System/Configuration/zzzz__ConfigurationElement_impl.hpp"
#include "System/Net/Configuration/zzzz__SmtpSpecifiedPickupDirectoryElement_def.hpp"
#include "System/Configuration/zzzz__ConfigurationPropertyCollection_def.hpp"
//  Writing Method size for method: ::System::Net::Configuration::SmtpSpecifiedPickupDirectoryElement._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Configuration::SmtpSpecifiedPickupDirectoryElement::*)()>(&::System::Net::Configuration::SmtpSpecifiedPickupDirectoryElement::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf9dd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::SmtpSpecifiedPickupDirectoryElement*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::SmtpSpecifiedPickupDirectoryElement.get_PickupDirectoryLocation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::Configuration::SmtpSpecifiedPickupDirectoryElement::*)()>(&::System::Net::Configuration::SmtpSpecifiedPickupDirectoryElement::get_PickupDirectoryLocation)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf9e10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::SmtpSpecifiedPickupDirectoryElement*>(),
                        {"get_PickupDirectoryLocation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::SmtpSpecifiedPickupDirectoryElement.set_PickupDirectoryLocation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Configuration::SmtpSpecifiedPickupDirectoryElement::*)(::StringW)>(&::System::Net::Configuration::SmtpSpecifiedPickupDirectoryElement::set_PickupDirectoryLocation)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf9e48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::SmtpSpecifiedPickupDirectoryElement*>(),
                        {"set_PickupDirectoryLocation", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::SmtpSpecifiedPickupDirectoryElement.get_Properties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Configuration::ConfigurationPropertyCollection* (::System::Net::Configuration::SmtpSpecifiedPickupDirectoryElement::*)()>(&::System::Net::Configuration::SmtpSpecifiedPickupDirectoryElement::get_Properties)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf9e80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::Configuration::SmtpSpecifiedPickupDirectoryElement*>(),
                    {::i2c::class_of<::System::Net::Configuration::SmtpSpecifiedPickupDirectoryElement*>(), 4}
                ));
    return ___internal_method;
  }
};
inline void System::Net::Configuration::SmtpSpecifiedPickupDirectoryElement::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::SmtpSpecifiedPickupDirectoryElement*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW System::Net::Configuration::SmtpSpecifiedPickupDirectoryElement::get_PickupDirectoryLocation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::SmtpSpecifiedPickupDirectoryElement*>(),
                        {"get_PickupDirectoryLocation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Net::Configuration::SmtpSpecifiedPickupDirectoryElement::set_PickupDirectoryLocation(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::SmtpSpecifiedPickupDirectoryElement*>(),
                        {"set_PickupDirectoryLocation", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Configuration::ConfigurationPropertyCollection* System::Net::Configuration::SmtpSpecifiedPickupDirectoryElement::get_Properties()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::Configuration::SmtpSpecifiedPickupDirectoryElement*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Configuration::ConfigurationPropertyCollection*>(this, ___internal_method);
}
inline ::System::Net::Configuration::SmtpSpecifiedPickupDirectoryElement* System::Net::Configuration::SmtpSpecifiedPickupDirectoryElement::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Configuration::SmtpSpecifiedPickupDirectoryElement*>());
}
// Ctor Parameters []
constexpr ::System::Net::Configuration::SmtpSpecifiedPickupDirectoryElement::SmtpSpecifiedPickupDirectoryElement()   {
}
