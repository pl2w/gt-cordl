#pragma once
// IWYU pragma private; include "System/Configuration/SpecialSettingAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Configuration/zzzz__SpecialSettingAttribute_def.hpp"
#include "System/Configuration/zzzz__SpecialSetting_def.hpp"
//  Writing Method size for method: ::System::Configuration::SpecialSettingAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::SpecialSettingAttribute::*)(::System::Configuration::SpecialSetting)>(&::System::Configuration::SpecialSettingAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xacfd7fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SpecialSettingAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Configuration::SpecialSetting>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SpecialSettingAttribute.get_SpecialSetting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Configuration::SpecialSetting (::System::Configuration::SpecialSettingAttribute::*)()>(&::System::Configuration::SpecialSettingAttribute::get_SpecialSetting)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfd800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SpecialSettingAttribute*>(),
                        {"get_SpecialSetting", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void System::Configuration::SpecialSettingAttribute::_ctor(::System::Configuration::SpecialSetting  specialSetting)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SpecialSettingAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Configuration::SpecialSetting>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, specialSetting);
}
inline ::System::Configuration::SpecialSetting System::Configuration::SpecialSettingAttribute::get_SpecialSetting()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SpecialSettingAttribute*>(),
                        {"get_SpecialSetting", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Configuration::SpecialSetting>(this, ___internal_method);
}
inline ::System::Configuration::SpecialSettingAttribute* System::Configuration::SpecialSettingAttribute::New_ctor(::System::Configuration::SpecialSetting  specialSetting)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Configuration::SpecialSettingAttribute*>(specialSetting));
}
// Ctor Parameters []
constexpr ::System::Configuration::SpecialSettingAttribute::SpecialSettingAttribute()   {
}
