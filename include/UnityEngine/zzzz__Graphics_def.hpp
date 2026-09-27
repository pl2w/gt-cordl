#pragma once
// IWYU pragma private; include "UnityEngine/Graphics.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Graphics)
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
struct IntPtr;
}
namespace System {
class Type;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
struct GraphicsTier;
}
namespace UnityEngine::Rendering {
struct LightProbeUsage;
}
namespace UnityEngine::Rendering {
struct OpenGLESVersion;
}
namespace UnityEngine::Rendering {
struct RenderBufferLoadAction;
}
namespace UnityEngine::Rendering {
struct RenderBufferStoreAction;
}
namespace UnityEngine::Rendering {
struct ShadowCastingMode;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class ComputeBuffer;
}
namespace UnityEngine {
struct CubemapFace;
}
namespace UnityEngine {
class GraphicsBuffer;
}
namespace UnityEngine {
struct Internal_DrawTextureArguments;
}
namespace UnityEngine {
class LightProbeProxyVolume;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
struct Matrix4x4;
}
namespace UnityEngine {
struct MeshTopology;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct Quaternion;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct RenderBuffer;
}
namespace UnityEngine {
struct RenderInstancedDataLayout;
}
namespace UnityEngine {
struct RenderParams;
}
namespace UnityEngine {
struct RenderTargetSetup;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine {
class Graphics;
}
// Write type traits
MARK_REF_T(::UnityEngine::Graphics*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Graphics*, "UnityEngine", "Graphics");
// [NativeHeader("Runtime/Graphics/GraphicsScriptBindings.h")]
// [NativeHeader("Runtime/Misc/PlayerSettings.h")]
// [NativeHeader("Runtime/Shaders/ComputeShader.h")]
// [NativeHeader("Runtime/Graphics/ColorGamut.h")]
// [NativeHeader("Runtime/Graphics/CopyTexture.h")]
// [NativeHeader("Runtime/Camera/LightProbeProxyVolume.h")]
// Dependencies System.Object
namespace UnityEngine {
// Is value type: false
// CS Name: UnityEngine.Graphics
class CORDL_TYPE Graphics : public ::System::Object {
public:
// Declarations
/// @brief Field kMaxDrawMeshInstanceCount, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_kMaxDrawMeshInstanceCount, put=setStaticF_kMaxDrawMeshInstanceCount)) int32_t  kMaxDrawMeshInstanceCount;

/// @brief Field s_RenderInstancedDataLayouts, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_RenderInstancedDataLayouts, put=setStaticF_s_RenderInstancedDataLayouts)) ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::RenderInstancedDataLayout>*  s_RenderInstancedDataLayouts;

/// @brief Method Blit, addr 0xb57f86c, size 0x64, virtual false, abstract: false, final false
static inline void Blit(::UnityEngine::Texture*  source, ::UnityEngine::RenderTexture*  dest) ;

/// @brief Method Blit, addr 0xb57f8d0, size 0x94, virtual false, abstract: false, final false
static inline void Blit(::UnityEngine::Texture*  source, ::UnityEngine::RenderTexture*  dest, ::UnityEngine::Vector2  scale, ::UnityEngine::Vector2  offset) ;

/// [FreeFunction("GraphicsScripting::Blit")]
/// @brief Method Blit2, addr 0xb57d6f8, size 0xdc, virtual false, abstract: false, final false
static inline void Blit2(::UnityEngine::Texture*  source, ::UnityEngine::RenderTexture*  dest) ;

/// @brief Method Blit2_Injected, addr 0xb57d7d4, size 0x44, virtual false, abstract: false, final false
static inline void Blit2_Injected(::System::IntPtr  source, ::System::IntPtr  dest) ;

/// [FreeFunction("GraphicsScripting::Blit")]
/// @brief Method Blit4, addr 0xb57d818, size 0xf8, virtual false, abstract: false, final false
static inline void Blit4(::UnityEngine::Texture*  source, ::UnityEngine::RenderTexture*  dest, ::UnityEngine::Vector2  scale, ::UnityEngine::Vector2  offset) ;

/// @brief Method Blit4_Injected, addr 0xb57d910, size 0x5c, virtual false, abstract: false, final false
static inline void Blit4_Injected(::System::IntPtr  source, ::System::IntPtr  dest, ::by_ref<::UnityEngine::Vector2>  scale, ::by_ref<::UnityEngine::Vector2>  offset) ;

/// @brief Method CheckLoadActionValid, addr 0xb57da68, size 0x6c, virtual false, abstract: false, final false
static inline void CheckLoadActionValid(::UnityEngine::Rendering::RenderBufferLoadAction  load, ::StringW  bufferType) ;

/// @brief Method CheckStoreActionValid, addr 0xb57dad4, size 0x70, virtual false, abstract: false, final false
static inline void CheckStoreActionValid(::UnityEngine::Rendering::RenderBufferStoreAction  store, ::StringW  bufferType) ;

/// [StaticAccessor("GetGfxDevice()", (UnityEngine.Bindings.StaticAccessorType)0)]
/// @brief Method ClearRandomWriteTargets, addr 0xb57c438, size 0x28, virtual false, abstract: false, final false
static inline void ClearRandomWriteTargets() ;

/// @brief Method CopyTexture, addr 0xb57e0a0, size 0x7c, virtual false, abstract: false, final false
static inline void CopyTexture(::UnityEngine::Texture*  src, int32_t  srcElement, ::UnityEngine::Texture*  dst, int32_t  dstElement) ;

/// @brief Method CopyTexture, addr 0xb57e11c, size 0x94, virtual false, abstract: false, final false
static inline void CopyTexture(::UnityEngine::Texture*  src, int32_t  srcElement, int32_t  srcMip, ::UnityEngine::Texture*  dst, int32_t  dstElement, int32_t  dstMip) ;

/// @brief Method CopyTexture, addr 0xb57e1b0, size 0x118, virtual false, abstract: false, final false
static inline void CopyTexture(::UnityEngine::Texture*  src, int32_t  srcElement, int32_t  srcMip, int32_t  srcX, int32_t  srcY, int32_t  srcWidth, int32_t  srcHeight, ::UnityEngine::Texture*  dst, int32_t  dstElement, int32_t  dstMip, int32_t  dstX, int32_t  dstY) ;

/// [FreeFunction("CopyTextureRegion")]
/// @brief Method CopyTexture_Region, addr 0xb57c708, size 0x130, virtual false, abstract: false, final false
static inline void CopyTexture_Region(::UnityEngine::Texture*  src, int32_t  srcElement, int32_t  srcMip, int32_t  srcX, int32_t  srcY, int32_t  srcWidth, int32_t  srcHeight, ::UnityEngine::Texture*  dst, int32_t  dstElement, int32_t  dstMip, int32_t  dstX, int32_t  dstY) ;

/// @brief Method CopyTexture_Region_Injected, addr 0xb57c838, size 0xc0, virtual false, abstract: false, final false
static inline void CopyTexture_Region_Injected(::System::IntPtr  src, int32_t  srcElement, int32_t  srcMip, int32_t  srcX, int32_t  srcY, int32_t  srcWidth, int32_t  srcHeight, ::System::IntPtr  dst, int32_t  dstElement, int32_t  dstMip, int32_t  dstX, int32_t  dstY) ;

/// [FreeFunction("CopyTexture")]
/// @brief Method CopyTexture_Slice, addr 0xb57c59c, size 0xf8, virtual false, abstract: false, final false
static inline void CopyTexture_Slice(::UnityEngine::Texture*  src, int32_t  srcElement, int32_t  srcMip, ::UnityEngine::Texture*  dst, int32_t  dstElement, int32_t  dstMip) ;

/// [FreeFunction("CopyTexture")]
/// @brief Method CopyTexture_Slice_AllMips, addr 0xb57c460, size 0xe0, virtual false, abstract: false, final false
static inline void CopyTexture_Slice_AllMips(::UnityEngine::Texture*  src, int32_t  srcElement, ::UnityEngine::Texture*  dst, int32_t  dstElement) ;

/// @brief Method CopyTexture_Slice_AllMips_Injected, addr 0xb57c540, size 0x5c, virtual false, abstract: false, final false
static inline void CopyTexture_Slice_AllMips_Injected(::System::IntPtr  src, int32_t  srcElement, ::System::IntPtr  dst, int32_t  dstElement) ;

/// @brief Method CopyTexture_Slice_Injected, addr 0xb57c694, size 0x74, virtual false, abstract: false, final false
static inline void CopyTexture_Slice_Injected(::System::IntPtr  src, int32_t  srcElement, int32_t  srcMip, ::System::IntPtr  dst, int32_t  dstElement, int32_t  dstMip) ;

/// [ExcludeFromDocs]
/// @brief Method DrawMesh, addr 0xb57fac4, size 0xcc, virtual false, abstract: false, final false
static inline void DrawMesh(::UnityEngine::Mesh*  mesh, ::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  layer, ::UnityEngine::Camera*  camera, int32_t  submeshIndex) ;

/// [ExcludeFromDocs]
/// @brief Method DrawMesh, addr 0xb57fb90, size 0xd0, virtual false, abstract: false, final false
static inline void DrawMesh(::UnityEngine::Mesh*  mesh, ::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  layer, ::UnityEngine::Camera*  camera, int32_t  submeshIndex, ::UnityEngine::MaterialPropertyBlock*  properties) ;

/// @brief Method DrawMesh, addr 0xb57ee38, size 0x198, virtual false, abstract: false, final false
static inline void DrawMesh(::UnityEngine::Mesh*  mesh, ::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  layer, ::UnityEngine::Camera*  camera, int32_t  submeshIndex, ::UnityEngine::MaterialPropertyBlock*  properties, ::UnityEngine::Rendering::ShadowCastingMode  castShadows, bool  receiveShadows, ::UnityEngine::Transform*  probeAnchor, ::UnityEngine::Rendering::LightProbeUsage  lightProbeUsage, /* [DefaultValue("null")] */ ::UnityEngine::LightProbeProxyVolume*  lightProbeProxyVolume) ;

/// [ExcludeFromDocs]
/// @brief Method DrawMesh, addr 0xb57f964, size 0x160, virtual false, abstract: false, final false
static inline void DrawMesh(::UnityEngine::Mesh*  mesh, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Material*  material, int32_t  layer, ::UnityEngine::Camera*  camera) ;

/// @brief Method DrawMesh, addr 0xb57ec24, size 0x214, virtual false, abstract: false, final false
static inline void DrawMesh(::UnityEngine::Mesh*  mesh, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Material*  material, int32_t  layer, /* [DefaultValue("null")] */ ::UnityEngine::Camera*  camera, /* [DefaultValue("0")] */ int32_t  submeshIndex, /* [DefaultValue("null")] */ ::UnityEngine::MaterialPropertyBlock*  properties, /* [DefaultValue("true")] */ bool  castShadows, /* [DefaultValue("true")] */ bool  receiveShadows, /* [DefaultValue("true")] */ bool  useLightProbes) ;

/// [ExcludeFromDocs]
/// @brief Method DrawMeshInstanced, addr 0xb57fc60, size 0xb0, virtual false, abstract: false, final false
static inline void DrawMeshInstanced(::UnityEngine::Mesh*  mesh, int32_t  submeshIndex, ::UnityEngine::Material*  material, ::ArrayW<::UnityEngine::Matrix4x4>  matrices, int32_t  count) ;

/// [ExcludeFromDocs]
/// @brief Method DrawMeshInstanced, addr 0xb57fd10, size 0xbc, virtual false, abstract: false, final false
static inline void DrawMeshInstanced(::UnityEngine::Mesh*  mesh, int32_t  submeshIndex, ::UnityEngine::Material*  material, ::ArrayW<::UnityEngine::Matrix4x4>  matrices, int32_t  count, ::UnityEngine::MaterialPropertyBlock*  properties) ;

/// [ExcludeFromDocs]
/// @brief Method DrawMeshInstanced, addr 0xb57fdcc, size 0xd4, virtual false, abstract: false, final false
static inline void DrawMeshInstanced(::UnityEngine::Mesh*  mesh, int32_t  submeshIndex, ::UnityEngine::Material*  material, ::ArrayW<::UnityEngine::Matrix4x4>  matrices, int32_t  count, ::UnityEngine::MaterialPropertyBlock*  properties, ::UnityEngine::Rendering::ShadowCastingMode  castShadows, bool  receiveShadows, int32_t  layer, ::UnityEngine::Camera*  camera) ;

/// @brief Method DrawMeshInstanced, addr 0xb57efd0, size 0x434, virtual false, abstract: false, final false
static inline void DrawMeshInstanced(::UnityEngine::Mesh*  mesh, int32_t  submeshIndex, ::UnityEngine::Material*  material, ::ArrayW<::UnityEngine::Matrix4x4>  matrices, /* [DefaultValue("matrices.Length")] */ int32_t  count, /* [DefaultValue("null")] */ ::UnityEngine::MaterialPropertyBlock*  properties, /* [DefaultValue("ShadowCastingMode.On")] */ ::UnityEngine::Rendering::ShadowCastingMode  castShadows, /* [DefaultValue("true")] */ bool  receiveShadows, /* [DefaultValue("0")] */ int32_t  layer, /* [DefaultValue("null")] */ ::UnityEngine::Camera*  camera, /* [DefaultValue("LightProbeUsage.BlendProbes")] */ ::UnityEngine::Rendering::LightProbeUsage  lightProbeUsage, /* [DefaultValue("null")] */ ::UnityEngine::LightProbeProxyVolume*  lightProbeProxyVolume) ;

/// [ExcludeFromDocs]
/// @brief Method DrawMeshInstancedIndirect, addr 0xb57fea0, size 0xf0, virtual false, abstract: false, final false
static inline void DrawMeshInstancedIndirect(::UnityEngine::Mesh*  mesh, int32_t  submeshIndex, ::UnityEngine::Material*  material, ::UnityEngine::Bounds  bounds, ::UnityEngine::ComputeBuffer*  bufferWithArgs, int32_t  argsOffset, ::UnityEngine::MaterialPropertyBlock*  properties, ::UnityEngine::Rendering::ShadowCastingMode  castShadows, bool  receiveShadows, int32_t  layer, ::UnityEngine::Camera*  camera, ::UnityEngine::Rendering::LightProbeUsage  lightProbeUsage) ;

/// @brief Method DrawMeshInstancedIndirect, addr 0xb57f4a0, size 0x340, virtual false, abstract: false, final false
static inline void DrawMeshInstancedIndirect(::UnityEngine::Mesh*  mesh, int32_t  submeshIndex, ::UnityEngine::Material*  material, ::UnityEngine::Bounds  bounds, ::UnityEngine::ComputeBuffer*  bufferWithArgs, /* [DefaultValue("0")] */ int32_t  argsOffset, /* [DefaultValue("null")] */ ::UnityEngine::MaterialPropertyBlock*  properties, /* [DefaultValue("ShadowCastingMode.On")] */ ::UnityEngine::Rendering::ShadowCastingMode  castShadows, /* [DefaultValue("true")] */ bool  receiveShadows, /* [DefaultValue("0")] */ int32_t  layer, /* [DefaultValue("null")] */ ::UnityEngine::Camera*  camera, /* [DefaultValue("LightProbeUsage.BlendProbes")] */ ::UnityEngine::Rendering::LightProbeUsage  lightProbeUsage, /* [DefaultValue("null")] */ ::UnityEngine::LightProbeProxyVolume*  lightProbeProxyVolume) ;

/// @brief Method DrawMeshNow, addr 0xb57eba0, size 0x84, virtual false, abstract: false, final false
static inline void DrawMeshNow(::UnityEngine::Mesh*  mesh, ::UnityEngine::Matrix4x4  matrix) ;

/// @brief Method DrawMeshNow, addr 0xb57ea88, size 0x118, virtual false, abstract: false, final false
static inline void DrawMeshNow(::UnityEngine::Mesh*  mesh, ::UnityEngine::Matrix4x4  matrix, int32_t  materialIndex) ;

/// @brief Method DrawProceduralNow, addr 0xb57f7e0, size 0x8c, virtual false, abstract: false, final false
static inline void DrawProceduralNow(::UnityEngine::MeshTopology  topology, int32_t  vertexCount, int32_t  instanceCount) ;

/// [ExcludeFromDocs]
/// @brief Method DrawTexture, addr 0xb57ff90, size 0xf8, virtual false, abstract: false, final false
static inline void DrawTexture(::UnityEngine::Rect  screenRect, ::UnityEngine::Texture*  texture, ::UnityEngine::Rect  sourceRect, int32_t  leftBorder, int32_t  rightBorder, int32_t  topBorder, int32_t  bottomBorder, ::UnityEngine::Material*  mat) ;

/// @brief Method DrawTexture, addr 0xb57e450, size 0x118, virtual false, abstract: false, final false
static inline void DrawTexture(::UnityEngine::Rect  screenRect, ::UnityEngine::Texture*  texture, ::UnityEngine::Rect  sourceRect, int32_t  leftBorder, int32_t  rightBorder, int32_t  topBorder, int32_t  bottomBorder, /* [DefaultValue("null")] */ ::UnityEngine::Material*  mat, /* [DefaultValue("-1")] */ int32_t  pass) ;

/// @brief Method DrawTextureImpl, addr 0xb57e2c8, size 0x188, virtual false, abstract: false, final false
static inline void DrawTextureImpl(::UnityEngine::Rect  screenRect, ::UnityEngine::Texture*  texture, ::UnityEngine::Rect  sourceRect, int32_t  leftBorder, int32_t  rightBorder, int32_t  topBorder, int32_t  bottomBorder, ::UnityEngine::Color  color, ::UnityEngine::Material*  mat, int32_t  pass) ;

/// [NativeMethod(Name = "GraphicsScripting::ExecuteCommandBuffer", IsFreeFunction = true, ThrowsException = true)]
/// @brief Method ExecuteCommandBuffer, addr 0xb57d96c, size 0xc0, virtual false, abstract: false, final false
static inline void ExecuteCommandBuffer(/* [NotNull] */ ::UnityEngine::Rendering::CommandBuffer*  buffer) ;

/// @brief Method ExecuteCommandBuffer_Injected, addr 0xb57da2c, size 0x3c, virtual false, abstract: false, final false
static inline void ExecuteCommandBuffer_Injected(::System::IntPtr  buffer) ;

/// @brief Method GetCachedRenderInstancedDataLayout, addr 0xb57e568, size 0x108, virtual false, abstract: false, final false
static inline ::UnityEngine::RenderInstancedDataLayout GetCachedRenderInstancedDataLayout(::System::Type*  type) ;

/// [NativeMethod(Name = "GetMinOpenGLESVersion")]
/// [StaticAccessor("GetPlayerSettings()", (UnityEngine.Bindings.StaticAccessorType)0)]
/// @brief Method GetMinOpenGLESVersion, addr 0xb57bf2c, size 0x28, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::OpenGLESVersion GetMinOpenGLESVersion() ;

/// [StaticAccessor("GetPlayerSettings()", (UnityEngine.Bindings.StaticAccessorType)0)]
/// [NativeMethod(Name = "GetPreserveFramebufferAlpha")]
/// @brief Method GetPreserveFramebufferAlpha, addr 0xb57be9c, size 0x28, virtual false, abstract: false, final false
static inline bool GetPreserveFramebufferAlpha() ;

/// [FreeFunction("GraphicsScripting::DrawMesh")]
/// @brief Method Internal_DrawMesh, addr 0xb57cdb8, size 0x1dc, virtual false, abstract: false, final false
static inline void Internal_DrawMesh(::UnityEngine::Mesh*  mesh, int32_t  submeshIndex, ::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  layer, ::UnityEngine::Camera*  camera, ::UnityEngine::MaterialPropertyBlock*  properties, ::UnityEngine::Rendering::ShadowCastingMode  castShadows, bool  receiveShadows, ::UnityEngine::Transform*  probeAnchor, ::UnityEngine::Rendering::LightProbeUsage  lightProbeUsage, ::UnityEngine::LightProbeProxyVolume*  lightProbeProxyVolume) ;

/// [FreeFunction("GraphicsScripting::DrawMeshInstanced")]
/// @brief Method Internal_DrawMeshInstanced, addr 0xb57d058, size 0x2a0, virtual false, abstract: false, final false
static inline void Internal_DrawMeshInstanced(/* [NotNull] */ ::UnityEngine::Mesh*  mesh, int32_t  submeshIndex, /* [NotNull] */ ::UnityEngine::Material*  material, ::ArrayW<::UnityEngine::Matrix4x4>  matrices, int32_t  count, ::UnityEngine::MaterialPropertyBlock*  properties, ::UnityEngine::Rendering::ShadowCastingMode  castShadows, bool  receiveShadows, int32_t  layer, ::UnityEngine::Camera*  camera, ::UnityEngine::Rendering::LightProbeUsage  lightProbeUsage, ::UnityEngine::LightProbeProxyVolume*  lightProbeProxyVolume) ;

/// [FreeFunction("GraphicsScripting::DrawMeshInstancedIndirect")]
/// @brief Method Internal_DrawMeshInstancedIndirect, addr 0xb57d3bc, size 0x224, virtual false, abstract: false, final false
static inline void Internal_DrawMeshInstancedIndirect(/* [NotNull] */ ::UnityEngine::Mesh*  mesh, int32_t  submeshIndex, /* [NotNull] */ ::UnityEngine::Material*  material, ::UnityEngine::Bounds  bounds, ::UnityEngine::ComputeBuffer*  bufferWithArgs, int32_t  argsOffset, ::UnityEngine::MaterialPropertyBlock*  properties, ::UnityEngine::Rendering::ShadowCastingMode  castShadows, bool  receiveShadows, int32_t  layer, ::UnityEngine::Camera*  camera, ::UnityEngine::Rendering::LightProbeUsage  lightProbeUsage, ::UnityEngine::LightProbeProxyVolume*  lightProbeProxyVolume) ;

/// @brief Method Internal_DrawMeshInstancedIndirect_Injected, addr 0xb57d5e0, size 0xc4, virtual false, abstract: false, final false
static inline void Internal_DrawMeshInstancedIndirect_Injected(::System::IntPtr  mesh, int32_t  submeshIndex, ::System::IntPtr  material, ::by_ref<::UnityEngine::Bounds>  bounds, ::System::IntPtr  bufferWithArgs, int32_t  argsOffset, ::System::IntPtr  properties, ::UnityEngine::Rendering::ShadowCastingMode  castShadows, bool  receiveShadows, int32_t  layer, ::System::IntPtr  camera, ::UnityEngine::Rendering::LightProbeUsage  lightProbeUsage, ::System::IntPtr  lightProbeProxyVolume) ;

/// @brief Method Internal_DrawMeshInstanced_Injected, addr 0xb57d2f8, size 0xc4, virtual false, abstract: false, final false
static inline void Internal_DrawMeshInstanced_Injected(::System::IntPtr  mesh, int32_t  submeshIndex, ::System::IntPtr  material, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  matrices, int32_t  count, ::System::IntPtr  properties, ::UnityEngine::Rendering::ShadowCastingMode  castShadows, bool  receiveShadows, int32_t  layer, ::System::IntPtr  camera, ::UnityEngine::Rendering::LightProbeUsage  lightProbeUsage, ::System::IntPtr  lightProbeProxyVolume) ;

/// [FreeFunction("GraphicsScripting::DrawMeshNow")]
/// @brief Method Internal_DrawMeshNow2, addr 0xb57c8f8, size 0xe4, virtual false, abstract: false, final false
static inline void Internal_DrawMeshNow2(/* [NotNull] */ ::UnityEngine::Mesh*  mesh, int32_t  subsetIndex, ::UnityEngine::Matrix4x4  matrix) ;

/// @brief Method Internal_DrawMeshNow2_Injected, addr 0xb57c9dc, size 0x54, virtual false, abstract: false, final false
static inline void Internal_DrawMeshNow2_Injected(::System::IntPtr  mesh, int32_t  subsetIndex, ::by_ref<::UnityEngine::Matrix4x4>  matrix) ;

/// @brief Method Internal_DrawMesh_Injected, addr 0xb57cf94, size 0xc4, virtual false, abstract: false, final false
static inline void Internal_DrawMesh_Injected(::System::IntPtr  mesh, int32_t  submeshIndex, ::by_ref<::UnityEngine::Matrix4x4>  matrix, ::System::IntPtr  material, int32_t  layer, ::System::IntPtr  camera, ::System::IntPtr  properties, ::UnityEngine::Rendering::ShadowCastingMode  castShadows, bool  receiveShadows, ::System::IntPtr  probeAnchor, ::UnityEngine::Rendering::LightProbeUsage  lightProbeUsage, ::System::IntPtr  lightProbeProxyVolume) ;

/// [FreeFunction("GraphicsScripting::DrawProceduralNow")]
/// @brief Method Internal_DrawProceduralNow, addr 0xb57d6a4, size 0x54, virtual false, abstract: false, final false
static inline void Internal_DrawProceduralNow(::UnityEngine::MeshTopology  topology, int32_t  vertexCount, int32_t  instanceCount) ;

/// [FreeFunction("GraphicsScripting::DrawTexture")]
/// [VisibleToOtherModules(new[] { "UnityEngine.IMGUIModule" })]
/// @brief Method Internal_DrawTexture, addr 0xb57ca30, size 0x3c, virtual false, abstract: false, final false
static inline void Internal_DrawTexture(::by_ref<::UnityEngine::Internal_DrawTextureArguments>  args) ;

/// [FreeFunction("GraphicsScripting::GetMaxDrawMeshInstanceCount", IsThreadSafe = true)]
/// @brief Method Internal_GetMaxDrawMeshInstanceCount, addr 0xb57be10, size 0x28, virtual false, abstract: false, final false
static inline int32_t Internal_GetMaxDrawMeshInstanceCount() ;

/// [FreeFunction("GraphicsScripting::RenderMeshIndirect")]
/// @brief Method Internal_RenderMeshIndirect, addr 0xb57cbf0, size 0x15c, virtual false, abstract: false, final false
static inline void Internal_RenderMeshIndirect(::UnityEngine::RenderParams  rparams, /* [NotNull] */ ::UnityEngine::Mesh*  mesh, /* [NotNull] */ ::UnityEngine::GraphicsBuffer*  argsBuffer, int32_t  commandCount, int32_t  startCommand) ;

/// @brief Method Internal_RenderMeshIndirect_Injected, addr 0xb57cd4c, size 0x6c, virtual false, abstract: false, final false
static inline void Internal_RenderMeshIndirect_Injected(::by_ref<::UnityEngine::RenderParams>  rparams, ::System::IntPtr  mesh, ::System::IntPtr  argsBuffer, int32_t  commandCount, int32_t  startCommand) ;

/// [FreeFunction("GraphicsScripting::RenderMeshInstanced")]
/// @brief Method Internal_RenderMeshInstanced, addr 0xb57ca6c, size 0x110, virtual false, abstract: false, final false
static inline void Internal_RenderMeshInstanced(::UnityEngine::RenderParams  rparams, /* [NotNull] */ ::UnityEngine::Mesh*  mesh, int32_t  submeshIndex, ::System::IntPtr  instanceData, ::UnityEngine::RenderInstancedDataLayout  layout, uint32_t  instanceCount) ;

/// @brief Method Internal_RenderMeshInstanced_Injected, addr 0xb57cb7c, size 0x74, virtual false, abstract: false, final false
static inline void Internal_RenderMeshInstanced_Injected(::by_ref<::UnityEngine::RenderParams>  rparams, ::System::IntPtr  mesh, int32_t  submeshIndex, ::System::IntPtr  instanceData, ::by_ref<::UnityEngine::RenderInstancedDataLayout>  layout, uint32_t  instanceCount) ;

/// [NativeMethod(Name = "GraphicsScripting::SetMRTFull", IsFreeFunction = true, ThrowsException = true)]
/// @brief Method Internal_SetMRTFullSetup, addr 0xb57c0f8, size 0x2a4, virtual false, abstract: false, final false
static inline void Internal_SetMRTFullSetup(/* [NotNull] */ ::ArrayW<::UnityEngine::RenderBuffer>  color, ::UnityEngine::RenderBuffer  depth, int32_t  mip, ::UnityEngine::CubemapFace  face, int32_t  depthSlice, /* [NotNull] */ ::ArrayW<::UnityEngine::Rendering::RenderBufferLoadAction>  colorLA, /* [NotNull] */ ::ArrayW<::UnityEngine::Rendering::RenderBufferStoreAction>  colorSA, ::UnityEngine::Rendering::RenderBufferLoadAction  depthLA, ::UnityEngine::Rendering::RenderBufferStoreAction  depthSA) ;

/// @brief Method Internal_SetMRTFullSetup_Injected, addr 0xb57c39c, size 0x9c, virtual false, abstract: false, final false
static inline void Internal_SetMRTFullSetup_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  color, ::by_ref<::UnityEngine::RenderBuffer>  depth, int32_t  mip, ::UnityEngine::CubemapFace  face, int32_t  depthSlice, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  colorLA, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  colorSA, ::UnityEngine::Rendering::RenderBufferLoadAction  depthLA, ::UnityEngine::Rendering::RenderBufferStoreAction  depthSA) ;

/// [FreeFunction("GraphicsScripting::SetNullRT")]
/// @brief Method Internal_SetNullRT, addr 0xb57bfbc, size 0x28, virtual false, abstract: false, final false
static inline void Internal_SetNullRT() ;

/// [NativeMethod(Name = "GraphicsScripting::SetRTSimple", IsFreeFunction = true, ThrowsException = true)]
/// @brief Method Internal_SetRTSimple, addr 0xb57bfe4, size 0xa8, virtual false, abstract: false, final false
static inline void Internal_SetRTSimple(::UnityEngine::RenderBuffer  color, ::UnityEngine::RenderBuffer  depth, int32_t  mip, ::UnityEngine::CubemapFace  face, int32_t  depthSlice) ;

/// @brief Method Internal_SetRTSimple_Injected, addr 0xb57c08c, size 0x6c, virtual false, abstract: false, final false
static inline void Internal_SetRTSimple_Injected(::by_ref<::UnityEngine::RenderBuffer>  color, ::by_ref<::UnityEngine::RenderBuffer>  depth, int32_t  mip, ::UnityEngine::CubemapFace  face, int32_t  depthSlice) ;

/// @brief Method RenderMeshIndirect, addr 0xb57e958, size 0x130, virtual false, abstract: false, final false
static inline void RenderMeshIndirect(/* [IsReadOnly] */ ::by_ref<::UnityEngine::RenderParams>  rparams, ::UnityEngine::Mesh*  mesh, ::UnityEngine::GraphicsBuffer*  argsBuffer, /* [DefaultValue("1")] */ int32_t  commandCount, /* [DefaultValue("0")] */ int32_t  startCommand) ;

/// @brief Method RenderMeshInstanced, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
static inline void RenderMeshInstanced(/* [IsReadOnly] */ ::by_ref<::UnityEngine::RenderParams>  rparams, ::UnityEngine::Mesh*  mesh, int32_t  submeshIndex, ::System::Collections::Generic::List_1<T>*  instanceData, /* [DefaultValue("-1")] */ int32_t  instanceCount, /* [DefaultValue("0")] */ int32_t  startInstance) ;

/// [ExcludeFromDocs]
/// @brief Method SetRenderTarget, addr 0xb580088, size 0x60, virtual false, abstract: false, final false
static inline void SetRenderTarget(::UnityEngine::RenderTexture*  rt) ;

/// [ExcludeFromDocs]
/// @brief Method SetRenderTarget, addr 0xb5800e8, size 0x6c, virtual false, abstract: false, final false
static inline void SetRenderTarget(::UnityEngine::RenderTexture*  rt, int32_t  mipLevel) ;

/// @brief Method SetRenderTarget, addr 0xb57dfb4, size 0x7c, virtual false, abstract: false, final false
static inline void SetRenderTarget(::UnityEngine::RenderTexture*  rt, /* [DefaultValue("0")] */ int32_t  mipLevel, /* [DefaultValue("CubemapFace.Unknown")] */ ::UnityEngine::CubemapFace  face, /* [DefaultValue("0")] */ int32_t  depthSlice) ;

/// @brief Method SetRenderTarget, addr 0xb57e030, size 0x70, virtual false, abstract: false, final false
static inline void SetRenderTarget(::UnityEngine::RenderTargetSetup  setup) ;

/// @brief Method SetRenderTargetImpl, addr 0xb57ddec, size 0x9c, virtual false, abstract: false, final false
static inline void SetRenderTargetImpl(::UnityEngine::RenderBuffer  colorBuffer, ::UnityEngine::RenderBuffer  depthBuffer, int32_t  mipLevel, ::UnityEngine::CubemapFace  face, int32_t  depthSlice) ;

/// @brief Method SetRenderTargetImpl, addr 0xb57de88, size 0x12c, virtual false, abstract: false, final false
static inline void SetRenderTargetImpl(::UnityEngine::RenderTexture*  rt, int32_t  mipLevel, ::UnityEngine::CubemapFace  face, int32_t  depthSlice) ;

/// @brief Method SetRenderTargetImpl, addr 0xb57db44, size 0x2a8, virtual false, abstract: false, final false
static inline void SetRenderTargetImpl(::UnityEngine::RenderTargetSetup  setup) ;

static inline int32_t getStaticF_kMaxDrawMeshInstanceCount() ;

static inline ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::RenderInstancedDataLayout>* getStaticF_s_RenderInstancedDataLayouts() ;

/// @brief Method get_activeTier, addr 0xb57be38, size 0x28, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::GraphicsTier get_activeTier() ;

/// @brief Method get_minOpenGLESVersion, addr 0xb57bf54, size 0x68, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::OpenGLESVersion get_minOpenGLESVersion() ;

/// @brief Method get_preserveFramebufferAlpha, addr 0xb57bec4, size 0x68, virtual false, abstract: false, final false
static inline bool get_preserveFramebufferAlpha() ;

static inline void setStaticF_kMaxDrawMeshInstanceCount(int32_t  value) ;

static inline void setStaticF_s_RenderInstancedDataLayouts(::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::RenderInstancedDataLayout>*  value) ;

/// @brief Method set_activeTier, addr 0xb57be60, size 0x3c, virtual false, abstract: false, final false
static inline void set_activeTier(::UnityEngine::Rendering::GraphicsTier  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Graphics() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Graphics", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
Graphics(Graphics && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Graphics", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
Graphics(Graphics const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{14861};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Graphics) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine
