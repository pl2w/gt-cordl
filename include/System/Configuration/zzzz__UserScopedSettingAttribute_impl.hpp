#pragma once
// IWYU pragma private; include "System/Configuration/UserScopedSettingAttribute.hpp"
#include "System/Configuration/zzzz__SettingAttribute_impl.hpp"
#include "System/Configuration/zzzz__UserScopedSettingAttribute_def.hpp"
//  Writing Method size for method: ::System::Configuration::UserScopedSettingAttribute._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::UserScopedSettingAttribute::*)()>(&::System::Configuration::UserScopedSettingAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xacfd950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::UserScopedSettingAttribute*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void System::Configuration::UserScopedSettingAttribute::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::UserScopedSettingAttribute*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Configuration::UserScopedSettingAttribute* System::Configuration::UserScopedSettingAttribute::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Configuration::UserScopedSettingAttribute*>());
}
// Ctor Parameters []
constexpr ::System::Configuration::UserScopedSettingAttribute::UserScopedSettingAttribute()   {
}
