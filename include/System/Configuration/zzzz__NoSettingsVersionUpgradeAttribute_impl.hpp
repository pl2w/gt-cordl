#pragma once
// IWYU pragma private; include "System/Configuration/NoSettingsVersionUpgradeAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Configuration/zzzz__NoSettingsVersionUpgradeAttribute_def.hpp"
//  Writing Method size for method: ::System::Configuration::NoSettingsVersionUpgradeAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::NoSettingsVersionUpgradeAttribute::*)()>(&::System::Configuration::NoSettingsVersionUpgradeAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xacfd114;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::NoSettingsVersionUpgradeAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void System::Configuration::NoSettingsVersionUpgradeAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::NoSettingsVersionUpgradeAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Configuration::NoSettingsVersionUpgradeAttribute* System::Configuration::NoSettingsVersionUpgradeAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Configuration::NoSettingsVersionUpgradeAttribute*>());
}
// Ctor Parameters []
constexpr ::System::Configuration::NoSettingsVersionUpgradeAttribute::NoSettingsVersionUpgradeAttribute()   {
}
