#pragma once
// IWYU pragma private; include "System/Configuration/SettingsLoadedEventArgs.hpp"
#include "System/zzzz__EventArgs_impl.hpp"
#include "System/Configuration/zzzz__SettingsLoadedEventArgs_def.hpp"
#include "System/Configuration/zzzz__SettingsProvider_def.hpp"
//  Writing Method size for method: ::System::Configuration::SettingsLoadedEventArgs._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::SettingsLoadedEventArgs::*)(::System::Configuration::SettingsProvider*)>(&::System::Configuration::SettingsLoadedEventArgs::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfbfc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsLoadedEventArgs*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Configuration::SettingsProvider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingsLoadedEventArgs.get_Provider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Configuration::SettingsProvider* (::System::Configuration::SettingsLoadedEventArgs::*)()>(&::System::Configuration::SettingsLoadedEventArgs::get_Provider)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfc000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsLoadedEventArgs*>(),
                        {"get_Provider", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void System::Configuration::SettingsLoadedEventArgs::_ctor(::System::Configuration::SettingsProvider*  provider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsLoadedEventArgs*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Configuration::SettingsProvider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, provider);
}
inline ::System::Configuration::SettingsProvider* System::Configuration::SettingsLoadedEventArgs::get_Provider()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsLoadedEventArgs*>(),
                        {"get_Provider", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Configuration::SettingsProvider*>(this, ___internal_method);
}
inline ::System::Configuration::SettingsLoadedEventArgs* System::Configuration::SettingsLoadedEventArgs::New_ctor(::System::Configuration::SettingsProvider*  provider)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Configuration::SettingsLoadedEventArgs*>(provider));
}
// Ctor Parameters []
constexpr ::System::Configuration::SettingsLoadedEventArgs::SettingsLoadedEventArgs()   {
}
