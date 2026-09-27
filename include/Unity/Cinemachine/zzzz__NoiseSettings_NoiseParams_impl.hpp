#pragma once
// IWYU pragma private; include "Unity/Cinemachine/NoiseSettings_NoiseParams.hpp"
#include "Unity/Cinemachine/zzzz__NoiseSettings_NoiseParams_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NoiseSettings_NoiseParams.GetValueAt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::NoiseSettings_NoiseParams::*)(float_t, float_t)>(&::GlobalNamespace::NoiseSettings_NoiseParams::GetValueAt)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xaeb917c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NoiseSettings_NoiseParams>(),
                        {"GetValueAt", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline float_t GlobalNamespace::NoiseSettings_NoiseParams::GetValueAt(float_t  time, float_t  timeOffset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NoiseSettings_NoiseParams>(),
                        {"GetValueAt", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method, time, timeOffset);
}
// Ctor Parameters [CppParam { name: "Frequency", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Amplitude", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Constant", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::NoiseSettings_NoiseParams::NoiseSettings_NoiseParams(float_t  Frequency, float_t  Amplitude, bool  Constant) noexcept  {
this->Frequency = Frequency;
this->Amplitude = Amplitude;
this->Constant = Constant;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NoiseSettings_NoiseParams::NoiseSettings_NoiseParams()   {
}
