#pragma once
// IWYU pragma private; include "GlobalNamespace/ShaderProps.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ShaderProps)
// Forward declare root types
namespace GlobalNamespace {
class ShaderProps;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::ShaderProps*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::ShaderProps*, "", "ShaderProps");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: ShaderProps
class CORDL_TYPE ShaderProps : public ::System::Object {
public:
// Declarations
/// @brief Field BACKFACE_NORMAL_MODE, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_BACKFACE_NORMAL_MODE, put=setStaticF_BACKFACE_NORMAL_MODE)) int32_t  BACKFACE_NORMAL_MODE;

/// @brief Field Backface_Normal_Mode, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_Backface_Normal_Mode, put=setStaticF_Backface_Normal_Mode)) int32_t  Backface_Normal_Mode;

/// @brief Field Base_Map, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_Base_Map, put=setStaticF_Base_Map)) int32_t  Base_Map;

/// @brief Field EFFECT_BILLBOARD, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_EFFECT_BILLBOARD, put=setStaticF_EFFECT_BILLBOARD)) int32_t  EFFECT_BILLBOARD;

/// @brief Field EFFECT_EXTRA_TEX, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_EFFECT_EXTRA_TEX, put=setStaticF_EFFECT_EXTRA_TEX)) int32_t  EFFECT_EXTRA_TEX;

/// @brief Field HARD_OCCLUSION, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_HARD_OCCLUSION, put=setStaticF_HARD_OCCLUSION)) int32_t  HARD_OCCLUSION;

/// @brief Field Normal_Blend, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_Normal_Blend, put=setStaticF_Normal_Blend)) int32_t  Normal_Blend;

/// @brief Field Normal_Map, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_Normal_Map, put=setStaticF_Normal_Map)) int32_t  Normal_Map;

/// @brief Field PixelSnap, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_PixelSnap, put=setStaticF_PixelSnap)) int32_t  PixelSnap;

/// @brief Field SOFT_OCCLUSION, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_SOFT_OCCLUSION, put=setStaticF_SOFT_OCCLUSION)) int32_t  SOFT_OCCLUSION;

/// @brief Field UNITY_LIGHTMODEL_AMBIENT, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_UNITY_LIGHTMODEL_AMBIENT, put=setStaticF_UNITY_LIGHTMODEL_AMBIENT)) int32_t  UNITY_LIGHTMODEL_AMBIENT;

/// @brief Field UNITY_MATRIX_IT_MV, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_UNITY_MATRIX_IT_MV, put=setStaticF_UNITY_MATRIX_IT_MV)) int32_t  UNITY_MATRIX_IT_MV;

/// @brief Field UNITY_MATRIX_MV, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_UNITY_MATRIX_MV, put=setStaticF_UNITY_MATRIX_MV)) int32_t  UNITY_MATRIX_MV;

/// @brief Field UNITY_MATRIX_MVP, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_UNITY_MATRIX_MVP, put=setStaticF_UNITY_MATRIX_MVP)) int32_t  UNITY_MATRIX_MVP;

/// @brief Field UNITY_MATRIX_P, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_UNITY_MATRIX_P, put=setStaticF_UNITY_MATRIX_P)) int32_t  UNITY_MATRIX_P;

/// @brief Field UNITY_MATRIX_T_MV, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_UNITY_MATRIX_T_MV, put=setStaticF_UNITY_MATRIX_T_MV)) int32_t  UNITY_MATRIX_T_MV;

/// @brief Field UNITY_MATRIX_V, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_UNITY_MATRIX_V, put=setStaticF_UNITY_MATRIX_V)) int32_t  UNITY_MATRIX_V;

/// @brief Field UNITY_MATRIX_VP_, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_UNITY_MATRIX_VP_, put=setStaticF_UNITY_MATRIX_VP_)) int32_t  UNITY_MATRIX_VP_;

/// @brief Field _AChannelColor, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__AChannelColor, put=setStaticF__AChannelColor)) int32_t  _AChannelColor;

/// @brief Field _AbscissaOffset, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__AbscissaOffset, put=setStaticF__AbscissaOffset)) int32_t  _AbscissaOffset;

/// @brief Field _AddPrecomputedVelocity, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__AddPrecomputedVelocity, put=setStaticF__AddPrecomputedVelocity)) int32_t  _AddPrecomputedVelocity;

/// @brief Field _AdvancedOptions, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__AdvancedOptions, put=setStaticF__AdvancedOptions)) int32_t  _AdvancedOptions;

/// @brief Field _Alpha, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Alpha, put=setStaticF__Alpha)) int32_t  _Alpha;

/// @brief Field _AlphaClip, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__AlphaClip, put=setStaticF__AlphaClip)) int32_t  _AlphaClip;

/// @brief Field _AlphaClipThreshold, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__AlphaClipThreshold, put=setStaticF__AlphaClipThreshold)) int32_t  _AlphaClipThreshold;

/// @brief Field _AlphaColor, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__AlphaColor, put=setStaticF__AlphaColor)) int32_t  _AlphaColor;

/// @brief Field _AlphaCutoff, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__AlphaCutoff, put=setStaticF__AlphaCutoff)) int32_t  _AlphaCutoff;

/// @brief Field _AlphaDetailToggle, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__AlphaDetailToggle, put=setStaticF__AlphaDetailToggle)) int32_t  _AlphaDetailToggle;

/// @brief Field _AlphaDetail_Opacity, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__AlphaDetail_Opacity, put=setStaticF__AlphaDetail_Opacity)) int32_t  _AlphaDetail_Opacity;

/// @brief Field _AlphaDetail_ST, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__AlphaDetail_ST, put=setStaticF__AlphaDetail_ST)) int32_t  _AlphaDetail_ST;

/// @brief Field _AlphaDetail_WorldSpace, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__AlphaDetail_WorldSpace, put=setStaticF__AlphaDetail_WorldSpace)) int32_t  _AlphaDetail_WorldSpace;

/// @brief Field _AlphaTex, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__AlphaTex, put=setStaticF__AlphaTex)) int32_t  _AlphaTex;

/// @brief Field _AlphaTex_ST, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__AlphaTex_ST, put=setStaticF__AlphaTex_ST)) int32_t  _AlphaTex_ST;

/// @brief Field _AlphaToMask, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__AlphaToMask, put=setStaticF__AlphaToMask)) int32_t  _AlphaToMask;

/// @brief Field _Ambient, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Ambient, put=setStaticF__Ambient)) int32_t  _Ambient;

/// @brief Field _Angle, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Angle, put=setStaticF__Angle)) int32_t  _Angle;

/// @brief Field _AverageColor, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__AverageColor, put=setStaticF__AverageColor)) int32_t  _AverageColor;

/// @brief Field _BAKERY_2SIDED, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__BAKERY_2SIDED, put=setStaticF__BAKERY_2SIDED)) int32_t  _BAKERY_2SIDED;

/// @brief Field _BAKERY_2SIDEDON, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__BAKERY_2SIDEDON, put=setStaticF__BAKERY_2SIDEDON)) int32_t  _BAKERY_2SIDEDON;

/// @brief Field _BAKERY_BICUBIC, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__BAKERY_BICUBIC, put=setStaticF__BAKERY_BICUBIC)) int32_t  _BAKERY_BICUBIC;

/// @brief Field _BAKERY_LMSPEC, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__BAKERY_LMSPEC, put=setStaticF__BAKERY_LMSPEC)) int32_t  _BAKERY_LMSPEC;

/// @brief Field _BAKERY_PROBESHNONLINEAR, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__BAKERY_PROBESHNONLINEAR, put=setStaticF__BAKERY_PROBESHNONLINEAR)) int32_t  _BAKERY_PROBESHNONLINEAR;

/// @brief Field _BAKERY_RNM, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__BAKERY_RNM, put=setStaticF__BAKERY_RNM)) int32_t  _BAKERY_RNM;

/// @brief Field _BAKERY_SH, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__BAKERY_SH, put=setStaticF__BAKERY_SH)) int32_t  _BAKERY_SH;

/// @brief Field _BAKERY_SHNONLINEAR, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__BAKERY_SHNONLINEAR, put=setStaticF__BAKERY_SHNONLINEAR)) int32_t  _BAKERY_SHNONLINEAR;

/// @brief Field _BAKERY_VERTEXLM, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__BAKERY_VERTEXLM, put=setStaticF__BAKERY_VERTEXLM)) int32_t  _BAKERY_VERTEXLM;

/// @brief Field _BAKERY_VERTEXLMDIR, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__BAKERY_VERTEXLMDIR, put=setStaticF__BAKERY_VERTEXLMDIR)) int32_t  _BAKERY_VERTEXLMDIR;

/// @brief Field _BAKERY_VERTEXLMMASK, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__BAKERY_VERTEXLMMASK, put=setStaticF__BAKERY_VERTEXLMMASK)) int32_t  _BAKERY_VERTEXLMMASK;

/// @brief Field _BAKERY_VERTEXLMSH, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__BAKERY_VERTEXLMSH, put=setStaticF__BAKERY_VERTEXLMSH)) int32_t  _BAKERY_VERTEXLMSH;

/// @brief Field _BAKERY_VOLROTATION, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__BAKERY_VOLROTATION, put=setStaticF__BAKERY_VOLROTATION)) int32_t  _BAKERY_VOLROTATION;

/// @brief Field _BAKERY_VOLUME, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__BAKERY_VOLUME, put=setStaticF__BAKERY_VOLUME)) int32_t  _BAKERY_VOLUME;

/// @brief Field _BASE_COLOR, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__BASE_COLOR, put=setStaticF__BASE_COLOR)) int32_t  _BASE_COLOR;

/// @brief Field _BASE_COLOR_MAP, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__BASE_COLOR_MAP, put=setStaticF__BASE_COLOR_MAP)) int32_t  _BASE_COLOR_MAP;

/// @brief Field _BASE_COLOR_WEIGHT, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__BASE_COLOR_WEIGHT, put=setStaticF__BASE_COLOR_WEIGHT)) int32_t  _BASE_COLOR_WEIGHT;

/// @brief Field _BChannelColor, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__BChannelColor, put=setStaticF__BChannelColor)) int32_t  _BChannelColor;

/// @brief Field _BUILTIN_QueueControl, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__BUILTIN_QueueControl, put=setStaticF__BUILTIN_QueueControl)) int32_t  _BUILTIN_QueueControl;

/// @brief Field _BUILTIN_QueueOffset, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__BUILTIN_QueueOffset, put=setStaticF__BUILTIN_QueueOffset)) int32_t  _BUILTIN_QueueOffset;

/// @brief Field _BUMP_MAP, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__BUMP_MAP, put=setStaticF__BUMP_MAP)) int32_t  _BUMP_MAP;

/// @brief Field _BUMP_MAP_STRENGTH, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__BUMP_MAP_STRENGTH, put=setStaticF__BUMP_MAP_STRENGTH)) int32_t  _BUMP_MAP_STRENGTH;

/// @brief Field _BackgroundColor, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__BackgroundColor, put=setStaticF__BackgroundColor)) int32_t  _BackgroundColor;

/// @brief Field _Base, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Base, put=setStaticF__Base)) int32_t  _Base;

/// @brief Field _BaseColor, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__BaseColor, put=setStaticF__BaseColor)) int32_t  _BaseColor;

/// @brief Field _BaseColorAddSubDiff, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__BaseColorAddSubDiff, put=setStaticF__BaseColorAddSubDiff)) int32_t  _BaseColorAddSubDiff;

/// @brief Field _BaseMap, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__BaseMap, put=setStaticF__BaseMap)) int32_t  _BaseMap;

/// @brief Field _BaseMapArray, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__BaseMapArray, put=setStaticF__BaseMapArray)) int32_t  _BaseMapArray;

/// @brief Field _BaseMapArrayIndex, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__BaseMapArrayIndex, put=setStaticF__BaseMapArrayIndex)) int32_t  _BaseMapArrayIndex;

/// @brief Field _BaseMapArray_ST, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__BaseMapArray_ST, put=setStaticF__BaseMapArray_ST)) int32_t  _BaseMapArray_ST;

/// @brief Field _BaseMap_Atlas, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__BaseMap_Atlas, put=setStaticF__BaseMap_Atlas)) int32_t  _BaseMap_Atlas;

/// @brief Field _BaseMap_AtlasSlice, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__BaseMap_AtlasSlice, put=setStaticF__BaseMap_AtlasSlice)) int32_t  _BaseMap_AtlasSlice;

/// @brief Field _BaseMap_AtlasSliceSource, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__BaseMap_AtlasSliceSource, put=setStaticF__BaseMap_AtlasSliceSource)) int32_t  _BaseMap_AtlasSliceSource;

/// @brief Field _BaseMap_ST, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__BaseMap_ST, put=setStaticF__BaseMap_ST)) int32_t  _BaseMap_ST;

/// @brief Field _BaseMap_WH, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__BaseMap_WH, put=setStaticF__BaseMap_WH)) int32_t  _BaseMap_WH;

/// @brief Field _BaseOpacity, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__BaseOpacity, put=setStaticF__BaseOpacity)) int32_t  _BaseOpacity;

/// @brief Field _Base_Color, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Base_Color, put=setStaticF__Base_Color)) int32_t  _Base_Color;

/// @brief Field _Bevel, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Bevel, put=setStaticF__Bevel)) int32_t  _Bevel;

/// @brief Field _BevelAmount, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__BevelAmount, put=setStaticF__BevelAmount)) int32_t  _BevelAmount;

/// @brief Field _BevelClamp, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__BevelClamp, put=setStaticF__BevelClamp)) int32_t  _BevelClamp;

/// @brief Field _BevelOffset, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__BevelOffset, put=setStaticF__BevelOffset)) int32_t  _BevelOffset;

/// @brief Field _BevelRoundness, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__BevelRoundness, put=setStaticF__BevelRoundness)) int32_t  _BevelRoundness;

/// @brief Field _BevelType, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__BevelType, put=setStaticF__BevelType)) int32_t  _BevelType;

/// @brief Field _BevelWidth, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__BevelWidth, put=setStaticF__BevelWidth)) int32_t  _BevelWidth;

/// @brief Field _BillboardKwToggle, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__BillboardKwToggle, put=setStaticF__BillboardKwToggle)) int32_t  _BillboardKwToggle;

/// @brief Field _BillboardShadowFade, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__BillboardShadowFade, put=setStaticF__BillboardShadowFade)) int32_t  _BillboardShadowFade;

/// @brief Field _Blend, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Blend, put=setStaticF__Blend)) int32_t  _Blend;

/// @brief Field _BlendDst, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__BlendDst, put=setStaticF__BlendDst)) int32_t  _BlendDst;

/// @brief Field _BlendFactorCircleRadius, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__BlendFactorCircleRadius, put=setStaticF__BlendFactorCircleRadius)) int32_t  _BlendFactorCircleRadius;

/// @brief Field _BlendModeDestination, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__BlendModeDestination, put=setStaticF__BlendModeDestination)) int32_t  _BlendModeDestination;

/// @brief Field _BlendModePreserveSpecular, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__BlendModePreserveSpecular, put=setStaticF__BlendModePreserveSpecular)) int32_t  _BlendModePreserveSpecular;

/// @brief Field _BlendModeSource, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__BlendModeSource, put=setStaticF__BlendModeSource)) int32_t  _BlendModeSource;

/// @brief Field _BlendOp, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__BlendOp, put=setStaticF__BlendOp)) int32_t  _BlendOp;

/// @brief Field _BlendOpAlpha, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__BlendOpAlpha, put=setStaticF__BlendOpAlpha)) int32_t  _BlendOpAlpha;

/// @brief Field _BlendOpColor, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__BlendOpColor, put=setStaticF__BlendOpColor)) int32_t  _BlendOpColor;

/// @brief Field _BlendSrc, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__BlendSrc, put=setStaticF__BlendSrc)) int32_t  _BlendSrc;

/// @brief Field _Border, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Border, put=setStaticF__Border)) int32_t  _Border;

/// @brief Field _BorderColor, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__BorderColor, put=setStaticF__BorderColor)) int32_t  _BorderColor;

/// @brief Field _BorderColorA, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__BorderColorA, put=setStaticF__BorderColorA)) int32_t  _BorderColorA;

/// @brief Field _BorderColorB, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__BorderColorB, put=setStaticF__BorderColorB)) int32_t  _BorderColorB;

/// @brief Field _BorderColorType, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__BorderColorType, put=setStaticF__BorderColorType)) int32_t  _BorderColorType;

/// @brief Field _BorderLine, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__BorderLine, put=setStaticF__BorderLine)) int32_t  _BorderLine;

/// @brief Field _BorderWidth, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__BorderWidth, put=setStaticF__BorderWidth)) int32_t  _BorderWidth;

/// @brief Field _BottomColor, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__BottomColor, put=setStaticF__BottomColor)) int32_t  _BottomColor;

/// @brief Field _Brightness, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Brightness, put=setStaticF__Brightness)) int32_t  _Brightness;

/// @brief Field _BumpFace, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__BumpFace, put=setStaticF__BumpFace)) int32_t  _BumpFace;

/// @brief Field _BumpMap, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__BumpMap, put=setStaticF__BumpMap)) int32_t  _BumpMap;

/// @brief Field _BumpMap_ST, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__BumpMap_ST, put=setStaticF__BumpMap_ST)) int32_t  _BumpMap_ST;

/// @brief Field _BumpOutline, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__BumpOutline, put=setStaticF__BumpOutline)) int32_t  _BumpOutline;

/// @brief Field _BumpScale, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__BumpScale, put=setStaticF__BumpScale)) int32_t  _BumpScale;

/// @brief Field _COLOR_MODE__, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__COLOR_MODE__, put=setStaticF__COLOR_MODE__)) int32_t  _COLOR_MODE__;

/// @brief Field _CameraFadeParams, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__CameraFadeParams, put=setStaticF__CameraFadeParams)) int32_t  _CameraFadeParams;

/// @brief Field _CameraFadingEnabled, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__CameraFadingEnabled, put=setStaticF__CameraFadingEnabled)) int32_t  _CameraFadingEnabled;

/// @brief Field _CameraFarFadeDistance, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__CameraFarFadeDistance, put=setStaticF__CameraFarFadeDistance)) int32_t  _CameraFarFadeDistance;

/// @brief Field _CameraNearFadeDistance, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__CameraNearFadeDistance, put=setStaticF__CameraNearFadeDistance)) int32_t  _CameraNearFadeDistance;

/// @brief Field _CenterSize, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__CenterSize, put=setStaticF__CenterSize)) int32_t  _CenterSize;

/// @brief Field _ChromaAlphaCutoff, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ChromaAlphaCutoff, put=setStaticF__ChromaAlphaCutoff)) int32_t  _ChromaAlphaCutoff;

/// @brief Field _ChromaShadows, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ChromaShadows, put=setStaticF__ChromaShadows)) int32_t  _ChromaShadows;

/// @brief Field _ChromaToleranceA, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ChromaToleranceA, put=setStaticF__ChromaToleranceA)) int32_t  _ChromaToleranceA;

/// @brief Field _ChromaToleranceB, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ChromaToleranceB, put=setStaticF__ChromaToleranceB)) int32_t  _ChromaToleranceB;

/// @brief Field _ClearCoat, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ClearCoat, put=setStaticF__ClearCoat)) int32_t  _ClearCoat;

/// @brief Field _ClearCoatMap, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ClearCoatMap, put=setStaticF__ClearCoatMap)) int32_t  _ClearCoatMap;

/// @brief Field _ClearCoatMap_ST, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ClearCoatMap_ST, put=setStaticF__ClearCoatMap_ST)) int32_t  _ClearCoatMap_ST;

/// @brief Field _ClearCoatMask, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ClearCoatMask, put=setStaticF__ClearCoatMask)) int32_t  _ClearCoatMask;

/// @brief Field _ClearCoatSmoothness, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ClearCoatSmoothness, put=setStaticF__ClearCoatSmoothness)) int32_t  _ClearCoatSmoothness;

/// @brief Field _ClearStencilReadMask, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ClearStencilReadMask, put=setStaticF__ClearStencilReadMask)) int32_t  _ClearStencilReadMask;

/// @brief Field _ClearStencilRef, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ClearStencilRef, put=setStaticF__ClearStencilRef)) int32_t  _ClearStencilRef;

/// @brief Field _ClearStencilWriteMask, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ClearStencilWriteMask, put=setStaticF__ClearStencilWriteMask)) int32_t  _ClearStencilWriteMask;

/// @brief Field _ClipRect, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ClipRect, put=setStaticF__ClipRect)) int32_t  _ClipRect;

/// @brief Field _CloudsColor, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__CloudsColor, put=setStaticF__CloudsColor)) int32_t  _CloudsColor;

/// @brief Field _Color, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Color, put=setStaticF__Color)) int32_t  _Color;

/// @brief Field _Color0, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Color0, put=setStaticF__Color0)) int32_t  _Color0;

/// @brief Field _Color1, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Color1, put=setStaticF__Color1)) int32_t  _Color1;

/// @brief Field _Color2, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Color2, put=setStaticF__Color2)) int32_t  _Color2;

/// @brief Field _Color3, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Color3, put=setStaticF__Color3)) int32_t  _Color3;

/// @brief Field _Color4, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Color4, put=setStaticF__Color4)) int32_t  _Color4;

/// @brief Field _ColorA, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ColorA, put=setStaticF__ColorA)) int32_t  _ColorA;

/// @brief Field _ColorB, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ColorB, put=setStaticF__ColorB)) int32_t  _ColorB;

/// @brief Field _ColorBottom, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ColorBottom, put=setStaticF__ColorBottom)) int32_t  _ColorBottom;

/// @brief Field _ColorDark, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ColorDark, put=setStaticF__ColorDark)) int32_t  _ColorDark;

/// @brief Field _ColorEnd, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ColorEnd, put=setStaticF__ColorEnd)) int32_t  _ColorEnd;

/// @brief Field _ColorG, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ColorG, put=setStaticF__ColorG)) int32_t  _ColorG;

/// @brief Field _ColorInner, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ColorInner, put=setStaticF__ColorInner)) int32_t  _ColorInner;

/// @brief Field _ColorLight, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ColorLight, put=setStaticF__ColorLight)) int32_t  _ColorLight;

/// @brief Field _ColorMask, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ColorMask, put=setStaticF__ColorMask)) int32_t  _ColorMask;

/// @brief Field _ColorMiddle, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ColorMiddle, put=setStaticF__ColorMiddle)) int32_t  _ColorMiddle;

/// @brief Field _ColorMode, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ColorMode, put=setStaticF__ColorMode)) int32_t  _ColorMode;

/// @brief Field _ColorOuter, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ColorOuter, put=setStaticF__ColorOuter)) int32_t  _ColorOuter;

/// @brief Field _ColorPrimary, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ColorPrimary, put=setStaticF__ColorPrimary)) int32_t  _ColorPrimary;

/// @brief Field _ColorR, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ColorR, put=setStaticF__ColorR)) int32_t  _ColorR;

/// @brief Field _ColorRamp, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ColorRamp, put=setStaticF__ColorRamp)) int32_t  _ColorRamp;

/// @brief Field _ColorRampOffset, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ColorRampOffset, put=setStaticF__ColorRampOffset)) int32_t  _ColorRampOffset;

/// @brief Field _ColorRamp_ST, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ColorRamp_ST, put=setStaticF__ColorRamp_ST)) int32_t  _ColorRamp_ST;

/// @brief Field _ColorSource, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ColorSource, put=setStaticF__ColorSource)) int32_t  _ColorSource;

/// @brief Field _ColorStart, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ColorStart, put=setStaticF__ColorStart)) int32_t  _ColorStart;

/// @brief Field _ColorTop, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ColorTop, put=setStaticF__ColorTop)) int32_t  _ColorTop;

/// @brief Field _CompositingParams, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__CompositingParams, put=setStaticF__CompositingParams)) int32_t  _CompositingParams;

/// @brief Field _CompositingParams2, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__CompositingParams2, put=setStaticF__CompositingParams2)) int32_t  _CompositingParams2;

/// @brief Field _Contrast, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Contrast, put=setStaticF__Contrast)) int32_t  _Contrast;

/// @brief Field _Control, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Control, put=setStaticF__Control)) int32_t  _Control;

/// @brief Field _ControlTex, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ControlTex, put=setStaticF__ControlTex)) int32_t  _ControlTex;

/// @brief Field _ControlTex_ST, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ControlTex_ST, put=setStaticF__ControlTex_ST)) int32_t  _ControlTex_ST;

/// @brief Field _Control_ST, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Control_ST, put=setStaticF__Control_ST)) int32_t  _Control_ST;

/// @brief Field _CosTime, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__CosTime, put=setStaticF__CosTime)) int32_t  _CosTime;

/// @brief Field _CrystalPower, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__CrystalPower, put=setStaticF__CrystalPower)) int32_t  _CrystalPower;

/// @brief Field _CrystalRimColor, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__CrystalRimColor, put=setStaticF__CrystalRimColor)) int32_t  _CrystalRimColor;

/// @brief Field _Cube, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Cube, put=setStaticF__Cube)) int32_t  _Cube;

/// @brief Field _CubeToLatLongParams, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__CubeToLatLongParams, put=setStaticF__CubeToLatLongParams)) int32_t  _CubeToLatLongParams;

/// @brief Field _Cube_ST, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Cube_ST, put=setStaticF__Cube_ST)) int32_t  _Cube_ST;

/// @brief Field _Cull, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Cull, put=setStaticF__Cull)) int32_t  _Cull;

/// @brief Field _CullMode, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__CullMode, put=setStaticF__CullMode)) int32_t  _CullMode;

/// @brief Field _Cutoff, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Cutoff, put=setStaticF__Cutoff)) int32_t  _Cutoff;

/// @brief Field _DAY_CYCLE_BRIGHTNESS_, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__DAY_CYCLE_BRIGHTNESS_, put=setStaticF__DAY_CYCLE_BRIGHTNESS_)) int32_t  _DAY_CYCLE_BRIGHTNESS_;

/// @brief Field _DEBUG_PAWN_DATA, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__DEBUG_PAWN_DATA, put=setStaticF__DEBUG_PAWN_DATA)) int32_t  _DEBUG_PAWN_DATA;

/// @brief Field _Darken, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Darken, put=setStaticF__Darken)) int32_t  _Darken;

/// @brief Field _DayNightLightmapArray, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__DayNightLightmapArray, put=setStaticF__DayNightLightmapArray)) int32_t  _DayNightLightmapArray;

/// @brief Field _DayNightLightmapArray_AtlasSlice, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__DayNightLightmapArray_AtlasSlice, put=setStaticF__DayNightLightmapArray_AtlasSlice)) int32_t  _DayNightLightmapArray_AtlasSlice;

/// @brief Field _DayNightLightmapArray_ST, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__DayNightLightmapArray_ST, put=setStaticF__DayNightLightmapArray_ST)) int32_t  _DayNightLightmapArray_ST;

/// @brief Field _DecalMeshBiasType, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__DecalMeshBiasType, put=setStaticF__DecalMeshBiasType)) int32_t  _DecalMeshBiasType;

/// @brief Field _DecalMeshDepthBias, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__DecalMeshDepthBias, put=setStaticF__DecalMeshDepthBias)) int32_t  _DecalMeshDepthBias;

/// @brief Field _DecalMeshViewBias, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__DecalMeshViewBias, put=setStaticF__DecalMeshViewBias)) int32_t  _DecalMeshViewBias;

/// @brief Field _DefaultColor, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__DefaultColor, put=setStaticF__DefaultColor)) int32_t  _DefaultColor;

/// @brief Field _Deform, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Deform, put=setStaticF__Deform)) int32_t  _Deform;

/// @brief Field _DeformMap, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__DeformMap, put=setStaticF__DeformMap)) int32_t  _DeformMap;

/// @brief Field _DeformMapIntensity, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__DeformMapIntensity, put=setStaticF__DeformMapIntensity)) int32_t  _DeformMapIntensity;

/// @brief Field _DeformMapMaskByVertColorRAmount, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__DeformMapMaskByVertColorRAmount, put=setStaticF__DeformMapMaskByVertColorRAmount)) int32_t  _DeformMapMaskByVertColorRAmount;

/// @brief Field _DeformMapObjectSpaceOffsetsU, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__DeformMapObjectSpaceOffsetsU, put=setStaticF__DeformMapObjectSpaceOffsetsU)) int32_t  _DeformMapObjectSpaceOffsetsU;

/// @brief Field _DeformMapObjectSpaceOffsetsV, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__DeformMapObjectSpaceOffsetsV, put=setStaticF__DeformMapObjectSpaceOffsetsV)) int32_t  _DeformMapObjectSpaceOffsetsV;

/// @brief Field _DeformMapScrollSpeed, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__DeformMapScrollSpeed, put=setStaticF__DeformMapScrollSpeed)) int32_t  _DeformMapScrollSpeed;

/// @brief Field _DeformMapUV0Influence, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__DeformMapUV0Influence, put=setStaticF__DeformMapUV0Influence)) int32_t  _DeformMapUV0Influence;

/// @brief Field _DeformMapWorldSpaceOffsetsU, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__DeformMapWorldSpaceOffsetsU, put=setStaticF__DeformMapWorldSpaceOffsetsU)) int32_t  _DeformMapWorldSpaceOffsetsU;

/// @brief Field _DeformMapWorldSpaceOffsetsV, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__DeformMapWorldSpaceOffsetsV, put=setStaticF__DeformMapWorldSpaceOffsetsV)) int32_t  _DeformMapWorldSpaceOffsetsV;

/// @brief Field _DeformMap_Atlas, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__DeformMap_Atlas, put=setStaticF__DeformMap_Atlas)) int32_t  _DeformMap_Atlas;

/// @brief Field _DeformMap_AtlasSlice, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__DeformMap_AtlasSlice, put=setStaticF__DeformMap_AtlasSlice)) int32_t  _DeformMap_AtlasSlice;

/// @brief Field _DepthBias, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__DepthBias, put=setStaticF__DepthBias)) int32_t  _DepthBias;

/// @brief Field _DepthMap, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__DepthMap, put=setStaticF__DepthMap)) int32_t  _DepthMap;

/// @brief Field _DepthTex, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__DepthTex, put=setStaticF__DepthTex)) int32_t  _DepthTex;

/// @brief Field _DepthTex_ST, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__DepthTex_ST, put=setStaticF__DepthTex_ST)) int32_t  _DepthTex_ST;

/// @brief Field _DestRect, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__DestRect, put=setStaticF__DestRect)) int32_t  _DestRect;

/// @brief Field _DetailAlbedoMap, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__DetailAlbedoMap, put=setStaticF__DetailAlbedoMap)) int32_t  _DetailAlbedoMap;

/// @brief Field _DetailAlbedoMapScale, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__DetailAlbedoMapScale, put=setStaticF__DetailAlbedoMapScale)) int32_t  _DetailAlbedoMapScale;

/// @brief Field _DetailAlbedoMap_ST, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__DetailAlbedoMap_ST, put=setStaticF__DetailAlbedoMap_ST)) int32_t  _DetailAlbedoMap_ST;

/// @brief Field _DetailMask, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__DetailMask, put=setStaticF__DetailMask)) int32_t  _DetailMask;

/// @brief Field _DetailMask_ST, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__DetailMask_ST, put=setStaticF__DetailMask_ST)) int32_t  _DetailMask_ST;

/// @brief Field _DetailNormalMap, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__DetailNormalMap, put=setStaticF__DetailNormalMap)) int32_t  _DetailNormalMap;

/// @brief Field _DetailNormalMapScale, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__DetailNormalMapScale, put=setStaticF__DetailNormalMapScale)) int32_t  _DetailNormalMapScale;

/// @brief Field _DetailNormalMap_ST, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__DetailNormalMap_ST, put=setStaticF__DetailNormalMap_ST)) int32_t  _DetailNormalMap_ST;

/// @brief Field _DetailTex, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__DetailTex, put=setStaticF__DetailTex)) int32_t  _DetailTex;

/// @brief Field _DetailTexIntensity, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__DetailTexIntensity, put=setStaticF__DetailTexIntensity)) int32_t  _DetailTexIntensity;

/// @brief Field _DetailTex_ST, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__DetailTex_ST, put=setStaticF__DetailTex_ST)) int32_t  _DetailTex_ST;

/// @brief Field _Diffuse, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Diffuse, put=setStaticF__Diffuse)) int32_t  _Diffuse;

/// @brief Field _DiffusePower, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__DiffusePower, put=setStaticF__DiffusePower)) int32_t  _DiffusePower;

/// @brief Field _Dimensions, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Dimensions, put=setStaticF__Dimensions)) int32_t  _Dimensions;

/// @brief Field _Direction, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Direction, put=setStaticF__Direction)) int32_t  _Direction;

/// @brief Field _DistanceMultipler, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__DistanceMultipler, put=setStaticF__DistanceMultipler)) int32_t  _DistanceMultipler;

/// @brief Field _DistortionBlend, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__DistortionBlend, put=setStaticF__DistortionBlend)) int32_t  _DistortionBlend;

/// @brief Field _DistortionEnabled, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__DistortionEnabled, put=setStaticF__DistortionEnabled)) int32_t  _DistortionEnabled;

/// @brief Field _DistortionStrength, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__DistortionStrength, put=setStaticF__DistortionStrength)) int32_t  _DistortionStrength;

/// @brief Field _DistortionStrengthScaled, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__DistortionStrengthScaled, put=setStaticF__DistortionStrengthScaled)) int32_t  _DistortionStrengthScaled;

/// @brief Field _Dither, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Dither, put=setStaticF__Dither)) int32_t  _Dither;

/// @brief Field _DitherStrength, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__DitherStrength, put=setStaticF__DitherStrength)) int32_t  _DitherStrength;

/// @brief Field _DoTextureRotation, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__DoTextureRotation, put=setStaticF__DoTextureRotation)) int32_t  _DoTextureRotation;

/// @brief Field _DragColor, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__DragColor, put=setStaticF__DragColor)) int32_t  _DragColor;

/// @brief Field _DrawOrder, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__DrawOrder, put=setStaticF__DrawOrder)) int32_t  _DrawOrder;

/// @brief Field _DstBlend, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__DstBlend, put=setStaticF__DstBlend)) int32_t  _DstBlend;

/// @brief Field _DstBlendAlpha, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__DstBlendAlpha, put=setStaticF__DstBlendAlpha)) int32_t  _DstBlendAlpha;

/// @brief Field _EMISSION_COLOR, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__EMISSION_COLOR, put=setStaticF__EMISSION_COLOR)) int32_t  _EMISSION_COLOR;

/// @brief Field _EMISSION_COLOR_MAP, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__EMISSION_COLOR_MAP, put=setStaticF__EMISSION_COLOR_MAP)) int32_t  _EMISSION_COLOR_MAP;

/// @brief Field _EMISSION_WEIGHT, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__EMISSION_WEIGHT, put=setStaticF__EMISSION_WEIGHT)) int32_t  _EMISSION_WEIGHT;

/// @brief Field _EdgeThickness, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__EdgeThickness, put=setStaticF__EdgeThickness)) int32_t  _EdgeThickness;

/// @brief Field _EditorTime, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__EditorTime, put=setStaticF__EditorTime)) int32_t  _EditorTime;

/// @brief Field _Emission, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Emission, put=setStaticF__Emission)) int32_t  _Emission;

/// @brief Field _EmissionColor, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__EmissionColor, put=setStaticF__EmissionColor)) int32_t  _EmissionColor;

/// @brief Field _EmissionDissolveAnimation, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__EmissionDissolveAnimation, put=setStaticF__EmissionDissolveAnimation)) int32_t  _EmissionDissolveAnimation;

/// @brief Field _EmissionDissolveEdgeSize, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__EmissionDissolveEdgeSize, put=setStaticF__EmissionDissolveEdgeSize)) int32_t  _EmissionDissolveEdgeSize;

/// @brief Field _EmissionDissolveProgress, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__EmissionDissolveProgress, put=setStaticF__EmissionDissolveProgress)) int32_t  _EmissionDissolveProgress;

/// @brief Field _EmissionIntensityInDynamic, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__EmissionIntensityInDynamic, put=setStaticF__EmissionIntensityInDynamic)) int32_t  _EmissionIntensityInDynamic;

/// @brief Field _EmissionMap, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__EmissionMap, put=setStaticF__EmissionMap)) int32_t  _EmissionMap;

/// @brief Field _EmissionMap_Atlas, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__EmissionMap_Atlas, put=setStaticF__EmissionMap_Atlas)) int32_t  _EmissionMap_Atlas;

/// @brief Field _EmissionMap_AtlasSlice, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__EmissionMap_AtlasSlice, put=setStaticF__EmissionMap_AtlasSlice)) int32_t  _EmissionMap_AtlasSlice;

/// @brief Field _EmissionMap_ST, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__EmissionMap_ST, put=setStaticF__EmissionMap_ST)) int32_t  _EmissionMap_ST;

/// @brief Field _EmissionMaskByBaseMapAlpha, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__EmissionMaskByBaseMapAlpha, put=setStaticF__EmissionMaskByBaseMapAlpha)) int32_t  _EmissionMaskByBaseMapAlpha;

/// @brief Field _EmissionToggle, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__EmissionToggle, put=setStaticF__EmissionToggle)) int32_t  _EmissionToggle;

/// @brief Field _EmissionUVScrollSpeed, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__EmissionUVScrollSpeed, put=setStaticF__EmissionUVScrollSpeed)) int32_t  _EmissionUVScrollSpeed;

/// @brief Field _EmissionUseUVWaveWarp, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__EmissionUseUVWaveWarp, put=setStaticF__EmissionUseUVWaveWarp)) int32_t  _EmissionUseUVWaveWarp;

/// @brief Field _EmissiveAmount, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__EmissiveAmount, put=setStaticF__EmissiveAmount)) int32_t  _EmissiveAmount;

/// @brief Field _EmissiveTex, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__EmissiveTex, put=setStaticF__EmissiveTex)) int32_t  _EmissiveTex;

/// @brief Field _EmptyTex, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__EmptyTex, put=setStaticF__EmptyTex)) int32_t  _EmptyTex;

/// @brief Field _EmptyTex_ST, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__EmptyTex_ST, put=setStaticF__EmptyTex_ST)) int32_t  _EmptyTex_ST;

/// @brief Field _EnableExternalAlpha, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__EnableExternalAlpha, put=setStaticF__EnableExternalAlpha)) int32_t  _EnableExternalAlpha;

/// @brief Field _EnableHeightBlend, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__EnableHeightBlend, put=setStaticF__EnableHeightBlend)) int32_t  _EnableHeightBlend;

/// @brief Field _EnableInstancedPerPixelNormal, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__EnableInstancedPerPixelNormal, put=setStaticF__EnableInstancedPerPixelNormal)) int32_t  _EnableInstancedPerPixelNormal;

/// @brief Field _EnableOpacity, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__EnableOpacity, put=setStaticF__EnableOpacity)) int32_t  _EnableOpacity;

/// @brief Field _EnvMapSampler, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__EnvMapSampler, put=setStaticF__EnvMapSampler)) int32_t  _EnvMapSampler;

/// @brief Field _EnvMapSampler_ST, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__EnvMapSampler_ST, put=setStaticF__EnvMapSampler_ST)) int32_t  _EnvMapSampler_ST;

/// @brief Field _EnvMatrixRotation, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__EnvMatrixRotation, put=setStaticF__EnvMatrixRotation)) int32_t  _EnvMatrixRotation;

/// @brief Field _EnvironmentDepthBias, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__EnvironmentDepthBias, put=setStaticF__EnvironmentDepthBias)) int32_t  _EnvironmentDepthBias;

/// @brief Field _EnvironmentReflections, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__EnvironmentReflections, put=setStaticF__EnvironmentReflections)) int32_t  _EnvironmentReflections;

/// @brief Field _Exposure, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Exposure, put=setStaticF__Exposure)) int32_t  _Exposure;

/// @brief Field _ExtraTex, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ExtraTex, put=setStaticF__ExtraTex)) int32_t  _ExtraTex;

/// @brief Field _ExtraTex_ST, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ExtraTex_ST, put=setStaticF__ExtraTex_ST)) int32_t  _ExtraTex_ST;

/// @brief Field _EyeOverrideUV, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__EyeOverrideUV, put=setStaticF__EyeOverrideUV)) int32_t  _EyeOverrideUV;

/// @brief Field _EyeOverrideUVTransform, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__EyeOverrideUVTransform, put=setStaticF__EyeOverrideUVTransform)) int32_t  _EyeOverrideUVTransform;

/// @brief Field _EyeTileOffsetUV, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__EyeTileOffsetUV, put=setStaticF__EyeTileOffsetUV)) int32_t  _EyeTileOffsetUV;

/// @brief Field _FADE_END_EDGE, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__FADE_END_EDGE, put=setStaticF__FADE_END_EDGE)) int32_t  _FADE_END_EDGE;

/// @brief Field _FADE_START_EDGE, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__FADE_START_EDGE, put=setStaticF__FADE_START_EDGE)) int32_t  _FADE_START_EDGE;

/// @brief Field _FaceColor, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__FaceColor, put=setStaticF__FaceColor)) int32_t  _FaceColor;

/// @brief Field _FaceDilate, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__FaceDilate, put=setStaticF__FaceDilate)) int32_t  _FaceDilate;

/// @brief Field _FaceShininess, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__FaceShininess, put=setStaticF__FaceShininess)) int32_t  _FaceShininess;

/// @brief Field _FaceTex, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__FaceTex, put=setStaticF__FaceTex)) int32_t  _FaceTex;

/// @brief Field _FaceTex_ST, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__FaceTex_ST, put=setStaticF__FaceTex_ST)) int32_t  _FaceTex_ST;

/// @brief Field _FaceText_ST, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__FaceText_ST, put=setStaticF__FaceText_ST)) int32_t  _FaceText_ST;

/// @brief Field _FaceUVSpeed, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__FaceUVSpeed, put=setStaticF__FaceUVSpeed)) int32_t  _FaceUVSpeed;

/// @brief Field _FaceUVSpeedX, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__FaceUVSpeedX, put=setStaticF__FaceUVSpeedX)) int32_t  _FaceUVSpeedX;

/// @brief Field _FaceUVSpeedY, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__FaceUVSpeedY, put=setStaticF__FaceUVSpeedY)) int32_t  _FaceUVSpeedY;

/// @brief Field _Fade, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Fade, put=setStaticF__Fade)) int32_t  _Fade;

/// @brief Field _FadeColor, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__FadeColor, put=setStaticF__FadeColor)) int32_t  _FadeColor;

/// @brief Field _FadeColorIntensity, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__FadeColorIntensity, put=setStaticF__FadeColorIntensity)) int32_t  _FadeColorIntensity;

/// @brief Field _FadeLimit, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__FadeLimit, put=setStaticF__FadeLimit)) int32_t  _FadeLimit;

/// @brief Field _FadeSign, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__FadeSign, put=setStaticF__FadeSign)) int32_t  _FadeSign;

/// @brief Field _FallbackAmount, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__FallbackAmount, put=setStaticF__FallbackAmount)) int32_t  _FallbackAmount;

/// @brief Field _FallbackTex, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__FallbackTex, put=setStaticF__FallbackTex)) int32_t  _FallbackTex;

/// @brief Field _FallbackTex_ST, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__FallbackTex_ST, put=setStaticF__FallbackTex_ST)) int32_t  _FallbackTex_ST;

/// @brief Field _FalloffSampler, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__FalloffSampler, put=setStaticF__FalloffSampler)) int32_t  _FalloffSampler;

/// @brief Field _FalloffSampler_ST, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__FalloffSampler_ST, put=setStaticF__FalloffSampler_ST)) int32_t  _FalloffSampler_ST;

/// @brief Field _FalloffTex, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__FalloffTex, put=setStaticF__FalloffTex)) int32_t  _FalloffTex;

/// @brief Field _FalloffTex_ST, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__FalloffTex_ST, put=setStaticF__FalloffTex_ST)) int32_t  _FalloffTex_ST;

/// @brief Field _FingerGlowMask, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__FingerGlowMask, put=setStaticF__FingerGlowMask)) int32_t  _FingerGlowMask;

/// @brief Field _FingerGlowMask_ST, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__FingerGlowMask_ST, put=setStaticF__FingerGlowMask_ST)) int32_t  _FingerGlowMask_ST;

/// @brief Field _FirstTex, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__FirstTex, put=setStaticF__FirstTex)) int32_t  _FirstTex;

/// @brief Field _FirstTex_ST, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__FirstTex_ST, put=setStaticF__FirstTex_ST)) int32_t  _FirstTex_ST;

/// @brief Field _FirstViewColor, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__FirstViewColor, put=setStaticF__FirstViewColor)) int32_t  _FirstViewColor;

/// @brief Field _FlameWobbleNoise, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__FlameWobbleNoise, put=setStaticF__FlameWobbleNoise)) int32_t  _FlameWobbleNoise;

/// @brief Field _FlameWobbleNoise_Atlas, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__FlameWobbleNoise_Atlas, put=setStaticF__FlameWobbleNoise_Atlas)) int32_t  _FlameWobbleNoise_Atlas;

/// @brief Field _FlameWobbleNoise_AtlasSlice, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__FlameWobbleNoise_AtlasSlice, put=setStaticF__FlameWobbleNoise_AtlasSlice)) int32_t  _FlameWobbleNoise_AtlasSlice;

/// @brief Field _FlipbookBlending, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__FlipbookBlending, put=setStaticF__FlipbookBlending)) int32_t  _FlipbookBlending;

/// @brief Field _FlipbookMode, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__FlipbookMode, put=setStaticF__FlipbookMode)) int32_t  _FlipbookMode;

/// @brief Field _Flow, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Flow, put=setStaticF__Flow)) int32_t  _Flow;

/// @brief Field _FlowFac, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__FlowFac, put=setStaticF__FlowFac)) int32_t  _FlowFac;

/// @brief Field _FourthTex, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__FourthTex, put=setStaticF__FourthTex)) int32_t  _FourthTex;

/// @brief Field _FourthTex_ST, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__FourthTex_ST, put=setStaticF__FourthTex_ST)) int32_t  _FourthTex_ST;

/// @brief Field _FresnelPower, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__FresnelPower, put=setStaticF__FresnelPower)) int32_t  _FresnelPower;

/// @brief Field _FullTex, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__FullTex, put=setStaticF__FullTex)) int32_t  _FullTex;

/// @brief Field _FullTex_ST, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__FullTex_ST, put=setStaticF__FullTex_ST)) int32_t  _FullTex_ST;

/// @brief Field _GChannelColor, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__GChannelColor, put=setStaticF__GChannelColor)) int32_t  _GChannelColor;

/// @brief Field _GammaCorrection, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__GammaCorrection, put=setStaticF__GammaCorrection)) int32_t  _GammaCorrection;

/// @brief Field _GenerateGlow, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__GenerateGlow, put=setStaticF__GenerateGlow)) int32_t  _GenerateGlow;

/// @brief Field _GetBlendFactorMaxGizmoDistance, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__GetBlendFactorMaxGizmoDistance, put=setStaticF__GetBlendFactorMaxGizmoDistance)) int32_t  _GetBlendFactorMaxGizmoDistance;

/// @brief Field _GizmoCircleRadius, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__GizmoCircleRadius, put=setStaticF__GizmoCircleRadius)) int32_t  _GizmoCircleRadius;

/// @brief Field _GizmoLength, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__GizmoLength, put=setStaticF__GizmoLength)) int32_t  _GizmoLength;

/// @brief Field _GizmoPosition, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__GizmoPosition, put=setStaticF__GizmoPosition)) int32_t  _GizmoPosition;

/// @brief Field _GizmoRenderMode, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__GizmoRenderMode, put=setStaticF__GizmoRenderMode)) int32_t  _GizmoRenderMode;

/// @brief Field _GizmoSplitPlane, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__GizmoSplitPlane, put=setStaticF__GizmoSplitPlane)) int32_t  _GizmoSplitPlane;

/// @brief Field _GizmoSplitPlaneOrtho, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__GizmoSplitPlaneOrtho, put=setStaticF__GizmoSplitPlaneOrtho)) int32_t  _GizmoSplitPlaneOrtho;

/// @brief Field _GizmoThickness, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__GizmoThickness, put=setStaticF__GizmoThickness)) int32_t  _GizmoThickness;

/// @brief Field _GizmoZoneCenter, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__GizmoZoneCenter, put=setStaticF__GizmoZoneCenter)) int32_t  _GizmoZoneCenter;

/// @brief Field _Gloss, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Gloss, put=setStaticF__Gloss)) int32_t  _Gloss;

/// @brief Field _GlossMapScale, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__GlossMapScale, put=setStaticF__GlossMapScale)) int32_t  _GlossMapScale;

/// @brief Field _Glossiness, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Glossiness, put=setStaticF__Glossiness)) int32_t  _Glossiness;

/// @brief Field _GlossinessSource, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__GlossinessSource, put=setStaticF__GlossinessSource)) int32_t  _GlossinessSource;

/// @brief Field _GlossyReflections, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__GlossyReflections, put=setStaticF__GlossyReflections)) int32_t  _GlossyReflections;

/// @brief Field _GlowColor, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__GlowColor, put=setStaticF__GlowColor)) int32_t  _GlowColor;

/// @brief Field _GlowInner, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__GlowInner, put=setStaticF__GlowInner)) int32_t  _GlowInner;

/// @brief Field _GlowOffset, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__GlowOffset, put=setStaticF__GlowOffset)) int32_t  _GlowOffset;

/// @brief Field _GlowOuter, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__GlowOuter, put=setStaticF__GlowOuter)) int32_t  _GlowOuter;

/// @brief Field _GlowPower, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__GlowPower, put=setStaticF__GlowPower)) int32_t  _GlowPower;

/// @brief Field _Goo, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Goo, put=setStaticF__Goo)) int32_t  _Goo;

/// @brief Field _GooN, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__GooN, put=setStaticF__GooN)) int32_t  _GooN;

/// @brief Field _GooN_ST, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__GooN_ST, put=setStaticF__GooN_ST)) int32_t  _GooN_ST;

/// @brief Field _Goo_ST, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Goo_ST, put=setStaticF__Goo_ST)) int32_t  _Goo_ST;

/// @brief Field _Gradient, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Gradient, put=setStaticF__Gradient)) int32_t  _Gradient;

/// @brief Field _GradientMap, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__GradientMap, put=setStaticF__GradientMap)) int32_t  _GradientMap;

/// @brief Field _GradientMapToggle, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__GradientMapToggle, put=setStaticF__GradientMapToggle)) int32_t  _GradientMapToggle;

/// @brief Field _GradientPosition0, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__GradientPosition0, put=setStaticF__GradientPosition0)) int32_t  _GradientPosition0;

/// @brief Field _GradientPosition1, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__GradientPosition1, put=setStaticF__GradientPosition1)) int32_t  _GradientPosition1;

/// @brief Field _GradientPosition2, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__GradientPosition2, put=setStaticF__GradientPosition2)) int32_t  _GradientPosition2;

/// @brief Field _GradientScale, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__GradientScale, put=setStaticF__GradientScale)) int32_t  _GradientScale;

/// @brief Field _GradientStop1, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__GradientStop1, put=setStaticF__GradientStop1)) int32_t  _GradientStop1;

/// @brief Field _GradientStop2, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__GradientStop2, put=setStaticF__GradientStop2)) int32_t  _GradientStop2;

/// @brief Field _GradientStop3, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__GradientStop3, put=setStaticF__GradientStop3)) int32_t  _GradientStop3;

/// @brief Field _GradientTex, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__GradientTex, put=setStaticF__GradientTex)) int32_t  _GradientTex;

/// @brief Field _GradientTex_ST, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__GradientTex_ST, put=setStaticF__GradientTex_ST)) int32_t  _GradientTex_ST;

/// @brief Field _GreyZoneException, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__GreyZoneException, put=setStaticF__GreyZoneException)) int32_t  _GreyZoneException;

/// @brief Field _GuardianFade, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__GuardianFade, put=setStaticF__GuardianFade)) int32_t  _GuardianFade;

/// @brief Field _HOT_WHITE_, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__HOT_WHITE_, put=setStaticF__HOT_WHITE_)) int32_t  _HOT_WHITE_;

/// @brief Field _HalfLambertToggle, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__HalfLambertToggle, put=setStaticF__HalfLambertToggle)) int32_t  _HalfLambertToggle;

/// @brief Field _HandAlpha, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__HandAlpha, put=setStaticF__HandAlpha)) int32_t  _HandAlpha;

/// @brief Field _HandleZTest, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__HandleZTest, put=setStaticF__HandleZTest)) int32_t  _HandleZTest;

/// @brief Field _HandleZWrite, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__HandleZWrite, put=setStaticF__HandleZWrite)) int32_t  _HandleZWrite;

/// @brief Field _Height, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Height, put=setStaticF__Height)) int32_t  _Height;

/// @brief Field _HeightBasedWaterEffect, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__HeightBasedWaterEffect, put=setStaticF__HeightBasedWaterEffect)) int32_t  _HeightBasedWaterEffect;

/// @brief Field _HeightTransition, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__HeightTransition, put=setStaticF__HeightTransition)) int32_t  _HeightTransition;

/// @brief Field _Hemispherical, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Hemispherical, put=setStaticF__Hemispherical)) int32_t  _Hemispherical;

/// @brief Field _HighLightAttenuation, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__HighLightAttenuation, put=setStaticF__HighLightAttenuation)) int32_t  _HighLightAttenuation;

/// @brief Field _Highlight, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Highlight, put=setStaticF__Highlight)) int32_t  _Highlight;

/// @brief Field _HighlightColor, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__HighlightColor, put=setStaticF__HighlightColor)) int32_t  _HighlightColor;

/// @brief Field _HighlightOpacity, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__HighlightOpacity, put=setStaticF__HighlightOpacity)) int32_t  _HighlightOpacity;

/// @brief Field _HorizonColor, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__HorizonColor, put=setStaticF__HorizonColor)) int32_t  _HorizonColor;

/// @brief Field _HorizonParams, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__HorizonParams, put=setStaticF__HorizonParams)) int32_t  _HorizonParams;

/// @brief Field _HueVariation, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__HueVariation, put=setStaticF__HueVariation)) int32_t  _HueVariation;

/// @brief Field _HueVariationColor, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__HueVariationColor, put=setStaticF__HueVariationColor)) int32_t  _HueVariationColor;

/// @brief Field _HueVariationKwToggle, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__HueVariationKwToggle, put=setStaticF__HueVariationKwToggle)) int32_t  _HueVariationKwToggle;

/// @brief Field _InconfidenceTex, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__InconfidenceTex, put=setStaticF__InconfidenceTex)) int32_t  _InconfidenceTex;

/// @brief Field _InconfidenceTex_ST, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__InconfidenceTex_ST, put=setStaticF__InconfidenceTex_ST)) int32_t  _InconfidenceTex_ST;

/// @brief Field _IndexGlowValue, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__IndexGlowValue, put=setStaticF__IndexGlowValue)) int32_t  _IndexGlowValue;

/// @brief Field _Inflation, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Inflation, put=setStaticF__Inflation)) int32_t  _Inflation;

/// @brief Field _Influences, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Influences, put=setStaticF__Influences)) int32_t  _Influences;

/// @brief Field _InnerGlowColor, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__InnerGlowColor, put=setStaticF__InnerGlowColor)) int32_t  _InnerGlowColor;

/// @brief Field _InnerGlowOn, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__InnerGlowOn, put=setStaticF__InnerGlowOn)) int32_t  _InnerGlowOn;

/// @brief Field _InnerGlowParams, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__InnerGlowParams, put=setStaticF__InnerGlowParams)) int32_t  _InnerGlowParams;

/// @brief Field _InnerGlowSine, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__InnerGlowSine, put=setStaticF__InnerGlowSine)) int32_t  _InnerGlowSine;

/// @brief Field _InnerGlowSinePeriod, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__InnerGlowSinePeriod, put=setStaticF__InnerGlowSinePeriod)) int32_t  _InnerGlowSinePeriod;

/// @brief Field _InnerGlowSinePhaseShift, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__InnerGlowSinePhaseShift, put=setStaticF__InnerGlowSinePhaseShift)) int32_t  _InnerGlowSinePhaseShift;

/// @brief Field _InnerGlowTap, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__InnerGlowTap, put=setStaticF__InnerGlowTap)) int32_t  _InnerGlowTap;

/// @brief Field _Input, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Input, put=setStaticF__Input)) int32_t  _Input;

/// @brief Field _InsideColor, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__InsideColor, put=setStaticF__InsideColor)) int32_t  _InsideColor;

/// @brief Field _Intensity, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Intensity, put=setStaticF__Intensity)) int32_t  _Intensity;

/// @brief Field _Interpolator, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Interpolator, put=setStaticF__Interpolator)) int32_t  _Interpolator;

/// @brief Field _InvFade, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__InvFade, put=setStaticF__InvFade)) int32_t  _InvFade;

/// @brief Field _InvertedAlpha, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__InvertedAlpha, put=setStaticF__InvertedAlpha)) int32_t  _InvertedAlpha;

/// @brief Field _Is_On, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Is_On, put=setStaticF__Is_On)) int32_t  _Is_On;

/// @brief Field _Is_Recording, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Is_Recording, put=setStaticF__Is_Recording)) int32_t  _Is_Recording;

/// @brief Field _IsoPerimeter, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__IsoPerimeter, put=setStaticF__IsoPerimeter)) int32_t  _IsoPerimeter;

/// @brief Field _LIGHTMAP_MODE_, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__LIGHTMAP_MODE_, put=setStaticF__LIGHTMAP_MODE_)) int32_t  _LIGHTMAP_MODE_;

/// @brief Field _LavaLampToggle, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__LavaLampToggle, put=setStaticF__LavaLampToggle)) int32_t  _LavaLampToggle;

/// @brief Field _LengthPadding, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__LengthPadding, put=setStaticF__LengthPadding)) int32_t  _LengthPadding;

/// @brief Field _LightAngle, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__LightAngle, put=setStaticF__LightAngle)) int32_t  _LightAngle;

/// @brief Field _LightColor, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__LightColor, put=setStaticF__LightColor)) int32_t  _LightColor;

/// @brief Field _LightColor0, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__LightColor0, put=setStaticF__LightColor0)) int32_t  _LightColor0;

/// @brief Field _Lightmap, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Lightmap, put=setStaticF__Lightmap)) int32_t  _Lightmap;

/// @brief Field _LightmapExposure, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__LightmapExposure, put=setStaticF__LightmapExposure)) int32_t  _LightmapExposure;

/// @brief Field _Line, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Line, put=setStaticF__Line)) int32_t  _Line;

/// @brief Field _LineDistance, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__LineDistance, put=setStaticF__LineDistance)) int32_t  _LineDistance;

/// @brief Field _LineWidth, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__LineWidth, put=setStaticF__LineWidth)) int32_t  _LineWidth;

/// @brief Field _LinearGradientColor1, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__LinearGradientColor1, put=setStaticF__LinearGradientColor1)) int32_t  _LinearGradientColor1;

/// @brief Field _LinearGradientColor2, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__LinearGradientColor2, put=setStaticF__LinearGradientColor2)) int32_t  _LinearGradientColor2;

/// @brief Field _LinearGradientEnd, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__LinearGradientEnd, put=setStaticF__LinearGradientEnd)) int32_t  _LinearGradientEnd;

/// @brief Field _LinearGradientStart, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__LinearGradientStart, put=setStaticF__LinearGradientStart)) int32_t  _LinearGradientStart;

/// @brief Field _LinesThickness, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__LinesThickness, put=setStaticF__LinesThickness)) int32_t  _LinesThickness;

/// @brief Field _LiquidContainer, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__LiquidContainer, put=setStaticF__LiquidContainer)) int32_t  _LiquidContainer;

/// @brief Field _LiquidFill, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__LiquidFill, put=setStaticF__LiquidFill)) int32_t  _LiquidFill;

/// @brief Field _LiquidFillNormal, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__LiquidFillNormal, put=setStaticF__LiquidFillNormal)) int32_t  _LiquidFillNormal;

/// @brief Field _LiquidPlaneNormal, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__LiquidPlaneNormal, put=setStaticF__LiquidPlaneNormal)) int32_t  _LiquidPlaneNormal;

/// @brief Field _LiquidPlanePosition, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__LiquidPlanePosition, put=setStaticF__LiquidPlanePosition)) int32_t  _LiquidPlanePosition;

/// @brief Field _LiquidSurfaceColor, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__LiquidSurfaceColor, put=setStaticF__LiquidSurfaceColor)) int32_t  _LiquidSurfaceColor;

/// @brief Field _LiquidSwayX, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__LiquidSwayX, put=setStaticF__LiquidSwayX)) int32_t  _LiquidSwayX;

/// @brief Field _LiquidSwayY, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__LiquidSwayY, put=setStaticF__LiquidSwayY)) int32_t  _LiquidSwayY;

/// @brief Field _LiquidVolume, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__LiquidVolume, put=setStaticF__LiquidVolume)) int32_t  _LiquidVolume;

/// @brief Field _LitDirStencilReadMask, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__LitDirStencilReadMask, put=setStaticF__LitDirStencilReadMask)) int32_t  _LitDirStencilReadMask;

/// @brief Field _LitDirStencilRef, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__LitDirStencilRef, put=setStaticF__LitDirStencilRef)) int32_t  _LitDirStencilRef;

/// @brief Field _LitDirStencilWriteMask, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__LitDirStencilWriteMask, put=setStaticF__LitDirStencilWriteMask)) int32_t  _LitDirStencilWriteMask;

/// @brief Field _LitPunctualStencilReadMask, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__LitPunctualStencilReadMask, put=setStaticF__LitPunctualStencilReadMask)) int32_t  _LitPunctualStencilReadMask;

/// @brief Field _LitPunctualStencilRef, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__LitPunctualStencilRef, put=setStaticF__LitPunctualStencilRef)) int32_t  _LitPunctualStencilRef;

/// @brief Field _LitPunctualStencilWriteMask, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__LitPunctualStencilWriteMask, put=setStaticF__LitPunctualStencilWriteMask)) int32_t  _LitPunctualStencilWriteMask;

/// @brief Field _LitStencilReadMask, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__LitStencilReadMask, put=setStaticF__LitStencilReadMask)) int32_t  _LitStencilReadMask;

/// @brief Field _LitStencilRef, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__LitStencilRef, put=setStaticF__LitStencilRef)) int32_t  _LitStencilRef;

/// @brief Field _LitStencilWriteMask, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__LitStencilWriteMask, put=setStaticF__LitStencilWriteMask)) int32_t  _LitStencilWriteMask;

/// @brief Field _MAIN_TEX_MODE__, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__MAIN_TEX_MODE__, put=setStaticF__MAIN_TEX_MODE__)) int32_t  _MAIN_TEX_MODE__;

/// @brief Field _METALNESS, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__METALNESS, put=setStaticF__METALNESS)) int32_t  _METALNESS;

/// @brief Field _METALNESS_MAP, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__METALNESS_MAP, put=setStaticF__METALNESS_MAP)) int32_t  _METALNESS_MAP;

/// @brief Field _MainTex, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__MainTex, put=setStaticF__MainTex)) int32_t  _MainTex;

/// @brief Field _MainTexMMBias, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__MainTexMMBias, put=setStaticF__MainTexMMBias)) int32_t  _MainTexMMBias;

/// @brief Field _MainTex_ST, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__MainTex_ST, put=setStaticF__MainTex_ST)) int32_t  _MainTex_ST;

/// @brief Field _Mask, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Mask, put=setStaticF__Mask)) int32_t  _Mask;

/// @brief Field _Mask0, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Mask0, put=setStaticF__Mask0)) int32_t  _Mask0;

/// @brief Field _Mask0_ST, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Mask0_ST, put=setStaticF__Mask0_ST)) int32_t  _Mask0_ST;

/// @brief Field _Mask1, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Mask1, put=setStaticF__Mask1)) int32_t  _Mask1;

/// @brief Field _Mask1_ST, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Mask1_ST, put=setStaticF__Mask1_ST)) int32_t  _Mask1_ST;

/// @brief Field _Mask2, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Mask2, put=setStaticF__Mask2)) int32_t  _Mask2;

/// @brief Field _Mask2_ST, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Mask2_ST, put=setStaticF__Mask2_ST)) int32_t  _Mask2_ST;

/// @brief Field _Mask3, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Mask3, put=setStaticF__Mask3)) int32_t  _Mask3;

/// @brief Field _Mask3_ST, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Mask3_ST, put=setStaticF__Mask3_ST)) int32_t  _Mask3_ST;

/// @brief Field _MaskCoord, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__MaskCoord, put=setStaticF__MaskCoord)) int32_t  _MaskCoord;

/// @brief Field _MaskEdgeColor, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__MaskEdgeColor, put=setStaticF__MaskEdgeColor)) int32_t  _MaskEdgeColor;

/// @brief Field _MaskEdgeSoftness, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__MaskEdgeSoftness, put=setStaticF__MaskEdgeSoftness)) int32_t  _MaskEdgeSoftness;

/// @brief Field _MaskInverse, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__MaskInverse, put=setStaticF__MaskInverse)) int32_t  _MaskInverse;

/// @brief Field _MaskMap, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__MaskMap, put=setStaticF__MaskMap)) int32_t  _MaskMap;

/// @brief Field _MaskMapToggle, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__MaskMapToggle, put=setStaticF__MaskMapToggle)) int32_t  _MaskMapToggle;

/// @brief Field _MaskMap_ST, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__MaskMap_ST, put=setStaticF__MaskMap_ST)) int32_t  _MaskMap_ST;

/// @brief Field _MaskMap_WH, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__MaskMap_WH, put=setStaticF__MaskMap_WH)) int32_t  _MaskMap_WH;

/// @brief Field _MaskSoftnessX, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__MaskSoftnessX, put=setStaticF__MaskSoftnessX)) int32_t  _MaskSoftnessX;

/// @brief Field _MaskSoftnessY, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__MaskSoftnessY, put=setStaticF__MaskSoftnessY)) int32_t  _MaskSoftnessY;

/// @brief Field _MaskTex, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__MaskTex, put=setStaticF__MaskTex)) int32_t  _MaskTex;

/// @brief Field _MaskTex_ST, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__MaskTex_ST, put=setStaticF__MaskTex_ST)) int32_t  _MaskTex_ST;

/// @brief Field _MaskWipeControl, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__MaskWipeControl, put=setStaticF__MaskWipeControl)) int32_t  _MaskWipeControl;

/// @brief Field _Masks, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Masks, put=setStaticF__Masks)) int32_t  _Masks;

/// @brief Field _MatrixForward, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__MatrixForward, put=setStaticF__MatrixForward)) int32_t  _MatrixForward;

/// @brief Field _MatrixRight, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__MatrixRight, put=setStaticF__MatrixRight)) int32_t  _MatrixRight;

/// @brief Field _MatrixUp, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__MatrixUp, put=setStaticF__MatrixUp)) int32_t  _MatrixUp;

/// @brief Field _MaxColor, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__MaxColor, put=setStaticF__MaxColor)) int32_t  _MaxColor;

/// @brief Field _MaxFadeDistance, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__MaxFadeDistance, put=setStaticF__MaxFadeDistance)) int32_t  _MaxFadeDistance;

/// @brief Field _MaxRadius, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__MaxRadius, put=setStaticF__MaxRadius)) int32_t  _MaxRadius;

/// @brief Field _Metallic, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Metallic, put=setStaticF__Metallic)) int32_t  _Metallic;

/// @brief Field _Metallic0, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Metallic0, put=setStaticF__Metallic0)) int32_t  _Metallic0;

/// @brief Field _Metallic1, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Metallic1, put=setStaticF__Metallic1)) int32_t  _Metallic1;

/// @brief Field _Metallic2, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Metallic2, put=setStaticF__Metallic2)) int32_t  _Metallic2;

/// @brief Field _Metallic3, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Metallic3, put=setStaticF__Metallic3)) int32_t  _Metallic3;

/// @brief Field _MetallicGloss, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__MetallicGloss, put=setStaticF__MetallicGloss)) int32_t  _MetallicGloss;

/// @brief Field _MetallicGlossMap, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__MetallicGlossMap, put=setStaticF__MetallicGlossMap)) int32_t  _MetallicGlossMap;

/// @brief Field _MetallicGlossMap_ST, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__MetallicGlossMap_ST, put=setStaticF__MetallicGlossMap_ST)) int32_t  _MetallicGlossMap_ST;

/// @brief Field _MetallicTex, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__MetallicTex, put=setStaticF__MetallicTex)) int32_t  _MetallicTex;

/// @brief Field _MetallicTex_ST, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__MetallicTex_ST, put=setStaticF__MetallicTex_ST)) int32_t  _MetallicTex_ST;

/// @brief Field _Metallic_ST, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Metallic_ST, put=setStaticF__Metallic_ST)) int32_t  _Metallic_ST;

/// @brief Field _MiddleColor, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__MiddleColor, put=setStaticF__MiddleColor)) int32_t  _MiddleColor;

/// @brief Field _MiddleGlowValue, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__MiddleGlowValue, put=setStaticF__MiddleGlowValue)) int32_t  _MiddleGlowValue;

/// @brief Field _MinFadeDistance, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__MinFadeDistance, put=setStaticF__MinFadeDistance)) int32_t  _MinFadeDistance;

/// @brief Field _MinRadius, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__MinRadius, put=setStaticF__MinRadius)) int32_t  _MinRadius;

/// @brief Field _MinVisibleAlpha, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__MinVisibleAlpha, put=setStaticF__MinVisibleAlpha)) int32_t  _MinVisibleAlpha;

/// @brief Field _MipBias, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__MipBias, put=setStaticF__MipBias)) int32_t  _MipBias;

/// @brief Field _Mode, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Mode, put=setStaticF__Mode)) int32_t  _Mode;

/// @brief Field _MoonAlpha, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__MoonAlpha, put=setStaticF__MoonAlpha)) int32_t  _MoonAlpha;

/// @brief Field _MoonAngles, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__MoonAngles, put=setStaticF__MoonAngles)) int32_t  _MoonAngles;

/// @brief Field _MoonMap, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__MoonMap, put=setStaticF__MoonMap)) int32_t  _MoonMap;

/// @brief Field _MoonMap_ST, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__MoonMap_ST, put=setStaticF__MoonMap_ST)) int32_t  _MoonMap_ST;

/// @brief Field _MoonSize, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__MoonSize, put=setStaticF__MoonSize)) int32_t  _MoonSize;

/// @brief Field _MouthMap, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__MouthMap, put=setStaticF__MouthMap)) int32_t  _MouthMap;

/// @brief Field _MouthMap_Atlas, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__MouthMap_Atlas, put=setStaticF__MouthMap_Atlas)) int32_t  _MouthMap_Atlas;

/// @brief Field _MouthMap_ST, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__MouthMap_ST, put=setStaticF__MouthMap_ST)) int32_t  _MouthMap_ST;

/// @brief Field _N, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__N, put=setStaticF__N)) int32_t  _N;

/// @brief Field _NORMAL_MAP, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__NORMAL_MAP, put=setStaticF__NORMAL_MAP)) int32_t  _NORMAL_MAP;

/// @brief Field _NoTexture, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__NoTexture, put=setStaticF__NoTexture)) int32_t  _NoTexture;

/// @brief Field _NoiseTex, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__NoiseTex, put=setStaticF__NoiseTex)) int32_t  _NoiseTex;

/// @brief Field _NoiseTex_ST, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__NoiseTex_ST, put=setStaticF__NoiseTex_ST)) int32_t  _NoiseTex_ST;

/// @brief Field _Noise_Size, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Noise_Size, put=setStaticF__Noise_Size)) int32_t  _Noise_Size;

/// @brief Field _Noise_Strength, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Noise_Strength, put=setStaticF__Noise_Strength)) int32_t  _Noise_Strength;

/// @brief Field _Normal, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Normal, put=setStaticF__Normal)) int32_t  _Normal;

/// @brief Field _Normal0, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Normal0, put=setStaticF__Normal0)) int32_t  _Normal0;

/// @brief Field _Normal0_ST, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Normal0_ST, put=setStaticF__Normal0_ST)) int32_t  _Normal0_ST;

/// @brief Field _Normal1, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Normal1, put=setStaticF__Normal1)) int32_t  _Normal1;

/// @brief Field _Normal1_ST, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Normal1_ST, put=setStaticF__Normal1_ST)) int32_t  _Normal1_ST;

/// @brief Field _Normal2, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Normal2, put=setStaticF__Normal2)) int32_t  _Normal2;

/// @brief Field _Normal2_ST, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Normal2_ST, put=setStaticF__Normal2_ST)) int32_t  _Normal2_ST;

/// @brief Field _Normal3, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Normal3, put=setStaticF__Normal3)) int32_t  _Normal3;

/// @brief Field _Normal3_ST, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Normal3_ST, put=setStaticF__Normal3_ST)) int32_t  _Normal3_ST;

/// @brief Field _NormalMap, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__NormalMap, put=setStaticF__NormalMap)) int32_t  _NormalMap;

/// @brief Field _NormalMapKwToggle, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__NormalMapKwToggle, put=setStaticF__NormalMapKwToggle)) int32_t  _NormalMapKwToggle;

/// @brief Field _NormalMapSampler, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__NormalMapSampler, put=setStaticF__NormalMapSampler)) int32_t  _NormalMapSampler;

/// @brief Field _NormalMapSampler_ST, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__NormalMapSampler_ST, put=setStaticF__NormalMapSampler_ST)) int32_t  _NormalMapSampler_ST;

/// @brief Field _NormalMap_ST, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__NormalMap_ST, put=setStaticF__NormalMap_ST)) int32_t  _NormalMap_ST;

/// @brief Field _Normal_ST, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Normal_ST, put=setStaticF__Normal_ST)) int32_t  _Normal_ST;

/// @brief Field _NormalsShrink, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__NormalsShrink, put=setStaticF__NormalsShrink)) int32_t  _NormalsShrink;

/// @brief Field _NotVisibleColor, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__NotVisibleColor, put=setStaticF__NotVisibleColor)) int32_t  _NotVisibleColor;

/// @brief Field _NumLayersCount, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__NumLayersCount, put=setStaticF__NumLayersCount)) int32_t  _NumLayersCount;

/// @brief Field _Number_of_Tiles, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Number_of_Tiles, put=setStaticF__Number_of_Tiles)) int32_t  _Number_of_Tiles;

/// @brief Field _OPACITY, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__OPACITY, put=setStaticF__OPACITY)) int32_t  _OPACITY;

/// @brief Field _OPACITY_MAP, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__OPACITY_MAP, put=setStaticF__OPACITY_MAP)) int32_t  _OPACITY_MAP;

/// @brief Field _Occlusion, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Occlusion, put=setStaticF__Occlusion)) int32_t  _Occlusion;

/// @brief Field _OcclusionEnabled, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__OcclusionEnabled, put=setStaticF__OcclusionEnabled)) int32_t  _OcclusionEnabled;

/// @brief Field _OcclusionMap, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__OcclusionMap, put=setStaticF__OcclusionMap)) int32_t  _OcclusionMap;

/// @brief Field _OcclusionMap_ST, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__OcclusionMap_ST, put=setStaticF__OcclusionMap_ST)) int32_t  _OcclusionMap_ST;

/// @brief Field _OcclusionStrength, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__OcclusionStrength, put=setStaticF__OcclusionStrength)) int32_t  _OcclusionStrength;

/// @brief Field _Off_Color, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Off_Color, put=setStaticF__Off_Color)) int32_t  _Off_Color;

/// @brief Field _Offset, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Offset, put=setStaticF__Offset)) int32_t  _Offset;

/// @brief Field _OffsetFactor, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__OffsetFactor, put=setStaticF__OffsetFactor)) int32_t  _OffsetFactor;

/// @brief Field _OffsetUnits, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__OffsetUnits, put=setStaticF__OffsetUnits)) int32_t  _OffsetUnits;

/// @brief Field _OfsX, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__OfsX, put=setStaticF__OfsX)) int32_t  _OfsX;

/// @brief Field _OfsY, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__OfsY, put=setStaticF__OfsY)) int32_t  _OfsY;

/// @brief Field _OldHueVarBehavior, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__OldHueVarBehavior, put=setStaticF__OldHueVarBehavior)) int32_t  _OldHueVarBehavior;

/// @brief Field _Opacity, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Opacity, put=setStaticF__Opacity)) int32_t  _Opacity;

/// @brief Field _OpacityThreshold, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__OpacityThreshold, put=setStaticF__OpacityThreshold)) int32_t  _OpacityThreshold;

/// @brief Field _OrdinateScale, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__OrdinateScale, put=setStaticF__OrdinateScale)) int32_t  _OrdinateScale;

/// @brief Field _OutlineColor, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__OutlineColor, put=setStaticF__OutlineColor)) int32_t  _OutlineColor;

/// @brief Field _OutlineColor1, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__OutlineColor1, put=setStaticF__OutlineColor1)) int32_t  _OutlineColor1;

/// @brief Field _OutlineColor2, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__OutlineColor2, put=setStaticF__OutlineColor2)) int32_t  _OutlineColor2;

/// @brief Field _OutlineColor3, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__OutlineColor3, put=setStaticF__OutlineColor3)) int32_t  _OutlineColor3;

/// @brief Field _OutlineJointColor, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__OutlineJointColor, put=setStaticF__OutlineJointColor)) int32_t  _OutlineJointColor;

/// @brief Field _OutlineMode, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__OutlineMode, put=setStaticF__OutlineMode)) int32_t  _OutlineMode;

/// @brief Field _OutlineOffset1, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__OutlineOffset1, put=setStaticF__OutlineOffset1)) int32_t  _OutlineOffset1;

/// @brief Field _OutlineOffset2, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__OutlineOffset2, put=setStaticF__OutlineOffset2)) int32_t  _OutlineOffset2;

/// @brief Field _OutlineOffset3, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__OutlineOffset3, put=setStaticF__OutlineOffset3)) int32_t  _OutlineOffset3;

/// @brief Field _OutlineOpacity, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__OutlineOpacity, put=setStaticF__OutlineOpacity)) int32_t  _OutlineOpacity;

/// @brief Field _OutlineShininess, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__OutlineShininess, put=setStaticF__OutlineShininess)) int32_t  _OutlineShininess;

/// @brief Field _OutlineSoftness, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__OutlineSoftness, put=setStaticF__OutlineSoftness)) int32_t  _OutlineSoftness;

/// @brief Field _OutlineTex, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__OutlineTex, put=setStaticF__OutlineTex)) int32_t  _OutlineTex;

/// @brief Field _OutlineTex_ST, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__OutlineTex_ST, put=setStaticF__OutlineTex_ST)) int32_t  _OutlineTex_ST;

/// @brief Field _OutlineUVSpeed, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__OutlineUVSpeed, put=setStaticF__OutlineUVSpeed)) int32_t  _OutlineUVSpeed;

/// @brief Field _OutlineUVSpeedX, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__OutlineUVSpeedX, put=setStaticF__OutlineUVSpeedX)) int32_t  _OutlineUVSpeedX;

/// @brief Field _OutlineUVSpeedY, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__OutlineUVSpeedY, put=setStaticF__OutlineUVSpeedY)) int32_t  _OutlineUVSpeedY;

/// @brief Field _OutlineWidth, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__OutlineWidth, put=setStaticF__OutlineWidth)) int32_t  _OutlineWidth;

/// @brief Field _OverlayTex, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__OverlayTex, put=setStaticF__OverlayTex)) int32_t  _OverlayTex;

/// @brief Field _OverlayTex_ST, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__OverlayTex_ST, put=setStaticF__OverlayTex_ST)) int32_t  _OverlayTex_ST;

/// @brief Field _Padding, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Padding, put=setStaticF__Padding)) int32_t  _Padding;

/// @brief Field _PaddingAndSize, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__PaddingAndSize, put=setStaticF__PaddingAndSize)) int32_t  _PaddingAndSize;

/// @brief Field _Parallax, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Parallax, put=setStaticF__Parallax)) int32_t  _Parallax;

/// @brief Field _ParallaxAABias, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ParallaxAABias, put=setStaticF__ParallaxAABias)) int32_t  _ParallaxAABias;

/// @brief Field _ParallaxAAToggle, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ParallaxAAToggle, put=setStaticF__ParallaxAAToggle)) int32_t  _ParallaxAAToggle;

/// @brief Field _ParallaxAmplitude, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ParallaxAmplitude, put=setStaticF__ParallaxAmplitude)) int32_t  _ParallaxAmplitude;

/// @brief Field _ParallaxMap, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ParallaxMap, put=setStaticF__ParallaxMap)) int32_t  _ParallaxMap;

/// @brief Field _ParallaxMap_ST, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ParallaxMap_ST, put=setStaticF__ParallaxMap_ST)) int32_t  _ParallaxMap_ST;

/// @brief Field _ParallaxPlanarToggle, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ParallaxPlanarToggle, put=setStaticF__ParallaxPlanarToggle)) int32_t  _ParallaxPlanarToggle;

/// @brief Field _ParallaxSamplesMinMax, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ParallaxSamplesMinMax, put=setStaticF__ParallaxSamplesMinMax)) int32_t  _ParallaxSamplesMinMax;

/// @brief Field _ParallaxToggle, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ParallaxToggle, put=setStaticF__ParallaxToggle)) int32_t  _ParallaxToggle;

/// @brief Field _Pass, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Pass, put=setStaticF__Pass)) int32_t  _Pass;

/// @brief Field _PassthroughAmount, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__PassthroughAmount, put=setStaticF__PassthroughAmount)) int32_t  _PassthroughAmount;

/// @brief Field _PassthroughMask, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__PassthroughMask, put=setStaticF__PassthroughMask)) int32_t  _PassthroughMask;

/// @brief Field _PassthroughMask_ST, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__PassthroughMask_ST, put=setStaticF__PassthroughMask_ST)) int32_t  _PassthroughMask_ST;

/// @brief Field _PerspectiveFilter, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__PerspectiveFilter, put=setStaticF__PerspectiveFilter)) int32_t  _PerspectiveFilter;

/// @brief Field _Phi0, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Phi0, put=setStaticF__Phi0)) int32_t  _Phi0;

/// @brief Field _Phi1, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Phi1, put=setStaticF__Phi1)) int32_t  _Phi1;

/// @brief Field _PinchDeform, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__PinchDeform, put=setStaticF__PinchDeform)) int32_t  _PinchDeform;

/// @brief Field _PinkyGlowValue, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__PinkyGlowValue, put=setStaticF__PinkyGlowValue)) int32_t  _PinkyGlowValue;

/// @brief Field _PixelScale, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__PixelScale, put=setStaticF__PixelScale)) int32_t  _PixelScale;

/// @brief Field _PixelWidth, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__PixelWidth, put=setStaticF__PixelWidth)) int32_t  _PixelWidth;

/// @brief Field _PointsThickness, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__PointsThickness, put=setStaticF__PointsThickness)) int32_t  _PointsThickness;

/// @brief Field _Power, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Power, put=setStaticF__Power)) int32_t  _Power;

/// @brief Field _Primary_Color, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Primary_Color, put=setStaticF__Primary_Color)) int32_t  _Primary_Color;

/// @brief Field _Progress, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Progress, put=setStaticF__Progress)) int32_t  _Progress;

/// @brief Field _ProgressValue, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ProgressValue, put=setStaticF__ProgressValue)) int32_t  _ProgressValue;

/// @brief Field _ProjectionParams, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ProjectionParams, put=setStaticF__ProjectionParams)) int32_t  _ProjectionParams;

/// @brief Field _ProximityColor, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ProximityColor, put=setStaticF__ProximityColor)) int32_t  _ProximityColor;

/// @brief Field _ProximityStrength, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ProximityStrength, put=setStaticF__ProximityStrength)) int32_t  _ProximityStrength;

/// @brief Field _ProximityTransitionRange, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ProximityTransitionRange, put=setStaticF__ProximityTransitionRange)) int32_t  _ProximityTransitionRange;

/// @brief Field _PulseRate, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__PulseRate, put=setStaticF__PulseRate)) int32_t  _PulseRate;

/// @brief Field _QueueControl, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__QueueControl, put=setStaticF__QueueControl)) int32_t  _QueueControl;

/// @brief Field _QueueOffset, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__QueueOffset, put=setStaticF__QueueOffset)) int32_t  _QueueOffset;

/// @brief Field _REFLECTIONS_COLOR, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__REFLECTIONS_COLOR, put=setStaticF__REFLECTIONS_COLOR)) int32_t  _REFLECTIONS_COLOR;

/// @brief Field _REFLECTIONS_COLOR_MAP, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__REFLECTIONS_COLOR_MAP, put=setStaticF__REFLECTIONS_COLOR_MAP)) int32_t  _REFLECTIONS_COLOR_MAP;

/// @brief Field _REFLECTIONS_IOR, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__REFLECTIONS_IOR, put=setStaticF__REFLECTIONS_IOR)) int32_t  _REFLECTIONS_IOR;

/// @brief Field _REFLECTIONS_IOR_MAP, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__REFLECTIONS_IOR_MAP, put=setStaticF__REFLECTIONS_IOR_MAP)) int32_t  _REFLECTIONS_IOR_MAP;

/// @brief Field _REFLECTIONS_ROUGHNESS, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__REFLECTIONS_ROUGHNESS, put=setStaticF__REFLECTIONS_ROUGHNESS)) int32_t  _REFLECTIONS_ROUGHNESS;

/// @brief Field _REFLECTIONS_ROUGHNESS_MAP, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__REFLECTIONS_ROUGHNESS_MAP, put=setStaticF__REFLECTIONS_ROUGHNESS_MAP)) int32_t  _REFLECTIONS_ROUGHNESS_MAP;

/// @brief Field _REFLECTIONS_WEIGHT, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__REFLECTIONS_WEIGHT, put=setStaticF__REFLECTIONS_WEIGHT)) int32_t  _REFLECTIONS_WEIGHT;

/// @brief Field _RadialGradientBackgroundOpacity, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__RadialGradientBackgroundOpacity, put=setStaticF__RadialGradientBackgroundOpacity)) int32_t  _RadialGradientBackgroundOpacity;

/// @brief Field _RadialGradientIntensity, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__RadialGradientIntensity, put=setStaticF__RadialGradientIntensity)) int32_t  _RadialGradientIntensity;

/// @brief Field _RadialGradientOpacity, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__RadialGradientOpacity, put=setStaticF__RadialGradientOpacity)) int32_t  _RadialGradientOpacity;

/// @brief Field _RadialGradientScale, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__RadialGradientScale, put=setStaticF__RadialGradientScale)) int32_t  _RadialGradientScale;

/// @brief Field _Radii, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Radii, put=setStaticF__Radii)) int32_t  _Radii;

/// @brief Field _Radius, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Radius, put=setStaticF__Radius)) int32_t  _Radius;

/// @brief Field _ReceiveShadows, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ReceiveShadows, put=setStaticF__ReceiveShadows)) int32_t  _ReceiveShadows;

/// @brief Field _Rect, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Rect, put=setStaticF__Rect)) int32_t  _Rect;

/// @brief Field _ReflectAlbedoTint, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ReflectAlbedoTint, put=setStaticF__ReflectAlbedoTint)) int32_t  _ReflectAlbedoTint;

/// @brief Field _ReflectBoxCubePos, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ReflectBoxCubePos, put=setStaticF__ReflectBoxCubePos)) int32_t  _ReflectBoxCubePos;

/// @brief Field _ReflectBoxProjectToggle, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ReflectBoxProjectToggle, put=setStaticF__ReflectBoxProjectToggle)) int32_t  _ReflectBoxProjectToggle;

/// @brief Field _ReflectBoxRotation, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ReflectBoxRotation, put=setStaticF__ReflectBoxRotation)) int32_t  _ReflectBoxRotation;

/// @brief Field _ReflectBoxSize, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ReflectBoxSize, put=setStaticF__ReflectBoxSize)) int32_t  _ReflectBoxSize;

/// @brief Field _ReflectExposure, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ReflectExposure, put=setStaticF__ReflectExposure)) int32_t  _ReflectExposure;

/// @brief Field _ReflectFaceColor, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ReflectFaceColor, put=setStaticF__ReflectFaceColor)) int32_t  _ReflectFaceColor;

/// @brief Field _ReflectMatcapPerspToggle, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ReflectMatcapPerspToggle, put=setStaticF__ReflectMatcapPerspToggle)) int32_t  _ReflectMatcapPerspToggle;

/// @brief Field _ReflectMatcapToggle, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ReflectMatcapToggle, put=setStaticF__ReflectMatcapToggle)) int32_t  _ReflectMatcapToggle;

/// @brief Field _ReflectNormalTex, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ReflectNormalTex, put=setStaticF__ReflectNormalTex)) int32_t  _ReflectNormalTex;

/// @brief Field _ReflectNormalToggle, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ReflectNormalToggle, put=setStaticF__ReflectNormalToggle)) int32_t  _ReflectNormalToggle;

/// @brief Field _ReflectOffset, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ReflectOffset, put=setStaticF__ReflectOffset)) int32_t  _ReflectOffset;

/// @brief Field _ReflectOpacity, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ReflectOpacity, put=setStaticF__ReflectOpacity)) int32_t  _ReflectOpacity;

/// @brief Field _ReflectOutlineColor, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ReflectOutlineColor, put=setStaticF__ReflectOutlineColor)) int32_t  _ReflectOutlineColor;

/// @brief Field _ReflectRotate, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ReflectRotate, put=setStaticF__ReflectRotate)) int32_t  _ReflectRotate;

/// @brief Field _ReflectScale, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ReflectScale, put=setStaticF__ReflectScale)) int32_t  _ReflectScale;

/// @brief Field _ReflectTex, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ReflectTex, put=setStaticF__ReflectTex)) int32_t  _ReflectTex;

/// @brief Field _ReflectTint, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ReflectTint, put=setStaticF__ReflectTint)) int32_t  _ReflectTint;

/// @brief Field _ReflectToggle, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ReflectToggle, put=setStaticF__ReflectToggle)) int32_t  _ReflectToggle;

/// @brief Field _Reflectivity, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Reflectivity, put=setStaticF__Reflectivity)) int32_t  _Reflectivity;

/// @brief Field _RendererColor, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__RendererColor, put=setStaticF__RendererColor)) int32_t  _RendererColor;

/// @brief Field _RespawnAmount, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__RespawnAmount, put=setStaticF__RespawnAmount)) int32_t  _RespawnAmount;

/// @brief Field _Rim, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Rim, put=setStaticF__Rim)) int32_t  _Rim;

/// @brief Field _RimColor, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__RimColor, put=setStaticF__RimColor)) int32_t  _RimColor;

/// @brief Field _RimFactor, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__RimFactor, put=setStaticF__RimFactor)) int32_t  _RimFactor;

/// @brief Field _RimLightSampler, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__RimLightSampler, put=setStaticF__RimLightSampler)) int32_t  _RimLightSampler;

/// @brief Field _RimLightSampler_ST, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__RimLightSampler_ST, put=setStaticF__RimLightSampler_ST)) int32_t  _RimLightSampler_ST;

/// @brief Field _RimPower, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__RimPower, put=setStaticF__RimPower)) int32_t  _RimPower;

/// @brief Field _RingGlowValue, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__RingGlowValue, put=setStaticF__RingGlowValue)) int32_t  _RingGlowValue;

/// @brief Field _RotateAngle, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__RotateAngle, put=setStaticF__RotateAngle)) int32_t  _RotateAngle;

/// @brief Field _RotateAnim, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__RotateAnim, put=setStaticF__RotateAnim)) int32_t  _RotateAnim;

/// @brief Field _RotateOnYAxisBySinTime, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__RotateOnYAxisBySinTime, put=setStaticF__RotateOnYAxisBySinTime)) int32_t  _RotateOnYAxisBySinTime;

/// @brief Field _RotateSpeed, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__RotateSpeed, put=setStaticF__RotateSpeed)) int32_t  _RotateSpeed;

/// @brief Field _Rough, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Rough, put=setStaticF__Rough)) int32_t  _Rough;

/// @brief Field _SATTex, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__SATTex, put=setStaticF__SATTex)) int32_t  _SATTex;

/// @brief Field _SATTex_ST, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__SATTex_ST, put=setStaticF__SATTex_ST)) int32_t  _SATTex_ST;

/// @brief Field _SPECULAR_COLOR, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__SPECULAR_COLOR, put=setStaticF__SPECULAR_COLOR)) int32_t  _SPECULAR_COLOR;

/// @brief Field _SPECULAR_COLOR_MAP, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__SPECULAR_COLOR_MAP, put=setStaticF__SPECULAR_COLOR_MAP)) int32_t  _SPECULAR_COLOR_MAP;

/// @brief Field _SPECULAR_IOR, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__SPECULAR_IOR, put=setStaticF__SPECULAR_IOR)) int32_t  _SPECULAR_IOR;

/// @brief Field _SPECULAR_IOR_MAP, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__SPECULAR_IOR_MAP, put=setStaticF__SPECULAR_IOR_MAP)) int32_t  _SPECULAR_IOR_MAP;

/// @brief Field _SPECULAR_ROUGHNESS, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__SPECULAR_ROUGHNESS, put=setStaticF__SPECULAR_ROUGHNESS)) int32_t  _SPECULAR_ROUGHNESS;

/// @brief Field _SPECULAR_ROUGHNESS_MAP, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__SPECULAR_ROUGHNESS_MAP, put=setStaticF__SPECULAR_ROUGHNESS_MAP)) int32_t  _SPECULAR_ROUGHNESS_MAP;

/// @brief Field _SampleGI, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__SampleGI, put=setStaticF__SampleGI)) int32_t  _SampleGI;

/// @brief Field _Scale, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Scale, put=setStaticF__Scale)) int32_t  _Scale;

/// @brief Field _ScaleOffsetB, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ScaleOffsetB, put=setStaticF__ScaleOffsetB)) int32_t  _ScaleOffsetB;

/// @brief Field _ScaleOffsetG, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ScaleOffsetG, put=setStaticF__ScaleOffsetG)) int32_t  _ScaleOffsetG;

/// @brief Field _ScaleOffsetR, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ScaleOffsetR, put=setStaticF__ScaleOffsetR)) int32_t  _ScaleOffsetR;

/// @brief Field _ScaleRG, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ScaleRG, put=setStaticF__ScaleRG)) int32_t  _ScaleRG;

/// @brief Field _ScaleRatioA, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ScaleRatioA, put=setStaticF__ScaleRatioA)) int32_t  _ScaleRatioA;

/// @brief Field _ScaleRatioB, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ScaleRatioB, put=setStaticF__ScaleRatioB)) int32_t  _ScaleRatioB;

/// @brief Field _ScaleRatioC, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ScaleRatioC, put=setStaticF__ScaleRatioC)) int32_t  _ScaleRatioC;

/// @brief Field _ScaleX, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ScaleX, put=setStaticF__ScaleX)) int32_t  _ScaleX;

/// @brief Field _ScaleY, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ScaleY, put=setStaticF__ScaleY)) int32_t  _ScaleY;

/// @brief Field _SceneMeshZWrite, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__SceneMeshZWrite, put=setStaticF__SceneMeshZWrite)) int32_t  _SceneMeshZWrite;

/// @brief Field _SceneTint, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__SceneTint, put=setStaticF__SceneTint)) int32_t  _SceneTint;

/// @brief Field _Scl, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Scl, put=setStaticF__Scl)) int32_t  _Scl;

/// @brief Field _ScreenParams, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ScreenParams, put=setStaticF__ScreenParams)) int32_t  _ScreenParams;

/// @brief Field _ScreenRatio, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ScreenRatio, put=setStaticF__ScreenRatio)) int32_t  _ScreenRatio;

/// @brief Field _ScrollSpeedAndScale, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ScrollSpeedAndScale, put=setStaticF__ScrollSpeedAndScale)) int32_t  _ScrollSpeedAndScale;

/// @brief Field _ScrollUOffset, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ScrollUOffset, put=setStaticF__ScrollUOffset)) int32_t  _ScrollUOffset;

/// @brief Field _SecondTex, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__SecondTex, put=setStaticF__SecondTex)) int32_t  _SecondTex;

/// @brief Field _SecondTex_ST, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__SecondTex_ST, put=setStaticF__SecondTex_ST)) int32_t  _SecondTex_ST;

/// @brief Field _SecondViewColor, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__SecondViewColor, put=setStaticF__SecondViewColor)) int32_t  _SecondViewColor;

/// @brief Field _Secondary_Color, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Secondary_Color, put=setStaticF__Secondary_Color)) int32_t  _Secondary_Color;

/// @brief Field _SeeThru, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__SeeThru, put=setStaticF__SeeThru)) int32_t  _SeeThru;

/// @brief Field _SelectedOpacity, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__SelectedOpacity, put=setStaticF__SelectedOpacity)) int32_t  _SelectedOpacity;

/// @brief Field _SettingsPreset, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__SettingsPreset, put=setStaticF__SettingsPreset)) int32_t  _SettingsPreset;

/// @brief Field _ShaderFlags, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ShaderFlags, put=setStaticF__ShaderFlags)) int32_t  _ShaderFlags;

/// @brief Field _ShadowColor, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ShadowColor, put=setStaticF__ShadowColor)) int32_t  _ShadowColor;

/// @brief Field _ShadowColor0, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ShadowColor0, put=setStaticF__ShadowColor0)) int32_t  _ShadowColor0;

/// @brief Field _ShadowColor1, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ShadowColor1, put=setStaticF__ShadowColor1)) int32_t  _ShadowColor1;

/// @brief Field _ShadowColorMask, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ShadowColorMask, put=setStaticF__ShadowColorMask)) int32_t  _ShadowColorMask;

/// @brief Field _ShadowIntensity, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ShadowIntensity, put=setStaticF__ShadowIntensity)) int32_t  _ShadowIntensity;

/// @brief Field _ShadowTex, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ShadowTex, put=setStaticF__ShadowTex)) int32_t  _ShadowTex;

/// @brief Field _ShadowTex_ST, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ShadowTex_ST, put=setStaticF__ShadowTex_ST)) int32_t  _ShadowTex_ST;

/// @brief Field _Sharpness, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Sharpness, put=setStaticF__Sharpness)) int32_t  _Sharpness;

/// @brief Field _Shininess, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Shininess, put=setStaticF__Shininess)) int32_t  _Shininess;

/// @brief Field _ShrinkLimit, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ShrinkLimit, put=setStaticF__ShrinkLimit)) int32_t  _ShrinkLimit;

/// @brief Field _SideFalloff, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__SideFalloff, put=setStaticF__SideFalloff)) int32_t  _SideFalloff;

/// @brief Field _SimpleLitDirStencilReadMask, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__SimpleLitDirStencilReadMask, put=setStaticF__SimpleLitDirStencilReadMask)) int32_t  _SimpleLitDirStencilReadMask;

/// @brief Field _SimpleLitDirStencilRef, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__SimpleLitDirStencilRef, put=setStaticF__SimpleLitDirStencilRef)) int32_t  _SimpleLitDirStencilRef;

/// @brief Field _SimpleLitDirStencilWriteMask, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__SimpleLitDirStencilWriteMask, put=setStaticF__SimpleLitDirStencilWriteMask)) int32_t  _SimpleLitDirStencilWriteMask;

/// @brief Field _SimpleLitPunctualStencilReadMask, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__SimpleLitPunctualStencilReadMask, put=setStaticF__SimpleLitPunctualStencilReadMask)) int32_t  _SimpleLitPunctualStencilReadMask;

/// @brief Field _SimpleLitPunctualStencilRef, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__SimpleLitPunctualStencilRef, put=setStaticF__SimpleLitPunctualStencilRef)) int32_t  _SimpleLitPunctualStencilRef;

/// @brief Field _SimpleLitPunctualStencilWriteMask, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__SimpleLitPunctualStencilWriteMask, put=setStaticF__SimpleLitPunctualStencilWriteMask)) int32_t  _SimpleLitPunctualStencilWriteMask;

/// @brief Field _SimpleLitStencilReadMask, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__SimpleLitStencilReadMask, put=setStaticF__SimpleLitStencilReadMask)) int32_t  _SimpleLitStencilReadMask;

/// @brief Field _SimpleLitStencilRef, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__SimpleLitStencilRef, put=setStaticF__SimpleLitStencilRef)) int32_t  _SimpleLitStencilRef;

/// @brief Field _SimpleLitStencilWriteMask, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__SimpleLitStencilWriteMask, put=setStaticF__SimpleLitStencilWriteMask)) int32_t  _SimpleLitStencilWriteMask;

/// @brief Field _SinTime, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__SinTime, put=setStaticF__SinTime)) int32_t  _SinTime;

/// @brief Field _Size, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Size, put=setStaticF__Size)) int32_t  _Size;

/// @brief Field _Sky1_Col, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Sky1_Col, put=setStaticF__Sky1_Col)) int32_t  _Sky1_Col;

/// @brief Field _Sky1_Exp, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Sky1_Exp, put=setStaticF__Sky1_Exp)) int32_t  _Sky1_Exp;

/// @brief Field _Sky1_Rot, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Sky1_Rot, put=setStaticF__Sky1_Rot)) int32_t  _Sky1_Rot;

/// @brief Field _Sky2_Col, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Sky2_Col, put=setStaticF__Sky2_Col)) int32_t  _Sky2_Col;

/// @brief Field _Sky2_Exp, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Sky2_Exp, put=setStaticF__Sky2_Exp)) int32_t  _Sky2_Exp;

/// @brief Field _Sky2_Rot, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Sky2_Rot, put=setStaticF__Sky2_Rot)) int32_t  _Sky2_Rot;

/// @brief Field _SkyAlpha, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__SkyAlpha, put=setStaticF__SkyAlpha)) int32_t  _SkyAlpha;

/// @brief Field _SkyGradient, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__SkyGradient, put=setStaticF__SkyGradient)) int32_t  _SkyGradient;

/// @brief Field _SkyGradient_ST, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__SkyGradient_ST, put=setStaticF__SkyGradient_ST)) int32_t  _SkyGradient_ST;

/// @brief Field _SkyLayer1, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__SkyLayer1, put=setStaticF__SkyLayer1)) int32_t  _SkyLayer1;

/// @brief Field _SkyLayer1_Params, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__SkyLayer1_Params, put=setStaticF__SkyLayer1_Params)) int32_t  _SkyLayer1_Params;

/// @brief Field _SkyLayer1_ST, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__SkyLayer1_ST, put=setStaticF__SkyLayer1_ST)) int32_t  _SkyLayer1_ST;

/// @brief Field _SkyLayer2, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__SkyLayer2, put=setStaticF__SkyLayer2)) int32_t  _SkyLayer2;

/// @brief Field _SkyLayer2_Params, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__SkyLayer2_Params, put=setStaticF__SkyLayer2_Params)) int32_t  _SkyLayer2_Params;

/// @brief Field _SkyLayer2_ST, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__SkyLayer2_ST, put=setStaticF__SkyLayer2_ST)) int32_t  _SkyLayer2_ST;

/// @brief Field _Sky_Off, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Sky_Off, put=setStaticF__Sky_Off)) int32_t  _Sky_Off;

/// @brief Field _Smoothness, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Smoothness, put=setStaticF__Smoothness)) int32_t  _Smoothness;

/// @brief Field _Smoothness0, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Smoothness0, put=setStaticF__Smoothness0)) int32_t  _Smoothness0;

/// @brief Field _Smoothness1, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Smoothness1, put=setStaticF__Smoothness1)) int32_t  _Smoothness1;

/// @brief Field _Smoothness2, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Smoothness2, put=setStaticF__Smoothness2)) int32_t  _Smoothness2;

/// @brief Field _Smoothness3, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Smoothness3, put=setStaticF__Smoothness3)) int32_t  _Smoothness3;

/// @brief Field _SmoothnessSource, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__SmoothnessSource, put=setStaticF__SmoothnessSource)) int32_t  _SmoothnessSource;

/// @brief Field _SmoothnessTextureChannel, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__SmoothnessTextureChannel, put=setStaticF__SmoothnessTextureChannel)) int32_t  _SmoothnessTextureChannel;

/// @brief Field _SoftParticleFadeParams, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__SoftParticleFadeParams, put=setStaticF__SoftParticleFadeParams)) int32_t  _SoftParticleFadeParams;

/// @brief Field _SoftParticlesEnabled, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__SoftParticlesEnabled, put=setStaticF__SoftParticlesEnabled)) int32_t  _SoftParticlesEnabled;

/// @brief Field _SoftParticlesFarFadeDistance, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__SoftParticlesFarFadeDistance, put=setStaticF__SoftParticlesFarFadeDistance)) int32_t  _SoftParticlesFarFadeDistance;

/// @brief Field _SoftParticlesNearFadeDistance, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__SoftParticlesNearFadeDistance, put=setStaticF__SoftParticlesNearFadeDistance)) int32_t  _SoftParticlesNearFadeDistance;

/// @brief Field _Softness, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Softness, put=setStaticF__Softness)) int32_t  _Softness;

/// @brief Field _SpecColor, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__SpecColor, put=setStaticF__SpecColor)) int32_t  _SpecColor;

/// @brief Field _SpecGlossMap, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__SpecGlossMap, put=setStaticF__SpecGlossMap)) int32_t  _SpecGlossMap;

/// @brief Field _SpecGlossMap_ST, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__SpecGlossMap_ST, put=setStaticF__SpecGlossMap_ST)) int32_t  _SpecGlossMap_ST;

/// @brief Field _SpecSource, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__SpecSource, put=setStaticF__SpecSource)) int32_t  _SpecSource;

/// @brief Field _SpecularColor, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__SpecularColor, put=setStaticF__SpecularColor)) int32_t  _SpecularColor;

/// @brief Field _SpecularDir, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__SpecularDir, put=setStaticF__SpecularDir)) int32_t  _SpecularDir;

/// @brief Field _SpecularHighlights, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__SpecularHighlights, put=setStaticF__SpecularHighlights)) int32_t  _SpecularHighlights;

/// @brief Field _SpecularPower, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__SpecularPower, put=setStaticF__SpecularPower)) int32_t  _SpecularPower;

/// @brief Field _SpecularPowerIntensity, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__SpecularPowerIntensity, put=setStaticF__SpecularPowerIntensity)) int32_t  _SpecularPowerIntensity;

/// @brief Field _SpecularReflectionSampler, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__SpecularReflectionSampler, put=setStaticF__SpecularReflectionSampler)) int32_t  _SpecularReflectionSampler;

/// @brief Field _SpecularReflectionSampler_ST, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__SpecularReflectionSampler_ST, put=setStaticF__SpecularReflectionSampler_ST)) int32_t  _SpecularReflectionSampler_ST;

/// @brief Field _SpecularUseDiffuseColor, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__SpecularUseDiffuseColor, put=setStaticF__SpecularUseDiffuseColor)) int32_t  _SpecularUseDiffuseColor;

/// @brief Field _Speed, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Speed, put=setStaticF__Speed)) int32_t  _Speed;

/// @brief Field _SpeedA, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__SpeedA, put=setStaticF__SpeedA)) int32_t  _SpeedA;

/// @brief Field _SpeedB, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__SpeedB, put=setStaticF__SpeedB)) int32_t  _SpeedB;

/// @brief Field _SpeedG, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__SpeedG, put=setStaticF__SpeedG)) int32_t  _SpeedG;

/// @brief Field _SpeedR, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__SpeedR, put=setStaticF__SpeedR)) int32_t  _SpeedR;

/// @brief Field _SpeedRG, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__SpeedRG, put=setStaticF__SpeedRG)) int32_t  _SpeedRG;

/// @brief Field _Splat0, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Splat0, put=setStaticF__Splat0)) int32_t  _Splat0;

/// @brief Field _Splat0_ST, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Splat0_ST, put=setStaticF__Splat0_ST)) int32_t  _Splat0_ST;

/// @brief Field _Splat1, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Splat1, put=setStaticF__Splat1)) int32_t  _Splat1;

/// @brief Field _Splat1_ST, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Splat1_ST, put=setStaticF__Splat1_ST)) int32_t  _Splat1_ST;

/// @brief Field _Splat2, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Splat2, put=setStaticF__Splat2)) int32_t  _Splat2;

/// @brief Field _Splat2_ST, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Splat2_ST, put=setStaticF__Splat2_ST)) int32_t  _Splat2_ST;

/// @brief Field _Splat3, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Splat3, put=setStaticF__Splat3)) int32_t  _Splat3;

/// @brief Field _Splat3_ST, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Splat3_ST, put=setStaticF__Splat3_ST)) int32_t  _Splat3_ST;

/// @brief Field _SpotDirection, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__SpotDirection, put=setStaticF__SpotDirection)) int32_t  _SpotDirection;

/// @brief Field _SrcBlend, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__SrcBlend, put=setStaticF__SrcBlend)) int32_t  _SrcBlend;

/// @brief Field _SrcBlendAlpha, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__SrcBlendAlpha, put=setStaticF__SrcBlendAlpha)) int32_t  _SrcBlendAlpha;

/// @brief Field _SrcRect, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__SrcRect, put=setStaticF__SrcRect)) int32_t  _SrcRect;

/// @brief Field _Stamp, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Stamp, put=setStaticF__Stamp)) int32_t  _Stamp;

/// @brief Field _StampMultipler, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__StampMultipler, put=setStaticF__StampMultipler)) int32_t  _StampMultipler;

/// @brief Field _StealthEffectOn, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__StealthEffectOn, put=setStaticF__StealthEffectOn)) int32_t  _StealthEffectOn;

/// @brief Field _Stencil, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Stencil, put=setStaticF__Stencil)) int32_t  _Stencil;

/// @brief Field _StencilComp, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__StencilComp, put=setStaticF__StencilComp)) int32_t  _StencilComp;

/// @brief Field _StencilComparison, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__StencilComparison, put=setStaticF__StencilComparison)) int32_t  _StencilComparison;

/// @brief Field _StencilFailFront, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__StencilFailFront, put=setStaticF__StencilFailFront)) int32_t  _StencilFailFront;

/// @brief Field _StencilMask, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__StencilMask, put=setStaticF__StencilMask)) int32_t  _StencilMask;

/// @brief Field _StencilOp, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__StencilOp, put=setStaticF__StencilOp)) int32_t  _StencilOp;

/// @brief Field _StencilPassFront, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__StencilPassFront, put=setStaticF__StencilPassFront)) int32_t  _StencilPassFront;

/// @brief Field _StencilReadMask, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__StencilReadMask, put=setStaticF__StencilReadMask)) int32_t  _StencilReadMask;

/// @brief Field _StencilRef, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__StencilRef, put=setStaticF__StencilRef)) int32_t  _StencilRef;

/// @brief Field _StencilRefDitherMask, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__StencilRefDitherMask, put=setStaticF__StencilRefDitherMask)) int32_t  _StencilRefDitherMask;

/// @brief Field _StencilReference, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__StencilReference, put=setStaticF__StencilReference)) int32_t  _StencilReference;

/// @brief Field _StencilWriteDitherMask, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__StencilWriteDitherMask, put=setStaticF__StencilWriteDitherMask)) int32_t  _StencilWriteDitherMask;

/// @brief Field _StencilWriteMask, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__StencilWriteMask, put=setStaticF__StencilWriteMask)) int32_t  _StencilWriteMask;

/// @brief Field _StencilZFailFront, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__StencilZFailFront, put=setStaticF__StencilZFailFront)) int32_t  _StencilZFailFront;

/// @brief Field _StreamingColor, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__StreamingColor, put=setStaticF__StreamingColor)) int32_t  _StreamingColor;

/// @brief Field _SubShaderOptions, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__SubShaderOptions, put=setStaticF__SubShaderOptions)) int32_t  _SubShaderOptions;

/// @brief Field _SubsurfaceColor, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__SubsurfaceColor, put=setStaticF__SubsurfaceColor)) int32_t  _SubsurfaceColor;

/// @brief Field _SubsurfaceIndirect, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__SubsurfaceIndirect, put=setStaticF__SubsurfaceIndirect)) int32_t  _SubsurfaceIndirect;

/// @brief Field _SubsurfaceKwToggle, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__SubsurfaceKwToggle, put=setStaticF__SubsurfaceKwToggle)) int32_t  _SubsurfaceKwToggle;

/// @brief Field _SubsurfaceTex, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__SubsurfaceTex, put=setStaticF__SubsurfaceTex)) int32_t  _SubsurfaceTex;

/// @brief Field _SubsurfaceTex_ST, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__SubsurfaceTex_ST, put=setStaticF__SubsurfaceTex_ST)) int32_t  _SubsurfaceTex_ST;

/// @brief Field _Subtract, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Subtract, put=setStaticF__Subtract)) int32_t  _Subtract;

/// @brief Field _SunAngles, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__SunAngles, put=setStaticF__SunAngles)) int32_t  _SunAngles;

/// @brief Field _SunMap, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__SunMap, put=setStaticF__SunMap)) int32_t  _SunMap;

/// @brief Field _SunMap_ST, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__SunMap_ST, put=setStaticF__SunMap_ST)) int32_t  _SunMap_ST;

/// @brief Field _Surface, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Surface, put=setStaticF__Surface)) int32_t  _Surface;

/// @brief Field _SwizzleNormalMapChannelsNM, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__SwizzleNormalMapChannelsNM, put=setStaticF__SwizzleNormalMapChannelsNM)) int32_t  _SwizzleNormalMapChannelsNM;

/// @brief Field _TRANSPARENCY, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__TRANSPARENCY, put=setStaticF__TRANSPARENCY)) int32_t  _TRANSPARENCY;

/// @brief Field _TRANSPARENCY_MAP, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__TRANSPARENCY_MAP, put=setStaticF__TRANSPARENCY_MAP)) int32_t  _TRANSPARENCY_MAP;

/// @brief Field _TentacleEndDir, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__TentacleEndDir, put=setStaticF__TentacleEndDir)) int32_t  _TentacleEndDir;

/// @brief Field _TentacleEndPos, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__TentacleEndPos, put=setStaticF__TentacleEndPos)) int32_t  _TentacleEndPos;

/// @brief Field _TentacleRingOrigin, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__TentacleRingOrigin, put=setStaticF__TentacleRingOrigin)) int32_t  _TentacleRingOrigin;

/// @brief Field _TentacleRingRadius, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__TentacleRingRadius, put=setStaticF__TentacleRingRadius)) int32_t  _TentacleRingRadius;

/// @brief Field _TentacleStartDir, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__TentacleStartDir, put=setStaticF__TentacleStartDir)) int32_t  _TentacleStartDir;

/// @brief Field _TerrainHolesTexture, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__TerrainHolesTexture, put=setStaticF__TerrainHolesTexture)) int32_t  _TerrainHolesTexture;

/// @brief Field _TerrainHolesTexture_ST, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__TerrainHolesTexture_ST, put=setStaticF__TerrainHolesTexture_ST)) int32_t  _TerrainHolesTexture_ST;

/// @brief Field _Tex, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Tex, put=setStaticF__Tex)) int32_t  _Tex;

/// @brief Field _Tex0MainView, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Tex0MainView, put=setStaticF__Tex0MainView)) int32_t  _Tex0MainView;

/// @brief Field _Tex0MainView_ST, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Tex0MainView_ST, put=setStaticF__Tex0MainView_ST)) int32_t  _Tex0MainView_ST;

/// @brief Field _Tex0Shadows, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Tex0Shadows, put=setStaticF__Tex0Shadows)) int32_t  _Tex0Shadows;

/// @brief Field _Tex0Shadows_ST, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Tex0Shadows_ST, put=setStaticF__Tex0Shadows_ST)) int32_t  _Tex0Shadows_ST;

/// @brief Field _Tex1MainView, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Tex1MainView, put=setStaticF__Tex1MainView)) int32_t  _Tex1MainView;

/// @brief Field _Tex1MainView_ST, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Tex1MainView_ST, put=setStaticF__Tex1MainView_ST)) int32_t  _Tex1MainView_ST;

/// @brief Field _Tex1Shadows, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Tex1Shadows, put=setStaticF__Tex1Shadows)) int32_t  _Tex1Shadows;

/// @brief Field _Tex1Shadows_ST, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Tex1Shadows_ST, put=setStaticF__Tex1Shadows_ST)) int32_t  _Tex1Shadows_ST;

/// @brief Field _Tex2, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Tex2, put=setStaticF__Tex2)) int32_t  _Tex2;

/// @brief Field _Tex2_ST, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Tex2_ST, put=setStaticF__Tex2_ST)) int32_t  _Tex2_ST;

/// @brief Field _TexMipBias, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__TexMipBias, put=setStaticF__TexMipBias)) int32_t  _TexMipBias;

/// @brief Field _TexTransition, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__TexTransition, put=setStaticF__TexTransition)) int32_t  _TexTransition;

/// @brief Field _TexelSize, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__TexelSize, put=setStaticF__TexelSize)) int32_t  _TexelSize;

/// @brief Field _TexelSnapToggle, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__TexelSnapToggle, put=setStaticF__TexelSnapToggle)) int32_t  _TexelSnapToggle;

/// @brief Field _TexelSnap_Factor, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__TexelSnap_Factor, put=setStaticF__TexelSnap_Factor)) int32_t  _TexelSnap_Factor;

/// @brief Field _Texture, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Texture, put=setStaticF__Texture)) int32_t  _Texture;

/// @brief Field _Texture2D, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Texture2D, put=setStaticF__Texture2D)) int32_t  _Texture2D;

/// @brief Field _TextureHeight, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__TextureHeight, put=setStaticF__TextureHeight)) int32_t  _TextureHeight;

/// @brief Field _TextureSampleAdd, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__TextureSampleAdd, put=setStaticF__TextureSampleAdd)) int32_t  _TextureSampleAdd;

/// @brief Field _TextureWidth, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__TextureWidth, put=setStaticF__TextureWidth)) int32_t  _TextureWidth;

/// @brief Field _Texture_ST, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Texture_ST, put=setStaticF__Texture_ST)) int32_t  _Texture_ST;

/// @brief Field _Theta0, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Theta0, put=setStaticF__Theta0)) int32_t  _Theta0;

/// @brief Field _Theta1, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Theta1, put=setStaticF__Theta1)) int32_t  _Theta1;

/// @brief Field _ThirdTex, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ThirdTex, put=setStaticF__ThirdTex)) int32_t  _ThirdTex;

/// @brief Field _ThirdTex_ST, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ThirdTex_ST, put=setStaticF__ThirdTex_ST)) int32_t  _ThirdTex_ST;

/// @brief Field _Threshold1Color, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Threshold1Color, put=setStaticF__Threshold1Color)) int32_t  _Threshold1Color;

/// @brief Field _Threshold2Color, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Threshold2Color, put=setStaticF__Threshold2Color)) int32_t  _Threshold2Color;

/// @brief Field _Threshold3Color, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Threshold3Color, put=setStaticF__Threshold3Color)) int32_t  _Threshold3Color;

/// @brief Field _ThumbGlowValue, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ThumbGlowValue, put=setStaticF__ThumbGlowValue)) int32_t  _ThumbGlowValue;

/// @brief Field _Tile_X, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Tile_X, put=setStaticF__Tile_X)) int32_t  _Tile_X;

/// @brief Field _Tile_Y, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Tile_Y, put=setStaticF__Tile_Y)) int32_t  _Tile_Y;

/// @brief Field _Time, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Time, put=setStaticF__Time)) int32_t  _Time;

/// @brief Field _TimeOffset, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__TimeOffset, put=setStaticF__TimeOffset)) int32_t  _TimeOffset;

/// @brief Field _TimeScale, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__TimeScale, put=setStaticF__TimeScale)) int32_t  _TimeScale;

/// @brief Field _Tint, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Tint, put=setStaticF__Tint)) int32_t  _Tint;

/// @brief Field _TintColor, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__TintColor, put=setStaticF__TintColor)) int32_t  _TintColor;

/// @brief Field _ToneMapCoeffs1, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ToneMapCoeffs1, put=setStaticF__ToneMapCoeffs1)) int32_t  _ToneMapCoeffs1;

/// @brief Field _ToneMapCoeffs2, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ToneMapCoeffs2, put=setStaticF__ToneMapCoeffs2)) int32_t  _ToneMapCoeffs2;

/// @brief Field _TopColor, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__TopColor, put=setStaticF__TopColor)) int32_t  _TopColor;

/// @brief Field _TransitionPoint, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__TransitionPoint, put=setStaticF__TransitionPoint)) int32_t  _TransitionPoint;

/// @brief Field _TransparencyMode, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__TransparencyMode, put=setStaticF__TransparencyMode)) int32_t  _TransparencyMode;

/// @brief Field _TwoSided, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__TwoSided, put=setStaticF__TwoSided)) int32_t  _TwoSided;

/// @brief Field _UAxis, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__UAxis, put=setStaticF__UAxis)) int32_t  _UAxis;

/// @brief Field _UNDERWATER_MODE_, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__UNDERWATER_MODE_, put=setStaticF__UNDERWATER_MODE_)) int32_t  _UNDERWATER_MODE_;

/// @brief Field _UOrigin, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__UOrigin, put=setStaticF__UOrigin)) int32_t  _UOrigin;

/// @brief Field _USE_DEFORM_MAP, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__USE_DEFORM_MAP, put=setStaticF__USE_DEFORM_MAP)) int32_t  _USE_DEFORM_MAP;

/// @brief Field _USE_TEX_ARRAY_ATLAS, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__USE_TEX_ARRAY_ATLAS, put=setStaticF__USE_TEX_ARRAY_ATLAS)) int32_t  _USE_TEX_ARRAY_ATLAS;

/// @brief Field _USE_WORLD_POS_AS_OFFSET, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__USE_WORLD_POS_AS_OFFSET, put=setStaticF__USE_WORLD_POS_AS_OFFSET)) int32_t  _USE_WORLD_POS_AS_OFFSET;

/// @brief Field _UScale, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__UScale, put=setStaticF__UScale)) int32_t  _UScale;

/// @brief Field _UV, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__UV, put=setStaticF__UV)) int32_t  _UV;

/// @brief Field _UVSec, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__UVSec, put=setStaticF__UVSec)) int32_t  _UVSec;

/// @brief Field _UVSource, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__UVSource, put=setStaticF__UVSource)) int32_t  _UVSource;

/// @brief Field _UnderlayColor, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__UnderlayColor, put=setStaticF__UnderlayColor)) int32_t  _UnderlayColor;

/// @brief Field _UnderlayDilate, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__UnderlayDilate, put=setStaticF__UnderlayDilate)) int32_t  _UnderlayDilate;

/// @brief Field _UnderlayOffset, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__UnderlayOffset, put=setStaticF__UnderlayOffset)) int32_t  _UnderlayOffset;

/// @brief Field _UnderlayOffsetX, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__UnderlayOffsetX, put=setStaticF__UnderlayOffsetX)) int32_t  _UnderlayOffsetX;

/// @brief Field _UnderlayOffsetY, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__UnderlayOffsetY, put=setStaticF__UnderlayOffsetY)) int32_t  _UnderlayOffsetY;

/// @brief Field _UnderlayPixelSize, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__UnderlayPixelSize, put=setStaticF__UnderlayPixelSize)) int32_t  _UnderlayPixelSize;

/// @brief Field _UnderlaySoftness, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__UnderlaySoftness, put=setStaticF__UnderlaySoftness)) int32_t  _UnderlaySoftness;

/// @brief Field _UseAoMap, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__UseAoMap, put=setStaticF__UseAoMap)) int32_t  _UseAoMap;

/// @brief Field _UseColorMap, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__UseColorMap, put=setStaticF__UseColorMap)) int32_t  _UseColorMap;

/// @brief Field _UseCrystalEffect, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__UseCrystalEffect, put=setStaticF__UseCrystalEffect)) int32_t  _UseCrystalEffect;

/// @brief Field _UseDayNightLightmap, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__UseDayNightLightmap, put=setStaticF__UseDayNightLightmap)) int32_t  _UseDayNightLightmap;

/// @brief Field _UseEmissiveMap, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__UseEmissiveMap, put=setStaticF__UseEmissiveMap)) int32_t  _UseEmissiveMap;

/// @brief Field _UseEyeTracking, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__UseEyeTracking, put=setStaticF__UseEyeTracking)) int32_t  _UseEyeTracking;

/// @brief Field _UseGridEffect, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__UseGridEffect, put=setStaticF__UseGridEffect)) int32_t  _UseGridEffect;

/// @brief Field _UseImageAsSDF, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__UseImageAsSDF, put=setStaticF__UseImageAsSDF)) int32_t  _UseImageAsSDF;

/// @brief Field _UseMetallicMap, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__UseMetallicMap, put=setStaticF__UseMetallicMap)) int32_t  _UseMetallicMap;

/// @brief Field _UseMouthFlap, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__UseMouthFlap, put=setStaticF__UseMouthFlap)) int32_t  _UseMouthFlap;

/// @brief Field _UseNormalMap, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__UseNormalMap, put=setStaticF__UseNormalMap)) int32_t  _UseNormalMap;

/// @brief Field _UseOpacityMap, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__UseOpacityMap, put=setStaticF__UseOpacityMap)) int32_t  _UseOpacityMap;

/// @brief Field _UseRoughnessMap, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__UseRoughnessMap, put=setStaticF__UseRoughnessMap)) int32_t  _UseRoughnessMap;

/// @brief Field _UseSpecHighlight, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__UseSpecHighlight, put=setStaticF__UseSpecHighlight)) int32_t  _UseSpecHighlight;

/// @brief Field _UseSpecular, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__UseSpecular, put=setStaticF__UseSpecular)) int32_t  _UseSpecular;

/// @brief Field _UseSpecularAlphaChannel, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__UseSpecularAlphaChannel, put=setStaticF__UseSpecularAlphaChannel)) int32_t  _UseSpecularAlphaChannel;

/// @brief Field _UseUIAlphaClip, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__UseUIAlphaClip, put=setStaticF__UseUIAlphaClip)) int32_t  _UseUIAlphaClip;

/// @brief Field _UseVertexColor, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__UseVertexColor, put=setStaticF__UseVertexColor)) int32_t  _UseVertexColor;

/// @brief Field _UseViewSpaceUVs, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__UseViewSpaceUVs, put=setStaticF__UseViewSpaceUVs)) int32_t  _UseViewSpaceUVs;

/// @brief Field _UseWaveWarp, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__UseWaveWarp, put=setStaticF__UseWaveWarp)) int32_t  _UseWaveWarp;

/// @brief Field _UseWeatherMap, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__UseWeatherMap, put=setStaticF__UseWeatherMap)) int32_t  _UseWeatherMap;

/// @brief Field _UseWorldSpaceUVs, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__UseWorldSpaceUVs, put=setStaticF__UseWorldSpaceUVs)) int32_t  _UseWorldSpaceUVs;

/// @brief Field _UvOffset, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__UvOffset, put=setStaticF__UvOffset)) int32_t  _UvOffset;

/// @brief Field _UvShiftOffset, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__UvShiftOffset, put=setStaticF__UvShiftOffset)) int32_t  _UvShiftOffset;

/// @brief Field _UvShiftRate, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__UvShiftRate, put=setStaticF__UvShiftRate)) int32_t  _UvShiftRate;

/// @brief Field _UvShiftSteps, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__UvShiftSteps, put=setStaticF__UvShiftSteps)) int32_t  _UvShiftSteps;

/// @brief Field _UvShiftToggle, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__UvShiftToggle, put=setStaticF__UvShiftToggle)) int32_t  _UvShiftToggle;

/// @brief Field _UvTiling, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__UvTiling, put=setStaticF__UvTiling)) int32_t  _UvTiling;

/// @brief Field _VAxis, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__VAxis, put=setStaticF__VAxis)) int32_t  _VAxis;

/// @brief Field _VERTEX_COLOR_, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__VERTEX_COLOR_, put=setStaticF__VERTEX_COLOR_)) int32_t  _VERTEX_COLOR_;

/// @brief Field _VERTEX_COLOR_MODE_, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__VERTEX_COLOR_MODE_, put=setStaticF__VERTEX_COLOR_MODE_)) int32_t  _VERTEX_COLOR_MODE_;

/// @brief Field _VERTEX_DEFORMATION, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__VERTEX_DEFORMATION, put=setStaticF__VERTEX_DEFORMATION)) int32_t  _VERTEX_DEFORMATION;

/// @brief Field _VOrigin, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__VOrigin, put=setStaticF__VOrigin)) int32_t  _VOrigin;

/// @brief Field _VScale, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__VScale, put=setStaticF__VScale)) int32_t  _VScale;

/// @brief Field _VertexColorLightmap, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__VertexColorLightmap, put=setStaticF__VertexColorLightmap)) int32_t  _VertexColorLightmap;

/// @brief Field _VertexColorLightmapScale, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__VertexColorLightmapScale, put=setStaticF__VertexColorLightmapScale)) int32_t  _VertexColorLightmapScale;

/// @brief Field _VertexFlapAxis, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__VertexFlapAxis, put=setStaticF__VertexFlapAxis)) int32_t  _VertexFlapAxis;

/// @brief Field _VertexFlapDegreesMinMax, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__VertexFlapDegreesMinMax, put=setStaticF__VertexFlapDegreesMinMax)) int32_t  _VertexFlapDegreesMinMax;

/// @brief Field _VertexFlapPhaseOffset, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__VertexFlapPhaseOffset, put=setStaticF__VertexFlapPhaseOffset)) int32_t  _VertexFlapPhaseOffset;

/// @brief Field _VertexFlapSpeed, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__VertexFlapSpeed, put=setStaticF__VertexFlapSpeed)) int32_t  _VertexFlapSpeed;

/// @brief Field _VertexFlapToggle, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__VertexFlapToggle, put=setStaticF__VertexFlapToggle)) int32_t  _VertexFlapToggle;

/// @brief Field _VertexLightToggle, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__VertexLightToggle, put=setStaticF__VertexLightToggle)) int32_t  _VertexLightToggle;

/// @brief Field _VertexOffsetX, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__VertexOffsetX, put=setStaticF__VertexOffsetX)) int32_t  _VertexOffsetX;

/// @brief Field _VertexOffsetY, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__VertexOffsetY, put=setStaticF__VertexOffsetY)) int32_t  _VertexOffsetY;

/// @brief Field _VertexRotateAngles, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__VertexRotateAngles, put=setStaticF__VertexRotateAngles)) int32_t  _VertexRotateAngles;

/// @brief Field _VertexRotateAnim, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__VertexRotateAnim, put=setStaticF__VertexRotateAnim)) int32_t  _VertexRotateAnim;

/// @brief Field _VertexRotateToggle, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__VertexRotateToggle, put=setStaticF__VertexRotateToggle)) int32_t  _VertexRotateToggle;

/// @brief Field _VertexWaveAxes, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__VertexWaveAxes, put=setStaticF__VertexWaveAxes)) int32_t  _VertexWaveAxes;

/// @brief Field _VertexWaveDebug, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__VertexWaveDebug, put=setStaticF__VertexWaveDebug)) int32_t  _VertexWaveDebug;

/// @brief Field _VertexWaveEnd, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__VertexWaveEnd, put=setStaticF__VertexWaveEnd)) int32_t  _VertexWaveEnd;

/// @brief Field _VertexWaveFalloff, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__VertexWaveFalloff, put=setStaticF__VertexWaveFalloff)) int32_t  _VertexWaveFalloff;

/// @brief Field _VertexWaveParams, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__VertexWaveParams, put=setStaticF__VertexWaveParams)) int32_t  _VertexWaveParams;

/// @brief Field _VertexWavePhaseOffset, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__VertexWavePhaseOffset, put=setStaticF__VertexWavePhaseOffset)) int32_t  _VertexWavePhaseOffset;

/// @brief Field _VertexWaveSphereMask, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__VertexWaveSphereMask, put=setStaticF__VertexWaveSphereMask)) int32_t  _VertexWaveSphereMask;

/// @brief Field _VertexWaveToggle, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__VertexWaveToggle, put=setStaticF__VertexWaveToggle)) int32_t  _VertexWaveToggle;

/// @brief Field _Visible, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Visible, put=setStaticF__Visible)) int32_t  _Visible;

/// @brief Field _Volume0, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Volume0, put=setStaticF__Volume0)) int32_t  _Volume0;

/// @brief Field _Volume0_ST, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Volume0_ST, put=setStaticF__Volume0_ST)) int32_t  _Volume0_ST;

/// @brief Field _Volume1, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Volume1, put=setStaticF__Volume1)) int32_t  _Volume1;

/// @brief Field _Volume1_ST, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Volume1_ST, put=setStaticF__Volume1_ST)) int32_t  _Volume1_ST;

/// @brief Field _Volume2, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Volume2, put=setStaticF__Volume2)) int32_t  _Volume2;

/// @brief Field _Volume2_ST, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Volume2_ST, put=setStaticF__Volume2_ST)) int32_t  _Volume2_ST;

/// @brief Field _VolumeInvSize, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__VolumeInvSize, put=setStaticF__VolumeInvSize)) int32_t  _VolumeInvSize;

/// @brief Field _VolumeMask, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__VolumeMask, put=setStaticF__VolumeMask)) int32_t  _VolumeMask;

/// @brief Field _VolumeMask_ST, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__VolumeMask_ST, put=setStaticF__VolumeMask_ST)) int32_t  _VolumeMask_ST;

/// @brief Field _VolumeMin, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__VolumeMin, put=setStaticF__VolumeMin)) int32_t  _VolumeMin;

/// @brief Field _WINDQUALITY, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__WINDQUALITY, put=setStaticF__WINDQUALITY)) int32_t  _WINDQUALITY;

/// @brief Field _WIND_BRANCH1, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__WIND_BRANCH1, put=setStaticF__WIND_BRANCH1)) int32_t  _WIND_BRANCH1;

/// @brief Field _WIND_BRANCH2, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__WIND_BRANCH2, put=setStaticF__WIND_BRANCH2)) int32_t  _WIND_BRANCH2;

/// @brief Field _WIND_RIPPLE, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__WIND_RIPPLE, put=setStaticF__WIND_RIPPLE)) int32_t  _WIND_RIPPLE;

/// @brief Field _WIND_SHARED, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__WIND_SHARED, put=setStaticF__WIND_SHARED)) int32_t  _WIND_SHARED;

/// @brief Field _WIND_SHIMMER, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__WIND_SHIMMER, put=setStaticF__WIND_SHIMMER)) int32_t  _WIND_SHIMMER;

/// @brief Field _WallScale, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__WallScale, put=setStaticF__WallScale)) int32_t  _WallScale;

/// @brief Field _WaterCaustics, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__WaterCaustics, put=setStaticF__WaterCaustics)) int32_t  _WaterCaustics;

/// @brief Field _WaterEffect, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__WaterEffect, put=setStaticF__WaterEffect)) int32_t  _WaterEffect;

/// @brief Field _WaveAmplitude, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__WaveAmplitude, put=setStaticF__WaveAmplitude)) int32_t  _WaveAmplitude;

/// @brief Field _WaveAndDistance, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__WaveAndDistance, put=setStaticF__WaveAndDistance)) int32_t  _WaveAndDistance;

/// @brief Field _WaveFrequency, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__WaveFrequency, put=setStaticF__WaveFrequency)) int32_t  _WaveFrequency;

/// @brief Field _WaveScale, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__WaveScale, put=setStaticF__WaveScale)) int32_t  _WaveScale;

/// @brief Field _WaveTimeScale, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__WaveTimeScale, put=setStaticF__WaveTimeScale)) int32_t  _WaveTimeScale;

/// @brief Field _WavingTint, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__WavingTint, put=setStaticF__WavingTint)) int32_t  _WavingTint;

/// @brief Field _WeatherMap, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__WeatherMap, put=setStaticF__WeatherMap)) int32_t  _WeatherMap;

/// @brief Field _WeatherMapDissolveEdgeSize, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__WeatherMapDissolveEdgeSize, put=setStaticF__WeatherMapDissolveEdgeSize)) int32_t  _WeatherMapDissolveEdgeSize;

/// @brief Field _WeatherMap_Atlas, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__WeatherMap_Atlas, put=setStaticF__WeatherMap_Atlas)) int32_t  _WeatherMap_Atlas;

/// @brief Field _WeatherMap_AtlasSlice, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__WeatherMap_AtlasSlice, put=setStaticF__WeatherMap_AtlasSlice)) int32_t  _WeatherMap_AtlasSlice;

/// @brief Field _WeightBold, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__WeightBold, put=setStaticF__WeightBold)) int32_t  _WeightBold;

/// @brief Field _WeightNormal, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__WeightNormal, put=setStaticF__WeightNormal)) int32_t  _WeightNormal;

/// @brief Field _WetBumpMap, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__WetBumpMap, put=setStaticF__WetBumpMap)) int32_t  _WetBumpMap;

/// @brief Field _WetBumpMap_ST, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__WetBumpMap_ST, put=setStaticF__WetBumpMap_ST)) int32_t  _WetBumpMap_ST;

/// @brief Field _WetMap, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__WetMap, put=setStaticF__WetMap)) int32_t  _WetMap;

/// @brief Field _WetMapUV, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__WetMapUV, put=setStaticF__WetMapUV)) int32_t  _WetMapUV;

/// @brief Field _Width, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Width, put=setStaticF__Width)) int32_t  _Width;

/// @brief Field _WindColor, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__WindColor, put=setStaticF__WindColor)) int32_t  _WindColor;

/// @brief Field _WindQuality, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__WindQuality, put=setStaticF__WindQuality)) int32_t  _WindQuality;

/// @brief Field _WindowParams, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__WindowParams, put=setStaticF__WindowParams)) int32_t  _WindowParams;

/// @brief Field _WireThickness, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__WireThickness, put=setStaticF__WireThickness)) int32_t  _WireThickness;

/// @brief Field _WireframeColor, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__WireframeColor, put=setStaticF__WireframeColor)) int32_t  _WireframeColor;

/// @brief Field _WorkflowMode, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__WorkflowMode, put=setStaticF__WorkflowMode)) int32_t  _WorkflowMode;

/// @brief Field _WorldSpaceCameraPos, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__WorldSpaceCameraPos, put=setStaticF__WorldSpaceCameraPos)) int32_t  _WorldSpaceCameraPos;

/// @brief Field _WorldSpaceLightPos0, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__WorldSpaceLightPos0, put=setStaticF__WorldSpaceLightPos0)) int32_t  _WorldSpaceLightPos0;

/// @brief Field _WristFade, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__WristFade, put=setStaticF__WristFade)) int32_t  _WristFade;

/// @brief Field _XRMotionVectorsPass, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__XRMotionVectorsPass, put=setStaticF__XRMotionVectorsPass)) int32_t  _XRMotionVectorsPass;

/// @brief Field _ZBufferParams, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ZBufferParams, put=setStaticF__ZBufferParams)) int32_t  _ZBufferParams;

/// @brief Field _ZFightOffset, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ZFightOffset, put=setStaticF__ZFightOffset)) int32_t  _ZFightOffset;

/// @brief Field _ZQueue, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ZQueue, put=setStaticF__ZQueue)) int32_t  _ZQueue;

/// @brief Field _ZTest, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ZTest, put=setStaticF__ZTest)) int32_t  _ZTest;

/// @brief Field _ZTestMode, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ZTestMode, put=setStaticF__ZTestMode)) int32_t  _ZTestMode;

/// @brief Field _ZWrite, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ZWrite, put=setStaticF__ZWrite)) int32_t  _ZWrite;

/// @brief Field _ZWriteMode, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__ZWriteMode, put=setStaticF__ZWriteMode)) int32_t  _ZWriteMode;

/// @brief Field __BasicOptions__, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF___BasicOptions__, put=setStaticF___BasicOptions__)) int32_t  __BasicOptions__;

/// @brief Field __dirty, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF___dirty, put=setStaticF___dirty)) int32_t  __dirty;

/// @brief Field _col, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__col, put=setStaticF__col)) int32_t  _col;

/// @brief Field _face, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__face, put=setStaticF__face)) int32_t  _face;

/// @brief Field _flip, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__flip, put=setStaticF__flip)) int32_t  _flip;

/// @brief Field _premultiply, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__premultiply, put=setStaticF__premultiply)) int32_t  _premultiply;

/// @brief Field _texcoord, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__texcoord, put=setStaticF__texcoord)) int32_t  _texcoord;

/// @brief Field _texcoord_ST, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__texcoord_ST, put=setStaticF__texcoord_ST)) int32_t  _texcoord_ST;

/// @brief Field _unmultiply, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__unmultiply, put=setStaticF__unmultiply)) int32_t  _unmultiply;

/// @brief Field bestFitNormalMap, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_bestFitNormalMap, put=setStaticF_bestFitNormalMap)) int32_t  bestFitNormalMap;

/// @brief Field bestFitNormalMap_ST, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_bestFitNormalMap_ST, put=setStaticF_bestFitNormalMap_ST)) int32_t  bestFitNormalMap_ST;

/// @brief Field g_flCornerAdjust, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_g_flCornerAdjust, put=setStaticF_g_flCornerAdjust)) int32_t  g_flCornerAdjust;

/// @brief Field g_flOutlineWidth, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_g_flOutlineWidth, put=setStaticF_g_flOutlineWidth)) int32_t  g_flOutlineWidth;

/// @brief Field g_vOutlineColor, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_g_vOutlineColor, put=setStaticF_g_vOutlineColor)) int32_t  g_vOutlineColor;

/// @brief Field intensity, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_intensity, put=setStaticF_intensity)) int32_t  intensity;

/// @brief Field unity_4LightAtten0, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_unity_4LightAtten0, put=setStaticF_unity_4LightAtten0)) int32_t  unity_4LightAtten0;

/// @brief Field unity_4LightPosX0, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_unity_4LightPosX0, put=setStaticF_unity_4LightPosX0)) int32_t  unity_4LightPosX0;

/// @brief Field unity_4LightPosY0_, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_unity_4LightPosY0_, put=setStaticF_unity_4LightPosY0_)) int32_t  unity_4LightPosY0_;

/// @brief Field unity_4LightPosZ0, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_unity_4LightPosZ0, put=setStaticF_unity_4LightPosZ0)) int32_t  unity_4LightPosZ0;

/// @brief Field unity_AmbientEquator, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_unity_AmbientEquator, put=setStaticF_unity_AmbientEquator)) int32_t  unity_AmbientEquator;

/// @brief Field unity_AmbientGround_, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_unity_AmbientGround_, put=setStaticF_unity_AmbientGround_)) int32_t  unity_AmbientGround_;

/// @brief Field unity_AmbientSky, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_unity_AmbientSky, put=setStaticF_unity_AmbientSky)) int32_t  unity_AmbientSky;

/// @brief Field unity_CameraInvProjection, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_unity_CameraInvProjection, put=setStaticF_unity_CameraInvProjection)) int32_t  unity_CameraInvProjection;

/// @brief Field unity_CameraProjection, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_unity_CameraProjection, put=setStaticF_unity_CameraProjection)) int32_t  unity_CameraProjection;

/// @brief Field unity_CameraWorldClipPlanes, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_unity_CameraWorldClipPlanes, put=setStaticF_unity_CameraWorldClipPlanes)) int32_t  unity_CameraWorldClipPlanes;

/// @brief Field unity_DeltaTime, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_unity_DeltaTime, put=setStaticF_unity_DeltaTime)) int32_t  unity_DeltaTime;

/// @brief Field unity_FogColor, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_unity_FogColor, put=setStaticF_unity_FogColor)) int32_t  unity_FogColor;

/// @brief Field unity_FogParams, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_unity_FogParams, put=setStaticF_unity_FogParams)) int32_t  unity_FogParams;

/// @brief Field unity_IndirectSpecColor, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_unity_IndirectSpecColor, put=setStaticF_unity_IndirectSpecColor)) int32_t  unity_IndirectSpecColor;

/// @brief Field unity_LODFade, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_unity_LODFade, put=setStaticF_unity_LODFade)) int32_t  unity_LODFade;

/// @brief Field unity_LightAtten, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_unity_LightAtten, put=setStaticF_unity_LightAtten)) int32_t  unity_LightAtten;

/// @brief Field unity_LightColor, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_unity_LightColor, put=setStaticF_unity_LightColor)) int32_t  unity_LightColor;

/// @brief Field unity_LightPosition, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_unity_LightPosition, put=setStaticF_unity_LightPosition)) int32_t  unity_LightPosition;

/// @brief Field unity_Lightmap, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_unity_Lightmap, put=setStaticF_unity_Lightmap)) int32_t  unity_Lightmap;

/// @brief Field unity_LightmapST, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_unity_LightmapST, put=setStaticF_unity_LightmapST)) int32_t  unity_LightmapST;

/// @brief Field unity_Lightmaps, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_unity_Lightmaps, put=setStaticF_unity_Lightmaps)) int32_t  unity_Lightmaps;

/// @brief Field unity_LightmapsInd, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_unity_LightmapsInd, put=setStaticF_unity_LightmapsInd)) int32_t  unity_LightmapsInd;

/// @brief Field unity_ObjectToWorld, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_unity_ObjectToWorld, put=setStaticF_unity_ObjectToWorld)) int32_t  unity_ObjectToWorld;

/// @brief Field unity_OrthoParamsperspective_, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_unity_OrthoParamsperspective_, put=setStaticF_unity_OrthoParamsperspective_)) int32_t  unity_OrthoParamsperspective_;

/// @brief Field unity_ShadowMasks, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_unity_ShadowMasks, put=setStaticF_unity_ShadowMasks)) int32_t  unity_ShadowMasks;

/// @brief Field unity_SpotDirection, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_unity_SpotDirection, put=setStaticF_unity_SpotDirection)) int32_t  unity_SpotDirection;

/// @brief Field unity_WorldToLight, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_unity_WorldToLight, put=setStaticF_unity_WorldToLight)) int32_t  unity_WorldToLight;

/// @brief Field unity_WorldToObject, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_unity_WorldToObject, put=setStaticF_unity_WorldToObject)) int32_t  unity_WorldToObject;

/// @brief Field unity_WorldToShadow, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_unity_WorldToShadow, put=setStaticF_unity_WorldToShadow)) int32_t  unity_WorldToShadow;

static inline int32_t getStaticF_BACKFACE_NORMAL_MODE() ;

static inline int32_t getStaticF_Backface_Normal_Mode() ;

static inline int32_t getStaticF_Base_Map() ;

static inline int32_t getStaticF_EFFECT_BILLBOARD() ;

static inline int32_t getStaticF_EFFECT_EXTRA_TEX() ;

static inline int32_t getStaticF_HARD_OCCLUSION() ;

static inline int32_t getStaticF_Normal_Blend() ;

static inline int32_t getStaticF_Normal_Map() ;

static inline int32_t getStaticF_PixelSnap() ;

static inline int32_t getStaticF_SOFT_OCCLUSION() ;

static inline int32_t getStaticF_UNITY_LIGHTMODEL_AMBIENT() ;

static inline int32_t getStaticF_UNITY_MATRIX_IT_MV() ;

static inline int32_t getStaticF_UNITY_MATRIX_MV() ;

static inline int32_t getStaticF_UNITY_MATRIX_MVP() ;

static inline int32_t getStaticF_UNITY_MATRIX_P() ;

static inline int32_t getStaticF_UNITY_MATRIX_T_MV() ;

static inline int32_t getStaticF_UNITY_MATRIX_V() ;

static inline int32_t getStaticF_UNITY_MATRIX_VP_() ;

static inline int32_t getStaticF__AChannelColor() ;

static inline int32_t getStaticF__AbscissaOffset() ;

static inline int32_t getStaticF__AddPrecomputedVelocity() ;

static inline int32_t getStaticF__AdvancedOptions() ;

static inline int32_t getStaticF__Alpha() ;

static inline int32_t getStaticF__AlphaClip() ;

static inline int32_t getStaticF__AlphaClipThreshold() ;

static inline int32_t getStaticF__AlphaColor() ;

static inline int32_t getStaticF__AlphaCutoff() ;

static inline int32_t getStaticF__AlphaDetailToggle() ;

static inline int32_t getStaticF__AlphaDetail_Opacity() ;

static inline int32_t getStaticF__AlphaDetail_ST() ;

static inline int32_t getStaticF__AlphaDetail_WorldSpace() ;

static inline int32_t getStaticF__AlphaTex() ;

static inline int32_t getStaticF__AlphaTex_ST() ;

static inline int32_t getStaticF__AlphaToMask() ;

static inline int32_t getStaticF__Ambient() ;

static inline int32_t getStaticF__Angle() ;

static inline int32_t getStaticF__AverageColor() ;

static inline int32_t getStaticF__BAKERY_2SIDED() ;

static inline int32_t getStaticF__BAKERY_2SIDEDON() ;

static inline int32_t getStaticF__BAKERY_BICUBIC() ;

static inline int32_t getStaticF__BAKERY_LMSPEC() ;

static inline int32_t getStaticF__BAKERY_PROBESHNONLINEAR() ;

static inline int32_t getStaticF__BAKERY_RNM() ;

static inline int32_t getStaticF__BAKERY_SH() ;

static inline int32_t getStaticF__BAKERY_SHNONLINEAR() ;

static inline int32_t getStaticF__BAKERY_VERTEXLM() ;

static inline int32_t getStaticF__BAKERY_VERTEXLMDIR() ;

static inline int32_t getStaticF__BAKERY_VERTEXLMMASK() ;

static inline int32_t getStaticF__BAKERY_VERTEXLMSH() ;

static inline int32_t getStaticF__BAKERY_VOLROTATION() ;

static inline int32_t getStaticF__BAKERY_VOLUME() ;

static inline int32_t getStaticF__BASE_COLOR() ;

static inline int32_t getStaticF__BASE_COLOR_MAP() ;

static inline int32_t getStaticF__BASE_COLOR_WEIGHT() ;

static inline int32_t getStaticF__BChannelColor() ;

static inline int32_t getStaticF__BUILTIN_QueueControl() ;

static inline int32_t getStaticF__BUILTIN_QueueOffset() ;

static inline int32_t getStaticF__BUMP_MAP() ;

static inline int32_t getStaticF__BUMP_MAP_STRENGTH() ;

static inline int32_t getStaticF__BackgroundColor() ;

static inline int32_t getStaticF__Base() ;

static inline int32_t getStaticF__BaseColor() ;

static inline int32_t getStaticF__BaseColorAddSubDiff() ;

static inline int32_t getStaticF__BaseMap() ;

static inline int32_t getStaticF__BaseMapArray() ;

static inline int32_t getStaticF__BaseMapArrayIndex() ;

static inline int32_t getStaticF__BaseMapArray_ST() ;

static inline int32_t getStaticF__BaseMap_Atlas() ;

static inline int32_t getStaticF__BaseMap_AtlasSlice() ;

static inline int32_t getStaticF__BaseMap_AtlasSliceSource() ;

static inline int32_t getStaticF__BaseMap_ST() ;

static inline int32_t getStaticF__BaseMap_WH() ;

static inline int32_t getStaticF__BaseOpacity() ;

static inline int32_t getStaticF__Base_Color() ;

static inline int32_t getStaticF__Bevel() ;

static inline int32_t getStaticF__BevelAmount() ;

static inline int32_t getStaticF__BevelClamp() ;

static inline int32_t getStaticF__BevelOffset() ;

static inline int32_t getStaticF__BevelRoundness() ;

static inline int32_t getStaticF__BevelType() ;

static inline int32_t getStaticF__BevelWidth() ;

static inline int32_t getStaticF__BillboardKwToggle() ;

static inline int32_t getStaticF__BillboardShadowFade() ;

static inline int32_t getStaticF__Blend() ;

static inline int32_t getStaticF__BlendDst() ;

static inline int32_t getStaticF__BlendFactorCircleRadius() ;

static inline int32_t getStaticF__BlendModeDestination() ;

static inline int32_t getStaticF__BlendModePreserveSpecular() ;

static inline int32_t getStaticF__BlendModeSource() ;

static inline int32_t getStaticF__BlendOp() ;

static inline int32_t getStaticF__BlendOpAlpha() ;

static inline int32_t getStaticF__BlendOpColor() ;

static inline int32_t getStaticF__BlendSrc() ;

static inline int32_t getStaticF__Border() ;

static inline int32_t getStaticF__BorderColor() ;

static inline int32_t getStaticF__BorderColorA() ;

static inline int32_t getStaticF__BorderColorB() ;

static inline int32_t getStaticF__BorderColorType() ;

static inline int32_t getStaticF__BorderLine() ;

static inline int32_t getStaticF__BorderWidth() ;

static inline int32_t getStaticF__BottomColor() ;

static inline int32_t getStaticF__Brightness() ;

static inline int32_t getStaticF__BumpFace() ;

static inline int32_t getStaticF__BumpMap() ;

static inline int32_t getStaticF__BumpMap_ST() ;

static inline int32_t getStaticF__BumpOutline() ;

static inline int32_t getStaticF__BumpScale() ;

static inline int32_t getStaticF__COLOR_MODE__() ;

static inline int32_t getStaticF__CameraFadeParams() ;

static inline int32_t getStaticF__CameraFadingEnabled() ;

static inline int32_t getStaticF__CameraFarFadeDistance() ;

static inline int32_t getStaticF__CameraNearFadeDistance() ;

static inline int32_t getStaticF__CenterSize() ;

static inline int32_t getStaticF__ChromaAlphaCutoff() ;

static inline int32_t getStaticF__ChromaShadows() ;

static inline int32_t getStaticF__ChromaToleranceA() ;

static inline int32_t getStaticF__ChromaToleranceB() ;

static inline int32_t getStaticF__ClearCoat() ;

static inline int32_t getStaticF__ClearCoatMap() ;

static inline int32_t getStaticF__ClearCoatMap_ST() ;

static inline int32_t getStaticF__ClearCoatMask() ;

static inline int32_t getStaticF__ClearCoatSmoothness() ;

static inline int32_t getStaticF__ClearStencilReadMask() ;

static inline int32_t getStaticF__ClearStencilRef() ;

static inline int32_t getStaticF__ClearStencilWriteMask() ;

static inline int32_t getStaticF__ClipRect() ;

static inline int32_t getStaticF__CloudsColor() ;

static inline int32_t getStaticF__Color() ;

static inline int32_t getStaticF__Color0() ;

static inline int32_t getStaticF__Color1() ;

static inline int32_t getStaticF__Color2() ;

static inline int32_t getStaticF__Color3() ;

static inline int32_t getStaticF__Color4() ;

static inline int32_t getStaticF__ColorA() ;

static inline int32_t getStaticF__ColorB() ;

static inline int32_t getStaticF__ColorBottom() ;

static inline int32_t getStaticF__ColorDark() ;

static inline int32_t getStaticF__ColorEnd() ;

static inline int32_t getStaticF__ColorG() ;

static inline int32_t getStaticF__ColorInner() ;

static inline int32_t getStaticF__ColorLight() ;

static inline int32_t getStaticF__ColorMask() ;

static inline int32_t getStaticF__ColorMiddle() ;

static inline int32_t getStaticF__ColorMode() ;

static inline int32_t getStaticF__ColorOuter() ;

static inline int32_t getStaticF__ColorPrimary() ;

static inline int32_t getStaticF__ColorR() ;

static inline int32_t getStaticF__ColorRamp() ;

static inline int32_t getStaticF__ColorRampOffset() ;

static inline int32_t getStaticF__ColorRamp_ST() ;

static inline int32_t getStaticF__ColorSource() ;

static inline int32_t getStaticF__ColorStart() ;

static inline int32_t getStaticF__ColorTop() ;

static inline int32_t getStaticF__CompositingParams() ;

static inline int32_t getStaticF__CompositingParams2() ;

static inline int32_t getStaticF__Contrast() ;

static inline int32_t getStaticF__Control() ;

static inline int32_t getStaticF__ControlTex() ;

static inline int32_t getStaticF__ControlTex_ST() ;

static inline int32_t getStaticF__Control_ST() ;

static inline int32_t getStaticF__CosTime() ;

static inline int32_t getStaticF__CrystalPower() ;

static inline int32_t getStaticF__CrystalRimColor() ;

static inline int32_t getStaticF__Cube() ;

static inline int32_t getStaticF__CubeToLatLongParams() ;

static inline int32_t getStaticF__Cube_ST() ;

static inline int32_t getStaticF__Cull() ;

static inline int32_t getStaticF__CullMode() ;

static inline int32_t getStaticF__Cutoff() ;

static inline int32_t getStaticF__DAY_CYCLE_BRIGHTNESS_() ;

static inline int32_t getStaticF__DEBUG_PAWN_DATA() ;

static inline int32_t getStaticF__Darken() ;

static inline int32_t getStaticF__DayNightLightmapArray() ;

static inline int32_t getStaticF__DayNightLightmapArray_AtlasSlice() ;

static inline int32_t getStaticF__DayNightLightmapArray_ST() ;

static inline int32_t getStaticF__DecalMeshBiasType() ;

static inline int32_t getStaticF__DecalMeshDepthBias() ;

static inline int32_t getStaticF__DecalMeshViewBias() ;

static inline int32_t getStaticF__DefaultColor() ;

static inline int32_t getStaticF__Deform() ;

static inline int32_t getStaticF__DeformMap() ;

static inline int32_t getStaticF__DeformMapIntensity() ;

static inline int32_t getStaticF__DeformMapMaskByVertColorRAmount() ;

static inline int32_t getStaticF__DeformMapObjectSpaceOffsetsU() ;

static inline int32_t getStaticF__DeformMapObjectSpaceOffsetsV() ;

static inline int32_t getStaticF__DeformMapScrollSpeed() ;

static inline int32_t getStaticF__DeformMapUV0Influence() ;

static inline int32_t getStaticF__DeformMapWorldSpaceOffsetsU() ;

static inline int32_t getStaticF__DeformMapWorldSpaceOffsetsV() ;

static inline int32_t getStaticF__DeformMap_Atlas() ;

static inline int32_t getStaticF__DeformMap_AtlasSlice() ;

static inline int32_t getStaticF__DepthBias() ;

static inline int32_t getStaticF__DepthMap() ;

static inline int32_t getStaticF__DepthTex() ;

static inline int32_t getStaticF__DepthTex_ST() ;

static inline int32_t getStaticF__DestRect() ;

static inline int32_t getStaticF__DetailAlbedoMap() ;

static inline int32_t getStaticF__DetailAlbedoMapScale() ;

static inline int32_t getStaticF__DetailAlbedoMap_ST() ;

static inline int32_t getStaticF__DetailMask() ;

static inline int32_t getStaticF__DetailMask_ST() ;

static inline int32_t getStaticF__DetailNormalMap() ;

static inline int32_t getStaticF__DetailNormalMapScale() ;

static inline int32_t getStaticF__DetailNormalMap_ST() ;

static inline int32_t getStaticF__DetailTex() ;

static inline int32_t getStaticF__DetailTexIntensity() ;

static inline int32_t getStaticF__DetailTex_ST() ;

static inline int32_t getStaticF__Diffuse() ;

static inline int32_t getStaticF__DiffusePower() ;

static inline int32_t getStaticF__Dimensions() ;

static inline int32_t getStaticF__Direction() ;

static inline int32_t getStaticF__DistanceMultipler() ;

static inline int32_t getStaticF__DistortionBlend() ;

static inline int32_t getStaticF__DistortionEnabled() ;

static inline int32_t getStaticF__DistortionStrength() ;

static inline int32_t getStaticF__DistortionStrengthScaled() ;

static inline int32_t getStaticF__Dither() ;

static inline int32_t getStaticF__DitherStrength() ;

static inline int32_t getStaticF__DoTextureRotation() ;

static inline int32_t getStaticF__DragColor() ;

static inline int32_t getStaticF__DrawOrder() ;

static inline int32_t getStaticF__DstBlend() ;

static inline int32_t getStaticF__DstBlendAlpha() ;

static inline int32_t getStaticF__EMISSION_COLOR() ;

static inline int32_t getStaticF__EMISSION_COLOR_MAP() ;

static inline int32_t getStaticF__EMISSION_WEIGHT() ;

static inline int32_t getStaticF__EdgeThickness() ;

static inline int32_t getStaticF__EditorTime() ;

static inline int32_t getStaticF__Emission() ;

static inline int32_t getStaticF__EmissionColor() ;

static inline int32_t getStaticF__EmissionDissolveAnimation() ;

static inline int32_t getStaticF__EmissionDissolveEdgeSize() ;

static inline int32_t getStaticF__EmissionDissolveProgress() ;

static inline int32_t getStaticF__EmissionIntensityInDynamic() ;

static inline int32_t getStaticF__EmissionMap() ;

static inline int32_t getStaticF__EmissionMap_Atlas() ;

static inline int32_t getStaticF__EmissionMap_AtlasSlice() ;

static inline int32_t getStaticF__EmissionMap_ST() ;

static inline int32_t getStaticF__EmissionMaskByBaseMapAlpha() ;

static inline int32_t getStaticF__EmissionToggle() ;

static inline int32_t getStaticF__EmissionUVScrollSpeed() ;

static inline int32_t getStaticF__EmissionUseUVWaveWarp() ;

static inline int32_t getStaticF__EmissiveAmount() ;

static inline int32_t getStaticF__EmissiveTex() ;

static inline int32_t getStaticF__EmptyTex() ;

static inline int32_t getStaticF__EmptyTex_ST() ;

static inline int32_t getStaticF__EnableExternalAlpha() ;

static inline int32_t getStaticF__EnableHeightBlend() ;

static inline int32_t getStaticF__EnableInstancedPerPixelNormal() ;

static inline int32_t getStaticF__EnableOpacity() ;

static inline int32_t getStaticF__EnvMapSampler() ;

static inline int32_t getStaticF__EnvMapSampler_ST() ;

static inline int32_t getStaticF__EnvMatrixRotation() ;

static inline int32_t getStaticF__EnvironmentDepthBias() ;

static inline int32_t getStaticF__EnvironmentReflections() ;

static inline int32_t getStaticF__Exposure() ;

static inline int32_t getStaticF__ExtraTex() ;

static inline int32_t getStaticF__ExtraTex_ST() ;

static inline int32_t getStaticF__EyeOverrideUV() ;

static inline int32_t getStaticF__EyeOverrideUVTransform() ;

static inline int32_t getStaticF__EyeTileOffsetUV() ;

static inline int32_t getStaticF__FADE_END_EDGE() ;

static inline int32_t getStaticF__FADE_START_EDGE() ;

static inline int32_t getStaticF__FaceColor() ;

static inline int32_t getStaticF__FaceDilate() ;

static inline int32_t getStaticF__FaceShininess() ;

static inline int32_t getStaticF__FaceTex() ;

static inline int32_t getStaticF__FaceTex_ST() ;

static inline int32_t getStaticF__FaceText_ST() ;

static inline int32_t getStaticF__FaceUVSpeed() ;

static inline int32_t getStaticF__FaceUVSpeedX() ;

static inline int32_t getStaticF__FaceUVSpeedY() ;

static inline int32_t getStaticF__Fade() ;

static inline int32_t getStaticF__FadeColor() ;

static inline int32_t getStaticF__FadeColorIntensity() ;

static inline int32_t getStaticF__FadeLimit() ;

static inline int32_t getStaticF__FadeSign() ;

static inline int32_t getStaticF__FallbackAmount() ;

static inline int32_t getStaticF__FallbackTex() ;

static inline int32_t getStaticF__FallbackTex_ST() ;

static inline int32_t getStaticF__FalloffSampler() ;

static inline int32_t getStaticF__FalloffSampler_ST() ;

static inline int32_t getStaticF__FalloffTex() ;

static inline int32_t getStaticF__FalloffTex_ST() ;

static inline int32_t getStaticF__FingerGlowMask() ;

static inline int32_t getStaticF__FingerGlowMask_ST() ;

static inline int32_t getStaticF__FirstTex() ;

static inline int32_t getStaticF__FirstTex_ST() ;

static inline int32_t getStaticF__FirstViewColor() ;

static inline int32_t getStaticF__FlameWobbleNoise() ;

static inline int32_t getStaticF__FlameWobbleNoise_Atlas() ;

static inline int32_t getStaticF__FlameWobbleNoise_AtlasSlice() ;

static inline int32_t getStaticF__FlipbookBlending() ;

static inline int32_t getStaticF__FlipbookMode() ;

static inline int32_t getStaticF__Flow() ;

static inline int32_t getStaticF__FlowFac() ;

static inline int32_t getStaticF__FourthTex() ;

static inline int32_t getStaticF__FourthTex_ST() ;

static inline int32_t getStaticF__FresnelPower() ;

static inline int32_t getStaticF__FullTex() ;

static inline int32_t getStaticF__FullTex_ST() ;

static inline int32_t getStaticF__GChannelColor() ;

static inline int32_t getStaticF__GammaCorrection() ;

static inline int32_t getStaticF__GenerateGlow() ;

static inline int32_t getStaticF__GetBlendFactorMaxGizmoDistance() ;

static inline int32_t getStaticF__GizmoCircleRadius() ;

static inline int32_t getStaticF__GizmoLength() ;

static inline int32_t getStaticF__GizmoPosition() ;

static inline int32_t getStaticF__GizmoRenderMode() ;

static inline int32_t getStaticF__GizmoSplitPlane() ;

static inline int32_t getStaticF__GizmoSplitPlaneOrtho() ;

static inline int32_t getStaticF__GizmoThickness() ;

static inline int32_t getStaticF__GizmoZoneCenter() ;

static inline int32_t getStaticF__Gloss() ;

static inline int32_t getStaticF__GlossMapScale() ;

static inline int32_t getStaticF__Glossiness() ;

static inline int32_t getStaticF__GlossinessSource() ;

static inline int32_t getStaticF__GlossyReflections() ;

static inline int32_t getStaticF__GlowColor() ;

static inline int32_t getStaticF__GlowInner() ;

static inline int32_t getStaticF__GlowOffset() ;

static inline int32_t getStaticF__GlowOuter() ;

static inline int32_t getStaticF__GlowPower() ;

static inline int32_t getStaticF__Goo() ;

static inline int32_t getStaticF__GooN() ;

static inline int32_t getStaticF__GooN_ST() ;

static inline int32_t getStaticF__Goo_ST() ;

static inline int32_t getStaticF__Gradient() ;

static inline int32_t getStaticF__GradientMap() ;

static inline int32_t getStaticF__GradientMapToggle() ;

static inline int32_t getStaticF__GradientPosition0() ;

static inline int32_t getStaticF__GradientPosition1() ;

static inline int32_t getStaticF__GradientPosition2() ;

static inline int32_t getStaticF__GradientScale() ;

static inline int32_t getStaticF__GradientStop1() ;

static inline int32_t getStaticF__GradientStop2() ;

static inline int32_t getStaticF__GradientStop3() ;

static inline int32_t getStaticF__GradientTex() ;

static inline int32_t getStaticF__GradientTex_ST() ;

static inline int32_t getStaticF__GreyZoneException() ;

static inline int32_t getStaticF__GuardianFade() ;

static inline int32_t getStaticF__HOT_WHITE_() ;

static inline int32_t getStaticF__HalfLambertToggle() ;

static inline int32_t getStaticF__HandAlpha() ;

static inline int32_t getStaticF__HandleZTest() ;

static inline int32_t getStaticF__HandleZWrite() ;

static inline int32_t getStaticF__Height() ;

static inline int32_t getStaticF__HeightBasedWaterEffect() ;

static inline int32_t getStaticF__HeightTransition() ;

static inline int32_t getStaticF__Hemispherical() ;

static inline int32_t getStaticF__HighLightAttenuation() ;

static inline int32_t getStaticF__Highlight() ;

static inline int32_t getStaticF__HighlightColor() ;

static inline int32_t getStaticF__HighlightOpacity() ;

static inline int32_t getStaticF__HorizonColor() ;

static inline int32_t getStaticF__HorizonParams() ;

static inline int32_t getStaticF__HueVariation() ;

static inline int32_t getStaticF__HueVariationColor() ;

static inline int32_t getStaticF__HueVariationKwToggle() ;

static inline int32_t getStaticF__InconfidenceTex() ;

static inline int32_t getStaticF__InconfidenceTex_ST() ;

static inline int32_t getStaticF__IndexGlowValue() ;

static inline int32_t getStaticF__Inflation() ;

static inline int32_t getStaticF__Influences() ;

static inline int32_t getStaticF__InnerGlowColor() ;

static inline int32_t getStaticF__InnerGlowOn() ;

static inline int32_t getStaticF__InnerGlowParams() ;

static inline int32_t getStaticF__InnerGlowSine() ;

static inline int32_t getStaticF__InnerGlowSinePeriod() ;

static inline int32_t getStaticF__InnerGlowSinePhaseShift() ;

static inline int32_t getStaticF__InnerGlowTap() ;

static inline int32_t getStaticF__Input() ;

static inline int32_t getStaticF__InsideColor() ;

static inline int32_t getStaticF__Intensity() ;

static inline int32_t getStaticF__Interpolator() ;

static inline int32_t getStaticF__InvFade() ;

static inline int32_t getStaticF__InvertedAlpha() ;

static inline int32_t getStaticF__Is_On() ;

static inline int32_t getStaticF__Is_Recording() ;

static inline int32_t getStaticF__IsoPerimeter() ;

static inline int32_t getStaticF__LIGHTMAP_MODE_() ;

static inline int32_t getStaticF__LavaLampToggle() ;

static inline int32_t getStaticF__LengthPadding() ;

static inline int32_t getStaticF__LightAngle() ;

static inline int32_t getStaticF__LightColor() ;

static inline int32_t getStaticF__LightColor0() ;

static inline int32_t getStaticF__Lightmap() ;

static inline int32_t getStaticF__LightmapExposure() ;

static inline int32_t getStaticF__Line() ;

static inline int32_t getStaticF__LineDistance() ;

static inline int32_t getStaticF__LineWidth() ;

static inline int32_t getStaticF__LinearGradientColor1() ;

static inline int32_t getStaticF__LinearGradientColor2() ;

static inline int32_t getStaticF__LinearGradientEnd() ;

static inline int32_t getStaticF__LinearGradientStart() ;

static inline int32_t getStaticF__LinesThickness() ;

static inline int32_t getStaticF__LiquidContainer() ;

static inline int32_t getStaticF__LiquidFill() ;

static inline int32_t getStaticF__LiquidFillNormal() ;

static inline int32_t getStaticF__LiquidPlaneNormal() ;

static inline int32_t getStaticF__LiquidPlanePosition() ;

static inline int32_t getStaticF__LiquidSurfaceColor() ;

static inline int32_t getStaticF__LiquidSwayX() ;

static inline int32_t getStaticF__LiquidSwayY() ;

static inline int32_t getStaticF__LiquidVolume() ;

static inline int32_t getStaticF__LitDirStencilReadMask() ;

static inline int32_t getStaticF__LitDirStencilRef() ;

static inline int32_t getStaticF__LitDirStencilWriteMask() ;

static inline int32_t getStaticF__LitPunctualStencilReadMask() ;

static inline int32_t getStaticF__LitPunctualStencilRef() ;

static inline int32_t getStaticF__LitPunctualStencilWriteMask() ;

static inline int32_t getStaticF__LitStencilReadMask() ;

static inline int32_t getStaticF__LitStencilRef() ;

static inline int32_t getStaticF__LitStencilWriteMask() ;

static inline int32_t getStaticF__MAIN_TEX_MODE__() ;

static inline int32_t getStaticF__METALNESS() ;

static inline int32_t getStaticF__METALNESS_MAP() ;

static inline int32_t getStaticF__MainTex() ;

static inline int32_t getStaticF__MainTexMMBias() ;

static inline int32_t getStaticF__MainTex_ST() ;

static inline int32_t getStaticF__Mask() ;

static inline int32_t getStaticF__Mask0() ;

static inline int32_t getStaticF__Mask0_ST() ;

static inline int32_t getStaticF__Mask1() ;

static inline int32_t getStaticF__Mask1_ST() ;

static inline int32_t getStaticF__Mask2() ;

static inline int32_t getStaticF__Mask2_ST() ;

static inline int32_t getStaticF__Mask3() ;

static inline int32_t getStaticF__Mask3_ST() ;

static inline int32_t getStaticF__MaskCoord() ;

static inline int32_t getStaticF__MaskEdgeColor() ;

static inline int32_t getStaticF__MaskEdgeSoftness() ;

static inline int32_t getStaticF__MaskInverse() ;

static inline int32_t getStaticF__MaskMap() ;

static inline int32_t getStaticF__MaskMapToggle() ;

static inline int32_t getStaticF__MaskMap_ST() ;

static inline int32_t getStaticF__MaskMap_WH() ;

static inline int32_t getStaticF__MaskSoftnessX() ;

static inline int32_t getStaticF__MaskSoftnessY() ;

static inline int32_t getStaticF__MaskTex() ;

static inline int32_t getStaticF__MaskTex_ST() ;

static inline int32_t getStaticF__MaskWipeControl() ;

static inline int32_t getStaticF__Masks() ;

static inline int32_t getStaticF__MatrixForward() ;

static inline int32_t getStaticF__MatrixRight() ;

static inline int32_t getStaticF__MatrixUp() ;

static inline int32_t getStaticF__MaxColor() ;

static inline int32_t getStaticF__MaxFadeDistance() ;

static inline int32_t getStaticF__MaxRadius() ;

static inline int32_t getStaticF__Metallic() ;

static inline int32_t getStaticF__Metallic0() ;

static inline int32_t getStaticF__Metallic1() ;

static inline int32_t getStaticF__Metallic2() ;

static inline int32_t getStaticF__Metallic3() ;

static inline int32_t getStaticF__MetallicGloss() ;

static inline int32_t getStaticF__MetallicGlossMap() ;

static inline int32_t getStaticF__MetallicGlossMap_ST() ;

static inline int32_t getStaticF__MetallicTex() ;

static inline int32_t getStaticF__MetallicTex_ST() ;

static inline int32_t getStaticF__Metallic_ST() ;

static inline int32_t getStaticF__MiddleColor() ;

static inline int32_t getStaticF__MiddleGlowValue() ;

static inline int32_t getStaticF__MinFadeDistance() ;

static inline int32_t getStaticF__MinRadius() ;

static inline int32_t getStaticF__MinVisibleAlpha() ;

static inline int32_t getStaticF__MipBias() ;

static inline int32_t getStaticF__Mode() ;

static inline int32_t getStaticF__MoonAlpha() ;

static inline int32_t getStaticF__MoonAngles() ;

static inline int32_t getStaticF__MoonMap() ;

static inline int32_t getStaticF__MoonMap_ST() ;

static inline int32_t getStaticF__MoonSize() ;

static inline int32_t getStaticF__MouthMap() ;

static inline int32_t getStaticF__MouthMap_Atlas() ;

static inline int32_t getStaticF__MouthMap_ST() ;

static inline int32_t getStaticF__N() ;

static inline int32_t getStaticF__NORMAL_MAP() ;

static inline int32_t getStaticF__NoTexture() ;

static inline int32_t getStaticF__NoiseTex() ;

static inline int32_t getStaticF__NoiseTex_ST() ;

static inline int32_t getStaticF__Noise_Size() ;

static inline int32_t getStaticF__Noise_Strength() ;

static inline int32_t getStaticF__Normal() ;

static inline int32_t getStaticF__Normal0() ;

static inline int32_t getStaticF__Normal0_ST() ;

static inline int32_t getStaticF__Normal1() ;

static inline int32_t getStaticF__Normal1_ST() ;

static inline int32_t getStaticF__Normal2() ;

static inline int32_t getStaticF__Normal2_ST() ;

static inline int32_t getStaticF__Normal3() ;

static inline int32_t getStaticF__Normal3_ST() ;

static inline int32_t getStaticF__NormalMap() ;

static inline int32_t getStaticF__NormalMapKwToggle() ;

static inline int32_t getStaticF__NormalMapSampler() ;

static inline int32_t getStaticF__NormalMapSampler_ST() ;

static inline int32_t getStaticF__NormalMap_ST() ;

static inline int32_t getStaticF__Normal_ST() ;

static inline int32_t getStaticF__NormalsShrink() ;

static inline int32_t getStaticF__NotVisibleColor() ;

static inline int32_t getStaticF__NumLayersCount() ;

static inline int32_t getStaticF__Number_of_Tiles() ;

static inline int32_t getStaticF__OPACITY() ;

static inline int32_t getStaticF__OPACITY_MAP() ;

static inline int32_t getStaticF__Occlusion() ;

static inline int32_t getStaticF__OcclusionEnabled() ;

static inline int32_t getStaticF__OcclusionMap() ;

static inline int32_t getStaticF__OcclusionMap_ST() ;

static inline int32_t getStaticF__OcclusionStrength() ;

static inline int32_t getStaticF__Off_Color() ;

static inline int32_t getStaticF__Offset() ;

static inline int32_t getStaticF__OffsetFactor() ;

static inline int32_t getStaticF__OffsetUnits() ;

static inline int32_t getStaticF__OfsX() ;

static inline int32_t getStaticF__OfsY() ;

static inline int32_t getStaticF__OldHueVarBehavior() ;

static inline int32_t getStaticF__Opacity() ;

static inline int32_t getStaticF__OpacityThreshold() ;

static inline int32_t getStaticF__OrdinateScale() ;

static inline int32_t getStaticF__OutlineColor() ;

static inline int32_t getStaticF__OutlineColor1() ;

static inline int32_t getStaticF__OutlineColor2() ;

static inline int32_t getStaticF__OutlineColor3() ;

static inline int32_t getStaticF__OutlineJointColor() ;

static inline int32_t getStaticF__OutlineMode() ;

static inline int32_t getStaticF__OutlineOffset1() ;

static inline int32_t getStaticF__OutlineOffset2() ;

static inline int32_t getStaticF__OutlineOffset3() ;

static inline int32_t getStaticF__OutlineOpacity() ;

static inline int32_t getStaticF__OutlineShininess() ;

static inline int32_t getStaticF__OutlineSoftness() ;

static inline int32_t getStaticF__OutlineTex() ;

static inline int32_t getStaticF__OutlineTex_ST() ;

static inline int32_t getStaticF__OutlineUVSpeed() ;

static inline int32_t getStaticF__OutlineUVSpeedX() ;

static inline int32_t getStaticF__OutlineUVSpeedY() ;

static inline int32_t getStaticF__OutlineWidth() ;

static inline int32_t getStaticF__OverlayTex() ;

static inline int32_t getStaticF__OverlayTex_ST() ;

static inline int32_t getStaticF__Padding() ;

static inline int32_t getStaticF__PaddingAndSize() ;

static inline int32_t getStaticF__Parallax() ;

static inline int32_t getStaticF__ParallaxAABias() ;

static inline int32_t getStaticF__ParallaxAAToggle() ;

static inline int32_t getStaticF__ParallaxAmplitude() ;

static inline int32_t getStaticF__ParallaxMap() ;

static inline int32_t getStaticF__ParallaxMap_ST() ;

static inline int32_t getStaticF__ParallaxPlanarToggle() ;

static inline int32_t getStaticF__ParallaxSamplesMinMax() ;

static inline int32_t getStaticF__ParallaxToggle() ;

static inline int32_t getStaticF__Pass() ;

static inline int32_t getStaticF__PassthroughAmount() ;

static inline int32_t getStaticF__PassthroughMask() ;

static inline int32_t getStaticF__PassthroughMask_ST() ;

static inline int32_t getStaticF__PerspectiveFilter() ;

static inline int32_t getStaticF__Phi0() ;

static inline int32_t getStaticF__Phi1() ;

static inline int32_t getStaticF__PinchDeform() ;

static inline int32_t getStaticF__PinkyGlowValue() ;

static inline int32_t getStaticF__PixelScale() ;

static inline int32_t getStaticF__PixelWidth() ;

static inline int32_t getStaticF__PointsThickness() ;

static inline int32_t getStaticF__Power() ;

static inline int32_t getStaticF__Primary_Color() ;

static inline int32_t getStaticF__Progress() ;

static inline int32_t getStaticF__ProgressValue() ;

static inline int32_t getStaticF__ProjectionParams() ;

static inline int32_t getStaticF__ProximityColor() ;

static inline int32_t getStaticF__ProximityStrength() ;

static inline int32_t getStaticF__ProximityTransitionRange() ;

static inline int32_t getStaticF__PulseRate() ;

static inline int32_t getStaticF__QueueControl() ;

static inline int32_t getStaticF__QueueOffset() ;

static inline int32_t getStaticF__REFLECTIONS_COLOR() ;

static inline int32_t getStaticF__REFLECTIONS_COLOR_MAP() ;

static inline int32_t getStaticF__REFLECTIONS_IOR() ;

static inline int32_t getStaticF__REFLECTIONS_IOR_MAP() ;

static inline int32_t getStaticF__REFLECTIONS_ROUGHNESS() ;

static inline int32_t getStaticF__REFLECTIONS_ROUGHNESS_MAP() ;

static inline int32_t getStaticF__REFLECTIONS_WEIGHT() ;

static inline int32_t getStaticF__RadialGradientBackgroundOpacity() ;

static inline int32_t getStaticF__RadialGradientIntensity() ;

static inline int32_t getStaticF__RadialGradientOpacity() ;

static inline int32_t getStaticF__RadialGradientScale() ;

static inline int32_t getStaticF__Radii() ;

static inline int32_t getStaticF__Radius() ;

static inline int32_t getStaticF__ReceiveShadows() ;

static inline int32_t getStaticF__Rect() ;

static inline int32_t getStaticF__ReflectAlbedoTint() ;

static inline int32_t getStaticF__ReflectBoxCubePos() ;

static inline int32_t getStaticF__ReflectBoxProjectToggle() ;

static inline int32_t getStaticF__ReflectBoxRotation() ;

static inline int32_t getStaticF__ReflectBoxSize() ;

static inline int32_t getStaticF__ReflectExposure() ;

static inline int32_t getStaticF__ReflectFaceColor() ;

static inline int32_t getStaticF__ReflectMatcapPerspToggle() ;

static inline int32_t getStaticF__ReflectMatcapToggle() ;

static inline int32_t getStaticF__ReflectNormalTex() ;

static inline int32_t getStaticF__ReflectNormalToggle() ;

static inline int32_t getStaticF__ReflectOffset() ;

static inline int32_t getStaticF__ReflectOpacity() ;

static inline int32_t getStaticF__ReflectOutlineColor() ;

static inline int32_t getStaticF__ReflectRotate() ;

static inline int32_t getStaticF__ReflectScale() ;

static inline int32_t getStaticF__ReflectTex() ;

static inline int32_t getStaticF__ReflectTint() ;

static inline int32_t getStaticF__ReflectToggle() ;

static inline int32_t getStaticF__Reflectivity() ;

static inline int32_t getStaticF__RendererColor() ;

static inline int32_t getStaticF__RespawnAmount() ;

static inline int32_t getStaticF__Rim() ;

static inline int32_t getStaticF__RimColor() ;

static inline int32_t getStaticF__RimFactor() ;

static inline int32_t getStaticF__RimLightSampler() ;

static inline int32_t getStaticF__RimLightSampler_ST() ;

static inline int32_t getStaticF__RimPower() ;

static inline int32_t getStaticF__RingGlowValue() ;

static inline int32_t getStaticF__RotateAngle() ;

static inline int32_t getStaticF__RotateAnim() ;

static inline int32_t getStaticF__RotateOnYAxisBySinTime() ;

static inline int32_t getStaticF__RotateSpeed() ;

static inline int32_t getStaticF__Rough() ;

static inline int32_t getStaticF__SATTex() ;

static inline int32_t getStaticF__SATTex_ST() ;

static inline int32_t getStaticF__SPECULAR_COLOR() ;

static inline int32_t getStaticF__SPECULAR_COLOR_MAP() ;

static inline int32_t getStaticF__SPECULAR_IOR() ;

static inline int32_t getStaticF__SPECULAR_IOR_MAP() ;

static inline int32_t getStaticF__SPECULAR_ROUGHNESS() ;

static inline int32_t getStaticF__SPECULAR_ROUGHNESS_MAP() ;

static inline int32_t getStaticF__SampleGI() ;

static inline int32_t getStaticF__Scale() ;

static inline int32_t getStaticF__ScaleOffsetB() ;

static inline int32_t getStaticF__ScaleOffsetG() ;

static inline int32_t getStaticF__ScaleOffsetR() ;

static inline int32_t getStaticF__ScaleRG() ;

static inline int32_t getStaticF__ScaleRatioA() ;

static inline int32_t getStaticF__ScaleRatioB() ;

static inline int32_t getStaticF__ScaleRatioC() ;

static inline int32_t getStaticF__ScaleX() ;

static inline int32_t getStaticF__ScaleY() ;

static inline int32_t getStaticF__SceneMeshZWrite() ;

static inline int32_t getStaticF__SceneTint() ;

static inline int32_t getStaticF__Scl() ;

static inline int32_t getStaticF__ScreenParams() ;

static inline int32_t getStaticF__ScreenRatio() ;

static inline int32_t getStaticF__ScrollSpeedAndScale() ;

static inline int32_t getStaticF__ScrollUOffset() ;

static inline int32_t getStaticF__SecondTex() ;

static inline int32_t getStaticF__SecondTex_ST() ;

static inline int32_t getStaticF__SecondViewColor() ;

static inline int32_t getStaticF__Secondary_Color() ;

static inline int32_t getStaticF__SeeThru() ;

static inline int32_t getStaticF__SelectedOpacity() ;

static inline int32_t getStaticF__SettingsPreset() ;

static inline int32_t getStaticF__ShaderFlags() ;

static inline int32_t getStaticF__ShadowColor() ;

static inline int32_t getStaticF__ShadowColor0() ;

static inline int32_t getStaticF__ShadowColor1() ;

static inline int32_t getStaticF__ShadowColorMask() ;

static inline int32_t getStaticF__ShadowIntensity() ;

static inline int32_t getStaticF__ShadowTex() ;

static inline int32_t getStaticF__ShadowTex_ST() ;

static inline int32_t getStaticF__Sharpness() ;

static inline int32_t getStaticF__Shininess() ;

static inline int32_t getStaticF__ShrinkLimit() ;

static inline int32_t getStaticF__SideFalloff() ;

static inline int32_t getStaticF__SimpleLitDirStencilReadMask() ;

static inline int32_t getStaticF__SimpleLitDirStencilRef() ;

static inline int32_t getStaticF__SimpleLitDirStencilWriteMask() ;

static inline int32_t getStaticF__SimpleLitPunctualStencilReadMask() ;

static inline int32_t getStaticF__SimpleLitPunctualStencilRef() ;

static inline int32_t getStaticF__SimpleLitPunctualStencilWriteMask() ;

static inline int32_t getStaticF__SimpleLitStencilReadMask() ;

static inline int32_t getStaticF__SimpleLitStencilRef() ;

static inline int32_t getStaticF__SimpleLitStencilWriteMask() ;

static inline int32_t getStaticF__SinTime() ;

static inline int32_t getStaticF__Size() ;

static inline int32_t getStaticF__Sky1_Col() ;

static inline int32_t getStaticF__Sky1_Exp() ;

static inline int32_t getStaticF__Sky1_Rot() ;

static inline int32_t getStaticF__Sky2_Col() ;

static inline int32_t getStaticF__Sky2_Exp() ;

static inline int32_t getStaticF__Sky2_Rot() ;

static inline int32_t getStaticF__SkyAlpha() ;

static inline int32_t getStaticF__SkyGradient() ;

static inline int32_t getStaticF__SkyGradient_ST() ;

static inline int32_t getStaticF__SkyLayer1() ;

static inline int32_t getStaticF__SkyLayer1_Params() ;

static inline int32_t getStaticF__SkyLayer1_ST() ;

static inline int32_t getStaticF__SkyLayer2() ;

static inline int32_t getStaticF__SkyLayer2_Params() ;

static inline int32_t getStaticF__SkyLayer2_ST() ;

static inline int32_t getStaticF__Sky_Off() ;

static inline int32_t getStaticF__Smoothness() ;

static inline int32_t getStaticF__Smoothness0() ;

static inline int32_t getStaticF__Smoothness1() ;

static inline int32_t getStaticF__Smoothness2() ;

static inline int32_t getStaticF__Smoothness3() ;

static inline int32_t getStaticF__SmoothnessSource() ;

static inline int32_t getStaticF__SmoothnessTextureChannel() ;

static inline int32_t getStaticF__SoftParticleFadeParams() ;

static inline int32_t getStaticF__SoftParticlesEnabled() ;

static inline int32_t getStaticF__SoftParticlesFarFadeDistance() ;

static inline int32_t getStaticF__SoftParticlesNearFadeDistance() ;

static inline int32_t getStaticF__Softness() ;

static inline int32_t getStaticF__SpecColor() ;

static inline int32_t getStaticF__SpecGlossMap() ;

static inline int32_t getStaticF__SpecGlossMap_ST() ;

static inline int32_t getStaticF__SpecSource() ;

static inline int32_t getStaticF__SpecularColor() ;

static inline int32_t getStaticF__SpecularDir() ;

static inline int32_t getStaticF__SpecularHighlights() ;

static inline int32_t getStaticF__SpecularPower() ;

static inline int32_t getStaticF__SpecularPowerIntensity() ;

static inline int32_t getStaticF__SpecularReflectionSampler() ;

static inline int32_t getStaticF__SpecularReflectionSampler_ST() ;

static inline int32_t getStaticF__SpecularUseDiffuseColor() ;

static inline int32_t getStaticF__Speed() ;

static inline int32_t getStaticF__SpeedA() ;

static inline int32_t getStaticF__SpeedB() ;

static inline int32_t getStaticF__SpeedG() ;

static inline int32_t getStaticF__SpeedR() ;

static inline int32_t getStaticF__SpeedRG() ;

static inline int32_t getStaticF__Splat0() ;

static inline int32_t getStaticF__Splat0_ST() ;

static inline int32_t getStaticF__Splat1() ;

static inline int32_t getStaticF__Splat1_ST() ;

static inline int32_t getStaticF__Splat2() ;

static inline int32_t getStaticF__Splat2_ST() ;

static inline int32_t getStaticF__Splat3() ;

static inline int32_t getStaticF__Splat3_ST() ;

static inline int32_t getStaticF__SpotDirection() ;

static inline int32_t getStaticF__SrcBlend() ;

static inline int32_t getStaticF__SrcBlendAlpha() ;

static inline int32_t getStaticF__SrcRect() ;

static inline int32_t getStaticF__Stamp() ;

static inline int32_t getStaticF__StampMultipler() ;

static inline int32_t getStaticF__StealthEffectOn() ;

static inline int32_t getStaticF__Stencil() ;

static inline int32_t getStaticF__StencilComp() ;

static inline int32_t getStaticF__StencilComparison() ;

static inline int32_t getStaticF__StencilFailFront() ;

static inline int32_t getStaticF__StencilMask() ;

static inline int32_t getStaticF__StencilOp() ;

static inline int32_t getStaticF__StencilPassFront() ;

static inline int32_t getStaticF__StencilReadMask() ;

static inline int32_t getStaticF__StencilRef() ;

static inline int32_t getStaticF__StencilRefDitherMask() ;

static inline int32_t getStaticF__StencilReference() ;

static inline int32_t getStaticF__StencilWriteDitherMask() ;

static inline int32_t getStaticF__StencilWriteMask() ;

static inline int32_t getStaticF__StencilZFailFront() ;

static inline int32_t getStaticF__StreamingColor() ;

static inline int32_t getStaticF__SubShaderOptions() ;

static inline int32_t getStaticF__SubsurfaceColor() ;

static inline int32_t getStaticF__SubsurfaceIndirect() ;

static inline int32_t getStaticF__SubsurfaceKwToggle() ;

static inline int32_t getStaticF__SubsurfaceTex() ;

static inline int32_t getStaticF__SubsurfaceTex_ST() ;

static inline int32_t getStaticF__Subtract() ;

static inline int32_t getStaticF__SunAngles() ;

static inline int32_t getStaticF__SunMap() ;

static inline int32_t getStaticF__SunMap_ST() ;

static inline int32_t getStaticF__Surface() ;

static inline int32_t getStaticF__SwizzleNormalMapChannelsNM() ;

static inline int32_t getStaticF__TRANSPARENCY() ;

static inline int32_t getStaticF__TRANSPARENCY_MAP() ;

static inline int32_t getStaticF__TentacleEndDir() ;

static inline int32_t getStaticF__TentacleEndPos() ;

static inline int32_t getStaticF__TentacleRingOrigin() ;

static inline int32_t getStaticF__TentacleRingRadius() ;

static inline int32_t getStaticF__TentacleStartDir() ;

static inline int32_t getStaticF__TerrainHolesTexture() ;

static inline int32_t getStaticF__TerrainHolesTexture_ST() ;

static inline int32_t getStaticF__Tex() ;

static inline int32_t getStaticF__Tex0MainView() ;

static inline int32_t getStaticF__Tex0MainView_ST() ;

static inline int32_t getStaticF__Tex0Shadows() ;

static inline int32_t getStaticF__Tex0Shadows_ST() ;

static inline int32_t getStaticF__Tex1MainView() ;

static inline int32_t getStaticF__Tex1MainView_ST() ;

static inline int32_t getStaticF__Tex1Shadows() ;

static inline int32_t getStaticF__Tex1Shadows_ST() ;

static inline int32_t getStaticF__Tex2() ;

static inline int32_t getStaticF__Tex2_ST() ;

static inline int32_t getStaticF__TexMipBias() ;

static inline int32_t getStaticF__TexTransition() ;

static inline int32_t getStaticF__TexelSize() ;

static inline int32_t getStaticF__TexelSnapToggle() ;

static inline int32_t getStaticF__TexelSnap_Factor() ;

static inline int32_t getStaticF__Texture() ;

static inline int32_t getStaticF__Texture2D() ;

static inline int32_t getStaticF__TextureHeight() ;

static inline int32_t getStaticF__TextureSampleAdd() ;

static inline int32_t getStaticF__TextureWidth() ;

static inline int32_t getStaticF__Texture_ST() ;

static inline int32_t getStaticF__Theta0() ;

static inline int32_t getStaticF__Theta1() ;

static inline int32_t getStaticF__ThirdTex() ;

static inline int32_t getStaticF__ThirdTex_ST() ;

static inline int32_t getStaticF__Threshold1Color() ;

static inline int32_t getStaticF__Threshold2Color() ;

static inline int32_t getStaticF__Threshold3Color() ;

static inline int32_t getStaticF__ThumbGlowValue() ;

static inline int32_t getStaticF__Tile_X() ;

static inline int32_t getStaticF__Tile_Y() ;

static inline int32_t getStaticF__Time() ;

static inline int32_t getStaticF__TimeOffset() ;

static inline int32_t getStaticF__TimeScale() ;

static inline int32_t getStaticF__Tint() ;

static inline int32_t getStaticF__TintColor() ;

static inline int32_t getStaticF__ToneMapCoeffs1() ;

static inline int32_t getStaticF__ToneMapCoeffs2() ;

static inline int32_t getStaticF__TopColor() ;

static inline int32_t getStaticF__TransitionPoint() ;

static inline int32_t getStaticF__TransparencyMode() ;

static inline int32_t getStaticF__TwoSided() ;

static inline int32_t getStaticF__UAxis() ;

static inline int32_t getStaticF__UNDERWATER_MODE_() ;

static inline int32_t getStaticF__UOrigin() ;

static inline int32_t getStaticF__USE_DEFORM_MAP() ;

static inline int32_t getStaticF__USE_TEX_ARRAY_ATLAS() ;

static inline int32_t getStaticF__USE_WORLD_POS_AS_OFFSET() ;

static inline int32_t getStaticF__UScale() ;

static inline int32_t getStaticF__UV() ;

static inline int32_t getStaticF__UVSec() ;

static inline int32_t getStaticF__UVSource() ;

static inline int32_t getStaticF__UnderlayColor() ;

static inline int32_t getStaticF__UnderlayDilate() ;

static inline int32_t getStaticF__UnderlayOffset() ;

static inline int32_t getStaticF__UnderlayOffsetX() ;

static inline int32_t getStaticF__UnderlayOffsetY() ;

static inline int32_t getStaticF__UnderlayPixelSize() ;

static inline int32_t getStaticF__UnderlaySoftness() ;

static inline int32_t getStaticF__UseAoMap() ;

static inline int32_t getStaticF__UseColorMap() ;

static inline int32_t getStaticF__UseCrystalEffect() ;

static inline int32_t getStaticF__UseDayNightLightmap() ;

static inline int32_t getStaticF__UseEmissiveMap() ;

static inline int32_t getStaticF__UseEyeTracking() ;

static inline int32_t getStaticF__UseGridEffect() ;

static inline int32_t getStaticF__UseImageAsSDF() ;

static inline int32_t getStaticF__UseMetallicMap() ;

static inline int32_t getStaticF__UseMouthFlap() ;

static inline int32_t getStaticF__UseNormalMap() ;

static inline int32_t getStaticF__UseOpacityMap() ;

static inline int32_t getStaticF__UseRoughnessMap() ;

static inline int32_t getStaticF__UseSpecHighlight() ;

static inline int32_t getStaticF__UseSpecular() ;

static inline int32_t getStaticF__UseSpecularAlphaChannel() ;

static inline int32_t getStaticF__UseUIAlphaClip() ;

static inline int32_t getStaticF__UseVertexColor() ;

static inline int32_t getStaticF__UseViewSpaceUVs() ;

static inline int32_t getStaticF__UseWaveWarp() ;

static inline int32_t getStaticF__UseWeatherMap() ;

static inline int32_t getStaticF__UseWorldSpaceUVs() ;

static inline int32_t getStaticF__UvOffset() ;

static inline int32_t getStaticF__UvShiftOffset() ;

static inline int32_t getStaticF__UvShiftRate() ;

static inline int32_t getStaticF__UvShiftSteps() ;

static inline int32_t getStaticF__UvShiftToggle() ;

static inline int32_t getStaticF__UvTiling() ;

static inline int32_t getStaticF__VAxis() ;

static inline int32_t getStaticF__VERTEX_COLOR_() ;

static inline int32_t getStaticF__VERTEX_COLOR_MODE_() ;

static inline int32_t getStaticF__VERTEX_DEFORMATION() ;

static inline int32_t getStaticF__VOrigin() ;

static inline int32_t getStaticF__VScale() ;

static inline int32_t getStaticF__VertexColorLightmap() ;

static inline int32_t getStaticF__VertexColorLightmapScale() ;

static inline int32_t getStaticF__VertexFlapAxis() ;

static inline int32_t getStaticF__VertexFlapDegreesMinMax() ;

static inline int32_t getStaticF__VertexFlapPhaseOffset() ;

static inline int32_t getStaticF__VertexFlapSpeed() ;

static inline int32_t getStaticF__VertexFlapToggle() ;

static inline int32_t getStaticF__VertexLightToggle() ;

static inline int32_t getStaticF__VertexOffsetX() ;

static inline int32_t getStaticF__VertexOffsetY() ;

static inline int32_t getStaticF__VertexRotateAngles() ;

static inline int32_t getStaticF__VertexRotateAnim() ;

static inline int32_t getStaticF__VertexRotateToggle() ;

static inline int32_t getStaticF__VertexWaveAxes() ;

static inline int32_t getStaticF__VertexWaveDebug() ;

static inline int32_t getStaticF__VertexWaveEnd() ;

static inline int32_t getStaticF__VertexWaveFalloff() ;

static inline int32_t getStaticF__VertexWaveParams() ;

static inline int32_t getStaticF__VertexWavePhaseOffset() ;

static inline int32_t getStaticF__VertexWaveSphereMask() ;

static inline int32_t getStaticF__VertexWaveToggle() ;

static inline int32_t getStaticF__Visible() ;

static inline int32_t getStaticF__Volume0() ;

static inline int32_t getStaticF__Volume0_ST() ;

static inline int32_t getStaticF__Volume1() ;

static inline int32_t getStaticF__Volume1_ST() ;

static inline int32_t getStaticF__Volume2() ;

static inline int32_t getStaticF__Volume2_ST() ;

static inline int32_t getStaticF__VolumeInvSize() ;

static inline int32_t getStaticF__VolumeMask() ;

static inline int32_t getStaticF__VolumeMask_ST() ;

static inline int32_t getStaticF__VolumeMin() ;

static inline int32_t getStaticF__WINDQUALITY() ;

static inline int32_t getStaticF__WIND_BRANCH1() ;

static inline int32_t getStaticF__WIND_BRANCH2() ;

static inline int32_t getStaticF__WIND_RIPPLE() ;

static inline int32_t getStaticF__WIND_SHARED() ;

static inline int32_t getStaticF__WIND_SHIMMER() ;

static inline int32_t getStaticF__WallScale() ;

static inline int32_t getStaticF__WaterCaustics() ;

static inline int32_t getStaticF__WaterEffect() ;

static inline int32_t getStaticF__WaveAmplitude() ;

static inline int32_t getStaticF__WaveAndDistance() ;

static inline int32_t getStaticF__WaveFrequency() ;

static inline int32_t getStaticF__WaveScale() ;

static inline int32_t getStaticF__WaveTimeScale() ;

static inline int32_t getStaticF__WavingTint() ;

static inline int32_t getStaticF__WeatherMap() ;

static inline int32_t getStaticF__WeatherMapDissolveEdgeSize() ;

static inline int32_t getStaticF__WeatherMap_Atlas() ;

static inline int32_t getStaticF__WeatherMap_AtlasSlice() ;

static inline int32_t getStaticF__WeightBold() ;

static inline int32_t getStaticF__WeightNormal() ;

static inline int32_t getStaticF__WetBumpMap() ;

static inline int32_t getStaticF__WetBumpMap_ST() ;

static inline int32_t getStaticF__WetMap() ;

static inline int32_t getStaticF__WetMapUV() ;

static inline int32_t getStaticF__Width() ;

static inline int32_t getStaticF__WindColor() ;

static inline int32_t getStaticF__WindQuality() ;

static inline int32_t getStaticF__WindowParams() ;

static inline int32_t getStaticF__WireThickness() ;

static inline int32_t getStaticF__WireframeColor() ;

static inline int32_t getStaticF__WorkflowMode() ;

static inline int32_t getStaticF__WorldSpaceCameraPos() ;

static inline int32_t getStaticF__WorldSpaceLightPos0() ;

static inline int32_t getStaticF__WristFade() ;

static inline int32_t getStaticF__XRMotionVectorsPass() ;

static inline int32_t getStaticF__ZBufferParams() ;

static inline int32_t getStaticF__ZFightOffset() ;

static inline int32_t getStaticF__ZQueue() ;

static inline int32_t getStaticF__ZTest() ;

static inline int32_t getStaticF__ZTestMode() ;

static inline int32_t getStaticF__ZWrite() ;

static inline int32_t getStaticF__ZWriteMode() ;

static inline int32_t getStaticF___BasicOptions__() ;

static inline int32_t getStaticF___dirty() ;

static inline int32_t getStaticF__col() ;

static inline int32_t getStaticF__face() ;

static inline int32_t getStaticF__flip() ;

static inline int32_t getStaticF__premultiply() ;

static inline int32_t getStaticF__texcoord() ;

static inline int32_t getStaticF__texcoord_ST() ;

static inline int32_t getStaticF__unmultiply() ;

static inline int32_t getStaticF_bestFitNormalMap() ;

static inline int32_t getStaticF_bestFitNormalMap_ST() ;

static inline int32_t getStaticF_g_flCornerAdjust() ;

static inline int32_t getStaticF_g_flOutlineWidth() ;

static inline int32_t getStaticF_g_vOutlineColor() ;

static inline int32_t getStaticF_intensity() ;

static inline int32_t getStaticF_unity_4LightAtten0() ;

static inline int32_t getStaticF_unity_4LightPosX0() ;

static inline int32_t getStaticF_unity_4LightPosY0_() ;

static inline int32_t getStaticF_unity_4LightPosZ0() ;

static inline int32_t getStaticF_unity_AmbientEquator() ;

static inline int32_t getStaticF_unity_AmbientGround_() ;

static inline int32_t getStaticF_unity_AmbientSky() ;

static inline int32_t getStaticF_unity_CameraInvProjection() ;

static inline int32_t getStaticF_unity_CameraProjection() ;

static inline int32_t getStaticF_unity_CameraWorldClipPlanes() ;

static inline int32_t getStaticF_unity_DeltaTime() ;

static inline int32_t getStaticF_unity_FogColor() ;

static inline int32_t getStaticF_unity_FogParams() ;

static inline int32_t getStaticF_unity_IndirectSpecColor() ;

static inline int32_t getStaticF_unity_LODFade() ;

static inline int32_t getStaticF_unity_LightAtten() ;

static inline int32_t getStaticF_unity_LightColor() ;

static inline int32_t getStaticF_unity_LightPosition() ;

static inline int32_t getStaticF_unity_Lightmap() ;

static inline int32_t getStaticF_unity_LightmapST() ;

static inline int32_t getStaticF_unity_Lightmaps() ;

static inline int32_t getStaticF_unity_LightmapsInd() ;

static inline int32_t getStaticF_unity_ObjectToWorld() ;

static inline int32_t getStaticF_unity_OrthoParamsperspective_() ;

static inline int32_t getStaticF_unity_ShadowMasks() ;

static inline int32_t getStaticF_unity_SpotDirection() ;

static inline int32_t getStaticF_unity_WorldToLight() ;

static inline int32_t getStaticF_unity_WorldToObject() ;

static inline int32_t getStaticF_unity_WorldToShadow() ;

static inline void setStaticF_BACKFACE_NORMAL_MODE(int32_t  value) ;

static inline void setStaticF_Backface_Normal_Mode(int32_t  value) ;

static inline void setStaticF_Base_Map(int32_t  value) ;

static inline void setStaticF_EFFECT_BILLBOARD(int32_t  value) ;

static inline void setStaticF_EFFECT_EXTRA_TEX(int32_t  value) ;

static inline void setStaticF_HARD_OCCLUSION(int32_t  value) ;

static inline void setStaticF_Normal_Blend(int32_t  value) ;

static inline void setStaticF_Normal_Map(int32_t  value) ;

static inline void setStaticF_PixelSnap(int32_t  value) ;

static inline void setStaticF_SOFT_OCCLUSION(int32_t  value) ;

static inline void setStaticF_UNITY_LIGHTMODEL_AMBIENT(int32_t  value) ;

static inline void setStaticF_UNITY_MATRIX_IT_MV(int32_t  value) ;

static inline void setStaticF_UNITY_MATRIX_MV(int32_t  value) ;

static inline void setStaticF_UNITY_MATRIX_MVP(int32_t  value) ;

static inline void setStaticF_UNITY_MATRIX_P(int32_t  value) ;

static inline void setStaticF_UNITY_MATRIX_T_MV(int32_t  value) ;

static inline void setStaticF_UNITY_MATRIX_V(int32_t  value) ;

static inline void setStaticF_UNITY_MATRIX_VP_(int32_t  value) ;

static inline void setStaticF__AChannelColor(int32_t  value) ;

static inline void setStaticF__AbscissaOffset(int32_t  value) ;

static inline void setStaticF__AddPrecomputedVelocity(int32_t  value) ;

static inline void setStaticF__AdvancedOptions(int32_t  value) ;

static inline void setStaticF__Alpha(int32_t  value) ;

static inline void setStaticF__AlphaClip(int32_t  value) ;

static inline void setStaticF__AlphaClipThreshold(int32_t  value) ;

static inline void setStaticF__AlphaColor(int32_t  value) ;

static inline void setStaticF__AlphaCutoff(int32_t  value) ;

static inline void setStaticF__AlphaDetailToggle(int32_t  value) ;

static inline void setStaticF__AlphaDetail_Opacity(int32_t  value) ;

static inline void setStaticF__AlphaDetail_ST(int32_t  value) ;

static inline void setStaticF__AlphaDetail_WorldSpace(int32_t  value) ;

static inline void setStaticF__AlphaTex(int32_t  value) ;

static inline void setStaticF__AlphaTex_ST(int32_t  value) ;

static inline void setStaticF__AlphaToMask(int32_t  value) ;

static inline void setStaticF__Ambient(int32_t  value) ;

static inline void setStaticF__Angle(int32_t  value) ;

static inline void setStaticF__AverageColor(int32_t  value) ;

static inline void setStaticF__BAKERY_2SIDED(int32_t  value) ;

static inline void setStaticF__BAKERY_2SIDEDON(int32_t  value) ;

static inline void setStaticF__BAKERY_BICUBIC(int32_t  value) ;

static inline void setStaticF__BAKERY_LMSPEC(int32_t  value) ;

static inline void setStaticF__BAKERY_PROBESHNONLINEAR(int32_t  value) ;

static inline void setStaticF__BAKERY_RNM(int32_t  value) ;

static inline void setStaticF__BAKERY_SH(int32_t  value) ;

static inline void setStaticF__BAKERY_SHNONLINEAR(int32_t  value) ;

static inline void setStaticF__BAKERY_VERTEXLM(int32_t  value) ;

static inline void setStaticF__BAKERY_VERTEXLMDIR(int32_t  value) ;

static inline void setStaticF__BAKERY_VERTEXLMMASK(int32_t  value) ;

static inline void setStaticF__BAKERY_VERTEXLMSH(int32_t  value) ;

static inline void setStaticF__BAKERY_VOLROTATION(int32_t  value) ;

static inline void setStaticF__BAKERY_VOLUME(int32_t  value) ;

static inline void setStaticF__BASE_COLOR(int32_t  value) ;

static inline void setStaticF__BASE_COLOR_MAP(int32_t  value) ;

static inline void setStaticF__BASE_COLOR_WEIGHT(int32_t  value) ;

static inline void setStaticF__BChannelColor(int32_t  value) ;

static inline void setStaticF__BUILTIN_QueueControl(int32_t  value) ;

static inline void setStaticF__BUILTIN_QueueOffset(int32_t  value) ;

static inline void setStaticF__BUMP_MAP(int32_t  value) ;

static inline void setStaticF__BUMP_MAP_STRENGTH(int32_t  value) ;

static inline void setStaticF__BackgroundColor(int32_t  value) ;

static inline void setStaticF__Base(int32_t  value) ;

static inline void setStaticF__BaseColor(int32_t  value) ;

static inline void setStaticF__BaseColorAddSubDiff(int32_t  value) ;

static inline void setStaticF__BaseMap(int32_t  value) ;

static inline void setStaticF__BaseMapArray(int32_t  value) ;

static inline void setStaticF__BaseMapArrayIndex(int32_t  value) ;

static inline void setStaticF__BaseMapArray_ST(int32_t  value) ;

static inline void setStaticF__BaseMap_Atlas(int32_t  value) ;

static inline void setStaticF__BaseMap_AtlasSlice(int32_t  value) ;

static inline void setStaticF__BaseMap_AtlasSliceSource(int32_t  value) ;

static inline void setStaticF__BaseMap_ST(int32_t  value) ;

static inline void setStaticF__BaseMap_WH(int32_t  value) ;

static inline void setStaticF__BaseOpacity(int32_t  value) ;

static inline void setStaticF__Base_Color(int32_t  value) ;

static inline void setStaticF__Bevel(int32_t  value) ;

static inline void setStaticF__BevelAmount(int32_t  value) ;

static inline void setStaticF__BevelClamp(int32_t  value) ;

static inline void setStaticF__BevelOffset(int32_t  value) ;

static inline void setStaticF__BevelRoundness(int32_t  value) ;

static inline void setStaticF__BevelType(int32_t  value) ;

static inline void setStaticF__BevelWidth(int32_t  value) ;

static inline void setStaticF__BillboardKwToggle(int32_t  value) ;

static inline void setStaticF__BillboardShadowFade(int32_t  value) ;

static inline void setStaticF__Blend(int32_t  value) ;

static inline void setStaticF__BlendDst(int32_t  value) ;

static inline void setStaticF__BlendFactorCircleRadius(int32_t  value) ;

static inline void setStaticF__BlendModeDestination(int32_t  value) ;

static inline void setStaticF__BlendModePreserveSpecular(int32_t  value) ;

static inline void setStaticF__BlendModeSource(int32_t  value) ;

static inline void setStaticF__BlendOp(int32_t  value) ;

static inline void setStaticF__BlendOpAlpha(int32_t  value) ;

static inline void setStaticF__BlendOpColor(int32_t  value) ;

static inline void setStaticF__BlendSrc(int32_t  value) ;

static inline void setStaticF__Border(int32_t  value) ;

static inline void setStaticF__BorderColor(int32_t  value) ;

static inline void setStaticF__BorderColorA(int32_t  value) ;

static inline void setStaticF__BorderColorB(int32_t  value) ;

static inline void setStaticF__BorderColorType(int32_t  value) ;

static inline void setStaticF__BorderLine(int32_t  value) ;

static inline void setStaticF__BorderWidth(int32_t  value) ;

static inline void setStaticF__BottomColor(int32_t  value) ;

static inline void setStaticF__Brightness(int32_t  value) ;

static inline void setStaticF__BumpFace(int32_t  value) ;

static inline void setStaticF__BumpMap(int32_t  value) ;

static inline void setStaticF__BumpMap_ST(int32_t  value) ;

static inline void setStaticF__BumpOutline(int32_t  value) ;

static inline void setStaticF__BumpScale(int32_t  value) ;

static inline void setStaticF__COLOR_MODE__(int32_t  value) ;

static inline void setStaticF__CameraFadeParams(int32_t  value) ;

static inline void setStaticF__CameraFadingEnabled(int32_t  value) ;

static inline void setStaticF__CameraFarFadeDistance(int32_t  value) ;

static inline void setStaticF__CameraNearFadeDistance(int32_t  value) ;

static inline void setStaticF__CenterSize(int32_t  value) ;

static inline void setStaticF__ChromaAlphaCutoff(int32_t  value) ;

static inline void setStaticF__ChromaShadows(int32_t  value) ;

static inline void setStaticF__ChromaToleranceA(int32_t  value) ;

static inline void setStaticF__ChromaToleranceB(int32_t  value) ;

static inline void setStaticF__ClearCoat(int32_t  value) ;

static inline void setStaticF__ClearCoatMap(int32_t  value) ;

static inline void setStaticF__ClearCoatMap_ST(int32_t  value) ;

static inline void setStaticF__ClearCoatMask(int32_t  value) ;

static inline void setStaticF__ClearCoatSmoothness(int32_t  value) ;

static inline void setStaticF__ClearStencilReadMask(int32_t  value) ;

static inline void setStaticF__ClearStencilRef(int32_t  value) ;

static inline void setStaticF__ClearStencilWriteMask(int32_t  value) ;

static inline void setStaticF__ClipRect(int32_t  value) ;

static inline void setStaticF__CloudsColor(int32_t  value) ;

static inline void setStaticF__Color(int32_t  value) ;

static inline void setStaticF__Color0(int32_t  value) ;

static inline void setStaticF__Color1(int32_t  value) ;

static inline void setStaticF__Color2(int32_t  value) ;

static inline void setStaticF__Color3(int32_t  value) ;

static inline void setStaticF__Color4(int32_t  value) ;

static inline void setStaticF__ColorA(int32_t  value) ;

static inline void setStaticF__ColorB(int32_t  value) ;

static inline void setStaticF__ColorBottom(int32_t  value) ;

static inline void setStaticF__ColorDark(int32_t  value) ;

static inline void setStaticF__ColorEnd(int32_t  value) ;

static inline void setStaticF__ColorG(int32_t  value) ;

static inline void setStaticF__ColorInner(int32_t  value) ;

static inline void setStaticF__ColorLight(int32_t  value) ;

static inline void setStaticF__ColorMask(int32_t  value) ;

static inline void setStaticF__ColorMiddle(int32_t  value) ;

static inline void setStaticF__ColorMode(int32_t  value) ;

static inline void setStaticF__ColorOuter(int32_t  value) ;

static inline void setStaticF__ColorPrimary(int32_t  value) ;

static inline void setStaticF__ColorR(int32_t  value) ;

static inline void setStaticF__ColorRamp(int32_t  value) ;

static inline void setStaticF__ColorRampOffset(int32_t  value) ;

static inline void setStaticF__ColorRamp_ST(int32_t  value) ;

static inline void setStaticF__ColorSource(int32_t  value) ;

static inline void setStaticF__ColorStart(int32_t  value) ;

static inline void setStaticF__ColorTop(int32_t  value) ;

static inline void setStaticF__CompositingParams(int32_t  value) ;

static inline void setStaticF__CompositingParams2(int32_t  value) ;

static inline void setStaticF__Contrast(int32_t  value) ;

static inline void setStaticF__Control(int32_t  value) ;

static inline void setStaticF__ControlTex(int32_t  value) ;

static inline void setStaticF__ControlTex_ST(int32_t  value) ;

static inline void setStaticF__Control_ST(int32_t  value) ;

static inline void setStaticF__CosTime(int32_t  value) ;

static inline void setStaticF__CrystalPower(int32_t  value) ;

static inline void setStaticF__CrystalRimColor(int32_t  value) ;

static inline void setStaticF__Cube(int32_t  value) ;

static inline void setStaticF__CubeToLatLongParams(int32_t  value) ;

static inline void setStaticF__Cube_ST(int32_t  value) ;

static inline void setStaticF__Cull(int32_t  value) ;

static inline void setStaticF__CullMode(int32_t  value) ;

static inline void setStaticF__Cutoff(int32_t  value) ;

static inline void setStaticF__DAY_CYCLE_BRIGHTNESS_(int32_t  value) ;

static inline void setStaticF__DEBUG_PAWN_DATA(int32_t  value) ;

static inline void setStaticF__Darken(int32_t  value) ;

static inline void setStaticF__DayNightLightmapArray(int32_t  value) ;

static inline void setStaticF__DayNightLightmapArray_AtlasSlice(int32_t  value) ;

static inline void setStaticF__DayNightLightmapArray_ST(int32_t  value) ;

static inline void setStaticF__DecalMeshBiasType(int32_t  value) ;

static inline void setStaticF__DecalMeshDepthBias(int32_t  value) ;

static inline void setStaticF__DecalMeshViewBias(int32_t  value) ;

static inline void setStaticF__DefaultColor(int32_t  value) ;

static inline void setStaticF__Deform(int32_t  value) ;

static inline void setStaticF__DeformMap(int32_t  value) ;

static inline void setStaticF__DeformMapIntensity(int32_t  value) ;

static inline void setStaticF__DeformMapMaskByVertColorRAmount(int32_t  value) ;

static inline void setStaticF__DeformMapObjectSpaceOffsetsU(int32_t  value) ;

static inline void setStaticF__DeformMapObjectSpaceOffsetsV(int32_t  value) ;

static inline void setStaticF__DeformMapScrollSpeed(int32_t  value) ;

static inline void setStaticF__DeformMapUV0Influence(int32_t  value) ;

static inline void setStaticF__DeformMapWorldSpaceOffsetsU(int32_t  value) ;

static inline void setStaticF__DeformMapWorldSpaceOffsetsV(int32_t  value) ;

static inline void setStaticF__DeformMap_Atlas(int32_t  value) ;

static inline void setStaticF__DeformMap_AtlasSlice(int32_t  value) ;

static inline void setStaticF__DepthBias(int32_t  value) ;

static inline void setStaticF__DepthMap(int32_t  value) ;

static inline void setStaticF__DepthTex(int32_t  value) ;

static inline void setStaticF__DepthTex_ST(int32_t  value) ;

static inline void setStaticF__DestRect(int32_t  value) ;

static inline void setStaticF__DetailAlbedoMap(int32_t  value) ;

static inline void setStaticF__DetailAlbedoMapScale(int32_t  value) ;

static inline void setStaticF__DetailAlbedoMap_ST(int32_t  value) ;

static inline void setStaticF__DetailMask(int32_t  value) ;

static inline void setStaticF__DetailMask_ST(int32_t  value) ;

static inline void setStaticF__DetailNormalMap(int32_t  value) ;

static inline void setStaticF__DetailNormalMapScale(int32_t  value) ;

static inline void setStaticF__DetailNormalMap_ST(int32_t  value) ;

static inline void setStaticF__DetailTex(int32_t  value) ;

static inline void setStaticF__DetailTexIntensity(int32_t  value) ;

static inline void setStaticF__DetailTex_ST(int32_t  value) ;

static inline void setStaticF__Diffuse(int32_t  value) ;

static inline void setStaticF__DiffusePower(int32_t  value) ;

static inline void setStaticF__Dimensions(int32_t  value) ;

static inline void setStaticF__Direction(int32_t  value) ;

static inline void setStaticF__DistanceMultipler(int32_t  value) ;

static inline void setStaticF__DistortionBlend(int32_t  value) ;

static inline void setStaticF__DistortionEnabled(int32_t  value) ;

static inline void setStaticF__DistortionStrength(int32_t  value) ;

static inline void setStaticF__DistortionStrengthScaled(int32_t  value) ;

static inline void setStaticF__Dither(int32_t  value) ;

static inline void setStaticF__DitherStrength(int32_t  value) ;

static inline void setStaticF__DoTextureRotation(int32_t  value) ;

static inline void setStaticF__DragColor(int32_t  value) ;

static inline void setStaticF__DrawOrder(int32_t  value) ;

static inline void setStaticF__DstBlend(int32_t  value) ;

static inline void setStaticF__DstBlendAlpha(int32_t  value) ;

static inline void setStaticF__EMISSION_COLOR(int32_t  value) ;

static inline void setStaticF__EMISSION_COLOR_MAP(int32_t  value) ;

static inline void setStaticF__EMISSION_WEIGHT(int32_t  value) ;

static inline void setStaticF__EdgeThickness(int32_t  value) ;

static inline void setStaticF__EditorTime(int32_t  value) ;

static inline void setStaticF__Emission(int32_t  value) ;

static inline void setStaticF__EmissionColor(int32_t  value) ;

static inline void setStaticF__EmissionDissolveAnimation(int32_t  value) ;

static inline void setStaticF__EmissionDissolveEdgeSize(int32_t  value) ;

static inline void setStaticF__EmissionDissolveProgress(int32_t  value) ;

static inline void setStaticF__EmissionIntensityInDynamic(int32_t  value) ;

static inline void setStaticF__EmissionMap(int32_t  value) ;

static inline void setStaticF__EmissionMap_Atlas(int32_t  value) ;

static inline void setStaticF__EmissionMap_AtlasSlice(int32_t  value) ;

static inline void setStaticF__EmissionMap_ST(int32_t  value) ;

static inline void setStaticF__EmissionMaskByBaseMapAlpha(int32_t  value) ;

static inline void setStaticF__EmissionToggle(int32_t  value) ;

static inline void setStaticF__EmissionUVScrollSpeed(int32_t  value) ;

static inline void setStaticF__EmissionUseUVWaveWarp(int32_t  value) ;

static inline void setStaticF__EmissiveAmount(int32_t  value) ;

static inline void setStaticF__EmissiveTex(int32_t  value) ;

static inline void setStaticF__EmptyTex(int32_t  value) ;

static inline void setStaticF__EmptyTex_ST(int32_t  value) ;

static inline void setStaticF__EnableExternalAlpha(int32_t  value) ;

static inline void setStaticF__EnableHeightBlend(int32_t  value) ;

static inline void setStaticF__EnableInstancedPerPixelNormal(int32_t  value) ;

static inline void setStaticF__EnableOpacity(int32_t  value) ;

static inline void setStaticF__EnvMapSampler(int32_t  value) ;

static inline void setStaticF__EnvMapSampler_ST(int32_t  value) ;

static inline void setStaticF__EnvMatrixRotation(int32_t  value) ;

static inline void setStaticF__EnvironmentDepthBias(int32_t  value) ;

static inline void setStaticF__EnvironmentReflections(int32_t  value) ;

static inline void setStaticF__Exposure(int32_t  value) ;

static inline void setStaticF__ExtraTex(int32_t  value) ;

static inline void setStaticF__ExtraTex_ST(int32_t  value) ;

static inline void setStaticF__EyeOverrideUV(int32_t  value) ;

static inline void setStaticF__EyeOverrideUVTransform(int32_t  value) ;

static inline void setStaticF__EyeTileOffsetUV(int32_t  value) ;

static inline void setStaticF__FADE_END_EDGE(int32_t  value) ;

static inline void setStaticF__FADE_START_EDGE(int32_t  value) ;

static inline void setStaticF__FaceColor(int32_t  value) ;

static inline void setStaticF__FaceDilate(int32_t  value) ;

static inline void setStaticF__FaceShininess(int32_t  value) ;

static inline void setStaticF__FaceTex(int32_t  value) ;

static inline void setStaticF__FaceTex_ST(int32_t  value) ;

static inline void setStaticF__FaceText_ST(int32_t  value) ;

static inline void setStaticF__FaceUVSpeed(int32_t  value) ;

static inline void setStaticF__FaceUVSpeedX(int32_t  value) ;

static inline void setStaticF__FaceUVSpeedY(int32_t  value) ;

static inline void setStaticF__Fade(int32_t  value) ;

static inline void setStaticF__FadeColor(int32_t  value) ;

static inline void setStaticF__FadeColorIntensity(int32_t  value) ;

static inline void setStaticF__FadeLimit(int32_t  value) ;

static inline void setStaticF__FadeSign(int32_t  value) ;

static inline void setStaticF__FallbackAmount(int32_t  value) ;

static inline void setStaticF__FallbackTex(int32_t  value) ;

static inline void setStaticF__FallbackTex_ST(int32_t  value) ;

static inline void setStaticF__FalloffSampler(int32_t  value) ;

static inline void setStaticF__FalloffSampler_ST(int32_t  value) ;

static inline void setStaticF__FalloffTex(int32_t  value) ;

static inline void setStaticF__FalloffTex_ST(int32_t  value) ;

static inline void setStaticF__FingerGlowMask(int32_t  value) ;

static inline void setStaticF__FingerGlowMask_ST(int32_t  value) ;

static inline void setStaticF__FirstTex(int32_t  value) ;

static inline void setStaticF__FirstTex_ST(int32_t  value) ;

static inline void setStaticF__FirstViewColor(int32_t  value) ;

static inline void setStaticF__FlameWobbleNoise(int32_t  value) ;

static inline void setStaticF__FlameWobbleNoise_Atlas(int32_t  value) ;

static inline void setStaticF__FlameWobbleNoise_AtlasSlice(int32_t  value) ;

static inline void setStaticF__FlipbookBlending(int32_t  value) ;

static inline void setStaticF__FlipbookMode(int32_t  value) ;

static inline void setStaticF__Flow(int32_t  value) ;

static inline void setStaticF__FlowFac(int32_t  value) ;

static inline void setStaticF__FourthTex(int32_t  value) ;

static inline void setStaticF__FourthTex_ST(int32_t  value) ;

static inline void setStaticF__FresnelPower(int32_t  value) ;

static inline void setStaticF__FullTex(int32_t  value) ;

static inline void setStaticF__FullTex_ST(int32_t  value) ;

static inline void setStaticF__GChannelColor(int32_t  value) ;

static inline void setStaticF__GammaCorrection(int32_t  value) ;

static inline void setStaticF__GenerateGlow(int32_t  value) ;

static inline void setStaticF__GetBlendFactorMaxGizmoDistance(int32_t  value) ;

static inline void setStaticF__GizmoCircleRadius(int32_t  value) ;

static inline void setStaticF__GizmoLength(int32_t  value) ;

static inline void setStaticF__GizmoPosition(int32_t  value) ;

static inline void setStaticF__GizmoRenderMode(int32_t  value) ;

static inline void setStaticF__GizmoSplitPlane(int32_t  value) ;

static inline void setStaticF__GizmoSplitPlaneOrtho(int32_t  value) ;

static inline void setStaticF__GizmoThickness(int32_t  value) ;

static inline void setStaticF__GizmoZoneCenter(int32_t  value) ;

static inline void setStaticF__Gloss(int32_t  value) ;

static inline void setStaticF__GlossMapScale(int32_t  value) ;

static inline void setStaticF__Glossiness(int32_t  value) ;

static inline void setStaticF__GlossinessSource(int32_t  value) ;

static inline void setStaticF__GlossyReflections(int32_t  value) ;

static inline void setStaticF__GlowColor(int32_t  value) ;

static inline void setStaticF__GlowInner(int32_t  value) ;

static inline void setStaticF__GlowOffset(int32_t  value) ;

static inline void setStaticF__GlowOuter(int32_t  value) ;

static inline void setStaticF__GlowPower(int32_t  value) ;

static inline void setStaticF__Goo(int32_t  value) ;

static inline void setStaticF__GooN(int32_t  value) ;

static inline void setStaticF__GooN_ST(int32_t  value) ;

static inline void setStaticF__Goo_ST(int32_t  value) ;

static inline void setStaticF__Gradient(int32_t  value) ;

static inline void setStaticF__GradientMap(int32_t  value) ;

static inline void setStaticF__GradientMapToggle(int32_t  value) ;

static inline void setStaticF__GradientPosition0(int32_t  value) ;

static inline void setStaticF__GradientPosition1(int32_t  value) ;

static inline void setStaticF__GradientPosition2(int32_t  value) ;

static inline void setStaticF__GradientScale(int32_t  value) ;

static inline void setStaticF__GradientStop1(int32_t  value) ;

static inline void setStaticF__GradientStop2(int32_t  value) ;

static inline void setStaticF__GradientStop3(int32_t  value) ;

static inline void setStaticF__GradientTex(int32_t  value) ;

static inline void setStaticF__GradientTex_ST(int32_t  value) ;

static inline void setStaticF__GreyZoneException(int32_t  value) ;

static inline void setStaticF__GuardianFade(int32_t  value) ;

static inline void setStaticF__HOT_WHITE_(int32_t  value) ;

static inline void setStaticF__HalfLambertToggle(int32_t  value) ;

static inline void setStaticF__HandAlpha(int32_t  value) ;

static inline void setStaticF__HandleZTest(int32_t  value) ;

static inline void setStaticF__HandleZWrite(int32_t  value) ;

static inline void setStaticF__Height(int32_t  value) ;

static inline void setStaticF__HeightBasedWaterEffect(int32_t  value) ;

static inline void setStaticF__HeightTransition(int32_t  value) ;

static inline void setStaticF__Hemispherical(int32_t  value) ;

static inline void setStaticF__HighLightAttenuation(int32_t  value) ;

static inline void setStaticF__Highlight(int32_t  value) ;

static inline void setStaticF__HighlightColor(int32_t  value) ;

static inline void setStaticF__HighlightOpacity(int32_t  value) ;

static inline void setStaticF__HorizonColor(int32_t  value) ;

static inline void setStaticF__HorizonParams(int32_t  value) ;

static inline void setStaticF__HueVariation(int32_t  value) ;

static inline void setStaticF__HueVariationColor(int32_t  value) ;

static inline void setStaticF__HueVariationKwToggle(int32_t  value) ;

static inline void setStaticF__InconfidenceTex(int32_t  value) ;

static inline void setStaticF__InconfidenceTex_ST(int32_t  value) ;

static inline void setStaticF__IndexGlowValue(int32_t  value) ;

static inline void setStaticF__Inflation(int32_t  value) ;

static inline void setStaticF__Influences(int32_t  value) ;

static inline void setStaticF__InnerGlowColor(int32_t  value) ;

static inline void setStaticF__InnerGlowOn(int32_t  value) ;

static inline void setStaticF__InnerGlowParams(int32_t  value) ;

static inline void setStaticF__InnerGlowSine(int32_t  value) ;

static inline void setStaticF__InnerGlowSinePeriod(int32_t  value) ;

static inline void setStaticF__InnerGlowSinePhaseShift(int32_t  value) ;

static inline void setStaticF__InnerGlowTap(int32_t  value) ;

static inline void setStaticF__Input(int32_t  value) ;

static inline void setStaticF__InsideColor(int32_t  value) ;

static inline void setStaticF__Intensity(int32_t  value) ;

static inline void setStaticF__Interpolator(int32_t  value) ;

static inline void setStaticF__InvFade(int32_t  value) ;

static inline void setStaticF__InvertedAlpha(int32_t  value) ;

static inline void setStaticF__Is_On(int32_t  value) ;

static inline void setStaticF__Is_Recording(int32_t  value) ;

static inline void setStaticF__IsoPerimeter(int32_t  value) ;

static inline void setStaticF__LIGHTMAP_MODE_(int32_t  value) ;

static inline void setStaticF__LavaLampToggle(int32_t  value) ;

static inline void setStaticF__LengthPadding(int32_t  value) ;

static inline void setStaticF__LightAngle(int32_t  value) ;

static inline void setStaticF__LightColor(int32_t  value) ;

static inline void setStaticF__LightColor0(int32_t  value) ;

static inline void setStaticF__Lightmap(int32_t  value) ;

static inline void setStaticF__LightmapExposure(int32_t  value) ;

static inline void setStaticF__Line(int32_t  value) ;

static inline void setStaticF__LineDistance(int32_t  value) ;

static inline void setStaticF__LineWidth(int32_t  value) ;

static inline void setStaticF__LinearGradientColor1(int32_t  value) ;

static inline void setStaticF__LinearGradientColor2(int32_t  value) ;

static inline void setStaticF__LinearGradientEnd(int32_t  value) ;

static inline void setStaticF__LinearGradientStart(int32_t  value) ;

static inline void setStaticF__LinesThickness(int32_t  value) ;

static inline void setStaticF__LiquidContainer(int32_t  value) ;

static inline void setStaticF__LiquidFill(int32_t  value) ;

static inline void setStaticF__LiquidFillNormal(int32_t  value) ;

static inline void setStaticF__LiquidPlaneNormal(int32_t  value) ;

static inline void setStaticF__LiquidPlanePosition(int32_t  value) ;

static inline void setStaticF__LiquidSurfaceColor(int32_t  value) ;

static inline void setStaticF__LiquidSwayX(int32_t  value) ;

static inline void setStaticF__LiquidSwayY(int32_t  value) ;

static inline void setStaticF__LiquidVolume(int32_t  value) ;

static inline void setStaticF__LitDirStencilReadMask(int32_t  value) ;

static inline void setStaticF__LitDirStencilRef(int32_t  value) ;

static inline void setStaticF__LitDirStencilWriteMask(int32_t  value) ;

static inline void setStaticF__LitPunctualStencilReadMask(int32_t  value) ;

static inline void setStaticF__LitPunctualStencilRef(int32_t  value) ;

static inline void setStaticF__LitPunctualStencilWriteMask(int32_t  value) ;

static inline void setStaticF__LitStencilReadMask(int32_t  value) ;

static inline void setStaticF__LitStencilRef(int32_t  value) ;

static inline void setStaticF__LitStencilWriteMask(int32_t  value) ;

static inline void setStaticF__MAIN_TEX_MODE__(int32_t  value) ;

static inline void setStaticF__METALNESS(int32_t  value) ;

static inline void setStaticF__METALNESS_MAP(int32_t  value) ;

static inline void setStaticF__MainTex(int32_t  value) ;

static inline void setStaticF__MainTexMMBias(int32_t  value) ;

static inline void setStaticF__MainTex_ST(int32_t  value) ;

static inline void setStaticF__Mask(int32_t  value) ;

static inline void setStaticF__Mask0(int32_t  value) ;

static inline void setStaticF__Mask0_ST(int32_t  value) ;

static inline void setStaticF__Mask1(int32_t  value) ;

static inline void setStaticF__Mask1_ST(int32_t  value) ;

static inline void setStaticF__Mask2(int32_t  value) ;

static inline void setStaticF__Mask2_ST(int32_t  value) ;

static inline void setStaticF__Mask3(int32_t  value) ;

static inline void setStaticF__Mask3_ST(int32_t  value) ;

static inline void setStaticF__MaskCoord(int32_t  value) ;

static inline void setStaticF__MaskEdgeColor(int32_t  value) ;

static inline void setStaticF__MaskEdgeSoftness(int32_t  value) ;

static inline void setStaticF__MaskInverse(int32_t  value) ;

static inline void setStaticF__MaskMap(int32_t  value) ;

static inline void setStaticF__MaskMapToggle(int32_t  value) ;

static inline void setStaticF__MaskMap_ST(int32_t  value) ;

static inline void setStaticF__MaskMap_WH(int32_t  value) ;

static inline void setStaticF__MaskSoftnessX(int32_t  value) ;

static inline void setStaticF__MaskSoftnessY(int32_t  value) ;

static inline void setStaticF__MaskTex(int32_t  value) ;

static inline void setStaticF__MaskTex_ST(int32_t  value) ;

static inline void setStaticF__MaskWipeControl(int32_t  value) ;

static inline void setStaticF__Masks(int32_t  value) ;

static inline void setStaticF__MatrixForward(int32_t  value) ;

static inline void setStaticF__MatrixRight(int32_t  value) ;

static inline void setStaticF__MatrixUp(int32_t  value) ;

static inline void setStaticF__MaxColor(int32_t  value) ;

static inline void setStaticF__MaxFadeDistance(int32_t  value) ;

static inline void setStaticF__MaxRadius(int32_t  value) ;

static inline void setStaticF__Metallic(int32_t  value) ;

static inline void setStaticF__Metallic0(int32_t  value) ;

static inline void setStaticF__Metallic1(int32_t  value) ;

static inline void setStaticF__Metallic2(int32_t  value) ;

static inline void setStaticF__Metallic3(int32_t  value) ;

static inline void setStaticF__MetallicGloss(int32_t  value) ;

static inline void setStaticF__MetallicGlossMap(int32_t  value) ;

static inline void setStaticF__MetallicGlossMap_ST(int32_t  value) ;

static inline void setStaticF__MetallicTex(int32_t  value) ;

static inline void setStaticF__MetallicTex_ST(int32_t  value) ;

static inline void setStaticF__Metallic_ST(int32_t  value) ;

static inline void setStaticF__MiddleColor(int32_t  value) ;

static inline void setStaticF__MiddleGlowValue(int32_t  value) ;

static inline void setStaticF__MinFadeDistance(int32_t  value) ;

static inline void setStaticF__MinRadius(int32_t  value) ;

static inline void setStaticF__MinVisibleAlpha(int32_t  value) ;

static inline void setStaticF__MipBias(int32_t  value) ;

static inline void setStaticF__Mode(int32_t  value) ;

static inline void setStaticF__MoonAlpha(int32_t  value) ;

static inline void setStaticF__MoonAngles(int32_t  value) ;

static inline void setStaticF__MoonMap(int32_t  value) ;

static inline void setStaticF__MoonMap_ST(int32_t  value) ;

static inline void setStaticF__MoonSize(int32_t  value) ;

static inline void setStaticF__MouthMap(int32_t  value) ;

static inline void setStaticF__MouthMap_Atlas(int32_t  value) ;

static inline void setStaticF__MouthMap_ST(int32_t  value) ;

static inline void setStaticF__N(int32_t  value) ;

static inline void setStaticF__NORMAL_MAP(int32_t  value) ;

static inline void setStaticF__NoTexture(int32_t  value) ;

static inline void setStaticF__NoiseTex(int32_t  value) ;

static inline void setStaticF__NoiseTex_ST(int32_t  value) ;

static inline void setStaticF__Noise_Size(int32_t  value) ;

static inline void setStaticF__Noise_Strength(int32_t  value) ;

static inline void setStaticF__Normal(int32_t  value) ;

static inline void setStaticF__Normal0(int32_t  value) ;

static inline void setStaticF__Normal0_ST(int32_t  value) ;

static inline void setStaticF__Normal1(int32_t  value) ;

static inline void setStaticF__Normal1_ST(int32_t  value) ;

static inline void setStaticF__Normal2(int32_t  value) ;

static inline void setStaticF__Normal2_ST(int32_t  value) ;

static inline void setStaticF__Normal3(int32_t  value) ;

static inline void setStaticF__Normal3_ST(int32_t  value) ;

static inline void setStaticF__NormalMap(int32_t  value) ;

static inline void setStaticF__NormalMapKwToggle(int32_t  value) ;

static inline void setStaticF__NormalMapSampler(int32_t  value) ;

static inline void setStaticF__NormalMapSampler_ST(int32_t  value) ;

static inline void setStaticF__NormalMap_ST(int32_t  value) ;

static inline void setStaticF__Normal_ST(int32_t  value) ;

static inline void setStaticF__NormalsShrink(int32_t  value) ;

static inline void setStaticF__NotVisibleColor(int32_t  value) ;

static inline void setStaticF__NumLayersCount(int32_t  value) ;

static inline void setStaticF__Number_of_Tiles(int32_t  value) ;

static inline void setStaticF__OPACITY(int32_t  value) ;

static inline void setStaticF__OPACITY_MAP(int32_t  value) ;

static inline void setStaticF__Occlusion(int32_t  value) ;

static inline void setStaticF__OcclusionEnabled(int32_t  value) ;

static inline void setStaticF__OcclusionMap(int32_t  value) ;

static inline void setStaticF__OcclusionMap_ST(int32_t  value) ;

static inline void setStaticF__OcclusionStrength(int32_t  value) ;

static inline void setStaticF__Off_Color(int32_t  value) ;

static inline void setStaticF__Offset(int32_t  value) ;

static inline void setStaticF__OffsetFactor(int32_t  value) ;

static inline void setStaticF__OffsetUnits(int32_t  value) ;

static inline void setStaticF__OfsX(int32_t  value) ;

static inline void setStaticF__OfsY(int32_t  value) ;

static inline void setStaticF__OldHueVarBehavior(int32_t  value) ;

static inline void setStaticF__Opacity(int32_t  value) ;

static inline void setStaticF__OpacityThreshold(int32_t  value) ;

static inline void setStaticF__OrdinateScale(int32_t  value) ;

static inline void setStaticF__OutlineColor(int32_t  value) ;

static inline void setStaticF__OutlineColor1(int32_t  value) ;

static inline void setStaticF__OutlineColor2(int32_t  value) ;

static inline void setStaticF__OutlineColor3(int32_t  value) ;

static inline void setStaticF__OutlineJointColor(int32_t  value) ;

static inline void setStaticF__OutlineMode(int32_t  value) ;

static inline void setStaticF__OutlineOffset1(int32_t  value) ;

static inline void setStaticF__OutlineOffset2(int32_t  value) ;

static inline void setStaticF__OutlineOffset3(int32_t  value) ;

static inline void setStaticF__OutlineOpacity(int32_t  value) ;

static inline void setStaticF__OutlineShininess(int32_t  value) ;

static inline void setStaticF__OutlineSoftness(int32_t  value) ;

static inline void setStaticF__OutlineTex(int32_t  value) ;

static inline void setStaticF__OutlineTex_ST(int32_t  value) ;

static inline void setStaticF__OutlineUVSpeed(int32_t  value) ;

static inline void setStaticF__OutlineUVSpeedX(int32_t  value) ;

static inline void setStaticF__OutlineUVSpeedY(int32_t  value) ;

static inline void setStaticF__OutlineWidth(int32_t  value) ;

static inline void setStaticF__OverlayTex(int32_t  value) ;

static inline void setStaticF__OverlayTex_ST(int32_t  value) ;

static inline void setStaticF__Padding(int32_t  value) ;

static inline void setStaticF__PaddingAndSize(int32_t  value) ;

static inline void setStaticF__Parallax(int32_t  value) ;

static inline void setStaticF__ParallaxAABias(int32_t  value) ;

static inline void setStaticF__ParallaxAAToggle(int32_t  value) ;

static inline void setStaticF__ParallaxAmplitude(int32_t  value) ;

static inline void setStaticF__ParallaxMap(int32_t  value) ;

static inline void setStaticF__ParallaxMap_ST(int32_t  value) ;

static inline void setStaticF__ParallaxPlanarToggle(int32_t  value) ;

static inline void setStaticF__ParallaxSamplesMinMax(int32_t  value) ;

static inline void setStaticF__ParallaxToggle(int32_t  value) ;

static inline void setStaticF__Pass(int32_t  value) ;

static inline void setStaticF__PassthroughAmount(int32_t  value) ;

static inline void setStaticF__PassthroughMask(int32_t  value) ;

static inline void setStaticF__PassthroughMask_ST(int32_t  value) ;

static inline void setStaticF__PerspectiveFilter(int32_t  value) ;

static inline void setStaticF__Phi0(int32_t  value) ;

static inline void setStaticF__Phi1(int32_t  value) ;

static inline void setStaticF__PinchDeform(int32_t  value) ;

static inline void setStaticF__PinkyGlowValue(int32_t  value) ;

static inline void setStaticF__PixelScale(int32_t  value) ;

static inline void setStaticF__PixelWidth(int32_t  value) ;

static inline void setStaticF__PointsThickness(int32_t  value) ;

static inline void setStaticF__Power(int32_t  value) ;

static inline void setStaticF__Primary_Color(int32_t  value) ;

static inline void setStaticF__Progress(int32_t  value) ;

static inline void setStaticF__ProgressValue(int32_t  value) ;

static inline void setStaticF__ProjectionParams(int32_t  value) ;

static inline void setStaticF__ProximityColor(int32_t  value) ;

static inline void setStaticF__ProximityStrength(int32_t  value) ;

static inline void setStaticF__ProximityTransitionRange(int32_t  value) ;

static inline void setStaticF__PulseRate(int32_t  value) ;

static inline void setStaticF__QueueControl(int32_t  value) ;

static inline void setStaticF__QueueOffset(int32_t  value) ;

static inline void setStaticF__REFLECTIONS_COLOR(int32_t  value) ;

static inline void setStaticF__REFLECTIONS_COLOR_MAP(int32_t  value) ;

static inline void setStaticF__REFLECTIONS_IOR(int32_t  value) ;

static inline void setStaticF__REFLECTIONS_IOR_MAP(int32_t  value) ;

static inline void setStaticF__REFLECTIONS_ROUGHNESS(int32_t  value) ;

static inline void setStaticF__REFLECTIONS_ROUGHNESS_MAP(int32_t  value) ;

static inline void setStaticF__REFLECTIONS_WEIGHT(int32_t  value) ;

static inline void setStaticF__RadialGradientBackgroundOpacity(int32_t  value) ;

static inline void setStaticF__RadialGradientIntensity(int32_t  value) ;

static inline void setStaticF__RadialGradientOpacity(int32_t  value) ;

static inline void setStaticF__RadialGradientScale(int32_t  value) ;

static inline void setStaticF__Radii(int32_t  value) ;

static inline void setStaticF__Radius(int32_t  value) ;

static inline void setStaticF__ReceiveShadows(int32_t  value) ;

static inline void setStaticF__Rect(int32_t  value) ;

static inline void setStaticF__ReflectAlbedoTint(int32_t  value) ;

static inline void setStaticF__ReflectBoxCubePos(int32_t  value) ;

static inline void setStaticF__ReflectBoxProjectToggle(int32_t  value) ;

static inline void setStaticF__ReflectBoxRotation(int32_t  value) ;

static inline void setStaticF__ReflectBoxSize(int32_t  value) ;

static inline void setStaticF__ReflectExposure(int32_t  value) ;

static inline void setStaticF__ReflectFaceColor(int32_t  value) ;

static inline void setStaticF__ReflectMatcapPerspToggle(int32_t  value) ;

static inline void setStaticF__ReflectMatcapToggle(int32_t  value) ;

static inline void setStaticF__ReflectNormalTex(int32_t  value) ;

static inline void setStaticF__ReflectNormalToggle(int32_t  value) ;

static inline void setStaticF__ReflectOffset(int32_t  value) ;

static inline void setStaticF__ReflectOpacity(int32_t  value) ;

static inline void setStaticF__ReflectOutlineColor(int32_t  value) ;

static inline void setStaticF__ReflectRotate(int32_t  value) ;

static inline void setStaticF__ReflectScale(int32_t  value) ;

static inline void setStaticF__ReflectTex(int32_t  value) ;

static inline void setStaticF__ReflectTint(int32_t  value) ;

static inline void setStaticF__ReflectToggle(int32_t  value) ;

static inline void setStaticF__Reflectivity(int32_t  value) ;

static inline void setStaticF__RendererColor(int32_t  value) ;

static inline void setStaticF__RespawnAmount(int32_t  value) ;

static inline void setStaticF__Rim(int32_t  value) ;

static inline void setStaticF__RimColor(int32_t  value) ;

static inline void setStaticF__RimFactor(int32_t  value) ;

static inline void setStaticF__RimLightSampler(int32_t  value) ;

static inline void setStaticF__RimLightSampler_ST(int32_t  value) ;

static inline void setStaticF__RimPower(int32_t  value) ;

static inline void setStaticF__RingGlowValue(int32_t  value) ;

static inline void setStaticF__RotateAngle(int32_t  value) ;

static inline void setStaticF__RotateAnim(int32_t  value) ;

static inline void setStaticF__RotateOnYAxisBySinTime(int32_t  value) ;

static inline void setStaticF__RotateSpeed(int32_t  value) ;

static inline void setStaticF__Rough(int32_t  value) ;

static inline void setStaticF__SATTex(int32_t  value) ;

static inline void setStaticF__SATTex_ST(int32_t  value) ;

static inline void setStaticF__SPECULAR_COLOR(int32_t  value) ;

static inline void setStaticF__SPECULAR_COLOR_MAP(int32_t  value) ;

static inline void setStaticF__SPECULAR_IOR(int32_t  value) ;

static inline void setStaticF__SPECULAR_IOR_MAP(int32_t  value) ;

static inline void setStaticF__SPECULAR_ROUGHNESS(int32_t  value) ;

static inline void setStaticF__SPECULAR_ROUGHNESS_MAP(int32_t  value) ;

static inline void setStaticF__SampleGI(int32_t  value) ;

static inline void setStaticF__Scale(int32_t  value) ;

static inline void setStaticF__ScaleOffsetB(int32_t  value) ;

static inline void setStaticF__ScaleOffsetG(int32_t  value) ;

static inline void setStaticF__ScaleOffsetR(int32_t  value) ;

static inline void setStaticF__ScaleRG(int32_t  value) ;

static inline void setStaticF__ScaleRatioA(int32_t  value) ;

static inline void setStaticF__ScaleRatioB(int32_t  value) ;

static inline void setStaticF__ScaleRatioC(int32_t  value) ;

static inline void setStaticF__ScaleX(int32_t  value) ;

static inline void setStaticF__ScaleY(int32_t  value) ;

static inline void setStaticF__SceneMeshZWrite(int32_t  value) ;

static inline void setStaticF__SceneTint(int32_t  value) ;

static inline void setStaticF__Scl(int32_t  value) ;

static inline void setStaticF__ScreenParams(int32_t  value) ;

static inline void setStaticF__ScreenRatio(int32_t  value) ;

static inline void setStaticF__ScrollSpeedAndScale(int32_t  value) ;

static inline void setStaticF__ScrollUOffset(int32_t  value) ;

static inline void setStaticF__SecondTex(int32_t  value) ;

static inline void setStaticF__SecondTex_ST(int32_t  value) ;

static inline void setStaticF__SecondViewColor(int32_t  value) ;

static inline void setStaticF__Secondary_Color(int32_t  value) ;

static inline void setStaticF__SeeThru(int32_t  value) ;

static inline void setStaticF__SelectedOpacity(int32_t  value) ;

static inline void setStaticF__SettingsPreset(int32_t  value) ;

static inline void setStaticF__ShaderFlags(int32_t  value) ;

static inline void setStaticF__ShadowColor(int32_t  value) ;

static inline void setStaticF__ShadowColor0(int32_t  value) ;

static inline void setStaticF__ShadowColor1(int32_t  value) ;

static inline void setStaticF__ShadowColorMask(int32_t  value) ;

static inline void setStaticF__ShadowIntensity(int32_t  value) ;

static inline void setStaticF__ShadowTex(int32_t  value) ;

static inline void setStaticF__ShadowTex_ST(int32_t  value) ;

static inline void setStaticF__Sharpness(int32_t  value) ;

static inline void setStaticF__Shininess(int32_t  value) ;

static inline void setStaticF__ShrinkLimit(int32_t  value) ;

static inline void setStaticF__SideFalloff(int32_t  value) ;

static inline void setStaticF__SimpleLitDirStencilReadMask(int32_t  value) ;

static inline void setStaticF__SimpleLitDirStencilRef(int32_t  value) ;

static inline void setStaticF__SimpleLitDirStencilWriteMask(int32_t  value) ;

static inline void setStaticF__SimpleLitPunctualStencilReadMask(int32_t  value) ;

static inline void setStaticF__SimpleLitPunctualStencilRef(int32_t  value) ;

static inline void setStaticF__SimpleLitPunctualStencilWriteMask(int32_t  value) ;

static inline void setStaticF__SimpleLitStencilReadMask(int32_t  value) ;

static inline void setStaticF__SimpleLitStencilRef(int32_t  value) ;

static inline void setStaticF__SimpleLitStencilWriteMask(int32_t  value) ;

static inline void setStaticF__SinTime(int32_t  value) ;

static inline void setStaticF__Size(int32_t  value) ;

static inline void setStaticF__Sky1_Col(int32_t  value) ;

static inline void setStaticF__Sky1_Exp(int32_t  value) ;

static inline void setStaticF__Sky1_Rot(int32_t  value) ;

static inline void setStaticF__Sky2_Col(int32_t  value) ;

static inline void setStaticF__Sky2_Exp(int32_t  value) ;

static inline void setStaticF__Sky2_Rot(int32_t  value) ;

static inline void setStaticF__SkyAlpha(int32_t  value) ;

static inline void setStaticF__SkyGradient(int32_t  value) ;

static inline void setStaticF__SkyGradient_ST(int32_t  value) ;

static inline void setStaticF__SkyLayer1(int32_t  value) ;

static inline void setStaticF__SkyLayer1_Params(int32_t  value) ;

static inline void setStaticF__SkyLayer1_ST(int32_t  value) ;

static inline void setStaticF__SkyLayer2(int32_t  value) ;

static inline void setStaticF__SkyLayer2_Params(int32_t  value) ;

static inline void setStaticF__SkyLayer2_ST(int32_t  value) ;

static inline void setStaticF__Sky_Off(int32_t  value) ;

static inline void setStaticF__Smoothness(int32_t  value) ;

static inline void setStaticF__Smoothness0(int32_t  value) ;

static inline void setStaticF__Smoothness1(int32_t  value) ;

static inline void setStaticF__Smoothness2(int32_t  value) ;

static inline void setStaticF__Smoothness3(int32_t  value) ;

static inline void setStaticF__SmoothnessSource(int32_t  value) ;

static inline void setStaticF__SmoothnessTextureChannel(int32_t  value) ;

static inline void setStaticF__SoftParticleFadeParams(int32_t  value) ;

static inline void setStaticF__SoftParticlesEnabled(int32_t  value) ;

static inline void setStaticF__SoftParticlesFarFadeDistance(int32_t  value) ;

static inline void setStaticF__SoftParticlesNearFadeDistance(int32_t  value) ;

static inline void setStaticF__Softness(int32_t  value) ;

static inline void setStaticF__SpecColor(int32_t  value) ;

static inline void setStaticF__SpecGlossMap(int32_t  value) ;

static inline void setStaticF__SpecGlossMap_ST(int32_t  value) ;

static inline void setStaticF__SpecSource(int32_t  value) ;

static inline void setStaticF__SpecularColor(int32_t  value) ;

static inline void setStaticF__SpecularDir(int32_t  value) ;

static inline void setStaticF__SpecularHighlights(int32_t  value) ;

static inline void setStaticF__SpecularPower(int32_t  value) ;

static inline void setStaticF__SpecularPowerIntensity(int32_t  value) ;

static inline void setStaticF__SpecularReflectionSampler(int32_t  value) ;

static inline void setStaticF__SpecularReflectionSampler_ST(int32_t  value) ;

static inline void setStaticF__SpecularUseDiffuseColor(int32_t  value) ;

static inline void setStaticF__Speed(int32_t  value) ;

static inline void setStaticF__SpeedA(int32_t  value) ;

static inline void setStaticF__SpeedB(int32_t  value) ;

static inline void setStaticF__SpeedG(int32_t  value) ;

static inline void setStaticF__SpeedR(int32_t  value) ;

static inline void setStaticF__SpeedRG(int32_t  value) ;

static inline void setStaticF__Splat0(int32_t  value) ;

static inline void setStaticF__Splat0_ST(int32_t  value) ;

static inline void setStaticF__Splat1(int32_t  value) ;

static inline void setStaticF__Splat1_ST(int32_t  value) ;

static inline void setStaticF__Splat2(int32_t  value) ;

static inline void setStaticF__Splat2_ST(int32_t  value) ;

static inline void setStaticF__Splat3(int32_t  value) ;

static inline void setStaticF__Splat3_ST(int32_t  value) ;

static inline void setStaticF__SpotDirection(int32_t  value) ;

static inline void setStaticF__SrcBlend(int32_t  value) ;

static inline void setStaticF__SrcBlendAlpha(int32_t  value) ;

static inline void setStaticF__SrcRect(int32_t  value) ;

static inline void setStaticF__Stamp(int32_t  value) ;

static inline void setStaticF__StampMultipler(int32_t  value) ;

static inline void setStaticF__StealthEffectOn(int32_t  value) ;

static inline void setStaticF__Stencil(int32_t  value) ;

static inline void setStaticF__StencilComp(int32_t  value) ;

static inline void setStaticF__StencilComparison(int32_t  value) ;

static inline void setStaticF__StencilFailFront(int32_t  value) ;

static inline void setStaticF__StencilMask(int32_t  value) ;

static inline void setStaticF__StencilOp(int32_t  value) ;

static inline void setStaticF__StencilPassFront(int32_t  value) ;

static inline void setStaticF__StencilReadMask(int32_t  value) ;

static inline void setStaticF__StencilRef(int32_t  value) ;

static inline void setStaticF__StencilRefDitherMask(int32_t  value) ;

static inline void setStaticF__StencilReference(int32_t  value) ;

static inline void setStaticF__StencilWriteDitherMask(int32_t  value) ;

static inline void setStaticF__StencilWriteMask(int32_t  value) ;

static inline void setStaticF__StencilZFailFront(int32_t  value) ;

static inline void setStaticF__StreamingColor(int32_t  value) ;

static inline void setStaticF__SubShaderOptions(int32_t  value) ;

static inline void setStaticF__SubsurfaceColor(int32_t  value) ;

static inline void setStaticF__SubsurfaceIndirect(int32_t  value) ;

static inline void setStaticF__SubsurfaceKwToggle(int32_t  value) ;

static inline void setStaticF__SubsurfaceTex(int32_t  value) ;

static inline void setStaticF__SubsurfaceTex_ST(int32_t  value) ;

static inline void setStaticF__Subtract(int32_t  value) ;

static inline void setStaticF__SunAngles(int32_t  value) ;

static inline void setStaticF__SunMap(int32_t  value) ;

static inline void setStaticF__SunMap_ST(int32_t  value) ;

static inline void setStaticF__Surface(int32_t  value) ;

static inline void setStaticF__SwizzleNormalMapChannelsNM(int32_t  value) ;

static inline void setStaticF__TRANSPARENCY(int32_t  value) ;

static inline void setStaticF__TRANSPARENCY_MAP(int32_t  value) ;

static inline void setStaticF__TentacleEndDir(int32_t  value) ;

static inline void setStaticF__TentacleEndPos(int32_t  value) ;

static inline void setStaticF__TentacleRingOrigin(int32_t  value) ;

static inline void setStaticF__TentacleRingRadius(int32_t  value) ;

static inline void setStaticF__TentacleStartDir(int32_t  value) ;

static inline void setStaticF__TerrainHolesTexture(int32_t  value) ;

static inline void setStaticF__TerrainHolesTexture_ST(int32_t  value) ;

static inline void setStaticF__Tex(int32_t  value) ;

static inline void setStaticF__Tex0MainView(int32_t  value) ;

static inline void setStaticF__Tex0MainView_ST(int32_t  value) ;

static inline void setStaticF__Tex0Shadows(int32_t  value) ;

static inline void setStaticF__Tex0Shadows_ST(int32_t  value) ;

static inline void setStaticF__Tex1MainView(int32_t  value) ;

static inline void setStaticF__Tex1MainView_ST(int32_t  value) ;

static inline void setStaticF__Tex1Shadows(int32_t  value) ;

static inline void setStaticF__Tex1Shadows_ST(int32_t  value) ;

static inline void setStaticF__Tex2(int32_t  value) ;

static inline void setStaticF__Tex2_ST(int32_t  value) ;

static inline void setStaticF__TexMipBias(int32_t  value) ;

static inline void setStaticF__TexTransition(int32_t  value) ;

static inline void setStaticF__TexelSize(int32_t  value) ;

static inline void setStaticF__TexelSnapToggle(int32_t  value) ;

static inline void setStaticF__TexelSnap_Factor(int32_t  value) ;

static inline void setStaticF__Texture(int32_t  value) ;

static inline void setStaticF__Texture2D(int32_t  value) ;

static inline void setStaticF__TextureHeight(int32_t  value) ;

static inline void setStaticF__TextureSampleAdd(int32_t  value) ;

static inline void setStaticF__TextureWidth(int32_t  value) ;

static inline void setStaticF__Texture_ST(int32_t  value) ;

static inline void setStaticF__Theta0(int32_t  value) ;

static inline void setStaticF__Theta1(int32_t  value) ;

static inline void setStaticF__ThirdTex(int32_t  value) ;

static inline void setStaticF__ThirdTex_ST(int32_t  value) ;

static inline void setStaticF__Threshold1Color(int32_t  value) ;

static inline void setStaticF__Threshold2Color(int32_t  value) ;

static inline void setStaticF__Threshold3Color(int32_t  value) ;

static inline void setStaticF__ThumbGlowValue(int32_t  value) ;

static inline void setStaticF__Tile_X(int32_t  value) ;

static inline void setStaticF__Tile_Y(int32_t  value) ;

static inline void setStaticF__Time(int32_t  value) ;

static inline void setStaticF__TimeOffset(int32_t  value) ;

static inline void setStaticF__TimeScale(int32_t  value) ;

static inline void setStaticF__Tint(int32_t  value) ;

static inline void setStaticF__TintColor(int32_t  value) ;

static inline void setStaticF__ToneMapCoeffs1(int32_t  value) ;

static inline void setStaticF__ToneMapCoeffs2(int32_t  value) ;

static inline void setStaticF__TopColor(int32_t  value) ;

static inline void setStaticF__TransitionPoint(int32_t  value) ;

static inline void setStaticF__TransparencyMode(int32_t  value) ;

static inline void setStaticF__TwoSided(int32_t  value) ;

static inline void setStaticF__UAxis(int32_t  value) ;

static inline void setStaticF__UNDERWATER_MODE_(int32_t  value) ;

static inline void setStaticF__UOrigin(int32_t  value) ;

static inline void setStaticF__USE_DEFORM_MAP(int32_t  value) ;

static inline void setStaticF__USE_TEX_ARRAY_ATLAS(int32_t  value) ;

static inline void setStaticF__USE_WORLD_POS_AS_OFFSET(int32_t  value) ;

static inline void setStaticF__UScale(int32_t  value) ;

static inline void setStaticF__UV(int32_t  value) ;

static inline void setStaticF__UVSec(int32_t  value) ;

static inline void setStaticF__UVSource(int32_t  value) ;

static inline void setStaticF__UnderlayColor(int32_t  value) ;

static inline void setStaticF__UnderlayDilate(int32_t  value) ;

static inline void setStaticF__UnderlayOffset(int32_t  value) ;

static inline void setStaticF__UnderlayOffsetX(int32_t  value) ;

static inline void setStaticF__UnderlayOffsetY(int32_t  value) ;

static inline void setStaticF__UnderlayPixelSize(int32_t  value) ;

static inline void setStaticF__UnderlaySoftness(int32_t  value) ;

static inline void setStaticF__UseAoMap(int32_t  value) ;

static inline void setStaticF__UseColorMap(int32_t  value) ;

static inline void setStaticF__UseCrystalEffect(int32_t  value) ;

static inline void setStaticF__UseDayNightLightmap(int32_t  value) ;

static inline void setStaticF__UseEmissiveMap(int32_t  value) ;

static inline void setStaticF__UseEyeTracking(int32_t  value) ;

static inline void setStaticF__UseGridEffect(int32_t  value) ;

static inline void setStaticF__UseImageAsSDF(int32_t  value) ;

static inline void setStaticF__UseMetallicMap(int32_t  value) ;

static inline void setStaticF__UseMouthFlap(int32_t  value) ;

static inline void setStaticF__UseNormalMap(int32_t  value) ;

static inline void setStaticF__UseOpacityMap(int32_t  value) ;

static inline void setStaticF__UseRoughnessMap(int32_t  value) ;

static inline void setStaticF__UseSpecHighlight(int32_t  value) ;

static inline void setStaticF__UseSpecular(int32_t  value) ;

static inline void setStaticF__UseSpecularAlphaChannel(int32_t  value) ;

static inline void setStaticF__UseUIAlphaClip(int32_t  value) ;

static inline void setStaticF__UseVertexColor(int32_t  value) ;

static inline void setStaticF__UseViewSpaceUVs(int32_t  value) ;

static inline void setStaticF__UseWaveWarp(int32_t  value) ;

static inline void setStaticF__UseWeatherMap(int32_t  value) ;

static inline void setStaticF__UseWorldSpaceUVs(int32_t  value) ;

static inline void setStaticF__UvOffset(int32_t  value) ;

static inline void setStaticF__UvShiftOffset(int32_t  value) ;

static inline void setStaticF__UvShiftRate(int32_t  value) ;

static inline void setStaticF__UvShiftSteps(int32_t  value) ;

static inline void setStaticF__UvShiftToggle(int32_t  value) ;

static inline void setStaticF__UvTiling(int32_t  value) ;

static inline void setStaticF__VAxis(int32_t  value) ;

static inline void setStaticF__VERTEX_COLOR_(int32_t  value) ;

static inline void setStaticF__VERTEX_COLOR_MODE_(int32_t  value) ;

static inline void setStaticF__VERTEX_DEFORMATION(int32_t  value) ;

static inline void setStaticF__VOrigin(int32_t  value) ;

static inline void setStaticF__VScale(int32_t  value) ;

static inline void setStaticF__VertexColorLightmap(int32_t  value) ;

static inline void setStaticF__VertexColorLightmapScale(int32_t  value) ;

static inline void setStaticF__VertexFlapAxis(int32_t  value) ;

static inline void setStaticF__VertexFlapDegreesMinMax(int32_t  value) ;

static inline void setStaticF__VertexFlapPhaseOffset(int32_t  value) ;

static inline void setStaticF__VertexFlapSpeed(int32_t  value) ;

static inline void setStaticF__VertexFlapToggle(int32_t  value) ;

static inline void setStaticF__VertexLightToggle(int32_t  value) ;

static inline void setStaticF__VertexOffsetX(int32_t  value) ;

static inline void setStaticF__VertexOffsetY(int32_t  value) ;

static inline void setStaticF__VertexRotateAngles(int32_t  value) ;

static inline void setStaticF__VertexRotateAnim(int32_t  value) ;

static inline void setStaticF__VertexRotateToggle(int32_t  value) ;

static inline void setStaticF__VertexWaveAxes(int32_t  value) ;

static inline void setStaticF__VertexWaveDebug(int32_t  value) ;

static inline void setStaticF__VertexWaveEnd(int32_t  value) ;

static inline void setStaticF__VertexWaveFalloff(int32_t  value) ;

static inline void setStaticF__VertexWaveParams(int32_t  value) ;

static inline void setStaticF__VertexWavePhaseOffset(int32_t  value) ;

static inline void setStaticF__VertexWaveSphereMask(int32_t  value) ;

static inline void setStaticF__VertexWaveToggle(int32_t  value) ;

static inline void setStaticF__Visible(int32_t  value) ;

static inline void setStaticF__Volume0(int32_t  value) ;

static inline void setStaticF__Volume0_ST(int32_t  value) ;

static inline void setStaticF__Volume1(int32_t  value) ;

static inline void setStaticF__Volume1_ST(int32_t  value) ;

static inline void setStaticF__Volume2(int32_t  value) ;

static inline void setStaticF__Volume2_ST(int32_t  value) ;

static inline void setStaticF__VolumeInvSize(int32_t  value) ;

static inline void setStaticF__VolumeMask(int32_t  value) ;

static inline void setStaticF__VolumeMask_ST(int32_t  value) ;

static inline void setStaticF__VolumeMin(int32_t  value) ;

static inline void setStaticF__WINDQUALITY(int32_t  value) ;

static inline void setStaticF__WIND_BRANCH1(int32_t  value) ;

static inline void setStaticF__WIND_BRANCH2(int32_t  value) ;

static inline void setStaticF__WIND_RIPPLE(int32_t  value) ;

static inline void setStaticF__WIND_SHARED(int32_t  value) ;

static inline void setStaticF__WIND_SHIMMER(int32_t  value) ;

static inline void setStaticF__WallScale(int32_t  value) ;

static inline void setStaticF__WaterCaustics(int32_t  value) ;

static inline void setStaticF__WaterEffect(int32_t  value) ;

static inline void setStaticF__WaveAmplitude(int32_t  value) ;

static inline void setStaticF__WaveAndDistance(int32_t  value) ;

static inline void setStaticF__WaveFrequency(int32_t  value) ;

static inline void setStaticF__WaveScale(int32_t  value) ;

static inline void setStaticF__WaveTimeScale(int32_t  value) ;

static inline void setStaticF__WavingTint(int32_t  value) ;

static inline void setStaticF__WeatherMap(int32_t  value) ;

static inline void setStaticF__WeatherMapDissolveEdgeSize(int32_t  value) ;

static inline void setStaticF__WeatherMap_Atlas(int32_t  value) ;

static inline void setStaticF__WeatherMap_AtlasSlice(int32_t  value) ;

static inline void setStaticF__WeightBold(int32_t  value) ;

static inline void setStaticF__WeightNormal(int32_t  value) ;

static inline void setStaticF__WetBumpMap(int32_t  value) ;

static inline void setStaticF__WetBumpMap_ST(int32_t  value) ;

static inline void setStaticF__WetMap(int32_t  value) ;

static inline void setStaticF__WetMapUV(int32_t  value) ;

static inline void setStaticF__Width(int32_t  value) ;

static inline void setStaticF__WindColor(int32_t  value) ;

static inline void setStaticF__WindQuality(int32_t  value) ;

static inline void setStaticF__WindowParams(int32_t  value) ;

static inline void setStaticF__WireThickness(int32_t  value) ;

static inline void setStaticF__WireframeColor(int32_t  value) ;

static inline void setStaticF__WorkflowMode(int32_t  value) ;

static inline void setStaticF__WorldSpaceCameraPos(int32_t  value) ;

static inline void setStaticF__WorldSpaceLightPos0(int32_t  value) ;

static inline void setStaticF__WristFade(int32_t  value) ;

static inline void setStaticF__XRMotionVectorsPass(int32_t  value) ;

static inline void setStaticF__ZBufferParams(int32_t  value) ;

static inline void setStaticF__ZFightOffset(int32_t  value) ;

static inline void setStaticF__ZQueue(int32_t  value) ;

static inline void setStaticF__ZTest(int32_t  value) ;

static inline void setStaticF__ZTestMode(int32_t  value) ;

static inline void setStaticF__ZWrite(int32_t  value) ;

static inline void setStaticF__ZWriteMode(int32_t  value) ;

static inline void setStaticF___BasicOptions__(int32_t  value) ;

static inline void setStaticF___dirty(int32_t  value) ;

static inline void setStaticF__col(int32_t  value) ;

static inline void setStaticF__face(int32_t  value) ;

static inline void setStaticF__flip(int32_t  value) ;

static inline void setStaticF__premultiply(int32_t  value) ;

static inline void setStaticF__texcoord(int32_t  value) ;

static inline void setStaticF__texcoord_ST(int32_t  value) ;

static inline void setStaticF__unmultiply(int32_t  value) ;

static inline void setStaticF_bestFitNormalMap(int32_t  value) ;

static inline void setStaticF_bestFitNormalMap_ST(int32_t  value) ;

static inline void setStaticF_g_flCornerAdjust(int32_t  value) ;

static inline void setStaticF_g_flOutlineWidth(int32_t  value) ;

static inline void setStaticF_g_vOutlineColor(int32_t  value) ;

static inline void setStaticF_intensity(int32_t  value) ;

static inline void setStaticF_unity_4LightAtten0(int32_t  value) ;

static inline void setStaticF_unity_4LightPosX0(int32_t  value) ;

static inline void setStaticF_unity_4LightPosY0_(int32_t  value) ;

static inline void setStaticF_unity_4LightPosZ0(int32_t  value) ;

static inline void setStaticF_unity_AmbientEquator(int32_t  value) ;

static inline void setStaticF_unity_AmbientGround_(int32_t  value) ;

static inline void setStaticF_unity_AmbientSky(int32_t  value) ;

static inline void setStaticF_unity_CameraInvProjection(int32_t  value) ;

static inline void setStaticF_unity_CameraProjection(int32_t  value) ;

static inline void setStaticF_unity_CameraWorldClipPlanes(int32_t  value) ;

static inline void setStaticF_unity_DeltaTime(int32_t  value) ;

static inline void setStaticF_unity_FogColor(int32_t  value) ;

static inline void setStaticF_unity_FogParams(int32_t  value) ;

static inline void setStaticF_unity_IndirectSpecColor(int32_t  value) ;

static inline void setStaticF_unity_LODFade(int32_t  value) ;

static inline void setStaticF_unity_LightAtten(int32_t  value) ;

static inline void setStaticF_unity_LightColor(int32_t  value) ;

static inline void setStaticF_unity_LightPosition(int32_t  value) ;

static inline void setStaticF_unity_Lightmap(int32_t  value) ;

static inline void setStaticF_unity_LightmapST(int32_t  value) ;

static inline void setStaticF_unity_Lightmaps(int32_t  value) ;

static inline void setStaticF_unity_LightmapsInd(int32_t  value) ;

static inline void setStaticF_unity_ObjectToWorld(int32_t  value) ;

static inline void setStaticF_unity_OrthoParamsperspective_(int32_t  value) ;

static inline void setStaticF_unity_ShadowMasks(int32_t  value) ;

static inline void setStaticF_unity_SpotDirection(int32_t  value) ;

static inline void setStaticF_unity_WorldToLight(int32_t  value) ;

static inline void setStaticF_unity_WorldToObject(int32_t  value) ;

static inline void setStaticF_unity_WorldToShadow(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ShaderProps() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ShaderProps", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
ShaderProps(ShaderProps && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ShaderProps", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
ShaderProps(ShaderProps const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{914};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::ShaderProps) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
