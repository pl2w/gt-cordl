#pragma once
// IWYU pragma private; include "GlobalNamespace/GTUberShader_MaterialKeywordStates.hpp"
#include "GlobalNamespace/zzzz__GTUberShader_MaterialKeywordStates_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GTUberShader_MaterialKeywordStates._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GTUberShader_MaterialKeywordStates::*)(::UnityEngine::Material*)>(&::GlobalNamespace::GTUberShader_MaterialKeywordStates::_ctor)> {
  constexpr static std::size_t size = 0xd78;
  constexpr static std::size_t addrs = 0x5b3e18c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTUberShader_MaterialKeywordStates>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GTUberShader_MaterialKeywordStates.Refresh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GTUberShader_MaterialKeywordStates::*)()>(&::GlobalNamespace::GTUberShader_MaterialKeywordStates::Refresh)> {
  constexpr static std::size_t size = 0xd68;
  constexpr static std::size_t addrs = 0x5b3ef04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTUberShader_MaterialKeywordStates>(),
                        {"Refresh", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void GlobalNamespace::GTUberShader_MaterialKeywordStates::_ctor(::UnityEngine::Material*  mat)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTUberShader_MaterialKeywordStates>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, mat);
}
inline void GlobalNamespace::GTUberShader_MaterialKeywordStates::Refresh()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GTUberShader_MaterialKeywordStates>(),
                        {"Refresh", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "material", ty: "::UnityW<::UnityEngine::Material>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_ALPHA_BLUE_LIVE_ON", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_ALPHA_DETAIL_MAP", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_ALPHATEST_ON", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_COLOR_GRADE_ACHROMATOMALY", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_COLOR_GRADE_ACHROMATOPSIA", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_COLOR_GRADE_DEUTERANOMALY", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_COLOR_GRADE_DEUTERANOPIA", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_COLOR_GRADE_PROTANOMALY", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_COLOR_GRADE_PROTANOPIA", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_COLOR_GRADE_TRITANOMALY", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_COLOR_GRADE_TRITANOPIA", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_CRYSTAL_EFFECT", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_DAY_CYCLE_BRIGHTNESS__OPTION_1", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_DAY_CYCLE_BRIGHTNESS__OPTION_2", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_DEBUG_PAWN_DATA", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_EMISSION", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_EMISSION_USE_UV_WAVE_WARP", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_EYECOMP", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_FX_LAVA_LAMP", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_GLOBAL_ZONE_LIQUID_TYPE__LAVA", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_GLOBAL_ZONE_LIQUID_TYPE__WATER", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_GRADIENT_MAP_ON", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_GRID_EFFECT", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_GT_BASE_MAP_ATLAS_SLICE_SOURCE__PROPERTY", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_GT_BASE_MAP_ATLAS_SLICE_SOURCE__UV1_Z", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_GT_EDITOR_TIME", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_GT_RIM_LIGHT", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_GT_RIM_LIGHT_FLAT", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_GT_RIM_LIGHT_USE_ALPHA", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_HALF_LAMBERT_TERM", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_HEIGHT_BASED_WATER_EFFECT", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_INNER_GLOW", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_LIQUID_CONTAINER", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_LIQUID_VOLUME", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_MAINTEX_ROTATE", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_MASK_MAP_ON", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_MOUTHCOMP", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_PARALLAX", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_PARALLAX_AA", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_PARALLAX_PLANAR", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_REFLECTIONS", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_REFLECTIONS_ALBEDO_TINT", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_REFLECTIONS_BOX_PROJECT", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_REFLECTIONS_MATCAP", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_REFLECTIONS_MATCAP_PERSP_AWARE", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_REFLECTIONS_USE_NORMAL_TEX", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_SPECULAR_HIGHLIGHT", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_STEALTH_EFFECT", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_TEXEL_SNAP_UVS", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_UNITY_EDIT_MODE", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_USE_DAY_NIGHT_LIGHTMAP", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_USE_DEFORM_MAP", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_USE_TEX_ARRAY_ATLAS", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_USE_TEXTURE", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_USE_VERTEX_COLOR", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_USE_WEATHER_MAP", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_UV_SHIFT", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_UV_SOURCE__UV0", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_UV_SOURCE__WORLD_PLANAR_Y", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_UV_WAVE_WARP", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_VERTEX_ANIM_FLAP", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_VERTEX_ANIM_WAVE", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_VERTEX_ANIM_WAVE_DEBUG", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_VERTEX_ROTATE", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_WATER_CAUSTICS", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_WATER_EFFECT", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_ZONE_DYNAMIC_LIGHTS__CUSTOMVERTEX", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_ZONE_LIQUID_SHAPE__CYLINDER", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "DIRLIGHTMAP_COMBINED", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "INSTANCING_ON", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "LIGHTMAP_ON", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "STEREO_CUBEMAP_RENDER_ON", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "STEREO_INSTANCING_ON", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "STEREO_MULTIVIEW_ON", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "UNITY_SINGLE_PASS_STEREO", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "USE_TEXTURE__AS_MASK", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::GlobalNamespace::GTUberShader_MaterialKeywordStates::GTUberShader_MaterialKeywordStates(::UnityW<::UnityEngine::Material>  material, bool  _ALPHA_BLUE_LIVE_ON, bool  _ALPHA_DETAIL_MAP, bool  _ALPHATEST_ON, bool  _COLOR_GRADE_ACHROMATOMALY, bool  _COLOR_GRADE_ACHROMATOPSIA, bool  _COLOR_GRADE_DEUTERANOMALY, bool  _COLOR_GRADE_DEUTERANOPIA, bool  _COLOR_GRADE_PROTANOMALY, bool  _COLOR_GRADE_PROTANOPIA, bool  _COLOR_GRADE_TRITANOMALY, bool  _COLOR_GRADE_TRITANOPIA, bool  _CRYSTAL_EFFECT, bool  _DAY_CYCLE_BRIGHTNESS__OPTION_1, bool  _DAY_CYCLE_BRIGHTNESS__OPTION_2, bool  _DEBUG_PAWN_DATA, bool  _EMISSION, bool  _EMISSION_USE_UV_WAVE_WARP, bool  _EYECOMP, bool  _FX_LAVA_LAMP, bool  _GLOBAL_ZONE_LIQUID_TYPE__LAVA, bool  _GLOBAL_ZONE_LIQUID_TYPE__WATER, bool  _GRADIENT_MAP_ON, bool  _GRID_EFFECT, bool  _GT_BASE_MAP_ATLAS_SLICE_SOURCE__PROPERTY, bool  _GT_BASE_MAP_ATLAS_SLICE_SOURCE__UV1_Z, bool  _GT_EDITOR_TIME, bool  _GT_RIM_LIGHT, bool  _GT_RIM_LIGHT_FLAT, bool  _GT_RIM_LIGHT_USE_ALPHA, bool  _HALF_LAMBERT_TERM, bool  _HEIGHT_BASED_WATER_EFFECT, bool  _INNER_GLOW, bool  _LIQUID_CONTAINER, bool  _LIQUID_VOLUME, bool  _MAINTEX_ROTATE, bool  _MASK_MAP_ON, bool  _MOUTHCOMP, bool  _PARALLAX, bool  _PARALLAX_AA, bool  _PARALLAX_PLANAR, bool  _REFLECTIONS, bool  _REFLECTIONS_ALBEDO_TINT, bool  _REFLECTIONS_BOX_PROJECT, bool  _REFLECTIONS_MATCAP, bool  _REFLECTIONS_MATCAP_PERSP_AWARE, bool  _REFLECTIONS_USE_NORMAL_TEX, bool  _SPECULAR_HIGHLIGHT, bool  _STEALTH_EFFECT, bool  _TEXEL_SNAP_UVS, bool  _UNITY_EDIT_MODE, bool  _USE_DAY_NIGHT_LIGHTMAP, bool  _USE_DEFORM_MAP, bool  _USE_TEX_ARRAY_ATLAS, bool  _USE_TEXTURE, bool  _USE_VERTEX_COLOR, bool  _USE_WEATHER_MAP, bool  _UV_SHIFT, bool  _UV_SOURCE__UV0, bool  _UV_SOURCE__WORLD_PLANAR_Y, bool  _UV_WAVE_WARP, bool  _VERTEX_ANIM_FLAP, bool  _VERTEX_ANIM_WAVE, bool  _VERTEX_ANIM_WAVE_DEBUG, bool  _VERTEX_ROTATE, bool  _WATER_CAUSTICS, bool  _WATER_EFFECT, bool  _ZONE_DYNAMIC_LIGHTS__CUSTOMVERTEX, bool  _ZONE_LIQUID_SHAPE__CYLINDER, bool  DIRLIGHTMAP_COMBINED, bool  INSTANCING_ON, bool  LIGHTMAP_ON, bool  STEREO_CUBEMAP_RENDER_ON, bool  STEREO_INSTANCING_ON, bool  STEREO_MULTIVIEW_ON, bool  UNITY_SINGLE_PASS_STEREO, bool  USE_TEXTURE__AS_MASK) noexcept  {
this->material = material;
this->_ALPHA_BLUE_LIVE_ON = _ALPHA_BLUE_LIVE_ON;
this->_ALPHA_DETAIL_MAP = _ALPHA_DETAIL_MAP;
this->_ALPHATEST_ON = _ALPHATEST_ON;
this->_COLOR_GRADE_ACHROMATOMALY = _COLOR_GRADE_ACHROMATOMALY;
this->_COLOR_GRADE_ACHROMATOPSIA = _COLOR_GRADE_ACHROMATOPSIA;
this->_COLOR_GRADE_DEUTERANOMALY = _COLOR_GRADE_DEUTERANOMALY;
this->_COLOR_GRADE_DEUTERANOPIA = _COLOR_GRADE_DEUTERANOPIA;
this->_COLOR_GRADE_PROTANOMALY = _COLOR_GRADE_PROTANOMALY;
this->_COLOR_GRADE_PROTANOPIA = _COLOR_GRADE_PROTANOPIA;
this->_COLOR_GRADE_TRITANOMALY = _COLOR_GRADE_TRITANOMALY;
this->_COLOR_GRADE_TRITANOPIA = _COLOR_GRADE_TRITANOPIA;
this->_CRYSTAL_EFFECT = _CRYSTAL_EFFECT;
this->_DAY_CYCLE_BRIGHTNESS__OPTION_1 = _DAY_CYCLE_BRIGHTNESS__OPTION_1;
this->_DAY_CYCLE_BRIGHTNESS__OPTION_2 = _DAY_CYCLE_BRIGHTNESS__OPTION_2;
this->_DEBUG_PAWN_DATA = _DEBUG_PAWN_DATA;
this->_EMISSION = _EMISSION;
this->_EMISSION_USE_UV_WAVE_WARP = _EMISSION_USE_UV_WAVE_WARP;
this->_EYECOMP = _EYECOMP;
this->_FX_LAVA_LAMP = _FX_LAVA_LAMP;
this->_GLOBAL_ZONE_LIQUID_TYPE__LAVA = _GLOBAL_ZONE_LIQUID_TYPE__LAVA;
this->_GLOBAL_ZONE_LIQUID_TYPE__WATER = _GLOBAL_ZONE_LIQUID_TYPE__WATER;
this->_GRADIENT_MAP_ON = _GRADIENT_MAP_ON;
this->_GRID_EFFECT = _GRID_EFFECT;
this->_GT_BASE_MAP_ATLAS_SLICE_SOURCE__PROPERTY = _GT_BASE_MAP_ATLAS_SLICE_SOURCE__PROPERTY;
this->_GT_BASE_MAP_ATLAS_SLICE_SOURCE__UV1_Z = _GT_BASE_MAP_ATLAS_SLICE_SOURCE__UV1_Z;
this->_GT_EDITOR_TIME = _GT_EDITOR_TIME;
this->_GT_RIM_LIGHT = _GT_RIM_LIGHT;
this->_GT_RIM_LIGHT_FLAT = _GT_RIM_LIGHT_FLAT;
this->_GT_RIM_LIGHT_USE_ALPHA = _GT_RIM_LIGHT_USE_ALPHA;
this->_HALF_LAMBERT_TERM = _HALF_LAMBERT_TERM;
this->_HEIGHT_BASED_WATER_EFFECT = _HEIGHT_BASED_WATER_EFFECT;
this->_INNER_GLOW = _INNER_GLOW;
this->_LIQUID_CONTAINER = _LIQUID_CONTAINER;
this->_LIQUID_VOLUME = _LIQUID_VOLUME;
this->_MAINTEX_ROTATE = _MAINTEX_ROTATE;
this->_MASK_MAP_ON = _MASK_MAP_ON;
this->_MOUTHCOMP = _MOUTHCOMP;
this->_PARALLAX = _PARALLAX;
this->_PARALLAX_AA = _PARALLAX_AA;
this->_PARALLAX_PLANAR = _PARALLAX_PLANAR;
this->_REFLECTIONS = _REFLECTIONS;
this->_REFLECTIONS_ALBEDO_TINT = _REFLECTIONS_ALBEDO_TINT;
this->_REFLECTIONS_BOX_PROJECT = _REFLECTIONS_BOX_PROJECT;
this->_REFLECTIONS_MATCAP = _REFLECTIONS_MATCAP;
this->_REFLECTIONS_MATCAP_PERSP_AWARE = _REFLECTIONS_MATCAP_PERSP_AWARE;
this->_REFLECTIONS_USE_NORMAL_TEX = _REFLECTIONS_USE_NORMAL_TEX;
this->_SPECULAR_HIGHLIGHT = _SPECULAR_HIGHLIGHT;
this->_STEALTH_EFFECT = _STEALTH_EFFECT;
this->_TEXEL_SNAP_UVS = _TEXEL_SNAP_UVS;
this->_UNITY_EDIT_MODE = _UNITY_EDIT_MODE;
this->_USE_DAY_NIGHT_LIGHTMAP = _USE_DAY_NIGHT_LIGHTMAP;
this->_USE_DEFORM_MAP = _USE_DEFORM_MAP;
this->_USE_TEX_ARRAY_ATLAS = _USE_TEX_ARRAY_ATLAS;
this->_USE_TEXTURE = _USE_TEXTURE;
this->_USE_VERTEX_COLOR = _USE_VERTEX_COLOR;
this->_USE_WEATHER_MAP = _USE_WEATHER_MAP;
this->_UV_SHIFT = _UV_SHIFT;
this->_UV_SOURCE__UV0 = _UV_SOURCE__UV0;
this->_UV_SOURCE__WORLD_PLANAR_Y = _UV_SOURCE__WORLD_PLANAR_Y;
this->_UV_WAVE_WARP = _UV_WAVE_WARP;
this->_VERTEX_ANIM_FLAP = _VERTEX_ANIM_FLAP;
this->_VERTEX_ANIM_WAVE = _VERTEX_ANIM_WAVE;
this->_VERTEX_ANIM_WAVE_DEBUG = _VERTEX_ANIM_WAVE_DEBUG;
this->_VERTEX_ROTATE = _VERTEX_ROTATE;
this->_WATER_CAUSTICS = _WATER_CAUSTICS;
this->_WATER_EFFECT = _WATER_EFFECT;
this->_ZONE_DYNAMIC_LIGHTS__CUSTOMVERTEX = _ZONE_DYNAMIC_LIGHTS__CUSTOMVERTEX;
this->_ZONE_LIQUID_SHAPE__CYLINDER = _ZONE_LIQUID_SHAPE__CYLINDER;
this->DIRLIGHTMAP_COMBINED = DIRLIGHTMAP_COMBINED;
this->INSTANCING_ON = INSTANCING_ON;
this->LIGHTMAP_ON = LIGHTMAP_ON;
this->STEREO_CUBEMAP_RENDER_ON = STEREO_CUBEMAP_RENDER_ON;
this->STEREO_INSTANCING_ON = STEREO_INSTANCING_ON;
this->STEREO_MULTIVIEW_ON = STEREO_MULTIVIEW_ON;
this->UNITY_SINGLE_PASS_STEREO = UNITY_SINGLE_PASS_STEREO;
this->USE_TEXTURE__AS_MASK = USE_TEXTURE__AS_MASK;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GTUberShader_MaterialKeywordStates::GTUberShader_MaterialKeywordStates()   {
}
