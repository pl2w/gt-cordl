#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/RenderGraphModule/Util/RenderGraphUtils_BlitMaterialParameters.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/RenderGraphModule/Util/zzzz__RenderGraphUtils_FullScreenGeometryType_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(RenderGraphUtils_BlitMaterialParameters)
namespace GlobalNamespace {
struct RenderGraphUtils_FullScreenGeometryType;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct TextureHandle;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace GlobalNamespace {
struct RenderGraphUtils_BlitMaterialParameters;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::RenderGraphUtils_BlitMaterialParameters);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::RenderGraphUtils_BlitMaterialParameters, "UnityEngine.Rendering.RenderGraphModule.Util", "RenderGraphUtils/BlitMaterialParameters");
// Dependencies UnityEngine.Rendering.RenderGraphModule.TextureHandle, UnityEngine.Rendering.RenderGraphModule.Util.RenderGraphUtils::FullScreenGeometryType, UnityEngine.Vector2
namespace GlobalNamespace {
// Is value type: true
// CS Name: UnityEngine.Rendering.RenderGraphModule.Util.RenderGraphUtils/BlitMaterialParameters
struct CORDL_TYPE RenderGraphUtils_BlitMaterialParameters {
public:
// Declarations
/// @brief Field blitMipProperty, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_blitMipProperty, put=setStaticF_blitMipProperty)) int32_t  blitMipProperty;

/// @brief Field blitScaleBias, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_blitScaleBias, put=setStaticF_blitScaleBias)) int32_t  blitScaleBias;

/// @brief Field blitSliceProperty, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_blitSliceProperty, put=setStaticF_blitSliceProperty)) int32_t  blitSliceProperty;

/// @brief Field blitTextureProperty, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_blitTextureProperty, put=setStaticF_blitTextureProperty)) int32_t  blitTextureProperty;

/// @brief Method .ctor, addr 0xb1c5c24, size 0x120, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Rendering::RenderGraphModule::TextureHandle  source, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  destination, ::UnityEngine::Material*  material, int32_t  shaderPass) ;

/// @brief Method .ctor, addr 0xb1c5e48, size 0x17c, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Rendering::RenderGraphModule::TextureHandle  source, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  destination, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::MaterialPropertyBlock*  mpb, int32_t  destinationSlice, int32_t  destinationMip, int32_t  numSlices, int32_t  numMips, int32_t  sourceSlice, int32_t  sourceMip, ::GlobalNamespace::RenderGraphUtils_FullScreenGeometryType  geometry, int32_t  sourceTexturePropertyID, int32_t  sourceSlicePropertyID, int32_t  sourceMipPropertyID) ;

/// @brief Method .ctor, addr 0xb1c6160, size 0x15c, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Rendering::RenderGraphModule::TextureHandle  source, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  destination, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::MaterialPropertyBlock*  mpb, ::GlobalNamespace::RenderGraphUtils_FullScreenGeometryType  geometry, int32_t  sourceTexturePropertyID, int32_t  sourceSlicePropertyID, int32_t  sourceMipPropertyID) ;

/// @brief Method .ctor, addr 0xb1c5d44, size 0x104, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Rendering::RenderGraphModule::TextureHandle  source, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  destination, ::UnityEngine::Vector2  scale, ::UnityEngine::Vector2  offset, ::UnityEngine::Material*  material, int32_t  shaderPass) ;

/// @brief Method .ctor, addr 0xb1c5fc4, size 0x19c, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Rendering::RenderGraphModule::TextureHandle  source, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  destination, ::UnityEngine::Vector2  scale, ::UnityEngine::Vector2  offset, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::MaterialPropertyBlock*  mpb, int32_t  destinationSlice, int32_t  destinationMip, int32_t  numSlices, int32_t  numMips, int32_t  sourceSlice, int32_t  sourceMip, ::GlobalNamespace::RenderGraphUtils_FullScreenGeometryType  geometry, int32_t  sourceTexturePropertyID, int32_t  sourceSlicePropertyID, int32_t  sourceMipPropertyID, int32_t  scaleBiasPropertyID) ;

/// @brief Method .ctor, addr 0xb1c62bc, size 0x134, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Rendering::RenderGraphModule::TextureHandle  source, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  destination, ::UnityEngine::Vector2  scale, ::UnityEngine::Vector2  offset, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::MaterialPropertyBlock*  mpb, ::GlobalNamespace::RenderGraphUtils_FullScreenGeometryType  geometry, int32_t  sourceTexturePropertyID, int32_t  sourceSlicePropertyID, int32_t  sourceMipPropertyID, int32_t  scaleBiasPropertyID) ;

static inline int32_t getStaticF_blitMipProperty() ;

static inline int32_t getStaticF_blitScaleBias() ;

static inline int32_t getStaticF_blitSliceProperty() ;

static inline int32_t getStaticF_blitTextureProperty() ;

static inline void setStaticF_blitMipProperty(int32_t  value) ;

static inline void setStaticF_blitScaleBias(int32_t  value) ;

static inline void setStaticF_blitSliceProperty(int32_t  value) ;

static inline void setStaticF_blitTextureProperty(int32_t  value) ;

// Ctor Parameters []
// @brief default ctor
constexpr RenderGraphUtils_BlitMaterialParameters() ;

// Ctor Parameters [CppParam { name: "source", ty: "::UnityEngine::Rendering::RenderGraphModule::TextureHandle", modifiers: "", def_value: None, comment: None }, CppParam { name: "destination", ty: "::UnityEngine::Rendering::RenderGraphModule::TextureHandle", modifiers: "", def_value: None, comment: None }, CppParam { name: "scale", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None, comment: None }, CppParam { name: "offset", ty: "::UnityEngine::Vector2", modifiers: "", def_value: None, comment: None }, CppParam { name: "sourceSlice", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "destinationSlice", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "numSlices", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "sourceMip", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "destinationMip", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "numMips", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "material", ty: "::UnityW<::UnityEngine::Material>", modifiers: "", def_value: None, comment: None }, CppParam { name: "shaderPass", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "propertyBlock", ty: "::UnityEngine::MaterialPropertyBlock*", modifiers: "", def_value: None, comment: None }, CppParam { name: "sourceTexturePropertyID", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "sourceSlicePropertyID", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "sourceMipPropertyID", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "scaleBiasPropertyID", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "geometry", ty: "::GlobalNamespace::RenderGraphUtils_FullScreenGeometryType", modifiers: "", def_value: None, comment: None }]
constexpr RenderGraphUtils_BlitMaterialParameters(::UnityEngine::Rendering::RenderGraphModule::TextureHandle  source, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  destination, ::UnityEngine::Vector2  scale, ::UnityEngine::Vector2  offset, int32_t  sourceSlice, int32_t  destinationSlice, int32_t  numSlices, int32_t  sourceMip, int32_t  destinationMip, int32_t  numMips, ::UnityW<::UnityEngine::Material>  material, int32_t  shaderPass, ::UnityEngine::MaterialPropertyBlock*  propertyBlock, int32_t  sourceTexturePropertyID, int32_t  sourceSlicePropertyID, int32_t  sourceMipPropertyID, int32_t  scaleBiasPropertyID, ::GlobalNamespace::RenderGraphUtils_FullScreenGeometryType  geometry) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17213};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x78};

/// @brief Field source, offset: 0x0, size: 0x10, def value: None
 ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  source;

/// @brief Field destination, offset: 0x10, size: 0x10, def value: None
 ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  destination;

/// @brief Field scale, offset: 0x20, size: 0x8, def value: None
 ::UnityEngine::Vector2  scale;

/// @brief Field offset, offset: 0x28, size: 0x8, def value: None
 ::UnityEngine::Vector2  offset;

/// @brief Field sourceSlice, offset: 0x30, size: 0x4, def value: None
 int32_t  sourceSlice;

/// @brief Field destinationSlice, offset: 0x34, size: 0x4, def value: None
 int32_t  destinationSlice;

/// @brief Field numSlices, offset: 0x38, size: 0x4, def value: None
 int32_t  numSlices;

/// @brief Field sourceMip, offset: 0x3c, size: 0x4, def value: None
 int32_t  sourceMip;

/// @brief Field destinationMip, offset: 0x40, size: 0x4, def value: None
 int32_t  destinationMip;

/// @brief Field numMips, offset: 0x44, size: 0x4, def value: None
 int32_t  numMips;

/// @brief Field material, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  material;

/// @brief Field shaderPass, offset: 0x50, size: 0x4, def value: None
 int32_t  shaderPass;

/// @brief Field propertyBlock, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::MaterialPropertyBlock*  propertyBlock;

/// @brief Field sourceTexturePropertyID, offset: 0x60, size: 0x4, def value: None
 int32_t  sourceTexturePropertyID;

/// @brief Field sourceSlicePropertyID, offset: 0x64, size: 0x4, def value: None
 int32_t  sourceSlicePropertyID;

/// @brief Field sourceMipPropertyID, offset: 0x68, size: 0x4, def value: None
 int32_t  sourceMipPropertyID;

/// @brief Field scaleBiasPropertyID, offset: 0x6c, size: 0x4, def value: None
 int32_t  scaleBiasPropertyID;

/// @brief Field geometry, offset: 0x70, size: 0x4, def value: None
 ::GlobalNamespace::RenderGraphUtils_FullScreenGeometryType  geometry;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::RenderGraphUtils_BlitMaterialParameters, source) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RenderGraphUtils_BlitMaterialParameters, destination) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RenderGraphUtils_BlitMaterialParameters, scale) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RenderGraphUtils_BlitMaterialParameters, offset) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RenderGraphUtils_BlitMaterialParameters, sourceSlice) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RenderGraphUtils_BlitMaterialParameters, destinationSlice) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RenderGraphUtils_BlitMaterialParameters, numSlices) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RenderGraphUtils_BlitMaterialParameters, sourceMip) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RenderGraphUtils_BlitMaterialParameters, destinationMip) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RenderGraphUtils_BlitMaterialParameters, numMips) == 0x44, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RenderGraphUtils_BlitMaterialParameters, material) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RenderGraphUtils_BlitMaterialParameters, shaderPass) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RenderGraphUtils_BlitMaterialParameters, propertyBlock) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RenderGraphUtils_BlitMaterialParameters, sourceTexturePropertyID) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RenderGraphUtils_BlitMaterialParameters, sourceSlicePropertyID) == 0x64, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RenderGraphUtils_BlitMaterialParameters, sourceMipPropertyID) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RenderGraphUtils_BlitMaterialParameters, scaleBiasPropertyID) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::RenderGraphUtils_BlitMaterialParameters, geometry) == 0x70, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::RenderGraphUtils_BlitMaterialParameters) == 0x78, "Size mismatch!");

} // namespace end def GlobalNamespace
