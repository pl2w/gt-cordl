#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/UniversalRenderer_RenderPassInputSummary.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderPassEvent_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalRenderer_RenderPassInputSummary_def.hpp"
// Ctor Parameters [CppParam { name: "requiresDepthTexture", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "requiresDepthPrepass", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "requiresNormalsTexture", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "requiresColorTexture", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "requiresMotionVectors", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "requiresDepthNormalAtEvent", ty: "::UnityEngine::Rendering::Universal::RenderPassEvent", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "requiresDepthTextureEarliestEvent", ty: "::UnityEngine::Rendering::Universal::RenderPassEvent", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::UniversalRenderer_RenderPassInputSummary::UniversalRenderer_RenderPassInputSummary(bool  requiresDepthTexture, bool  requiresDepthPrepass, bool  requiresNormalsTexture, bool  requiresColorTexture, bool  requiresMotionVectors, ::UnityEngine::Rendering::Universal::RenderPassEvent  requiresDepthNormalAtEvent, ::UnityEngine::Rendering::Universal::RenderPassEvent  requiresDepthTextureEarliestEvent) noexcept  {
this->requiresDepthTexture = requiresDepthTexture;
this->requiresDepthPrepass = requiresDepthPrepass;
this->requiresNormalsTexture = requiresNormalsTexture;
this->requiresColorTexture = requiresColorTexture;
this->requiresMotionVectors = requiresMotionVectors;
this->requiresDepthNormalAtEvent = requiresDepthNormalAtEvent;
this->requiresDepthTextureEarliestEvent = requiresDepthTextureEarliestEvent;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UniversalRenderer_RenderPassInputSummary::UniversalRenderer_RenderPassInputSummary()   {
}
