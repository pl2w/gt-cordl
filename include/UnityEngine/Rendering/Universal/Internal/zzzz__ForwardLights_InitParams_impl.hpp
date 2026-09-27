#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/Internal/ForwardLights_InitParams.hpp"
#include "UnityEngine/Rendering/Universal/Internal/zzzz__ForwardLights_InitParams_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__LightCookieManager_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ForwardLights_InitParams.Create
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ForwardLights_InitParams (*)()>(&::GlobalNamespace::ForwardLights_InitParams::Create)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xb2d7d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ForwardLights_InitParams>(),
                        {"Create", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::ForwardLights_InitParams GlobalNamespace::ForwardLights_InitParams::Create()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::ForwardLights_InitParams>(),
                        {"Create", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ForwardLights_InitParams>(nullptr, ___internal_method);
}
// Ctor Parameters [CppParam { name: "lightCookieManager", ty: "::UnityEngine::Rendering::Universal::LightCookieManager*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "forwardPlus", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ForwardLights_InitParams::ForwardLights_InitParams(::UnityEngine::Rendering::Universal::LightCookieManager*  lightCookieManager, bool  forwardPlus) noexcept  {
this->lightCookieManager = lightCookieManager;
this->forwardPlus = forwardPlus;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ForwardLights_InitParams::ForwardLights_InitParams()   {
}
