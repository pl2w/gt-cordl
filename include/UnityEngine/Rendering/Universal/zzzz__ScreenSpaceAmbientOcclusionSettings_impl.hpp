#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/ScreenSpaceAmbientOcclusionSettings.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScreenSpaceAmbientOcclusionSettings_AOMethodOptions_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScreenSpaceAmbientOcclusionSettings_AOSampleOption_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScreenSpaceAmbientOcclusionSettings_BlurQualityOptions_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScreenSpaceAmbientOcclusionSettings_DepthSource_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScreenSpaceAmbientOcclusionSettings_NormalQuality_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScreenSpaceAmbientOcclusionSettings_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScreenSpaceAmbientOcclusionSettings_AOMethodOptions_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScreenSpaceAmbientOcclusionSettings_AOSampleOption_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScreenSpaceAmbientOcclusionSettings_BlurQualityOptions_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScreenSpaceAmbientOcclusionSettings_DepthSource_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScreenSpaceAmbientOcclusionSettings_NormalQuality_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::*)()>(&::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xb2815d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::ScreenSpaceAmbientOcclusionSettings_AOMethodOptions& UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::__cordl_internal_get_AOMethod()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AOMethod;
}
constexpr ::GlobalNamespace::ScreenSpaceAmbientOcclusionSettings_AOMethodOptions const& UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::__cordl_internal_get_AOMethod() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AOMethod;
}
constexpr void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::__cordl_internal_set_AOMethod(::GlobalNamespace::ScreenSpaceAmbientOcclusionSettings_AOMethodOptions  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AOMethod = value;
}
constexpr bool& UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::__cordl_internal_get_Downsample()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Downsample;
}
constexpr bool const& UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::__cordl_internal_get_Downsample() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Downsample;
}
constexpr void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::__cordl_internal_set_Downsample(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Downsample = value;
}
constexpr bool& UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::__cordl_internal_get_AfterOpaque()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AfterOpaque;
}
constexpr bool const& UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::__cordl_internal_get_AfterOpaque() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___AfterOpaque;
}
constexpr void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::__cordl_internal_set_AfterOpaque(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___AfterOpaque = value;
}
constexpr ::GlobalNamespace::ScreenSpaceAmbientOcclusionSettings_DepthSource& UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::__cordl_internal_get_Source()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Source;
}
constexpr ::GlobalNamespace::ScreenSpaceAmbientOcclusionSettings_DepthSource const& UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::__cordl_internal_get_Source() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Source;
}
constexpr void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::__cordl_internal_set_Source(::GlobalNamespace::ScreenSpaceAmbientOcclusionSettings_DepthSource  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Source = value;
}
constexpr ::GlobalNamespace::ScreenSpaceAmbientOcclusionSettings_NormalQuality& UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::__cordl_internal_get_NormalSamples()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NormalSamples;
}
constexpr ::GlobalNamespace::ScreenSpaceAmbientOcclusionSettings_NormalQuality const& UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::__cordl_internal_get_NormalSamples() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NormalSamples;
}
constexpr void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::__cordl_internal_set_NormalSamples(::GlobalNamespace::ScreenSpaceAmbientOcclusionSettings_NormalQuality  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NormalSamples = value;
}
constexpr float_t& UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::__cordl_internal_get_Intensity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Intensity;
}
constexpr float_t const& UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::__cordl_internal_get_Intensity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Intensity;
}
constexpr void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::__cordl_internal_set_Intensity(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Intensity = value;
}
constexpr float_t& UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::__cordl_internal_get_DirectLightingStrength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DirectLightingStrength;
}
constexpr float_t const& UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::__cordl_internal_get_DirectLightingStrength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___DirectLightingStrength;
}
constexpr void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::__cordl_internal_set_DirectLightingStrength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___DirectLightingStrength = value;
}
constexpr float_t& UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::__cordl_internal_get_Radius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Radius;
}
constexpr float_t const& UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::__cordl_internal_get_Radius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Radius;
}
constexpr void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::__cordl_internal_set_Radius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Radius = value;
}
constexpr ::GlobalNamespace::ScreenSpaceAmbientOcclusionSettings_AOSampleOption& UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::__cordl_internal_get_Samples()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Samples;
}
constexpr ::GlobalNamespace::ScreenSpaceAmbientOcclusionSettings_AOSampleOption const& UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::__cordl_internal_get_Samples() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Samples;
}
constexpr void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::__cordl_internal_set_Samples(::GlobalNamespace::ScreenSpaceAmbientOcclusionSettings_AOSampleOption  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Samples = value;
}
constexpr ::GlobalNamespace::ScreenSpaceAmbientOcclusionSettings_BlurQualityOptions& UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::__cordl_internal_get_BlurQuality()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BlurQuality;
}
constexpr ::GlobalNamespace::ScreenSpaceAmbientOcclusionSettings_BlurQualityOptions const& UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::__cordl_internal_get_BlurQuality() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BlurQuality;
}
constexpr void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::__cordl_internal_set_BlurQuality(::GlobalNamespace::ScreenSpaceAmbientOcclusionSettings_BlurQualityOptions  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BlurQuality = value;
}
constexpr float_t& UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::__cordl_internal_get_Falloff()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Falloff;
}
constexpr float_t const& UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::__cordl_internal_get_Falloff() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Falloff;
}
constexpr void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::__cordl_internal_set_Falloff(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Falloff = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::__cordl_internal_get_SampleCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SampleCount;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::__cordl_internal_get_SampleCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___SampleCount;
}
constexpr void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::__cordl_internal_set_SampleCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___SampleCount = value;
}
inline void UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings* UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::ScreenSpaceAmbientOcclusionSettings::ScreenSpaceAmbientOcclusionSettings()   {
}
