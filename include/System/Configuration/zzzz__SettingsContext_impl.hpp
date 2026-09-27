#pragma once
// IWYU pragma private; include "System/Configuration/SettingsContext.hpp"
#include "System/Collections/zzzz__Hashtable_impl.hpp"
#include "System/Configuration/zzzz__SettingsContext_def.hpp"
//  Writing Method size for method: ::System::Configuration::SettingsContext._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Configuration::SettingsContext::*)()>(&::System::Configuration::SettingsContext::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xacf683c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsContext*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void System::Configuration::SettingsContext::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Configuration::SettingsContext*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Configuration::SettingsContext* System::Configuration::SettingsContext::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Configuration::SettingsContext*>());
}
// Ctor Parameters []
constexpr ::System::Configuration::SettingsContext::SettingsContext()   {
}
