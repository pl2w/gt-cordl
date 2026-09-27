#pragma once
// IWYU pragma private; include "System/Configuration/SettingsProviderAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Configuration/zzzz__SettingsProviderAttribute_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Configuration::SettingsProviderAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::SettingsProviderAttribute::*)(::StringW)>(&::System::Configuration::SettingsProviderAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xacfd710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsProviderAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingsProviderAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::SettingsProviderAttribute::*)(::System::Type*)>(&::System::Configuration::SettingsProviderAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xacfd714;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsProviderAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingsProviderAttribute.get_ProviderTypeName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Configuration::SettingsProviderAttribute::*)()>(&::System::Configuration::SettingsProviderAttribute::get_ProviderTypeName)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfd718;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsProviderAttribute*>(),
                        {"get_ProviderTypeName", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void System::Configuration::SettingsProviderAttribute::_ctor(::StringW  providerTypeName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsProviderAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, providerTypeName);
}
inline void System::Configuration::SettingsProviderAttribute::_ctor(::System::Type*  providerType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsProviderAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, providerType);
}
inline ::StringW System::Configuration::SettingsProviderAttribute::get_ProviderTypeName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsProviderAttribute*>(),
                        {"get_ProviderTypeName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Configuration::SettingsProviderAttribute* System::Configuration::SettingsProviderAttribute::New_ctor(::StringW  providerTypeName)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Configuration::SettingsProviderAttribute*>(providerTypeName));
}
inline ::System::Configuration::SettingsProviderAttribute* System::Configuration::SettingsProviderAttribute::New_ctor(::System::Type*  providerType)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Configuration::SettingsProviderAttribute*>(providerType));
}
// Ctor Parameters []
constexpr ::System::Configuration::SettingsProviderAttribute::SettingsProviderAttribute()   {
}
