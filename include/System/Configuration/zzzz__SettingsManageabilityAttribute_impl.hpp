#pragma once
// IWYU pragma private; include "System/Configuration/SettingsManageabilityAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Configuration/zzzz__SettingsManageabilityAttribute_def.hpp"
#include "System/Configuration/zzzz__SettingsManageability_def.hpp"
//  Writing Method size for method: ::System::Configuration::SettingsManageabilityAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::SettingsManageabilityAttribute::*)(::System::Configuration::SettingsManageability)>(&::System::Configuration::SettingsManageabilityAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xacfd434;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsManageabilityAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Configuration::SettingsManageability>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingsManageabilityAttribute.get_Manageability
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Configuration::SettingsManageability (::System::Configuration::SettingsManageabilityAttribute::*)()>(&::System::Configuration::SettingsManageabilityAttribute::get_Manageability)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfd438;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsManageabilityAttribute*>(),
                        {"get_Manageability", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void System::Configuration::SettingsManageabilityAttribute::_ctor(::System::Configuration::SettingsManageability  manageability)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsManageabilityAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Configuration::SettingsManageability>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, manageability);
}
inline ::System::Configuration::SettingsManageability System::Configuration::SettingsManageabilityAttribute::get_Manageability()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsManageabilityAttribute*>(),
                        {"get_Manageability", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Configuration::SettingsManageability>(this, ___internal_method);
}
inline ::System::Configuration::SettingsManageabilityAttribute* System::Configuration::SettingsManageabilityAttribute::New_ctor(::System::Configuration::SettingsManageability  manageability)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Configuration::SettingsManageabilityAttribute*>(manageability));
}
// Ctor Parameters []
constexpr ::System::Configuration::SettingsManageabilityAttribute::SettingsManageabilityAttribute()   {
}
