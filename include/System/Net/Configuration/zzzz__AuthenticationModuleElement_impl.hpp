#pragma once
// IWYU pragma private; include "System/Net/Configuration/AuthenticationModuleElement.hpp"
#include "System/Configuration/zzzz__ConfigurationElement_impl.hpp"
#include "System/Net/Configuration/zzzz__AuthenticationModuleElement_def.hpp"
#include "System/Configuration/zzzz__ConfigurationPropertyCollection_def.hpp"
//  Writing Method size for method: ::System::Net::Configuration::AuthenticationModuleElement._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Configuration::AuthenticationModuleElement::*)()>(&::System::Net::Configuration::AuthenticationModuleElement::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf7918;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::AuthenticationModuleElement*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::AuthenticationModuleElement._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Configuration::AuthenticationModuleElement::*)(::StringW)>(&::System::Net::Configuration::AuthenticationModuleElement::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf7950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::AuthenticationModuleElement*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::AuthenticationModuleElement.get_Properties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Configuration::ConfigurationPropertyCollection* (::System::Net::Configuration::AuthenticationModuleElement::*)()>(&::System::Net::Configuration::AuthenticationModuleElement::get_Properties)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf7988;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Net::Configuration::AuthenticationModuleElement*>(),
                    {::i2c::class_of<::System::Net::Configuration::AuthenticationModuleElement*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::AuthenticationModuleElement.get_Type
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Net::Configuration::AuthenticationModuleElement::*)()>(&::System::Net::Configuration::AuthenticationModuleElement::get_Type)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf79c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::AuthenticationModuleElement*>(),
                        {"get_Type", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Configuration::AuthenticationModuleElement.set_Type
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Configuration::AuthenticationModuleElement::*)(::StringW)>(&::System::Net::Configuration::AuthenticationModuleElement::set_Type)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf79f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::AuthenticationModuleElement*>(),
                        {"set_Type", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void System::Net::Configuration::AuthenticationModuleElement::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::AuthenticationModuleElement*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::Configuration::AuthenticationModuleElement::_ctor(::StringW  typeName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::AuthenticationModuleElement*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, typeName);
}
inline ::System::Configuration::ConfigurationPropertyCollection* System::Net::Configuration::AuthenticationModuleElement::get_Properties()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Net::Configuration::AuthenticationModuleElement*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Configuration::ConfigurationPropertyCollection*>(this, ___internal_method);
}
inline ::StringW System::Net::Configuration::AuthenticationModuleElement::get_Type()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::AuthenticationModuleElement*>(),
                        {"get_Type", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Net::Configuration::AuthenticationModuleElement::set_Type(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Net::Configuration::AuthenticationModuleElement*>(),
                        {"set_Type", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Net::Configuration::AuthenticationModuleElement* System::Net::Configuration::AuthenticationModuleElement::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Configuration::AuthenticationModuleElement*>());
}
inline ::System::Net::Configuration::AuthenticationModuleElement* System::Net::Configuration::AuthenticationModuleElement::New_ctor(::StringW  typeName)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Configuration::AuthenticationModuleElement*>(typeName));
}
// Ctor Parameters []
constexpr ::System::Net::Configuration::AuthenticationModuleElement::AuthenticationModuleElement()   {
}
