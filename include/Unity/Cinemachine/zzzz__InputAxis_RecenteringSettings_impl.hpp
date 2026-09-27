#pragma once
// IWYU pragma private; include "Unity/Cinemachine/InputAxis_RecenteringSettings.hpp"
#include "Unity/Cinemachine/zzzz__InputAxis_RecenteringSettings_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::InputAxis_RecenteringSettings.get_Default
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::InputAxis_RecenteringSettings (*)()>(&::GlobalNamespace::InputAxis_RecenteringSettings::get_Default)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xaeb8278;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputAxis_RecenteringSettings>(),
                        {"get_Default", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::InputAxis_RecenteringSettings.Validate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InputAxis_RecenteringSettings::*)()>(&::GlobalNamespace::InputAxis_RecenteringSettings::Validate)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xaeb7dfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputAxis_RecenteringSettings>(),
                        {"Validate", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::InputAxis_RecenteringSettings GlobalNamespace::InputAxis_RecenteringSettings::get_Default()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputAxis_RecenteringSettings>(),
                        {"get_Default", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::InputAxis_RecenteringSettings>(nullptr, ___internal_method);
}
inline void GlobalNamespace::InputAxis_RecenteringSettings::Validate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::InputAxis_RecenteringSettings>(),
                        {"Validate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "Enabled", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Wait", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Time", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::InputAxis_RecenteringSettings::InputAxis_RecenteringSettings(bool  Enabled, float_t  Wait, float_t  Time) noexcept  {
this->Enabled = Enabled;
this->Wait = Wait;
this->Time = Time;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InputAxis_RecenteringSettings::InputAxis_RecenteringSettings()   {
}
