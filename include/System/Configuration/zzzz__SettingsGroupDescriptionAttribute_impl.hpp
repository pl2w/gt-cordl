#pragma once
// IWYU pragma private; include "System/Configuration/SettingsGroupDescriptionAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Configuration/zzzz__SettingsGroupDescriptionAttribute_def.hpp"
//  Writing Method size for method: ::System::Configuration::SettingsGroupDescriptionAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::SettingsGroupDescriptionAttribute::*)(::StringW)>(&::System::Configuration::SettingsGroupDescriptionAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xacfd3bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsGroupDescriptionAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingsGroupDescriptionAttribute.get_Description
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Configuration::SettingsGroupDescriptionAttribute::*)()>(&::System::Configuration::SettingsGroupDescriptionAttribute::get_Description)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfd3c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsGroupDescriptionAttribute*>(),
                        {"get_Description", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void System::Configuration::SettingsGroupDescriptionAttribute::_ctor(::StringW  description)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsGroupDescriptionAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, description);
}
inline ::StringW System::Configuration::SettingsGroupDescriptionAttribute::get_Description()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsGroupDescriptionAttribute*>(),
                        {"get_Description", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Configuration::SettingsGroupDescriptionAttribute* System::Configuration::SettingsGroupDescriptionAttribute::New_ctor(::StringW  description)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Configuration::SettingsGroupDescriptionAttribute*>(description));
}
// Ctor Parameters []
constexpr ::System::Configuration::SettingsGroupDescriptionAttribute::SettingsGroupDescriptionAttribute()   {
}
