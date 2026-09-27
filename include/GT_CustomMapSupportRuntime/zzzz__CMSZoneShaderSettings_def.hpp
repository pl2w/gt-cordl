#pragma once
// IWYU pragma private; include "GT_CustomMapSupportRuntime/CMSZoneShaderSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GT_CustomMapSupportRuntime/zzzz__CMSZoneShaderSettings_ELiquidShape_def.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__CMSZoneShaderSettings_EOverrideMode_def.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__CMSZoneShaderSettings_ETextureOverrideType_def.hpp"
#include "GT_CustomMapSupportRuntime/zzzz__CMSZoneShaderSettings_EZoneLiquidType_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CMSZoneShaderSettings)
namespace GlobalNamespace {
struct CMSZoneShaderSettings_CMSZoneShaderProperties;
}
namespace GlobalNamespace {
struct CMSZoneShaderSettings_ELiquidShape;
}
namespace GlobalNamespace {
struct CMSZoneShaderSettings_EOverrideMode;
}
namespace GlobalNamespace {
struct CMSZoneShaderSettings_ETextureOverrideType;
}
namespace GlobalNamespace {
struct CMSZoneShaderSettings_EZoneLiquidType;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace GT_CustomMapSupportRuntime {
class CMSZoneShaderSettings;
}
// Write type traits
MARK_REF_T(::GT_CustomMapSupportRuntime::CMSZoneShaderSettings*);
DEFINE_IL2CPP_CLASS(::GT_CustomMapSupportRuntime::CMSZoneShaderSettings*, "GT_CustomMapSupportRuntime", "CMSZoneShaderSettings");
// [NullableContext(2)]
// [Nullable(0)]
// Dependencies GT_CustomMapSupportRuntime.CMSZoneShaderSettings::ELiquidShape, GT_CustomMapSupportRuntime.CMSZoneShaderSettings::EOverrideMode, GT_CustomMapSupportRuntime.CMSZoneShaderSettings::ETextureOverrideType, GT_CustomMapSupportRuntime.CMSZoneShaderSettings::EZoneLiquidType, UnityEngine.Collider, UnityEngine.Color, UnityEngine.MonoBehaviour, UnityEngine.Vector2, UnityEngine.Vector4
namespace GT_CustomMapSupportRuntime {
// Is value type: false
// CS Name: GT_CustomMapSupportRuntime.CMSZoneShaderSettings
class CORDL_TYPE CMSZoneShaderSettings : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using CMSZoneShaderProperties = ::GlobalNamespace::CMSZoneShaderSettings_CMSZoneShaderProperties;

using ELiquidShape = ::GlobalNamespace::CMSZoneShaderSettings_ELiquidShape;

using EOverrideMode = ::GlobalNamespace::CMSZoneShaderSettings_EOverrideMode;

using ETextureOverrideType = ::GlobalNamespace::CMSZoneShaderSettings_ETextureOverrideType;

using EZoneLiquidType = ::GlobalNamespace::CMSZoneShaderSettings_EZoneLiquidType;

 __declspec(property(get=get_GroundFogDepthFadeSq)) float_t  GroundFogDepthFadeSq;

 __declspec(property(get=get_GroundFogHeightFade)) float_t  GroundFogHeightFade;

/// @brief Field <shaderParam_ZoneLiquidPosRadiusSq>k__BackingField, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__shaderParam_ZoneLiquidPosRadiusSq_k__BackingField, put=setStaticF__shaderParam_ZoneLiquidPosRadiusSq_k__BackingField)) int32_t  _shaderParam_ZoneLiquidPosRadiusSq_k__BackingField;

/// @brief Field activateOnLoad, offset 0x2a, size 0x1 
 __declspec(property(get=__cordl_internal_get_activateOnLoad, put=__cordl_internal_set_activateOnLoad)) bool  activateOnLoad;

/// @brief Field activeInstance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_activeInstance, put=setStaticF_activeInstance)) ::UnityW<::GT_CustomMapSupportRuntime::CMSZoneShaderSettings>  activeInstance;

/// @brief Field applyGroundFog, offset 0x2c, size 0x1 
 __declspec(property(get=__cordl_internal_get_applyGroundFog, put=__cordl_internal_set_applyGroundFog)) bool  applyGroundFog;

/// @brief Field applyLiquidEffects, offset 0x64, size 0x1 
 __declspec(property(get=__cordl_internal_get_applyLiquidEffects, put=__cordl_internal_set_applyLiquidEffects)) bool  applyLiquidEffects;

/// @brief Field defaultsInstance, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_defaultsInstance, put=setStaticF_defaultsInstance)) ::UnityW<::GT_CustomMapSupportRuntime::CMSZoneShaderSettings>  defaultsInstance;

/// @brief Field edWasInitialized, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_edWasInitialized, put=__cordl_internal_set_edWasInitialized)) bool  edWasInitialized;

/// @brief Field edZoneColliders, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_edZoneColliders, put=__cordl_internal_set_edZoneColliders)) ::ArrayW<::UnityW<::UnityEngine::Collider>>  edZoneColliders;

/// @brief Field groundFogColor, offset 0x34, size 0x10 
 __declspec(property(get=__cordl_internal_get_groundFogColor, put=__cordl_internal_set_groundFogColor)) ::UnityEngine::Color  groundFogColor;

/// @brief Field groundFogColor_overrideMode, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get_groundFogColor_overrideMode, put=__cordl_internal_set_groundFogColor_overrideMode)) ::GlobalNamespace::CMSZoneShaderSettings_EOverrideMode  groundFogColor_overrideMode;

/// @brief Field groundFogColor_shaderProp, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_groundFogColor_shaderProp, put=setStaticF_groundFogColor_shaderProp)) int32_t  groundFogColor_shaderProp;

/// @brief Field groundFogDepthFadeSize, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_groundFogDepthFadeSize, put=__cordl_internal_set_groundFogDepthFadeSize)) float_t  groundFogDepthFadeSize;

/// @brief Field groundFogDepthFadeSq_shaderProp, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_groundFogDepthFadeSq_shaderProp, put=setStaticF_groundFogDepthFadeSq_shaderProp)) int32_t  groundFogDepthFadeSq_shaderProp;

/// @brief Field groundFogDepthFade_overrideMode, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_groundFogDepthFade_overrideMode, put=__cordl_internal_set_groundFogDepthFade_overrideMode)) ::GlobalNamespace::CMSZoneShaderSettings_EOverrideMode  groundFogDepthFade_overrideMode;

/// @brief Field groundFogHeight, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_groundFogHeight, put=__cordl_internal_set_groundFogHeight)) float_t  groundFogHeight;

/// @brief Field groundFogHeightFadeSize, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_groundFogHeightFadeSize, put=__cordl_internal_set_groundFogHeightFadeSize)) float_t  groundFogHeightFadeSize;

/// @brief Field groundFogHeightFade_overrideMode, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_groundFogHeightFade_overrideMode, put=__cordl_internal_set_groundFogHeightFade_overrideMode)) ::GlobalNamespace::CMSZoneShaderSettings_EOverrideMode  groundFogHeightFade_overrideMode;

/// @brief Field groundFogHeightFade_shaderProp, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_groundFogHeightFade_shaderProp, put=setStaticF_groundFogHeightFade_shaderProp)) int32_t  groundFogHeightFade_shaderProp;

/// @brief Field groundFogHeightPlane, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_groundFogHeightPlane, put=__cordl_internal_set_groundFogHeightPlane)) ::UnityW<::UnityEngine::Transform>  groundFogHeightPlane;

/// @brief Field groundFogHeight_overrideMode, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get_groundFogHeight_overrideMode, put=__cordl_internal_set_groundFogHeight_overrideMode)) ::GlobalNamespace::CMSZoneShaderSettings_EOverrideMode  groundFogHeight_overrideMode;

/// @brief Field groundFogHeight_shaderProp, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_groundFogHeight_shaderProp, put=setStaticF_groundFogHeight_shaderProp)) int32_t  groundFogHeight_shaderProp;

/// @brief Field hasActiveInstance, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_hasActiveInstance, put=setStaticF_hasActiveInstance)) bool  hasActiveInstance;

/// @brief Field hasDefaultsInstance, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_hasDefaultsInstance, put=setStaticF_hasDefaultsInstance)) bool  hasDefaultsInstance;

/// @brief Field hasDynamicWaterSurfacePlane, offset 0x13d, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasDynamicWaterSurfacePlane, put=__cordl_internal_set_hasDynamicWaterSurfacePlane)) bool  hasDynamicWaterSurfacePlane;

/// @brief Field hasLiquidBottomTransform, offset 0x80, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasLiquidBottomTransform, put=__cordl_internal_set_hasLiquidBottomTransform)) bool  hasLiquidBottomTransform;

/// @brief Field hasMainWaterSurfacePlane, offset 0x13c, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasMainWaterSurfacePlane, put=__cordl_internal_set_hasMainWaterSurfacePlane)) bool  hasMainWaterSurfacePlane;

 __declspec(property(get=get_isActiveInstance)) bool  isActiveInstance;

/// @brief Field isDefaultValues, offset 0x2b, size 0x1 
 __declspec(property(get=__cordl_internal_get_isDefaultValues, put=__cordl_internal_set_isDefaultValues)) bool  isDefaultValues;

/// @brief Field isExported, offset 0x29, size 0x1 
 __declspec(property(get=__cordl_internal_get_isExported, put=__cordl_internal_set_isExported)) bool  isExported;

/// @brief Field isInitialized, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_isInitialized, put=setStaticF_isInitialized)) bool  isInitialized;

/// @brief Field liquidBottomPosY_previousValue, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get_liquidBottomPosY_previousValue, put=__cordl_internal_set_liquidBottomPosY_previousValue)) float_t  liquidBottomPosY_previousValue;

/// @brief Field liquidBottomTransform, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_liquidBottomTransform, put=__cordl_internal_set_liquidBottomTransform)) ::UnityW<::UnityEngine::Transform>  liquidBottomTransform;

/// @brief Field liquidBottomTransform_overrideMode, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get_liquidBottomTransform_overrideMode, put=__cordl_internal_set_liquidBottomTransform_overrideMode)) ::GlobalNamespace::CMSZoneShaderSettings_EOverrideMode  liquidBottomTransform_overrideMode;

/// @brief Field liquidResidueTex, offset 0x130, size 0x8 
 __declspec(property(get=__cordl_internal_get_liquidResidueTex, put=__cordl_internal_set_liquidResidueTex)) ::UnityW<::UnityEngine::Texture2D>  liquidResidueTex;

/// @brief Field liquidResidueTex_overrideMode, offset 0x124, size 0x4 
 __declspec(property(get=__cordl_internal_get_liquidResidueTex_overrideMode, put=__cordl_internal_set_liquidResidueTex_overrideMode)) ::GlobalNamespace::CMSZoneShaderSettings_EOverrideMode  liquidResidueTex_overrideMode;

/// @brief Field liquidResidueTextureOverrideType, offset 0x128, size 0x4 
 __declspec(property(get=__cordl_internal_get_liquidResidueTextureOverrideType, put=__cordl_internal_set_liquidResidueTextureOverrideType)) ::GlobalNamespace::CMSZoneShaderSettings_ETextureOverrideType  liquidResidueTextureOverrideType;

/// @brief Field liquidShape, offset 0x74, size 0x4 
 __declspec(property(get=__cordl_internal_get_liquidShape, put=__cordl_internal_set_liquidShape)) ::GlobalNamespace::CMSZoneShaderSettings_ELiquidShape  liquidShape;

/// @brief Field liquidShapeRadius, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get_liquidShapeRadius, put=__cordl_internal_set_liquidShapeRadius)) float_t  liquidShapeRadius;

/// @brief Field liquidShapeRadius_overrideMode, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_liquidShapeRadius_overrideMode, put=__cordl_internal_set_liquidShapeRadius_overrideMode)) ::GlobalNamespace::CMSZoneShaderSettings_EOverrideMode  liquidShapeRadius_overrideMode;

/// @brief Field liquidShapeRadius_previousValue, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_liquidShapeRadius_previousValue, put=setStaticF_liquidShapeRadius_previousValue)) float_t  liquidShapeRadius_previousValue;

/// @brief Field liquidShape_overrideMode, offset 0x70, size 0x4 
 __declspec(property(get=__cordl_internal_get_liquidShape_overrideMode, put=__cordl_internal_set_liquidShape_overrideMode)) ::GlobalNamespace::CMSZoneShaderSettings_EOverrideMode  liquidShape_overrideMode;

/// @brief Field liquidShape_previousValue, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_liquidShape_previousValue, put=setStaticF_liquidShape_previousValue)) ::GlobalNamespace::CMSZoneShaderSettings_ELiquidShape  liquidShape_previousValue;

/// @brief Field liquidType_previousValue, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_liquidType_previousValue, put=setStaticF_liquidType_previousValue)) ::GlobalNamespace::CMSZoneShaderSettings_EZoneLiquidType  liquidType_previousValue;

/// @brief Field mainWaterSurfacePlane, offset 0x148, size 0x8 
 __declspec(property(get=__cordl_internal_get_mainWaterSurfacePlane, put=__cordl_internal_set_mainWaterSurfacePlane)) ::UnityW<::UnityEngine::Transform>  mainWaterSurfacePlane;

/// @brief Field mainWaterSurfacePlane_overrideMode, offset 0x140, size 0x4 
 __declspec(property(get=__cordl_internal_get_mainWaterSurfacePlane_overrideMode, put=__cordl_internal_set_mainWaterSurfacePlane_overrideMode)) ::GlobalNamespace::CMSZoneShaderSettings_EOverrideMode  mainWaterSurfacePlane_overrideMode;

/// @brief Field shaderParam_GlobalLiquidResidueTex, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_shaderParam_GlobalLiquidResidueTex, put=setStaticF_shaderParam_GlobalLiquidResidueTex)) int32_t  shaderParam_GlobalLiquidResidueTex;

/// @brief Field shaderParam_GlobalMainWaterSurfacePlane, offset 0x138, size 0x4 
 __declspec(property(get=__cordl_internal_get_shaderParam_GlobalMainWaterSurfacePlane, put=__cordl_internal_set_shaderParam_GlobalMainWaterSurfacePlane)) int32_t  shaderParam_GlobalMainWaterSurfacePlane;

/// @brief Field shaderParam_GlobalUnderwaterCausticsParams, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_shaderParam_GlobalUnderwaterCausticsParams, put=setStaticF_shaderParam_GlobalUnderwaterCausticsParams)) int32_t  shaderParam_GlobalUnderwaterCausticsParams;

/// @brief Field shaderParam_GlobalUnderwaterCausticsTex, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_shaderParam_GlobalUnderwaterCausticsTex, put=setStaticF_shaderParam_GlobalUnderwaterCausticsTex)) int32_t  shaderParam_GlobalUnderwaterCausticsTex;

/// @brief Field shaderParam_GlobalUnderwaterEffectsDistanceToSurfaceFade, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_shaderParam_GlobalUnderwaterEffectsDistanceToSurfaceFade, put=setStaticF_shaderParam_GlobalUnderwaterEffectsDistanceToSurfaceFade)) int32_t  shaderParam_GlobalUnderwaterEffectsDistanceToSurfaceFade;

/// @brief Field shaderParam_GlobalUnderwaterFogColor, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_shaderParam_GlobalUnderwaterFogColor, put=setStaticF_shaderParam_GlobalUnderwaterFogColor)) int32_t  shaderParam_GlobalUnderwaterFogColor;

/// @brief Field shaderParam_GlobalUnderwaterFogParams, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_shaderParam_GlobalUnderwaterFogParams, put=setStaticF_shaderParam_GlobalUnderwaterFogParams)) int32_t  shaderParam_GlobalUnderwaterFogParams;

/// @brief Field shaderParam_GlobalWaterTintColor, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_shaderParam_GlobalWaterTintColor, put=setStaticF_shaderParam_GlobalWaterTintColor)) int32_t  shaderParam_GlobalWaterTintColor;

/// @brief Field shaderParam_GlobalZoneLiquidUVScale, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_shaderParam_GlobalZoneLiquidUVScale, put=setStaticF_shaderParam_GlobalZoneLiquidUVScale)) int32_t  shaderParam_GlobalZoneLiquidUVScale;

/// @brief Field shaderParam_ZoneWeatherMapDissolveProgress, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_shaderParam_ZoneWeatherMapDissolveProgress, put=setStaticF_shaderParam_ZoneWeatherMapDissolveProgress)) int32_t  shaderParam_ZoneWeatherMapDissolveProgress;

/// @brief Field underwaterCausticsParams, offset 0xec, size 0x10 
 __declspec(property(get=__cordl_internal_get_underwaterCausticsParams, put=__cordl_internal_set_underwaterCausticsParams)) ::UnityEngine::Vector4  underwaterCausticsParams;

/// @brief Field underwaterCausticsParams_overrideMode, offset 0xe0, size 0x4 
 __declspec(property(get=__cordl_internal_get_underwaterCausticsParams_overrideMode, put=__cordl_internal_set_underwaterCausticsParams_overrideMode)) ::GlobalNamespace::CMSZoneShaderSettings_EOverrideMode  underwaterCausticsParams_overrideMode;

/// @brief Field underwaterCausticsScale, offset 0xe8, size 0x4 
 __declspec(property(get=__cordl_internal_get_underwaterCausticsScale, put=__cordl_internal_set_underwaterCausticsScale)) float_t  underwaterCausticsScale;

/// @brief Field underwaterCausticsSpeed, offset 0xe4, size 0x4 
 __declspec(property(get=__cordl_internal_get_underwaterCausticsSpeed, put=__cordl_internal_set_underwaterCausticsSpeed)) float_t  underwaterCausticsSpeed;

/// @brief Field underwaterCausticsTexture, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get_underwaterCausticsTexture, put=__cordl_internal_set_underwaterCausticsTexture)) ::UnityW<::UnityEngine::Texture2D>  underwaterCausticsTexture;

/// @brief Field underwaterCausticsTextureOverrideType, offset 0x100, size 0x4 
 __declspec(property(get=__cordl_internal_get_underwaterCausticsTextureOverrideType, put=__cordl_internal_set_underwaterCausticsTextureOverrideType)) ::GlobalNamespace::CMSZoneShaderSettings_ETextureOverrideType  underwaterCausticsTextureOverrideType;

/// @brief Field underwaterCausticsTexture_overrideMode, offset 0xfc, size 0x4 
 __declspec(property(get=__cordl_internal_get_underwaterCausticsTexture_overrideMode, put=__cordl_internal_set_underwaterCausticsTexture_overrideMode)) ::GlobalNamespace::CMSZoneShaderSettings_EOverrideMode  underwaterCausticsTexture_overrideMode;

/// @brief Field underwaterEffectsDistanceToSurfaceFade, offset 0x11c, size 0x8 
 __declspec(property(get=__cordl_internal_get_underwaterEffectsDistanceToSurfaceFade, put=__cordl_internal_set_underwaterEffectsDistanceToSurfaceFade)) ::UnityEngine::Vector2  underwaterEffectsDistanceToSurfaceFade;

/// @brief Field underwaterEffectsDistanceToSurfaceFade_overrideMode, offset 0x110, size 0x4 
 __declspec(property(get=__cordl_internal_get_underwaterEffectsDistanceToSurfaceFade_overrideMode, put=__cordl_internal_set_underwaterEffectsDistanceToSurfaceFade_overrideMode)) ::GlobalNamespace::CMSZoneShaderSettings_EOverrideMode  underwaterEffectsDistanceToSurfaceFade_overrideMode;

/// @brief Field underwaterFogColor, offset 0xb4, size 0x10 
 __declspec(property(get=__cordl_internal_get_underwaterFogColor, put=__cordl_internal_set_underwaterFogColor)) ::UnityEngine::Color  underwaterFogColor;

/// @brief Field underwaterFogColor_overrideMode, offset 0xb0, size 0x4 
 __declspec(property(get=__cordl_internal_get_underwaterFogColor_overrideMode, put=__cordl_internal_set_underwaterFogColor_overrideMode)) ::GlobalNamespace::CMSZoneShaderSettings_EOverrideMode  underwaterFogColor_overrideMode;

/// @brief Field underwaterFogDistance, offset 0xcc, size 0x4 
 __declspec(property(get=__cordl_internal_get_underwaterFogDistance, put=__cordl_internal_set_underwaterFogDistance)) float_t  underwaterFogDistance;

/// @brief Field underwaterFogDistanceToSurfaceFadeMaximum, offset 0x118, size 0x4 
 __declspec(property(get=__cordl_internal_get_underwaterFogDistanceToSurfaceFadeMaximum, put=__cordl_internal_set_underwaterFogDistanceToSurfaceFadeMaximum)) float_t  underwaterFogDistanceToSurfaceFadeMaximum;

/// @brief Field underwaterFogDistanceToSurfaceFadeMinimum, offset 0x114, size 0x4 
 __declspec(property(get=__cordl_internal_get_underwaterFogDistanceToSurfaceFadeMinimum, put=__cordl_internal_set_underwaterFogDistanceToSurfaceFadeMinimum)) float_t  underwaterFogDistanceToSurfaceFadeMinimum;

/// @brief Field underwaterFogParams, offset 0xd0, size 0x10 
 __declspec(property(get=__cordl_internal_get_underwaterFogParams, put=__cordl_internal_set_underwaterFogParams)) ::UnityEngine::Vector4  underwaterFogParams;

/// @brief Field underwaterFogParams_overrideMode, offset 0xc4, size 0x4 
 __declspec(property(get=__cordl_internal_get_underwaterFogParams_overrideMode, put=__cordl_internal_set_underwaterFogParams_overrideMode)) ::GlobalNamespace::CMSZoneShaderSettings_EOverrideMode  underwaterFogParams_overrideMode;

/// @brief Field underwaterFogStart, offset 0xc8, size 0x4 
 __declspec(property(get=__cordl_internal_get_underwaterFogStart, put=__cordl_internal_set_underwaterFogStart)) float_t  underwaterFogStart;

/// @brief Field underwaterTintColor, offset 0xa0, size 0x10 
 __declspec(property(get=__cordl_internal_get_underwaterTintColor, put=__cordl_internal_set_underwaterTintColor)) ::UnityEngine::Color  underwaterTintColor;

/// @brief Field underwaterTintColor_overrideMode, offset 0x9c, size 0x4 
 __declspec(property(get=__cordl_internal_get_underwaterTintColor_overrideMode, put=__cordl_internal_set_underwaterTintColor_overrideMode)) ::GlobalNamespace::CMSZoneShaderSettings_EOverrideMode  underwaterTintColor_overrideMode;

/// @brief Field zoneLiquidType, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_zoneLiquidType, put=__cordl_internal_set_zoneLiquidType)) ::GlobalNamespace::CMSZoneShaderSettings_EZoneLiquidType  zoneLiquidType;

/// @brief Field zoneLiquidType_overrideMode, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_zoneLiquidType_overrideMode, put=__cordl_internal_set_zoneLiquidType_overrideMode)) ::GlobalNamespace::CMSZoneShaderSettings_EOverrideMode  zoneLiquidType_overrideMode;

/// @brief Field zoneLiquidUVScale, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get_zoneLiquidUVScale, put=__cordl_internal_set_zoneLiquidUVScale)) float_t  zoneLiquidUVScale;

/// @brief Field zoneLiquidUVScale_overrideMode, offset 0x94, size 0x4 
 __declspec(property(get=__cordl_internal_get_zoneLiquidUVScale_overrideMode, put=__cordl_internal_set_zoneLiquidUVScale_overrideMode)) ::GlobalNamespace::CMSZoneShaderSettings_EOverrideMode  zoneLiquidUVScale_overrideMode;

/// @brief Field zoneWeatherMapDissolveProgress, offset 0x154, size 0x4 
 __declspec(property(get=__cordl_internal_get_zoneWeatherMapDissolveProgress, put=__cordl_internal_set_zoneWeatherMapDissolveProgress)) float_t  zoneWeatherMapDissolveProgress;

/// @brief Field zoneWeatherMapDissolveProgress_overrideMode, offset 0x150, size 0x4 
 __declspec(property(get=__cordl_internal_get_zoneWeatherMapDissolveProgress_overrideMode, put=__cordl_internal_set_zoneWeatherMapDissolveProgress_overrideMode)) ::GlobalNamespace::CMSZoneShaderSettings_EOverrideMode  zoneWeatherMapDissolveProgress_overrideMode;

/// @brief Method ActivateDefaultSettings, addr 0x9cb3448, size 0xc8, virtual false, abstract: false, final false
static inline void ActivateDefaultSettings() ;

/// @brief Method ApplyColor, addr 0x9cb354c, size 0xac, virtual false, abstract: false, final false
inline void ApplyColor(int32_t  shaderProp, ::GlobalNamespace::CMSZoneShaderSettings_EOverrideMode  overrideMode, ::UnityEngine::Color  value, ::UnityEngine::Color  defaultValue) ;

/// @brief Method ApplyFloat, addr 0x9cb35f8, size 0x34, virtual false, abstract: false, final false
inline void ApplyFloat(int32_t  shaderProp, ::GlobalNamespace::CMSZoneShaderSettings_EOverrideMode  overrideMode, float_t  value, float_t  defaultValue) ;

/// @brief Method ApplyTexture, addr 0x9cb362c, size 0x38, virtual false, abstract: false, final false
inline void ApplyTexture(int32_t  shaderProp, ::GlobalNamespace::CMSZoneShaderSettings_EOverrideMode  overrideMode, ::UnityEngine::Texture2D*  value, ::UnityEngine::Texture2D*  defaultValue) ;

/// @brief Method ApplyValues, addr 0x9cb2bc4, size 0x884, virtual false, abstract: false, final false
inline void ApplyValues() ;

/// @brief Method ApplyVector, addr 0x9cb36a4, size 0x40, virtual false, abstract: false, final false
inline void ApplyVector(int32_t  shaderProp, ::GlobalNamespace::CMSZoneShaderSettings_EOverrideMode  overrideMode, ::UnityEngine::Vector2  value, ::UnityEngine::Vector2  defaultValue) ;

/// @brief Method ApplyVector, addr 0x9cb37f4, size 0x40, virtual false, abstract: false, final false
inline void ApplyVector(int32_t  shaderProp, ::GlobalNamespace::CMSZoneShaderSettings_EOverrideMode  overrideMode, ::UnityEngine::Vector3  value, ::UnityEngine::Vector3  defaultValue) ;

/// @brief Method ApplyVector, addr 0x9cb3664, size 0x40, virtual false, abstract: false, final false
inline void ApplyVector(int32_t  shaderProp, ::GlobalNamespace::CMSZoneShaderSettings_EOverrideMode  overrideMode, ::UnityEngine::Vector4  value, ::UnityEngine::Vector4  defaultValue) ;

/// @brief Method BecomeActiveInstance, addr 0x9cb2468, size 0xec, virtual false, abstract: false, final false
inline void BecomeActiveInstance(bool  force) ;

/// @brief Method CheckDefaultsInstance, addr 0x9cb20d4, size 0x394, virtual false, abstract: false, final false
inline void CheckDefaultsInstance() ;

/// @brief Method GetGroundFogColorOverrideMode, addr 0x9cb19f4, size 0x18, virtual false, abstract: false, final false
inline int32_t GetGroundFogColorOverrideMode() ;

/// @brief Method GetGroundFogDepthFadeOverrideMode, addr 0x9cb1a0c, size 0x18, virtual false, abstract: false, final false
inline int32_t GetGroundFogDepthFadeOverrideMode() ;

/// @brief Method GetGroundFogHeightFadeOverrideMode, addr 0x9cb1a60, size 0x18, virtual false, abstract: false, final false
inline int32_t GetGroundFogHeightFadeOverrideMode() ;

/// @brief Method GetGroundFogHeightOverrideMode, addr 0x9cb1a48, size 0x18, virtual false, abstract: false, final false
inline int32_t GetGroundFogHeightOverrideMode() ;

/// @brief Method GetLiquidBottomTransformOverrideMode, addr 0x9cb1d8c, size 0x18, virtual false, abstract: false, final false
inline int32_t GetLiquidBottomTransformOverrideMode() ;

/// @brief Method GetLiquidResidueTextureOverrideMode, addr 0x9cb1f70, size 0x18, virtual false, abstract: false, final false
inline int32_t GetLiquidResidueTextureOverrideMode() ;

/// @brief Method GetLiquidShapeOverrideMode, addr 0x9cb1ca0, size 0x18, virtual false, abstract: false, final false
inline int32_t GetLiquidShapeOverrideMode() ;

/// @brief Method GetLiquidShapeRadiusOverrideMode, addr 0x9cb1d74, size 0x18, virtual false, abstract: false, final false
inline int32_t GetLiquidShapeRadiusOverrideMode() ;

/// @brief Method GetMainWaterSurfacePlaneOverrideMode, addr 0x9cb1f88, size 0x18, virtual false, abstract: false, final false
inline int32_t GetMainWaterSurfacePlaneOverrideMode() ;

/// @brief Method GetProperties, addr 0x9cb3834, size 0x108, virtual false, abstract: false, final false
inline ::GlobalNamespace::CMSZoneShaderSettings_CMSZoneShaderProperties GetProperties() ;

/// @brief Method GetUnderwaterCausticsParamsOverrideMode, addr 0x9cb1f28, size 0x18, virtual false, abstract: false, final false
inline int32_t GetUnderwaterCausticsParamsOverrideMode() ;

/// @brief Method GetUnderwaterCausticsTextureOverrideMode, addr 0x9cb1f40, size 0x18, virtual false, abstract: false, final false
inline int32_t GetUnderwaterCausticsTextureOverrideMode() ;

/// @brief Method GetUnderwaterEffectsDistanceToSurfaceFadeOverrideMode, addr 0x9cb1f58, size 0x18, virtual false, abstract: false, final false
inline int32_t GetUnderwaterEffectsDistanceToSurfaceFadeOverrideMode() ;

/// @brief Method GetUnderwaterFogColorOverrideMode, addr 0x9cb1ef8, size 0x18, virtual false, abstract: false, final false
inline int32_t GetUnderwaterFogColorOverrideMode() ;

/// @brief Method GetUnderwaterFogParamsOverrideMode, addr 0x9cb1f10, size 0x18, virtual false, abstract: false, final false
inline int32_t GetUnderwaterFogParamsOverrideMode() ;

/// @brief Method GetUnderwaterTintColorOverrideMode, addr 0x9cb1ee0, size 0x18, virtual false, abstract: false, final false
inline int32_t GetUnderwaterTintColorOverrideMode() ;

/// @brief Method GetWaterY, addr 0x9cb1da4, size 0x124, virtual false, abstract: false, final false
static inline float_t GetWaterY() ;

/// @brief Method GetZoneLiquidShape, addr 0x9cb1cb8, size 0x8, virtual false, abstract: false, final false
inline int32_t GetZoneLiquidShape() ;

/// @brief Method GetZoneLiquidType, addr 0x9cb1ba8, size 0x8, virtual false, abstract: false, final false
inline int32_t GetZoneLiquidType() ;

/// @brief Method GetZoneLiquidTypeOverrideMode, addr 0x9cb1b90, size 0x18, virtual false, abstract: false, final false
inline int32_t GetZoneLiquidTypeOverrideMode() ;

/// @brief Method GetZoneLiquidUVScaleOverrideMode, addr 0x9cb1ec8, size 0x18, virtual false, abstract: false, final false
inline int32_t GetZoneLiquidUVScaleOverrideMode() ;

/// @brief Method Initialize, addr 0x9cb1fa0, size 0x134, virtual false, abstract: false, final false
inline void Initialize() ;

static inline ::GT_CustomMapSupportRuntime::CMSZoneShaderSettings* New_ctor() ;

/// @brief Method OnDestroy, addr 0x9cb2554, size 0x124, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method RefreshValues, addr 0x9cb36e4, size 0x110, virtual false, abstract: false, final false
inline void RefreshValues() ;

/// @brief Method SetGroundFogValue, addr 0x9cb3510, size 0x3c, virtual false, abstract: false, final false
inline void SetGroundFogValue(::UnityEngine::Color  fogColor, float_t  fogDepthFade, float_t  fogHeight, float_t  fogHeightFade) ;

/// @brief Method SetZoneLiquidShapeKeywordEnum, addr 0x9cb1bb0, size 0xf0, virtual false, abstract: false, final false
inline void SetZoneLiquidShapeKeywordEnum(::GlobalNamespace::CMSZoneShaderSettings_ELiquidShape  shape) ;

/// @brief Method SetZoneLiquidTypeKeywordEnum, addr 0x9cb1a98, size 0xf8, virtual false, abstract: false, final false
inline void SetZoneLiquidTypeKeywordEnum(::GlobalNamespace::CMSZoneShaderSettings_EZoneLiquidType  liquidType) ;

/// @brief Method UpdateMainPlaneShaderProperty, addr 0x9cb2678, size 0x54c, virtual false, abstract: false, final false
inline void UpdateMainPlaneShaderProperty() ;

constexpr bool const& __cordl_internal_get_activateOnLoad() const;

constexpr bool& __cordl_internal_get_activateOnLoad() ;

constexpr bool const& __cordl_internal_get_applyGroundFog() const;

constexpr bool& __cordl_internal_get_applyGroundFog() ;

constexpr bool const& __cordl_internal_get_applyLiquidEffects() const;

constexpr bool& __cordl_internal_get_applyLiquidEffects() ;

constexpr bool const& __cordl_internal_get_edWasInitialized() const;

constexpr bool& __cordl_internal_get_edWasInitialized() ;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>> const& __cordl_internal_get_edZoneColliders() const;

constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>>& __cordl_internal_get_edZoneColliders() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_groundFogColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_groundFogColor() ;

constexpr ::GlobalNamespace::CMSZoneShaderSettings_EOverrideMode const& __cordl_internal_get_groundFogColor_overrideMode() const;

constexpr ::GlobalNamespace::CMSZoneShaderSettings_EOverrideMode& __cordl_internal_get_groundFogColor_overrideMode() ;

constexpr float_t const& __cordl_internal_get_groundFogDepthFadeSize() const;

constexpr float_t& __cordl_internal_get_groundFogDepthFadeSize() ;

constexpr ::GlobalNamespace::CMSZoneShaderSettings_EOverrideMode const& __cordl_internal_get_groundFogDepthFade_overrideMode() const;

constexpr ::GlobalNamespace::CMSZoneShaderSettings_EOverrideMode& __cordl_internal_get_groundFogDepthFade_overrideMode() ;

constexpr float_t const& __cordl_internal_get_groundFogHeight() const;

constexpr float_t& __cordl_internal_get_groundFogHeight() ;

constexpr float_t const& __cordl_internal_get_groundFogHeightFadeSize() const;

constexpr float_t& __cordl_internal_get_groundFogHeightFadeSize() ;

constexpr ::GlobalNamespace::CMSZoneShaderSettings_EOverrideMode const& __cordl_internal_get_groundFogHeightFade_overrideMode() const;

constexpr ::GlobalNamespace::CMSZoneShaderSettings_EOverrideMode& __cordl_internal_get_groundFogHeightFade_overrideMode() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_groundFogHeightPlane() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_groundFogHeightPlane() ;

constexpr ::GlobalNamespace::CMSZoneShaderSettings_EOverrideMode const& __cordl_internal_get_groundFogHeight_overrideMode() const;

constexpr ::GlobalNamespace::CMSZoneShaderSettings_EOverrideMode& __cordl_internal_get_groundFogHeight_overrideMode() ;

constexpr bool const& __cordl_internal_get_hasDynamicWaterSurfacePlane() const;

constexpr bool& __cordl_internal_get_hasDynamicWaterSurfacePlane() ;

constexpr bool const& __cordl_internal_get_hasLiquidBottomTransform() const;

constexpr bool& __cordl_internal_get_hasLiquidBottomTransform() ;

constexpr bool const& __cordl_internal_get_hasMainWaterSurfacePlane() const;

constexpr bool& __cordl_internal_get_hasMainWaterSurfacePlane() ;

constexpr bool const& __cordl_internal_get_isDefaultValues() const;

constexpr bool& __cordl_internal_get_isDefaultValues() ;

constexpr bool const& __cordl_internal_get_isExported() const;

constexpr bool& __cordl_internal_get_isExported() ;

constexpr float_t const& __cordl_internal_get_liquidBottomPosY_previousValue() const;

constexpr float_t& __cordl_internal_get_liquidBottomPosY_previousValue() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_liquidBottomTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_liquidBottomTransform() ;

constexpr ::GlobalNamespace::CMSZoneShaderSettings_EOverrideMode const& __cordl_internal_get_liquidBottomTransform_overrideMode() const;

constexpr ::GlobalNamespace::CMSZoneShaderSettings_EOverrideMode& __cordl_internal_get_liquidBottomTransform_overrideMode() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_liquidResidueTex() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_liquidResidueTex() ;

constexpr ::GlobalNamespace::CMSZoneShaderSettings_EOverrideMode const& __cordl_internal_get_liquidResidueTex_overrideMode() const;

constexpr ::GlobalNamespace::CMSZoneShaderSettings_EOverrideMode& __cordl_internal_get_liquidResidueTex_overrideMode() ;

constexpr ::GlobalNamespace::CMSZoneShaderSettings_ETextureOverrideType const& __cordl_internal_get_liquidResidueTextureOverrideType() const;

constexpr ::GlobalNamespace::CMSZoneShaderSettings_ETextureOverrideType& __cordl_internal_get_liquidResidueTextureOverrideType() ;

constexpr ::GlobalNamespace::CMSZoneShaderSettings_ELiquidShape const& __cordl_internal_get_liquidShape() const;

constexpr ::GlobalNamespace::CMSZoneShaderSettings_ELiquidShape& __cordl_internal_get_liquidShape() ;

constexpr float_t const& __cordl_internal_get_liquidShapeRadius() const;

constexpr float_t& __cordl_internal_get_liquidShapeRadius() ;

constexpr ::GlobalNamespace::CMSZoneShaderSettings_EOverrideMode const& __cordl_internal_get_liquidShapeRadius_overrideMode() const;

constexpr ::GlobalNamespace::CMSZoneShaderSettings_EOverrideMode& __cordl_internal_get_liquidShapeRadius_overrideMode() ;

constexpr ::GlobalNamespace::CMSZoneShaderSettings_EOverrideMode const& __cordl_internal_get_liquidShape_overrideMode() const;

constexpr ::GlobalNamespace::CMSZoneShaderSettings_EOverrideMode& __cordl_internal_get_liquidShape_overrideMode() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_mainWaterSurfacePlane() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_mainWaterSurfacePlane() ;

constexpr ::GlobalNamespace::CMSZoneShaderSettings_EOverrideMode const& __cordl_internal_get_mainWaterSurfacePlane_overrideMode() const;

constexpr ::GlobalNamespace::CMSZoneShaderSettings_EOverrideMode& __cordl_internal_get_mainWaterSurfacePlane_overrideMode() ;

constexpr int32_t const& __cordl_internal_get_shaderParam_GlobalMainWaterSurfacePlane() const;

constexpr int32_t& __cordl_internal_get_shaderParam_GlobalMainWaterSurfacePlane() ;

constexpr ::UnityEngine::Vector4 const& __cordl_internal_get_underwaterCausticsParams() const;

constexpr ::UnityEngine::Vector4& __cordl_internal_get_underwaterCausticsParams() ;

constexpr ::GlobalNamespace::CMSZoneShaderSettings_EOverrideMode const& __cordl_internal_get_underwaterCausticsParams_overrideMode() const;

constexpr ::GlobalNamespace::CMSZoneShaderSettings_EOverrideMode& __cordl_internal_get_underwaterCausticsParams_overrideMode() ;

constexpr float_t const& __cordl_internal_get_underwaterCausticsScale() const;

constexpr float_t& __cordl_internal_get_underwaterCausticsScale() ;

constexpr float_t const& __cordl_internal_get_underwaterCausticsSpeed() const;

constexpr float_t& __cordl_internal_get_underwaterCausticsSpeed() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_underwaterCausticsTexture() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_underwaterCausticsTexture() ;

constexpr ::GlobalNamespace::CMSZoneShaderSettings_ETextureOverrideType const& __cordl_internal_get_underwaterCausticsTextureOverrideType() const;

constexpr ::GlobalNamespace::CMSZoneShaderSettings_ETextureOverrideType& __cordl_internal_get_underwaterCausticsTextureOverrideType() ;

constexpr ::GlobalNamespace::CMSZoneShaderSettings_EOverrideMode const& __cordl_internal_get_underwaterCausticsTexture_overrideMode() const;

constexpr ::GlobalNamespace::CMSZoneShaderSettings_EOverrideMode& __cordl_internal_get_underwaterCausticsTexture_overrideMode() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_underwaterEffectsDistanceToSurfaceFade() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_underwaterEffectsDistanceToSurfaceFade() ;

constexpr ::GlobalNamespace::CMSZoneShaderSettings_EOverrideMode const& __cordl_internal_get_underwaterEffectsDistanceToSurfaceFade_overrideMode() const;

constexpr ::GlobalNamespace::CMSZoneShaderSettings_EOverrideMode& __cordl_internal_get_underwaterEffectsDistanceToSurfaceFade_overrideMode() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_underwaterFogColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_underwaterFogColor() ;

constexpr ::GlobalNamespace::CMSZoneShaderSettings_EOverrideMode const& __cordl_internal_get_underwaterFogColor_overrideMode() const;

constexpr ::GlobalNamespace::CMSZoneShaderSettings_EOverrideMode& __cordl_internal_get_underwaterFogColor_overrideMode() ;

constexpr float_t const& __cordl_internal_get_underwaterFogDistance() const;

constexpr float_t& __cordl_internal_get_underwaterFogDistance() ;

constexpr float_t const& __cordl_internal_get_underwaterFogDistanceToSurfaceFadeMaximum() const;

constexpr float_t& __cordl_internal_get_underwaterFogDistanceToSurfaceFadeMaximum() ;

constexpr float_t const& __cordl_internal_get_underwaterFogDistanceToSurfaceFadeMinimum() const;

constexpr float_t& __cordl_internal_get_underwaterFogDistanceToSurfaceFadeMinimum() ;

constexpr ::UnityEngine::Vector4 const& __cordl_internal_get_underwaterFogParams() const;

constexpr ::UnityEngine::Vector4& __cordl_internal_get_underwaterFogParams() ;

constexpr ::GlobalNamespace::CMSZoneShaderSettings_EOverrideMode const& __cordl_internal_get_underwaterFogParams_overrideMode() const;

constexpr ::GlobalNamespace::CMSZoneShaderSettings_EOverrideMode& __cordl_internal_get_underwaterFogParams_overrideMode() ;

constexpr float_t const& __cordl_internal_get_underwaterFogStart() const;

constexpr float_t& __cordl_internal_get_underwaterFogStart() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_underwaterTintColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_underwaterTintColor() ;

constexpr ::GlobalNamespace::CMSZoneShaderSettings_EOverrideMode const& __cordl_internal_get_underwaterTintColor_overrideMode() const;

constexpr ::GlobalNamespace::CMSZoneShaderSettings_EOverrideMode& __cordl_internal_get_underwaterTintColor_overrideMode() ;

constexpr ::GlobalNamespace::CMSZoneShaderSettings_EZoneLiquidType const& __cordl_internal_get_zoneLiquidType() const;

constexpr ::GlobalNamespace::CMSZoneShaderSettings_EZoneLiquidType& __cordl_internal_get_zoneLiquidType() ;

constexpr ::GlobalNamespace::CMSZoneShaderSettings_EOverrideMode const& __cordl_internal_get_zoneLiquidType_overrideMode() const;

constexpr ::GlobalNamespace::CMSZoneShaderSettings_EOverrideMode& __cordl_internal_get_zoneLiquidType_overrideMode() ;

constexpr float_t const& __cordl_internal_get_zoneLiquidUVScale() const;

constexpr float_t& __cordl_internal_get_zoneLiquidUVScale() ;

constexpr ::GlobalNamespace::CMSZoneShaderSettings_EOverrideMode const& __cordl_internal_get_zoneLiquidUVScale_overrideMode() const;

constexpr ::GlobalNamespace::CMSZoneShaderSettings_EOverrideMode& __cordl_internal_get_zoneLiquidUVScale_overrideMode() ;

constexpr float_t const& __cordl_internal_get_zoneWeatherMapDissolveProgress() const;

constexpr float_t& __cordl_internal_get_zoneWeatherMapDissolveProgress() ;

constexpr ::GlobalNamespace::CMSZoneShaderSettings_EOverrideMode const& __cordl_internal_get_zoneWeatherMapDissolveProgress_overrideMode() const;

constexpr ::GlobalNamespace::CMSZoneShaderSettings_EOverrideMode& __cordl_internal_get_zoneWeatherMapDissolveProgress_overrideMode() ;

constexpr void __cordl_internal_set_activateOnLoad(bool  value) ;

constexpr void __cordl_internal_set_applyGroundFog(bool  value) ;

constexpr void __cordl_internal_set_applyLiquidEffects(bool  value) ;

constexpr void __cordl_internal_set_edWasInitialized(bool  value) ;

constexpr void __cordl_internal_set_edZoneColliders(::ArrayW<::UnityW<::UnityEngine::Collider>>  value) ;

constexpr void __cordl_internal_set_groundFogColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_groundFogColor_overrideMode(::GlobalNamespace::CMSZoneShaderSettings_EOverrideMode  value) ;

constexpr void __cordl_internal_set_groundFogDepthFadeSize(float_t  value) ;

constexpr void __cordl_internal_set_groundFogDepthFade_overrideMode(::GlobalNamespace::CMSZoneShaderSettings_EOverrideMode  value) ;

constexpr void __cordl_internal_set_groundFogHeight(float_t  value) ;

constexpr void __cordl_internal_set_groundFogHeightFadeSize(float_t  value) ;

constexpr void __cordl_internal_set_groundFogHeightFade_overrideMode(::GlobalNamespace::CMSZoneShaderSettings_EOverrideMode  value) ;

constexpr void __cordl_internal_set_groundFogHeightPlane(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_groundFogHeight_overrideMode(::GlobalNamespace::CMSZoneShaderSettings_EOverrideMode  value) ;

constexpr void __cordl_internal_set_hasDynamicWaterSurfacePlane(bool  value) ;

constexpr void __cordl_internal_set_hasLiquidBottomTransform(bool  value) ;

constexpr void __cordl_internal_set_hasMainWaterSurfacePlane(bool  value) ;

constexpr void __cordl_internal_set_isDefaultValues(bool  value) ;

constexpr void __cordl_internal_set_isExported(bool  value) ;

constexpr void __cordl_internal_set_liquidBottomPosY_previousValue(float_t  value) ;

constexpr void __cordl_internal_set_liquidBottomTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_liquidBottomTransform_overrideMode(::GlobalNamespace::CMSZoneShaderSettings_EOverrideMode  value) ;

constexpr void __cordl_internal_set_liquidResidueTex(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set_liquidResidueTex_overrideMode(::GlobalNamespace::CMSZoneShaderSettings_EOverrideMode  value) ;

constexpr void __cordl_internal_set_liquidResidueTextureOverrideType(::GlobalNamespace::CMSZoneShaderSettings_ETextureOverrideType  value) ;

constexpr void __cordl_internal_set_liquidShape(::GlobalNamespace::CMSZoneShaderSettings_ELiquidShape  value) ;

constexpr void __cordl_internal_set_liquidShapeRadius(float_t  value) ;

constexpr void __cordl_internal_set_liquidShapeRadius_overrideMode(::GlobalNamespace::CMSZoneShaderSettings_EOverrideMode  value) ;

constexpr void __cordl_internal_set_liquidShape_overrideMode(::GlobalNamespace::CMSZoneShaderSettings_EOverrideMode  value) ;

constexpr void __cordl_internal_set_mainWaterSurfacePlane(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_mainWaterSurfacePlane_overrideMode(::GlobalNamespace::CMSZoneShaderSettings_EOverrideMode  value) ;

constexpr void __cordl_internal_set_shaderParam_GlobalMainWaterSurfacePlane(int32_t  value) ;

constexpr void __cordl_internal_set_underwaterCausticsParams(::UnityEngine::Vector4  value) ;

constexpr void __cordl_internal_set_underwaterCausticsParams_overrideMode(::GlobalNamespace::CMSZoneShaderSettings_EOverrideMode  value) ;

constexpr void __cordl_internal_set_underwaterCausticsScale(float_t  value) ;

constexpr void __cordl_internal_set_underwaterCausticsSpeed(float_t  value) ;

constexpr void __cordl_internal_set_underwaterCausticsTexture(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set_underwaterCausticsTextureOverrideType(::GlobalNamespace::CMSZoneShaderSettings_ETextureOverrideType  value) ;

constexpr void __cordl_internal_set_underwaterCausticsTexture_overrideMode(::GlobalNamespace::CMSZoneShaderSettings_EOverrideMode  value) ;

constexpr void __cordl_internal_set_underwaterEffectsDistanceToSurfaceFade(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_underwaterEffectsDistanceToSurfaceFade_overrideMode(::GlobalNamespace::CMSZoneShaderSettings_EOverrideMode  value) ;

constexpr void __cordl_internal_set_underwaterFogColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_underwaterFogColor_overrideMode(::GlobalNamespace::CMSZoneShaderSettings_EOverrideMode  value) ;

constexpr void __cordl_internal_set_underwaterFogDistance(float_t  value) ;

constexpr void __cordl_internal_set_underwaterFogDistanceToSurfaceFadeMaximum(float_t  value) ;

constexpr void __cordl_internal_set_underwaterFogDistanceToSurfaceFadeMinimum(float_t  value) ;

constexpr void __cordl_internal_set_underwaterFogParams(::UnityEngine::Vector4  value) ;

constexpr void __cordl_internal_set_underwaterFogParams_overrideMode(::GlobalNamespace::CMSZoneShaderSettings_EOverrideMode  value) ;

constexpr void __cordl_internal_set_underwaterFogStart(float_t  value) ;

constexpr void __cordl_internal_set_underwaterTintColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_underwaterTintColor_overrideMode(::GlobalNamespace::CMSZoneShaderSettings_EOverrideMode  value) ;

constexpr void __cordl_internal_set_zoneLiquidType(::GlobalNamespace::CMSZoneShaderSettings_EZoneLiquidType  value) ;

constexpr void __cordl_internal_set_zoneLiquidType_overrideMode(::GlobalNamespace::CMSZoneShaderSettings_EOverrideMode  value) ;

constexpr void __cordl_internal_set_zoneLiquidUVScale(float_t  value) ;

constexpr void __cordl_internal_set_zoneLiquidUVScale_overrideMode(::GlobalNamespace::CMSZoneShaderSettings_EOverrideMode  value) ;

constexpr void __cordl_internal_set_zoneWeatherMapDissolveProgress(float_t  value) ;

constexpr void __cordl_internal_set_zoneWeatherMapDissolveProgress_overrideMode(::GlobalNamespace::CMSZoneShaderSettings_EOverrideMode  value) ;

/// @brief Method .ctor, addr 0x9cb393c, size 0x100, virtual false, abstract: false, final false
inline void _ctor() ;

static inline int32_t getStaticF__shaderParam_ZoneLiquidPosRadiusSq_k__BackingField() ;

static inline ::UnityW<::GT_CustomMapSupportRuntime::CMSZoneShaderSettings> getStaticF_activeInstance() ;

static inline ::UnityW<::GT_CustomMapSupportRuntime::CMSZoneShaderSettings> getStaticF_defaultsInstance() ;

static inline int32_t getStaticF_groundFogColor_shaderProp() ;

static inline int32_t getStaticF_groundFogDepthFadeSq_shaderProp() ;

static inline int32_t getStaticF_groundFogHeightFade_shaderProp() ;

static inline int32_t getStaticF_groundFogHeight_shaderProp() ;

static inline bool getStaticF_hasActiveInstance() ;

static inline bool getStaticF_hasDefaultsInstance() ;

static inline bool getStaticF_isInitialized() ;

static inline float_t getStaticF_liquidShapeRadius_previousValue() ;

static inline ::GlobalNamespace::CMSZoneShaderSettings_ELiquidShape getStaticF_liquidShape_previousValue() ;

static inline ::GlobalNamespace::CMSZoneShaderSettings_EZoneLiquidType getStaticF_liquidType_previousValue() ;

static inline int32_t getStaticF_shaderParam_GlobalLiquidResidueTex() ;

static inline int32_t getStaticF_shaderParam_GlobalUnderwaterCausticsParams() ;

static inline int32_t getStaticF_shaderParam_GlobalUnderwaterCausticsTex() ;

static inline int32_t getStaticF_shaderParam_GlobalUnderwaterEffectsDistanceToSurfaceFade() ;

static inline int32_t getStaticF_shaderParam_GlobalUnderwaterFogColor() ;

static inline int32_t getStaticF_shaderParam_GlobalUnderwaterFogParams() ;

static inline int32_t getStaticF_shaderParam_GlobalWaterTintColor() ;

static inline int32_t getStaticF_shaderParam_GlobalZoneLiquidUVScale() ;

static inline int32_t getStaticF_shaderParam_ZoneWeatherMapDissolveProgress() ;

/// @brief Method get_GroundFogDepthFadeSq, addr 0x9cb1a24, size 0x24, virtual false, abstract: false, final false
inline float_t get_GroundFogDepthFadeSq() ;

/// @brief Method get_GroundFogHeightFade, addr 0x9cb1a78, size 0x20, virtual false, abstract: false, final false
inline float_t get_GroundFogHeightFade() ;

/// @brief Method get_isActiveInstance, addr 0x9cb1964, size 0x90, virtual false, abstract: false, final false
inline bool get_isActiveInstance() ;

/// [CompilerGenerated]
/// @brief Method get_shaderParam_ZoneLiquidPosRadiusSq, addr 0x9cb1cc0, size 0x58, virtual false, abstract: false, final false
static inline int32_t get_shaderParam_ZoneLiquidPosRadiusSq() ;

static inline void setStaticF__shaderParam_ZoneLiquidPosRadiusSq_k__BackingField(int32_t  value) ;

static inline void setStaticF_activeInstance(::UnityW<::GT_CustomMapSupportRuntime::CMSZoneShaderSettings>  value) ;

static inline void setStaticF_defaultsInstance(::UnityW<::GT_CustomMapSupportRuntime::CMSZoneShaderSettings>  value) ;

static inline void setStaticF_groundFogColor_shaderProp(int32_t  value) ;

static inline void setStaticF_groundFogDepthFadeSq_shaderProp(int32_t  value) ;

static inline void setStaticF_groundFogHeightFade_shaderProp(int32_t  value) ;

static inline void setStaticF_groundFogHeight_shaderProp(int32_t  value) ;

static inline void setStaticF_hasActiveInstance(bool  value) ;

static inline void setStaticF_hasDefaultsInstance(bool  value) ;

static inline void setStaticF_isInitialized(bool  value) ;

static inline void setStaticF_liquidShapeRadius_previousValue(float_t  value) ;

static inline void setStaticF_liquidShape_previousValue(::GlobalNamespace::CMSZoneShaderSettings_ELiquidShape  value) ;

static inline void setStaticF_liquidType_previousValue(::GlobalNamespace::CMSZoneShaderSettings_EZoneLiquidType  value) ;

static inline void setStaticF_shaderParam_GlobalLiquidResidueTex(int32_t  value) ;

static inline void setStaticF_shaderParam_GlobalUnderwaterCausticsParams(int32_t  value) ;

static inline void setStaticF_shaderParam_GlobalUnderwaterCausticsTex(int32_t  value) ;

static inline void setStaticF_shaderParam_GlobalUnderwaterEffectsDistanceToSurfaceFade(int32_t  value) ;

static inline void setStaticF_shaderParam_GlobalUnderwaterFogColor(int32_t  value) ;

static inline void setStaticF_shaderParam_GlobalUnderwaterFogParams(int32_t  value) ;

static inline void setStaticF_shaderParam_GlobalWaterTintColor(int32_t  value) ;

static inline void setStaticF_shaderParam_GlobalZoneLiquidUVScale(int32_t  value) ;

static inline void setStaticF_shaderParam_ZoneWeatherMapDissolveProgress(int32_t  value) ;

/// [CompilerGenerated]
/// @brief Method set_shaderParam_ZoneLiquidPosRadiusSq, addr 0x9cb1d18, size 0x5c, virtual false, abstract: false, final false
static inline void set_shaderParam_ZoneLiquidPosRadiusSq(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CMSZoneShaderSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CMSZoneShaderSettings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CMSZoneShaderSettings(CMSZoneShaderSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CMSZoneShaderSettings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CMSZoneShaderSettings(CMSZoneShaderSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30887};

/// @brief Field kEdTooltip_liquidResidueTex offset 0xffffffff size 0x8
static constexpr ::ConstString  kEdTooltip_liquidResidueTex{u"This is used for things like the charred surface effect when lava burns static geo."};

/// [Nullable(new[] { 2, 1 })]
/// @brief Field edZoneColliders, offset: 0x20, size: 0x8, def value: None
 ::ArrayW<::UnityW<::UnityEngine::Collider>>  ___edZoneColliders;

/// @brief Field edWasInitialized, offset: 0x28, size: 0x1, def value: None
 bool  ___edWasInitialized;

/// @brief Field isExported, offset: 0x29, size: 0x1, def value: None
 bool  ___isExported;

/// [Tooltip("Set this to true for cases like it is the first CMSZoneShaderSettings that should be activated when a scene is loaded.")]
/// @brief Field activateOnLoad, offset: 0x2a, size: 0x1, def value: None
 bool  ___activateOnLoad;

/// [Tooltip("These values will be used as the default global values that will be fallen back to when not in a zone and that the other scripts will reference.")]
/// @brief Field isDefaultValues, offset: 0x2b, size: 0x1, def value: None
 bool  ___isDefaultValues;

/// @brief Field applyGroundFog, offset: 0x2c, size: 0x1, def value: None
 bool  ___applyGroundFog;

/// @brief Field groundFogColor_overrideMode, offset: 0x30, size: 0x4, def value: None
 ::GlobalNamespace::CMSZoneShaderSettings_EOverrideMode  ___groundFogColor_overrideMode;

/// @brief Field groundFogColor, offset: 0x34, size: 0x10, def value: None
 ::UnityEngine::Color  ___groundFogColor;

/// @brief Field groundFogDepthFade_overrideMode, offset: 0x44, size: 0x4, def value: None
 ::GlobalNamespace::CMSZoneShaderSettings_EOverrideMode  ___groundFogDepthFade_overrideMode;

/// @brief Field groundFogDepthFadeSize, offset: 0x48, size: 0x4, def value: None
 float_t  ___groundFogDepthFadeSize;

/// @brief Field groundFogHeight_overrideMode, offset: 0x4c, size: 0x4, def value: None
 ::GlobalNamespace::CMSZoneShaderSettings_EOverrideMode  ___groundFogHeight_overrideMode;

/// @brief Field groundFogHeightPlane, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___groundFogHeightPlane;

/// @brief Field groundFogHeight, offset: 0x58, size: 0x4, def value: None
 float_t  ___groundFogHeight;

/// @brief Field groundFogHeightFade_overrideMode, offset: 0x5c, size: 0x4, def value: None
 ::GlobalNamespace::CMSZoneShaderSettings_EOverrideMode  ___groundFogHeightFade_overrideMode;

/// @brief Field groundFogHeightFadeSize, offset: 0x60, size: 0x4, def value: None
 float_t  ___groundFogHeightFadeSize;

/// @brief Field applyLiquidEffects, offset: 0x64, size: 0x1, def value: None
 bool  ___applyLiquidEffects;

/// @brief Field zoneLiquidType_overrideMode, offset: 0x68, size: 0x4, def value: None
 ::GlobalNamespace::CMSZoneShaderSettings_EOverrideMode  ___zoneLiquidType_overrideMode;

/// @brief Field zoneLiquidType, offset: 0x6c, size: 0x4, def value: None
 ::GlobalNamespace::CMSZoneShaderSettings_EZoneLiquidType  ___zoneLiquidType;

/// @brief Field liquidShape_overrideMode, offset: 0x70, size: 0x4, def value: None
 ::GlobalNamespace::CMSZoneShaderSettings_EOverrideMode  ___liquidShape_overrideMode;

/// @brief Field liquidShape, offset: 0x74, size: 0x4, def value: None
 ::GlobalNamespace::CMSZoneShaderSettings_ELiquidShape  ___liquidShape;

/// @brief Field liquidShapeRadius_overrideMode, offset: 0x78, size: 0x4, def value: None
 ::GlobalNamespace::CMSZoneShaderSettings_EOverrideMode  ___liquidShapeRadius_overrideMode;

/// @brief Field liquidShapeRadius, offset: 0x7c, size: 0x4, def value: None
 float_t  ___liquidShapeRadius;

/// @brief Field hasLiquidBottomTransform, offset: 0x80, size: 0x1, def value: None
 bool  ___hasLiquidBottomTransform;

/// @brief Field liquidBottomTransform_overrideMode, offset: 0x84, size: 0x4, def value: None
 ::GlobalNamespace::CMSZoneShaderSettings_EOverrideMode  ___liquidBottomTransform_overrideMode;

/// @brief Field liquidBottomTransform, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___liquidBottomTransform;

/// @brief Field liquidBottomPosY_previousValue, offset: 0x90, size: 0x4, def value: None
 float_t  ___liquidBottomPosY_previousValue;

/// @brief Field zoneLiquidUVScale_overrideMode, offset: 0x94, size: 0x4, def value: None
 ::GlobalNamespace::CMSZoneShaderSettings_EOverrideMode  ___zoneLiquidUVScale_overrideMode;

/// @brief Field zoneLiquidUVScale, offset: 0x98, size: 0x4, def value: None
 float_t  ___zoneLiquidUVScale;

/// @brief Field underwaterTintColor_overrideMode, offset: 0x9c, size: 0x4, def value: None
 ::GlobalNamespace::CMSZoneShaderSettings_EOverrideMode  ___underwaterTintColor_overrideMode;

/// @brief Field underwaterTintColor, offset: 0xa0, size: 0x10, def value: None
 ::UnityEngine::Color  ___underwaterTintColor;

/// @brief Field underwaterFogColor_overrideMode, offset: 0xb0, size: 0x4, def value: None
 ::GlobalNamespace::CMSZoneShaderSettings_EOverrideMode  ___underwaterFogColor_overrideMode;

/// @brief Field underwaterFogColor, offset: 0xb4, size: 0x10, def value: None
 ::UnityEngine::Color  ___underwaterFogColor;

/// @brief Field underwaterFogParams_overrideMode, offset: 0xc4, size: 0x4, def value: None
 ::GlobalNamespace::CMSZoneShaderSettings_EOverrideMode  ___underwaterFogParams_overrideMode;

/// @brief Field underwaterFogStart, offset: 0xc8, size: 0x4, def value: None
 float_t  ___underwaterFogStart;

/// @brief Field underwaterFogDistance, offset: 0xcc, size: 0x4, def value: None
 float_t  ___underwaterFogDistance;

/// [Tooltip("Fog params are: start, distance (end - start), unused, unused")]
/// @brief Field underwaterFogParams, offset: 0xd0, size: 0x10, def value: None
 ::UnityEngine::Vector4  ___underwaterFogParams;

/// @brief Field underwaterCausticsParams_overrideMode, offset: 0xe0, size: 0x4, def value: None
 ::GlobalNamespace::CMSZoneShaderSettings_EOverrideMode  ___underwaterCausticsParams_overrideMode;

/// @brief Field underwaterCausticsSpeed, offset: 0xe4, size: 0x4, def value: None
 float_t  ___underwaterCausticsSpeed;

/// @brief Field underwaterCausticsScale, offset: 0xe8, size: 0x4, def value: None
 float_t  ___underwaterCausticsScale;

/// [Tooltip("Caustics params are: Speed, Scale, Alpha, unused")]
/// @brief Field underwaterCausticsParams, offset: 0xec, size: 0x10, def value: None
 ::UnityEngine::Vector4  ___underwaterCausticsParams;

/// @brief Field underwaterCausticsTexture_overrideMode, offset: 0xfc, size: 0x4, def value: None
 ::GlobalNamespace::CMSZoneShaderSettings_EOverrideMode  ___underwaterCausticsTexture_overrideMode;

/// @brief Field underwaterCausticsTextureOverrideType, offset: 0x100, size: 0x4, def value: None
 ::GlobalNamespace::CMSZoneShaderSettings_ETextureOverrideType  ___underwaterCausticsTextureOverrideType;

/// @brief Field underwaterCausticsTexture, offset: 0x108, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___underwaterCausticsTexture;

/// @brief Field underwaterEffectsDistanceToSurfaceFade_overrideMode, offset: 0x110, size: 0x4, def value: None
 ::GlobalNamespace::CMSZoneShaderSettings_EOverrideMode  ___underwaterEffectsDistanceToSurfaceFade_overrideMode;

/// [Range(0.0001, 50)]
/// @brief Field underwaterFogDistanceToSurfaceFadeMinimum, offset: 0x114, size: 0x4, def value: None
 float_t  ___underwaterFogDistanceToSurfaceFadeMinimum;

/// [Range(0.0001, 50)]
/// @brief Field underwaterFogDistanceToSurfaceFadeMaximum, offset: 0x118, size: 0x4, def value: None
 float_t  ___underwaterFogDistanceToSurfaceFadeMaximum;

/// @brief Field underwaterEffectsDistanceToSurfaceFade, offset: 0x11c, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___underwaterEffectsDistanceToSurfaceFade;

/// [Tooltip("This is used for things like the charred surface effect when lava burns static geo.")]
/// @brief Field liquidResidueTex_overrideMode, offset: 0x124, size: 0x4, def value: None
 ::GlobalNamespace::CMSZoneShaderSettings_EOverrideMode  ___liquidResidueTex_overrideMode;

/// @brief Field liquidResidueTextureOverrideType, offset: 0x128, size: 0x4, def value: None
 ::GlobalNamespace::CMSZoneShaderSettings_ETextureOverrideType  ___liquidResidueTextureOverrideType;

/// [Tooltip("This is used for things like the charred surface effect when lava burns static geo.")]
/// @brief Field liquidResidueTex, offset: 0x130, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___liquidResidueTex;

/// @brief Field shaderParam_GlobalMainWaterSurfacePlane, offset: 0x138, size: 0x4, def value: None
 int32_t  ___shaderParam_GlobalMainWaterSurfacePlane;

/// @brief Field hasMainWaterSurfacePlane, offset: 0x13c, size: 0x1, def value: None
 bool  ___hasMainWaterSurfacePlane;

/// @brief Field hasDynamicWaterSurfacePlane, offset: 0x13d, size: 0x1, def value: None
 bool  ___hasDynamicWaterSurfacePlane;

/// @brief Field mainWaterSurfacePlane_overrideMode, offset: 0x140, size: 0x4, def value: None
 ::GlobalNamespace::CMSZoneShaderSettings_EOverrideMode  ___mainWaterSurfacePlane_overrideMode;

/// @brief Field mainWaterSurfacePlane, offset: 0x148, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___mainWaterSurfacePlane;

/// @brief Field zoneWeatherMapDissolveProgress_overrideMode, offset: 0x150, size: 0x4, def value: None
 ::GlobalNamespace::CMSZoneShaderSettings_EOverrideMode  ___zoneWeatherMapDissolveProgress_overrideMode;

/// [Range(0, 1)]
/// @brief Field zoneWeatherMapDissolveProgress, offset: 0x154, size: 0x4, def value: None
 float_t  ___zoneWeatherMapDissolveProgress;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GT_CustomMapSupportRuntime::CMSZoneShaderSettings, ___edZoneColliders) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::CMSZoneShaderSettings, ___edWasInitialized) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::CMSZoneShaderSettings, ___isExported) == 0x29, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::CMSZoneShaderSettings, ___activateOnLoad) == 0x2a, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::CMSZoneShaderSettings, ___isDefaultValues) == 0x2b, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::CMSZoneShaderSettings, ___applyGroundFog) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::CMSZoneShaderSettings, ___groundFogColor_overrideMode) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::CMSZoneShaderSettings, ___groundFogColor) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::CMSZoneShaderSettings, ___groundFogDepthFade_overrideMode) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::CMSZoneShaderSettings, ___groundFogDepthFadeSize) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::CMSZoneShaderSettings, ___groundFogHeight_overrideMode) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::CMSZoneShaderSettings, ___groundFogHeightPlane) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::CMSZoneShaderSettings, ___groundFogHeight) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::CMSZoneShaderSettings, ___groundFogHeightFade_overrideMode) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::CMSZoneShaderSettings, ___groundFogHeightFadeSize) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::CMSZoneShaderSettings, ___applyLiquidEffects) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::CMSZoneShaderSettings, ___zoneLiquidType_overrideMode) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::CMSZoneShaderSettings, ___zoneLiquidType) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::CMSZoneShaderSettings, ___liquidShape_overrideMode) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::CMSZoneShaderSettings, ___liquidShape) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::CMSZoneShaderSettings, ___liquidShapeRadius_overrideMode) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::CMSZoneShaderSettings, ___liquidShapeRadius) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::CMSZoneShaderSettings, ___hasLiquidBottomTransform) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::CMSZoneShaderSettings, ___liquidBottomTransform_overrideMode) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::CMSZoneShaderSettings, ___liquidBottomTransform) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::CMSZoneShaderSettings, ___liquidBottomPosY_previousValue) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::CMSZoneShaderSettings, ___zoneLiquidUVScale_overrideMode) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::CMSZoneShaderSettings, ___zoneLiquidUVScale) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::CMSZoneShaderSettings, ___underwaterTintColor_overrideMode) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::CMSZoneShaderSettings, ___underwaterTintColor) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::CMSZoneShaderSettings, ___underwaterFogColor_overrideMode) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::CMSZoneShaderSettings, ___underwaterFogColor) == 0xb4, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::CMSZoneShaderSettings, ___underwaterFogParams_overrideMode) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::CMSZoneShaderSettings, ___underwaterFogStart) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::CMSZoneShaderSettings, ___underwaterFogDistance) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::CMSZoneShaderSettings, ___underwaterFogParams) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::CMSZoneShaderSettings, ___underwaterCausticsParams_overrideMode) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::CMSZoneShaderSettings, ___underwaterCausticsSpeed) == 0xe4, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::CMSZoneShaderSettings, ___underwaterCausticsScale) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::CMSZoneShaderSettings, ___underwaterCausticsParams) == 0xec, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::CMSZoneShaderSettings, ___underwaterCausticsTexture_overrideMode) == 0xfc, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::CMSZoneShaderSettings, ___underwaterCausticsTextureOverrideType) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::CMSZoneShaderSettings, ___underwaterCausticsTexture) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::CMSZoneShaderSettings, ___underwaterEffectsDistanceToSurfaceFade_overrideMode) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::CMSZoneShaderSettings, ___underwaterFogDistanceToSurfaceFadeMinimum) == 0x114, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::CMSZoneShaderSettings, ___underwaterFogDistanceToSurfaceFadeMaximum) == 0x118, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::CMSZoneShaderSettings, ___underwaterEffectsDistanceToSurfaceFade) == 0x11c, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::CMSZoneShaderSettings, ___liquidResidueTex_overrideMode) == 0x124, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::CMSZoneShaderSettings, ___liquidResidueTextureOverrideType) == 0x128, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::CMSZoneShaderSettings, ___liquidResidueTex) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::CMSZoneShaderSettings, ___shaderParam_GlobalMainWaterSurfacePlane) == 0x138, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::CMSZoneShaderSettings, ___hasMainWaterSurfacePlane) == 0x13c, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::CMSZoneShaderSettings, ___hasDynamicWaterSurfacePlane) == 0x13d, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::CMSZoneShaderSettings, ___mainWaterSurfacePlane_overrideMode) == 0x140, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::CMSZoneShaderSettings, ___mainWaterSurfacePlane) == 0x148, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::CMSZoneShaderSettings, ___zoneWeatherMapDissolveProgress_overrideMode) == 0x150, "Offset mismatch!");

static_assert(offsetof(::GT_CustomMapSupportRuntime::CMSZoneShaderSettings, ___zoneWeatherMapDissolveProgress) == 0x154, "Offset mismatch!");

static_assert(sizeof(::GT_CustomMapSupportRuntime::CMSZoneShaderSettings) == 0x158, "Size mismatch!");

} // namespace end def GT_CustomMapSupportRuntime
