#pragma once
// IWYU pragma private; include "System/Configuration/ConfigurationSettings.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Configuration/zzzz__ConfigurationSettings_def.hpp"
#include "System/Collections/Specialized/zzzz__NameValueCollection_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::System::Configuration::ConfigurationSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::ConfigurationSettings::*)()>(&::System::Configuration::ConfigurationSettings::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfc888;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::ConfigurationSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::ConfigurationSettings.get_AppSettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Specialized::NameValueCollection* (*)()>(&::System::Configuration::ConfigurationSettings::get_AppSettings)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfc8c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::ConfigurationSettings*>(),
                        {"get_AppSettings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::ConfigurationSettings.GetConfig
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (*)(::StringW)>(&::System::Configuration::ConfigurationSettings::GetConfig)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfc8f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::ConfigurationSettings*>(),
                        {"GetConfig", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
inline void System::Configuration::ConfigurationSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::ConfigurationSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Specialized::NameValueCollection* System::Configuration::ConfigurationSettings::get_AppSettings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::ConfigurationSettings*>(),
                        {"get_AppSettings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Specialized::NameValueCollection*>(nullptr, ___internal_method);
}
inline ::System::Object* System::Configuration::ConfigurationSettings::GetConfig(::StringW  sectionName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::ConfigurationSettings*>(),
                        {"GetConfig", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Object*>(nullptr, ___internal_method, sectionName);
}
inline ::System::Configuration::ConfigurationSettings* System::Configuration::ConfigurationSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Configuration::ConfigurationSettings*>());
}
// Ctor Parameters []
constexpr ::System::Configuration::ConfigurationSettings::ConfigurationSettings()   {
}
