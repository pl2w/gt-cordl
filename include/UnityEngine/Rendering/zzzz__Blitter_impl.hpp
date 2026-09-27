#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Blitter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__LocalKeyword_impl.hpp"
#include "UnityEngine/Rendering/zzzz__Blitter_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "UnityEngine/Rendering/RenderGraphModule/zzzz__TextureDesc_def.hpp"
#include "UnityEngine/Rendering/zzzz__Blitter_BlitColorAndDepthPassNames_def.hpp"
#include "UnityEngine/Rendering/zzzz__Blitter_BlitShaderPassNames_def.hpp"
#include "UnityEngine/Rendering/zzzz__Blitter_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RTHandle_def.hpp"
#include "UnityEngine/Rendering/zzzz__RasterCommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderBufferLoadAction_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderBufferStoreAction_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_def.hpp"
#include "UnityEngine/Rendering/zzzz__TextureDimension_def.hpp"
#include "UnityEngine/Rendering/zzzz__UnsafeCommandBuffer_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Shader_def.hpp"
#include "UnityEngine/zzzz__Texture_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::Blitter.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Shader*, ::UnityEngine::Shader*)>(&::UnityEngine::Rendering::Blitter::Initialize)> {
  constexpr static std::size_t size = 0x80c;
  constexpr static std::size_t addrs = 0xb189af0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Blitter*>(),
                        {"Initialize", {}, {::i2c::type_of<::UnityEngine::Shader*>(), ::i2c::type_of<::UnityEngine::Shader*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Blitter.Cleanup
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::Rendering::Blitter::Cleanup)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xb18a5dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Blitter*>(),
                        {"Cleanup", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Blitter.GetBlitMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (*)(::UnityEngine::Rendering::TextureDimension, bool)>(&::UnityEngine::Rendering::Blitter::GetBlitMaterial)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xb18a770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Blitter*>(),
                        {"GetBlitMaterial", {}, {::i2c::type_of<::UnityEngine::Rendering::TextureDimension>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Blitter.DrawTriangle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::RasterCommandBuffer*, ::UnityEngine::Material*, int32_t)>(&::UnityEngine::Rendering::Blitter::DrawTriangle)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb18a860;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Blitter*>(),
                        {"DrawTriangle", {}, {::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Blitter.DrawTriangle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Material*, int32_t)>(&::UnityEngine::Rendering::Blitter::DrawTriangle)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb18a8d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Blitter*>(),
                        {"DrawTriangle", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Blitter.DrawTriangle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Material*, int32_t, ::UnityEngine::MaterialPropertyBlock*)>(&::UnityEngine::Rendering::Blitter::DrawTriangle)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0xb18a950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Blitter*>(),
                        {"DrawTriangle", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Blitter.DrawQuadMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Material*, int32_t, ::UnityEngine::MaterialPropertyBlock*)>(&::UnityEngine::Rendering::Blitter::DrawQuadMesh)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xb18aabc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Blitter*>(),
                        {"DrawQuadMesh", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Blitter.DrawQuad
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::RasterCommandBuffer*, ::UnityEngine::Material*, int32_t, ::UnityEngine::MaterialPropertyBlock*)>(&::UnityEngine::Rendering::Blitter::DrawQuad)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb18aba8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Blitter*>(),
                        {"DrawQuad", {}, {::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Blitter.DrawQuad
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Material*, int32_t)>(&::UnityEngine::Rendering::Blitter::DrawQuad)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb18ad94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Blitter*>(),
                        {"DrawQuad", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Blitter.DrawQuad
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Material*, int32_t, ::UnityEngine::MaterialPropertyBlock*)>(&::UnityEngine::Rendering::Blitter::DrawQuad)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0xb18ac28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Blitter*>(),
                        {"DrawQuad", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Blitter.CanCopyMSAA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Rendering::Blitter::CanCopyMSAA)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb18ae0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Blitter*>(),
                        {"CanCopyMSAA", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Blitter.CanCopyMSAA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>)>(&::UnityEngine::Rendering::Blitter::CanCopyMSAA)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb18ae8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Blitter*>(),
                        {"CanCopyMSAA", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Blitter.CopyTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::RasterCommandBuffer*, bool, bool)>(&::UnityEngine::Rendering::Blitter::CopyTexture)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xb18af3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Blitter*>(),
                        {"CopyTexture", {}, {::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Blitter.BlitTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Vector4, float_t, int32_t, bool)>(&::UnityEngine::Rendering::Blitter::BlitTexture)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0xb18b02c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Blitter*>(),
                        {"BlitTexture", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Blitter.BlitTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Vector4, ::UnityEngine::Material*, int32_t, float_t, int32_t)>(&::UnityEngine::Rendering::Blitter::BlitTexture)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0xb18b140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Blitter*>(),
                        {"BlitTexture", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Blitter.BlitTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::RasterCommandBuffer*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Vector4, float_t, bool)>(&::UnityEngine::Rendering::Blitter::BlitTexture)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xb18b3b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Blitter*>(),
                        {"BlitTexture", {}, {::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Blitter.BlitTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Vector4, float_t, bool)>(&::UnityEngine::Rendering::Blitter::BlitTexture)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0xb18b470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Blitter*>(),
                        {"BlitTexture", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Blitter.BlitTexture2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::RasterCommandBuffer*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Vector4, float_t, bool)>(&::UnityEngine::Rendering::Blitter::BlitTexture2D)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xb18b5f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Blitter*>(),
                        {"BlitTexture2D", {}, {::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Blitter.BlitTexture2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Vector4, float_t, bool)>(&::UnityEngine::Rendering::Blitter::BlitTexture2D)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0xb18b6a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Blitter*>(),
                        {"BlitTexture2D", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Blitter.BlitColorAndDepth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::RasterCommandBuffer*, ::UnityEngine::Texture*, ::UnityEngine::RenderTexture*, ::UnityEngine::Vector4, float_t, bool)>(&::UnityEngine::Rendering::Blitter::BlitColorAndDepth)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xb18b804;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Blitter*>(),
                        {"BlitColorAndDepth", {}, {::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Blitter.BlitColorAndDepth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Texture*, ::UnityEngine::RenderTexture*, ::UnityEngine::Vector4, float_t, bool)>(&::UnityEngine::Rendering::Blitter::BlitColorAndDepth)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0xb18b8c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Blitter*>(),
                        {"BlitColorAndDepth", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Blitter.BlitTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::RasterCommandBuffer*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Vector4, ::UnityEngine::Material*, int32_t)>(&::UnityEngine::Rendering::Blitter::BlitTexture)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb18bac4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Blitter*>(),
                        {"BlitTexture", {}, {::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Blitter.BlitTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::UnsafeCommandBuffer*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Vector4, ::UnityEngine::Material*, int32_t)>(&::UnityEngine::Rendering::Blitter::BlitTexture)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb18bb74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Blitter*>(),
                        {"BlitTexture", {}, {::i2c::type_of<::UnityEngine::Rendering::UnsafeCommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Blitter.BlitTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Vector4, ::UnityEngine::Material*, int32_t)>(&::UnityEngine::Rendering::Blitter::BlitTexture)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0xb18b284;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Blitter*>(),
                        {"BlitTexture", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Blitter.BlitTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::RasterCommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Vector4, ::UnityEngine::Material*, int32_t)>(&::UnityEngine::Rendering::Blitter::BlitTexture)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xb18bc24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Blitter*>(),
                        {"BlitTexture", {}, {::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Blitter.BlitTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Vector4, ::UnityEngine::Material*, int32_t)>(&::UnityEngine::Rendering::Blitter::BlitTexture)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0xb18bcf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Blitter*>(),
                        {"BlitTexture", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Blitter.BlitTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Material*, int32_t)>(&::UnityEngine::Rendering::Blitter::BlitTexture)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0xb18be3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Blitter*>(),
                        {"BlitTexture", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Blitter.BlitTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderTargetIdentifier, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Material*, int32_t)>(&::UnityEngine::Rendering::Blitter::BlitTexture)> {
  constexpr static std::size_t size = 0x1a0;
  constexpr static std::size_t addrs = 0xb18bfc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Blitter*>(),
                        {"BlitTexture", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferLoadAction>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferStoreAction>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Blitter.BlitTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Vector4, ::UnityEngine::Material*, int32_t)>(&::UnityEngine::Rendering::Blitter::BlitTexture)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xb18c164;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Blitter*>(),
                        {"BlitTexture", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Blitter.BlitTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::RasterCommandBuffer*, ::UnityEngine::Vector4, ::UnityEngine::Material*, int32_t)>(&::UnityEngine::Rendering::Blitter::BlitTexture)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xb18c254;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Blitter*>(),
                        {"BlitTexture", {}, {::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Blitter.BlitCameraTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::RTHandle*, float_t, bool)>(&::UnityEngine::Rendering::Blitter::BlitCameraTexture)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0xb18c344;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Blitter*>(),
                        {"BlitCameraTexture", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Blitter.BlitCameraTexture2D
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::RTHandle*, float_t, bool)>(&::UnityEngine::Rendering::Blitter::BlitCameraTexture2D)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0xb18c498;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Blitter*>(),
                        {"BlitCameraTexture2D", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Blitter.BlitCameraTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Material*, int32_t)>(&::UnityEngine::Rendering::Blitter::BlitCameraTexture)> {
  constexpr static std::size_t size = 0x154;
  constexpr static std::size_t addrs = 0xb18c5ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Blitter*>(),
                        {"BlitCameraTexture", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Blitter.BlitCameraTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::RenderBufferLoadAction, ::UnityEngine::Rendering::RenderBufferStoreAction, ::UnityEngine::Material*, int32_t)>(&::UnityEngine::Rendering::Blitter::BlitCameraTexture)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0xb18c740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Blitter*>(),
                        {"BlitCameraTexture", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferLoadAction>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferStoreAction>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Blitter.BlitCameraTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Vector4, float_t, bool)>(&::UnityEngine::Rendering::Blitter::BlitCameraTexture)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xb18c8c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Blitter*>(),
                        {"BlitCameraTexture", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Blitter.BlitCameraTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rendering::RTHandle*, ::UnityEngine::Rect, float_t, bool)>(&::UnityEngine::Rendering::Blitter::BlitCameraTexture)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xb18c9c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Blitter*>(),
                        {"BlitCameraTexture", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Blitter.BlitQuad
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Texture*, ::UnityEngine::Vector4, ::UnityEngine::Vector4, int32_t, bool)>(&::UnityEngine::Rendering::Blitter::BlitQuad)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0xb183554;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Blitter*>(),
                        {"BlitQuad", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Blitter.BlitQuadWithPadding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Texture*, ::UnityEngine::Vector2, ::UnityEngine::Vector4, ::UnityEngine::Vector4, int32_t, bool, int32_t)>(&::UnityEngine::Rendering::Blitter::BlitQuadWithPadding)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0xb17b774;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Blitter*>(),
                        {"BlitQuadWithPadding", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Blitter.BlitQuadWithPaddingMultiply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Texture*, ::UnityEngine::Vector2, ::UnityEngine::Vector4, ::UnityEngine::Vector4, int32_t, bool, int32_t)>(&::UnityEngine::Rendering::Blitter::BlitQuadWithPaddingMultiply)> {
  constexpr static std::size_t size = 0x2bc;
  constexpr static std::size_t addrs = 0xb17ba30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Blitter*>(),
                        {"BlitQuadWithPaddingMultiply", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Blitter.BlitOctahedralWithPadding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Texture*, ::UnityEngine::Vector2, ::UnityEngine::Vector4, ::UnityEngine::Vector4, int32_t, bool, int32_t)>(&::UnityEngine::Rendering::Blitter::BlitOctahedralWithPadding)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0xb17bcec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Blitter*>(),
                        {"BlitOctahedralWithPadding", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Blitter.BlitOctahedralWithPaddingMultiply
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Texture*, ::UnityEngine::Vector2, ::UnityEngine::Vector4, ::UnityEngine::Vector4, int32_t, bool, int32_t)>(&::UnityEngine::Rendering::Blitter::BlitOctahedralWithPaddingMultiply)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0xb17bf24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Blitter*>(),
                        {"BlitOctahedralWithPaddingMultiply", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Blitter.BlitCubeToOctahedral2DQuad
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Texture*, ::UnityEngine::Vector4, int32_t)>(&::UnityEngine::Rendering::Blitter::BlitCubeToOctahedral2DQuad)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0xb183c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Blitter*>(),
                        {"BlitCubeToOctahedral2DQuad", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Blitter.BlitCubeToOctahedral2DQuadWithPadding
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Texture*, ::UnityEngine::Vector2, ::UnityEngine::Vector4, int32_t, bool, int32_t, ::System::Nullable_1<::UnityEngine::Vector4>)>(&::UnityEngine::Rendering::Blitter::BlitCubeToOctahedral2DQuadWithPadding)> {
  constexpr static std::size_t size = 0x348;
  constexpr static std::size_t addrs = 0xb18cb54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Blitter*>(),
                        {"BlitCubeToOctahedral2DQuadWithPadding", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Vector4>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Blitter.BlitCubeToOctahedral2DQuadSingleChannel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Texture*, ::UnityEngine::Vector4, int32_t)>(&::UnityEngine::Rendering::Blitter::BlitCubeToOctahedral2DQuadSingleChannel)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0xb18408c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Blitter*>(),
                        {"BlitCubeToOctahedral2DQuadSingleChannel", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Blitter.BlitQuadSingleChannel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Texture*, ::UnityEngine::Vector4, ::UnityEngine::Vector4, int32_t)>(&::UnityEngine::Rendering::Blitter::BlitQuadSingleChannel)> {
  constexpr static std::size_t size = 0x2b4;
  constexpr static std::size_t addrs = 0xb183dd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Blitter*>(),
                        {"BlitQuadSingleChannel", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Blitter._Initialize_g__GetFullScreenTriangleVertexPosition_14_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Vector3> (*)(float_t)>(&::UnityEngine::Rendering::Blitter::_Initialize_g__GetFullScreenTriangleVertexPosition_14_0)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb18a2fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Blitter*>(),
                        {"<Initialize>g__GetFullScreenTriangleVertexPosition|14_0", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Blitter._Initialize_g__GetFullScreenTriangleTexCoord_14_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Vector2> (*)()>(&::UnityEngine::Rendering::Blitter::_Initialize_g__GetFullScreenTriangleTexCoord_14_1)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0xb18a3ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Blitter*>(),
                        {"<Initialize>g__GetFullScreenTriangleTexCoord|14_1", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Blitter._Initialize_g__GetQuadVertexPosition_14_2
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Vector3> (*)(float_t)>(&::UnityEngine::Rendering::Blitter::_Initialize_g__GetQuadVertexPosition_14_2)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xb18a480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Blitter*>(),
                        {"<Initialize>g__GetQuadVertexPosition|14_2", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Rendering::Blitter._Initialize_g__GetQuadTexCoord_14_3
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityEngine::Vector2> (*)()>(&::UnityEngine::Rendering::Blitter::_Initialize_g__GetQuadTexCoord_14_3)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xb18a524;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Blitter*>(),
                        {"<Initialize>g__GetQuadTexCoord|14_3", {}, {}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::Rendering::Blitter::setStaticF_s_Copy(::UnityW<::UnityEngine::Material>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::Material>, "s_Copy", ::UnityEngine::Rendering::Blitter*>(std::forward<::UnityW<::UnityEngine::Material>>(value));
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::Rendering::Blitter::getStaticF_s_Copy()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Material>, "s_Copy", ::UnityEngine::Rendering::Blitter*>();
}
inline void UnityEngine::Rendering::Blitter::setStaticF_s_Blit(::UnityW<::UnityEngine::Material>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::Material>, "s_Blit", ::UnityEngine::Rendering::Blitter*>(std::forward<::UnityW<::UnityEngine::Material>>(value));
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::Rendering::Blitter::getStaticF_s_Blit()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Material>, "s_Blit", ::UnityEngine::Rendering::Blitter*>();
}
inline void UnityEngine::Rendering::Blitter::setStaticF_s_BlitTexArray(::UnityW<::UnityEngine::Material>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::Material>, "s_BlitTexArray", ::UnityEngine::Rendering::Blitter*>(std::forward<::UnityW<::UnityEngine::Material>>(value));
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::Rendering::Blitter::getStaticF_s_BlitTexArray()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Material>, "s_BlitTexArray", ::UnityEngine::Rendering::Blitter*>();
}
inline void UnityEngine::Rendering::Blitter::setStaticF_s_BlitTexArraySingleSlice(::UnityW<::UnityEngine::Material>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::Material>, "s_BlitTexArraySingleSlice", ::UnityEngine::Rendering::Blitter*>(std::forward<::UnityW<::UnityEngine::Material>>(value));
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::Rendering::Blitter::getStaticF_s_BlitTexArraySingleSlice()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Material>, "s_BlitTexArraySingleSlice", ::UnityEngine::Rendering::Blitter*>();
}
inline void UnityEngine::Rendering::Blitter::setStaticF_s_BlitColorAndDepth(::UnityW<::UnityEngine::Material>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::Material>, "s_BlitColorAndDepth", ::UnityEngine::Rendering::Blitter*>(std::forward<::UnityW<::UnityEngine::Material>>(value));
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::Rendering::Blitter::getStaticF_s_BlitColorAndDepth()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Material>, "s_BlitColorAndDepth", ::UnityEngine::Rendering::Blitter*>();
}
inline void UnityEngine::Rendering::Blitter::setStaticF_s_PropertyBlock(::UnityEngine::MaterialPropertyBlock*  value)  {
::cordl_internals::setStaticField<::UnityEngine::MaterialPropertyBlock*, "s_PropertyBlock", ::UnityEngine::Rendering::Blitter*>(std::forward<::UnityEngine::MaterialPropertyBlock*>(value));
}
inline ::UnityEngine::MaterialPropertyBlock* UnityEngine::Rendering::Blitter::getStaticF_s_PropertyBlock()  {
return ::cordl_internals::getStaticField<::UnityEngine::MaterialPropertyBlock*, "s_PropertyBlock", ::UnityEngine::Rendering::Blitter*>();
}
inline void UnityEngine::Rendering::Blitter::setStaticF_s_TriangleMesh(::UnityW<::UnityEngine::Mesh>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::Mesh>, "s_TriangleMesh", ::UnityEngine::Rendering::Blitter*>(std::forward<::UnityW<::UnityEngine::Mesh>>(value));
}
inline ::UnityW<::UnityEngine::Mesh> UnityEngine::Rendering::Blitter::getStaticF_s_TriangleMesh()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Mesh>, "s_TriangleMesh", ::UnityEngine::Rendering::Blitter*>();
}
inline void UnityEngine::Rendering::Blitter::setStaticF_s_QuadMesh(::UnityW<::UnityEngine::Mesh>  value)  {
::cordl_internals::setStaticField<::UnityW<::UnityEngine::Mesh>, "s_QuadMesh", ::UnityEngine::Rendering::Blitter*>(std::forward<::UnityW<::UnityEngine::Mesh>>(value));
}
inline ::UnityW<::UnityEngine::Mesh> UnityEngine::Rendering::Blitter::getStaticF_s_QuadMesh()  {
return ::cordl_internals::getStaticField<::UnityW<::UnityEngine::Mesh>, "s_QuadMesh", ::UnityEngine::Rendering::Blitter*>();
}
inline void UnityEngine::Rendering::Blitter::setStaticF_s_DecodeHdrKeyword(::UnityEngine::Rendering::LocalKeyword  value)  {
::cordl_internals::setStaticField<::UnityEngine::Rendering::LocalKeyword, "s_DecodeHdrKeyword", ::UnityEngine::Rendering::Blitter*>(std::forward<::UnityEngine::Rendering::LocalKeyword>(value));
}
inline ::UnityEngine::Rendering::LocalKeyword UnityEngine::Rendering::Blitter::getStaticF_s_DecodeHdrKeyword()  {
return ::cordl_internals::getStaticField<::UnityEngine::Rendering::LocalKeyword, "s_DecodeHdrKeyword", ::UnityEngine::Rendering::Blitter*>();
}
inline void UnityEngine::Rendering::Blitter::setStaticF_s_BlitShaderPassIndicesMap(::ArrayW<int32_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<int32_t>, "s_BlitShaderPassIndicesMap", ::UnityEngine::Rendering::Blitter*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> UnityEngine::Rendering::Blitter::getStaticF_s_BlitShaderPassIndicesMap()  {
return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "s_BlitShaderPassIndicesMap", ::UnityEngine::Rendering::Blitter*>();
}
inline void UnityEngine::Rendering::Blitter::setStaticF_s_BlitColorAndDepthShaderPassIndicesMap(::ArrayW<int32_t>  value)  {
::cordl_internals::setStaticField<::ArrayW<int32_t>, "s_BlitColorAndDepthShaderPassIndicesMap", ::UnityEngine::Rendering::Blitter*>(std::forward<::ArrayW<int32_t>>(value));
}
inline ::ArrayW<int32_t> UnityEngine::Rendering::Blitter::getStaticF_s_BlitColorAndDepthShaderPassIndicesMap()  {
return ::cordl_internals::getStaticField<::ArrayW<int32_t>, "s_BlitColorAndDepthShaderPassIndicesMap", ::UnityEngine::Rendering::Blitter*>();
}
inline void UnityEngine::Rendering::Blitter::Initialize(::UnityEngine::Shader*  blitPS, ::UnityEngine::Shader*  blitColorAndDepthPS)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Blitter*>(),
                        {"Initialize", {}, {::i2c::type_of<::UnityEngine::Shader*>(), ::i2c::type_of<::UnityEngine::Shader*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, blitPS, blitColorAndDepthPS);
}
inline void UnityEngine::Rendering::Blitter::Cleanup()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Blitter*>(),
                        {"Cleanup", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::Rendering::Blitter::GetBlitMaterial(::UnityEngine::Rendering::TextureDimension  dimension, bool  singleSlice)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Blitter*>(),
                        {"GetBlitMaterial", {}, {::i2c::type_of<::UnityEngine::Rendering::TextureDimension>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(nullptr, ___internal_method, dimension, singleSlice);
}
inline void UnityEngine::Rendering::Blitter::DrawTriangle(::UnityEngine::Rendering::RasterCommandBuffer*  cmd, ::UnityEngine::Material*  material, int32_t  shaderPass)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Blitter*>(),
                        {"DrawTriangle", {}, {::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, material, shaderPass);
}
inline void UnityEngine::Rendering::Blitter::DrawTriangle(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Material*  material, int32_t  shaderPass)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Blitter*>(),
                        {"DrawTriangle", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, material, shaderPass);
}
inline void UnityEngine::Rendering::Blitter::DrawTriangle(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::MaterialPropertyBlock*  propertyBlock)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Blitter*>(),
                        {"DrawTriangle", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, material, shaderPass, propertyBlock);
}
inline void UnityEngine::Rendering::Blitter::DrawQuadMesh(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::MaterialPropertyBlock*  propertyBlock)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Blitter*>(),
                        {"DrawQuadMesh", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, material, shaderPass, propertyBlock);
}
inline void UnityEngine::Rendering::Blitter::DrawQuad(::UnityEngine::Rendering::RasterCommandBuffer*  cmd, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::MaterialPropertyBlock*  propertyBlock)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Blitter*>(),
                        {"DrawQuad", {}, {::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, material, shaderPass, propertyBlock);
}
inline void UnityEngine::Rendering::Blitter::DrawQuad(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Material*  material, int32_t  shaderPass)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Blitter*>(),
                        {"DrawQuad", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, material, shaderPass);
}
inline void UnityEngine::Rendering::Blitter::DrawQuad(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Material*  material, int32_t  shaderPass, ::UnityEngine::MaterialPropertyBlock*  propertyBlock)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Blitter*>(),
                        {"DrawQuad", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, material, shaderPass, propertyBlock);
}
inline bool UnityEngine::Rendering::Blitter::CanCopyMSAA()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Blitter*>(),
                        {"CanCopyMSAA", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool UnityEngine::Rendering::Blitter::CanCopyMSAA(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>  sourceDesc)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Blitter*>(),
                        {"CanCopyMSAA", {}, {::i2c::type_of<::by_ref<::UnityEngine::Rendering::RenderGraphModule::TextureDesc>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, sourceDesc);
}
inline void UnityEngine::Rendering::Blitter::CopyTexture(::UnityEngine::Rendering::RasterCommandBuffer*  cmd, bool  isMSAA, bool  force2DForXR)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Blitter*>(),
                        {"CopyTexture", {}, {::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, isMSAA, force2DForXR);
}
inline void UnityEngine::Rendering::Blitter::BlitTexture(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RTHandle*  source, ::UnityEngine::Vector4  scaleBias, float_t  sourceMipLevel, int32_t  sourceDepthSlice, bool  bilinear)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Blitter*>(),
                        {"BlitTexture", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, source, scaleBias, sourceMipLevel, sourceDepthSlice, bilinear);
}
inline void UnityEngine::Rendering::Blitter::BlitTexture(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RTHandle*  source, ::UnityEngine::Vector4  scaleBias, ::UnityEngine::Material*  material, int32_t  pass, float_t  sourceMipLevel, int32_t  sourceDepthSlice)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Blitter*>(),
                        {"BlitTexture", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, source, scaleBias, material, pass, sourceMipLevel, sourceDepthSlice);
}
inline void UnityEngine::Rendering::Blitter::BlitTexture(::UnityEngine::Rendering::RasterCommandBuffer*  cmd, ::UnityEngine::Rendering::RTHandle*  source, ::UnityEngine::Vector4  scaleBias, float_t  mipLevel, bool  bilinear)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Blitter*>(),
                        {"BlitTexture", {}, {::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, source, scaleBias, mipLevel, bilinear);
}
inline void UnityEngine::Rendering::Blitter::BlitTexture(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RTHandle*  source, ::UnityEngine::Vector4  scaleBias, float_t  mipLevel, bool  bilinear)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Blitter*>(),
                        {"BlitTexture", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, source, scaleBias, mipLevel, bilinear);
}
inline void UnityEngine::Rendering::Blitter::BlitTexture2D(::UnityEngine::Rendering::RasterCommandBuffer*  cmd, ::UnityEngine::Rendering::RTHandle*  source, ::UnityEngine::Vector4  scaleBias, float_t  mipLevel, bool  bilinear)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Blitter*>(),
                        {"BlitTexture2D", {}, {::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, source, scaleBias, mipLevel, bilinear);
}
inline void UnityEngine::Rendering::Blitter::BlitTexture2D(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RTHandle*  source, ::UnityEngine::Vector4  scaleBias, float_t  mipLevel, bool  bilinear)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Blitter*>(),
                        {"BlitTexture2D", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, source, scaleBias, mipLevel, bilinear);
}
inline void UnityEngine::Rendering::Blitter::BlitColorAndDepth(::UnityEngine::Rendering::RasterCommandBuffer*  cmd, ::UnityEngine::Texture*  sourceColor, ::UnityEngine::RenderTexture*  sourceDepth, ::UnityEngine::Vector4  scaleBias, float_t  mipLevel, bool  blitDepth)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Blitter*>(),
                        {"BlitColorAndDepth", {}, {::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, sourceColor, sourceDepth, scaleBias, mipLevel, blitDepth);
}
inline void UnityEngine::Rendering::Blitter::BlitColorAndDepth(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Texture*  sourceColor, ::UnityEngine::RenderTexture*  sourceDepth, ::UnityEngine::Vector4  scaleBias, float_t  mipLevel, bool  blitDepth)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Blitter*>(),
                        {"BlitColorAndDepth", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::RenderTexture*>(), ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, sourceColor, sourceDepth, scaleBias, mipLevel, blitDepth);
}
inline void UnityEngine::Rendering::Blitter::BlitTexture(::UnityEngine::Rendering::RasterCommandBuffer*  cmd, ::UnityEngine::Rendering::RTHandle*  source, ::UnityEngine::Vector4  scaleBias, ::UnityEngine::Material*  material, int32_t  pass)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Blitter*>(),
                        {"BlitTexture", {}, {::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, source, scaleBias, material, pass);
}
inline void UnityEngine::Rendering::Blitter::BlitTexture(::UnityEngine::Rendering::UnsafeCommandBuffer*  cmd, ::UnityEngine::Rendering::RTHandle*  source, ::UnityEngine::Vector4  scaleBias, ::UnityEngine::Material*  material, int32_t  pass)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Blitter*>(),
                        {"BlitTexture", {}, {::i2c::type_of<::UnityEngine::Rendering::UnsafeCommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, source, scaleBias, material, pass);
}
inline void UnityEngine::Rendering::Blitter::BlitTexture(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RTHandle*  source, ::UnityEngine::Vector4  scaleBias, ::UnityEngine::Material*  material, int32_t  pass)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Blitter*>(),
                        {"BlitTexture", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, source, scaleBias, material, pass);
}
inline void UnityEngine::Rendering::Blitter::BlitTexture(::UnityEngine::Rendering::RasterCommandBuffer*  cmd, ::UnityEngine::Rendering::RenderTargetIdentifier  source, ::UnityEngine::Vector4  scaleBias, ::UnityEngine::Material*  material, int32_t  pass)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Blitter*>(),
                        {"BlitTexture", {}, {::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, source, scaleBias, material, pass);
}
inline void UnityEngine::Rendering::Blitter::BlitTexture(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RenderTargetIdentifier  source, ::UnityEngine::Vector4  scaleBias, ::UnityEngine::Material*  material, int32_t  pass)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Blitter*>(),
                        {"BlitTexture", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, source, scaleBias, material, pass);
}
inline void UnityEngine::Rendering::Blitter::BlitTexture(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RenderTargetIdentifier  source, ::UnityEngine::Rendering::RenderTargetIdentifier  destination, ::UnityEngine::Material*  material, int32_t  pass)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Blitter*>(),
                        {"BlitTexture", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, source, destination, material, pass);
}
inline void UnityEngine::Rendering::Blitter::BlitTexture(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RenderTargetIdentifier  source, ::UnityEngine::Rendering::RenderTargetIdentifier  destination, ::UnityEngine::Rendering::RenderBufferLoadAction  loadAction, ::UnityEngine::Rendering::RenderBufferStoreAction  storeAction, ::UnityEngine::Material*  material, int32_t  pass)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Blitter*>(),
                        {"BlitTexture", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferLoadAction>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferStoreAction>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, source, destination, loadAction, storeAction, material, pass);
}
inline void UnityEngine::Rendering::Blitter::BlitTexture(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Vector4  scaleBias, ::UnityEngine::Material*  material, int32_t  pass)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Blitter*>(),
                        {"BlitTexture", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, scaleBias, material, pass);
}
inline void UnityEngine::Rendering::Blitter::BlitTexture(::UnityEngine::Rendering::RasterCommandBuffer*  cmd, ::UnityEngine::Vector4  scaleBias, ::UnityEngine::Material*  material, int32_t  pass)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Blitter*>(),
                        {"BlitTexture", {}, {::i2c::type_of<::UnityEngine::Rendering::RasterCommandBuffer*>(), ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, scaleBias, material, pass);
}
inline void UnityEngine::Rendering::Blitter::BlitCameraTexture(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RTHandle*  source, ::UnityEngine::Rendering::RTHandle*  destination, float_t  mipLevel, bool  bilinear)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Blitter*>(),
                        {"BlitCameraTexture", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, source, destination, mipLevel, bilinear);
}
inline void UnityEngine::Rendering::Blitter::BlitCameraTexture2D(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RTHandle*  source, ::UnityEngine::Rendering::RTHandle*  destination, float_t  mipLevel, bool  bilinear)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Blitter*>(),
                        {"BlitCameraTexture2D", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, source, destination, mipLevel, bilinear);
}
inline void UnityEngine::Rendering::Blitter::BlitCameraTexture(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RTHandle*  source, ::UnityEngine::Rendering::RTHandle*  destination, ::UnityEngine::Material*  material, int32_t  pass)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Blitter*>(),
                        {"BlitCameraTexture", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, source, destination, material, pass);
}
inline void UnityEngine::Rendering::Blitter::BlitCameraTexture(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RTHandle*  source, ::UnityEngine::Rendering::RTHandle*  destination, ::UnityEngine::Rendering::RenderBufferLoadAction  loadAction, ::UnityEngine::Rendering::RenderBufferStoreAction  storeAction, ::UnityEngine::Material*  material, int32_t  pass)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Blitter*>(),
                        {"BlitCameraTexture", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferLoadAction>(), ::i2c::type_of<::UnityEngine::Rendering::RenderBufferStoreAction>(), ::i2c::type_of<::UnityEngine::Material*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, source, destination, loadAction, storeAction, material, pass);
}
inline void UnityEngine::Rendering::Blitter::BlitCameraTexture(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RTHandle*  source, ::UnityEngine::Rendering::RTHandle*  destination, ::UnityEngine::Vector4  scaleBias, float_t  mipLevel, bool  bilinear)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Blitter*>(),
                        {"BlitCameraTexture", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, source, destination, scaleBias, mipLevel, bilinear);
}
inline void UnityEngine::Rendering::Blitter::BlitCameraTexture(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Rendering::RTHandle*  source, ::UnityEngine::Rendering::RTHandle*  destination, ::UnityEngine::Rect  destViewport, float_t  mipLevel, bool  bilinear)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Blitter*>(),
                        {"BlitCameraTexture", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rendering::RTHandle*>(), ::i2c::type_of<::UnityEngine::Rect>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, source, destination, destViewport, mipLevel, bilinear);
}
inline void UnityEngine::Rendering::Blitter::BlitQuad(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Texture*  source, ::UnityEngine::Vector4  scaleBiasTex, ::UnityEngine::Vector4  scaleBiasRT, int32_t  mipLevelTex, bool  bilinear)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Blitter*>(),
                        {"BlitQuad", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, source, scaleBiasTex, scaleBiasRT, mipLevelTex, bilinear);
}
inline void UnityEngine::Rendering::Blitter::BlitQuadWithPadding(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Texture*  source, ::UnityEngine::Vector2  textureSize, ::UnityEngine::Vector4  scaleBiasTex, ::UnityEngine::Vector4  scaleBiasRT, int32_t  mipLevelTex, bool  bilinear, int32_t  paddingInPixels)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Blitter*>(),
                        {"BlitQuadWithPadding", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, source, textureSize, scaleBiasTex, scaleBiasRT, mipLevelTex, bilinear, paddingInPixels);
}
inline void UnityEngine::Rendering::Blitter::BlitQuadWithPaddingMultiply(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Texture*  source, ::UnityEngine::Vector2  textureSize, ::UnityEngine::Vector4  scaleBiasTex, ::UnityEngine::Vector4  scaleBiasRT, int32_t  mipLevelTex, bool  bilinear, int32_t  paddingInPixels)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Blitter*>(),
                        {"BlitQuadWithPaddingMultiply", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, source, textureSize, scaleBiasTex, scaleBiasRT, mipLevelTex, bilinear, paddingInPixels);
}
inline void UnityEngine::Rendering::Blitter::BlitOctahedralWithPadding(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Texture*  source, ::UnityEngine::Vector2  textureSize, ::UnityEngine::Vector4  scaleBiasTex, ::UnityEngine::Vector4  scaleBiasRT, int32_t  mipLevelTex, bool  bilinear, int32_t  paddingInPixels)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Blitter*>(),
                        {"BlitOctahedralWithPadding", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, source, textureSize, scaleBiasTex, scaleBiasRT, mipLevelTex, bilinear, paddingInPixels);
}
inline void UnityEngine::Rendering::Blitter::BlitOctahedralWithPaddingMultiply(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Texture*  source, ::UnityEngine::Vector2  textureSize, ::UnityEngine::Vector4  scaleBiasTex, ::UnityEngine::Vector4  scaleBiasRT, int32_t  mipLevelTex, bool  bilinear, int32_t  paddingInPixels)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Blitter*>(),
                        {"BlitOctahedralWithPaddingMultiply", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, source, textureSize, scaleBiasTex, scaleBiasRT, mipLevelTex, bilinear, paddingInPixels);
}
inline void UnityEngine::Rendering::Blitter::BlitCubeToOctahedral2DQuad(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Texture*  source, ::UnityEngine::Vector4  scaleBiasRT, int32_t  mipLevelTex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Blitter*>(),
                        {"BlitCubeToOctahedral2DQuad", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, source, scaleBiasRT, mipLevelTex);
}
inline void UnityEngine::Rendering::Blitter::BlitCubeToOctahedral2DQuadWithPadding(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Texture*  source, ::UnityEngine::Vector2  textureSize, ::UnityEngine::Vector4  scaleBiasRT, int32_t  mipLevelTex, bool  bilinear, int32_t  paddingInPixels, ::System::Nullable_1<::UnityEngine::Vector4>  decodeInstructions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Blitter*>(),
                        {"BlitCubeToOctahedral2DQuadWithPadding", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Vector4>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, source, textureSize, scaleBiasRT, mipLevelTex, bilinear, paddingInPixels, decodeInstructions);
}
inline void UnityEngine::Rendering::Blitter::BlitCubeToOctahedral2DQuadSingleChannel(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Texture*  source, ::UnityEngine::Vector4  scaleBiasRT, int32_t  mipLevelTex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Blitter*>(),
                        {"BlitCubeToOctahedral2DQuadSingleChannel", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, source, scaleBiasRT, mipLevelTex);
}
inline void UnityEngine::Rendering::Blitter::BlitQuadSingleChannel(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::Texture*  source, ::UnityEngine::Vector4  scaleBiasTex, ::UnityEngine::Vector4  scaleBiasRT, int32_t  mipLevelTex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Blitter*>(),
                        {"BlitQuadSingleChannel", {}, {::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Texture*>(), ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, cmd, source, scaleBiasTex, scaleBiasRT, mipLevelTex);
}
inline ::ArrayW<::UnityEngine::Vector3> UnityEngine::Rendering::Blitter::_Initialize_g__GetFullScreenTriangleVertexPosition_14_0(float_t  z)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Blitter*>(),
                        {"<Initialize>g__GetFullScreenTriangleVertexPosition|14_0", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector3>>(nullptr, ___internal_method, z);
}
inline ::ArrayW<::UnityEngine::Vector2> UnityEngine::Rendering::Blitter::_Initialize_g__GetFullScreenTriangleTexCoord_14_1()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Blitter*>(),
                        {"<Initialize>g__GetFullScreenTriangleTexCoord|14_1", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector2>>(nullptr, ___internal_method);
}
inline ::ArrayW<::UnityEngine::Vector3> UnityEngine::Rendering::Blitter::_Initialize_g__GetQuadVertexPosition_14_2(float_t  z)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Blitter*>(),
                        {"<Initialize>g__GetQuadVertexPosition|14_2", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector3>>(nullptr, ___internal_method, z);
}
inline ::ArrayW<::UnityEngine::Vector2> UnityEngine::Rendering::Blitter::_Initialize_g__GetQuadTexCoord_14_3()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Rendering::Blitter*>(),
                        {"<Initialize>g__GetQuadTexCoord|14_3", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::Vector2>>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Blitter::Blitter()   {
}
inline void UnityEngine::Rendering::Blitter_BlitShaderIDs::setStaticF__BlitTexture(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_BlitTexture", ::UnityEngine::Rendering::Blitter_BlitShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Blitter_BlitShaderIDs::getStaticF__BlitTexture()  {
return ::cordl_internals::getStaticField<int32_t, "_BlitTexture", ::UnityEngine::Rendering::Blitter_BlitShaderIDs*>();
}
inline void UnityEngine::Rendering::Blitter_BlitShaderIDs::setStaticF__BlitCubeTexture(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_BlitCubeTexture", ::UnityEngine::Rendering::Blitter_BlitShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Blitter_BlitShaderIDs::getStaticF__BlitCubeTexture()  {
return ::cordl_internals::getStaticField<int32_t, "_BlitCubeTexture", ::UnityEngine::Rendering::Blitter_BlitShaderIDs*>();
}
inline void UnityEngine::Rendering::Blitter_BlitShaderIDs::setStaticF__BlitScaleBias(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_BlitScaleBias", ::UnityEngine::Rendering::Blitter_BlitShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Blitter_BlitShaderIDs::getStaticF__BlitScaleBias()  {
return ::cordl_internals::getStaticField<int32_t, "_BlitScaleBias", ::UnityEngine::Rendering::Blitter_BlitShaderIDs*>();
}
inline void UnityEngine::Rendering::Blitter_BlitShaderIDs::setStaticF__BlitScaleBiasRt(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_BlitScaleBiasRt", ::UnityEngine::Rendering::Blitter_BlitShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Blitter_BlitShaderIDs::getStaticF__BlitScaleBiasRt()  {
return ::cordl_internals::getStaticField<int32_t, "_BlitScaleBiasRt", ::UnityEngine::Rendering::Blitter_BlitShaderIDs*>();
}
inline void UnityEngine::Rendering::Blitter_BlitShaderIDs::setStaticF__BlitMipLevel(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_BlitMipLevel", ::UnityEngine::Rendering::Blitter_BlitShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Blitter_BlitShaderIDs::getStaticF__BlitMipLevel()  {
return ::cordl_internals::getStaticField<int32_t, "_BlitMipLevel", ::UnityEngine::Rendering::Blitter_BlitShaderIDs*>();
}
inline void UnityEngine::Rendering::Blitter_BlitShaderIDs::setStaticF__BlitTexArraySlice(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_BlitTexArraySlice", ::UnityEngine::Rendering::Blitter_BlitShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Blitter_BlitShaderIDs::getStaticF__BlitTexArraySlice()  {
return ::cordl_internals::getStaticField<int32_t, "_BlitTexArraySlice", ::UnityEngine::Rendering::Blitter_BlitShaderIDs*>();
}
inline void UnityEngine::Rendering::Blitter_BlitShaderIDs::setStaticF__BlitTextureSize(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_BlitTextureSize", ::UnityEngine::Rendering::Blitter_BlitShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Blitter_BlitShaderIDs::getStaticF__BlitTextureSize()  {
return ::cordl_internals::getStaticField<int32_t, "_BlitTextureSize", ::UnityEngine::Rendering::Blitter_BlitShaderIDs*>();
}
inline void UnityEngine::Rendering::Blitter_BlitShaderIDs::setStaticF__BlitPaddingSize(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_BlitPaddingSize", ::UnityEngine::Rendering::Blitter_BlitShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Blitter_BlitShaderIDs::getStaticF__BlitPaddingSize()  {
return ::cordl_internals::getStaticField<int32_t, "_BlitPaddingSize", ::UnityEngine::Rendering::Blitter_BlitShaderIDs*>();
}
inline void UnityEngine::Rendering::Blitter_BlitShaderIDs::setStaticF__BlitDecodeInstructions(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_BlitDecodeInstructions", ::UnityEngine::Rendering::Blitter_BlitShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Blitter_BlitShaderIDs::getStaticF__BlitDecodeInstructions()  {
return ::cordl_internals::getStaticField<int32_t, "_BlitDecodeInstructions", ::UnityEngine::Rendering::Blitter_BlitShaderIDs*>();
}
inline void UnityEngine::Rendering::Blitter_BlitShaderIDs::setStaticF__InputDepth(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_InputDepth", ::UnityEngine::Rendering::Blitter_BlitShaderIDs*>(std::forward<int32_t>(value));
}
inline int32_t UnityEngine::Rendering::Blitter_BlitShaderIDs::getStaticF__InputDepth()  {
return ::cordl_internals::getStaticField<int32_t, "_InputDepth", ::UnityEngine::Rendering::Blitter_BlitShaderIDs*>();
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::Blitter_BlitShaderIDs::Blitter_BlitShaderIDs()   {
}
