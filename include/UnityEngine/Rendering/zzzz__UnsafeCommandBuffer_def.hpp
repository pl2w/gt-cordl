#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UnsafeCommandBuffer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/zzzz__BaseCommandBuffer_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(UnsafeCommandBuffer)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
template<typename T>
class Action_1;
}
namespace System {
class Array;
}
namespace System {
struct IntPtr;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace Unity::Profiling {
struct ProfilerMarker;
}
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
}
namespace UnityEngine::Profiling {
class CustomSampler;
}
namespace UnityEngine::Rendering::RenderGraphModule {
class RenderGraphPass;
}
namespace UnityEngine::Rendering::RenderGraphModule {
struct TextureHandle;
}
namespace UnityEngine::Rendering {
struct AsyncGPUReadbackRequest;
}
namespace UnityEngine::Rendering {
struct CameraLateLatchMatrixType;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
struct FoveatedRenderingMode;
}
namespace UnityEngine::Rendering {
struct GlobalKeyword;
}
namespace UnityEngine::Rendering {
class IBaseCommandBuffer;
}
namespace UnityEngine::Rendering {
class IComputeCommandBuffer;
}
namespace UnityEngine::Rendering {
class IRasterCommandBuffer;
}
namespace UnityEngine::Rendering {
class IUnsafeCommandBuffer;
}
namespace UnityEngine::Rendering {
struct LocalKeyword;
}
namespace UnityEngine::Rendering {
struct RTClearFlags;
}
namespace UnityEngine::Rendering {
class RayTracingAccelerationStructure;
}
namespace UnityEngine::Rendering {
class RayTracingShader;
}
namespace UnityEngine::Rendering {
struct RenderBufferLoadAction;
}
namespace UnityEngine::Rendering {
struct RenderBufferStoreAction;
}
namespace UnityEngine::Rendering {
struct RenderTargetBinding;
}
namespace UnityEngine::Rendering {
struct RenderTargetIdentifier;
}
namespace UnityEngine::Rendering {
struct RenderTextureSubElement;
}
namespace UnityEngine::Rendering {
struct RendererList;
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
struct ShadowSamplingMode;
}
namespace UnityEngine::Rendering {
struct SinglePassStereoMode;
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
struct CubemapFace;
}
namespace UnityEngine {
struct GraphicsBufferHandle;
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
struct MeshTopology;
}
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine {
struct RectInt;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
class Renderer;
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
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class UnsafeCommandBuffer;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::UnsafeCommandBuffer*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::UnsafeCommandBuffer*, "UnityEngine.Rendering", "UnsafeCommandBuffer");
// Dependencies UnityEngine.Rendering.BaseCommandBuffer
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.UnsafeCommandBuffer
class CORDL_TYPE UnsafeCommandBuffer : public ::UnityEngine::Rendering::BaseCommandBuffer {
public:
// Declarations
/// @brief Convert operator to "::UnityEngine::Rendering::IBaseCommandBuffer"
constexpr operator  ::UnityEngine::Rendering::IBaseCommandBuffer*() noexcept;

/// @brief Convert operator to "::UnityEngine::Rendering::IComputeCommandBuffer"
constexpr operator  ::UnityEngine::Rendering::IComputeCommandBuffer*() noexcept;

/// @brief Convert operator to "::UnityEngine::Rendering::IRasterCommandBuffer"
constexpr operator  ::UnityEngine::Rendering::IRasterCommandBuffer*() noexcept;

/// @brief Convert operator to "::UnityEngine::Rendering::IUnsafeCommandBuffer"
constexpr operator  ::UnityEngine::Rendering::IUnsafeCommandBuffer*() noexcept;

/// @brief Method BeginSample, addr 0xb11fc74, size 0x4, virtual true, abstract: false, final true
inline void BeginSample(::Unity::Profiling::ProfilerMarker  marker) ;

/// @brief Method BeginSample, addr 0xb11fc14, size 0x18, virtual true, abstract: false, final true
inline void BeginSample(::StringW  name) ;

/// @brief Method BeginSample, addr 0xb11fc44, size 0x18, virtual true, abstract: false, final true
inline void BeginSample(::UnityEngine::Profiling::CustomSampler*  sampler) ;

/// @brief Method BuildRayTracingAccelerationStructure, addr 0xb1209a8, size 0x18, virtual true, abstract: false, final true
inline void BuildRayTracingAccelerationStructure(::UnityEngine::Rendering::RayTracingAccelerationStructure*  accelerationStructure) ;

/// @brief Method BuildRayTracingAccelerationStructure, addr 0xb1209c0, size 0x18, virtual true, abstract: false, final true
inline void BuildRayTracingAccelerationStructure(::UnityEngine::Rendering::RayTracingAccelerationStructure*  accelerationStructure, ::UnityEngine::Vector3  relativeOrigin) ;

/// @brief Method Clear, addr 0xb11f864, size 0x18, virtual true, abstract: false, final true
inline void Clear() ;

/// @brief Method ClearRenderTarget, addr 0xb11f8c4, size 0x20, virtual true, abstract: false, final true
inline void ClearRenderTarget(bool  clearDepth, bool  clearColor, ::UnityEngine::Color  backgroundColor) ;

/// @brief Method ClearRenderTarget, addr 0xb11f8e4, size 0x20, virtual true, abstract: false, final true
inline void ClearRenderTarget(bool  clearDepth, bool  clearColor, ::UnityEngine::Color  backgroundColor, float_t  depth) ;

/// @brief Method ClearRenderTarget, addr 0xb11f904, size 0x20, virtual true, abstract: false, final true
inline void ClearRenderTarget(bool  clearDepth, bool  clearColor, ::UnityEngine::Color  backgroundColor, float_t  depth, uint32_t  stencil) ;

/// @brief Method ClearRenderTarget, addr 0xb11f924, size 0x18, virtual true, abstract: false, final true
inline void ClearRenderTarget(::UnityEngine::Rendering::RTClearFlags  clearFlags, ::UnityEngine::Color  backgroundColor, float_t  depth, uint32_t  stencil) ;

/// @brief Method ClearRenderTarget, addr 0xb11f93c, size 0x18, virtual true, abstract: false, final true
inline void ClearRenderTarget(::UnityEngine::Rendering::RTClearFlags  clearFlags, ::ArrayW<::UnityEngine::Color>  backgroundColors, float_t  depth, uint32_t  stencil) ;

/// @brief Method ConfigureFoveatedRendering, addr 0xb11fd04, size 0x18, virtual true, abstract: false, final true
inline void ConfigureFoveatedRendering(::System::IntPtr  platformData) ;

/// @brief Method CopyCounterValue, addr 0xb121598, size 0x18, virtual true, abstract: false, final true
inline void CopyCounterValue(::UnityEngine::ComputeBuffer*  src, ::UnityEngine::ComputeBuffer*  dst, uint32_t  dstOffsetBytes) ;

/// @brief Method CopyCounterValue, addr 0xb1215c8, size 0x18, virtual true, abstract: false, final true
inline void CopyCounterValue(::UnityEngine::ComputeBuffer*  src, ::UnityEngine::GraphicsBuffer*  dst, uint32_t  dstOffsetBytes) ;

/// @brief Method CopyCounterValue, addr 0xb1215b0, size 0x18, virtual true, abstract: false, final true
inline void CopyCounterValue(::UnityEngine::GraphicsBuffer*  src, ::UnityEngine::ComputeBuffer*  dst, uint32_t  dstOffsetBytes) ;

/// @brief Method CopyCounterValue, addr 0xb1215e0, size 0x18, virtual true, abstract: false, final true
inline void CopyCounterValue(::UnityEngine::GraphicsBuffer*  src, ::UnityEngine::GraphicsBuffer*  dst, uint32_t  dstOffsetBytes) ;

/// @brief Method DisableKeyword, addr 0xb11fab0, size 0x18, virtual false, abstract: false, final false
inline void DisableKeyword(::UnityEngine::ComputeShader*  computeShader, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::LocalKeyword>  keyword) ;

/// @brief Method DisableKeyword, addr 0xb11fa80, size 0x18, virtual false, abstract: false, final false
inline void DisableKeyword(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::GlobalKeyword>  keyword) ;

/// @brief Method DisableKeyword, addr 0xb11fa98, size 0x18, virtual false, abstract: false, final false
inline void DisableKeyword(::UnityEngine::Material*  material, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::LocalKeyword>  keyword) ;

/// @brief Method DisableScissorRect, addr 0xb11f8ac, size 0x18, virtual true, abstract: false, final true
inline void DisableScissorRect() ;

/// @brief Method DisableShaderKeyword, addr 0xb11fa68, size 0x18, virtual true, abstract: false, final true
inline void DisableShaderKeyword(::StringW  keyword) ;

/// @brief Method DispatchCompute, addr 0xb120978, size 0x18, virtual true, abstract: false, final true
inline void DispatchCompute(::UnityEngine::ComputeShader*  computeShader, int32_t  kernelIndex, ::UnityEngine::ComputeBuffer*  indirectBuffer, uint32_t  argsOffset) ;

/// @brief Method DispatchCompute, addr 0xb120990, size 0x18, virtual true, abstract: false, final true
inline void DispatchCompute(::UnityEngine::ComputeShader*  computeShader, int32_t  kernelIndex, ::UnityEngine::GraphicsBuffer*  indirectBuffer, uint32_t  argsOffset) ;

/// @brief Method DispatchCompute, addr 0xb120960, size 0x18, virtual true, abstract: false, final true
inline void DispatchCompute(::UnityEngine::ComputeShader*  computeShader, int32_t  kernelIndex, int32_t  threadGroupsX, int32_t  threadGroupsY, int32_t  threadGroupsZ) ;

/// @brief Method DispatchRays, addr 0xb120e98, size 0x18, virtual true, abstract: false, final true
inline void DispatchRays(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, ::StringW  rayGenName, ::UnityEngine::GraphicsBuffer*  argsBuffer, uint32_t  argsOffset, ::UnityEngine::Camera*  camera) ;

/// @brief Method DispatchRays, addr 0xb120e80, size 0x18, virtual true, abstract: false, final true
inline void DispatchRays(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, ::StringW  rayGenName, uint32_t  width, uint32_t  height, uint32_t  depth, ::UnityEngine::Camera*  camera) ;

/// @brief Method DrawMesh, addr 0xb120f64, size 0x3c, virtual true, abstract: false, final true
inline void DrawMesh(::UnityEngine::Mesh*  mesh, ::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material) ;

/// @brief Method DrawMesh, addr 0xb120f28, size 0x3c, virtual true, abstract: false, final true
inline void DrawMesh(::UnityEngine::Mesh*  mesh, ::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  submeshIndex) ;

/// @brief Method DrawMesh, addr 0xb120eec, size 0x3c, virtual true, abstract: false, final true
inline void DrawMesh(::UnityEngine::Mesh*  mesh, ::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  submeshIndex, int32_t  shaderPass) ;

/// @brief Method DrawMesh, addr 0xb120eb0, size 0x3c, virtual true, abstract: false, final true
inline void DrawMesh(::UnityEngine::Mesh*  mesh, ::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  submeshIndex, int32_t  shaderPass, ::UnityEngine::MaterialPropertyBlock*  properties) ;

/// @brief Method DrawMeshInstanced, addr 0xb1214b8, size 0x18, virtual true, abstract: false, final true
inline void DrawMeshInstanced(::UnityEngine::Mesh*  mesh, int32_t  submeshIndex, ::UnityEngine::Material*  material, int32_t  shaderPass, ::ArrayW<::UnityEngine::Matrix4x4>  matrices) ;

/// @brief Method DrawMeshInstanced, addr 0xb1214a0, size 0x18, virtual true, abstract: false, final true
inline void DrawMeshInstanced(::UnityEngine::Mesh*  mesh, int32_t  submeshIndex, ::UnityEngine::Material*  material, int32_t  shaderPass, ::ArrayW<::UnityEngine::Matrix4x4>  matrices, int32_t  count) ;

/// @brief Method DrawMeshInstanced, addr 0xb121484, size 0x1c, virtual true, abstract: false, final true
inline void DrawMeshInstanced(::UnityEngine::Mesh*  mesh, int32_t  submeshIndex, ::UnityEngine::Material*  material, int32_t  shaderPass, ::ArrayW<::UnityEngine::Matrix4x4>  matrices, int32_t  count, ::UnityEngine::MaterialPropertyBlock*  properties) ;

/// @brief Method DrawMeshInstancedIndirect, addr 0xb12151c, size 0x18, virtual true, abstract: false, final true
inline void DrawMeshInstancedIndirect(::UnityEngine::Mesh*  mesh, int32_t  submeshIndex, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::ComputeBuffer*  bufferWithArgs) ;

/// @brief Method DrawMeshInstancedIndirect, addr 0xb121504, size 0x18, virtual true, abstract: false, final true
inline void DrawMeshInstancedIndirect(::UnityEngine::Mesh*  mesh, int32_t  submeshIndex, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::ComputeBuffer*  bufferWithArgs, int32_t  argsOffset) ;

/// @brief Method DrawMeshInstancedIndirect, addr 0xb1214e8, size 0x1c, virtual true, abstract: false, final true
inline void DrawMeshInstancedIndirect(::UnityEngine::Mesh*  mesh, int32_t  submeshIndex, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::ComputeBuffer*  bufferWithArgs, int32_t  argsOffset, ::UnityEngine::MaterialPropertyBlock*  properties) ;

/// @brief Method DrawMeshInstancedIndirect, addr 0xb121568, size 0x18, virtual true, abstract: false, final true
inline void DrawMeshInstancedIndirect(::UnityEngine::Mesh*  mesh, int32_t  submeshIndex, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::GraphicsBuffer*  bufferWithArgs) ;

/// @brief Method DrawMeshInstancedIndirect, addr 0xb121550, size 0x18, virtual true, abstract: false, final true
inline void DrawMeshInstancedIndirect(::UnityEngine::Mesh*  mesh, int32_t  submeshIndex, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::GraphicsBuffer*  bufferWithArgs, int32_t  argsOffset) ;

/// @brief Method DrawMeshInstancedIndirect, addr 0xb121534, size 0x1c, virtual true, abstract: false, final true
inline void DrawMeshInstancedIndirect(::UnityEngine::Mesh*  mesh, int32_t  submeshIndex, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::GraphicsBuffer*  bufferWithArgs, int32_t  argsOffset, ::UnityEngine::MaterialPropertyBlock*  properties) ;

/// @brief Method DrawMeshInstancedProcedural, addr 0xb1214d0, size 0x18, virtual true, abstract: false, final true
inline void DrawMeshInstancedProcedural(::UnityEngine::Mesh*  mesh, int32_t  submeshIndex, ::UnityEngine::Material*  material, int32_t  shaderPass, int32_t  count, ::UnityEngine::MaterialPropertyBlock*  properties) ;

/// @brief Method DrawMultipleMeshes, addr 0xb120fa0, size 0x1c, virtual true, abstract: false, final true
inline void DrawMultipleMeshes(::ArrayW<::UnityEngine::Matrix4x4>  matrices, ::ArrayW<::UnityEngine::Mesh*>  meshes, ::ArrayW<int32_t>  subsetIndices, int32_t  count, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::MaterialPropertyBlock*  properties) ;

/// @brief Method DrawOcclusionMesh, addr 0xb121580, size 0x18, virtual true, abstract: false, final true
inline void DrawOcclusionMesh(::UnityEngine::RectInt  normalizedCamViewport) ;

/// @brief Method DrawProcedural, addr 0xb121170, size 0x3c, virtual true, abstract: false, final true
inline void DrawProcedural(::UnityEngine::GraphicsBuffer*  indexBuffer, ::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::MeshTopology  topology, int32_t  indexCount) ;

/// @brief Method DrawProcedural, addr 0xb121134, size 0x3c, virtual true, abstract: false, final true
inline void DrawProcedural(::UnityEngine::GraphicsBuffer*  indexBuffer, ::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::MeshTopology  topology, int32_t  indexCount, int32_t  instanceCount) ;

/// @brief Method DrawProcedural, addr 0xb1210f4, size 0x40, virtual true, abstract: false, final true
inline void DrawProcedural(::UnityEngine::GraphicsBuffer*  indexBuffer, ::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::MeshTopology  topology, int32_t  indexCount, int32_t  instanceCount, ::UnityEngine::MaterialPropertyBlock*  properties) ;

/// @brief Method DrawProcedural, addr 0xb1210b8, size 0x3c, virtual true, abstract: false, final true
inline void DrawProcedural(::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::MeshTopology  topology, int32_t  vertexCount) ;

/// @brief Method DrawProcedural, addr 0xb12107c, size 0x3c, virtual true, abstract: false, final true
inline void DrawProcedural(::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::MeshTopology  topology, int32_t  vertexCount, int32_t  instanceCount) ;

/// @brief Method DrawProcedural, addr 0xb121040, size 0x3c, virtual true, abstract: false, final true
inline void DrawProcedural(::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::MeshTopology  topology, int32_t  vertexCount, int32_t  instanceCount, ::UnityEngine::MaterialPropertyBlock*  properties) ;

/// @brief Method DrawProceduralIndirect, addr 0xb1212dc, size 0x3c, virtual true, abstract: false, final true
inline void DrawProceduralIndirect(::UnityEngine::GraphicsBuffer*  indexBuffer, ::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::MeshTopology  topology, ::UnityEngine::ComputeBuffer*  bufferWithArgs) ;

/// @brief Method DrawProceduralIndirect, addr 0xb1212a0, size 0x3c, virtual true, abstract: false, final true
inline void DrawProceduralIndirect(::UnityEngine::GraphicsBuffer*  indexBuffer, ::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::MeshTopology  topology, ::UnityEngine::ComputeBuffer*  bufferWithArgs, int32_t  argsOffset) ;

/// @brief Method DrawProceduralIndirect, addr 0xb121260, size 0x40, virtual true, abstract: false, final true
inline void DrawProceduralIndirect(::UnityEngine::GraphicsBuffer*  indexBuffer, ::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::MeshTopology  topology, ::UnityEngine::ComputeBuffer*  bufferWithArgs, int32_t  argsOffset, ::UnityEngine::MaterialPropertyBlock*  properties) ;

/// @brief Method DrawProceduralIndirect, addr 0xb121448, size 0x3c, virtual true, abstract: false, final true
inline void DrawProceduralIndirect(::UnityEngine::GraphicsBuffer*  indexBuffer, ::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::MeshTopology  topology, ::UnityEngine::GraphicsBuffer*  bufferWithArgs) ;

/// @brief Method DrawProceduralIndirect, addr 0xb12140c, size 0x3c, virtual true, abstract: false, final true
inline void DrawProceduralIndirect(::UnityEngine::GraphicsBuffer*  indexBuffer, ::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::MeshTopology  topology, ::UnityEngine::GraphicsBuffer*  bufferWithArgs, int32_t  argsOffset) ;

/// @brief Method DrawProceduralIndirect, addr 0xb1213cc, size 0x40, virtual true, abstract: false, final true
inline void DrawProceduralIndirect(::UnityEngine::GraphicsBuffer*  indexBuffer, ::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::MeshTopology  topology, ::UnityEngine::GraphicsBuffer*  bufferWithArgs, int32_t  argsOffset, ::UnityEngine::MaterialPropertyBlock*  properties) ;

/// @brief Method DrawProceduralIndirect, addr 0xb121224, size 0x3c, virtual true, abstract: false, final true
inline void DrawProceduralIndirect(::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::MeshTopology  topology, ::UnityEngine::ComputeBuffer*  bufferWithArgs) ;

/// @brief Method DrawProceduralIndirect, addr 0xb1211e8, size 0x3c, virtual true, abstract: false, final true
inline void DrawProceduralIndirect(::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::MeshTopology  topology, ::UnityEngine::ComputeBuffer*  bufferWithArgs, int32_t  argsOffset) ;

/// @brief Method DrawProceduralIndirect, addr 0xb1211ac, size 0x3c, virtual true, abstract: false, final true
inline void DrawProceduralIndirect(::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::MeshTopology  topology, ::UnityEngine::ComputeBuffer*  bufferWithArgs, int32_t  argsOffset, ::UnityEngine::MaterialPropertyBlock*  properties) ;

/// @brief Method DrawProceduralIndirect, addr 0xb121390, size 0x3c, virtual true, abstract: false, final true
inline void DrawProceduralIndirect(::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::MeshTopology  topology, ::UnityEngine::GraphicsBuffer*  bufferWithArgs) ;

/// @brief Method DrawProceduralIndirect, addr 0xb121354, size 0x3c, virtual true, abstract: false, final true
inline void DrawProceduralIndirect(::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::MeshTopology  topology, ::UnityEngine::GraphicsBuffer*  bufferWithArgs, int32_t  argsOffset) ;

/// @brief Method DrawProceduralIndirect, addr 0xb121318, size 0x3c, virtual true, abstract: false, final true
inline void DrawProceduralIndirect(::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::MeshTopology  topology, ::UnityEngine::GraphicsBuffer*  bufferWithArgs, int32_t  argsOffset, ::UnityEngine::MaterialPropertyBlock*  properties) ;

/// @brief Method DrawRenderer, addr 0xb120fec, size 0x18, virtual true, abstract: false, final true
inline void DrawRenderer(::UnityEngine::Renderer*  renderer, ::UnityEngine::Material*  material) ;

/// @brief Method DrawRenderer, addr 0xb120fd4, size 0x18, virtual true, abstract: false, final true
inline void DrawRenderer(::UnityEngine::Renderer*  renderer, ::UnityEngine::Material*  material, int32_t  submeshIndex) ;

/// @brief Method DrawRenderer, addr 0xb120fbc, size 0x18, virtual true, abstract: false, final true
inline void DrawRenderer(::UnityEngine::Renderer*  renderer, ::UnityEngine::Material*  material, int32_t  submeshIndex, int32_t  shaderPass) ;

/// @brief Method DrawRendererList, addr 0xb121004, size 0x3c, virtual true, abstract: false, final true
inline void DrawRendererList(::UnityEngine::Rendering::RendererList  rendererList) ;

/// @brief Method EnableKeyword, addr 0xb11fa50, size 0x18, virtual false, abstract: false, final false
inline void EnableKeyword(::UnityEngine::ComputeShader*  computeShader, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::LocalKeyword>  keyword) ;

/// @brief Method EnableKeyword, addr 0xb11fa20, size 0x18, virtual false, abstract: false, final false
inline void EnableKeyword(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::GlobalKeyword>  keyword) ;

/// @brief Method EnableKeyword, addr 0xb11fa38, size 0x18, virtual false, abstract: false, final false
inline void EnableKeyword(::UnityEngine::Material*  material, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::LocalKeyword>  keyword) ;

/// @brief Method EnableScissorRect, addr 0xb11f894, size 0x18, virtual true, abstract: false, final true
inline void EnableScissorRect(::UnityEngine::Rect  scissor) ;

/// @brief Method EnableShaderKeyword, addr 0xb11fa08, size 0x18, virtual true, abstract: false, final true
inline void EnableShaderKeyword(::StringW  keyword) ;

/// @brief Method EndSample, addr 0xb11fc78, size 0x4, virtual true, abstract: false, final true
inline void EndSample(::Unity::Profiling::ProfilerMarker  marker) ;

/// @brief Method EndSample, addr 0xb11fc2c, size 0x18, virtual true, abstract: false, final true
inline void EndSample(::StringW  name) ;

/// @brief Method EndSample, addr 0xb11fc5c, size 0x18, virtual true, abstract: false, final true
inline void EndSample(::UnityEngine::Profiling::CustomSampler*  sampler) ;

/// @brief Method IncrementUpdateCount, addr 0xb11fc7c, size 0x3c, virtual true, abstract: false, final true
inline void IncrementUpdateCount(::UnityEngine::Rendering::RenderTargetIdentifier  dest) ;

/// @brief Method InvokeOnRenderObjectCallbacks, addr 0xb1201d4, size 0x18, virtual true, abstract: false, final true
inline void InvokeOnRenderObjectCallbacks() ;

/// @brief Method IssuePluginCustomBlit, addr 0xb121bc8, size 0x50, virtual true, abstract: false, final true
inline void IssuePluginCustomBlit(::System::IntPtr  callback, uint32_t  command, ::UnityEngine::Rendering::RenderTargetIdentifier  source, ::UnityEngine::Rendering::RenderTargetIdentifier  dest, uint32_t  commandParam, uint32_t  commandFlags) ;

/// @brief Method IssuePluginCustomTextureUpdateV2, addr 0xb121c18, size 0x18, virtual true, abstract: false, final true
inline void IssuePluginCustomTextureUpdateV2(::System::IntPtr  callback, ::UnityEngine::Texture*  targetTexture, uint32_t  userData) ;

/// @brief Method IssuePluginEvent, addr 0xb121b98, size 0x18, virtual true, abstract: false, final true
inline void IssuePluginEvent(::System::IntPtr  callback, int32_t  eventID) ;

/// @brief Method IssuePluginEventAndData, addr 0xb121bb0, size 0x18, virtual true, abstract: false, final true
inline void IssuePluginEventAndData(::System::IntPtr  callback, int32_t  eventID, ::System::IntPtr  data) ;

/// @brief Method MarkLateLatchMatrixShaderPropertyID, addr 0xb11fbe4, size 0x18, virtual true, abstract: false, final true
inline void MarkLateLatchMatrixShaderPropertyID(::UnityEngine::Rendering::CameraLateLatchMatrixType  matrixPropertyType, int32_t  shaderPropertyID) ;

static inline ::UnityEngine::Rendering::UnsafeCommandBuffer* New_ctor(::UnityEngine::Rendering::CommandBuffer*  wrapped, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*  executingPass, bool  isAsync) ;

/// @brief Method RequestAsyncReadbackIntoNativeArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void RequestAsyncReadbackIntoNativeArray(::by_ref<::Unity::Collections::NativeArray_1<T>>  output, ::UnityEngine::ComputeBuffer*  src, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*  callback) ;

/// @brief Method RequestAsyncReadbackIntoNativeArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void RequestAsyncReadbackIntoNativeArray(::by_ref<::Unity::Collections::NativeArray_1<T>>  output, ::UnityEngine::ComputeBuffer*  src, int32_t  size, int32_t  offset, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*  callback) ;

/// @brief Method RequestAsyncReadbackIntoNativeArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void RequestAsyncReadbackIntoNativeArray(::by_ref<::Unity::Collections::NativeArray_1<T>>  output, ::UnityEngine::GraphicsBuffer*  src, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*  callback) ;

/// @brief Method RequestAsyncReadbackIntoNativeArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void RequestAsyncReadbackIntoNativeArray(::by_ref<::Unity::Collections::NativeArray_1<T>>  output, ::UnityEngine::GraphicsBuffer*  src, int32_t  size, int32_t  offset, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*  callback) ;

/// @brief Method RequestAsyncReadbackIntoNativeArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void RequestAsyncReadbackIntoNativeArray(::by_ref<::Unity::Collections::NativeArray_1<T>>  output, ::UnityEngine::Texture*  src, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*  callback) ;

/// @brief Method RequestAsyncReadbackIntoNativeArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void RequestAsyncReadbackIntoNativeArray(::by_ref<::Unity::Collections::NativeArray_1<T>>  output, ::UnityEngine::Texture*  src, int32_t  mipIndex, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*  callback) ;

/// @brief Method RequestAsyncReadbackIntoNativeArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void RequestAsyncReadbackIntoNativeArray(::by_ref<::Unity::Collections::NativeArray_1<T>>  output, ::UnityEngine::Texture*  src, int32_t  mipIndex, ::UnityEngine::Experimental::Rendering::GraphicsFormat  dstFormat, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*  callback) ;

/// @brief Method RequestAsyncReadbackIntoNativeArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void RequestAsyncReadbackIntoNativeArray(::by_ref<::Unity::Collections::NativeArray_1<T>>  output, ::UnityEngine::Texture*  src, int32_t  mipIndex, ::UnityEngine::TextureFormat  dstFormat, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*  callback) ;

/// @brief Method RequestAsyncReadbackIntoNativeArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void RequestAsyncReadbackIntoNativeArray(::by_ref<::Unity::Collections::NativeArray_1<T>>  output, ::UnityEngine::Texture*  src, int32_t  mipIndex, int32_t  x, int32_t  width, int32_t  y, int32_t  height, int32_t  z, int32_t  depth, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*  callback) ;

/// @brief Method RequestAsyncReadbackIntoNativeArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void RequestAsyncReadbackIntoNativeArray(::by_ref<::Unity::Collections::NativeArray_1<T>>  output, ::UnityEngine::Texture*  src, int32_t  mipIndex, int32_t  x, int32_t  width, int32_t  y, int32_t  height, int32_t  z, int32_t  depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat  dstFormat, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*  callback) ;

/// @brief Method RequestAsyncReadbackIntoNativeArray, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void RequestAsyncReadbackIntoNativeArray(::by_ref<::Unity::Collections::NativeArray_1<T>>  output, ::UnityEngine::Texture*  src, int32_t  mipIndex, int32_t  x, int32_t  width, int32_t  y, int32_t  height, int32_t  z, int32_t  depth, ::UnityEngine::TextureFormat  dstFormat, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*  callback) ;

/// @brief Method SetBufferCounterValue, addr 0xb12015c, size 0x18, virtual true, abstract: false, final true
inline void SetBufferCounterValue(::UnityEngine::ComputeBuffer*  buffer, uint32_t  counterValue) ;

/// @brief Method SetBufferCounterValue, addr 0xb1201a4, size 0x18, virtual true, abstract: false, final true
inline void SetBufferCounterValue(::UnityEngine::GraphicsBuffer*  buffer, uint32_t  counterValue) ;

/// @brief Method SetBufferData, addr 0xb12012c, size 0x18, virtual true, abstract: false, final true
inline void SetBufferData(::UnityEngine::ComputeBuffer*  buffer, ::System::Array*  data) ;

/// @brief Method SetBufferData, addr 0xb120144, size 0x18, virtual true, abstract: false, final true
inline void SetBufferData(::UnityEngine::ComputeBuffer*  buffer, ::System::Array*  data, int32_t  managedBufferStartIndex, int32_t  graphicsBufferStartIndex, int32_t  count) ;

/// @brief Method SetBufferData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void SetBufferData(::UnityEngine::ComputeBuffer*  buffer, ::System::Collections::Generic::List_1<T>*  data) ;

/// @brief Method SetBufferData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void SetBufferData(::UnityEngine::ComputeBuffer*  buffer, ::System::Collections::Generic::List_1<T>*  data, int32_t  managedBufferStartIndex, int32_t  graphicsBufferStartIndex, int32_t  count) ;

/// @brief Method SetBufferData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void SetBufferData(::UnityEngine::ComputeBuffer*  buffer, ::Unity::Collections::NativeArray_1<T>  data) ;

/// @brief Method SetBufferData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void SetBufferData(::UnityEngine::ComputeBuffer*  buffer, ::Unity::Collections::NativeArray_1<T>  data, int32_t  nativeBufferStartIndex, int32_t  graphicsBufferStartIndex, int32_t  count) ;

/// @brief Method SetBufferData, addr 0xb120174, size 0x18, virtual true, abstract: false, final true
inline void SetBufferData(::UnityEngine::GraphicsBuffer*  buffer, ::System::Array*  data) ;

/// @brief Method SetBufferData, addr 0xb12018c, size 0x18, virtual true, abstract: false, final true
inline void SetBufferData(::UnityEngine::GraphicsBuffer*  buffer, ::System::Array*  data, int32_t  managedBufferStartIndex, int32_t  graphicsBufferStartIndex, int32_t  count) ;

/// @brief Method SetBufferData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void SetBufferData(::UnityEngine::GraphicsBuffer*  buffer, ::System::Collections::Generic::List_1<T>*  data) ;

/// @brief Method SetBufferData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void SetBufferData(::UnityEngine::GraphicsBuffer*  buffer, ::System::Collections::Generic::List_1<T>*  data, int32_t  managedBufferStartIndex, int32_t  graphicsBufferStartIndex, int32_t  count) ;

/// @brief Method SetBufferData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void SetBufferData(::UnityEngine::GraphicsBuffer*  buffer, ::Unity::Collections::NativeArray_1<T>  data) ;

/// @brief Method SetBufferData, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void SetBufferData(::UnityEngine::GraphicsBuffer*  buffer, ::Unity::Collections::NativeArray_1<T>  data, int32_t  nativeBufferStartIndex, int32_t  graphicsBufferStartIndex, int32_t  count) ;

/// @brief Method SetComputeBufferParam, addr 0xb120880, size 0x18, virtual true, abstract: false, final true
inline void SetComputeBufferParam(::UnityEngine::ComputeShader*  computeShader, int32_t  kernelIndex, ::StringW  name, ::UnityEngine::ComputeBuffer*  buffer) ;

/// @brief Method SetComputeBufferParam, addr 0xb1208e8, size 0x18, virtual true, abstract: false, final true
inline void SetComputeBufferParam(::UnityEngine::ComputeShader*  computeShader, int32_t  kernelIndex, ::StringW  name, ::UnityEngine::GraphicsBuffer*  buffer) ;

/// @brief Method SetComputeBufferParam, addr 0xb1208b4, size 0x1c, virtual true, abstract: false, final true
inline void SetComputeBufferParam(::UnityEngine::ComputeShader*  computeShader, int32_t  kernelIndex, ::StringW  name, ::UnityEngine::GraphicsBufferHandle  bufferHandle) ;

/// @brief Method SetComputeBufferParam, addr 0xb120868, size 0x18, virtual true, abstract: false, final true
inline void SetComputeBufferParam(::UnityEngine::ComputeShader*  computeShader, int32_t  kernelIndex, int32_t  nameID, ::UnityEngine::ComputeBuffer*  buffer) ;

/// @brief Method SetComputeBufferParam, addr 0xb1208d0, size 0x18, virtual true, abstract: false, final true
inline void SetComputeBufferParam(::UnityEngine::ComputeShader*  computeShader, int32_t  kernelIndex, int32_t  nameID, ::UnityEngine::GraphicsBuffer*  buffer) ;

/// @brief Method SetComputeBufferParam, addr 0xb120898, size 0x1c, virtual true, abstract: false, final true
inline void SetComputeBufferParam(::UnityEngine::ComputeShader*  computeShader, int32_t  kernelIndex, int32_t  nameID, ::UnityEngine::GraphicsBufferHandle  bufferHandle) ;

/// @brief Method SetComputeConstantBufferParam, addr 0xb120918, size 0x18, virtual true, abstract: false, final true
inline void SetComputeConstantBufferParam(::UnityEngine::ComputeShader*  computeShader, ::StringW  name, ::UnityEngine::ComputeBuffer*  buffer, int32_t  offset, int32_t  size) ;

/// @brief Method SetComputeConstantBufferParam, addr 0xb120948, size 0x18, virtual true, abstract: false, final true
inline void SetComputeConstantBufferParam(::UnityEngine::ComputeShader*  computeShader, ::StringW  name, ::UnityEngine::GraphicsBuffer*  buffer, int32_t  offset, int32_t  size) ;

/// @brief Method SetComputeConstantBufferParam, addr 0xb120900, size 0x18, virtual true, abstract: false, final true
inline void SetComputeConstantBufferParam(::UnityEngine::ComputeShader*  computeShader, int32_t  nameID, ::UnityEngine::ComputeBuffer*  buffer, int32_t  offset, int32_t  size) ;

/// @brief Method SetComputeConstantBufferParam, addr 0xb120930, size 0x18, virtual true, abstract: false, final true
inline void SetComputeConstantBufferParam(::UnityEngine::ComputeShader*  computeShader, int32_t  nameID, ::UnityEngine::GraphicsBuffer*  buffer, int32_t  offset, int32_t  size) ;

/// @brief Method SetComputeFloatParam, addr 0xb12021c, size 0x18, virtual true, abstract: false, final true
inline void SetComputeFloatParam(::UnityEngine::ComputeShader*  computeShader, ::StringW  name, float_t  val) ;

/// @brief Method SetComputeFloatParam, addr 0xb11f7b0, size 0x18, virtual true, abstract: false, final true
inline void SetComputeFloatParam(::UnityEngine::ComputeShader*  computeShader, int32_t  nameID, float_t  val) ;

/// @brief Method SetComputeFloatParams, addr 0xb1202d0, size 0x18, virtual true, abstract: false, final true
inline void SetComputeFloatParams(::UnityEngine::ComputeShader*  computeShader, ::StringW  name, /* [ParamArray] */ ::ArrayW<float_t>  values) ;

/// @brief Method SetComputeFloatParams, addr 0xb1202e8, size 0x18, virtual true, abstract: false, final true
inline void SetComputeFloatParams(::UnityEngine::ComputeShader*  computeShader, int32_t  nameID, /* [ParamArray] */ ::ArrayW<float_t>  values) ;

/// @brief Method SetComputeIntParam, addr 0xb120234, size 0x18, virtual true, abstract: false, final true
inline void SetComputeIntParam(::UnityEngine::ComputeShader*  computeShader, ::StringW  name, int32_t  val) ;

/// @brief Method SetComputeIntParam, addr 0xb11f7c8, size 0x18, virtual true, abstract: false, final true
inline void SetComputeIntParam(::UnityEngine::ComputeShader*  computeShader, int32_t  nameID, int32_t  val) ;

/// @brief Method SetComputeIntParams, addr 0xb120300, size 0x18, virtual true, abstract: false, final true
inline void SetComputeIntParams(::UnityEngine::ComputeShader*  computeShader, ::StringW  name, /* [ParamArray] */ ::ArrayW<int32_t>  values) ;

/// @brief Method SetComputeIntParams, addr 0xb120318, size 0x18, virtual true, abstract: false, final true
inline void SetComputeIntParams(::UnityEngine::ComputeShader*  computeShader, int32_t  nameID, /* [ParamArray] */ ::ArrayW<int32_t>  values) ;

/// @brief Method SetComputeMatrixArrayParam, addr 0xb1202b8, size 0x18, virtual true, abstract: false, final true
inline void SetComputeMatrixArrayParam(::UnityEngine::ComputeShader*  computeShader, ::StringW  name, ::ArrayW<::UnityEngine::Matrix4x4>  values) ;

/// @brief Method SetComputeMatrixArrayParam, addr 0xb11f84c, size 0x18, virtual true, abstract: false, final true
inline void SetComputeMatrixArrayParam(::UnityEngine::ComputeShader*  computeShader, int32_t  nameID, ::ArrayW<::UnityEngine::Matrix4x4>  values) ;

/// @brief Method SetComputeMatrixParam, addr 0xb12027c, size 0x3c, virtual true, abstract: false, final true
inline void SetComputeMatrixParam(::UnityEngine::ComputeShader*  computeShader, ::StringW  name, ::UnityEngine::Matrix4x4  val) ;

/// @brief Method SetComputeMatrixParam, addr 0xb11f810, size 0x3c, virtual true, abstract: false, final true
inline void SetComputeMatrixParam(::UnityEngine::ComputeShader*  computeShader, int32_t  nameID, ::UnityEngine::Matrix4x4  val) ;

/// @brief Method SetComputeTextureParam, addr 0xb120330, size 0xd4, virtual true, abstract: false, final true
inline void SetComputeTextureParam(::UnityEngine::ComputeShader*  computeShader, int32_t  kernelIndex, ::StringW  name, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  rt) ;

/// @brief Method SetComputeTextureParam, addr 0xb1204d8, size 0xdc, virtual true, abstract: false, final true
inline void SetComputeTextureParam(::UnityEngine::ComputeShader*  computeShader, int32_t  kernelIndex, ::StringW  name, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  rt, int32_t  mipLevel) ;

/// @brief Method SetComputeTextureParam, addr 0xb120690, size 0xec, virtual true, abstract: false, final true
inline void SetComputeTextureParam(::UnityEngine::ComputeShader*  computeShader, int32_t  kernelIndex, ::StringW  name, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  rt, int32_t  mipLevel, ::UnityEngine::Rendering::RenderTextureSubElement  element) ;

/// @brief Method SetComputeTextureParam, addr 0xb120404, size 0xd4, virtual true, abstract: false, final true
inline void SetComputeTextureParam(::UnityEngine::ComputeShader*  computeShader, int32_t  kernelIndex, int32_t  nameID, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  rt) ;

/// @brief Method SetComputeTextureParam, addr 0xb1205b4, size 0xdc, virtual true, abstract: false, final true
inline void SetComputeTextureParam(::UnityEngine::ComputeShader*  computeShader, int32_t  kernelIndex, int32_t  nameID, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  rt, int32_t  mipLevel) ;

/// @brief Method SetComputeTextureParam, addr 0xb12077c, size 0xec, virtual true, abstract: false, final true
inline void SetComputeTextureParam(::UnityEngine::ComputeShader*  computeShader, int32_t  kernelIndex, int32_t  nameID, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  rt, int32_t  mipLevel, ::UnityEngine::Rendering::RenderTextureSubElement  element) ;

/// @brief Method SetComputeVectorArrayParam, addr 0xb120264, size 0x18, virtual true, abstract: false, final true
inline void SetComputeVectorArrayParam(::UnityEngine::ComputeShader*  computeShader, ::StringW  name, ::ArrayW<::UnityEngine::Vector4>  values) ;

/// @brief Method SetComputeVectorArrayParam, addr 0xb11f7f8, size 0x18, virtual true, abstract: false, final true
inline void SetComputeVectorArrayParam(::UnityEngine::ComputeShader*  computeShader, int32_t  nameID, ::ArrayW<::UnityEngine::Vector4>  values) ;

/// @brief Method SetComputeVectorParam, addr 0xb12024c, size 0x18, virtual true, abstract: false, final true
inline void SetComputeVectorParam(::UnityEngine::ComputeShader*  computeShader, ::StringW  name, ::UnityEngine::Vector4  val) ;

/// @brief Method SetComputeVectorParam, addr 0xb11f7e0, size 0x18, virtual true, abstract: false, final true
inline void SetComputeVectorParam(::UnityEngine::ComputeShader*  computeShader, int32_t  nameID, ::UnityEngine::Vector4  val) ;

/// @brief Method SetFoveatedRenderingMode, addr 0xb11fcd0, size 0x18, virtual true, abstract: false, final true
inline void SetFoveatedRenderingMode(::UnityEngine::Rendering::FoveatedRenderingMode  foveatedRenderingMode) ;

/// @brief Method SetGlobalBuffer, addr 0xb121a84, size 0x18, virtual true, abstract: false, final true
inline void SetGlobalBuffer(::StringW  name, ::UnityEngine::ComputeBuffer*  value) ;

/// @brief Method SetGlobalBuffer, addr 0xb121ab4, size 0x18, virtual true, abstract: false, final true
inline void SetGlobalBuffer(::StringW  name, ::UnityEngine::GraphicsBuffer*  value) ;

/// @brief Method SetGlobalBuffer, addr 0xb121a9c, size 0x18, virtual true, abstract: false, final true
inline void SetGlobalBuffer(int32_t  nameID, ::UnityEngine::ComputeBuffer*  value) ;

/// @brief Method SetGlobalBuffer, addr 0xb121acc, size 0x18, virtual true, abstract: false, final true
inline void SetGlobalBuffer(int32_t  nameID, ::UnityEngine::GraphicsBuffer*  value) ;

/// @brief Method SetGlobalColor, addr 0xb121658, size 0x18, virtual true, abstract: false, final true
inline void SetGlobalColor(::StringW  name, ::UnityEngine::Color  value) ;

/// @brief Method SetGlobalColor, addr 0xb11f9b4, size 0x18, virtual true, abstract: false, final true
inline void SetGlobalColor(int32_t  nameID, ::UnityEngine::Color  value) ;

/// @brief Method SetGlobalConstantBuffer, addr 0xb121afc, size 0x18, virtual true, abstract: false, final true
inline void SetGlobalConstantBuffer(::UnityEngine::ComputeBuffer*  buffer, ::StringW  name, int32_t  offset, int32_t  size) ;

/// @brief Method SetGlobalConstantBuffer, addr 0xb121ae4, size 0x18, virtual true, abstract: false, final true
inline void SetGlobalConstantBuffer(::UnityEngine::ComputeBuffer*  buffer, int32_t  nameID, int32_t  offset, int32_t  size) ;

/// @brief Method SetGlobalConstantBuffer, addr 0xb121b2c, size 0x18, virtual true, abstract: false, final true
inline void SetGlobalConstantBuffer(::UnityEngine::GraphicsBuffer*  buffer, ::StringW  name, int32_t  offset, int32_t  size) ;

/// @brief Method SetGlobalConstantBuffer, addr 0xb121b14, size 0x18, virtual true, abstract: false, final true
inline void SetGlobalConstantBuffer(::UnityEngine::GraphicsBuffer*  buffer, int32_t  nameID, int32_t  offset, int32_t  size) ;

/// @brief Method SetGlobalDepthBias, addr 0xb11fb6c, size 0x18, virtual true, abstract: false, final true
inline void SetGlobalDepthBias(float_t  bias, float_t  slopeBias) ;

/// @brief Method SetGlobalFloat, addr 0xb1215f8, size 0x18, virtual true, abstract: false, final true
inline void SetGlobalFloat(::StringW  name, float_t  value) ;

/// @brief Method SetGlobalFloat, addr 0xb11f954, size 0x18, virtual true, abstract: false, final true
inline void SetGlobalFloat(int32_t  nameID, float_t  value) ;

/// @brief Method SetGlobalFloatArray, addr 0xb11fb84, size 0x18, virtual true, abstract: false, final true
inline void SetGlobalFloatArray(int32_t  nameID, ::ArrayW<float_t>  values) ;

/// @brief Method SetGlobalFloatArray, addr 0xb1216c4, size 0x18, virtual true, abstract: false, final true
inline void SetGlobalFloatArray(int32_t  nameID, ::System::Collections::Generic::List_1<float_t>*  values) ;

/// @brief Method SetGlobalFloatArray, addr 0xb1216dc, size 0x18, virtual true, abstract: false, final true
inline void SetGlobalFloatArray(::StringW  propertyName, ::ArrayW<float_t>  values) ;

/// @brief Method SetGlobalFloatArray, addr 0xb1216ac, size 0x18, virtual true, abstract: false, final true
inline void SetGlobalFloatArray(::StringW  propertyName, ::System::Collections::Generic::List_1<float_t>*  values) ;

/// @brief Method SetGlobalInt, addr 0xb121610, size 0x18, virtual true, abstract: false, final true
inline void SetGlobalInt(::StringW  name, int32_t  value) ;

/// @brief Method SetGlobalInt, addr 0xb11f96c, size 0x18, virtual true, abstract: false, final true
inline void SetGlobalInt(int32_t  nameID, int32_t  value) ;

/// @brief Method SetGlobalInteger, addr 0xb121628, size 0x18, virtual true, abstract: false, final true
inline void SetGlobalInteger(::StringW  name, int32_t  value) ;

/// @brief Method SetGlobalInteger, addr 0xb11f984, size 0x18, virtual true, abstract: false, final true
inline void SetGlobalInteger(int32_t  nameID, int32_t  value) ;

/// @brief Method SetGlobalMatrix, addr 0xb121670, size 0x3c, virtual true, abstract: false, final true
inline void SetGlobalMatrix(::StringW  name, ::UnityEngine::Matrix4x4  value) ;

/// @brief Method SetGlobalMatrix, addr 0xb11f9cc, size 0x3c, virtual true, abstract: false, final true
inline void SetGlobalMatrix(int32_t  nameID, ::UnityEngine::Matrix4x4  value) ;

/// @brief Method SetGlobalMatrixArray, addr 0xb11fbb4, size 0x18, virtual true, abstract: false, final true
inline void SetGlobalMatrixArray(int32_t  nameID, ::ArrayW<::UnityEngine::Matrix4x4>  values) ;

/// @brief Method SetGlobalMatrixArray, addr 0xb121754, size 0x18, virtual true, abstract: false, final true
inline void SetGlobalMatrixArray(int32_t  nameID, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*  values) ;

/// @brief Method SetGlobalMatrixArray, addr 0xb12176c, size 0x18, virtual true, abstract: false, final true
inline void SetGlobalMatrixArray(::StringW  propertyName, ::ArrayW<::UnityEngine::Matrix4x4>  values) ;

/// @brief Method SetGlobalMatrixArray, addr 0xb12173c, size 0x18, virtual true, abstract: false, final true
inline void SetGlobalMatrixArray(::StringW  propertyName, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*  values) ;

/// @brief Method SetGlobalTexture, addr 0xb121784, size 0xbc, virtual true, abstract: false, final true
inline void SetGlobalTexture(::StringW  name, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  value) ;

/// @brief Method SetGlobalTexture, addr 0xb1218fc, size 0xc4, virtual true, abstract: false, final true
inline void SetGlobalTexture(::StringW  name, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  value, ::UnityEngine::Rendering::RenderTextureSubElement  element) ;

/// @brief Method SetGlobalTexture, addr 0xb121840, size 0xbc, virtual true, abstract: false, final true
inline void SetGlobalTexture(int32_t  nameID, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  value) ;

/// @brief Method SetGlobalTexture, addr 0xb1219c0, size 0xc4, virtual true, abstract: false, final true
inline void SetGlobalTexture(int32_t  nameID, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  value, ::UnityEngine::Rendering::RenderTextureSubElement  element) ;

/// @brief Method SetGlobalVector, addr 0xb121640, size 0x18, virtual true, abstract: false, final true
inline void SetGlobalVector(::StringW  name, ::UnityEngine::Vector4  value) ;

/// @brief Method SetGlobalVector, addr 0xb11f99c, size 0x18, virtual true, abstract: false, final true
inline void SetGlobalVector(int32_t  nameID, ::UnityEngine::Vector4  value) ;

/// @brief Method SetGlobalVectorArray, addr 0xb11fb9c, size 0x18, virtual true, abstract: false, final true
inline void SetGlobalVectorArray(int32_t  nameID, ::ArrayW<::UnityEngine::Vector4>  values) ;

/// @brief Method SetGlobalVectorArray, addr 0xb12170c, size 0x18, virtual true, abstract: false, final true
inline void SetGlobalVectorArray(int32_t  nameID, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  values) ;

/// @brief Method SetGlobalVectorArray, addr 0xb121724, size 0x18, virtual true, abstract: false, final true
inline void SetGlobalVectorArray(::StringW  propertyName, ::ArrayW<::UnityEngine::Vector4>  values) ;

/// @brief Method SetGlobalVectorArray, addr 0xb1216f4, size 0x18, virtual true, abstract: false, final true
inline void SetGlobalVectorArray(::StringW  propertyName, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  values) ;

/// @brief Method SetInstanceMultiplier, addr 0xb11fcb8, size 0x18, virtual true, abstract: false, final true
inline void SetInstanceMultiplier(uint32_t  multiplier) ;

/// @brief Method SetInvertCulling, addr 0xb11f794, size 0x1c, virtual true, abstract: false, final true
inline void SetInvertCulling(bool  invertCulling) ;

/// @brief Method SetKeyword, addr 0xb11fb00, size 0x1c, virtual false, abstract: false, final false
inline void SetKeyword(::UnityEngine::ComputeShader*  computeShader, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::LocalKeyword>  keyword, bool  value) ;

/// @brief Method SetKeyword, addr 0xb11fac8, size 0x1c, virtual false, abstract: false, final false
inline void SetKeyword(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::GlobalKeyword>  keyword, bool  value) ;

/// @brief Method SetKeyword, addr 0xb11fae4, size 0x1c, virtual false, abstract: false, final false
inline void SetKeyword(::UnityEngine::Material*  material, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::LocalKeyword>  keyword, bool  value) ;

/// @brief Method SetLateLatchProjectionMatrices, addr 0xb11fbcc, size 0x18, virtual true, abstract: false, final true
inline void SetLateLatchProjectionMatrices(::ArrayW<::UnityEngine::Matrix4x4>  projectionMat) ;

/// @brief Method SetRayTracingAccelerationStructure, addr 0xb120a08, size 0x18, virtual true, abstract: false, final true
inline void SetRayTracingAccelerationStructure(::UnityEngine::ComputeShader*  computeShader, int32_t  kernelIndex, ::StringW  name, ::UnityEngine::Rendering::RayTracingAccelerationStructure*  rayTracingAccelerationStructure) ;

/// @brief Method SetRayTracingAccelerationStructure, addr 0xb120a20, size 0x18, virtual true, abstract: false, final true
inline void SetRayTracingAccelerationStructure(::UnityEngine::ComputeShader*  computeShader, int32_t  kernelIndex, int32_t  nameID, ::UnityEngine::Rendering::RayTracingAccelerationStructure*  rayTracingAccelerationStructure) ;

/// @brief Method SetRayTracingAccelerationStructure, addr 0xb1209d8, size 0x18, virtual true, abstract: false, final true
inline void SetRayTracingAccelerationStructure(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, ::StringW  name, ::UnityEngine::Rendering::RayTracingAccelerationStructure*  rayTracingAccelerationStructure) ;

/// @brief Method SetRayTracingAccelerationStructure, addr 0xb1209f0, size 0x18, virtual true, abstract: false, final true
inline void SetRayTracingAccelerationStructure(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, int32_t  nameID, ::UnityEngine::Rendering::RayTracingAccelerationStructure*  rayTracingAccelerationStructure) ;

/// @brief Method SetRayTracingBufferParam, addr 0xb120a38, size 0x18, virtual true, abstract: false, final true
inline void SetRayTracingBufferParam(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, ::StringW  name, ::UnityEngine::ComputeBuffer*  buffer) ;

/// @brief Method SetRayTracingBufferParam, addr 0xb120a68, size 0x18, virtual true, abstract: false, final true
inline void SetRayTracingBufferParam(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, ::StringW  name, ::UnityEngine::GraphicsBuffer*  buffer) ;

/// @brief Method SetRayTracingBufferParam, addr 0xb120a98, size 0x1c, virtual true, abstract: false, final true
inline void SetRayTracingBufferParam(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, ::StringW  name, ::UnityEngine::GraphicsBufferHandle  bufferHandle) ;

/// @brief Method SetRayTracingBufferParam, addr 0xb120a50, size 0x18, virtual true, abstract: false, final true
inline void SetRayTracingBufferParam(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, int32_t  nameID, ::UnityEngine::ComputeBuffer*  buffer) ;

/// @brief Method SetRayTracingBufferParam, addr 0xb120a80, size 0x18, virtual true, abstract: false, final true
inline void SetRayTracingBufferParam(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, int32_t  nameID, ::UnityEngine::GraphicsBuffer*  buffer) ;

/// @brief Method SetRayTracingBufferParam, addr 0xb120ab4, size 0x1c, virtual true, abstract: false, final true
inline void SetRayTracingBufferParam(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, int32_t  nameID, ::UnityEngine::GraphicsBufferHandle  bufferHandle) ;

/// @brief Method SetRayTracingConstantBufferParam, addr 0xb120ae8, size 0x18, virtual true, abstract: false, final true
inline void SetRayTracingConstantBufferParam(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, ::StringW  name, ::UnityEngine::ComputeBuffer*  buffer, int32_t  offset, int32_t  size) ;

/// @brief Method SetRayTracingConstantBufferParam, addr 0xb120b18, size 0x18, virtual true, abstract: false, final true
inline void SetRayTracingConstantBufferParam(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, ::StringW  name, ::UnityEngine::GraphicsBuffer*  buffer, int32_t  offset, int32_t  size) ;

/// @brief Method SetRayTracingConstantBufferParam, addr 0xb120ad0, size 0x18, virtual true, abstract: false, final true
inline void SetRayTracingConstantBufferParam(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, int32_t  nameID, ::UnityEngine::ComputeBuffer*  buffer, int32_t  offset, int32_t  size) ;

/// @brief Method SetRayTracingConstantBufferParam, addr 0xb120b00, size 0x18, virtual true, abstract: false, final true
inline void SetRayTracingConstantBufferParam(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, int32_t  nameID, ::UnityEngine::GraphicsBuffer*  buffer, int32_t  offset, int32_t  size) ;

/// @brief Method SetRayTracingFloatParam, addr 0xb120cb8, size 0x18, virtual true, abstract: false, final true
inline void SetRayTracingFloatParam(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, ::StringW  name, float_t  val) ;

/// @brief Method SetRayTracingFloatParam, addr 0xb120cd0, size 0x18, virtual true, abstract: false, final true
inline void SetRayTracingFloatParam(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, int32_t  nameID, float_t  val) ;

/// @brief Method SetRayTracingFloatParams, addr 0xb120ce8, size 0x18, virtual true, abstract: false, final true
inline void SetRayTracingFloatParams(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, ::StringW  name, /* [ParamArray] */ ::ArrayW<float_t>  values) ;

/// @brief Method SetRayTracingFloatParams, addr 0xb120d00, size 0x18, virtual true, abstract: false, final true
inline void SetRayTracingFloatParams(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, int32_t  nameID, /* [ParamArray] */ ::ArrayW<float_t>  values) ;

/// @brief Method SetRayTracingIntParam, addr 0xb120d18, size 0x18, virtual true, abstract: false, final true
inline void SetRayTracingIntParam(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, ::StringW  name, int32_t  val) ;

/// @brief Method SetRayTracingIntParam, addr 0xb120d30, size 0x18, virtual true, abstract: false, final true
inline void SetRayTracingIntParam(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, int32_t  nameID, int32_t  val) ;

/// @brief Method SetRayTracingIntParams, addr 0xb120d48, size 0x18, virtual true, abstract: false, final true
inline void SetRayTracingIntParams(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, ::StringW  name, /* [ParamArray] */ ::ArrayW<int32_t>  values) ;

/// @brief Method SetRayTracingIntParams, addr 0xb120d60, size 0x18, virtual true, abstract: false, final true
inline void SetRayTracingIntParams(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, int32_t  nameID, /* [ParamArray] */ ::ArrayW<int32_t>  values) ;

/// @brief Method SetRayTracingMatrixArrayParam, addr 0xb120e50, size 0x18, virtual true, abstract: false, final true
inline void SetRayTracingMatrixArrayParam(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, ::StringW  name, /* [ParamArray] */ ::ArrayW<::UnityEngine::Matrix4x4>  values) ;

/// @brief Method SetRayTracingMatrixArrayParam, addr 0xb120e68, size 0x18, virtual true, abstract: false, final true
inline void SetRayTracingMatrixArrayParam(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, int32_t  nameID, /* [ParamArray] */ ::ArrayW<::UnityEngine::Matrix4x4>  values) ;

/// @brief Method SetRayTracingMatrixParam, addr 0xb120dd8, size 0x3c, virtual true, abstract: false, final true
inline void SetRayTracingMatrixParam(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, ::StringW  name, ::UnityEngine::Matrix4x4  val) ;

/// @brief Method SetRayTracingMatrixParam, addr 0xb120e14, size 0x3c, virtual true, abstract: false, final true
inline void SetRayTracingMatrixParam(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, int32_t  nameID, ::UnityEngine::Matrix4x4  val) ;

/// @brief Method SetRayTracingTextureParam, addr 0xb120b30, size 0xc4, virtual true, abstract: false, final true
inline void SetRayTracingTextureParam(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, ::StringW  name, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  rt) ;

/// @brief Method SetRayTracingTextureParam, addr 0xb120bf4, size 0xc4, virtual true, abstract: false, final true
inline void SetRayTracingTextureParam(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, int32_t  nameID, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  rt) ;

/// @brief Method SetRayTracingVectorArrayParam, addr 0xb120da8, size 0x18, virtual true, abstract: false, final true
inline void SetRayTracingVectorArrayParam(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, ::StringW  name, /* [ParamArray] */ ::ArrayW<::UnityEngine::Vector4>  values) ;

/// @brief Method SetRayTracingVectorArrayParam, addr 0xb120dc0, size 0x18, virtual true, abstract: false, final true
inline void SetRayTracingVectorArrayParam(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, int32_t  nameID, /* [ParamArray] */ ::ArrayW<::UnityEngine::Vector4>  values) ;

/// @brief Method SetRayTracingVectorParam, addr 0xb120d78, size 0x18, virtual true, abstract: false, final true
inline void SetRayTracingVectorParam(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, ::StringW  name, ::UnityEngine::Vector4  val) ;

/// @brief Method SetRayTracingVectorParam, addr 0xb120d90, size 0x18, virtual true, abstract: false, final true
inline void SetRayTracingVectorParam(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, int32_t  nameID, ::UnityEngine::Vector4  val) ;

/// @brief Method SetRenderTarget, addr 0xb1200f0, size 0x3c, virtual true, abstract: false, final true
inline void SetRenderTarget(::UnityEngine::Rendering::RenderTargetBinding  binding) ;

/// @brief Method SetRenderTarget, addr 0xb12008c, size 0x64, virtual true, abstract: false, final true
inline void SetRenderTarget(::UnityEngine::Rendering::RenderTargetBinding  binding, int32_t  mipLevel, ::UnityEngine::CubemapFace  cubemapFace, int32_t  depthSlice) ;

/// @brief Method SetRenderTarget, addr 0xb11ffc4, size 0x50, virtual true, abstract: false, final true
inline void SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier  color, ::UnityEngine::Rendering::RenderBufferLoadAction  colorLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction  colorStoreAction, ::UnityEngine::Rendering::RenderTargetIdentifier  depth, ::UnityEngine::Rendering::RenderBufferLoadAction  depthLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction  depthStoreAction) ;

/// @brief Method SetRenderTarget, addr 0xb11fe84, size 0x50, virtual true, abstract: false, final true
inline void SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier  color, ::UnityEngine::Rendering::RenderTargetIdentifier  depth) ;

/// @brief Method SetRenderTarget, addr 0xb11fed4, size 0x50, virtual true, abstract: false, final true
inline void SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier  color, ::UnityEngine::Rendering::RenderTargetIdentifier  depth, int32_t  mipLevel) ;

/// @brief Method SetRenderTarget, addr 0xb11ff24, size 0x50, virtual true, abstract: false, final true
inline void SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier  color, ::UnityEngine::Rendering::RenderTargetIdentifier  depth, int32_t  mipLevel, ::UnityEngine::CubemapFace  cubemapFace) ;

/// @brief Method SetRenderTarget, addr 0xb11ff74, size 0x50, virtual true, abstract: false, final true
inline void SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier  color, ::UnityEngine::Rendering::RenderTargetIdentifier  depth, int32_t  mipLevel, ::UnityEngine::CubemapFace  cubemapFace, int32_t  depthSlice) ;

/// @brief Method SetRenderTarget, addr 0xb120014, size 0x3c, virtual true, abstract: false, final true
inline void SetRenderTarget(::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>  colors, ::UnityEngine::Rendering::RenderTargetIdentifier  depth) ;

/// @brief Method SetRenderTarget, addr 0xb120050, size 0x3c, virtual true, abstract: false, final true
inline void SetRenderTarget(::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>  colors, ::UnityEngine::Rendering::RenderTargetIdentifier  depth, int32_t  mipLevel, ::UnityEngine::CubemapFace  cubemapFace, int32_t  depthSlice) ;

/// @brief Method SetRenderTarget, addr 0xb11fd1c, size 0x3c, virtual true, abstract: false, final true
inline void SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier  rt) ;

/// @brief Method SetRenderTarget, addr 0xb11fd94, size 0x3c, virtual true, abstract: false, final true
inline void SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier  rt, ::UnityEngine::Rendering::RenderBufferLoadAction  colorLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction  colorStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction  depthLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction  depthStoreAction) ;

/// @brief Method SetRenderTarget, addr 0xb11fd58, size 0x3c, virtual true, abstract: false, final true
inline void SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier  rt, ::UnityEngine::Rendering::RenderBufferLoadAction  loadAction, ::UnityEngine::Rendering::RenderBufferStoreAction  storeAction) ;

/// @brief Method SetRenderTarget, addr 0xb11fdd0, size 0x3c, virtual true, abstract: false, final true
inline void SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier  rt, int32_t  mipLevel) ;

/// @brief Method SetRenderTarget, addr 0xb11fe0c, size 0x3c, virtual true, abstract: false, final true
inline void SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier  rt, int32_t  mipLevel, ::UnityEngine::CubemapFace  cubemapFace) ;

/// @brief Method SetRenderTarget, addr 0xb11fe48, size 0x3c, virtual true, abstract: false, final true
inline void SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier  rt, int32_t  mipLevel, ::UnityEngine::CubemapFace  cubemapFace, int32_t  depthSlice) ;

/// @brief Method SetShadingRateCombiner, addr 0xb120204, size 0x18, virtual true, abstract: false, final true
inline void SetShadingRateCombiner(::UnityEngine::Rendering::ShadingRateCombinerStage  stage, ::UnityEngine::Rendering::ShadingRateCombiner  combiner) ;

/// @brief Method SetShadingRateFragmentSize, addr 0xb1201ec, size 0x18, virtual true, abstract: false, final true
inline void SetShadingRateFragmentSize(::UnityEngine::Rendering::ShadingRateFragmentSize  shadingRateFragmentSize) ;

/// @brief Method SetShadowSamplingMode, addr 0xb121b44, size 0x3c, virtual true, abstract: false, final true
inline void SetShadowSamplingMode(::UnityEngine::Rendering::RenderTargetIdentifier  shadowmap, ::UnityEngine::Rendering::ShadowSamplingMode  mode) ;

/// @brief Method SetSinglePassStereo, addr 0xb121b80, size 0x18, virtual true, abstract: false, final true
inline void SetSinglePassStereo(::UnityEngine::Rendering::SinglePassStereoMode  mode) ;

/// @brief Method SetViewProjectionMatrices, addr 0xb11fb1c, size 0x50, virtual true, abstract: false, final true
inline void SetViewProjectionMatrices(::UnityEngine::Matrix4x4  view, ::UnityEngine::Matrix4x4  proj) ;

/// @brief Method SetViewport, addr 0xb11f87c, size 0x18, virtual true, abstract: false, final true
inline void SetViewport(::UnityEngine::Rect  pixelRect) ;

/// @brief Method SetWireframe, addr 0xb11fce8, size 0x1c, virtual true, abstract: false, final true
inline void SetWireframe(bool  enable) ;

/// @brief Method SetupCameraProperties, addr 0xb1201bc, size 0x18, virtual true, abstract: false, final true
inline void SetupCameraProperties(::UnityEngine::Camera*  camera) ;

/// @brief Method UnityEngine.Rendering.IBaseCommandBuffer.DisableKeyword, addr 0xb121ca8, size 0x18, virtual true, abstract: false, final true
inline void UnityEngine_Rendering_IBaseCommandBuffer_DisableKeyword(::UnityEngine::ComputeShader*  computeShader, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::LocalKeyword>  keyword) ;

/// @brief Method UnityEngine.Rendering.IBaseCommandBuffer.DisableKeyword, addr 0xb121c78, size 0x18, virtual true, abstract: false, final true
inline void UnityEngine_Rendering_IBaseCommandBuffer_DisableKeyword(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::GlobalKeyword>  keyword) ;

/// @brief Method UnityEngine.Rendering.IBaseCommandBuffer.DisableKeyword, addr 0xb121c90, size 0x18, virtual true, abstract: false, final true
inline void UnityEngine_Rendering_IBaseCommandBuffer_DisableKeyword(::UnityEngine::Material*  material, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::LocalKeyword>  keyword) ;

/// @brief Method UnityEngine.Rendering.IBaseCommandBuffer.EnableKeyword, addr 0xb121c60, size 0x18, virtual true, abstract: false, final true
inline void UnityEngine_Rendering_IBaseCommandBuffer_EnableKeyword(::UnityEngine::ComputeShader*  computeShader, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::LocalKeyword>  keyword) ;

/// @brief Method UnityEngine.Rendering.IBaseCommandBuffer.EnableKeyword, addr 0xb121c30, size 0x18, virtual true, abstract: false, final true
inline void UnityEngine_Rendering_IBaseCommandBuffer_EnableKeyword(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::GlobalKeyword>  keyword) ;

/// @brief Method UnityEngine.Rendering.IBaseCommandBuffer.EnableKeyword, addr 0xb121c48, size 0x18, virtual true, abstract: false, final true
inline void UnityEngine_Rendering_IBaseCommandBuffer_EnableKeyword(::UnityEngine::Material*  material, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::LocalKeyword>  keyword) ;

/// @brief Method UnityEngine.Rendering.IBaseCommandBuffer.SetKeyword, addr 0xb121cf8, size 0x1c, virtual true, abstract: false, final true
inline void UnityEngine_Rendering_IBaseCommandBuffer_SetKeyword(::UnityEngine::ComputeShader*  computeShader, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::LocalKeyword>  keyword, bool  value) ;

/// @brief Method UnityEngine.Rendering.IBaseCommandBuffer.SetKeyword, addr 0xb121cc0, size 0x1c, virtual true, abstract: false, final true
inline void UnityEngine_Rendering_IBaseCommandBuffer_SetKeyword(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::GlobalKeyword>  keyword, bool  value) ;

/// @brief Method UnityEngine.Rendering.IBaseCommandBuffer.SetKeyword, addr 0xb121cdc, size 0x1c, virtual true, abstract: false, final true
inline void UnityEngine_Rendering_IBaseCommandBuffer_SetKeyword(::UnityEngine::Material*  material, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::LocalKeyword>  keyword, bool  value) ;

/// @brief Method UnmarkLateLatchMatrix, addr 0xb11fbfc, size 0x18, virtual true, abstract: false, final true
inline void UnmarkLateLatchMatrix(::UnityEngine::Rendering::CameraLateLatchMatrixType  matrixPropertyType) ;

/// @brief Method .ctor, addr 0xb11cb24, size 0x4, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::Rendering::CommandBuffer*  wrapped, ::UnityEngine::Rendering::RenderGraphModule::RenderGraphPass*  executingPass, bool  isAsync) ;

/// @brief Convert to "::UnityEngine::Rendering::IBaseCommandBuffer"
constexpr ::UnityEngine::Rendering::IBaseCommandBuffer* i___UnityEngine__Rendering__IBaseCommandBuffer() noexcept;

/// @brief Convert to "::UnityEngine::Rendering::IComputeCommandBuffer"
constexpr ::UnityEngine::Rendering::IComputeCommandBuffer* i___UnityEngine__Rendering__IComputeCommandBuffer() noexcept;

/// @brief Convert to "::UnityEngine::Rendering::IRasterCommandBuffer"
constexpr ::UnityEngine::Rendering::IRasterCommandBuffer* i___UnityEngine__Rendering__IRasterCommandBuffer() noexcept;

/// @brief Convert to "::UnityEngine::Rendering::IUnsafeCommandBuffer"
constexpr ::UnityEngine::Rendering::IUnsafeCommandBuffer* i___UnityEngine__Rendering__IUnsafeCommandBuffer() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr UnsafeCommandBuffer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "UnsafeCommandBuffer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
UnsafeCommandBuffer(UnsafeCommandBuffer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "UnsafeCommandBuffer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
UnsafeCommandBuffer(UnsafeCommandBuffer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16593};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::UnsafeCommandBuffer) == 0x20, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
