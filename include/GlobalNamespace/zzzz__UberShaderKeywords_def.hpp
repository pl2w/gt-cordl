#pragma once
// IWYU pragma private; include "GlobalNamespace/UberShaderKeywords.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(UberShaderKeywords)
// Forward declare root types
namespace GlobalNamespace {
class UberShaderKeywords;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::UberShaderKeywords*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::UberShaderKeywords*, "", "UberShaderKeywords");
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: UberShaderKeywords
class CORDL_TYPE UberShaderKeywords : public ::System::Object {
public:
// Declarations
/// @brief Field namesArray, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_namesArray, put=setStaticF_namesArray)) ::ArrayW<::StringW>  namesArray;

static inline ::ArrayW<::StringW> getStaticF_namesArray() ;

static inline void setStaticF_namesArray(::ArrayW<::StringW>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UberShaderKeywords() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UberShaderKeywords", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UberShaderKeywords(UberShaderKeywords && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UberShaderKeywords", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UberShaderKeywords(UberShaderKeywords const& ) = delete;

/// @brief Field DIRLIGHTMAP_COMBINED offset 0xffffffff size 0x8
static constexpr ::ConstString  DIRLIGHTMAP_COMBINED{u"DIRLIGHTMAP_COMBINED"};

/// @brief Field INSTANCING_ON offset 0xffffffff size 0x8
static constexpr ::ConstString  INSTANCING_ON{u"INSTANCING_ON"};

/// @brief Field LIGHTMAP_ON offset 0xffffffff size 0x8
static constexpr ::ConstString  LIGHTMAP_ON{u"LIGHTMAP_ON"};

/// @brief Field STEREO_CUBEMAP_RENDER_ON offset 0xffffffff size 0x8
static constexpr ::ConstString  STEREO_CUBEMAP_RENDER_ON{u"STEREO_CUBEMAP_RENDER_ON"};

/// @brief Field STEREO_INSTANCING_ON offset 0xffffffff size 0x8
static constexpr ::ConstString  STEREO_INSTANCING_ON{u"STEREO_INSTANCING_ON"};

/// @brief Field STEREO_MULTIVIEW_ON offset 0xffffffff size 0x8
static constexpr ::ConstString  STEREO_MULTIVIEW_ON{u"STEREO_MULTIVIEW_ON"};

/// @brief Field UNITY_SINGLE_PASS_STEREO offset 0xffffffff size 0x8
static constexpr ::ConstString  UNITY_SINGLE_PASS_STEREO{u"UNITY_SINGLE_PASS_STEREO"};

/// @brief Field USE_TEXTURE__AS_MASK offset 0xffffffff size 0x8
static constexpr ::ConstString  USE_TEXTURE__AS_MASK{u"USE_TEXTURE__AS_MASK"};

/// @brief Field _ALPHATEST_ON offset 0xffffffff size 0x8
static constexpr ::ConstString  _ALPHATEST_ON{u"_ALPHATEST_ON"};

/// @brief Field _ALPHA_BLUE_LIVE_ON offset 0xffffffff size 0x8
static constexpr ::ConstString  _ALPHA_BLUE_LIVE_ON{u"_ALPHA_BLUE_LIVE_ON"};

/// @brief Field _ALPHA_DETAIL_MAP offset 0xffffffff size 0x8
static constexpr ::ConstString  _ALPHA_DETAIL_MAP{u"_ALPHA_DETAIL_MAP"};

/// @brief Field _COLOR_GRADE_ACHROMATOMALY offset 0xffffffff size 0x8
static constexpr ::ConstString  _COLOR_GRADE_ACHROMATOMALY{u"_COLOR_GRADE_ACHROMATOMALY"};

/// @brief Field _COLOR_GRADE_ACHROMATOPSIA offset 0xffffffff size 0x8
static constexpr ::ConstString  _COLOR_GRADE_ACHROMATOPSIA{u"_COLOR_GRADE_ACHROMATOPSIA"};

/// @brief Field _COLOR_GRADE_DEUTERANOMALY offset 0xffffffff size 0x8
static constexpr ::ConstString  _COLOR_GRADE_DEUTERANOMALY{u"_COLOR_GRADE_DEUTERANOMALY"};

/// @brief Field _COLOR_GRADE_DEUTERANOPIA offset 0xffffffff size 0x8
static constexpr ::ConstString  _COLOR_GRADE_DEUTERANOPIA{u"_COLOR_GRADE_DEUTERANOPIA"};

/// @brief Field _COLOR_GRADE_PROTANOMALY offset 0xffffffff size 0x8
static constexpr ::ConstString  _COLOR_GRADE_PROTANOMALY{u"_COLOR_GRADE_PROTANOMALY"};

/// @brief Field _COLOR_GRADE_PROTANOPIA offset 0xffffffff size 0x8
static constexpr ::ConstString  _COLOR_GRADE_PROTANOPIA{u"_COLOR_GRADE_PROTANOPIA"};

/// @brief Field _COLOR_GRADE_TRITANOMALY offset 0xffffffff size 0x8
static constexpr ::ConstString  _COLOR_GRADE_TRITANOMALY{u"_COLOR_GRADE_TRITANOMALY"};

/// @brief Field _COLOR_GRADE_TRITANOPIA offset 0xffffffff size 0x8
static constexpr ::ConstString  _COLOR_GRADE_TRITANOPIA{u"_COLOR_GRADE_TRITANOPIA"};

/// @brief Field _CRYSTAL_EFFECT offset 0xffffffff size 0x8
static constexpr ::ConstString  _CRYSTAL_EFFECT{u"_CRYSTAL_EFFECT"};

/// @brief Field _DEBUG_PAWN_DATA offset 0xffffffff size 0x8
static constexpr ::ConstString  _DEBUG_PAWN_DATA{u"_DEBUG_PAWN_DATA"};

/// @brief Field _EMISSION offset 0xffffffff size 0x8
static constexpr ::ConstString  _EMISSION{u"_EMISSION"};

/// @brief Field _EMISSION_USE_UV_WAVE_WARP offset 0xffffffff size 0x8
static constexpr ::ConstString  _EMISSION_USE_UV_WAVE_WARP{u"_EMISSION_USE_UV_WAVE_WARP"};

/// @brief Field _EYECOMP offset 0xffffffff size 0x8
static constexpr ::ConstString  _EYECOMP{u"_EYECOMP"};

/// @brief Field _FX_LAVA_LAMP offset 0xffffffff size 0x8
static constexpr ::ConstString  _FX_LAVA_LAMP{u"_FX_LAVA_LAMP"};

/// @brief Field _GLOBAL_ZONE_LIQUID_TYPE__LAVA offset 0xffffffff size 0x8
static constexpr ::ConstString  _GLOBAL_ZONE_LIQUID_TYPE__LAVA{u"_GLOBAL_ZONE_LIQUID_TYPE__LAVA"};

/// @brief Field _GLOBAL_ZONE_LIQUID_TYPE__WATER offset 0xffffffff size 0x8
static constexpr ::ConstString  _GLOBAL_ZONE_LIQUID_TYPE__WATER{u"_GLOBAL_ZONE_LIQUID_TYPE__WATER"};

/// @brief Field _GRADIENT_MAP_ON offset 0xffffffff size 0x8
static constexpr ::ConstString  _GRADIENT_MAP_ON{u"_GRADIENT_MAP_ON"};

/// @brief Field _GRID_EFFECT offset 0xffffffff size 0x8
static constexpr ::ConstString  _GRID_EFFECT{u"_GRID_EFFECT"};

/// @brief Field _GT_EDITOR_TIME offset 0xffffffff size 0x8
static constexpr ::ConstString  _GT_EDITOR_TIME{u"_GT_EDITOR_TIME"};

/// @brief Field _HEIGHT_BASED_WATER_EFFECT offset 0xffffffff size 0x8
static constexpr ::ConstString  _HEIGHT_BASED_WATER_EFFECT{u"_HEIGHT_BASED_WATER_EFFECT"};

/// @brief Field _INNER_GLOW offset 0xffffffff size 0x8
static constexpr ::ConstString  _INNER_GLOW{u"_INNER_GLOW"};

/// @brief Field _LIQUID_CONTAINER offset 0xffffffff size 0x8
static constexpr ::ConstString  _LIQUID_CONTAINER{u"_LIQUID_CONTAINER"};

/// @brief Field _LIQUID_VOLUME offset 0xffffffff size 0x8
static constexpr ::ConstString  _LIQUID_VOLUME{u"_LIQUID_VOLUME"};

/// @brief Field _MAINTEX_ROTATE offset 0xffffffff size 0x8
static constexpr ::ConstString  _MAINTEX_ROTATE{u"_MAINTEX_ROTATE"};

/// @brief Field _MASK_MAP_ON offset 0xffffffff size 0x8
static constexpr ::ConstString  _MASK_MAP_ON{u"_MASK_MAP_ON"};

/// @brief Field _MOUTHCOMP offset 0xffffffff size 0x8
static constexpr ::ConstString  _MOUTHCOMP{u"_MOUTHCOMP"};

/// @brief Field _PARALLAX offset 0xffffffff size 0x8
static constexpr ::ConstString  _PARALLAX{u"_PARALLAX"};

/// @brief Field _PARALLAX_AA offset 0xffffffff size 0x8
static constexpr ::ConstString  _PARALLAX_AA{u"_PARALLAX_AA"};

/// @brief Field _PARALLAX_PLANAR offset 0xffffffff size 0x8
static constexpr ::ConstString  _PARALLAX_PLANAR{u"_PARALLAX_PLANAR"};

/// @brief Field _REFLECTIONS offset 0xffffffff size 0x8
static constexpr ::ConstString  _REFLECTIONS{u"_REFLECTIONS"};

/// @brief Field _REFLECTIONS_BOX_PROJECT offset 0xffffffff size 0x8
static constexpr ::ConstString  _REFLECTIONS_BOX_PROJECT{u"_REFLECTIONS_BOX_PROJECT"};

/// @brief Field _REFLECTIONS_USE_NORMAL_TEX offset 0xffffffff size 0x8
static constexpr ::ConstString  _REFLECTIONS_USE_NORMAL_TEX{u"_REFLECTIONS_USE_NORMAL_TEX"};

/// @brief Field _STEALTH_EFFECT offset 0xffffffff size 0x8
static constexpr ::ConstString  _STEALTH_EFFECT{u"_STEALTH_EFFECT"};

/// @brief Field _TEXEL_SNAP_UVS offset 0xffffffff size 0x8
static constexpr ::ConstString  _TEXEL_SNAP_UVS{u"_TEXEL_SNAP_UVS"};

/// @brief Field _UNITY_EDIT_MODE offset 0xffffffff size 0x8
static constexpr ::ConstString  _UNITY_EDIT_MODE{u"_UNITY_EDIT_MODE"};

/// @brief Field _USE_DAY_NIGHT_LIGHTMAP offset 0xffffffff size 0x8
static constexpr ::ConstString  _USE_DAY_NIGHT_LIGHTMAP{u"_USE_DAY_NIGHT_LIGHTMAP"};

/// @brief Field _USE_DEFORM_MAP offset 0xffffffff size 0x8
static constexpr ::ConstString  _USE_DEFORM_MAP{u"_USE_DEFORM_MAP"};

/// @brief Field _USE_TEXTURE offset 0xffffffff size 0x8
static constexpr ::ConstString  _USE_TEXTURE{u"_USE_TEXTURE"};

/// @brief Field _USE_TEX_ARRAY_ATLAS offset 0xffffffff size 0x8
static constexpr ::ConstString  _USE_TEX_ARRAY_ATLAS{u"_USE_TEX_ARRAY_ATLAS"};

/// @brief Field _USE_WEATHER_MAP offset 0xffffffff size 0x8
static constexpr ::ConstString  _USE_WEATHER_MAP{u"_USE_WEATHER_MAP"};

/// @brief Field _UV_SHIFT offset 0xffffffff size 0x8
static constexpr ::ConstString  _UV_SHIFT{u"_UV_SHIFT"};

/// @brief Field _UV_WAVE_WARP offset 0xffffffff size 0x8
static constexpr ::ConstString  _UV_WAVE_WARP{u"_UV_WAVE_WARP"};

/// @brief Field _VERTEX_ANIM_FLAP offset 0xffffffff size 0x8
static constexpr ::ConstString  _VERTEX_ANIM_FLAP{u"_VERTEX_ANIM_FLAP"};

/// @brief Field _VERTEX_ANIM_WAVE offset 0xffffffff size 0x8
static constexpr ::ConstString  _VERTEX_ANIM_WAVE{u"_VERTEX_ANIM_WAVE"};

/// @brief Field _VERTEX_ANIM_WAVE_DEBUG offset 0xffffffff size 0x8
static constexpr ::ConstString  _VERTEX_ANIM_WAVE_DEBUG{u"_VERTEX_ANIM_WAVE_DEBUG"};

/// @brief Field _VERTEX_LIGHTING offset 0xffffffff size 0x8
static constexpr ::ConstString  _VERTEX_LIGHTING{u"_VERTEX_LIGHTING"};

/// @brief Field _VERTEX_ROTATE offset 0xffffffff size 0x8
static constexpr ::ConstString  _VERTEX_ROTATE{u"_VERTEX_ROTATE"};

/// @brief Field _WATER_EFFECT offset 0xffffffff size 0x8
static constexpr ::ConstString  _WATER_EFFECT{u"_WATER_EFFECT"};

/// @brief Field _ZONE_LIQUID_SHAPE__CYLINDER offset 0xffffffff size 0x8
static constexpr ::ConstString  _ZONE_LIQUID_SHAPE__CYLINDER{u"_ZONE_LIQUID_SHAPE__CYLINDER"};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{908};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::GlobalNamespace::UberShaderKeywords) == 0x10, "Size mismatch!");

} // namespace end def GlobalNamespace
