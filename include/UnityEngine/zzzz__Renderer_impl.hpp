#pragma once
// IWYU pragma private; include "UnityEngine/Renderer.hpp"
#include "UnityEngine/zzzz__Component_impl.hpp"
#include "UnityEngine/zzzz__Renderer_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/Rendering/zzzz__LightProbeUsage_def.hpp"
#include "UnityEngine/Rendering/zzzz__ReflectionProbeUsage_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShadowCastingMode_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__MotionVectorGenerationMode_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "UnityEngineInternal/zzzz__LightmapType_def.hpp"
//  Writing Method size for method: ::UnityEngine::Renderer.get_bounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (::UnityEngine::Renderer::*)()>(&::UnityEngine::Renderer::get_bounds)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xb5894b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"get_bounds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.set_bounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Renderer::*)(::UnityEngine::Bounds)>(&::UnityEngine::Renderer::set_bounds)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb589598;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"set_bounds", {}, {::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.get_localBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (::UnityEngine::Renderer::*)()>(&::UnityEngine::Renderer::get_localBounds)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xb58965c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"get_localBounds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.set_localBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Renderer::*)(::UnityEngine::Bounds)>(&::UnityEngine::Renderer::set_localBounds)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb589744;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"set_localBounds", {}, {::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.SetStaticLightmapST
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Renderer::*)(::UnityEngine::Vector4)>(&::UnityEngine::Renderer::SetStaticLightmapST)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xb589808;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"SetStaticLightmapST", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.GetMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (::UnityEngine::Renderer::*)()>(&::UnityEngine::Renderer::GetMaterial)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xb5898dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"GetMaterial", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.GetSharedMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (::UnityEngine::Renderer::*)()>(&::UnityEngine::Renderer::GetSharedMaterial)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xb5899ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"GetSharedMaterial", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.SetMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Renderer::*)(::UnityEngine::Material*)>(&::UnityEngine::Renderer::SetMaterial)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xb589a7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"SetMaterial", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.GetMaterialArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::Material>> (::UnityEngine::Renderer::*)()>(&::UnityEngine::Renderer::GetMaterialArray)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb589b74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"GetMaterialArray", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.CopyMaterialArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Renderer::*)(::by_ref<::ArrayW<::UnityEngine::Material*>>)>(&::UnityEngine::Renderer::CopyMaterialArray)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb589c28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"CopyMaterialArray", {}, {::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Material*>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.CopySharedMaterialArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Renderer::*)(::by_ref<::ArrayW<::UnityEngine::Material*>>)>(&::UnityEngine::Renderer::CopySharedMaterialArray)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb589cec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"CopySharedMaterialArray", {}, {::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Material*>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.SetMaterialArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Renderer::*)(::ArrayW<::UnityEngine::Material*>, int32_t)>(&::UnityEngine::Renderer::SetMaterialArray)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xb589db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"SetMaterialArray", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Material*>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.SetMaterialArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Renderer::*)(::ArrayW<::UnityEngine::Material*>)>(&::UnityEngine::Renderer::SetMaterialArray)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xb589ec4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"SetMaterialArray", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Material*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.Internal_SetPropertyBlock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Renderer::*)(::UnityEngine::MaterialPropertyBlock*)>(&::UnityEngine::Renderer::Internal_SetPropertyBlock)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xb589ee4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"Internal_SetPropertyBlock", {}, {::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.Internal_GetPropertyBlock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Renderer::*)(::UnityEngine::MaterialPropertyBlock*)>(&::UnityEngine::Renderer::Internal_GetPropertyBlock)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xb589fb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"Internal_GetPropertyBlock", {}, {::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.Internal_SetPropertyBlockMaterialIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Renderer::*)(::UnityEngine::MaterialPropertyBlock*, int32_t)>(&::UnityEngine::Renderer::Internal_SetPropertyBlockMaterialIndex)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xb58a0cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"Internal_SetPropertyBlockMaterialIndex", {}, {::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.Internal_GetPropertyBlockMaterialIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Renderer::*)(::UnityEngine::MaterialPropertyBlock*, int32_t)>(&::UnityEngine::Renderer::Internal_GetPropertyBlockMaterialIndex)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xb58a1b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"Internal_GetPropertyBlockMaterialIndex", {}, {::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.SetPropertyBlock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Renderer::*)(::UnityEngine::MaterialPropertyBlock*)>(&::UnityEngine::Renderer::SetPropertyBlock)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb58a2f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"SetPropertyBlock", {}, {::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.SetPropertyBlock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Renderer::*)(::UnityEngine::MaterialPropertyBlock*, int32_t)>(&::UnityEngine::Renderer::SetPropertyBlock)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb58a2f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"SetPropertyBlock", {}, {::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.GetPropertyBlock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Renderer::*)(::UnityEngine::MaterialPropertyBlock*)>(&::UnityEngine::Renderer::GetPropertyBlock)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb58a2fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"GetPropertyBlock", {}, {::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.GetPropertyBlock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Renderer::*)(::UnityEngine::MaterialPropertyBlock*, int32_t)>(&::UnityEngine::Renderer::GetPropertyBlock)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb58a300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"GetPropertyBlock", {}, {::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.get_enabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Renderer::*)()>(&::UnityEngine::Renderer::get_enabled)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb58a304;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"get_enabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.set_enabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Renderer::*)(bool)>(&::UnityEngine::Renderer::set_enabled)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb58a3b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"set_enabled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.get_shadowCastingMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::ShadowCastingMode (::UnityEngine::Renderer::*)()>(&::UnityEngine::Renderer::get_shadowCastingMode)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb58a47c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"get_shadowCastingMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.set_shadowCastingMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Renderer::*)(::UnityEngine::Rendering::ShadowCastingMode)>(&::UnityEngine::Renderer::set_shadowCastingMode)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb58a530;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"set_shadowCastingMode", {}, {::i2c::type_of<::UnityEngine::Rendering::ShadowCastingMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.set_receiveShadows
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Renderer::*)(bool)>(&::UnityEngine::Renderer::set_receiveShadows)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb58a5f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"set_receiveShadows", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.get_forceRenderingOff
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Renderer::*)()>(&::UnityEngine::Renderer::get_forceRenderingOff)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb58a6b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"get_forceRenderingOff", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.set_forceRenderingOff
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Renderer::*)(bool)>(&::UnityEngine::Renderer::set_forceRenderingOff)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb58a76c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"set_forceRenderingOff", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.set_motionVectorGenerationMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Renderer::*)(::UnityEngine::MotionVectorGenerationMode)>(&::UnityEngine::Renderer::set_motionVectorGenerationMode)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb58a830;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"set_motionVectorGenerationMode", {}, {::i2c::type_of<::UnityEngine::MotionVectorGenerationMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.get_lightProbeUsage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::LightProbeUsage (::UnityEngine::Renderer::*)()>(&::UnityEngine::Renderer::get_lightProbeUsage)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb58a8f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"get_lightProbeUsage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.set_lightProbeUsage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Renderer::*)(::UnityEngine::Rendering::LightProbeUsage)>(&::UnityEngine::Renderer::set_lightProbeUsage)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb58a9a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"set_lightProbeUsage", {}, {::i2c::type_of<::UnityEngine::Rendering::LightProbeUsage>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.get_reflectionProbeUsage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::ReflectionProbeUsage (::UnityEngine::Renderer::*)()>(&::UnityEngine::Renderer::get_reflectionProbeUsage)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb58aa6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"get_reflectionProbeUsage", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.set_reflectionProbeUsage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Renderer::*)(::UnityEngine::Rendering::ReflectionProbeUsage)>(&::UnityEngine::Renderer::set_reflectionProbeUsage)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb58ab20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"set_reflectionProbeUsage", {}, {::i2c::type_of<::UnityEngine::Rendering::ReflectionProbeUsage>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.get_sortingLayerID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Renderer::*)()>(&::UnityEngine::Renderer::get_sortingLayerID)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb58abe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"get_sortingLayerID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.set_sortingLayerID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Renderer::*)(int32_t)>(&::UnityEngine::Renderer::set_sortingLayerID)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb58ac98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"set_sortingLayerID", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.get_sortingOrder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Renderer::*)()>(&::UnityEngine::Renderer::get_sortingOrder)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb58ad5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"get_sortingOrder", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.set_sortingOrder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Renderer::*)(int32_t)>(&::UnityEngine::Renderer::set_sortingOrder)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb58ae10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"set_sortingOrder", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.get_sortingGroupID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Renderer::*)()>(&::UnityEngine::Renderer::get_sortingGroupID)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb58aed4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"get_sortingGroupID", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.get_sortingGroupOrder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Renderer::*)()>(&::UnityEngine::Renderer::get_sortingGroupOrder)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb58af88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"get_sortingGroupOrder", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.set_allowOcclusionWhenDynamic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Renderer::*)(bool)>(&::UnityEngine::Renderer::set_allowOcclusionWhenDynamic)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb58b03c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"set_allowOcclusionWhenDynamic", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.get_isPartOfStaticBatch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Renderer::*)()>(&::UnityEngine::Renderer::get_isPartOfStaticBatch)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb58b100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"get_isPartOfStaticBatch", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.get_worldToLocalMatrix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (::UnityEngine::Renderer::*)()>(&::UnityEngine::Renderer::get_worldToLocalMatrix)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xb58b1b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"get_worldToLocalMatrix", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.get_localToWorldMatrix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (::UnityEngine::Renderer::*)()>(&::UnityEngine::Renderer::get_localToWorldMatrix)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0xb58b2a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"get_localToWorldMatrix", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.set_probeAnchor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Renderer::*)(::UnityEngine::Transform*)>(&::UnityEngine::Renderer::set_probeAnchor)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xb58b38c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"set_probeAnchor", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.GetLightmapIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Renderer::*)(::UnityEngineInternal::LightmapType)>(&::UnityEngine::Renderer::GetLightmapIndex)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb58b484;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"GetLightmapIndex", {}, {::i2c::type_of<::UnityEngineInternal::LightmapType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.SetLightmapIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Renderer::*)(int32_t, ::UnityEngineInternal::LightmapType)>(&::UnityEngine::Renderer::SetLightmapIndex)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xb58b548;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"SetLightmapIndex", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngineInternal::LightmapType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.GetLightmapST
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (::UnityEngine::Renderer::*)(::UnityEngineInternal::LightmapType)>(&::UnityEngine::Renderer::GetLightmapST)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xb58b62c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"GetLightmapST", {}, {::i2c::type_of<::UnityEngineInternal::LightmapType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.get_lightmapIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Renderer::*)()>(&::UnityEngine::Renderer::get_lightmapIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb58b71c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"get_lightmapIndex", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.set_lightmapIndex
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Renderer::*)(int32_t)>(&::UnityEngine::Renderer::set_lightmapIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb58b724;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"set_lightmapIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.get_lightmapScaleOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (::UnityEngine::Renderer::*)()>(&::UnityEngine::Renderer::get_lightmapScaleOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb58b72c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"get_lightmapScaleOffset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.set_lightmapScaleOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Renderer::*)(::UnityEngine::Vector4)>(&::UnityEngine::Renderer::set_lightmapScaleOffset)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb58b734;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"set_lightmapScaleOffset", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.GetMaterialCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Renderer::*)()>(&::UnityEngine::Renderer::GetMaterialCount)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb58b738;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"GetMaterialCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.GetSharedMaterialArray
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::Material>> (::UnityEngine::Renderer::*)()>(&::UnityEngine::Renderer::GetSharedMaterialArray)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb58b7ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"GetSharedMaterialArray", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.get_materials
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::Material>> (::UnityEngine::Renderer::*)()>(&::UnityEngine::Renderer::get_materials)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb58b8a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"get_materials", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.set_materials
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Renderer::*)(::ArrayW<::UnityEngine::Material*>)>(&::UnityEngine::Renderer::set_materials)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb58b8a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"set_materials", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Material*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.get_material
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (::UnityEngine::Renderer::*)()>(&::UnityEngine::Renderer::get_material)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb58b8a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"get_material", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.set_material
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Renderer::*)(::UnityEngine::Material*)>(&::UnityEngine::Renderer::set_material)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb58b8ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"set_material", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.get_sharedMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (::UnityEngine::Renderer::*)()>(&::UnityEngine::Renderer::get_sharedMaterial)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb58b8b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"get_sharedMaterial", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.set_sharedMaterial
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Renderer::*)(::UnityEngine::Material*)>(&::UnityEngine::Renderer::set_sharedMaterial)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb58b8b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"set_sharedMaterial", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.get_sharedMaterials
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::Material>> (::UnityEngine::Renderer::*)()>(&::UnityEngine::Renderer::get_sharedMaterials)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb58b8b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"get_sharedMaterials", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.set_sharedMaterials
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Renderer::*)(::ArrayW<::UnityEngine::Material*>)>(&::UnityEngine::Renderer::set_sharedMaterials)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb58b8bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"set_sharedMaterials", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Material*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.GetMaterials
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Renderer::*)(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*)>(&::UnityEngine::Renderer::GetMaterials)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xb58b8c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"GetMaterials", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.SetSharedMaterials
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Renderer::*)(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*)>(&::UnityEngine::Renderer::SetSharedMaterials)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xb58b9cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"SetSharedMaterials", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.SetMaterials
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Renderer::*)(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*)>(&::UnityEngine::Renderer::SetMaterials)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xb58bab4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"SetMaterials", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.GetSharedMaterials
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Renderer::*)(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*)>(&::UnityEngine::Renderer::GetSharedMaterials)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xb58bb9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"GetSharedMaterials", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Renderer::*)()>(&::UnityEngine::Renderer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb585248;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.get_bounds_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bounds>)>(&::UnityEngine::Renderer::get_bounds_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb589554;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"get_bounds_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.set_bounds_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bounds>)>(&::UnityEngine::Renderer::set_bounds_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb589618;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"set_bounds_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.get_localBounds_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bounds>)>(&::UnityEngine::Renderer::get_localBounds_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb589700;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"get_localBounds_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.set_localBounds_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bounds>)>(&::UnityEngine::Renderer::set_localBounds_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb5897c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"set_localBounds_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.SetStaticLightmapST_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector4>)>(&::UnityEngine::Renderer::SetStaticLightmapST_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb589898;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"SetStaticLightmapST_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.GetMaterial_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::UnityEngine::Renderer::GetMaterial_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb589970;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"GetMaterial_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.GetSharedMaterial_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::UnityEngine::Renderer::GetSharedMaterial_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb589a40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"GetSharedMaterial_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.SetMaterial_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::Renderer::SetMaterial_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb589b30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"SetMaterial_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.GetMaterialArray_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::Material>> (*)(::System::IntPtr)>(&::UnityEngine::Renderer::GetMaterialArray_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb589bec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"GetMaterialArray_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.CopyMaterialArray_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::ArrayW<::UnityEngine::Material*>>)>(&::UnityEngine::Renderer::CopyMaterialArray_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb589ca8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"CopyMaterialArray_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Material*>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.CopySharedMaterialArray_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::ArrayW<::UnityEngine::Material*>>)>(&::UnityEngine::Renderer::CopySharedMaterialArray_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb589d6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"CopySharedMaterialArray_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Material*>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.SetMaterialArray_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::ArrayW<::UnityEngine::Material*>, int32_t)>(&::UnityEngine::Renderer::SetMaterialArray_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb589e70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"SetMaterialArray_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<::UnityEngine::Material*>>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.Internal_SetPropertyBlock_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::Renderer::Internal_SetPropertyBlock_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb589f6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"Internal_SetPropertyBlock_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.Internal_GetPropertyBlock_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::Renderer::Internal_GetPropertyBlock_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb58a088;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"Internal_GetPropertyBlock_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.Internal_SetPropertyBlockMaterialIndex_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, int32_t)>(&::UnityEngine::Renderer::Internal_SetPropertyBlockMaterialIndex_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb58a164;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"Internal_SetPropertyBlockMaterialIndex_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.Internal_GetPropertyBlockMaterialIndex_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, int32_t)>(&::UnityEngine::Renderer::Internal_GetPropertyBlockMaterialIndex_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb58a2a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"Internal_GetPropertyBlockMaterialIndex_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.get_enabled_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::Renderer::get_enabled_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb58a37c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"get_enabled_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.set_enabled_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::Renderer::set_enabled_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb58a438;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"set_enabled_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.get_shadowCastingMode_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::ShadowCastingMode (*)(::System::IntPtr)>(&::UnityEngine::Renderer::get_shadowCastingMode_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb58a4f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"get_shadowCastingMode_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.set_shadowCastingMode_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::Rendering::ShadowCastingMode)>(&::UnityEngine::Renderer::set_shadowCastingMode_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb58a5b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"set_shadowCastingMode_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::ShadowCastingMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.set_receiveShadows_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::Renderer::set_receiveShadows_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb58a674;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"set_receiveShadows_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.get_forceRenderingOff_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::Renderer::get_forceRenderingOff_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb58a730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"get_forceRenderingOff_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.set_forceRenderingOff_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::Renderer::set_forceRenderingOff_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb58a7ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"set_forceRenderingOff_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.set_motionVectorGenerationMode_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::MotionVectorGenerationMode)>(&::UnityEngine::Renderer::set_motionVectorGenerationMode_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb58a8b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"set_motionVectorGenerationMode_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::MotionVectorGenerationMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.get_lightProbeUsage_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::LightProbeUsage (*)(::System::IntPtr)>(&::UnityEngine::Renderer::get_lightProbeUsage_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb58a96c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"get_lightProbeUsage_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.set_lightProbeUsage_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::Rendering::LightProbeUsage)>(&::UnityEngine::Renderer::set_lightProbeUsage_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb58aa28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"set_lightProbeUsage_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::LightProbeUsage>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.get_reflectionProbeUsage_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rendering::ReflectionProbeUsage (*)(::System::IntPtr)>(&::UnityEngine::Renderer::get_reflectionProbeUsage_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb58aae4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"get_reflectionProbeUsage_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.set_reflectionProbeUsage_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::Rendering::ReflectionProbeUsage)>(&::UnityEngine::Renderer::set_reflectionProbeUsage_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb58aba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"set_reflectionProbeUsage_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::ReflectionProbeUsage>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.get_sortingLayerID_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::Renderer::get_sortingLayerID_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb58ac5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"get_sortingLayerID_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.set_sortingLayerID_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t)>(&::UnityEngine::Renderer::set_sortingLayerID_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb58ad18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"set_sortingLayerID_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.get_sortingOrder_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::Renderer::get_sortingOrder_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb58add4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"get_sortingOrder_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.set_sortingOrder_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t)>(&::UnityEngine::Renderer::set_sortingOrder_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb58ae90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"set_sortingOrder_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.get_sortingGroupID_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::Renderer::get_sortingGroupID_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb58af4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"get_sortingGroupID_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.get_sortingGroupOrder_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::Renderer::get_sortingGroupOrder_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb58b000;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"get_sortingGroupOrder_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.set_allowOcclusionWhenDynamic_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::Renderer::set_allowOcclusionWhenDynamic_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb58b0bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"set_allowOcclusionWhenDynamic_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.get_isPartOfStaticBatch_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::Renderer::get_isPartOfStaticBatch_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb58b178;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"get_isPartOfStaticBatch_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.get_worldToLocalMatrix_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Matrix4x4>)>(&::UnityEngine::Renderer::get_worldToLocalMatrix_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb58b25c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"get_worldToLocalMatrix_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.get_localToWorldMatrix_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Matrix4x4>)>(&::UnityEngine::Renderer::get_localToWorldMatrix_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb58b348;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"get_localToWorldMatrix_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.set_probeAnchor_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::Renderer::set_probeAnchor_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb58b440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"set_probeAnchor_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.GetLightmapIndex_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::UnityEngineInternal::LightmapType)>(&::UnityEngine::Renderer::GetLightmapIndex_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb58b504;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"GetLightmapIndex_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngineInternal::LightmapType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.SetLightmapIndex_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, ::UnityEngineInternal::LightmapType)>(&::UnityEngine::Renderer::SetLightmapIndex_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb58b5d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"SetLightmapIndex_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngineInternal::LightmapType>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.GetLightmapST_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngineInternal::LightmapType, ::by_ref<::UnityEngine::Vector4>)>(&::UnityEngine::Renderer::GetLightmapST_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb58b6c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"GetLightmapST_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngineInternal::LightmapType>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.GetMaterialCount_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::Renderer::GetMaterialCount_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb58b7b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"GetMaterialCount_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Renderer.GetSharedMaterialArray_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::Material>> (*)(::System::IntPtr)>(&::UnityEngine::Renderer::GetSharedMaterialArray_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb58b864;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"GetSharedMaterialArray_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
inline ::UnityEngine::Bounds UnityEngine::Renderer::get_bounds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"get_bounds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(this, ___internal_method);
}
inline void UnityEngine::Renderer::set_bounds(::UnityEngine::Bounds  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"set_bounds", {}, {::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Bounds UnityEngine::Renderer::get_localBounds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"get_localBounds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(this, ___internal_method);
}
inline void UnityEngine::Renderer::set_localBounds(::UnityEngine::Bounds  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"set_localBounds", {}, {::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Renderer::SetStaticLightmapST(::UnityEngine::Vector4  st)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"SetStaticLightmapST", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, st);
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::Renderer::GetMaterial()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"GetMaterial", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::Renderer::GetSharedMaterial()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"GetSharedMaterial", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(this, ___internal_method);
}
inline void UnityEngine::Renderer::SetMaterial(::UnityEngine::Material*  m)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"SetMaterial", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, m);
}
inline ::ArrayW<::UnityW<::UnityEngine::Material>> UnityEngine::Renderer::GetMaterialArray()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"GetMaterialArray", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Material>>>(this, ___internal_method);
}
inline void UnityEngine::Renderer::CopyMaterialArray(::by_ref<::ArrayW<::UnityEngine::Material*>>  m)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"CopyMaterialArray", {}, {::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Material*>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, m);
}
inline void UnityEngine::Renderer::CopySharedMaterialArray(::by_ref<::ArrayW<::UnityEngine::Material*>>  m)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"CopySharedMaterialArray", {}, {::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Material*>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, m);
}
inline void UnityEngine::Renderer::SetMaterialArray(/* [NotNull] */ ::ArrayW<::UnityEngine::Material*>  m, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"SetMaterialArray", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Material*>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, m, length);
}
inline void UnityEngine::Renderer::SetMaterialArray(::ArrayW<::UnityEngine::Material*>  m)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"SetMaterialArray", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Material*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, m);
}
inline void UnityEngine::Renderer::Internal_SetPropertyBlock(::UnityEngine::MaterialPropertyBlock*  properties)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"Internal_SetPropertyBlock", {}, {::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, properties);
}
inline void UnityEngine::Renderer::Internal_GetPropertyBlock(/* [NotNull] */ ::UnityEngine::MaterialPropertyBlock*  dest)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"Internal_GetPropertyBlock", {}, {::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dest);
}
inline void UnityEngine::Renderer::Internal_SetPropertyBlockMaterialIndex(::UnityEngine::MaterialPropertyBlock*  properties, int32_t  materialIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"Internal_SetPropertyBlockMaterialIndex", {}, {::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, properties, materialIndex);
}
inline void UnityEngine::Renderer::Internal_GetPropertyBlockMaterialIndex(/* [NotNull] */ ::UnityEngine::MaterialPropertyBlock*  dest, int32_t  materialIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"Internal_GetPropertyBlockMaterialIndex", {}, {::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dest, materialIndex);
}
inline void UnityEngine::Renderer::SetPropertyBlock(::UnityEngine::MaterialPropertyBlock*  properties)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"SetPropertyBlock", {}, {::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, properties);
}
inline void UnityEngine::Renderer::SetPropertyBlock(::UnityEngine::MaterialPropertyBlock*  properties, int32_t  materialIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"SetPropertyBlock", {}, {::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, properties, materialIndex);
}
inline void UnityEngine::Renderer::GetPropertyBlock(::UnityEngine::MaterialPropertyBlock*  properties)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"GetPropertyBlock", {}, {::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, properties);
}
inline void UnityEngine::Renderer::GetPropertyBlock(::UnityEngine::MaterialPropertyBlock*  properties, int32_t  materialIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"GetPropertyBlock", {}, {::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, properties, materialIndex);
}
inline bool UnityEngine::Renderer::get_enabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"get_enabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Renderer::set_enabled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"set_enabled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::ShadowCastingMode UnityEngine::Renderer::get_shadowCastingMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"get_shadowCastingMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ShadowCastingMode>(this, ___internal_method);
}
inline void UnityEngine::Renderer::set_shadowCastingMode(::UnityEngine::Rendering::ShadowCastingMode  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"set_shadowCastingMode", {}, {::i2c::type_of<::UnityEngine::Rendering::ShadowCastingMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Renderer::set_receiveShadows(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"set_receiveShadows", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Renderer::get_forceRenderingOff()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"get_forceRenderingOff", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Renderer::set_forceRenderingOff(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"set_forceRenderingOff", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Renderer::set_motionVectorGenerationMode(::UnityEngine::MotionVectorGenerationMode  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"set_motionVectorGenerationMode", {}, {::i2c::type_of<::UnityEngine::MotionVectorGenerationMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::LightProbeUsage UnityEngine::Renderer::get_lightProbeUsage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"get_lightProbeUsage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::LightProbeUsage>(this, ___internal_method);
}
inline void UnityEngine::Renderer::set_lightProbeUsage(::UnityEngine::Rendering::LightProbeUsage  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"set_lightProbeUsage", {}, {::i2c::type_of<::UnityEngine::Rendering::LightProbeUsage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Rendering::ReflectionProbeUsage UnityEngine::Renderer::get_reflectionProbeUsage()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"get_reflectionProbeUsage", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ReflectionProbeUsage>(this, ___internal_method);
}
inline void UnityEngine::Renderer::set_reflectionProbeUsage(::UnityEngine::Rendering::ReflectionProbeUsage  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"set_reflectionProbeUsage", {}, {::i2c::type_of<::UnityEngine::Rendering::ReflectionProbeUsage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Renderer::get_sortingLayerID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"get_sortingLayerID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Renderer::set_sortingLayerID(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"set_sortingLayerID", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Renderer::get_sortingOrder()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"get_sortingOrder", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Renderer::set_sortingOrder(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"set_sortingOrder", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Renderer::get_sortingGroupID()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"get_sortingGroupID", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t UnityEngine::Renderer::get_sortingGroupOrder()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"get_sortingGroupOrder", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Renderer::set_allowOcclusionWhenDynamic(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"set_allowOcclusionWhenDynamic", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Renderer::get_isPartOfStaticBatch()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"get_isPartOfStaticBatch", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Matrix4x4 UnityEngine::Renderer::get_worldToLocalMatrix()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"get_worldToLocalMatrix", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(this, ___internal_method);
}
inline ::UnityEngine::Matrix4x4 UnityEngine::Renderer::get_localToWorldMatrix()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"get_localToWorldMatrix", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(this, ___internal_method);
}
inline void UnityEngine::Renderer::set_probeAnchor(::UnityEngine::Transform*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"set_probeAnchor", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Renderer::GetLightmapIndex(::UnityEngineInternal::LightmapType  lt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"GetLightmapIndex", {}, {::i2c::type_of<::UnityEngineInternal::LightmapType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, lt);
}
inline void UnityEngine::Renderer::SetLightmapIndex(int32_t  index, ::UnityEngineInternal::LightmapType  lt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"SetLightmapIndex", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngineInternal::LightmapType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, lt);
}
inline ::UnityEngine::Vector4 UnityEngine::Renderer::GetLightmapST(::UnityEngineInternal::LightmapType  lt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"GetLightmapST", {}, {::i2c::type_of<::UnityEngineInternal::LightmapType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(this, ___internal_method, lt);
}
inline int32_t UnityEngine::Renderer::get_lightmapIndex()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"get_lightmapIndex", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Renderer::set_lightmapIndex(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"set_lightmapIndex", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector4 UnityEngine::Renderer::get_lightmapScaleOffset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"get_lightmapScaleOffset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(this, ___internal_method);
}
inline void UnityEngine::Renderer::set_lightmapScaleOffset(::UnityEngine::Vector4  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"set_lightmapScaleOffset", {}, {::i2c::type_of<::UnityEngine::Vector4>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Renderer::GetMaterialCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"GetMaterialCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::ArrayW<::UnityW<::UnityEngine::Material>> UnityEngine::Renderer::GetSharedMaterialArray()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"GetSharedMaterialArray", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Material>>>(this, ___internal_method);
}
inline ::ArrayW<::UnityW<::UnityEngine::Material>> UnityEngine::Renderer::get_materials()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"get_materials", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Material>>>(this, ___internal_method);
}
inline void UnityEngine::Renderer::set_materials(::ArrayW<::UnityEngine::Material*>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"set_materials", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Material*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::Renderer::get_material()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"get_material", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(this, ___internal_method);
}
inline void UnityEngine::Renderer::set_material(::UnityEngine::Material*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"set_material", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::Renderer::get_sharedMaterial()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"get_sharedMaterial", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(this, ___internal_method);
}
inline void UnityEngine::Renderer::set_sharedMaterial(::UnityEngine::Material*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"set_sharedMaterial", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::UnityW<::UnityEngine::Material>> UnityEngine::Renderer::get_sharedMaterials()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"get_sharedMaterials", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Material>>>(this, ___internal_method);
}
inline void UnityEngine::Renderer::set_sharedMaterials(::ArrayW<::UnityEngine::Material*>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"set_sharedMaterials", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Material*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Renderer::GetMaterials(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*  m)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"GetMaterials", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, m);
}
inline void UnityEngine::Renderer::SetSharedMaterials(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*  materials)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"SetSharedMaterials", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, materials);
}
inline void UnityEngine::Renderer::SetMaterials(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*  materials)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"SetMaterials", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, materials);
}
inline void UnityEngine::Renderer::GetSharedMaterials(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*  m)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"GetSharedMaterials", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Material>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, m);
}
inline void UnityEngine::Renderer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Renderer::get_bounds_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bounds>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"get_bounds_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::Renderer::set_bounds_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bounds>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"set_bounds_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::Renderer::get_localBounds_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bounds>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"get_localBounds_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::Renderer::set_localBounds_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bounds>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"set_localBounds_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bounds>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::Renderer::SetStaticLightmapST_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector4>  st)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"SetStaticLightmapST_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, st);
}
inline ::System::IntPtr UnityEngine::Renderer::GetMaterial_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"GetMaterial_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, _unity_self);
}
inline ::System::IntPtr UnityEngine::Renderer::GetSharedMaterial_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"GetSharedMaterial_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Renderer::SetMaterial_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  m)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"SetMaterial_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, m);
}
inline ::ArrayW<::UnityW<::UnityEngine::Material>> UnityEngine::Renderer::GetMaterialArray_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"GetMaterialArray_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Material>>>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Renderer::CopyMaterialArray_Injected(::System::IntPtr  _unity_self, ::by_ref<::ArrayW<::UnityEngine::Material*>>  m)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"CopyMaterialArray_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Material*>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, m);
}
inline void UnityEngine::Renderer::CopySharedMaterialArray_Injected(::System::IntPtr  _unity_self, ::by_ref<::ArrayW<::UnityEngine::Material*>>  m)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"CopySharedMaterialArray_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Material*>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, m);
}
inline void UnityEngine::Renderer::SetMaterialArray_Injected(::System::IntPtr  _unity_self, ::ArrayW<::UnityEngine::Material*>  m, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"SetMaterialArray_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<::UnityEngine::Material*>>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, m, length);
}
inline void UnityEngine::Renderer::Internal_SetPropertyBlock_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  properties)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"Internal_SetPropertyBlock_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, properties);
}
inline void UnityEngine::Renderer::Internal_GetPropertyBlock_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  dest)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"Internal_GetPropertyBlock_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, dest);
}
inline void UnityEngine::Renderer::Internal_SetPropertyBlockMaterialIndex_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  properties, int32_t  materialIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"Internal_SetPropertyBlockMaterialIndex_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, properties, materialIndex);
}
inline void UnityEngine::Renderer::Internal_GetPropertyBlockMaterialIndex_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  dest, int32_t  materialIndex)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"Internal_GetPropertyBlockMaterialIndex_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, dest, materialIndex);
}
inline bool UnityEngine::Renderer::get_enabled_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"get_enabled_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Renderer::set_enabled_Injected(::System::IntPtr  _unity_self, bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"set_enabled_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline ::UnityEngine::Rendering::ShadowCastingMode UnityEngine::Renderer::get_shadowCastingMode_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"get_shadowCastingMode_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ShadowCastingMode>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Renderer::set_shadowCastingMode_Injected(::System::IntPtr  _unity_self, ::UnityEngine::Rendering::ShadowCastingMode  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"set_shadowCastingMode_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::ShadowCastingMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::Renderer::set_receiveShadows_Injected(::System::IntPtr  _unity_self, bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"set_receiveShadows_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline bool UnityEngine::Renderer::get_forceRenderingOff_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"get_forceRenderingOff_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Renderer::set_forceRenderingOff_Injected(::System::IntPtr  _unity_self, bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"set_forceRenderingOff_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::Renderer::set_motionVectorGenerationMode_Injected(::System::IntPtr  _unity_self, ::UnityEngine::MotionVectorGenerationMode  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"set_motionVectorGenerationMode_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::MotionVectorGenerationMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline ::UnityEngine::Rendering::LightProbeUsage UnityEngine::Renderer::get_lightProbeUsage_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"get_lightProbeUsage_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::LightProbeUsage>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Renderer::set_lightProbeUsage_Injected(::System::IntPtr  _unity_self, ::UnityEngine::Rendering::LightProbeUsage  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"set_lightProbeUsage_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::LightProbeUsage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline ::UnityEngine::Rendering::ReflectionProbeUsage UnityEngine::Renderer::get_reflectionProbeUsage_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"get_reflectionProbeUsage_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rendering::ReflectionProbeUsage>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Renderer::set_reflectionProbeUsage_Injected(::System::IntPtr  _unity_self, ::UnityEngine::Rendering::ReflectionProbeUsage  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"set_reflectionProbeUsage_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Rendering::ReflectionProbeUsage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline int32_t UnityEngine::Renderer::get_sortingLayerID_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"get_sortingLayerID_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Renderer::set_sortingLayerID_Injected(::System::IntPtr  _unity_self, int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"set_sortingLayerID_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline int32_t UnityEngine::Renderer::get_sortingOrder_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"get_sortingOrder_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Renderer::set_sortingOrder_Injected(::System::IntPtr  _unity_self, int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"set_sortingOrder_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline int32_t UnityEngine::Renderer::get_sortingGroupID_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"get_sortingGroupID_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline int32_t UnityEngine::Renderer::get_sortingGroupOrder_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"get_sortingGroupOrder_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Renderer::set_allowOcclusionWhenDynamic_Injected(::System::IntPtr  _unity_self, bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"set_allowOcclusionWhenDynamic_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline bool UnityEngine::Renderer::get_isPartOfStaticBatch_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"get_isPartOfStaticBatch_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Renderer::get_worldToLocalMatrix_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Matrix4x4>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"get_worldToLocalMatrix_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::Renderer::get_localToWorldMatrix_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Matrix4x4>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"get_localToWorldMatrix_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Matrix4x4>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::Renderer::set_probeAnchor_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"set_probeAnchor_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline int32_t UnityEngine::Renderer::GetLightmapIndex_Injected(::System::IntPtr  _unity_self, ::UnityEngineInternal::LightmapType  lt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"GetLightmapIndex_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngineInternal::LightmapType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self, lt);
}
inline void UnityEngine::Renderer::SetLightmapIndex_Injected(::System::IntPtr  _unity_self, int32_t  index, ::UnityEngineInternal::LightmapType  lt)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"SetLightmapIndex_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngineInternal::LightmapType>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, index, lt);
}
inline void UnityEngine::Renderer::GetLightmapST_Injected(::System::IntPtr  _unity_self, ::UnityEngineInternal::LightmapType  lt, ::by_ref<::UnityEngine::Vector4>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"GetLightmapST_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngineInternal::LightmapType>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector4>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, lt, ret);
}
inline int32_t UnityEngine::Renderer::GetMaterialCount_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"GetMaterialCount_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline ::ArrayW<::UnityW<::UnityEngine::Material>> UnityEngine::Renderer::GetSharedMaterialArray_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::Renderer*>(),
                        {"GetSharedMaterialArray_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Material>>>(nullptr, ___internal_method, _unity_self);
}
inline ::UnityEngine::Renderer* UnityEngine::Renderer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Renderer*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Renderer::Renderer()   {
}
