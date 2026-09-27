#pragma once
// IWYU pragma private; include "GlobalNamespace/UberShader.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__UberShaderProperty_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(UberShader)
namespace GlobalNamespace {
class UberShaderProperty;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Shader;
}
// Forward declare root types
namespace GlobalNamespace {
class UberShader;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::UberShader*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UberShader*, "", "UberShader");
// Dependencies System.Object, UberShaderProperty
namespace GlobalNamespace {
// Is value type: false
// CS Name: UberShader
class CORDL_TYPE UberShader : public ::System::Object {
public:
// Declarations
/// @brief Field AChannelColor, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_AChannelColor, put=setStaticF_AChannelColor)) ::GlobalNamespace::UberShaderProperty*  AChannelColor;

/// @brief Field AlphaDetailToggle, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_AlphaDetailToggle, put=setStaticF_AlphaDetailToggle)) ::GlobalNamespace::UberShaderProperty*  AlphaDetailToggle;

/// @brief Field AlphaDetail_Opacity, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_AlphaDetail_Opacity, put=setStaticF_AlphaDetail_Opacity)) ::GlobalNamespace::UberShaderProperty*  AlphaDetail_Opacity;

/// @brief Field AlphaDetail_ST, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_AlphaDetail_ST, put=setStaticF_AlphaDetail_ST)) ::GlobalNamespace::UberShaderProperty*  AlphaDetail_ST;

/// @brief Field AlphaDetail_WorldSpace, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_AlphaDetail_WorldSpace, put=setStaticF_AlphaDetail_WorldSpace)) ::GlobalNamespace::UberShaderProperty*  AlphaDetail_WorldSpace;

/// @brief Field AlphaToMask, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_AlphaToMask, put=setStaticF_AlphaToMask)) ::GlobalNamespace::UberShaderProperty*  AlphaToMask;

/// @brief Field BChannelColor, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_BChannelColor, put=setStaticF_BChannelColor)) ::GlobalNamespace::UberShaderProperty*  BChannelColor;

/// @brief Field BaseColor, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_BaseColor, put=setStaticF_BaseColor)) ::GlobalNamespace::UberShaderProperty*  BaseColor;

/// @brief Field BaseMap, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_BaseMap, put=setStaticF_BaseMap)) ::GlobalNamespace::UberShaderProperty*  BaseMap;

/// @brief Field BaseMap_Atlas, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_BaseMap_Atlas, put=setStaticF_BaseMap_Atlas)) ::GlobalNamespace::UberShaderProperty*  BaseMap_Atlas;

/// @brief Field BaseMap_AtlasSlice, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_BaseMap_AtlasSlice, put=setStaticF_BaseMap_AtlasSlice)) ::GlobalNamespace::UberShaderProperty*  BaseMap_AtlasSlice;

/// @brief Field BaseMap_WH, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_BaseMap_WH, put=setStaticF_BaseMap_WH)) ::GlobalNamespace::UberShaderProperty*  BaseMap_WH;

/// @brief Field Color, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Color, put=setStaticF_Color)) ::GlobalNamespace::UberShaderProperty*  Color;

/// @brief Field ColorSource, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ColorSource, put=setStaticF_ColorSource)) ::GlobalNamespace::UberShaderProperty*  ColorSource;

/// @brief Field CrystalPower, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_CrystalPower, put=setStaticF_CrystalPower)) ::GlobalNamespace::UberShaderProperty*  CrystalPower;

/// @brief Field CrystalRimColor, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_CrystalRimColor, put=setStaticF_CrystalRimColor)) ::GlobalNamespace::UberShaderProperty*  CrystalRimColor;

/// @brief Field Cull, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Cull, put=setStaticF_Cull)) ::GlobalNamespace::UberShaderProperty*  Cull;

/// @brief Field Cutoff, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Cutoff, put=setStaticF_Cutoff)) ::GlobalNamespace::UberShaderProperty*  Cutoff;

/// @brief Field DEBUG_PAWN_DATA, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_DEBUG_PAWN_DATA, put=setStaticF_DEBUG_PAWN_DATA)) ::GlobalNamespace::UberShaderProperty*  DEBUG_PAWN_DATA;

/// @brief Field DayNightLightmapArray, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_DayNightLightmapArray, put=setStaticF_DayNightLightmapArray)) ::GlobalNamespace::UberShaderProperty*  DayNightLightmapArray;

/// @brief Field DayNightLightmapArray_AtlasSlice, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_DayNightLightmapArray_AtlasSlice, put=setStaticF_DayNightLightmapArray_AtlasSlice)) ::GlobalNamespace::UberShaderProperty*  DayNightLightmapArray_AtlasSlice;

/// @brief Field DeformMap, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_DeformMap, put=setStaticF_DeformMap)) ::GlobalNamespace::UberShaderProperty*  DeformMap;

/// @brief Field DeformMapIntensity, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_DeformMapIntensity, put=setStaticF_DeformMapIntensity)) ::GlobalNamespace::UberShaderProperty*  DeformMapIntensity;

/// @brief Field DeformMapMaskByVertColorRAmount, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_DeformMapMaskByVertColorRAmount, put=setStaticF_DeformMapMaskByVertColorRAmount)) ::GlobalNamespace::UberShaderProperty*  DeformMapMaskByVertColorRAmount;

/// @brief Field DeformMapObjectSpaceOffsetsU, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_DeformMapObjectSpaceOffsetsU, put=setStaticF_DeformMapObjectSpaceOffsetsU)) ::GlobalNamespace::UberShaderProperty*  DeformMapObjectSpaceOffsetsU;

/// @brief Field DeformMapObjectSpaceOffsetsV, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_DeformMapObjectSpaceOffsetsV, put=setStaticF_DeformMapObjectSpaceOffsetsV)) ::GlobalNamespace::UberShaderProperty*  DeformMapObjectSpaceOffsetsV;

/// @brief Field DeformMapScrollSpeed, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_DeformMapScrollSpeed, put=setStaticF_DeformMapScrollSpeed)) ::GlobalNamespace::UberShaderProperty*  DeformMapScrollSpeed;

/// @brief Field DeformMapUV0Influence, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_DeformMapUV0Influence, put=setStaticF_DeformMapUV0Influence)) ::GlobalNamespace::UberShaderProperty*  DeformMapUV0Influence;

/// @brief Field DeformMapWorldSpaceOffsetsU, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_DeformMapWorldSpaceOffsetsU, put=setStaticF_DeformMapWorldSpaceOffsetsU)) ::GlobalNamespace::UberShaderProperty*  DeformMapWorldSpaceOffsetsU;

/// @brief Field DeformMapWorldSpaceOffsetsV, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_DeformMapWorldSpaceOffsetsV, put=setStaticF_DeformMapWorldSpaceOffsetsV)) ::GlobalNamespace::UberShaderProperty*  DeformMapWorldSpaceOffsetsV;

/// @brief Field DeformMap_Atlas, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_DeformMap_Atlas, put=setStaticF_DeformMap_Atlas)) ::GlobalNamespace::UberShaderProperty*  DeformMap_Atlas;

/// @brief Field DeformMap_AtlasSlice, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_DeformMap_AtlasSlice, put=setStaticF_DeformMap_AtlasSlice)) ::GlobalNamespace::UberShaderProperty*  DeformMap_AtlasSlice;

/// @brief Field DepthMap, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_DepthMap, put=setStaticF_DepthMap)) ::GlobalNamespace::UberShaderProperty*  DepthMap;

/// @brief Field DoTextureRotation, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_DoTextureRotation, put=setStaticF_DoTextureRotation)) ::GlobalNamespace::UberShaderProperty*  DoTextureRotation;

/// @brief Field DstBlend, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_DstBlend, put=setStaticF_DstBlend)) ::GlobalNamespace::UberShaderProperty*  DstBlend;

/// @brief Field DstBlendAlpha, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_DstBlendAlpha, put=setStaticF_DstBlendAlpha)) ::GlobalNamespace::UberShaderProperty*  DstBlendAlpha;

/// @brief Field EmissionColor, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_EmissionColor, put=setStaticF_EmissionColor)) ::GlobalNamespace::UberShaderProperty*  EmissionColor;

/// @brief Field EmissionDissolveAnimation, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_EmissionDissolveAnimation, put=setStaticF_EmissionDissolveAnimation)) ::GlobalNamespace::UberShaderProperty*  EmissionDissolveAnimation;

/// @brief Field EmissionDissolveEdgeSize, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_EmissionDissolveEdgeSize, put=setStaticF_EmissionDissolveEdgeSize)) ::GlobalNamespace::UberShaderProperty*  EmissionDissolveEdgeSize;

/// @brief Field EmissionDissolveProgress, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_EmissionDissolveProgress, put=setStaticF_EmissionDissolveProgress)) ::GlobalNamespace::UberShaderProperty*  EmissionDissolveProgress;

/// @brief Field EmissionMap, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_EmissionMap, put=setStaticF_EmissionMap)) ::GlobalNamespace::UberShaderProperty*  EmissionMap;

/// @brief Field EmissionMap_Atlas, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_EmissionMap_Atlas, put=setStaticF_EmissionMap_Atlas)) ::GlobalNamespace::UberShaderProperty*  EmissionMap_Atlas;

/// @brief Field EmissionMap_AtlasSlice, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_EmissionMap_AtlasSlice, put=setStaticF_EmissionMap_AtlasSlice)) ::GlobalNamespace::UberShaderProperty*  EmissionMap_AtlasSlice;

/// @brief Field EmissionMaskByBaseMapAlpha, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_EmissionMaskByBaseMapAlpha, put=setStaticF_EmissionMaskByBaseMapAlpha)) ::GlobalNamespace::UberShaderProperty*  EmissionMaskByBaseMapAlpha;

/// @brief Field EmissionToggle, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_EmissionToggle, put=setStaticF_EmissionToggle)) ::GlobalNamespace::UberShaderProperty*  EmissionToggle;

/// @brief Field EmissionUVScrollSpeed, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_EmissionUVScrollSpeed, put=setStaticF_EmissionUVScrollSpeed)) ::GlobalNamespace::UberShaderProperty*  EmissionUVScrollSpeed;

/// @brief Field EmissionUseUVWaveWarp, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_EmissionUseUVWaveWarp, put=setStaticF_EmissionUseUVWaveWarp)) ::GlobalNamespace::UberShaderProperty*  EmissionUseUVWaveWarp;

/// @brief Field EyeOverrideUV, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_EyeOverrideUV, put=setStaticF_EyeOverrideUV)) ::GlobalNamespace::UberShaderProperty*  EyeOverrideUV;

/// @brief Field EyeOverrideUVTransform, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_EyeOverrideUVTransform, put=setStaticF_EyeOverrideUVTransform)) ::GlobalNamespace::UberShaderProperty*  EyeOverrideUVTransform;

/// @brief Field EyeTileOffsetUV, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_EyeTileOffsetUV, put=setStaticF_EyeTileOffsetUV)) ::GlobalNamespace::UberShaderProperty*  EyeTileOffsetUV;

/// @brief Field GChannelColor, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_GChannelColor, put=setStaticF_GChannelColor)) ::GlobalNamespace::UberShaderProperty*  GChannelColor;

/// @brief Field GradientMap, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_GradientMap, put=setStaticF_GradientMap)) ::GlobalNamespace::UberShaderProperty*  GradientMap;

/// @brief Field GradientMapToggle, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_GradientMapToggle, put=setStaticF_GradientMapToggle)) ::GlobalNamespace::UberShaderProperty*  GradientMapToggle;

/// @brief Field GreyZoneException, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_GreyZoneException, put=setStaticF_GreyZoneException)) ::GlobalNamespace::UberShaderProperty*  GreyZoneException;

/// @brief Field HalfLambertToggle, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_HalfLambertToggle, put=setStaticF_HalfLambertToggle)) ::GlobalNamespace::UberShaderProperty*  HalfLambertToggle;

/// @brief Field HeightBasedWaterEffect, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_HeightBasedWaterEffect, put=setStaticF_HeightBasedWaterEffect)) ::GlobalNamespace::UberShaderProperty*  HeightBasedWaterEffect;

/// @brief Field InnerGlowColor, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_InnerGlowColor, put=setStaticF_InnerGlowColor)) ::GlobalNamespace::UberShaderProperty*  InnerGlowColor;

/// @brief Field InnerGlowOn, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_InnerGlowOn, put=setStaticF_InnerGlowOn)) ::GlobalNamespace::UberShaderProperty*  InnerGlowOn;

/// @brief Field InnerGlowParams, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_InnerGlowParams, put=setStaticF_InnerGlowParams)) ::GlobalNamespace::UberShaderProperty*  InnerGlowParams;

/// @brief Field InnerGlowSine, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_InnerGlowSine, put=setStaticF_InnerGlowSine)) ::GlobalNamespace::UberShaderProperty*  InnerGlowSine;

/// @brief Field InnerGlowSinePeriod, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_InnerGlowSinePeriod, put=setStaticF_InnerGlowSinePeriod)) ::GlobalNamespace::UberShaderProperty*  InnerGlowSinePeriod;

/// @brief Field InnerGlowSinePhaseShift, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_InnerGlowSinePhaseShift, put=setStaticF_InnerGlowSinePhaseShift)) ::GlobalNamespace::UberShaderProperty*  InnerGlowSinePhaseShift;

/// @brief Field InnerGlowTap, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_InnerGlowTap, put=setStaticF_InnerGlowTap)) ::GlobalNamespace::UberShaderProperty*  InnerGlowTap;

/// @brief Field LavaLampToggle, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_LavaLampToggle, put=setStaticF_LavaLampToggle)) ::GlobalNamespace::UberShaderProperty*  LavaLampToggle;

/// @brief Field LiquidContainer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_LiquidContainer, put=setStaticF_LiquidContainer)) ::GlobalNamespace::UberShaderProperty*  LiquidContainer;

/// @brief Field LiquidFill, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_LiquidFill, put=setStaticF_LiquidFill)) ::GlobalNamespace::UberShaderProperty*  LiquidFill;

/// @brief Field LiquidFillNormal, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_LiquidFillNormal, put=setStaticF_LiquidFillNormal)) ::GlobalNamespace::UberShaderProperty*  LiquidFillNormal;

/// @brief Field LiquidPlaneNormal, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_LiquidPlaneNormal, put=setStaticF_LiquidPlaneNormal)) ::GlobalNamespace::UberShaderProperty*  LiquidPlaneNormal;

/// @brief Field LiquidPlanePosition, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_LiquidPlanePosition, put=setStaticF_LiquidPlanePosition)) ::GlobalNamespace::UberShaderProperty*  LiquidPlanePosition;

/// @brief Field LiquidSurfaceColor, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_LiquidSurfaceColor, put=setStaticF_LiquidSurfaceColor)) ::GlobalNamespace::UberShaderProperty*  LiquidSurfaceColor;

/// @brief Field LiquidSwayX, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_LiquidSwayX, put=setStaticF_LiquidSwayX)) ::GlobalNamespace::UberShaderProperty*  LiquidSwayX;

/// @brief Field LiquidSwayY, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_LiquidSwayY, put=setStaticF_LiquidSwayY)) ::GlobalNamespace::UberShaderProperty*  LiquidSwayY;

/// @brief Field LiquidVolume, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_LiquidVolume, put=setStaticF_LiquidVolume)) ::GlobalNamespace::UberShaderProperty*  LiquidVolume;

/// @brief Field MaskMap, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_MaskMap, put=setStaticF_MaskMap)) ::GlobalNamespace::UberShaderProperty*  MaskMap;

/// @brief Field MaskMapToggle, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_MaskMapToggle, put=setStaticF_MaskMapToggle)) ::GlobalNamespace::UberShaderProperty*  MaskMapToggle;

/// @brief Field MaskMap_WH, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_MaskMap_WH, put=setStaticF_MaskMap_WH)) ::GlobalNamespace::UberShaderProperty*  MaskMap_WH;

/// @brief Field Metallic, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Metallic, put=setStaticF_Metallic)) ::GlobalNamespace::UberShaderProperty*  Metallic;

/// @brief Field MouthMap, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_MouthMap, put=setStaticF_MouthMap)) ::GlobalNamespace::UberShaderProperty*  MouthMap;

/// @brief Field MouthMap_Atlas, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_MouthMap_Atlas, put=setStaticF_MouthMap_Atlas)) ::GlobalNamespace::UberShaderProperty*  MouthMap_Atlas;

/// @brief Field MouthMap_AtlasSlice, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_MouthMap_AtlasSlice, put=setStaticF_MouthMap_AtlasSlice)) ::GlobalNamespace::UberShaderProperty*  MouthMap_AtlasSlice;

/// @brief Field ParallaxAABias, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ParallaxAABias, put=setStaticF_ParallaxAABias)) ::GlobalNamespace::UberShaderProperty*  ParallaxAABias;

/// @brief Field ParallaxAAToggle, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ParallaxAAToggle, put=setStaticF_ParallaxAAToggle)) ::GlobalNamespace::UberShaderProperty*  ParallaxAAToggle;

/// @brief Field ParallaxAmplitude, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ParallaxAmplitude, put=setStaticF_ParallaxAmplitude)) ::GlobalNamespace::UberShaderProperty*  ParallaxAmplitude;

/// @brief Field ParallaxPlanarToggle, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ParallaxPlanarToggle, put=setStaticF_ParallaxPlanarToggle)) ::GlobalNamespace::UberShaderProperty*  ParallaxPlanarToggle;

/// @brief Field ParallaxSamplesMinMax, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ParallaxSamplesMinMax, put=setStaticF_ParallaxSamplesMinMax)) ::GlobalNamespace::UberShaderProperty*  ParallaxSamplesMinMax;

/// @brief Field ParallaxToggle, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ParallaxToggle, put=setStaticF_ParallaxToggle)) ::GlobalNamespace::UberShaderProperty*  ParallaxToggle;

/// @brief Field ReflectAlbedoTint, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ReflectAlbedoTint, put=setStaticF_ReflectAlbedoTint)) ::GlobalNamespace::UberShaderProperty*  ReflectAlbedoTint;

/// @brief Field ReflectBoxCubePos, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ReflectBoxCubePos, put=setStaticF_ReflectBoxCubePos)) ::GlobalNamespace::UberShaderProperty*  ReflectBoxCubePos;

/// @brief Field ReflectBoxProjectToggle, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ReflectBoxProjectToggle, put=setStaticF_ReflectBoxProjectToggle)) ::GlobalNamespace::UberShaderProperty*  ReflectBoxProjectToggle;

/// @brief Field ReflectBoxRotation, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ReflectBoxRotation, put=setStaticF_ReflectBoxRotation)) ::GlobalNamespace::UberShaderProperty*  ReflectBoxRotation;

/// @brief Field ReflectBoxSize, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ReflectBoxSize, put=setStaticF_ReflectBoxSize)) ::GlobalNamespace::UberShaderProperty*  ReflectBoxSize;

/// @brief Field ReflectExposure, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ReflectExposure, put=setStaticF_ReflectExposure)) ::GlobalNamespace::UberShaderProperty*  ReflectExposure;

/// @brief Field ReflectMatcapPerspToggle, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ReflectMatcapPerspToggle, put=setStaticF_ReflectMatcapPerspToggle)) ::GlobalNamespace::UberShaderProperty*  ReflectMatcapPerspToggle;

/// @brief Field ReflectMatcapToggle, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ReflectMatcapToggle, put=setStaticF_ReflectMatcapToggle)) ::GlobalNamespace::UberShaderProperty*  ReflectMatcapToggle;

/// @brief Field ReflectNormalTex, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ReflectNormalTex, put=setStaticF_ReflectNormalTex)) ::GlobalNamespace::UberShaderProperty*  ReflectNormalTex;

/// @brief Field ReflectNormalToggle, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ReflectNormalToggle, put=setStaticF_ReflectNormalToggle)) ::GlobalNamespace::UberShaderProperty*  ReflectNormalToggle;

/// @brief Field ReflectOffset, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ReflectOffset, put=setStaticF_ReflectOffset)) ::GlobalNamespace::UberShaderProperty*  ReflectOffset;

/// @brief Field ReflectOpacity, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ReflectOpacity, put=setStaticF_ReflectOpacity)) ::GlobalNamespace::UberShaderProperty*  ReflectOpacity;

/// @brief Field ReflectRotate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ReflectRotate, put=setStaticF_ReflectRotate)) ::GlobalNamespace::UberShaderProperty*  ReflectRotate;

/// @brief Field ReflectScale, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ReflectScale, put=setStaticF_ReflectScale)) ::GlobalNamespace::UberShaderProperty*  ReflectScale;

/// @brief Field ReflectTex, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ReflectTex, put=setStaticF_ReflectTex)) ::GlobalNamespace::UberShaderProperty*  ReflectTex;

/// @brief Field ReflectTint, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ReflectTint, put=setStaticF_ReflectTint)) ::GlobalNamespace::UberShaderProperty*  ReflectTint;

/// @brief Field ReflectToggle, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ReflectToggle, put=setStaticF_ReflectToggle)) ::GlobalNamespace::UberShaderProperty*  ReflectToggle;

/// @brief Field RotateAngle, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_RotateAngle, put=setStaticF_RotateAngle)) ::GlobalNamespace::UberShaderProperty*  RotateAngle;

/// @brief Field RotateAnim, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_RotateAnim, put=setStaticF_RotateAnim)) ::GlobalNamespace::UberShaderProperty*  RotateAnim;

/// @brief Field RotateOnYAxisBySinTime, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_RotateOnYAxisBySinTime, put=setStaticF_RotateOnYAxisBySinTime)) ::GlobalNamespace::UberShaderProperty*  RotateOnYAxisBySinTime;

/// @brief Field SingleLightmap, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_SingleLightmap, put=setStaticF_SingleLightmap)) ::GlobalNamespace::UberShaderProperty*  SingleLightmap;

/// @brief Field Smoothness, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Smoothness, put=setStaticF_Smoothness)) ::GlobalNamespace::UberShaderProperty*  Smoothness;

/// @brief Field SpecColor, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_SpecColor, put=setStaticF_SpecColor)) ::GlobalNamespace::UberShaderProperty*  SpecColor;

/// @brief Field SpecularColor, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_SpecularColor, put=setStaticF_SpecularColor)) ::GlobalNamespace::UberShaderProperty*  SpecularColor;

/// @brief Field SpecularDir, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_SpecularDir, put=setStaticF_SpecularDir)) ::GlobalNamespace::UberShaderProperty*  SpecularDir;

/// @brief Field SpecularPowerIntensity, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_SpecularPowerIntensity, put=setStaticF_SpecularPowerIntensity)) ::GlobalNamespace::UberShaderProperty*  SpecularPowerIntensity;

/// @brief Field SpecularUseDiffuseColor, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_SpecularUseDiffuseColor, put=setStaticF_SpecularUseDiffuseColor)) ::GlobalNamespace::UberShaderProperty*  SpecularUseDiffuseColor;

/// @brief Field SrcBlend, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_SrcBlend, put=setStaticF_SrcBlend)) ::GlobalNamespace::UberShaderProperty*  SrcBlend;

/// @brief Field SrcBlendAlpha, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_SrcBlendAlpha, put=setStaticF_SrcBlendAlpha)) ::GlobalNamespace::UberShaderProperty*  SrcBlendAlpha;

/// @brief Field StealthEffectOn, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_StealthEffectOn, put=setStaticF_StealthEffectOn)) ::GlobalNamespace::UberShaderProperty*  StealthEffectOn;

/// @brief Field StencilComparison, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_StencilComparison, put=setStaticF_StencilComparison)) ::GlobalNamespace::UberShaderProperty*  StencilComparison;

/// @brief Field StencilPassFront, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_StencilPassFront, put=setStaticF_StencilPassFront)) ::GlobalNamespace::UberShaderProperty*  StencilPassFront;

/// @brief Field StencilReference, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_StencilReference, put=setStaticF_StencilReference)) ::GlobalNamespace::UberShaderProperty*  StencilReference;

/// @brief Field Surface, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_Surface, put=setStaticF_Surface)) ::GlobalNamespace::UberShaderProperty*  Surface;

/// @brief Field TexelSnapToggle, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_TexelSnapToggle, put=setStaticF_TexelSnapToggle)) ::GlobalNamespace::UberShaderProperty*  TexelSnapToggle;

/// @brief Field TexelSnap_Factor, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_TexelSnap_Factor, put=setStaticF_TexelSnap_Factor)) ::GlobalNamespace::UberShaderProperty*  TexelSnap_Factor;

/// @brief Field TransparencyMode, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_TransparencyMode, put=setStaticF_TransparencyMode)) ::GlobalNamespace::UberShaderProperty*  TransparencyMode;

/// @brief Field USE_DEFORM_MAP, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_USE_DEFORM_MAP, put=setStaticF_USE_DEFORM_MAP)) ::GlobalNamespace::UberShaderProperty*  USE_DEFORM_MAP;

/// @brief Field USE_TEX_ARRAY_ATLAS, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_USE_TEX_ARRAY_ATLAS, put=setStaticF_USE_TEX_ARRAY_ATLAS)) ::GlobalNamespace::UberShaderProperty*  USE_TEX_ARRAY_ATLAS;

/// @brief Field UVSource, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_UVSource, put=setStaticF_UVSource)) ::GlobalNamespace::UberShaderProperty*  UVSource;

/// @brief Field UseCrystalEffect, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_UseCrystalEffect, put=setStaticF_UseCrystalEffect)) ::GlobalNamespace::UberShaderProperty*  UseCrystalEffect;

/// @brief Field UseDayNightLightmap, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_UseDayNightLightmap, put=setStaticF_UseDayNightLightmap)) ::GlobalNamespace::UberShaderProperty*  UseDayNightLightmap;

/// @brief Field UseEyeTracking, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_UseEyeTracking, put=setStaticF_UseEyeTracking)) ::GlobalNamespace::UberShaderProperty*  UseEyeTracking;

/// @brief Field UseGridEffect, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_UseGridEffect, put=setStaticF_UseGridEffect)) ::GlobalNamespace::UberShaderProperty*  UseGridEffect;

/// @brief Field UseMouthFlap, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_UseMouthFlap, put=setStaticF_UseMouthFlap)) ::GlobalNamespace::UberShaderProperty*  UseMouthFlap;

/// @brief Field UseSpecHighlight, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_UseSpecHighlight, put=setStaticF_UseSpecHighlight)) ::GlobalNamespace::UberShaderProperty*  UseSpecHighlight;

/// @brief Field UseSpecular, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_UseSpecular, put=setStaticF_UseSpecular)) ::GlobalNamespace::UberShaderProperty*  UseSpecular;

/// @brief Field UseSpecularAlphaChannel, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_UseSpecularAlphaChannel, put=setStaticF_UseSpecularAlphaChannel)) ::GlobalNamespace::UberShaderProperty*  UseSpecularAlphaChannel;

/// @brief Field UseVertexColor, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_UseVertexColor, put=setStaticF_UseVertexColor)) ::GlobalNamespace::UberShaderProperty*  UseVertexColor;

/// @brief Field UseWaveWarp, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_UseWaveWarp, put=setStaticF_UseWaveWarp)) ::GlobalNamespace::UberShaderProperty*  UseWaveWarp;

/// @brief Field UseWeatherMap, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_UseWeatherMap, put=setStaticF_UseWeatherMap)) ::GlobalNamespace::UberShaderProperty*  UseWeatherMap;

/// @brief Field UvShiftOffset, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_UvShiftOffset, put=setStaticF_UvShiftOffset)) ::GlobalNamespace::UberShaderProperty*  UvShiftOffset;

/// @brief Field UvShiftRate, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_UvShiftRate, put=setStaticF_UvShiftRate)) ::GlobalNamespace::UberShaderProperty*  UvShiftRate;

/// @brief Field UvShiftSteps, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_UvShiftSteps, put=setStaticF_UvShiftSteps)) ::GlobalNamespace::UberShaderProperty*  UvShiftSteps;

/// @brief Field UvShiftToggle, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_UvShiftToggle, put=setStaticF_UvShiftToggle)) ::GlobalNamespace::UberShaderProperty*  UvShiftToggle;

/// @brief Field VertexFlapAxis, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_VertexFlapAxis, put=setStaticF_VertexFlapAxis)) ::GlobalNamespace::UberShaderProperty*  VertexFlapAxis;

/// @brief Field VertexFlapDegreesMinMax, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_VertexFlapDegreesMinMax, put=setStaticF_VertexFlapDegreesMinMax)) ::GlobalNamespace::UberShaderProperty*  VertexFlapDegreesMinMax;

/// @brief Field VertexFlapPhaseOffset, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_VertexFlapPhaseOffset, put=setStaticF_VertexFlapPhaseOffset)) ::GlobalNamespace::UberShaderProperty*  VertexFlapPhaseOffset;

/// @brief Field VertexFlapSpeed, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_VertexFlapSpeed, put=setStaticF_VertexFlapSpeed)) ::GlobalNamespace::UberShaderProperty*  VertexFlapSpeed;

/// @brief Field VertexFlapToggle, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_VertexFlapToggle, put=setStaticF_VertexFlapToggle)) ::GlobalNamespace::UberShaderProperty*  VertexFlapToggle;

/// @brief Field VertexLightToggle, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_VertexLightToggle, put=setStaticF_VertexLightToggle)) ::GlobalNamespace::UberShaderProperty*  VertexLightToggle;

/// @brief Field VertexRotateAngles, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_VertexRotateAngles, put=setStaticF_VertexRotateAngles)) ::GlobalNamespace::UberShaderProperty*  VertexRotateAngles;

/// @brief Field VertexRotateAnim, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_VertexRotateAnim, put=setStaticF_VertexRotateAnim)) ::GlobalNamespace::UberShaderProperty*  VertexRotateAnim;

/// @brief Field VertexRotateToggle, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_VertexRotateToggle, put=setStaticF_VertexRotateToggle)) ::GlobalNamespace::UberShaderProperty*  VertexRotateToggle;

/// @brief Field VertexWaveAxes, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_VertexWaveAxes, put=setStaticF_VertexWaveAxes)) ::GlobalNamespace::UberShaderProperty*  VertexWaveAxes;

/// @brief Field VertexWaveDebug, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_VertexWaveDebug, put=setStaticF_VertexWaveDebug)) ::GlobalNamespace::UberShaderProperty*  VertexWaveDebug;

/// @brief Field VertexWaveEnd, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_VertexWaveEnd, put=setStaticF_VertexWaveEnd)) ::GlobalNamespace::UberShaderProperty*  VertexWaveEnd;

/// @brief Field VertexWaveFalloff, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_VertexWaveFalloff, put=setStaticF_VertexWaveFalloff)) ::GlobalNamespace::UberShaderProperty*  VertexWaveFalloff;

/// @brief Field VertexWaveParams, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_VertexWaveParams, put=setStaticF_VertexWaveParams)) ::GlobalNamespace::UberShaderProperty*  VertexWaveParams;

/// @brief Field VertexWavePhaseOffset, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_VertexWavePhaseOffset, put=setStaticF_VertexWavePhaseOffset)) ::GlobalNamespace::UberShaderProperty*  VertexWavePhaseOffset;

/// @brief Field VertexWaveSphereMask, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_VertexWaveSphereMask, put=setStaticF_VertexWaveSphereMask)) ::GlobalNamespace::UberShaderProperty*  VertexWaveSphereMask;

/// @brief Field VertexWaveToggle, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_VertexWaveToggle, put=setStaticF_VertexWaveToggle)) ::GlobalNamespace::UberShaderProperty*  VertexWaveToggle;

/// @brief Field WaterEffect, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_WaterEffect, put=setStaticF_WaterEffect)) ::GlobalNamespace::UberShaderProperty*  WaterEffect;

/// @brief Field WaveAmplitude, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_WaveAmplitude, put=setStaticF_WaveAmplitude)) ::GlobalNamespace::UberShaderProperty*  WaveAmplitude;

/// @brief Field WaveFrequency, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_WaveFrequency, put=setStaticF_WaveFrequency)) ::GlobalNamespace::UberShaderProperty*  WaveFrequency;

/// @brief Field WaveScale, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_WaveScale, put=setStaticF_WaveScale)) ::GlobalNamespace::UberShaderProperty*  WaveScale;

/// @brief Field WaveTimeScale, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_WaveTimeScale, put=setStaticF_WaveTimeScale)) ::GlobalNamespace::UberShaderProperty*  WaveTimeScale;

/// @brief Field WeatherMap, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_WeatherMap, put=setStaticF_WeatherMap)) ::GlobalNamespace::UberShaderProperty*  WeatherMap;

/// @brief Field WeatherMapDissolveEdgeSize, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_WeatherMapDissolveEdgeSize, put=setStaticF_WeatherMapDissolveEdgeSize)) ::GlobalNamespace::UberShaderProperty*  WeatherMapDissolveEdgeSize;

/// @brief Field ZFightOffset, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ZFightOffset, put=setStaticF_ZFightOffset)) ::GlobalNamespace::UberShaderProperty*  ZFightOffset;

/// @brief Field ZWrite, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_ZWrite, put=setStaticF_ZWrite)) ::GlobalNamespace::UberShaderProperty*  ZWrite;

/// @brief Field gInitialized, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_gInitialized, put=setStaticF_gInitialized)) bool  gInitialized;

/// @brief Field kProperties, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_kProperties, put=setStaticF_kProperties)) ::ArrayW<::GlobalNamespace::UberShaderProperty*>  kProperties;

/// @brief Field kReferenceMaterial, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_kReferenceMaterial, put=setStaticF_kReferenceMaterial)) ::UnityW<::UnityEngine::Material>  kReferenceMaterial;

/// @brief Field kReferenceMaterialNonSRP, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_kReferenceMaterialNonSRP, put=setStaticF_kReferenceMaterialNonSRP)) ::UnityW<::UnityEngine::Material>  kReferenceMaterialNonSRP;

/// @brief Field kReferenceShader, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_kReferenceShader, put=setStaticF_kReferenceShader)) ::UnityW<::UnityEngine::Shader>  kReferenceShader;

/// @brief Field kReferenceShaderNonSRP, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_kReferenceShaderNonSRP, put=setStaticF_kReferenceShaderNonSRP)) ::UnityW<::UnityEngine::Shader>  kReferenceShaderNonSRP;

/// @brief Method EnumerateAllProperties, addr 0x59903e0, size 0x2b4, virtual false, abstract: false, final false
static inline ::ArrayW<::GlobalNamespace::UberShaderProperty*> EnumerateAllProperties(::UnityEngine::Shader*  uberShader) ;

/// @brief Method GetProperty, addr 0x59902e0, size 0x80, virtual false, abstract: false, final false
static inline ::GlobalNamespace::UberShaderProperty* GetProperty(int32_t  i) ;

/// @brief Method GetProperty, addr 0x5990360, size 0x80, virtual false, abstract: false, final false
static inline ::GlobalNamespace::UberShaderProperty* GetProperty(int32_t  i, ::StringW  expectedName) ;

/// @brief Method GetShader, addr 0x5990694, size 0x5c, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Shader> GetShader() ;

/// @brief Method InitDependencies, addr 0x598fe9c, size 0x1ac, virtual false, abstract: false, final false
static inline void InitDependencies() ;

/// @brief Method IsAnimated, addr 0x59901b8, size 0x128, virtual false, abstract: false, final false
static inline bool IsAnimated(::UnityEngine::Material*  m) ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_AChannelColor() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_AlphaDetailToggle() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_AlphaDetail_Opacity() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_AlphaDetail_ST() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_AlphaDetail_WorldSpace() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_AlphaToMask() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_BChannelColor() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_BaseColor() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_BaseMap() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_BaseMap_Atlas() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_BaseMap_AtlasSlice() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_BaseMap_WH() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_Color() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_ColorSource() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_CrystalPower() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_CrystalRimColor() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_Cull() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_Cutoff() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_DEBUG_PAWN_DATA() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_DayNightLightmapArray() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_DayNightLightmapArray_AtlasSlice() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_DeformMap() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_DeformMapIntensity() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_DeformMapMaskByVertColorRAmount() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_DeformMapObjectSpaceOffsetsU() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_DeformMapObjectSpaceOffsetsV() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_DeformMapScrollSpeed() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_DeformMapUV0Influence() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_DeformMapWorldSpaceOffsetsU() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_DeformMapWorldSpaceOffsetsV() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_DeformMap_Atlas() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_DeformMap_AtlasSlice() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_DepthMap() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_DoTextureRotation() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_DstBlend() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_DstBlendAlpha() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_EmissionColor() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_EmissionDissolveAnimation() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_EmissionDissolveEdgeSize() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_EmissionDissolveProgress() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_EmissionMap() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_EmissionMap_Atlas() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_EmissionMap_AtlasSlice() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_EmissionMaskByBaseMapAlpha() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_EmissionToggle() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_EmissionUVScrollSpeed() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_EmissionUseUVWaveWarp() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_EyeOverrideUV() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_EyeOverrideUVTransform() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_EyeTileOffsetUV() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_GChannelColor() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_GradientMap() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_GradientMapToggle() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_GreyZoneException() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_HalfLambertToggle() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_HeightBasedWaterEffect() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_InnerGlowColor() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_InnerGlowOn() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_InnerGlowParams() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_InnerGlowSine() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_InnerGlowSinePeriod() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_InnerGlowSinePhaseShift() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_InnerGlowTap() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_LavaLampToggle() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_LiquidContainer() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_LiquidFill() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_LiquidFillNormal() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_LiquidPlaneNormal() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_LiquidPlanePosition() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_LiquidSurfaceColor() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_LiquidSwayX() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_LiquidSwayY() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_LiquidVolume() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_MaskMap() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_MaskMapToggle() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_MaskMap_WH() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_Metallic() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_MouthMap() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_MouthMap_Atlas() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_MouthMap_AtlasSlice() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_ParallaxAABias() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_ParallaxAAToggle() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_ParallaxAmplitude() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_ParallaxPlanarToggle() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_ParallaxSamplesMinMax() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_ParallaxToggle() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_ReflectAlbedoTint() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_ReflectBoxCubePos() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_ReflectBoxProjectToggle() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_ReflectBoxRotation() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_ReflectBoxSize() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_ReflectExposure() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_ReflectMatcapPerspToggle() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_ReflectMatcapToggle() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_ReflectNormalTex() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_ReflectNormalToggle() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_ReflectOffset() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_ReflectOpacity() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_ReflectRotate() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_ReflectScale() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_ReflectTex() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_ReflectTint() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_ReflectToggle() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_RotateAngle() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_RotateAnim() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_RotateOnYAxisBySinTime() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_SingleLightmap() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_Smoothness() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_SpecColor() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_SpecularColor() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_SpecularDir() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_SpecularPowerIntensity() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_SpecularUseDiffuseColor() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_SrcBlend() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_SrcBlendAlpha() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_StealthEffectOn() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_StencilComparison() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_StencilPassFront() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_StencilReference() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_Surface() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_TexelSnapToggle() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_TexelSnap_Factor() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_TransparencyMode() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_USE_DEFORM_MAP() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_USE_TEX_ARRAY_ATLAS() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_UVSource() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_UseCrystalEffect() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_UseDayNightLightmap() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_UseEyeTracking() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_UseGridEffect() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_UseMouthFlap() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_UseSpecHighlight() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_UseSpecular() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_UseSpecularAlphaChannel() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_UseVertexColor() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_UseWaveWarp() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_UseWeatherMap() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_UvShiftOffset() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_UvShiftRate() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_UvShiftSteps() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_UvShiftToggle() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_VertexFlapAxis() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_VertexFlapDegreesMinMax() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_VertexFlapPhaseOffset() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_VertexFlapSpeed() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_VertexFlapToggle() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_VertexLightToggle() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_VertexRotateAngles() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_VertexRotateAnim() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_VertexRotateToggle() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_VertexWaveAxes() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_VertexWaveDebug() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_VertexWaveEnd() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_VertexWaveFalloff() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_VertexWaveParams() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_VertexWavePhaseOffset() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_VertexWaveSphereMask() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_VertexWaveToggle() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_WaterEffect() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_WaveAmplitude() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_WaveFrequency() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_WaveScale() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_WaveTimeScale() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_WeatherMap() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_WeatherMapDissolveEdgeSize() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_ZFightOffset() ;

static inline ::GlobalNamespace::UberShaderProperty* getStaticF_ZWrite() ;

static inline bool getStaticF_gInitialized() ;

static inline ::ArrayW<::GlobalNamespace::UberShaderProperty*> getStaticF_kProperties() ;

static inline ::UnityW<::UnityEngine::Material> getStaticF_kReferenceMaterial() ;

static inline ::UnityW<::UnityEngine::Material> getStaticF_kReferenceMaterialNonSRP() ;

static inline ::UnityW<::UnityEngine::Shader> getStaticF_kReferenceShader() ;

static inline ::UnityW<::UnityEngine::Shader> getStaticF_kReferenceShaderNonSRP() ;

/// @brief Method get_AllProperties, addr 0x599015c, size 0x5c, virtual false, abstract: false, final false
static inline ::ArrayW<::GlobalNamespace::UberShaderProperty*> get_AllProperties() ;

/// @brief Method get_ReferenceMaterial, addr 0x598fe40, size 0x5c, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Material> get_ReferenceMaterial() ;

/// @brief Method get_ReferenceMaterialNonSRP, addr 0x59900a4, size 0x5c, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Material> get_ReferenceMaterialNonSRP() ;

/// @brief Method get_ReferenceShader, addr 0x5990048, size 0x5c, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Shader> get_ReferenceShader() ;

/// @brief Method get_ReferenceShaderNonSRP, addr 0x5990100, size 0x5c, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Shader> get_ReferenceShaderNonSRP() ;

static inline void setStaticF_AChannelColor(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_AlphaDetailToggle(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_AlphaDetail_Opacity(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_AlphaDetail_ST(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_AlphaDetail_WorldSpace(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_AlphaToMask(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_BChannelColor(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_BaseColor(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_BaseMap(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_BaseMap_Atlas(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_BaseMap_AtlasSlice(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_BaseMap_WH(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_Color(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_ColorSource(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_CrystalPower(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_CrystalRimColor(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_Cull(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_Cutoff(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_DEBUG_PAWN_DATA(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_DayNightLightmapArray(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_DayNightLightmapArray_AtlasSlice(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_DeformMap(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_DeformMapIntensity(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_DeformMapMaskByVertColorRAmount(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_DeformMapObjectSpaceOffsetsU(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_DeformMapObjectSpaceOffsetsV(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_DeformMapScrollSpeed(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_DeformMapUV0Influence(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_DeformMapWorldSpaceOffsetsU(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_DeformMapWorldSpaceOffsetsV(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_DeformMap_Atlas(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_DeformMap_AtlasSlice(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_DepthMap(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_DoTextureRotation(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_DstBlend(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_DstBlendAlpha(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_EmissionColor(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_EmissionDissolveAnimation(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_EmissionDissolveEdgeSize(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_EmissionDissolveProgress(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_EmissionMap(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_EmissionMap_Atlas(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_EmissionMap_AtlasSlice(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_EmissionMaskByBaseMapAlpha(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_EmissionToggle(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_EmissionUVScrollSpeed(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_EmissionUseUVWaveWarp(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_EyeOverrideUV(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_EyeOverrideUVTransform(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_EyeTileOffsetUV(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_GChannelColor(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_GradientMap(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_GradientMapToggle(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_GreyZoneException(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_HalfLambertToggle(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_HeightBasedWaterEffect(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_InnerGlowColor(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_InnerGlowOn(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_InnerGlowParams(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_InnerGlowSine(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_InnerGlowSinePeriod(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_InnerGlowSinePhaseShift(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_InnerGlowTap(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_LavaLampToggle(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_LiquidContainer(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_LiquidFill(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_LiquidFillNormal(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_LiquidPlaneNormal(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_LiquidPlanePosition(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_LiquidSurfaceColor(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_LiquidSwayX(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_LiquidSwayY(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_LiquidVolume(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_MaskMap(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_MaskMapToggle(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_MaskMap_WH(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_Metallic(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_MouthMap(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_MouthMap_Atlas(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_MouthMap_AtlasSlice(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_ParallaxAABias(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_ParallaxAAToggle(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_ParallaxAmplitude(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_ParallaxPlanarToggle(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_ParallaxSamplesMinMax(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_ParallaxToggle(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_ReflectAlbedoTint(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_ReflectBoxCubePos(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_ReflectBoxProjectToggle(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_ReflectBoxRotation(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_ReflectBoxSize(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_ReflectExposure(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_ReflectMatcapPerspToggle(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_ReflectMatcapToggle(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_ReflectNormalTex(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_ReflectNormalToggle(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_ReflectOffset(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_ReflectOpacity(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_ReflectRotate(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_ReflectScale(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_ReflectTex(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_ReflectTint(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_ReflectToggle(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_RotateAngle(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_RotateAnim(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_RotateOnYAxisBySinTime(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_SingleLightmap(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_Smoothness(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_SpecColor(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_SpecularColor(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_SpecularDir(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_SpecularPowerIntensity(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_SpecularUseDiffuseColor(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_SrcBlend(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_SrcBlendAlpha(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_StealthEffectOn(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_StencilComparison(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_StencilPassFront(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_StencilReference(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_Surface(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_TexelSnapToggle(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_TexelSnap_Factor(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_TransparencyMode(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_USE_DEFORM_MAP(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_USE_TEX_ARRAY_ATLAS(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_UVSource(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_UseCrystalEffect(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_UseDayNightLightmap(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_UseEyeTracking(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_UseGridEffect(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_UseMouthFlap(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_UseSpecHighlight(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_UseSpecular(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_UseSpecularAlphaChannel(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_UseVertexColor(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_UseWaveWarp(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_UseWeatherMap(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_UvShiftOffset(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_UvShiftRate(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_UvShiftSteps(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_UvShiftToggle(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_VertexFlapAxis(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_VertexFlapDegreesMinMax(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_VertexFlapPhaseOffset(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_VertexFlapSpeed(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_VertexFlapToggle(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_VertexLightToggle(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_VertexRotateAngles(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_VertexRotateAnim(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_VertexRotateToggle(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_VertexWaveAxes(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_VertexWaveDebug(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_VertexWaveEnd(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_VertexWaveFalloff(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_VertexWaveParams(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_VertexWavePhaseOffset(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_VertexWaveSphereMask(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_VertexWaveToggle(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_WaterEffect(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_WaveAmplitude(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_WaveFrequency(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_WaveScale(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_WaveTimeScale(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_WeatherMap(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_WeatherMapDissolveEdgeSize(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_ZFightOffset(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_ZWrite(::GlobalNamespace::UberShaderProperty*  value) ;

static inline void setStaticF_gInitialized(bool  value) ;

static inline void setStaticF_kProperties(::ArrayW<::GlobalNamespace::UberShaderProperty*>  value) ;

static inline void setStaticF_kReferenceMaterial(::UnityW<::UnityEngine::Material>  value) ;

static inline void setStaticF_kReferenceMaterialNonSRP(::UnityW<::UnityEngine::Material>  value) ;

static inline void setStaticF_kReferenceShader(::UnityW<::UnityEngine::Shader>  value) ;

static inline void setStaticF_kReferenceShaderNonSRP(::UnityW<::UnityEngine::Shader>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UberShader() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UberShader", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UberShader(UberShader && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UberShader", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UberShader(UberShader const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{2577};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::UberShader) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
