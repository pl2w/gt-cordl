#pragma once
// IWYU pragma private; include "System/Configuration/SchemeSettingElement.hpp"
#include "System/Configuration/zzzz__ConfigurationElement_impl.hpp"
#include "System/Configuration/zzzz__SchemeSettingElement_def.hpp"
#include "System/Configuration/zzzz__ConfigurationPropertyCollection_def.hpp"
#include "System/zzzz__GenericUriParserOptions_def.hpp"
//  Writing Method size for method: ::System::Configuration::SchemeSettingElement._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::SchemeSettingElement::*)()>(&::System::Configuration::SchemeSettingElement::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfd118;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SchemeSettingElement*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SchemeSettingElement.get_GenericUriParserOptions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::GenericUriParserOptions (::System::Configuration::SchemeSettingElement::*)()>(&::System::Configuration::SchemeSettingElement::get_GenericUriParserOptions)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfd150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SchemeSettingElement*>(),
                        {"get_GenericUriParserOptions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SchemeSettingElement.get_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Configuration::SchemeSettingElement::*)()>(&::System::Configuration::SchemeSettingElement::get_Name)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfd188;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SchemeSettingElement*>(),
                        {"get_Name", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SchemeSettingElement.get_Properties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Configuration::ConfigurationPropertyCollection* (::System::Configuration::SchemeSettingElement::*)()>(&::System::Configuration::SchemeSettingElement::get_Properties)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfd1c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Configuration::SchemeSettingElement*>(),
                    {::i2c::class_of<::System::Configuration::SchemeSettingElement*>(), 4}
                ));
    return ___internal_method;
  }
};
inline void System::Configuration::SchemeSettingElement::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SchemeSettingElement*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::GenericUriParserOptions System::Configuration::SchemeSettingElement::get_GenericUriParserOptions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SchemeSettingElement*>(),
                        {"get_GenericUriParserOptions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::GenericUriParserOptions>(this, ___internal_method);
}
inline ::StringW System::Configuration::SchemeSettingElement::get_Name()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SchemeSettingElement*>(),
                        {"get_Name", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Configuration::ConfigurationPropertyCollection* System::Configuration::SchemeSettingElement::get_Properties()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Configuration::SchemeSettingElement*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Configuration::ConfigurationPropertyCollection*>(this, ___internal_method);
}
inline ::System::Configuration::SchemeSettingElement* System::Configuration::SchemeSettingElement::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Configuration::SchemeSettingElement*>());
}
// Ctor Parameters []
constexpr ::System::Configuration::SchemeSettingElement::SchemeSettingElement()   {
}
