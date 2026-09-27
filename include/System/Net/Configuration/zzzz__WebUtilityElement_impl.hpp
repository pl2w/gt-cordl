#pragma once
// IWYU pragma private; include "System/Net/Configuration/WebUtilityElement.hpp"
#include "System/Configuration/zzzz__ConfigurationElement_impl.hpp"
#include "System/Net/Configuration/zzzz__WebUtilityElement_def.hpp"
#include "System/Configuration/zzzz__ConfigurationPropertyCollection_def.hpp"
#include "System/Net/Configuration/zzzz__UnicodeDecodingConformance_def.hpp"
#include "System/Net/Configuration/zzzz__UnicodeEncodingConformance_def.hpp"
//  Writing Method size for method: ::System::Net::Configuration::WebUtilityElement._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Configuration::WebUtilityElement::*)()>(&::System::Net::Configuration::WebUtilityElement::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfae40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::WebUtilityElement*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::WebUtilityElement.get_Properties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Configuration::ConfigurationPropertyCollection* (::System::Net::Configuration::WebUtilityElement::*)()>(&::System::Net::Configuration::WebUtilityElement::get_Properties)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfae78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::Configuration::WebUtilityElement*>(),
                    {::i2c::class_of<::System::Net::Configuration::WebUtilityElement*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::WebUtilityElement.get_UnicodeDecodingConformance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Configuration::UnicodeDecodingConformance (::System::Net::Configuration::WebUtilityElement::*)()>(&::System::Net::Configuration::WebUtilityElement::get_UnicodeDecodingConformance)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfaeb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::WebUtilityElement*>(),
                        {"get_UnicodeDecodingConformance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::WebUtilityElement.set_UnicodeDecodingConformance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Configuration::WebUtilityElement::*)(::System::Net::Configuration::UnicodeDecodingConformance)>(&::System::Net::Configuration::WebUtilityElement::set_UnicodeDecodingConformance)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfaee8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::WebUtilityElement*>(),
                        {"set_UnicodeDecodingConformance", {}, {::i2c::type_of<::System::Net::Configuration::UnicodeDecodingConformance>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::WebUtilityElement.get_UnicodeEncodingConformance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Configuration::UnicodeEncodingConformance (::System::Net::Configuration::WebUtilityElement::*)()>(&::System::Net::Configuration::WebUtilityElement::get_UnicodeEncodingConformance)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfaf20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::WebUtilityElement*>(),
                        {"get_UnicodeEncodingConformance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::WebUtilityElement.set_UnicodeEncodingConformance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Configuration::WebUtilityElement::*)(::System::Net::Configuration::UnicodeEncodingConformance)>(&::System::Net::Configuration::WebUtilityElement::set_UnicodeEncodingConformance)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfaf58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::WebUtilityElement*>(),
                        {"set_UnicodeEncodingConformance", {}, {::i2c::type_of<::System::Net::Configuration::UnicodeEncodingConformance>()}}
                    )));
    return ___internal_method;
  }
};
inline void System::Net::Configuration::WebUtilityElement::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::WebUtilityElement*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Configuration::ConfigurationPropertyCollection* System::Net::Configuration::WebUtilityElement::get_Properties()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::Configuration::WebUtilityElement*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Configuration::ConfigurationPropertyCollection*>(this, ___internal_method);
}
inline ::System::Net::Configuration::UnicodeDecodingConformance System::Net::Configuration::WebUtilityElement::get_UnicodeDecodingConformance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::WebUtilityElement*>(),
                        {"get_UnicodeDecodingConformance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::Configuration::UnicodeDecodingConformance>(this, ___internal_method);
}
inline void System::Net::Configuration::WebUtilityElement::set_UnicodeDecodingConformance(::System::Net::Configuration::UnicodeDecodingConformance  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::WebUtilityElement*>(),
                        {"set_UnicodeDecodingConformance", {}, {::i2c::type_of<::System::Net::Configuration::UnicodeDecodingConformance>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Net::Configuration::UnicodeEncodingConformance System::Net::Configuration::WebUtilityElement::get_UnicodeEncodingConformance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::WebUtilityElement*>(),
                        {"get_UnicodeEncodingConformance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::Configuration::UnicodeEncodingConformance>(this, ___internal_method);
}
inline void System::Net::Configuration::WebUtilityElement::set_UnicodeEncodingConformance(::System::Net::Configuration::UnicodeEncodingConformance  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::WebUtilityElement*>(),
                        {"set_UnicodeEncodingConformance", {}, {::i2c::type_of<::System::Net::Configuration::UnicodeEncodingConformance>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Net::Configuration::WebUtilityElement* System::Net::Configuration::WebUtilityElement::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Configuration::WebUtilityElement*>());
}
// Ctor Parameters []
constexpr ::System::Net::Configuration::WebUtilityElement::WebUtilityElement()   {
}
