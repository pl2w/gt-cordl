#pragma once
// IWYU pragma private; include "Unity/Cinemachine/NoiseSettings_TransformNoiseParams.hpp"
#include "Unity/Cinemachine/zzzz__NoiseSettings_NoiseParams_impl.hpp"
#include "Unity/Cinemachine/zzzz__NoiseSettings_TransformNoiseParams_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NoiseSettings_TransformNoiseParams.GetValueAt
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::NoiseSettings_TransformNoiseParams::*)(float_t, ::UnityEngine::Vector3)>(&::GlobalNamespace::NoiseSettings_TransformNoiseParams::GetValueAt)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xaeb8f9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NoiseSettings_TransformNoiseParams>(),
                        {"GetValueAt", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::Vector3 GlobalNamespace::NoiseSettings_TransformNoiseParams::GetValueAt(float_t  time, ::UnityEngine::Vector3  timeOffsets)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::NoiseSettings_TransformNoiseParams>(),
                        {"GetValueAt", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(*this, ___internal_method, time, timeOffsets);
}
// Ctor Parameters [CppParam { name: "X", ty: "::GlobalNamespace::NoiseSettings_NoiseParams", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Y", ty: "::GlobalNamespace::NoiseSettings_NoiseParams", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "Z", ty: "::GlobalNamespace::NoiseSettings_NoiseParams", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::NoiseSettings_TransformNoiseParams::NoiseSettings_TransformNoiseParams(::GlobalNamespace::NoiseSettings_NoiseParams  X, ::GlobalNamespace::NoiseSettings_NoiseParams  Y, ::GlobalNamespace::NoiseSettings_NoiseParams  Z) noexcept  {
this->X = X;
this->Y = Y;
this->Z = Z;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NoiseSettings_TransformNoiseParams::NoiseSettings_TransformNoiseParams()   {
}
