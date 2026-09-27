#pragma once
// IWYU pragma private; include "System/Configuration/SettingsGroupNameAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Configuration/zzzz__SettingsGroupNameAttribute_def.hpp"
//  Writing Method size for method: ::System::Configuration::SettingsGroupNameAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::SettingsGroupNameAttribute::*)(::StringW)>(&::System::Configuration::SettingsGroupNameAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xacfd3f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsGroupNameAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingsGroupNameAttribute.get_GroupName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Configuration::SettingsGroupNameAttribute::*)()>(&::System::Configuration::SettingsGroupNameAttribute::get_GroupName)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfd3fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsGroupNameAttribute*>(),
                        {"get_GroupName", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void System::Configuration::SettingsGroupNameAttribute::_ctor(::StringW  groupName)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsGroupNameAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, groupName);
}
inline ::StringW System::Configuration::SettingsGroupNameAttribute::get_GroupName()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsGroupNameAttribute*>(),
                        {"get_GroupName", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Configuration::SettingsGroupNameAttribute* System::Configuration::SettingsGroupNameAttribute::New_ctor(::StringW  groupName)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Configuration::SettingsGroupNameAttribute*>(groupName));
}
// Ctor Parameters []
constexpr ::System::Configuration::SettingsGroupNameAttribute::SettingsGroupNameAttribute()   {
}
