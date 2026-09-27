#pragma once
// IWYU pragma private; include "GlobalNamespace/GTUberShader_MaterialKeywordStates.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(GTUberShader_MaterialKeywordStates)
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace GlobalNamespace {
struct GTUberShader_MaterialKeywordStates;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::GTUberShader_MaterialKeywordStates);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GTUberShader_MaterialKeywordStates, "", "GTUberShader_MaterialKeywordStates");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: GTUberShader_MaterialKeywordStates
struct CORDL_TYPE GTUberShader_MaterialKeywordStates {
public:
// Declarations
/// @brief Method Refresh, addr 0x5b3ef04, size 0xd68, virtual false, abstract: false, final false
inline void Refresh() ;

/// @brief Method .ctor, addr 0x5b3e18c, size 0xd78, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Material*  mat) ;

// Ctor Parameters []
// @brief default ctor
constexpr GTUberShader_MaterialKeywordStates() ;

// Ctor Parameters [CppParam { name: "material", ty: "::UnityW<::UnityEngine::Material>", modifiers: "", def_value: None, comment: None }, CppParam { name: "_ALPHA_BLUE_LIVE_ON", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_ALPHA_DETAIL_MAP", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_ALPHATEST_ON", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_COLOR_GRADE_ACHROMATOMALY", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_COLOR_GRADE_ACHROMATOPSIA", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_COLOR_GRADE_DEUTERANOMALY", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_COLOR_GRADE_DEUTERANOPIA", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_COLOR_GRADE_PROTANOMALY", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_COLOR_GRADE_PROTANOPIA", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_COLOR_GRADE_TRITANOMALY", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_COLOR_GRADE_TRITANOPIA", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_CRYSTAL_EFFECT", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_DAY_CYCLE_BRIGHTNESS__OPTION_1", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_DAY_CYCLE_BRIGHTNESS__OPTION_2", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_DEBUG_PAWN_DATA", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_EMISSION", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_EMISSION_USE_UV_WAVE_WARP", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_EYECOMP", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_FX_LAVA_LAMP", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_GLOBAL_ZONE_LIQUID_TYPE__LAVA", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_GLOBAL_ZONE_LIQUID_TYPE__WATER", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_GRADIENT_MAP_ON", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_GRID_EFFECT", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_GT_BASE_MAP_ATLAS_SLICE_SOURCE__PROPERTY", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_GT_BASE_MAP_ATLAS_SLICE_SOURCE__UV1_Z", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_GT_EDITOR_TIME", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_GT_RIM_LIGHT", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_GT_RIM_LIGHT_FLAT", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_GT_RIM_LIGHT_USE_ALPHA", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_HALF_LAMBERT_TERM", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_HEIGHT_BASED_WATER_EFFECT", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_INNER_GLOW", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_LIQUID_CONTAINER", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_LIQUID_VOLUME", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_MAINTEX_ROTATE", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_MASK_MAP_ON", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_MOUTHCOMP", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_PARALLAX", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_PARALLAX_AA", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_PARALLAX_PLANAR", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_REFLECTIONS", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_REFLECTIONS_ALBEDO_TINT", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_REFLECTIONS_BOX_PROJECT", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_REFLECTIONS_MATCAP", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_REFLECTIONS_MATCAP_PERSP_AWARE", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_REFLECTIONS_USE_NORMAL_TEX", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_SPECULAR_HIGHLIGHT", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_STEALTH_EFFECT", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_TEXEL_SNAP_UVS", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_UNITY_EDIT_MODE", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_USE_DAY_NIGHT_LIGHTMAP", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_USE_DEFORM_MAP", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_USE_TEX_ARRAY_ATLAS", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_USE_TEXTURE", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_USE_VERTEX_COLOR", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_USE_WEATHER_MAP", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_UV_SHIFT", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_UV_SOURCE__UV0", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_UV_SOURCE__WORLD_PLANAR_Y", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_UV_WAVE_WARP", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_VERTEX_ANIM_FLAP", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_VERTEX_ANIM_WAVE", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_VERTEX_ANIM_WAVE_DEBUG", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_VERTEX_ROTATE", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_WATER_CAUSTICS", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_WATER_EFFECT", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_ZONE_DYNAMIC_LIGHTS__CUSTOMVERTEX", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "_ZONE_LIQUID_SHAPE__CYLINDER", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "DIRLIGHTMAP_COMBINED", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "INSTANCING_ON", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "LIGHTMAP_ON", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "STEREO_CUBEMAP_RENDER_ON", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "STEREO_INSTANCING_ON", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "STEREO_MULTIVIEW_ON", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "UNITY_SINGLE_PASS_STEREO", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "USE_TEXTURE__AS_MASK", ty: "bool", modifiers: "", def_value: None, comment: None }]
constexpr GTUberShader_MaterialKeywordStates(::UnityW<::UnityEngine::Material>  material, bool  _ALPHA_BLUE_LIVE_ON, bool  _ALPHA_DETAIL_MAP, bool  _ALPHATEST_ON, bool  _COLOR_GRADE_ACHROMATOMALY, bool  _COLOR_GRADE_ACHROMATOPSIA, bool  _COLOR_GRADE_DEUTERANOMALY, bool  _COLOR_GRADE_DEUTERANOPIA, bool  _COLOR_GRADE_PROTANOMALY, bool  _COLOR_GRADE_PROTANOPIA, bool  _COLOR_GRADE_TRITANOMALY, bool  _COLOR_GRADE_TRITANOPIA, bool  _CRYSTAL_EFFECT, bool  _DAY_CYCLE_BRIGHTNESS__OPTION_1, bool  _DAY_CYCLE_BRIGHTNESS__OPTION_2, bool  _DEBUG_PAWN_DATA, bool  _EMISSION, bool  _EMISSION_USE_UV_WAVE_WARP, bool  _EYECOMP, bool  _FX_LAVA_LAMP, bool  _GLOBAL_ZONE_LIQUID_TYPE__LAVA, bool  _GLOBAL_ZONE_LIQUID_TYPE__WATER, bool  _GRADIENT_MAP_ON, bool  _GRID_EFFECT, bool  _GT_BASE_MAP_ATLAS_SLICE_SOURCE__PROPERTY, bool  _GT_BASE_MAP_ATLAS_SLICE_SOURCE__UV1_Z, bool  _GT_EDITOR_TIME, bool  _GT_RIM_LIGHT, bool  _GT_RIM_LIGHT_FLAT, bool  _GT_RIM_LIGHT_USE_ALPHA, bool  _HALF_LAMBERT_TERM, bool  _HEIGHT_BASED_WATER_EFFECT, bool  _INNER_GLOW, bool  _LIQUID_CONTAINER, bool  _LIQUID_VOLUME, bool  _MAINTEX_ROTATE, bool  _MASK_MAP_ON, bool  _MOUTHCOMP, bool  _PARALLAX, bool  _PARALLAX_AA, bool  _PARALLAX_PLANAR, bool  _REFLECTIONS, bool  _REFLECTIONS_ALBEDO_TINT, bool  _REFLECTIONS_BOX_PROJECT, bool  _REFLECTIONS_MATCAP, bool  _REFLECTIONS_MATCAP_PERSP_AWARE, bool  _REFLECTIONS_USE_NORMAL_TEX, bool  _SPECULAR_HIGHLIGHT, bool  _STEALTH_EFFECT, bool  _TEXEL_SNAP_UVS, bool  _UNITY_EDIT_MODE, bool  _USE_DAY_NIGHT_LIGHTMAP, bool  _USE_DEFORM_MAP, bool  _USE_TEX_ARRAY_ATLAS, bool  _USE_TEXTURE, bool  _USE_VERTEX_COLOR, bool  _USE_WEATHER_MAP, bool  _UV_SHIFT, bool  _UV_SOURCE__UV0, bool  _UV_SOURCE__WORLD_PLANAR_Y, bool  _UV_WAVE_WARP, bool  _VERTEX_ANIM_FLAP, bool  _VERTEX_ANIM_WAVE, bool  _VERTEX_ANIM_WAVE_DEBUG, bool  _VERTEX_ROTATE, bool  _WATER_CAUSTICS, bool  _WATER_EFFECT, bool  _ZONE_DYNAMIC_LIGHTS__CUSTOMVERTEX, bool  _ZONE_LIQUID_SHAPE__CYLINDER, bool  DIRLIGHTMAP_COMBINED, bool  INSTANCING_ON, bool  LIGHTMAP_ON, bool  STEREO_CUBEMAP_RENDER_ON, bool  STEREO_INSTANCING_ON, bool  STEREO_MULTIVIEW_ON, bool  UNITY_SINGLE_PASS_STEREO, bool  USE_TEXTURE__AS_MASK) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{3712};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x58};

/// @brief Field material, offset: 0x0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  material;

/// @brief Field _ALPHA_BLUE_LIVE_ON, offset: 0x8, size: 0x1, def value: None
 bool  _ALPHA_BLUE_LIVE_ON;

/// @brief Field _ALPHA_DETAIL_MAP, offset: 0x9, size: 0x1, def value: None
 bool  _ALPHA_DETAIL_MAP;

/// @brief Field _ALPHATEST_ON, offset: 0xa, size: 0x1, def value: None
 bool  _ALPHATEST_ON;

/// @brief Field _COLOR_GRADE_ACHROMATOMALY, offset: 0xb, size: 0x1, def value: None
 bool  _COLOR_GRADE_ACHROMATOMALY;

/// @brief Field _COLOR_GRADE_ACHROMATOPSIA, offset: 0xc, size: 0x1, def value: None
 bool  _COLOR_GRADE_ACHROMATOPSIA;

/// @brief Field _COLOR_GRADE_DEUTERANOMALY, offset: 0xd, size: 0x1, def value: None
 bool  _COLOR_GRADE_DEUTERANOMALY;

/// @brief Field _COLOR_GRADE_DEUTERANOPIA, offset: 0xe, size: 0x1, def value: None
 bool  _COLOR_GRADE_DEUTERANOPIA;

/// @brief Field _COLOR_GRADE_PROTANOMALY, offset: 0xf, size: 0x1, def value: None
 bool  _COLOR_GRADE_PROTANOMALY;

/// @brief Field _COLOR_GRADE_PROTANOPIA, offset: 0x10, size: 0x1, def value: None
 bool  _COLOR_GRADE_PROTANOPIA;

/// @brief Field _COLOR_GRADE_TRITANOMALY, offset: 0x11, size: 0x1, def value: None
 bool  _COLOR_GRADE_TRITANOMALY;

/// @brief Field _COLOR_GRADE_TRITANOPIA, offset: 0x12, size: 0x1, def value: None
 bool  _COLOR_GRADE_TRITANOPIA;

/// @brief Field _CRYSTAL_EFFECT, offset: 0x13, size: 0x1, def value: None
 bool  _CRYSTAL_EFFECT;

/// @brief Field _DAY_CYCLE_BRIGHTNESS__OPTION_1, offset: 0x14, size: 0x1, def value: None
 bool  _DAY_CYCLE_BRIGHTNESS__OPTION_1;

/// @brief Field _DAY_CYCLE_BRIGHTNESS__OPTION_2, offset: 0x15, size: 0x1, def value: None
 bool  _DAY_CYCLE_BRIGHTNESS__OPTION_2;

/// @brief Field _DEBUG_PAWN_DATA, offset: 0x16, size: 0x1, def value: None
 bool  _DEBUG_PAWN_DATA;

/// @brief Field _EMISSION, offset: 0x17, size: 0x1, def value: None
 bool  _EMISSION;

/// @brief Field _EMISSION_USE_UV_WAVE_WARP, offset: 0x18, size: 0x1, def value: None
 bool  _EMISSION_USE_UV_WAVE_WARP;

/// @brief Field _EYECOMP, offset: 0x19, size: 0x1, def value: None
 bool  _EYECOMP;

/// @brief Field _FX_LAVA_LAMP, offset: 0x1a, size: 0x1, def value: None
 bool  _FX_LAVA_LAMP;

/// @brief Field _GLOBAL_ZONE_LIQUID_TYPE__LAVA, offset: 0x1b, size: 0x1, def value: None
 bool  _GLOBAL_ZONE_LIQUID_TYPE__LAVA;

/// @brief Field _GLOBAL_ZONE_LIQUID_TYPE__WATER, offset: 0x1c, size: 0x1, def value: None
 bool  _GLOBAL_ZONE_LIQUID_TYPE__WATER;

/// @brief Field _GRADIENT_MAP_ON, offset: 0x1d, size: 0x1, def value: None
 bool  _GRADIENT_MAP_ON;

/// @brief Field _GRID_EFFECT, offset: 0x1e, size: 0x1, def value: None
 bool  _GRID_EFFECT;

/// @brief Field _GT_BASE_MAP_ATLAS_SLICE_SOURCE__PROPERTY, offset: 0x1f, size: 0x1, def value: None
 bool  _GT_BASE_MAP_ATLAS_SLICE_SOURCE__PROPERTY;

/// @brief Field _GT_BASE_MAP_ATLAS_SLICE_SOURCE__UV1_Z, offset: 0x20, size: 0x1, def value: None
 bool  _GT_BASE_MAP_ATLAS_SLICE_SOURCE__UV1_Z;

/// @brief Field _GT_EDITOR_TIME, offset: 0x21, size: 0x1, def value: None
 bool  _GT_EDITOR_TIME;

/// @brief Field _GT_RIM_LIGHT, offset: 0x22, size: 0x1, def value: None
 bool  _GT_RIM_LIGHT;

/// @brief Field _GT_RIM_LIGHT_FLAT, offset: 0x23, size: 0x1, def value: None
 bool  _GT_RIM_LIGHT_FLAT;

/// @brief Field _GT_RIM_LIGHT_USE_ALPHA, offset: 0x24, size: 0x1, def value: None
 bool  _GT_RIM_LIGHT_USE_ALPHA;

/// @brief Field _HALF_LAMBERT_TERM, offset: 0x25, size: 0x1, def value: None
 bool  _HALF_LAMBERT_TERM;

/// @brief Field _HEIGHT_BASED_WATER_EFFECT, offset: 0x26, size: 0x1, def value: None
 bool  _HEIGHT_BASED_WATER_EFFECT;

/// @brief Field _INNER_GLOW, offset: 0x27, size: 0x1, def value: None
 bool  _INNER_GLOW;

/// @brief Field _LIQUID_CONTAINER, offset: 0x28, size: 0x1, def value: None
 bool  _LIQUID_CONTAINER;

/// @brief Field _LIQUID_VOLUME, offset: 0x29, size: 0x1, def value: None
 bool  _LIQUID_VOLUME;

/// @brief Field _MAINTEX_ROTATE, offset: 0x2a, size: 0x1, def value: None
 bool  _MAINTEX_ROTATE;

/// @brief Field _MASK_MAP_ON, offset: 0x2b, size: 0x1, def value: None
 bool  _MASK_MAP_ON;

/// @brief Field _MOUTHCOMP, offset: 0x2c, size: 0x1, def value: None
 bool  _MOUTHCOMP;

/// @brief Field _PARALLAX, offset: 0x2d, size: 0x1, def value: None
 bool  _PARALLAX;

/// @brief Field _PARALLAX_AA, offset: 0x2e, size: 0x1, def value: None
 bool  _PARALLAX_AA;

/// @brief Field _PARALLAX_PLANAR, offset: 0x2f, size: 0x1, def value: None
 bool  _PARALLAX_PLANAR;

/// @brief Field _REFLECTIONS, offset: 0x30, size: 0x1, def value: None
 bool  _REFLECTIONS;

/// @brief Field _REFLECTIONS_ALBEDO_TINT, offset: 0x31, size: 0x1, def value: None
 bool  _REFLECTIONS_ALBEDO_TINT;

/// @brief Field _REFLECTIONS_BOX_PROJECT, offset: 0x32, size: 0x1, def value: None
 bool  _REFLECTIONS_BOX_PROJECT;

/// @brief Field _REFLECTIONS_MATCAP, offset: 0x33, size: 0x1, def value: None
 bool  _REFLECTIONS_MATCAP;

/// @brief Field _REFLECTIONS_MATCAP_PERSP_AWARE, offset: 0x34, size: 0x1, def value: None
 bool  _REFLECTIONS_MATCAP_PERSP_AWARE;

/// @brief Field _REFLECTIONS_USE_NORMAL_TEX, offset: 0x35, size: 0x1, def value: None
 bool  _REFLECTIONS_USE_NORMAL_TEX;

/// @brief Field _SPECULAR_HIGHLIGHT, offset: 0x36, size: 0x1, def value: None
 bool  _SPECULAR_HIGHLIGHT;

/// @brief Field _STEALTH_EFFECT, offset: 0x37, size: 0x1, def value: None
 bool  _STEALTH_EFFECT;

/// @brief Field _TEXEL_SNAP_UVS, offset: 0x38, size: 0x1, def value: None
 bool  _TEXEL_SNAP_UVS;

/// @brief Field _UNITY_EDIT_MODE, offset: 0x39, size: 0x1, def value: None
 bool  _UNITY_EDIT_MODE;

/// @brief Field _USE_DAY_NIGHT_LIGHTMAP, offset: 0x3a, size: 0x1, def value: None
 bool  _USE_DAY_NIGHT_LIGHTMAP;

/// @brief Field _USE_DEFORM_MAP, offset: 0x3b, size: 0x1, def value: None
 bool  _USE_DEFORM_MAP;

/// @brief Field _USE_TEX_ARRAY_ATLAS, offset: 0x3c, size: 0x1, def value: None
 bool  _USE_TEX_ARRAY_ATLAS;

/// @brief Field _USE_TEXTURE, offset: 0x3d, size: 0x1, def value: None
 bool  _USE_TEXTURE;

/// @brief Field _USE_VERTEX_COLOR, offset: 0x3e, size: 0x1, def value: None
 bool  _USE_VERTEX_COLOR;

/// @brief Field _USE_WEATHER_MAP, offset: 0x3f, size: 0x1, def value: None
 bool  _USE_WEATHER_MAP;

/// @brief Field _UV_SHIFT, offset: 0x40, size: 0x1, def value: None
 bool  _UV_SHIFT;

/// @brief Field _UV_SOURCE__UV0, offset: 0x41, size: 0x1, def value: None
 bool  _UV_SOURCE__UV0;

/// @brief Field _UV_SOURCE__WORLD_PLANAR_Y, offset: 0x42, size: 0x1, def value: None
 bool  _UV_SOURCE__WORLD_PLANAR_Y;

/// @brief Field _UV_WAVE_WARP, offset: 0x43, size: 0x1, def value: None
 bool  _UV_WAVE_WARP;

/// @brief Field _VERTEX_ANIM_FLAP, offset: 0x44, size: 0x1, def value: None
 bool  _VERTEX_ANIM_FLAP;

/// @brief Field _VERTEX_ANIM_WAVE, offset: 0x45, size: 0x1, def value: None
 bool  _VERTEX_ANIM_WAVE;

/// @brief Field _VERTEX_ANIM_WAVE_DEBUG, offset: 0x46, size: 0x1, def value: None
 bool  _VERTEX_ANIM_WAVE_DEBUG;

/// @brief Field _VERTEX_ROTATE, offset: 0x47, size: 0x1, def value: None
 bool  _VERTEX_ROTATE;

/// @brief Field _WATER_CAUSTICS, offset: 0x48, size: 0x1, def value: None
 bool  _WATER_CAUSTICS;

/// @brief Field _WATER_EFFECT, offset: 0x49, size: 0x1, def value: None
 bool  _WATER_EFFECT;

/// @brief Field _ZONE_DYNAMIC_LIGHTS__CUSTOMVERTEX, offset: 0x4a, size: 0x1, def value: None
 bool  _ZONE_DYNAMIC_LIGHTS__CUSTOMVERTEX;

/// @brief Field _ZONE_LIQUID_SHAPE__CYLINDER, offset: 0x4b, size: 0x1, def value: None
 bool  _ZONE_LIQUID_SHAPE__CYLINDER;

/// @brief Field DIRLIGHTMAP_COMBINED, offset: 0x4c, size: 0x1, def value: None
 bool  DIRLIGHTMAP_COMBINED;

/// @brief Field INSTANCING_ON, offset: 0x4d, size: 0x1, def value: None
 bool  INSTANCING_ON;

/// @brief Field LIGHTMAP_ON, offset: 0x4e, size: 0x1, def value: None
 bool  LIGHTMAP_ON;

/// @brief Field STEREO_CUBEMAP_RENDER_ON, offset: 0x4f, size: 0x1, def value: None
 bool  STEREO_CUBEMAP_RENDER_ON;

/// @brief Field STEREO_INSTANCING_ON, offset: 0x50, size: 0x1, def value: None
 bool  STEREO_INSTANCING_ON;

/// @brief Field STEREO_MULTIVIEW_ON, offset: 0x51, size: 0x1, def value: None
 bool  STEREO_MULTIVIEW_ON;

/// @brief Field UNITY_SINGLE_PASS_STEREO, offset: 0x52, size: 0x1, def value: None
 bool  UNITY_SINGLE_PASS_STEREO;

/// @brief Field USE_TEXTURE__AS_MASK, offset: 0x53, size: 0x1, def value: None
 bool  USE_TEXTURE__AS_MASK;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GTUberShader_MaterialKeywordStates, material) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTUberShader_MaterialKeywordStates, _ALPHA_BLUE_LIVE_ON) == 0x8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTUberShader_MaterialKeywordStates, _ALPHA_DETAIL_MAP) == 0x9, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTUberShader_MaterialKeywordStates, _ALPHATEST_ON) == 0xa, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTUberShader_MaterialKeywordStates, _COLOR_GRADE_ACHROMATOMALY) == 0xb, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTUberShader_MaterialKeywordStates, _COLOR_GRADE_ACHROMATOPSIA) == 0xc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTUberShader_MaterialKeywordStates, _COLOR_GRADE_DEUTERANOMALY) == 0xd, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTUberShader_MaterialKeywordStates, _COLOR_GRADE_DEUTERANOPIA) == 0xe, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTUberShader_MaterialKeywordStates, _COLOR_GRADE_PROTANOMALY) == 0xf, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTUberShader_MaterialKeywordStates, _COLOR_GRADE_PROTANOPIA) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTUberShader_MaterialKeywordStates, _COLOR_GRADE_TRITANOMALY) == 0x11, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTUberShader_MaterialKeywordStates, _COLOR_GRADE_TRITANOPIA) == 0x12, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTUberShader_MaterialKeywordStates, _CRYSTAL_EFFECT) == 0x13, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTUberShader_MaterialKeywordStates, _DAY_CYCLE_BRIGHTNESS__OPTION_1) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTUberShader_MaterialKeywordStates, _DAY_CYCLE_BRIGHTNESS__OPTION_2) == 0x15, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTUberShader_MaterialKeywordStates, _DEBUG_PAWN_DATA) == 0x16, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTUberShader_MaterialKeywordStates, _EMISSION) == 0x17, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTUberShader_MaterialKeywordStates, _EMISSION_USE_UV_WAVE_WARP) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTUberShader_MaterialKeywordStates, _EYECOMP) == 0x19, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTUberShader_MaterialKeywordStates, _FX_LAVA_LAMP) == 0x1a, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTUberShader_MaterialKeywordStates, _GLOBAL_ZONE_LIQUID_TYPE__LAVA) == 0x1b, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTUberShader_MaterialKeywordStates, _GLOBAL_ZONE_LIQUID_TYPE__WATER) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTUberShader_MaterialKeywordStates, _GRADIENT_MAP_ON) == 0x1d, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTUberShader_MaterialKeywordStates, _GRID_EFFECT) == 0x1e, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTUberShader_MaterialKeywordStates, _GT_BASE_MAP_ATLAS_SLICE_SOURCE__PROPERTY) == 0x1f, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTUberShader_MaterialKeywordStates, _GT_BASE_MAP_ATLAS_SLICE_SOURCE__UV1_Z) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTUberShader_MaterialKeywordStates, _GT_EDITOR_TIME) == 0x21, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTUberShader_MaterialKeywordStates, _GT_RIM_LIGHT) == 0x22, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTUberShader_MaterialKeywordStates, _GT_RIM_LIGHT_FLAT) == 0x23, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTUberShader_MaterialKeywordStates, _GT_RIM_LIGHT_USE_ALPHA) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTUberShader_MaterialKeywordStates, _HALF_LAMBERT_TERM) == 0x25, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTUberShader_MaterialKeywordStates, _HEIGHT_BASED_WATER_EFFECT) == 0x26, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTUberShader_MaterialKeywordStates, _INNER_GLOW) == 0x27, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTUberShader_MaterialKeywordStates, _LIQUID_CONTAINER) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTUberShader_MaterialKeywordStates, _LIQUID_VOLUME) == 0x29, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTUberShader_MaterialKeywordStates, _MAINTEX_ROTATE) == 0x2a, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTUberShader_MaterialKeywordStates, _MASK_MAP_ON) == 0x2b, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTUberShader_MaterialKeywordStates, _MOUTHCOMP) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTUberShader_MaterialKeywordStates, _PARALLAX) == 0x2d, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTUberShader_MaterialKeywordStates, _PARALLAX_AA) == 0x2e, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTUberShader_MaterialKeywordStates, _PARALLAX_PLANAR) == 0x2f, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTUberShader_MaterialKeywordStates, _REFLECTIONS) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTUberShader_MaterialKeywordStates, _REFLECTIONS_ALBEDO_TINT) == 0x31, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTUberShader_MaterialKeywordStates, _REFLECTIONS_BOX_PROJECT) == 0x32, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTUberShader_MaterialKeywordStates, _REFLECTIONS_MATCAP) == 0x33, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTUberShader_MaterialKeywordStates, _REFLECTIONS_MATCAP_PERSP_AWARE) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTUberShader_MaterialKeywordStates, _REFLECTIONS_USE_NORMAL_TEX) == 0x35, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTUberShader_MaterialKeywordStates, _SPECULAR_HIGHLIGHT) == 0x36, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTUberShader_MaterialKeywordStates, _STEALTH_EFFECT) == 0x37, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTUberShader_MaterialKeywordStates, _TEXEL_SNAP_UVS) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTUberShader_MaterialKeywordStates, _UNITY_EDIT_MODE) == 0x39, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTUberShader_MaterialKeywordStates, _USE_DAY_NIGHT_LIGHTMAP) == 0x3a, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTUberShader_MaterialKeywordStates, _USE_DEFORM_MAP) == 0x3b, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTUberShader_MaterialKeywordStates, _USE_TEX_ARRAY_ATLAS) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTUberShader_MaterialKeywordStates, _USE_TEXTURE) == 0x3d, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTUberShader_MaterialKeywordStates, _USE_VERTEX_COLOR) == 0x3e, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTUberShader_MaterialKeywordStates, _USE_WEATHER_MAP) == 0x3f, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTUberShader_MaterialKeywordStates, _UV_SHIFT) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTUberShader_MaterialKeywordStates, _UV_SOURCE__UV0) == 0x41, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTUberShader_MaterialKeywordStates, _UV_SOURCE__WORLD_PLANAR_Y) == 0x42, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTUberShader_MaterialKeywordStates, _UV_WAVE_WARP) == 0x43, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTUberShader_MaterialKeywordStates, _VERTEX_ANIM_FLAP) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTUberShader_MaterialKeywordStates, _VERTEX_ANIM_WAVE) == 0x45, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTUberShader_MaterialKeywordStates, _VERTEX_ANIM_WAVE_DEBUG) == 0x46, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTUberShader_MaterialKeywordStates, _VERTEX_ROTATE) == 0x47, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTUberShader_MaterialKeywordStates, _WATER_CAUSTICS) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTUberShader_MaterialKeywordStates, _WATER_EFFECT) == 0x49, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTUberShader_MaterialKeywordStates, _ZONE_DYNAMIC_LIGHTS__CUSTOMVERTEX) == 0x4a, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTUberShader_MaterialKeywordStates, _ZONE_LIQUID_SHAPE__CYLINDER) == 0x4b, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTUberShader_MaterialKeywordStates, DIRLIGHTMAP_COMBINED) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTUberShader_MaterialKeywordStates, INSTANCING_ON) == 0x4d, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTUberShader_MaterialKeywordStates, LIGHTMAP_ON) == 0x4e, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTUberShader_MaterialKeywordStates, STEREO_CUBEMAP_RENDER_ON) == 0x4f, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTUberShader_MaterialKeywordStates, STEREO_INSTANCING_ON) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTUberShader_MaterialKeywordStates, STEREO_MULTIVIEW_ON) == 0x51, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTUberShader_MaterialKeywordStates, UNITY_SINGLE_PASS_STEREO) == 0x52, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GTUberShader_MaterialKeywordStates, USE_TEXTURE__AS_MASK) == 0x53, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GTUberShader_MaterialKeywordStates) == 0x58, "Size mismatch!");

} // namespace end def GlobalNamespace
