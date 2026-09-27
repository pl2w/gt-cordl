#pragma once
// IWYU pragma private; include "System/Configuration/ClientSettingsSection.hpp"
#include "System/Configuration/zzzz__ConfigurationSection_impl.hpp"
#include "System/Configuration/zzzz__ClientSettingsSection_def.hpp"
#include "System/Configuration/zzzz__ConfigurationPropertyCollection_def.hpp"
#include "System/Configuration/zzzz__SettingElementCollection_def.hpp"
//  Writing Method size for method: ::System::Configuration::ClientSettingsSection._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::ClientSettingsSection::*)()>(&::System::Configuration::ClientSettingsSection::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfc1c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::ClientSettingsSection*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::ClientSettingsSection.get_Properties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Configuration::ConfigurationPropertyCollection* (::System::Configuration::ClientSettingsSection::*)()>(&::System::Configuration::ClientSettingsSection::get_Properties)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfc1f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::System::Configuration::ClientSettingsSection*>(),
                    {::i2c::class_of<::System::Configuration::ClientSettingsSection*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::ClientSettingsSection.get_Settings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Configuration::SettingElementCollection* (::System::Configuration::ClientSettingsSection::*)()>(&::System::Configuration::ClientSettingsSection::get_Settings)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfc230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::ClientSettingsSection*>(),
                        {"get_Settings", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void System::Configuration::ClientSettingsSection::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::ClientSettingsSection*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Configuration::ConfigurationPropertyCollection* System::Configuration::ClientSettingsSection::get_Properties()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::System::Configuration::ClientSettingsSection*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Configuration::ConfigurationPropertyCollection*>(this, ___internal_method);
}
inline ::System::Configuration::SettingElementCollection* System::Configuration::ClientSettingsSection::get_Settings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::ClientSettingsSection*>(),
                        {"get_Settings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Configuration::SettingElementCollection*>(this, ___internal_method);
}
inline ::System::Configuration::ClientSettingsSection* System::Configuration::ClientSettingsSection::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Configuration::ClientSettingsSection*>());
}
// Ctor Parameters []
constexpr ::System::Configuration::ClientSettingsSection::ClientSettingsSection()   {
}
