#pragma once
// IWYU pragma private; include "System/Configuration/ApplicationSettingsGroup.hpp"
#include "System/Configuration/zzzz__ConfigurationSectionGroup_impl.hpp"
#include "System/Configuration/zzzz__ApplicationSettingsGroup_def.hpp"
//  Writing Method size for method: ::System::Configuration::ApplicationSettingsGroup._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::ApplicationSettingsGroup::*)()>(&::System::Configuration::ApplicationSettingsGroup::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacfc118;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::ApplicationSettingsGroup*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void System::Configuration::ApplicationSettingsGroup::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::ApplicationSettingsGroup*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Configuration::ApplicationSettingsGroup* System::Configuration::ApplicationSettingsGroup::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Configuration::ApplicationSettingsGroup*>());
}
// Ctor Parameters []
constexpr ::System::Configuration::ApplicationSettingsGroup::ApplicationSettingsGroup()   {
}
