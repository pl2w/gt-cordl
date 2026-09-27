#pragma once
// IWYU pragma private; include "System/Configuration/SettingsSerializeAsAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "System/Configuration/zzzz__SettingsSerializeAsAttribute_def.hpp"
#include "System/Configuration/zzzz__SettingsSerializeAs_def.hpp"
//  Writing Method size for method: ::System::Configuration::SettingsSerializeAsAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::SettingsSerializeAsAttribute::*)(::System::Configuration::SettingsSerializeAs)>(&::System::Configuration::SettingsSerializeAsAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xacfd750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsSerializeAsAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Configuration::SettingsSerializeAs>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Configuration::SettingsSerializeAsAttribute.get_SerializeAs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Configuration::SettingsSerializeAs (::System::Configuration::SettingsSerializeAsAttribute::*)()>(&::System::Configuration::SettingsSerializeAsAttribute::get_SerializeAs)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfd754;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsSerializeAsAttribute*>(),
                        {"get_SerializeAs", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void System::Configuration::SettingsSerializeAsAttribute::_ctor(::System::Configuration::SettingsSerializeAs  serializeAs)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsSerializeAsAttribute*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Configuration::SettingsSerializeAs>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, serializeAs);
}
inline ::System::Configuration::SettingsSerializeAs System::Configuration::SettingsSerializeAsAttribute::get_SerializeAs()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsSerializeAsAttribute*>(),
                        {"get_SerializeAs", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Configuration::SettingsSerializeAs>(this, ___internal_method);
}
inline ::System::Configuration::SettingsSerializeAsAttribute* System::Configuration::SettingsSerializeAsAttribute::New_ctor(::System::Configuration::SettingsSerializeAs  serializeAs)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Configuration::SettingsSerializeAsAttribute*>(serializeAs));
}
// Ctor Parameters []
constexpr ::System::Configuration::SettingsSerializeAsAttribute::SettingsSerializeAsAttribute()   {
}
