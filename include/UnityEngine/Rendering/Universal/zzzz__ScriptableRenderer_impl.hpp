#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/ScriptableRenderer.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RendererListHandle_impl.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__StoreActionsOptimization_impl.hpp"
#include "UnityEngine/Rendering/zzzz__AttachmentDescriptor_impl.hpp"
#include "UnityEngine/Rendering/zzzz__GraphicsDeviceType_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RenderBufferStoreAction_impl.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_impl.hpp"
#include "UnityEngine/VFX/zzzz__VFXCameraXRSettings_impl.hpp"
#include "UnityEngine/zzzz__Hash128_impl.hpp"
#include "UnityEngine/zzzz__Plane_impl.hpp"
#include "UnityEngine/zzzz__Vector2Int_impl.hpp"
#include "UnityEngine/zzzz__Vector4_impl.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderer_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__XRPass_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__BaseRenderFunc_2_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RasterGraphContext_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__RenderGraph_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureHandle_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__UnsafeGraphContext_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__CameraData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__CameraRenderType_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__DebugHandler_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderPassEvent_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__RenderingData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderPass_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRendererData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRendererFeature_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderer_RenderBlocks_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderer_RenderPassDescriptor_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__ScriptableRenderer_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalCameraData_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__UniversalRenderingData_def.hpp"
#include "UnityEngine/Rendering/zzzz__AttachmentDescriptor_def.hpp"
#include "UnityEngine/Rendering/zzzz__ClearFlag_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__ContextContainer_def.hpp"
#include "UnityEngine/Rendering/zzzz__GizmoSubset_def.hpp"
#include "UnityEngine/Rendering/zzzz__GraphicsDeviceType_def.hpp"
#include "UnityEngine/Rendering/zzzz__IBaseCommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__ProfilingSampler_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__RasterCommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderBufferLoadAction_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderBufferStoreAction_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableCullingParameters_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Hash128_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__RenderTextureDescriptor_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.get_cameraDepth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderTargetIdentifier (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)()>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::get_cameraDepth)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb23f760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"get_cameraDepth", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.ResetNativeRenderPassFrameData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)()>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::ResetNativeRenderPassFrameData)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0xb23f788;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"ResetNativeRenderPassFrameData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.SetupNativeRenderPassFrameData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)(::UnityEngine::Rendering::Universal::UniversalCameraData*, bool)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::SetupNativeRenderPassFrameData)> {
  constexpr static std::size_t size = 0x7cc;
  constexpr static std::size_t addrs = 0xb23f8d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"SetupNativeRenderPassFrameData", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.UpdateFinalStoreActions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)(::ArrayW<int32_t>, ::UnityEngine::Rendering::Universal::UniversalCameraData*, bool)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::UpdateFinalStoreActions)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0xb2402a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"UpdateFinalStoreActions", {}, {::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.SetNativeRenderPassMRTAttachmentList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)(::UnityEngine::Rendering::Universal::ScriptableRenderPass*, ::UnityEngine::Rendering::Universal::UniversalCameraData*, bool, ::UnityEngine::Rendering::ClearFlag)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::SetNativeRenderPassMRTAttachmentList)> {
  constexpr static std::size_t size = 0xa10;
  constexpr static std::size_t addrs = 0xb240680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"SetNativeRenderPassMRTAttachmentList", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Rendering::ClearFlag>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.IsDepthOnlyRenderTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)(::UnityEngine::RenderTexture*)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::IsDepthOnlyRenderTexture)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb241528;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"IsDepthOnlyRenderTexture", {}, {::i2c::type_of<::UnityEngine::RenderTexture*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.SetNativeRenderPassAttachmentList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)(::UnityEngine::Rendering::Universal::ScriptableRenderPass*, ::UnityEngine::Rendering::Universal::UniversalCameraData*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::ClearFlag, ::UnityEngine::Color)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::SetNativeRenderPassAttachmentList)> {
  constexpr static std::size_t size = 0xc10;
  constexpr static std::size_t addrs = 0xb241550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"SetNativeRenderPassAttachmentList", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::ClearFlag>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.ExecuteNativeRenderPass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)(::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Rendering::Universal::ScriptableRenderPass*, ::UnityEngine::Rendering::Universal::UniversalCameraData*, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::ExecuteNativeRenderPass)> {
  constexpr static std::size_t size = 0xb4c;
  constexpr static std::size_t addrs = 0xb2422b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"ExecuteNativeRenderPass", {}, {::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::RenderingData>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.SetupInputAttachmentIndices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)(::UnityEngine::Rendering::Universal::ScriptableRenderPass*)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::SetupInputAttachmentIndices)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0xb241200;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"SetupInputAttachmentIndices", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.SetupTransientInputAttachments
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)(int32_t)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::SetupTransientInputAttachments)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0xb2413e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"SetupTransientInputAttachments", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.GetSubPassAttachmentIndicesCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::UnityEngine::Rendering::Universal::ScriptableRenderPass*)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::GetSubPassAttachmentIndicesCount)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0xb242e04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"GetSubPassAttachmentIndicesCount", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.AreAttachmentIndicesCompatible
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Rendering::Universal::ScriptableRenderPass*, ::UnityEngine::Rendering::Universal::ScriptableRenderPass*)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::AreAttachmentIndicesCompatible)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xb242f78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"AreAttachmentIndicesCompatible", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.GetValidColorAttachmentCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(::ArrayW<::UnityEngine::Rendering::AttachmentDescriptor>)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::GetValidColorAttachmentCount)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0xb2430b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"GetValidColorAttachmentCount", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Rendering::AttachmentDescriptor>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.GetValidInputAttachmentCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Rendering::Universal::ScriptableRenderPass*)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::GetValidInputAttachmentCount)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb243068;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"GetValidInputAttachmentCount", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.FindAttachmentDescriptorIndexInList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, ::UnityEngine::Rendering::AttachmentDescriptor, ::ArrayW<::UnityEngine::Rendering::AttachmentDescriptor>)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::FindAttachmentDescriptorIndexInList)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0xb242160;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"FindAttachmentDescriptorIndexInList", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::AttachmentDescriptor>(), ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::AttachmentDescriptor>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.FindAttachmentDescriptorIndexInList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Rendering::RenderTargetIdentifier, ::ArrayW<::UnityEngine::Rendering::AttachmentDescriptor>)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::FindAttachmentDescriptorIndexInList)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0xb241090;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"FindAttachmentDescriptorIndexInList", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::AttachmentDescriptor>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.GetValidPassIndexCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::ArrayW<int32_t>)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::GetValidPassIndexCount)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xb240260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"GetValidPassIndexCount", {}, {::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.GetFirstAllocatedRTHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RTHandle* (*)(::UnityEngine::Rendering::Universal::ScriptableRenderPass*)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::GetFirstAllocatedRTHandle)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xb2405a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"GetFirstAllocatedRTHandle", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.PassHasInputAttachments
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Rendering::Universal::ScriptableRenderPass*)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::PassHasInputAttachments)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb2411c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"PassHasInputAttachments", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.CreateRenderPassHash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Hash128 (*)(int32_t, int32_t, int32_t, int32_t, uint32_t)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::CreateRenderPassHash)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xb2431f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"CreateRenderPassHash", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.CreateRenderPassHash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Hash128 (*)(::GlobalNamespace::ScriptableRenderer_RenderPassDescriptor, uint32_t)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::CreateRenderPassHash)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xb2401d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"CreateRenderPassHash", {}, {::i2c::type_of<::GlobalNamespace::ScriptableRenderer_RenderPassDescriptor>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.GetRenderTextureDescriptor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::Universal::UniversalCameraData*, ::UnityEngine::Rendering::Universal::ScriptableRenderPass*, ::by_ref<::UnityEngine::RenderTextureDescriptor>)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::GetRenderTextureDescriptor)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0xb243224;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"GetRenderTextureDescriptor", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(), ::i2c::type_of<::by_ref<::UnityEngine::RenderTextureDescriptor>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.InitializeRenderPassDescriptor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ScriptableRenderer_RenderPassDescriptor (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)(::UnityEngine::Rendering::Universal::UniversalCameraData*, ::UnityEngine::Rendering::Universal::ScriptableRenderPass*)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::InitializeRenderPassDescriptor)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xb2400c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"InitializeRenderPassDescriptor", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.SupportedCameraStackingTypes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)()>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::SupportedCameraStackingTypes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb243490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                    {::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.SupportsCameraStackingType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)(::UnityEngine::Rendering::Universal::CameraRenderType)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::SupportsCameraStackingType)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb243498;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"SupportsCameraStackingType", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::CameraRenderType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.SupportsMotionVectors
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)()>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::SupportsMotionVectors)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb2434c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                    {::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.SupportsCameraOpaque
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)()>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::SupportsCameraOpaque)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb2434c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                    {::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.SupportsCameraNormals
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)()>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::SupportsCameraNormals)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb2434d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                    {::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.get_profilingExecute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::ProfilingSampler* (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)()>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::get_profilingExecute)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb2434d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"get_profilingExecute", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.set_profilingExecute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)(::UnityEngine::Rendering::ProfilingSampler*)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::set_profilingExecute)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb2434e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"set_profilingExecute", {}, {::i2c::type_of<::UnityEngine::Rendering::ProfilingSampler*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.get_DebugHandler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Universal::DebugHandler* (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)()>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::get_DebugHandler)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb2434e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"get_DebugHandler", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.SetCameraMatrices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::by_ref<::UnityEngine::Rendering::Universal::CameraData>, bool)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::SetCameraMatrices)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0xb2434f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"SetCameraMatrices", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::CameraData>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.SetCameraMatrices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::Universal::UniversalCameraData*, bool)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::SetCameraMatrices)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xb243a94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"SetCameraMatrices", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.SetCameraMatrices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::RasterCommandBuffer*, ::UnityEngine::Rendering::Universal::UniversalCameraData*, bool, bool)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::SetCameraMatrices)> {
  constexpr static std::size_t size = 0x490;
  constexpr static std::size_t addrs = 0xb243604;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"SetCameraMatrices", {}, {::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.SetPerCameraShaderVariables
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)(::UnityEngine::Rendering::RasterCommandBuffer*, ::UnityEngine::Rendering::Universal::UniversalCameraData*)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::SetPerCameraShaderVariables)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb243b9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"SetPerCameraShaderVariables", {}, {::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.SetPerCameraShaderVariables
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)(::UnityEngine::Rendering::RasterCommandBuffer*, ::UnityEngine::Rendering::Universal::UniversalCameraData*, ::UnityEngine::Vector2Int, bool)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::SetPerCameraShaderVariables)> {
  constexpr static std::size_t size = 0x714;
  constexpr static std::size_t addrs = 0xb243bf4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"SetPerCameraShaderVariables", {}, {::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<::UnityEngine::Vector2Int>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.SetPerCameraBillboardProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)(::UnityEngine::Rendering::RasterCommandBuffer*, ::UnityEngine::Rendering::Universal::UniversalCameraData*)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::SetPerCameraBillboardProperties)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0xb244308;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"SetPerCameraBillboardProperties", {}, {::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.CalculateBillboardProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Matrix4x4>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<float_t>)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::CalculateBillboardProperties)> {
  constexpr static std::size_t size = 0x3ac;
  constexpr static std::size_t addrs = 0xb2444c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"CalculateBillboardProperties", {}, {::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.SetPerCameraClippingPlaneProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)(::UnityEngine::Rendering::RasterCommandBuffer*, ::UnityEngine::Rendering::Universal::UniversalCameraData*)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::SetPerCameraClippingPlaneProperties)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xb244870;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"SetPerCameraClippingPlaneProperties", {}, {::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.SetPerCameraClippingPlaneProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)(::UnityEngine::Rendering::RasterCommandBuffer*, ::by_ref<::UnityEngine::Rendering::Universal::UniversalCameraData*>, bool)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::SetPerCameraClippingPlaneProperties)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0xb2448b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"SetPerCameraClippingPlaneProperties", {}, {::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::UniversalCameraData*>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.SetShaderTimeValues
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::IBaseCommandBuffer*, float_t, float_t, float_t)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::SetShaderTimeValues)> {
  constexpr static std::size_t size = 0x480;
  constexpr static std::size_t addrs = 0xb244a84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"SetShaderTimeValues", {}, {::i2c::type_of<::UnityEngine::Rendering::IBaseCommandBuffer*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.get_cameraColorTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderTargetIdentifier (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)()>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::get_cameraColorTarget)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xb244f04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"get_cameraColorTarget", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.get_cameraColorTargetHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RTHandle* (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)()>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::get_cameraColorTargetHandle)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xb23ef88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"get_cameraColorTargetHandle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.GetCameraColorFrontBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RTHandle* (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)(::UnityEngine::Rendering::CommandBuffer*)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::GetCameraColorFrontBuffer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb244f50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                    {::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.GetCameraColorBackBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RTHandle* (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)(::UnityEngine::Rendering::CommandBuffer*)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::GetCameraColorBackBuffer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb244f58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                    {::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.get_cameraDepthTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RenderTargetIdentifier (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)()>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::get_cameraDepthTarget)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xb244f60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"get_cameraDepthTarget", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.get_cameraDepthTargetHandle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::RTHandle* (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)()>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::get_cameraDepthTargetHandle)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xb24340c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"get_cameraDepthTargetHandle", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.get_rendererFeatures
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererFeature>>* (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)()>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::get_rendererFeatures)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb244fac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"get_rendererFeatures", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.get_activeRenderPassQueue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>* (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)()>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::get_activeRenderPassQueue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb244fb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"get_activeRenderPassQueue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.get_supportedRenderingFeatures
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderingFeatures* (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)()>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::get_supportedRenderingFeatures)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb244fbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"get_supportedRenderingFeatures", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.set_supportedRenderingFeatures
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)(::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderingFeatures*)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::set_supportedRenderingFeatures)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb244fc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"set_supportedRenderingFeatures", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderingFeatures*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.get_unsupportedGraphicsDeviceTypes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Rendering::GraphicsDeviceType> (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)()>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::get_unsupportedGraphicsDeviceTypes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb244fcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"get_unsupportedGraphicsDeviceTypes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.set_unsupportedGraphicsDeviceTypes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)(::ArrayW<::UnityEngine::Rendering::GraphicsDeviceType>)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::set_unsupportedGraphicsDeviceTypes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb244fd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"set_unsupportedGraphicsDeviceTypes", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Rendering::GraphicsDeviceType>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.get_frameData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::ContextContainer* (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)()>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::get_frameData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb244fdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"get_frameData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.get_useDepthPriming
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)()>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::get_useDepthPriming)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb244fe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"get_useDepthPriming", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.set_useDepthPriming
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)(bool)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::set_useDepthPriming)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb244fec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"set_useDepthPriming", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.get_stripShadowsOffVariants
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)()>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::get_stripShadowsOffVariants)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb244ff4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"get_stripShadowsOffVariants", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.set_stripShadowsOffVariants
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)(bool)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::set_stripShadowsOffVariants)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb244ffc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"set_stripShadowsOffVariants", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.get_stripAdditionalLightOffVariants
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)()>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::get_stripAdditionalLightOffVariants)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb245004;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"get_stripAdditionalLightOffVariants", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.set_stripAdditionalLightOffVariants
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)(bool)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::set_stripAdditionalLightOffVariants)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb24500c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"set_stripAdditionalLightOffVariants", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)(::UnityEngine::Rendering::Universal::ScriptableRendererData*)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::_ctor)> {
  constexpr static std::size_t size = 0x934;
  constexpr static std::size_t addrs = 0xb245014;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::ScriptableRendererData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)()>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::Dispose)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0xb245bd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)(bool)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::Dispose)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb245dcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                    {::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.ReleaseRenderTargets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)()>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::ReleaseRenderTargets)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb245de0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                    {::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.ConfigureCameraTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)(::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::ConfigureCameraTarget)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xb245de4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"ConfigureCameraTarget", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.ConfigureCameraTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)(::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::RTHandle*)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::ConfigureCameraTarget)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xb245e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"ConfigureCameraTarget", {}, {::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.ConfigureCameraTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)(::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::RTHandle*)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::ConfigureCameraTarget)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xb245e64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"ConfigureCameraTarget", {}, {::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.ConfigureCameraColorTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)(::UnityEngine::Rendering::RTHandle*)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::ConfigureCameraColorTarget)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb245eac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"ConfigureCameraColorTarget", {}, {::i2c::type_of<::UnityEngine::Rendering::RTHandle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.Setup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)(::UnityEngine::Rendering::ScriptableRenderContext, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::Setup)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                    {::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.SetupLights
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)(::UnityEngine::Rendering::ScriptableRenderContext, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::SetupLights)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb245ebc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                    {::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.SetupCullingParameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)(::by_ref<::UnityEngine::Rendering::ScriptableCullingParameters>, ::by_ref<::UnityEngine::Rendering::Universal::CameraData>)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::SetupCullingParameters)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb245ec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                    {::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.FinishRendering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)(::UnityEngine::Rendering::CommandBuffer*)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::FinishRendering)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb245ec4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                    {::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.OnBeginRenderGraphFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)()>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::OnBeginRenderGraphFrame)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb245ec8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                    {::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.OnRecordRenderGraph
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::ScriptableRenderContext)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::OnRecordRenderGraph)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb245ecc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                    {::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.OnEndRenderGraphFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)()>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::OnEndRenderGraphFrame)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb245ed0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                    {::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(), 19}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.InitRenderGraphFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::InitRenderGraphFrame)> {
  constexpr static std::size_t size = 0x384;
  constexpr static std::size_t addrs = 0xb245ed4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"InitRenderGraphFrame", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.ProcessVFXCameraCommand
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::ProcessVFXCameraCommand)> {
  constexpr static std::size_t size = 0x4c0;
  constexpr static std::size_t addrs = 0xb246258;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"ProcessVFXCameraCommand", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.SetupRenderGraphCameraProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, bool)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::SetupRenderGraphCameraProperties)> {
  constexpr static std::size_t size = 0x400;
  constexpr static std::size_t addrs = 0xb246718;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"SetupRenderGraphCameraProperties", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.DrawRenderGraphGizmos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::ContextContainer*, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle, ::UnityEngine::Rendering::GizmoSubset)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::DrawRenderGraphGizmos)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb246b18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"DrawRenderGraphGizmos", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::ContextContainer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<::UnityEngine::Rendering::GizmoSubset>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.DrawRenderGraphWireOverlay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::ContextContainer*, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::DrawRenderGraphWireOverlay)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb246b1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"DrawRenderGraphWireOverlay", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::ContextContainer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.BeginRenderGraphXRRendering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::BeginRenderGraphXRRendering)> {
  constexpr static std::size_t size = 0x498;
  constexpr static std::size_t addrs = 0xb246b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"BeginRenderGraphXRRendering", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.EndRenderGraphXRRendering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::EndRenderGraphXRRendering)> {
  constexpr static std::size_t size = 0x3d4;
  constexpr static std::size_t addrs = 0xb246fb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"EndRenderGraphXRRendering", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.SetEditorTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::SetEditorTarget)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0xb24738c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"SetEditorTarget", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.RecordRenderGraph
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::ScriptableRenderContext)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::RecordRenderGraph)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0xb2476fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"RecordRenderGraph", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.FinishRenderGraphRendering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)(::UnityEngine::Rendering::CommandBuffer*)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::FinishRenderGraphRendering)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xb247b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"FinishRenderGraphRendering", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.OnFinishRenderGraphRendering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)(::UnityEngine::Rendering::CommandBuffer*)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::OnFinishRenderGraphRendering)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb247dc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                    {::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(), 20}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.RecordCustomRenderGraphPassesInEventRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::Universal::RenderPassEvent, ::UnityEngine::Rendering::Universal::RenderPassEvent)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::RecordCustomRenderGraphPassesInEventRange)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0xb247dcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"RecordCustomRenderGraphPassesInEventRange", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderPassEvent>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderPassEvent>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.CalculateSplitEventRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)(::UnityEngine::Rendering::Universal::RenderPassEvent, ::UnityEngine::Rendering::Universal::RenderPassEvent, ::by_ref<::UnityEngine::Rendering::Universal::RenderPassEvent>, ::by_ref<::UnityEngine::Rendering::Universal::RenderPassEvent>, ::by_ref<::UnityEngine::Rendering::Universal::RenderPassEvent>)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::CalculateSplitEventRange)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0xb247f48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"CalculateSplitEventRange", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::RenderPassEvent>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderPassEvent>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::RenderPassEvent>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::RenderPassEvent>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::RenderPassEvent>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.RecordCustomRenderGraphPasses
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::Universal::RenderPassEvent, ::UnityEngine::Rendering::Universal::RenderPassEvent)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::RecordCustomRenderGraphPasses)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xb248064;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"RecordCustomRenderGraphPasses", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderPassEvent>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderPassEvent>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.RecordCustomRenderGraphPasses
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, ::UnityEngine::Rendering::Universal::RenderPassEvent)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::RecordCustomRenderGraphPasses)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb2480ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"RecordCustomRenderGraphPasses", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderPassEvent>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.SetPerCameraProperties
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)(::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Rendering::Universal::UniversalCameraData*, ::UnityEngine::Camera*, ::UnityEngine::Rendering::CommandBuffer*)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::SetPerCameraProperties)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0xb2480f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"SetPerCameraProperties", {}, {::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.Execute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)(::UnityEngine::Rendering::ScriptableRenderContext, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::Execute)> {
  constexpr static std::size_t size = 0x12a0;
  constexpr static std::size_t addrs = 0xb248350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"Execute", {}, {::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::RenderingData>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.EnqueuePass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)(::UnityEngine::Rendering::Universal::ScriptableRenderPass*)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::EnqueuePass)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xb24a9a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"EnqueuePass", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.GetCameraClearFlag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::ClearFlag (*)(::by_ref<::UnityEngine::Rendering::Universal::CameraData>)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::GetCameraClearFlag)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xb24aa60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"GetCameraClearFlag", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::CameraData>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.GetCameraClearFlag
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::ClearFlag (*)(::UnityEngine::Rendering::Universal::UniversalCameraData*)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::GetCameraClearFlag)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0xb24aac8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"GetCameraClearFlag", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.OnPreCullRenderPasses
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)(::by_ref<::UnityEngine::Rendering::Universal::CameraData>)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::OnPreCullRenderPasses)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xb24ac50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"OnPreCullRenderPasses", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::CameraData>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.AddRenderPasses
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)(::by_ref<::UnityEngine::Rendering::Universal::RenderingData>)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::AddRenderPasses)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0xb24ad14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"AddRenderPasses", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::RenderingData>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.SetupRenderPasses
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)(::by_ref<::UnityEngine::Rendering::Universal::RenderingData>)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::SetupRenderPasses)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xb2495f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"SetupRenderPasses", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::RenderingData>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.ClearRenderingState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::IBaseCommandBuffer*)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::ClearRenderingState)> {
  constexpr static std::size_t size = 0xa50;
  constexpr static std::size_t addrs = 0xb249968;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"ClearRenderingState", {}, {::i2c::type_of<::UnityEngine::Rendering::IBaseCommandBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)(::UnityEngine::Rendering::Universal::CameraRenderType)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::Clear)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0xb245948;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"Clear", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::CameraRenderType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.ExecuteBlock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)(int32_t, ::by_ref<::GlobalNamespace::ScriptableRenderer_RenderBlocks>, ::UnityEngine::Rendering::ScriptableRenderContext, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>, bool)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::ExecuteBlock)> {
  constexpr static std::size_t size = 0x1d0;
  constexpr static std::size_t addrs = 0xb24a3b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"ExecuteBlock", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::ScriptableRenderer_RenderBlocks>>(), ::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::RenderingData>>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.IsRenderPassEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)(::UnityEngine::Rendering::Universal::ScriptableRenderPass*)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::IsRenderPassEnabled)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xb24009c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"IsRenderPassEnabled", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.ExecuteRenderPass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)(::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Rendering::Universal::ScriptableRenderPass*, ::UnityEngine::Rendering::Universal::UniversalCameraData*, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::ExecuteRenderPass)> {
  constexpr static std::size_t size = 0x4e4;
  constexpr static std::size_t addrs = 0xb24afdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"ExecuteRenderPass", {}, {::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::RenderingData>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.IsSceneFilteringEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)(::UnityEngine::Camera*)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::IsSceneFilteringEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb24cac8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"IsSceneFilteringEnabled", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.SetRenderPassAttachments
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::Universal::ScriptableRenderPass*, ::UnityEngine::Rendering::Universal::UniversalCameraData*)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::SetRenderPassAttachments)> {
  constexpr static std::size_t size = 0x1608;
  constexpr static std::size_t addrs = 0xb24b4c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"SetRenderPassAttachments", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.BeginXRRendering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::ScriptableRenderContext, ::by_ref<::UnityEngine::Rendering::Universal::CameraData>)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::BeginXRRendering)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0xb24a588;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"BeginXRRendering", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::CameraData>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.EndXRRendering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::ScriptableRenderContext, ::by_ref<::UnityEngine::Rendering::Universal::CameraData>)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::EndXRRendering)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0xb24a748;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"EndXRRendering", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::CameraData>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.SetRenderTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::ClearFlag, ::UnityEngine::Color)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::SetRenderTarget)> {
  constexpr static std::size_t size = 0x488;
  constexpr static std::size_t addrs = 0xb24cad0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"SetRenderTarget", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::ClearFlag>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.SetRenderTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::ClearFlag, ::UnityEngine::Color, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::RenderBufferStoreAction)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::SetRenderTarget)> {
  constexpr static std::size_t size = 0x3a0;
  constexpr static std::size_t addrs = 0xb24d078;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"SetRenderTarget", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::ClearFlag>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferStoreAction>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferStoreAction>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.SetRenderTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::ClearFlag, ::UnityEngine::Color)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::SetRenderTarget)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0xb24d418;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"SetRenderTarget", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferLoadAction>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferStoreAction>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferLoadAction>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferStoreAction>(), ::i2c::type_of<::UnityEngine::Rendering::ClearFlag>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.SetRenderTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::ArrayW<::UnityEngine::Rendering::RTHandle*>, ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::ClearFlag, ::UnityEngine::Color)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::SetRenderTarget)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xb24cf58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"SetRenderTarget", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::RTHandle*>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::ClearFlag>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.SwapColorBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)(::UnityEngine::Rendering::CommandBuffer*)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::SwapColorBuffer)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb24d5d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                    {::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.EnableSwapBufferMSAA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)(bool)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::EnableSwapBufferMSAA)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb24d5d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                    {::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.DrawGizmos
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)(::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*, ::UnityEngine::Rendering::GizmoSubset, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::DrawGizmos)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb24d5dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"DrawGizmos", {}, {::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Rendering::GizmoSubset>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::RenderingData>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.DrawWireOverlay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)(::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Camera*)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::DrawWireOverlay)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xb24d5e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"DrawWireOverlay", {}, {::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.InternalStartRendering
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)(::UnityEngine::Rendering::ScriptableRenderContext, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::InternalStartRendering)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0xb249784;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"InternalStartRendering", {}, {::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::RenderingData>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.InternalFinishRenderingCommon
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)(::UnityEngine::Rendering::CommandBuffer*, bool)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::InternalFinishRenderingCommon)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0xb247bb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"InternalFinishRenderingCommon", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.InternalFinishRenderingExecute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)(::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Rendering::CommandBuffer*, bool)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::InternalFinishRenderingExecute)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xb24a8fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"InternalFinishRenderingExecute", {}, {::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.AdjustAndGetScreenMSAASamples
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*, bool)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::AdjustAndGetScreenMSAASamples)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0xb24d64c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"AdjustAndGetScreenMSAASamples", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.SortStable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>*)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::SortStable)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0xb2479d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"SortStable", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.get_supportsNativeRenderPassRendergraphCompiler
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)()>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::get_supportsNativeRenderPassRendergraphCompiler)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb24d7e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                    {::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer.get_supportsGPUOcclusion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::ScriptableRenderer::*)()>(&::UnityEngine::Rendering::Universal::ScriptableRenderer::get_supportsGPUOcclusion)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb24d7f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                    {::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(), 24}
                ));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_get_m_LastBeginSubpassPassIndex()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastBeginSubpassPassIndex;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_get_m_LastBeginSubpassPassIndex() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_LastBeginSubpassPassIndex;
}
constexpr void UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_set_m_LastBeginSubpassPassIndex(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_LastBeginSubpassPassIndex = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::Hash128,::ArrayW<int32_t>>*& UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_get_m_MergeableRenderPassesMap()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MergeableRenderPassesMap;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::Hash128,::ArrayW<int32_t>>* const& UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_get_m_MergeableRenderPassesMap() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MergeableRenderPassesMap;
}
constexpr void UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_set_m_MergeableRenderPassesMap(::System::Collections::Generic::Dictionary_2<::UnityEngine::Hash128,::ArrayW<int32_t>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MergeableRenderPassesMap = value;
}
constexpr ::ArrayW<::ArrayW<int32_t>>& UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_get_m_MergeableRenderPassesMapArrays()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MergeableRenderPassesMapArrays;
}
constexpr ::ArrayW<::ArrayW<int32_t>> const& UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_get_m_MergeableRenderPassesMapArrays() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_MergeableRenderPassesMapArrays;
}
constexpr void UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_set_m_MergeableRenderPassesMapArrays(::ArrayW<::ArrayW<int32_t>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_MergeableRenderPassesMapArrays = value;
}
constexpr ::ArrayW<::UnityEngine::Hash128>& UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_get_m_PassIndexToPassHash()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PassIndexToPassHash;
}
constexpr ::ArrayW<::UnityEngine::Hash128> const& UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_get_m_PassIndexToPassHash() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_PassIndexToPassHash;
}
constexpr void UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_set_m_PassIndexToPassHash(::ArrayW<::UnityEngine::Hash128>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_PassIndexToPassHash = value;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::Hash128,int32_t>*& UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_get_m_RenderPassesAttachmentCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RenderPassesAttachmentCount;
}
constexpr ::System::Collections::Generic::Dictionary_2<::UnityEngine::Hash128,int32_t>* const& UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_get_m_RenderPassesAttachmentCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RenderPassesAttachmentCount;
}
constexpr void UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_set_m_RenderPassesAttachmentCount(::System::Collections::Generic::Dictionary_2<::UnityEngine::Hash128,int32_t>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RenderPassesAttachmentCount = value;
}
constexpr int32_t& UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_get_m_firstPassIndexOfLastMergeableGroup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_firstPassIndexOfLastMergeableGroup;
}
constexpr int32_t const& UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_get_m_firstPassIndexOfLastMergeableGroup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_firstPassIndexOfLastMergeableGroup;
}
constexpr void UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_set_m_firstPassIndexOfLastMergeableGroup(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_firstPassIndexOfLastMergeableGroup = value;
}
constexpr ::ArrayW<::UnityEngine::Rendering::AttachmentDescriptor>& UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_get_m_ActiveColorAttachmentDescriptors()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ActiveColorAttachmentDescriptors;
}
constexpr ::ArrayW<::UnityEngine::Rendering::AttachmentDescriptor> const& UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_get_m_ActiveColorAttachmentDescriptors() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ActiveColorAttachmentDescriptors;
}
constexpr void UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_set_m_ActiveColorAttachmentDescriptors(::ArrayW<::UnityEngine::Rendering::AttachmentDescriptor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ActiveColorAttachmentDescriptors = value;
}
constexpr ::UnityEngine::Rendering::AttachmentDescriptor& UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_get_m_ActiveDepthAttachmentDescriptor()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ActiveDepthAttachmentDescriptor;
}
constexpr ::UnityEngine::Rendering::AttachmentDescriptor const& UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_get_m_ActiveDepthAttachmentDescriptor() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ActiveDepthAttachmentDescriptor;
}
constexpr void UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_set_m_ActiveDepthAttachmentDescriptor(::UnityEngine::Rendering::AttachmentDescriptor  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ActiveDepthAttachmentDescriptor = value;
}
constexpr ::ArrayW<bool>& UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_get_m_IsActiveColorAttachmentTransient()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IsActiveColorAttachmentTransient;
}
constexpr ::ArrayW<bool> const& UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_get_m_IsActiveColorAttachmentTransient() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IsActiveColorAttachmentTransient;
}
constexpr void UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_set_m_IsActiveColorAttachmentTransient(::ArrayW<bool>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_IsActiveColorAttachmentTransient = value;
}
constexpr ::ArrayW<::UnityEngine::Rendering::RenderBufferStoreAction>& UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_get_m_FinalColorStoreAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FinalColorStoreAction;
}
constexpr ::ArrayW<::UnityEngine::Rendering::RenderBufferStoreAction> const& UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_get_m_FinalColorStoreAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FinalColorStoreAction;
}
constexpr void UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_set_m_FinalColorStoreAction(::ArrayW<::UnityEngine::Rendering::RenderBufferStoreAction>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_FinalColorStoreAction = value;
}
constexpr ::UnityEngine::Rendering::RenderBufferStoreAction& UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_get_m_FinalDepthStoreAction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FinalDepthStoreAction;
}
constexpr ::UnityEngine::Rendering::RenderBufferStoreAction const& UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_get_m_FinalDepthStoreAction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FinalDepthStoreAction;
}
constexpr void UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_set_m_FinalDepthStoreAction(::UnityEngine::Rendering::RenderBufferStoreAction  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_FinalDepthStoreAction = value;
}
constexpr ::UnityEngine::Rendering::ProfilingSampler*& UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_get__profilingExecute_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____profilingExecute_k__BackingField;
}
constexpr ::UnityEngine::Rendering::ProfilingSampler* const& UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_get__profilingExecute_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____profilingExecute_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_set__profilingExecute_k__BackingField(::UnityEngine::Rendering::ProfilingSampler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____profilingExecute_k__BackingField = value;
}
constexpr bool& UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_get_hasReleasedRTs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasReleasedRTs;
}
constexpr bool const& UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_get_hasReleasedRTs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hasReleasedRTs;
}
constexpr void UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_set_hasReleasedRTs(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hasReleasedRTs = value;
}
constexpr ::UnityEngine::Rendering::Universal::DebugHandler*& UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_get__DebugHandler_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DebugHandler_k__BackingField;
}
constexpr ::UnityEngine::Rendering::Universal::DebugHandler* const& UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_get__DebugHandler_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DebugHandler_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_set__DebugHandler_k__BackingField(::UnityEngine::Rendering::Universal::DebugHandler*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DebugHandler_k__BackingField = value;
}
constexpr ::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderingFeatures*& UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_get__supportedRenderingFeatures_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____supportedRenderingFeatures_k__BackingField;
}
constexpr ::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderingFeatures* const& UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_get__supportedRenderingFeatures_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____supportedRenderingFeatures_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_set__supportedRenderingFeatures_k__BackingField(::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderingFeatures*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____supportedRenderingFeatures_k__BackingField = value;
}
constexpr ::ArrayW<::UnityEngine::Rendering::GraphicsDeviceType>& UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_get__unsupportedGraphicsDeviceTypes_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____unsupportedGraphicsDeviceTypes_k__BackingField;
}
constexpr ::ArrayW<::UnityEngine::Rendering::GraphicsDeviceType> const& UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_get__unsupportedGraphicsDeviceTypes_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____unsupportedGraphicsDeviceTypes_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_set__unsupportedGraphicsDeviceTypes_k__BackingField(::ArrayW<::UnityEngine::Rendering::GraphicsDeviceType>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____unsupportedGraphicsDeviceTypes_k__BackingField = value;
}
constexpr ::UnityEngine::Rendering::Universal::StoreActionsOptimization& UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_get_m_StoreActionsOptimizationSetting()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_StoreActionsOptimizationSetting;
}
constexpr ::UnityEngine::Rendering::Universal::StoreActionsOptimization const& UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_get_m_StoreActionsOptimizationSetting() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_StoreActionsOptimizationSetting;
}
constexpr void UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_set_m_StoreActionsOptimizationSetting(::UnityEngine::Rendering::Universal::StoreActionsOptimization  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_StoreActionsOptimizationSetting = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>*& UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_get_m_ActiveRenderPassQueue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ActiveRenderPassQueue;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>* const& UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_get_m_ActiveRenderPassQueue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_ActiveRenderPassQueue;
}
constexpr void UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_set_m_ActiveRenderPassQueue(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_ActiveRenderPassQueue = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererFeature>>*& UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_get_m_RendererFeatures()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RendererFeatures;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererFeature>>* const& UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_get_m_RendererFeatures() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_RendererFeatures;
}
constexpr void UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_set_m_RendererFeatures(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererFeature>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_RendererFeatures = value;
}
constexpr ::UnityEngine::Rendering::RTHandle*& UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_get_m_CameraColorTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CameraColorTarget;
}
constexpr ::UnityEngine::Rendering::RTHandle* const& UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_get_m_CameraColorTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CameraColorTarget;
}
constexpr void UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_set_m_CameraColorTarget(::UnityEngine::Rendering::RTHandle*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CameraColorTarget = value;
}
constexpr ::UnityEngine::Rendering::RTHandle*& UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_get_m_CameraDepthTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CameraDepthTarget;
}
constexpr ::UnityEngine::Rendering::RTHandle* const& UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_get_m_CameraDepthTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CameraDepthTarget;
}
constexpr void UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_set_m_CameraDepthTarget(::UnityEngine::Rendering::RTHandle*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CameraDepthTarget = value;
}
constexpr ::UnityEngine::Rendering::RTHandle*& UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_get_m_CameraResolveTarget()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CameraResolveTarget;
}
constexpr ::UnityEngine::Rendering::RTHandle* const& UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_get_m_CameraResolveTarget() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_CameraResolveTarget;
}
constexpr void UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_set_m_CameraResolveTarget(::UnityEngine::Rendering::RTHandle*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_CameraResolveTarget = value;
}
constexpr bool& UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_get_m_FirstTimeCameraColorTargetIsBound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FirstTimeCameraColorTargetIsBound;
}
constexpr bool const& UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_get_m_FirstTimeCameraColorTargetIsBound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FirstTimeCameraColorTargetIsBound;
}
constexpr void UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_set_m_FirstTimeCameraColorTargetIsBound(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_FirstTimeCameraColorTargetIsBound = value;
}
constexpr bool& UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_get_m_FirstTimeCameraDepthTargetIsBound()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FirstTimeCameraDepthTargetIsBound;
}
constexpr bool const& UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_get_m_FirstTimeCameraDepthTargetIsBound() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_FirstTimeCameraDepthTargetIsBound;
}
constexpr void UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_set_m_FirstTimeCameraDepthTargetIsBound(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_FirstTimeCameraDepthTargetIsBound = value;
}
constexpr bool& UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_get_m_IsPipelineExecuting()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IsPipelineExecuting;
}
constexpr bool const& UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_get_m_IsPipelineExecuting() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_IsPipelineExecuting;
}
constexpr void UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_set_m_IsPipelineExecuting(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_IsPipelineExecuting = value;
}
constexpr bool& UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_get_disableNativeRenderPassInFeatures()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableNativeRenderPassInFeatures;
}
constexpr bool const& UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_get_disableNativeRenderPassInFeatures() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___disableNativeRenderPassInFeatures;
}
constexpr void UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_set_disableNativeRenderPassInFeatures(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___disableNativeRenderPassInFeatures = value;
}
constexpr bool& UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_get_useRenderPassEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useRenderPassEnabled;
}
constexpr bool const& UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_get_useRenderPassEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___useRenderPassEnabled;
}
constexpr void UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_set_useRenderPassEnabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___useRenderPassEnabled = value;
}
constexpr ::UnityEngine::Rendering::ContextContainer*& UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_get_m_frameData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_frameData;
}
constexpr ::UnityEngine::Rendering::ContextContainer* const& UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_get_m_frameData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_frameData;
}
constexpr void UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_set_m_frameData(::UnityEngine::Rendering::ContextContainer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_frameData = value;
}
constexpr bool& UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_get__useDepthPriming_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useDepthPriming_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_get__useDepthPriming_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useDepthPriming_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_set__useDepthPriming_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____useDepthPriming_k__BackingField = value;
}
constexpr bool& UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_get__stripShadowsOffVariants_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stripShadowsOffVariants_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_get__stripShadowsOffVariants_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stripShadowsOffVariants_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_set__stripShadowsOffVariants_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____stripShadowsOffVariants_k__BackingField = value;
}
constexpr bool& UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_get__stripAdditionalLightOffVariants_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stripAdditionalLightOffVariants_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_get__stripAdditionalLightOffVariants_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____stripAdditionalLightOffVariants_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::ScriptableRenderer::__cordl_internal_set__stripAdditionalLightOffVariants_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____stripAdditionalLightOffVariants_k__BackingField = value;
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::setStaticF_current(::UnityEngine::Rendering::Universal::ScriptableRenderer*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Rendering::Universal::ScriptableRenderer*, "current", ::UnityEngine::Rendering::Universal::ScriptableRenderer*>(std::forward<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(value));
}
inline ::UnityEngine::Rendering::Universal::ScriptableRenderer* UnityEngine::Rendering::Universal::ScriptableRenderer::getStaticF_current()  {
return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Universal::ScriptableRenderer*, "current", ::UnityEngine::Rendering::Universal::ScriptableRenderer*>();
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::setStaticF_m_UseOptimizedStoreActions(bool  value)  {
::cordl_internals::setStaticField<bool, "m_UseOptimizedStoreActions", ::UnityEngine::Rendering::Universal::ScriptableRenderer*>(std::forward<bool>(value));
}
inline bool UnityEngine::Rendering::Universal::ScriptableRenderer::getStaticF_m_UseOptimizedStoreActions()  {
return ::cordl_internals::getStaticField<bool, "m_UseOptimizedStoreActions", ::UnityEngine::Rendering::Universal::ScriptableRenderer*>();
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::setStaticF_k_CameraTarget(::UnityEngine::Rendering::RTHandle*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Rendering::RTHandle*, "k_CameraTarget", ::UnityEngine::Rendering::Universal::ScriptableRenderer*>(std::forward<::UnityEngine::Rendering::RTHandle*>(value));
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::Universal::ScriptableRenderer::getStaticF_k_CameraTarget()  {
return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RTHandle*, "k_CameraTarget", ::UnityEngine::Rendering::Universal::ScriptableRenderer*>();
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::setStaticF_m_ActiveColorAttachmentIDs(::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>  value)  {
::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>, "m_ActiveColorAttachmentIDs", ::UnityEngine::Rendering::Universal::ScriptableRenderer*>(std::forward<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>>(value));
}
inline ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier> UnityEngine::Rendering::Universal::ScriptableRenderer::getStaticF_m_ActiveColorAttachmentIDs()  {
return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>, "m_ActiveColorAttachmentIDs", ::UnityEngine::Rendering::Universal::ScriptableRenderer*>();
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::setStaticF_m_ActiveColorAttachments(::ArrayW<::UnityEngine::Rendering::RTHandle*>  value)  {
::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Rendering::RTHandle*>, "m_ActiveColorAttachments", ::UnityEngine::Rendering::Universal::ScriptableRenderer*>(std::forward<::ArrayW<::UnityEngine::Rendering::RTHandle*>>(value));
}
inline ::ArrayW<::UnityEngine::Rendering::RTHandle*> UnityEngine::Rendering::Universal::ScriptableRenderer::getStaticF_m_ActiveColorAttachments()  {
return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Rendering::RTHandle*>, "m_ActiveColorAttachments", ::UnityEngine::Rendering::Universal::ScriptableRenderer*>();
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::setStaticF_m_ActiveDepthAttachment(::UnityEngine::Rendering::RTHandle*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Rendering::RTHandle*, "m_ActiveDepthAttachment", ::UnityEngine::Rendering::Universal::ScriptableRenderer*>(std::forward<::UnityEngine::Rendering::RTHandle*>(value));
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::Universal::ScriptableRenderer::getStaticF_m_ActiveDepthAttachment()  {
return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RTHandle*, "m_ActiveDepthAttachment", ::UnityEngine::Rendering::Universal::ScriptableRenderer*>();
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::setStaticF_m_ActiveColorStoreActions(::ArrayW<::UnityEngine::Rendering::RenderBufferStoreAction>  value)  {
::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Rendering::RenderBufferStoreAction>, "m_ActiveColorStoreActions", ::UnityEngine::Rendering::Universal::ScriptableRenderer*>(std::forward<::ArrayW<::UnityEngine::Rendering::RenderBufferStoreAction>>(value));
}
inline ::ArrayW<::UnityEngine::Rendering::RenderBufferStoreAction> UnityEngine::Rendering::Universal::ScriptableRenderer::getStaticF_m_ActiveColorStoreActions()  {
return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Rendering::RenderBufferStoreAction>, "m_ActiveColorStoreActions", ::UnityEngine::Rendering::Universal::ScriptableRenderer*>();
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::setStaticF_m_ActiveDepthStoreAction(::UnityEngine::Rendering::RenderBufferStoreAction  value)  {
::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderBufferStoreAction, "m_ActiveDepthStoreAction", ::UnityEngine::Rendering::Universal::ScriptableRenderer*>(std::forward<::UnityEngine::Rendering::RenderBufferStoreAction>(value));
}
inline ::UnityEngine::Rendering::RenderBufferStoreAction UnityEngine::Rendering::Universal::ScriptableRenderer::getStaticF_m_ActiveDepthStoreAction()  {
return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderBufferStoreAction, "m_ActiveDepthStoreAction", ::UnityEngine::Rendering::Universal::ScriptableRenderer*>();
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::setStaticF_m_TrimmedColorAttachmentCopyIDs(::ArrayW<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>>  value)  {
::cordl_internals::setStaticField<::ArrayW<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>>, "m_TrimmedColorAttachmentCopyIDs", ::UnityEngine::Rendering::Universal::ScriptableRenderer*>(std::forward<::ArrayW<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>>>(value));
}
inline ::ArrayW<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>> UnityEngine::Rendering::Universal::ScriptableRenderer::getStaticF_m_TrimmedColorAttachmentCopyIDs()  {
return ::cordl_internals::getStaticField<::ArrayW<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>>, "m_TrimmedColorAttachmentCopyIDs", ::UnityEngine::Rendering::Universal::ScriptableRenderer*>();
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::setStaticF_m_TrimmedColorAttachmentCopies(::ArrayW<::ArrayW<::UnityEngine::Rendering::RTHandle*>>  value)  {
::cordl_internals::setStaticField<::ArrayW<::ArrayW<::UnityEngine::Rendering::RTHandle*>>, "m_TrimmedColorAttachmentCopies", ::UnityEngine::Rendering::Universal::ScriptableRenderer*>(std::forward<::ArrayW<::ArrayW<::UnityEngine::Rendering::RTHandle*>>>(value));
}
inline ::ArrayW<::ArrayW<::UnityEngine::Rendering::RTHandle*>> UnityEngine::Rendering::Universal::ScriptableRenderer::getStaticF_m_TrimmedColorAttachmentCopies()  {
return ::cordl_internals::getStaticField<::ArrayW<::ArrayW<::UnityEngine::Rendering::RTHandle*>>, "m_TrimmedColorAttachmentCopies", ::UnityEngine::Rendering::Universal::ScriptableRenderer*>();
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::setStaticF_s_Planes(::ArrayW<::UnityEngine::Plane>  value)  {
::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Plane>, "s_Planes", ::UnityEngine::Rendering::Universal::ScriptableRenderer*>(std::forward<::ArrayW<::UnityEngine::Plane>>(value));
}
inline ::ArrayW<::UnityEngine::Plane> UnityEngine::Rendering::Universal::ScriptableRenderer::getStaticF_s_Planes()  {
return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Plane>, "s_Planes", ::UnityEngine::Rendering::Universal::ScriptableRenderer*>();
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::setStaticF_s_VectorPlanes(::ArrayW<::UnityEngine::Vector4>  value)  {
::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Vector4>, "s_VectorPlanes", ::UnityEngine::Rendering::Universal::ScriptableRenderer*>(std::forward<::ArrayW<::UnityEngine::Vector4>>(value));
}
inline ::ArrayW<::UnityEngine::Vector4> UnityEngine::Rendering::Universal::ScriptableRenderer::getStaticF_s_VectorPlanes()  {
return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Vector4>, "s_VectorPlanes", ::UnityEngine::Rendering::Universal::ScriptableRenderer*>();
}
inline ::UnityEngine::Rendering::RenderTargetIdentifier UnityEngine::Rendering::Universal::ScriptableRenderer::get_cameraDepth()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"get_cameraDepth", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderTargetIdentifier>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::ResetNativeRenderPassFrameData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"ResetNativeRenderPassFrameData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::SetupNativeRenderPassFrameData(::UnityEngine::Rendering::Universal::UniversalCameraData*  cameraData, bool  isRenderPassEnabled)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"SetupNativeRenderPassFrameData", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cameraData, isRenderPassEnabled);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::UpdateFinalStoreActions(::ArrayW<int32_t>  currentMergeablePasses, ::UnityEngine::Rendering::Universal::UniversalCameraData*  cameraData, bool  isLastMergeableGroup)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"UpdateFinalStoreActions", {}, {::i2c::type_of<::ArrayW<int32_t>>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, currentMergeablePasses, cameraData, isLastMergeableGroup);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::SetNativeRenderPassMRTAttachmentList(::UnityEngine::Rendering::Universal::ScriptableRenderPass*  renderPass, ::UnityEngine::Rendering::Universal::UniversalCameraData*  cameraData, bool  needCustomCameraColorClear, ::UnityEngine::Rendering::ClearFlag  cameraClearFlag)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"SetNativeRenderPassMRTAttachmentList", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Rendering::ClearFlag>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderPass, cameraData, needCustomCameraColorClear, cameraClearFlag);
}
inline bool UnityEngine::Rendering::Universal::ScriptableRenderer::IsDepthOnlyRenderTexture(::UnityEngine::RenderTexture*  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"IsDepthOnlyRenderTexture", {}, {::i2c::type_of<::UnityEngine::RenderTexture*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, t);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::SetNativeRenderPassAttachmentList(::UnityEngine::Rendering::Universal::ScriptableRenderPass*  renderPass, ::UnityEngine::Rendering::Universal::UniversalCameraData*  cameraData, ::UnityEngine::Rendering::RTHandle*  passColorAttachment, ::UnityEngine::Rendering::RTHandle*  passDepthAttachment, ::UnityEngine::Rendering::ClearFlag  finalClearFlag, ::UnityEngine::Color  finalClearColor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"SetNativeRenderPassAttachmentList", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::ClearFlag>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderPass, cameraData, passColorAttachment, passDepthAttachment, finalClearFlag, finalClearColor);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::ExecuteNativeRenderPass(::UnityEngine::Rendering::ScriptableRenderContext  context, ::UnityEngine::Rendering::Universal::ScriptableRenderPass*  renderPass, ::UnityEngine::Rendering::Universal::UniversalCameraData*  cameraData, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>  renderingData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"ExecuteNativeRenderPass", {}, {::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::RenderingData>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, renderPass, cameraData, renderingData);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::SetupInputAttachmentIndices(::UnityEngine::Rendering::Universal::ScriptableRenderPass*  pass)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"SetupInputAttachmentIndices", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pass);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::SetupTransientInputAttachments(int32_t  attachmentCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"SetupTransientInputAttachments", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, attachmentCount);
}
inline uint32_t UnityEngine::Rendering::Universal::ScriptableRenderer::GetSubPassAttachmentIndicesCount(::UnityEngine::Rendering::Universal::ScriptableRenderPass*  pass)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"GetSubPassAttachmentIndicesCount", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, pass);
}
inline bool UnityEngine::Rendering::Universal::ScriptableRenderer::AreAttachmentIndicesCompatible(::UnityEngine::Rendering::Universal::ScriptableRenderPass*  lastSubPass, ::UnityEngine::Rendering::Universal::ScriptableRenderPass*  currentSubPass)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"AreAttachmentIndicesCompatible", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lastSubPass, currentSubPass);
}
inline uint32_t UnityEngine::Rendering::Universal::ScriptableRenderer::GetValidColorAttachmentCount(::ArrayW<::UnityEngine::Rendering::AttachmentDescriptor>  colorAttachments)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"GetValidColorAttachmentCount", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Rendering::AttachmentDescriptor>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, colorAttachments);
}
inline int32_t UnityEngine::Rendering::Universal::ScriptableRenderer::GetValidInputAttachmentCount(::UnityEngine::Rendering::Universal::ScriptableRenderPass*  renderPass)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"GetValidInputAttachmentCount", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, renderPass);
}
inline int32_t UnityEngine::Rendering::Universal::ScriptableRenderer::FindAttachmentDescriptorIndexInList(int32_t  attachmentIdx, ::UnityEngine::Rendering::AttachmentDescriptor  attachmentDescriptor, ::ArrayW<::UnityEngine::Rendering::AttachmentDescriptor>  attachmentDescriptors)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"FindAttachmentDescriptorIndexInList", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::AttachmentDescriptor>(), ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::AttachmentDescriptor>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, attachmentIdx, attachmentDescriptor, attachmentDescriptors);
}
inline int32_t UnityEngine::Rendering::Universal::ScriptableRenderer::FindAttachmentDescriptorIndexInList(::UnityEngine::Rendering::RenderTargetIdentifier  target, ::ArrayW<::UnityEngine::Rendering::AttachmentDescriptor>  attachmentDescriptors)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"FindAttachmentDescriptorIndexInList", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::AttachmentDescriptor>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, target, attachmentDescriptors);
}
inline int32_t UnityEngine::Rendering::Universal::ScriptableRenderer::GetValidPassIndexCount(::ArrayW<int32_t>  array)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"GetValidPassIndexCount", {}, {::i2c::type_of<::ArrayW<int32_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, array);
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::Universal::ScriptableRenderer::GetFirstAllocatedRTHandle(::UnityEngine::Rendering::Universal::ScriptableRenderPass*  pass)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"GetFirstAllocatedRTHandle", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*>(nullptr, ___internal_method, pass);
}
inline bool UnityEngine::Rendering::Universal::ScriptableRenderer::PassHasInputAttachments(::UnityEngine::Rendering::Universal::ScriptableRenderPass*  renderPass)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"PassHasInputAttachments", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, renderPass);
}
inline ::UnityEngine::Hash128 UnityEngine::Rendering::Universal::ScriptableRenderer::CreateRenderPassHash(int32_t  width, int32_t  height, int32_t  depthID, int32_t  sample, uint32_t  hashIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"CreateRenderPassHash", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Hash128>(nullptr, ___internal_method, width, height, depthID, sample, hashIndex);
}
inline ::UnityEngine::Hash128 UnityEngine::Rendering::Universal::ScriptableRenderer::CreateRenderPassHash(::GlobalNamespace::ScriptableRenderer_RenderPassDescriptor  desc, uint32_t  hashIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"CreateRenderPassHash", {}, {::i2c::type_of<::GlobalNamespace::ScriptableRenderer_RenderPassDescriptor>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Hash128>(nullptr, ___internal_method, desc, hashIndex);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::GetRenderTextureDescriptor(::UnityEngine::Rendering::Universal::UniversalCameraData*  cameraData, ::UnityEngine::Rendering::Universal::ScriptableRenderPass*  renderPass, ::by_ref<::UnityEngine::RenderTextureDescriptor>  targetRT)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"GetRenderTextureDescriptor", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(), ::i2c::type_of<::by_ref<::UnityEngine::RenderTextureDescriptor>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cameraData, renderPass, targetRT);
}
inline ::GlobalNamespace::ScriptableRenderer_RenderPassDescriptor UnityEngine::Rendering::Universal::ScriptableRenderer::InitializeRenderPassDescriptor(::UnityEngine::Rendering::Universal::UniversalCameraData*  cameraData, ::UnityEngine::Rendering::Universal::ScriptableRenderPass*  renderPass)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"InitializeRenderPassDescriptor", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ScriptableRenderer_RenderPassDescriptor>(this, ___internal_method, cameraData, renderPass);
}
inline int32_t UnityEngine::Rendering::Universal::ScriptableRenderer::SupportedCameraStackingTypes()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::ScriptableRenderer::SupportsCameraStackingType(::UnityEngine::Rendering::Universal::CameraRenderType  cameraRenderType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"SupportsCameraStackingType", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::CameraRenderType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, cameraRenderType);
}
inline bool UnityEngine::Rendering::Universal::ScriptableRenderer::SupportsMotionVectors()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::ScriptableRenderer::SupportsCameraOpaque()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::ScriptableRenderer::SupportsCameraNormals()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::ProfilingSampler* UnityEngine::Rendering::Universal::ScriptableRenderer::get_profilingExecute()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"get_profilingExecute", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ProfilingSampler*>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::set_profilingExecute(::UnityEngine::Rendering::ProfilingSampler*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"set_profilingExecute", {}, {::i2c::type_of<::UnityEngine::Rendering::ProfilingSampler*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::Universal::DebugHandler* UnityEngine::Rendering::Universal::ScriptableRenderer::get_DebugHandler()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"get_DebugHandler", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::DebugHandler*>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::SetCameraMatrices(::UnityEngine::Rendering::CommandBuffer*  cmd, ::by_ref<::UnityEngine::Rendering::Universal::CameraData>  cameraData, bool  setInverseMatrices)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"SetCameraMatrices", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::CameraData>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, cameraData, setInverseMatrices);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::SetCameraMatrices(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::Universal::UniversalCameraData*  cameraData, bool  setInverseMatrices)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"SetCameraMatrices", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, cameraData, setInverseMatrices);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::SetCameraMatrices(::UnityEngine::Rendering::RasterCommandBuffer*  cmd, ::UnityEngine::Rendering::Universal::UniversalCameraData*  cameraData, bool  setInverseMatrices, bool  isTargetFlipped)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"SetCameraMatrices", {}, {::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, cameraData, setInverseMatrices, isTargetFlipped);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::SetPerCameraShaderVariables(::UnityEngine::Rendering::RasterCommandBuffer*  cmd, ::UnityEngine::Rendering::Universal::UniversalCameraData*  cameraData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"SetPerCameraShaderVariables", {}, {::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, cameraData);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::SetPerCameraShaderVariables(::UnityEngine::Rendering::RasterCommandBuffer*  cmd, ::UnityEngine::Rendering::Universal::UniversalCameraData*  cameraData, ::UnityEngine::Vector2Int  cameraTargetSizeCopy, bool  isTargetFlipped)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"SetPerCameraShaderVariables", {}, {::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<::UnityEngine::Vector2Int>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, cameraData, cameraTargetSizeCopy, isTargetFlipped);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::SetPerCameraBillboardProperties(::UnityEngine::Rendering::RasterCommandBuffer*  cmd, ::UnityEngine::Rendering::Universal::UniversalCameraData*  cameraData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"SetPerCameraBillboardProperties", {}, {::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, cameraData);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::CalculateBillboardProperties(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Matrix4x4>  worldToCameraMatrix, ::by_ref<::UnityEngine::Vector3>  billboardTangent, ::by_ref<::UnityEngine::Vector3>  billboardNormal, ::by_ref<float_t>  cameraXZAngle)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"CalculateBillboardProperties", {}, {::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, worldToCameraMatrix, billboardTangent, billboardNormal, cameraXZAngle);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::SetPerCameraClippingPlaneProperties(::UnityEngine::Rendering::RasterCommandBuffer*  cmd, ::UnityEngine::Rendering::Universal::UniversalCameraData*  cameraData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"SetPerCameraClippingPlaneProperties", {}, {::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, cameraData);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::SetPerCameraClippingPlaneProperties(::UnityEngine::Rendering::RasterCommandBuffer*  cmd, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::Universal::UniversalCameraData*>  cameraData, bool  isTargetFlipped)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"SetPerCameraClippingPlaneProperties", {}, {::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::UniversalCameraData*>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, cameraData, isTargetFlipped);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::SetShaderTimeValues(::UnityEngine::Rendering::IBaseCommandBuffer*  cmd, float_t  time, float_t  deltaTime, float_t  smoothDeltaTime)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"SetShaderTimeValues", {}, {::i2c::type_of<::UnityEngine::Rendering::IBaseCommandBuffer*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, time, deltaTime, smoothDeltaTime);
}
inline ::UnityEngine::Rendering::RenderTargetIdentifier UnityEngine::Rendering::Universal::ScriptableRenderer::get_cameraColorTarget()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"get_cameraColorTarget", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderTargetIdentifier>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::Universal::ScriptableRenderer::get_cameraColorTargetHandle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"get_cameraColorTargetHandle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::Universal::ScriptableRenderer::GetCameraColorFrontBuffer(::UnityEngine::Rendering::CommandBuffer*  cmd)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*>(this, ___internal_method, cmd);
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::Universal::ScriptableRenderer::GetCameraColorBackBuffer(::UnityEngine::Rendering::CommandBuffer*  cmd)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*>(this, ___internal_method, cmd);
}
inline ::UnityEngine::Rendering::RenderTargetIdentifier UnityEngine::Rendering::Universal::ScriptableRenderer::get_cameraDepthTarget()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"get_cameraDepthTarget", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RenderTargetIdentifier>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::RTHandle* UnityEngine::Rendering::Universal::ScriptableRenderer::get_cameraDepthTargetHandle()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"get_cameraDepthTargetHandle", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::RTHandle*>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererFeature>>* UnityEngine::Rendering::Universal::ScriptableRenderer::get_rendererFeatures()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"get_rendererFeatures", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::Universal::ScriptableRendererFeature>>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>* UnityEngine::Rendering::Universal::ScriptableRenderer::get_activeRenderPassQueue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"get_activeRenderPassQueue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>*>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderingFeatures* UnityEngine::Rendering::Universal::ScriptableRenderer::get_supportedRenderingFeatures()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"get_supportedRenderingFeatures", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderingFeatures*>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::set_supportedRenderingFeatures(::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderingFeatures*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"set_supportedRenderingFeatures", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderingFeatures*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::UnityEngine::Rendering::GraphicsDeviceType> UnityEngine::Rendering::Universal::ScriptableRenderer::get_unsupportedGraphicsDeviceTypes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"get_unsupportedGraphicsDeviceTypes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Rendering::GraphicsDeviceType>>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::set_unsupportedGraphicsDeviceTypes(::ArrayW<::UnityEngine::Rendering::GraphicsDeviceType>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"set_unsupportedGraphicsDeviceTypes", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Rendering::GraphicsDeviceType>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::ContextContainer* UnityEngine::Rendering::Universal::ScriptableRenderer::get_frameData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"get_frameData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ContextContainer*>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::ScriptableRenderer::get_useDepthPriming()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"get_useDepthPriming", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::set_useDepthPriming(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"set_useDepthPriming", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::ScriptableRenderer::get_stripShadowsOffVariants()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"get_stripShadowsOffVariants", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::set_stripShadowsOffVariants(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"set_stripShadowsOffVariants", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::ScriptableRenderer::get_stripAdditionalLightOffVariants()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"get_stripAdditionalLightOffVariants", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::set_stripAdditionalLightOffVariants(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"set_stripAdditionalLightOffVariants", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::_ctor(::UnityEngine::Rendering::Universal::ScriptableRendererData*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::ScriptableRendererData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::ReleaseRenderTargets()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::ConfigureCameraTarget(::UnityEngine::Rendering::RenderTargetIdentifier  colorTarget, ::UnityEngine::Rendering::RenderTargetIdentifier  depthTarget)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"ConfigureCameraTarget", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, colorTarget, depthTarget);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::ConfigureCameraTarget(::UnityEngine::Rendering::RTHandle*  colorTarget, ::UnityEngine::Rendering::RTHandle*  depthTarget)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"ConfigureCameraTarget", {}, {::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, colorTarget, depthTarget);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::ConfigureCameraTarget(::UnityEngine::Rendering::RTHandle*  colorTarget, ::UnityEngine::Rendering::RTHandle*  depthTarget, ::UnityEngine::Rendering::RTHandle*  resolveTarget)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"ConfigureCameraTarget", {}, {::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, colorTarget, depthTarget, resolveTarget);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::ConfigureCameraColorTarget(::UnityEngine::Rendering::RTHandle*  colorTarget)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"ConfigureCameraColorTarget", {}, {::i2c::type_of<::UnityEngine::Rendering::RTHandle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, colorTarget);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::Setup(::UnityEngine::Rendering::ScriptableRenderContext  context, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>  renderingData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, renderingData);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::SetupLights(::UnityEngine::Rendering::ScriptableRenderContext  context, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>  renderingData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, renderingData);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::SetupCullingParameters(::by_ref<::UnityEngine::Rendering::ScriptableCullingParameters>  cullingParameters, ::by_ref<::UnityEngine::Rendering::Universal::CameraData>  cameraData)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cullingParameters, cameraData);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::FinishRendering(::UnityEngine::Rendering::CommandBuffer*  cmd)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::OnBeginRenderGraphFrame()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::OnRecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph, ::UnityEngine::Rendering::ScriptableRenderContext  context)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, context);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::OnEndRenderGraphFrame()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(), 19}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::InitRenderGraphFrame(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"InitRenderGraphFrame", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::ProcessVFXCameraCommand(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"ProcessVFXCameraCommand", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::SetupRenderGraphCameraProperties(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph, bool  isTargetBackbuffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"SetupRenderGraphCameraProperties", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, isTargetBackbuffer);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::DrawRenderGraphGizmos(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph, ::UnityEngine::Rendering::ContextContainer*  frameData, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  color, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  depth, ::UnityEngine::Rendering::GizmoSubset  gizmoSubset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"DrawRenderGraphGizmos", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::ContextContainer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>(), ::i2c::type_of<::UnityEngine::Rendering::GizmoSubset>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, frameData, color, depth, gizmoSubset);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::DrawRenderGraphWireOverlay(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph, ::UnityEngine::Rendering::ContextContainer*  frameData, ::UnityEngine::Rendering::RenderGraphModule::TextureHandle  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"DrawRenderGraphWireOverlay", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::ContextContainer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::TextureHandle>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, frameData, color);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::BeginRenderGraphXRRendering(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"BeginRenderGraphXRRendering", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::EndRenderGraphXRRendering(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"EndRenderGraphXRRendering", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::SetEditorTarget(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"SetEditorTarget", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::RecordRenderGraph(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph, ::UnityEngine::Rendering::ScriptableRenderContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"RecordRenderGraph", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, context);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::FinishRenderGraphRendering(::UnityEngine::Rendering::CommandBuffer*  cmd)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"FinishRenderGraphRendering", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::OnFinishRenderGraphRendering(::UnityEngine::Rendering::CommandBuffer*  cmd)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(), 20}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::RecordCustomRenderGraphPassesInEventRange(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph, ::UnityEngine::Rendering::Universal::RenderPassEvent  eventStart, ::UnityEngine::Rendering::Universal::RenderPassEvent  eventEnd)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"RecordCustomRenderGraphPassesInEventRange", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderPassEvent>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderPassEvent>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, eventStart, eventEnd);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::CalculateSplitEventRange(::UnityEngine::Rendering::Universal::RenderPassEvent  startInjectionPoint, ::UnityEngine::Rendering::Universal::RenderPassEvent  targetEvent, ::by_ref<::UnityEngine::Rendering::Universal::RenderPassEvent>  startEvent, ::by_ref<::UnityEngine::Rendering::Universal::RenderPassEvent>  splitEvent, ::by_ref<::UnityEngine::Rendering::Universal::RenderPassEvent>  endEvent)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"CalculateSplitEventRange", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::RenderPassEvent>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderPassEvent>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::RenderPassEvent>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::RenderPassEvent>>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::RenderPassEvent>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, startInjectionPoint, targetEvent, startEvent, splitEvent, endEvent);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::RecordCustomRenderGraphPasses(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph, ::UnityEngine::Rendering::Universal::RenderPassEvent  startInjectionPoint, ::UnityEngine::Rendering::Universal::RenderPassEvent  endInjectionPoint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"RecordCustomRenderGraphPasses", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderPassEvent>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderPassEvent>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, startInjectionPoint, endInjectionPoint);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::RecordCustomRenderGraphPasses(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph, ::UnityEngine::Rendering::Universal::RenderPassEvent  injectionPoint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"RecordCustomRenderGraphPasses", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::RenderPassEvent>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderGraph, injectionPoint);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::SetPerCameraProperties(::UnityEngine::Rendering::ScriptableRenderContext  context, ::UnityEngine::Rendering::Universal::UniversalCameraData*  cameraData, ::UnityEngine::Camera*  camera, ::UnityEngine::Rendering::CommandBuffer*  cmd)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"SetPerCameraProperties", {}, {::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, cameraData, camera, cmd);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::Execute(::UnityEngine::Rendering::ScriptableRenderContext  context, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>  renderingData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"Execute", {}, {::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::RenderingData>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, renderingData);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::EnqueuePass(::UnityEngine::Rendering::Universal::ScriptableRenderPass*  pass)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"EnqueuePass", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pass);
}
inline ::UnityEngine::Rendering::ClearFlag UnityEngine::Rendering::Universal::ScriptableRenderer::GetCameraClearFlag(::by_ref<::UnityEngine::Rendering::Universal::CameraData>  cameraData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"GetCameraClearFlag", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::CameraData>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ClearFlag>(nullptr, ___internal_method, cameraData);
}
inline ::UnityEngine::Rendering::ClearFlag UnityEngine::Rendering::Universal::ScriptableRenderer::GetCameraClearFlag(::UnityEngine::Rendering::Universal::UniversalCameraData*  cameraData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"GetCameraClearFlag", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ClearFlag>(nullptr, ___internal_method, cameraData);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::OnPreCullRenderPasses(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::Universal::CameraData>  cameraData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"OnPreCullRenderPasses", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::CameraData>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cameraData);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::AddRenderPasses(::by_ref<::UnityEngine::Rendering::Universal::RenderingData>  renderingData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"AddRenderPasses", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::RenderingData>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderingData);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::SetupRenderPasses(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>  renderingData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"SetupRenderPasses", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::RenderingData>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderingData);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::ClearRenderingState(::UnityEngine::Rendering::IBaseCommandBuffer*  cmd)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"ClearRenderingState", {}, {::i2c::type_of<::UnityEngine::Rendering::IBaseCommandBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::Clear(::UnityEngine::Rendering::Universal::CameraRenderType  cameraType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"Clear", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::CameraRenderType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cameraType);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::ExecuteBlock(int32_t  blockIndex, /* [IsReadOnly] */ ::by_ref<::GlobalNamespace::ScriptableRenderer_RenderBlocks>  renderBlocks, ::UnityEngine::Rendering::ScriptableRenderContext  context, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>  renderingData, bool  submit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"ExecuteBlock", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::ScriptableRenderer_RenderBlocks>>(), ::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::RenderingData>>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, blockIndex, renderBlocks, context, renderingData, submit);
}
inline bool UnityEngine::Rendering::Universal::ScriptableRenderer::IsRenderPassEnabled(::UnityEngine::Rendering::Universal::ScriptableRenderPass*  renderPass)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"IsRenderPassEnabled", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, renderPass);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::ExecuteRenderPass(::UnityEngine::Rendering::ScriptableRenderContext  context, ::UnityEngine::Rendering::Universal::ScriptableRenderPass*  renderPass, ::UnityEngine::Rendering::Universal::UniversalCameraData*  cameraData, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>  renderingData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"ExecuteRenderPass", {}, {::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::RenderingData>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, renderPass, cameraData, renderingData);
}
inline bool UnityEngine::Rendering::Universal::ScriptableRenderer::IsSceneFilteringEnabled(::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"IsSceneFilteringEnabled", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, camera);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::SetRenderPassAttachments(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::Universal::ScriptableRenderPass*  renderPass, ::UnityEngine::Rendering::Universal::UniversalCameraData*  cameraData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"SetRenderPassAttachments", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>(), ::i2c::type_of<::UnityEngine::Rendering::Universal::UniversalCameraData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, renderPass, cameraData);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::BeginXRRendering(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::ScriptableRenderContext  context, ::by_ref<::UnityEngine::Rendering::Universal::CameraData>  cameraData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"BeginXRRendering", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::CameraData>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, context, cameraData);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::EndXRRendering(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::ScriptableRenderContext  context, ::by_ref<::UnityEngine::Rendering::Universal::CameraData>  cameraData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"EndXRRendering", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::CameraData>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, context, cameraData);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::SetRenderTarget(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RTHandle*  colorAttachment, ::UnityEngine::Rendering::RTHandle*  depthAttachment, ::UnityEngine::Rendering::ClearFlag  clearFlag, ::UnityEngine::Color  clearColor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"SetRenderTarget", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::ClearFlag>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, colorAttachment, depthAttachment, clearFlag, clearColor);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::SetRenderTarget(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RTHandle*  colorAttachment, ::UnityEngine::Rendering::RTHandle*  depthAttachment, ::UnityEngine::Rendering::ClearFlag  clearFlag, ::UnityEngine::Color  clearColor, ::UnityEngine::Rendering::RenderBufferStoreAction  colorStoreAction, ::UnityEngine::Rendering::RenderBufferStoreAction  depthStoreAction)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"SetRenderTarget", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::ClearFlag>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferStoreAction>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferStoreAction>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, colorAttachment, depthAttachment, clearFlag, clearColor, colorStoreAction, depthStoreAction);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::SetRenderTarget(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RTHandle*  colorAttachment, ::UnityEngine::Rendering::RenderBufferLoadAction  colorLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction  colorStoreAction, ::UnityEngine::Rendering::RTHandle*  depthAttachment, ::UnityEngine::Rendering::RenderBufferLoadAction  depthLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction  depthStoreAction, ::UnityEngine::Rendering::ClearFlag  clearFlags, ::UnityEngine::Color  clearColor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"SetRenderTarget", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferLoadAction>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferStoreAction>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferLoadAction>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferStoreAction>(), ::i2c::type_of<::UnityEngine::Rendering::ClearFlag>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, colorAttachment, colorLoadAction, colorStoreAction, depthAttachment, depthLoadAction, depthStoreAction, clearFlags, clearColor);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::SetRenderTarget(::UnityEngine::Rendering::CommandBuffer*  cmd, ::ArrayW<::UnityEngine::Rendering::RTHandle*>  colorAttachments, ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>  colorAttachmentIDs, ::UnityEngine::Rendering::RTHandle*  depthAttachment, ::UnityEngine::Rendering::ClearFlag  clearFlag, ::UnityEngine::Color  clearColor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"SetRenderTarget", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::RTHandle*>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::ClearFlag>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, colorAttachments, colorAttachmentIDs, depthAttachment, clearFlag, clearColor);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::SwapColorBuffer(::UnityEngine::Rendering::CommandBuffer*  cmd)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::EnableSwapBufferMSAA(bool  enable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, enable);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::DrawGizmos(::UnityEngine::Rendering::ScriptableRenderContext  context, ::UnityEngine::Camera*  camera, ::UnityEngine::Rendering::GizmoSubset  gizmoSubset, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>  renderingData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"DrawGizmos", {}, {::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Rendering::GizmoSubset>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::RenderingData>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, camera, gizmoSubset, renderingData);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::DrawWireOverlay(::UnityEngine::Rendering::ScriptableRenderContext  context, ::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"DrawWireOverlay", {}, {::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, camera);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::InternalStartRendering(::UnityEngine::Rendering::ScriptableRenderContext  context, ::by_ref<::UnityEngine::Rendering::Universal::RenderingData>  renderingData)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"InternalStartRendering", {}, {::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::Universal::RenderingData>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, renderingData);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::InternalFinishRenderingCommon(::UnityEngine::Rendering::CommandBuffer*  cmd, bool  resolveFinalTarget)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"InternalFinishRenderingCommon", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cmd, resolveFinalTarget);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::InternalFinishRenderingExecute(::UnityEngine::Rendering::ScriptableRenderContext  context, ::UnityEngine::Rendering::CommandBuffer*  cmd, bool  resolveFinalTarget)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"InternalFinishRenderingExecute", {}, {::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context, cmd, resolveFinalTarget);
}
inline int32_t UnityEngine::Rendering::Universal::ScriptableRenderer::AdjustAndGetScreenMSAASamples(::UnityEngine::Rendering::RenderGraphModule::RenderGraph*  renderGraph, bool  useIntermediateColorTarget)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"AdjustAndGetScreenMSAASamples", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RenderGraph*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, renderGraph, useIntermediateColorTarget);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer::SortStable(::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>*  list)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(),
                        {"SortStable", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityEngine::Rendering::Universal::ScriptableRenderPass*>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, list);
}
inline bool UnityEngine::Rendering::Universal::ScriptableRenderer::get_supportsNativeRenderPassRendergraphCompiler()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Rendering::Universal::ScriptableRenderer::get_supportsGPUOcclusion()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::ScriptableRenderer* UnityEngine::Rendering::Universal::ScriptableRenderer::New_ctor(::UnityEngine::Rendering::Universal::ScriptableRendererData*  data)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::ScriptableRenderer*>(data));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  UnityEngine::Rendering::Universal::ScriptableRenderer::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* UnityEngine::Rendering::Universal::ScriptableRenderer::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::ScriptableRenderer::ScriptableRenderer()   {
}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer___c::*)()>(&::UnityEngine::Rendering::Universal::ScriptableRenderer___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb24ebfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer___c._InitRenderGraphFrame_b__140_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer___c::*)(::UnityEngine::Rendering::Universal::ScriptableRenderer_PassData*, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer___c::_InitRenderGraphFrame_b__140_0)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb24ec04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer___c*>(),
                        {"<InitRenderGraphFrame>b__140_0", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::ScriptableRenderer_PassData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer___c._ProcessVFXCameraCommand_b__142_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer___c::*)(::UnityEngine::Rendering::Universal::ScriptableRenderer_VFXProcessCameraPassData*, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer___c::_ProcessVFXCameraCommand_b__142_0)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0xb24ecb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer___c*>(),
                        {"<ProcessVFXCameraCommand>b__142_0", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::ScriptableRenderer_VFXProcessCameraPassData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer___c._SetupRenderGraphCameraProperties_b__143_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer___c::*)(::UnityEngine::Rendering::Universal::ScriptableRenderer_PassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer___c::_SetupRenderGraphCameraProperties_b__143_0)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0xb24eda8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer___c*>(),
                        {"<SetupRenderGraphCameraProperties>b__143_0", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::ScriptableRenderer_PassData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer___c._BeginRenderGraphXRRendering_b__149_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer___c::*)(::UnityEngine::Rendering::Universal::ScriptableRenderer_BeginXRPassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer___c::_BeginRenderGraphXRRendering_b__149_0)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0xb24ef14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer___c*>(),
                        {"<BeginRenderGraphXRRendering>b__149_0", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::ScriptableRenderer_BeginXRPassData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer___c._EndRenderGraphXRRendering_b__151_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer___c::*)(::UnityEngine::Rendering::Universal::ScriptableRenderer_EndXRPassData*, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer___c::_EndRenderGraphXRRendering_b__151_0)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0xb24f10c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer___c*>(),
                        {"<EndRenderGraphXRRendering>b__151_0", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::ScriptableRenderer_EndXRPassData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer___c._SetEditorTarget_b__153_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer___c::*)(::UnityEngine::Rendering::Universal::ScriptableRenderer_DummyData*, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer___c::_SetEditorTarget_b__153_0)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xb24f27c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer___c*>(),
                        {"<SetEditorTarget>b__153_0", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::ScriptableRenderer_DummyData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::ScriptableRenderer___c::setStaticF___9(::UnityEngine::Rendering::Universal::ScriptableRenderer___c*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Rendering::Universal::ScriptableRenderer___c*, "<>9", ::UnityEngine::Rendering::Universal::ScriptableRenderer___c*>(std::forward<::UnityEngine::Rendering::Universal::ScriptableRenderer___c*>(value));
}
inline ::UnityEngine::Rendering::Universal::ScriptableRenderer___c* UnityEngine::Rendering::Universal::ScriptableRenderer___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::UnityEngine::Rendering::Universal::ScriptableRenderer___c*, "<>9", ::UnityEngine::Rendering::Universal::ScriptableRenderer___c*>();
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer___c::setStaticF___9__140_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ScriptableRenderer_PassData*,::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ScriptableRenderer_PassData*,::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*, "<>9__140_0", ::UnityEngine::Rendering::Universal::ScriptableRenderer___c*>(std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ScriptableRenderer_PassData*,::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ScriptableRenderer_PassData*,::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* UnityEngine::Rendering::Universal::ScriptableRenderer___c::getStaticF___9__140_0()  {
return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ScriptableRenderer_PassData*,::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*, "<>9__140_0", ::UnityEngine::Rendering::Universal::ScriptableRenderer___c*>();
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer___c::setStaticF___9__142_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ScriptableRenderer_VFXProcessCameraPassData*,::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ScriptableRenderer_VFXProcessCameraPassData*,::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*, "<>9__142_0", ::UnityEngine::Rendering::Universal::ScriptableRenderer___c*>(std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ScriptableRenderer_VFXProcessCameraPassData*,::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ScriptableRenderer_VFXProcessCameraPassData*,::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* UnityEngine::Rendering::Universal::ScriptableRenderer___c::getStaticF___9__142_0()  {
return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ScriptableRenderer_VFXProcessCameraPassData*,::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*, "<>9__142_0", ::UnityEngine::Rendering::Universal::ScriptableRenderer___c*>();
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer___c::setStaticF___9__143_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ScriptableRenderer_PassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ScriptableRenderer_PassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*, "<>9__143_0", ::UnityEngine::Rendering::Universal::ScriptableRenderer___c*>(std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ScriptableRenderer_PassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ScriptableRenderer_PassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* UnityEngine::Rendering::Universal::ScriptableRenderer___c::getStaticF___9__143_0()  {
return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ScriptableRenderer_PassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*, "<>9__143_0", ::UnityEngine::Rendering::Universal::ScriptableRenderer___c*>();
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer___c::setStaticF___9__149_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ScriptableRenderer_BeginXRPassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ScriptableRenderer_BeginXRPassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*, "<>9__149_0", ::UnityEngine::Rendering::Universal::ScriptableRenderer___c*>(std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ScriptableRenderer_BeginXRPassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ScriptableRenderer_BeginXRPassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* UnityEngine::Rendering::Universal::ScriptableRenderer___c::getStaticF___9__149_0()  {
return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ScriptableRenderer_BeginXRPassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*, "<>9__149_0", ::UnityEngine::Rendering::Universal::ScriptableRenderer___c*>();
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer___c::setStaticF___9__151_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ScriptableRenderer_EndXRPassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ScriptableRenderer_EndXRPassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*, "<>9__151_0", ::UnityEngine::Rendering::Universal::ScriptableRenderer___c*>(std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ScriptableRenderer_EndXRPassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ScriptableRenderer_EndXRPassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>* UnityEngine::Rendering::Universal::ScriptableRenderer___c::getStaticF___9__151_0()  {
return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ScriptableRenderer_EndXRPassData*,::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>*, "<>9__151_0", ::UnityEngine::Rendering::Universal::ScriptableRenderer___c*>();
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer___c::setStaticF___9__153_0(::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ScriptableRenderer_DummyData*,::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ScriptableRenderer_DummyData*,::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*, "<>9__153_0", ::UnityEngine::Rendering::Universal::ScriptableRenderer___c*>(std::forward<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ScriptableRenderer_DummyData*,::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*>(value));
}
inline ::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ScriptableRenderer_DummyData*,::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>* UnityEngine::Rendering::Universal::ScriptableRenderer___c::getStaticF___9__153_0()  {
return ::cordl_internals::getStaticField<::UnityEngine::Rendering::RenderGraphModule::BaseRenderFunc_2<::UnityEngine::Rendering::Universal::ScriptableRenderer_DummyData*,::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>*, "<>9__153_0", ::UnityEngine::Rendering::Universal::ScriptableRenderer___c*>();
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer___c::_InitRenderGraphFrame_b__140_0(::UnityEngine::Rendering::Universal::ScriptableRenderer_PassData*  data, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*  rgContext)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer___c*>(),
                        {"<InitRenderGraphFrame>b__140_0", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::ScriptableRenderer_PassData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, rgContext);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer___c::_ProcessVFXCameraCommand_b__142_0(::UnityEngine::Rendering::Universal::ScriptableRenderer_VFXProcessCameraPassData*  data, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer___c*>(),
                        {"<ProcessVFXCameraCommand>b__142_0", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::ScriptableRenderer_VFXProcessCameraPassData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, context);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer___c::_SetupRenderGraphCameraProperties_b__143_0(::UnityEngine::Rendering::Universal::ScriptableRenderer_PassData*  data, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer___c*>(),
                        {"<SetupRenderGraphCameraProperties>b__143_0", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::ScriptableRenderer_PassData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, context);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer___c::_BeginRenderGraphXRRendering_b__149_0(::UnityEngine::Rendering::Universal::ScriptableRenderer_BeginXRPassData*  data, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer___c*>(),
                        {"<BeginRenderGraphXRRendering>b__149_0", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::ScriptableRenderer_BeginXRPassData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, context);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer___c::_EndRenderGraphXRRendering_b__151_0(::UnityEngine::Rendering::Universal::ScriptableRenderer_EndXRPassData*  data, ::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer___c*>(),
                        {"<EndRenderGraphXRRendering>b__151_0", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::ScriptableRenderer_EndXRPassData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::RasterGraphContext>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, context);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer___c::_SetEditorTarget_b__153_0(::UnityEngine::Rendering::Universal::ScriptableRenderer_DummyData*  data, ::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*  context)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer___c*>(),
                        {"<SetEditorTarget>b__153_0", {}, {::i2c::type_of<::UnityEngine::Rendering::Universal::ScriptableRenderer_DummyData*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderGraphModule::UnsafeGraphContext*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, context);
}
inline ::UnityEngine::Rendering::Universal::ScriptableRenderer___c* UnityEngine::Rendering::Universal::ScriptableRenderer___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::ScriptableRenderer___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::ScriptableRenderer___c::ScriptableRenderer___c()   {
}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer_PassData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer_PassData::*)()>(&::UnityEngine::Rendering::Universal::ScriptableRenderer_PassData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb24e800;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer_PassData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::ScriptableRenderer*& UnityEngine::Rendering::Universal::ScriptableRenderer_PassData::__cordl_internal_get_renderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderer;
}
constexpr ::UnityEngine::Rendering::Universal::ScriptableRenderer* const& UnityEngine::Rendering::Universal::ScriptableRenderer_PassData::__cordl_internal_get_renderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderer;
}
constexpr void UnityEngine::Rendering::Universal::ScriptableRenderer_PassData::__cordl_internal_set_renderer(::UnityEngine::Rendering::Universal::ScriptableRenderer*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___renderer = value;
}
constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData*& UnityEngine::Rendering::Universal::ScriptableRenderer_PassData::__cordl_internal_get_cameraData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cameraData;
}
constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData* const& UnityEngine::Rendering::Universal::ScriptableRenderer_PassData::__cordl_internal_get_cameraData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cameraData;
}
constexpr void UnityEngine::Rendering::Universal::ScriptableRenderer_PassData::__cordl_internal_set_cameraData(::UnityEngine::Rendering::Universal::UniversalCameraData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cameraData = value;
}
constexpr bool& UnityEngine::Rendering::Universal::ScriptableRenderer_PassData::__cordl_internal_get_isTargetBackbuffer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isTargetBackbuffer;
}
constexpr bool const& UnityEngine::Rendering::Universal::ScriptableRenderer_PassData::__cordl_internal_get_isTargetBackbuffer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isTargetBackbuffer;
}
constexpr void UnityEngine::Rendering::Universal::ScriptableRenderer_PassData::__cordl_internal_set_isTargetBackbuffer(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isTargetBackbuffer = value;
}
constexpr ::UnityEngine::Vector2Int& UnityEngine::Rendering::Universal::ScriptableRenderer_PassData::__cordl_internal_get_cameraTargetSizeCopy()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cameraTargetSizeCopy;
}
constexpr ::UnityEngine::Vector2Int const& UnityEngine::Rendering::Universal::ScriptableRenderer_PassData::__cordl_internal_get_cameraTargetSizeCopy() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cameraTargetSizeCopy;
}
constexpr void UnityEngine::Rendering::Universal::ScriptableRenderer_PassData::__cordl_internal_set_cameraTargetSizeCopy(::UnityEngine::Vector2Int  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cameraTargetSizeCopy = value;
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer_PassData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer_PassData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::ScriptableRenderer_PassData* UnityEngine::Rendering::Universal::ScriptableRenderer_PassData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::ScriptableRenderer_PassData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::ScriptableRenderer_PassData::ScriptableRenderer_PassData()   {
}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer_DummyData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer_DummyData::*)()>(&::UnityEngine::Rendering::Universal::ScriptableRenderer_DummyData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb24e7f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer_DummyData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Universal::ScriptableRenderer_DummyData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer_DummyData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::ScriptableRenderer_DummyData* UnityEngine::Rendering::Universal::ScriptableRenderer_DummyData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::ScriptableRenderer_DummyData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::ScriptableRenderer_DummyData::ScriptableRenderer_DummyData()   {
}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer_EndXRPassData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer_EndXRPassData::*)()>(&::UnityEngine::Rendering::Universal::ScriptableRenderer_EndXRPassData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb24e7f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer_EndXRPassData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData*& UnityEngine::Rendering::Universal::ScriptableRenderer_EndXRPassData::__cordl_internal_get_cameraData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cameraData;
}
constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData* const& UnityEngine::Rendering::Universal::ScriptableRenderer_EndXRPassData::__cordl_internal_get_cameraData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cameraData;
}
constexpr void UnityEngine::Rendering::Universal::ScriptableRenderer_EndXRPassData::__cordl_internal_set_cameraData(::UnityEngine::Rendering::Universal::UniversalCameraData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cameraData = value;
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer_EndXRPassData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer_EndXRPassData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::ScriptableRenderer_EndXRPassData* UnityEngine::Rendering::Universal::ScriptableRenderer_EndXRPassData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::ScriptableRenderer_EndXRPassData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::ScriptableRenderer_EndXRPassData::ScriptableRenderer_EndXRPassData()   {
}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer_BeginXRPassData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer_BeginXRPassData::*)()>(&::UnityEngine::Rendering::Universal::ScriptableRenderer_BeginXRPassData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb24e7e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer_BeginXRPassData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData*& UnityEngine::Rendering::Universal::ScriptableRenderer_BeginXRPassData::__cordl_internal_get_cameraData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cameraData;
}
constexpr ::UnityEngine::Rendering::Universal::UniversalCameraData* const& UnityEngine::Rendering::Universal::ScriptableRenderer_BeginXRPassData::__cordl_internal_get_cameraData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cameraData;
}
constexpr void UnityEngine::Rendering::Universal::ScriptableRenderer_BeginXRPassData::__cordl_internal_set_cameraData(::UnityEngine::Rendering::Universal::UniversalCameraData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cameraData = value;
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer_BeginXRPassData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer_BeginXRPassData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::ScriptableRenderer_BeginXRPassData* UnityEngine::Rendering::Universal::ScriptableRenderer_BeginXRPassData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::ScriptableRenderer_BeginXRPassData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::ScriptableRenderer_BeginXRPassData::ScriptableRenderer_BeginXRPassData()   {
}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer_DrawWireOverlayPassData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer_DrawWireOverlayPassData::*)()>(&::UnityEngine::Rendering::Universal::ScriptableRenderer_DrawWireOverlayPassData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb24e7e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer_DrawWireOverlayPassData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle& UnityEngine::Rendering::Universal::ScriptableRenderer_DrawWireOverlayPassData::__cordl_internal_get_wireOverlayList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wireOverlayList;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle const& UnityEngine::Rendering::Universal::ScriptableRenderer_DrawWireOverlayPassData::__cordl_internal_get_wireOverlayList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___wireOverlayList;
}
constexpr void UnityEngine::Rendering::Universal::ScriptableRenderer_DrawWireOverlayPassData::__cordl_internal_set_wireOverlayList(::UnityEngine::Rendering::RenderGraphModule::RendererListHandle  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___wireOverlayList = value;
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer_DrawWireOverlayPassData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer_DrawWireOverlayPassData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::ScriptableRenderer_DrawWireOverlayPassData* UnityEngine::Rendering::Universal::ScriptableRenderer_DrawWireOverlayPassData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::ScriptableRenderer_DrawWireOverlayPassData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::ScriptableRenderer_DrawWireOverlayPassData::ScriptableRenderer_DrawWireOverlayPassData()   {
}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer_DrawGizmosPassData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer_DrawGizmosPassData::*)()>(&::UnityEngine::Rendering::Universal::ScriptableRenderer_DrawGizmosPassData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb24e7d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer_DrawGizmosPassData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle& UnityEngine::Rendering::Universal::ScriptableRenderer_DrawGizmosPassData::__cordl_internal_get_gizmoRenderList()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gizmoRenderList;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::RendererListHandle const& UnityEngine::Rendering::Universal::ScriptableRenderer_DrawGizmosPassData::__cordl_internal_get_gizmoRenderList() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___gizmoRenderList;
}
constexpr void UnityEngine::Rendering::Universal::ScriptableRenderer_DrawGizmosPassData::__cordl_internal_set_gizmoRenderList(::UnityEngine::Rendering::RenderGraphModule::RendererListHandle  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___gizmoRenderList = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::ScriptableRenderer_DrawGizmosPassData::__cordl_internal_get_color()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___color;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::Universal::ScriptableRenderer_DrawGizmosPassData::__cordl_internal_get_color() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___color;
}
constexpr void UnityEngine::Rendering::Universal::ScriptableRenderer_DrawGizmosPassData::__cordl_internal_set_color(::UnityEngine::Rendering::RenderGraphModule::TextureHandle  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___color = value;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle& UnityEngine::Rendering::Universal::ScriptableRenderer_DrawGizmosPassData::__cordl_internal_get_depth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depth;
}
constexpr ::UnityEngine::Rendering::RenderGraphModule::TextureHandle const& UnityEngine::Rendering::Universal::ScriptableRenderer_DrawGizmosPassData::__cordl_internal_get_depth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___depth;
}
constexpr void UnityEngine::Rendering::Universal::ScriptableRenderer_DrawGizmosPassData::__cordl_internal_set_depth(::UnityEngine::Rendering::RenderGraphModule::TextureHandle  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___depth = value;
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer_DrawGizmosPassData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer_DrawGizmosPassData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::ScriptableRenderer_DrawGizmosPassData* UnityEngine::Rendering::Universal::ScriptableRenderer_DrawGizmosPassData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::ScriptableRenderer_DrawGizmosPassData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::ScriptableRenderer_DrawGizmosPassData::ScriptableRenderer_DrawGizmosPassData()   {
}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer_VFXProcessCameraPassData._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer_VFXProcessCameraPassData::*)()>(&::UnityEngine::Rendering::Universal::ScriptableRenderer_VFXProcessCameraPassData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb24e7d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer_VFXProcessCameraPassData*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rendering::Universal::UniversalRenderingData*& UnityEngine::Rendering::Universal::ScriptableRenderer_VFXProcessCameraPassData::__cordl_internal_get_renderingData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderingData;
}
constexpr ::UnityEngine::Rendering::Universal::UniversalRenderingData* const& UnityEngine::Rendering::Universal::ScriptableRenderer_VFXProcessCameraPassData::__cordl_internal_get_renderingData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderingData;
}
constexpr void UnityEngine::Rendering::Universal::ScriptableRenderer_VFXProcessCameraPassData::__cordl_internal_set_renderingData(::UnityEngine::Rendering::Universal::UniversalRenderingData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___renderingData = value;
}
constexpr ::UnityW<::UnityEngine::Camera>& UnityEngine::Rendering::Universal::ScriptableRenderer_VFXProcessCameraPassData::__cordl_internal_get_camera()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___camera;
}
constexpr ::UnityW<::UnityEngine::Camera> const& UnityEngine::Rendering::Universal::ScriptableRenderer_VFXProcessCameraPassData::__cordl_internal_get_camera() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___camera;
}
constexpr void UnityEngine::Rendering::Universal::ScriptableRenderer_VFXProcessCameraPassData::__cordl_internal_set_camera(::UnityW<::UnityEngine::Camera>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___camera = value;
}
constexpr ::UnityEngine::VFX::VFXCameraXRSettings& UnityEngine::Rendering::Universal::ScriptableRenderer_VFXProcessCameraPassData::__cordl_internal_get_cameraXRSettings()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cameraXRSettings;
}
constexpr ::UnityEngine::VFX::VFXCameraXRSettings const& UnityEngine::Rendering::Universal::ScriptableRenderer_VFXProcessCameraPassData::__cordl_internal_get_cameraXRSettings() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___cameraXRSettings;
}
constexpr void UnityEngine::Rendering::Universal::ScriptableRenderer_VFXProcessCameraPassData::__cordl_internal_set_cameraXRSettings(::UnityEngine::VFX::VFXCameraXRSettings  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___cameraXRSettings = value;
}
constexpr ::UnityEngine::Experimental::Rendering::XRPass*& UnityEngine::Rendering::Universal::ScriptableRenderer_VFXProcessCameraPassData::__cordl_internal_get_xrPass()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___xrPass;
}
constexpr ::UnityEngine::Experimental::Rendering::XRPass* const& UnityEngine::Rendering::Universal::ScriptableRenderer_VFXProcessCameraPassData::__cordl_internal_get_xrPass() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___xrPass;
}
constexpr void UnityEngine::Rendering::Universal::ScriptableRenderer_VFXProcessCameraPassData::__cordl_internal_set_xrPass(::UnityEngine::Experimental::Rendering::XRPass*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___xrPass = value;
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer_VFXProcessCameraPassData::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer_VFXProcessCameraPassData*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::ScriptableRenderer_VFXProcessCameraPassData* UnityEngine::Rendering::Universal::ScriptableRenderer_VFXProcessCameraPassData::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::ScriptableRenderer_VFXProcessCameraPassData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::ScriptableRenderer_VFXProcessCameraPassData::ScriptableRenderer_VFXProcessCameraPassData()   {
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer_RenderPassBlock::setStaticF_BeforeRendering(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "BeforeRendering", ::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderPassBlock*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::ScriptableRenderer_RenderPassBlock::getStaticF_BeforeRendering()  {
return ::cordl_internals::getStaticField<int32_t, "BeforeRendering", ::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderPassBlock*>();
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer_RenderPassBlock::setStaticF_MainRenderingOpaque(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "MainRenderingOpaque", ::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderPassBlock*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::ScriptableRenderer_RenderPassBlock::getStaticF_MainRenderingOpaque()  {
return ::cordl_internals::getStaticField<int32_t, "MainRenderingOpaque", ::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderPassBlock*>();
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer_RenderPassBlock::setStaticF_MainRenderingTransparent(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "MainRenderingTransparent", ::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderPassBlock*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::ScriptableRenderer_RenderPassBlock::getStaticF_MainRenderingTransparent()  {
return ::cordl_internals::getStaticField<int32_t, "MainRenderingTransparent", ::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderPassBlock*>();
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer_RenderPassBlock::setStaticF_AfterRendering(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "AfterRendering", ::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderPassBlock*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Universal::ScriptableRenderer_RenderPassBlock::getStaticF_AfterRendering()  {
return ::cordl_internals::getStaticField<int32_t, "AfterRendering", ::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderPassBlock*>();
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderPassBlock::ScriptableRenderer_RenderPassBlock()   {
}
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderingFeatures.get_cameraStacking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderingFeatures::*)()>(&::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderingFeatures::get_cameraStacking)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb24e750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderingFeatures*>(),
                        {"get_cameraStacking", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderingFeatures.set_cameraStacking
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderingFeatures::*)(bool)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderingFeatures::set_cameraStacking)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb24e758;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderingFeatures*>(),
                        {"set_cameraStacking", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderingFeatures.get_msaa
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderingFeatures::*)()>(&::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderingFeatures::get_msaa)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb24e760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderingFeatures*>(),
                        {"get_msaa", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderingFeatures.set_msaa
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderingFeatures::*)(bool)>(&::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderingFeatures::set_msaa)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb24e768;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderingFeatures*>(),
                        {"set_msaa", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderingFeatures._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderingFeatures::*)()>(&::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderingFeatures::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb24e770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderingFeatures*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::Rendering::Universal::ScriptableRenderer_RenderingFeatures::__cordl_internal_get__cameraStacking_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cameraStacking_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::Universal::ScriptableRenderer_RenderingFeatures::__cordl_internal_get__cameraStacking_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cameraStacking_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::ScriptableRenderer_RenderingFeatures::__cordl_internal_set__cameraStacking_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cameraStacking_k__BackingField = value;
}
constexpr bool& UnityEngine::Rendering::Universal::ScriptableRenderer_RenderingFeatures::__cordl_internal_get__msaa_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____msaa_k__BackingField;
}
constexpr bool const& UnityEngine::Rendering::Universal::ScriptableRenderer_RenderingFeatures::__cordl_internal_get__msaa_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____msaa_k__BackingField;
}
constexpr void UnityEngine::Rendering::Universal::ScriptableRenderer_RenderingFeatures::__cordl_internal_set__msaa_k__BackingField(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____msaa_k__BackingField = value;
}
inline bool UnityEngine::Rendering::Universal::ScriptableRenderer_RenderingFeatures::get_cameraStacking()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderingFeatures*>(),
                        {"get_cameraStacking", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer_RenderingFeatures::set_cameraStacking(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderingFeatures*>(),
                        {"set_cameraStacking", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Rendering::Universal::ScriptableRenderer_RenderingFeatures::get_msaa()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderingFeatures*>(),
                        {"get_msaa", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer_RenderingFeatures::set_msaa(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderingFeatures*>(),
                        {"set_msaa", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer_RenderingFeatures::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderingFeatures*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderingFeatures* UnityEngine::Rendering::Universal::ScriptableRenderer_RenderingFeatures::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderingFeatures*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::ScriptableRenderer_RenderingFeatures::ScriptableRenderer_RenderingFeatures()   {
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer_Profiling::setStaticF_setMRTAttachmentsList(::UnityEngine::Rendering::ProfilingSampler*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "setMRTAttachmentsList", ::UnityEngine::Rendering::Universal::ScriptableRenderer_Profiling*>(std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* UnityEngine::Rendering::Universal::ScriptableRenderer_Profiling::getStaticF_setMRTAttachmentsList()  {
return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "setMRTAttachmentsList", ::UnityEngine::Rendering::Universal::ScriptableRenderer_Profiling*>();
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer_Profiling::setStaticF_setAttachmentList(::UnityEngine::Rendering::ProfilingSampler*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "setAttachmentList", ::UnityEngine::Rendering::Universal::ScriptableRenderer_Profiling*>(std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* UnityEngine::Rendering::Universal::ScriptableRenderer_Profiling::getStaticF_setAttachmentList()  {
return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "setAttachmentList", ::UnityEngine::Rendering::Universal::ScriptableRenderer_Profiling*>();
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer_Profiling::setStaticF_execute(::UnityEngine::Rendering::ProfilingSampler*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "execute", ::UnityEngine::Rendering::Universal::ScriptableRenderer_Profiling*>(std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* UnityEngine::Rendering::Universal::ScriptableRenderer_Profiling::getStaticF_execute()  {
return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "execute", ::UnityEngine::Rendering::Universal::ScriptableRenderer_Profiling*>();
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer_Profiling::setStaticF_setupFrameData(::UnityEngine::Rendering::ProfilingSampler*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "setupFrameData", ::UnityEngine::Rendering::Universal::ScriptableRenderer_Profiling*>(std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* UnityEngine::Rendering::Universal::ScriptableRenderer_Profiling::getStaticF_setupFrameData()  {
return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "setupFrameData", ::UnityEngine::Rendering::Universal::ScriptableRenderer_Profiling*>();
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer_Profiling::setStaticF_setPerCameraShaderVariables(::UnityEngine::Rendering::ProfilingSampler*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "setPerCameraShaderVariables", ::UnityEngine::Rendering::Universal::ScriptableRenderer_Profiling*>(std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* UnityEngine::Rendering::Universal::ScriptableRenderer_Profiling::getStaticF_setPerCameraShaderVariables()  {
return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "setPerCameraShaderVariables", ::UnityEngine::Rendering::Universal::ScriptableRenderer_Profiling*>();
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer_Profiling::setStaticF_sortRenderPasses(::UnityEngine::Rendering::ProfilingSampler*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "sortRenderPasses", ::UnityEngine::Rendering::Universal::ScriptableRenderer_Profiling*>(std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* UnityEngine::Rendering::Universal::ScriptableRenderer_Profiling::getStaticF_sortRenderPasses()  {
return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "sortRenderPasses", ::UnityEngine::Rendering::Universal::ScriptableRenderer_Profiling*>();
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer_Profiling::setStaticF_recordRenderGraph(::UnityEngine::Rendering::ProfilingSampler*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "recordRenderGraph", ::UnityEngine::Rendering::Universal::ScriptableRenderer_Profiling*>(std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* UnityEngine::Rendering::Universal::ScriptableRenderer_Profiling::getStaticF_recordRenderGraph()  {
return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "recordRenderGraph", ::UnityEngine::Rendering::Universal::ScriptableRenderer_Profiling*>();
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer_Profiling::setStaticF_setupLights(::UnityEngine::Rendering::ProfilingSampler*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "setupLights", ::UnityEngine::Rendering::Universal::ScriptableRenderer_Profiling*>(std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* UnityEngine::Rendering::Universal::ScriptableRenderer_Profiling::getStaticF_setupLights()  {
return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "setupLights", ::UnityEngine::Rendering::Universal::ScriptableRenderer_Profiling*>();
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer_Profiling::setStaticF_setupCamera(::UnityEngine::Rendering::ProfilingSampler*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "setupCamera", ::UnityEngine::Rendering::Universal::ScriptableRenderer_Profiling*>(std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* UnityEngine::Rendering::Universal::ScriptableRenderer_Profiling::getStaticF_setupCamera()  {
return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "setupCamera", ::UnityEngine::Rendering::Universal::ScriptableRenderer_Profiling*>();
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer_Profiling::setStaticF_vfxProcessCamera(::UnityEngine::Rendering::ProfilingSampler*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "vfxProcessCamera", ::UnityEngine::Rendering::Universal::ScriptableRenderer_Profiling*>(std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* UnityEngine::Rendering::Universal::ScriptableRenderer_Profiling::getStaticF_vfxProcessCamera()  {
return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "vfxProcessCamera", ::UnityEngine::Rendering::Universal::ScriptableRenderer_Profiling*>();
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer_Profiling::setStaticF_addRenderPasses(::UnityEngine::Rendering::ProfilingSampler*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "addRenderPasses", ::UnityEngine::Rendering::Universal::ScriptableRenderer_Profiling*>(std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* UnityEngine::Rendering::Universal::ScriptableRenderer_Profiling::getStaticF_addRenderPasses()  {
return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "addRenderPasses", ::UnityEngine::Rendering::Universal::ScriptableRenderer_Profiling*>();
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer_Profiling::setStaticF_setupRenderPasses(::UnityEngine::Rendering::ProfilingSampler*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "setupRenderPasses", ::UnityEngine::Rendering::Universal::ScriptableRenderer_Profiling*>(std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* UnityEngine::Rendering::Universal::ScriptableRenderer_Profiling::getStaticF_setupRenderPasses()  {
return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "setupRenderPasses", ::UnityEngine::Rendering::Universal::ScriptableRenderer_Profiling*>();
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer_Profiling::setStaticF_clearRenderingState(::UnityEngine::Rendering::ProfilingSampler*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "clearRenderingState", ::UnityEngine::Rendering::Universal::ScriptableRenderer_Profiling*>(std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* UnityEngine::Rendering::Universal::ScriptableRenderer_Profiling::getStaticF_clearRenderingState()  {
return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "clearRenderingState", ::UnityEngine::Rendering::Universal::ScriptableRenderer_Profiling*>();
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer_Profiling::setStaticF_internalStartRendering(::UnityEngine::Rendering::ProfilingSampler*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "internalStartRendering", ::UnityEngine::Rendering::Universal::ScriptableRenderer_Profiling*>(std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* UnityEngine::Rendering::Universal::ScriptableRenderer_Profiling::getStaticF_internalStartRendering()  {
return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "internalStartRendering", ::UnityEngine::Rendering::Universal::ScriptableRenderer_Profiling*>();
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer_Profiling::setStaticF_internalFinishRenderingCommon(::UnityEngine::Rendering::ProfilingSampler*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "internalFinishRenderingCommon", ::UnityEngine::Rendering::Universal::ScriptableRenderer_Profiling*>(std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* UnityEngine::Rendering::Universal::ScriptableRenderer_Profiling::getStaticF_internalFinishRenderingCommon()  {
return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "internalFinishRenderingCommon", ::UnityEngine::Rendering::Universal::ScriptableRenderer_Profiling*>();
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer_Profiling::setStaticF_drawGizmos(::UnityEngine::Rendering::ProfilingSampler*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "drawGizmos", ::UnityEngine::Rendering::Universal::ScriptableRenderer_Profiling*>(std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* UnityEngine::Rendering::Universal::ScriptableRenderer_Profiling::getStaticF_drawGizmos()  {
return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "drawGizmos", ::UnityEngine::Rendering::Universal::ScriptableRenderer_Profiling*>();
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer_Profiling::setStaticF_drawWireOverlay(::UnityEngine::Rendering::ProfilingSampler*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "drawWireOverlay", ::UnityEngine::Rendering::Universal::ScriptableRenderer_Profiling*>(std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* UnityEngine::Rendering::Universal::ScriptableRenderer_Profiling::getStaticF_drawWireOverlay()  {
return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "drawWireOverlay", ::UnityEngine::Rendering::Universal::ScriptableRenderer_Profiling*>();
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer_Profiling::setStaticF_beginXRRendering(::UnityEngine::Rendering::ProfilingSampler*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "beginXRRendering", ::UnityEngine::Rendering::Universal::ScriptableRenderer_Profiling*>(std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* UnityEngine::Rendering::Universal::ScriptableRenderer_Profiling::getStaticF_beginXRRendering()  {
return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "beginXRRendering", ::UnityEngine::Rendering::Universal::ScriptableRenderer_Profiling*>();
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer_Profiling::setStaticF_endXRRendering(::UnityEngine::Rendering::ProfilingSampler*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "endXRRendering", ::UnityEngine::Rendering::Universal::ScriptableRenderer_Profiling*>(std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* UnityEngine::Rendering::Universal::ScriptableRenderer_Profiling::getStaticF_endXRRendering()  {
return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "endXRRendering", ::UnityEngine::Rendering::Universal::ScriptableRenderer_Profiling*>();
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer_Profiling::setStaticF_initRenderGraphFrame(::UnityEngine::Rendering::ProfilingSampler*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "initRenderGraphFrame", ::UnityEngine::Rendering::Universal::ScriptableRenderer_Profiling*>(std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* UnityEngine::Rendering::Universal::ScriptableRenderer_Profiling::getStaticF_initRenderGraphFrame()  {
return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "initRenderGraphFrame", ::UnityEngine::Rendering::Universal::ScriptableRenderer_Profiling*>();
}
inline void UnityEngine::Rendering::Universal::ScriptableRenderer_Profiling::setStaticF_setEditorTarget(::UnityEngine::Rendering::ProfilingSampler*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "setEditorTarget", ::UnityEngine::Rendering::Universal::ScriptableRenderer_Profiling*>(std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* UnityEngine::Rendering::Universal::ScriptableRenderer_Profiling::getStaticF_setEditorTarget()  {
return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "setEditorTarget", ::UnityEngine::Rendering::Universal::ScriptableRenderer_Profiling*>();
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::ScriptableRenderer_Profiling::ScriptableRenderer_Profiling()   {
}
inline void UnityEngine::Rendering::Universal::Profiling_ScriptableRenderer_RenderPass::setStaticF_configure(::UnityEngine::Rendering::ProfilingSampler*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "configure", ::UnityEngine::Rendering::Universal::Profiling_ScriptableRenderer_RenderPass*>(std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* UnityEngine::Rendering::Universal::Profiling_ScriptableRenderer_RenderPass::getStaticF_configure()  {
return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "configure", ::UnityEngine::Rendering::Universal::Profiling_ScriptableRenderer_RenderPass*>();
}
inline void UnityEngine::Rendering::Universal::Profiling_ScriptableRenderer_RenderPass::setStaticF_setRenderPassAttachments(::UnityEngine::Rendering::ProfilingSampler*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "setRenderPassAttachments", ::UnityEngine::Rendering::Universal::Profiling_ScriptableRenderer_RenderPass*>(std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* UnityEngine::Rendering::Universal::Profiling_ScriptableRenderer_RenderPass::getStaticF_setRenderPassAttachments()  {
return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "setRenderPassAttachments", ::UnityEngine::Rendering::Universal::Profiling_ScriptableRenderer_RenderPass*>();
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Profiling_ScriptableRenderer_RenderPass::Profiling_ScriptableRenderer_RenderPass()   {
}
inline void UnityEngine::Rendering::Universal::Profiling_ScriptableRenderer_RenderBlock::setStaticF_beforeRendering(::UnityEngine::Rendering::ProfilingSampler*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "beforeRendering", ::UnityEngine::Rendering::Universal::Profiling_ScriptableRenderer_RenderBlock*>(std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* UnityEngine::Rendering::Universal::Profiling_ScriptableRenderer_RenderBlock::getStaticF_beforeRendering()  {
return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "beforeRendering", ::UnityEngine::Rendering::Universal::Profiling_ScriptableRenderer_RenderBlock*>();
}
inline void UnityEngine::Rendering::Universal::Profiling_ScriptableRenderer_RenderBlock::setStaticF_mainRenderingOpaque(::UnityEngine::Rendering::ProfilingSampler*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "mainRenderingOpaque", ::UnityEngine::Rendering::Universal::Profiling_ScriptableRenderer_RenderBlock*>(std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* UnityEngine::Rendering::Universal::Profiling_ScriptableRenderer_RenderBlock::getStaticF_mainRenderingOpaque()  {
return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "mainRenderingOpaque", ::UnityEngine::Rendering::Universal::Profiling_ScriptableRenderer_RenderBlock*>();
}
inline void UnityEngine::Rendering::Universal::Profiling_ScriptableRenderer_RenderBlock::setStaticF_mainRenderingTransparent(::UnityEngine::Rendering::ProfilingSampler*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "mainRenderingTransparent", ::UnityEngine::Rendering::Universal::Profiling_ScriptableRenderer_RenderBlock*>(std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* UnityEngine::Rendering::Universal::Profiling_ScriptableRenderer_RenderBlock::getStaticF_mainRenderingTransparent()  {
return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "mainRenderingTransparent", ::UnityEngine::Rendering::Universal::Profiling_ScriptableRenderer_RenderBlock*>();
}
inline void UnityEngine::Rendering::Universal::Profiling_ScriptableRenderer_RenderBlock::setStaticF_afterRendering(::UnityEngine::Rendering::ProfilingSampler*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Rendering::ProfilingSampler*, "afterRendering", ::UnityEngine::Rendering::Universal::Profiling_ScriptableRenderer_RenderBlock*>(std::forward<::UnityEngine::Rendering::ProfilingSampler*>(value));
}
inline ::UnityEngine::Rendering::ProfilingSampler* UnityEngine::Rendering::Universal::Profiling_ScriptableRenderer_RenderBlock::getStaticF_afterRendering()  {
return ::cordl_internals::getStaticField<::UnityEngine::Rendering::ProfilingSampler*, "afterRendering", ::UnityEngine::Rendering::Universal::Profiling_ScriptableRenderer_RenderBlock*>();
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Universal::Profiling_ScriptableRenderer_RenderBlock::Profiling_ScriptableRenderer_RenderBlock()   {
}
