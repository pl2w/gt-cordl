#pragma once
// IWYU pragma private; include "System/Configuration/SettingAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Configuration/zzzz__SettingAttribute_def.hpp"
//  Writing Method size for method: ::System::Configuration::SettingAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::SettingAttribute::*)()>(&::System::Configuration::SettingAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xacfb694;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void System::Configuration::SettingAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Configuration::SettingAttribute* System::Configuration::SettingAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Configuration::SettingAttribute*>());
}
// Ctor Parameters []
constexpr ::System::Configuration::SettingAttribute::SettingAttribute()   {
}
