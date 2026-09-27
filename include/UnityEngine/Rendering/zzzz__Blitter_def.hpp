#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Blitter.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__LocalKeyword_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Blitter)
namespace GlobalNamespace {
struct Blitter_BlitColorAndDepthPassNames;
}
namespace GlobalNamespace {
struct Blitter_BlitShaderPassNames;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct TextureDesc;
}
namespace UnityEngine::Rendering {
class Blitter_BlitShaderIDs;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
class RTHandle;
}
namespace UnityEngine::Rendering {
class RasterCommandBuffer;
}
namespace UnityEngine::Rendering {
struct RenderBufferLoadAction;
}
namespace UnityEngine::Rendering {
struct RenderBufferStoreAction;
}
namespace UnityEngine::Rendering {
struct RenderTargetIdentifier;
}
namespace UnityEngine::Rendering {
struct TextureDimension;
}
namespace UnityEngine::Rendering {
class UnsafeCommandBuffer;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class Shader;
}
namespace UnityEngine {
class Texture;
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
namespace UnityEngine::Rendering {
class Blitter;
}
namespace UnityEngine::Rendering {
class Blitter_BlitShaderIDs;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::Blitter*);
MARK_REF_T(::UnityEngine::Rendering::Blitter_BlitShaderIDs*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Blitter*, "UnityEngine.Rendering", "Blitter");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Blitter_BlitShaderIDs*, "UnityEngine.Rendering", "Blitter/BlitShaderIDs");
// Dependencies System.Object, UnityEngine.Rendering.LocalKeyword
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.Blitter
class CORDL_TYPE Blitter : public ::System::Object {
public:
// Declarations
using BlitColorAndDepthPassNames = ::GlobalNamespace::Blitter_BlitColorAndDepthPassNames;

using BlitShaderPassNames = ::GlobalNamespace::Blitter_BlitShaderPassNames;

using BlitShaderIDs = ::UnityEngine::Rendering::Blitter_BlitShaderIDs;

/// @brief Field s_Blit, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Blit, put=setStaticF_s_Blit)) ::UnityW<::UnityEngine::Material>  s_Blit;

/// @brief Field s_BlitColorAndDepth, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_BlitColorAndDepth, put=setStaticF_s_BlitColorAndDepth)) ::UnityW<::UnityEngine::Material>  s_BlitColorAndDepth;

/// @brief Field s_BlitColorAndDepthShaderPassIndicesMap, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_BlitColorAndDepthShaderPassIndicesMap, put=setStaticF_s_BlitColorAndDepthShaderPassIndicesMap)) ::ArrayW<int32_t>  s_BlitColorAndDepthShaderPassIndicesMap;

/// @brief Field s_BlitShaderPassIndicesMap, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_BlitShaderPassIndicesMap, put=setStaticF_s_BlitShaderPassIndicesMap)) ::ArrayW<int32_t>  s_BlitShaderPassIndicesMap;

/// @brief Field s_BlitTexArray, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_BlitTexArray, put=setStaticF_s_BlitTexArray)) ::UnityW<::UnityEngine::Material>  s_BlitTexArray;

/// @brief Field s_BlitTexArraySingleSlice, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_BlitTexArraySingleSlice, put=setStaticF_s_BlitTexArraySingleSlice)) ::UnityW<::UnityEngine::Material>  s_BlitTexArraySingleSlice;

/// @brief Field s_Copy, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Copy, put=setStaticF_s_Copy)) ::UnityW<::UnityEngine::Material>  s_Copy;

/// @brief Field s_DecodeHdrKeyword, offset 0xffffffff, size 0x18 
 __declspec(property(get=getStaticF_s_DecodeHdrKeyword, put=setStaticF_s_DecodeHdrKeyword)) ::UnityEngine::Rendering::LocalKeyword  s_DecodeHdrKeyword;

/// @brief Field s_PropertyBlock, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_PropertyBlock, put=setStaticF_s_PropertyBlock)) ::UnityEngine::MaterialPropertyBlock*  s_PropertyBlock;

/// @brief Field s_QuadMesh, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_QuadMesh, put=setStaticF_s_QuadMesh)) ::UnityW<::UnityEngine::Mesh>  s_QuadMesh;

/// @brief Field s_TriangleMesh, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_TriangleMesh, put=setStaticF_s_TriangleMesh)) ::UnityW<::UnityEngine::Mesh>  s_TriangleMesh;

/// @brief Method BlitCameraTexture, addr 0xb18c9c0, size 0x194, virtual false, abstract: false, final false
static inline void BlitCameraTexture(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RTHandle*  source, ::UnityEngine::Rendering::RTHandle*  destination, ::UnityEngine::Rect  destViewport, float_t  mipLevel, bool  bilinear) ;

/// @brief Method BlitCameraTexture, addr 0xb18c740, size 0x184, virtual false, abstract: false, final false
static inline void BlitCameraTexture(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RTHandle*  source, ::UnityEngine::Rendering::RTHandle*  destination, ::UnityEngine::Rendering::RenderBufferLoadAction  loadAction, ::UnityEngine::Rendering::RenderBufferStoreAction  storeAction, ::UnityEngine::Material*  material, int32_t  pass) ;

/// @brief Method BlitCameraTexture, addr 0xb18c5ec, size 0x154, virtual false, abstract: false, final false
static inline void BlitCameraTexture(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RTHandle*  source, ::UnityEngine::Rendering::RTHandle*  destination, ::UnityEngine::Material*  material, int32_t  pass) ;

/// @brief Method BlitCameraTexture, addr 0xb18c344, size 0x154, virtual false, abstract: false, final false
static inline void BlitCameraTexture(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RTHandle*  source, ::UnityEngine::Rendering::RTHandle*  destination, float_t  mipLevel, bool  bilinear) ;

/// @brief Method BlitCameraTexture, addr 0xb18c8c4, size 0xfc, virtual false, abstract: false, final false
static inline void BlitCameraTexture(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RTHandle*  source, ::UnityEngine::Rendering::RTHandle*  destination, ::UnityEngine::Vector4  scaleBias, float_t  mipLevel, bool  bilinear) ;

/// @brief Method BlitCameraTexture2D, addr 0xb18c498, size 0x154, virtual false, abstract: false, final false
static inline void BlitCameraTexture2D(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RTHandle*  source, ::UnityEngine::Rendering::RTHandle*  destination, float_t  mipLevel, bool  bilinear) ;

/// @brief Method BlitColorAndDepth, addr 0xb18b8c4, size 0x200, virtual false, abstract: false, final false
static inline void BlitColorAndDepth(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Texture*  sourceColor, ::UnityEngine::RenderTexture*  sourceDepth, ::UnityEngine::Vector4  scaleBias, float_t  mipLevel, bool  blitDepth) ;

/// @brief Method BlitColorAndDepth, addr 0xb18b804, size 0xc0, virtual false, abstract: false, final false
static inline void BlitColorAndDepth(::UnityEngine::Rendering::RasterCommandBuffer*  cmd, ::UnityEngine::Texture*  sourceColor, ::UnityEngine::RenderTexture*  sourceDepth, ::UnityEngine::Vector4  scaleBias, float_t  mipLevel, bool  blitDepth) ;

/// @brief Method BlitCubeToOctahedral2DQuad, addr 0xb183c20, size 0x1b8, virtual false, abstract: false, final false
static inline void BlitCubeToOctahedral2DQuad(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Texture*  source, ::UnityEngine::Vector4  scaleBiasRT, int32_t  mipLevelTex) ;

/// @brief Method BlitCubeToOctahedral2DQuadSingleChannel, addr 0xb18408c, size 0x294, virtual false, abstract: false, final false
static inline void BlitCubeToOctahedral2DQuadSingleChannel(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Texture*  source, ::UnityEngine::Vector4  scaleBiasRT, int32_t  mipLevelTex) ;

/// @brief Method BlitCubeToOctahedral2DQuadWithPadding, addr 0xb18cb54, size 0x348, virtual false, abstract: false, final false
static inline void BlitCubeToOctahedral2DQuadWithPadding(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Texture*  source, ::UnityEngine::Vector2  textureSize, ::UnityEngine::Vector4  scaleBiasRT, int32_t  mipLevelTex, bool  bilinear, int32_t  paddingInPixels, ::System::Nullable_1<::UnityEngine::Vector4>  decodeInstructions) ;

/// @brief Method BlitOctahedralWithPadding, addr 0xb17bcec, size 0x238, virtual false, abstract: false, final false
static inline void BlitOctahedralWithPadding(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Texture*  source, ::UnityEngine::Vector2  textureSize, ::UnityEngine::Vector4  scaleBiasTex, ::UnityEngine::Vector4  scaleBiasRT, int32_t  mipLevelTex, bool  bilinear, int32_t  paddingInPixels) ;

/// @brief Method BlitOctahedralWithPaddingMultiply, addr 0xb17bf24, size 0x238, virtual false, abstract: false, final false
static inline void BlitOctahedralWithPaddingMultiply(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Texture*  source, ::UnityEngine::Vector2  textureSize, ::UnityEngine::Vector4  scaleBiasTex, ::UnityEngine::Vector4  scaleBiasRT, int32_t  mipLevelTex, bool  bilinear, int32_t  paddingInPixels) ;

/// @brief Method BlitQuad, addr 0xb183554, size 0x200, virtual false, abstract: false, final false
static inline void BlitQuad(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Texture*  source, ::UnityEngine::Vector4  scaleBiasTex, ::UnityEngine::Vector4  scaleBiasRT, int32_t  mipLevelTex, bool  bilinear) ;

/// @brief Method BlitQuadSingleChannel, addr 0xb183dd8, size 0x2b4, virtual false, abstract: false, final false
static inline void BlitQuadSingleChannel(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Texture*  source, ::UnityEngine::Vector4  scaleBiasTex, ::UnityEngine::Vector4  scaleBiasRT, int32_t  mipLevelTex) ;

/// @brief Method BlitQuadWithPadding, addr 0xb17b774, size 0x2bc, virtual false, abstract: false, final false
static inline void BlitQuadWithPadding(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Texture*  source, ::UnityEngine::Vector2  textureSize, ::UnityEngine::Vector4  scaleBiasTex, ::UnityEngine::Vector4  scaleBiasRT, int32_t  mipLevelTex, bool  bilinear, int32_t  paddingInPixels) ;

/// @brief Method BlitQuadWithPaddingMultiply, addr 0xb17ba30, size 0x2bc, virtual false, abstract: false, final false
static inline void BlitQuadWithPaddingMultiply(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Texture*  source, ::UnityEngine::Vector2  textureSize, ::UnityEngine::Vector4  scaleBiasTex, ::UnityEngine::Vector4  scaleBiasRT, int32_t  mipLevelTex, bool  bilinear, int32_t  paddingInPixels) ;

/// @brief Method BlitTexture, addr 0xb18c164, size 0xf0, virtual false, abstract: false, final false
static inline void BlitTexture(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Vector4  scaleBias, ::UnityEngine::Material*  material, int32_t  pass) ;

/// @brief Method BlitTexture, addr 0xb18b284, size 0x134, virtual false, abstract: false, final false
static inline void BlitTexture(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RTHandle*  source, ::UnityEngine::Vector4  scaleBias, ::UnityEngine::Material*  material, int32_t  pass) ;

/// @brief Method BlitTexture, addr 0xb18b140, size 0x144, virtual false, abstract: false, final false
static inline void BlitTexture(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RTHandle*  source, ::UnityEngine::Vector4  scaleBias, ::UnityEngine::Material*  material, int32_t  pass, float_t  sourceMipLevel, int32_t  sourceDepthSlice) ;

/// @brief Method BlitTexture, addr 0xb18b470, size 0x180, virtual false, abstract: false, final false
static inline void BlitTexture(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RTHandle*  source, ::UnityEngine::Vector4  scaleBias, float_t  mipLevel, bool  bilinear) ;

/// @brief Method BlitTexture, addr 0xb18b02c, size 0x114, virtual false, abstract: false, final false
static inline void BlitTexture(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RTHandle*  source, ::UnityEngine::Vector4  scaleBias, float_t  sourceMipLevel, int32_t  sourceDepthSlice, bool  bilinear) ;

/// @brief Method BlitTexture, addr 0xb18bfc4, size 0x1a0, virtual false, abstract: false, final false
static inline void BlitTexture(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RenderTargetIdentifier  source, ::UnityEngine::Rendering::RenderTargetIdentifier  destination, ::UnityEngine::Rendering::RenderBufferLoadAction  loadAction, ::UnityEngine::Rendering::RenderBufferStoreAction  storeAction, ::UnityEngine::Material*  material, int32_t  pass) ;

/// @brief Method BlitTexture, addr 0xb18be3c, size 0x188, virtual false, abstract: false, final false
static inline void BlitTexture(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RenderTargetIdentifier  source, ::UnityEngine::Rendering::RenderTargetIdentifier  destination, ::UnityEngine::Material*  material, int32_t  pass) ;

/// @brief Method BlitTexture, addr 0xb18bcf0, size 0x14c, virtual false, abstract: false, final false
static inline void BlitTexture(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RenderTargetIdentifier  source, ::UnityEngine::Vector4  scaleBias, ::UnityEngine::Material*  material, int32_t  pass) ;

/// @brief Method BlitTexture, addr 0xb18c254, size 0xf0, virtual false, abstract: false, final false
static inline void BlitTexture(::UnityEngine::Rendering::RasterCommandBuffer*  cmd, ::UnityEngine::Vector4  scaleBias, ::UnityEngine::Material*  material, int32_t  pass) ;

/// @brief Method BlitTexture, addr 0xb18bac4, size 0xb0, virtual false, abstract: false, final false
static inline void BlitTexture(::UnityEngine::Rendering::RasterCommandBuffer*  cmd, ::UnityEngine::Rendering::RTHandle*  source, ::UnityEngine::Vector4  scaleBias, ::UnityEngine::Material*  material, int32_t  pass) ;

/// @brief Method BlitTexture, addr 0xb18b3b8, size 0xb8, virtual false, abstract: false, final false
static inline void BlitTexture(::UnityEngine::Rendering::RasterCommandBuffer*  cmd, ::UnityEngine::Rendering::RTHandle*  source, ::UnityEngine::Vector4  scaleBias, float_t  mipLevel, bool  bilinear) ;

/// @brief Method BlitTexture, addr 0xb18bc24, size 0xcc, virtual false, abstract: false, final false
static inline void BlitTexture(::UnityEngine::Rendering::RasterCommandBuffer*  cmd, ::UnityEngine::Rendering::RenderTargetIdentifier  source, ::UnityEngine::Vector4  scaleBias, ::UnityEngine::Material*  material, int32_t  pass) ;

/// @brief Method BlitTexture, addr 0xb18bb74, size 0xb0, virtual false, abstract: false, final false
static inline void BlitTexture(::UnityEngine::Rendering::UnsafeCommandBuffer*  cmd, ::UnityEngine::Rendering::RTHandle*  source, ::UnityEngine::Vector4  scaleBias, ::UnityEngine::Material*  material, int32_t  pass) ;

/// @brief Method BlitTexture2D, addr 0xb18b6a8, size 0x15c, virtual false, abstract: false, final false
static inline void BlitTexture2D(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RTHandle*  source, ::UnityEngine::Vector4  scaleBias, float_t  mipLevel, bool  bilinear) ;

/// @brief Method BlitTexture2D, addr 0xb18b5f0, size 0xb8, virtual false, abstract: false, final false
static inline void BlitTexture2D(::UnityEngine::Rendering::RasterCommandBuffer*  cmd, ::UnityEngine::Rendering::RTHandle*  source, ::UnityEngine::Vector4  scaleBias, float_t  mipLevel, bool  bilinear) ;

/// @brief Method CanCopyMSAA, addr 0xb18ae0c, size 0x80, virtual false, abstract: false, final false
static inline bool CanCopyMSAA() ;

/// @brief Method CanCopyMSAA, addr 0xb18ae8c, size 0xb0, virtual false, abstract: false, final false
static inline bool CanCopyMSAA(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>  sourceDesc) ;

/// @brief Method Cleanup, addr 0xb18a5dc, size 0x194, virtual false, abstract: false, final false
static inline void Cleanup() ;

/// @brief Method CopyTexture, addr 0xb18af3c, size 0xf0, virtual false, abstract: false, final false
static inline void CopyTexture(::UnityEngine::Rendering::RasterCommandBuffer*  cmd, bool  isMSAA, bool  force2DForXR) ;

/// @brief Method DrawQuad, addr 0xb18ad94, size 0x78, virtual false, abstract: false, final false
static inline void DrawQuad(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Material*  material, int32_t  shaderPass) ;

/// @brief Method DrawQuad, addr 0xb18ac28, size 0x16c, virtual false, abstract: false, final false
static inline void DrawQuad(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::MaterialPropertyBlock*  propertyBlock) ;

/// @brief Method DrawQuad, addr 0xb18aba8, size 0x80, virtual false, abstract: false, final false
static inline void DrawQuad(::UnityEngine::Rendering::RasterCommandBuffer*  cmd, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::MaterialPropertyBlock*  propertyBlock) ;

/// @brief Method DrawQuadMesh, addr 0xb18aabc, size 0xec, virtual false, abstract: false, final false
static inline void DrawQuadMesh(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::MaterialPropertyBlock*  propertyBlock) ;

/// @brief Method DrawTriangle, addr 0xb18a8d8, size 0x78, virtual false, abstract: false, final false
static inline void DrawTriangle(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Material*  material, int32_t  shaderPass) ;

/// @brief Method DrawTriangle, addr 0xb18a950, size 0x16c, virtual false, abstract: false, final false
static inline void DrawTriangle(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::MaterialPropertyBlock*  propertyBlock) ;

/// @brief Method DrawTriangle, addr 0xb18a860, size 0x78, virtual false, abstract: false, final false
static inline void DrawTriangle(::UnityEngine::Rendering::RasterCommandBuffer*  cmd, ::UnityEngine::Material*  material, int32_t  shaderPass) ;

/// @brief Method GetBlitMaterial, addr 0xb18a770, size 0xf0, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Material> GetBlitMaterial(::UnityEngine::Rendering::TextureDimension  dimension, bool  singleSlice) ;

/// @brief Method Initialize, addr 0xb189af0, size 0x80c, virtual false, abstract: false, final false
static inline void Initialize(::UnityEngine::Shader*  blitPS, ::UnityEngine::Shader*  blitColorAndDepthPS) ;

/// [CompilerGenerated]
/// @brief Method <Initialize>g__GetFullScreenTriangleTexCoord|14_1, addr 0xb18a3ac, size 0xd4, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::Vector2> _Initialize_g__GetFullScreenTriangleTexCoord_14_1() ;

/// [CompilerGenerated]
/// @brief Method <Initialize>g__GetFullScreenTriangleVertexPosition|14_0, addr 0xb18a2fc, size 0xb0, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::Vector3> _Initialize_g__GetFullScreenTriangleVertexPosition_14_0(float_t  z) ;

/// [CompilerGenerated]
/// @brief Method <Initialize>g__GetQuadTexCoord|14_3, addr 0xb18a524, size 0xb8, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::Vector2> _Initialize_g__GetQuadTexCoord_14_3() ;

/// [CompilerGenerated]
/// @brief Method <Initialize>g__GetQuadVertexPosition|14_2, addr 0xb18a480, size 0xa4, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::Vector3> _Initialize_g__GetQuadVertexPosition_14_2(float_t  z) ;

static inline ::UnityW<::UnityEngine::Material> getStaticF_s_Blit() ;

static inline ::UnityW<::UnityEngine::Material> getStaticF_s_BlitColorAndDepth() ;

static inline ::ArrayW<int32_t> getStaticF_s_BlitColorAndDepthShaderPassIndicesMap() ;

static inline ::ArrayW<int32_t> getStaticF_s_BlitShaderPassIndicesMap() ;

static inline ::UnityW<::UnityEngine::Material> getStaticF_s_BlitTexArray() ;

static inline ::UnityW<::UnityEngine::Material> getStaticF_s_BlitTexArraySingleSlice() ;

static inline ::UnityW<::UnityEngine::Material> getStaticF_s_Copy() ;

static inline ::UnityEngine::Rendering::LocalKeyword getStaticF_s_DecodeHdrKeyword() ;

static inline ::UnityEngine::MaterialPropertyBlock* getStaticF_s_PropertyBlock() ;

static inline ::UnityW<::UnityEngine::Mesh> getStaticF_s_QuadMesh() ;

static inline ::UnityW<::UnityEngine::Mesh> getStaticF_s_TriangleMesh() ;

static inline void setStaticF_s_Blit(::UnityW<::UnityEngine::Material>  value) ;

static inline void setStaticF_s_BlitColorAndDepth(::UnityW<::UnityEngine::Material>  value) ;

static inline void setStaticF_s_BlitColorAndDepthShaderPassIndicesMap(::ArrayW<int32_t>  value) ;

static inline void setStaticF_s_BlitShaderPassIndicesMap(::ArrayW<int32_t>  value) ;

static inline void setStaticF_s_BlitTexArray(::UnityW<::UnityEngine::Material>  value) ;

static inline void setStaticF_s_BlitTexArraySingleSlice(::UnityW<::UnityEngine::Material>  value) ;

static inline void setStaticF_s_Copy(::UnityW<::UnityEngine::Material>  value) ;

static inline void setStaticF_s_DecodeHdrKeyword(::UnityEngine::Rendering::LocalKeyword  value) ;

static inline void setStaticF_s_PropertyBlock(::UnityEngine::MaterialPropertyBlock*  value) ;

static inline void setStaticF_s_QuadMesh(::UnityW<::UnityEngine::Mesh>  value) ;

static inline void setStaticF_s_TriangleMesh(::UnityW<::UnityEngine::Mesh>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Blitter() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Blitter", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Blitter(Blitter && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Blitter", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Blitter(Blitter const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16994};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::Blitter) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.Blitter/BlitShaderIDs
class CORDL_TYPE Blitter_BlitShaderIDs : public ::System::Object {
public:
// Declarations
/// @brief Field _BlitCubeTexture, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__BlitCubeTexture, put=setStaticF__BlitCubeTexture)) int32_t  _BlitCubeTexture;

/// @brief Field _BlitDecodeInstructions, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__BlitDecodeInstructions, put=setStaticF__BlitDecodeInstructions)) int32_t  _BlitDecodeInstructions;

/// @brief Field _BlitMipLevel, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__BlitMipLevel, put=setStaticF__BlitMipLevel)) int32_t  _BlitMipLevel;

/// @brief Field _BlitPaddingSize, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__BlitPaddingSize, put=setStaticF__BlitPaddingSize)) int32_t  _BlitPaddingSize;

/// @brief Field _BlitScaleBias, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__BlitScaleBias, put=setStaticF__BlitScaleBias)) int32_t  _BlitScaleBias;

/// @brief Field _BlitScaleBiasRt, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__BlitScaleBiasRt, put=setStaticF__BlitScaleBiasRt)) int32_t  _BlitScaleBiasRt;

/// @brief Field _BlitTexArraySlice, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__BlitTexArraySlice, put=setStaticF__BlitTexArraySlice)) int32_t  _BlitTexArraySlice;

/// @brief Field _BlitTexture, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__BlitTexture, put=setStaticF__BlitTexture)) int32_t  _BlitTexture;

/// @brief Field _BlitTextureSize, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__BlitTextureSize, put=setStaticF__BlitTextureSize)) int32_t  _BlitTextureSize;

/// @brief Field _InputDepth, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__InputDepth, put=setStaticF__InputDepth)) int32_t  _InputDepth;

static inline int32_t getStaticF__BlitCubeTexture() ;

static inline int32_t getStaticF__BlitDecodeInstructions() ;

static inline int32_t getStaticF__BlitMipLevel() ;

static inline int32_t getStaticF__BlitPaddingSize() ;

static inline int32_t getStaticF__BlitScaleBias() ;

static inline int32_t getStaticF__BlitScaleBiasRt() ;

static inline int32_t getStaticF__BlitTexArraySlice() ;

static inline int32_t getStaticF__BlitTexture() ;

static inline int32_t getStaticF__BlitTextureSize() ;

static inline int32_t getStaticF__InputDepth() ;

static inline void setStaticF__BlitCubeTexture(int32_t  value) ;

static inline void setStaticF__BlitDecodeInstructions(int32_t  value) ;

static inline void setStaticF__BlitMipLevel(int32_t  value) ;

static inline void setStaticF__BlitPaddingSize(int32_t  value) ;

static inline void setStaticF__BlitScaleBias(int32_t  value) ;

static inline void setStaticF__BlitScaleBiasRt(int32_t  value) ;

static inline void setStaticF__BlitTexArraySlice(int32_t  value) ;

static inline void setStaticF__BlitTexture(int32_t  value) ;

static inline void setStaticF__BlitTextureSize(int32_t  value) ;

static inline void setStaticF__InputDepth(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Blitter_BlitShaderIDs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Blitter_BlitShaderIDs", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Blitter_BlitShaderIDs(Blitter_BlitShaderIDs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Blitter_BlitShaderIDs", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Blitter_BlitShaderIDs(Blitter_BlitShaderIDs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16991};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::Blitter_BlitShaderIDs) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
