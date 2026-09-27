#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/Internal/DeferredLights_InitParams.hpp"
#include "UnityEngine/Rendering/Universal/Internal/zzzz__DeferredLights_InitParams_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__LightCookieManager_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
// Ctor Parameters [CppParam { name: "stencilDeferredMaterial", ty: "::UnityW<::UnityEngine::Material>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "clusterDeferredMaterial", ty: "::UnityW<::UnityEngine::Material>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "lightCookieManager", ty: "::UnityEngine::Rendering::Universal::LightCookieManager*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "deferredPlus", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::DeferredLights_InitParams::DeferredLights_InitParams(::UnityW<::UnityEngine::Material>  stencilDeferredMaterial, ::UnityW<::UnityEngine::Material>  clusterDeferredMaterial, ::UnityEngine::Rendering::Universal::LightCookieManager*  lightCookieManager, bool  deferredPlus) noexcept  {
this->stencilDeferredMaterial = stencilDeferredMaterial;
this->clusterDeferredMaterial = clusterDeferredMaterial;
this->lightCookieManager = lightCookieManager;
this->deferredPlus = deferredPlus;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::DeferredLights_InitParams::DeferredLights_InitParams()   {
}
