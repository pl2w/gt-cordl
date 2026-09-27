#pragma once
// IWYU pragma private; include "GorillaTag/Rendering/ZoneShaderSettings.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GorillaTag/Rendering/zzzz__ZoneShaderSettings_ELiquidShape_def.hpp"
#include "GorillaTag/Rendering/zzzz__ZoneShaderSettings_EOverrideMode_def.hpp"
#include "GorillaTag/Rendering/zzzz__ZoneShaderSettings_EZoneLiquidType_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ZoneShaderSettings)
namespace GT_CustomMapSupportRuntime {
class CMSZoneShaderSettings;
}
namespace GlobalNamespace {
struct CMSZoneShaderSettings_CMSZoneShaderProperties;
}
namespace GlobalNamespace {
class ITickSystemPost;
}
namespace GlobalNamespace {
struct ZoneShaderSettings_ELiquidShape;
}
namespace GlobalNamespace {
struct ZoneShaderSettings_EOverrideMode;
}
namespace GlobalNamespace {
struct ZoneShaderSettings_EZoneLiquidType;
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
namespace GorillaTag::Rendering {
class ZoneShaderSettings;
}
// Write type traits
MARK_REF_T(::GorillaTag::Rendering::ZoneShaderSettings*);
DEFINE_IL2CPP_CLASS(::GorillaTag::Rendering::ZoneShaderSettings*, "GorillaTag.Rendering", "ZoneShaderSettings");
// Dependencies GorillaTag.Rendering.ZoneShaderSettings::ELiquidShape, GorillaTag.Rendering.ZoneShaderSettings::EOverrideMode, GorillaTag.Rendering.ZoneShaderSettings::EZoneLiquidType, UnityEngine.Color, UnityEngine.MonoBehaviour, UnityEngine.Vector2, UnityEngine.Vector4
namespace GorillaTag::Rendering {
// Is value type: false
// CS Name: GorillaTag.Rendering.ZoneShaderSettings
class CORDL_TYPE ZoneShaderSettings : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using ELiquidShape = ::GlobalNamespace::ZoneShaderSettings_ELiquidShape;

using EOverrideMode = ::GlobalNamespace::ZoneShaderSettings_EOverrideMode;

using EZoneLiquidType = ::GlobalNamespace::ZoneShaderSettings_EZoneLiquidType;

/// @brief [DebugReadout]
 __declspec(property(get=get_GroundFogDepthFadeSq)) float_t  GroundFogDepthFadeSq;

/// @brief [DebugReadout]
 __declspec(property(get=get_GroundFogHeightFade)) float_t  GroundFogHeightFade;

 __declspec(property(get=ITickSystemPost_get_PostTickRunning, put=ITickSystemPost_set_PostTickRunning)) bool  ITickSystemPost_PostTickRunning;

/// @brief Field <ITickSystemPost.PostTickRunning>k__BackingField, offset 0x118, size 0x1 
 __declspec(property(get=__cordl_internal_get__ITickSystemPost_PostTickRunning_k__BackingField, put=__cordl_internal_set__ITickSystemPost_PostTickRunning_k__BackingField)) bool  _ITickSystemPost_PostTickRunning_k__BackingField;

/// @brief Field _activateOnAwake, offset 0x20, size 0x1 
 __declspec(property(get=__cordl_internal_get__activateOnAwake, put=__cordl_internal_set__activateOnAwake)) bool  _activateOnAwake;

/// @brief Field <activeInstance>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__activeInstance_k__BackingField, put=setStaticF__activeInstance_k__BackingField)) ::UnityW<::GorillaTag::Rendering::ZoneShaderSettings>  _activeInstance_k__BackingField;

/// @brief Field <defaultsInstance>k__BackingField, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF__defaultsInstance_k__BackingField, put=setStaticF__defaultsInstance_k__BackingField)) ::UnityW<::GorillaTag::Rendering::ZoneShaderSettings>  _defaultsInstance_k__BackingField;

/// @brief Field _groundFogDepthFadeSize, offset 0x3c, size 0x4 
 __declspec(property(get=__cordl_internal_get__groundFogDepthFadeSize, put=__cordl_internal_set__groundFogDepthFadeSize)) float_t  _groundFogDepthFadeSize;

/// @brief Field _groundFogHeightFadeSize, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get__groundFogHeightFadeSize, put=__cordl_internal_set__groundFogHeightFadeSize)) float_t  _groundFogHeightFadeSize;

/// @brief Field <hasActiveInstance>k__BackingField, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__hasActiveInstance_k__BackingField, put=setStaticF__hasActiveInstance_k__BackingField)) bool  _hasActiveInstance_k__BackingField;

/// @brief Field <hasDefaultsInstance>k__BackingField, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF__hasDefaultsInstance_k__BackingField, put=setStaticF__hasDefaultsInstance_k__BackingField)) bool  _hasDefaultsInstance_k__BackingField;

/// @brief Field <shaderParam_ZoneLiquidPosRadiusSq>k__BackingField, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__shaderParam_ZoneLiquidPosRadiusSq_k__BackingField, put=setStaticF__shaderParam_ZoneLiquidPosRadiusSq_k__BackingField)) int32_t  _shaderParam_ZoneLiquidPosRadiusSq_k__BackingField;

/// @brief Field didEverSetLiquidShape, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_didEverSetLiquidShape, put=setStaticF_didEverSetLiquidShape)) bool  didEverSetLiquidShape;

/// @brief Field groundFogColor, offset 0x28, size 0x10 
 __declspec(property(get=__cordl_internal_get_groundFogColor, put=__cordl_internal_set_groundFogColor)) ::UnityEngine::Color  groundFogColor;

/// @brief Field groundFogColor_overrideMode, offset 0x24, size 0x4 
 __declspec(property(get=__cordl_internal_get_groundFogColor_overrideMode, put=__cordl_internal_set_groundFogColor_overrideMode)) ::GlobalNamespace::ZoneShaderSettings_EOverrideMode  groundFogColor_overrideMode;

/// @brief Field groundFogColor_shaderProp, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_groundFogColor_shaderProp, put=setStaticF_groundFogColor_shaderProp)) int32_t  groundFogColor_shaderProp;

/// @brief Field groundFogDepthFadeSq_shaderProp, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_groundFogDepthFadeSq_shaderProp, put=setStaticF_groundFogDepthFadeSq_shaderProp)) int32_t  groundFogDepthFadeSq_shaderProp;

/// @brief Field groundFogDepthFade_overrideMode, offset 0x38, size 0x4 
 __declspec(property(get=__cordl_internal_get_groundFogDepthFade_overrideMode, put=__cordl_internal_set_groundFogDepthFade_overrideMode)) ::GlobalNamespace::ZoneShaderSettings_EOverrideMode  groundFogDepthFade_overrideMode;

/// @brief Field groundFogHeight, offset 0x44, size 0x4 
 __declspec(property(get=__cordl_internal_get_groundFogHeight, put=__cordl_internal_set_groundFogHeight)) float_t  groundFogHeight;

/// @brief Field groundFogHeightFade_overrideMode, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get_groundFogHeightFade_overrideMode, put=__cordl_internal_set_groundFogHeightFade_overrideMode)) ::GlobalNamespace::ZoneShaderSettings_EOverrideMode  groundFogHeightFade_overrideMode;

/// @brief Field groundFogHeightFade_shaderProp, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_groundFogHeightFade_shaderProp, put=setStaticF_groundFogHeightFade_shaderProp)) int32_t  groundFogHeightFade_shaderProp;

/// @brief Field groundFogHeight_overrideMode, offset 0x40, size 0x4 
 __declspec(property(get=__cordl_internal_get_groundFogHeight_overrideMode, put=__cordl_internal_set_groundFogHeight_overrideMode)) ::GlobalNamespace::ZoneShaderSettings_EOverrideMode  groundFogHeight_overrideMode;

/// @brief Field groundFogHeight_shaderProp, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_groundFogHeight_shaderProp, put=setStaticF_groundFogHeight_shaderProp)) int32_t  groundFogHeight_shaderProp;

/// @brief Field hasDynamicWaterSurfacePlane, offset 0xfd, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasDynamicWaterSurfacePlane, put=__cordl_internal_set_hasDynamicWaterSurfacePlane)) bool  hasDynamicWaterSurfacePlane;

/// @brief Field hasLiquidBottomTransform, offset 0x68, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasLiquidBottomTransform, put=__cordl_internal_set_hasLiquidBottomTransform)) bool  hasLiquidBottomTransform;

/// @brief Field hasMainWaterSurfacePlane, offset 0xfc, size 0x1 
 __declspec(property(get=__cordl_internal_get_hasMainWaterSurfacePlane, put=__cordl_internal_set_hasMainWaterSurfacePlane)) bool  hasMainWaterSurfacePlane;

 __declspec(property(get=get_isActiveInstance)) bool  isActiveInstance;

/// @brief Field isDefaultValues, offset 0x21, size 0x1 
 __declspec(property(get=__cordl_internal_get_isDefaultValues, put=__cordl_internal_set_isDefaultValues)) bool  isDefaultValues;

/// @brief Field isInitialized, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_isInitialized, put=setStaticF_isInitialized)) bool  isInitialized;

/// @brief Field liquidBottomPosY_previousValue, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get_liquidBottomPosY_previousValue, put=__cordl_internal_set_liquidBottomPosY_previousValue)) float_t  liquidBottomPosY_previousValue;

/// @brief Field liquidBottomTransform, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_liquidBottomTransform, put=__cordl_internal_set_liquidBottomTransform)) ::UnityW<::UnityEngine::Transform>  liquidBottomTransform;

/// @brief Field liquidBottomTransform_overrideMode, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_liquidBottomTransform_overrideMode, put=__cordl_internal_set_liquidBottomTransform_overrideMode)) ::GlobalNamespace::ZoneShaderSettings_EOverrideMode  liquidBottomTransform_overrideMode;

/// @brief Field liquidResidueTex, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get_liquidResidueTex, put=__cordl_internal_set_liquidResidueTex)) ::UnityW<::UnityEngine::Texture2D>  liquidResidueTex;

/// @brief Field liquidResidueTex_overrideMode, offset 0xec, size 0x4 
 __declspec(property(get=__cordl_internal_get_liquidResidueTex_overrideMode, put=__cordl_internal_set_liquidResidueTex_overrideMode)) ::GlobalNamespace::ZoneShaderSettings_EOverrideMode  liquidResidueTex_overrideMode;

/// @brief Field liquidShape, offset 0x5c, size 0x4 
 __declspec(property(get=__cordl_internal_get_liquidShape, put=__cordl_internal_set_liquidShape)) ::GlobalNamespace::ZoneShaderSettings_ELiquidShape  liquidShape;

/// @brief Field liquidShapeRadius, offset 0x64, size 0x4 
 __declspec(property(get=__cordl_internal_get_liquidShapeRadius, put=__cordl_internal_set_liquidShapeRadius)) float_t  liquidShapeRadius;

/// @brief Field liquidShapeRadius_overrideMode, offset 0x60, size 0x4 
 __declspec(property(get=__cordl_internal_get_liquidShapeRadius_overrideMode, put=__cordl_internal_set_liquidShapeRadius_overrideMode)) ::GlobalNamespace::ZoneShaderSettings_EOverrideMode  liquidShapeRadius_overrideMode;

/// @brief Field liquidShapeRadius_previousValue, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_liquidShapeRadius_previousValue, put=setStaticF_liquidShapeRadius_previousValue)) float_t  liquidShapeRadius_previousValue;

/// @brief Field liquidShape_overrideMode, offset 0x58, size 0x4 
 __declspec(property(get=__cordl_internal_get_liquidShape_overrideMode, put=__cordl_internal_set_liquidShape_overrideMode)) ::GlobalNamespace::ZoneShaderSettings_EOverrideMode  liquidShape_overrideMode;

/// @brief Field liquidShape_previousValue, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_liquidShape_previousValue, put=setStaticF_liquidShape_previousValue)) ::GlobalNamespace::ZoneShaderSettings_ELiquidShape  liquidShape_previousValue;

/// @brief Field liquidType_previousValue, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_liquidType_previousValue, put=setStaticF_liquidType_previousValue)) ::GlobalNamespace::ZoneShaderSettings_EZoneLiquidType  liquidType_previousValue;

/// @brief Field mainWaterSurfacePlane, offset 0x108, size 0x8 
 __declspec(property(get=__cordl_internal_get_mainWaterSurfacePlane, put=__cordl_internal_set_mainWaterSurfacePlane)) ::UnityW<::UnityEngine::Transform>  mainWaterSurfacePlane;

/// @brief Field mainWaterSurfacePlane_overrideMode, offset 0x100, size 0x4 
 __declspec(property(get=__cordl_internal_get_mainWaterSurfacePlane_overrideMode, put=__cordl_internal_set_mainWaterSurfacePlane_overrideMode)) ::GlobalNamespace::ZoneShaderSettings_EOverrideMode  mainWaterSurfacePlane_overrideMode;

/// @brief Field shaderParam_GlobalLiquidResidueTex, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_shaderParam_GlobalLiquidResidueTex, put=setStaticF_shaderParam_GlobalLiquidResidueTex)) int32_t  shaderParam_GlobalLiquidResidueTex;

/// @brief Field shaderParam_GlobalMainWaterSurfacePlane, offset 0xf8, size 0x4 
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

/// @brief Field underwaterCausticsParams, offset 0xc4, size 0x10 
 __declspec(property(get=__cordl_internal_get_underwaterCausticsParams, put=__cordl_internal_set_underwaterCausticsParams)) ::UnityEngine::Vector4  underwaterCausticsParams;

/// @brief Field underwaterCausticsParams_overrideMode, offset 0xc0, size 0x4 
 __declspec(property(get=__cordl_internal_get_underwaterCausticsParams_overrideMode, put=__cordl_internal_set_underwaterCausticsParams_overrideMode)) ::GlobalNamespace::ZoneShaderSettings_EOverrideMode  underwaterCausticsParams_overrideMode;

/// @brief Field underwaterCausticsTexture, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get_underwaterCausticsTexture, put=__cordl_internal_set_underwaterCausticsTexture)) ::UnityW<::UnityEngine::Texture2D>  underwaterCausticsTexture;

/// @brief Field underwaterCausticsTexture_overrideMode, offset 0xd4, size 0x4 
 __declspec(property(get=__cordl_internal_get_underwaterCausticsTexture_overrideMode, put=__cordl_internal_set_underwaterCausticsTexture_overrideMode)) ::GlobalNamespace::ZoneShaderSettings_EOverrideMode  underwaterCausticsTexture_overrideMode;

/// @brief Field underwaterEffectsDistanceToSurfaceFade, offset 0xe4, size 0x8 
 __declspec(property(get=__cordl_internal_get_underwaterEffectsDistanceToSurfaceFade, put=__cordl_internal_set_underwaterEffectsDistanceToSurfaceFade)) ::UnityEngine::Vector2  underwaterEffectsDistanceToSurfaceFade;

/// @brief Field underwaterEffectsDistanceToSurfaceFade_overrideMode, offset 0xe0, size 0x4 
 __declspec(property(get=__cordl_internal_get_underwaterEffectsDistanceToSurfaceFade_overrideMode, put=__cordl_internal_set_underwaterEffectsDistanceToSurfaceFade_overrideMode)) ::GlobalNamespace::ZoneShaderSettings_EOverrideMode  underwaterEffectsDistanceToSurfaceFade_overrideMode;

/// @brief Field underwaterFogColor, offset 0x9c, size 0x10 
 __declspec(property(get=__cordl_internal_get_underwaterFogColor, put=__cordl_internal_set_underwaterFogColor)) ::UnityEngine::Color  underwaterFogColor;

/// @brief Field underwaterFogColor_overrideMode, offset 0x98, size 0x4 
 __declspec(property(get=__cordl_internal_get_underwaterFogColor_overrideMode, put=__cordl_internal_set_underwaterFogColor_overrideMode)) ::GlobalNamespace::ZoneShaderSettings_EOverrideMode  underwaterFogColor_overrideMode;

/// @brief Field underwaterFogParams, offset 0xb0, size 0x10 
 __declspec(property(get=__cordl_internal_get_underwaterFogParams, put=__cordl_internal_set_underwaterFogParams)) ::UnityEngine::Vector4  underwaterFogParams;

/// @brief Field underwaterFogParams_overrideMode, offset 0xac, size 0x4 
 __declspec(property(get=__cordl_internal_get_underwaterFogParams_overrideMode, put=__cordl_internal_set_underwaterFogParams_overrideMode)) ::GlobalNamespace::ZoneShaderSettings_EOverrideMode  underwaterFogParams_overrideMode;

/// @brief Field underwaterTintColor, offset 0x88, size 0x10 
 __declspec(property(get=__cordl_internal_get_underwaterTintColor, put=__cordl_internal_set_underwaterTintColor)) ::UnityEngine::Color  underwaterTintColor;

/// @brief Field underwaterTintColor_overrideMode, offset 0x84, size 0x4 
 __declspec(property(get=__cordl_internal_get_underwaterTintColor_overrideMode, put=__cordl_internal_set_underwaterTintColor_overrideMode)) ::GlobalNamespace::ZoneShaderSettings_EOverrideMode  underwaterTintColor_overrideMode;

/// @brief Field zoneLiquidType, offset 0x54, size 0x4 
 __declspec(property(get=__cordl_internal_get_zoneLiquidType, put=__cordl_internal_set_zoneLiquidType)) ::GlobalNamespace::ZoneShaderSettings_EZoneLiquidType  zoneLiquidType;

/// @brief Field zoneLiquidType_overrideMode, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get_zoneLiquidType_overrideMode, put=__cordl_internal_set_zoneLiquidType_overrideMode)) ::GlobalNamespace::ZoneShaderSettings_EOverrideMode  zoneLiquidType_overrideMode;

/// @brief Field zoneLiquidUVScale, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get_zoneLiquidUVScale, put=__cordl_internal_set_zoneLiquidUVScale)) float_t  zoneLiquidUVScale;

/// @brief Field zoneLiquidUVScale_overrideMode, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get_zoneLiquidUVScale_overrideMode, put=__cordl_internal_set_zoneLiquidUVScale_overrideMode)) ::GlobalNamespace::ZoneShaderSettings_EOverrideMode  zoneLiquidUVScale_overrideMode;

/// @brief Field zoneWeatherMapDissolveProgress, offset 0x114, size 0x4 
 __declspec(property(get=__cordl_internal_get_zoneWeatherMapDissolveProgress, put=__cordl_internal_set_zoneWeatherMapDissolveProgress)) float_t  zoneWeatherMapDissolveProgress;

/// @brief Field zoneWeatherMapDissolveProgress_overrideMode, offset 0x110, size 0x4 
 __declspec(property(get=__cordl_internal_get_zoneWeatherMapDissolveProgress_overrideMode, put=__cordl_internal_set_zoneWeatherMapDissolveProgress_overrideMode)) ::GlobalNamespace::ZoneShaderSettings_EOverrideMode  zoneWeatherMapDissolveProgress_overrideMode;

/// @brief Convert operator to "::GlobalNamespace::ITickSystemPost"
constexpr operator  ::GlobalNamespace::ITickSystemPost*() noexcept;

/// @brief Method ActivateDefaultSettings, addr 0x5d5d3bc, size 0xec, virtual false, abstract: false, final false
static inline void ActivateDefaultSettings() ;

/// @brief Method ApplyColor, addr 0x5d5d4d8, size 0xa4, virtual false, abstract: false, final false
inline void ApplyColor(int32_t  shaderProp, ::GlobalNamespace::ZoneShaderSettings_EOverrideMode  overrideMode, ::UnityEngine::Color  value, ::UnityEngine::Color  defaultValue) ;

/// @brief Method ApplyFloat, addr 0x5d5d57c, size 0x2c, virtual false, abstract: false, final false
inline void ApplyFloat(int32_t  shaderProp, ::GlobalNamespace::ZoneShaderSettings_EOverrideMode  overrideMode, float_t  value, float_t  defaultValue) ;

/// @brief Method ApplyTexture, addr 0x5d5d5e0, size 0x30, virtual false, abstract: false, final false
inline void ApplyTexture(int32_t  shaderProp, ::GlobalNamespace::ZoneShaderSettings_EOverrideMode  overrideMode, ::UnityEngine::Texture2D*  value, ::UnityEngine::Texture2D*  defaultValue) ;

/// @brief Method ApplyValues, addr 0x5d5ca78, size 0x944, virtual false, abstract: false, final false
inline void ApplyValues() ;

/// @brief Method ApplyVector, addr 0x5d5d610, size 0x38, virtual false, abstract: false, final false
inline void ApplyVector(int32_t  shaderProp, ::GlobalNamespace::ZoneShaderSettings_EOverrideMode  overrideMode, ::UnityEngine::Vector2  value, ::UnityEngine::Vector2  defaultValue) ;

/// @brief Method ApplyVector, addr 0x5d5d648, size 0x38, virtual false, abstract: false, final false
inline void ApplyVector(int32_t  shaderProp, ::GlobalNamespace::ZoneShaderSettings_EOverrideMode  overrideMode, ::UnityEngine::Vector3  value, ::UnityEngine::Vector3  defaultValue) ;

/// @brief Method ApplyVector, addr 0x5d5d5a8, size 0x38, virtual false, abstract: false, final false
inline void ApplyVector(int32_t  shaderProp, ::GlobalNamespace::ZoneShaderSettings_EOverrideMode  overrideMode, ::UnityEngine::Vector4  value, ::UnityEngine::Vector4  defaultValue) ;

/// @brief Method Awake, addr 0x5d5b830, size 0x134, virtual false, abstract: false, final false
inline void Awake() ;

/// @brief Method BecomeActiveInstance, addr 0x5d5bdd4, size 0x2c4, virtual false, abstract: false, final false
inline void BecomeActiveInstance(bool  force) ;

/// @brief Method CheckDefaultsInstance, addr 0x5d5b964, size 0x470, virtual false, abstract: false, final false
inline bool CheckDefaultsInstance() ;

/// @brief Method CopySettings, addr 0x5d5d680, size 0x458, virtual false, abstract: false, final false
inline void CopySettings(::GT_CustomMapSupportRuntime::CMSZoneShaderSettings*  cmsZoneShaderSettings, bool  rerunAwake) ;

/// @brief Method CopySettings, addr 0x5d5dad8, size 0x178, virtual false, abstract: false, final false
inline void CopySettings(::GorillaTag::Rendering::ZoneShaderSettings*  zoneShaderSettings, bool  rerunAwake) ;

/// @brief Method GetWaterY, addr 0x5d5b78c, size 0xa4, virtual false, abstract: false, final false
static inline float_t GetWaterY() ;

/// @brief Method ITickSystemPost.PostTick, addr 0x5d5c3b0, size 0x140, virtual true, abstract: false, final true
inline void ITickSystemPost_PostTick() ;

/// [CompilerGenerated]
/// @brief Method ITickSystemPost.get_PostTickRunning, addr 0x5d5c3a0, size 0x8, virtual true, abstract: false, final true
inline bool ITickSystemPost_get_PostTickRunning() ;

/// [CompilerGenerated]
/// @brief Method ITickSystemPost.set_PostTickRunning, addr 0x5d5c3a8, size 0x8, virtual true, abstract: false, final true
inline void ITickSystemPost_set_PostTickRunning(bool  value) ;

static inline ::GorillaTag::Rendering::ZoneShaderSettings* New_ctor() ;

/// @brief Method OnDestroy, addr 0x5d5c184, size 0x21c, virtual false, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x5d5c118, size 0x6c, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x5d5c098, size 0x80, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method ReplaceDefaultValues, addr 0x5d5dec8, size 0x28c, virtual false, abstract: false, final false
inline void ReplaceDefaultValues(::GlobalNamespace::CMSZoneShaderSettings_CMSZoneShaderProperties  defaultZoneShaderProperties, bool  rerunAwake) ;

/// @brief Method ReplaceDefaultValues, addr 0x5d5dc50, size 0x278, virtual false, abstract: false, final false
inline void ReplaceDefaultValues(::GorillaTag::Rendering::ZoneShaderSettings*  defaultZoneShaderSettings, bool  rerunAwake) ;

/// @brief Method SetGroundFogValue, addr 0x5d5d4a8, size 0x30, virtual false, abstract: false, final false
inline void SetGroundFogValue(::UnityEngine::Color  fogColor, float_t  fogDepthFade, float_t  fogHeight, float_t  fogHeightFade) ;

/// @brief Method SetZoneLiquidShapeKeywordEnum, addr 0x5d5b64c, size 0x8c, virtual false, abstract: false, final false
inline void SetZoneLiquidShapeKeywordEnum(::GlobalNamespace::ZoneShaderSettings_ELiquidShape  shape) ;

/// @brief Method SetZoneLiquidTypeKeywordEnum, addr 0x5d5b570, size 0xdc, virtual false, abstract: false, final false
inline void SetZoneLiquidTypeKeywordEnum(::GlobalNamespace::ZoneShaderSettings_EZoneLiquidType  liquidType) ;

/// @brief Method UpdateMainPlaneShaderProperty, addr 0x5d5c4f0, size 0x588, virtual false, abstract: false, final false
inline void UpdateMainPlaneShaderProperty() ;

constexpr bool const& __cordl_internal_get__ITickSystemPost_PostTickRunning_k__BackingField() const;

constexpr bool& __cordl_internal_get__ITickSystemPost_PostTickRunning_k__BackingField() ;

constexpr bool const& __cordl_internal_get__activateOnAwake() const;

constexpr bool& __cordl_internal_get__activateOnAwake() ;

constexpr float_t const& __cordl_internal_get__groundFogDepthFadeSize() const;

constexpr float_t& __cordl_internal_get__groundFogDepthFadeSize() ;

constexpr float_t const& __cordl_internal_get__groundFogHeightFadeSize() const;

constexpr float_t& __cordl_internal_get__groundFogHeightFadeSize() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_groundFogColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_groundFogColor() ;

constexpr ::GlobalNamespace::ZoneShaderSettings_EOverrideMode const& __cordl_internal_get_groundFogColor_overrideMode() const;

constexpr ::GlobalNamespace::ZoneShaderSettings_EOverrideMode& __cordl_internal_get_groundFogColor_overrideMode() ;

constexpr ::GlobalNamespace::ZoneShaderSettings_EOverrideMode const& __cordl_internal_get_groundFogDepthFade_overrideMode() const;

constexpr ::GlobalNamespace::ZoneShaderSettings_EOverrideMode& __cordl_internal_get_groundFogDepthFade_overrideMode() ;

constexpr float_t const& __cordl_internal_get_groundFogHeight() const;

constexpr float_t& __cordl_internal_get_groundFogHeight() ;

constexpr ::GlobalNamespace::ZoneShaderSettings_EOverrideMode const& __cordl_internal_get_groundFogHeightFade_overrideMode() const;

constexpr ::GlobalNamespace::ZoneShaderSettings_EOverrideMode& __cordl_internal_get_groundFogHeightFade_overrideMode() ;

constexpr ::GlobalNamespace::ZoneShaderSettings_EOverrideMode const& __cordl_internal_get_groundFogHeight_overrideMode() const;

constexpr ::GlobalNamespace::ZoneShaderSettings_EOverrideMode& __cordl_internal_get_groundFogHeight_overrideMode() ;

constexpr bool const& __cordl_internal_get_hasDynamicWaterSurfacePlane() const;

constexpr bool& __cordl_internal_get_hasDynamicWaterSurfacePlane() ;

constexpr bool const& __cordl_internal_get_hasLiquidBottomTransform() const;

constexpr bool& __cordl_internal_get_hasLiquidBottomTransform() ;

constexpr bool const& __cordl_internal_get_hasMainWaterSurfacePlane() const;

constexpr bool& __cordl_internal_get_hasMainWaterSurfacePlane() ;

constexpr bool const& __cordl_internal_get_isDefaultValues() const;

constexpr bool& __cordl_internal_get_isDefaultValues() ;

constexpr float_t const& __cordl_internal_get_liquidBottomPosY_previousValue() const;

constexpr float_t& __cordl_internal_get_liquidBottomPosY_previousValue() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_liquidBottomTransform() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_liquidBottomTransform() ;

constexpr ::GlobalNamespace::ZoneShaderSettings_EOverrideMode const& __cordl_internal_get_liquidBottomTransform_overrideMode() const;

constexpr ::GlobalNamespace::ZoneShaderSettings_EOverrideMode& __cordl_internal_get_liquidBottomTransform_overrideMode() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_liquidResidueTex() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_liquidResidueTex() ;

constexpr ::GlobalNamespace::ZoneShaderSettings_EOverrideMode const& __cordl_internal_get_liquidResidueTex_overrideMode() const;

constexpr ::GlobalNamespace::ZoneShaderSettings_EOverrideMode& __cordl_internal_get_liquidResidueTex_overrideMode() ;

constexpr ::GlobalNamespace::ZoneShaderSettings_ELiquidShape const& __cordl_internal_get_liquidShape() const;

constexpr ::GlobalNamespace::ZoneShaderSettings_ELiquidShape& __cordl_internal_get_liquidShape() ;

constexpr float_t const& __cordl_internal_get_liquidShapeRadius() const;

constexpr float_t& __cordl_internal_get_liquidShapeRadius() ;

constexpr ::GlobalNamespace::ZoneShaderSettings_EOverrideMode const& __cordl_internal_get_liquidShapeRadius_overrideMode() const;

constexpr ::GlobalNamespace::ZoneShaderSettings_EOverrideMode& __cordl_internal_get_liquidShapeRadius_overrideMode() ;

constexpr ::GlobalNamespace::ZoneShaderSettings_EOverrideMode const& __cordl_internal_get_liquidShape_overrideMode() const;

constexpr ::GlobalNamespace::ZoneShaderSettings_EOverrideMode& __cordl_internal_get_liquidShape_overrideMode() ;

constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_mainWaterSurfacePlane() const;

constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_mainWaterSurfacePlane() ;

constexpr ::GlobalNamespace::ZoneShaderSettings_EOverrideMode const& __cordl_internal_get_mainWaterSurfacePlane_overrideMode() const;

constexpr ::GlobalNamespace::ZoneShaderSettings_EOverrideMode& __cordl_internal_get_mainWaterSurfacePlane_overrideMode() ;

constexpr int32_t const& __cordl_internal_get_shaderParam_GlobalMainWaterSurfacePlane() const;

constexpr int32_t& __cordl_internal_get_shaderParam_GlobalMainWaterSurfacePlane() ;

constexpr ::UnityEngine::Vector4 const& __cordl_internal_get_underwaterCausticsParams() const;

constexpr ::UnityEngine::Vector4& __cordl_internal_get_underwaterCausticsParams() ;

constexpr ::GlobalNamespace::ZoneShaderSettings_EOverrideMode const& __cordl_internal_get_underwaterCausticsParams_overrideMode() const;

constexpr ::GlobalNamespace::ZoneShaderSettings_EOverrideMode& __cordl_internal_get_underwaterCausticsParams_overrideMode() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_underwaterCausticsTexture() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_underwaterCausticsTexture() ;

constexpr ::GlobalNamespace::ZoneShaderSettings_EOverrideMode const& __cordl_internal_get_underwaterCausticsTexture_overrideMode() const;

constexpr ::GlobalNamespace::ZoneShaderSettings_EOverrideMode& __cordl_internal_get_underwaterCausticsTexture_overrideMode() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_underwaterEffectsDistanceToSurfaceFade() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_underwaterEffectsDistanceToSurfaceFade() ;

constexpr ::GlobalNamespace::ZoneShaderSettings_EOverrideMode const& __cordl_internal_get_underwaterEffectsDistanceToSurfaceFade_overrideMode() const;

constexpr ::GlobalNamespace::ZoneShaderSettings_EOverrideMode& __cordl_internal_get_underwaterEffectsDistanceToSurfaceFade_overrideMode() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_underwaterFogColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_underwaterFogColor() ;

constexpr ::GlobalNamespace::ZoneShaderSettings_EOverrideMode const& __cordl_internal_get_underwaterFogColor_overrideMode() const;

constexpr ::GlobalNamespace::ZoneShaderSettings_EOverrideMode& __cordl_internal_get_underwaterFogColor_overrideMode() ;

constexpr ::UnityEngine::Vector4 const& __cordl_internal_get_underwaterFogParams() const;

constexpr ::UnityEngine::Vector4& __cordl_internal_get_underwaterFogParams() ;

constexpr ::GlobalNamespace::ZoneShaderSettings_EOverrideMode const& __cordl_internal_get_underwaterFogParams_overrideMode() const;

constexpr ::GlobalNamespace::ZoneShaderSettings_EOverrideMode& __cordl_internal_get_underwaterFogParams_overrideMode() ;

constexpr ::UnityEngine::Color const& __cordl_internal_get_underwaterTintColor() const;

constexpr ::UnityEngine::Color& __cordl_internal_get_underwaterTintColor() ;

constexpr ::GlobalNamespace::ZoneShaderSettings_EOverrideMode const& __cordl_internal_get_underwaterTintColor_overrideMode() const;

constexpr ::GlobalNamespace::ZoneShaderSettings_EOverrideMode& __cordl_internal_get_underwaterTintColor_overrideMode() ;

constexpr ::GlobalNamespace::ZoneShaderSettings_EZoneLiquidType const& __cordl_internal_get_zoneLiquidType() const;

constexpr ::GlobalNamespace::ZoneShaderSettings_EZoneLiquidType& __cordl_internal_get_zoneLiquidType() ;

constexpr ::GlobalNamespace::ZoneShaderSettings_EOverrideMode const& __cordl_internal_get_zoneLiquidType_overrideMode() const;

constexpr ::GlobalNamespace::ZoneShaderSettings_EOverrideMode& __cordl_internal_get_zoneLiquidType_overrideMode() ;

constexpr float_t const& __cordl_internal_get_zoneLiquidUVScale() const;

constexpr float_t& __cordl_internal_get_zoneLiquidUVScale() ;

constexpr ::GlobalNamespace::ZoneShaderSettings_EOverrideMode const& __cordl_internal_get_zoneLiquidUVScale_overrideMode() const;

constexpr ::GlobalNamespace::ZoneShaderSettings_EOverrideMode& __cordl_internal_get_zoneLiquidUVScale_overrideMode() ;

constexpr float_t const& __cordl_internal_get_zoneWeatherMapDissolveProgress() const;

constexpr float_t& __cordl_internal_get_zoneWeatherMapDissolveProgress() ;

constexpr ::GlobalNamespace::ZoneShaderSettings_EOverrideMode const& __cordl_internal_get_zoneWeatherMapDissolveProgress_overrideMode() const;

constexpr ::GlobalNamespace::ZoneShaderSettings_EOverrideMode& __cordl_internal_get_zoneWeatherMapDissolveProgress_overrideMode() ;

constexpr void __cordl_internal_set__ITickSystemPost_PostTickRunning_k__BackingField(bool  value) ;

constexpr void __cordl_internal_set__activateOnAwake(bool  value) ;

constexpr void __cordl_internal_set__groundFogDepthFadeSize(float_t  value) ;

constexpr void __cordl_internal_set__groundFogHeightFadeSize(float_t  value) ;

constexpr void __cordl_internal_set_groundFogColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_groundFogColor_overrideMode(::GlobalNamespace::ZoneShaderSettings_EOverrideMode  value) ;

constexpr void __cordl_internal_set_groundFogDepthFade_overrideMode(::GlobalNamespace::ZoneShaderSettings_EOverrideMode  value) ;

constexpr void __cordl_internal_set_groundFogHeight(float_t  value) ;

constexpr void __cordl_internal_set_groundFogHeightFade_overrideMode(::GlobalNamespace::ZoneShaderSettings_EOverrideMode  value) ;

constexpr void __cordl_internal_set_groundFogHeight_overrideMode(::GlobalNamespace::ZoneShaderSettings_EOverrideMode  value) ;

constexpr void __cordl_internal_set_hasDynamicWaterSurfacePlane(bool  value) ;

constexpr void __cordl_internal_set_hasLiquidBottomTransform(bool  value) ;

constexpr void __cordl_internal_set_hasMainWaterSurfacePlane(bool  value) ;

constexpr void __cordl_internal_set_isDefaultValues(bool  value) ;

constexpr void __cordl_internal_set_liquidBottomPosY_previousValue(float_t  value) ;

constexpr void __cordl_internal_set_liquidBottomTransform(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_liquidBottomTransform_overrideMode(::GlobalNamespace::ZoneShaderSettings_EOverrideMode  value) ;

constexpr void __cordl_internal_set_liquidResidueTex(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set_liquidResidueTex_overrideMode(::GlobalNamespace::ZoneShaderSettings_EOverrideMode  value) ;

constexpr void __cordl_internal_set_liquidShape(::GlobalNamespace::ZoneShaderSettings_ELiquidShape  value) ;

constexpr void __cordl_internal_set_liquidShapeRadius(float_t  value) ;

constexpr void __cordl_internal_set_liquidShapeRadius_overrideMode(::GlobalNamespace::ZoneShaderSettings_EOverrideMode  value) ;

constexpr void __cordl_internal_set_liquidShape_overrideMode(::GlobalNamespace::ZoneShaderSettings_EOverrideMode  value) ;

constexpr void __cordl_internal_set_mainWaterSurfacePlane(::UnityW<::UnityEngine::Transform>  value) ;

constexpr void __cordl_internal_set_mainWaterSurfacePlane_overrideMode(::GlobalNamespace::ZoneShaderSettings_EOverrideMode  value) ;

constexpr void __cordl_internal_set_shaderParam_GlobalMainWaterSurfacePlane(int32_t  value) ;

constexpr void __cordl_internal_set_underwaterCausticsParams(::UnityEngine::Vector4  value) ;

constexpr void __cordl_internal_set_underwaterCausticsParams_overrideMode(::GlobalNamespace::ZoneShaderSettings_EOverrideMode  value) ;

constexpr void __cordl_internal_set_underwaterCausticsTexture(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set_underwaterCausticsTexture_overrideMode(::GlobalNamespace::ZoneShaderSettings_EOverrideMode  value) ;

constexpr void __cordl_internal_set_underwaterEffectsDistanceToSurfaceFade(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_underwaterEffectsDistanceToSurfaceFade_overrideMode(::GlobalNamespace::ZoneShaderSettings_EOverrideMode  value) ;

constexpr void __cordl_internal_set_underwaterFogColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_underwaterFogColor_overrideMode(::GlobalNamespace::ZoneShaderSettings_EOverrideMode  value) ;

constexpr void __cordl_internal_set_underwaterFogParams(::UnityEngine::Vector4  value) ;

constexpr void __cordl_internal_set_underwaterFogParams_overrideMode(::GlobalNamespace::ZoneShaderSettings_EOverrideMode  value) ;

constexpr void __cordl_internal_set_underwaterTintColor(::UnityEngine::Color  value) ;

constexpr void __cordl_internal_set_underwaterTintColor_overrideMode(::GlobalNamespace::ZoneShaderSettings_EOverrideMode  value) ;

constexpr void __cordl_internal_set_zoneLiquidType(::GlobalNamespace::ZoneShaderSettings_EZoneLiquidType  value) ;

constexpr void __cordl_internal_set_zoneLiquidType_overrideMode(::GlobalNamespace::ZoneShaderSettings_EOverrideMode  value) ;

constexpr void __cordl_internal_set_zoneLiquidUVScale(float_t  value) ;

constexpr void __cordl_internal_set_zoneLiquidUVScale_overrideMode(::GlobalNamespace::ZoneShaderSettings_EOverrideMode  value) ;

constexpr void __cordl_internal_set_zoneWeatherMapDissolveProgress(float_t  value) ;

constexpr void __cordl_internal_set_zoneWeatherMapDissolveProgress_overrideMode(::GlobalNamespace::ZoneShaderSettings_EOverrideMode  value) ;

/// @brief Method .ctor, addr 0x5d5e154, size 0xd4, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityW<::GorillaTag::Rendering::ZoneShaderSettings> getStaticF__activeInstance_k__BackingField() ;

static inline ::UnityW<::GorillaTag::Rendering::ZoneShaderSettings> getStaticF__defaultsInstance_k__BackingField() ;

static inline bool getStaticF__hasActiveInstance_k__BackingField() ;

static inline bool getStaticF__hasDefaultsInstance_k__BackingField() ;

static inline int32_t getStaticF__shaderParam_ZoneLiquidPosRadiusSq_k__BackingField() ;

static inline bool getStaticF_didEverSetLiquidShape() ;

static inline int32_t getStaticF_groundFogColor_shaderProp() ;

static inline int32_t getStaticF_groundFogDepthFadeSq_shaderProp() ;

static inline int32_t getStaticF_groundFogHeightFade_shaderProp() ;

static inline int32_t getStaticF_groundFogHeight_shaderProp() ;

static inline bool getStaticF_isInitialized() ;

static inline float_t getStaticF_liquidShapeRadius_previousValue() ;

static inline ::GlobalNamespace::ZoneShaderSettings_ELiquidShape getStaticF_liquidShape_previousValue() ;

static inline ::GlobalNamespace::ZoneShaderSettings_EZoneLiquidType getStaticF_liquidType_previousValue() ;

static inline int32_t getStaticF_shaderParam_GlobalLiquidResidueTex() ;

static inline int32_t getStaticF_shaderParam_GlobalUnderwaterCausticsParams() ;

static inline int32_t getStaticF_shaderParam_GlobalUnderwaterCausticsTex() ;

static inline int32_t getStaticF_shaderParam_GlobalUnderwaterEffectsDistanceToSurfaceFade() ;

static inline int32_t getStaticF_shaderParam_GlobalUnderwaterFogColor() ;

static inline int32_t getStaticF_shaderParam_GlobalUnderwaterFogParams() ;

static inline int32_t getStaticF_shaderParam_GlobalWaterTintColor() ;

static inline int32_t getStaticF_shaderParam_GlobalZoneLiquidUVScale() ;

static inline int32_t getStaticF_shaderParam_ZoneWeatherMapDissolveProgress() ;

/// @brief Method get_GroundFogDepthFadeSq, addr 0x5d5b52c, size 0x24, virtual false, abstract: false, final false
inline float_t get_GroundFogDepthFadeSq() ;

/// @brief Method get_GroundFogHeightFade, addr 0x5d5b550, size 0x20, virtual false, abstract: false, final false
inline float_t get_GroundFogHeightFade() ;

/// [CompilerGenerated]
/// @brief Method get_activeInstance, addr 0x5d5b2fc, size 0x58, virtual false, abstract: false, final false
static inline ::UnityW<::GorillaTag::Rendering::ZoneShaderSettings> get_activeInstance() ;

/// [CompilerGenerated]
/// @brief Method get_defaultsInstance, addr 0x5d5b18c, size 0x58, virtual false, abstract: false, final false
static inline ::UnityW<::GorillaTag::Rendering::ZoneShaderSettings> get_defaultsInstance() ;

/// [CompilerGenerated]
/// @brief Method get_hasActiveInstance, addr 0x5d5b3b4, size 0x58, virtual false, abstract: false, final false
static inline bool get_hasActiveInstance() ;

/// [CompilerGenerated]
/// @brief Method get_hasDefaultsInstance, addr 0x5d5b244, size 0x58, virtual false, abstract: false, final false
static inline bool get_hasDefaultsInstance() ;

/// @brief Method get_isActiveInstance, addr 0x5d5b46c, size 0xc0, virtual false, abstract: false, final false
inline bool get_isActiveInstance() ;

/// [CompilerGenerated]
/// @brief Method get_shaderParam_ZoneLiquidPosRadiusSq, addr 0x5d5b6d8, size 0x58, virtual false, abstract: false, final false
static inline int32_t get_shaderParam_ZoneLiquidPosRadiusSq() ;

/// @brief Convert to "::GlobalNamespace::ITickSystemPost"
constexpr ::GlobalNamespace::ITickSystemPost* i___GlobalNamespace__ITickSystemPost() noexcept;

static inline void setStaticF__activeInstance_k__BackingField(::UnityW<::GorillaTag::Rendering::ZoneShaderSettings>  value) ;

static inline void setStaticF__defaultsInstance_k__BackingField(::UnityW<::GorillaTag::Rendering::ZoneShaderSettings>  value) ;

static inline void setStaticF__hasActiveInstance_k__BackingField(bool  value) ;

static inline void setStaticF__hasDefaultsInstance_k__BackingField(bool  value) ;

static inline void setStaticF__shaderParam_ZoneLiquidPosRadiusSq_k__BackingField(int32_t  value) ;

static inline void setStaticF_didEverSetLiquidShape(bool  value) ;

static inline void setStaticF_groundFogColor_shaderProp(int32_t  value) ;

static inline void setStaticF_groundFogDepthFadeSq_shaderProp(int32_t  value) ;

static inline void setStaticF_groundFogHeightFade_shaderProp(int32_t  value) ;

static inline void setStaticF_groundFogHeight_shaderProp(int32_t  value) ;

static inline void setStaticF_isInitialized(bool  value) ;

static inline void setStaticF_liquidShapeRadius_previousValue(float_t  value) ;

static inline void setStaticF_liquidShape_previousValue(::GlobalNamespace::ZoneShaderSettings_ELiquidShape  value) ;

static inline void setStaticF_liquidType_previousValue(::GlobalNamespace::ZoneShaderSettings_EZoneLiquidType  value) ;

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
/// @brief Method set_activeInstance, addr 0x5d5b354, size 0x60, virtual false, abstract: false, final false
static inline void set_activeInstance(::GorillaTag::Rendering::ZoneShaderSettings*  value) ;

/// [CompilerGenerated]
/// @brief Method set_defaultsInstance, addr 0x5d5b1e4, size 0x60, virtual false, abstract: false, final false
static inline void set_defaultsInstance(::GorillaTag::Rendering::ZoneShaderSettings*  value) ;

/// [CompilerGenerated]
/// @brief Method set_hasActiveInstance, addr 0x5d5b40c, size 0x60, virtual false, abstract: false, final false
static inline void set_hasActiveInstance(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_hasDefaultsInstance, addr 0x5d5b29c, size 0x60, virtual false, abstract: false, final false
static inline void set_hasDefaultsInstance(bool  value) ;

/// [CompilerGenerated]
/// @brief Method set_shaderParam_ZoneLiquidPosRadiusSq, addr 0x5d5b730, size 0x5c, virtual false, abstract: false, final false
static inline void set_shaderParam_ZoneLiquidPosRadiusSq(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ZoneShaderSettings() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ZoneShaderSettings", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ZoneShaderSettings(ZoneShaderSettings && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ZoneShaderSettings", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ZoneShaderSettings(ZoneShaderSettings const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{4816};

/// @brief Field kEdTooltip_liquidResidueTex offset 0xffffffff size 0x8
static constexpr ::ConstString  kEdTooltip_liquidResidueTex{u"This is used for things like the charred surface effect when lava burns static geo."};

/// [Tooltip("Set this to true for cases like it is the first ZoneShaderSettings that should be activated when entering a scene.")]
/// [SerializeField]
/// @brief Field _activateOnAwake, offset: 0x20, size: 0x1, def value: None
 bool  ____activateOnAwake;

/// [Tooltip("These values will be used as the default global values that will be fallen back to when not in a zone and that the other scripts will reference.")]
/// @brief Field isDefaultValues, offset: 0x21, size: 0x1, def value: None
 bool  ___isDefaultValues;

/// [SerializeField]
/// @brief Field groundFogColor_overrideMode, offset: 0x24, size: 0x4, def value: None
 ::GlobalNamespace::ZoneShaderSettings_EOverrideMode  ___groundFogColor_overrideMode;

/// [SerializeField]
/// @brief Field groundFogColor, offset: 0x28, size: 0x10, def value: None
 ::UnityEngine::Color  ___groundFogColor;

/// [SerializeField]
/// @brief Field groundFogDepthFade_overrideMode, offset: 0x38, size: 0x4, def value: None
 ::GlobalNamespace::ZoneShaderSettings_EOverrideMode  ___groundFogDepthFade_overrideMode;

/// [SerializeField]
/// @brief Field _groundFogDepthFadeSize, offset: 0x3c, size: 0x4, def value: None
 float_t  ____groundFogDepthFadeSize;

/// [SerializeField]
/// @brief Field groundFogHeight_overrideMode, offset: 0x40, size: 0x4, def value: None
 ::GlobalNamespace::ZoneShaderSettings_EOverrideMode  ___groundFogHeight_overrideMode;

/// [SerializeField]
/// @brief Field groundFogHeight, offset: 0x44, size: 0x4, def value: None
 float_t  ___groundFogHeight;

/// [SerializeField]
/// @brief Field groundFogHeightFade_overrideMode, offset: 0x48, size: 0x4, def value: None
 ::GlobalNamespace::ZoneShaderSettings_EOverrideMode  ___groundFogHeightFade_overrideMode;

/// [SerializeField]
/// @brief Field _groundFogHeightFadeSize, offset: 0x4c, size: 0x4, def value: None
 float_t  ____groundFogHeightFadeSize;

/// [SerializeField]
/// @brief Field zoneLiquidType_overrideMode, offset: 0x50, size: 0x4, def value: None
 ::GlobalNamespace::ZoneShaderSettings_EOverrideMode  ___zoneLiquidType_overrideMode;

/// [SerializeField]
/// @brief Field zoneLiquidType, offset: 0x54, size: 0x4, def value: None
 ::GlobalNamespace::ZoneShaderSettings_EZoneLiquidType  ___zoneLiquidType;

/// [SerializeField]
/// @brief Field liquidShape_overrideMode, offset: 0x58, size: 0x4, def value: None
 ::GlobalNamespace::ZoneShaderSettings_EOverrideMode  ___liquidShape_overrideMode;

/// [SerializeField]
/// @brief Field liquidShape, offset: 0x5c, size: 0x4, def value: None
 ::GlobalNamespace::ZoneShaderSettings_ELiquidShape  ___liquidShape;

/// [SerializeField]
/// @brief Field liquidShapeRadius_overrideMode, offset: 0x60, size: 0x4, def value: None
 ::GlobalNamespace::ZoneShaderSettings_EOverrideMode  ___liquidShapeRadius_overrideMode;

/// [Tooltip("Fog params are: start, distance (end - start), unused, unused")]
/// [SerializeField]
/// @brief Field liquidShapeRadius, offset: 0x64, size: 0x4, def value: None
 float_t  ___liquidShapeRadius;

/// @brief Field hasLiquidBottomTransform, offset: 0x68, size: 0x1, def value: None
 bool  ___hasLiquidBottomTransform;

/// [SerializeField]
/// @brief Field liquidBottomTransform_overrideMode, offset: 0x6c, size: 0x4, def value: None
 ::GlobalNamespace::ZoneShaderSettings_EOverrideMode  ___liquidBottomTransform_overrideMode;

/// [Tooltip("TODO: remove this when there is a way to precalculate the nearest triangle plane per vertex so it will work better for rivers.")]
/// [SerializeField]
/// @brief Field liquidBottomTransform, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___liquidBottomTransform;

/// @brief Field liquidBottomPosY_previousValue, offset: 0x78, size: 0x4, def value: None
 float_t  ___liquidBottomPosY_previousValue;

/// [SerializeField]
/// @brief Field zoneLiquidUVScale_overrideMode, offset: 0x7c, size: 0x4, def value: None
 ::GlobalNamespace::ZoneShaderSettings_EOverrideMode  ___zoneLiquidUVScale_overrideMode;

/// [Tooltip("Fog params are: start, distance (end - start), unused, unused")]
/// [SerializeField]
/// @brief Field zoneLiquidUVScale, offset: 0x80, size: 0x4, def value: None
 float_t  ___zoneLiquidUVScale;

/// [SerializeField]
/// @brief Field underwaterTintColor_overrideMode, offset: 0x84, size: 0x4, def value: None
 ::GlobalNamespace::ZoneShaderSettings_EOverrideMode  ___underwaterTintColor_overrideMode;

/// [SerializeField]
/// @brief Field underwaterTintColor, offset: 0x88, size: 0x10, def value: None
 ::UnityEngine::Color  ___underwaterTintColor;

/// [SerializeField]
/// @brief Field underwaterFogColor_overrideMode, offset: 0x98, size: 0x4, def value: None
 ::GlobalNamespace::ZoneShaderSettings_EOverrideMode  ___underwaterFogColor_overrideMode;

/// [SerializeField]
/// @brief Field underwaterFogColor, offset: 0x9c, size: 0x10, def value: None
 ::UnityEngine::Color  ___underwaterFogColor;

/// [SerializeField]
/// @brief Field underwaterFogParams_overrideMode, offset: 0xac, size: 0x4, def value: None
 ::GlobalNamespace::ZoneShaderSettings_EOverrideMode  ___underwaterFogParams_overrideMode;

/// [Tooltip("Fog params are: start, distance (end - start), unused, unused")]
/// [SerializeField]
/// @brief Field underwaterFogParams, offset: 0xb0, size: 0x10, def value: None
 ::UnityEngine::Vector4  ___underwaterFogParams;

/// [SerializeField]
/// @brief Field underwaterCausticsParams_overrideMode, offset: 0xc0, size: 0x4, def value: None
 ::GlobalNamespace::ZoneShaderSettings_EOverrideMode  ___underwaterCausticsParams_overrideMode;

/// [Tooltip("Caustics params are: speed1, scale, alpha, unused")]
/// [SerializeField]
/// @brief Field underwaterCausticsParams, offset: 0xc4, size: 0x10, def value: None
 ::UnityEngine::Vector4  ___underwaterCausticsParams;

/// [SerializeField]
/// @brief Field underwaterCausticsTexture_overrideMode, offset: 0xd4, size: 0x4, def value: None
 ::GlobalNamespace::ZoneShaderSettings_EOverrideMode  ___underwaterCausticsTexture_overrideMode;

/// [SerializeField]
/// @brief Field underwaterCausticsTexture, offset: 0xd8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___underwaterCausticsTexture;

/// [SerializeField]
/// @brief Field underwaterEffectsDistanceToSurfaceFade_overrideMode, offset: 0xe0, size: 0x4, def value: None
 ::GlobalNamespace::ZoneShaderSettings_EOverrideMode  ___underwaterEffectsDistanceToSurfaceFade_overrideMode;

/// [SerializeField]
/// @brief Field underwaterEffectsDistanceToSurfaceFade, offset: 0xe4, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___underwaterEffectsDistanceToSurfaceFade;

/// [SerializeField]
/// [Tooltip("This is used for things like the charred surface effect when lava burns static geo.")]
/// @brief Field liquidResidueTex_overrideMode, offset: 0xec, size: 0x4, def value: None
 ::GlobalNamespace::ZoneShaderSettings_EOverrideMode  ___liquidResidueTex_overrideMode;

/// [SerializeField]
/// [Tooltip("This is used for things like the charred surface effect when lava burns static geo.")]
/// @brief Field liquidResidueTex, offset: 0xf0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___liquidResidueTex;

/// @brief Field shaderParam_GlobalMainWaterSurfacePlane, offset: 0xf8, size: 0x4, def value: None
 int32_t  ___shaderParam_GlobalMainWaterSurfacePlane;

/// @brief Field hasMainWaterSurfacePlane, offset: 0xfc, size: 0x1, def value: None
 bool  ___hasMainWaterSurfacePlane;

/// @brief Field hasDynamicWaterSurfacePlane, offset: 0xfd, size: 0x1, def value: None
 bool  ___hasDynamicWaterSurfacePlane;

/// [SerializeField]
/// @brief Field mainWaterSurfacePlane_overrideMode, offset: 0x100, size: 0x4, def value: None
 ::GlobalNamespace::ZoneShaderSettings_EOverrideMode  ___mainWaterSurfacePlane_overrideMode;

/// [Tooltip("TODO: remove this when there is a way to precalculate the nearest triangle plane per vertex so it will work better for rivers.")]
/// [SerializeField]
/// @brief Field mainWaterSurfacePlane, offset: 0x108, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  ___mainWaterSurfacePlane;

/// [SerializeField]
/// @brief Field zoneWeatherMapDissolveProgress_overrideMode, offset: 0x110, size: 0x4, def value: None
 ::GlobalNamespace::ZoneShaderSettings_EOverrideMode  ___zoneWeatherMapDissolveProgress_overrideMode;

/// [Tooltip("Fog params are: start, distance (end - start), unused, unused")]
/// [Range(0, 1)]
/// [SerializeField]
/// @brief Field zoneWeatherMapDissolveProgress, offset: 0x114, size: 0x4, def value: None
 float_t  ___zoneWeatherMapDissolveProgress;

/// [CompilerGenerated]
/// @brief Field <ITickSystemPost.PostTickRunning>k__BackingField, offset: 0x118, size: 0x1, def value: None
 bool  ____ITickSystemPost_PostTickRunning_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GorillaTag::Rendering::ZoneShaderSettings, ____activateOnAwake) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Rendering::ZoneShaderSettings, ___isDefaultValues) == 0x21, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Rendering::ZoneShaderSettings, ___groundFogColor_overrideMode) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Rendering::ZoneShaderSettings, ___groundFogColor) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Rendering::ZoneShaderSettings, ___groundFogDepthFade_overrideMode) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Rendering::ZoneShaderSettings, ____groundFogDepthFadeSize) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Rendering::ZoneShaderSettings, ___groundFogHeight_overrideMode) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Rendering::ZoneShaderSettings, ___groundFogHeight) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Rendering::ZoneShaderSettings, ___groundFogHeightFade_overrideMode) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Rendering::ZoneShaderSettings, ____groundFogHeightFadeSize) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Rendering::ZoneShaderSettings, ___zoneLiquidType_overrideMode) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Rendering::ZoneShaderSettings, ___zoneLiquidType) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Rendering::ZoneShaderSettings, ___liquidShape_overrideMode) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Rendering::ZoneShaderSettings, ___liquidShape) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Rendering::ZoneShaderSettings, ___liquidShapeRadius_overrideMode) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Rendering::ZoneShaderSettings, ___liquidShapeRadius) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Rendering::ZoneShaderSettings, ___hasLiquidBottomTransform) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Rendering::ZoneShaderSettings, ___liquidBottomTransform_overrideMode) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Rendering::ZoneShaderSettings, ___liquidBottomTransform) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Rendering::ZoneShaderSettings, ___liquidBottomPosY_previousValue) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Rendering::ZoneShaderSettings, ___zoneLiquidUVScale_overrideMode) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Rendering::ZoneShaderSettings, ___zoneLiquidUVScale) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Rendering::ZoneShaderSettings, ___underwaterTintColor_overrideMode) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Rendering::ZoneShaderSettings, ___underwaterTintColor) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Rendering::ZoneShaderSettings, ___underwaterFogColor_overrideMode) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Rendering::ZoneShaderSettings, ___underwaterFogColor) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Rendering::ZoneShaderSettings, ___underwaterFogParams_overrideMode) == 0xac, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Rendering::ZoneShaderSettings, ___underwaterFogParams) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Rendering::ZoneShaderSettings, ___underwaterCausticsParams_overrideMode) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Rendering::ZoneShaderSettings, ___underwaterCausticsParams) == 0xc4, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Rendering::ZoneShaderSettings, ___underwaterCausticsTexture_overrideMode) == 0xd4, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Rendering::ZoneShaderSettings, ___underwaterCausticsTexture) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Rendering::ZoneShaderSettings, ___underwaterEffectsDistanceToSurfaceFade_overrideMode) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Rendering::ZoneShaderSettings, ___underwaterEffectsDistanceToSurfaceFade) == 0xe4, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Rendering::ZoneShaderSettings, ___liquidResidueTex_overrideMode) == 0xec, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Rendering::ZoneShaderSettings, ___liquidResidueTex) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Rendering::ZoneShaderSettings, ___shaderParam_GlobalMainWaterSurfacePlane) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Rendering::ZoneShaderSettings, ___hasMainWaterSurfacePlane) == 0xfc, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Rendering::ZoneShaderSettings, ___hasDynamicWaterSurfacePlane) == 0xfd, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Rendering::ZoneShaderSettings, ___mainWaterSurfacePlane_overrideMode) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Rendering::ZoneShaderSettings, ___mainWaterSurfacePlane) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Rendering::ZoneShaderSettings, ___zoneWeatherMapDissolveProgress_overrideMode) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Rendering::ZoneShaderSettings, ___zoneWeatherMapDissolveProgress) == 0x114, "Offset mismatch!");

static_assert(offsetof(::GorillaTag::Rendering::ZoneShaderSettings, ____ITickSystemPost_PostTickRunning_k__BackingField) == 0x118, "Offset mismatch!");

static_assert(sizeof(::GorillaTag::Rendering::ZoneShaderSettings) == 0x120, "Size mismatch!");

} // namespace end def GorillaTag::Rendering
