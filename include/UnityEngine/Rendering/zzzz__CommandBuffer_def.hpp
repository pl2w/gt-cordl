#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/CommandBuffer.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CommandBuffer)
namespace GlobalNamespace {
struct RayTracingAccelerationStructure_BuildSettings;
}
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
class IDisposable;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace System {
template<typename T>
struct ReadOnlySpan_1;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace UnityEngine::Bindings {
struct ManagedSpanWrapper;
}
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
}
namespace UnityEngine::Profiling {
class CustomSampler;
}
namespace UnityEngine::Rendering {
struct AsyncGPUReadbackRequest;
}
namespace UnityEngine::Rendering {
struct AsyncRequestNativeArrayData;
}
namespace UnityEngine::Rendering {
struct AttachmentDescriptor;
}
namespace UnityEngine::Rendering {
struct CameraLateLatchMatrixType;
}
namespace UnityEngine::Rendering {
struct CommandBufferExecutionFlags;
}
namespace UnityEngine::Rendering {
class CommandBuffer_BindingsMarshaller;
}
namespace UnityEngine::Rendering {
struct FoveatedRenderingMode;
}
namespace UnityEngine::Rendering {
struct GlobalKeyword;
}
namespace UnityEngine::Rendering {
struct GraphicsFenceType;
}
namespace UnityEngine::Rendering {
struct GraphicsFence;
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
struct RenderTargetFlags;
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
namespace UnityEngine::Rendering {
struct SubPassDescriptor;
}
namespace UnityEngine::Rendering {
struct SynchronisationStageFlags;
}
namespace UnityEngine::Rendering {
struct SynchronisationStage;
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
struct FilterMode;
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
struct RenderTextureDescriptor;
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
class CommandBuffer;
}
namespace UnityEngine::Rendering {
class CommandBuffer_BindingsMarshaller;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::CommandBuffer*);
MARK_REF_T(::UnityEngine::Rendering::CommandBuffer_BindingsMarshaller*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::CommandBuffer*, "UnityEngine.Rendering", "CommandBuffer");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::CommandBuffer_BindingsMarshaller*, "UnityEngine.Rendering", "CommandBuffer/BindingsMarshaller");
// [UsedByNativeCode]
// [NativeHeader("Runtime/Shaders/RayTracing/RayTracingShader.h")]
// [NativeType("Runtime/Graphics/CommandBuffer/RenderingCommandBuffer.h")]
// [NativeHeader("Runtime/Shaders/ComputeShader.h")]
// [NativeHeader("Runtime/Export/Graphics/RenderingCommandBuffer.bindings.h")]
// Dependencies System.IntPtr, System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.CommandBuffer
class CORDL_TYPE CommandBuffer : public ::System::Object {
public:
// Declarations
using BindingsMarshaller = ::UnityEngine::Rendering::CommandBuffer_BindingsMarshaller;

/// @brief Field ThrowOnSetRenderTarget, offset 0xffffffff, size 0x1 
 __declspec(property(get=getStaticF_ThrowOnSetRenderTarget, put=setStaticF_ThrowOnSetRenderTarget)) bool  ThrowOnSetRenderTarget;

/// @brief Field m_Ptr, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_Ptr, put=__cordl_internal_set_m_Ptr)) ::System::IntPtr  m_Ptr;

 __declspec(property(get=get_name, put=set_name)) ::StringW  name;

 __declspec(property(get=get_sizeInBytes)) int32_t  sizeInBytes;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() noexcept;

/// @brief Method BeginRenderPass, addr 0xb615dac, size 0x108, virtual false, abstract: false, final false
inline void BeginRenderPass(int32_t  width, int32_t  height, int32_t  volumeDepth, int32_t  samples, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::AttachmentDescriptor>  attachments, int32_t  depthAttachmentIndex, int32_t  shadingRateImageAttachmentIndex, ::Unity::Collections::NativeArray_1<::UnityEngine::Rendering::SubPassDescriptor>  subPasses, ::System::ReadOnlySpan_1<uint8_t>  debugNameUtf8) ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::BeginRenderPass", HasExplicitThis = true)]
/// @brief Method BeginRenderPass_Internal, addr 0xb615b54, size 0x1bc, virtual false, abstract: false, final false
inline void BeginRenderPass_Internal(int32_t  width, int32_t  height, int32_t  volumeDepth, int32_t  samples, ::System::ReadOnlySpan_1<::UnityEngine::Rendering::AttachmentDescriptor>  attachments, int32_t  depthAttachmentIndex, int32_t  shadingRateImageAttachmentIndex, ::System::ReadOnlySpan_1<::UnityEngine::Rendering::SubPassDescriptor>  subPasses, ::System::ReadOnlySpan_1<uint8_t>  debugNameUtf8) ;

/// @brief Method BeginRenderPass_Internal_Injected, addr 0xb615d10, size 0x9c, virtual false, abstract: false, final false
static inline void BeginRenderPass_Internal_Injected(::System::IntPtr  _unity_self, int32_t  width, int32_t  height, int32_t  volumeDepth, int32_t  samples, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  attachments, int32_t  depthAttachmentIndex, int32_t  shadingRateImageAttachmentIndex, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  subPasses, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  debugNameUtf8) ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::BeginSample", HasExplicitThis = true)]
/// @brief Method BeginSample, addr 0xb611e4c, size 0x190, virtual false, abstract: false, final false
inline void BeginSample(::StringW  name) ;

/// @brief Method BeginSample, addr 0xb6121f4, size 0x4, virtual false, abstract: false, final false
inline void BeginSample(::UnityEngine::Profiling::CustomSampler*  sampler) ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::BeginSample_CustomSampler", HasExplicitThis = true)]
/// @brief Method BeginSample_CustomSampler, addr 0xb6121f8, size 0xcc, virtual false, abstract: false, final false
inline void BeginSample_CustomSampler(/* [NotNull] */ ::UnityEngine::Profiling::CustomSampler*  sampler) ;

/// @brief Method BeginSample_CustomSampler_Injected, addr 0xb612394, size 0x44, virtual false, abstract: false, final false
static inline void BeginSample_CustomSampler_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  sampler) ;

/// @brief Method BeginSample_Injected, addr 0xb611fdc, size 0x44, virtual false, abstract: false, final false
static inline void BeginSample_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  name) ;

/// @brief Method Blit, addr 0xb6191bc, size 0x60, virtual false, abstract: false, final false
inline void Blit(::UnityEngine::Rendering::RenderTargetIdentifier  source, ::UnityEngine::Rendering::RenderTargetIdentifier  dest) ;

/// @brief Method Blit, addr 0xb61921c, size 0x70, virtual false, abstract: false, final false
inline void Blit(::UnityEngine::Rendering::RenderTargetIdentifier  source, ::UnityEngine::Rendering::RenderTargetIdentifier  dest, ::UnityEngine::Material*  mat, int32_t  pass) ;

/// @brief Method Blit, addr 0xb619070, size 0x60, virtual false, abstract: false, final false
inline void Blit(::UnityEngine::Texture*  source, ::UnityEngine::Rendering::RenderTargetIdentifier  dest) ;

/// @brief Method Blit, addr 0xb619150, size 0x6c, virtual false, abstract: false, final false
inline void Blit(::UnityEngine::Texture*  source, ::UnityEngine::Rendering::RenderTargetIdentifier  dest, ::UnityEngine::Material*  mat) ;

/// @brief Method Blit, addr 0xb6190d0, size 0x80, virtual false, abstract: false, final false
inline void Blit(::UnityEngine::Texture*  source, ::UnityEngine::Rendering::RenderTargetIdentifier  dest, ::UnityEngine::Vector2  scale, ::UnityEngine::Vector2  offset) ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::Blit_Identifier", HasExplicitThis = true)]
/// @brief Method Blit_Identifier, addr 0xb60f428, size 0xfc, virtual false, abstract: false, final false
inline void Blit_Identifier(::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier>  source, ::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier>  dest, ::UnityEngine::Material*  mat, int32_t  pass, ::UnityEngine::Vector2  scale, ::UnityEngine::Vector2  offset, int32_t  sourceDepthSlice, int32_t  destDepthSlice) ;

/// @brief Method Blit_Identifier_Injected, addr 0xb60f524, size 0x9c, virtual false, abstract: false, final false
static inline void Blit_Identifier_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier>  source, ::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier>  dest, ::System::IntPtr  mat, int32_t  pass, ::by_ref<::UnityEngine::Vector2>  scale, ::by_ref<::UnityEngine::Vector2>  offset, int32_t  sourceDepthSlice, int32_t  destDepthSlice) ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::Blit_Texture", HasExplicitThis = true)]
/// @brief Method Blit_Texture, addr 0xb60f264, size 0x128, virtual false, abstract: false, final false
inline void Blit_Texture(::UnityEngine::Texture*  source, ::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier>  dest, ::UnityEngine::Material*  mat, int32_t  pass, ::UnityEngine::Vector2  scale, ::UnityEngine::Vector2  offset, int32_t  sourceDepthSlice, int32_t  destDepthSlice) ;

/// @brief Method Blit_Texture_Injected, addr 0xb60f38c, size 0x9c, virtual false, abstract: false, final false
static inline void Blit_Texture_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  source, ::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier>  dest, ::System::IntPtr  mat, int32_t  pass, ::by_ref<::UnityEngine::Vector2>  scale, ::by_ref<::UnityEngine::Vector2>  offset, int32_t  sourceDepthSlice, int32_t  destDepthSlice) ;

/// @brief Method BuildRayTracingAccelerationStructure, addr 0xb616d78, size 0x64, virtual false, abstract: false, final false
inline void BuildRayTracingAccelerationStructure(::UnityEngine::Rendering::RayTracingAccelerationStructure*  accelerationStructure) ;

/// @brief Method BuildRayTracingAccelerationStructure, addr 0xb616ddc, size 0x78, virtual false, abstract: false, final false
inline void BuildRayTracingAccelerationStructure(::UnityEngine::Rendering::RayTracingAccelerationStructure*  accelerationStructure, ::UnityEngine::Vector3  relativeOrigin) ;

/// @brief Method CheckThrowOnSetRenderTarget, addr 0xb612c2c, size 0x94, virtual false, abstract: false, final false
static inline void CheckThrowOnSetRenderTarget() ;

/// [NativeMethod("ClearCommands")]
/// @brief Method Clear, addr 0xb60d3f8, size 0x50, virtual false, abstract: false, final false
inline void Clear() ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::ClearRandomWriteTargets", HasExplicitThis = true, ThrowsException = true)]
/// @brief Method ClearRandomWriteTargets, addr 0xb60ee0c, size 0x50, virtual false, abstract: false, final false
inline void ClearRandomWriteTargets() ;

/// @brief Method ClearRandomWriteTargets_Injected, addr 0xb60ee5c, size 0x3c, virtual false, abstract: false, final false
static inline void ClearRandomWriteTargets_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method ClearRenderTarget, addr 0xb60f75c, size 0xc, virtual false, abstract: false, final false
inline void ClearRenderTarget(bool  clearDepth, bool  clearColor, ::UnityEngine::Color  backgroundColor) ;

/// @brief Method ClearRenderTarget, addr 0xb60f800, size 0x8, virtual false, abstract: false, final false
inline void ClearRenderTarget(bool  clearDepth, bool  clearColor, ::UnityEngine::Color  backgroundColor, float_t  depth) ;

/// @brief Method ClearRenderTarget, addr 0xb60f768, size 0x98, virtual false, abstract: false, final false
inline void ClearRenderTarget(bool  clearDepth, bool  clearColor, ::UnityEngine::Color  backgroundColor, float_t  depth, uint32_t  stencil) ;

/// @brief Method ClearRenderTarget, addr 0xb60f900, size 0x78, virtual false, abstract: false, final false
inline void ClearRenderTarget(::UnityEngine::Rendering::RTClearFlags  clearFlags, ::UnityEngine::Color  backgroundColor, float_t  depth, uint32_t  stencil) ;

/// @brief Method ClearRenderTarget, addr 0xb60f978, size 0x16c, virtual false, abstract: false, final false
inline void ClearRenderTarget(::UnityEngine::Rendering::RTClearFlags  clearFlags, ::ArrayW<::UnityEngine::Color>  backgroundColors, float_t  depth, uint32_t  stencil) ;

/// @brief Method ClearRenderTargetMulti_Internal, addr 0xb60fae4, size 0x118, virtual false, abstract: false, final false
inline void ClearRenderTargetMulti_Internal(::UnityEngine::Rendering::RTClearFlags  clearFlags, ::ArrayW<::UnityEngine::Color>  colors, float_t  depth, uint32_t  stencil) ;

/// @brief Method ClearRenderTargetMulti_Internal_Injected, addr 0xb61486c, size 0x6c, virtual false, abstract: false, final false
static inline void ClearRenderTargetMulti_Internal_Injected(::System::IntPtr  _unity_self, ::UnityEngine::Rendering::RTClearFlags  clearFlags, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  colors, float_t  depth, uint32_t  stencil) ;

/// @brief Method ClearRenderTargetSingle_Internal, addr 0xb60f870, size 0x90, virtual false, abstract: false, final false
inline void ClearRenderTargetSingle_Internal(::UnityEngine::Rendering::RTClearFlags  clearFlags, ::UnityEngine::Color  color, float_t  depth, uint32_t  stencil) ;

/// @brief Method ClearRenderTargetSingle_Internal_Injected, addr 0xb614800, size 0x6c, virtual false, abstract: false, final false
static inline void ClearRenderTargetSingle_Internal_Injected(::System::IntPtr  _unity_self, ::UnityEngine::Rendering::RTClearFlags  clearFlags, ::by_ref<::UnityEngine::Color>  color, float_t  depth, uint32_t  stencil) ;

/// @brief Method Clear_Injected, addr 0xb60d448, size 0x3c, virtual false, abstract: false, final false
static inline void Clear_Injected(::System::IntPtr  _unity_self) ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::ConfigureFoveatedRendering", HasExplicitThis = true)]
/// @brief Method ConfigureFoveatedRendering, addr 0xb612b90, size 0x58, virtual false, abstract: false, final false
inline void ConfigureFoveatedRendering(::System::IntPtr  platformData) ;

/// @brief Method ConfigureFoveatedRendering_Injected, addr 0xb612be8, size 0x44, virtual false, abstract: false, final false
static inline void ConfigureFoveatedRendering_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  platformData) ;

/// @brief Method CopyCounterValue, addr 0xb618f78, size 0x4, virtual false, abstract: false, final false
inline void CopyCounterValue(::UnityEngine::ComputeBuffer*  src, ::UnityEngine::ComputeBuffer*  dst, uint32_t  dstOffsetBytes) ;

/// @brief Method CopyCounterValue, addr 0xb618f80, size 0x4, virtual false, abstract: false, final false
inline void CopyCounterValue(::UnityEngine::ComputeBuffer*  src, ::UnityEngine::GraphicsBuffer*  dst, uint32_t  dstOffsetBytes) ;

/// @brief Method CopyCounterValue, addr 0xb618f7c, size 0x4, virtual false, abstract: false, final false
inline void CopyCounterValue(::UnityEngine::GraphicsBuffer*  src, ::UnityEngine::ComputeBuffer*  dst, uint32_t  dstOffsetBytes) ;

/// @brief Method CopyCounterValue, addr 0xb618f84, size 0x4, virtual false, abstract: false, final false
inline void CopyCounterValue(::UnityEngine::GraphicsBuffer*  src, ::UnityEngine::GraphicsBuffer*  dst, uint32_t  dstOffsetBytes) ;

/// [NativeMethod("AddCopyCounterValue")]
/// @brief Method CopyCounterValueCC, addr 0xb60cce4, size 0x80, virtual false, abstract: false, final false
inline void CopyCounterValueCC(::UnityEngine::ComputeBuffer*  src, ::UnityEngine::ComputeBuffer*  dst, uint32_t  dstOffsetBytes) ;

/// @brief Method CopyCounterValueCC_Injected, addr 0xb60cd64, size 0x5c, virtual false, abstract: false, final false
static inline void CopyCounterValueCC_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  src, ::System::IntPtr  dst, uint32_t  dstOffsetBytes) ;

/// [NativeMethod("AddCopyCounterValue")]
/// @brief Method CopyCounterValueCG, addr 0xb60ce9c, size 0x80, virtual false, abstract: false, final false
inline void CopyCounterValueCG(::UnityEngine::ComputeBuffer*  src, ::UnityEngine::GraphicsBuffer*  dst, uint32_t  dstOffsetBytes) ;

/// @brief Method CopyCounterValueCG_Injected, addr 0xb60cf1c, size 0x5c, virtual false, abstract: false, final false
static inline void CopyCounterValueCG_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  src, ::System::IntPtr  dst, uint32_t  dstOffsetBytes) ;

/// [NativeMethod("AddCopyCounterValue")]
/// @brief Method CopyCounterValueGC, addr 0xb60cdc0, size 0x80, virtual false, abstract: false, final false
inline void CopyCounterValueGC(::UnityEngine::GraphicsBuffer*  src, ::UnityEngine::ComputeBuffer*  dst, uint32_t  dstOffsetBytes) ;

/// @brief Method CopyCounterValueGC_Injected, addr 0xb60ce40, size 0x5c, virtual false, abstract: false, final false
static inline void CopyCounterValueGC_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  src, ::System::IntPtr  dst, uint32_t  dstOffsetBytes) ;

/// [NativeMethod("AddCopyCounterValue")]
/// @brief Method CopyCounterValueGG, addr 0xb60cf78, size 0x80, virtual false, abstract: false, final false
inline void CopyCounterValueGG(::UnityEngine::GraphicsBuffer*  src, ::UnityEngine::GraphicsBuffer*  dst, uint32_t  dstOffsetBytes) ;

/// @brief Method CopyCounterValueGG_Injected, addr 0xb60cff8, size 0x5c, virtual false, abstract: false, final false
static inline void CopyCounterValueGG_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  src, ::System::IntPtr  dst, uint32_t  dstOffsetBytes) ;

/// @brief Method CopyTexture, addr 0xb618f88, size 0x54, virtual false, abstract: false, final false
inline void CopyTexture(::UnityEngine::Rendering::RenderTargetIdentifier  src, ::UnityEngine::Rendering::RenderTargetIdentifier  dst) ;

/// @brief Method CopyTexture, addr 0xb618fdc, size 0x4c, virtual false, abstract: false, final false
inline void CopyTexture(::UnityEngine::Rendering::RenderTargetIdentifier  src, int32_t  srcElement, int32_t  srcMip, ::UnityEngine::Rendering::RenderTargetIdentifier  dst, int32_t  dstElement, int32_t  dstMip) ;

/// @brief Method CopyTexture, addr 0xb619028, size 0x48, virtual false, abstract: false, final false
inline void CopyTexture(::UnityEngine::Rendering::RenderTargetIdentifier  src, int32_t  srcElement, int32_t  srcMip, int32_t  srcX, int32_t  srcY, int32_t  srcWidth, int32_t  srcHeight, ::UnityEngine::Rendering::RenderTargetIdentifier  dst, int32_t  dstElement, int32_t  dstMip, int32_t  dstX, int32_t  dstY) ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::CopyTexture_Internal", HasExplicitThis = true)]
/// @brief Method CopyTexture_Internal, addr 0xb60f07c, size 0x120, virtual false, abstract: false, final false
inline void CopyTexture_Internal(::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier>  src, int32_t  srcElement, int32_t  srcMip, int32_t  srcX, int32_t  srcY, int32_t  srcWidth, int32_t  srcHeight, ::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier>  dst, int32_t  dstElement, int32_t  dstMip, int32_t  dstX, int32_t  dstY, int32_t  mode) ;

/// @brief Method CopyTexture_Internal_Injected, addr 0xb60f19c, size 0xc8, virtual false, abstract: false, final false
static inline void CopyTexture_Internal_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier>  src, int32_t  srcElement, int32_t  srcMip, int32_t  srcX, int32_t  srcY, int32_t  srcWidth, int32_t  srcHeight, ::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier>  dst, int32_t  dstElement, int32_t  dstMip, int32_t  dstX, int32_t  dstY, int32_t  mode) ;

/// @brief Method CreateAsyncGraphicsFence, addr 0xb6165e4, size 0xc, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::GraphicsFence CreateAsyncGraphicsFence() ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::CreateGPUFence_Internal", HasExplicitThis = true)]
/// @brief Method CreateGPUFence_Internal, addr 0xb609218, size 0x68, virtual false, abstract: false, final false
inline ::System::IntPtr CreateGPUFence_Internal(::UnityEngine::Rendering::GraphicsFenceType  fenceType, ::UnityEngine::Rendering::SynchronisationStageFlags  stage) ;

/// @brief Method CreateGPUFence_Internal_Injected, addr 0xb609280, size 0x54, virtual false, abstract: false, final false
static inline ::System::IntPtr CreateGPUFence_Internal_Injected(::System::IntPtr  _unity_self, ::UnityEngine::Rendering::GraphicsFenceType  fenceType, ::UnityEngine::Rendering::SynchronisationStageFlags  stage) ;

/// @brief Method CreateGraphicsFence, addr 0xb6165f0, size 0x38, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::GraphicsFence CreateGraphicsFence(::UnityEngine::Rendering::GraphicsFenceType  fenceType, ::UnityEngine::Rendering::SynchronisationStageFlags  stage) ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::DisableComputeKeyword", HasExplicitThis = true)]
/// @brief Method DisableComputeKeyword, addr 0xb6108c8, size 0xb0, virtual false, abstract: false, final false
inline void DisableComputeKeyword(::UnityEngine::ComputeShader*  computeShader, ::UnityEngine::Rendering::LocalKeyword  keyword) ;

/// @brief Method DisableComputeKeyword_Injected, addr 0xb610978, size 0x54, virtual false, abstract: false, final false
static inline void DisableComputeKeyword_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  computeShader, ::by_ref<::UnityEngine::Rendering::LocalKeyword>  keyword) ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::DisableShaderKeyword", HasExplicitThis = true)]
/// @brief Method DisableGlobalKeyword, addr 0xb610724, size 0x5c, virtual false, abstract: false, final false
inline void DisableGlobalKeyword(::UnityEngine::Rendering::GlobalKeyword  keyword) ;

/// @brief Method DisableGlobalKeyword_Injected, addr 0xb610780, size 0x44, virtual false, abstract: false, final false
static inline void DisableGlobalKeyword_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Rendering::GlobalKeyword>  keyword) ;

/// @brief Method DisableKeyword, addr 0xb610a00, size 0x2c, virtual false, abstract: false, final false
inline void DisableKeyword(::UnityEngine::ComputeShader*  computeShader, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::LocalKeyword>  keyword) ;

/// @brief Method DisableKeyword, addr 0xb6109cc, size 0x8, virtual false, abstract: false, final false
inline void DisableKeyword(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::GlobalKeyword>  keyword) ;

/// @brief Method DisableKeyword, addr 0xb6109d4, size 0x2c, virtual false, abstract: false, final false
inline void DisableKeyword(::UnityEngine::Material*  material, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::LocalKeyword>  keyword) ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::DisableMaterialKeyword", HasExplicitThis = true)]
/// @brief Method DisableMaterialKeyword, addr 0xb6107c4, size 0xb0, virtual false, abstract: false, final false
inline void DisableMaterialKeyword(::UnityEngine::Material*  material, ::UnityEngine::Rendering::LocalKeyword  keyword) ;

/// @brief Method DisableMaterialKeyword_Injected, addr 0xb610874, size 0x54, virtual false, abstract: false, final false
static inline void DisableMaterialKeyword_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  material, ::by_ref<::UnityEngine::Rendering::LocalKeyword>  keyword) ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::DisableScissorRect", HasExplicitThis = true, ThrowsException = true)]
/// @brief Method DisableScissorRect, addr 0xb60eff0, size 0x50, virtual false, abstract: false, final false
inline void DisableScissorRect() ;

/// @brief Method DisableScissorRect_Injected, addr 0xb60f040, size 0x3c, virtual false, abstract: false, final false
static inline void DisableScissorRect_Injected(::System::IntPtr  _unity_self) ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::DisableShaderKeyword", HasExplicitThis = true)]
/// @brief Method DisableShaderKeyword, addr 0xb610550, size 0x190, virtual false, abstract: false, final false
inline void DisableShaderKeyword(::StringW  keyword) ;

/// @brief Method DisableShaderKeyword_Injected, addr 0xb6106e0, size 0x44, virtual false, abstract: false, final false
static inline void DisableShaderKeyword_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  keyword) ;

/// @brief Method DispatchCompute, addr 0xb616c28, size 0xa8, virtual false, abstract: false, final false
inline void DispatchCompute(::UnityEngine::ComputeShader*  computeShader, int32_t  kernelIndex, ::UnityEngine::ComputeBuffer*  indirectBuffer, uint32_t  argsOffset) ;

/// @brief Method DispatchCompute, addr 0xb616cd0, size 0xa8, virtual false, abstract: false, final false
inline void DispatchCompute(::UnityEngine::ComputeShader*  computeShader, int32_t  kernelIndex, ::UnityEngine::GraphicsBuffer*  indirectBuffer, uint32_t  argsOffset) ;

/// @brief Method DispatchCompute, addr 0xb616c24, size 0x4, virtual false, abstract: false, final false
inline void DispatchCompute(::UnityEngine::ComputeShader*  computeShader, int32_t  kernelIndex, int32_t  threadGroupsX, int32_t  threadGroupsY, int32_t  threadGroupsZ) ;

/// @brief Method DispatchRays, addr 0xb617310, size 0x4, virtual false, abstract: false, final false
inline void DispatchRays(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, ::StringW  rayGenName, ::UnityEngine::GraphicsBuffer*  argsBuffer, uint32_t  argsOffset, ::UnityEngine::Camera*  camera) ;

/// @brief Method DispatchRays, addr 0xb61730c, size 0x4, virtual false, abstract: false, final false
inline void DispatchRays(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, ::StringW  rayGenName, uint32_t  width, uint32_t  height, uint32_t  depth, ::UnityEngine::Camera*  camera) ;

/// @brief Method Dispose, addr 0xb616538, size 0x64, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method Dispose, addr 0xb616520, size 0x18, virtual false, abstract: false, final false
inline void Dispose(bool  disposing) ;

/// [ExcludeFromDocs]
/// @brief Method DrawMesh, addr 0xb6175a8, size 0x38, virtual false, abstract: false, final false
inline void DrawMesh(::UnityEngine::Mesh*  mesh, ::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material) ;

/// [ExcludeFromDocs]
/// @brief Method DrawMesh, addr 0xb617574, size 0x34, virtual false, abstract: false, final false
inline void DrawMesh(::UnityEngine::Mesh*  mesh, ::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  submeshIndex) ;

/// [ExcludeFromDocs]
/// @brief Method DrawMesh, addr 0xb617544, size 0x30, virtual false, abstract: false, final false
inline void DrawMesh(::UnityEngine::Mesh*  mesh, ::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  submeshIndex, int32_t  shaderPass) ;

/// @brief Method DrawMesh, addr 0xb617314, size 0x230, virtual false, abstract: false, final false
inline void DrawMesh(::UnityEngine::Mesh*  mesh, ::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, /* [DefaultValue("0")] */ int32_t  submeshIndex, /* [DefaultValue("-1")] */ int32_t  shaderPass, /* [DefaultValue("null")] */ ::UnityEngine::MaterialPropertyBlock*  properties) ;

/// @brief Method DrawMeshInstanced, addr 0xb618770, size 0x28, virtual false, abstract: false, final false
inline void DrawMeshInstanced(::UnityEngine::Mesh*  mesh, int32_t  submeshIndex, ::UnityEngine::Material*  material, int32_t  shaderPass, ::ArrayW<::UnityEngine::Matrix4x4>  matrices) ;

/// @brief Method DrawMeshInstanced, addr 0xb618754, size 0x1c, virtual false, abstract: false, final false
inline void DrawMeshInstanced(::UnityEngine::Mesh*  mesh, int32_t  submeshIndex, ::UnityEngine::Material*  material, int32_t  shaderPass, ::ArrayW<::UnityEngine::Matrix4x4>  matrices, int32_t  count) ;

/// @brief Method DrawMeshInstanced, addr 0xb6183d4, size 0x380, virtual false, abstract: false, final false
inline void DrawMeshInstanced(::UnityEngine::Mesh*  mesh, int32_t  submeshIndex, ::UnityEngine::Material*  material, int32_t  shaderPass, ::ArrayW<::UnityEngine::Matrix4x4>  matrices, int32_t  count, ::UnityEngine::MaterialPropertyBlock*  properties) ;

/// @brief Method DrawMeshInstancedIndirect, addr 0xb618c20, size 0x20, virtual false, abstract: false, final false
inline void DrawMeshInstancedIndirect(::UnityEngine::Mesh*  mesh, int32_t  submeshIndex, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::ComputeBuffer*  bufferWithArgs) ;

/// @brief Method DrawMeshInstancedIndirect, addr 0xb618c04, size 0x1c, virtual false, abstract: false, final false
inline void DrawMeshInstancedIndirect(::UnityEngine::Mesh*  mesh, int32_t  submeshIndex, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::ComputeBuffer*  bufferWithArgs, int32_t  argsOffset) ;

/// @brief Method DrawMeshInstancedIndirect, addr 0xb6189c8, size 0x23c, virtual false, abstract: false, final false
inline void DrawMeshInstancedIndirect(::UnityEngine::Mesh*  mesh, int32_t  submeshIndex, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::ComputeBuffer*  bufferWithArgs, int32_t  argsOffset, ::UnityEngine::MaterialPropertyBlock*  properties) ;

/// @brief Method DrawMeshInstancedIndirect, addr 0xb618e98, size 0x20, virtual false, abstract: false, final false
inline void DrawMeshInstancedIndirect(::UnityEngine::Mesh*  mesh, int32_t  submeshIndex, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::GraphicsBuffer*  bufferWithArgs) ;

/// @brief Method DrawMeshInstancedIndirect, addr 0xb618e7c, size 0x1c, virtual false, abstract: false, final false
inline void DrawMeshInstancedIndirect(::UnityEngine::Mesh*  mesh, int32_t  submeshIndex, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::GraphicsBuffer*  bufferWithArgs, int32_t  argsOffset) ;

/// @brief Method DrawMeshInstancedIndirect, addr 0xb618c40, size 0x23c, virtual false, abstract: false, final false
inline void DrawMeshInstancedIndirect(::UnityEngine::Mesh*  mesh, int32_t  submeshIndex, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::GraphicsBuffer*  bufferWithArgs, int32_t  argsOffset, ::UnityEngine::MaterialPropertyBlock*  properties) ;

/// @brief Method DrawMeshInstancedProcedural, addr 0xb618798, size 0x230, virtual false, abstract: false, final false
inline void DrawMeshInstancedProcedural(::UnityEngine::Mesh*  mesh, int32_t  submeshIndex, ::UnityEngine::Material*  material, int32_t  shaderPass, int32_t  count, ::UnityEngine::MaterialPropertyBlock*  properties) ;

/// [ExcludeFromDocs]
/// @brief Method DrawMultipleMeshes, addr 0xb6175e0, size 0xa8, virtual false, abstract: false, final false
inline void DrawMultipleMeshes(::ArrayW<::UnityEngine::Matrix4x4>  matrices, ::ArrayW<::UnityEngine::Mesh*>  meshes, ::ArrayW<int32_t>  subsetIndices, int32_t  count, ::UnityEngine::Material*  material, int32_t  shaderPass, /* [DefaultValue("null")] */ ::UnityEngine::MaterialPropertyBlock*  properties) ;

/// @brief Method DrawOcclusionMesh, addr 0xb618eb8, size 0x4, virtual false, abstract: false, final false
inline void DrawOcclusionMesh(::UnityEngine::RectInt  normalizedCamViewport) ;

/// @brief Method DrawProcedural, addr 0xb617b98, size 0x34, virtual false, abstract: false, final false
inline void DrawProcedural(::UnityEngine::GraphicsBuffer*  indexBuffer, ::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::MeshTopology  topology, int32_t  indexCount) ;

/// @brief Method DrawProcedural, addr 0xb617b68, size 0x30, virtual false, abstract: false, final false
inline void DrawProcedural(::UnityEngine::GraphicsBuffer*  indexBuffer, ::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::MeshTopology  topology, int32_t  indexCount, int32_t  instanceCount) ;

/// @brief Method DrawProcedural, addr 0xb617a20, size 0x148, virtual false, abstract: false, final false
inline void DrawProcedural(::UnityEngine::GraphicsBuffer*  indexBuffer, ::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::MeshTopology  topology, int32_t  indexCount, int32_t  instanceCount, ::UnityEngine::MaterialPropertyBlock*  properties) ;

/// [ExcludeFromDocs]
/// @brief Method DrawProcedural, addr 0xb6179ec, size 0x34, virtual false, abstract: false, final false
inline void DrawProcedural(::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::MeshTopology  topology, int32_t  vertexCount) ;

/// [ExcludeFromDocs]
/// @brief Method DrawProcedural, addr 0xb6179bc, size 0x30, virtual false, abstract: false, final false
inline void DrawProcedural(::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::MeshTopology  topology, int32_t  vertexCount, int32_t  instanceCount) ;

/// @brief Method DrawProcedural, addr 0xb617888, size 0x134, virtual false, abstract: false, final false
inline void DrawProcedural(::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::MeshTopology  topology, int32_t  vertexCount, /* [DefaultValue("1")] */ int32_t  instanceCount, /* [DefaultValue("null")] */ ::UnityEngine::MaterialPropertyBlock*  properties) ;

/// @brief Method DrawProceduralIndirect, addr 0xb617f9c, size 0x34, virtual false, abstract: false, final false
inline void DrawProceduralIndirect(::UnityEngine::GraphicsBuffer*  indexBuffer, ::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::MeshTopology  topology, ::UnityEngine::ComputeBuffer*  bufferWithArgs) ;

/// @brief Method DrawProceduralIndirect, addr 0xb617f6c, size 0x30, virtual false, abstract: false, final false
inline void DrawProceduralIndirect(::UnityEngine::GraphicsBuffer*  indexBuffer, ::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::MeshTopology  topology, ::UnityEngine::ComputeBuffer*  bufferWithArgs, int32_t  argsOffset) ;

/// @brief Method DrawProceduralIndirect, addr 0xb617dc0, size 0x1ac, virtual false, abstract: false, final false
inline void DrawProceduralIndirect(::UnityEngine::GraphicsBuffer*  indexBuffer, ::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::MeshTopology  topology, ::UnityEngine::ComputeBuffer*  bufferWithArgs, int32_t  argsOffset, ::UnityEngine::MaterialPropertyBlock*  properties) ;

/// @brief Method DrawProceduralIndirect, addr 0xb6183a0, size 0x34, virtual false, abstract: false, final false
inline void DrawProceduralIndirect(::UnityEngine::GraphicsBuffer*  indexBuffer, ::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::MeshTopology  topology, ::UnityEngine::GraphicsBuffer*  bufferWithArgs) ;

/// @brief Method DrawProceduralIndirect, addr 0xb618370, size 0x30, virtual false, abstract: false, final false
inline void DrawProceduralIndirect(::UnityEngine::GraphicsBuffer*  indexBuffer, ::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::MeshTopology  topology, ::UnityEngine::GraphicsBuffer*  bufferWithArgs, int32_t  argsOffset) ;

/// @brief Method DrawProceduralIndirect, addr 0xb6181c4, size 0x1ac, virtual false, abstract: false, final false
inline void DrawProceduralIndirect(::UnityEngine::GraphicsBuffer*  indexBuffer, ::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::MeshTopology  topology, ::UnityEngine::GraphicsBuffer*  bufferWithArgs, int32_t  argsOffset, ::UnityEngine::MaterialPropertyBlock*  properties) ;

/// @brief Method DrawProceduralIndirect, addr 0xb617d8c, size 0x34, virtual false, abstract: false, final false
inline void DrawProceduralIndirect(::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::MeshTopology  topology, ::UnityEngine::ComputeBuffer*  bufferWithArgs) ;

/// @brief Method DrawProceduralIndirect, addr 0xb617d5c, size 0x30, virtual false, abstract: false, final false
inline void DrawProceduralIndirect(::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::MeshTopology  topology, ::UnityEngine::ComputeBuffer*  bufferWithArgs, int32_t  argsOffset) ;

/// @brief Method DrawProceduralIndirect, addr 0xb617bcc, size 0x190, virtual false, abstract: false, final false
inline void DrawProceduralIndirect(::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::MeshTopology  topology, ::UnityEngine::ComputeBuffer*  bufferWithArgs, int32_t  argsOffset, ::UnityEngine::MaterialPropertyBlock*  properties) ;

/// @brief Method DrawProceduralIndirect, addr 0xb618190, size 0x34, virtual false, abstract: false, final false
inline void DrawProceduralIndirect(::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::MeshTopology  topology, ::UnityEngine::GraphicsBuffer*  bufferWithArgs) ;

/// @brief Method DrawProceduralIndirect, addr 0xb618160, size 0x30, virtual false, abstract: false, final false
inline void DrawProceduralIndirect(::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::MeshTopology  topology, ::UnityEngine::GraphicsBuffer*  bufferWithArgs, int32_t  argsOffset) ;

/// @brief Method DrawProceduralIndirect, addr 0xb617fd0, size 0x190, virtual false, abstract: false, final false
inline void DrawProceduralIndirect(::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::MeshTopology  topology, ::UnityEngine::GraphicsBuffer*  bufferWithArgs, int32_t  argsOffset, ::UnityEngine::MaterialPropertyBlock*  properties) ;

/// [ExcludeFromDocs]
/// @brief Method DrawRenderer, addr 0xb617850, size 0xc, virtual false, abstract: false, final false
inline void DrawRenderer(::UnityEngine::Renderer*  renderer, ::UnityEngine::Material*  material) ;

/// [ExcludeFromDocs]
/// @brief Method DrawRenderer, addr 0xb617848, size 0x8, virtual false, abstract: false, final false
inline void DrawRenderer(::UnityEngine::Renderer*  renderer, ::UnityEngine::Material*  material, int32_t  submeshIndex) ;

/// @brief Method DrawRenderer, addr 0xb617688, size 0x1c0, virtual false, abstract: false, final false
inline void DrawRenderer(::UnityEngine::Renderer*  renderer, ::UnityEngine::Material*  material, /* [DefaultValue("0")] */ int32_t  submeshIndex, /* [DefaultValue("-1")] */ int32_t  shaderPass) ;

/// @brief Method DrawRendererList, addr 0xb61785c, size 0x2c, virtual false, abstract: false, final false
inline void DrawRendererList(::UnityEngine::Rendering::RendererList  rendererList) ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::EnableComputeKeyword", HasExplicitThis = true)]
/// @brief Method EnableComputeKeyword, addr 0xb6103ec, size 0xb0, virtual false, abstract: false, final false
inline void EnableComputeKeyword(::UnityEngine::ComputeShader*  computeShader, ::UnityEngine::Rendering::LocalKeyword  keyword) ;

/// @brief Method EnableComputeKeyword_Injected, addr 0xb61049c, size 0x54, virtual false, abstract: false, final false
static inline void EnableComputeKeyword_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  computeShader, ::by_ref<::UnityEngine::Rendering::LocalKeyword>  keyword) ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::EnableShaderKeyword", HasExplicitThis = true)]
/// @brief Method EnableGlobalKeyword, addr 0xb610248, size 0x5c, virtual false, abstract: false, final false
inline void EnableGlobalKeyword(::UnityEngine::Rendering::GlobalKeyword  keyword) ;

/// @brief Method EnableGlobalKeyword_Injected, addr 0xb6102a4, size 0x44, virtual false, abstract: false, final false
static inline void EnableGlobalKeyword_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Rendering::GlobalKeyword>  keyword) ;

/// @brief Method EnableKeyword, addr 0xb610524, size 0x2c, virtual false, abstract: false, final false
inline void EnableKeyword(::UnityEngine::ComputeShader*  computeShader, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::LocalKeyword>  keyword) ;

/// @brief Method EnableKeyword, addr 0xb6104f0, size 0x8, virtual false, abstract: false, final false
inline void EnableKeyword(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::GlobalKeyword>  keyword) ;

/// @brief Method EnableKeyword, addr 0xb6104f8, size 0x2c, virtual false, abstract: false, final false
inline void EnableKeyword(::UnityEngine::Material*  material, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::LocalKeyword>  keyword) ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::EnableMaterialKeyword", HasExplicitThis = true)]
/// @brief Method EnableMaterialKeyword, addr 0xb6102e8, size 0xb0, virtual false, abstract: false, final false
inline void EnableMaterialKeyword(::UnityEngine::Material*  material, ::UnityEngine::Rendering::LocalKeyword  keyword) ;

/// @brief Method EnableMaterialKeyword_Injected, addr 0xb610398, size 0x54, virtual false, abstract: false, final false
static inline void EnableMaterialKeyword_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  material, ::by_ref<::UnityEngine::Rendering::LocalKeyword>  keyword) ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::EnableScissorRect", HasExplicitThis = true, ThrowsException = true)]
/// @brief Method EnableScissorRect, addr 0xb60ef44, size 0x68, virtual false, abstract: false, final false
inline void EnableScissorRect(::UnityEngine::Rect  scissor) ;

/// @brief Method EnableScissorRect_Injected, addr 0xb60efac, size 0x44, virtual false, abstract: false, final false
static inline void EnableScissorRect_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Rect>  scissor) ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::EnableShaderKeyword", HasExplicitThis = true)]
/// @brief Method EnableShaderKeyword, addr 0xb610074, size 0x190, virtual false, abstract: false, final false
inline void EnableShaderKeyword(::StringW  keyword) ;

/// @brief Method EnableShaderKeyword_Injected, addr 0xb610204, size 0x44, virtual false, abstract: false, final false
static inline void EnableShaderKeyword_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  keyword) ;

/// @brief Method EndRenderPass, addr 0xb615fec, size 0x20, virtual false, abstract: false, final false
inline void EndRenderPass() ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::EndRenderPass", HasExplicitThis = true)]
/// @brief Method EndRenderPass_Internal, addr 0xb615f60, size 0x50, virtual false, abstract: false, final false
inline void EndRenderPass_Internal() ;

/// @brief Method EndRenderPass_Internal_Injected, addr 0xb615fb0, size 0x3c, virtual false, abstract: false, final false
static inline void EndRenderPass_Internal_Injected(::System::IntPtr  _unity_self) ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::EndSample", HasExplicitThis = true)]
/// @brief Method EndSample, addr 0xb612020, size 0x190, virtual false, abstract: false, final false
inline void EndSample(::StringW  name) ;

/// @brief Method EndSample, addr 0xb6122c4, size 0x4, virtual false, abstract: false, final false
inline void EndSample(::UnityEngine::Profiling::CustomSampler*  sampler) ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::EndSample_CustomSampler", HasExplicitThis = true)]
/// @brief Method EndSample_CustomSampler, addr 0xb6122c8, size 0xcc, virtual false, abstract: false, final false
inline void EndSample_CustomSampler(/* [NotNull] */ ::UnityEngine::Profiling::CustomSampler*  sampler) ;

/// @brief Method EndSample_CustomSampler_Injected, addr 0xb6123d8, size 0x44, virtual false, abstract: false, final false
static inline void EndSample_CustomSampler_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  sampler) ;

/// @brief Method EndSample_Injected, addr 0xb6121b0, size 0x44, virtual false, abstract: false, final false
static inline void EndSample_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  name) ;

/// @brief Method Finalize, addr 0xb616494, size 0x8c, virtual true, abstract: false, final false
inline void Finalize() ;

/// @brief Method GetTemporaryRT, addr 0xb60f68c, size 0x34, virtual false, abstract: false, final false
inline void GetTemporaryRT(int32_t  nameID, ::UnityEngine::RenderTextureDescriptor  desc, ::UnityEngine::FilterMode  filter) ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::GetTemporaryRTWithDescriptor", HasExplicitThis = true)]
/// @brief Method GetTemporaryRTWithDescriptor, addr 0xb60f5c0, size 0x70, virtual false, abstract: false, final false
inline void GetTemporaryRTWithDescriptor(int32_t  nameID, ::UnityEngine::RenderTextureDescriptor  desc, ::UnityEngine::FilterMode  filter) ;

/// @brief Method GetTemporaryRTWithDescriptor_Injected, addr 0xb60f630, size 0x5c, virtual false, abstract: false, final false
static inline void GetTemporaryRTWithDescriptor_Injected(::System::IntPtr  _unity_self, int32_t  nameID, ::by_ref<::UnityEngine::RenderTextureDescriptor>  desc, ::UnityEngine::FilterMode  filter) ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::IncrementUpdateCount", HasExplicitThis = true)]
/// @brief Method IncrementUpdateCount, addr 0xb612920, size 0x58, virtual false, abstract: false, final false
inline void IncrementUpdateCount(::UnityEngine::Rendering::RenderTargetIdentifier  dest) ;

/// @brief Method IncrementUpdateCount_Injected, addr 0xb612978, size 0x44, virtual false, abstract: false, final false
static inline void IncrementUpdateCount_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier>  dest) ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::InitBuffer")]
/// @brief Method InitBuffer, addr 0xb6091f0, size 0x28, virtual false, abstract: false, final false
static inline ::System::IntPtr InitBuffer() ;

/// [FreeFunction(Name = "RenderingCommandBuffer_Bindings::InternalSetGraphicsBufferCounterValue", HasExplicitThis = true)]
/// @brief Method InternalSetComputeBufferCounterValue, addr 0xb61503c, size 0xdc, virtual false, abstract: false, final false
inline void InternalSetComputeBufferCounterValue(/* [NotNull] */ ::UnityEngine::ComputeBuffer*  buffer, uint32_t  counterValue) ;

/// @brief Method InternalSetComputeBufferCounterValue_Injected, addr 0xb61532c, size 0x54, virtual false, abstract: false, final false
static inline void InternalSetComputeBufferCounterValue_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  buffer, uint32_t  counterValue) ;

/// [FreeFunction(Name = "RenderingCommandBuffer_Bindings::InternalSetGraphicsBufferData", HasExplicitThis = true, ThrowsException = true)]
/// @brief Method InternalSetComputeBufferData, addr 0xb614cec, size 0x10c, virtual false, abstract: false, final false
inline void InternalSetComputeBufferData(/* [NotNull] */ ::UnityEngine::ComputeBuffer*  buffer, ::System::Array*  data, int32_t  managedBufferStartIndex, int32_t  graphicsBufferStartIndex, int32_t  count, int32_t  elemSize) ;

/// @brief Method InternalSetComputeBufferData_Injected, addr 0xb6152a8, size 0x84, virtual false, abstract: false, final false
static inline void InternalSetComputeBufferData_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  buffer, ::System::Array*  data, int32_t  managedBufferStartIndex, int32_t  graphicsBufferStartIndex, int32_t  count, int32_t  elemSize) ;

/// [FreeFunction(Name = "RenderingCommandBuffer_Bindings::InternalSetGraphicsBufferNativeData", HasExplicitThis = true, ThrowsException = true)]
/// @brief Method InternalSetComputeBufferNativeData, addr 0xb615118, size 0x10c, virtual false, abstract: false, final false
inline void InternalSetComputeBufferNativeData(/* [NotNull] */ ::UnityEngine::ComputeBuffer*  buffer, ::System::IntPtr  data, int32_t  nativeBufferStartIndex, int32_t  graphicsBufferStartIndex, int32_t  count, int32_t  elemSize) ;

/// @brief Method InternalSetComputeBufferNativeData_Injected, addr 0xb615224, size 0x84, virtual false, abstract: false, final false
static inline void InternalSetComputeBufferNativeData_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  buffer, ::System::IntPtr  data, int32_t  nativeBufferStartIndex, int32_t  graphicsBufferStartIndex, int32_t  count, int32_t  elemSize) ;

/// [FreeFunction(Name = "RenderingCommandBuffer_Bindings::InternalSetGraphicsBufferCounterValue", HasExplicitThis = true)]
/// @brief Method InternalSetGraphicsBufferCounterValue, addr 0xb615810, size 0xdc, virtual false, abstract: false, final false
inline void InternalSetGraphicsBufferCounterValue(/* [NotNull] */ ::UnityEngine::GraphicsBuffer*  buffer, uint32_t  counterValue) ;

/// @brief Method InternalSetGraphicsBufferCounterValue_Injected, addr 0xb615b00, size 0x54, virtual false, abstract: false, final false
static inline void InternalSetGraphicsBufferCounterValue_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  buffer, uint32_t  counterValue) ;

/// [FreeFunction(Name = "RenderingCommandBuffer_Bindings::InternalSetGraphicsBufferData", HasExplicitThis = true, ThrowsException = true)]
/// @brief Method InternalSetGraphicsBufferData, addr 0xb6154c0, size 0x10c, virtual false, abstract: false, final false
inline void InternalSetGraphicsBufferData(/* [NotNull] */ ::UnityEngine::GraphicsBuffer*  buffer, ::System::Array*  data, int32_t  managedBufferStartIndex, int32_t  graphicsBufferStartIndex, int32_t  count, int32_t  elemSize) ;

/// @brief Method InternalSetGraphicsBufferData_Injected, addr 0xb615a7c, size 0x84, virtual false, abstract: false, final false
static inline void InternalSetGraphicsBufferData_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  buffer, ::System::Array*  data, int32_t  managedBufferStartIndex, int32_t  graphicsBufferStartIndex, int32_t  count, int32_t  elemSize) ;

/// [FreeFunction(Name = "RenderingCommandBuffer_Bindings::InternalSetGraphicsBufferNativeData", HasExplicitThis = true, ThrowsException = true)]
/// @brief Method InternalSetGraphicsBufferNativeData, addr 0xb6158ec, size 0x10c, virtual false, abstract: false, final false
inline void InternalSetGraphicsBufferNativeData(/* [NotNull] */ ::UnityEngine::GraphicsBuffer*  buffer, ::System::IntPtr  data, int32_t  nativeBufferStartIndex, int32_t  graphicsBufferStartIndex, int32_t  count, int32_t  elemSize) ;

/// @brief Method InternalSetGraphicsBufferNativeData_Injected, addr 0xb6159f8, size 0x84, virtual false, abstract: false, final false
static inline void InternalSetGraphicsBufferNativeData_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  buffer, ::System::IntPtr  data, int32_t  nativeBufferStartIndex, int32_t  graphicsBufferStartIndex, int32_t  count, int32_t  elemSize) ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::Internal_BuildRayTracingAccelerationStructure", HasExplicitThis = true)]
/// @brief Method Internal_BuildRayTracingAccelerationStructure, addr 0xb60c248, size 0xe0, virtual false, abstract: false, final false
inline void Internal_BuildRayTracingAccelerationStructure(/* [NotNull] */ ::UnityEngine::Rendering::RayTracingAccelerationStructure*  accelerationStructure, ::GlobalNamespace::RayTracingAccelerationStructure_BuildSettings  buildSettings) ;

/// @brief Method Internal_BuildRayTracingAccelerationStructure_Injected, addr 0xb60c328, size 0x54, virtual false, abstract: false, final false
static inline void Internal_BuildRayTracingAccelerationStructure_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  accelerationStructure, ::by_ref<::GlobalNamespace::RayTracingAccelerationStructure_BuildSettings>  buildSettings) ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::Internal_DispatchCompute", HasExplicitThis = true, ThrowsException = true)]
/// @brief Method Internal_DispatchCompute, addr 0xb60a958, size 0x108, virtual false, abstract: false, final false
inline void Internal_DispatchCompute(/* [NotNull] */ ::UnityEngine::ComputeShader*  computeShader, int32_t  kernelIndex, int32_t  threadGroupsX, int32_t  threadGroupsY, int32_t  threadGroupsZ) ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::Internal_DispatchComputeIndirect", HasExplicitThis = true, ThrowsException = true)]
/// @brief Method Internal_DispatchComputeIndirect, addr 0xb60aad4, size 0x108, virtual false, abstract: false, final false
inline void Internal_DispatchComputeIndirect(/* [NotNull] */ ::UnityEngine::ComputeShader*  computeShader, int32_t  kernelIndex, ::UnityEngine::ComputeBuffer*  indirectBuffer, uint32_t  argsOffset) ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::Internal_DispatchComputeIndirect", HasExplicitThis = true, ThrowsException = true)]
/// @brief Method Internal_DispatchComputeIndirectGraphicsBuffer, addr 0xb60ac48, size 0x108, virtual false, abstract: false, final false
inline void Internal_DispatchComputeIndirectGraphicsBuffer(/* [NotNull] */ ::UnityEngine::ComputeShader*  computeShader, int32_t  kernelIndex, ::UnityEngine::GraphicsBuffer*  indirectBuffer, uint32_t  argsOffset) ;

/// @brief Method Internal_DispatchComputeIndirectGraphicsBuffer_Injected, addr 0xb60ad50, size 0x6c, virtual false, abstract: false, final false
static inline void Internal_DispatchComputeIndirectGraphicsBuffer_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  computeShader, int32_t  kernelIndex, ::System::IntPtr  indirectBuffer, uint32_t  argsOffset) ;

/// @brief Method Internal_DispatchComputeIndirect_Injected, addr 0xb60abdc, size 0x6c, virtual false, abstract: false, final false
static inline void Internal_DispatchComputeIndirect_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  computeShader, int32_t  kernelIndex, ::System::IntPtr  indirectBuffer, uint32_t  argsOffset) ;

/// @brief Method Internal_DispatchCompute_Injected, addr 0xb60aa60, size 0x74, virtual false, abstract: false, final false
static inline void Internal_DispatchCompute_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  computeShader, int32_t  kernelIndex, int32_t  threadGroupsX, int32_t  threadGroupsY, int32_t  threadGroupsZ) ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::Internal_DispatchRays", HasExplicitThis = true, ThrowsException = true)]
/// @brief Method Internal_DispatchRays, addr 0xb60c6d4, size 0x264, virtual false, abstract: false, final false
inline void Internal_DispatchRays(/* [NotNull] */ ::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, ::StringW  rayGenShaderName, uint32_t  width, uint32_t  height, uint32_t  depth, ::UnityEngine::Camera*  camera) ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::Internal_DispatchRaysIndirect", HasExplicitThis = true, ThrowsException = true)]
/// @brief Method Internal_DispatchRaysIndirect, addr 0xb60c9bc, size 0x2b4, virtual false, abstract: false, final false
inline void Internal_DispatchRaysIndirect(/* [NotNull] */ ::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, ::StringW  rayGenShaderName, /* [NotNull] */ ::UnityEngine::GraphicsBuffer*  argsBuffer, uint32_t  argsOffset, ::UnityEngine::Camera*  camera) ;

/// @brief Method Internal_DispatchRaysIndirect_Injected, addr 0xb60cc70, size 0x74, virtual false, abstract: false, final false
static inline void Internal_DispatchRaysIndirect_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  rayTracingShader, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  rayGenShaderName, ::System::IntPtr  argsBuffer, uint32_t  argsOffset, ::System::IntPtr  camera) ;

/// @brief Method Internal_DispatchRays_Injected, addr 0xb60c938, size 0x84, virtual false, abstract: false, final false
static inline void Internal_DispatchRays_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  rayTracingShader, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  rayGenShaderName, uint32_t  width, uint32_t  height, uint32_t  depth, ::System::IntPtr  camera) ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::Internal_DrawMesh", HasExplicitThis = true)]
/// @brief Method Internal_DrawMesh, addr 0xb60d484, size 0x14c, virtual false, abstract: false, final false
inline void Internal_DrawMesh(/* [NotNull] */ ::UnityEngine::Mesh*  mesh, ::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  submeshIndex, int32_t  shaderPass, ::UnityEngine::MaterialPropertyBlock*  properties) ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::Internal_DrawMeshInstanced", HasExplicitThis = true)]
/// @brief Method Internal_DrawMeshInstanced, addr 0xb60e4a0, size 0x1a0, virtual false, abstract: false, final false
inline void Internal_DrawMeshInstanced(::UnityEngine::Mesh*  mesh, int32_t  submeshIndex, ::UnityEngine::Material*  material, int32_t  shaderPass, ::ArrayW<::UnityEngine::Matrix4x4>  matrices, int32_t  count, ::UnityEngine::MaterialPropertyBlock*  properties) ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::Internal_DrawMeshInstancedIndirect", HasExplicitThis = true)]
/// @brief Method Internal_DrawMeshInstancedIndirect, addr 0xb60e864, size 0x12c, virtual false, abstract: false, final false
inline void Internal_DrawMeshInstancedIndirect(::UnityEngine::Mesh*  mesh, int32_t  submeshIndex, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::ComputeBuffer*  bufferWithArgs, int32_t  argsOffset, ::UnityEngine::MaterialPropertyBlock*  properties) ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::Internal_DrawMeshInstancedIndirect", HasExplicitThis = true)]
/// @brief Method Internal_DrawMeshInstancedIndirectGraphicsBuffer, addr 0xb60ea1c, size 0x12c, virtual false, abstract: false, final false
inline void Internal_DrawMeshInstancedIndirectGraphicsBuffer(::UnityEngine::Mesh*  mesh, int32_t  submeshIndex, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::GraphicsBuffer*  bufferWithArgs, int32_t  argsOffset, ::UnityEngine::MaterialPropertyBlock*  properties) ;

/// @brief Method Internal_DrawMeshInstancedIndirectGraphicsBuffer_Injected, addr 0xb60eb48, size 0x8c, virtual false, abstract: false, final false
static inline void Internal_DrawMeshInstancedIndirectGraphicsBuffer_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  mesh, int32_t  submeshIndex, ::System::IntPtr  material, int32_t  shaderPass, ::System::IntPtr  bufferWithArgs, int32_t  argsOffset, ::System::IntPtr  properties) ;

/// @brief Method Internal_DrawMeshInstancedIndirect_Injected, addr 0xb60e990, size 0x8c, virtual false, abstract: false, final false
static inline void Internal_DrawMeshInstancedIndirect_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  mesh, int32_t  submeshIndex, ::System::IntPtr  material, int32_t  shaderPass, ::System::IntPtr  bufferWithArgs, int32_t  argsOffset, ::System::IntPtr  properties) ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::Internal_DrawMeshInstancedProcedural", HasExplicitThis = true)]
/// @brief Method Internal_DrawMeshInstancedProcedural, addr 0xb60e6cc, size 0x114, virtual false, abstract: false, final false
inline void Internal_DrawMeshInstancedProcedural(::UnityEngine::Mesh*  mesh, int32_t  submeshIndex, ::UnityEngine::Material*  material, int32_t  shaderPass, int32_t  count, ::UnityEngine::MaterialPropertyBlock*  properties) ;

/// @brief Method Internal_DrawMeshInstancedProcedural_Injected, addr 0xb60e7e0, size 0x84, virtual false, abstract: false, final false
static inline void Internal_DrawMeshInstancedProcedural_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  mesh, int32_t  submeshIndex, ::System::IntPtr  material, int32_t  shaderPass, int32_t  count, ::System::IntPtr  properties) ;

/// @brief Method Internal_DrawMeshInstanced_Injected, addr 0xb60e640, size 0x8c, virtual false, abstract: false, final false
static inline void Internal_DrawMeshInstanced_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  mesh, int32_t  submeshIndex, ::System::IntPtr  material, int32_t  shaderPass, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  matrices, int32_t  count, ::System::IntPtr  properties) ;

/// @brief Method Internal_DrawMesh_Injected, addr 0xb60d5d0, size 0x84, virtual false, abstract: false, final false
static inline void Internal_DrawMesh_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  mesh, ::by_ref<::UnityEngine::Matrix4x4>  matrix, ::System::IntPtr  material, int32_t  submeshIndex, int32_t  shaderPass, ::System::IntPtr  properties) ;

/// [NativeMethod("AddDrawMultipleMeshes")]
/// @brief Method Internal_DrawMultipleMeshes, addr 0xb60d654, size 0x1dc, virtual false, abstract: false, final false
inline void Internal_DrawMultipleMeshes(::ArrayW<::UnityEngine::Matrix4x4>  matrices, ::ArrayW<::UnityEngine::Mesh*>  meshes, ::ArrayW<int32_t>  subsetIndices, int32_t  count, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::MaterialPropertyBlock*  properties) ;

/// @brief Method Internal_DrawMultipleMeshes_Injected, addr 0xb60d830, size 0x8c, virtual false, abstract: false, final false
static inline void Internal_DrawMultipleMeshes_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  matrices, ::ArrayW<::UnityEngine::Mesh*>  meshes, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  subsetIndices, int32_t  count, ::System::IntPtr  material, int32_t  shaderPass, ::System::IntPtr  properties) ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::Internal_DrawOcclusionMesh", HasExplicitThis = true)]
/// @brief Method Internal_DrawOcclusionMesh, addr 0xb60ebd4, size 0x64, virtual false, abstract: false, final false
inline void Internal_DrawOcclusionMesh(::UnityEngine::RectInt  normalizedCamViewport) ;

/// @brief Method Internal_DrawOcclusionMesh_Injected, addr 0xb60ec38, size 0x44, virtual false, abstract: false, final false
static inline void Internal_DrawOcclusionMesh_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::RectInt>  normalizedCamViewport) ;

/// [NativeMethod("AddDrawProcedural")]
/// @brief Method Internal_DrawProcedural, addr 0xb60daf0, size 0xf8, virtual false, abstract: false, final false
inline void Internal_DrawProcedural(::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::MeshTopology  topology, int32_t  vertexCount, int32_t  instanceCount, ::UnityEngine::MaterialPropertyBlock*  properties) ;

/// [NativeMethod("AddDrawProceduralIndexed")]
/// @brief Method Internal_DrawProceduralIndexed, addr 0xb60dc74, size 0x110, virtual false, abstract: false, final false
inline void Internal_DrawProceduralIndexed(::UnityEngine::GraphicsBuffer*  indexBuffer, ::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::MeshTopology  topology, int32_t  indexCount, int32_t  instanceCount, ::UnityEngine::MaterialPropertyBlock*  properties) ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::Internal_DrawProceduralIndexedIndirect", HasExplicitThis = true)]
/// @brief Method Internal_DrawProceduralIndexedIndirect, addr 0xb60dfac, size 0x118, virtual false, abstract: false, final false
inline void Internal_DrawProceduralIndexedIndirect(::UnityEngine::GraphicsBuffer*  indexBuffer, ::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::MeshTopology  topology, ::UnityEngine::ComputeBuffer*  bufferWithArgs, int32_t  argsOffset, ::UnityEngine::MaterialPropertyBlock*  properties) ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::Internal_DrawProceduralIndexedIndirect", HasExplicitThis = true)]
/// @brief Method Internal_DrawProceduralIndexedIndirectGraphicsBuffer, addr 0xb60e2ec, size 0x118, virtual false, abstract: false, final false
inline void Internal_DrawProceduralIndexedIndirectGraphicsBuffer(::UnityEngine::GraphicsBuffer*  indexBuffer, ::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::MeshTopology  topology, ::UnityEngine::GraphicsBuffer*  bufferWithArgs, int32_t  argsOffset, ::UnityEngine::MaterialPropertyBlock*  properties) ;

/// @brief Method Internal_DrawProceduralIndexedIndirectGraphicsBuffer_Injected, addr 0xb60e404, size 0x9c, virtual false, abstract: false, final false
static inline void Internal_DrawProceduralIndexedIndirectGraphicsBuffer_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  indexBuffer, ::by_ref<::UnityEngine::Matrix4x4>  matrix, ::System::IntPtr  material, int32_t  shaderPass, ::UnityEngine::MeshTopology  topology, ::System::IntPtr  bufferWithArgs, int32_t  argsOffset, ::System::IntPtr  properties) ;

/// @brief Method Internal_DrawProceduralIndexedIndirect_Injected, addr 0xb60e0c4, size 0x9c, virtual false, abstract: false, final false
static inline void Internal_DrawProceduralIndexedIndirect_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  indexBuffer, ::by_ref<::UnityEngine::Matrix4x4>  matrix, ::System::IntPtr  material, int32_t  shaderPass, ::UnityEngine::MeshTopology  topology, ::System::IntPtr  bufferWithArgs, int32_t  argsOffset, ::System::IntPtr  properties) ;

/// @brief Method Internal_DrawProceduralIndexed_Injected, addr 0xb60dd84, size 0x9c, virtual false, abstract: false, final false
static inline void Internal_DrawProceduralIndexed_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  indexBuffer, ::by_ref<::UnityEngine::Matrix4x4>  matrix, ::System::IntPtr  material, int32_t  shaderPass, ::UnityEngine::MeshTopology  topology, int32_t  indexCount, int32_t  instanceCount, ::System::IntPtr  properties) ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::Internal_DrawProceduralIndirect", HasExplicitThis = true)]
/// @brief Method Internal_DrawProceduralIndirect, addr 0xb60de20, size 0x100, virtual false, abstract: false, final false
inline void Internal_DrawProceduralIndirect(::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::MeshTopology  topology, ::UnityEngine::ComputeBuffer*  bufferWithArgs, int32_t  argsOffset, ::UnityEngine::MaterialPropertyBlock*  properties) ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::Internal_DrawProceduralIndirect", HasExplicitThis = true)]
/// @brief Method Internal_DrawProceduralIndirectGraphicsBuffer, addr 0xb60e160, size 0x100, virtual false, abstract: false, final false
inline void Internal_DrawProceduralIndirectGraphicsBuffer(::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::MeshTopology  topology, ::UnityEngine::GraphicsBuffer*  bufferWithArgs, int32_t  argsOffset, ::UnityEngine::MaterialPropertyBlock*  properties) ;

/// @brief Method Internal_DrawProceduralIndirectGraphicsBuffer_Injected, addr 0xb60e260, size 0x8c, virtual false, abstract: false, final false
static inline void Internal_DrawProceduralIndirectGraphicsBuffer_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Matrix4x4>  matrix, ::System::IntPtr  material, int32_t  shaderPass, ::UnityEngine::MeshTopology  topology, ::System::IntPtr  bufferWithArgs, int32_t  argsOffset, ::System::IntPtr  properties) ;

/// @brief Method Internal_DrawProceduralIndirect_Injected, addr 0xb60df20, size 0x8c, virtual false, abstract: false, final false
static inline void Internal_DrawProceduralIndirect_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Matrix4x4>  matrix, ::System::IntPtr  material, int32_t  shaderPass, ::UnityEngine::MeshTopology  topology, ::System::IntPtr  bufferWithArgs, int32_t  argsOffset, ::System::IntPtr  properties) ;

/// @brief Method Internal_DrawProcedural_Injected, addr 0xb60dbe8, size 0x8c, virtual false, abstract: false, final false
static inline void Internal_DrawProcedural_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Matrix4x4>  matrix, ::System::IntPtr  material, int32_t  shaderPass, ::UnityEngine::MeshTopology  topology, int32_t  vertexCount, int32_t  instanceCount, ::System::IntPtr  properties) ;

/// [NativeMethod("AddDrawRenderer")]
/// @brief Method Internal_DrawRenderer, addr 0xb60d8bc, size 0x12c, virtual false, abstract: false, final false
inline void Internal_DrawRenderer(/* [NotNull] */ ::UnityEngine::Renderer*  renderer, ::UnityEngine::Material*  material, int32_t  submeshIndex, int32_t  shaderPass) ;

/// [NativeMethod("AddDrawRendererList")]
/// @brief Method Internal_DrawRendererList, addr 0xb60da54, size 0x58, virtual false, abstract: false, final false
inline void Internal_DrawRendererList(::UnityEngine::Rendering::RendererList  rendererList) ;

/// @brief Method Internal_DrawRendererList_Injected, addr 0xb60daac, size 0x44, virtual false, abstract: false, final false
static inline void Internal_DrawRendererList_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Rendering::RendererList>  rendererList) ;

/// @brief Method Internal_DrawRenderer_Injected, addr 0xb60d9e8, size 0x6c, virtual false, abstract: false, final false
static inline void Internal_DrawRenderer_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  renderer, ::System::IntPtr  material, int32_t  submeshIndex, int32_t  shaderPass) ;

/// [NativeMethod("AddRequestAsyncReadback")]
/// @brief Method Internal_RequestAsyncReadback_1, addr 0xb6081b8, size 0x110, virtual false, abstract: false, final false
inline void Internal_RequestAsyncReadback_1(/* [NotNull] */ ::UnityEngine::ComputeBuffer*  src, /* [NotNull] */ ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*  callback, ::UnityEngine::Rendering::AsyncRequestNativeArrayData*  nativeArrayData) ;

/// @brief Method Internal_RequestAsyncReadback_1_Injected, addr 0xb6082c8, size 0x5c, virtual false, abstract: false, final false
static inline void Internal_RequestAsyncReadback_1_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  src, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*  callback, ::UnityEngine::Rendering::AsyncRequestNativeArrayData*  nativeArrayData) ;

/// [NativeMethod("AddRequestAsyncReadback")]
/// @brief Method Internal_RequestAsyncReadback_2, addr 0xb608324, size 0x128, virtual false, abstract: false, final false
inline void Internal_RequestAsyncReadback_2(/* [NotNull] */ ::UnityEngine::ComputeBuffer*  src, int32_t  size, int32_t  offset, /* [NotNull] */ ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*  callback, ::UnityEngine::Rendering::AsyncRequestNativeArrayData*  nativeArrayData) ;

/// @brief Method Internal_RequestAsyncReadback_2_Injected, addr 0xb60844c, size 0x74, virtual false, abstract: false, final false
static inline void Internal_RequestAsyncReadback_2_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  src, int32_t  size, int32_t  offset, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*  callback, ::UnityEngine::Rendering::AsyncRequestNativeArrayData*  nativeArrayData) ;

/// [NativeMethod("AddRequestAsyncReadback")]
/// @brief Method Internal_RequestAsyncReadback_3, addr 0xb6084c0, size 0x11c, virtual false, abstract: false, final false
inline void Internal_RequestAsyncReadback_3(/* [NotNull] */ ::UnityEngine::Texture*  src, /* [NotNull] */ ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*  callback, ::UnityEngine::Rendering::AsyncRequestNativeArrayData*  nativeArrayData) ;

/// @brief Method Internal_RequestAsyncReadback_3_Injected, addr 0xb6085dc, size 0x5c, virtual false, abstract: false, final false
static inline void Internal_RequestAsyncReadback_3_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  src, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*  callback, ::UnityEngine::Rendering::AsyncRequestNativeArrayData*  nativeArrayData) ;

/// [NativeMethod("AddRequestAsyncReadback")]
/// @brief Method Internal_RequestAsyncReadback_4, addr 0xb608638, size 0x12c, virtual false, abstract: false, final false
inline void Internal_RequestAsyncReadback_4(/* [NotNull] */ ::UnityEngine::Texture*  src, int32_t  mipIndex, /* [NotNull] */ ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*  callback, ::UnityEngine::Rendering::AsyncRequestNativeArrayData*  nativeArrayData) ;

/// @brief Method Internal_RequestAsyncReadback_4_Injected, addr 0xb608764, size 0x6c, virtual false, abstract: false, final false
static inline void Internal_RequestAsyncReadback_4_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  src, int32_t  mipIndex, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*  callback, ::UnityEngine::Rendering::AsyncRequestNativeArrayData*  nativeArrayData) ;

/// [NativeMethod("AddRequestAsyncReadback")]
/// @brief Method Internal_RequestAsyncReadback_5, addr 0xb6087d0, size 0x134, virtual false, abstract: false, final false
inline void Internal_RequestAsyncReadback_5(/* [NotNull] */ ::UnityEngine::Texture*  src, int32_t  mipIndex, ::UnityEngine::Experimental::Rendering::GraphicsFormat  dstFormat, /* [NotNull] */ ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*  callback, ::UnityEngine::Rendering::AsyncRequestNativeArrayData*  nativeArrayData) ;

/// @brief Method Internal_RequestAsyncReadback_5_Injected, addr 0xb608904, size 0x74, virtual false, abstract: false, final false
static inline void Internal_RequestAsyncReadback_5_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  src, int32_t  mipIndex, ::UnityEngine::Experimental::Rendering::GraphicsFormat  dstFormat, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*  callback, ::UnityEngine::Rendering::AsyncRequestNativeArrayData*  nativeArrayData) ;

/// [NativeMethod("AddRequestAsyncReadback")]
/// @brief Method Internal_RequestAsyncReadback_6, addr 0xb608978, size 0x16c, virtual false, abstract: false, final false
inline void Internal_RequestAsyncReadback_6(/* [NotNull] */ ::UnityEngine::Texture*  src, int32_t  mipIndex, int32_t  x, int32_t  width, int32_t  y, int32_t  height, int32_t  z, int32_t  depth, /* [NotNull] */ ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*  callback, ::UnityEngine::Rendering::AsyncRequestNativeArrayData*  nativeArrayData) ;

/// @brief Method Internal_RequestAsyncReadback_6_Injected, addr 0xb608ae4, size 0xa8, virtual false, abstract: false, final false
static inline void Internal_RequestAsyncReadback_6_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  src, int32_t  mipIndex, int32_t  x, int32_t  width, int32_t  y, int32_t  height, int32_t  z, int32_t  depth, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*  callback, ::UnityEngine::Rendering::AsyncRequestNativeArrayData*  nativeArrayData) ;

/// [NativeMethod("AddRequestAsyncReadback")]
/// @brief Method Internal_RequestAsyncReadback_7, addr 0xb608b8c, size 0x16c, virtual false, abstract: false, final false
inline void Internal_RequestAsyncReadback_7(/* [NotNull] */ ::UnityEngine::Texture*  src, int32_t  mipIndex, int32_t  x, int32_t  width, int32_t  y, int32_t  height, int32_t  z, int32_t  depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat  dstFormat, /* [NotNull] */ ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*  callback, ::UnityEngine::Rendering::AsyncRequestNativeArrayData*  nativeArrayData) ;

/// @brief Method Internal_RequestAsyncReadback_7_Injected, addr 0xb608cf8, size 0xb8, virtual false, abstract: false, final false
static inline void Internal_RequestAsyncReadback_7_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  src, int32_t  mipIndex, int32_t  x, int32_t  width, int32_t  y, int32_t  height, int32_t  z, int32_t  depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat  dstFormat, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*  callback, ::UnityEngine::Rendering::AsyncRequestNativeArrayData*  nativeArrayData) ;

/// [NativeMethod("AddRequestAsyncReadback")]
/// @brief Method Internal_RequestAsyncReadback_8, addr 0xb608db0, size 0x110, virtual false, abstract: false, final false
inline void Internal_RequestAsyncReadback_8(/* [NotNull] */ ::UnityEngine::GraphicsBuffer*  src, /* [NotNull] */ ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*  callback, ::UnityEngine::Rendering::AsyncRequestNativeArrayData*  nativeArrayData) ;

/// @brief Method Internal_RequestAsyncReadback_8_Injected, addr 0xb608ec0, size 0x5c, virtual false, abstract: false, final false
static inline void Internal_RequestAsyncReadback_8_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  src, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*  callback, ::UnityEngine::Rendering::AsyncRequestNativeArrayData*  nativeArrayData) ;

/// [NativeMethod("AddRequestAsyncReadback")]
/// @brief Method Internal_RequestAsyncReadback_9, addr 0xb608f1c, size 0x128, virtual false, abstract: false, final false
inline void Internal_RequestAsyncReadback_9(/* [NotNull] */ ::UnityEngine::GraphicsBuffer*  src, int32_t  size, int32_t  offset, /* [NotNull] */ ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*  callback, ::UnityEngine::Rendering::AsyncRequestNativeArrayData*  nativeArrayData) ;

/// @brief Method Internal_RequestAsyncReadback_9_Injected, addr 0xb609044, size 0x74, virtual false, abstract: false, final false
static inline void Internal_RequestAsyncReadback_9_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  src, int32_t  size, int32_t  offset, ::System::Action_1<::UnityEngine::Rendering::AsyncGPUReadbackRequest>*  callback, ::UnityEngine::Rendering::AsyncRequestNativeArrayData*  nativeArrayData) ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::SetComputeBufferParam", HasExplicitThis = true)]
/// @brief Method Internal_SetComputeBufferParam, addr 0xb60a1f8, size 0x108, virtual false, abstract: false, final false
inline void Internal_SetComputeBufferParam(/* [NotNull] */ ::UnityEngine::ComputeShader*  computeShader, int32_t  kernelIndex, int32_t  nameID, ::UnityEngine::ComputeBuffer*  buffer) ;

/// @brief Method Internal_SetComputeBufferParam_Injected, addr 0xb60a300, size 0x6c, virtual false, abstract: false, final false
static inline void Internal_SetComputeBufferParam_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  computeShader, int32_t  kernelIndex, int32_t  nameID, ::System::IntPtr  buffer) ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::SetComputeConstantBufferParam", HasExplicitThis = true)]
/// @brief Method Internal_SetComputeConstantComputeBufferParam, addr 0xb60a650, size 0x110, virtual false, abstract: false, final false
inline void Internal_SetComputeConstantComputeBufferParam(/* [NotNull] */ ::UnityEngine::ComputeShader*  computeShader, int32_t  nameID, ::UnityEngine::ComputeBuffer*  buffer, int32_t  offset, int32_t  size) ;

/// @brief Method Internal_SetComputeConstantComputeBufferParam_Injected, addr 0xb60a760, size 0x74, virtual false, abstract: false, final false
static inline void Internal_SetComputeConstantComputeBufferParam_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  computeShader, int32_t  nameID, ::System::IntPtr  buffer, int32_t  offset, int32_t  size) ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::SetComputeConstantBufferParam", HasExplicitThis = true)]
/// @brief Method Internal_SetComputeConstantGraphicsBufferParam, addr 0xb60a7d4, size 0x110, virtual false, abstract: false, final false
inline void Internal_SetComputeConstantGraphicsBufferParam(/* [NotNull] */ ::UnityEngine::ComputeShader*  computeShader, int32_t  nameID, ::UnityEngine::GraphicsBuffer*  buffer, int32_t  offset, int32_t  size) ;

/// @brief Method Internal_SetComputeConstantGraphicsBufferParam_Injected, addr 0xb60a8e4, size 0x74, virtual false, abstract: false, final false
static inline void Internal_SetComputeConstantGraphicsBufferParam_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  computeShader, int32_t  nameID, ::System::IntPtr  buffer, int32_t  offset, int32_t  size) ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::Internal_SetComputeFloats", HasExplicitThis = true)]
/// @brief Method Internal_SetComputeFloats, addr 0xb609ce4, size 0x160, virtual false, abstract: false, final false
inline void Internal_SetComputeFloats(/* [NotNull] */ ::UnityEngine::ComputeShader*  computeShader, int32_t  nameID, ::ArrayW<float_t>  values) ;

/// @brief Method Internal_SetComputeFloats_Injected, addr 0xb609e44, size 0x5c, virtual false, abstract: false, final false
static inline void Internal_SetComputeFloats_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  computeShader, int32_t  nameID, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  values) ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::SetComputeBufferParam", HasExplicitThis = true)]
/// @brief Method Internal_SetComputeGraphicsBufferHandleParam, addr 0xb60a36c, size 0x104, virtual false, abstract: false, final false
inline void Internal_SetComputeGraphicsBufferHandleParam(/* [NotNull] */ ::UnityEngine::ComputeShader*  computeShader, int32_t  kernelIndex, int32_t  nameID, ::UnityEngine::GraphicsBufferHandle  bufferHandle) ;

/// @brief Method Internal_SetComputeGraphicsBufferHandleParam_Injected, addr 0xb60a470, size 0x6c, virtual false, abstract: false, final false
static inline void Internal_SetComputeGraphicsBufferHandleParam_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  computeShader, int32_t  kernelIndex, int32_t  nameID, ::by_ref<::UnityEngine::GraphicsBufferHandle>  bufferHandle) ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::SetComputeBufferParam", HasExplicitThis = true)]
/// @brief Method Internal_SetComputeGraphicsBufferParam, addr 0xb60a4dc, size 0x108, virtual false, abstract: false, final false
inline void Internal_SetComputeGraphicsBufferParam(/* [NotNull] */ ::UnityEngine::ComputeShader*  computeShader, int32_t  kernelIndex, int32_t  nameID, ::UnityEngine::GraphicsBuffer*  buffer) ;

/// @brief Method Internal_SetComputeGraphicsBufferParam_Injected, addr 0xb60a5e4, size 0x6c, virtual false, abstract: false, final false
static inline void Internal_SetComputeGraphicsBufferParam_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  computeShader, int32_t  kernelIndex, int32_t  nameID, ::System::IntPtr  buffer) ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::Internal_SetComputeInts", HasExplicitThis = true)]
/// @brief Method Internal_SetComputeInts, addr 0xb609ea0, size 0x160, virtual false, abstract: false, final false
inline void Internal_SetComputeInts(/* [NotNull] */ ::UnityEngine::ComputeShader*  computeShader, int32_t  nameID, ::ArrayW<int32_t>  values) ;

/// @brief Method Internal_SetComputeInts_Injected, addr 0xb60a000, size 0x5c, virtual false, abstract: false, final false
static inline void Internal_SetComputeInts_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  computeShader, int32_t  nameID, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  values) ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::Internal_SetComputeRayTracingAccelerationStructure", HasExplicitThis = true)]
/// @brief Method Internal_SetComputeRayTracingAccelerationStructure, addr 0xb60c518, size 0x150, virtual false, abstract: false, final false
inline void Internal_SetComputeRayTracingAccelerationStructure(/* [NotNull] */ ::UnityEngine::ComputeShader*  computeShader, int32_t  kernelIndex, int32_t  nameID, /* [NotNull] */ ::UnityEngine::Rendering::RayTracingAccelerationStructure*  accelerationStructure) ;

/// @brief Method Internal_SetComputeRayTracingAccelerationStructure_Injected, addr 0xb60c668, size 0x6c, virtual false, abstract: false, final false
static inline void Internal_SetComputeRayTracingAccelerationStructure_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  computeShader, int32_t  kernelIndex, int32_t  nameID, ::System::IntPtr  accelerationStructure) ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::Internal_SetComputeTextureParam", HasExplicitThis = true)]
/// @brief Method Internal_SetComputeTextureParam, addr 0xb60a05c, size 0x118, virtual false, abstract: false, final false
inline void Internal_SetComputeTextureParam(/* [NotNull] */ ::UnityEngine::ComputeShader*  computeShader, int32_t  kernelIndex, int32_t  nameID, ::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier>  rt, int32_t  mipLevel, ::UnityEngine::Rendering::RenderTextureSubElement  element) ;

/// @brief Method Internal_SetComputeTextureParam_Injected, addr 0xb60a174, size 0x84, virtual false, abstract: false, final false
static inline void Internal_SetComputeTextureParam_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  computeShader, int32_t  kernelIndex, int32_t  nameID, ::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier>  rt, int32_t  mipLevel, ::UnityEngine::Rendering::RenderTextureSubElement  element) ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::Internal_SetRayTracingAccelerationStructure", HasExplicitThis = true)]
/// @brief Method Internal_SetRayTracingAccelerationStructure, addr 0xb60c37c, size 0x140, virtual false, abstract: false, final false
inline void Internal_SetRayTracingAccelerationStructure(/* [NotNull] */ ::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, int32_t  nameID, /* [NotNull] */ ::UnityEngine::Rendering::RayTracingAccelerationStructure*  accelerationStructure) ;

/// @brief Method Internal_SetRayTracingAccelerationStructure_Injected, addr 0xb60c4bc, size 0x5c, virtual false, abstract: false, final false
static inline void Internal_SetRayTracingAccelerationStructure_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  rayTracingShader, int32_t  nameID, ::System::IntPtr  accelerationStructure) ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::Internal_SetRayTracingBufferParam", HasExplicitThis = true)]
/// @brief Method Internal_SetRayTracingComputeBufferParam, addr 0xb60adbc, size 0xf8, virtual false, abstract: false, final false
inline void Internal_SetRayTracingComputeBufferParam(/* [NotNull] */ ::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, int32_t  nameID, ::UnityEngine::ComputeBuffer*  buffer) ;

/// @brief Method Internal_SetRayTracingComputeBufferParam_Injected, addr 0xb60aeb4, size 0x5c, virtual false, abstract: false, final false
static inline void Internal_SetRayTracingComputeBufferParam_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  rayTracingShader, int32_t  nameID, ::System::IntPtr  buffer) ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::Internal_SetRayTracingConstantBufferParam", HasExplicitThis = true)]
/// @brief Method Internal_SetRayTracingConstantComputeBufferParam, addr 0xb60b1b4, size 0x110, virtual false, abstract: false, final false
inline void Internal_SetRayTracingConstantComputeBufferParam(/* [NotNull] */ ::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, int32_t  nameID, ::UnityEngine::ComputeBuffer*  buffer, int32_t  offset, int32_t  size) ;

/// @brief Method Internal_SetRayTracingConstantComputeBufferParam_Injected, addr 0xb60b2c4, size 0x74, virtual false, abstract: false, final false
static inline void Internal_SetRayTracingConstantComputeBufferParam_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  rayTracingShader, int32_t  nameID, ::System::IntPtr  buffer, int32_t  offset, int32_t  size) ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::Internal_SetRayTracingConstantBufferParam", HasExplicitThis = true)]
/// @brief Method Internal_SetRayTracingConstantGraphicsBufferParam, addr 0xb60b338, size 0x110, virtual false, abstract: false, final false
inline void Internal_SetRayTracingConstantGraphicsBufferParam(/* [NotNull] */ ::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, int32_t  nameID, ::UnityEngine::GraphicsBuffer*  buffer, int32_t  offset, int32_t  size) ;

/// @brief Method Internal_SetRayTracingConstantGraphicsBufferParam_Injected, addr 0xb60b448, size 0x74, virtual false, abstract: false, final false
static inline void Internal_SetRayTracingConstantGraphicsBufferParam_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  rayTracingShader, int32_t  nameID, ::System::IntPtr  buffer, int32_t  offset, int32_t  size) ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::Internal_SetRayTracingFloatParam", HasExplicitThis = true)]
/// @brief Method Internal_SetRayTracingFloatParam, addr 0xb60b608, size 0xf8, virtual false, abstract: false, final false
inline void Internal_SetRayTracingFloatParam(/* [NotNull] */ ::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, int32_t  nameID, float_t  val) ;

/// @brief Method Internal_SetRayTracingFloatParam_Injected, addr 0xb60b700, size 0x64, virtual false, abstract: false, final false
static inline void Internal_SetRayTracingFloatParam_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  rayTracingShader, int32_t  nameID, float_t  val) ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::Internal_SetRayTracingFloats", HasExplicitThis = true)]
/// @brief Method Internal_SetRayTracingFloats, addr 0xb60bed0, size 0x160, virtual false, abstract: false, final false
inline void Internal_SetRayTracingFloats(/* [NotNull] */ ::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, int32_t  nameID, ::ArrayW<float_t>  values) ;

/// @brief Method Internal_SetRayTracingFloats_Injected, addr 0xb60c030, size 0x5c, virtual false, abstract: false, final false
static inline void Internal_SetRayTracingFloats_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  rayTracingShader, int32_t  nameID, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  values) ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::Internal_SetRayTracingBufferParam", HasExplicitThis = true)]
/// @brief Method Internal_SetRayTracingGraphicsBufferHandleParam, addr 0xb60b064, size 0xf4, virtual false, abstract: false, final false
inline void Internal_SetRayTracingGraphicsBufferHandleParam(/* [NotNull] */ ::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, int32_t  nameID, ::UnityEngine::GraphicsBufferHandle  bufferHandle) ;

/// @brief Method Internal_SetRayTracingGraphicsBufferHandleParam_Injected, addr 0xb60b158, size 0x5c, virtual false, abstract: false, final false
static inline void Internal_SetRayTracingGraphicsBufferHandleParam_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  rayTracingShader, int32_t  nameID, ::by_ref<::UnityEngine::GraphicsBufferHandle>  bufferHandle) ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::Internal_SetRayTracingBufferParam", HasExplicitThis = true)]
/// @brief Method Internal_SetRayTracingGraphicsBufferParam, addr 0xb60af10, size 0xf8, virtual false, abstract: false, final false
inline void Internal_SetRayTracingGraphicsBufferParam(/* [NotNull] */ ::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, int32_t  nameID, ::UnityEngine::GraphicsBuffer*  buffer) ;

/// @brief Method Internal_SetRayTracingGraphicsBufferParam_Injected, addr 0xb60b008, size 0x5c, virtual false, abstract: false, final false
static inline void Internal_SetRayTracingGraphicsBufferParam_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  rayTracingShader, int32_t  nameID, ::System::IntPtr  buffer) ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::Internal_SetRayTracingIntParam", HasExplicitThis = true)]
/// @brief Method Internal_SetRayTracingIntParam, addr 0xb60b764, size 0xf0, virtual false, abstract: false, final false
inline void Internal_SetRayTracingIntParam(/* [NotNull] */ ::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, int32_t  nameID, int32_t  val) ;

/// @brief Method Internal_SetRayTracingIntParam_Injected, addr 0xb60b854, size 0x5c, virtual false, abstract: false, final false
static inline void Internal_SetRayTracingIntParam_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  rayTracingShader, int32_t  nameID, int32_t  val) ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::Internal_SetRayTracingInts", HasExplicitThis = true)]
/// @brief Method Internal_SetRayTracingInts, addr 0xb60c08c, size 0x160, virtual false, abstract: false, final false
inline void Internal_SetRayTracingInts(/* [NotNull] */ ::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, int32_t  nameID, ::ArrayW<int32_t>  values) ;

/// @brief Method Internal_SetRayTracingInts_Injected, addr 0xb60c1ec, size 0x5c, virtual false, abstract: false, final false
static inline void Internal_SetRayTracingInts_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  rayTracingShader, int32_t  nameID, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  values) ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::Internal_SetRayTracingMatrixArrayParam", HasExplicitThis = true)]
/// @brief Method Internal_SetRayTracingMatrixArrayParam, addr 0xb60bd14, size 0x160, virtual false, abstract: false, final false
inline void Internal_SetRayTracingMatrixArrayParam(/* [NotNull] */ ::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, int32_t  nameID, ::ArrayW<::UnityEngine::Matrix4x4>  values) ;

/// @brief Method Internal_SetRayTracingMatrixArrayParam_Injected, addr 0xb60be74, size 0x5c, virtual false, abstract: false, final false
static inline void Internal_SetRayTracingMatrixArrayParam_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  rayTracingShader, int32_t  nameID, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  values) ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::Internal_SetRayTracingMatrixParam", HasExplicitThis = true)]
/// @brief Method Internal_SetRayTracingMatrixParam, addr 0xb60bbc8, size 0xf0, virtual false, abstract: false, final false
inline void Internal_SetRayTracingMatrixParam(/* [NotNull] */ ::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, int32_t  nameID, ::UnityEngine::Matrix4x4  val) ;

/// @brief Method Internal_SetRayTracingMatrixParam_Injected, addr 0xb60bcb8, size 0x5c, virtual false, abstract: false, final false
static inline void Internal_SetRayTracingMatrixParam_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  rayTracingShader, int32_t  nameID, ::by_ref<::UnityEngine::Matrix4x4>  val) ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::Internal_SetRayTracingTextureParam", HasExplicitThis = true)]
/// @brief Method Internal_SetRayTracingTextureParam, addr 0xb60b4bc, size 0xf0, virtual false, abstract: false, final false
inline void Internal_SetRayTracingTextureParam(/* [NotNull] */ ::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, int32_t  nameID, ::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier>  rt) ;

/// @brief Method Internal_SetRayTracingTextureParam_Injected, addr 0xb60b5ac, size 0x5c, virtual false, abstract: false, final false
static inline void Internal_SetRayTracingTextureParam_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  rayTracingShader, int32_t  nameID, ::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier>  rt) ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::Internal_SetRayTracingVectorArrayParam", HasExplicitThis = true)]
/// @brief Method Internal_SetRayTracingVectorArrayParam, addr 0xb60ba0c, size 0x160, virtual false, abstract: false, final false
inline void Internal_SetRayTracingVectorArrayParam(/* [NotNull] */ ::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, int32_t  nameID, ::ArrayW<::UnityEngine::Vector4>  values) ;

/// @brief Method Internal_SetRayTracingVectorArrayParam_Injected, addr 0xb60bb6c, size 0x5c, virtual false, abstract: false, final false
static inline void Internal_SetRayTracingVectorArrayParam_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  rayTracingShader, int32_t  nameID, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  values) ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::Internal_SetRayTracingVectorParam", HasExplicitThis = true)]
/// @brief Method Internal_SetRayTracingVectorParam, addr 0xb60b8b0, size 0x100, virtual false, abstract: false, final false
inline void Internal_SetRayTracingVectorParam(/* [NotNull] */ ::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, int32_t  nameID, ::UnityEngine::Vector4  val) ;

/// @brief Method Internal_SetRayTracingVectorParam_Injected, addr 0xb60b9b0, size 0x5c, virtual false, abstract: false, final false
static inline void Internal_SetRayTracingVectorParam_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  rayTracingShader, int32_t  nameID, ::by_ref<::UnityEngine::Vector4>  val) ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::Internal_SetSinglePassStereo", HasExplicitThis = true)]
/// @brief Method Internal_SetSinglePassStereo, addr 0xb609154, size 0x58, virtual false, abstract: false, final false
inline void Internal_SetSinglePassStereo(::UnityEngine::Rendering::SinglePassStereoMode  mode) ;

/// @brief Method Internal_SetSinglePassStereo_Injected, addr 0xb6091ac, size 0x44, virtual false, abstract: false, final false
static inline void Internal_SetSinglePassStereo_Injected(::System::IntPtr  _unity_self, ::UnityEngine::Rendering::SinglePassStereoMode  mode) ;

/// @brief Method InvokeOnRenderObjectCallbacks, addr 0xb6161e4, size 0x20, virtual false, abstract: false, final false
inline void InvokeOnRenderObjectCallbacks() ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::InvokeOnRenderObjectCallbacks", HasExplicitThis = true)]
/// @brief Method InvokeOnRenderObjectCallbacks_Internal, addr 0xb616158, size 0x50, virtual false, abstract: false, final false
inline void InvokeOnRenderObjectCallbacks_Internal() ;

/// @brief Method InvokeOnRenderObjectCallbacks_Internal_Injected, addr 0xb6161a8, size 0x3c, virtual false, abstract: false, final false
static inline void InvokeOnRenderObjectCallbacks_Internal_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method IssuePluginCustomBlit, addr 0xb619ad8, size 0x68, virtual false, abstract: false, final false
inline void IssuePluginCustomBlit(::System::IntPtr  callback, uint32_t  command, ::UnityEngine::Rendering::RenderTargetIdentifier  source, ::UnityEngine::Rendering::RenderTargetIdentifier  dest, uint32_t  commandParam, uint32_t  commandFlags) ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::IssuePluginCustomBlitInternal", HasExplicitThis = true)]
/// @brief Method IssuePluginCustomBlitInternal, addr 0xb6124e8, size 0x98, virtual false, abstract: false, final false
inline void IssuePluginCustomBlitInternal(::System::IntPtr  callback, uint32_t  command, ::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier>  source, ::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier>  dest, uint32_t  commandParam, uint32_t  commandFlags) ;

/// @brief Method IssuePluginCustomBlitInternal_Injected, addr 0xb612580, size 0x84, virtual false, abstract: false, final false
static inline void IssuePluginCustomBlitInternal_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  callback, uint32_t  command, ::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier>  source, ::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier>  dest, uint32_t  commandParam, uint32_t  commandFlags) ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::IssuePluginCustomTextureUpdateInternal", HasExplicitThis = true)]
/// @brief Method IssuePluginCustomTextureUpdateInternal, addr 0xb612604, size 0xc8, virtual false, abstract: false, final false
inline void IssuePluginCustomTextureUpdateInternal(::System::IntPtr  callback, ::UnityEngine::Texture*  targetTexture, uint32_t  userData, bool  useNewUnityRenderingExtTextureUpdateParamsV2) ;

/// @brief Method IssuePluginCustomTextureUpdateInternal_Injected, addr 0xb6126cc, size 0x6c, virtual false, abstract: false, final false
static inline void IssuePluginCustomTextureUpdateInternal_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  callback, ::System::IntPtr  targetTexture, uint32_t  userData, bool  useNewUnityRenderingExtTextureUpdateParamsV2) ;

/// @brief Method IssuePluginCustomTextureUpdateV2, addr 0xb619b40, size 0x4c, virtual false, abstract: false, final false
inline void IssuePluginCustomTextureUpdateV2(::System::IntPtr  callback, ::UnityEngine::Texture*  targetTexture, uint32_t  userData) ;

/// @brief Method IssuePluginEvent, addr 0xb6199f0, size 0x54, virtual false, abstract: false, final false
inline void IssuePluginEvent(::System::IntPtr  callback, int32_t  eventID) ;

/// @brief Method IssuePluginEventAndData, addr 0xb619a44, size 0x94, virtual false, abstract: false, final false
inline void IssuePluginEventAndData(::System::IntPtr  callback, int32_t  eventID, ::System::IntPtr  data) ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::IssuePluginEventAndDataInternal", HasExplicitThis = true)]
/// @brief Method IssuePluginEventAndDataInternal, addr 0xb61241c, size 0x70, virtual false, abstract: false, final false
inline void IssuePluginEventAndDataInternal(::System::IntPtr  callback, int32_t  eventID, ::System::IntPtr  data) ;

/// @brief Method IssuePluginEventAndDataInternal_Injected, addr 0xb61248c, size 0x5c, virtual false, abstract: false, final false
static inline void IssuePluginEventAndDataInternal_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  callback, int32_t  eventID, ::System::IntPtr  data) ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::IssuePluginEventInternal", HasExplicitThis = true)]
/// @brief Method IssuePluginEventInternal, addr 0xb611d90, size 0x68, virtual false, abstract: false, final false
inline void IssuePluginEventInternal(::System::IntPtr  callback, int32_t  eventID) ;

/// @brief Method IssuePluginEventInternal_Injected, addr 0xb611df8, size 0x54, virtual false, abstract: false, final false
static inline void IssuePluginEventInternal_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  callback, int32_t  eventID) ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::MarkLateLatchMatrixShaderPropertyID", HasExplicitThis = true)]
/// @brief Method MarkLateLatchMatrixShaderPropertyID, addr 0xb611928, size 0x68, virtual false, abstract: false, final false
inline void MarkLateLatchMatrixShaderPropertyID(::UnityEngine::Rendering::CameraLateLatchMatrixType  matrixPropertyType, int32_t  shaderPropertyID) ;

/// @brief Method MarkLateLatchMatrixShaderPropertyID_Injected, addr 0xb611990, size 0x54, virtual false, abstract: false, final false
static inline void MarkLateLatchMatrixShaderPropertyID_Injected(::System::IntPtr  _unity_self, ::UnityEngine::Rendering::CameraLateLatchMatrixType  matrixPropertyType, int32_t  shaderPropertyID) ;

static inline ::UnityEngine::Rendering::CommandBuffer* New_ctor() ;

/// @brief Method NextSubPass, addr 0xb615f40, size 0x20, virtual false, abstract: false, final false
inline void NextSubPass() ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::NextSubPass", HasExplicitThis = true)]
/// @brief Method NextSubPass_Internal, addr 0xb615eb4, size 0x50, virtual false, abstract: false, final false
inline void NextSubPass_Internal() ;

/// @brief Method NextSubPass_Internal_Injected, addr 0xb615f04, size 0x3c, virtual false, abstract: false, final false
static inline void NextSubPass_Internal_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method Release, addr 0xb6165e0, size 0x4, virtual false, abstract: false, final false
inline void Release() ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::ReleaseBuffer", HasExplicitThis = true, IsThreadSafe = true)]
/// @brief Method ReleaseBuffer, addr 0xb609390, size 0x50, virtual false, abstract: false, final false
inline void ReleaseBuffer() ;

/// @brief Method ReleaseBuffer_Injected, addr 0xb6093e0, size 0x3c, virtual false, abstract: false, final false
static inline void ReleaseBuffer_Injected(::System::IntPtr  _unity_self) ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::ReleaseTemporaryRT", HasExplicitThis = true)]
/// @brief Method ReleaseTemporaryRT, addr 0xb60f6c0, size 0x58, virtual false, abstract: false, final false
inline void ReleaseTemporaryRT(int32_t  nameID) ;

/// @brief Method ReleaseTemporaryRT_Injected, addr 0xb60f718, size 0x44, virtual false, abstract: false, final false
static inline void ReleaseTemporaryRT_Injected(::System::IntPtr  _unity_self, int32_t  nameID) ;

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

/// @brief Method ResetShadingRate, addr 0xb616328, size 0x4, virtual false, abstract: false, final false
inline void ResetShadingRate() ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::ResetShadingRate_Impl", HasExplicitThis = true)]
/// @brief Method ResetShadingRate_Impl, addr 0xb61632c, size 0x50, virtual false, abstract: false, final false
inline void ResetShadingRate_Impl() ;

/// @brief Method ResetShadingRate_Impl_Injected, addr 0xb616458, size 0x3c, virtual false, abstract: false, final false
static inline void ResetShadingRate_Impl_Injected(::System::IntPtr  _unity_self) ;

/// @brief Method SetBufferCounterValue, addr 0xb615038, size 0x4, virtual false, abstract: false, final false
inline void SetBufferCounterValue(::UnityEngine::ComputeBuffer*  buffer, uint32_t  counterValue) ;

/// @brief Method SetBufferCounterValue, addr 0xb61580c, size 0x4, virtual false, abstract: false, final false
inline void SetBufferCounterValue(::UnityEngine::GraphicsBuffer*  buffer, uint32_t  counterValue) ;

/// @brief Method SetBufferData, addr 0xb614bac, size 0x140, virtual false, abstract: false, final false
inline void SetBufferData(::UnityEngine::ComputeBuffer*  buffer, ::System::Array*  data) ;

/// @brief Method SetBufferData, addr 0xb614df8, size 0x240, virtual false, abstract: false, final false
inline void SetBufferData(::UnityEngine::ComputeBuffer*  buffer, ::System::Array*  data, int32_t  managedBufferStartIndex, int32_t  graphicsBufferStartIndex, int32_t  count) ;

/// @brief Method SetBufferData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void SetBufferData(::UnityEngine::ComputeBuffer*  buffer, ::System::Collections::Generic::List_1<T>*  data) ;

/// @brief Method SetBufferData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void SetBufferData(::UnityEngine::ComputeBuffer*  buffer, ::System::Collections::Generic::List_1<T>*  data, int32_t  managedBufferStartIndex, int32_t  graphicsBufferStartIndex, int32_t  count) ;

/// @brief Method SetBufferData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void SetBufferData(::UnityEngine::ComputeBuffer*  buffer, ::Unity::Collections::NativeArray_1<T>  data) ;

/// @brief Method SetBufferData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void SetBufferData(::UnityEngine::ComputeBuffer*  buffer, ::Unity::Collections::NativeArray_1<T>  data, int32_t  nativeBufferStartIndex, int32_t  graphicsBufferStartIndex, int32_t  count) ;

/// @brief Method SetBufferData, addr 0xb615380, size 0x140, virtual false, abstract: false, final false
inline void SetBufferData(::UnityEngine::GraphicsBuffer*  buffer, ::System::Array*  data) ;

/// @brief Method SetBufferData, addr 0xb6155cc, size 0x240, virtual false, abstract: false, final false
inline void SetBufferData(::UnityEngine::GraphicsBuffer*  buffer, ::System::Array*  data, int32_t  managedBufferStartIndex, int32_t  graphicsBufferStartIndex, int32_t  count) ;

/// @brief Method SetBufferData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void SetBufferData(::UnityEngine::GraphicsBuffer*  buffer, ::System::Collections::Generic::List_1<T>*  data) ;

/// @brief Method SetBufferData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void SetBufferData(::UnityEngine::GraphicsBuffer*  buffer, ::System::Collections::Generic::List_1<T>*  data, int32_t  managedBufferStartIndex, int32_t  graphicsBufferStartIndex, int32_t  count) ;

/// @brief Method SetBufferData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void SetBufferData(::UnityEngine::GraphicsBuffer*  buffer, ::Unity::Collections::NativeArray_1<T>  data) ;

/// @brief Method SetBufferData, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void SetBufferData(::UnityEngine::GraphicsBuffer*  buffer, ::Unity::Collections::NativeArray_1<T>  data, int32_t  nativeBufferStartIndex, int32_t  graphicsBufferStartIndex, int32_t  count) ;

/// @brief Method SetComputeBufferParam, addr 0xb616a84, size 0x4c, virtual false, abstract: false, final false
inline void SetComputeBufferParam(::UnityEngine::ComputeShader*  computeShader, int32_t  kernelIndex, ::StringW  name, ::UnityEngine::ComputeBuffer*  buffer) ;

/// @brief Method SetComputeBufferParam, addr 0xb616b28, size 0x4c, virtual false, abstract: false, final false
inline void SetComputeBufferParam(::UnityEngine::ComputeShader*  computeShader, int32_t  kernelIndex, ::StringW  name, ::UnityEngine::GraphicsBuffer*  buffer) ;

/// @brief Method SetComputeBufferParam, addr 0xb616ad8, size 0x4c, virtual false, abstract: false, final false
inline void SetComputeBufferParam(::UnityEngine::ComputeShader*  computeShader, int32_t  kernelIndex, ::StringW  name, ::UnityEngine::GraphicsBufferHandle  bufferHandle) ;

/// @brief Method SetComputeBufferParam, addr 0xb616a80, size 0x4, virtual false, abstract: false, final false
inline void SetComputeBufferParam(::UnityEngine::ComputeShader*  computeShader, int32_t  kernelIndex, int32_t  nameID, ::UnityEngine::ComputeBuffer*  buffer) ;

/// @brief Method SetComputeBufferParam, addr 0xb616b24, size 0x4, virtual false, abstract: false, final false
inline void SetComputeBufferParam(::UnityEngine::ComputeShader*  computeShader, int32_t  kernelIndex, int32_t  nameID, ::UnityEngine::GraphicsBuffer*  buffer) ;

/// @brief Method SetComputeBufferParam, addr 0xb616ad0, size 0x8, virtual false, abstract: false, final false
inline void SetComputeBufferParam(::UnityEngine::ComputeShader*  computeShader, int32_t  kernelIndex, int32_t  nameID, ::UnityEngine::GraphicsBufferHandle  bufferHandle) ;

/// @brief Method SetComputeConstantBufferParam, addr 0xb616b78, size 0x54, virtual false, abstract: false, final false
inline void SetComputeConstantBufferParam(::UnityEngine::ComputeShader*  computeShader, ::StringW  name, ::UnityEngine::ComputeBuffer*  buffer, int32_t  offset, int32_t  size) ;

/// @brief Method SetComputeConstantBufferParam, addr 0xb616bd0, size 0x54, virtual false, abstract: false, final false
inline void SetComputeConstantBufferParam(::UnityEngine::ComputeShader*  computeShader, ::StringW  name, ::UnityEngine::GraphicsBuffer*  buffer, int32_t  offset, int32_t  size) ;

/// @brief Method SetComputeConstantBufferParam, addr 0xb616b74, size 0x4, virtual false, abstract: false, final false
inline void SetComputeConstantBufferParam(::UnityEngine::ComputeShader*  computeShader, int32_t  nameID, ::UnityEngine::ComputeBuffer*  buffer, int32_t  offset, int32_t  size) ;

/// @brief Method SetComputeConstantBufferParam, addr 0xb616bcc, size 0x4, virtual false, abstract: false, final false
inline void SetComputeConstantBufferParam(::UnityEngine::ComputeShader*  computeShader, int32_t  nameID, ::UnityEngine::GraphicsBuffer*  buffer, int32_t  offset, int32_t  size) ;

/// @brief Method SetComputeFloatParam, addr 0xb616724, size 0x44, virtual false, abstract: false, final false
inline void SetComputeFloatParam(::UnityEngine::ComputeShader*  computeShader, ::StringW  name, float_t  val) ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::SetComputeFloatParam", HasExplicitThis = true)]
/// @brief Method SetComputeFloatParam, addr 0xb60941c, size 0xf8, virtual false, abstract: false, final false
inline void SetComputeFloatParam(/* [NotNull] */ ::UnityEngine::ComputeShader*  computeShader, int32_t  nameID, float_t  val) ;

/// @brief Method SetComputeFloatParam_Injected, addr 0xb609514, size 0x64, virtual false, abstract: false, final false
static inline void SetComputeFloatParam_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  computeShader, int32_t  nameID, float_t  val) ;

/// @brief Method SetComputeFloatParams, addr 0xb6168d8, size 0x3c, virtual false, abstract: false, final false
inline void SetComputeFloatParams(::UnityEngine::ComputeShader*  computeShader, ::StringW  name, /* [ParamArray] */ ::ArrayW<float_t>  values) ;

/// @brief Method SetComputeFloatParams, addr 0xb616914, size 0x4, virtual false, abstract: false, final false
inline void SetComputeFloatParams(::UnityEngine::ComputeShader*  computeShader, int32_t  nameID, /* [ParamArray] */ ::ArrayW<float_t>  values) ;

/// @brief Method SetComputeIntParam, addr 0xb616768, size 0x3c, virtual false, abstract: false, final false
inline void SetComputeIntParam(::UnityEngine::ComputeShader*  computeShader, ::StringW  name, int32_t  val) ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::SetComputeIntParam", HasExplicitThis = true)]
/// @brief Method SetComputeIntParam, addr 0xb609578, size 0xf0, virtual false, abstract: false, final false
inline void SetComputeIntParam(/* [NotNull] */ ::UnityEngine::ComputeShader*  computeShader, int32_t  nameID, int32_t  val) ;

/// @brief Method SetComputeIntParam_Injected, addr 0xb609668, size 0x5c, virtual false, abstract: false, final false
static inline void SetComputeIntParam_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  computeShader, int32_t  nameID, int32_t  val) ;

/// @brief Method SetComputeIntParams, addr 0xb616918, size 0x3c, virtual false, abstract: false, final false
inline void SetComputeIntParams(::UnityEngine::ComputeShader*  computeShader, ::StringW  name, /* [ParamArray] */ ::ArrayW<int32_t>  values) ;

/// @brief Method SetComputeIntParams, addr 0xb616954, size 0x4, virtual false, abstract: false, final false
inline void SetComputeIntParams(::UnityEngine::ComputeShader*  computeShader, int32_t  nameID, /* [ParamArray] */ ::ArrayW<int32_t>  values) ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::SetComputeKeyword", HasExplicitThis = true)]
/// @brief Method SetComputeKeyword, addr 0xb610c08, size 0xc0, virtual false, abstract: false, final false
inline void SetComputeKeyword(::UnityEngine::ComputeShader*  computeShader, ::UnityEngine::Rendering::LocalKeyword  keyword, bool  value) ;

/// @brief Method SetComputeKeyword_Injected, addr 0xb610cc8, size 0x5c, virtual false, abstract: false, final false
static inline void SetComputeKeyword_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  computeShader, ::by_ref<::UnityEngine::Rendering::LocalKeyword>  keyword, bool  value) ;

/// @brief Method SetComputeMatrixArrayParam, addr 0xb61689c, size 0x3c, virtual false, abstract: false, final false
inline void SetComputeMatrixArrayParam(::UnityEngine::ComputeShader*  computeShader, ::StringW  name, ::ArrayW<::UnityEngine::Matrix4x4>  values) ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::SetComputeMatrixArrayParam", HasExplicitThis = true)]
/// @brief Method SetComputeMatrixArrayParam, addr 0xb609b28, size 0x160, virtual false, abstract: false, final false
inline void SetComputeMatrixArrayParam(/* [NotNull] */ ::UnityEngine::ComputeShader*  computeShader, int32_t  nameID, ::ArrayW<::UnityEngine::Matrix4x4>  values) ;

/// @brief Method SetComputeMatrixArrayParam_Injected, addr 0xb609c88, size 0x5c, virtual false, abstract: false, final false
static inline void SetComputeMatrixArrayParam_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  computeShader, int32_t  nameID, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  values) ;

/// @brief Method SetComputeMatrixParam, addr 0xb616844, size 0x58, virtual false, abstract: false, final false
inline void SetComputeMatrixParam(::UnityEngine::ComputeShader*  computeShader, ::StringW  name, ::UnityEngine::Matrix4x4  val) ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::SetComputeMatrixParam", HasExplicitThis = true)]
/// @brief Method SetComputeMatrixParam, addr 0xb6099dc, size 0xf0, virtual false, abstract: false, final false
inline void SetComputeMatrixParam(/* [NotNull] */ ::UnityEngine::ComputeShader*  computeShader, int32_t  nameID, ::UnityEngine::Matrix4x4  val) ;

/// @brief Method SetComputeMatrixParam_Injected, addr 0xb609acc, size 0x5c, virtual false, abstract: false, final false
static inline void SetComputeMatrixParam_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  computeShader, int32_t  nameID, ::by_ref<::UnityEngine::Matrix4x4>  val) ;

/// @brief Method SetComputeTextureParam, addr 0xb616958, size 0x54, virtual false, abstract: false, final false
inline void SetComputeTextureParam(::UnityEngine::ComputeShader*  computeShader, int32_t  kernelIndex, ::StringW  name, ::UnityEngine::Rendering::RenderTargetIdentifier  rt) ;

/// @brief Method SetComputeTextureParam, addr 0xb6169b8, size 0x58, virtual false, abstract: false, final false
inline void SetComputeTextureParam(::UnityEngine::ComputeShader*  computeShader, int32_t  kernelIndex, ::StringW  name, ::UnityEngine::Rendering::RenderTargetIdentifier  rt, int32_t  mipLevel) ;

/// @brief Method SetComputeTextureParam, addr 0xb616a18, size 0x64, virtual false, abstract: false, final false
inline void SetComputeTextureParam(::UnityEngine::ComputeShader*  computeShader, int32_t  kernelIndex, ::StringW  name, ::UnityEngine::Rendering::RenderTargetIdentifier  rt, int32_t  mipLevel, ::UnityEngine::Rendering::RenderTextureSubElement  element) ;

/// @brief Method SetComputeTextureParam, addr 0xb6169ac, size 0xc, virtual false, abstract: false, final false
inline void SetComputeTextureParam(::UnityEngine::ComputeShader*  computeShader, int32_t  kernelIndex, int32_t  nameID, ::UnityEngine::Rendering::RenderTargetIdentifier  rt) ;

/// @brief Method SetComputeTextureParam, addr 0xb616a10, size 0x8, virtual false, abstract: false, final false
inline void SetComputeTextureParam(::UnityEngine::ComputeShader*  computeShader, int32_t  kernelIndex, int32_t  nameID, ::UnityEngine::Rendering::RenderTargetIdentifier  rt, int32_t  mipLevel) ;

/// @brief Method SetComputeTextureParam, addr 0xb616a7c, size 0x4, virtual false, abstract: false, final false
inline void SetComputeTextureParam(::UnityEngine::ComputeShader*  computeShader, int32_t  kernelIndex, int32_t  nameID, ::UnityEngine::Rendering::RenderTargetIdentifier  rt, int32_t  mipLevel, ::UnityEngine::Rendering::RenderTextureSubElement  element) ;

/// @brief Method SetComputeVectorArrayParam, addr 0xb616808, size 0x3c, virtual false, abstract: false, final false
inline void SetComputeVectorArrayParam(::UnityEngine::ComputeShader*  computeShader, ::StringW  name, ::ArrayW<::UnityEngine::Vector4>  values) ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::SetComputeVectorArrayParam", HasExplicitThis = true)]
/// @brief Method SetComputeVectorArrayParam, addr 0xb609820, size 0x160, virtual false, abstract: false, final false
inline void SetComputeVectorArrayParam(/* [NotNull] */ ::UnityEngine::ComputeShader*  computeShader, int32_t  nameID, ::ArrayW<::UnityEngine::Vector4>  values) ;

/// @brief Method SetComputeVectorArrayParam_Injected, addr 0xb609980, size 0x5c, virtual false, abstract: false, final false
static inline void SetComputeVectorArrayParam_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  computeShader, int32_t  nameID, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  values) ;

/// @brief Method SetComputeVectorParam, addr 0xb6167a4, size 0x64, virtual false, abstract: false, final false
inline void SetComputeVectorParam(::UnityEngine::ComputeShader*  computeShader, ::StringW  name, ::UnityEngine::Vector4  val) ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::SetComputeVectorParam", HasExplicitThis = true)]
/// @brief Method SetComputeVectorParam, addr 0xb6096c4, size 0x100, virtual false, abstract: false, final false
inline void SetComputeVectorParam(/* [NotNull] */ ::UnityEngine::ComputeShader*  computeShader, int32_t  nameID, ::UnityEngine::Vector4  val) ;

/// @brief Method SetComputeVectorParam_Injected, addr 0xb6097c4, size 0x5c, virtual false, abstract: false, final false
static inline void SetComputeVectorParam_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  computeShader, int32_t  nameID, ::by_ref<::UnityEngine::Vector4>  val) ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::SetExecutionFlags", HasExplicitThis = true, ThrowsException = true)]
/// @brief Method SetExecutionFlags, addr 0xb611034, size 0x58, virtual false, abstract: false, final false
inline void SetExecutionFlags(::UnityEngine::Rendering::CommandBufferExecutionFlags  flags) ;

/// @brief Method SetExecutionFlags_Injected, addr 0xb61108c, size 0x44, virtual false, abstract: false, final false
static inline void SetExecutionFlags_Injected(::System::IntPtr  _unity_self, ::UnityEngine::Rendering::CommandBufferExecutionFlags  flags) ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::SetFoveatedRenderingMode", HasExplicitThis = true)]
/// @brief Method SetFoveatedRenderingMode, addr 0xb612a58, size 0x58, virtual false, abstract: false, final false
inline void SetFoveatedRenderingMode(::UnityEngine::Rendering::FoveatedRenderingMode  foveatedRenderingMode) ;

/// @brief Method SetFoveatedRenderingMode_Injected, addr 0xb612ab0, size 0x44, virtual false, abstract: false, final false
static inline void SetFoveatedRenderingMode_Injected(::System::IntPtr  _unity_self, ::UnityEngine::Rendering::FoveatedRenderingMode  foveatedRenderingMode) ;

/// @brief Method SetGlobalBuffer, addr 0xb6198a4, size 0x34, virtual false, abstract: false, final false
inline void SetGlobalBuffer(::StringW  name, ::UnityEngine::ComputeBuffer*  value) ;

/// @brief Method SetGlobalBuffer, addr 0xb6198dc, size 0x34, virtual false, abstract: false, final false
inline void SetGlobalBuffer(::StringW  name, ::UnityEngine::GraphicsBuffer*  value) ;

/// @brief Method SetGlobalBuffer, addr 0xb6198d8, size 0x4, virtual false, abstract: false, final false
inline void SetGlobalBuffer(int32_t  nameID, ::UnityEngine::ComputeBuffer*  value) ;

/// @brief Method SetGlobalBuffer, addr 0xb619910, size 0x4, virtual false, abstract: false, final false
inline void SetGlobalBuffer(int32_t  nameID, ::UnityEngine::GraphicsBuffer*  value) ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::SetGlobalBuffer", HasExplicitThis = true)]
/// @brief Method SetGlobalBufferInternal, addr 0xb611b4c, size 0x70, virtual false, abstract: false, final false
inline void SetGlobalBufferInternal(int32_t  nameID, ::UnityEngine::ComputeBuffer*  value) ;

/// @brief Method SetGlobalBufferInternal_Injected, addr 0xb611bbc, size 0x54, virtual false, abstract: false, final false
static inline void SetGlobalBufferInternal_Injected(::System::IntPtr  _unity_self, int32_t  nameID, ::System::IntPtr  value) ;

/// @brief Method SetGlobalColor, addr 0xb61937c, size 0x54, virtual false, abstract: false, final false
inline void SetGlobalColor(::StringW  name, ::UnityEngine::Color  value) ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::SetGlobalColor", HasExplicitThis = true)]
/// @brief Method SetGlobalColor, addr 0xb60fef4, size 0x70, virtual false, abstract: false, final false
inline void SetGlobalColor(int32_t  nameID, ::UnityEngine::Color  value) ;

/// @brief Method SetGlobalColor_Injected, addr 0xb60ff64, size 0x54, virtual false, abstract: false, final false
static inline void SetGlobalColor_Injected(::System::IntPtr  _unity_self, int32_t  nameID, ::by_ref<::UnityEngine::Color>  value) ;

/// @brief Method SetGlobalConstantBuffer, addr 0xb619918, size 0x4c, virtual false, abstract: false, final false
inline void SetGlobalConstantBuffer(::UnityEngine::ComputeBuffer*  buffer, ::StringW  name, int32_t  offset, int32_t  size) ;

/// @brief Method SetGlobalConstantBuffer, addr 0xb619914, size 0x4, virtual false, abstract: false, final false
inline void SetGlobalConstantBuffer(::UnityEngine::ComputeBuffer*  buffer, int32_t  nameID, int32_t  offset, int32_t  size) ;

/// @brief Method SetGlobalConstantBuffer, addr 0xb619968, size 0x4c, virtual false, abstract: false, final false
inline void SetGlobalConstantBuffer(::UnityEngine::GraphicsBuffer*  buffer, ::StringW  name, int32_t  offset, int32_t  size) ;

/// @brief Method SetGlobalConstantBuffer, addr 0xb619964, size 0x4, virtual false, abstract: false, final false
inline void SetGlobalConstantBuffer(::UnityEngine::GraphicsBuffer*  buffer, int32_t  nameID, int32_t  offset, int32_t  size) ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::SetGlobalConstantBuffer", HasExplicitThis = true)]
/// @brief Method SetGlobalConstantBufferInternal, addr 0xb612738, size 0x88, virtual false, abstract: false, final false
inline void SetGlobalConstantBufferInternal(::UnityEngine::ComputeBuffer*  buffer, int32_t  nameID, int32_t  offset, int32_t  size) ;

/// @brief Method SetGlobalConstantBufferInternal_Injected, addr 0xb6127c0, size 0x6c, virtual false, abstract: false, final false
static inline void SetGlobalConstantBufferInternal_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  buffer, int32_t  nameID, int32_t  offset, int32_t  size) ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::SetGlobalConstantBuffer", HasExplicitThis = true)]
/// @brief Method SetGlobalConstantGraphicsBufferInternal, addr 0xb61282c, size 0x88, virtual false, abstract: false, final false
inline void SetGlobalConstantGraphicsBufferInternal(::UnityEngine::GraphicsBuffer*  buffer, int32_t  nameID, int32_t  offset, int32_t  size) ;

/// @brief Method SetGlobalConstantGraphicsBufferInternal_Injected, addr 0xb6128b4, size 0x6c, virtual false, abstract: false, final false
static inline void SetGlobalConstantGraphicsBufferInternal_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  buffer, int32_t  nameID, int32_t  offset, int32_t  size) ;

/// [NativeMethod("AddSetGlobalDepthBias")]
/// @brief Method SetGlobalDepthBias, addr 0xb610f78, size 0x68, virtual false, abstract: false, final false
inline void SetGlobalDepthBias(float_t  bias, float_t  slopeBias) ;

/// @brief Method SetGlobalDepthBias_Injected, addr 0xb610fe0, size 0x54, virtual false, abstract: false, final false
static inline void SetGlobalDepthBias_Injected(::System::IntPtr  _unity_self, float_t  bias, float_t  slopeBias) ;

/// @brief Method SetGlobalFloat, addr 0xb61928c, size 0x34, virtual false, abstract: false, final false
inline void SetGlobalFloat(::StringW  name, float_t  value) ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::SetGlobalFloat", HasExplicitThis = true)]
/// @brief Method SetGlobalFloat, addr 0xb60fbfc, size 0x68, virtual false, abstract: false, final false
inline void SetGlobalFloat(int32_t  nameID, float_t  value) ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::SetGlobalFloatArray", HasExplicitThis = true, ThrowsException = true)]
/// @brief Method SetGlobalFloatArray, addr 0xb611358, size 0x128, virtual false, abstract: false, final false
inline void SetGlobalFloatArray(int32_t  nameID, /* [NotNull] */ ::ArrayW<float_t>  values) ;

/// @brief Method SetGlobalFloatArray, addr 0xb619454, size 0xdc, virtual false, abstract: false, final false
inline void SetGlobalFloatArray(int32_t  nameID, ::System::Collections::Generic::List_1<float_t>*  values) ;

/// @brief Method SetGlobalFloatArray, addr 0xb619530, size 0x34, virtual false, abstract: false, final false
inline void SetGlobalFloatArray(::StringW  propertyName, ::ArrayW<float_t>  values) ;

/// @brief Method SetGlobalFloatArray, addr 0xb619420, size 0x34, virtual false, abstract: false, final false
inline void SetGlobalFloatArray(::StringW  propertyName, ::System::Collections::Generic::List_1<float_t>*  values) ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::SetGlobalFloatArrayListImpl", HasExplicitThis = true)]
/// @brief Method SetGlobalFloatArrayListImpl, addr 0xb611124, size 0x68, virtual false, abstract: false, final false
inline void SetGlobalFloatArrayListImpl(int32_t  nameID, ::System::Object*  values) ;

/// @brief Method SetGlobalFloatArrayListImpl_Injected, addr 0xb61118c, size 0x54, virtual false, abstract: false, final false
static inline void SetGlobalFloatArrayListImpl_Injected(::System::IntPtr  _unity_self, int32_t  nameID, ::System::Object*  values) ;

/// @brief Method SetGlobalFloatArray_Injected, addr 0xb611480, size 0x54, virtual false, abstract: false, final false
static inline void SetGlobalFloatArray_Injected(::System::IntPtr  _unity_self, int32_t  nameID, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  values) ;

/// @brief Method SetGlobalFloat_Injected, addr 0xb60fc64, size 0x54, virtual false, abstract: false, final false
static inline void SetGlobalFloat_Injected(::System::IntPtr  _unity_self, int32_t  nameID, float_t  value) ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::SetGlobalBuffer", HasExplicitThis = true)]
/// @brief Method SetGlobalGraphicsBufferInternal, addr 0xb611c10, size 0x70, virtual false, abstract: false, final false
inline void SetGlobalGraphicsBufferInternal(int32_t  nameID, ::UnityEngine::GraphicsBuffer*  value) ;

/// @brief Method SetGlobalGraphicsBufferInternal_Injected, addr 0xb611c80, size 0x54, virtual false, abstract: false, final false
static inline void SetGlobalGraphicsBufferInternal_Injected(::System::IntPtr  _unity_self, int32_t  nameID, ::System::IntPtr  value) ;

/// @brief Method SetGlobalInt, addr 0xb6192c0, size 0x34, virtual false, abstract: false, final false
inline void SetGlobalInt(::StringW  name, int32_t  value) ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::SetGlobalInt", HasExplicitThis = true)]
/// @brief Method SetGlobalInt, addr 0xb60fcb8, size 0x68, virtual false, abstract: false, final false
inline void SetGlobalInt(int32_t  nameID, int32_t  value) ;

/// @brief Method SetGlobalInt_Injected, addr 0xb60fd20, size 0x54, virtual false, abstract: false, final false
static inline void SetGlobalInt_Injected(::System::IntPtr  _unity_self, int32_t  nameID, int32_t  value) ;

/// @brief Method SetGlobalInteger, addr 0xb6192f4, size 0x34, virtual false, abstract: false, final false
inline void SetGlobalInteger(::StringW  name, int32_t  value) ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::SetGlobalInteger", HasExplicitThis = true)]
/// @brief Method SetGlobalInteger, addr 0xb60fd74, size 0x68, virtual false, abstract: false, final false
inline void SetGlobalInteger(int32_t  nameID, int32_t  value) ;

/// @brief Method SetGlobalInteger_Injected, addr 0xb60fddc, size 0x54, virtual false, abstract: false, final false
static inline void SetGlobalInteger_Injected(::System::IntPtr  _unity_self, int32_t  nameID, int32_t  value) ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::SetShaderKeyword", HasExplicitThis = true)]
/// @brief Method SetGlobalKeyword, addr 0xb610a2c, size 0x6c, virtual false, abstract: false, final false
inline void SetGlobalKeyword(::UnityEngine::Rendering::GlobalKeyword  keyword, bool  value) ;

/// @brief Method SetGlobalKeyword_Injected, addr 0xb610a98, size 0x54, virtual false, abstract: false, final false
static inline void SetGlobalKeyword_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Rendering::GlobalKeyword>  keyword, bool  value) ;

/// @brief Method SetGlobalMatrix, addr 0xb6193d0, size 0x50, virtual false, abstract: false, final false
inline void SetGlobalMatrix(::StringW  name, ::UnityEngine::Matrix4x4  value) ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::SetGlobalMatrix", HasExplicitThis = true)]
/// @brief Method SetGlobalMatrix, addr 0xb60ffb8, size 0x68, virtual false, abstract: false, final false
inline void SetGlobalMatrix(int32_t  nameID, ::UnityEngine::Matrix4x4  value) ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::SetGlobalMatrixArray", HasExplicitThis = true, ThrowsException = true)]
/// @brief Method SetGlobalMatrixArray, addr 0xb611650, size 0x128, virtual false, abstract: false, final false
inline void SetGlobalMatrixArray(int32_t  nameID, /* [NotNull] */ ::ArrayW<::UnityEngine::Matrix4x4>  values) ;

/// @brief Method SetGlobalMatrixArray, addr 0xb6196dc, size 0xdc, virtual false, abstract: false, final false
inline void SetGlobalMatrixArray(int32_t  nameID, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*  values) ;

/// @brief Method SetGlobalMatrixArray, addr 0xb6197b8, size 0x34, virtual false, abstract: false, final false
inline void SetGlobalMatrixArray(::StringW  propertyName, ::ArrayW<::UnityEngine::Matrix4x4>  values) ;

/// @brief Method SetGlobalMatrixArray, addr 0xb6196a8, size 0x34, virtual false, abstract: false, final false
inline void SetGlobalMatrixArray(::StringW  propertyName, ::System::Collections::Generic::List_1<::UnityEngine::Matrix4x4>*  values) ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::SetGlobalMatrixArrayListImpl", HasExplicitThis = true)]
/// @brief Method SetGlobalMatrixArrayListImpl, addr 0xb61129c, size 0x68, virtual false, abstract: false, final false
inline void SetGlobalMatrixArrayListImpl(int32_t  nameID, ::System::Object*  values) ;

/// @brief Method SetGlobalMatrixArrayListImpl_Injected, addr 0xb611304, size 0x54, virtual false, abstract: false, final false
static inline void SetGlobalMatrixArrayListImpl_Injected(::System::IntPtr  _unity_self, int32_t  nameID, ::System::Object*  values) ;

/// @brief Method SetGlobalMatrixArray_Injected, addr 0xb611778, size 0x54, virtual false, abstract: false, final false
static inline void SetGlobalMatrixArray_Injected(::System::IntPtr  _unity_self, int32_t  nameID, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  values) ;

/// @brief Method SetGlobalMatrix_Injected, addr 0xb610020, size 0x54, virtual false, abstract: false, final false
static inline void SetGlobalMatrix_Injected(::System::IntPtr  _unity_self, int32_t  nameID, ::by_ref<::UnityEngine::Matrix4x4>  value) ;

/// @brief Method SetGlobalTexture, addr 0xb6197ec, size 0x54, virtual false, abstract: false, final false
inline void SetGlobalTexture(::StringW  name, ::UnityEngine::Rendering::RenderTargetIdentifier  value) ;

/// @brief Method SetGlobalTexture, addr 0xb61984c, size 0x58, virtual false, abstract: false, final false
inline void SetGlobalTexture(::StringW  name, ::UnityEngine::Rendering::RenderTargetIdentifier  value, ::UnityEngine::Rendering::RenderTextureSubElement  element) ;

/// @brief Method SetGlobalTexture, addr 0xb619844, size 0x8, virtual false, abstract: false, final false
inline void SetGlobalTexture(int32_t  nameID, ::UnityEngine::Rendering::RenderTargetIdentifier  value) ;

/// @brief Method SetGlobalTexture, addr 0xb619840, size 0x4, virtual false, abstract: false, final false
inline void SetGlobalTexture(int32_t  nameID, ::UnityEngine::Rendering::RenderTargetIdentifier  value, ::UnityEngine::Rendering::RenderTextureSubElement  element) ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::SetGlobalTexture_Impl", HasExplicitThis = true)]
/// @brief Method SetGlobalTexture_Impl, addr 0xb611a80, size 0x70, virtual false, abstract: false, final false
inline void SetGlobalTexture_Impl(int32_t  nameID, ::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier>  rt, ::UnityEngine::Rendering::RenderTextureSubElement  element) ;

/// @brief Method SetGlobalTexture_Impl_Injected, addr 0xb611af0, size 0x5c, virtual false, abstract: false, final false
static inline void SetGlobalTexture_Impl_Injected(::System::IntPtr  _unity_self, int32_t  nameID, ::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier>  rt, ::UnityEngine::Rendering::RenderTextureSubElement  element) ;

/// @brief Method SetGlobalVector, addr 0xb619328, size 0x54, virtual false, abstract: false, final false
inline void SetGlobalVector(::StringW  name, ::UnityEngine::Vector4  value) ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::SetGlobalVector", HasExplicitThis = true)]
/// @brief Method SetGlobalVector, addr 0xb60fe30, size 0x70, virtual false, abstract: false, final false
inline void SetGlobalVector(int32_t  nameID, ::UnityEngine::Vector4  value) ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::SetGlobalVectorArray", HasExplicitThis = true, ThrowsException = true)]
/// @brief Method SetGlobalVectorArray, addr 0xb6114d4, size 0x128, virtual false, abstract: false, final false
inline void SetGlobalVectorArray(int32_t  nameID, /* [NotNull] */ ::ArrayW<::UnityEngine::Vector4>  values) ;

/// @brief Method SetGlobalVectorArray, addr 0xb619598, size 0xdc, virtual false, abstract: false, final false
inline void SetGlobalVectorArray(int32_t  nameID, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  values) ;

/// @brief Method SetGlobalVectorArray, addr 0xb619674, size 0x34, virtual false, abstract: false, final false
inline void SetGlobalVectorArray(::StringW  propertyName, ::ArrayW<::UnityEngine::Vector4>  values) ;

/// @brief Method SetGlobalVectorArray, addr 0xb619564, size 0x34, virtual false, abstract: false, final false
inline void SetGlobalVectorArray(::StringW  propertyName, ::System::Collections::Generic::List_1<::UnityEngine::Vector4>*  values) ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::SetGlobalVectorArrayListImpl", HasExplicitThis = true)]
/// @brief Method SetGlobalVectorArrayListImpl, addr 0xb6111e0, size 0x68, virtual false, abstract: false, final false
inline void SetGlobalVectorArrayListImpl(int32_t  nameID, ::System::Object*  values) ;

/// @brief Method SetGlobalVectorArrayListImpl_Injected, addr 0xb611248, size 0x54, virtual false, abstract: false, final false
static inline void SetGlobalVectorArrayListImpl_Injected(::System::IntPtr  _unity_self, int32_t  nameID, ::System::Object*  values) ;

/// @brief Method SetGlobalVectorArray_Injected, addr 0xb6115fc, size 0x54, virtual false, abstract: false, final false
static inline void SetGlobalVectorArray_Injected(::System::IntPtr  _unity_self, int32_t  nameID, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  values) ;

/// @brief Method SetGlobalVector_Injected, addr 0xb60fea0, size 0x54, virtual false, abstract: false, final false
static inline void SetGlobalVector_Injected(::System::IntPtr  _unity_self, int32_t  nameID, ::by_ref<::UnityEngine::Vector4>  value) ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::SetInstanceMultiplier", HasExplicitThis = true)]
/// @brief Method SetInstanceMultiplier, addr 0xb6129bc, size 0x58, virtual false, abstract: false, final false
inline void SetInstanceMultiplier(uint32_t  multiplier) ;

/// @brief Method SetInstanceMultiplier_Injected, addr 0xb612a14, size 0x44, virtual false, abstract: false, final false
static inline void SetInstanceMultiplier_Injected(::System::IntPtr  _unity_self, uint32_t  multiplier) ;

/// [NativeMethod("AddSetInvertCulling")]
/// @brief Method SetInvertCulling, addr 0xb6090b8, size 0x58, virtual false, abstract: false, final false
inline void SetInvertCulling(bool  invertCulling) ;

/// @brief Method SetInvertCulling_Injected, addr 0xb609110, size 0x44, virtual false, abstract: false, final false
static inline void SetInvertCulling_Injected(::System::IntPtr  _unity_self, bool  invertCulling) ;

/// @brief Method SetKeyword, addr 0xb610d58, size 0x2c, virtual false, abstract: false, final false
inline void SetKeyword(::UnityEngine::ComputeShader*  computeShader, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::LocalKeyword>  keyword, bool  value) ;

/// @brief Method SetKeyword, addr 0xb610d24, size 0x8, virtual false, abstract: false, final false
inline void SetKeyword(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::GlobalKeyword>  keyword, bool  value) ;

/// @brief Method SetKeyword, addr 0xb610d2c, size 0x2c, virtual false, abstract: false, final false
inline void SetKeyword(::UnityEngine::Material*  material, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::LocalKeyword>  keyword, bool  value) ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::SetLateLatchProjectionMatrices", HasExplicitThis = true, ThrowsException = true)]
/// @brief Method SetLateLatchProjectionMatrices, addr 0xb6117cc, size 0x118, virtual false, abstract: false, final false
inline void SetLateLatchProjectionMatrices(/* [NotNull] */ ::ArrayW<::UnityEngine::Matrix4x4>  projectionMat) ;

/// @brief Method SetLateLatchProjectionMatrices_Injected, addr 0xb6118e4, size 0x44, virtual false, abstract: false, final false
static inline void SetLateLatchProjectionMatrices_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  projectionMat) ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::SetMaterialKeyword", HasExplicitThis = true)]
/// @brief Method SetMaterialKeyword, addr 0xb610aec, size 0xc0, virtual false, abstract: false, final false
inline void SetMaterialKeyword(::UnityEngine::Material*  material, ::UnityEngine::Rendering::LocalKeyword  keyword, bool  value) ;

/// @brief Method SetMaterialKeyword_Injected, addr 0xb610bac, size 0x5c, virtual false, abstract: false, final false
static inline void SetMaterialKeyword_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  material, ::by_ref<::UnityEngine::Rendering::LocalKeyword>  keyword, bool  value) ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::SetProjectionMatrix", HasExplicitThis = true, ThrowsException = true)]
/// @brief Method SetProjectionMatrix, addr 0xb610e20, size 0x58, virtual false, abstract: false, final false
inline void SetProjectionMatrix(::UnityEngine::Matrix4x4  proj) ;

/// @brief Method SetProjectionMatrix_Injected, addr 0xb610e78, size 0x44, virtual false, abstract: false, final false
static inline void SetProjectionMatrix_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Matrix4x4>  proj) ;

/// @brief Method SetRandomWriteTarget, addr 0xb618f3c, size 0x3c, virtual false, abstract: false, final false
inline void SetRandomWriteTarget(int32_t  index, ::UnityEngine::GraphicsBuffer*  buffer) ;

/// @brief Method SetRandomWriteTarget, addr 0xb618ef4, size 0x48, virtual false, abstract: false, final false
inline void SetRandomWriteTarget(int32_t  index, ::UnityEngine::GraphicsBuffer*  buffer, bool  preserveCounterValue) ;

/// @brief Method SetRandomWriteTarget, addr 0xb618ebc, size 0x38, virtual false, abstract: false, final false
inline void SetRandomWriteTarget(int32_t  index, ::UnityEngine::Rendering::RenderTargetIdentifier  rt) ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::SetRandomWriteTarget_Buffer", HasExplicitThis = true, ThrowsException = true)]
/// @brief Method SetRandomWriteTarget_GraphicsBuffer, addr 0xb60ed38, size 0x78, virtual false, abstract: false, final false
inline void SetRandomWriteTarget_GraphicsBuffer(int32_t  index, ::UnityEngine::GraphicsBuffer*  uav, bool  preserveCounterValue) ;

/// @brief Method SetRandomWriteTarget_GraphicsBuffer_Injected, addr 0xb60edb0, size 0x5c, virtual false, abstract: false, final false
static inline void SetRandomWriteTarget_GraphicsBuffer_Injected(::System::IntPtr  _unity_self, int32_t  index, ::System::IntPtr  uav, bool  preserveCounterValue) ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::SetRandomWriteTarget_Texture", HasExplicitThis = true, ThrowsException = true)]
/// @brief Method SetRandomWriteTarget_Texture, addr 0xb60ec7c, size 0x68, virtual false, abstract: false, final false
inline void SetRandomWriteTarget_Texture(int32_t  index, ::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier>  rt) ;

/// @brief Method SetRandomWriteTarget_Texture_Injected, addr 0xb60ece4, size 0x54, virtual false, abstract: false, final false
static inline void SetRandomWriteTarget_Texture_Injected(::System::IntPtr  _unity_self, int32_t  index, ::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier>  rt) ;

/// @brief Method SetRayTracingAccelerationStructure, addr 0xb616e94, size 0x4c, virtual false, abstract: false, final false
inline void SetRayTracingAccelerationStructure(::UnityEngine::ComputeShader*  computeShader, int32_t  kernelIndex, ::StringW  name, ::UnityEngine::Rendering::RayTracingAccelerationStructure*  rayTracingAccelerationStructure) ;

/// @brief Method SetRayTracingAccelerationStructure, addr 0xb616ee0, size 0x4, virtual false, abstract: false, final false
inline void SetRayTracingAccelerationStructure(::UnityEngine::ComputeShader*  computeShader, int32_t  kernelIndex, int32_t  nameID, ::UnityEngine::Rendering::RayTracingAccelerationStructure*  rayTracingAccelerationStructure) ;

/// @brief Method SetRayTracingAccelerationStructure, addr 0xb616e54, size 0x3c, virtual false, abstract: false, final false
inline void SetRayTracingAccelerationStructure(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, ::StringW  name, ::UnityEngine::Rendering::RayTracingAccelerationStructure*  rayTracingAccelerationStructure) ;

/// @brief Method SetRayTracingAccelerationStructure, addr 0xb616e90, size 0x4, virtual false, abstract: false, final false
inline void SetRayTracingAccelerationStructure(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, int32_t  nameID, ::UnityEngine::Rendering::RayTracingAccelerationStructure*  rayTracingAccelerationStructure) ;

/// @brief Method SetRayTracingBufferParam, addr 0xb616ee4, size 0x3c, virtual false, abstract: false, final false
inline void SetRayTracingBufferParam(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, ::StringW  name, ::UnityEngine::ComputeBuffer*  buffer) ;

/// @brief Method SetRayTracingBufferParam, addr 0xb616f24, size 0x3c, virtual false, abstract: false, final false
inline void SetRayTracingBufferParam(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, ::StringW  name, ::UnityEngine::GraphicsBuffer*  buffer) ;

/// @brief Method SetRayTracingBufferParam, addr 0xb616f64, size 0x3c, virtual false, abstract: false, final false
inline void SetRayTracingBufferParam(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, ::StringW  name, ::UnityEngine::GraphicsBufferHandle  bufferHandle) ;

/// @brief Method SetRayTracingBufferParam, addr 0xb616f20, size 0x4, virtual false, abstract: false, final false
inline void SetRayTracingBufferParam(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, int32_t  nameID, ::UnityEngine::ComputeBuffer*  buffer) ;

/// @brief Method SetRayTracingBufferParam, addr 0xb616f60, size 0x4, virtual false, abstract: false, final false
inline void SetRayTracingBufferParam(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, int32_t  nameID, ::UnityEngine::GraphicsBuffer*  buffer) ;

/// @brief Method SetRayTracingBufferParam, addr 0xb616fa0, size 0x8, virtual false, abstract: false, final false
inline void SetRayTracingBufferParam(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, int32_t  nameID, ::UnityEngine::GraphicsBufferHandle  bufferHandle) ;

/// @brief Method SetRayTracingConstantBufferParam, addr 0xb616fac, size 0x54, virtual false, abstract: false, final false
inline void SetRayTracingConstantBufferParam(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, ::StringW  name, ::UnityEngine::ComputeBuffer*  buffer, int32_t  offset, int32_t  size) ;

/// @brief Method SetRayTracingConstantBufferParam, addr 0xb617004, size 0x54, virtual false, abstract: false, final false
inline void SetRayTracingConstantBufferParam(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, ::StringW  name, ::UnityEngine::GraphicsBuffer*  buffer, int32_t  offset, int32_t  size) ;

/// @brief Method SetRayTracingConstantBufferParam, addr 0xb616fa8, size 0x4, virtual false, abstract: false, final false
inline void SetRayTracingConstantBufferParam(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, int32_t  nameID, ::UnityEngine::ComputeBuffer*  buffer, int32_t  offset, int32_t  size) ;

/// @brief Method SetRayTracingConstantBufferParam, addr 0xb617000, size 0x4, virtual false, abstract: false, final false
inline void SetRayTracingConstantBufferParam(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, int32_t  nameID, ::UnityEngine::GraphicsBuffer*  buffer, int32_t  offset, int32_t  size) ;

/// @brief Method SetRayTracingFloatParam, addr 0xb617098, size 0x44, virtual false, abstract: false, final false
inline void SetRayTracingFloatParam(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, ::StringW  name, float_t  val) ;

/// @brief Method SetRayTracingFloatParam, addr 0xb6170dc, size 0x4, virtual false, abstract: false, final false
inline void SetRayTracingFloatParam(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, int32_t  nameID, float_t  val) ;

/// @brief Method SetRayTracingFloatParams, addr 0xb6170e0, size 0x3c, virtual false, abstract: false, final false
inline void SetRayTracingFloatParams(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, ::StringW  name, /* [ParamArray] */ ::ArrayW<float_t>  values) ;

/// @brief Method SetRayTracingFloatParams, addr 0xb61711c, size 0x4, virtual false, abstract: false, final false
inline void SetRayTracingFloatParams(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, int32_t  nameID, /* [ParamArray] */ ::ArrayW<float_t>  values) ;

/// @brief Method SetRayTracingIntParam, addr 0xb617120, size 0x3c, virtual false, abstract: false, final false
inline void SetRayTracingIntParam(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, ::StringW  name, int32_t  val) ;

/// @brief Method SetRayTracingIntParam, addr 0xb61715c, size 0x4, virtual false, abstract: false, final false
inline void SetRayTracingIntParam(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, int32_t  nameID, int32_t  val) ;

/// @brief Method SetRayTracingIntParams, addr 0xb617160, size 0x3c, virtual false, abstract: false, final false
inline void SetRayTracingIntParams(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, ::StringW  name, /* [ParamArray] */ ::ArrayW<int32_t>  values) ;

/// @brief Method SetRayTracingIntParams, addr 0xb61719c, size 0x4, virtual false, abstract: false, final false
inline void SetRayTracingIntParams(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, int32_t  nameID, /* [ParamArray] */ ::ArrayW<int32_t>  values) ;

/// @brief Method SetRayTracingMatrixArrayParam, addr 0xb6172cc, size 0x3c, virtual false, abstract: false, final false
inline void SetRayTracingMatrixArrayParam(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, ::StringW  name, /* [ParamArray] */ ::ArrayW<::UnityEngine::Matrix4x4>  values) ;

/// @brief Method SetRayTracingMatrixArrayParam, addr 0xb617308, size 0x4, virtual false, abstract: false, final false
inline void SetRayTracingMatrixArrayParam(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, int32_t  nameID, /* [ParamArray] */ ::ArrayW<::UnityEngine::Matrix4x4>  values) ;

/// @brief Method SetRayTracingMatrixParam, addr 0xb617248, size 0x58, virtual false, abstract: false, final false
inline void SetRayTracingMatrixParam(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, ::StringW  name, ::UnityEngine::Matrix4x4  val) ;

/// @brief Method SetRayTracingMatrixParam, addr 0xb6172a0, size 0x2c, virtual false, abstract: false, final false
inline void SetRayTracingMatrixParam(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, int32_t  nameID, ::UnityEngine::Matrix4x4  val) ;

/// @brief Method SetRayTracingTextureParam, addr 0xb617058, size 0x3c, virtual false, abstract: false, final false
inline void SetRayTracingTextureParam(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, ::StringW  name, ::UnityEngine::Rendering::RenderTargetIdentifier  rt) ;

/// @brief Method SetRayTracingTextureParam, addr 0xb617094, size 0x4, virtual false, abstract: false, final false
inline void SetRayTracingTextureParam(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, int32_t  nameID, ::UnityEngine::Rendering::RenderTargetIdentifier  rt) ;

/// @brief Method SetRayTracingVectorArrayParam, addr 0xb617208, size 0x3c, virtual false, abstract: false, final false
inline void SetRayTracingVectorArrayParam(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, ::StringW  name, /* [ParamArray] */ ::ArrayW<::UnityEngine::Vector4>  values) ;

/// @brief Method SetRayTracingVectorArrayParam, addr 0xb617244, size 0x4, virtual false, abstract: false, final false
inline void SetRayTracingVectorArrayParam(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, int32_t  nameID, /* [ParamArray] */ ::ArrayW<::UnityEngine::Vector4>  values) ;

/// @brief Method SetRayTracingVectorParam, addr 0xb6171a0, size 0x64, virtual false, abstract: false, final false
inline void SetRayTracingVectorParam(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, ::StringW  name, ::UnityEngine::Vector4  val) ;

/// @brief Method SetRayTracingVectorParam, addr 0xb617204, size 0x4, virtual false, abstract: false, final false
inline void SetRayTracingVectorParam(::UnityEngine::Rendering::RayTracingShader*  rayTracingShader, int32_t  nameID, ::UnityEngine::Vector4  val) ;

/// @brief Method SetRenderTarget, addr 0xb61448c, size 0x374, virtual false, abstract: false, final false
inline void SetRenderTarget(::UnityEngine::Rendering::RenderTargetBinding  binding) ;

/// @brief Method SetRenderTarget, addr 0xb614034, size 0x3a0, virtual false, abstract: false, final false
inline void SetRenderTarget(::UnityEngine::Rendering::RenderTargetBinding  binding, int32_t  mipLevel, ::UnityEngine::CubemapFace  cubemapFace, int32_t  depthSlice) ;

/// @brief Method SetRenderTarget, addr 0xb6137e0, size 0xf8, virtual false, abstract: false, final false
inline void SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier  color, ::UnityEngine::Rendering::RenderBufferLoadAction  colorLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction  colorStoreAction, ::UnityEngine::Rendering::RenderTargetIdentifier  depth, ::UnityEngine::Rendering::RenderBufferLoadAction  depthLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction  depthStoreAction) ;

/// @brief Method SetRenderTarget, addr 0xb6132cc, size 0x80, virtual false, abstract: false, final false
inline void SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier  color, ::UnityEngine::Rendering::RenderTargetIdentifier  depth) ;

/// @brief Method SetRenderTarget, addr 0xb6133ec, size 0x138, virtual false, abstract: false, final false
inline void SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier  color, ::UnityEngine::Rendering::RenderTargetIdentifier  depth, int32_t  mipLevel) ;

/// @brief Method SetRenderTarget, addr 0xb613524, size 0x144, virtual false, abstract: false, final false
inline void SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier  color, ::UnityEngine::Rendering::RenderTargetIdentifier  depth, int32_t  mipLevel, ::UnityEngine::CubemapFace  cubemapFace) ;

/// @brief Method SetRenderTarget, addr 0xb613668, size 0x178, virtual false, abstract: false, final false
inline void SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier  color, ::UnityEngine::Rendering::RenderTargetIdentifier  depth, int32_t  mipLevel, ::UnityEngine::CubemapFace  cubemapFace, int32_t  depthSlice) ;

/// @brief Method SetRenderTarget, addr 0xb6138d8, size 0x17c, virtual false, abstract: false, final false
inline void SetRenderTarget(::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>  colors, ::UnityEngine::Rendering::RenderTargetIdentifier  depth) ;

/// @brief Method SetRenderTarget, addr 0xb613c6c, size 0x1a0, virtual false, abstract: false, final false
inline void SetRenderTarget(::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>  colors, ::UnityEngine::Rendering::RenderTargetIdentifier  depth, int32_t  mipLevel, ::UnityEngine::CubemapFace  cubemapFace, int32_t  depthSlice) ;

/// @brief Method SetRenderTarget, addr 0xb612cc0, size 0x64, virtual false, abstract: false, final false
inline void SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier  rt) ;

/// @brief Method SetRenderTarget, addr 0xb612e70, size 0xdc, virtual false, abstract: false, final false
inline void SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier  rt, ::UnityEngine::Rendering::RenderBufferLoadAction  colorLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction  colorStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction  depthLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction  depthStoreAction) ;

/// @brief Method SetRenderTarget, addr 0xb612dac, size 0xc4, virtual false, abstract: false, final false
inline void SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier  rt, ::UnityEngine::Rendering::RenderBufferLoadAction  loadAction, ::UnityEngine::Rendering::RenderBufferStoreAction  storeAction) ;

/// @brief Method SetRenderTarget, addr 0xb612f4c, size 0x10c, virtual false, abstract: false, final false
inline void SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier  rt, int32_t  mipLevel) ;

/// @brief Method SetRenderTarget, addr 0xb613058, size 0x120, virtual false, abstract: false, final false
inline void SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier  rt, int32_t  mipLevel, ::UnityEngine::CubemapFace  cubemapFace) ;

/// @brief Method SetRenderTarget, addr 0xb613178, size 0x154, virtual false, abstract: false, final false
inline void SetRenderTarget(::UnityEngine::Rendering::RenderTargetIdentifier  rt, int32_t  mipLevel, ::UnityEngine::CubemapFace  cubemapFace, int32_t  depthSlice) ;

/// @brief Method SetRenderTargetColorDepthSubtarget, addr 0xb6143d4, size 0xb8, virtual false, abstract: false, final false
inline void SetRenderTargetColorDepthSubtarget(::UnityEngine::Rendering::RenderTargetIdentifier  color, ::UnityEngine::Rendering::RenderTargetIdentifier  depth, ::UnityEngine::Rendering::RenderBufferLoadAction  colorLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction  colorStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction  depthLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction  depthStoreAction, int32_t  mipLevel, ::UnityEngine::CubemapFace  cubemapFace, int32_t  depthSlice) ;

/// @brief Method SetRenderTargetColorDepthSubtarget_Injected, addr 0xb614a64, size 0xa4, virtual false, abstract: false, final false
static inline void SetRenderTargetColorDepthSubtarget_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier>  color, ::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier>  depth, ::UnityEngine::Rendering::RenderBufferLoadAction  colorLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction  colorStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction  depthLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction  depthStoreAction, int32_t  mipLevel, ::UnityEngine::CubemapFace  cubemapFace, int32_t  depthSlice) ;

/// @brief Method SetRenderTargetColorDepth_Internal, addr 0xb61334c, size 0xa0, virtual false, abstract: false, final false
inline void SetRenderTargetColorDepth_Internal(::UnityEngine::Rendering::RenderTargetIdentifier  color, ::UnityEngine::Rendering::RenderTargetIdentifier  depth, ::UnityEngine::Rendering::RenderBufferLoadAction  colorLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction  colorStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction  depthLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction  depthStoreAction, ::UnityEngine::Rendering::RenderTargetFlags  flags) ;

/// @brief Method SetRenderTargetColorDepth_Internal_Injected, addr 0xb61494c, size 0x8c, virtual false, abstract: false, final false
static inline void SetRenderTargetColorDepth_Internal_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier>  color, ::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier>  depth, ::UnityEngine::Rendering::RenderBufferLoadAction  colorLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction  colorStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction  depthLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction  depthStoreAction, ::UnityEngine::Rendering::RenderTargetFlags  flags) ;

/// @brief Method SetRenderTargetMultiSubtarget, addr 0xb613e0c, size 0x228, virtual false, abstract: false, final false
inline void SetRenderTargetMultiSubtarget(::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>  colors, ::UnityEngine::Rendering::RenderTargetIdentifier  depth, ::ArrayW<::UnityEngine::Rendering::RenderBufferLoadAction>  colorLoadActions, ::ArrayW<::UnityEngine::Rendering::RenderBufferStoreAction>  colorStoreActions, ::UnityEngine::Rendering::RenderBufferLoadAction  depthLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction  depthStoreAction, int32_t  mipLevel, ::UnityEngine::CubemapFace  cubemapFace, int32_t  depthSlice) ;

/// @brief Method SetRenderTargetMultiSubtarget_Injected, addr 0xb614b08, size 0xa4, virtual false, abstract: false, final false
static inline void SetRenderTargetMultiSubtarget_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  colors, ::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier>  depth, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  colorLoadActions, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  colorStoreActions, ::UnityEngine::Rendering::RenderBufferLoadAction  depthLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction  depthStoreAction, int32_t  mipLevel, ::UnityEngine::CubemapFace  cubemapFace, int32_t  depthSlice) ;

/// @brief Method SetRenderTargetMulti_Internal, addr 0xb613a54, size 0x218, virtual false, abstract: false, final false
inline void SetRenderTargetMulti_Internal(::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>  colors, ::UnityEngine::Rendering::RenderTargetIdentifier  depth, ::ArrayW<::UnityEngine::Rendering::RenderBufferLoadAction>  colorLoadActions, ::ArrayW<::UnityEngine::Rendering::RenderBufferStoreAction>  colorStoreActions, ::UnityEngine::Rendering::RenderBufferLoadAction  depthLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction  depthStoreAction, ::UnityEngine::Rendering::RenderTargetFlags  flags) ;

/// @brief Method SetRenderTargetMulti_Internal_Injected, addr 0xb6149d8, size 0x8c, virtual false, abstract: false, final false
static inline void SetRenderTargetMulti_Internal_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  colors, ::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier>  depth, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  colorLoadActions, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  colorStoreActions, ::UnityEngine::Rendering::RenderBufferLoadAction  depthLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction  depthStoreAction, ::UnityEngine::Rendering::RenderTargetFlags  flags) ;

/// @brief Method SetRenderTargetSingle_Internal, addr 0xb612d24, size 0x88, virtual false, abstract: false, final false
inline void SetRenderTargetSingle_Internal(::UnityEngine::Rendering::RenderTargetIdentifier  rt, ::UnityEngine::Rendering::RenderBufferLoadAction  colorLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction  colorStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction  depthLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction  depthStoreAction) ;

/// @brief Method SetRenderTargetSingle_Internal_Injected, addr 0xb6148d8, size 0x74, virtual false, abstract: false, final false
static inline void SetRenderTargetSingle_Internal_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier>  rt, ::UnityEngine::Rendering::RenderBufferLoadAction  colorLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction  colorStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction  depthLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction  depthStoreAction) ;

/// @brief Method SetShadingRateCombiner, addr 0xb616260, size 0x4, virtual false, abstract: false, final false
inline void SetShadingRateCombiner(::UnityEngine::Rendering::ShadingRateCombinerStage  stage, ::UnityEngine::Rendering::ShadingRateCombiner  combiner) ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::SetShadingRateCombiner_Impl", HasExplicitThis = true)]
/// @brief Method SetShadingRateCombiner_Impl, addr 0xb616264, size 0x68, virtual false, abstract: false, final false
inline void SetShadingRateCombiner_Impl(::UnityEngine::Rendering::ShadingRateCombinerStage  stage, ::UnityEngine::Rendering::ShadingRateCombiner  combiner) ;

/// @brief Method SetShadingRateCombiner_Impl_Injected, addr 0xb6163c0, size 0x54, virtual false, abstract: false, final false
static inline void SetShadingRateCombiner_Impl_Injected(::System::IntPtr  _unity_self, ::UnityEngine::Rendering::ShadingRateCombinerStage  stage, ::UnityEngine::Rendering::ShadingRateCombiner  combiner) ;

/// @brief Method SetShadingRateFragmentSize, addr 0xb616204, size 0x4, virtual false, abstract: false, final false
inline void SetShadingRateFragmentSize(::UnityEngine::Rendering::ShadingRateFragmentSize  shadingRateFragmentSize) ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::SetShadingRateFragmentSize_Impl", HasExplicitThis = true)]
/// @brief Method SetShadingRateFragmentSize_Impl, addr 0xb616208, size 0x58, virtual false, abstract: false, final false
inline void SetShadingRateFragmentSize_Impl(::UnityEngine::Rendering::ShadingRateFragmentSize  shadingRateFragmentSize) ;

/// @brief Method SetShadingRateFragmentSize_Impl_Injected, addr 0xb61637c, size 0x44, virtual false, abstract: false, final false
static inline void SetShadingRateFragmentSize_Impl_Injected(::System::IntPtr  _unity_self, ::UnityEngine::Rendering::ShadingRateFragmentSize  shadingRateFragmentSize) ;

/// @brief Method SetShadingRateImage, addr 0xb6162cc, size 0x4, virtual false, abstract: false, final false
inline void SetShadingRateImage(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier>  shadingRateImage) ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::SetShadingRateImage_Impl", HasExplicitThis = true)]
/// @brief Method SetShadingRateImage_Impl, addr 0xb6162d0, size 0x58, virtual false, abstract: false, final false
inline void SetShadingRateImage_Impl(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier>  shadingRateImage) ;

/// @brief Method SetShadingRateImage_Impl_Injected, addr 0xb616414, size 0x44, virtual false, abstract: false, final false
static inline void SetShadingRateImage_Impl_Injected(::System::IntPtr  _unity_self, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier>  shadingRateImage) ;

/// @brief Method SetShadowSamplingMode, addr 0xb6199b4, size 0x38, virtual false, abstract: false, final false
inline void SetShadowSamplingMode(::UnityEngine::Rendering::RenderTargetIdentifier  shadowmap, ::UnityEngine::Rendering::ShadowSamplingMode  mode) ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::SetShadowSamplingMode_Impl", HasExplicitThis = true)]
/// @brief Method SetShadowSamplingMode_Impl, addr 0xb611cd4, size 0x68, virtual false, abstract: false, final false
inline void SetShadowSamplingMode_Impl(::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier>  shadowmap, ::UnityEngine::Rendering::ShadowSamplingMode  mode) ;

/// @brief Method SetShadowSamplingMode_Impl_Injected, addr 0xb611d3c, size 0x54, virtual false, abstract: false, final false
static inline void SetShadowSamplingMode_Impl_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier>  shadowmap, ::UnityEngine::Rendering::ShadowSamplingMode  mode) ;

/// @brief Method SetSinglePassStereo, addr 0xb6199ec, size 0x4, virtual false, abstract: false, final false
inline void SetSinglePassStereo(::UnityEngine::Rendering::SinglePassStereoMode  mode) ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::SetViewMatrix", HasExplicitThis = true, ThrowsException = true)]
/// @brief Method SetViewMatrix, addr 0xb610d84, size 0x58, virtual false, abstract: false, final false
inline void SetViewMatrix(::UnityEngine::Matrix4x4  view) ;

/// @brief Method SetViewMatrix_Injected, addr 0xb610ddc, size 0x44, virtual false, abstract: false, final false
static inline void SetViewMatrix_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Matrix4x4>  view) ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::SetViewProjectionMatrices", HasExplicitThis = true, ThrowsException = true)]
/// @brief Method SetViewProjectionMatrices, addr 0xb610ebc, size 0x68, virtual false, abstract: false, final false
inline void SetViewProjectionMatrices(::UnityEngine::Matrix4x4  view, ::UnityEngine::Matrix4x4  proj) ;

/// @brief Method SetViewProjectionMatrices_Injected, addr 0xb610f24, size 0x54, virtual false, abstract: false, final false
static inline void SetViewProjectionMatrices_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Matrix4x4>  view, ::by_ref<::UnityEngine::Matrix4x4>  proj) ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::SetViewport", HasExplicitThis = true, ThrowsException = true)]
/// @brief Method SetViewport, addr 0xb60ee98, size 0x68, virtual false, abstract: false, final false
inline void SetViewport(::UnityEngine::Rect  pixelRect) ;

/// @brief Method SetViewport_Injected, addr 0xb60ef00, size 0x44, virtual false, abstract: false, final false
static inline void SetViewport_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Rect>  pixelRect) ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::SetWireframe", HasExplicitThis = true)]
/// @brief Method SetWireframe, addr 0xb612af4, size 0x58, virtual false, abstract: false, final false
inline void SetWireframe(bool  enable) ;

/// @brief Method SetWireframe_Injected, addr 0xb612b4c, size 0x44, virtual false, abstract: false, final false
static inline void SetWireframe_Injected(::System::IntPtr  _unity_self, bool  enable) ;

/// @brief Method SetupCameraProperties, addr 0xb616128, size 0x30, virtual false, abstract: false, final false
inline void SetupCameraProperties(::UnityEngine::Camera*  camera) ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::SetupCameraProperties", HasExplicitThis = true)]
/// @brief Method SetupCameraProperties_Internal, addr 0xb61600c, size 0xd8, virtual false, abstract: false, final false
inline void SetupCameraProperties_Internal(/* [NotNull] */ ::UnityEngine::Camera*  camera) ;

/// @brief Method SetupCameraProperties_Internal_Injected, addr 0xb6160e4, size 0x44, virtual false, abstract: false, final false
static inline void SetupCameraProperties_Internal_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  camera) ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::UnmarkLateLatchMatrix", HasExplicitThis = true)]
/// @brief Method UnmarkLateLatchMatrix, addr 0xb6119e4, size 0x58, virtual false, abstract: false, final false
inline void UnmarkLateLatchMatrix(::UnityEngine::Rendering::CameraLateLatchMatrixType  matrixPropertyType) ;

/// @brief Method UnmarkLateLatchMatrix_Injected, addr 0xb611a3c, size 0x44, virtual false, abstract: false, final false
static inline void UnmarkLateLatchMatrix_Injected(::System::IntPtr  _unity_self, ::UnityEngine::Rendering::CameraLateLatchMatrixType  matrixPropertyType) ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::ValidateAgainstExecutionFlags", HasExplicitThis = true, ThrowsException = true)]
/// @brief Method ValidateAgainstExecutionFlags, addr 0xb60f808, size 0x68, virtual false, abstract: false, final false
inline bool ValidateAgainstExecutionFlags(::UnityEngine::Rendering::CommandBufferExecutionFlags  requiredFlags, ::UnityEngine::Rendering::CommandBufferExecutionFlags  invalidFlags) ;

/// @brief Method ValidateAgainstExecutionFlags_Injected, addr 0xb6110d0, size 0x54, virtual false, abstract: false, final false
static inline bool ValidateAgainstExecutionFlags_Injected(::System::IntPtr  _unity_self, ::UnityEngine::Rendering::CommandBufferExecutionFlags  requiredFlags, ::UnityEngine::Rendering::CommandBufferExecutionFlags  invalidFlags) ;

/// @brief Method WaitOnAsyncGraphicsFence, addr 0xb616628, size 0x8, virtual false, abstract: false, final false
inline void WaitOnAsyncGraphicsFence(::UnityEngine::Rendering::GraphicsFence  fence) ;

/// @brief Method WaitOnAsyncGraphicsFence, addr 0xb616630, size 0x10, virtual false, abstract: false, final false
inline void WaitOnAsyncGraphicsFence(::UnityEngine::Rendering::GraphicsFence  fence, ::UnityEngine::Rendering::SynchronisationStage  stage) ;

/// @brief Method WaitOnAsyncGraphicsFence, addr 0xb616640, size 0xe4, virtual false, abstract: false, final false
inline void WaitOnAsyncGraphicsFence(::UnityEngine::Rendering::GraphicsFence  fence, ::UnityEngine::Rendering::SynchronisationStageFlags  stage) ;

/// [FreeFunction("RenderingCommandBuffer_Bindings::WaitOnGPUFence_Internal", HasExplicitThis = true)]
/// @brief Method WaitOnGPUFence_Internal, addr 0xb6092d4, size 0x68, virtual false, abstract: false, final false
inline void WaitOnGPUFence_Internal(::System::IntPtr  fencePtr, ::UnityEngine::Rendering::SynchronisationStageFlags  stage) ;

/// @brief Method WaitOnGPUFence_Internal_Injected, addr 0xb60933c, size 0x54, virtual false, abstract: false, final false
static inline void WaitOnGPUFence_Internal_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  fencePtr, ::UnityEngine::Rendering::SynchronisationStageFlags  stage) ;

constexpr ::System::IntPtr const& __cordl_internal_get_m_Ptr() const;

constexpr ::System::IntPtr& __cordl_internal_get_m_Ptr() ;

constexpr void __cordl_internal_set_m_Ptr(::System::IntPtr  value) ;

/// @brief Method .ctor, addr 0xb61659c, size 0x44, virtual false, abstract: false, final false
inline void _ctor() ;

static inline bool getStaticF_ThrowOnSetRenderTarget() ;

/// @brief Method get_name, addr 0xb60d054, size 0x100, virtual false, abstract: false, final false
inline ::StringW get_name() ;

/// @brief Method get_name_Injected, addr 0xb60d154, size 0x44, virtual false, abstract: false, final false
static inline void get_name_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  ret) ;

/// [NativeMethod("GetBufferSize")]
/// @brief Method get_sizeInBytes, addr 0xb60d36c, size 0x50, virtual false, abstract: false, final false
inline int32_t get_sizeInBytes() ;

/// @brief Method get_sizeInBytes_Injected, addr 0xb60d3bc, size 0x3c, virtual false, abstract: false, final false
static inline int32_t get_sizeInBytes_Injected(::System::IntPtr  _unity_self) ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() noexcept;

static inline void setStaticF_ThrowOnSetRenderTarget(bool  value) ;

/// @brief Method set_name, addr 0xb60d198, size 0x190, virtual false, abstract: false, final false
inline void set_name(::StringW  value) ;

/// @brief Method set_name_Injected, addr 0xb60d328, size 0x44, virtual false, abstract: false, final false
static inline void set_name_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CommandBuffer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CommandBuffer", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CommandBuffer(CommandBuffer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CommandBuffer", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CommandBuffer(CommandBuffer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15513};

/// @brief Field m_Ptr, offset: 0x10, size: 0x8, def value: None
 ::System::IntPtr  ___m_Ptr;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::CommandBuffer, ___m_Ptr) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::CommandBuffer) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
// Dependencies System.Object
namespace UnityEngine::Rendering {
// Is value type: false
// CS Name: UnityEngine.Rendering.CommandBuffer/BindingsMarshaller
class CORDL_TYPE CommandBuffer_BindingsMarshaller : public ::System::Object {
public:
// Declarations
/// @brief Method ConvertToNative, addr 0xb619b8c, size 0x14, virtual false, abstract: false, final false
static inline ::System::IntPtr ConvertToNative(::UnityEngine::Rendering::CommandBuffer*  commandBuffer) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CommandBuffer_BindingsMarshaller() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CommandBuffer_BindingsMarshaller", modifiers: "&&", def_value: None, comment: None }]
// @brief delete move ctor to prevent accidental deref moves
CommandBuffer_BindingsMarshaller(CommandBuffer_BindingsMarshaller && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CommandBuffer_BindingsMarshaller", modifiers: "const&", def_value: None, comment: None }]
// @brief delete copy ctor to prevent accidental deref copies
CommandBuffer_BindingsMarshaller(CommandBuffer_BindingsMarshaller const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{15512};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::CommandBuffer_BindingsMarshaller) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Rendering
