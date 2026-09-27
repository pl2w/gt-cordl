#pragma once
// IWYU pragma private; include "System/Configuration/IdnElement.hpp"
#include "System/Configuration/zzzz__ConfigurationElement_impl.hpp"
#include "System/Configuration/zzzz__IdnElement_def.hpp"
#include "System/Configuration/zzzz__ConfigurationPropertyCollection_def.hpp"
#include "System/zzzz__UriIdnScope_def.hpp"
//  Writing Method size for method: ::System::Configuration::IdnElement._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::IdnElement::*)()>(&::System::Configuration::IdnElement::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfcb9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::IdnElement*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::IdnElement.get_Enabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::UriIdnScope (::System::Configuration::IdnElement::*)()>(&::System::Configuration::IdnElement::get_Enabled)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfcbd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::IdnElement*>(),
                        {"get_Enabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::IdnElement.set_Enabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::IdnElement::*)(::System::UriIdnScope)>(&::System::Configuration::IdnElement::set_Enabled)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfcc0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::IdnElement*>(),
                        {"set_Enabled", {}, {::i2c::type_of<::System::UriIdnScope>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::IdnElement.get_Properties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Configuration::ConfigurationPropertyCollection* (::System::Configuration::IdnElement::*)()>(&::System::Configuration::IdnElement::get_Properties)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfcc44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Configuration::IdnElement*>(),
                    {::i2c::class_of<::System::Configuration::IdnElement*>(), 4}
                ));
    return ___internal_method;
  }
};
inline void System::Configuration::IdnElement::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::IdnElement*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::UriIdnScope System::Configuration::IdnElement::get_Enabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::IdnElement*>(),
                        {"get_Enabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::UriIdnScope>(this, ___internal_method);
}
inline void System::Configuration::IdnElement::set_Enabled(::System::UriIdnScope  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::IdnElement*>(),
                        {"set_Enabled", {}, {::i2c::type_of<::System::UriIdnScope>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Configuration::ConfigurationPropertyCollection* System::Configuration::IdnElement::get_Properties()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Configuration::IdnElement*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Configuration::ConfigurationPropertyCollection*>(this, ___internal_method);
}
inline ::System::Configuration::IdnElement* System::Configuration::IdnElement::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Configuration::IdnElement*>());
}
// Ctor Parameters []
constexpr ::System::Configuration::IdnElement::IdnElement()   {
}
