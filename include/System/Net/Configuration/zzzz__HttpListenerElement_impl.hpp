#pragma once
// IWYU pragma private; include "System/Net/Configuration/HttpListenerElement.hpp"
#include "System/Configuration/zzzz__ConfigurationElement_impl.hpp"
#include "System/Net/Configuration/zzzz__HttpListenerElement_def.hpp"
#include "System/Configuration/zzzz__ConfigurationPropertyCollection_def.hpp"
#include "System/Net/Configuration/zzzz__HttpListenerTimeoutsElement_def.hpp"
//  Writing Method size for method: ::System::Net::Configuration::HttpListenerElement._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Configuration::HttpListenerElement::*)()>(&::System::Net::Configuration::HttpListenerElement::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf9128;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::HttpListenerElement*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::HttpListenerElement.get_Properties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Configuration::ConfigurationPropertyCollection* (::System::Net::Configuration::HttpListenerElement::*)()>(&::System::Net::Configuration::HttpListenerElement::get_Properties)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf9160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::Configuration::HttpListenerElement*>(),
                    {::i2c::class_of<::System::Net::Configuration::HttpListenerElement*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::HttpListenerElement.get_Timeouts
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Net::Configuration::HttpListenerTimeoutsElement* (::System::Net::Configuration::HttpListenerElement::*)()>(&::System::Net::Configuration::HttpListenerElement::get_Timeouts)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf9198;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::HttpListenerElement*>(),
                        {"get_Timeouts", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::HttpListenerElement.get_UnescapeRequestUrl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::Configuration::HttpListenerElement::*)()>(&::System::Net::Configuration::HttpListenerElement::get_UnescapeRequestUrl)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf91d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::HttpListenerElement*>(),
                        {"get_UnescapeRequestUrl", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void System::Net::Configuration::HttpListenerElement::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::HttpListenerElement*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Configuration::ConfigurationPropertyCollection* System::Net::Configuration::HttpListenerElement::get_Properties()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::Configuration::HttpListenerElement*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Configuration::ConfigurationPropertyCollection*>(this, ___internal_method);
}
inline ::System::Net::Configuration::HttpListenerTimeoutsElement* System::Net::Configuration::HttpListenerElement::get_Timeouts()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::HttpListenerElement*>(),
                        {"get_Timeouts", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Net::Configuration::HttpListenerTimeoutsElement*>(this, ___internal_method);
}
inline bool System::Net::Configuration::HttpListenerElement::get_UnescapeRequestUrl()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::HttpListenerElement*>(),
                        {"get_UnescapeRequestUrl", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Net::Configuration::HttpListenerElement* System::Net::Configuration::HttpListenerElement::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Configuration::HttpListenerElement*>());
}
// Ctor Parameters []
constexpr ::System::Net::Configuration::HttpListenerElement::HttpListenerElement()   {
}
