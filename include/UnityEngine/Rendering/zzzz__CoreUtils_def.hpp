#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/CoreUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IConvertible_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CoreUtils)
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Reflection {
class Assembly;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class Type;
}
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
}
namespace UnityEngine::Rendering {
class BaseCommandBuffer;
}
namespace UnityEngine::Rendering {
struct ClearFlag;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
class CoreUtils_Priorities;
}
namespace UnityEngine::Rendering {
class CoreUtils_Sections;
}
namespace UnityEngine::Rendering {
class CoreUtils___c;
}
namespace UnityEngine::Rendering {
template<typename T>
class CoreUtils___c__101_1;
}
namespace UnityEngine::Rendering {
struct DepthBits;
}
namespace UnityEngine::Rendering {
struct LocalKeyword;
}
namespace UnityEngine::Rendering {
struct MSAASamples;
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
struct RendererList;
}
namespace UnityEngine::Rendering {
struct ScriptableRenderContext;
}
namespace UnityEngine::Rendering {
struct ShadingRateCombinerStage;
}
namespace UnityEngine::Rendering {
struct ShadingRateCombiner;
}
namespace UnityEngine::Rendering {
struct ShadingRateFragmentSize;
}
namespace UnityEngine::Rendering {
struct TextureDimension;
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
class ComputeShader;
}
namespace UnityEngine {
class CubemapArray;
}
namespace UnityEngine {
struct CubemapFace;
}
namespace UnityEngine {
class Cubemap;
}
namespace UnityEngine {
class GraphicsBuffer;
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
class Mesh;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
struct RenderTextureFormat;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
class Shader;
}
namespace UnityEngine {
class Texture3D;
}
namespace UnityEngine {
struct TextureFormat;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class CoreUtils;
}
namespace UnityEngine::Rendering {
class CoreUtils_Priorities;
}
namespace UnityEngine::Rendering {
class CoreUtils_Sections;
}
namespace UnityEngine::Rendering {
class CoreUtils___c;
}
namespace UnityEngine::Rendering {
template<typename T>
class CoreUtils___c__101_1;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::CoreUtils*);
MARK_REF_T(::UnityEngine::Rendering::CoreUtils_Priorities*);
MARK_REF_T(::UnityEngine::Rendering::CoreUtils_Sections*);
MARK_REF_T(::UnityEngine::Rendering::CoreUtils___c*);
MARK_GEN_REF_T_PTR(::UnityEngine::Rendering::CoreUtils___c__101_1);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::CoreUtils*, "UnityEngine.Rendering", "CoreUtils");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::CoreUtils_Priorities*, "UnityEngine.Rendering", "CoreUtils/Priorities");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::CoreUtils_Sections*, "UnityEngine.Rendering", "CoreUtils/Sections");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::CoreUtils___c*, "UnityEngine.Rendering", "CoreUtils/<>c");
DEFINE_IL2CPP_GEN_CLASS_PTR(::UnityEngine::Rendering::CoreUtils___c__101_1, "UnityEngine.Rendering", "CoreUtils/<>c__101`1");
// Dependencies System.IConvertible, System.Object, UnityEngine.Vector3
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.CoreUtils
class CORDL_TYPE CoreUtils : public ::System::Object {
public:
// Declarations
using Priorities = ::UnityEngine::Rendering::CoreUtils_Priorities;

using Sections = ::UnityEngine::Rendering::CoreUtils_Sections;

using __c = ::UnityEngine::Rendering::CoreUtils___c;

template<typename T>
using __c__101_1 = ::UnityEngine::Rendering::CoreUtils___c__101_1<T>;

/// @brief Field lookAtList, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_lookAtList, put=setStaticF_lookAtList)) ::ArrayW<::UnityEngine::Vector3>  lookAtList;

/// @brief Field m_AssemblyTypes, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_m_AssemblyTypes, put=setStaticF_m_AssemblyTypes)) ::System::Collections::Generic::IEnumerable_1<::System::Type*>*  m_AssemblyTypes;

/// @brief Field m_BlackCubeTexture, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_m_BlackCubeTexture, put=setStaticF_m_BlackCubeTexture)) ::UnityW<::UnityEngine::Cubemap>  m_BlackCubeTexture;

/// @brief Field m_BlackVolumeTexture, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_m_BlackVolumeTexture, put=setStaticF_m_BlackVolumeTexture)) ::UnityW<::UnityEngine::Texture3D>  m_BlackVolumeTexture;

/// @brief Field m_EmptyBuffer, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_m_EmptyBuffer, put=setStaticF_m_EmptyBuffer)) ::UnityEngine::GraphicsBuffer*  m_EmptyBuffer;

/// @brief Field m_EmptyUAV, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_m_EmptyUAV, put=setStaticF_m_EmptyUAV)) ::UnityW<::UnityEngine::RenderTexture>  m_EmptyUAV;

/// @brief Field m_MagentaCubeTexture, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_m_MagentaCubeTexture, put=setStaticF_m_MagentaCubeTexture)) ::UnityW<::UnityEngine::Cubemap>  m_MagentaCubeTexture;

/// @brief Field m_MagentaCubeTextureArray, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_m_MagentaCubeTextureArray, put=setStaticF_m_MagentaCubeTextureArray)) ::UnityW<::UnityEngine::CubemapArray>  m_MagentaCubeTextureArray;

/// @brief Field m_WhiteCubeTexture, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_m_WhiteCubeTexture, put=setStaticF_m_WhiteCubeTexture)) ::UnityW<::UnityEngine::Cubemap>  m_WhiteCubeTexture;

/// @brief Field m_WhiteVolumeTexture, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_m_WhiteVolumeTexture, put=setStaticF_m_WhiteVolumeTexture)) ::UnityW<::UnityEngine::Texture3D>  m_WhiteVolumeTexture;

/// @brief Field upVectorList, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_upVectorList, put=setStaticF_upVectorList)) ::ArrayW<::UnityEngine::Vector3>  upVectorList;

/// @brief Method AreAnimatedMaterialsEnabled, addr 0xb192f88, size 0x8, virtual false, abstract: false, final false
static inline bool AreAnimatedMaterialsEnabled(::UnityEngine::Camera*  camera) ;

/// @brief Method ArePostProcessesEnabled, addr 0xb192f80, size 0x8, virtual false, abstract: false, final false
static inline bool ArePostProcessesEnabled(::UnityEngine::Camera*  camera) ;

/// @brief Method CalculateViewSpaceCorners, addr 0xb19335c, size 0x1a4, virtual false, abstract: false, final false
static inline ::ArrayW<::UnityEngine::Vector3> CalculateViewSpaceCorners(::UnityEngine::Matrix4x4  proj, float_t  z) ;

/// @brief Method ClearCubemap, addr 0xb191ebc, size 0x1b4, virtual false, abstract: false, final false
static inline void ClearCubemap(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::RenderTexture*  renderTexture, ::UnityEngine::Color  clearColor, bool  clearMips) ;

/// @brief Method ClearRenderTarget, addr 0xb18f7a4, size 0x24, virtual false, abstract: false, final false
static inline void ClearRenderTarget(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::ClearFlag  clearFlag, ::UnityEngine::Color  clearColor) ;

/// @brief Method ConvertLinearToActiveColorSpace, addr 0xb192548, size 0x7c, virtual false, abstract: false, final false
static inline ::UnityEngine::Color ConvertLinearToActiveColorSpace(::UnityEngine::Color  color) ;

/// @brief Method ConvertSRGBToActiveColorSpace, addr 0xb1924cc, size 0x7c, virtual false, abstract: false, final false
static inline ::UnityEngine::Color ConvertSRGBToActiveColorSpace(::UnityEngine::Color  color) ;

/// @brief Method CreateCubeMesh, addr 0xb192bdc, size 0x3a4, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Mesh> CreateCubeMesh(::UnityEngine::Vector3  min, ::UnityEngine::Vector3  max) ;

/// @brief Method CreateEngineMaterial, addr 0xb192740, size 0xf8, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Material> CreateEngineMaterial(::UnityEngine::Shader*  shader) ;

/// @brief Method CreateEngineMaterial, addr 0xb1925c4, size 0x17c, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Material> CreateEngineMaterial(::StringW  shaderPath) ;

/// @brief Method Destroy, addr 0xb19299c, size 0x88, virtual false, abstract: false, final false
static inline void Destroy(::UnityEngine::Object*  obj) ;

/// @brief Method DivRoundUp, addr 0xb19330c, size 0x10, virtual false, abstract: false, final false
static inline int32_t DivRoundUp(int32_t  value, int32_t  divisor) ;

/// @brief Method DrawFullScreen, addr 0xb192260, size 0xe0, virtual false, abstract: false, final false
static inline void DrawFullScreen(::UnityEngine::Rendering::CommandBuffer*  commandBuffer, ::UnityEngine::Material*  material, ::UnityEngine::Rendering::RenderTargetIdentifier  colorBuffer, ::UnityEngine::Rendering::RenderTargetIdentifier  depthStencilBuffer, ::UnityEngine::MaterialPropertyBlock*  properties, int32_t  shaderPassId) ;

/// @brief Method DrawFullScreen, addr 0xb192194, size 0xcc, virtual false, abstract: false, final false
static inline void DrawFullScreen(::UnityEngine::Rendering::CommandBuffer*  commandBuffer, ::UnityEngine::Material*  material, ::UnityEngine::Rendering::RenderTargetIdentifier  colorBuffer, ::UnityEngine::MaterialPropertyBlock*  properties, int32_t  shaderPassId) ;

/// @brief Method DrawFullScreen, addr 0xb192340, size 0xd4, virtual false, abstract: false, final false
static inline void DrawFullScreen(::UnityEngine::Rendering::CommandBuffer*  commandBuffer, ::UnityEngine::Material*  material, ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>  colorBuffers, ::UnityEngine::Rendering::RenderTargetIdentifier  depthStencilBuffer, ::UnityEngine::MaterialPropertyBlock*  properties, int32_t  shaderPassId) ;

/// @brief Method DrawFullScreen, addr 0xb192414, size 0xb8, virtual false, abstract: false, final false
static inline void DrawFullScreen(::UnityEngine::Rendering::CommandBuffer*  commandBuffer, ::UnityEngine::Material*  material, ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>  colorBuffers, ::UnityEngine::MaterialPropertyBlock*  properties, int32_t  shaderPassId) ;

/// @brief Method DrawFullScreen, addr 0xb192070, size 0xa4, virtual false, abstract: false, final false
static inline void DrawFullScreen(::UnityEngine::Rendering::CommandBuffer*  commandBuffer, ::UnityEngine::Material*  material, ::UnityEngine::MaterialPropertyBlock*  properties, int32_t  shaderPassId) ;

/// @brief Method DrawFullScreen, addr 0xb192114, size 0x80, virtual false, abstract: false, final false
static inline void DrawFullScreen(::UnityEngine::Rendering::RasterCommandBuffer*  commandBuffer, ::UnityEngine::Material*  material, ::UnityEngine::MaterialPropertyBlock*  properties, int32_t  shaderPassId) ;

/// @brief Method DrawRendererList, addr 0xb192fb8, size 0x3c, virtual false, abstract: false, final false
static inline void DrawRendererList(::UnityEngine::Rendering::ScriptableRenderContext  renderContext, ::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RendererList  rendererList) ;

/// @brief Method FixupDepthSlice, addr 0xb18f7c8, size 0x44, virtual false, abstract: false, final false
static inline int32_t FixupDepthSlice(int32_t  depthSlice, ::UnityEngine::Rendering::RTHandle*  buffer) ;

/// @brief Method FixupDepthSlice, addr 0xb18f80c, size 0x14, virtual false, abstract: false, final false
static inline int32_t FixupDepthSlice(int32_t  depthSlice, ::UnityEngine::CubemapFace  cubemapFace) ;

/// @brief Method GetAllAssemblyTypes, addr 0xb192a24, size 0x198, virtual false, abstract: false, final false
static inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* GetAllAssemblyTypes() ;

/// @brief Method GetAllTypesDerivedFrom, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* GetAllTypesDerivedFrom() ;

/// @brief Method GetCorePath, addr 0xb19331c, size 0x40, virtual false, abstract: false, final false
static inline ::StringW GetCorePath() ;

/// @brief Method GetDefaultDepthBufferBits, addr 0xb193560, size 0x8, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::DepthBits GetDefaultDepthBufferBits() ;

/// @brief Method GetDefaultDepthOnlyFormat, addr 0xb193508, size 0x58, virtual false, abstract: false, final false
static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetDefaultDepthOnlyFormat() ;

/// @brief Method GetDefaultDepthStencilFormat, addr 0xb193500, size 0x8, virtual false, abstract: false, final false
static inline ::UnityEngine::Experimental::Rendering::GraphicsFormat GetDefaultDepthStencilFormat() ;

/// @brief Method GetLastEnumValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T GetLastEnumValue() ;

/// @brief Method GetMipCount, addr 0xb193250, size 0xbc, virtual false, abstract: false, final false
static inline int32_t GetMipCount(float_t  size) ;

/// @brief Method GetMipCount, addr 0xb193190, size 0xc0, virtual false, abstract: false, final false
static inline int32_t GetMipCount(int32_t  size) ;

/// @brief Method GetRenderTargetAutoName, addr 0xb191460, size 0x278, virtual false, abstract: false, final false
static inline ::StringW GetRenderTargetAutoName(int32_t  width, int32_t  height, int32_t  depth, ::StringW  format, ::UnityEngine::Rendering::TextureDimension  dim, ::StringW  name, bool  mips, bool  enableMSAA, ::UnityEngine::Rendering::MSAASamples  msaaSamples, bool  dynamicRes, bool  dynamicResExplicit) ;

/// @brief Method GetRenderTargetAutoName, addr 0xb1917d4, size 0x110, virtual false, abstract: false, final false
static inline ::StringW GetRenderTargetAutoName(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::Rendering::TextureDimension  dim, ::StringW  name, bool  mips, bool  enableMSAA, ::UnityEngine::Rendering::MSAASamples  msaaSamples, bool  dynamicRes, bool  dynamicResExplicit) ;

/// @brief Method GetRenderTargetAutoName, addr 0xb1916d8, size 0xfc, virtual false, abstract: false, final false
static inline ::StringW GetRenderTargetAutoName(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::StringW  name, bool  mips, bool  enableMSAA, ::UnityEngine::Rendering::MSAASamples  msaaSamples) ;

/// @brief Method GetRenderTargetAutoName, addr 0xb191364, size 0xfc, virtual false, abstract: false, final false
static inline ::StringW GetRenderTargetAutoName(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::RenderTextureFormat  format, ::StringW  name, bool  mips, bool  enableMSAA, ::UnityEngine::Rendering::MSAASamples  msaaSamples) ;

/// @brief Method GetTextureAutoName, addr 0xb1919cc, size 0x408, virtual false, abstract: false, final false
static inline ::StringW GetTextureAutoName(int32_t  width, int32_t  height, ::StringW  format, ::UnityEngine::Rendering::TextureDimension  dim, ::StringW  name, bool  mips, int32_t  depth) ;

/// @brief Method GetTextureAutoName, addr 0xb191dd4, size 0xe8, virtual false, abstract: false, final false
static inline ::StringW GetTextureAutoName(int32_t  width, int32_t  height, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::Rendering::TextureDimension  dim, ::StringW  name, bool  mips, int32_t  depth) ;

/// @brief Method GetTextureAutoName, addr 0xb1918e4, size 0xe8, virtual false, abstract: false, final false
static inline ::StringW GetTextureAutoName(int32_t  width, int32_t  height, ::UnityEngine::TextureFormat  format, ::UnityEngine::Rendering::TextureDimension  dim, ::StringW  name, bool  mips, int32_t  depth) ;

/// @brief Method GetTextureHash, addr 0xb192ff4, size 0x170, virtual false, abstract: false, final false
static inline int32_t GetTextureHash(::UnityEngine::Texture*  texture) ;

/// @brief Method HasFlag, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::type_constraint<T, ::System::IConvertible*>)
static inline bool HasFlag(T  mask, T  flag) ;

/// @brief Method IsLightOverlapDebugEnabled, addr 0xb192f98, size 0x8, virtual false, abstract: false, final false
static inline bool IsLightOverlapDebugEnabled(::UnityEngine::Camera*  camera) ;

/// @brief Method IsSceneFilteringEnabled, addr 0xb192fa8, size 0x8, virtual false, abstract: false, final false
static inline bool IsSceneFilteringEnabled() ;

/// @brief Method IsSceneLightingDisabled, addr 0xb192f90, size 0x8, virtual false, abstract: false, final false
static inline bool IsSceneLightingDisabled(::UnityEngine::Camera*  camera) ;

/// @brief Method IsSceneViewFogEnabled, addr 0xb192fa0, size 0x8, virtual false, abstract: false, final false
static inline bool IsSceneViewFogEnabled(::UnityEngine::Camera*  camera) ;

/// @brief Method IsSceneViewPrefabStageContextHidden, addr 0xb192fb0, size 0x8, virtual false, abstract: false, final false
static inline bool IsSceneViewPrefabStageContextHidden() ;

/// @brief Method PreviousPowerOfTwo, addr 0xb193164, size 0x2c, virtual false, abstract: false, final false
static inline int32_t PreviousPowerOfTwo(int32_t  size) ;

/// @brief Method SafeRelease, addr 0xb192bcc, size 0x10, virtual false, abstract: false, final false
static inline void SafeRelease(::UnityEngine::ComputeBuffer*  buffer) ;

/// @brief Method SafeRelease, addr 0xb192bbc, size 0x10, virtual false, abstract: false, final false
static inline void SafeRelease(::UnityEngine::GraphicsBuffer*  buffer) ;

/// @brief Method SetKeyword, addr 0xb1928dc, size 0x3c, virtual false, abstract: false, final false
static inline void SetKeyword(::UnityEngine::Rendering::BaseCommandBuffer*  cmd, ::StringW  keyword, bool  state) ;

/// @brief Method SetKeyword, addr 0xb192864, size 0x78, virtual false, abstract: false, final false
static inline void SetKeyword(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::ComputeShader*  cs, ::StringW  keyword, bool  state) ;

/// @brief Method SetKeyword, addr 0xb192838, size 0x2c, virtual false, abstract: false, final false
static inline void SetKeyword(::UnityEngine::Rendering::CommandBuffer*  cmd, ::StringW  keyword, bool  state) ;

/// @brief Method SetKeyword, addr 0xb192970, size 0x2c, virtual false, abstract: false, final false
static inline void SetKeyword(::UnityEngine::ComputeShader*  cs, ::StringW  keyword, bool  state) ;

/// @brief Method SetKeyword, addr 0xb192918, size 0x2c, virtual false, abstract: false, final false
static inline void SetKeyword(::UnityEngine::Material*  material, ::StringW  keyword, bool  state) ;

/// @brief Method SetKeyword, addr 0xb192944, size 0x2c, virtual false, abstract: false, final false
static inline void SetKeyword(::UnityEngine::Material*  material, ::UnityEngine::Rendering::LocalKeyword  keyword, bool  state) ;

/// @brief Method SetRenderTarget, addr 0xb190a34, size 0x10c, virtual false, abstract: false, final false
static inline void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RTHandle*  buffer, ::UnityEngine::Rendering::ClearFlag  clearFlag, ::UnityEngine::Color  clearColor, int32_t  miplevel, ::UnityEngine::CubemapFace  cubemapFace, int32_t  depthSlice) ;

/// @brief Method SetRenderTarget, addr 0xb190b40, size 0xa4, virtual false, abstract: false, final false
static inline void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RTHandle*  buffer, ::UnityEngine::Rendering::ClearFlag  clearFlag, int32_t  miplevel, ::UnityEngine::CubemapFace  cubemapFace, int32_t  depthSlice) ;

/// @brief Method SetRenderTarget, addr 0xb190e5c, size 0x118, virtual false, abstract: false, final false
static inline void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RTHandle*  buffer, ::UnityEngine::Rendering::RenderBufferLoadAction  loadAction, ::UnityEngine::Rendering::RenderBufferStoreAction  storeAction, ::UnityEngine::Rendering::ClearFlag  clearFlag, ::UnityEngine::Color  clearColor, int32_t  miplevel, ::UnityEngine::CubemapFace  cubemapFace, int32_t  depthSlice) ;

/// @brief Method SetRenderTarget, addr 0xb18f820, size 0x100, virtual false, abstract: false, final false
static inline void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RenderTargetIdentifier  buffer, ::UnityEngine::Rendering::ClearFlag  clearFlag, ::UnityEngine::Color  clearColor, int32_t  miplevel, ::UnityEngine::CubemapFace  cubemapFace, int32_t  depthSlice) ;

/// @brief Method SetRenderTarget, addr 0xb18f920, size 0xc0, virtual false, abstract: false, final false
static inline void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RenderTargetIdentifier  buffer, ::UnityEngine::Rendering::ClearFlag  clearFlag, int32_t  miplevel, ::UnityEngine::CubemapFace  cubemapFace, int32_t  depthSlice) ;

/// @brief Method SetRenderTarget, addr 0xb190730, size 0x100, virtual false, abstract: false, final false
static inline void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RenderTargetIdentifier  buffer, ::UnityEngine::Rendering::RenderBufferLoadAction  colorLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction  colorStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction  depthLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction  depthStoreAction, ::UnityEngine::Rendering::ClearFlag  clearFlag, ::UnityEngine::Color  clearColor) ;

/// @brief Method SetRenderTarget, addr 0xb190234, size 0xb0, virtual false, abstract: false, final false
static inline void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RenderTargetIdentifier  buffer, ::UnityEngine::Rendering::RenderBufferLoadAction  loadAction, ::UnityEngine::Rendering::RenderBufferStoreAction  storeAction, ::UnityEngine::Rendering::ClearFlag  clearFlag) ;

/// @brief Method SetRenderTarget, addr 0xb18fecc, size 0xe8, virtual false, abstract: false, final false
static inline void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RenderTargetIdentifier  buffer, ::UnityEngine::Rendering::RenderBufferLoadAction  loadAction, ::UnityEngine::Rendering::RenderBufferStoreAction  storeAction, ::UnityEngine::Rendering::ClearFlag  clearFlag, ::UnityEngine::Color  clearColor) ;

/// @brief Method SetRenderTarget, addr 0xb1900dc, size 0x158, virtual false, abstract: false, final false
static inline void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RenderTargetIdentifier  buffer, ::UnityEngine::Rendering::RenderBufferLoadAction  loadAction, ::UnityEngine::Rendering::RenderBufferStoreAction  storeAction, ::UnityEngine::Rendering::ClearFlag  clearFlag, ::UnityEngine::Color  clearColor, int32_t  miplevel, ::UnityEngine::CubemapFace  cubemapFace, int32_t  depthSlice) ;

/// @brief Method SetRenderTarget, addr 0xb18ffb4, size 0x128, virtual false, abstract: false, final false
static inline void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RenderTargetIdentifier  buffer, ::UnityEngine::Rendering::RenderBufferLoadAction  loadAction, ::UnityEngine::Rendering::RenderBufferStoreAction  storeAction, int32_t  miplevel, ::UnityEngine::CubemapFace  cubemapFace, int32_t  depthSlice) ;

/// @brief Method SetRenderTarget, addr 0xb190f74, size 0x160, virtual false, abstract: false, final false
static inline void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RTHandle*  colorBuffer, ::UnityEngine::Rendering::RenderBufferLoadAction  colorLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction  colorStoreAction, ::UnityEngine::Rendering::RTHandle*  depthBuffer, ::UnityEngine::Rendering::RenderBufferLoadAction  depthLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction  depthStoreAction, ::UnityEngine::Rendering::ClearFlag  clearFlag, ::UnityEngine::Color  clearColor, int32_t  miplevel, ::UnityEngine::CubemapFace  cubemapFace, int32_t  depthSlice) ;

/// @brief Method SetRenderTarget, addr 0xb190c8c, size 0x124, virtual false, abstract: false, final false
static inline void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RTHandle*  colorBuffer, ::UnityEngine::Rendering::RTHandle*  depthBuffer, ::UnityEngine::Rendering::ClearFlag  clearFlag, ::UnityEngine::Color  clearColor, int32_t  miplevel, ::UnityEngine::CubemapFace  cubemapFace, int32_t  depthSlice) ;

/// @brief Method SetRenderTarget, addr 0xb190db0, size 0xac, virtual false, abstract: false, final false
static inline void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RTHandle*  colorBuffer, ::UnityEngine::Rendering::RTHandle*  depthBuffer, ::UnityEngine::Rendering::ClearFlag  clearFlag, int32_t  miplevel, ::UnityEngine::CubemapFace  cubemapFace, int32_t  depthSlice) ;

/// @brief Method SetRenderTarget, addr 0xb190be4, size 0xa8, virtual false, abstract: false, final false
static inline void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RTHandle*  colorBuffer, ::UnityEngine::Rendering::RTHandle*  depthBuffer, int32_t  miplevel, ::UnityEngine::CubemapFace  cubemapFace, int32_t  depthSlice) ;

/// @brief Method SetRenderTarget, addr 0xb190830, size 0xe8, virtual false, abstract: false, final false
static inline void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RenderTargetIdentifier  colorBuffer, ::UnityEngine::Rendering::RenderBufferLoadAction  colorLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction  colorStoreAction, ::UnityEngine::Rendering::RenderTargetIdentifier  depthBuffer, ::UnityEngine::Rendering::RenderBufferLoadAction  depthLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction  depthStoreAction, ::UnityEngine::Rendering::ClearFlag  clearFlag) ;

/// @brief Method SetRenderTarget, addr 0xb1902e4, size 0x118, virtual false, abstract: false, final false
static inline void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RenderTargetIdentifier  colorBuffer, ::UnityEngine::Rendering::RenderBufferLoadAction  colorLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction  colorStoreAction, ::UnityEngine::Rendering::RenderTargetIdentifier  depthBuffer, ::UnityEngine::Rendering::RenderBufferLoadAction  depthLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction  depthStoreAction, ::UnityEngine::Rendering::ClearFlag  clearFlag, ::UnityEngine::Color  clearColor) ;

/// @brief Method SetRenderTarget, addr 0xb190580, size 0x1b0, virtual false, abstract: false, final false
static inline void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RenderTargetIdentifier  colorBuffer, ::UnityEngine::Rendering::RenderBufferLoadAction  colorLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction  colorStoreAction, ::UnityEngine::Rendering::RenderTargetIdentifier  depthBuffer, ::UnityEngine::Rendering::RenderBufferLoadAction  depthLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction  depthStoreAction, ::UnityEngine::Rendering::ClearFlag  clearFlag, ::UnityEngine::Color  clearColor, int32_t  miplevel, ::UnityEngine::CubemapFace  cubemapFace, int32_t  depthSlice) ;

/// @brief Method SetRenderTarget, addr 0xb1903fc, size 0x184, virtual false, abstract: false, final false
static inline void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RenderTargetIdentifier  colorBuffer, ::UnityEngine::Rendering::RenderBufferLoadAction  colorLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction  colorStoreAction, ::UnityEngine::Rendering::RenderTargetIdentifier  depthBuffer, ::UnityEngine::Rendering::RenderBufferLoadAction  depthLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction  depthStoreAction, int32_t  miplevel, ::UnityEngine::CubemapFace  cubemapFace, int32_t  depthSlice) ;

/// @brief Method SetRenderTarget, addr 0xb18fab4, size 0x118, virtual false, abstract: false, final false
static inline void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RenderTargetIdentifier  colorBuffer, ::UnityEngine::Rendering::RenderTargetIdentifier  depthBuffer, ::UnityEngine::Rendering::ClearFlag  clearFlag, ::UnityEngine::Color  clearColor, int32_t  miplevel, ::UnityEngine::CubemapFace  cubemapFace, int32_t  depthSlice) ;

/// @brief Method SetRenderTarget, addr 0xb18fbcc, size 0xd8, virtual false, abstract: false, final false
static inline void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RenderTargetIdentifier  colorBuffer, ::UnityEngine::Rendering::RenderTargetIdentifier  depthBuffer, ::UnityEngine::Rendering::ClearFlag  clearFlag, int32_t  miplevel, ::UnityEngine::CubemapFace  cubemapFace, int32_t  depthSlice) ;

/// @brief Method SetRenderTarget, addr 0xb18f9e0, size 0xd4, virtual false, abstract: false, final false
static inline void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RenderTargetIdentifier  colorBuffer, ::UnityEngine::Rendering::RenderTargetIdentifier  depthBuffer, int32_t  miplevel, ::UnityEngine::CubemapFace  cubemapFace, int32_t  depthSlice) ;

/// @brief Method SetRenderTarget, addr 0xb191110, size 0xb0, virtual false, abstract: false, final false
static inline void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer*  cmd, ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>  colorBuffers, ::UnityEngine::Rendering::RTHandle*  depthBuffer) ;

/// @brief Method SetRenderTarget, addr 0xb1911c0, size 0xb4, virtual false, abstract: false, final false
static inline void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer*  cmd, ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>  colorBuffers, ::UnityEngine::Rendering::RTHandle*  depthBuffer, ::UnityEngine::Rendering::ClearFlag  clearFlag) ;

/// @brief Method SetRenderTarget, addr 0xb191274, size 0xf0, virtual false, abstract: false, final false
static inline void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer*  cmd, ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>  colorBuffers, ::UnityEngine::Rendering::RTHandle*  depthBuffer, ::UnityEngine::Rendering::ClearFlag  clearFlag, ::UnityEngine::Color  clearColor) ;

/// @brief Method SetRenderTarget, addr 0xb18fca4, size 0x9c, virtual false, abstract: false, final false
static inline void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer*  cmd, ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>  colorBuffers, ::UnityEngine::Rendering::RenderTargetIdentifier  depthBuffer) ;

/// @brief Method SetRenderTarget, addr 0xb18fe24, size 0xa8, virtual false, abstract: false, final false
static inline void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer*  cmd, ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>  colorBuffers, ::UnityEngine::Rendering::RenderTargetIdentifier  depthBuffer, ::UnityEngine::Rendering::ClearFlag  clearFlag) ;

/// @brief Method SetRenderTarget, addr 0xb18fd40, size 0xe4, virtual false, abstract: false, final false
static inline void SetRenderTarget(::UnityEngine::Rendering::CommandBuffer*  cmd, ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>  colorBuffers, ::UnityEngine::Rendering::RenderTargetIdentifier  depthBuffer, ::UnityEngine::Rendering::ClearFlag  clearFlag, ::UnityEngine::Color  clearColor) ;

/// @brief Method SetShadingRateCombiner, addr 0xb1910e8, size 0x14, virtual false, abstract: false, final false
static inline void SetShadingRateCombiner(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::ShadingRateCombinerStage  stage, ::UnityEngine::Rendering::ShadingRateCombiner  combiner) ;

/// @brief Method SetShadingRateFragmentSize, addr 0xb1910d4, size 0x14, virtual false, abstract: false, final false
static inline void SetShadingRateFragmentSize(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::ShadingRateFragmentSize  baseShadingRateFragmentSize) ;

/// @brief Method SetShadingRateImage, addr 0xb1910fc, size 0x14, virtual false, abstract: false, final false
static inline void SetShadingRateImage(::UnityEngine::Rendering::CommandBuffer*  cmd, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier>  shadingRateImage) ;

/// @brief Method SetViewport, addr 0xb1909bc, size 0x78, virtual false, abstract: false, final false
static inline void SetViewport(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RTHandle*  target) ;

/// @brief Method SetViewportAndClear, addr 0xb190918, size 0xa4, virtual false, abstract: false, final false
static inline void SetViewportAndClear(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RTHandle*  buffer, ::UnityEngine::Rendering::ClearFlag  clearFlag, ::UnityEngine::Color  clearColor) ;

/// @brief Method Swap, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void Swap(::by_ref<T>  a, ::by_ref<T>  b) ;

static inline ::ArrayW<::UnityEngine::Vector3> getStaticF_lookAtList() ;

static inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* getStaticF_m_AssemblyTypes() ;

static inline ::UnityW<::UnityEngine::Cubemap> getStaticF_m_BlackCubeTexture() ;

static inline ::UnityW<::UnityEngine::Texture3D> getStaticF_m_BlackVolumeTexture() ;

static inline ::UnityEngine::GraphicsBuffer* getStaticF_m_EmptyBuffer() ;

static inline ::UnityW<::UnityEngine::RenderTexture> getStaticF_m_EmptyUAV() ;

static inline ::UnityW<::UnityEngine::Cubemap> getStaticF_m_MagentaCubeTexture() ;

static inline ::UnityW<::UnityEngine::CubemapArray> getStaticF_m_MagentaCubeTextureArray() ;

static inline ::UnityW<::UnityEngine::Cubemap> getStaticF_m_WhiteCubeTexture() ;

static inline ::UnityW<::UnityEngine::Texture3D> getStaticF_m_WhiteVolumeTexture() ;

static inline ::ArrayW<::UnityEngine::Vector3> getStaticF_upVectorList() ;

/// @brief Method get_blackCubeTexture, addr 0xb18ebe4, size 0x188, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Cubemap> get_blackCubeTexture() ;

/// @brief Method get_blackVolumeTexture, addr 0xb18f490, size 0x18c, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Texture3D> get_blackVolumeTexture() ;

/// @brief Method get_emptyBuffer, addr 0xb18f390, size 0x100, virtual false, abstract: false, final false
static inline ::UnityEngine::GraphicsBuffer* get_emptyBuffer() ;

/// @brief Method get_emptyUAV, addr 0xb18f250, size 0x140, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::RenderTexture> get_emptyUAV() ;

/// @brief Method get_magentaCubeTexture, addr 0xb18ed6c, size 0x188, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Cubemap> get_magentaCubeTexture() ;

/// @brief Method get_magentaCubeTextureArray, addr 0xb18eef4, size 0x1d4, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::CubemapArray> get_magentaCubeTextureArray() ;

/// @brief Method get_whiteCubeTexture, addr 0xb18f0c8, size 0x188, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Cubemap> get_whiteCubeTexture() ;

/// @brief Method get_whiteVolumeTexture, addr 0xb18f61c, size 0x188, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Texture3D> get_whiteVolumeTexture() ;

static inline void setStaticF_lookAtList(::ArrayW<::UnityEngine::Vector3>  value) ;

static inline void setStaticF_m_AssemblyTypes(::System::Collections::Generic::IEnumerable_1<::System::Type*>*  value) ;

static inline void setStaticF_m_BlackCubeTexture(::UnityW<::UnityEngine::Cubemap>  value) ;

static inline void setStaticF_m_BlackVolumeTexture(::UnityW<::UnityEngine::Texture3D>  value) ;

static inline void setStaticF_m_EmptyBuffer(::UnityEngine::GraphicsBuffer*  value) ;

static inline void setStaticF_m_EmptyUAV(::UnityW<::UnityEngine::RenderTexture>  value) ;

static inline void setStaticF_m_MagentaCubeTexture(::UnityW<::UnityEngine::Cubemap>  value) ;

static inline void setStaticF_m_MagentaCubeTextureArray(::UnityW<::UnityEngine::CubemapArray>  value) ;

static inline void setStaticF_m_WhiteCubeTexture(::UnityW<::UnityEngine::Cubemap>  value) ;

static inline void setStaticF_m_WhiteVolumeTexture(::UnityW<::UnityEngine::Texture3D>  value) ;

static inline void setStaticF_upVectorList(::ArrayW<::UnityEngine::Vector3>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CoreUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CoreUtils", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CoreUtils(CoreUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CoreUtils", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CoreUtils(CoreUtils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17004};

/// @brief Field assetCreateMenuPriority1 offset 0xffffffff size 0x4
static constexpr int32_t  assetCreateMenuPriority1{static_cast<int32_t>(0xe6)};

/// @brief Field assetCreateMenuPriority2 offset 0xffffffff size 0x4
static constexpr int32_t  assetCreateMenuPriority2{static_cast<int32_t>(0xf1)};

/// @brief Field assetCreateMenuPriority3 offset 0xffffffff size 0x4
static constexpr int32_t  assetCreateMenuPriority3{static_cast<int32_t>(0x12c)};

/// @brief Field editMenuPriority1 offset 0xffffffff size 0x4
static constexpr int32_t  editMenuPriority1{static_cast<int32_t>(0x140)};

/// @brief Field editMenuPriority2 offset 0xffffffff size 0x4
static constexpr int32_t  editMenuPriority2{static_cast<int32_t>(0x14b)};

/// @brief Field editMenuPriority3 offset 0xffffffff size 0x4
static constexpr int32_t  editMenuPriority3{static_cast<int32_t>(0x156)};

/// @brief Field editMenuPriority4 offset 0xffffffff size 0x4
static constexpr int32_t  editMenuPriority4{static_cast<int32_t>(0x161)};

/// @brief Field gameObjectMenuPriority offset 0xffffffff size 0x4
static constexpr int32_t  gameObjectMenuPriority{static_cast<int32_t>(0xa)};

/// @brief Field obsoletePriorityMessage offset 0xffffffff size 0x8
static constexpr ::ConstString  obsoletePriorityMessage{u"Use CoreUtils.Priorities instead"};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::CoreUtils) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::Rendering {
// cpp template
template<typename T>
// Is value type: false
// CS Name: UnityEngine.Rendering.CoreUtils/<>c__101`1<T>
class CORDL_TYPE CoreUtils___c__101_1 : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::Rendering::CoreUtils___c__101_1<T>*  __9;

/// @brief Field <>9__101_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__101_0, put=setStaticF___9__101_0)) ::System::Func_2<::System::Type*,bool>*  __9__101_0;

static inline ::UnityEngine::Rendering::CoreUtils___c__101_1<T>* New_ctor() ;

/// @brief Method <GetAllTypesDerivedFrom>b__101_0, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool _GetAllTypesDerivedFrom_b__101_0(::System::Type*  t) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Rendering::CoreUtils___c__101_1<T>* getStaticF___9() ;

static inline ::System::Func_2<::System::Type*,bool>* getStaticF___9__101_0() ;

static inline void setStaticF___9(::UnityEngine::Rendering::CoreUtils___c__101_1<T>*  value) ;

static inline void setStaticF___9__101_0(::System::Func_2<::System::Type*,bool>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CoreUtils___c__101_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CoreUtils___c__101_1", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CoreUtils___c__101_1(CoreUtils___c__101_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CoreUtils___c__101_1", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CoreUtils___c__101_1(CoreUtils___c__101_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17003};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Rendering
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.CoreUtils/<>c
class CORDL_TYPE CoreUtils___c : public ::System::Object {
public:
// Declarations
/// @brief Field <>9, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9, put=setStaticF___9)) ::UnityEngine::Rendering::CoreUtils___c*  __9;

/// @brief Field <>9__100_0, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF___9__100_0, put=setStaticF___9__100_0)) ::System::Func_2<::System::Reflection::Assembly*,::System::Collections::Generic::IEnumerable_1<::System::Type*>*>*  __9__100_0;

static inline ::UnityEngine::Rendering::CoreUtils___c* New_ctor() ;

/// @brief Method <GetAllAssemblyTypes>b__100_0, addr 0xb193774, size 0xe4, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* _GetAllAssemblyTypes_b__100_0(::System::Reflection::Assembly*  t) ;

/// @brief Method .ctor, addr 0xb19376c, size 0x8, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Rendering::CoreUtils___c* getStaticF___9() ;

static inline ::System::Func_2<::System::Reflection::Assembly*,::System::Collections::Generic::IEnumerable_1<::System::Type*>*>* getStaticF___9__100_0() ;

static inline void setStaticF___9(::UnityEngine::Rendering::CoreUtils___c*  value) ;

static inline void setStaticF___9__100_0(::System::Func_2<::System::Reflection::Assembly*,::System::Collections::Generic::IEnumerable_1<::System::Type*>*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CoreUtils___c() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CoreUtils___c", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CoreUtils___c(CoreUtils___c && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CoreUtils___c", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CoreUtils___c(CoreUtils___c const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17002};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::CoreUtils___c) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.CoreUtils/Priorities
class CORDL_TYPE CoreUtils_Priorities : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr CoreUtils_Priorities() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CoreUtils_Priorities", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CoreUtils_Priorities(CoreUtils_Priorities && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CoreUtils_Priorities", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CoreUtils_Priorities(CoreUtils_Priorities const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17001};

/// @brief Field assetsCreateRenderingMenuPriority offset 0xffffffff size 0x4
static constexpr int32_t  assetsCreateRenderingMenuPriority{static_cast<int32_t>(0x134)};

/// @brief Field assetsCreateShaderMenuPriority offset 0xffffffff size 0x4
static constexpr int32_t  assetsCreateShaderMenuPriority{static_cast<int32_t>(0x53)};

/// @brief Field editMenuPriority offset 0xffffffff size 0x4
static constexpr int32_t  editMenuPriority{static_cast<int32_t>(0x140)};

/// @brief Field gameObjectMenuPriority offset 0xffffffff size 0x4
static constexpr int32_t  gameObjectMenuPriority{static_cast<int32_t>(0xa)};

/// @brief Field scriptingPriority offset 0xffffffff size 0x4
static constexpr int32_t  scriptingPriority{static_cast<int32_t>(0x28)};

/// @brief Field srpLensFlareMenuPriority offset 0xffffffff size 0x4
static constexpr int32_t  srpLensFlareMenuPriority{static_cast<int32_t>(0x9)};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::CoreUtils_Priorities) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.CoreUtils/Sections
class CORDL_TYPE CoreUtils_Sections : public ::System::Object {
public:
// Declarations
protected:
// Ctor Parameters []
// @brief default ctor
constexpr CoreUtils_Sections() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CoreUtils_Sections", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CoreUtils_Sections(CoreUtils_Sections && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CoreUtils_Sections", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CoreUtils_Sections(CoreUtils_Sections const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17000};

/// @brief Field section1 offset 0xffffffff size 0x4
static constexpr int32_t  section1{static_cast<int32_t>(0x2710)};

/// @brief Field section2 offset 0xffffffff size 0x4
static constexpr int32_t  section2{static_cast<int32_t>(0x4e20)};

/// @brief Field section3 offset 0xffffffff size 0x4
static constexpr int32_t  section3{static_cast<int32_t>(0x7530)};

/// @brief Field section4 offset 0xffffffff size 0x4
static constexpr int32_t  section4{static_cast<int32_t>(0x9c40)};

/// @brief Field section5 offset 0xffffffff size 0x4
static constexpr int32_t  section5{static_cast<int32_t>(0xc350)};

/// @brief Field section6 offset 0xffffffff size 0x4
static constexpr int32_t  section6{static_cast<int32_t>(0xea60)};

/// @brief Field section7 offset 0xffffffff size 0x4
static constexpr int32_t  section7{static_cast<int32_t>(0x11170)};

/// @brief Field section8 offset 0xffffffff size 0x4
static constexpr int32_t  section8{static_cast<int32_t>(0x13880)};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::CoreUtils_Sections) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
