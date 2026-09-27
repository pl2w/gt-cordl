#pragma once
// IWYU pragma private; include "System/Configuration/DefaultSettingValueAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Configuration/zzzz__DefaultSettingValueAttribute_def.hpp"
//  Writing Method size for method: ::System::Configuration::DefaultSettingValueAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::DefaultSettingValueAttribute::*)(::StringW)>(&::System::Configuration::DefaultSettingValueAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xacfca80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::DefaultSettingValueAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::DefaultSettingValueAttribute.get_Value
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Configuration::DefaultSettingValueAttribute::*)()>(&::System::Configuration::DefaultSettingValueAttribute::get_Value)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfca84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::DefaultSettingValueAttribute*>(),
                        {"get_Value", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void System::Configuration::DefaultSettingValueAttribute::_ctor(::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::DefaultSettingValueAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW System::Configuration::DefaultSettingValueAttribute::get_Value()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::DefaultSettingValueAttribute*>(),
                        {"get_Value", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Configuration::DefaultSettingValueAttribute* System::Configuration::DefaultSettingValueAttribute::New_ctor(::StringW  value)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Configuration::DefaultSettingValueAttribute*>(value));
}
// Ctor Parameters []
constexpr ::System::Configuration::DefaultSettingValueAttribute::DefaultSettingValueAttribute()   {
}
