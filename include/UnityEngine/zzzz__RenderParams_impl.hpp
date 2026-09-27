#pragma once
// IWYU pragma private; include "UnityEngine/RenderParams.hpp"
#include "UnityEngine/Rendering/zzzz__LightProbeUsage_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ReflectionProbeUsage_impl.hpp"
#include "UnityEngine/Rendering/zzzz__ShadowCastingMode_impl.hpp"
#include "UnityEngine/zzzz__Bounds_impl.hpp"
#include "UnityEngine/zzzz__MotionVectorGenerationMode_impl.hpp"
#include "UnityEngine/zzzz__RenderParams_def.hpp"
#include "UnityEngine/Rendering/zzzz__LightProbeUsage_def.hpp"
#include "UnityEngine/Rendering/zzzz__ReflectionProbeUsage_def.hpp"
#include "UnityEngine/Rendering/zzzz__ShadowCastingMode_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__LightProbeProxyVolume_def.hpp"
#include "UnityEngine/zzzz__MaterialPropertyBlock_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__MotionVectorGenerationMode_def.hpp"
//  Writing Method size for method: ::UnityEngine::RenderParams._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::RenderParams::*)(::UnityEngine::Material*)>(&::UnityEngine::RenderParams::_ctor)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0xb5817e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RenderParams>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderParams.set_layer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::RenderParams::*)(int32_t)>(&::UnityEngine::RenderParams::set_layer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb581940;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RenderParams>(),
                        {"set_layer", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderParams.set_renderingLayerMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::RenderParams::*)(uint32_t)>(&::UnityEngine::RenderParams::set_renderingLayerMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb581948;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RenderParams>(),
                        {"set_renderingLayerMask", {}, {::i2c::type_of<uint32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderParams.set_rendererPriority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::RenderParams::*)(int32_t)>(&::UnityEngine::RenderParams::set_rendererPriority)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb581950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RenderParams>(),
                        {"set_rendererPriority", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderParams.set_instanceID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::RenderParams::*)(int32_t)>(&::UnityEngine::RenderParams::set_instanceID)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb581958;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RenderParams>(),
                        {"set_instanceID", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderParams.set_worldBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::RenderParams::*)(::UnityEngine::Bounds)>(&::UnityEngine::RenderParams::set_worldBounds)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xb581960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RenderParams>(),
                        {"set_worldBounds", {}, {::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderParams.set_camera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::RenderParams::*)(::UnityEngine::Camera*)>(&::UnityEngine::RenderParams::set_camera)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb581974;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RenderParams>(),
                        {"set_camera", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderParams.set_motionVectorMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::RenderParams::*)(::UnityEngine::MotionVectorGenerationMode)>(&::UnityEngine::RenderParams::set_motionVectorMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb58197c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RenderParams>(),
                        {"set_motionVectorMode", {}, {::i2c::type_of<::UnityEngine::MotionVectorGenerationMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderParams.set_reflectionProbeUsage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::RenderParams::*)(::UnityEngine::Rendering::ReflectionProbeUsage)>(&::UnityEngine::RenderParams::set_reflectionProbeUsage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb581984;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RenderParams>(),
                        {"set_reflectionProbeUsage", {}, {::i2c::type_of<::UnityEngine::Rendering::ReflectionProbeUsage>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderParams.get_material
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Material> (::UnityEngine::RenderParams::*)()>(&::UnityEngine::RenderParams::get_material)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb58198c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RenderParams>(),
                        {"get_material", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderParams.set_material
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::RenderParams::*)(::UnityEngine::Material*)>(&::UnityEngine::RenderParams::set_material)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb581994;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RenderParams>(),
                        {"set_material", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderParams.get_matProps
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::MaterialPropertyBlock* (::UnityEngine::RenderParams::*)()>(&::UnityEngine::RenderParams::get_matProps)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb58199c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RenderParams>(),
                        {"get_matProps", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderParams.set_matProps
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::RenderParams::*)(::UnityEngine::MaterialPropertyBlock*)>(&::UnityEngine::RenderParams::set_matProps)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb5819a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RenderParams>(),
                        {"set_matProps", {}, {::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderParams.set_shadowCastingMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::RenderParams::*)(::UnityEngine::Rendering::ShadowCastingMode)>(&::UnityEngine::RenderParams::set_shadowCastingMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb5819ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RenderParams>(),
                        {"set_shadowCastingMode", {}, {::i2c::type_of<::UnityEngine::Rendering::ShadowCastingMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderParams.set_receiveShadows
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::RenderParams::*)(bool)>(&::UnityEngine::RenderParams::set_receiveShadows)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb5819b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RenderParams>(),
                        {"set_receiveShadows", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderParams.set_lightProbeUsage
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::RenderParams::*)(::UnityEngine::Rendering::LightProbeUsage)>(&::UnityEngine::RenderParams::set_lightProbeUsage)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb5819bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RenderParams>(),
                        {"set_lightProbeUsage", {}, {::i2c::type_of<::UnityEngine::Rendering::LightProbeUsage>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderParams.set_lightProbeProxyVolume
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::RenderParams::*)(::UnityEngine::LightProbeProxyVolume*)>(&::UnityEngine::RenderParams::set_lightProbeProxyVolume)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb5819c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RenderParams>(),
                        {"set_lightProbeProxyVolume", {}, {::i2c::type_of<::UnityEngine::LightProbeProxyVolume*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderParams.set_overrideSceneCullingMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::RenderParams::*)(bool)>(&::UnityEngine::RenderParams::set_overrideSceneCullingMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb5819cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RenderParams>(),
                        {"set_overrideSceneCullingMask", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderParams.set_sceneCullingMask
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::RenderParams::*)(uint64_t)>(&::UnityEngine::RenderParams::set_sceneCullingMask)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb5819d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RenderParams>(),
                        {"set_sceneCullingMask", {}, {::i2c::type_of<uint64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderParams.set_forceMeshLod
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::RenderParams::*)(int32_t)>(&::UnityEngine::RenderParams::set_forceMeshLod)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb5819dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RenderParams>(),
                        {"set_forceMeshLod", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::RenderParams.set_meshLodSelectionBias
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::RenderParams::*)(float_t)>(&::UnityEngine::RenderParams::set_meshLodSelectionBias)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb5819e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RenderParams>(),
                        {"set_meshLodSelectionBias", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
inline void UnityEngine::RenderParams::_ctor(::UnityEngine::Material*  mat)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RenderParams>(),
                        {".ctor", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, mat);
}
inline void UnityEngine::RenderParams::set_layer(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RenderParams>(),
                        {"set_layer", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::RenderParams::set_renderingLayerMask(uint32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RenderParams>(),
                        {"set_renderingLayerMask", {}, {::i2c::type_of<uint32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::RenderParams::set_rendererPriority(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RenderParams>(),
                        {"set_rendererPriority", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::RenderParams::set_instanceID(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RenderParams>(),
                        {"set_instanceID", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::RenderParams::set_worldBounds(::UnityEngine::Bounds  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RenderParams>(),
                        {"set_worldBounds", {}, {::i2c::type_of<::UnityEngine::Bounds>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::RenderParams::set_camera(::UnityEngine::Camera*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RenderParams>(),
                        {"set_camera", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::RenderParams::set_motionVectorMode(::UnityEngine::MotionVectorGenerationMode  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RenderParams>(),
                        {"set_motionVectorMode", {}, {::i2c::type_of<::UnityEngine::MotionVectorGenerationMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::RenderParams::set_reflectionProbeUsage(::UnityEngine::Rendering::ReflectionProbeUsage  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RenderParams>(),
                        {"set_reflectionProbeUsage", {}, {::i2c::type_of<::UnityEngine::Rendering::ReflectionProbeUsage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Material> UnityEngine::RenderParams::get_material()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RenderParams>(),
                        {"get_material", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Material>>(*this, ___internal_method);
}
inline void UnityEngine::RenderParams::set_material(::UnityEngine::Material*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RenderParams>(),
                        {"set_material", {}, {::i2c::type_of<::UnityEngine::Material*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::MaterialPropertyBlock* UnityEngine::RenderParams::get_matProps()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RenderParams>(),
                        {"get_matProps", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::MaterialPropertyBlock*>(*this, ___internal_method);
}
inline void UnityEngine::RenderParams::set_matProps(::UnityEngine::MaterialPropertyBlock*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RenderParams>(),
                        {"set_matProps", {}, {::i2c::type_of<::UnityEngine::MaterialPropertyBlock*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::RenderParams::set_shadowCastingMode(::UnityEngine::Rendering::ShadowCastingMode  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RenderParams>(),
                        {"set_shadowCastingMode", {}, {::i2c::type_of<::UnityEngine::Rendering::ShadowCastingMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::RenderParams::set_receiveShadows(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RenderParams>(),
                        {"set_receiveShadows", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::RenderParams::set_lightProbeUsage(::UnityEngine::Rendering::LightProbeUsage  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RenderParams>(),
                        {"set_lightProbeUsage", {}, {::i2c::type_of<::UnityEngine::Rendering::LightProbeUsage>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::RenderParams::set_lightProbeProxyVolume(::UnityEngine::LightProbeProxyVolume*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RenderParams>(),
                        {"set_lightProbeProxyVolume", {}, {::i2c::type_of<::UnityEngine::LightProbeProxyVolume*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::RenderParams::set_overrideSceneCullingMask(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RenderParams>(),
                        {"set_overrideSceneCullingMask", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::RenderParams::set_sceneCullingMask(uint64_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RenderParams>(),
                        {"set_sceneCullingMask", {}, {::i2c::type_of<uint64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::RenderParams::set_forceMeshLod(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RenderParams>(),
                        {"set_forceMeshLod", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::RenderParams::set_meshLodSelectionBias(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::RenderParams>(),
                        {"set_meshLodSelectionBias", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
// Ctor Parameters [CppParam { name: "_layer_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_renderingLayerMask_k__BackingField", ty: "uint32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_rendererPriority_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_instanceID_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_worldBounds_k__BackingField", ty: "::UnityEngine::Bounds", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_camera_k__BackingField", ty: "::UnityW<::UnityEngine::Camera>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_motionVectorMode_k__BackingField", ty: "::UnityEngine::MotionVectorGenerationMode", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_reflectionProbeUsage_k__BackingField", ty: "::UnityEngine::Rendering::ReflectionProbeUsage", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_material_k__BackingField", ty: "::UnityW<::UnityEngine::Material>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_matProps_k__BackingField", ty: "::UnityEngine::MaterialPropertyBlock*", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_shadowCastingMode_k__BackingField", ty: "::UnityEngine::Rendering::ShadowCastingMode", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_receiveShadows_k__BackingField", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_lightProbeUsage_k__BackingField", ty: "::UnityEngine::Rendering::LightProbeUsage", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_lightProbeProxyVolume_k__BackingField", ty: "::UnityW<::UnityEngine::LightProbeProxyVolume>", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_overrideSceneCullingMask_k__BackingField", ty: "bool", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_sceneCullingMask_k__BackingField", ty: "uint64_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_forceMeshLod_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }, CppParam { name: "_meshLodSelectionBias_k__BackingField", ty: "float_t", modifiers: "", def_value: Some("{}"), comment: None }]
constexpr ::UnityEngine::RenderParams::RenderParams(int32_t  _layer_k__BackingField, uint32_t  _renderingLayerMask_k__BackingField, int32_t  _rendererPriority_k__BackingField, int32_t  _instanceID_k__BackingField, ::UnityEngine::Bounds  _worldBounds_k__BackingField, ::UnityW<::UnityEngine::Camera>  _camera_k__BackingField, ::UnityEngine::MotionVectorGenerationMode  _motionVectorMode_k__BackingField, ::UnityEngine::Rendering::ReflectionProbeUsage  _reflectionProbeUsage_k__BackingField, ::UnityW<::UnityEngine::Material>  _material_k__BackingField, ::UnityEngine::MaterialPropertyBlock*  _matProps_k__BackingField, ::UnityEngine::Rendering::ShadowCastingMode  _shadowCastingMode_k__BackingField, bool  _receiveShadows_k__BackingField, ::UnityEngine::Rendering::LightProbeUsage  _lightProbeUsage_k__BackingField, ::UnityW<::UnityEngine::LightProbeProxyVolume>  _lightProbeProxyVolume_k__BackingField, bool  _overrideSceneCullingMask_k__BackingField, uint64_t  _sceneCullingMask_k__BackingField, int32_t  _forceMeshLod_k__BackingField, float_t  _meshLodSelectionBias_k__BackingField) noexcept  {
this->_layer_k__BackingField = _layer_k__BackingField;
this->_renderingLayerMask_k__BackingField = _renderingLayerMask_k__BackingField;
this->_rendererPriority_k__BackingField = _rendererPriority_k__BackingField;
this->_instanceID_k__BackingField = _instanceID_k__BackingField;
this->_worldBounds_k__BackingField = _worldBounds_k__BackingField;
this->_camera_k__BackingField = _camera_k__BackingField;
this->_motionVectorMode_k__BackingField = _motionVectorMode_k__BackingField;
this->_reflectionProbeUsage_k__BackingField = _reflectionProbeUsage_k__BackingField;
this->_material_k__BackingField = _material_k__BackingField;
this->_matProps_k__BackingField = _matProps_k__BackingField;
this->_shadowCastingMode_k__BackingField = _shadowCastingMode_k__BackingField;
this->_receiveShadows_k__BackingField = _receiveShadows_k__BackingField;
this->_lightProbeUsage_k__BackingField = _lightProbeUsage_k__BackingField;
this->_lightProbeProxyVolume_k__BackingField = _lightProbeProxyVolume_k__BackingField;
this->_overrideSceneCullingMask_k__BackingField = _overrideSceneCullingMask_k__BackingField;
this->_sceneCullingMask_k__BackingField = _sceneCullingMask_k__BackingField;
this->_forceMeshLod_k__BackingField = _forceMeshLod_k__BackingField;
this->_meshLodSelectionBias_k__BackingField = _meshLodSelectionBias_k__BackingField;
}
// Ctor Parameters []
constexpr ::UnityEngine::RenderParams::RenderParams()   {
}
