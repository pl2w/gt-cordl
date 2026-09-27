#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/ScreenSpaceAmbientOcclusionPass_SSAOMaterialParams.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScreenSpaceAmbientOcclusionPass_SSAOMaterialParams_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScreenSpaceAmbientOcclusionSettings_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ScreenSpaceAmbientOcclusionPass_SSAOMaterialParams._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ScreenSpaceAmbientOcclusionPass_SSAOMaterialParams::*)(::by_ref<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings*>, bool)>(&::GlobalNamespace::ScreenSpaceAmbientOcclusionPass_SSAOMaterialParams::_ctor)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xb2820c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ScreenSpaceAmbientOcclusionPass_SSAOMaterialParams>(),
                        {".ctor", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings*>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScreenSpaceAmbientOcclusionPass_SSAOMaterialParams.Equals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::ScreenSpaceAmbientOcclusionPass_SSAOMaterialParams::*)(::by_ref<::GlobalNamespace::ScreenSpaceAmbientOcclusionPass_SSAOMaterialParams>)>(&::GlobalNamespace::ScreenSpaceAmbientOcclusionPass_SSAOMaterialParams::Equals)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xb2821a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ScreenSpaceAmbientOcclusionPass_SSAOMaterialParams>(),
                        {"Equals", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::ScreenSpaceAmbientOcclusionPass_SSAOMaterialParams>>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::ScreenSpaceAmbientOcclusionPass_SSAOMaterialParams::_ctor(::by_ref<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings*>  settings, bool  isOrthographic)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ScreenSpaceAmbientOcclusionPass_SSAOMaterialParams>(),
                        {".ctor", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings*>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, settings, isOrthographic);
}
inline bool GlobalNamespace::ScreenSpaceAmbientOcclusionPass_SSAOMaterialParams::Equals(::by_ref<::GlobalNamespace::ScreenSpaceAmbientOcclusionPass_SSAOMaterialParams>  other)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ScreenSpaceAmbientOcclusionPass_SSAOMaterialParams>(),
                        {"Equals", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::ScreenSpaceAmbientOcclusionPass_SSAOMaterialParams>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
// Ctor Parameters [CppParam { name: "orthographicCamera", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "aoBlueNoise", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "aoInterleavedGradient", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "sampleCountHigh", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "sampleCountMedium", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "sampleCountLow", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "sourceDepthNormals", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "sourceDepthHigh", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "sourceDepthMedium", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "sourceDepthLow", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "ssaoParams", ty: "::UnityEngine::Vector4", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ScreenSpaceAmbientOcclusionPass_SSAOMaterialParams::ScreenSpaceAmbientOcclusionPass_SSAOMaterialParams(bool  orthographicCamera, bool  aoBlueNoise, bool  aoInterleavedGradient, bool  sampleCountHigh, bool  sampleCountMedium, bool  sampleCountLow, bool  sourceDepthNormals, bool  sourceDepthHigh, bool  sourceDepthMedium, bool  sourceDepthLow, ::UnityEngine::Vector4  ssaoParams) noexcept  {
this->orthographicCamera = orthographicCamera;
this->aoBlueNoise = aoBlueNoise;
this->aoInterleavedGradient = aoInterleavedGradient;
this->sampleCountHigh = sampleCountHigh;
this->sampleCountMedium = sampleCountMedium;
this->sampleCountLow = sampleCountLow;
this->sourceDepthNormals = sourceDepthNormals;
this->sourceDepthHigh = sourceDepthHigh;
this->sourceDepthMedium = sourceDepthMedium;
this->sourceDepthLow = sourceDepthLow;
this->ssaoParams = ssaoParams;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ScreenSpaceAmbientOcclusionPass_SSAOMaterialParams::ScreenSpaceAmbientOcclusionPass_SSAOMaterialParams()   {
}
