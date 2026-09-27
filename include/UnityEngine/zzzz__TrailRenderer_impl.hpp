#pragma once
// IWYU pragma private; include "UnityEngine/TrailRenderer.hpp"
#include "UnityEngine/zzzz__Renderer_impl.hpp"
#include "UnityEngine/zzzz__TrailRenderer_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeSlice_1_def.hpp"
#include "UnityEngine/Bindings/zzzz__BlittableArrayWrapper_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/zzzz__AnimationCurve_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Gradient_def.hpp"
#include "UnityEngine/zzzz__LineAlignment_def.hpp"
#include "UnityEngine/zzzz__LineTextureMode_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__SpriteMaskInteraction_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::UnityEngine::TrailRenderer.get_numPositions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::TrailRenderer::*)()>(&::UnityEngine::TrailRenderer::get_numPositions)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb581e78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"get_numPositions", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.get_time
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::TrailRenderer::*)()>(&::UnityEngine::TrailRenderer::get_time)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb581ef4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"get_time", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.set_time
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TrailRenderer::*)(float_t)>(&::UnityEngine::TrailRenderer::set_time)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xb581fa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"set_time", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.get_startWidth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::TrailRenderer::*)()>(&::UnityEngine::TrailRenderer::get_startWidth)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb58207c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"get_startWidth", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.set_startWidth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TrailRenderer::*)(float_t)>(&::UnityEngine::TrailRenderer::set_startWidth)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xb582130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"set_startWidth", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.get_endWidth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::TrailRenderer::*)()>(&::UnityEngine::TrailRenderer::get_endWidth)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb582204;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"get_endWidth", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.set_endWidth
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TrailRenderer::*)(float_t)>(&::UnityEngine::TrailRenderer::set_endWidth)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xb5822b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"set_endWidth", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.get_widthMultiplier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::TrailRenderer::*)()>(&::UnityEngine::TrailRenderer::get_widthMultiplier)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb58238c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"get_widthMultiplier", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.set_widthMultiplier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TrailRenderer::*)(float_t)>(&::UnityEngine::TrailRenderer::set_widthMultiplier)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xb582440;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"set_widthMultiplier", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.get_autodestruct
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TrailRenderer::*)()>(&::UnityEngine::TrailRenderer::get_autodestruct)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb582514;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"get_autodestruct", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.set_autodestruct
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TrailRenderer::*)(bool)>(&::UnityEngine::TrailRenderer::set_autodestruct)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb5825c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"set_autodestruct", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.get_emitting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TrailRenderer::*)()>(&::UnityEngine::TrailRenderer::get_emitting)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb58268c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"get_emitting", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.set_emitting
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TrailRenderer::*)(bool)>(&::UnityEngine::TrailRenderer::set_emitting)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb582740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"set_emitting", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.get_numCornerVertices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::TrailRenderer::*)()>(&::UnityEngine::TrailRenderer::get_numCornerVertices)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb582804;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"get_numCornerVertices", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.set_numCornerVertices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TrailRenderer::*)(int32_t)>(&::UnityEngine::TrailRenderer::set_numCornerVertices)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb5828b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"set_numCornerVertices", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.get_numCapVertices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::TrailRenderer::*)()>(&::UnityEngine::TrailRenderer::get_numCapVertices)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb58297c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"get_numCapVertices", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.set_numCapVertices
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TrailRenderer::*)(int32_t)>(&::UnityEngine::TrailRenderer::set_numCapVertices)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb582a30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"set_numCapVertices", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.get_minVertexDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::TrailRenderer::*)()>(&::UnityEngine::TrailRenderer::get_minVertexDistance)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb582af4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"get_minVertexDistance", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.set_minVertexDistance
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TrailRenderer::*)(float_t)>(&::UnityEngine::TrailRenderer::set_minVertexDistance)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xb582ba8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"set_minVertexDistance", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.get_startColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::UnityEngine::TrailRenderer::*)()>(&::UnityEngine::TrailRenderer::get_startColor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xb582c7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"get_startColor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.set_startColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TrailRenderer::*)(::UnityEngine::Color)>(&::UnityEngine::TrailRenderer::set_startColor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xb582d54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"set_startColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.get_endColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::UnityEngine::TrailRenderer::*)()>(&::UnityEngine::TrailRenderer::get_endColor)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xb582e28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"get_endColor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.set_endColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TrailRenderer::*)(::UnityEngine::Color)>(&::UnityEngine::TrailRenderer::set_endColor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xb582f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"set_endColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.get_positionCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::TrailRenderer::*)()>(&::UnityEngine::TrailRenderer::get_positionCount)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb581e7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"get_positionCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.SetPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TrailRenderer::*)(int32_t, ::UnityEngine::Vector3)>(&::UnityEngine::TrailRenderer::SetPosition)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xb583010;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"SetPosition", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.GetPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::UnityEngine::TrailRenderer::*)(int32_t)>(&::UnityEngine::TrailRenderer::GetPosition)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xb5830fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"GetPosition", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.get_textureScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::TrailRenderer::*)()>(&::UnityEngine::TrailRenderer::get_textureScale)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xb5831f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"get_textureScale", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.set_textureScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TrailRenderer::*)(::UnityEngine::Vector2)>(&::UnityEngine::TrailRenderer::set_textureScale)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xb5832bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"set_textureScale", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.get_shadowBias
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::TrailRenderer::*)()>(&::UnityEngine::TrailRenderer::get_shadowBias)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb583384;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"get_shadowBias", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.set_shadowBias
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TrailRenderer::*)(float_t)>(&::UnityEngine::TrailRenderer::set_shadowBias)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xb583438;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"set_shadowBias", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.get_generateLightingData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TrailRenderer::*)()>(&::UnityEngine::TrailRenderer::get_generateLightingData)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb58350c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"get_generateLightingData", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.set_generateLightingData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TrailRenderer::*)(bool)>(&::UnityEngine::TrailRenderer::set_generateLightingData)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb5835c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"set_generateLightingData", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.get_applyActiveColorSpace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::TrailRenderer::*)()>(&::UnityEngine::TrailRenderer::get_applyActiveColorSpace)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb583684;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"get_applyActiveColorSpace", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.set_applyActiveColorSpace
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TrailRenderer::*)(bool)>(&::UnityEngine::TrailRenderer::set_applyActiveColorSpace)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb583738;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"set_applyActiveColorSpace", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.get_textureMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LineTextureMode (::UnityEngine::TrailRenderer::*)()>(&::UnityEngine::TrailRenderer::get_textureMode)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb5837fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"get_textureMode", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.set_textureMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TrailRenderer::*)(::UnityEngine::LineTextureMode)>(&::UnityEngine::TrailRenderer::set_textureMode)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb5838b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"set_textureMode", {}, {::i2c::type_of<::UnityEngine::LineTextureMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.get_alignment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LineAlignment (::UnityEngine::TrailRenderer::*)()>(&::UnityEngine::TrailRenderer::get_alignment)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb583974;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"get_alignment", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.set_alignment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TrailRenderer::*)(::UnityEngine::LineAlignment)>(&::UnityEngine::TrailRenderer::set_alignment)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb583a28;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"set_alignment", {}, {::i2c::type_of<::UnityEngine::LineAlignment>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.get_maskInteraction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::SpriteMaskInteraction (::UnityEngine::TrailRenderer::*)()>(&::UnityEngine::TrailRenderer::get_maskInteraction)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb583aec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"get_maskInteraction", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.set_maskInteraction
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TrailRenderer::*)(::UnityEngine::SpriteMaskInteraction)>(&::UnityEngine::TrailRenderer::set_maskInteraction)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xb583ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"set_maskInteraction", {}, {::i2c::type_of<::UnityEngine::SpriteMaskInteraction>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TrailRenderer::*)()>(&::UnityEngine::TrailRenderer::Clear)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xb583c64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.BakeMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TrailRenderer::*)(::UnityEngine::Mesh*, bool)>(&::UnityEngine::TrailRenderer::BakeMesh)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xb583d18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"BakeMesh", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.BakeMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TrailRenderer::*)(::UnityEngine::Mesh*, ::UnityEngine::Camera*, bool)>(&::UnityEngine::TrailRenderer::BakeMesh)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0xb583d50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"BakeMesh", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.get_widthCurve
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AnimationCurve* (::UnityEngine::TrailRenderer::*)()>(&::UnityEngine::TrailRenderer::get_widthCurve)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb583f04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"get_widthCurve", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.set_widthCurve
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TrailRenderer::*)(::UnityEngine::AnimationCurve*)>(&::UnityEngine::TrailRenderer::set_widthCurve)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb583f98;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"set_widthCurve", {}, {::i2c::type_of<::UnityEngine::AnimationCurve*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.get_colorGradient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Gradient* (::UnityEngine::TrailRenderer::*)()>(&::UnityEngine::TrailRenderer::get_colorGradient)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb584074;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"get_colorGradient", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.set_colorGradient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TrailRenderer::*)(::UnityEngine::Gradient*)>(&::UnityEngine::TrailRenderer::set_colorGradient)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xb584108;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"set_colorGradient", {}, {::i2c::type_of<::UnityEngine::Gradient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.GetWidthCurveCopy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AnimationCurve* (::UnityEngine::TrailRenderer::*)()>(&::UnityEngine::TrailRenderer::GetWidthCurveCopy)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xb583f08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"GetWidthCurveCopy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.SetWidthCurve
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TrailRenderer::*)(::UnityEngine::AnimationCurve*)>(&::UnityEngine::TrailRenderer::SetWidthCurve)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xb583f9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"SetWidthCurve", {}, {::i2c::type_of<::UnityEngine::AnimationCurve*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.GetColorGradientCopy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Gradient* (::UnityEngine::TrailRenderer::*)()>(&::UnityEngine::TrailRenderer::GetColorGradientCopy)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xb584078;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"GetColorGradientCopy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.SetColorGradient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TrailRenderer::*)(::UnityEngine::Gradient*)>(&::UnityEngine::TrailRenderer::SetColorGradient)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0xb58410c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"SetColorGradient", {}, {::i2c::type_of<::UnityEngine::Gradient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.GetPositions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::TrailRenderer::*)(::by_ref<::ArrayW<::UnityEngine::Vector3>>)>(&::UnityEngine::TrailRenderer::GetPositions)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0xb5842e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"GetPositions", {}, {::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Vector3>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.GetVisiblePositions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::TrailRenderer::*)(::by_ref<::ArrayW<::UnityEngine::Vector3>>)>(&::UnityEngine::TrailRenderer::GetVisiblePositions)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0xb5844b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"GetVisiblePositions", {}, {::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Vector3>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.SetPositions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TrailRenderer::*)(::ArrayW<::UnityEngine::Vector3>)>(&::UnityEngine::TrailRenderer::SetPositions)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xb58467c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"SetPositions", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.AddPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TrailRenderer::*)(::UnityEngine::Vector3)>(&::UnityEngine::TrailRenderer::AddPosition)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xb5847e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"AddPosition", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.AddPositions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TrailRenderer::*)(::ArrayW<::UnityEngine::Vector3>)>(&::UnityEngine::TrailRenderer::AddPositions)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xb5848b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"AddPositions", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.SetPositions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TrailRenderer::*)(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>)>(&::UnityEngine::TrailRenderer::SetPositions)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xb584a20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"SetPositions", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.SetPositions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TrailRenderer::*)(::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>)>(&::UnityEngine::TrailRenderer::SetPositions)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb584b24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"SetPositions", {}, {::i2c::type_of<::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.GetPositions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::TrailRenderer::*)(::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>)>(&::UnityEngine::TrailRenderer::GetPositions)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xb584bd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"GetPositions", {}, {::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.GetPositions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::TrailRenderer::*)(::by_ref<::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>>)>(&::UnityEngine::TrailRenderer::GetPositions)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb584cd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"GetPositions", {}, {::i2c::type_of<::by_ref<::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.GetVisiblePositions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::TrailRenderer::*)(::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>)>(&::UnityEngine::TrailRenderer::GetVisiblePositions)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xb584d88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"GetVisiblePositions", {}, {::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.GetVisiblePositions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::TrailRenderer::*)(::by_ref<::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>>)>(&::UnityEngine::TrailRenderer::GetVisiblePositions)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb584e8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"GetVisiblePositions", {}, {::i2c::type_of<::by_ref<::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.AddPositions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TrailRenderer::*)(::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>)>(&::UnityEngine::TrailRenderer::AddPositions)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xb584f3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"AddPositions", {}, {::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.AddPositions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TrailRenderer::*)(::by_ref<::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>>)>(&::UnityEngine::TrailRenderer::AddPositions)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xb585040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"AddPositions", {}, {::i2c::type_of<::by_ref<::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.SetPositionsWithNativeContainer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TrailRenderer::*)(::System::IntPtr, int32_t)>(&::UnityEngine::TrailRenderer::SetPositionsWithNativeContainer)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xb584a94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"SetPositionsWithNativeContainer", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.GetPositionsWithNativeContainer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::TrailRenderer::*)(::System::IntPtr, int32_t)>(&::UnityEngine::TrailRenderer::GetPositionsWithNativeContainer)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xb584c48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"GetPositionsWithNativeContainer", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.GetVisiblePositionsWithNativeContainer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::TrailRenderer::*)(::System::IntPtr, int32_t)>(&::UnityEngine::TrailRenderer::GetVisiblePositionsWithNativeContainer)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xb584dfc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"GetVisiblePositionsWithNativeContainer", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.AddPositionsWithNativeContainer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TrailRenderer::*)(::System::IntPtr, int32_t)>(&::UnityEngine::TrailRenderer::AddPositionsWithNativeContainer)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xb584fb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"AddPositionsWithNativeContainer", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TrailRenderer::*)()>(&::UnityEngine::TrailRenderer::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xb585240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.get_time_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr)>(&::UnityEngine::TrailRenderer::get_time_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb581f6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"get_time_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.set_time_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, float_t)>(&::UnityEngine::TrailRenderer::set_time_Injected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xb582030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"set_time_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.get_startWidth_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr)>(&::UnityEngine::TrailRenderer::get_startWidth_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb5820f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"get_startWidth_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.set_startWidth_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, float_t)>(&::UnityEngine::TrailRenderer::set_startWidth_Injected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xb5821b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"set_startWidth_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.get_endWidth_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr)>(&::UnityEngine::TrailRenderer::get_endWidth_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb58227c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"get_endWidth_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.set_endWidth_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, float_t)>(&::UnityEngine::TrailRenderer::set_endWidth_Injected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xb582340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"set_endWidth_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.get_widthMultiplier_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr)>(&::UnityEngine::TrailRenderer::get_widthMultiplier_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb582404;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"get_widthMultiplier_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.set_widthMultiplier_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, float_t)>(&::UnityEngine::TrailRenderer::set_widthMultiplier_Injected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xb5824c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"set_widthMultiplier_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.get_autodestruct_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::TrailRenderer::get_autodestruct_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb58258c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"get_autodestruct_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.set_autodestruct_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::TrailRenderer::set_autodestruct_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb582648;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"set_autodestruct_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.get_emitting_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::TrailRenderer::get_emitting_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb582704;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"get_emitting_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.set_emitting_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::TrailRenderer::set_emitting_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb5827c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"set_emitting_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.get_numCornerVertices_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::TrailRenderer::get_numCornerVertices_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb58287c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"get_numCornerVertices_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.set_numCornerVertices_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t)>(&::UnityEngine::TrailRenderer::set_numCornerVertices_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb582938;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"set_numCornerVertices_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.get_numCapVertices_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::TrailRenderer::get_numCapVertices_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb5829f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"get_numCapVertices_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.set_numCapVertices_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t)>(&::UnityEngine::TrailRenderer::set_numCapVertices_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb582ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"set_numCapVertices_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.get_minVertexDistance_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr)>(&::UnityEngine::TrailRenderer::get_minVertexDistance_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb582b6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"get_minVertexDistance_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.set_minVertexDistance_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, float_t)>(&::UnityEngine::TrailRenderer::set_minVertexDistance_Injected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xb582c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"set_minVertexDistance_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.get_startColor_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Color>)>(&::UnityEngine::TrailRenderer::get_startColor_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb582d10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"get_startColor_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Color>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.set_startColor_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Color>)>(&::UnityEngine::TrailRenderer::set_startColor_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb582de4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"set_startColor_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Color>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.get_endColor_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Color>)>(&::UnityEngine::TrailRenderer::get_endColor_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb582ebc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"get_endColor_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Color>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.set_endColor_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Color>)>(&::UnityEngine::TrailRenderer::set_endColor_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb582f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"set_endColor_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Color>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.get_positionCount_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::TrailRenderer::get_positionCount_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb582fd4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"get_positionCount_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.SetPosition_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::TrailRenderer::SetPosition_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb5830a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"SetPosition_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.GetPosition_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::TrailRenderer::GetPosition_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb58319c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"GetPosition_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.get_textureScale_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector2>)>(&::UnityEngine::TrailRenderer::get_textureScale_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb583278;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"get_textureScale_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.set_textureScale_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector2>)>(&::UnityEngine::TrailRenderer::set_textureScale_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb583340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"set_textureScale_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.get_shadowBias_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr)>(&::UnityEngine::TrailRenderer::get_shadowBias_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb5833fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"get_shadowBias_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.set_shadowBias_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, float_t)>(&::UnityEngine::TrailRenderer::set_shadowBias_Injected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xb5834c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"set_shadowBias_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.get_generateLightingData_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::TrailRenderer::get_generateLightingData_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb583584;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"get_generateLightingData_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.set_generateLightingData_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::TrailRenderer::set_generateLightingData_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb583640;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"set_generateLightingData_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.get_applyActiveColorSpace_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::TrailRenderer::get_applyActiveColorSpace_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb5836fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"get_applyActiveColorSpace_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.set_applyActiveColorSpace_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::TrailRenderer::set_applyActiveColorSpace_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb5837b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"set_applyActiveColorSpace_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.get_textureMode_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LineTextureMode (*)(::System::IntPtr)>(&::UnityEngine::TrailRenderer::get_textureMode_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb583874;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"get_textureMode_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.set_textureMode_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::LineTextureMode)>(&::UnityEngine::TrailRenderer::set_textureMode_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb583930;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"set_textureMode_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::LineTextureMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.get_alignment_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::LineAlignment (*)(::System::IntPtr)>(&::UnityEngine::TrailRenderer::get_alignment_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb5839ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"get_alignment_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.set_alignment_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::LineAlignment)>(&::UnityEngine::TrailRenderer::set_alignment_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb583aa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"set_alignment_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::LineAlignment>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.get_maskInteraction_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::SpriteMaskInteraction (*)(::System::IntPtr)>(&::UnityEngine::TrailRenderer::get_maskInteraction_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb583b64;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"get_maskInteraction_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.set_maskInteraction_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::SpriteMaskInteraction)>(&::UnityEngine::TrailRenderer::set_maskInteraction_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb583c20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"set_maskInteraction_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::SpriteMaskInteraction>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.Clear_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::TrailRenderer::Clear_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb583cdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"Clear_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.BakeMesh_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, ::System::IntPtr, bool)>(&::UnityEngine::TrailRenderer::BakeMesh_Injected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xb583ea8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"BakeMesh_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.GetWidthCurveCopy_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::UnityEngine::TrailRenderer::GetWidthCurveCopy_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb5841e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"GetWidthCurveCopy_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.SetWidthCurve_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::TrailRenderer::SetWidthCurve_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb584220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"SetWidthCurve_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.GetColorGradientCopy_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::UnityEngine::TrailRenderer::GetColorGradientCopy_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xb584264;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"GetColorGradientCopy_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.SetColorGradient_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::TrailRenderer::SetColorGradient_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb5842a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"SetColorGradient_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.GetPositions_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>)>(&::UnityEngine::TrailRenderer::GetPositions_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb58446c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"GetPositions_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.GetVisiblePositions_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>)>(&::UnityEngine::TrailRenderer::GetVisiblePositions_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb584638;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"GetVisiblePositions_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.SetPositions_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::TrailRenderer::SetPositions_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb5847a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"SetPositions_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.AddPosition_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector3>)>(&::UnityEngine::TrailRenderer::AddPosition_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb584874;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"AddPosition_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.AddPositions_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::TrailRenderer::AddPositions_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0xb5849dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"AddPositions_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.SetPositionsWithNativeContainer_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, int32_t)>(&::UnityEngine::TrailRenderer::SetPositionsWithNativeContainer_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb5850f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"SetPositionsWithNativeContainer_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.GetPositionsWithNativeContainer_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::System::IntPtr, int32_t)>(&::UnityEngine::TrailRenderer::GetPositionsWithNativeContainer_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb585144;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"GetPositionsWithNativeContainer_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.GetVisiblePositionsWithNativeContainer_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr, ::System::IntPtr, int32_t)>(&::UnityEngine::TrailRenderer::GetVisiblePositionsWithNativeContainer_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb585198;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"GetVisiblePositionsWithNativeContainer_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::TrailRenderer.AddPositionsWithNativeContainer_Injected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, int32_t)>(&::UnityEngine::TrailRenderer::AddPositionsWithNativeContainer_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xb5851ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"AddPositionsWithNativeContainer_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
inline int32_t UnityEngine::TrailRenderer::get_numPositions()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"get_numPositions", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline float_t UnityEngine::TrailRenderer::get_time()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"get_time", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::TrailRenderer::set_time(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"set_time", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::TrailRenderer::get_startWidth()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"get_startWidth", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::TrailRenderer::set_startWidth(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"set_startWidth", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::TrailRenderer::get_endWidth()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"get_endWidth", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::TrailRenderer::set_endWidth(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"set_endWidth", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::TrailRenderer::get_widthMultiplier()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"get_widthMultiplier", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::TrailRenderer::set_widthMultiplier(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"set_widthMultiplier", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::TrailRenderer::get_autodestruct()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"get_autodestruct", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::TrailRenderer::set_autodestruct(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"set_autodestruct", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::TrailRenderer::get_emitting()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"get_emitting", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::TrailRenderer::set_emitting(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"set_emitting", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::TrailRenderer::get_numCornerVertices()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"get_numCornerVertices", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::TrailRenderer::set_numCornerVertices(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"set_numCornerVertices", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::TrailRenderer::get_numCapVertices()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"get_numCapVertices", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::TrailRenderer::set_numCapVertices(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"set_numCapVertices", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::TrailRenderer::get_minVertexDistance()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"get_minVertexDistance", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::TrailRenderer::set_minVertexDistance(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"set_minVertexDistance", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Color UnityEngine::TrailRenderer::get_startColor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"get_startColor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline void UnityEngine::TrailRenderer::set_startColor(::UnityEngine::Color  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"set_startColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Color UnityEngine::TrailRenderer::get_endColor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"get_endColor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline void UnityEngine::TrailRenderer::set_endColor(::UnityEngine::Color  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"set_endColor", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::TrailRenderer::get_positionCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"get_positionCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::TrailRenderer::SetPosition(int32_t  index, ::UnityEngine::Vector3  position)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"SetPosition", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, index, position);
}
inline ::UnityEngine::Vector3 UnityEngine::TrailRenderer::GetPosition(int32_t  index)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"GetPosition", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, index);
}
inline ::UnityEngine::Vector2 UnityEngine::TrailRenderer::get_textureScale()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"get_textureScale", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline void UnityEngine::TrailRenderer::set_textureScale(::UnityEngine::Vector2  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"set_textureScale", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::TrailRenderer::get_shadowBias()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"get_shadowBias", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::TrailRenderer::set_shadowBias(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"set_shadowBias", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::TrailRenderer::get_generateLightingData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"get_generateLightingData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::TrailRenderer::set_generateLightingData(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"set_generateLightingData", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::TrailRenderer::get_applyActiveColorSpace()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"get_applyActiveColorSpace", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::TrailRenderer::set_applyActiveColorSpace(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"set_applyActiveColorSpace", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::LineTextureMode UnityEngine::TrailRenderer::get_textureMode()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"get_textureMode", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::LineTextureMode>(this, ___internal_method);
}
inline void UnityEngine::TrailRenderer::set_textureMode(::UnityEngine::LineTextureMode  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"set_textureMode", {}, {::i2c::type_of<::UnityEngine::LineTextureMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::LineAlignment UnityEngine::TrailRenderer::get_alignment()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"get_alignment", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::LineAlignment>(this, ___internal_method);
}
inline void UnityEngine::TrailRenderer::set_alignment(::UnityEngine::LineAlignment  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"set_alignment", {}, {::i2c::type_of<::UnityEngine::LineAlignment>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::SpriteMaskInteraction UnityEngine::TrailRenderer::get_maskInteraction()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"get_maskInteraction", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::SpriteMaskInteraction>(this, ___internal_method);
}
inline void UnityEngine::TrailRenderer::set_maskInteraction(::UnityEngine::SpriteMaskInteraction  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"set_maskInteraction", {}, {::i2c::type_of<::UnityEngine::SpriteMaskInteraction>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::TrailRenderer::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::TrailRenderer::BakeMesh(::UnityEngine::Mesh*  mesh, bool  useTransform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"BakeMesh", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mesh, useTransform);
}
inline void UnityEngine::TrailRenderer::BakeMesh(/* [NotNull] */ ::UnityEngine::Mesh*  mesh, /* [NotNull] */ ::UnityEngine::Camera*  camera, bool  useTransform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"BakeMesh", {}, {::i2c::type_of<::UnityEngine::Mesh*>(), ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mesh, camera, useTransform);
}
inline ::UnityEngine::AnimationCurve* UnityEngine::TrailRenderer::get_widthCurve()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"get_widthCurve", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AnimationCurve*>(this, ___internal_method);
}
inline void UnityEngine::TrailRenderer::set_widthCurve(::UnityEngine::AnimationCurve*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"set_widthCurve", {}, {::i2c::type_of<::UnityEngine::AnimationCurve*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Gradient* UnityEngine::TrailRenderer::get_colorGradient()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"get_colorGradient", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Gradient*>(this, ___internal_method);
}
inline void UnityEngine::TrailRenderer::set_colorGradient(::UnityEngine::Gradient*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"set_colorGradient", {}, {::i2c::type_of<::UnityEngine::Gradient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::AnimationCurve* UnityEngine::TrailRenderer::GetWidthCurveCopy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"GetWidthCurveCopy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::AnimationCurve*>(this, ___internal_method);
}
inline void UnityEngine::TrailRenderer::SetWidthCurve(/* [NotNull] */ ::UnityEngine::AnimationCurve*  curve)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"SetWidthCurve", {}, {::i2c::type_of<::UnityEngine::AnimationCurve*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, curve);
}
inline ::UnityEngine::Gradient* UnityEngine::TrailRenderer::GetColorGradientCopy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"GetColorGradientCopy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Gradient*>(this, ___internal_method);
}
inline void UnityEngine::TrailRenderer::SetColorGradient(/* [NotNull] */ ::UnityEngine::Gradient*  curve)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"SetColorGradient", {}, {::i2c::type_of<::UnityEngine::Gradient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, curve);
}
inline int32_t UnityEngine::TrailRenderer::GetPositions(/* [NotNull] */ ::by_ref<::ArrayW<::UnityEngine::Vector3>>  positions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"GetPositions", {}, {::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Vector3>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, positions);
}
inline int32_t UnityEngine::TrailRenderer::GetVisiblePositions(/* [NotNull] */ ::by_ref<::ArrayW<::UnityEngine::Vector3>>  positions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"GetVisiblePositions", {}, {::i2c::type_of<::by_ref<::ArrayW<::UnityEngine::Vector3>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, positions);
}
inline void UnityEngine::TrailRenderer::SetPositions(/* [NotNull] */ ::ArrayW<::UnityEngine::Vector3>  positions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"SetPositions", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, positions);
}
inline void UnityEngine::TrailRenderer::AddPosition(::UnityEngine::Vector3  position)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"AddPosition", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, position);
}
inline void UnityEngine::TrailRenderer::AddPositions(/* [NotNull] */ ::ArrayW<::UnityEngine::Vector3>  positions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"AddPositions", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, positions);
}
inline void UnityEngine::TrailRenderer::SetPositions(::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>  positions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"SetPositions", {}, {::i2c::type_of<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, positions);
}
inline void UnityEngine::TrailRenderer::SetPositions(::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>  positions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"SetPositions", {}, {::i2c::type_of<::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, positions);
}
inline int32_t UnityEngine::TrailRenderer::GetPositions(::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>  positions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"GetPositions", {}, {::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, positions);
}
inline int32_t UnityEngine::TrailRenderer::GetPositions(::by_ref<::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>>  positions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"GetPositions", {}, {::i2c::type_of<::by_ref<::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, positions);
}
inline int32_t UnityEngine::TrailRenderer::GetVisiblePositions(::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>  positions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"GetVisiblePositions", {}, {::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, positions);
}
inline int32_t UnityEngine::TrailRenderer::GetVisiblePositions(::by_ref<::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>>  positions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"GetVisiblePositions", {}, {::i2c::type_of<::by_ref<::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, positions);
}
inline void UnityEngine::TrailRenderer::AddPositions(::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>  positions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"AddPositions", {}, {::i2c::type_of<::by_ref<::Unity::Collections::NativeArray_1<::UnityEngine::Vector3>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, positions);
}
inline void UnityEngine::TrailRenderer::AddPositions(::by_ref<::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>>  positions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"AddPositions", {}, {::i2c::type_of<::by_ref<::Unity::Collections::NativeSlice_1<::UnityEngine::Vector3>>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, positions);
}
inline void UnityEngine::TrailRenderer::SetPositionsWithNativeContainer(::System::IntPtr  positions, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"SetPositionsWithNativeContainer", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, positions, count);
}
inline int32_t UnityEngine::TrailRenderer::GetPositionsWithNativeContainer(::System::IntPtr  positions, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"GetPositionsWithNativeContainer", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, positions, length);
}
inline int32_t UnityEngine::TrailRenderer::GetVisiblePositionsWithNativeContainer(::System::IntPtr  positions, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"GetVisiblePositionsWithNativeContainer", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, positions, length);
}
inline void UnityEngine::TrailRenderer::AddPositionsWithNativeContainer(::System::IntPtr  positions, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"AddPositionsWithNativeContainer", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, positions, length);
}
inline void UnityEngine::TrailRenderer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t UnityEngine::TrailRenderer::get_time_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"get_time_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::TrailRenderer::set_time_Injected(::System::IntPtr  _unity_self, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"set_time_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline float_t UnityEngine::TrailRenderer::get_startWidth_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"get_startWidth_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::TrailRenderer::set_startWidth_Injected(::System::IntPtr  _unity_self, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"set_startWidth_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline float_t UnityEngine::TrailRenderer::get_endWidth_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"get_endWidth_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::TrailRenderer::set_endWidth_Injected(::System::IntPtr  _unity_self, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"set_endWidth_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline float_t UnityEngine::TrailRenderer::get_widthMultiplier_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"get_widthMultiplier_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::TrailRenderer::set_widthMultiplier_Injected(::System::IntPtr  _unity_self, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"set_widthMultiplier_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline bool UnityEngine::TrailRenderer::get_autodestruct_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"get_autodestruct_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::TrailRenderer::set_autodestruct_Injected(::System::IntPtr  _unity_self, bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"set_autodestruct_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline bool UnityEngine::TrailRenderer::get_emitting_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"get_emitting_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::TrailRenderer::set_emitting_Injected(::System::IntPtr  _unity_self, bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"set_emitting_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline int32_t UnityEngine::TrailRenderer::get_numCornerVertices_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"get_numCornerVertices_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::TrailRenderer::set_numCornerVertices_Injected(::System::IntPtr  _unity_self, int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"set_numCornerVertices_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline int32_t UnityEngine::TrailRenderer::get_numCapVertices_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"get_numCapVertices_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::TrailRenderer::set_numCapVertices_Injected(::System::IntPtr  _unity_self, int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"set_numCapVertices_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline float_t UnityEngine::TrailRenderer::get_minVertexDistance_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"get_minVertexDistance_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::TrailRenderer::set_minVertexDistance_Injected(::System::IntPtr  _unity_self, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"set_minVertexDistance_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::TrailRenderer::get_startColor_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Color>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"get_startColor_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Color>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::TrailRenderer::set_startColor_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Color>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"set_startColor_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Color>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::TrailRenderer::get_endColor_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Color>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"get_endColor_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Color>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::TrailRenderer::set_endColor_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Color>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"set_endColor_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Color>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline int32_t UnityEngine::TrailRenderer::get_positionCount_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"get_positionCount_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::TrailRenderer::SetPosition_Injected(::System::IntPtr  _unity_self, int32_t  index, ::by_ref<::UnityEngine::Vector3>  position)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"SetPosition_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, index, position);
}
inline void UnityEngine::TrailRenderer::GetPosition_Injected(::System::IntPtr  _unity_self, int32_t  index, ::by_ref<::UnityEngine::Vector3>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"GetPosition_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, index, ret);
}
inline void UnityEngine::TrailRenderer::get_textureScale_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector2>  ret)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"get_textureScale_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::TrailRenderer::set_textureScale_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector2>  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"set_textureScale_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline float_t UnityEngine::TrailRenderer::get_shadowBias_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"get_shadowBias_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::TrailRenderer::set_shadowBias_Injected(::System::IntPtr  _unity_self, float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"set_shadowBias_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline bool UnityEngine::TrailRenderer::get_generateLightingData_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"get_generateLightingData_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::TrailRenderer::set_generateLightingData_Injected(::System::IntPtr  _unity_self, bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"set_generateLightingData_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline bool UnityEngine::TrailRenderer::get_applyActiveColorSpace_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"get_applyActiveColorSpace_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::TrailRenderer::set_applyActiveColorSpace_Injected(::System::IntPtr  _unity_self, bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"set_applyActiveColorSpace_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline ::UnityEngine::LineTextureMode UnityEngine::TrailRenderer::get_textureMode_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"get_textureMode_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::LineTextureMode>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::TrailRenderer::set_textureMode_Injected(::System::IntPtr  _unity_self, ::UnityEngine::LineTextureMode  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"set_textureMode_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::LineTextureMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline ::UnityEngine::LineAlignment UnityEngine::TrailRenderer::get_alignment_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"get_alignment_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::LineAlignment>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::TrailRenderer::set_alignment_Injected(::System::IntPtr  _unity_self, ::UnityEngine::LineAlignment  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"set_alignment_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::LineAlignment>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline ::UnityEngine::SpriteMaskInteraction UnityEngine::TrailRenderer::get_maskInteraction_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"get_maskInteraction_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::SpriteMaskInteraction>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::TrailRenderer::set_maskInteraction_Injected(::System::IntPtr  _unity_self, ::UnityEngine::SpriteMaskInteraction  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"set_maskInteraction_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::SpriteMaskInteraction>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::TrailRenderer::Clear_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"Clear_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::TrailRenderer::BakeMesh_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  mesh, ::System::IntPtr  camera, bool  useTransform)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"BakeMesh_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, mesh, camera, useTransform);
}
inline ::System::IntPtr UnityEngine::TrailRenderer::GetWidthCurveCopy_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"GetWidthCurveCopy_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::TrailRenderer::SetWidthCurve_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  curve)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"SetWidthCurve_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, curve);
}
inline ::System::IntPtr UnityEngine::TrailRenderer::GetColorGradientCopy_Injected(::System::IntPtr  _unity_self)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"GetColorGradientCopy_Injected", {}, {::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::TrailRenderer::SetColorGradient_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  curve)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"SetColorGradient_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, curve);
}
inline int32_t UnityEngine::TrailRenderer::GetPositions_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>  positions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"GetPositions_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self, positions);
}
inline int32_t UnityEngine::TrailRenderer::GetVisiblePositions_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>  positions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"GetVisiblePositions_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::BlittableArrayWrapper>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self, positions);
}
inline void UnityEngine::TrailRenderer::SetPositions_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  positions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"SetPositions_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, positions);
}
inline void UnityEngine::TrailRenderer::AddPosition_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Vector3>  position)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"AddPosition_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, position);
}
inline void UnityEngine::TrailRenderer::AddPositions_Injected(::System::IntPtr  _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>  positions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"AddPositions_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, positions);
}
inline void UnityEngine::TrailRenderer::SetPositionsWithNativeContainer_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  positions, int32_t  count)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"SetPositionsWithNativeContainer_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, positions, count);
}
inline int32_t UnityEngine::TrailRenderer::GetPositionsWithNativeContainer_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  positions, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"GetPositionsWithNativeContainer_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self, positions, length);
}
inline int32_t UnityEngine::TrailRenderer::GetVisiblePositionsWithNativeContainer_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  positions, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"GetVisiblePositionsWithNativeContainer_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self, positions, length);
}
inline void UnityEngine::TrailRenderer::AddPositionsWithNativeContainer_Injected(::System::IntPtr  _unity_self, ::System::IntPtr  positions, int32_t  length)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::TrailRenderer*>(),
                        {"AddPositionsWithNativeContainer_Injected", {}, {::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, positions, length);
}
inline ::UnityEngine::TrailRenderer* UnityEngine::TrailRenderer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::TrailRenderer*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::TrailRenderer::TrailRenderer()   {
}
