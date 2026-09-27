#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/STP_Config.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_impl.hpp"
#include "UnityEngine/Rendering/zzzz__STP_PerViewConfig_impl.hpp"
#include "UnityEngine/zzzz__Vector2Int_impl.hpp"
#include "UnityEngine/Rendering/zzzz__STP_Config_def.hpp"
#include "UnityEngine/Rendering/zzzz__STP_PerViewConfig_def.hpp"
#include "UnityEngine/Rendering/zzzz__STP_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
// Ctor Parameters [CppParam { name: "noiseTexture", ty: "::UnityW<::UnityEngine::Texture2D>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "inputColor", ty: "::UnityEngine::Rendering::RenderGraphModule::TextureHandle", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "inputDepth", ty: "::UnityEngine::Rendering::RenderGraphModule::TextureHandle", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "inputMotion", ty: "::UnityEngine::Rendering::RenderGraphModule::TextureHandle", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "inputStencil", ty: "::UnityEngine::Rendering::RenderGraphModule::TextureHandle", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "debugView", ty: "::UnityEngine::Rendering::RenderGraphModule::TextureHandle", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "destination", ty: "::UnityEngine::Rendering::RenderGraphModule::TextureHandle", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "historyContext", ty: "::UnityEngine::Rendering::STP_HistoryContext*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "enableHwDrs", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "enableTexArray", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "enableMotionScaling", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "nearPlane", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "farPlane", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "frameIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "hasValidHistory", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "stencilMask", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "debugViewIndex", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "deltaTime", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "lastDeltaTime", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "currentImageSize", ty: "::UnityEngine::Vector2Int", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "priorImageSize", ty: "::UnityEngine::Vector2Int", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "outputImageSize", ty: "::UnityEngine::Vector2Int", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "numActiveViews", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "perViewConfigs", ty: "::ArrayW<::GlobalNamespace::STP_PerViewConfig>", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::STP_Config::STP_Config(::UnityW<::UnityEngine::Texture2D>  noiseTexture, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  inputColor, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  inputDepth, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  inputMotion, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  inputStencil, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  debugView, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  destination, ::UnityEngine::Rendering::STP_HistoryContext*  historyContext, bool  enableHwDrs, bool  enableTexArray, bool  enableMotionScaling, float_t  nearPlane, float_t  farPlane, int32_t  frameIndex, bool  hasValidHistory, int32_t  stencilMask, int32_t  debugViewIndex, float_t  deltaTime, float_t  lastDeltaTime, ::UnityEngine::Vector2Int  currentImageSize, ::UnityEngine::Vector2Int  priorImageSize, ::UnityEngine::Vector2Int  outputImageSize, int32_t  numActiveViews, ::ArrayW<::GlobalNamespace::STP_PerViewConfig>  perViewConfigs) noexcept  {
this->noiseTexture = noiseTexture;
this->inputColor = inputColor;
this->inputDepth = inputDepth;
this->inputMotion = inputMotion;
this->inputStencil = inputStencil;
this->debugView = debugView;
this->destination = destination;
this->historyContext = historyContext;
this->enableHwDrs = enableHwDrs;
this->enableTexArray = enableTexArray;
this->enableMotionScaling = enableMotionScaling;
this->nearPlane = nearPlane;
this->farPlane = farPlane;
this->frameIndex = frameIndex;
this->hasValidHistory = hasValidHistory;
this->stencilMask = stencilMask;
this->debugViewIndex = debugViewIndex;
this->deltaTime = deltaTime;
this->lastDeltaTime = lastDeltaTime;
this->currentImageSize = currentImageSize;
this->priorImageSize = priorImageSize;
this->outputImageSize = outputImageSize;
this->numActiveViews = numActiveViews;
this->perViewConfigs = perViewConfigs;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::STP_Config::STP_Config()   {
}
