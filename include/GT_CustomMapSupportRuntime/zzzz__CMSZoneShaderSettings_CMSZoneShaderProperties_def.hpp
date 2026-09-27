#pragma once
// IWYU pragma private; include "GT_CustomMapSupportRuntime/CMSZoneShaderSettings_CMSZoneShaderProperties.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(CMSZoneShaderSettings_CMSZoneShaderProperties)
namespace UnityEngine {
class Texture2D;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
struct CMSZoneShaderSettings_CMSZoneShaderProperties;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::CMSZoneShaderSettings_CMSZoneShaderProperties);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::CMSZoneShaderSettings_CMSZoneShaderProperties, "GT_CustomMapSupportRuntime", "CMSZoneShaderSettings/CMSZoneShaderProperties");
// [Nullable(0)]
// Dependencies UnityEngine.Color, UnityEngine.Vector2, UnityEngine.Vector4
namespace GlobalNamespace {
// Is value type: true
// CS Name: GT_CustomMapSupportRuntime.CMSZoneShaderSettings/CMSZoneShaderProperties
struct CORDL_TYPE CMSZoneShaderSettings_CMSZoneShaderProperties {
public:
// Declarations
// Ctor Parameters []
// @brief default ctor
constexpr CMSZoneShaderSettings_CMSZoneShaderProperties() ;

// Ctor Parameters [CppParam { name: "isInitialized", ty: "bool", modifiers: "", def_value: None, comment: None }, CppParam { name: "groundFogColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None, comment: None }, CppParam { name: "groundFogDepthFadeSize", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "groundFogHeightPlane", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: None, comment: None }, CppParam { name: "groundFogHeight", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "groundFogHeightFadeSize", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "zoneLiquidType", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "liquidShape", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "liquidShapeRadius", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "liquidBottomTransform", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: None, comment: None }, CppParam { name: "zoneLiquidUVScale", ty: "float_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "underwaterTintColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None, comment: None }, CppParam { name: "underwaterFogColor", ty: "::UnityEngine::Color", modifiers: "", def_value: None, comment: None }, CppParam { name: "underwaterFogParams", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None, comment: None }, CppParam { name: "underwaterCausticsParams", ty: "::UnityEngine::Vector4", modifiers: "", def_value: None, comment: None }, CppParam { name: "underwaterCausticsTexture", ty: "::UnityW<::UnityEngine::Texture2D>", modifiers: "", def_value: None, comment: None }, CppParam { name: "underwaterEffectsDistanceToSurfaceFade", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None, comment: None }, CppParam { name: "liquidResidueTex", ty: "::UnityW<::UnityEngine::Texture2D>", modifiers: "", def_value: None, comment: None }, CppParam { name: "mainWaterSurfacePlane", ty: "::UnityW<::UnityEngine::Transform>", modifiers: "", def_value: None, comment: None }, CppParam { name: "zoneWeatherMapDissolveProgress", ty: "float_t", modifiers: "", def_value: None, comment: None }]
constexpr CMSZoneShaderSettings_CMSZoneShaderProperties(bool  isInitialized, ::UnityEngine::Color  groundFogColor, float_t  groundFogDepthFadeSize, ::UnityW<::UnityEngine::Transform>  groundFogHeightPlane, float_t  groundFogHeight, float_t  groundFogHeightFadeSize, int32_t  zoneLiquidType, int32_t  liquidShape, float_t  liquidShapeRadius, ::UnityW<::UnityEngine::Transform>  liquidBottomTransform, float_t  zoneLiquidUVScale, ::UnityEngine::Color  underwaterTintColor, ::UnityEngine::Color  underwaterFogColor, ::UnityEngine::Vector4  underwaterFogParams, ::UnityEngine::Vector4  underwaterCausticsParams, ::UnityW<::UnityEngine::Texture2D>  underwaterCausticsTexture, ::UnityEngine::Vector2  underwaterEffectsDistanceToSurfaceFade, ::UnityW<::UnityEngine::Texture2D>  liquidResidueTex, ::UnityW<::UnityEngine::Transform>  mainWaterSurfacePlane, float_t  zoneWeatherMapDissolveProgress) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{30884};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0xb0};

/// @brief Field isInitialized, offset: 0x0, size: 0x1, def value: None
 bool  isInitialized;

/// @brief Field groundFogColor, offset: 0x4, size: 0x10, def value: None
 ::UnityEngine::Color  groundFogColor;

/// @brief Field groundFogDepthFadeSize, offset: 0x14, size: 0x4, def value: None
 float_t  groundFogDepthFadeSize;

/// @brief Field groundFogHeightPlane, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  groundFogHeightPlane;

/// @brief Field groundFogHeight, offset: 0x20, size: 0x4, def value: None
 float_t  groundFogHeight;

/// @brief Field groundFogHeightFadeSize, offset: 0x24, size: 0x4, def value: None
 float_t  groundFogHeightFadeSize;

/// @brief Field zoneLiquidType, offset: 0x28, size: 0x4, def value: None
 int32_t  zoneLiquidType;

/// @brief Field liquidShape, offset: 0x2c, size: 0x4, def value: None
 int32_t  liquidShape;

/// @brief Field liquidShapeRadius, offset: 0x30, size: 0x4, def value: None
 float_t  liquidShapeRadius;

/// @brief Field liquidBottomTransform, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  liquidBottomTransform;

/// @brief Field zoneLiquidUVScale, offset: 0x40, size: 0x4, def value: None
 float_t  zoneLiquidUVScale;

/// @brief Field underwaterTintColor, offset: 0x44, size: 0x10, def value: None
 ::UnityEngine::Color  underwaterTintColor;

/// @brief Field underwaterFogColor, offset: 0x54, size: 0x10, def value: None
 ::UnityEngine::Color  underwaterFogColor;

/// @brief Field underwaterFogParams, offset: 0x64, size: 0x10, def value: None
 ::UnityEngine::Vector4  underwaterFogParams;

/// @brief Field underwaterCausticsParams, offset: 0x74, size: 0x10, def value: None
 ::UnityEngine::Vector4  underwaterCausticsParams;

/// @brief Field underwaterCausticsTexture, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  underwaterCausticsTexture;

/// @brief Field underwaterEffectsDistanceToSurfaceFade, offset: 0x90, size: 0x8, def value: None
 ::UnityEngine::Vector2  underwaterEffectsDistanceToSurfaceFade;

/// @brief Field liquidResidueTex, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  liquidResidueTex;

/// @brief Field mainWaterSurfacePlane, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Transform>  mainWaterSurfacePlane;

/// @brief Field zoneWeatherMapDissolveProgress, offset: 0xa8, size: 0x4, def value: None
 float_t  zoneWeatherMapDissolveProgress;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::CMSZoneShaderSettings_CMSZoneShaderProperties, isInitialized) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CMSZoneShaderSettings_CMSZoneShaderProperties, groundFogColor) == 0x4, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CMSZoneShaderSettings_CMSZoneShaderProperties, groundFogDepthFadeSize) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CMSZoneShaderSettings_CMSZoneShaderProperties, groundFogHeightPlane) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CMSZoneShaderSettings_CMSZoneShaderProperties, groundFogHeight) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CMSZoneShaderSettings_CMSZoneShaderProperties, groundFogHeightFadeSize) == 0x24, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CMSZoneShaderSettings_CMSZoneShaderProperties, zoneLiquidType) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CMSZoneShaderSettings_CMSZoneShaderProperties, liquidShape) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CMSZoneShaderSettings_CMSZoneShaderProperties, liquidShapeRadius) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CMSZoneShaderSettings_CMSZoneShaderProperties, liquidBottomTransform) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CMSZoneShaderSettings_CMSZoneShaderProperties, zoneLiquidUVScale) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CMSZoneShaderSettings_CMSZoneShaderProperties, underwaterTintColor) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CMSZoneShaderSettings_CMSZoneShaderProperties, underwaterFogColor) == 0x54, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CMSZoneShaderSettings_CMSZoneShaderProperties, underwaterFogParams) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CMSZoneShaderSettings_CMSZoneShaderProperties, underwaterCausticsParams) == 0x74, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CMSZoneShaderSettings_CMSZoneShaderProperties, underwaterCausticsTexture) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CMSZoneShaderSettings_CMSZoneShaderProperties, underwaterEffectsDistanceToSurfaceFade) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CMSZoneShaderSettings_CMSZoneShaderProperties, liquidResidueTex) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CMSZoneShaderSettings_CMSZoneShaderProperties, mainWaterSurfacePlane) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CMSZoneShaderSettings_CMSZoneShaderProperties, zoneWeatherMapDissolveProgress) == 0xa8, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::CMSZoneShaderSettings_CMSZoneShaderProperties) == 0xb0, "Size mismatch!");

} // namespace end def GlobalNamespace
