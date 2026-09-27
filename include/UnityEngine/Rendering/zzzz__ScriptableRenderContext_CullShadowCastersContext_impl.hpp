#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/ScriptableRenderContext_CullShadowCastersContext.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_CullShadowCastersContext_def.hpp"
#include "UnityEngine/Rendering/zzzz__LightShadowCasterCullingInfo_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShadowSplitData_def.hpp"
// Ctor Parameters [CppParam { name: "cullResults", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "splitBuffer", ty: "::UnityEngine::Rendering::ShadowSplitData*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "splitBufferLength", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "perLightInfos", ty: "::UnityEngine::Rendering::LightShadowCasterCullingInfo*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "perLightInfoCount", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::ScriptableRenderContext_CullShadowCastersContext::ScriptableRenderContext_CullShadowCastersContext(::System::IntPtr  cullResults, ::UnityEngine::Rendering::ShadowSplitData*  splitBuffer, int32_t  splitBufferLength, ::UnityEngine::Rendering::LightShadowCasterCullingInfo*  perLightInfos, int32_t  perLightInfoCount) noexcept  {
this->cullResults = cullResults;
this->splitBuffer = splitBuffer;
this->splitBufferLength = splitBufferLength;
this->perLightInfos = perLightInfos;
this->perLightInfoCount = perLightInfoCount;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ScriptableRenderContext_CullShadowCastersContext::ScriptableRenderContext_CullShadowCastersContext()   {
}
