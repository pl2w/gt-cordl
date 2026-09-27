#pragma once
// IWYU pragma private; include "UnityEngine/Graphics.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Graphics_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__GraphicsTier_def.hpp"
#include "UnityEngine/Rendering/zzzz__LightProbeUsage_def.hpp"
#include "UnityEngine/Rendering/zzzz__OpenGLESVersion_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderBufferLoadAction_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderBufferStoreAction_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShadowCastingMode_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__ComputeBuffer_def.hpp"
#include "UnityEngine/zzzz__CubemapFace_def.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_def.hpp"
#include "UnityEngine/zzzz__Internal_DrawTextureArguments_def.hpp"
#include "UnityEngine/zzzz__LightProbeProxyVolume_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__MeshTopology_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__RenderBuffer_def.hpp"
#include "UnityEngine/zzzz__RenderInstancedDataLayout_def.hpp"
#include "UnityEngine/zzzz__RenderParams_def.hpp"
#include "UnityEngine/zzzz__RenderTargetSetup_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::Graphics.Internal_GetMaxDrawMeshInstanceCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::Graphics::Internal_GetMaxDrawMeshInstanceCount)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb57be10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"Internal_GetMaxDrawMeshInstanceCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.get_activeTier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::GraphicsTier (*)()>(&::UnityEngine::Graphics::get_activeTier)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb57be38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"get_activeTier", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.set_activeTier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::GraphicsTier)>(&::UnityEngine::Graphics::set_activeTier)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb57be60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"set_activeTier", {}, {::i2c::type_of<::UnityEngine::Rendering::GraphicsTier>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.GetPreserveFramebufferAlpha
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Graphics::GetPreserveFramebufferAlpha)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb57be9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"GetPreserveFramebufferAlpha", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.get_preserveFramebufferAlpha
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Graphics::get_preserveFramebufferAlpha)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xb57bec4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"get_preserveFramebufferAlpha", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.GetMinOpenGLESVersion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::OpenGLESVersion (*)()>(&::UnityEngine::Graphics::GetMinOpenGLESVersion)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb57bf2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"GetMinOpenGLESVersion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.get_minOpenGLESVersion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::OpenGLESVersion (*)()>(&::UnityEngine::Graphics::get_minOpenGLESVersion)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xb57bf54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"get_minOpenGLESVersion", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.Internal_SetNullRT
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::Graphics::Internal_SetNullRT)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb57bfbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"Internal_SetNullRT", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.Internal_SetRTSimple
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::RenderBuffer, ::UnityEngine::RenderBuffer, int32_t, ::UnityEngine::CubemapFace, int32_t)>(&::UnityEngine::Graphics::Internal_SetRTSimple)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xb57bfe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"Internal_SetRTSimple", {}, {::i2c::type_of<::UnityEngine::RenderBuffer>(), ::i2c::type_of<::UnityEngine::RenderBuffer>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.Internal_SetMRTFullSetup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::ArrayW<::UnityEngine::RenderBuffer>, ::UnityEngine::RenderBuffer, int32_t, ::UnityEngine::CubemapFace, int32_t, ::ArrayW<::UnityEngine::Rendering::RenderBufferLoadAction>, ::ArrayW<::UnityEngine::Rendering::RenderBufferStoreAction>, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction)>(&::UnityEngine::Graphics::Internal_SetMRTFullSetup)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0xb57c0f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"Internal_SetMRTFullSetup", {}, {::i2c::type_of<::ArrayW<::UnityEngine::RenderBuffer>>(), ::i2c::type_of<::UnityEngine::RenderBuffer>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::RenderBufferLoadAction>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::RenderBufferStoreAction>>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferLoadAction>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferStoreAction>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.ClearRandomWriteTargets
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::Graphics::ClearRandomWriteTargets)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xb57c438;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"ClearRandomWriteTargets", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.CopyTexture_Slice_AllMips
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Texture*, int32_t, ::UnityEngine::Texture*, int32_t)>(&::UnityEngine::Graphics::CopyTexture_Slice_AllMips)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xb57c460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"CopyTexture_Slice_AllMips", {}, {::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.CopyTexture_Slice
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Texture*, int32_t, int32_t, ::UnityEngine::Texture*, int32_t, int32_t)>(&::UnityEngine::Graphics::CopyTexture_Slice)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xb57c59c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"CopyTexture_Slice", {}, {::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.CopyTexture_Region
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Texture*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, ::UnityEngine::Texture*, int32_t, int32_t, int32_t, int32_t)>(&::UnityEngine::Graphics::CopyTexture_Region)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xb57c708;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"CopyTexture_Region", {}, {::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.Internal_DrawMeshNow2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Mesh*, int32_t, ::UnityEngine::Matrix4x4)>(&::UnityEngine::Graphics::Internal_DrawMeshNow2)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xb57c8f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"Internal_DrawMeshNow2", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.Internal_DrawTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Internal_DrawTextureArguments>)>(&::UnityEngine::Graphics::Internal_DrawTexture)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb57ca30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"Internal_DrawTexture", {}, {::i2c::type_of<::by_ref<::UnityEngine::Internal_DrawTextureArguments>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.Internal_RenderMeshInstanced
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::RenderParams, ::UnityEngine::Mesh*, int32_t, ::System::IntPtr, ::UnityEngine::RenderInstancedDataLayout, uint32_t)>(&::UnityEngine::Graphics::Internal_RenderMeshInstanced)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xb57ca6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"Internal_RenderMeshInstanced", {}, {::i2c::type_of<::UnityEngine::RenderParams>(), ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::RenderInstancedDataLayout>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.Internal_RenderMeshIndirect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::RenderParams, ::UnityEngine::Mesh*, ::UnityEngine::GraphicsBuffer*, int32_t, int32_t)>(&::UnityEngine::Graphics::Internal_RenderMeshIndirect)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0xb57cbf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"Internal_RenderMeshIndirect", {}, {::i2c::type_of<::UnityEngine::RenderParams>(), ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.Internal_DrawMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Mesh*, int32_t, ::UnityEngine::Matrix4x4, ::UnityEngine::Material*, int32_t, ::UnityEngine::Camera*, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Rendering::ShadowCastingMode, bool, ::UnityEngine::Transform*, ::UnityEngine::Rendering::LightProbeUsage, ::UnityEngine::LightProbeProxyVolume*)>(&::UnityEngine::Graphics::Internal_DrawMesh)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0xb57cdb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"Internal_DrawMesh", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>(), ::i2c::type_of<::UnityEngine::Rendering::ShadowCastingMode>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Rendering::LightProbeUsage>(), ::i2c::type_of<::UnityEngine::LightProbeProxyVolume*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.Internal_DrawMeshInstanced
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Mesh*, int32_t, ::UnityEngine::Material*, ::ArrayW<::UnityEngine::Matrix4x4>, int32_t, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Rendering::ShadowCastingMode, bool, int32_t, ::UnityEngine::Camera*, ::UnityEngine::Rendering::LightProbeUsage, ::UnityEngine::LightProbeProxyVolume*)>(&::UnityEngine::Graphics::Internal_DrawMeshInstanced)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0xb57d058;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"Internal_DrawMeshInstanced", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>(), ::i2c::type_of<::UnityEngine::Rendering::ShadowCastingMode>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Rendering::LightProbeUsage>(), ::i2c::type_of<::UnityEngine::LightProbeProxyVolume*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.Internal_DrawMeshInstancedIndirect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Mesh*, int32_t, ::UnityEngine::Material*, ::UnityEngine::Bounds, ::UnityEngine::ComputeBuffer*, int32_t, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Rendering::ShadowCastingMode, bool, int32_t, ::UnityEngine::Camera*, ::UnityEngine::Rendering::LightProbeUsage, ::UnityEngine::LightProbeProxyVolume*)>(&::UnityEngine::Graphics::Internal_DrawMeshInstancedIndirect)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0xb57d3bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"Internal_DrawMeshInstancedIndirect", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<::UnityEngine::ComputeBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>(), ::i2c::type_of<::UnityEngine::Rendering::ShadowCastingMode>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Rendering::LightProbeUsage>(), ::i2c::type_of<::UnityEngine::LightProbeProxyVolume*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.Internal_DrawProceduralNow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::MeshTopology, int32_t, int32_t)>(&::UnityEngine::Graphics::Internal_DrawProceduralNow)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb57d6a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"Internal_DrawProceduralNow", {}, {::i2c::type_of<::UnityEngine::MeshTopology>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.Blit2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Texture*, ::UnityEngine::RenderTexture*)>(&::UnityEngine::Graphics::Blit2)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xb57d6f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"Blit2", {}, {::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.Blit4
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Texture*, ::UnityEngine::RenderTexture*, ::UnityEngine::Vector2, ::UnityEngine::Vector2)>(&::UnityEngine::Graphics::Blit4)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xb57d818;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"Blit4", {}, {::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.ExecuteCommandBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*)>(&::UnityEngine::Graphics::ExecuteCommandBuffer)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xb57d96c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"ExecuteCommandBuffer", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.CheckLoadActionValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::RenderBufferLoadAction, ::StringW)>(&::UnityEngine::Graphics::CheckLoadActionValid)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xb57da68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"CheckLoadActionValid", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderBufferLoadAction>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.CheckStoreActionValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::RenderBufferStoreAction, ::StringW)>(&::UnityEngine::Graphics::CheckStoreActionValid)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xb57dad4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"CheckStoreActionValid", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderBufferStoreAction>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.SetRenderTargetImpl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::RenderTargetSetup)>(&::UnityEngine::Graphics::SetRenderTargetImpl)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0xb57db44;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"SetRenderTargetImpl", {}, {::i2c::type_of<::UnityEngine::RenderTargetSetup>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.SetRenderTargetImpl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::RenderBuffer, ::UnityEngine::RenderBuffer, int32_t, ::UnityEngine::CubemapFace, int32_t)>(&::UnityEngine::Graphics::SetRenderTargetImpl)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xb57ddec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"SetRenderTargetImpl", {}, {::i2c::type_of<::UnityEngine::RenderBuffer>(), ::i2c::type_of<::UnityEngine::RenderBuffer>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.SetRenderTargetImpl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::RenderTexture*, int32_t, ::UnityEngine::CubemapFace, int32_t)>(&::UnityEngine::Graphics::SetRenderTargetImpl)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0xb57de88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"SetRenderTargetImpl", {}, {::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.SetRenderTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::RenderTexture*, int32_t, ::UnityEngine::CubemapFace, int32_t)>(&::UnityEngine::Graphics::SetRenderTarget)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb57dfb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"SetRenderTarget", {}, {::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.SetRenderTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::RenderTargetSetup)>(&::UnityEngine::Graphics::SetRenderTarget)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xb57e030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"SetRenderTarget", {}, {::i2c::type_of<::UnityEngine::RenderTargetSetup>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.CopyTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Texture*, int32_t, ::UnityEngine::Texture*, int32_t)>(&::UnityEngine::Graphics::CopyTexture)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb57e0a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"CopyTexture", {}, {::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.CopyTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Texture*, int32_t, int32_t, ::UnityEngine::Texture*, int32_t, int32_t)>(&::UnityEngine::Graphics::CopyTexture)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xb57e11c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"CopyTexture", {}, {::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.CopyTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Texture*, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, ::UnityEngine::Texture*, int32_t, int32_t, int32_t, int32_t)>(&::UnityEngine::Graphics::CopyTexture)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xb57e1b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"CopyTexture", {}, {::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.DrawTextureImpl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rect, ::UnityEngine::Texture*, ::UnityEngine::Rect, int32_t, int32_t, int32_t, int32_t, ::UnityEngine::Color, ::UnityEngine::Material*, int32_t)>(&::UnityEngine::Graphics::DrawTextureImpl)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0xb57e2c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"DrawTextureImpl", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.DrawTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rect, ::UnityEngine::Texture*, ::UnityEngine::Rect, int32_t, int32_t, int32_t, int32_t, ::UnityEngine::Material*, int32_t)>(&::UnityEngine::Graphics::DrawTexture)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xb57e450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"DrawTexture", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.GetCachedRenderInstancedDataLayout
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::RenderInstancedDataLayout (*)(::System::Type*)>(&::UnityEngine::Graphics::GetCachedRenderInstancedDataLayout)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xb57e568;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"GetCachedRenderInstancedDataLayout", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.RenderMeshIndirect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::RenderParams>, ::UnityEngine::Mesh*, ::UnityEngine::GraphicsBuffer*, int32_t, int32_t)>(&::UnityEngine::Graphics::RenderMeshIndirect)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0xb57e958;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"RenderMeshIndirect", {}, {::i2c::type_of<::by_ref<::UnityEngine::RenderParams>>(), ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.DrawMeshNow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Mesh*, ::UnityEngine::Matrix4x4, int32_t)>(&::UnityEngine::Graphics::DrawMeshNow)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xb57ea88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"DrawMeshNow", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.DrawMeshNow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Mesh*, ::UnityEngine::Matrix4x4)>(&::UnityEngine::Graphics::DrawMeshNow)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xb57eba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"DrawMeshNow", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.DrawMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Mesh*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Material*, int32_t, ::UnityEngine::Camera*, int32_t, ::UnityEngine::MaterialPropertyBlock*, bool, bool, bool)>(&::UnityEngine::Graphics::DrawMesh)> {
  constexpr static std::size_t size = 0x214;
  constexpr static std::size_t addrs = 0xb57ec24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"DrawMesh", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.DrawMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Mesh*, ::UnityEngine::Matrix4x4, ::UnityEngine::Material*, int32_t, ::UnityEngine::Camera*, int32_t, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Rendering::ShadowCastingMode, bool, ::UnityEngine::Transform*, ::UnityEngine::Rendering::LightProbeUsage, ::UnityEngine::LightProbeProxyVolume*)>(&::UnityEngine::Graphics::DrawMesh)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0xb57ee38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"DrawMesh", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>(), ::i2c::type_of<::UnityEngine::Rendering::ShadowCastingMode>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Rendering::LightProbeUsage>(), ::i2c::type_of<::UnityEngine::LightProbeProxyVolume*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.DrawMeshInstanced
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Mesh*, int32_t, ::UnityEngine::Material*, ::ArrayW<::UnityEngine::Matrix4x4>, int32_t, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Rendering::ShadowCastingMode, bool, int32_t, ::UnityEngine::Camera*, ::UnityEngine::Rendering::LightProbeUsage, ::UnityEngine::LightProbeProxyVolume*)>(&::UnityEngine::Graphics::DrawMeshInstanced)> {
  constexpr static std::size_t size = 0x434;
  constexpr static std::size_t addrs = 0xb57efd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"DrawMeshInstanced", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>(), ::i2c::type_of<::UnityEngine::Rendering::ShadowCastingMode>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Rendering::LightProbeUsage>(), ::i2c::type_of<::UnityEngine::LightProbeProxyVolume*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.DrawMeshInstancedIndirect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Mesh*, int32_t, ::UnityEngine::Material*, ::UnityEngine::Bounds, ::UnityEngine::ComputeBuffer*, int32_t, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Rendering::ShadowCastingMode, bool, int32_t, ::UnityEngine::Camera*, ::UnityEngine::Rendering::LightProbeUsage, ::UnityEngine::LightProbeProxyVolume*)>(&::UnityEngine::Graphics::DrawMeshInstancedIndirect)> {
  constexpr static std::size_t size = 0x340;
  constexpr static std::size_t addrs = 0xb57f4a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"DrawMeshInstancedIndirect", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<::UnityEngine::ComputeBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>(), ::i2c::type_of<::UnityEngine::Rendering::ShadowCastingMode>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Rendering::LightProbeUsage>(), ::i2c::type_of<::UnityEngine::LightProbeProxyVolume*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.DrawProceduralNow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::MeshTopology, int32_t, int32_t)>(&::UnityEngine::Graphics::DrawProceduralNow)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xb57f7e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"DrawProceduralNow", {}, {::i2c::type_of<::UnityEngine::MeshTopology>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.Blit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Texture*, ::UnityEngine::RenderTexture*)>(&::UnityEngine::Graphics::Blit)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xb57f86c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"Blit", {}, {::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.Blit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Texture*, ::UnityEngine::RenderTexture*, ::UnityEngine::Vector2, ::UnityEngine::Vector2)>(&::UnityEngine::Graphics::Blit)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xb57f8d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"Blit", {}, {::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.DrawMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Mesh*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Material*, int32_t, ::UnityEngine::Camera*)>(&::UnityEngine::Graphics::DrawMesh)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0xb57f964;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"DrawMesh", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.DrawMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Mesh*, ::UnityEngine::Matrix4x4, ::UnityEngine::Material*, int32_t, ::UnityEngine::Camera*, int32_t)>(&::UnityEngine::Graphics::DrawMesh)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xb57fac4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"DrawMesh", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.DrawMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Mesh*, ::UnityEngine::Matrix4x4, ::UnityEngine::Material*, int32_t, ::UnityEngine::Camera*, int32_t, ::UnityEngine::MaterialPropertyBlock*)>(&::UnityEngine::Graphics::DrawMesh)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xb57fb90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"DrawMesh", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.DrawMeshInstanced
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Mesh*, int32_t, ::UnityEngine::Material*, ::ArrayW<::UnityEngine::Matrix4x4>, int32_t)>(&::UnityEngine::Graphics::DrawMeshInstanced)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb57fc60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"DrawMeshInstanced", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.DrawMeshInstanced
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Mesh*, int32_t, ::UnityEngine::Material*, ::ArrayW<::UnityEngine::Matrix4x4>, int32_t, ::UnityEngine::MaterialPropertyBlock*)>(&::UnityEngine::Graphics::DrawMeshInstanced)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xb57fd10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"DrawMeshInstanced", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.DrawMeshInstanced
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Mesh*, int32_t, ::UnityEngine::Material*, ::ArrayW<::UnityEngine::Matrix4x4>, int32_t, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Rendering::ShadowCastingMode, bool, int32_t, ::UnityEngine::Camera*)>(&::UnityEngine::Graphics::DrawMeshInstanced)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xb57fdcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"DrawMeshInstanced", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>(), ::i2c::type_of<::UnityEngine::Rendering::ShadowCastingMode>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.DrawMeshInstancedIndirect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Mesh*, int32_t, ::UnityEngine::Material*, ::UnityEngine::Bounds, ::UnityEngine::ComputeBuffer*, int32_t, ::UnityEngine::MaterialPropertyBlock*, ::UnityEngine::Rendering::ShadowCastingMode, bool, int32_t, ::UnityEngine::Camera*, ::UnityEngine::Rendering::LightProbeUsage)>(&::UnityEngine::Graphics::DrawMeshInstancedIndirect)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xb57fea0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"DrawMeshInstancedIndirect", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<::UnityEngine::ComputeBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>(), ::i2c::type_of<::UnityEngine::Rendering::ShadowCastingMode>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Rendering::LightProbeUsage>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.DrawTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rect, ::UnityEngine::Texture*, ::UnityEngine::Rect, int32_t, int32_t, int32_t, int32_t, ::UnityEngine::Material*)>(&::UnityEngine::Graphics::DrawTexture)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xb57ff90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"DrawTexture", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.SetRenderTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::RenderTexture*)>(&::UnityEngine::Graphics::SetRenderTarget)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xb580088;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"SetRenderTarget", {}, {::i2c::type_of<::UnityEngine::RenderTexture*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.SetRenderTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::RenderTexture*, int32_t)>(&::UnityEngine::Graphics::SetRenderTarget)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xb5800e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"SetRenderTarget", {}, {::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.Internal_SetRTSimple_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::RenderBuffer>, ::by_ref<::UnityEngine::RenderBuffer>, int32_t, ::UnityEngine::CubemapFace, int32_t)>(&::UnityEngine::Graphics::Internal_SetRTSimple_Injected)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xb57c08c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"Internal_SetRTSimple_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::RenderBuffer>>(), ::i2c::type_of<::by_ref<::UnityEngine::RenderBuffer>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.Internal_SetMRTFullSetup_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, ::by_ref<::UnityEngine::RenderBuffer>, int32_t, ::UnityEngine::CubemapFace, int32_t, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction)>(&::UnityEngine::Graphics::Internal_SetMRTFullSetup_Injected)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xb57c39c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"Internal_SetMRTFullSetup_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::by_ref<::UnityEngine::RenderBuffer>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferLoadAction>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferStoreAction>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.CopyTexture_Slice_AllMips_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, ::System::IntPtr, int32_t)>(&::UnityEngine::Graphics::CopyTexture_Slice_AllMips_Injected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb57c540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"CopyTexture_Slice_AllMips_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.CopyTexture_Slice_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, int32_t, ::System::IntPtr, int32_t, int32_t)>(&::UnityEngine::Graphics::CopyTexture_Slice_Injected)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xb57c694;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"CopyTexture_Slice_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.CopyTexture_Region_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, int32_t, int32_t, int32_t, int32_t, int32_t, ::System::IntPtr, int32_t, int32_t, int32_t, int32_t)>(&::UnityEngine::Graphics::CopyTexture_Region_Injected)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xb57c838;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"CopyTexture_Region_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.Internal_DrawMeshNow2_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, ::by_ref<::UnityEngine::Matrix4x4>)>(&::UnityEngine::Graphics::Internal_DrawMeshNow2_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb57c9dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"Internal_DrawMeshNow2_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.Internal_RenderMeshInstanced_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::RenderParams>, ::System::IntPtr, int32_t, ::System::IntPtr, ::by_ref<::UnityEngine::RenderInstancedDataLayout>, uint32_t)>(&::UnityEngine::Graphics::Internal_RenderMeshInstanced_Injected)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xb57cb7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"Internal_RenderMeshInstanced_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::RenderParams>>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::RenderInstancedDataLayout>>(), ::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.Internal_RenderMeshIndirect_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::RenderParams>, ::System::IntPtr, ::System::IntPtr, int32_t, int32_t)>(&::UnityEngine::Graphics::Internal_RenderMeshIndirect_Injected)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0xb57cd4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"Internal_RenderMeshIndirect_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::RenderParams>>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.Internal_DrawMesh_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, ::by_ref<::UnityEngine::Matrix4x4>, ::System::IntPtr, int32_t, ::System::IntPtr, ::System::IntPtr, ::UnityEngine::Rendering::ShadowCastingMode, bool, ::System::IntPtr, ::UnityEngine::Rendering::LightProbeUsage, ::System::IntPtr)>(&::UnityEngine::Graphics::Internal_DrawMesh_Injected)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xb57cf94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"Internal_DrawMesh_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::ShadowCastingMode>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::LightProbeUsage>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.Internal_DrawMeshInstanced_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, ::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, int32_t, ::System::IntPtr, ::UnityEngine::Rendering::ShadowCastingMode, bool, int32_t, ::System::IntPtr, ::UnityEngine::Rendering::LightProbeUsage, ::System::IntPtr)>(&::UnityEngine::Graphics::Internal_DrawMeshInstanced_Injected)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xb57d2f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"Internal_DrawMeshInstanced_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::ShadowCastingMode>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::LightProbeUsage>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.Internal_DrawMeshInstancedIndirect_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, ::System::IntPtr, ::by_ref<::UnityEngine::Bounds>, ::System::IntPtr, int32_t, ::System::IntPtr, ::UnityEngine::Rendering::ShadowCastingMode, bool, int32_t, ::System::IntPtr, ::UnityEngine::Rendering::LightProbeUsage, ::System::IntPtr)>(&::UnityEngine::Graphics::Internal_DrawMeshInstancedIndirect_Injected)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xb57d5e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"Internal_DrawMeshInstancedIndirect_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::ShadowCastingMode>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::LightProbeUsage>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.Blit2_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::Graphics::Blit2_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb57d7d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"Blit2_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.Blit4_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, ::by_ref<::UnityEngine::Vector2>, ::by_ref<::UnityEngine::Vector2>)>(&::UnityEngine::Graphics::Blit4_Injected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb57d910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"Blit4_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Graphics.ExecuteCommandBuffer_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::Graphics::ExecuteCommandBuffer_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb57da2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"ExecuteCommandBuffer_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Graphics::setStaticF_kMaxDrawMeshInstanceCount(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "kMaxDrawMeshInstanceCount", ::UnityEngine::Graphics*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Graphics::getStaticF_kMaxDrawMeshInstanceCount()  {
return ::cordl_internals::getStaticField<int32_t, "kMaxDrawMeshInstanceCount", ::UnityEngine::Graphics*>();
}
inline void UnityEngine::Graphics::setStaticF_s_RenderInstancedDataLayouts(::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::RenderInstancedDataLayout>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::RenderInstancedDataLayout>*, "s_RenderInstancedDataLayouts", ::UnityEngine::Graphics*>(std::forward<::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::RenderInstancedDataLayout>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::RenderInstancedDataLayout>* UnityEngine::Graphics::getStaticF_s_RenderInstancedDataLayouts()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<int32_t,::UnityEngine::RenderInstancedDataLayout>*, "s_RenderInstancedDataLayouts", ::UnityEngine::Graphics*>();
}
inline int32_t UnityEngine::Graphics::Internal_GetMaxDrawMeshInstanceCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"Internal_GetMaxDrawMeshInstanceCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline ::UnityEngine::Rendering::GraphicsTier UnityEngine::Graphics::get_activeTier()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"get_activeTier", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::GraphicsTier>(nullptr, ___internal_method);
}
inline void UnityEngine::Graphics::set_activeTier(::UnityEngine::Rendering::GraphicsTier  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"set_activeTier", {}, {::i2c::type_of<::UnityEngine::Rendering::GraphicsTier>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool UnityEngine::Graphics::GetPreserveFramebufferAlpha()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"GetPreserveFramebufferAlpha", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool UnityEngine::Graphics::get_preserveFramebufferAlpha()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"get_preserveFramebufferAlpha", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline ::UnityEngine::Rendering::OpenGLESVersion UnityEngine::Graphics::GetMinOpenGLESVersion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"GetMinOpenGLESVersion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::OpenGLESVersion>(nullptr, ___internal_method);
}
inline ::UnityEngine::Rendering::OpenGLESVersion UnityEngine::Graphics::get_minOpenGLESVersion()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"get_minOpenGLESVersion", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::OpenGLESVersion>(nullptr, ___internal_method);
}
inline void UnityEngine::Graphics::Internal_SetNullRT()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"Internal_SetNullRT", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::Graphics::Internal_SetRTSimple(::UnityEngine::RenderBuffer  color, ::UnityEngine::RenderBuffer  depth, int32_t  mip, ::UnityEngine::CubemapFace  face, int32_t  depthSlice)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"Internal_SetRTSimple", {}, {::i2c::type_of<::UnityEngine::RenderBuffer>(), ::i2c::type_of<::UnityEngine::RenderBuffer>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, color, depth, mip, face, depthSlice);
}
inline void UnityEngine::Graphics::Internal_SetMRTFullSetup(/* [NotNull] */ ::ArrayW<::UnityEngine::RenderBuffer>  color, ::UnityEngine::RenderBuffer  depth, int32_t  mip, ::UnityEngine::CubemapFace  face, int32_t  depthSlice, /* [NotNull] */ ::ArrayW<::UnityEngine::Rendering::RenderBufferLoadAction>  colorLA, /* [NotNull] */ ::ArrayW<::UnityEngine::Rendering::RenderBufferStoreAction>  colorSA, ::UnityEngine::Rendering::RenderBufferLoadAction  depthLA, ::UnityEngine::Rendering::RenderBufferStoreAction  depthSA)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"Internal_SetMRTFullSetup", {}, {::i2c::type_of<::ArrayW<::UnityEngine::RenderBuffer>>(), ::i2c::type_of<::UnityEngine::RenderBuffer>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::RenderBufferLoadAction>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::RenderBufferStoreAction>>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferLoadAction>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferStoreAction>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, color, depth, mip, face, depthSlice, colorLA, colorSA, depthLA, depthSA);
}
inline void UnityEngine::Graphics::ClearRandomWriteTargets()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"ClearRandomWriteTargets", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::Graphics::CopyTexture_Slice_AllMips(::UnityEngine::Texture*  src, int32_t  srcElement, ::UnityEngine::Texture*  dst, int32_t  dstElement)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"CopyTexture_Slice_AllMips", {}, {::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, src, srcElement, dst, dstElement);
}
inline void UnityEngine::Graphics::CopyTexture_Slice(::UnityEngine::Texture*  src, int32_t  srcElement, int32_t  srcMip, ::UnityEngine::Texture*  dst, int32_t  dstElement, int32_t  dstMip)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"CopyTexture_Slice", {}, {::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, src, srcElement, srcMip, dst, dstElement, dstMip);
}
inline void UnityEngine::Graphics::CopyTexture_Region(::UnityEngine::Texture*  src, int32_t  srcElement, int32_t  srcMip, int32_t  srcX, int32_t  srcY, int32_t  srcWidth, int32_t  srcHeight, ::UnityEngine::Texture*  dst, int32_t  dstElement, int32_t  dstMip, int32_t  dstX, int32_t  dstY)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"CopyTexture_Region", {}, {::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, src, srcElement, srcMip, srcX, srcY, srcWidth, srcHeight, dst, dstElement, dstMip, dstX, dstY);
}
inline void UnityEngine::Graphics::Internal_DrawMeshNow2(/* [NotNull] */ ::UnityEngine::Mesh*  mesh, int32_t  subsetIndex, ::UnityEngine::Matrix4x4  matrix)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"Internal_DrawMeshNow2", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mesh, subsetIndex, matrix);
}
inline void UnityEngine::Graphics::Internal_DrawTexture(::by_ref<::UnityEngine::Internal_DrawTextureArguments>  args)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"Internal_DrawTexture", {}, {::i2c::type_of<::by_ref<::UnityEngine::Internal_DrawTextureArguments>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, args);
}
inline void UnityEngine::Graphics::Internal_RenderMeshInstanced(::UnityEngine::RenderParams  rparams, /* [NotNull] */ ::UnityEngine::Mesh*  mesh, int32_t  submeshIndex, ::System::IntPtr  instanceData, ::UnityEngine::RenderInstancedDataLayout  layout, uint32_t  instanceCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"Internal_RenderMeshInstanced", {}, {::i2c::type_of<::UnityEngine::RenderParams>(), ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::RenderInstancedDataLayout>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, rparams, mesh, submeshIndex, instanceData, layout, instanceCount);
}
inline void UnityEngine::Graphics::Internal_RenderMeshIndirect(::UnityEngine::RenderParams  rparams, /* [NotNull] */ ::UnityEngine::Mesh*  mesh, /* [NotNull] */ ::UnityEngine::GraphicsBuffer*  argsBuffer, int32_t  commandCount, int32_t  startCommand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"Internal_RenderMeshIndirect", {}, {::i2c::type_of<::UnityEngine::RenderParams>(), ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, rparams, mesh, argsBuffer, commandCount, startCommand);
}
inline void UnityEngine::Graphics::Internal_DrawMesh(::UnityEngine::Mesh*  mesh, int32_t  submeshIndex, ::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  layer, ::UnityEngine::Camera*  camera, ::UnityEngine::MaterialPropertyBlock*  properties, ::UnityEngine::Rendering::ShadowCastingMode  castShadows, bool  receiveShadows, ::UnityEngine::Transform*  probeAnchor, ::UnityEngine::Rendering::LightProbeUsage  lightProbeUsage, ::UnityEngine::LightProbeProxyVolume*  lightProbeProxyVolume)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"Internal_DrawMesh", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>(), ::i2c::type_of<::UnityEngine::Rendering::ShadowCastingMode>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Rendering::LightProbeUsage>(), ::i2c::type_of<::UnityEngine::LightProbeProxyVolume*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mesh, submeshIndex, matrix, material, layer, camera, properties, castShadows, receiveShadows, probeAnchor, lightProbeUsage, lightProbeProxyVolume);
}
inline void UnityEngine::Graphics::Internal_DrawMeshInstanced(/* [NotNull] */ ::UnityEngine::Mesh*  mesh, int32_t  submeshIndex, /* [NotNull] */ ::UnityEngine::Material*  material, ::ArrayW<::UnityEngine::Matrix4x4>  matrices, int32_t  count, ::UnityEngine::MaterialPropertyBlock*  properties, ::UnityEngine::Rendering::ShadowCastingMode  castShadows, bool  receiveShadows, int32_t  layer, ::UnityEngine::Camera*  camera, ::UnityEngine::Rendering::LightProbeUsage  lightProbeUsage, ::UnityEngine::LightProbeProxyVolume*  lightProbeProxyVolume)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"Internal_DrawMeshInstanced", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>(), ::i2c::type_of<::UnityEngine::Rendering::ShadowCastingMode>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Rendering::LightProbeUsage>(), ::i2c::type_of<::UnityEngine::LightProbeProxyVolume*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mesh, submeshIndex, material, matrices, count, properties, castShadows, receiveShadows, layer, camera, lightProbeUsage, lightProbeProxyVolume);
}
inline void UnityEngine::Graphics::Internal_DrawMeshInstancedIndirect(/* [NotNull] */ ::UnityEngine::Mesh*  mesh, int32_t  submeshIndex, /* [NotNull] */ ::UnityEngine::Material*  material, ::UnityEngine::Bounds  bounds, ::UnityEngine::ComputeBuffer*  bufferWithArgs, int32_t  argsOffset, ::UnityEngine::MaterialPropertyBlock*  properties, ::UnityEngine::Rendering::ShadowCastingMode  castShadows, bool  receiveShadows, int32_t  layer, ::UnityEngine::Camera*  camera, ::UnityEngine::Rendering::LightProbeUsage  lightProbeUsage, ::UnityEngine::LightProbeProxyVolume*  lightProbeProxyVolume)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"Internal_DrawMeshInstancedIndirect", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<::UnityEngine::ComputeBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>(), ::i2c::type_of<::UnityEngine::Rendering::ShadowCastingMode>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Rendering::LightProbeUsage>(), ::i2c::type_of<::UnityEngine::LightProbeProxyVolume*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mesh, submeshIndex, material, bounds, bufferWithArgs, argsOffset, properties, castShadows, receiveShadows, layer, camera, lightProbeUsage, lightProbeProxyVolume);
}
inline void UnityEngine::Graphics::Internal_DrawProceduralNow(::UnityEngine::MeshTopology  topology, int32_t  vertexCount, int32_t  instanceCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"Internal_DrawProceduralNow", {}, {::i2c::type_of<::UnityEngine::MeshTopology>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, topology, vertexCount, instanceCount);
}
inline void UnityEngine::Graphics::Blit2(::UnityEngine::Texture*  source, ::UnityEngine::RenderTexture*  dest)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"Blit2", {}, {::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source, dest);
}
inline void UnityEngine::Graphics::Blit4(::UnityEngine::Texture*  source, ::UnityEngine::RenderTexture*  dest, ::UnityEngine::Vector2  scale, ::UnityEngine::Vector2  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"Blit4", {}, {::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source, dest, scale, offset);
}
inline void UnityEngine::Graphics::ExecuteCommandBuffer(/* [NotNull] */ ::UnityEngine::Rendering::CommandBuffer*  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"ExecuteCommandBuffer", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, buffer);
}
inline void UnityEngine::Graphics::CheckLoadActionValid(::UnityEngine::Rendering::RenderBufferLoadAction  load, ::StringW  bufferType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"CheckLoadActionValid", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderBufferLoadAction>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, load, bufferType);
}
inline void UnityEngine::Graphics::CheckStoreActionValid(::UnityEngine::Rendering::RenderBufferStoreAction  store, ::StringW  bufferType)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"CheckStoreActionValid", {}, {::i2c::type_of<::UnityEngine::Rendering::RenderBufferStoreAction>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, store, bufferType);
}
inline void UnityEngine::Graphics::SetRenderTargetImpl(::UnityEngine::RenderTargetSetup  setup)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"SetRenderTargetImpl", {}, {::i2c::type_of<::UnityEngine::RenderTargetSetup>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, setup);
}
inline void UnityEngine::Graphics::SetRenderTargetImpl(::UnityEngine::RenderBuffer  colorBuffer, ::UnityEngine::RenderBuffer  depthBuffer, int32_t  mipLevel, ::UnityEngine::CubemapFace  face, int32_t  depthSlice)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"SetRenderTargetImpl", {}, {::i2c::type_of<::UnityEngine::RenderBuffer>(), ::i2c::type_of<::UnityEngine::RenderBuffer>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, colorBuffer, depthBuffer, mipLevel, face, depthSlice);
}
inline void UnityEngine::Graphics::SetRenderTargetImpl(::UnityEngine::RenderTexture*  rt, int32_t  mipLevel, ::UnityEngine::CubemapFace  face, int32_t  depthSlice)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"SetRenderTargetImpl", {}, {::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, rt, mipLevel, face, depthSlice);
}
inline void UnityEngine::Graphics::SetRenderTarget(::UnityEngine::RenderTexture*  rt, /* [DefaultValue("0")] */ int32_t  mipLevel, /* [DefaultValue("CubemapFace.Unknown")] */ ::UnityEngine::CubemapFace  face, /* [DefaultValue("0")] */ int32_t  depthSlice)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"SetRenderTarget", {}, {::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, rt, mipLevel, face, depthSlice);
}
inline void UnityEngine::Graphics::SetRenderTarget(::UnityEngine::RenderTargetSetup  setup)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"SetRenderTarget", {}, {::i2c::type_of<::UnityEngine::RenderTargetSetup>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, setup);
}
inline void UnityEngine::Graphics::CopyTexture(::UnityEngine::Texture*  src, int32_t  srcElement, ::UnityEngine::Texture*  dst, int32_t  dstElement)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"CopyTexture", {}, {::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, src, srcElement, dst, dstElement);
}
inline void UnityEngine::Graphics::CopyTexture(::UnityEngine::Texture*  src, int32_t  srcElement, int32_t  srcMip, ::UnityEngine::Texture*  dst, int32_t  dstElement, int32_t  dstMip)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"CopyTexture", {}, {::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, src, srcElement, srcMip, dst, dstElement, dstMip);
}
inline void UnityEngine::Graphics::CopyTexture(::UnityEngine::Texture*  src, int32_t  srcElement, int32_t  srcMip, int32_t  srcX, int32_t  srcY, int32_t  srcWidth, int32_t  srcHeight, ::UnityEngine::Texture*  dst, int32_t  dstElement, int32_t  dstMip, int32_t  dstX, int32_t  dstY)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"CopyTexture", {}, {::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, src, srcElement, srcMip, srcX, srcY, srcWidth, srcHeight, dst, dstElement, dstMip, dstX, dstY);
}
inline void UnityEngine::Graphics::DrawTextureImpl(::UnityEngine::Rect  screenRect, ::UnityEngine::Texture*  texture, ::UnityEngine::Rect  sourceRect, int32_t  leftBorder, int32_t  rightBorder, int32_t  topBorder, int32_t  bottomBorder, ::UnityEngine::Color  color, ::UnityEngine::Material*  mat, int32_t  pass)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"DrawTextureImpl", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, screenRect, texture, sourceRect, leftBorder, rightBorder, topBorder, bottomBorder, color, mat, pass);
}
inline void UnityEngine::Graphics::DrawTexture(::UnityEngine::Rect  screenRect, ::UnityEngine::Texture*  texture, ::UnityEngine::Rect  sourceRect, int32_t  leftBorder, int32_t  rightBorder, int32_t  topBorder, int32_t  bottomBorder, /* [DefaultValue("null")] */ ::UnityEngine::Material*  mat, /* [DefaultValue("-1")] */ int32_t  pass)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"DrawTexture", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, screenRect, texture, sourceRect, leftBorder, rightBorder, topBorder, bottomBorder, mat, pass);
}
inline ::UnityEngine::RenderInstancedDataLayout UnityEngine::Graphics::GetCachedRenderInstancedDataLayout(::System::Type*  type)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"GetCachedRenderInstancedDataLayout", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::RenderInstancedDataLayout>(nullptr, ___internal_method, type);
}
template<typename T>
requires(::cordl_internals::value_type_constraint<T> && ::cordl_internals::default_constructor_constraint<T>)
inline void UnityEngine::Graphics::RenderMeshInstanced(/* [IsReadOnly] */ ::by_ref<::UnityEngine::RenderParams>  rparams, ::UnityEngine::Mesh*  mesh, int32_t  submeshIndex, ::System::Collections::Generic::List_1<T>*  instanceData, /* [DefaultValue("-1")] */ int32_t  instanceCount, /* [DefaultValue("0")] */ int32_t  startInstance)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Graphics*>(),
                    {"RenderMeshInstanced", {::i2c::class_of<T>()}, {::i2c::type_of<::by_ref<::UnityEngine::RenderParams>>(), ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Collections::Generic::List_1<T>*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, rparams, mesh, submeshIndex, instanceData, instanceCount, startInstance);
}
inline void UnityEngine::Graphics::RenderMeshIndirect(/* [IsReadOnly] */ ::by_ref<::UnityEngine::RenderParams>  rparams, ::UnityEngine::Mesh*  mesh, ::UnityEngine::GraphicsBuffer*  argsBuffer, /* [DefaultValue("1")] */ int32_t  commandCount, /* [DefaultValue("0")] */ int32_t  startCommand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"RenderMeshIndirect", {}, {::i2c::type_of<::by_ref<::UnityEngine::RenderParams>>(), ::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::UnityEngine::GraphicsBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, rparams, mesh, argsBuffer, commandCount, startCommand);
}
inline void UnityEngine::Graphics::DrawMeshNow(::UnityEngine::Mesh*  mesh, ::UnityEngine::Matrix4x4  matrix, int32_t  materialIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"DrawMeshNow", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mesh, matrix, materialIndex);
}
inline void UnityEngine::Graphics::DrawMeshNow(::UnityEngine::Mesh*  mesh, ::UnityEngine::Matrix4x4  matrix)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"DrawMeshNow", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::UnityEngine::Matrix4x4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mesh, matrix);
}
inline void UnityEngine::Graphics::DrawMesh(::UnityEngine::Mesh*  mesh, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Material*  material, int32_t  layer, /* [DefaultValue("null")] */ ::UnityEngine::Camera*  camera, /* [DefaultValue("0")] */ int32_t  submeshIndex, /* [DefaultValue("null")] */ ::UnityEngine::MaterialPropertyBlock*  properties, /* [DefaultValue("true")] */ bool  castShadows, /* [DefaultValue("true")] */ bool  receiveShadows, /* [DefaultValue("true")] */ bool  useLightProbes)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"DrawMesh", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mesh, position, rotation, material, layer, camera, submeshIndex, properties, castShadows, receiveShadows, useLightProbes);
}
inline void UnityEngine::Graphics::DrawMesh(::UnityEngine::Mesh*  mesh, ::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  layer, ::UnityEngine::Camera*  camera, int32_t  submeshIndex, ::UnityEngine::MaterialPropertyBlock*  properties, ::UnityEngine::Rendering::ShadowCastingMode  castShadows, bool  receiveShadows, ::UnityEngine::Transform*  probeAnchor, ::UnityEngine::Rendering::LightProbeUsage  lightProbeUsage, /* [DefaultValue("null")] */ ::UnityEngine::LightProbeProxyVolume*  lightProbeProxyVolume)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"DrawMesh", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>(), ::i2c::type_of<::UnityEngine::Rendering::ShadowCastingMode>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Rendering::LightProbeUsage>(), ::i2c::type_of<::UnityEngine::LightProbeProxyVolume*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mesh, matrix, material, layer, camera, submeshIndex, properties, castShadows, receiveShadows, probeAnchor, lightProbeUsage, lightProbeProxyVolume);
}
inline void UnityEngine::Graphics::DrawMeshInstanced(::UnityEngine::Mesh*  mesh, int32_t  submeshIndex, ::UnityEngine::Material*  material, ::ArrayW<::UnityEngine::Matrix4x4>  matrices, /* [DefaultValue("matrices.Length")] */ int32_t  count, /* [DefaultValue("null")] */ ::UnityEngine::MaterialPropertyBlock*  properties, /* [DefaultValue("ShadowCastingMode.On")] */ ::UnityEngine::Rendering::ShadowCastingMode  castShadows, /* [DefaultValue("true")] */ bool  receiveShadows, /* [DefaultValue("0")] */ int32_t  layer, /* [DefaultValue("null")] */ ::UnityEngine::Camera*  camera, /* [DefaultValue("LightProbeUsage.BlendProbes")] */ ::UnityEngine::Rendering::LightProbeUsage  lightProbeUsage, /* [DefaultValue("null")] */ ::UnityEngine::LightProbeProxyVolume*  lightProbeProxyVolume)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"DrawMeshInstanced", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>(), ::i2c::type_of<::UnityEngine::Rendering::ShadowCastingMode>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Rendering::LightProbeUsage>(), ::i2c::type_of<::UnityEngine::LightProbeProxyVolume*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mesh, submeshIndex, material, matrices, count, properties, castShadows, receiveShadows, layer, camera, lightProbeUsage, lightProbeProxyVolume);
}
inline void UnityEngine::Graphics::DrawMeshInstancedIndirect(::UnityEngine::Mesh*  mesh, int32_t  submeshIndex, ::UnityEngine::Material*  material, ::UnityEngine::Bounds  bounds, ::UnityEngine::ComputeBuffer*  bufferWithArgs, /* [DefaultValue("0")] */ int32_t  argsOffset, /* [DefaultValue("null")] */ ::UnityEngine::MaterialPropertyBlock*  properties, /* [DefaultValue("ShadowCastingMode.On")] */ ::UnityEngine::Rendering::ShadowCastingMode  castShadows, /* [DefaultValue("true")] */ bool  receiveShadows, /* [DefaultValue("0")] */ int32_t  layer, /* [DefaultValue("null")] */ ::UnityEngine::Camera*  camera, /* [DefaultValue("LightProbeUsage.BlendProbes")] */ ::UnityEngine::Rendering::LightProbeUsage  lightProbeUsage, /* [DefaultValue("null")] */ ::UnityEngine::LightProbeProxyVolume*  lightProbeProxyVolume)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"DrawMeshInstancedIndirect", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<::UnityEngine::ComputeBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>(), ::i2c::type_of<::UnityEngine::Rendering::ShadowCastingMode>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Rendering::LightProbeUsage>(), ::i2c::type_of<::UnityEngine::LightProbeProxyVolume*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mesh, submeshIndex, material, bounds, bufferWithArgs, argsOffset, properties, castShadows, receiveShadows, layer, camera, lightProbeUsage, lightProbeProxyVolume);
}
inline void UnityEngine::Graphics::DrawProceduralNow(::UnityEngine::MeshTopology  topology, int32_t  vertexCount, int32_t  instanceCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"DrawProceduralNow", {}, {::i2c::type_of<::UnityEngine::MeshTopology>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, topology, vertexCount, instanceCount);
}
inline void UnityEngine::Graphics::Blit(::UnityEngine::Texture*  source, ::UnityEngine::RenderTexture*  dest)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"Blit", {}, {::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source, dest);
}
inline void UnityEngine::Graphics::Blit(::UnityEngine::Texture*  source, ::UnityEngine::RenderTexture*  dest, ::UnityEngine::Vector2  scale, ::UnityEngine::Vector2  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"Blit", {}, {::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source, dest, scale, offset);
}
inline void UnityEngine::Graphics::DrawMesh(::UnityEngine::Mesh*  mesh, ::UnityEngine::Vector3  position, ::UnityEngine::Quaternion  rotation, ::UnityEngine::Material*  material, int32_t  layer, ::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"DrawMesh", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mesh, position, rotation, material, layer, camera);
}
inline void UnityEngine::Graphics::DrawMesh(::UnityEngine::Mesh*  mesh, ::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  layer, ::UnityEngine::Camera*  camera, int32_t  submeshIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"DrawMesh", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mesh, matrix, material, layer, camera, submeshIndex);
}
inline void UnityEngine::Graphics::DrawMesh(::UnityEngine::Mesh*  mesh, ::UnityEngine::Matrix4x4  matrix, ::UnityEngine::Material*  material, int32_t  layer, ::UnityEngine::Camera*  camera, int32_t  submeshIndex, ::UnityEngine::MaterialPropertyBlock*  properties)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"DrawMesh", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mesh, matrix, material, layer, camera, submeshIndex, properties);
}
inline void UnityEngine::Graphics::DrawMeshInstanced(::UnityEngine::Mesh*  mesh, int32_t  submeshIndex, ::UnityEngine::Material*  material, ::ArrayW<::UnityEngine::Matrix4x4>  matrices, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"DrawMeshInstanced", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mesh, submeshIndex, material, matrices, count);
}
inline void UnityEngine::Graphics::DrawMeshInstanced(::UnityEngine::Mesh*  mesh, int32_t  submeshIndex, ::UnityEngine::Material*  material, ::ArrayW<::UnityEngine::Matrix4x4>  matrices, int32_t  count, ::UnityEngine::MaterialPropertyBlock*  properties)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"DrawMeshInstanced", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mesh, submeshIndex, material, matrices, count, properties);
}
inline void UnityEngine::Graphics::DrawMeshInstanced(::UnityEngine::Mesh*  mesh, int32_t  submeshIndex, ::UnityEngine::Material*  material, ::ArrayW<::UnityEngine::Matrix4x4>  matrices, int32_t  count, ::UnityEngine::MaterialPropertyBlock*  properties, ::UnityEngine::Rendering::ShadowCastingMode  castShadows, bool  receiveShadows, int32_t  layer, ::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"DrawMeshInstanced", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>(), ::i2c::type_of<::UnityEngine::Rendering::ShadowCastingMode>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mesh, submeshIndex, material, matrices, count, properties, castShadows, receiveShadows, layer, camera);
}
inline void UnityEngine::Graphics::DrawMeshInstancedIndirect(::UnityEngine::Mesh*  mesh, int32_t  submeshIndex, ::UnityEngine::Material*  material, ::UnityEngine::Bounds  bounds, ::UnityEngine::ComputeBuffer*  bufferWithArgs, int32_t  argsOffset, ::UnityEngine::MaterialPropertyBlock*  properties, ::UnityEngine::Rendering::ShadowCastingMode  castShadows, bool  receiveShadows, int32_t  layer, ::UnityEngine::Camera*  camera, ::UnityEngine::Rendering::LightProbeUsage  lightProbeUsage)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"DrawMeshInstancedIndirect", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Bounds>(), ::i2c::type_of<::UnityEngine::ComputeBuffer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>(), ::i2c::type_of<::UnityEngine::Rendering::ShadowCastingMode>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::UnityEngine::Rendering::LightProbeUsage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mesh, submeshIndex, material, bounds, bufferWithArgs, argsOffset, properties, castShadows, receiveShadows, layer, camera, lightProbeUsage);
}
inline void UnityEngine::Graphics::DrawTexture(::UnityEngine::Rect  screenRect, ::UnityEngine::Texture*  texture, ::UnityEngine::Rect  sourceRect, int32_t  leftBorder, int32_t  rightBorder, int32_t  topBorder, int32_t  bottomBorder, ::UnityEngine::Material*  mat)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"DrawTexture", {}, {::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, screenRect, texture, sourceRect, leftBorder, rightBorder, topBorder, bottomBorder, mat);
}
inline void UnityEngine::Graphics::SetRenderTarget(::UnityEngine::RenderTexture*  rt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"SetRenderTarget", {}, {::i2c::type_of<::UnityEngine::RenderTexture*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, rt);
}
inline void UnityEngine::Graphics::SetRenderTarget(::UnityEngine::RenderTexture*  rt, int32_t  mipLevel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"SetRenderTarget", {}, {::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, rt, mipLevel);
}
inline void UnityEngine::Graphics::Internal_SetRTSimple_Injected(::by_ref<::UnityEngine::RenderBuffer>  color, ::by_ref<::UnityEngine::RenderBuffer>  depth, int32_t  mip, ::UnityEngine::CubemapFace  face, int32_t  depthSlice)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"Internal_SetRTSimple_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::RenderBuffer>>(), ::i2c::type_of<::by_ref<::UnityEngine::RenderBuffer>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, color, depth, mip, face, depthSlice);
}
inline void UnityEngine::Graphics::Internal_SetMRTFullSetup_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  color, ::by_ref<::UnityEngine::RenderBuffer>  depth, int32_t  mip, ::UnityEngine::CubemapFace  face, int32_t  depthSlice, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  colorLA, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  colorSA, ::UnityEngine::Rendering::RenderBufferLoadAction  depthLA, ::UnityEngine::Rendering::RenderBufferStoreAction  depthSA)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"Internal_SetMRTFullSetup_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::by_ref<::UnityEngine::RenderBuffer>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferLoadAction>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferStoreAction>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, color, depth, mip, face, depthSlice, colorLA, colorSA, depthLA, depthSA);
}
inline void UnityEngine::Graphics::CopyTexture_Slice_AllMips_Injected(::System::IntPtr  src, int32_t  srcElement, ::System::IntPtr  dst, int32_t  dstElement)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"CopyTexture_Slice_AllMips_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, src, srcElement, dst, dstElement);
}
inline void UnityEngine::Graphics::CopyTexture_Slice_Injected(::System::IntPtr  src, int32_t  srcElement, int32_t  srcMip, ::System::IntPtr  dst, int32_t  dstElement, int32_t  dstMip)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"CopyTexture_Slice_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, src, srcElement, srcMip, dst, dstElement, dstMip);
}
inline void UnityEngine::Graphics::CopyTexture_Region_Injected(::System::IntPtr  src, int32_t  srcElement, int32_t  srcMip, int32_t  srcX, int32_t  srcY, int32_t  srcWidth, int32_t  srcHeight, ::System::IntPtr  dst, int32_t  dstElement, int32_t  dstMip, int32_t  dstX, int32_t  dstY)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"CopyTexture_Region_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, src, srcElement, srcMip, srcX, srcY, srcWidth, srcHeight, dst, dstElement, dstMip, dstX, dstY);
}
inline void UnityEngine::Graphics::Internal_DrawMeshNow2_Injected(::System::IntPtr  mesh, int32_t  subsetIndex, ::by_ref<::UnityEngine::Matrix4x4>  matrix)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"Internal_DrawMeshNow2_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mesh, subsetIndex, matrix);
}
inline void UnityEngine::Graphics::Internal_RenderMeshInstanced_Injected(::by_ref<::UnityEngine::RenderParams>  rparams, ::System::IntPtr  mesh, int32_t  submeshIndex, ::System::IntPtr  instanceData, ::by_ref<::UnityEngine::RenderInstancedDataLayout>  layout, uint32_t  instanceCount)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"Internal_RenderMeshInstanced_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::RenderParams>>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::RenderInstancedDataLayout>>(), ::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, rparams, mesh, submeshIndex, instanceData, layout, instanceCount);
}
inline void UnityEngine::Graphics::Internal_RenderMeshIndirect_Injected(::by_ref<::UnityEngine::RenderParams>  rparams, ::System::IntPtr  mesh, ::System::IntPtr  argsBuffer, int32_t  commandCount, int32_t  startCommand)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"Internal_RenderMeshIndirect_Injected", {}, {::i2c::type_of<::by_ref<::UnityEngine::RenderParams>>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, rparams, mesh, argsBuffer, commandCount, startCommand);
}
inline void UnityEngine::Graphics::Internal_DrawMesh_Injected(::System::IntPtr  mesh, int32_t  submeshIndex, ::by_ref<::UnityEngine::Matrix4x4>  matrix, ::System::IntPtr  material, int32_t  layer, ::System::IntPtr  camera, ::System::IntPtr  properties, ::UnityEngine::Rendering::ShadowCastingMode  castShadows, bool  receiveShadows, ::System::IntPtr  probeAnchor, ::UnityEngine::Rendering::LightProbeUsage  lightProbeUsage, ::System::IntPtr  lightProbeProxyVolume)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"Internal_DrawMesh_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::ShadowCastingMode>(), ::i2c::type_of<bool>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::LightProbeUsage>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mesh, submeshIndex, matrix, material, layer, camera, properties, castShadows, receiveShadows, probeAnchor, lightProbeUsage, lightProbeProxyVolume);
}
inline void UnityEngine::Graphics::Internal_DrawMeshInstanced_Injected(::System::IntPtr  mesh, int32_t  submeshIndex, ::System::IntPtr  material, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  matrices, int32_t  count, ::System::IntPtr  properties, ::UnityEngine::Rendering::ShadowCastingMode  castShadows, bool  receiveShadows, int32_t  layer, ::System::IntPtr  camera, ::UnityEngine::Rendering::LightProbeUsage  lightProbeUsage, ::System::IntPtr  lightProbeProxyVolume)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"Internal_DrawMeshInstanced_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::ShadowCastingMode>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::LightProbeUsage>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mesh, submeshIndex, material, matrices, count, properties, castShadows, receiveShadows, layer, camera, lightProbeUsage, lightProbeProxyVolume);
}
inline void UnityEngine::Graphics::Internal_DrawMeshInstancedIndirect_Injected(::System::IntPtr  mesh, int32_t  submeshIndex, ::System::IntPtr  material, ::by_ref<::UnityEngine::Bounds>  bounds, ::System::IntPtr  bufferWithArgs, int32_t  argsOffset, ::System::IntPtr  properties, ::UnityEngine::Rendering::ShadowCastingMode  castShadows, bool  receiveShadows, int32_t  layer, ::System::IntPtr  camera, ::UnityEngine::Rendering::LightProbeUsage  lightProbeUsage, ::System::IntPtr  lightProbeProxyVolume)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"Internal_DrawMeshInstancedIndirect_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::ShadowCastingMode>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::LightProbeUsage>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mesh, submeshIndex, material, bounds, bufferWithArgs, argsOffset, properties, castShadows, receiveShadows, layer, camera, lightProbeUsage, lightProbeProxyVolume);
}
inline void UnityEngine::Graphics::Blit2_Injected(::System::IntPtr  source, ::System::IntPtr  dest)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"Blit2_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source, dest);
}
inline void UnityEngine::Graphics::Blit4_Injected(::System::IntPtr  source, ::System::IntPtr  dest, ::by_ref<::UnityEngine::Vector2>  scale, ::by_ref<::UnityEngine::Vector2>  offset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"Blit4_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, source, dest, scale, offset);
}
inline void UnityEngine::Graphics::ExecuteCommandBuffer_Injected(::System::IntPtr  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Graphics*>(),
                        {"ExecuteCommandBuffer_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, buffer);
}
// Ctor Parameters []
constexpr ::UnityEngine::Graphics::Graphics()   {
}
