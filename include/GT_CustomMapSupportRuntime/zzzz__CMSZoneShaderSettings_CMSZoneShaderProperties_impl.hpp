#pragma once
// IWYU pragma private; include "GT_CustomMapSupportRuntime/CMSZoneShaderSettings_CMSZoneShaderProperties.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__CMSZoneShaderSettings_CMSZoneShaderProperties_def.hpp"
#include "UnityEngine/zzzz__Texture2D_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
// Ctor Parameters [CppParam { name: "isInitialized", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "groundFogColor", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "groundFogDepthFadeSize", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "groundFogHeightPlane", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "groundFogHeight", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "groundFogHeightFadeSize", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "zoneLiquidType", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "liquidShape", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "liquidShapeRadius", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "liquidBottomTransform", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "zoneLiquidUVScale", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "underwaterTintColor", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "underwaterFogColor", ty: "::UnityEngine::Color", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "underwaterFogParams", ty: "::UnityEngine::Vector4", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "underwaterCausticsParams", ty: "::UnityEngine::Vector4", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "underwaterCausticsTexture", ty: "::UnityW<::UnityEngine::Texture2D>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "underwaterEffectsDistanceToSurfaceFade", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "liquidResidueTex", ty: "::UnityW<::UnityEngine::Texture2D>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "mainWaterSurfacePlane", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "zoneWeatherMapDissolveProgress", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::CMSZoneShaderSettings_CMSZoneShaderProperties::CMSZoneShaderSettings_CMSZoneShaderProperties(bool  isInitialized, ::UnityEngine::Color  groundFogColor, float_t  groundFogDepthFadeSize, ::UnityW<::UnityEngine::Transform>  groundFogHeightPlane, float_t  groundFogHeight, float_t  groundFogHeightFadeSize, int32_t  zoneLiquidType, int32_t  liquidShape, float_t  liquidShapeRadius, ::UnityW<::UnityEngine::Transform>  liquidBottomTransform, float_t  zoneLiquidUVScale, ::UnityEngine::Color  underwaterTintColor, ::UnityEngine::Color  underwaterFogColor, ::UnityEngine::Vector4  underwaterFogParams, ::UnityEngine::Vector4  underwaterCausticsParams, ::UnityW<::UnityEngine::Texture2D>  underwaterCausticsTexture, ::UnityEngine::Vector2  underwaterEffectsDistanceToSurfaceFade, ::UnityW<::UnityEngine::Texture2D>  liquidResidueTex, ::UnityW<::UnityEngine::Transform>  mainWaterSurfacePlane, float_t  zoneWeatherMapDissolveProgress) noexcept  {
this->isInitialized = isInitialized;
this->groundFogColor = groundFogColor;
this->groundFogDepthFadeSize = groundFogDepthFadeSize;
this->groundFogHeightPlane = groundFogHeightPlane;
this->groundFogHeight = groundFogHeight;
this->groundFogHeightFadeSize = groundFogHeightFadeSize;
this->zoneLiquidType = zoneLiquidType;
this->liquidShape = liquidShape;
this->liquidShapeRadius = liquidShapeRadius;
this->liquidBottomTransform = liquidBottomTransform;
this->zoneLiquidUVScale = zoneLiquidUVScale;
this->underwaterTintColor = underwaterTintColor;
this->underwaterFogColor = underwaterFogColor;
this->underwaterFogParams = underwaterFogParams;
this->underwaterCausticsParams = underwaterCausticsParams;
this->underwaterCausticsTexture = underwaterCausticsTexture;
this->underwaterEffectsDistanceToSurfaceFade = underwaterEffectsDistanceToSurfaceFade;
this->liquidResidueTex = liquidResidueTex;
this->mainWaterSurfacePlane = mainWaterSurfacePlane;
this->zoneWeatherMapDissolveProgress = zoneWeatherMapDissolveProgress;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::CMSZoneShaderSettings_CMSZoneShaderProperties::CMSZoneShaderSettings_CMSZoneShaderProperties()   {
}
