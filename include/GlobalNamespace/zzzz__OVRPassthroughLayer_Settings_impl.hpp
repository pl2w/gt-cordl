#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRPassthroughLayer_Settings.hpp"
#include "GlobalNamespace/zzzz__OVRPassthroughLayer_Settings_def.hpp"
#include "UnityEngine/zzzz__Gradient_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRPassthroughLayer_Settings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRPassthroughLayer_Settings::*)(::UnityEngine::Texture2D*, ::UnityEngine::Texture2D*, float_t, float_t, float_t, float_t, ::UnityEngine::Gradient*, float_t, bool)>(&::GlobalNamespace::OVRPassthroughLayer_Settings::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xa60b7a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_Settings>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Gradient*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRPassthroughLayer_Settings::_ctor(::UnityEngine::Texture2D*  colorLutTargetTexture, ::UnityEngine::Texture2D*  colorLutSourceTexture, float_t  saturation, float_t  posterize, float_t  brightness, float_t  contrast, ::UnityEngine::Gradient*  gradient, float_t  lutWeight, bool  flipLutY)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVRPassthroughLayer_Settings>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<::UnityEngine::Texture2D*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Gradient*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, colorLutTargetTexture, colorLutSourceTexture, saturation, posterize, brightness, contrast, gradient, lutWeight, flipLutY);
}
// Ctor Parameters [CppParam { name: "colorLutTargetTexture", ty: "::UnityW<::UnityEngine::Texture2D>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "colorLutSourceTexture", ty: "::UnityW<::UnityEngine::Texture2D>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "saturation", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "posterize", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "brightness", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "contrast", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "gradient", ty: "::UnityEngine::Gradient*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "lutWeight", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "flipLutY", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::OVRPassthroughLayer_Settings::OVRPassthroughLayer_Settings(::UnityW<::UnityEngine::Texture2D>  colorLutTargetTexture, ::UnityW<::UnityEngine::Texture2D>  colorLutSourceTexture, float_t  saturation, float_t  posterize, float_t  brightness, float_t  contrast, ::UnityEngine::Gradient*  gradient, float_t  lutWeight, bool  flipLutY) noexcept  {
this->colorLutTargetTexture = colorLutTargetTexture;
this->colorLutSourceTexture = colorLutSourceTexture;
this->saturation = saturation;
this->posterize = posterize;
this->brightness = brightness;
this->contrast = contrast;
this->gradient = gradient;
this->lutWeight = lutWeight;
this->flipLutY = flipLutY;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRPassthroughLayer_Settings::OVRPassthroughLayer_Settings()   {
}
