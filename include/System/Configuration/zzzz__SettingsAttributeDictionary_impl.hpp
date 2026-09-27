#pragma once
// IWYU pragma private; include "System/Configuration/SettingsAttributeDictionary.hpp"
#include "System/Collections/zzzz__Hashtable_impl.hpp"
#include "System/Configuration/zzzz__SettingsAttributeDictionary_def.hpp"
//  Writing Method size for method: ::System::Configuration::SettingsAttributeDictionary._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::SettingsAttributeDictionary::*)()>(&::System::Configuration::SettingsAttributeDictionary::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf763c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsAttributeDictionary*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingsAttributeDictionary._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::SettingsAttributeDictionary::*)(::System::Configuration::SettingsAttributeDictionary*)>(&::System::Configuration::SettingsAttributeDictionary::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf7674;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsAttributeDictionary*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Configuration::SettingsAttributeDictionary*>()}}
                    )));
    return ___internal_method;
  }
};
inline void System::Configuration::SettingsAttributeDictionary::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsAttributeDictionary*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Configuration::SettingsAttributeDictionary::_ctor(::System::Configuration::SettingsAttributeDictionary*  attributes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsAttributeDictionary*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Configuration::SettingsAttributeDictionary*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, attributes);
}
inline ::System::Configuration::SettingsAttributeDictionary* System::Configuration::SettingsAttributeDictionary::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Configuration::SettingsAttributeDictionary*>());
}
inline ::System::Configuration::SettingsAttributeDictionary* System::Configuration::SettingsAttributeDictionary::New_ctor(::System::Configuration::SettingsAttributeDictionary*  attributes)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Configuration::SettingsAttributeDictionary*>(attributes));
}
// Ctor Parameters []
constexpr ::System::Configuration::SettingsAttributeDictionary::SettingsAttributeDictionary()   {
}
