#pragma once
// IWYU pragma private; include "GlobalNamespace/UberShaderMatUsedProps.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__GTUberShader_MaterialKeywordStates_def.hpp"
#include "GlobalNamespace/zzzz__MaterialFingerprint_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(UberShaderMatUsedProps)
namespace GlobalNamespace {
struct GTUberShader_MaterialKeywordStates;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace GlobalNamespace {
struct UberShaderMatUsedProps;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::UberShaderMatUsedProps);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UberShaderMatUsedProps, "", "UberShaderMatUsedProps");
// Dependencies GTUberShader_MaterialKeywordStates, MaterialFingerprint
namespace GlobalNamespace {
// Is value type: true
// CS Name: UberShaderMatUsedProps
struct CORDL_TYPE UberShaderMatUsedProps {
public:
// Declarations
/// @brief Method ToString, addr 0x5681420, size 0x4fb0, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method ToStringTSV, addr 0x56863d0, size 0x7cb0, virtual false, abstract: false, final false
inline ::StringW ToStringTSV() ;

/// @brief Method .ctor, addr 0x5680a44, size 0x918, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Material*  mat) ;

/// @brief Method _g_Macro_DECLARE_ATLASABLE_SAMPLER, addr 0x568e080, size 0x24, virtual false, abstract: false, final false
static inline void _g_Macro_DECLARE_ATLASABLE_SAMPLER(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::GTUberShader_MaterialKeywordStates>  kw, ::by_ref<int32_t>  sampler, ::by_ref<int32_t>  sampler_Atlas) ;

/// @brief Method _g_Macro_DECLARE_ATLASABLE_TEX2D, addr 0x568135c, size 0x24, virtual false, abstract: false, final false
static inline void _g_Macro_DECLARE_ATLASABLE_TEX2D(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::GTUberShader_MaterialKeywordStates>  kw, ::by_ref<int32_t>  tex, ::by_ref<int32_t>  tex_Atlas) ;

/// @brief Method _g_Macro_SAMPLE_ATLASABLE_TEX2D, addr 0x56813c0, size 0x60, virtual false, abstract: false, final false
static inline void _g_Macro_SAMPLE_ATLASABLE_TEX2D(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::GTUberShader_MaterialKeywordStates>  kw, ::by_ref<int32_t>  tex, ::by_ref<int32_t>  tex_Atlas, ::by_ref<int32_t>  tex_AtlasSlice, ::by_ref<int32_t>  sampler, ::by_ref<int32_t>  sampler_Atlas, ::by_ref<int32_t>  coord2, ::by_ref<int32_t>  mipBias) ;

/// @brief Method _g_Macro_SAMPLE_ATLASABLE_TEX2D_LOD, addr 0x5681380, size 0x24, virtual false, abstract: false, final false
static inline void _g_Macro_SAMPLE_ATLASABLE_TEX2D_LOD(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::GTUberShader_MaterialKeywordStates>  kw, ::by_ref<int32_t>  texName, ::by_ref<int32_t>  texName_Atlas) ;

/// @brief Method _g_Macro_SAMPLE_ATLASABLE_TEX2D_LOD, addr 0x568e0a4, size 0x218, virtual false, abstract: false, final false
static inline void _g_Macro_SAMPLE_ATLASABLE_TEX2D_LOD(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::GTUberShader_MaterialKeywordStates>  kw, ::by_ref<int32_t>  texName, ::by_ref<int32_t>  texName_Atlas, ::by_ref<int32_t>  sampler, ::by_ref<int32_t>  coord2, ::by_ref<int32_t>  lod) ;

/// @brief Method _g_Macro_TRANSFORM_TEX, addr 0x56813a4, size 0x1c, virtual false, abstract: false, final false
static inline void _g_Macro_TRANSFORM_TEX(/* [IsReadOnly] */ ::by_ref<::GlobalNamespace::GTUberShader_MaterialKeywordStates>  kw, ::by_ref<int32_t>  tex, ::by_ref<int32_t>  tex_ST) ;

// Ctor Parameters []
// @brief default ctor
constexpr UberShaderMatUsedProps() ;

// Ctor Parameters [CppParam { name: "material", ty: "::UnityW<::UnityEngine::Material>", modifiers: "", def_value: None, comment: None }, CppParam { name: "kw", ty: "::GlobalNamespace::GTUberShader_MaterialKeywordStates", modifiers: "", def_value: None, comment: None }, CppParam { name: "fingerprint", ty: "::GlobalNamespace::MaterialFingerprint", modifiers: "", def_value: None, comment: None }, CppParam { name: "IsValid", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_notAProp", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_TransparencyMode", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_Cutoff", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_ColorSource", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_BaseColor", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_GChannelColor", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_BChannelColor", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_AChannelColor", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_BaseMap", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_BaseMap_ST", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_SettingsPreset", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_AdvancedOptions", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_TexMipBias", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_BaseMap_WH", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_TexelSnapToggle", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_TexelSnap_Factor", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_UVSource", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_AlphaDetailToggle", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_AlphaDetail_ST", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_AlphaDetail_Opacity", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_AlphaDetail_WorldSpace", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_MaskMapToggle", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_MaskMap", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_MaskMap_ST", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_MaskMap_WH", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_LavaLampToggle", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_GradientMapToggle", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_GradientMap", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_DoTextureRotation", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_RotateAngle", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_RotateAnim", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_UseWaveWarp", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_WaveAmplitude", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_WaveFrequency", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_WaveScale", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_WaveTimeScale", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_ReflectToggle", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_ReflectBoxProjectToggle", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_ReflectBoxCubePos", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_ReflectBoxSize", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_ReflectBoxRotation", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_ReflectMatcapToggle", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_ReflectMatcapPerspToggle", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_ReflectNormalToggle", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_ReflectTex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_ReflectNormalTex", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_ReflectAlbedoTint", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_ReflectTint", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_ReflectOpacity", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_ReflectExposure", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_ReflectOffset", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_ReflectScale", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_ReflectRotate", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_HalfLambertToggle", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_ParallaxPlanarToggle", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_ParallaxToggle", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_ParallaxAAToggle", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_ParallaxAABias", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_DepthMap", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_ParallaxAmplitude", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_ParallaxSamplesMinMax", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_UvShiftToggle", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_UvShiftSteps", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_UvShiftRate", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_UvShiftOffset", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_UseGridEffect", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_UseCrystalEffect", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_CrystalPower", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_CrystalRimColor", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_LiquidVolume", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_LiquidFill", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_LiquidFillNormal", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_LiquidSurfaceColor", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_LiquidSwayX", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_LiquidSwayY", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_LiquidContainer", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_LiquidPlanePosition", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_LiquidPlaneNormal", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_VertexFlapToggle", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_VertexFlapAxis", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_VertexFlapDegreesMinMax", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_VertexFlapSpeed", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_VertexFlapPhaseOffset", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_VertexWaveToggle", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_VertexWaveDebug", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_VertexWaveEnd", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_VertexWaveParams", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_VertexWaveFalloff", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_VertexWaveSphereMask", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_VertexWavePhaseOffset", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_VertexWaveAxes", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_VertexRotateToggle", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_VertexRotateAngles", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_VertexRotateAnim", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_VertexLightToggle", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_InnerGlowOn", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_InnerGlowColor", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_InnerGlowParams", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_InnerGlowTap", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_InnerGlowSine", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_InnerGlowSinePeriod", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_InnerGlowSinePhaseShift", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_StealthEffectOn", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_UseEyeTracking", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_EyeTileOffsetUV", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_EyeOverrideUV", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_EyeOverrideUVTransform", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_UseMouthFlap", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_MouthMap", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_MouthMap_ST", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_UseVertexColor", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_WaterEffect", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_HeightBasedWaterEffect", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_WaterCaustics", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_UseDayNightLightmap", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_DAY_CYCLE_BRIGHTNESS_", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_UseWeatherMap", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_WeatherMap", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_WeatherMapDissolveEdgeSize", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_UseSpecular", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_UseSpecularAlphaChannel", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_Smoothness", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_UseSpecHighlight", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_SpecularDir", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_SpecularPowerIntensity", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_SpecularColor", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_SpecularUseDiffuseColor", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_EmissionToggle", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_EmissionColor", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_EmissionMap", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_EmissionMaskByBaseMapAlpha", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_EmissionUVScrollSpeed", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_EmissionDissolveProgress", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_EmissionDissolveAnimation", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_EmissionDissolveEdgeSize", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_EmissionIntensityInDynamic", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_EmissionUseUVWaveWarp", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_GreyZoneException", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_Cull", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_StencilReference", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_StencilComparison", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_StencilPassFront", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_USE_DEFORM_MAP", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_DeformMap", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_DeformMapIntensity", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_DeformMapMaskByVertColorRAmount", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_DeformMapScrollSpeed", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_DeformMapUV0Influence", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_DeformMapObjectSpaceOffsetsU", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_DeformMapObjectSpaceOffsetsV", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_DeformMapWorldSpaceOffsetsU", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_DeformMapWorldSpaceOffsetsV", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_RotateOnYAxisBySinTime", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_USE_TEX_ARRAY_ATLAS", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_BaseMap_Atlas", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_BaseMap_AtlasSlice", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_BaseMap_AtlasSliceSource", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_EmissionMap_Atlas", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_EmissionMap_AtlasSlice", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_DeformMap_Atlas", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_DeformMap_AtlasSlice", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_WeatherMap_Atlas", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_WeatherMap_AtlasSlice", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_DEBUG_PAWN_DATA", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_SrcBlend", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_DstBlend", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_SrcBlendAlpha", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_DstBlendAlpha", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_ZWrite", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_AlphaToMask", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_Color", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_Surface", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_Metallic", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_SpecColor", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_DayNightLightmapArray", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_DayNightLightmapArray_ST", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "_DayNightLightmapArray_AtlasSlice", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
constexpr UberShaderMatUsedProps(::UnityW<::UnityEngine::Material>  material, ::GlobalNamespace::GTUberShader_MaterialKeywordStates  kw, ::GlobalNamespace::MaterialFingerprint  fingerprint, bool  IsValid, int32_t  _notAProp, int32_t  _TransparencyMode, int32_t  _Cutoff, int32_t  _ColorSource, int32_t  _BaseColor, int32_t  _GChannelColor, int32_t  _BChannelColor, int32_t  _AChannelColor, int32_t  _BaseMap, int32_t  _BaseMap_ST, int32_t  _SettingsPreset, int32_t  _AdvancedOptions, int32_t  _TexMipBias, int32_t  _BaseMap_WH, int32_t  _TexelSnapToggle, int32_t  _TexelSnap_Factor, int32_t  _UVSource, int32_t  _AlphaDetailToggle, int32_t  _AlphaDetail_ST, int32_t  _AlphaDetail_Opacity, int32_t  _AlphaDetail_WorldSpace, int32_t  _MaskMapToggle, int32_t  _MaskMap, int32_t  _MaskMap_ST, int32_t  _MaskMap_WH, int32_t  _LavaLampToggle, int32_t  _GradientMapToggle, int32_t  _GradientMap, int32_t  _DoTextureRotation, int32_t  _RotateAngle, int32_t  _RotateAnim, int32_t  _UseWaveWarp, int32_t  _WaveAmplitude, int32_t  _WaveFrequency, int32_t  _WaveScale, int32_t  _WaveTimeScale, int32_t  _ReflectToggle, int32_t  _ReflectBoxProjectToggle, int32_t  _ReflectBoxCubePos, int32_t  _ReflectBoxSize, int32_t  _ReflectBoxRotation, int32_t  _ReflectMatcapToggle, int32_t  _ReflectMatcapPerspToggle, int32_t  _ReflectNormalToggle, int32_t  _ReflectTex, int32_t  _ReflectNormalTex, int32_t  _ReflectAlbedoTint, int32_t  _ReflectTint, int32_t  _ReflectOpacity, int32_t  _ReflectExposure, int32_t  _ReflectOffset, int32_t  _ReflectScale, int32_t  _ReflectRotate, int32_t  _HalfLambertToggle, int32_t  _ParallaxPlanarToggle, int32_t  _ParallaxToggle, int32_t  _ParallaxAAToggle, int32_t  _ParallaxAABias, int32_t  _DepthMap, int32_t  _ParallaxAmplitude, int32_t  _ParallaxSamplesMinMax, int32_t  _UvShiftToggle, int32_t  _UvShiftSteps, int32_t  _UvShiftRate, int32_t  _UvShiftOffset, int32_t  _UseGridEffect, int32_t  _UseCrystalEffect, int32_t  _CrystalPower, int32_t  _CrystalRimColor, int32_t  _LiquidVolume, int32_t  _LiquidFill, int32_t  _LiquidFillNormal, int32_t  _LiquidSurfaceColor, int32_t  _LiquidSwayX, int32_t  _LiquidSwayY, int32_t  _LiquidContainer, int32_t  _LiquidPlanePosition, int32_t  _LiquidPlaneNormal, int32_t  _VertexFlapToggle, int32_t  _VertexFlapAxis, int32_t  _VertexFlapDegreesMinMax, int32_t  _VertexFlapSpeed, int32_t  _VertexFlapPhaseOffset, int32_t  _VertexWaveToggle, int32_t  _VertexWaveDebug, int32_t  _VertexWaveEnd, int32_t  _VertexWaveParams, int32_t  _VertexWaveFalloff, int32_t  _VertexWaveSphereMask, int32_t  _VertexWavePhaseOffset, int32_t  _VertexWaveAxes, int32_t  _VertexRotateToggle, int32_t  _VertexRotateAngles, int32_t  _VertexRotateAnim, int32_t  _VertexLightToggle, int32_t  _InnerGlowOn, int32_t  _InnerGlowColor, int32_t  _InnerGlowParams, int32_t  _InnerGlowTap, int32_t  _InnerGlowSine, int32_t  _InnerGlowSinePeriod, int32_t  _InnerGlowSinePhaseShift, int32_t  _StealthEffectOn, int32_t  _UseEyeTracking, int32_t  _EyeTileOffsetUV, int32_t  _EyeOverrideUV, int32_t  _EyeOverrideUVTransform, int32_t  _UseMouthFlap, int32_t  _MouthMap, int32_t  _MouthMap_ST, int32_t  _UseVertexColor, int32_t  _WaterEffect, int32_t  _HeightBasedWaterEffect, int32_t  _WaterCaustics, int32_t  _UseDayNightLightmap, int32_t  _DAY_CYCLE_BRIGHTNESS_, int32_t  _UseWeatherMap, int32_t  _WeatherMap, int32_t  _WeatherMapDissolveEdgeSize, int32_t  _UseSpecular, int32_t  _UseSpecularAlphaChannel, int32_t  _Smoothness, int32_t  _UseSpecHighlight, int32_t  _SpecularDir, int32_t  _SpecularPowerIntensity, int32_t  _SpecularColor, int32_t  _SpecularUseDiffuseColor, int32_t  _EmissionToggle, int32_t  _EmissionColor, int32_t  _EmissionMap, int32_t  _EmissionMaskByBaseMapAlpha, int32_t  _EmissionUVScrollSpeed, int32_t  _EmissionDissolveProgress, int32_t  _EmissionDissolveAnimation, int32_t  _EmissionDissolveEdgeSize, int32_t  _EmissionIntensityInDynamic, int32_t  _EmissionUseUVWaveWarp, int32_t  _GreyZoneException, int32_t  _Cull, int32_t  _StencilReference, int32_t  _StencilComparison, int32_t  _StencilPassFront, int32_t  _USE_DEFORM_MAP, int32_t  _DeformMap, int32_t  _DeformMapIntensity, int32_t  _DeformMapMaskByVertColorRAmount, int32_t  _DeformMapScrollSpeed, int32_t  _DeformMapUV0Influence, int32_t  _DeformMapObjectSpaceOffsetsU, int32_t  _DeformMapObjectSpaceOffsetsV, int32_t  _DeformMapWorldSpaceOffsetsU, int32_t  _DeformMapWorldSpaceOffsetsV, int32_t  _RotateOnYAxisBySinTime, int32_t  _USE_TEX_ARRAY_ATLAS, int32_t  _BaseMap_Atlas, int32_t  _BaseMap_AtlasSlice, int32_t  _BaseMap_AtlasSliceSource, int32_t  _EmissionMap_Atlas, int32_t  _EmissionMap_AtlasSlice, int32_t  _DeformMap_Atlas, int32_t  _DeformMap_AtlasSlice, int32_t  _WeatherMap_Atlas, int32_t  _WeatherMap_AtlasSlice, int32_t  _DEBUG_PAWN_DATA, int32_t  _SrcBlend, int32_t  _DstBlend, int32_t  _SrcBlendAlpha, int32_t  _DstBlendAlpha, int32_t  _ZWrite, int32_t  _AlphaToMask, int32_t  _Color, int32_t  _Surface, int32_t  _Metallic, int32_t  _SpecColor, int32_t  _DayNightLightmapArray, int32_t  _DayNightLightmapArray_ST, int32_t  _DayNightLightmapArray_AtlasSlice) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{909};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8c8};

/// @brief Field material, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  material;

/// @brief Field kw, offset: 0x8, size: 0x58, def value: None
 ::GlobalNamespace::GTUberShader_MaterialKeywordStates  kw;

/// @brief Field fingerprint, offset: 0x60, size: 0x5a0, def value: None
 ::GlobalNamespace::MaterialFingerprint  fingerprint;

/// @brief Field IsValid, offset: 0x600, size: 0x1, def value: None
 bool  IsValid;

/// @brief Field _notAProp, offset: 0x604, size: 0x4, def value: None
 int32_t  _notAProp;

/// @brief Field _TransparencyMode, offset: 0x608, size: 0x4, def value: None
 int32_t  _TransparencyMode;

/// @brief Field _Cutoff, offset: 0x60c, size: 0x4, def value: None
 int32_t  _Cutoff;

/// @brief Field _ColorSource, offset: 0x610, size: 0x4, def value: None
 int32_t  _ColorSource;

/// @brief Field _BaseColor, offset: 0x614, size: 0x4, def value: None
 int32_t  _BaseColor;

/// @brief Field _GChannelColor, offset: 0x618, size: 0x4, def value: None
 int32_t  _GChannelColor;

/// @brief Field _BChannelColor, offset: 0x61c, size: 0x4, def value: None
 int32_t  _BChannelColor;

/// @brief Field _AChannelColor, offset: 0x620, size: 0x4, def value: None
 int32_t  _AChannelColor;

/// @brief Field _BaseMap, offset: 0x624, size: 0x4, def value: None
 int32_t  _BaseMap;

/// @brief Field _BaseMap_ST, offset: 0x628, size: 0x4, def value: None
 int32_t  _BaseMap_ST;

/// @brief Field _SettingsPreset, offset: 0x62c, size: 0x4, def value: None
 int32_t  _SettingsPreset;

/// @brief Field _AdvancedOptions, offset: 0x630, size: 0x4, def value: None
 int32_t  _AdvancedOptions;

/// @brief Field _TexMipBias, offset: 0x634, size: 0x4, def value: None
 int32_t  _TexMipBias;

/// @brief Field _BaseMap_WH, offset: 0x638, size: 0x4, def value: None
 int32_t  _BaseMap_WH;

/// @brief Field _TexelSnapToggle, offset: 0x63c, size: 0x4, def value: None
 int32_t  _TexelSnapToggle;

/// @brief Field _TexelSnap_Factor, offset: 0x640, size: 0x4, def value: None
 int32_t  _TexelSnap_Factor;

/// @brief Field _UVSource, offset: 0x644, size: 0x4, def value: None
 int32_t  _UVSource;

/// @brief Field _AlphaDetailToggle, offset: 0x648, size: 0x4, def value: None
 int32_t  _AlphaDetailToggle;

/// @brief Field _AlphaDetail_ST, offset: 0x64c, size: 0x4, def value: None
 int32_t  _AlphaDetail_ST;

/// @brief Field _AlphaDetail_Opacity, offset: 0x650, size: 0x4, def value: None
 int32_t  _AlphaDetail_Opacity;

/// @brief Field _AlphaDetail_WorldSpace, offset: 0x654, size: 0x4, def value: None
 int32_t  _AlphaDetail_WorldSpace;

/// @brief Field _MaskMapToggle, offset: 0x658, size: 0x4, def value: None
 int32_t  _MaskMapToggle;

/// @brief Field _MaskMap, offset: 0x65c, size: 0x4, def value: None
 int32_t  _MaskMap;

/// @brief Field _MaskMap_ST, offset: 0x660, size: 0x4, def value: None
 int32_t  _MaskMap_ST;

/// @brief Field _MaskMap_WH, offset: 0x664, size: 0x4, def value: None
 int32_t  _MaskMap_WH;

/// @brief Field _LavaLampToggle, offset: 0x668, size: 0x4, def value: None
 int32_t  _LavaLampToggle;

/// @brief Field _GradientMapToggle, offset: 0x66c, size: 0x4, def value: None
 int32_t  _GradientMapToggle;

/// @brief Field _GradientMap, offset: 0x670, size: 0x4, def value: None
 int32_t  _GradientMap;

/// @brief Field _DoTextureRotation, offset: 0x674, size: 0x4, def value: None
 int32_t  _DoTextureRotation;

/// @brief Field _RotateAngle, offset: 0x678, size: 0x4, def value: None
 int32_t  _RotateAngle;

/// @brief Field _RotateAnim, offset: 0x67c, size: 0x4, def value: None
 int32_t  _RotateAnim;

/// @brief Field _UseWaveWarp, offset: 0x680, size: 0x4, def value: None
 int32_t  _UseWaveWarp;

/// @brief Field _WaveAmplitude, offset: 0x684, size: 0x4, def value: None
 int32_t  _WaveAmplitude;

/// @brief Field _WaveFrequency, offset: 0x688, size: 0x4, def value: None
 int32_t  _WaveFrequency;

/// @brief Field _WaveScale, offset: 0x68c, size: 0x4, def value: None
 int32_t  _WaveScale;

/// @brief Field _WaveTimeScale, offset: 0x690, size: 0x4, def value: None
 int32_t  _WaveTimeScale;

/// @brief Field _ReflectToggle, offset: 0x694, size: 0x4, def value: None
 int32_t  _ReflectToggle;

/// @brief Field _ReflectBoxProjectToggle, offset: 0x698, size: 0x4, def value: None
 int32_t  _ReflectBoxProjectToggle;

/// @brief Field _ReflectBoxCubePos, offset: 0x69c, size: 0x4, def value: None
 int32_t  _ReflectBoxCubePos;

/// @brief Field _ReflectBoxSize, offset: 0x6a0, size: 0x4, def value: None
 int32_t  _ReflectBoxSize;

/// @brief Field _ReflectBoxRotation, offset: 0x6a4, size: 0x4, def value: None
 int32_t  _ReflectBoxRotation;

/// @brief Field _ReflectMatcapToggle, offset: 0x6a8, size: 0x4, def value: None
 int32_t  _ReflectMatcapToggle;

/// @brief Field _ReflectMatcapPerspToggle, offset: 0x6ac, size: 0x4, def value: None
 int32_t  _ReflectMatcapPerspToggle;

/// @brief Field _ReflectNormalToggle, offset: 0x6b0, size: 0x4, def value: None
 int32_t  _ReflectNormalToggle;

/// @brief Field _ReflectTex, offset: 0x6b4, size: 0x4, def value: None
 int32_t  _ReflectTex;

/// @brief Field _ReflectNormalTex, offset: 0x6b8, size: 0x4, def value: None
 int32_t  _ReflectNormalTex;

/// @brief Field _ReflectAlbedoTint, offset: 0x6bc, size: 0x4, def value: None
 int32_t  _ReflectAlbedoTint;

/// @brief Field _ReflectTint, offset: 0x6c0, size: 0x4, def value: None
 int32_t  _ReflectTint;

/// @brief Field _ReflectOpacity, offset: 0x6c4, size: 0x4, def value: None
 int32_t  _ReflectOpacity;

/// @brief Field _ReflectExposure, offset: 0x6c8, size: 0x4, def value: None
 int32_t  _ReflectExposure;

/// @brief Field _ReflectOffset, offset: 0x6cc, size: 0x4, def value: None
 int32_t  _ReflectOffset;

/// @brief Field _ReflectScale, offset: 0x6d0, size: 0x4, def value: None
 int32_t  _ReflectScale;

/// @brief Field _ReflectRotate, offset: 0x6d4, size: 0x4, def value: None
 int32_t  _ReflectRotate;

/// @brief Field _HalfLambertToggle, offset: 0x6d8, size: 0x4, def value: None
 int32_t  _HalfLambertToggle;

/// @brief Field _ParallaxPlanarToggle, offset: 0x6dc, size: 0x4, def value: None
 int32_t  _ParallaxPlanarToggle;

/// @brief Field _ParallaxToggle, offset: 0x6e0, size: 0x4, def value: None
 int32_t  _ParallaxToggle;

/// @brief Field _ParallaxAAToggle, offset: 0x6e4, size: 0x4, def value: None
 int32_t  _ParallaxAAToggle;

/// @brief Field _ParallaxAABias, offset: 0x6e8, size: 0x4, def value: None
 int32_t  _ParallaxAABias;

/// @brief Field _DepthMap, offset: 0x6ec, size: 0x4, def value: None
 int32_t  _DepthMap;

/// @brief Field _ParallaxAmplitude, offset: 0x6f0, size: 0x4, def value: None
 int32_t  _ParallaxAmplitude;

/// @brief Field _ParallaxSamplesMinMax, offset: 0x6f4, size: 0x4, def value: None
 int32_t  _ParallaxSamplesMinMax;

/// @brief Field _UvShiftToggle, offset: 0x6f8, size: 0x4, def value: None
 int32_t  _UvShiftToggle;

/// @brief Field _UvShiftSteps, offset: 0x6fc, size: 0x4, def value: None
 int32_t  _UvShiftSteps;

/// @brief Field _UvShiftRate, offset: 0x700, size: 0x4, def value: None
 int32_t  _UvShiftRate;

/// @brief Field _UvShiftOffset, offset: 0x704, size: 0x4, def value: None
 int32_t  _UvShiftOffset;

/// @brief Field _UseGridEffect, offset: 0x708, size: 0x4, def value: None
 int32_t  _UseGridEffect;

/// @brief Field _UseCrystalEffect, offset: 0x70c, size: 0x4, def value: None
 int32_t  _UseCrystalEffect;

/// @brief Field _CrystalPower, offset: 0x710, size: 0x4, def value: None
 int32_t  _CrystalPower;

/// @brief Field _CrystalRimColor, offset: 0x714, size: 0x4, def value: None
 int32_t  _CrystalRimColor;

/// @brief Field _LiquidVolume, offset: 0x718, size: 0x4, def value: None
 int32_t  _LiquidVolume;

/// @brief Field _LiquidFill, offset: 0x71c, size: 0x4, def value: None
 int32_t  _LiquidFill;

/// @brief Field _LiquidFillNormal, offset: 0x720, size: 0x4, def value: None
 int32_t  _LiquidFillNormal;

/// @brief Field _LiquidSurfaceColor, offset: 0x724, size: 0x4, def value: None
 int32_t  _LiquidSurfaceColor;

/// @brief Field _LiquidSwayX, offset: 0x728, size: 0x4, def value: None
 int32_t  _LiquidSwayX;

/// @brief Field _LiquidSwayY, offset: 0x72c, size: 0x4, def value: None
 int32_t  _LiquidSwayY;

/// @brief Field _LiquidContainer, offset: 0x730, size: 0x4, def value: None
 int32_t  _LiquidContainer;

/// @brief Field _LiquidPlanePosition, offset: 0x734, size: 0x4, def value: None
 int32_t  _LiquidPlanePosition;

/// @brief Field _LiquidPlaneNormal, offset: 0x738, size: 0x4, def value: None
 int32_t  _LiquidPlaneNormal;

/// @brief Field _VertexFlapToggle, offset: 0x73c, size: 0x4, def value: None
 int32_t  _VertexFlapToggle;

/// @brief Field _VertexFlapAxis, offset: 0x740, size: 0x4, def value: None
 int32_t  _VertexFlapAxis;

/// @brief Field _VertexFlapDegreesMinMax, offset: 0x744, size: 0x4, def value: None
 int32_t  _VertexFlapDegreesMinMax;

/// @brief Field _VertexFlapSpeed, offset: 0x748, size: 0x4, def value: None
 int32_t  _VertexFlapSpeed;

/// @brief Field _VertexFlapPhaseOffset, offset: 0x74c, size: 0x4, def value: None
 int32_t  _VertexFlapPhaseOffset;

/// @brief Field _VertexWaveToggle, offset: 0x750, size: 0x4, def value: None
 int32_t  _VertexWaveToggle;

/// @brief Field _VertexWaveDebug, offset: 0x754, size: 0x4, def value: None
 int32_t  _VertexWaveDebug;

/// @brief Field _VertexWaveEnd, offset: 0x758, size: 0x4, def value: None
 int32_t  _VertexWaveEnd;

/// @brief Field _VertexWaveParams, offset: 0x75c, size: 0x4, def value: None
 int32_t  _VertexWaveParams;

/// @brief Field _VertexWaveFalloff, offset: 0x760, size: 0x4, def value: None
 int32_t  _VertexWaveFalloff;

/// @brief Field _VertexWaveSphereMask, offset: 0x764, size: 0x4, def value: None
 int32_t  _VertexWaveSphereMask;

/// @brief Field _VertexWavePhaseOffset, offset: 0x768, size: 0x4, def value: None
 int32_t  _VertexWavePhaseOffset;

/// @brief Field _VertexWaveAxes, offset: 0x76c, size: 0x4, def value: None
 int32_t  _VertexWaveAxes;

/// @brief Field _VertexRotateToggle, offset: 0x770, size: 0x4, def value: None
 int32_t  _VertexRotateToggle;

/// @brief Field _VertexRotateAngles, offset: 0x774, size: 0x4, def value: None
 int32_t  _VertexRotateAngles;

/// @brief Field _VertexRotateAnim, offset: 0x778, size: 0x4, def value: None
 int32_t  _VertexRotateAnim;

/// @brief Field _VertexLightToggle, offset: 0x77c, size: 0x4, def value: None
 int32_t  _VertexLightToggle;

/// @brief Field _InnerGlowOn, offset: 0x780, size: 0x4, def value: None
 int32_t  _InnerGlowOn;

/// @brief Field _InnerGlowColor, offset: 0x784, size: 0x4, def value: None
 int32_t  _InnerGlowColor;

/// @brief Field _InnerGlowParams, offset: 0x788, size: 0x4, def value: None
 int32_t  _InnerGlowParams;

/// @brief Field _InnerGlowTap, offset: 0x78c, size: 0x4, def value: None
 int32_t  _InnerGlowTap;

/// @brief Field _InnerGlowSine, offset: 0x790, size: 0x4, def value: None
 int32_t  _InnerGlowSine;

/// @brief Field _InnerGlowSinePeriod, offset: 0x794, size: 0x4, def value: None
 int32_t  _InnerGlowSinePeriod;

/// @brief Field _InnerGlowSinePhaseShift, offset: 0x798, size: 0x4, def value: None
 int32_t  _InnerGlowSinePhaseShift;

/// @brief Field _StealthEffectOn, offset: 0x79c, size: 0x4, def value: None
 int32_t  _StealthEffectOn;

/// @brief Field _UseEyeTracking, offset: 0x7a0, size: 0x4, def value: None
 int32_t  _UseEyeTracking;

/// @brief Field _EyeTileOffsetUV, offset: 0x7a4, size: 0x4, def value: None
 int32_t  _EyeTileOffsetUV;

/// @brief Field _EyeOverrideUV, offset: 0x7a8, size: 0x4, def value: None
 int32_t  _EyeOverrideUV;

/// @brief Field _EyeOverrideUVTransform, offset: 0x7ac, size: 0x4, def value: None
 int32_t  _EyeOverrideUVTransform;

/// @brief Field _UseMouthFlap, offset: 0x7b0, size: 0x4, def value: None
 int32_t  _UseMouthFlap;

/// @brief Field _MouthMap, offset: 0x7b4, size: 0x4, def value: None
 int32_t  _MouthMap;

/// @brief Field _MouthMap_ST, offset: 0x7b8, size: 0x4, def value: None
 int32_t  _MouthMap_ST;

/// @brief Field _UseVertexColor, offset: 0x7bc, size: 0x4, def value: None
 int32_t  _UseVertexColor;

/// @brief Field _WaterEffect, offset: 0x7c0, size: 0x4, def value: None
 int32_t  _WaterEffect;

/// @brief Field _HeightBasedWaterEffect, offset: 0x7c4, size: 0x4, def value: None
 int32_t  _HeightBasedWaterEffect;

/// @brief Field _WaterCaustics, offset: 0x7c8, size: 0x4, def value: None
 int32_t  _WaterCaustics;

/// @brief Field _UseDayNightLightmap, offset: 0x7cc, size: 0x4, def value: None
 int32_t  _UseDayNightLightmap;

/// @brief Field _DAY_CYCLE_BRIGHTNESS_, offset: 0x7d0, size: 0x4, def value: None
 int32_t  _DAY_CYCLE_BRIGHTNESS_;

/// @brief Field _UseWeatherMap, offset: 0x7d4, size: 0x4, def value: None
 int32_t  _UseWeatherMap;

/// @brief Field _WeatherMap, offset: 0x7d8, size: 0x4, def value: None
 int32_t  _WeatherMap;

/// @brief Field _WeatherMapDissolveEdgeSize, offset: 0x7dc, size: 0x4, def value: None
 int32_t  _WeatherMapDissolveEdgeSize;

/// @brief Field _UseSpecular, offset: 0x7e0, size: 0x4, def value: None
 int32_t  _UseSpecular;

/// @brief Field _UseSpecularAlphaChannel, offset: 0x7e4, size: 0x4, def value: None
 int32_t  _UseSpecularAlphaChannel;

/// @brief Field _Smoothness, offset: 0x7e8, size: 0x4, def value: None
 int32_t  _Smoothness;

/// @brief Field _UseSpecHighlight, offset: 0x7ec, size: 0x4, def value: None
 int32_t  _UseSpecHighlight;

/// @brief Field _SpecularDir, offset: 0x7f0, size: 0x4, def value: None
 int32_t  _SpecularDir;

/// @brief Field _SpecularPowerIntensity, offset: 0x7f4, size: 0x4, def value: None
 int32_t  _SpecularPowerIntensity;

/// @brief Field _SpecularColor, offset: 0x7f8, size: 0x4, def value: None
 int32_t  _SpecularColor;

/// @brief Field _SpecularUseDiffuseColor, offset: 0x7fc, size: 0x4, def value: None
 int32_t  _SpecularUseDiffuseColor;

/// @brief Field _EmissionToggle, offset: 0x800, size: 0x4, def value: None
 int32_t  _EmissionToggle;

/// @brief Field _EmissionColor, offset: 0x804, size: 0x4, def value: None
 int32_t  _EmissionColor;

/// @brief Field _EmissionMap, offset: 0x808, size: 0x4, def value: None
 int32_t  _EmissionMap;

/// @brief Field _EmissionMaskByBaseMapAlpha, offset: 0x80c, size: 0x4, def value: None
 int32_t  _EmissionMaskByBaseMapAlpha;

/// @brief Field _EmissionUVScrollSpeed, offset: 0x810, size: 0x4, def value: None
 int32_t  _EmissionUVScrollSpeed;

/// @brief Field _EmissionDissolveProgress, offset: 0x814, size: 0x4, def value: None
 int32_t  _EmissionDissolveProgress;

/// @brief Field _EmissionDissolveAnimation, offset: 0x818, size: 0x4, def value: None
 int32_t  _EmissionDissolveAnimation;

/// @brief Field _EmissionDissolveEdgeSize, offset: 0x81c, size: 0x4, def value: None
 int32_t  _EmissionDissolveEdgeSize;

/// @brief Field _EmissionIntensityInDynamic, offset: 0x820, size: 0x4, def value: None
 int32_t  _EmissionIntensityInDynamic;

/// @brief Field _EmissionUseUVWaveWarp, offset: 0x824, size: 0x4, def value: None
 int32_t  _EmissionUseUVWaveWarp;

/// @brief Field _GreyZoneException, offset: 0x828, size: 0x4, def value: None
 int32_t  _GreyZoneException;

/// @brief Field _Cull, offset: 0x82c, size: 0x4, def value: None
 int32_t  _Cull;

/// @brief Field _StencilReference, offset: 0x830, size: 0x4, def value: None
 int32_t  _StencilReference;

/// @brief Field _StencilComparison, offset: 0x834, size: 0x4, def value: None
 int32_t  _StencilComparison;

/// @brief Field _StencilPassFront, offset: 0x838, size: 0x4, def value: None
 int32_t  _StencilPassFront;

/// @brief Field _USE_DEFORM_MAP, offset: 0x83c, size: 0x4, def value: None
 int32_t  _USE_DEFORM_MAP;

/// @brief Field _DeformMap, offset: 0x840, size: 0x4, def value: None
 int32_t  _DeformMap;

/// @brief Field _DeformMapIntensity, offset: 0x844, size: 0x4, def value: None
 int32_t  _DeformMapIntensity;

/// @brief Field _DeformMapMaskByVertColorRAmount, offset: 0x848, size: 0x4, def value: None
 int32_t  _DeformMapMaskByVertColorRAmount;

/// @brief Field _DeformMapScrollSpeed, offset: 0x84c, size: 0x4, def value: None
 int32_t  _DeformMapScrollSpeed;

/// @brief Field _DeformMapUV0Influence, offset: 0x850, size: 0x4, def value: None
 int32_t  _DeformMapUV0Influence;

/// @brief Field _DeformMapObjectSpaceOffsetsU, offset: 0x854, size: 0x4, def value: None
 int32_t  _DeformMapObjectSpaceOffsetsU;

/// @brief Field _DeformMapObjectSpaceOffsetsV, offset: 0x858, size: 0x4, def value: None
 int32_t  _DeformMapObjectSpaceOffsetsV;

/// @brief Field _DeformMapWorldSpaceOffsetsU, offset: 0x85c, size: 0x4, def value: None
 int32_t  _DeformMapWorldSpaceOffsetsU;

/// @brief Field _DeformMapWorldSpaceOffsetsV, offset: 0x860, size: 0x4, def value: None
 int32_t  _DeformMapWorldSpaceOffsetsV;

/// @brief Field _RotateOnYAxisBySinTime, offset: 0x864, size: 0x4, def value: None
 int32_t  _RotateOnYAxisBySinTime;

/// @brief Field _USE_TEX_ARRAY_ATLAS, offset: 0x868, size: 0x4, def value: None
 int32_t  _USE_TEX_ARRAY_ATLAS;

/// @brief Field _BaseMap_Atlas, offset: 0x86c, size: 0x4, def value: None
 int32_t  _BaseMap_Atlas;

/// @brief Field _BaseMap_AtlasSlice, offset: 0x870, size: 0x4, def value: None
 int32_t  _BaseMap_AtlasSlice;

/// @brief Field _BaseMap_AtlasSliceSource, offset: 0x874, size: 0x4, def value: None
 int32_t  _BaseMap_AtlasSliceSource;

/// @brief Field _EmissionMap_Atlas, offset: 0x878, size: 0x4, def value: None
 int32_t  _EmissionMap_Atlas;

/// @brief Field _EmissionMap_AtlasSlice, offset: 0x87c, size: 0x4, def value: None
 int32_t  _EmissionMap_AtlasSlice;

/// @brief Field _DeformMap_Atlas, offset: 0x880, size: 0x4, def value: None
 int32_t  _DeformMap_Atlas;

/// @brief Field _DeformMap_AtlasSlice, offset: 0x884, size: 0x4, def value: None
 int32_t  _DeformMap_AtlasSlice;

/// @brief Field _WeatherMap_Atlas, offset: 0x888, size: 0x4, def value: None
 int32_t  _WeatherMap_Atlas;

/// @brief Field _WeatherMap_AtlasSlice, offset: 0x88c, size: 0x4, def value: None
 int32_t  _WeatherMap_AtlasSlice;

/// @brief Field _DEBUG_PAWN_DATA, offset: 0x890, size: 0x4, def value: None
 int32_t  _DEBUG_PAWN_DATA;

/// @brief Field _SrcBlend, offset: 0x894, size: 0x4, def value: None
 int32_t  _SrcBlend;

/// @brief Field _DstBlend, offset: 0x898, size: 0x4, def value: None
 int32_t  _DstBlend;

/// @brief Field _SrcBlendAlpha, offset: 0x89c, size: 0x4, def value: None
 int32_t  _SrcBlendAlpha;

/// @brief Field _DstBlendAlpha, offset: 0x8a0, size: 0x4, def value: None
 int32_t  _DstBlendAlpha;

/// @brief Field _ZWrite, offset: 0x8a4, size: 0x4, def value: None
 int32_t  _ZWrite;

/// @brief Field _AlphaToMask, offset: 0x8a8, size: 0x4, def value: None
 int32_t  _AlphaToMask;

/// @brief Field _Color, offset: 0x8ac, size: 0x4, def value: None
 int32_t  _Color;

/// @brief Field _Surface, offset: 0x8b0, size: 0x4, def value: None
 int32_t  _Surface;

/// @brief Field _Metallic, offset: 0x8b4, size: 0x4, def value: None
 int32_t  _Metallic;

/// @brief Field _SpecColor, offset: 0x8b8, size: 0x4, def value: None
 int32_t  _SpecColor;

/// @brief Field _DayNightLightmapArray, offset: 0x8bc, size: 0x4, def value: None
 int32_t  _DayNightLightmapArray;

/// @brief Field _DayNightLightmapArray_ST, offset: 0x8c0, size: 0x4, def value: None
 int32_t  _DayNightLightmapArray_ST;

/// @brief Field _DayNightLightmapArray_AtlasSlice, offset: 0x8c4, size: 0x4, def value: None
 int32_t  _DayNightLightmapArray_AtlasSlice;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, material) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, kw) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, fingerprint) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, IsValid) == 0x600, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _notAProp) == 0x604, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _TransparencyMode) == 0x608, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _Cutoff) == 0x60c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _ColorSource) == 0x610, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _BaseColor) == 0x614, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _GChannelColor) == 0x618, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _BChannelColor) == 0x61c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _AChannelColor) == 0x620, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _BaseMap) == 0x624, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _BaseMap_ST) == 0x628, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _SettingsPreset) == 0x62c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _AdvancedOptions) == 0x630, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _TexMipBias) == 0x634, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _BaseMap_WH) == 0x638, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _TexelSnapToggle) == 0x63c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _TexelSnap_Factor) == 0x640, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _UVSource) == 0x644, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _AlphaDetailToggle) == 0x648, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _AlphaDetail_ST) == 0x64c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _AlphaDetail_Opacity) == 0x650, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _AlphaDetail_WorldSpace) == 0x654, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _MaskMapToggle) == 0x658, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _MaskMap) == 0x65c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _MaskMap_ST) == 0x660, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _MaskMap_WH) == 0x664, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _LavaLampToggle) == 0x668, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _GradientMapToggle) == 0x66c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _GradientMap) == 0x670, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _DoTextureRotation) == 0x674, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _RotateAngle) == 0x678, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _RotateAnim) == 0x67c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _UseWaveWarp) == 0x680, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _WaveAmplitude) == 0x684, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _WaveFrequency) == 0x688, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _WaveScale) == 0x68c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _WaveTimeScale) == 0x690, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _ReflectToggle) == 0x694, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _ReflectBoxProjectToggle) == 0x698, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _ReflectBoxCubePos) == 0x69c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _ReflectBoxSize) == 0x6a0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _ReflectBoxRotation) == 0x6a4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _ReflectMatcapToggle) == 0x6a8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _ReflectMatcapPerspToggle) == 0x6ac, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _ReflectNormalToggle) == 0x6b0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _ReflectTex) == 0x6b4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _ReflectNormalTex) == 0x6b8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _ReflectAlbedoTint) == 0x6bc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _ReflectTint) == 0x6c0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _ReflectOpacity) == 0x6c4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _ReflectExposure) == 0x6c8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _ReflectOffset) == 0x6cc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _ReflectScale) == 0x6d0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _ReflectRotate) == 0x6d4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _HalfLambertToggle) == 0x6d8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _ParallaxPlanarToggle) == 0x6dc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _ParallaxToggle) == 0x6e0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _ParallaxAAToggle) == 0x6e4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _ParallaxAABias) == 0x6e8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _DepthMap) == 0x6ec, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _ParallaxAmplitude) == 0x6f0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _ParallaxSamplesMinMax) == 0x6f4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _UvShiftToggle) == 0x6f8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _UvShiftSteps) == 0x6fc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _UvShiftRate) == 0x700, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _UvShiftOffset) == 0x704, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _UseGridEffect) == 0x708, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _UseCrystalEffect) == 0x70c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _CrystalPower) == 0x710, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _CrystalRimColor) == 0x714, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _LiquidVolume) == 0x718, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _LiquidFill) == 0x71c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _LiquidFillNormal) == 0x720, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _LiquidSurfaceColor) == 0x724, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _LiquidSwayX) == 0x728, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _LiquidSwayY) == 0x72c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _LiquidContainer) == 0x730, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _LiquidPlanePosition) == 0x734, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _LiquidPlaneNormal) == 0x738, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _VertexFlapToggle) == 0x73c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _VertexFlapAxis) == 0x740, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _VertexFlapDegreesMinMax) == 0x744, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _VertexFlapSpeed) == 0x748, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _VertexFlapPhaseOffset) == 0x74c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _VertexWaveToggle) == 0x750, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _VertexWaveDebug) == 0x754, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _VertexWaveEnd) == 0x758, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _VertexWaveParams) == 0x75c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _VertexWaveFalloff) == 0x760, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _VertexWaveSphereMask) == 0x764, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _VertexWavePhaseOffset) == 0x768, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _VertexWaveAxes) == 0x76c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _VertexRotateToggle) == 0x770, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _VertexRotateAngles) == 0x774, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _VertexRotateAnim) == 0x778, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _VertexLightToggle) == 0x77c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _InnerGlowOn) == 0x780, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _InnerGlowColor) == 0x784, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _InnerGlowParams) == 0x788, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _InnerGlowTap) == 0x78c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _InnerGlowSine) == 0x790, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _InnerGlowSinePeriod) == 0x794, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _InnerGlowSinePhaseShift) == 0x798, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _StealthEffectOn) == 0x79c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _UseEyeTracking) == 0x7a0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _EyeTileOffsetUV) == 0x7a4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _EyeOverrideUV) == 0x7a8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _EyeOverrideUVTransform) == 0x7ac, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _UseMouthFlap) == 0x7b0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _MouthMap) == 0x7b4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _MouthMap_ST) == 0x7b8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _UseVertexColor) == 0x7bc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _WaterEffect) == 0x7c0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _HeightBasedWaterEffect) == 0x7c4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _WaterCaustics) == 0x7c8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _UseDayNightLightmap) == 0x7cc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _DAY_CYCLE_BRIGHTNESS_) == 0x7d0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _UseWeatherMap) == 0x7d4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _WeatherMap) == 0x7d8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _WeatherMapDissolveEdgeSize) == 0x7dc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _UseSpecular) == 0x7e0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _UseSpecularAlphaChannel) == 0x7e4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _Smoothness) == 0x7e8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _UseSpecHighlight) == 0x7ec, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _SpecularDir) == 0x7f0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _SpecularPowerIntensity) == 0x7f4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _SpecularColor) == 0x7f8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _SpecularUseDiffuseColor) == 0x7fc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _EmissionToggle) == 0x800, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _EmissionColor) == 0x804, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _EmissionMap) == 0x808, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _EmissionMaskByBaseMapAlpha) == 0x80c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _EmissionUVScrollSpeed) == 0x810, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _EmissionDissolveProgress) == 0x814, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _EmissionDissolveAnimation) == 0x818, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _EmissionDissolveEdgeSize) == 0x81c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _EmissionIntensityInDynamic) == 0x820, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _EmissionUseUVWaveWarp) == 0x824, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _GreyZoneException) == 0x828, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _Cull) == 0x82c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _StencilReference) == 0x830, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _StencilComparison) == 0x834, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _StencilPassFront) == 0x838, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _USE_DEFORM_MAP) == 0x83c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _DeformMap) == 0x840, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _DeformMapIntensity) == 0x844, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _DeformMapMaskByVertColorRAmount) == 0x848, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _DeformMapScrollSpeed) == 0x84c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _DeformMapUV0Influence) == 0x850, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _DeformMapObjectSpaceOffsetsU) == 0x854, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _DeformMapObjectSpaceOffsetsV) == 0x858, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _DeformMapWorldSpaceOffsetsU) == 0x85c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _DeformMapWorldSpaceOffsetsV) == 0x860, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _RotateOnYAxisBySinTime) == 0x864, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _USE_TEX_ARRAY_ATLAS) == 0x868, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _BaseMap_Atlas) == 0x86c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _BaseMap_AtlasSlice) == 0x870, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _BaseMap_AtlasSliceSource) == 0x874, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _EmissionMap_Atlas) == 0x878, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _EmissionMap_AtlasSlice) == 0x87c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _DeformMap_Atlas) == 0x880, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _DeformMap_AtlasSlice) == 0x884, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _WeatherMap_Atlas) == 0x888, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _WeatherMap_AtlasSlice) == 0x88c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _DEBUG_PAWN_DATA) == 0x890, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _SrcBlend) == 0x894, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _DstBlend) == 0x898, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _SrcBlendAlpha) == 0x89c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _DstBlendAlpha) == 0x8a0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _ZWrite) == 0x8a4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _AlphaToMask) == 0x8a8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _Color) == 0x8ac, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _Surface) == 0x8b0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _Metallic) == 0x8b4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _SpecColor) == 0x8b8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _DayNightLightmapArray) == 0x8bc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _DayNightLightmapArray_ST) == 0x8c0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::UberShaderMatUsedProps, _DayNightLightmapArray_AtlasSlice) == 0x8c4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::UberShaderMatUsedProps) == 0x8c8, "Size mismatch!");

} // namespace end def GlobalNamespace
