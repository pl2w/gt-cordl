#pragma once
// IWYU pragma private; include "GlobalNamespace/MaterialFingerprint.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GTShaderTransparencyMode_def.hpp"
#include "Unity/Mathematics/zzzz__int4_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MaterialFingerprint)
namespace GlobalNamespace {
struct GTShaderTransparencyMode;
}
namespace GlobalNamespace {
struct TexFormatInfo;
}
namespace GlobalNamespace {
struct UberShaderMatUsedProps;
}
namespace Unity::Mathematics {
struct int4;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace GlobalNamespace {
struct MaterialFingerprint;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MaterialFingerprint);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MaterialFingerprint, "", "MaterialFingerprint");
// Dependencies GTShaderTransparencyMode, Unity.Mathematics.int4
namespace GlobalNamespace {
// Is value type: true
// CS Name: MaterialFingerprint
struct CORDL_TYPE MaterialFingerprint {
public:
// Declarations
/// @brief Method GetMatTransparencyMode, addr 0x569a774, size 0x6c, virtual false, abstract: false, final false
static inline ::GlobalNamespace::GTShaderTransparencyMode GetMatTransparencyMode(::UnityEngine::Material*  mat) ;

/// @brief Method ToString, addr 0x569a7e0, size 0x260, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method _GetTexFormatInfo, addr 0x569a678, size 0xfc, virtual false, abstract: false, final false
static inline ::GlobalNamespace::TexFormatInfo _GetTexFormatInfo(::UnityEngine::Material*  mat, ::StringW  texPropName, int32_t  usedCount) ;

/// @brief Method _GetTexPropGuid, addr 0x569a2e0, size 0x18, virtual false, abstract: false, final false
static inline ::StringW _GetTexPropGuid(::UnityEngine::Material*  mat, int32_t  texPropId, int32_t  usedCount) ;

/// @brief Method _Round, addr 0x5699f60, size 0x380, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 _Round(::UnityEngine::Color  c, int32_t  mul, int32_t  usedCount) ;

/// @brief Method _Round, addr 0x569a2f8, size 0x380, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int4 _Round(::UnityEngine::Vector4  v, int32_t  mul, int32_t  usedCount) ;

/// @brief Method _Round, addr 0x5699e7c, size 0xe4, virtual false, abstract: false, final false
static inline int32_t _Round(float_t  f, int32_t  mul, int32_t  usedCount) ;

/// @brief Method .ctor, addr 0x56983f0, size 0x1a8c, virtual false, abstract: false, final false
inline void _ctor(::GlobalNamespace::UberShaderMatUsedProps  used) ;

// Ctor Parameters []
// @brief default ctor
constexpr MaterialFingerprint() ;

// Ctor Parameters [CppParam { name: "_TransparencyMode", ty: "::GlobalNamespace::GTShaderTransparencyMode", modifiers: "", def_value: None, comment: None }, CppParam { name: "_Cutoff", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_ColorSource", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_BaseColor", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: None, comment: None }, CppParam { name: "_GChannelColor", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: None, comment: None }, CppParam { name: "_BChannelColor", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: None, comment: None }, CppParam { name: "_AChannelColor", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: None, comment: None }, CppParam { name: "_BaseMap", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "_BaseMap_ST", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: None, comment: None }, CppParam { name: "_SettingsPreset", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_AdvancedOptions", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_TexMipBias", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_BaseMap_WH", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: None, comment: None }, CppParam { name: "_TexelSnapToggle", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_TexelSnap_Factor", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_UVSource", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_AlphaDetailToggle", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_AlphaDetail_ST", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: None, comment: None }, CppParam { name: "_AlphaDetail_Opacity", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_AlphaDetail_WorldSpace", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_MaskMapToggle", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_MaskMap", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "_MaskMap_ST", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: None, comment: None }, CppParam { name: "_MaskMap_WH", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: None, comment: None }, CppParam { name: "_LavaLampToggle", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_GradientMapToggle", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_GradientMap", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "_DoTextureRotation", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_RotateAngle", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_RotateAnim", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_UseWaveWarp", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_WaveAmplitude", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_WaveFrequency", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_WaveScale", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_WaveTimeScale", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_ReflectToggle", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_ReflectBoxProjectToggle", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_ReflectBoxCubePos", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: None, comment: None }, CppParam { name: "_ReflectBoxSize", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: None, comment: None }, CppParam { name: "_ReflectBoxRotation", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: None, comment: None }, CppParam { name: "_ReflectMatcapToggle", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_ReflectMatcapPerspToggle", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_ReflectNormalToggle", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_ReflectTex", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "_ReflectNormalTex", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "_ReflectAlbedoTint", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_ReflectTint", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: None, comment: None }, CppParam { name: "_ReflectOpacity", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_ReflectExposure", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_ReflectOffset", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: None, comment: None }, CppParam { name: "_ReflectScale", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: None, comment: None }, CppParam { name: "_ReflectRotate", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_HalfLambertToggle", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_ParallaxPlanarToggle", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_ParallaxToggle", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_ParallaxAAToggle", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_ParallaxAABias", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_DepthMap", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "_ParallaxAmplitude", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_ParallaxSamplesMinMax", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: None, comment: None }, CppParam { name: "_UvShiftToggle", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_UvShiftSteps", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: None, comment: None }, CppParam { name: "_UvShiftRate", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: None, comment: None }, CppParam { name: "_UvShiftOffset", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: None, comment: None }, CppParam { name: "_UseGridEffect", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_UseCrystalEffect", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_CrystalPower", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_CrystalRimColor", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: None, comment: None }, CppParam { name: "_LiquidVolume", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_LiquidFill", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_LiquidFillNormal", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: None, comment: None }, CppParam { name: "_LiquidSurfaceColor", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: None, comment: None }, CppParam { name: "_LiquidSwayX", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_LiquidSwayY", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_LiquidContainer", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_LiquidPlanePosition", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: None, comment: None }, CppParam { name: "_LiquidPlaneNormal", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: None, comment: None }, CppParam { name: "_VertexFlapToggle", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_VertexFlapAxis", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: None, comment: None }, CppParam { name: "_VertexFlapDegreesMinMax", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: None, comment: None }, CppParam { name: "_VertexFlapSpeed", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_VertexFlapPhaseOffset", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_VertexWaveToggle", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_VertexWaveDebug", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_VertexWaveEnd", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: None, comment: None }, CppParam { name: "_VertexWaveParams", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: None, comment: None }, CppParam { name: "_VertexWaveFalloff", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: None, comment: None }, CppParam { name: "_VertexWaveSphereMask", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: None, comment: None }, CppParam { name: "_VertexWavePhaseOffset", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_VertexWaveAxes", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: None, comment: None }, CppParam { name: "_VertexRotateToggle", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_VertexRotateAngles", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: None, comment: None }, CppParam { name: "_VertexRotateAnim", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_VertexLightToggle", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_InnerGlowOn", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_InnerGlowColor", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: None, comment: None }, CppParam { name: "_InnerGlowParams", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: None, comment: None }, CppParam { name: "_InnerGlowTap", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_InnerGlowSine", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_InnerGlowSinePeriod", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_InnerGlowSinePhaseShift", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_StealthEffectOn", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_UseEyeTracking", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_EyeTileOffsetUV", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: None, comment: None }, CppParam { name: "_EyeOverrideUV", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_EyeOverrideUVTransform", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: None, comment: None }, CppParam { name: "_UseMouthFlap", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_MouthMap", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "_MouthMap_ST", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: None, comment: None }, CppParam { name: "_UseVertexColor", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_WaterEffect", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_HeightBasedWaterEffect", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_WaterCaustics", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_UseDayNightLightmap", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_DAY_CYCLE_BRIGHTNESS_", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_UseWeatherMap", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_WeatherMap", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "_WeatherMapDissolveEdgeSize", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_UseSpecular", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_UseSpecularAlphaChannel", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_Smoothness", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_UseSpecHighlight", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_SpecularDir", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: None, comment: None }, CppParam { name: "_SpecularPowerIntensity", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: None, comment: None }, CppParam { name: "_SpecularColor", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: None, comment: None }, CppParam { name: "_SpecularUseDiffuseColor", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_EmissionToggle", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_EmissionColor", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: None, comment: None }, CppParam { name: "_EmissionMap", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "_EmissionMaskByBaseMapAlpha", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_EmissionUVScrollSpeed", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: None, comment: None }, CppParam { name: "_EmissionDissolveProgress", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_EmissionDissolveAnimation", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: None, comment: None }, CppParam { name: "_EmissionDissolveEdgeSize", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_EmissionIntensityInDynamic", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_EmissionUseUVWaveWarp", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_GreyZoneException", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_Cull", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_StencilReference", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_StencilComparison", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_StencilPassFront", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_USE_DEFORM_MAP", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_DeformMap", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "_DeformMapIntensity", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_DeformMapMaskByVertColorRAmount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_DeformMapScrollSpeed", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: None, comment: None }, CppParam { name: "_DeformMapUV0Influence", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: None, comment: None }, CppParam { name: "_DeformMapObjectSpaceOffsetsU", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: None, comment: None }, CppParam { name: "_DeformMapObjectSpaceOffsetsV", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: None, comment: None }, CppParam { name: "_DeformMapWorldSpaceOffsetsU", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: None, comment: None }, CppParam { name: "_DeformMapWorldSpaceOffsetsV", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: None, comment: None }, CppParam { name: "_RotateOnYAxisBySinTime", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: None, comment: None }, CppParam { name: "_USE_TEX_ARRAY_ATLAS", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_BaseMap_Atlas", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "_BaseMap_AtlasSlice", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_BaseMap_AtlasSliceSource", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_EmissionMap_Atlas", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "_EmissionMap_AtlasSlice", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_DeformMap_Atlas", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "_DeformMap_AtlasSlice", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_WeatherMap_Atlas", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "_WeatherMap_AtlasSlice", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_DEBUG_PAWN_DATA", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_SrcBlend", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_DstBlend", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_SrcBlendAlpha", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_DstBlendAlpha", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_ZWrite", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_AlphaToMask", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_Color", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: None, comment: None }, CppParam { name: "_Surface", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_Metallic", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_SpecColor", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: None, comment: None }, CppParam { name: "_DayNightLightmapArray", ty: "::StringW", modifiers: "", def_value: None, comment: None }, CppParam { name: "_DayNightLightmapArray_ST", ty: "::Unity::Mathematics::int4", modifiers: "", def_value: None, comment: None }, CppParam { name: "_DayNightLightmapArray_AtlasSlice", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "isValid", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr MaterialFingerprint(::GlobalNamespace::GTShaderTransparencyMode  _TransparencyMode, int32_t  _Cutoff, int32_t  _ColorSource, ::Unity::Mathematics::int4  _BaseColor, ::Unity::Mathematics::int4  _GChannelColor, ::Unity::Mathematics::int4  _BChannelColor, ::Unity::Mathematics::int4  _AChannelColor, ::StringW  _BaseMap, ::Unity::Mathematics::int4  _BaseMap_ST, int32_t  _SettingsPreset, int32_t  _AdvancedOptions, int32_t  _TexMipBias, ::Unity::Mathematics::int4  _BaseMap_WH, int32_t  _TexelSnapToggle, int32_t  _TexelSnap_Factor, int32_t  _UVSource, int32_t  _AlphaDetailToggle, ::Unity::Mathematics::int4  _AlphaDetail_ST, int32_t  _AlphaDetail_Opacity, int32_t  _AlphaDetail_WorldSpace, int32_t  _MaskMapToggle, ::StringW  _MaskMap, ::Unity::Mathematics::int4  _MaskMap_ST, ::Unity::Mathematics::int4  _MaskMap_WH, int32_t  _LavaLampToggle, int32_t  _GradientMapToggle, ::StringW  _GradientMap, int32_t  _DoTextureRotation, int32_t  _RotateAngle, int32_t  _RotateAnim, int32_t  _UseWaveWarp, int32_t  _WaveAmplitude, int32_t  _WaveFrequency, int32_t  _WaveScale, int32_t  _WaveTimeScale, int32_t  _ReflectToggle, int32_t  _ReflectBoxProjectToggle, ::Unity::Mathematics::int4  _ReflectBoxCubePos, ::Unity::Mathematics::int4  _ReflectBoxSize, ::Unity::Mathematics::int4  _ReflectBoxRotation, int32_t  _ReflectMatcapToggle, int32_t  _ReflectMatcapPerspToggle, int32_t  _ReflectNormalToggle, ::StringW  _ReflectTex, ::StringW  _ReflectNormalTex, int32_t  _ReflectAlbedoTint, ::Unity::Mathematics::int4  _ReflectTint, int32_t  _ReflectOpacity, int32_t  _ReflectExposure, ::Unity::Mathematics::int4  _ReflectOffset, ::Unity::Mathematics::int4  _ReflectScale, int32_t  _ReflectRotate, int32_t  _HalfLambertToggle, int32_t  _ParallaxPlanarToggle, int32_t  _ParallaxToggle, int32_t  _ParallaxAAToggle, int32_t  _ParallaxAABias, ::StringW  _DepthMap, int32_t  _ParallaxAmplitude, ::Unity::Mathematics::int4  _ParallaxSamplesMinMax, int32_t  _UvShiftToggle, ::Unity::Mathematics::int4  _UvShiftSteps, ::Unity::Mathematics::int4  _UvShiftRate, ::Unity::Mathematics::int4  _UvShiftOffset, int32_t  _UseGridEffect, int32_t  _UseCrystalEffect, int32_t  _CrystalPower, ::Unity::Mathematics::int4  _CrystalRimColor, int32_t  _LiquidVolume, int32_t  _LiquidFill, ::Unity::Mathematics::int4  _LiquidFillNormal, ::Unity::Mathematics::int4  _LiquidSurfaceColor, int32_t  _LiquidSwayX, int32_t  _LiquidSwayY, int32_t  _LiquidContainer, ::Unity::Mathematics::int4  _LiquidPlanePosition, ::Unity::Mathematics::int4  _LiquidPlaneNormal, int32_t  _VertexFlapToggle, ::Unity::Mathematics::int4  _VertexFlapAxis, ::Unity::Mathematics::int4  _VertexFlapDegreesMinMax, int32_t  _VertexFlapSpeed, int32_t  _VertexFlapPhaseOffset, int32_t  _VertexWaveToggle, int32_t  _VertexWaveDebug, ::Unity::Mathematics::int4  _VertexWaveEnd, ::Unity::Mathematics::int4  _VertexWaveParams, ::Unity::Mathematics::int4  _VertexWaveFalloff, ::Unity::Mathematics::int4  _VertexWaveSphereMask, int32_t  _VertexWavePhaseOffset, ::Unity::Mathematics::int4  _VertexWaveAxes, int32_t  _VertexRotateToggle, ::Unity::Mathematics::int4  _VertexRotateAngles, int32_t  _VertexRotateAnim, int32_t  _VertexLightToggle, int32_t  _InnerGlowOn, ::Unity::Mathematics::int4  _InnerGlowColor, ::Unity::Mathematics::int4  _InnerGlowParams, int32_t  _InnerGlowTap, int32_t  _InnerGlowSine, int32_t  _InnerGlowSinePeriod, int32_t  _InnerGlowSinePhaseShift, int32_t  _StealthEffectOn, int32_t  _UseEyeTracking, ::Unity::Mathematics::int4  _EyeTileOffsetUV, int32_t  _EyeOverrideUV, ::Unity::Mathematics::int4  _EyeOverrideUVTransform, int32_t  _UseMouthFlap, ::StringW  _MouthMap, ::Unity::Mathematics::int4  _MouthMap_ST, int32_t  _UseVertexColor, int32_t  _WaterEffect, int32_t  _HeightBasedWaterEffect, int32_t  _WaterCaustics, int32_t  _UseDayNightLightmap, int32_t  _DAY_CYCLE_BRIGHTNESS_, int32_t  _UseWeatherMap, ::StringW  _WeatherMap, int32_t  _WeatherMapDissolveEdgeSize, int32_t  _UseSpecular, int32_t  _UseSpecularAlphaChannel, int32_t  _Smoothness, int32_t  _UseSpecHighlight, ::Unity::Mathematics::int4  _SpecularDir, ::Unity::Mathematics::int4  _SpecularPowerIntensity, ::Unity::Mathematics::int4  _SpecularColor, int32_t  _SpecularUseDiffuseColor, int32_t  _EmissionToggle, ::Unity::Mathematics::int4  _EmissionColor, ::StringW  _EmissionMap, int32_t  _EmissionMaskByBaseMapAlpha, ::Unity::Mathematics::int4  _EmissionUVScrollSpeed, int32_t  _EmissionDissolveProgress, ::Unity::Mathematics::int4  _EmissionDissolveAnimation, int32_t  _EmissionDissolveEdgeSize, int32_t  _EmissionIntensityInDynamic, int32_t  _EmissionUseUVWaveWarp, int32_t  _GreyZoneException, int32_t  _Cull, int32_t  _StencilReference, int32_t  _StencilComparison, int32_t  _StencilPassFront, int32_t  _USE_DEFORM_MAP, ::StringW  _DeformMap, int32_t  _DeformMapIntensity, int32_t  _DeformMapMaskByVertColorRAmount, ::Unity::Mathematics::int4  _DeformMapScrollSpeed, ::Unity::Mathematics::int4  _DeformMapUV0Influence, ::Unity::Mathematics::int4  _DeformMapObjectSpaceOffsetsU, ::Unity::Mathematics::int4  _DeformMapObjectSpaceOffsetsV, ::Unity::Mathematics::int4  _DeformMapWorldSpaceOffsetsU, ::Unity::Mathematics::int4  _DeformMapWorldSpaceOffsetsV, ::Unity::Mathematics::int4  _RotateOnYAxisBySinTime, int32_t  _USE_TEX_ARRAY_ATLAS, ::StringW  _BaseMap_Atlas, int32_t  _BaseMap_AtlasSlice, int32_t  _BaseMap_AtlasSliceSource, ::StringW  _EmissionMap_Atlas, int32_t  _EmissionMap_AtlasSlice, ::StringW  _DeformMap_Atlas, int32_t  _DeformMap_AtlasSlice, ::StringW  _WeatherMap_Atlas, int32_t  _WeatherMap_AtlasSlice, int32_t  _DEBUG_PAWN_DATA, int32_t  _SrcBlend, int32_t  _DstBlend, int32_t  _SrcBlendAlpha, int32_t  _DstBlendAlpha, int32_t  _ZWrite, int32_t  _AlphaToMask, ::Unity::Mathematics::int4  _Color, int32_t  _Surface, int32_t  _Metallic, ::Unity::Mathematics::int4  _SpecColor, ::StringW  _DayNightLightmapArray, ::Unity::Mathematics::int4  _DayNightLightmapArray_ST, int32_t  _DayNightLightmapArray_AtlasSlice, bool  isValid) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{906};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x5a0};

/// @brief Field _k_UNITY_2023_1_OR_NEWER offset 0xffffffff size 0x1
static constexpr bool  _k_UNITY_2023_1_OR_NEWER{true};

/// @brief Field _TransparencyMode, offset: 0x0, size: 0x4, def value: None
 ::GlobalNamespace::GTShaderTransparencyMode  _TransparencyMode;

/// @brief Field _Cutoff, offset: 0x4, size: 0x4, def value: None
 int32_t  _Cutoff;

/// @brief Field _ColorSource, offset: 0x8, size: 0x4, def value: None
 int32_t  _ColorSource;

/// @brief Field _BaseColor, offset: 0xc, size: 0x10, def value: None
 ::Unity::Mathematics::int4  _BaseColor;

/// @brief Field _GChannelColor, offset: 0x1c, size: 0x10, def value: None
 ::Unity::Mathematics::int4  _GChannelColor;

/// @brief Field _BChannelColor, offset: 0x2c, size: 0x10, def value: None
 ::Unity::Mathematics::int4  _BChannelColor;

/// @brief Field _AChannelColor, offset: 0x3c, size: 0x10, def value: None
 ::Unity::Mathematics::int4  _AChannelColor;

/// @brief Field _BaseMap, offset: 0x50, size: 0x8, def value: None
 ::StringW  _BaseMap;

/// @brief Field _BaseMap_ST, offset: 0x58, size: 0x10, def value: None
 ::Unity::Mathematics::int4  _BaseMap_ST;

/// @brief Field _SettingsPreset, offset: 0x68, size: 0x4, def value: None
 int32_t  _SettingsPreset;

/// @brief Field _AdvancedOptions, offset: 0x6c, size: 0x4, def value: None
 int32_t  _AdvancedOptions;

/// @brief Field _TexMipBias, offset: 0x70, size: 0x4, def value: None
 int32_t  _TexMipBias;

/// @brief Field _BaseMap_WH, offset: 0x74, size: 0x10, def value: None
 ::Unity::Mathematics::int4  _BaseMap_WH;

/// @brief Field _TexelSnapToggle, offset: 0x84, size: 0x4, def value: None
 int32_t  _TexelSnapToggle;

/// @brief Field _TexelSnap_Factor, offset: 0x88, size: 0x4, def value: None
 int32_t  _TexelSnap_Factor;

/// @brief Field _UVSource, offset: 0x8c, size: 0x4, def value: None
 int32_t  _UVSource;

/// @brief Field _AlphaDetailToggle, offset: 0x90, size: 0x4, def value: None
 int32_t  _AlphaDetailToggle;

/// @brief Field _AlphaDetail_ST, offset: 0x94, size: 0x10, def value: None
 ::Unity::Mathematics::int4  _AlphaDetail_ST;

/// @brief Field _AlphaDetail_Opacity, offset: 0xa4, size: 0x4, def value: None
 int32_t  _AlphaDetail_Opacity;

/// @brief Field _AlphaDetail_WorldSpace, offset: 0xa8, size: 0x4, def value: None
 int32_t  _AlphaDetail_WorldSpace;

/// @brief Field _MaskMapToggle, offset: 0xac, size: 0x4, def value: None
 int32_t  _MaskMapToggle;

/// @brief Field _MaskMap, offset: 0xb0, size: 0x8, def value: None
 ::StringW  _MaskMap;

/// @brief Field _MaskMap_ST, offset: 0xb8, size: 0x10, def value: None
 ::Unity::Mathematics::int4  _MaskMap_ST;

/// @brief Field _MaskMap_WH, offset: 0xc8, size: 0x10, def value: None
 ::Unity::Mathematics::int4  _MaskMap_WH;

/// @brief Field _LavaLampToggle, offset: 0xd8, size: 0x4, def value: None
 int32_t  _LavaLampToggle;

/// @brief Field _GradientMapToggle, offset: 0xdc, size: 0x4, def value: None
 int32_t  _GradientMapToggle;

/// @brief Field _GradientMap, offset: 0xe0, size: 0x8, def value: None
 ::StringW  _GradientMap;

/// @brief Field _DoTextureRotation, offset: 0xe8, size: 0x4, def value: None
 int32_t  _DoTextureRotation;

/// @brief Field _RotateAngle, offset: 0xec, size: 0x4, def value: None
 int32_t  _RotateAngle;

/// @brief Field _RotateAnim, offset: 0xf0, size: 0x4, def value: None
 int32_t  _RotateAnim;

/// @brief Field _UseWaveWarp, offset: 0xf4, size: 0x4, def value: None
 int32_t  _UseWaveWarp;

/// @brief Field _WaveAmplitude, offset: 0xf8, size: 0x4, def value: None
 int32_t  _WaveAmplitude;

/// @brief Field _WaveFrequency, offset: 0xfc, size: 0x4, def value: None
 int32_t  _WaveFrequency;

/// @brief Field _WaveScale, offset: 0x100, size: 0x4, def value: None
 int32_t  _WaveScale;

/// @brief Field _WaveTimeScale, offset: 0x104, size: 0x4, def value: None
 int32_t  _WaveTimeScale;

/// @brief Field _ReflectToggle, offset: 0x108, size: 0x4, def value: None
 int32_t  _ReflectToggle;

/// @brief Field _ReflectBoxProjectToggle, offset: 0x10c, size: 0x4, def value: None
 int32_t  _ReflectBoxProjectToggle;

/// @brief Field _ReflectBoxCubePos, offset: 0x110, size: 0x10, def value: None
 ::Unity::Mathematics::int4  _ReflectBoxCubePos;

/// @brief Field _ReflectBoxSize, offset: 0x120, size: 0x10, def value: None
 ::Unity::Mathematics::int4  _ReflectBoxSize;

/// @brief Field _ReflectBoxRotation, offset: 0x130, size: 0x10, def value: None
 ::Unity::Mathematics::int4  _ReflectBoxRotation;

/// @brief Field _ReflectMatcapToggle, offset: 0x140, size: 0x4, def value: None
 int32_t  _ReflectMatcapToggle;

/// @brief Field _ReflectMatcapPerspToggle, offset: 0x144, size: 0x4, def value: None
 int32_t  _ReflectMatcapPerspToggle;

/// @brief Field _ReflectNormalToggle, offset: 0x148, size: 0x4, def value: None
 int32_t  _ReflectNormalToggle;

/// @brief Field _ReflectTex, offset: 0x150, size: 0x8, def value: None
 ::StringW  _ReflectTex;

/// @brief Field _ReflectNormalTex, offset: 0x158, size: 0x8, def value: None
 ::StringW  _ReflectNormalTex;

/// @brief Field _ReflectAlbedoTint, offset: 0x160, size: 0x4, def value: None
 int32_t  _ReflectAlbedoTint;

/// @brief Field _ReflectTint, offset: 0x164, size: 0x10, def value: None
 ::Unity::Mathematics::int4  _ReflectTint;

/// @brief Field _ReflectOpacity, offset: 0x174, size: 0x4, def value: None
 int32_t  _ReflectOpacity;

/// @brief Field _ReflectExposure, offset: 0x178, size: 0x4, def value: None
 int32_t  _ReflectExposure;

/// @brief Field _ReflectOffset, offset: 0x17c, size: 0x10, def value: None
 ::Unity::Mathematics::int4  _ReflectOffset;

/// @brief Field _ReflectScale, offset: 0x18c, size: 0x10, def value: None
 ::Unity::Mathematics::int4  _ReflectScale;

/// @brief Field _ReflectRotate, offset: 0x19c, size: 0x4, def value: None
 int32_t  _ReflectRotate;

/// @brief Field _HalfLambertToggle, offset: 0x1a0, size: 0x4, def value: None
 int32_t  _HalfLambertToggle;

/// @brief Field _ParallaxPlanarToggle, offset: 0x1a4, size: 0x4, def value: None
 int32_t  _ParallaxPlanarToggle;

/// @brief Field _ParallaxToggle, offset: 0x1a8, size: 0x4, def value: None
 int32_t  _ParallaxToggle;

/// @brief Field _ParallaxAAToggle, offset: 0x1ac, size: 0x4, def value: None
 int32_t  _ParallaxAAToggle;

/// @brief Field _ParallaxAABias, offset: 0x1b0, size: 0x4, def value: None
 int32_t  _ParallaxAABias;

/// @brief Field _DepthMap, offset: 0x1b8, size: 0x8, def value: None
 ::StringW  _DepthMap;

/// @brief Field _ParallaxAmplitude, offset: 0x1c0, size: 0x4, def value: None
 int32_t  _ParallaxAmplitude;

/// @brief Field _ParallaxSamplesMinMax, offset: 0x1c4, size: 0x10, def value: None
 ::Unity::Mathematics::int4  _ParallaxSamplesMinMax;

/// @brief Field _UvShiftToggle, offset: 0x1d4, size: 0x4, def value: None
 int32_t  _UvShiftToggle;

/// @brief Field _UvShiftSteps, offset: 0x1d8, size: 0x10, def value: None
 ::Unity::Mathematics::int4  _UvShiftSteps;

/// @brief Field _UvShiftRate, offset: 0x1e8, size: 0x10, def value: None
 ::Unity::Mathematics::int4  _UvShiftRate;

/// @brief Field _UvShiftOffset, offset: 0x1f8, size: 0x10, def value: None
 ::Unity::Mathematics::int4  _UvShiftOffset;

/// @brief Field _UseGridEffect, offset: 0x208, size: 0x4, def value: None
 int32_t  _UseGridEffect;

/// @brief Field _UseCrystalEffect, offset: 0x20c, size: 0x4, def value: None
 int32_t  _UseCrystalEffect;

/// @brief Field _CrystalPower, offset: 0x210, size: 0x4, def value: None
 int32_t  _CrystalPower;

/// @brief Field _CrystalRimColor, offset: 0x214, size: 0x10, def value: None
 ::Unity::Mathematics::int4  _CrystalRimColor;

/// @brief Field _LiquidVolume, offset: 0x224, size: 0x4, def value: None
 int32_t  _LiquidVolume;

/// @brief Field _LiquidFill, offset: 0x228, size: 0x4, def value: None
 int32_t  _LiquidFill;

/// @brief Field _LiquidFillNormal, offset: 0x22c, size: 0x10, def value: None
 ::Unity::Mathematics::int4  _LiquidFillNormal;

/// @brief Field _LiquidSurfaceColor, offset: 0x23c, size: 0x10, def value: None
 ::Unity::Mathematics::int4  _LiquidSurfaceColor;

/// @brief Field _LiquidSwayX, offset: 0x24c, size: 0x4, def value: None
 int32_t  _LiquidSwayX;

/// @brief Field _LiquidSwayY, offset: 0x250, size: 0x4, def value: None
 int32_t  _LiquidSwayY;

/// @brief Field _LiquidContainer, offset: 0x254, size: 0x4, def value: None
 int32_t  _LiquidContainer;

/// @brief Field _LiquidPlanePosition, offset: 0x258, size: 0x10, def value: None
 ::Unity::Mathematics::int4  _LiquidPlanePosition;

/// @brief Field _LiquidPlaneNormal, offset: 0x268, size: 0x10, def value: None
 ::Unity::Mathematics::int4  _LiquidPlaneNormal;

/// @brief Field _VertexFlapToggle, offset: 0x278, size: 0x4, def value: None
 int32_t  _VertexFlapToggle;

/// @brief Field _VertexFlapAxis, offset: 0x27c, size: 0x10, def value: None
 ::Unity::Mathematics::int4  _VertexFlapAxis;

/// @brief Field _VertexFlapDegreesMinMax, offset: 0x28c, size: 0x10, def value: None
 ::Unity::Mathematics::int4  _VertexFlapDegreesMinMax;

/// @brief Field _VertexFlapSpeed, offset: 0x29c, size: 0x4, def value: None
 int32_t  _VertexFlapSpeed;

/// @brief Field _VertexFlapPhaseOffset, offset: 0x2a0, size: 0x4, def value: None
 int32_t  _VertexFlapPhaseOffset;

/// @brief Field _VertexWaveToggle, offset: 0x2a4, size: 0x4, def value: None
 int32_t  _VertexWaveToggle;

/// @brief Field _VertexWaveDebug, offset: 0x2a8, size: 0x4, def value: None
 int32_t  _VertexWaveDebug;

/// @brief Field _VertexWaveEnd, offset: 0x2ac, size: 0x10, def value: None
 ::Unity::Mathematics::int4  _VertexWaveEnd;

/// @brief Field _VertexWaveParams, offset: 0x2bc, size: 0x10, def value: None
 ::Unity::Mathematics::int4  _VertexWaveParams;

/// @brief Field _VertexWaveFalloff, offset: 0x2cc, size: 0x10, def value: None
 ::Unity::Mathematics::int4  _VertexWaveFalloff;

/// @brief Field _VertexWaveSphereMask, offset: 0x2dc, size: 0x10, def value: None
 ::Unity::Mathematics::int4  _VertexWaveSphereMask;

/// @brief Field _VertexWavePhaseOffset, offset: 0x2ec, size: 0x4, def value: None
 int32_t  _VertexWavePhaseOffset;

/// @brief Field _VertexWaveAxes, offset: 0x2f0, size: 0x10, def value: None
 ::Unity::Mathematics::int4  _VertexWaveAxes;

/// @brief Field _VertexRotateToggle, offset: 0x300, size: 0x4, def value: None
 int32_t  _VertexRotateToggle;

/// @brief Field _VertexRotateAngles, offset: 0x304, size: 0x10, def value: None
 ::Unity::Mathematics::int4  _VertexRotateAngles;

/// @brief Field _VertexRotateAnim, offset: 0x314, size: 0x4, def value: None
 int32_t  _VertexRotateAnim;

/// @brief Field _VertexLightToggle, offset: 0x318, size: 0x4, def value: None
 int32_t  _VertexLightToggle;

/// @brief Field _InnerGlowOn, offset: 0x31c, size: 0x4, def value: None
 int32_t  _InnerGlowOn;

/// @brief Field _InnerGlowColor, offset: 0x320, size: 0x10, def value: None
 ::Unity::Mathematics::int4  _InnerGlowColor;

/// @brief Field _InnerGlowParams, offset: 0x330, size: 0x10, def value: None
 ::Unity::Mathematics::int4  _InnerGlowParams;

/// @brief Field _InnerGlowTap, offset: 0x340, size: 0x4, def value: None
 int32_t  _InnerGlowTap;

/// @brief Field _InnerGlowSine, offset: 0x344, size: 0x4, def value: None
 int32_t  _InnerGlowSine;

/// @brief Field _InnerGlowSinePeriod, offset: 0x348, size: 0x4, def value: None
 int32_t  _InnerGlowSinePeriod;

/// @brief Field _InnerGlowSinePhaseShift, offset: 0x34c, size: 0x4, def value: None
 int32_t  _InnerGlowSinePhaseShift;

/// @brief Field _StealthEffectOn, offset: 0x350, size: 0x4, def value: None
 int32_t  _StealthEffectOn;

/// @brief Field _UseEyeTracking, offset: 0x354, size: 0x4, def value: None
 int32_t  _UseEyeTracking;

/// @brief Field _EyeTileOffsetUV, offset: 0x358, size: 0x10, def value: None
 ::Unity::Mathematics::int4  _EyeTileOffsetUV;

/// @brief Field _EyeOverrideUV, offset: 0x368, size: 0x4, def value: None
 int32_t  _EyeOverrideUV;

/// @brief Field _EyeOverrideUVTransform, offset: 0x36c, size: 0x10, def value: None
 ::Unity::Mathematics::int4  _EyeOverrideUVTransform;

/// @brief Field _UseMouthFlap, offset: 0x37c, size: 0x4, def value: None
 int32_t  _UseMouthFlap;

/// @brief Field _MouthMap, offset: 0x380, size: 0x8, def value: None
 ::StringW  _MouthMap;

/// @brief Field _MouthMap_ST, offset: 0x388, size: 0x10, def value: None
 ::Unity::Mathematics::int4  _MouthMap_ST;

/// @brief Field _UseVertexColor, offset: 0x398, size: 0x4, def value: None
 int32_t  _UseVertexColor;

/// @brief Field _WaterEffect, offset: 0x39c, size: 0x4, def value: None
 int32_t  _WaterEffect;

/// @brief Field _HeightBasedWaterEffect, offset: 0x3a0, size: 0x4, def value: None
 int32_t  _HeightBasedWaterEffect;

/// @brief Field _WaterCaustics, offset: 0x3a4, size: 0x4, def value: None
 int32_t  _WaterCaustics;

/// @brief Field _UseDayNightLightmap, offset: 0x3a8, size: 0x4, def value: None
 int32_t  _UseDayNightLightmap;

/// @brief Field _DAY_CYCLE_BRIGHTNESS_, offset: 0x3ac, size: 0x4, def value: None
 int32_t  _DAY_CYCLE_BRIGHTNESS_;

/// @brief Field _UseWeatherMap, offset: 0x3b0, size: 0x4, def value: None
 int32_t  _UseWeatherMap;

/// @brief Field _WeatherMap, offset: 0x3b8, size: 0x8, def value: None
 ::StringW  _WeatherMap;

/// @brief Field _WeatherMapDissolveEdgeSize, offset: 0x3c0, size: 0x4, def value: None
 int32_t  _WeatherMapDissolveEdgeSize;

/// @brief Field _UseSpecular, offset: 0x3c4, size: 0x4, def value: None
 int32_t  _UseSpecular;

/// @brief Field _UseSpecularAlphaChannel, offset: 0x3c8, size: 0x4, def value: None
 int32_t  _UseSpecularAlphaChannel;

/// @brief Field _Smoothness, offset: 0x3cc, size: 0x4, def value: None
 int32_t  _Smoothness;

/// @brief Field _UseSpecHighlight, offset: 0x3d0, size: 0x4, def value: None
 int32_t  _UseSpecHighlight;

/// @brief Field _SpecularDir, offset: 0x3d4, size: 0x10, def value: None
 ::Unity::Mathematics::int4  _SpecularDir;

/// @brief Field _SpecularPowerIntensity, offset: 0x3e4, size: 0x10, def value: None
 ::Unity::Mathematics::int4  _SpecularPowerIntensity;

/// @brief Field _SpecularColor, offset: 0x3f4, size: 0x10, def value: None
 ::Unity::Mathematics::int4  _SpecularColor;

/// @brief Field _SpecularUseDiffuseColor, offset: 0x404, size: 0x4, def value: None
 int32_t  _SpecularUseDiffuseColor;

/// @brief Field _EmissionToggle, offset: 0x408, size: 0x4, def value: None
 int32_t  _EmissionToggle;

/// @brief Field _EmissionColor, offset: 0x40c, size: 0x10, def value: None
 ::Unity::Mathematics::int4  _EmissionColor;

/// @brief Field _EmissionMap, offset: 0x420, size: 0x8, def value: None
 ::StringW  _EmissionMap;

/// @brief Field _EmissionMaskByBaseMapAlpha, offset: 0x428, size: 0x4, def value: None
 int32_t  _EmissionMaskByBaseMapAlpha;

/// @brief Field _EmissionUVScrollSpeed, offset: 0x42c, size: 0x10, def value: None
 ::Unity::Mathematics::int4  _EmissionUVScrollSpeed;

/// @brief Field _EmissionDissolveProgress, offset: 0x43c, size: 0x4, def value: None
 int32_t  _EmissionDissolveProgress;

/// @brief Field _EmissionDissolveAnimation, offset: 0x440, size: 0x10, def value: None
 ::Unity::Mathematics::int4  _EmissionDissolveAnimation;

/// @brief Field _EmissionDissolveEdgeSize, offset: 0x450, size: 0x4, def value: None
 int32_t  _EmissionDissolveEdgeSize;

/// @brief Field _EmissionIntensityInDynamic, offset: 0x454, size: 0x4, def value: None
 int32_t  _EmissionIntensityInDynamic;

/// @brief Field _EmissionUseUVWaveWarp, offset: 0x458, size: 0x4, def value: None
 int32_t  _EmissionUseUVWaveWarp;

/// @brief Field _GreyZoneException, offset: 0x45c, size: 0x4, def value: None
 int32_t  _GreyZoneException;

/// @brief Field _Cull, offset: 0x460, size: 0x4, def value: None
 int32_t  _Cull;

/// @brief Field _StencilReference, offset: 0x464, size: 0x4, def value: None
 int32_t  _StencilReference;

/// @brief Field _StencilComparison, offset: 0x468, size: 0x4, def value: None
 int32_t  _StencilComparison;

/// @brief Field _StencilPassFront, offset: 0x46c, size: 0x4, def value: None
 int32_t  _StencilPassFront;

/// @brief Field _USE_DEFORM_MAP, offset: 0x470, size: 0x4, def value: None
 int32_t  _USE_DEFORM_MAP;

/// @brief Field _DeformMap, offset: 0x478, size: 0x8, def value: None
 ::StringW  _DeformMap;

/// @brief Field _DeformMapIntensity, offset: 0x480, size: 0x4, def value: None
 int32_t  _DeformMapIntensity;

/// @brief Field _DeformMapMaskByVertColorRAmount, offset: 0x484, size: 0x4, def value: None
 int32_t  _DeformMapMaskByVertColorRAmount;

/// @brief Field _DeformMapScrollSpeed, offset: 0x488, size: 0x10, def value: None
 ::Unity::Mathematics::int4  _DeformMapScrollSpeed;

/// @brief Field _DeformMapUV0Influence, offset: 0x498, size: 0x10, def value: None
 ::Unity::Mathematics::int4  _DeformMapUV0Influence;

/// @brief Field _DeformMapObjectSpaceOffsetsU, offset: 0x4a8, size: 0x10, def value: None
 ::Unity::Mathematics::int4  _DeformMapObjectSpaceOffsetsU;

/// @brief Field _DeformMapObjectSpaceOffsetsV, offset: 0x4b8, size: 0x10, def value: None
 ::Unity::Mathematics::int4  _DeformMapObjectSpaceOffsetsV;

/// @brief Field _DeformMapWorldSpaceOffsetsU, offset: 0x4c8, size: 0x10, def value: None
 ::Unity::Mathematics::int4  _DeformMapWorldSpaceOffsetsU;

/// @brief Field _DeformMapWorldSpaceOffsetsV, offset: 0x4d8, size: 0x10, def value: None
 ::Unity::Mathematics::int4  _DeformMapWorldSpaceOffsetsV;

/// @brief Field _RotateOnYAxisBySinTime, offset: 0x4e8, size: 0x10, def value: None
 ::Unity::Mathematics::int4  _RotateOnYAxisBySinTime;

/// @brief Field _USE_TEX_ARRAY_ATLAS, offset: 0x4f8, size: 0x4, def value: None
 int32_t  _USE_TEX_ARRAY_ATLAS;

/// @brief Field _BaseMap_Atlas, offset: 0x500, size: 0x8, def value: None
 ::StringW  _BaseMap_Atlas;

/// @brief Field _BaseMap_AtlasSlice, offset: 0x508, size: 0x4, def value: None
 int32_t  _BaseMap_AtlasSlice;

/// @brief Field _BaseMap_AtlasSliceSource, offset: 0x50c, size: 0x4, def value: None
 int32_t  _BaseMap_AtlasSliceSource;

/// @brief Field _EmissionMap_Atlas, offset: 0x510, size: 0x8, def value: None
 ::StringW  _EmissionMap_Atlas;

/// @brief Field _EmissionMap_AtlasSlice, offset: 0x518, size: 0x4, def value: None
 int32_t  _EmissionMap_AtlasSlice;

/// @brief Field _DeformMap_Atlas, offset: 0x520, size: 0x8, def value: None
 ::StringW  _DeformMap_Atlas;

/// @brief Field _DeformMap_AtlasSlice, offset: 0x528, size: 0x4, def value: None
 int32_t  _DeformMap_AtlasSlice;

/// @brief Field _WeatherMap_Atlas, offset: 0x530, size: 0x8, def value: None
 ::StringW  _WeatherMap_Atlas;

/// @brief Field _WeatherMap_AtlasSlice, offset: 0x538, size: 0x4, def value: None
 int32_t  _WeatherMap_AtlasSlice;

/// @brief Field _DEBUG_PAWN_DATA, offset: 0x53c, size: 0x4, def value: None
 int32_t  _DEBUG_PAWN_DATA;

/// @brief Field _SrcBlend, offset: 0x540, size: 0x4, def value: None
 int32_t  _SrcBlend;

/// @brief Field _DstBlend, offset: 0x544, size: 0x4, def value: None
 int32_t  _DstBlend;

/// @brief Field _SrcBlendAlpha, offset: 0x548, size: 0x4, def value: None
 int32_t  _SrcBlendAlpha;

/// @brief Field _DstBlendAlpha, offset: 0x54c, size: 0x4, def value: None
 int32_t  _DstBlendAlpha;

/// @brief Field _ZWrite, offset: 0x550, size: 0x4, def value: None
 int32_t  _ZWrite;

/// @brief Field _AlphaToMask, offset: 0x554, size: 0x4, def value: None
 int32_t  _AlphaToMask;

/// @brief Field _Color, offset: 0x558, size: 0x10, def value: None
 ::Unity::Mathematics::int4  _Color;

/// @brief Field _Surface, offset: 0x568, size: 0x4, def value: None
 int32_t  _Surface;

/// @brief Field _Metallic, offset: 0x56c, size: 0x4, def value: None
 int32_t  _Metallic;

/// @brief Field _SpecColor, offset: 0x570, size: 0x10, def value: None
 ::Unity::Mathematics::int4  _SpecColor;

/// @brief Field _DayNightLightmapArray, offset: 0x580, size: 0x8, def value: None
 ::StringW  _DayNightLightmapArray;

/// @brief Field _DayNightLightmapArray_ST, offset: 0x588, size: 0x10, def value: None
 ::Unity::Mathematics::int4  _DayNightLightmapArray_ST;

/// @brief Field _DayNightLightmapArray_AtlasSlice, offset: 0x598, size: 0x4, def value: None
 int32_t  _DayNightLightmapArray_AtlasSlice;

/// @brief Field isValid, offset: 0x59c, size: 0x1, def value: None
 bool  isValid;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _TransparencyMode) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _Cutoff) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _ColorSource) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _BaseColor) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _GChannelColor) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _BChannelColor) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _AChannelColor) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _BaseMap) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _BaseMap_ST) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _SettingsPreset) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _AdvancedOptions) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _TexMipBias) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _BaseMap_WH) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _TexelSnapToggle) == 0x84, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _TexelSnap_Factor) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _UVSource) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _AlphaDetailToggle) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _AlphaDetail_ST) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _AlphaDetail_Opacity) == 0xa4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _AlphaDetail_WorldSpace) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _MaskMapToggle) == 0xac, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _MaskMap) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _MaskMap_ST) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _MaskMap_WH) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _LavaLampToggle) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _GradientMapToggle) == 0xdc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _GradientMap) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _DoTextureRotation) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _RotateAngle) == 0xec, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _RotateAnim) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _UseWaveWarp) == 0xf4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _WaveAmplitude) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _WaveFrequency) == 0xfc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _WaveScale) == 0x100, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _WaveTimeScale) == 0x104, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _ReflectToggle) == 0x108, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _ReflectBoxProjectToggle) == 0x10c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _ReflectBoxCubePos) == 0x110, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _ReflectBoxSize) == 0x120, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _ReflectBoxRotation) == 0x130, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _ReflectMatcapToggle) == 0x140, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _ReflectMatcapPerspToggle) == 0x144, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _ReflectNormalToggle) == 0x148, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _ReflectTex) == 0x150, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _ReflectNormalTex) == 0x158, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _ReflectAlbedoTint) == 0x160, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _ReflectTint) == 0x164, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _ReflectOpacity) == 0x174, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _ReflectExposure) == 0x178, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _ReflectOffset) == 0x17c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _ReflectScale) == 0x18c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _ReflectRotate) == 0x19c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _HalfLambertToggle) == 0x1a0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _ParallaxPlanarToggle) == 0x1a4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _ParallaxToggle) == 0x1a8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _ParallaxAAToggle) == 0x1ac, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _ParallaxAABias) == 0x1b0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _DepthMap) == 0x1b8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _ParallaxAmplitude) == 0x1c0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _ParallaxSamplesMinMax) == 0x1c4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _UvShiftToggle) == 0x1d4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _UvShiftSteps) == 0x1d8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _UvShiftRate) == 0x1e8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _UvShiftOffset) == 0x1f8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _UseGridEffect) == 0x208, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _UseCrystalEffect) == 0x20c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _CrystalPower) == 0x210, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _CrystalRimColor) == 0x214, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _LiquidVolume) == 0x224, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _LiquidFill) == 0x228, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _LiquidFillNormal) == 0x22c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _LiquidSurfaceColor) == 0x23c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _LiquidSwayX) == 0x24c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _LiquidSwayY) == 0x250, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _LiquidContainer) == 0x254, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _LiquidPlanePosition) == 0x258, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _LiquidPlaneNormal) == 0x268, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _VertexFlapToggle) == 0x278, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _VertexFlapAxis) == 0x27c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _VertexFlapDegreesMinMax) == 0x28c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _VertexFlapSpeed) == 0x29c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _VertexFlapPhaseOffset) == 0x2a0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _VertexWaveToggle) == 0x2a4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _VertexWaveDebug) == 0x2a8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _VertexWaveEnd) == 0x2ac, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _VertexWaveParams) == 0x2bc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _VertexWaveFalloff) == 0x2cc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _VertexWaveSphereMask) == 0x2dc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _VertexWavePhaseOffset) == 0x2ec, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _VertexWaveAxes) == 0x2f0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _VertexRotateToggle) == 0x300, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _VertexRotateAngles) == 0x304, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _VertexRotateAnim) == 0x314, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _VertexLightToggle) == 0x318, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _InnerGlowOn) == 0x31c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _InnerGlowColor) == 0x320, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _InnerGlowParams) == 0x330, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _InnerGlowTap) == 0x340, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _InnerGlowSine) == 0x344, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _InnerGlowSinePeriod) == 0x348, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _InnerGlowSinePhaseShift) == 0x34c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _StealthEffectOn) == 0x350, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _UseEyeTracking) == 0x354, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _EyeTileOffsetUV) == 0x358, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _EyeOverrideUV) == 0x368, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _EyeOverrideUVTransform) == 0x36c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _UseMouthFlap) == 0x37c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _MouthMap) == 0x380, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _MouthMap_ST) == 0x388, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _UseVertexColor) == 0x398, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _WaterEffect) == 0x39c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _HeightBasedWaterEffect) == 0x3a0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _WaterCaustics) == 0x3a4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _UseDayNightLightmap) == 0x3a8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _DAY_CYCLE_BRIGHTNESS_) == 0x3ac, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _UseWeatherMap) == 0x3b0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _WeatherMap) == 0x3b8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _WeatherMapDissolveEdgeSize) == 0x3c0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _UseSpecular) == 0x3c4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _UseSpecularAlphaChannel) == 0x3c8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _Smoothness) == 0x3cc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _UseSpecHighlight) == 0x3d0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _SpecularDir) == 0x3d4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _SpecularPowerIntensity) == 0x3e4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _SpecularColor) == 0x3f4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _SpecularUseDiffuseColor) == 0x404, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _EmissionToggle) == 0x408, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _EmissionColor) == 0x40c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _EmissionMap) == 0x420, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _EmissionMaskByBaseMapAlpha) == 0x428, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _EmissionUVScrollSpeed) == 0x42c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _EmissionDissolveProgress) == 0x43c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _EmissionDissolveAnimation) == 0x440, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _EmissionDissolveEdgeSize) == 0x450, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _EmissionIntensityInDynamic) == 0x454, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _EmissionUseUVWaveWarp) == 0x458, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _GreyZoneException) == 0x45c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _Cull) == 0x460, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _StencilReference) == 0x464, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _StencilComparison) == 0x468, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _StencilPassFront) == 0x46c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _USE_DEFORM_MAP) == 0x470, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _DeformMap) == 0x478, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _DeformMapIntensity) == 0x480, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _DeformMapMaskByVertColorRAmount) == 0x484, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _DeformMapScrollSpeed) == 0x488, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _DeformMapUV0Influence) == 0x498, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _DeformMapObjectSpaceOffsetsU) == 0x4a8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _DeformMapObjectSpaceOffsetsV) == 0x4b8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _DeformMapWorldSpaceOffsetsU) == 0x4c8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _DeformMapWorldSpaceOffsetsV) == 0x4d8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _RotateOnYAxisBySinTime) == 0x4e8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _USE_TEX_ARRAY_ATLAS) == 0x4f8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _BaseMap_Atlas) == 0x500, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _BaseMap_AtlasSlice) == 0x508, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _BaseMap_AtlasSliceSource) == 0x50c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _EmissionMap_Atlas) == 0x510, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _EmissionMap_AtlasSlice) == 0x518, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _DeformMap_Atlas) == 0x520, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _DeformMap_AtlasSlice) == 0x528, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _WeatherMap_Atlas) == 0x530, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _WeatherMap_AtlasSlice) == 0x538, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _DEBUG_PAWN_DATA) == 0x53c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _SrcBlend) == 0x540, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _DstBlend) == 0x544, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _SrcBlendAlpha) == 0x548, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _DstBlendAlpha) == 0x54c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _ZWrite) == 0x550, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _AlphaToMask) == 0x554, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _Color) == 0x558, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _Surface) == 0x568, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _Metallic) == 0x56c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _SpecColor) == 0x570, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _DayNightLightmapArray) == 0x580, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _DayNightLightmapArray_ST) == 0x588, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, _DayNightLightmapArray_AtlasSlice) == 0x598, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MaterialFingerprint, isValid) == 0x59c, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MaterialFingerprint) == 0x5a0, "Size mismatch!");

} // namespace end def GlobalNamespace
