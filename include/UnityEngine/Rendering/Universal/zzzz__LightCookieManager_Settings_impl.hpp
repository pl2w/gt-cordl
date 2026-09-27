#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/LightCookieManager_Settings.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__LightCookieManager_Settings_AtlasSettings_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__LightCookieManager_Settings_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__LightCookieManager_Settings_AtlasSettings_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::LightCookieManager_Settings.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::LightCookieManager_Settings (*)()>(&::GlobalNamespace::LightCookieManager_Settings::Create)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xb257b90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LightCookieManager_Settings>(),
                        {"Create", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::LightCookieManager_Settings GlobalNamespace::LightCookieManager_Settings::Create()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::LightCookieManager_Settings>(),
                        {"Create", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LightCookieManager_Settings>(nullptr, ___internal_method);
}
// Ctor Parameters [CppParam { name: "atlas", ty: "::GlobalNamespace::Settings_LightCookieManager_AtlasSettings", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "maxAdditionalLights", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "cubeOctahedralSizeScale", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "useStructuredBuffer", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::LightCookieManager_Settings::LightCookieManager_Settings(::GlobalNamespace::Settings_LightCookieManager_AtlasSettings  atlas, int32_t  maxAdditionalLights, float_t  cubeOctahedralSizeScale, bool  useStructuredBuffer) noexcept  {
this->atlas = atlas;
this->maxAdditionalLights = maxAdditionalLights;
this->cubeOctahedralSizeScale = cubeOctahedralSizeScale;
this->useStructuredBuffer = useStructuredBuffer;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LightCookieManager_Settings::LightCookieManager_Settings()   {
}
