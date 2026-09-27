#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/LightCookieManager_LightCookieMapping.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__LightCookieManager_LightCookieMapping_def.hpp"
#include "System/zzzz__Func_3_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__LightCookieManager_def.hpp"
#include "UnityEngine/zzzz__Light_def.hpp"
inline void GlobalNamespace::LightCookieManager_LightCookieMapping::setStaticF_s_CompareByCookieSize(::System::Func_3<::GlobalNamespace::LightCookieManager_LightCookieMapping,::GlobalNamespace::LightCookieManager_LightCookieMapping,int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_3<::GlobalNamespace::LightCookieManager_LightCookieMapping,::GlobalNamespace::LightCookieManager_LightCookieMapping,int32_t>*, "s_CompareByCookieSize", ::GlobalNamespace::LightCookieManager_LightCookieMapping>(std::forward<::System::Func_3<::GlobalNamespace::LightCookieManager_LightCookieMapping,::GlobalNamespace::LightCookieManager_LightCookieMapping,int32_t>*>(value));
}
inline ::System::Func_3<::GlobalNamespace::LightCookieManager_LightCookieMapping,::GlobalNamespace::LightCookieManager_LightCookieMapping,int32_t>* GlobalNamespace::LightCookieManager_LightCookieMapping::getStaticF_s_CompareByCookieSize()  {
return ::cordl_internals::getStaticField<::System::Func_3<::GlobalNamespace::LightCookieManager_LightCookieMapping,::GlobalNamespace::LightCookieManager_LightCookieMapping,int32_t>*, "s_CompareByCookieSize", ::GlobalNamespace::LightCookieManager_LightCookieMapping>();
}
inline void GlobalNamespace::LightCookieManager_LightCookieMapping::setStaticF_s_CompareByBufferIndex(::System::Func_3<::GlobalNamespace::LightCookieManager_LightCookieMapping,::GlobalNamespace::LightCookieManager_LightCookieMapping,int32_t>*  value)  {
::cordl_internals::setStaticField<::System::Func_3<::GlobalNamespace::LightCookieManager_LightCookieMapping,::GlobalNamespace::LightCookieManager_LightCookieMapping,int32_t>*, "s_CompareByBufferIndex", ::GlobalNamespace::LightCookieManager_LightCookieMapping>(std::forward<::System::Func_3<::GlobalNamespace::LightCookieManager_LightCookieMapping,::GlobalNamespace::LightCookieManager_LightCookieMapping,int32_t>*>(value));
}
inline ::System::Func_3<::GlobalNamespace::LightCookieManager_LightCookieMapping,::GlobalNamespace::LightCookieManager_LightCookieMapping,int32_t>* GlobalNamespace::LightCookieManager_LightCookieMapping::getStaticF_s_CompareByBufferIndex()  {
return ::cordl_internals::getStaticField<::System::Func_3<::GlobalNamespace::LightCookieManager_LightCookieMapping,::GlobalNamespace::LightCookieManager_LightCookieMapping,int32_t>*, "s_CompareByBufferIndex", ::GlobalNamespace::LightCookieManager_LightCookieMapping>();
}
// Ctor Parameters [CppParam { name: "visibleLightIndex", ty: "uint16_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "lightBufferIndex", ty: "uint16_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "light", ty: "::UnityW<::UnityEngine::Light>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::LightCookieManager_LightCookieMapping::LightCookieManager_LightCookieMapping(uint16_t  visibleLightIndex, uint16_t  lightBufferIndex, ::UnityW<::UnityEngine::Light>  light) noexcept  {
this->visibleLightIndex = visibleLightIndex;
this->lightBufferIndex = lightBufferIndex;
this->light = light;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::LightCookieManager_LightCookieMapping::LightCookieManager_LightCookieMapping()   {
}
