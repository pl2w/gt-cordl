#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/CoreUtils.hpp"
#include "System/zzzz__IConvertible_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "UnityEngine/Rendering/zzzz__CoreUtils_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Reflection/zzzz__Assembly_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_def.hpp"
#include "UnityEngine/Rendering/zzzz__BaseCommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__ClearFlag_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__CoreUtils_def.hpp"
#include "UnityEngine/Rendering/zzzz__DepthBits_def.hpp"
#include "UnityEngine/Rendering/zzzz__LocalKeyword_def.hpp"
#include "UnityEngine/Rendering/zzzz__MSAASamples_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__RasterCommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderBufferLoadAction_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderBufferStoreAction_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_def.hpp"
#include "UnityEngine/Rendering/zzzz__RendererList_def.hpp"
#include "UnityEngine/Rendering/zzzz__ScriptableRenderContext_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShadingRateCombinerStage_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShadingRateCombiner_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShadingRateFragmentSize_def.hpp"
#include "UnityEngine/Rendering/zzzz__TextureDimension_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__ComputeBuffer_def.hpp"
#include "UnityEngine/zzzz__ComputeShader_def.hpp"
#include "UnityEngine/zzzz__CubemapArray_def.hpp"
#include "UnityEngine/zzzz__CubemapFace_def.hpp"
#include "UnityEngine/zzzz__Cubemap_def.hpp"
#include "UnityEngine/zzzz__GraphicsBuffer_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__RenderTextureFormat_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
#include "UnityEngine/zzzz__Texture3D_def.hpp"
#include "UnityEngine/zzzz__TextureFormat_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.get_blackCubeTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Cubemap> (*)()>(&::UnityEngine::Rendering::CoreUtils::get_blackCubeTexture)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0xb18ebe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"get_blackCubeTexture", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.get_magentaCubeTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Cubemap> (*)()>(&::UnityEngine::Rendering::CoreUtils::get_magentaCubeTexture)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0xb18ed6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"get_magentaCubeTexture", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.get_magentaCubeTextureArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::CubemapArray> (*)()>(&::UnityEngine::Rendering::CoreUtils::get_magentaCubeTextureArray)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0xb18eef4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"get_magentaCubeTextureArray", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.get_whiteCubeTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Cubemap> (*)()>(&::UnityEngine::Rendering::CoreUtils::get_whiteCubeTexture)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0xb18f0c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"get_whiteCubeTexture", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.get_emptyUAV
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::RenderTexture> (*)()>(&::UnityEngine::Rendering::CoreUtils::get_emptyUAV)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0xb18f250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"get_emptyUAV", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.get_emptyBuffer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::GraphicsBuffer* (*)()>(&::UnityEngine::Rendering::CoreUtils::get_emptyBuffer)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xb18f390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"get_emptyBuffer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.get_blackVolumeTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture3D> (*)()>(&::UnityEngine::Rendering::CoreUtils::get_blackVolumeTexture)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0xb18f490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"get_blackVolumeTexture", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.get_whiteVolumeTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture3D> (*)()>(&::UnityEngine::Rendering::CoreUtils::get_whiteVolumeTexture)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0xb18f61c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"get_whiteVolumeTexture", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.ClearRenderTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::ClearFlag, ::UnityEngine::Color)>(&::UnityEngine::Rendering::CoreUtils::ClearRenderTarget)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xb18f7a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"ClearRenderTarget", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::ClearFlag>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.FixupDepthSlice
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, ::UnityEngine::Rendering::RTHandle*)>(&::UnityEngine::Rendering::CoreUtils::FixupDepthSlice)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb18f7c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"FixupDepthSlice", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.FixupDepthSlice
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, ::UnityEngine::CubemapFace)>(&::UnityEngine::Rendering::CoreUtils::FixupDepthSlice)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb18f80c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"FixupDepthSlice", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::CubemapFace>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.SetRenderTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::ClearFlag, ::UnityEngine::Color, int32_t, ::UnityEngine::CubemapFace, int32_t)>(&::UnityEngine::Rendering::CoreUtils::SetRenderTarget)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xb18f820;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"SetRenderTarget", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::ClearFlag>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.SetRenderTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::ClearFlag, int32_t, ::UnityEngine::CubemapFace, int32_t)>(&::UnityEngine::Rendering::CoreUtils::SetRenderTarget)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xb18f920;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"SetRenderTarget", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::ClearFlag>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.SetRenderTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier, int32_t, ::UnityEngine::CubemapFace, int32_t)>(&::UnityEngine::Rendering::CoreUtils::SetRenderTarget)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xb18f9e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"SetRenderTarget", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.SetRenderTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::ClearFlag, int32_t, ::UnityEngine::CubemapFace, int32_t)>(&::UnityEngine::Rendering::CoreUtils::SetRenderTarget)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xb18fbcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"SetRenderTarget", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::ClearFlag>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.SetRenderTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::ClearFlag, ::UnityEngine::Color, int32_t, ::UnityEngine::CubemapFace, int32_t)>(&::UnityEngine::Rendering::CoreUtils::SetRenderTarget)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xb18fab4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"SetRenderTarget", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::ClearFlag>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.SetRenderTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>, ::UnityEngine::Rendering::RenderTargetIdentifier)>(&::UnityEngine::Rendering::CoreUtils::SetRenderTarget)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xb18fca4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"SetRenderTarget", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.SetRenderTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::ClearFlag)>(&::UnityEngine::Rendering::CoreUtils::SetRenderTarget)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xb18fe24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"SetRenderTarget", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::ClearFlag>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.SetRenderTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::ClearFlag, ::UnityEngine::Color)>(&::UnityEngine::Rendering::CoreUtils::SetRenderTarget)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xb18fd40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"SetRenderTarget", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::ClearFlag>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.SetRenderTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::ClearFlag, ::UnityEngine::Color)>(&::UnityEngine::Rendering::CoreUtils::SetRenderTarget)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xb18fecc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"SetRenderTarget", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferLoadAction>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferStoreAction>(), ::i2c::type_of<::UnityEngine::Rendering::ClearFlag>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.SetRenderTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, int32_t, ::UnityEngine::CubemapFace, int32_t)>(&::UnityEngine::Rendering::CoreUtils::SetRenderTarget)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xb18ffb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"SetRenderTarget", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferLoadAction>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferStoreAction>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.SetRenderTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::ClearFlag, ::UnityEngine::Color, int32_t, ::UnityEngine::CubemapFace, int32_t)>(&::UnityEngine::Rendering::CoreUtils::SetRenderTarget)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0xb1900dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"SetRenderTarget", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferLoadAction>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferStoreAction>(), ::i2c::type_of<::UnityEngine::Rendering::ClearFlag>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.SetRenderTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::ClearFlag)>(&::UnityEngine::Rendering::CoreUtils::SetRenderTarget)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb190234;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"SetRenderTarget", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferLoadAction>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferStoreAction>(), ::i2c::type_of<::UnityEngine::Rendering::ClearFlag>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.SetRenderTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::ClearFlag, ::UnityEngine::Color)>(&::UnityEngine::Rendering::CoreUtils::SetRenderTarget)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xb1902e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"SetRenderTarget", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferLoadAction>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferStoreAction>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferLoadAction>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferStoreAction>(), ::i2c::type_of<::UnityEngine::Rendering::ClearFlag>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.SetRenderTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, int32_t, ::UnityEngine::CubemapFace, int32_t)>(&::UnityEngine::Rendering::CoreUtils::SetRenderTarget)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0xb1903fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"SetRenderTarget", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferLoadAction>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferStoreAction>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferLoadAction>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferStoreAction>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.SetRenderTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::ClearFlag, ::UnityEngine::Color, int32_t, ::UnityEngine::CubemapFace, int32_t)>(&::UnityEngine::Rendering::CoreUtils::SetRenderTarget)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0xb190580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"SetRenderTarget", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferLoadAction>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferStoreAction>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferLoadAction>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferStoreAction>(), ::i2c::type_of<::UnityEngine::Rendering::ClearFlag>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.SetRenderTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::ClearFlag, ::UnityEngine::Color)>(&::UnityEngine::Rendering::CoreUtils::SetRenderTarget)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xb190730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"SetRenderTarget", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferLoadAction>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferStoreAction>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferLoadAction>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferStoreAction>(), ::i2c::type_of<::UnityEngine::Rendering::ClearFlag>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.SetRenderTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::ClearFlag)>(&::UnityEngine::Rendering::CoreUtils::SetRenderTarget)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xb190830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"SetRenderTarget", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferLoadAction>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferStoreAction>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferLoadAction>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferStoreAction>(), ::i2c::type_of<::UnityEngine::Rendering::ClearFlag>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.SetViewportAndClear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::ClearFlag, ::UnityEngine::Color)>(&::UnityEngine::Rendering::CoreUtils::SetViewportAndClear)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xb190918;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"SetViewportAndClear", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::ClearFlag>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.SetRenderTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::ClearFlag, ::UnityEngine::Color, int32_t, ::UnityEngine::CubemapFace, int32_t)>(&::UnityEngine::Rendering::CoreUtils::SetRenderTarget)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xb190a34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"SetRenderTarget", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::ClearFlag>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.SetRenderTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::ClearFlag, int32_t, ::UnityEngine::CubemapFace, int32_t)>(&::UnityEngine::Rendering::CoreUtils::SetRenderTarget)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xb190b40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"SetRenderTarget", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::ClearFlag>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.SetRenderTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::RTHandle*, int32_t, ::UnityEngine::CubemapFace, int32_t)>(&::UnityEngine::Rendering::CoreUtils::SetRenderTarget)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xb190be4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"SetRenderTarget", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.SetRenderTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::ClearFlag, int32_t, ::UnityEngine::CubemapFace, int32_t)>(&::UnityEngine::Rendering::CoreUtils::SetRenderTarget)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xb190db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"SetRenderTarget", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::ClearFlag>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.SetRenderTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::ClearFlag, ::UnityEngine::Color, int32_t, ::UnityEngine::CubemapFace, int32_t)>(&::UnityEngine::Rendering::CoreUtils::SetRenderTarget)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xb190c8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"SetRenderTarget", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::ClearFlag>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.SetRenderTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::ClearFlag, ::UnityEngine::Color, int32_t, ::UnityEngine::CubemapFace, int32_t)>(&::UnityEngine::Rendering::CoreUtils::SetRenderTarget)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xb190e5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"SetRenderTarget", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferLoadAction>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferStoreAction>(), ::i2c::type_of<::UnityEngine::Rendering::ClearFlag>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.SetRenderTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Rendering::ClearFlag, ::UnityEngine::Color, int32_t, ::UnityEngine::CubemapFace, int32_t)>(&::UnityEngine::Rendering::CoreUtils::SetRenderTarget)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0xb190f74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"SetRenderTarget", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferLoadAction>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferStoreAction>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferLoadAction>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferStoreAction>(), ::i2c::type_of<::UnityEngine::Rendering::ClearFlag>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.SetShadingRateFragmentSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::ShadingRateFragmentSize)>(&::UnityEngine::Rendering::CoreUtils::SetShadingRateFragmentSize)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb1910d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"SetShadingRateFragmentSize", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::ShadingRateFragmentSize>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.SetShadingRateCombiner
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::ShadingRateCombinerStage, ::UnityEngine::Rendering::ShadingRateCombiner)>(&::UnityEngine::Rendering::CoreUtils::SetShadingRateCombiner)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb1910e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"SetShadingRateCombiner", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::ShadingRateCombinerStage>(), ::i2c::type_of<::UnityEngine::Rendering::ShadingRateCombiner>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.SetShadingRateImage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier>)>(&::UnityEngine::Rendering::CoreUtils::SetShadingRateImage)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb1910fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"SetShadingRateImage", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.SetRenderTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>, ::UnityEngine::Rendering::RTHandle*)>(&::UnityEngine::Rendering::CoreUtils::SetRenderTarget)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb191110;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"SetRenderTarget", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.SetRenderTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::ClearFlag)>(&::UnityEngine::Rendering::CoreUtils::SetRenderTarget)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xb1911c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"SetRenderTarget", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::ClearFlag>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.SetRenderTarget
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::ClearFlag, ::UnityEngine::Color)>(&::UnityEngine::Rendering::CoreUtils::SetRenderTarget)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xb191274;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"SetRenderTarget", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::ClearFlag>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.SetViewport
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*)>(&::UnityEngine::Rendering::CoreUtils::SetViewport)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb1909bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"SetViewport", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.GetRenderTargetAutoName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(int32_t, int32_t, int32_t, ::UnityEngine::RenderTextureFormat, ::StringW, bool, bool, ::UnityEngine::Rendering::MSAASamples)>(&::UnityEngine::Rendering::CoreUtils::GetRenderTargetAutoName)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xb191364;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"GetRenderTargetAutoName", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::RenderTextureFormat>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Rendering::MSAASamples>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.GetRenderTargetAutoName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(int32_t, int32_t, int32_t, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::StringW, bool, bool, ::UnityEngine::Rendering::MSAASamples)>(&::UnityEngine::Rendering::CoreUtils::GetRenderTargetAutoName)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xb1916d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"GetRenderTargetAutoName", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Rendering::MSAASamples>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.GetRenderTargetAutoName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(int32_t, int32_t, int32_t, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::Rendering::TextureDimension, ::StringW, bool, bool, ::UnityEngine::Rendering::MSAASamples, bool, bool)>(&::UnityEngine::Rendering::CoreUtils::GetRenderTargetAutoName)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0xb1917d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"GetRenderTargetAutoName", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<::UnityEngine::Rendering::TextureDimension>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Rendering::MSAASamples>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.GetRenderTargetAutoName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(int32_t, int32_t, int32_t, ::StringW, ::UnityEngine::Rendering::TextureDimension, ::StringW, bool, bool, ::UnityEngine::Rendering::MSAASamples, bool, bool)>(&::UnityEngine::Rendering::CoreUtils::GetRenderTargetAutoName)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0xb191460;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"GetRenderTargetAutoName", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Rendering::TextureDimension>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Rendering::MSAASamples>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.GetTextureAutoName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(int32_t, int32_t, ::UnityEngine::TextureFormat, ::UnityEngine::Rendering::TextureDimension, ::StringW, bool, int32_t)>(&::UnityEngine::Rendering::CoreUtils::GetTextureAutoName)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xb1918e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"GetTextureAutoName", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextureFormat>(), ::i2c::type_of<::UnityEngine::Rendering::TextureDimension>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.GetTextureAutoName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(int32_t, int32_t, ::UnityEngine::Experimental::Rendering::GraphicsFormat, ::UnityEngine::Rendering::TextureDimension, ::StringW, bool, int32_t)>(&::UnityEngine::Rendering::CoreUtils::GetTextureAutoName)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xb191dd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"GetTextureAutoName", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<::UnityEngine::Rendering::TextureDimension>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.GetTextureAutoName
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(int32_t, int32_t, ::StringW, ::UnityEngine::Rendering::TextureDimension, ::StringW, bool, int32_t)>(&::UnityEngine::Rendering::CoreUtils::GetTextureAutoName)> {
  constexpr static std::size_t size = 0x408;
  constexpr static std::size_t addrs = 0xb1919cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"GetTextureAutoName", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Rendering::TextureDimension>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.ClearCubemap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::RenderTexture*, ::UnityEngine::Color, bool)>(&::UnityEngine::Rendering::CoreUtils::ClearCubemap)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0xb191ebc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"ClearCubemap", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.DrawFullScreen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Material*, ::UnityEngine::MaterialPropertyBlock*, int32_t)>(&::UnityEngine::Rendering::CoreUtils::DrawFullScreen)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xb192070;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"DrawFullScreen", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.DrawFullScreen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::RasterCommandBuffer*, ::UnityEngine::Material*, ::UnityEngine::MaterialPropertyBlock*, int32_t)>(&::UnityEngine::Rendering::CoreUtils::DrawFullScreen)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb192114;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"DrawFullScreen", {}, {::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.DrawFullScreen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Material*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::MaterialPropertyBlock*, int32_t)>(&::UnityEngine::Rendering::CoreUtils::DrawFullScreen)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xb192194;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"DrawFullScreen", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.DrawFullScreen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Material*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::MaterialPropertyBlock*, int32_t)>(&::UnityEngine::Rendering::CoreUtils::DrawFullScreen)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0xb192260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"DrawFullScreen", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.DrawFullScreen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Material*, ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::MaterialPropertyBlock*, int32_t)>(&::UnityEngine::Rendering::CoreUtils::DrawFullScreen)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xb192340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"DrawFullScreen", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.DrawFullScreen
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Material*, ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>, ::UnityEngine::MaterialPropertyBlock*, int32_t)>(&::UnityEngine::Rendering::CoreUtils::DrawFullScreen)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xb192414;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"DrawFullScreen", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>>(), ::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.ConvertSRGBToActiveColorSpace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (*)(::UnityEngine::Color)>(&::UnityEngine::Rendering::CoreUtils::ConvertSRGBToActiveColorSpace)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb1924cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"ConvertSRGBToActiveColorSpace", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.ConvertLinearToActiveColorSpace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (*)(::UnityEngine::Color)>(&::UnityEngine::Rendering::CoreUtils::ConvertLinearToActiveColorSpace)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xb192548;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"ConvertLinearToActiveColorSpace", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.CreateEngineMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (*)(::StringW)>(&::UnityEngine::Rendering::CoreUtils::CreateEngineMaterial)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0xb1925c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"CreateEngineMaterial", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.CreateEngineMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (*)(::UnityEngine::Shader*)>(&::UnityEngine::Rendering::CoreUtils::CreateEngineMaterial)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xb192740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"CreateEngineMaterial", {}, {::i2c::type_of<::UnityEngine::Shader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.SetKeyword
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::StringW, bool)>(&::UnityEngine::Rendering::CoreUtils::SetKeyword)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xb192838;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"SetKeyword", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.SetKeyword
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::ComputeShader*, ::StringW, bool)>(&::UnityEngine::Rendering::CoreUtils::SetKeyword)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb192864;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"SetKeyword", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.SetKeyword
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::BaseCommandBuffer*, ::StringW, bool)>(&::UnityEngine::Rendering::CoreUtils::SetKeyword)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb1928dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"SetKeyword", {}, {::i2c::type_of<::UnityEngine::Rendering::BaseCommandBuffer*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.SetKeyword
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Material*, ::StringW, bool)>(&::UnityEngine::Rendering::CoreUtils::SetKeyword)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xb192918;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"SetKeyword", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.SetKeyword
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Material*, ::UnityEngine::Rendering::LocalKeyword, bool)>(&::UnityEngine::Rendering::CoreUtils::SetKeyword)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xb192944;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"SetKeyword", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Rendering::LocalKeyword>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.SetKeyword
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::ComputeShader*, ::StringW, bool)>(&::UnityEngine::Rendering::CoreUtils::SetKeyword)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xb192970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"SetKeyword", {}, {::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.Destroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Object*)>(&::UnityEngine::Rendering::CoreUtils::Destroy)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xb19299c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"Destroy", {}, {::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.GetAllAssemblyTypes
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Type*>* (*)()>(&::UnityEngine::Rendering::CoreUtils::GetAllAssemblyTypes)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0xb192a24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"GetAllAssemblyTypes", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.SafeRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GraphicsBuffer*)>(&::UnityEngine::Rendering::CoreUtils::SafeRelease)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb192bbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"SafeRelease", {}, {::i2c::type_of<::UnityEngine::GraphicsBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.SafeRelease
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::ComputeBuffer*)>(&::UnityEngine::Rendering::CoreUtils::SafeRelease)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb192bcc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"SafeRelease", {}, {::i2c::type_of<::UnityEngine::ComputeBuffer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.CreateCubeMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Mesh> (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::UnityEngine::Rendering::CoreUtils::CreateCubeMesh)> {
  constexpr static std::size_t size = 0x3a4;
  constexpr static std::size_t addrs = 0xb192bdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"CreateCubeMesh", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.ArePostProcessesEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Camera*)>(&::UnityEngine::Rendering::CoreUtils::ArePostProcessesEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb192f80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"ArePostProcessesEnabled", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.AreAnimatedMaterialsEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Camera*)>(&::UnityEngine::Rendering::CoreUtils::AreAnimatedMaterialsEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb192f88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"AreAnimatedMaterialsEnabled", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.IsSceneLightingDisabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Camera*)>(&::UnityEngine::Rendering::CoreUtils::IsSceneLightingDisabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb192f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"IsSceneLightingDisabled", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.IsLightOverlapDebugEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Camera*)>(&::UnityEngine::Rendering::CoreUtils::IsLightOverlapDebugEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb192f98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"IsLightOverlapDebugEnabled", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.IsSceneViewFogEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Camera*)>(&::UnityEngine::Rendering::CoreUtils::IsSceneViewFogEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb192fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"IsSceneViewFogEnabled", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.IsSceneFilteringEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Rendering::CoreUtils::IsSceneFilteringEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb192fa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"IsSceneFilteringEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.IsSceneViewPrefabStageContextHidden
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Rendering::CoreUtils::IsSceneViewPrefabStageContextHidden)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb192fb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"IsSceneViewPrefabStageContextHidden", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.DrawRendererList
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::ScriptableRenderContext, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RendererList)>(&::UnityEngine::Rendering::CoreUtils::DrawRendererList)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb192fb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"DrawRendererList", {}, {::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RendererList>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.GetTextureHash
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::UnityEngine::Texture*)>(&::UnityEngine::Rendering::CoreUtils::GetTextureHash)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0xb192ff4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"GetTextureHash", {}, {::i2c::type_of<::UnityEngine::Texture*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.PreviousPowerOfTwo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::UnityEngine::Rendering::CoreUtils::PreviousPowerOfTwo)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xb193164;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"PreviousPowerOfTwo", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.GetMipCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t)>(&::UnityEngine::Rendering::CoreUtils::GetMipCount)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xb193190;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"GetMipCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.GetMipCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(float_t)>(&::UnityEngine::Rendering::CoreUtils::GetMipCount)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xb193250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"GetMipCount", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.DivRoundUp
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(int32_t, int32_t)>(&::UnityEngine::Rendering::CoreUtils::DivRoundUp)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xb19330c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"DivRoundUp", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.GetCorePath
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::UnityEngine::Rendering::CoreUtils::GetCorePath)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xb19331c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"GetCorePath", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.CalculateViewSpaceCorners
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Vector3> (*)(::UnityEngine::Matrix4x4, float_t)>(&::UnityEngine::Rendering::CoreUtils::CalculateViewSpaceCorners)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0xb19335c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"CalculateViewSpaceCorners", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.GetDefaultDepthStencilFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Experimental::Rendering::GraphicsFormat (*)()>(&::UnityEngine::Rendering::CoreUtils::GetDefaultDepthStencilFormat)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb193500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"GetDefaultDepthStencilFormat", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.GetDefaultDepthOnlyFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Experimental::Rendering::GraphicsFormat (*)()>(&::UnityEngine::Rendering::CoreUtils::GetDefaultDepthOnlyFormat)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xb193508;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"GetDefaultDepthOnlyFormat", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils.GetDefaultDepthBufferBits
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::DepthBits (*)()>(&::UnityEngine::Rendering::CoreUtils::GetDefaultDepthBufferBits)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb193560;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"GetDefaultDepthBufferBits", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::CoreUtils::setStaticF_lookAtList(::ArrayW<::UnityEngine::Vector3>  value)  {
::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Vector3>, "lookAtList", ::UnityEngine::Rendering::CoreUtils*>(std::forward<::ArrayW<::UnityEngine::Vector3>>(value));
}
inline ::ArrayW<::UnityEngine::Vector3> UnityEngine::Rendering::CoreUtils::getStaticF_lookAtList()  {
return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Vector3>, "lookAtList", ::UnityEngine::Rendering::CoreUtils*>();
}
inline void UnityEngine::Rendering::CoreUtils::setStaticF_upVectorList(::ArrayW<::UnityEngine::Vector3>  value)  {
::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Vector3>, "upVectorList", ::UnityEngine::Rendering::CoreUtils*>(std::forward<::ArrayW<::UnityEngine::Vector3>>(value));
}
inline ::ArrayW<::UnityEngine::Vector3> UnityEngine::Rendering::CoreUtils::getStaticF_upVectorList()  {
return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Vector3>, "upVectorList", ::UnityEngine::Rendering::CoreUtils*>();
}
inline void UnityEngine::Rendering::CoreUtils::setStaticF_m_BlackCubeTexture(::UnityW<::UnityEngine::Cubemap>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::Cubemap>, "m_BlackCubeTexture", ::UnityEngine::Rendering::CoreUtils*>(std::forward<::UnityW<::UnityEngine::Cubemap>>(value));
}
inline ::UnityW<::UnityEngine::Cubemap> UnityEngine::Rendering::CoreUtils::getStaticF_m_BlackCubeTexture()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Cubemap>, "m_BlackCubeTexture", ::UnityEngine::Rendering::CoreUtils*>();
}
inline void UnityEngine::Rendering::CoreUtils::setStaticF_m_MagentaCubeTexture(::UnityW<::UnityEngine::Cubemap>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::Cubemap>, "m_MagentaCubeTexture", ::UnityEngine::Rendering::CoreUtils*>(std::forward<::UnityW<::UnityEngine::Cubemap>>(value));
}
inline ::UnityW<::UnityEngine::Cubemap> UnityEngine::Rendering::CoreUtils::getStaticF_m_MagentaCubeTexture()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Cubemap>, "m_MagentaCubeTexture", ::UnityEngine::Rendering::CoreUtils*>();
}
inline void UnityEngine::Rendering::CoreUtils::setStaticF_m_MagentaCubeTextureArray(::UnityW<::UnityEngine::CubemapArray>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::CubemapArray>, "m_MagentaCubeTextureArray", ::UnityEngine::Rendering::CoreUtils*>(std::forward<::UnityW<::UnityEngine::CubemapArray>>(value));
}
inline ::UnityW<::UnityEngine::CubemapArray> UnityEngine::Rendering::CoreUtils::getStaticF_m_MagentaCubeTextureArray()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::CubemapArray>, "m_MagentaCubeTextureArray", ::UnityEngine::Rendering::CoreUtils*>();
}
inline void UnityEngine::Rendering::CoreUtils::setStaticF_m_WhiteCubeTexture(::UnityW<::UnityEngine::Cubemap>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::Cubemap>, "m_WhiteCubeTexture", ::UnityEngine::Rendering::CoreUtils*>(std::forward<::UnityW<::UnityEngine::Cubemap>>(value));
}
inline ::UnityW<::UnityEngine::Cubemap> UnityEngine::Rendering::CoreUtils::getStaticF_m_WhiteCubeTexture()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Cubemap>, "m_WhiteCubeTexture", ::UnityEngine::Rendering::CoreUtils*>();
}
inline void UnityEngine::Rendering::CoreUtils::setStaticF_m_EmptyUAV(::UnityW<::UnityEngine::RenderTexture>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::RenderTexture>, "m_EmptyUAV", ::UnityEngine::Rendering::CoreUtils*>(std::forward<::UnityW<::UnityEngine::RenderTexture>>(value));
}
inline ::UnityW<::UnityEngine::RenderTexture> UnityEngine::Rendering::CoreUtils::getStaticF_m_EmptyUAV()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::RenderTexture>, "m_EmptyUAV", ::UnityEngine::Rendering::CoreUtils*>();
}
inline void UnityEngine::Rendering::CoreUtils::setStaticF_m_EmptyBuffer(::UnityEngine::GraphicsBuffer*  value)  {
::cordl_internals::setStaticField<::UnityEngine::GraphicsBuffer*, "m_EmptyBuffer", ::UnityEngine::Rendering::CoreUtils*>(std::forward<::UnityEngine::GraphicsBuffer*>(value));
}
inline ::UnityEngine::GraphicsBuffer* UnityEngine::Rendering::CoreUtils::getStaticF_m_EmptyBuffer()  {
return ::cordl_internals::getStaticField<::UnityEngine::GraphicsBuffer*, "m_EmptyBuffer", ::UnityEngine::Rendering::CoreUtils*>();
}
inline void UnityEngine::Rendering::CoreUtils::setStaticF_m_BlackVolumeTexture(::UnityW<::UnityEngine::Texture3D>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::Texture3D>, "m_BlackVolumeTexture", ::UnityEngine::Rendering::CoreUtils*>(std::forward<::UnityW<::UnityEngine::Texture3D>>(value));
}
inline ::UnityW<::UnityEngine::Texture3D> UnityEngine::Rendering::CoreUtils::getStaticF_m_BlackVolumeTexture()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Texture3D>, "m_BlackVolumeTexture", ::UnityEngine::Rendering::CoreUtils*>();
}
inline void UnityEngine::Rendering::CoreUtils::setStaticF_m_WhiteVolumeTexture(::UnityW<::UnityEngine::Texture3D>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::Texture3D>, "m_WhiteVolumeTexture", ::UnityEngine::Rendering::CoreUtils*>(std::forward<::UnityW<::UnityEngine::Texture3D>>(value));
}
inline ::UnityW<::UnityEngine::Texture3D> UnityEngine::Rendering::CoreUtils::getStaticF_m_WhiteVolumeTexture()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Texture3D>, "m_WhiteVolumeTexture", ::UnityEngine::Rendering::CoreUtils*>();
}
inline void UnityEngine::Rendering::CoreUtils::setStaticF_m_AssemblyTypes(::System::Collections::Generic::IEnumerable_1<::System::Type*>*  value)  {
::cordl_internals::setStaticField<::System::Collections::Generic::IEnumerable_1<::System::Type*>*, "m_AssemblyTypes", ::UnityEngine::Rendering::CoreUtils*>(std::forward<::System::Collections::Generic::IEnumerable_1<::System::Type*>*>(value));
}
inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* UnityEngine::Rendering::CoreUtils::getStaticF_m_AssemblyTypes()  {
return ::cordl_internals::getStaticField<::System::Collections::Generic::IEnumerable_1<::System::Type*>*, "m_AssemblyTypes", ::UnityEngine::Rendering::CoreUtils*>();
}
inline ::UnityW<::UnityEngine::Cubemap> UnityEngine::Rendering::CoreUtils::get_blackCubeTexture()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"get_blackCubeTexture", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Cubemap>>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::Cubemap> UnityEngine::Rendering::CoreUtils::get_magentaCubeTexture()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"get_magentaCubeTexture", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Cubemap>>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::CubemapArray> UnityEngine::Rendering::CoreUtils::get_magentaCubeTextureArray()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"get_magentaCubeTextureArray", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::CubemapArray>>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::Cubemap> UnityEngine::Rendering::CoreUtils::get_whiteCubeTexture()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"get_whiteCubeTexture", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Cubemap>>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::RenderTexture> UnityEngine::Rendering::CoreUtils::get_emptyUAV()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"get_emptyUAV", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::RenderTexture>>(nullptr, ___internal_method);
}
inline ::UnityEngine::GraphicsBuffer* UnityEngine::Rendering::CoreUtils::get_emptyBuffer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"get_emptyBuffer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::GraphicsBuffer*>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::Texture3D> UnityEngine::Rendering::CoreUtils::get_blackVolumeTexture()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"get_blackVolumeTexture", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture3D>>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::Texture3D> UnityEngine::Rendering::CoreUtils::get_whiteVolumeTexture()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"get_whiteVolumeTexture", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture3D>>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::CoreUtils::ClearRenderTarget(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::ClearFlag  clearFlag, ::UnityEngine::Color  clearColor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"ClearRenderTarget", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::ClearFlag>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, clearFlag, clearColor);
}
inline int32_t UnityEngine::Rendering::CoreUtils::FixupDepthSlice(int32_t  depthSlice, ::UnityEngine::Rendering::RTHandle*  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"FixupDepthSlice", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, depthSlice, buffer);
}
inline int32_t UnityEngine::Rendering::CoreUtils::FixupDepthSlice(int32_t  depthSlice, ::UnityEngine::CubemapFace  cubemapFace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"FixupDepthSlice", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::CubemapFace>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, depthSlice, cubemapFace);
}
inline void UnityEngine::Rendering::CoreUtils::SetRenderTarget(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RenderTargetIdentifier  buffer, ::UnityEngine::Rendering::ClearFlag  clearFlag, ::UnityEngine::Color  clearColor, int32_t  miplevel, ::UnityEngine::CubemapFace  cubemapFace, int32_t  depthSlice)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"SetRenderTarget", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::ClearFlag>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, buffer, clearFlag, clearColor, miplevel, cubemapFace, depthSlice);
}
inline void UnityEngine::Rendering::CoreUtils::SetRenderTarget(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RenderTargetIdentifier  buffer, ::UnityEngine::Rendering::ClearFlag  clearFlag, int32_t  miplevel, ::UnityEngine::CubemapFace  cubemapFace, int32_t  depthSlice)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"SetRenderTarget", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::ClearFlag>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, buffer, clearFlag, miplevel, cubemapFace, depthSlice);
}
inline void UnityEngine::Rendering::CoreUtils::SetRenderTarget(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RenderTargetIdentifier  colorBuffer, ::UnityEngine::Rendering::RenderTargetIdentifier  depthBuffer, int32_t  miplevel, ::UnityEngine::CubemapFace  cubemapFace, int32_t  depthSlice)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"SetRenderTarget", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, colorBuffer, depthBuffer, miplevel, cubemapFace, depthSlice);
}
inline void UnityEngine::Rendering::CoreUtils::SetRenderTarget(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RenderTargetIdentifier  colorBuffer, ::UnityEngine::Rendering::RenderTargetIdentifier  depthBuffer, ::UnityEngine::Rendering::ClearFlag  clearFlag, int32_t  miplevel, ::UnityEngine::CubemapFace  cubemapFace, int32_t  depthSlice)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"SetRenderTarget", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::ClearFlag>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, colorBuffer, depthBuffer, clearFlag, miplevel, cubemapFace, depthSlice);
}
inline void UnityEngine::Rendering::CoreUtils::SetRenderTarget(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RenderTargetIdentifier  colorBuffer, ::UnityEngine::Rendering::RenderTargetIdentifier  depthBuffer, ::UnityEngine::Rendering::ClearFlag  clearFlag, ::UnityEngine::Color  clearColor, int32_t  miplevel, ::UnityEngine::CubemapFace  cubemapFace, int32_t  depthSlice)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"SetRenderTarget", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::ClearFlag>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, colorBuffer, depthBuffer, clearFlag, clearColor, miplevel, cubemapFace, depthSlice);
}
inline void UnityEngine::Rendering::CoreUtils::SetRenderTarget(::UnityEngine::Rendering::CommandBuffer*  cmd, ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>  colorBuffers, ::UnityEngine::Rendering::RenderTargetIdentifier  depthBuffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"SetRenderTarget", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, colorBuffers, depthBuffer);
}
inline void UnityEngine::Rendering::CoreUtils::SetRenderTarget(::UnityEngine::Rendering::CommandBuffer*  cmd, ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>  colorBuffers, ::UnityEngine::Rendering::RenderTargetIdentifier  depthBuffer, ::UnityEngine::Rendering::ClearFlag  clearFlag)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"SetRenderTarget", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::ClearFlag>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, colorBuffers, depthBuffer, clearFlag);
}
inline void UnityEngine::Rendering::CoreUtils::SetRenderTarget(::UnityEngine::Rendering::CommandBuffer*  cmd, ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>  colorBuffers, ::UnityEngine::Rendering::RenderTargetIdentifier  depthBuffer, ::UnityEngine::Rendering::ClearFlag  clearFlag, ::UnityEngine::Color  clearColor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"SetRenderTarget", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::ClearFlag>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, colorBuffers, depthBuffer, clearFlag, clearColor);
}
inline void UnityEngine::Rendering::CoreUtils::SetRenderTarget(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RenderTargetIdentifier  buffer, ::UnityEngine::Rendering::RenderBufferLoadAction  loadAction, ::UnityEngine::Rendering::RenderBufferStoreAction  storeAction, ::UnityEngine::Rendering::ClearFlag  clearFlag, ::UnityEngine::Color  clearColor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"SetRenderTarget", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferLoadAction>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferStoreAction>(), ::i2c::type_of<::UnityEngine::Rendering::ClearFlag>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, buffer, loadAction, storeAction, clearFlag, clearColor);
}
inline void UnityEngine::Rendering::CoreUtils::SetRenderTarget(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RenderTargetIdentifier  buffer, ::UnityEngine::Rendering::RenderBufferLoadAction  loadAction, ::UnityEngine::Rendering::RenderBufferStoreAction  storeAction, int32_t  miplevel, ::UnityEngine::CubemapFace  cubemapFace, int32_t  depthSlice)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"SetRenderTarget", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferLoadAction>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferStoreAction>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, buffer, loadAction, storeAction, miplevel, cubemapFace, depthSlice);
}
inline void UnityEngine::Rendering::CoreUtils::SetRenderTarget(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RenderTargetIdentifier  buffer, ::UnityEngine::Rendering::RenderBufferLoadAction  loadAction, ::UnityEngine::Rendering::RenderBufferStoreAction  storeAction, ::UnityEngine::Rendering::ClearFlag  clearFlag, ::UnityEngine::Color  clearColor, int32_t  miplevel, ::UnityEngine::CubemapFace  cubemapFace, int32_t  depthSlice)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"SetRenderTarget", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferLoadAction>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferStoreAction>(), ::i2c::type_of<::UnityEngine::Rendering::ClearFlag>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, buffer, loadAction, storeAction, clearFlag, clearColor, miplevel, cubemapFace, depthSlice);
}
inline void UnityEngine::Rendering::CoreUtils::SetRenderTarget(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RenderTargetIdentifier  buffer, ::UnityEngine::Rendering::RenderBufferLoadAction  loadAction, ::UnityEngine::Rendering::RenderBufferStoreAction  storeAction, ::UnityEngine::Rendering::ClearFlag  clearFlag)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"SetRenderTarget", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferLoadAction>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferStoreAction>(), ::i2c::type_of<::UnityEngine::Rendering::ClearFlag>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, buffer, loadAction, storeAction, clearFlag);
}
inline void UnityEngine::Rendering::CoreUtils::SetRenderTarget(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RenderTargetIdentifier  colorBuffer, ::UnityEngine::Rendering::RenderBufferLoadAction  colorLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction  colorStoreAction, ::UnityEngine::Rendering::RenderTargetIdentifier  depthBuffer, ::UnityEngine::Rendering::RenderBufferLoadAction  depthLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction  depthStoreAction, ::UnityEngine::Rendering::ClearFlag  clearFlag, ::UnityEngine::Color  clearColor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"SetRenderTarget", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferLoadAction>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferStoreAction>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferLoadAction>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferStoreAction>(), ::i2c::type_of<::UnityEngine::Rendering::ClearFlag>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, colorBuffer, colorLoadAction, colorStoreAction, depthBuffer, depthLoadAction, depthStoreAction, clearFlag, clearColor);
}
inline void UnityEngine::Rendering::CoreUtils::SetRenderTarget(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RenderTargetIdentifier  colorBuffer, ::UnityEngine::Rendering::RenderBufferLoadAction  colorLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction  colorStoreAction, ::UnityEngine::Rendering::RenderTargetIdentifier  depthBuffer, ::UnityEngine::Rendering::RenderBufferLoadAction  depthLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction  depthStoreAction, int32_t  miplevel, ::UnityEngine::CubemapFace  cubemapFace, int32_t  depthSlice)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"SetRenderTarget", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferLoadAction>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferStoreAction>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferLoadAction>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferStoreAction>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, colorBuffer, colorLoadAction, colorStoreAction, depthBuffer, depthLoadAction, depthStoreAction, miplevel, cubemapFace, depthSlice);
}
inline void UnityEngine::Rendering::CoreUtils::SetRenderTarget(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RenderTargetIdentifier  colorBuffer, ::UnityEngine::Rendering::RenderBufferLoadAction  colorLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction  colorStoreAction, ::UnityEngine::Rendering::RenderTargetIdentifier  depthBuffer, ::UnityEngine::Rendering::RenderBufferLoadAction  depthLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction  depthStoreAction, ::UnityEngine::Rendering::ClearFlag  clearFlag, ::UnityEngine::Color  clearColor, int32_t  miplevel, ::UnityEngine::CubemapFace  cubemapFace, int32_t  depthSlice)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"SetRenderTarget", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferLoadAction>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferStoreAction>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferLoadAction>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferStoreAction>(), ::i2c::type_of<::UnityEngine::Rendering::ClearFlag>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, colorBuffer, colorLoadAction, colorStoreAction, depthBuffer, depthLoadAction, depthStoreAction, clearFlag, clearColor, miplevel, cubemapFace, depthSlice);
}
inline void UnityEngine::Rendering::CoreUtils::SetRenderTarget(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RenderTargetIdentifier  buffer, ::UnityEngine::Rendering::RenderBufferLoadAction  colorLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction  colorStoreAction, ::UnityEngine::Rendering::RenderBufferLoadAction  depthLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction  depthStoreAction, ::UnityEngine::Rendering::ClearFlag  clearFlag, ::UnityEngine::Color  clearColor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"SetRenderTarget", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferLoadAction>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferStoreAction>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferLoadAction>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferStoreAction>(), ::i2c::type_of<::UnityEngine::Rendering::ClearFlag>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, buffer, colorLoadAction, colorStoreAction, depthLoadAction, depthStoreAction, clearFlag, clearColor);
}
inline void UnityEngine::Rendering::CoreUtils::SetRenderTarget(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RenderTargetIdentifier  colorBuffer, ::UnityEngine::Rendering::RenderBufferLoadAction  colorLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction  colorStoreAction, ::UnityEngine::Rendering::RenderTargetIdentifier  depthBuffer, ::UnityEngine::Rendering::RenderBufferLoadAction  depthLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction  depthStoreAction, ::UnityEngine::Rendering::ClearFlag  clearFlag)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"SetRenderTarget", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferLoadAction>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferStoreAction>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferLoadAction>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferStoreAction>(), ::i2c::type_of<::UnityEngine::Rendering::ClearFlag>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, colorBuffer, colorLoadAction, colorStoreAction, depthBuffer, depthLoadAction, depthStoreAction, clearFlag);
}
inline void UnityEngine::Rendering::CoreUtils::SetViewportAndClear(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RTHandle*  buffer, ::UnityEngine::Rendering::ClearFlag  clearFlag, ::UnityEngine::Color  clearColor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"SetViewportAndClear", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::ClearFlag>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, buffer, clearFlag, clearColor);
}
inline void UnityEngine::Rendering::CoreUtils::SetRenderTarget(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RTHandle*  buffer, ::UnityEngine::Rendering::ClearFlag  clearFlag, ::UnityEngine::Color  clearColor, int32_t  miplevel, ::UnityEngine::CubemapFace  cubemapFace, int32_t  depthSlice)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"SetRenderTarget", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::ClearFlag>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, buffer, clearFlag, clearColor, miplevel, cubemapFace, depthSlice);
}
inline void UnityEngine::Rendering::CoreUtils::SetRenderTarget(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RTHandle*  buffer, ::UnityEngine::Rendering::ClearFlag  clearFlag, int32_t  miplevel, ::UnityEngine::CubemapFace  cubemapFace, int32_t  depthSlice)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"SetRenderTarget", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::ClearFlag>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, buffer, clearFlag, miplevel, cubemapFace, depthSlice);
}
inline void UnityEngine::Rendering::CoreUtils::SetRenderTarget(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RTHandle*  colorBuffer, ::UnityEngine::Rendering::RTHandle*  depthBuffer, int32_t  miplevel, ::UnityEngine::CubemapFace  cubemapFace, int32_t  depthSlice)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"SetRenderTarget", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, colorBuffer, depthBuffer, miplevel, cubemapFace, depthSlice);
}
inline void UnityEngine::Rendering::CoreUtils::SetRenderTarget(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RTHandle*  colorBuffer, ::UnityEngine::Rendering::RTHandle*  depthBuffer, ::UnityEngine::Rendering::ClearFlag  clearFlag, int32_t  miplevel, ::UnityEngine::CubemapFace  cubemapFace, int32_t  depthSlice)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"SetRenderTarget", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::ClearFlag>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, colorBuffer, depthBuffer, clearFlag, miplevel, cubemapFace, depthSlice);
}
inline void UnityEngine::Rendering::CoreUtils::SetRenderTarget(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RTHandle*  colorBuffer, ::UnityEngine::Rendering::RTHandle*  depthBuffer, ::UnityEngine::Rendering::ClearFlag  clearFlag, ::UnityEngine::Color  clearColor, int32_t  miplevel, ::UnityEngine::CubemapFace  cubemapFace, int32_t  depthSlice)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"SetRenderTarget", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::ClearFlag>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, colorBuffer, depthBuffer, clearFlag, clearColor, miplevel, cubemapFace, depthSlice);
}
inline void UnityEngine::Rendering::CoreUtils::SetRenderTarget(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RTHandle*  buffer, ::UnityEngine::Rendering::RenderBufferLoadAction  loadAction, ::UnityEngine::Rendering::RenderBufferStoreAction  storeAction, ::UnityEngine::Rendering::ClearFlag  clearFlag, ::UnityEngine::Color  clearColor, int32_t  miplevel, ::UnityEngine::CubemapFace  cubemapFace, int32_t  depthSlice)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"SetRenderTarget", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferLoadAction>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferStoreAction>(), ::i2c::type_of<::UnityEngine::Rendering::ClearFlag>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, buffer, loadAction, storeAction, clearFlag, clearColor, miplevel, cubemapFace, depthSlice);
}
inline void UnityEngine::Rendering::CoreUtils::SetRenderTarget(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RTHandle*  colorBuffer, ::UnityEngine::Rendering::RenderBufferLoadAction  colorLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction  colorStoreAction, ::UnityEngine::Rendering::RTHandle*  depthBuffer, ::UnityEngine::Rendering::RenderBufferLoadAction  depthLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction  depthStoreAction, ::UnityEngine::Rendering::ClearFlag  clearFlag, ::UnityEngine::Color  clearColor, int32_t  miplevel, ::UnityEngine::CubemapFace  cubemapFace, int32_t  depthSlice)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"SetRenderTarget", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferLoadAction>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferStoreAction>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferLoadAction>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferStoreAction>(), ::i2c::type_of<::UnityEngine::Rendering::ClearFlag>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::CubemapFace>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, colorBuffer, colorLoadAction, colorStoreAction, depthBuffer, depthLoadAction, depthStoreAction, clearFlag, clearColor, miplevel, cubemapFace, depthSlice);
}
inline void UnityEngine::Rendering::CoreUtils::SetShadingRateFragmentSize(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::ShadingRateFragmentSize  baseShadingRateFragmentSize)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"SetShadingRateFragmentSize", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::ShadingRateFragmentSize>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, baseShadingRateFragmentSize);
}
inline void UnityEngine::Rendering::CoreUtils::SetShadingRateCombiner(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::ShadingRateCombinerStage  stage, ::UnityEngine::Rendering::ShadingRateCombiner  combiner)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"SetShadingRateCombiner", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::ShadingRateCombinerStage>(), ::i2c::type_of<::UnityEngine::Rendering::ShadingRateCombiner>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, stage, combiner);
}
inline void UnityEngine::Rendering::CoreUtils::SetShadingRateImage(::UnityEngine::Rendering::CommandBuffer*  cmd, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier>  shadingRateImage)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"SetShadingRateImage", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderTargetIdentifier>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, shadingRateImage);
}
inline void UnityEngine::Rendering::CoreUtils::SetRenderTarget(::UnityEngine::Rendering::CommandBuffer*  cmd, ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>  colorBuffers, ::UnityEngine::Rendering::RTHandle*  depthBuffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"SetRenderTarget", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, colorBuffers, depthBuffer);
}
inline void UnityEngine::Rendering::CoreUtils::SetRenderTarget(::UnityEngine::Rendering::CommandBuffer*  cmd, ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>  colorBuffers, ::UnityEngine::Rendering::RTHandle*  depthBuffer, ::UnityEngine::Rendering::ClearFlag  clearFlag)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"SetRenderTarget", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::ClearFlag>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, colorBuffers, depthBuffer, clearFlag);
}
inline void UnityEngine::Rendering::CoreUtils::SetRenderTarget(::UnityEngine::Rendering::CommandBuffer*  cmd, ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>  colorBuffers, ::UnityEngine::Rendering::RTHandle*  depthBuffer, ::UnityEngine::Rendering::ClearFlag  clearFlag, ::UnityEngine::Color  clearColor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"SetRenderTarget", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::ClearFlag>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, colorBuffers, depthBuffer, clearFlag, clearColor);
}
inline void UnityEngine::Rendering::CoreUtils::SetViewport(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RTHandle*  target)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"SetViewport", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, target);
}
inline ::StringW UnityEngine::Rendering::CoreUtils::GetRenderTargetAutoName(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::RenderTextureFormat  format, ::StringW  name, bool  mips, bool  enableMSAA, ::UnityEngine::Rendering::MSAASamples  msaaSamples)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"GetRenderTargetAutoName", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::RenderTextureFormat>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Rendering::MSAASamples>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, width, height, depth, format, name, mips, enableMSAA, msaaSamples);
}
inline ::StringW UnityEngine::Rendering::CoreUtils::GetRenderTargetAutoName(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::StringW  name, bool  mips, bool  enableMSAA, ::UnityEngine::Rendering::MSAASamples  msaaSamples)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"GetRenderTargetAutoName", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Rendering::MSAASamples>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, width, height, depth, format, name, mips, enableMSAA, msaaSamples);
}
inline ::StringW UnityEngine::Rendering::CoreUtils::GetRenderTargetAutoName(int32_t  width, int32_t  height, int32_t  depth, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::Rendering::TextureDimension  dim, ::StringW  name, bool  mips, bool  enableMSAA, ::UnityEngine::Rendering::MSAASamples  msaaSamples, bool  dynamicRes, bool  dynamicResExplicit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"GetRenderTargetAutoName", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<::UnityEngine::Rendering::TextureDimension>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Rendering::MSAASamples>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, width, height, depth, format, dim, name, mips, enableMSAA, msaaSamples, dynamicRes, dynamicResExplicit);
}
inline ::StringW UnityEngine::Rendering::CoreUtils::GetRenderTargetAutoName(int32_t  width, int32_t  height, int32_t  depth, ::StringW  format, ::UnityEngine::Rendering::TextureDimension  dim, ::StringW  name, bool  mips, bool  enableMSAA, ::UnityEngine::Rendering::MSAASamples  msaaSamples, bool  dynamicRes, bool  dynamicResExplicit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"GetRenderTargetAutoName", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Rendering::TextureDimension>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>(), ::i2c::type_of<::UnityEngine::Rendering::MSAASamples>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, width, height, depth, format, dim, name, mips, enableMSAA, msaaSamples, dynamicRes, dynamicResExplicit);
}
inline ::StringW UnityEngine::Rendering::CoreUtils::GetTextureAutoName(int32_t  width, int32_t  height, ::UnityEngine::TextureFormat  format, ::UnityEngine::Rendering::TextureDimension  dim, ::StringW  name, bool  mips, int32_t  depth)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"GetTextureAutoName", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::TextureFormat>(), ::i2c::type_of<::UnityEngine::Rendering::TextureDimension>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, width, height, format, dim, name, mips, depth);
}
inline ::StringW UnityEngine::Rendering::CoreUtils::GetTextureAutoName(int32_t  width, int32_t  height, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format, ::UnityEngine::Rendering::TextureDimension  dim, ::StringW  name, bool  mips, int32_t  depth)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"GetTextureAutoName", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Experimental::Rendering::GraphicsFormat>(), ::i2c::type_of<::UnityEngine::Rendering::TextureDimension>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, width, height, format, dim, name, mips, depth);
}
inline ::StringW UnityEngine::Rendering::CoreUtils::GetTextureAutoName(int32_t  width, int32_t  height, ::StringW  format, ::UnityEngine::Rendering::TextureDimension  dim, ::StringW  name, bool  mips, int32_t  depth)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"GetTextureAutoName", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::UnityEngine::Rendering::TextureDimension>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, width, height, format, dim, name, mips, depth);
}
inline void UnityEngine::Rendering::CoreUtils::ClearCubemap(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::RenderTexture*  renderTexture, ::UnityEngine::Color  clearColor, bool  clearMips)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"ClearCubemap", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::Color>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, renderTexture, clearColor, clearMips);
}
inline void UnityEngine::Rendering::CoreUtils::DrawFullScreen(::UnityEngine::Rendering::CommandBuffer*  commandBuffer, ::UnityEngine::Material*  material, ::UnityEngine::MaterialPropertyBlock*  properties, int32_t  shaderPassId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"DrawFullScreen", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, commandBuffer, material, properties, shaderPassId);
}
inline void UnityEngine::Rendering::CoreUtils::DrawFullScreen(::UnityEngine::Rendering::RasterCommandBuffer*  commandBuffer, ::UnityEngine::Material*  material, ::UnityEngine::MaterialPropertyBlock*  properties, int32_t  shaderPassId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"DrawFullScreen", {}, {::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, commandBuffer, material, properties, shaderPassId);
}
inline void UnityEngine::Rendering::CoreUtils::DrawFullScreen(::UnityEngine::Rendering::CommandBuffer*  commandBuffer, ::UnityEngine::Material*  material, ::UnityEngine::Rendering::RenderTargetIdentifier  colorBuffer, ::UnityEngine::MaterialPropertyBlock*  properties, int32_t  shaderPassId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"DrawFullScreen", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, commandBuffer, material, colorBuffer, properties, shaderPassId);
}
inline void UnityEngine::Rendering::CoreUtils::DrawFullScreen(::UnityEngine::Rendering::CommandBuffer*  commandBuffer, ::UnityEngine::Material*  material, ::UnityEngine::Rendering::RenderTargetIdentifier  colorBuffer, ::UnityEngine::Rendering::RenderTargetIdentifier  depthStencilBuffer, ::UnityEngine::MaterialPropertyBlock*  properties, int32_t  shaderPassId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"DrawFullScreen", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, commandBuffer, material, colorBuffer, depthStencilBuffer, properties, shaderPassId);
}
inline void UnityEngine::Rendering::CoreUtils::DrawFullScreen(::UnityEngine::Rendering::CommandBuffer*  commandBuffer, ::UnityEngine::Material*  material, ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>  colorBuffers, ::UnityEngine::Rendering::RenderTargetIdentifier  depthStencilBuffer, ::UnityEngine::MaterialPropertyBlock*  properties, int32_t  shaderPassId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"DrawFullScreen", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, commandBuffer, material, colorBuffers, depthStencilBuffer, properties, shaderPassId);
}
inline void UnityEngine::Rendering::CoreUtils::DrawFullScreen(::UnityEngine::Rendering::CommandBuffer*  commandBuffer, ::UnityEngine::Material*  material, ::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>  colorBuffers, ::UnityEngine::MaterialPropertyBlock*  properties, int32_t  shaderPassId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"DrawFullScreen", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::ArrayW<::UnityEngine::Rendering::RenderTargetIdentifier>>(), ::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, commandBuffer, material, colorBuffers, properties, shaderPassId);
}
inline ::UnityEngine::Color UnityEngine::Rendering::CoreUtils::ConvertSRGBToActiveColorSpace(::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"ConvertSRGBToActiveColorSpace", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(nullptr, ___internal_method, color);
}
inline ::UnityEngine::Color UnityEngine::Rendering::CoreUtils::ConvertLinearToActiveColorSpace(::UnityEngine::Color  color)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"ConvertLinearToActiveColorSpace", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(nullptr, ___internal_method, color);
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::Rendering::CoreUtils::CreateEngineMaterial(::StringW  shaderPath)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"CreateEngineMaterial", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(nullptr, ___internal_method, shaderPath);
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::Rendering::CoreUtils::CreateEngineMaterial(::UnityEngine::Shader*  shader)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"CreateEngineMaterial", {}, {::i2c::type_of<::UnityEngine::Shader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(nullptr, ___internal_method, shader);
}
template<typename T>
requires(::cordl_internals::type_constraint<T, ::System::IConvertible*>)
inline bool UnityEngine::Rendering::CoreUtils::HasFlag(T  mask, T  flag)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                    {"HasFlag", {::i2c::class_of<T>()}, {::i2c::type_of<T>(), ::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, mask, flag);
}
template<typename T>
inline void UnityEngine::Rendering::CoreUtils::Swap(::by_ref<T>  a, ::by_ref<T>  b)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                    {"Swap", {::i2c::class_of<T>()}, {::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<::by_ref<T>>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, a, b);
}
inline void UnityEngine::Rendering::CoreUtils::SetKeyword(::UnityEngine::Rendering::CommandBuffer*  cmd, ::StringW  keyword, bool  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"SetKeyword", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, keyword, state);
}
inline void UnityEngine::Rendering::CoreUtils::SetKeyword(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::ComputeShader*  cs, ::StringW  keyword, bool  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"SetKeyword", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, cs, keyword, state);
}
inline void UnityEngine::Rendering::CoreUtils::SetKeyword(::UnityEngine::Rendering::BaseCommandBuffer*  cmd, ::StringW  keyword, bool  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"SetKeyword", {}, {::i2c::type_of<::UnityEngine::Rendering::BaseCommandBuffer*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, keyword, state);
}
inline void UnityEngine::Rendering::CoreUtils::SetKeyword(::UnityEngine::Material*  material, ::StringW  keyword, bool  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"SetKeyword", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, material, keyword, state);
}
inline void UnityEngine::Rendering::CoreUtils::SetKeyword(::UnityEngine::Material*  material, ::UnityEngine::Rendering::LocalKeyword  keyword, bool  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"SetKeyword", {}, {::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<::UnityEngine::Rendering::LocalKeyword>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, material, keyword, state);
}
inline void UnityEngine::Rendering::CoreUtils::SetKeyword(::UnityEngine::ComputeShader*  cs, ::StringW  keyword, bool  state)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"SetKeyword", {}, {::i2c::type_of<::UnityEngine::ComputeShader*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cs, keyword, state);
}
inline void UnityEngine::Rendering::CoreUtils::Destroy(::UnityEngine::Object*  obj)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"Destroy", {}, {::i2c::type_of<::UnityEngine::Object*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj);
}
inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* UnityEngine::Rendering::CoreUtils::GetAllAssemblyTypes()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"GetAllAssemblyTypes", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Type*>*>(nullptr, ___internal_method);
}
template<typename T>
inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* UnityEngine::Rendering::CoreUtils::GetAllTypesDerivedFrom()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                    {"GetAllTypesDerivedFrom", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Type*>*>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::CoreUtils::SafeRelease(::UnityEngine::GraphicsBuffer*  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"SafeRelease", {}, {::i2c::type_of<::UnityEngine::GraphicsBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, buffer);
}
inline void UnityEngine::Rendering::CoreUtils::SafeRelease(::UnityEngine::ComputeBuffer*  buffer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"SafeRelease", {}, {::i2c::type_of<::UnityEngine::ComputeBuffer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, buffer);
}
inline ::UnityW<::UnityEngine::Mesh> UnityEngine::Rendering::CoreUtils::CreateCubeMesh(::UnityEngine::Vector3  min, ::UnityEngine::Vector3  max)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"CreateCubeMesh", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Mesh>>(nullptr, ___internal_method, min, max);
}
inline bool UnityEngine::Rendering::CoreUtils::ArePostProcessesEnabled(::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"ArePostProcessesEnabled", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, camera);
}
inline bool UnityEngine::Rendering::CoreUtils::AreAnimatedMaterialsEnabled(::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"AreAnimatedMaterialsEnabled", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, camera);
}
inline bool UnityEngine::Rendering::CoreUtils::IsSceneLightingDisabled(::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"IsSceneLightingDisabled", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, camera);
}
inline bool UnityEngine::Rendering::CoreUtils::IsLightOverlapDebugEnabled(::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"IsLightOverlapDebugEnabled", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, camera);
}
inline bool UnityEngine::Rendering::CoreUtils::IsSceneViewFogEnabled(::UnityEngine::Camera*  camera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"IsSceneViewFogEnabled", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, camera);
}
inline bool UnityEngine::Rendering::CoreUtils::IsSceneFilteringEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"IsSceneFilteringEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool UnityEngine::Rendering::CoreUtils::IsSceneViewPrefabStageContextHidden()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"IsSceneViewPrefabStageContextHidden", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void UnityEngine::Rendering::CoreUtils::DrawRendererList(::UnityEngine::Rendering::ScriptableRenderContext  renderContext, ::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RendererList  rendererList)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"DrawRendererList", {}, {::i2c::type_of<::UnityEngine::Rendering::ScriptableRenderContext>(), ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RendererList>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, renderContext, cmd, rendererList);
}
inline int32_t UnityEngine::Rendering::CoreUtils::GetTextureHash(::UnityEngine::Texture*  texture)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"GetTextureHash", {}, {::i2c::type_of<::UnityEngine::Texture*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, texture);
}
inline int32_t UnityEngine::Rendering::CoreUtils::PreviousPowerOfTwo(int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"PreviousPowerOfTwo", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, size);
}
inline int32_t UnityEngine::Rendering::CoreUtils::GetMipCount(int32_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"GetMipCount", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, size);
}
inline int32_t UnityEngine::Rendering::CoreUtils::GetMipCount(float_t  size)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"GetMipCount", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, size);
}
inline int32_t UnityEngine::Rendering::CoreUtils::DivRoundUp(int32_t  value, int32_t  divisor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"DivRoundUp", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, value, divisor);
}
template<typename T>
inline T UnityEngine::Rendering::CoreUtils::GetLastEnumValue()  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                    {"GetLastEnumValue", {::i2c::class_of<T>()}, {}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method);
}
inline ::StringW UnityEngine::Rendering::CoreUtils::GetCorePath()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"GetCorePath", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline ::ArrayW<::UnityEngine::Vector3> UnityEngine::Rendering::CoreUtils::CalculateViewSpaceCorners(::UnityEngine::Matrix4x4  proj, float_t  z)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"CalculateViewSpaceCorners", {}, {::i2c::type_of<::UnityEngine::Matrix4x4>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector3>>(nullptr, ___internal_method, proj, z);
}
inline ::UnityEngine::Experimental::Rendering::GraphicsFormat UnityEngine::Rendering::CoreUtils::GetDefaultDepthStencilFormat()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"GetDefaultDepthStencilFormat", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::GraphicsFormat>(nullptr, ___internal_method);
}
inline ::UnityEngine::Experimental::Rendering::GraphicsFormat UnityEngine::Rendering::CoreUtils::GetDefaultDepthOnlyFormat()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"GetDefaultDepthOnlyFormat", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::GraphicsFormat>(nullptr, ___internal_method);
}
inline ::UnityEngine::Rendering::DepthBits UnityEngine::Rendering::CoreUtils::GetDefaultDepthBufferBits()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils*>(),
                        {"GetDefaultDepthBufferBits", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::DepthBits>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::CoreUtils::CoreUtils()   {
}
template<typename T>
inline void UnityEngine::Rendering::CoreUtils___c__101_1<T>::setStaticF___9(::UnityEngine::Rendering::CoreUtils___c__101_1<T>*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Rendering::CoreUtils___c__101_1<T>*, "<>9", ::UnityEngine::Rendering::CoreUtils___c__101_1<T>*>(std::forward<::UnityEngine::Rendering::CoreUtils___c__101_1<T>*>(value));
}
template<typename T>
inline ::UnityEngine::Rendering::CoreUtils___c__101_1<T>* UnityEngine::Rendering::CoreUtils___c__101_1<T>::getStaticF___9()  {
return ::cordl_internals::getStaticField<::UnityEngine::Rendering::CoreUtils___c__101_1<T>*, "<>9", ::UnityEngine::Rendering::CoreUtils___c__101_1<T>*>();
}
template<typename T>
inline void UnityEngine::Rendering::CoreUtils___c__101_1<T>::setStaticF___9__101_0(::System::Func_2<::System::Type*,bool>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::System::Type*,bool>*, "<>9__101_0", ::UnityEngine::Rendering::CoreUtils___c__101_1<T>*>(std::forward<::System::Func_2<::System::Type*,bool>*>(value));
}
template<typename T>
inline ::System::Func_2<::System::Type*,bool>* UnityEngine::Rendering::CoreUtils___c__101_1<T>::getStaticF___9__101_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::System::Type*,bool>*, "<>9__101_0", ::UnityEngine::Rendering::CoreUtils___c__101_1<T>*>();
}
template<typename T>
inline void UnityEngine::Rendering::CoreUtils___c__101_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils___c__101_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline bool UnityEngine::Rendering::CoreUtils___c__101_1<T>::_GetAllTypesDerivedFrom_b__101_0(::System::Type*  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils___c__101_1<T>*>(),
                        {"<GetAllTypesDerivedFrom>b__101_0", {}, {::i2c::type_of<::System::Type*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, t);
}
template<typename T>
inline ::UnityEngine::Rendering::CoreUtils___c__101_1<T>* UnityEngine::Rendering::CoreUtils___c__101_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::CoreUtils___c__101_1<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::UnityEngine::Rendering::CoreUtils___c__101_1<T>::CoreUtils___c__101_1()   {
}
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils___c._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::CoreUtils___c::*)()>(&::UnityEngine::Rendering::CoreUtils___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb19376c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils___c*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::CoreUtils___c._GetAllAssemblyTypes_b__100_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IEnumerable_1<::System::Type*>* (::UnityEngine::Rendering::CoreUtils___c::*)(::System::Reflection::Assembly*)>(&::UnityEngine::Rendering::CoreUtils___c::_GetAllAssemblyTypes_b__100_0)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xb193774;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils___c*>(),
                        {"<GetAllAssemblyTypes>b__100_0", {}, {::i2c::type_of<::System::Reflection::Assembly*>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::CoreUtils___c::setStaticF___9(::UnityEngine::Rendering::CoreUtils___c*  value)  {
::cordl_internals::setStaticField<::UnityEngine::Rendering::CoreUtils___c*, "<>9", ::UnityEngine::Rendering::CoreUtils___c*>(std::forward<::UnityEngine::Rendering::CoreUtils___c*>(value));
}
inline ::UnityEngine::Rendering::CoreUtils___c* UnityEngine::Rendering::CoreUtils___c::getStaticF___9()  {
return ::cordl_internals::getStaticField<::UnityEngine::Rendering::CoreUtils___c*, "<>9", ::UnityEngine::Rendering::CoreUtils___c*>();
}
inline void UnityEngine::Rendering::CoreUtils___c::setStaticF___9__100_0(::System::Func_2<::System::Reflection::Assembly*,::System::Collections::Generic::IEnumerable_1<::System::Type*>*>*  value)  {
::cordl_internals::setStaticField<::System::Func_2<::System::Reflection::Assembly*,::System::Collections::Generic::IEnumerable_1<::System::Type*>*>*, "<>9__100_0", ::UnityEngine::Rendering::CoreUtils___c*>(std::forward<::System::Func_2<::System::Reflection::Assembly*,::System::Collections::Generic::IEnumerable_1<::System::Type*>*>*>(value));
}
inline ::System::Func_2<::System::Reflection::Assembly*,::System::Collections::Generic::IEnumerable_1<::System::Type*>*>* UnityEngine::Rendering::CoreUtils___c::getStaticF___9__100_0()  {
return ::cordl_internals::getStaticField<::System::Func_2<::System::Reflection::Assembly*,::System::Collections::Generic::IEnumerable_1<::System::Type*>*>*, "<>9__100_0", ::UnityEngine::Rendering::CoreUtils___c*>();
}
inline void UnityEngine::Rendering::CoreUtils___c::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils___c*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerable_1<::System::Type*>* UnityEngine::Rendering::CoreUtils___c::_GetAllAssemblyTypes_b__100_0(::System::Reflection::Assembly*  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::CoreUtils___c*>(),
                        {"<GetAllAssemblyTypes>b__100_0", {}, {::i2c::type_of<::System::Reflection::Assembly*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::System::Type*>*>(this, ___internal_method, t);
}
inline ::UnityEngine::Rendering::CoreUtils___c* UnityEngine::Rendering::CoreUtils___c::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::CoreUtils___c*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::CoreUtils___c::CoreUtils___c()   {
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::CoreUtils_Priorities::CoreUtils_Priorities()   {
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::CoreUtils_Sections::CoreUtils_Sections()   {
}
