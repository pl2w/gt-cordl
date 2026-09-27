#pragma once
// IWYU pragma private; include "Oculus/Interaction/TubeRenderer.hpp"
#include "Oculus/Interaction/zzzz__TubeRenderer_VertexLayout_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "UnityEngine/Rendering/zzzz__VertexAttributeDescriptor_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "Oculus/Interaction/zzzz__TubeRenderer_def.hpp"
#include "Oculus/Interaction/zzzz__TubePoint_def.hpp"
#include "Oculus/Interaction/zzzz__TubeRenderer_VertexLayout_def.hpp"
#include "Oculus/Interaction/zzzz__TubeRenderer___c__DisplayClass76_0_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Gradient_def.hpp"
#include "UnityEngine/zzzz__MeshFilter_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "UnityEngine/zzzz__Mesh_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Space_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::TubeRenderer.get_RenderQueue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Oculus::Interaction::TubeRenderer::*)()>(&::Oculus::Interaction::TubeRenderer::get_RenderQueue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa401434;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TubeRenderer*>(),
                        {"get_RenderQueue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TubeRenderer.set_RenderQueue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TubeRenderer::*)(int32_t)>(&::Oculus::Interaction::TubeRenderer::set_RenderQueue)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa40143c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TubeRenderer*>(),
                        {"set_RenderQueue", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TubeRenderer.get_RenderOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::Oculus::Interaction::TubeRenderer::*)()>(&::Oculus::Interaction::TubeRenderer::get_RenderOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa401444;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TubeRenderer*>(),
                        {"get_RenderOffset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TubeRenderer.set_RenderOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TubeRenderer::*)(::UnityEngine::Vector2)>(&::Oculus::Interaction::TubeRenderer::set_RenderOffset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa40144c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TubeRenderer*>(),
                        {"set_RenderOffset", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TubeRenderer.get_Radius
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::TubeRenderer::*)()>(&::Oculus::Interaction::TubeRenderer::get_Radius)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa401454;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TubeRenderer*>(),
                        {"get_Radius", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TubeRenderer.set_Radius
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TubeRenderer::*)(float_t)>(&::Oculus::Interaction::TubeRenderer::set_Radius)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa40145c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TubeRenderer*>(),
                        {"set_Radius", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TubeRenderer.get_Gradient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Gradient* (::Oculus::Interaction::TubeRenderer::*)()>(&::Oculus::Interaction::TubeRenderer::get_Gradient)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa401464;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TubeRenderer*>(),
                        {"get_Gradient", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TubeRenderer.set_Gradient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TubeRenderer::*)(::UnityEngine::Gradient*)>(&::Oculus::Interaction::TubeRenderer::set_Gradient)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa40146c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TubeRenderer*>(),
                        {"set_Gradient", {}, {::i2c::type_of<::UnityEngine::Gradient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TubeRenderer.get_Tint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::Oculus::Interaction::TubeRenderer::*)()>(&::Oculus::Interaction::TubeRenderer::get_Tint)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa401474;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TubeRenderer*>(),
                        {"get_Tint", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TubeRenderer.set_Tint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TubeRenderer::*)(::UnityEngine::Color)>(&::Oculus::Interaction::TubeRenderer::set_Tint)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa401480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TubeRenderer*>(),
                        {"set_Tint", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TubeRenderer.get_ProgressFade
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::TubeRenderer::*)()>(&::Oculus::Interaction::TubeRenderer::get_ProgressFade)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa40148c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TubeRenderer*>(),
                        {"get_ProgressFade", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TubeRenderer.set_ProgressFade
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TubeRenderer::*)(float_t)>(&::Oculus::Interaction::TubeRenderer::set_ProgressFade)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa401494;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TubeRenderer*>(),
                        {"set_ProgressFade", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TubeRenderer.get_StartFadeThresold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::TubeRenderer::*)()>(&::Oculus::Interaction::TubeRenderer::get_StartFadeThresold)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa40149c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TubeRenderer*>(),
                        {"get_StartFadeThresold", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TubeRenderer.set_StartFadeThresold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TubeRenderer::*)(float_t)>(&::Oculus::Interaction::TubeRenderer::set_StartFadeThresold)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4014a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TubeRenderer*>(),
                        {"set_StartFadeThresold", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TubeRenderer.get_EndFadeThresold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::TubeRenderer::*)()>(&::Oculus::Interaction::TubeRenderer::get_EndFadeThresold)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4014ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TubeRenderer*>(),
                        {"get_EndFadeThresold", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TubeRenderer.set_EndFadeThresold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TubeRenderer::*)(float_t)>(&::Oculus::Interaction::TubeRenderer::set_EndFadeThresold)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4014b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TubeRenderer*>(),
                        {"set_EndFadeThresold", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TubeRenderer.get_InvertThreshold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::TubeRenderer::*)()>(&::Oculus::Interaction::TubeRenderer::get_InvertThreshold)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4014bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TubeRenderer*>(),
                        {"get_InvertThreshold", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TubeRenderer.set_InvertThreshold
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TubeRenderer::*)(bool)>(&::Oculus::Interaction::TubeRenderer::set_InvertThreshold)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4014c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TubeRenderer*>(),
                        {"set_InvertThreshold", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TubeRenderer.get_Feather
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::TubeRenderer::*)()>(&::Oculus::Interaction::TubeRenderer::get_Feather)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4014cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TubeRenderer*>(),
                        {"get_Feather", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TubeRenderer.set_Feather
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TubeRenderer::*)(float_t)>(&::Oculus::Interaction::TubeRenderer::set_Feather)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4014d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TubeRenderer*>(),
                        {"set_Feather", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TubeRenderer.get_MirrorTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::TubeRenderer::*)()>(&::Oculus::Interaction::TubeRenderer::get_MirrorTexture)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4014dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TubeRenderer*>(),
                        {"get_MirrorTexture", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TubeRenderer.set_MirrorTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TubeRenderer::*)(bool)>(&::Oculus::Interaction::TubeRenderer::set_MirrorTexture)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4014e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TubeRenderer*>(),
                        {"set_MirrorTexture", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TubeRenderer.get_Progress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::TubeRenderer::*)()>(&::Oculus::Interaction::TubeRenderer::get_Progress)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4014ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TubeRenderer*>(),
                        {"get_Progress", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TubeRenderer.set_Progress
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TubeRenderer::*)(float_t)>(&::Oculus::Interaction::TubeRenderer::set_Progress)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4014f4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TubeRenderer*>(),
                        {"set_Progress", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TubeRenderer.get_TotalLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::TubeRenderer::*)()>(&::Oculus::Interaction::TubeRenderer::get_TotalLength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4014fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TubeRenderer*>(),
                        {"get_TotalLength", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TubeRenderer.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TubeRenderer::*)()>(&::Oculus::Interaction::TubeRenderer::Reset)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xa401504;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::TubeRenderer*>(),
                    {::i2c::class_of<::Oculus::Interaction::TubeRenderer*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TubeRenderer.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TubeRenderer::*)()>(&::Oculus::Interaction::TubeRenderer::Awake)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa401594;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::TubeRenderer*>(),
                    {::i2c::class_of<::Oculus::Interaction::TubeRenderer*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TubeRenderer.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TubeRenderer::*)()>(&::Oculus::Interaction::TubeRenderer::OnEnable)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xa4015b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::TubeRenderer*>(),
                    {::i2c::class_of<::Oculus::Interaction::TubeRenderer*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TubeRenderer.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TubeRenderer::*)()>(&::Oculus::Interaction::TubeRenderer::OnDisable)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa4015dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::TubeRenderer*>(),
                    {::i2c::class_of<::Oculus::Interaction::TubeRenderer*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TubeRenderer.RenderTube
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TubeRenderer::*)(::ArrayW<::Oculus::Interaction::TubePoint>, ::UnityEngine::Space)>(&::Oculus::Interaction::TubeRenderer::RenderTube)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0xa401278;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TubeRenderer*>(),
                        {"RenderTube", {}, {::i2c::type_of<::ArrayW<::Oculus::Interaction::TubePoint>>(), ::i2c::type_of<::UnityEngine::Space>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TubeRenderer.Hide
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TubeRenderer::*)()>(&::Oculus::Interaction::TubeRenderer::Hide)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa401da8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TubeRenderer*>(),
                        {"Hide", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TubeRenderer.Show
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TubeRenderer::*)()>(&::Oculus::Interaction::TubeRenderer::Show)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa401dd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TubeRenderer*>(),
                        {"Show", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TubeRenderer.InitializeMeshData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TubeRenderer::*)(int32_t)>(&::Oculus::Interaction::TubeRenderer::InitializeMeshData)> {
  constexpr static std::size_t size = 0x25c;
  constexpr static std::size_t addrs = 0xa4015f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TubeRenderer*>(),
                        {"InitializeMeshData", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TubeRenderer.UpdateMeshData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TubeRenderer::*)(::ArrayW<::Oculus::Interaction::TubePoint>, ::UnityEngine::Space)>(&::Oculus::Interaction::TubeRenderer::UpdateMeshData)> {
  constexpr static std::size_t size = 0x554;
  constexpr static std::size_t addrs = 0xa401854;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TubeRenderer*>(),
                        {"UpdateMeshData", {}, {::i2c::type_of<::ArrayW<::Oculus::Interaction::TubePoint>>(), ::i2c::type_of<::UnityEngine::Space>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TubeRenderer.RedrawFadeThresholds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TubeRenderer::*)()>(&::Oculus::Interaction::TubeRenderer::RedrawFadeThresholds)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0xa402420;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TubeRenderer*>(),
                        {"RedrawFadeThresholds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TubeRenderer.BevelCap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TubeRenderer::*)(::by_ref<::UnityEngine::Pose>, bool, int32_t)>(&::Oculus::Interaction::TubeRenderer::BevelCap)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0xa4020ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TubeRenderer*>(),
                        {"BevelCap", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TubeRenderer.WriteCircle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TubeRenderer::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, float_t, int32_t, float_t)>(&::Oculus::Interaction::TubeRenderer::WriteCircle)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0xa402290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TubeRenderer*>(),
                        {"WriteCircle", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TubeRenderer.SetVertexCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Oculus::Interaction::TubeRenderer::*)(int32_t, int32_t, int32_t)>(&::Oculus::Interaction::TubeRenderer::SetVertexCount)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0xa401e04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TubeRenderer*>(),
                        {"SetVertexCount", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TubeRenderer.InjectAllTubeRenderer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TubeRenderer::*)(::UnityEngine::MeshFilter*, ::UnityEngine::MeshRenderer*, int32_t, int32_t)>(&::Oculus::Interaction::TubeRenderer::InjectAllTubeRenderer)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa402678;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TubeRenderer*>(),
                        {"InjectAllTubeRenderer", {}, {::i2c::type_of<::UnityEngine::MeshFilter*>(), ::i2c::type_of<::UnityEngine::MeshRenderer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TubeRenderer.InjectFilter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TubeRenderer::*)(::UnityEngine::MeshFilter*)>(&::Oculus::Interaction::TubeRenderer::InjectFilter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4026c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TubeRenderer*>(),
                        {"InjectFilter", {}, {::i2c::type_of<::UnityEngine::MeshFilter*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TubeRenderer.InjectRenderer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TubeRenderer::*)(::UnityEngine::MeshRenderer*)>(&::Oculus::Interaction::TubeRenderer::InjectRenderer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4026c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TubeRenderer*>(),
                        {"InjectRenderer", {}, {::i2c::type_of<::UnityEngine::MeshRenderer*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TubeRenderer.InjectDivisions
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TubeRenderer::*)(int32_t)>(&::Oculus::Interaction::TubeRenderer::InjectDivisions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4026d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TubeRenderer*>(),
                        {"InjectDivisions", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TubeRenderer.InjectBevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TubeRenderer::*)(int32_t)>(&::Oculus::Interaction::TubeRenderer::InjectBevel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4026d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TubeRenderer*>(),
                        {"InjectBevel", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TubeRenderer._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TubeRenderer::*)()>(&::Oculus::Interaction::TubeRenderer::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa4026e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TubeRenderer*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TubeRenderer._UpdateMeshData_g__TransformPose_76_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Oculus::Interaction::TubePoint>, ::by_ref<::UnityEngine::Pose>, ::by_ref<::GlobalNamespace::TubeRenderer___c__DisplayClass76_0>)>(&::Oculus::Interaction::TubeRenderer::_UpdateMeshData_g__TransformPose_76_0)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xa401fe4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TubeRenderer*>(),
                        {"<UpdateMeshData>g__TransformPose|76_0", {}, {::i2c::type_of<::by_ref<::Oculus::Interaction::TubePoint>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::TubeRenderer___c__DisplayClass76_0>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::TubeRenderer._SetVertexCount_g__Cap_80_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::TubeRenderer::*)(int32_t, int32_t, int32_t, bool)>(&::Oculus::Interaction::TubeRenderer::_SetVertexCount_g__Cap_80_0)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xa4025d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TubeRenderer*>(),
                        {"<SetVertexCount>g__Cap|80_0", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::MeshFilter>& Oculus::Interaction::TubeRenderer::__cordl_internal_get__filter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____filter;
}
constexpr ::UnityW<::UnityEngine::MeshFilter> const& Oculus::Interaction::TubeRenderer::__cordl_internal_get__filter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____filter;
}
constexpr void Oculus::Interaction::TubeRenderer::__cordl_internal_set__filter(::UnityW<::UnityEngine::MeshFilter>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____filter = value;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer>& Oculus::Interaction::TubeRenderer::__cordl_internal_get__renderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____renderer;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& Oculus::Interaction::TubeRenderer::__cordl_internal_get__renderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____renderer;
}
constexpr void Oculus::Interaction::TubeRenderer::__cordl_internal_set__renderer(::UnityW<::UnityEngine::MeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____renderer = value;
}
constexpr int32_t& Oculus::Interaction::TubeRenderer::__cordl_internal_get__divisions()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____divisions;
}
constexpr int32_t const& Oculus::Interaction::TubeRenderer::__cordl_internal_get__divisions() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____divisions;
}
constexpr void Oculus::Interaction::TubeRenderer::__cordl_internal_set__divisions(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____divisions = value;
}
constexpr int32_t& Oculus::Interaction::TubeRenderer::__cordl_internal_get__bevel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bevel;
}
constexpr int32_t const& Oculus::Interaction::TubeRenderer::__cordl_internal_get__bevel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____bevel;
}
constexpr void Oculus::Interaction::TubeRenderer::__cordl_internal_set__bevel(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____bevel = value;
}
constexpr int32_t& Oculus::Interaction::TubeRenderer::__cordl_internal_get__renderQueue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____renderQueue;
}
constexpr int32_t const& Oculus::Interaction::TubeRenderer::__cordl_internal_get__renderQueue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____renderQueue;
}
constexpr void Oculus::Interaction::TubeRenderer::__cordl_internal_set__renderQueue(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____renderQueue = value;
}
constexpr ::UnityEngine::Vector2& Oculus::Interaction::TubeRenderer::__cordl_internal_get__renderOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____renderOffset;
}
constexpr ::UnityEngine::Vector2 const& Oculus::Interaction::TubeRenderer::__cordl_internal_get__renderOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____renderOffset;
}
constexpr void Oculus::Interaction::TubeRenderer::__cordl_internal_set__renderOffset(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____renderOffset = value;
}
constexpr float_t& Oculus::Interaction::TubeRenderer::__cordl_internal_get__radius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____radius;
}
constexpr float_t const& Oculus::Interaction::TubeRenderer::__cordl_internal_get__radius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____radius;
}
constexpr void Oculus::Interaction::TubeRenderer::__cordl_internal_set__radius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____radius = value;
}
constexpr ::UnityEngine::Gradient*& Oculus::Interaction::TubeRenderer::__cordl_internal_get__gradient()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gradient;
}
constexpr ::UnityEngine::Gradient* const& Oculus::Interaction::TubeRenderer::__cordl_internal_get__gradient() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____gradient;
}
constexpr void Oculus::Interaction::TubeRenderer::__cordl_internal_set__gradient(::UnityEngine::Gradient*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____gradient = value;
}
constexpr ::UnityEngine::Color& Oculus::Interaction::TubeRenderer::__cordl_internal_get__tint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tint;
}
constexpr ::UnityEngine::Color const& Oculus::Interaction::TubeRenderer::__cordl_internal_get__tint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tint;
}
constexpr void Oculus::Interaction::TubeRenderer::__cordl_internal_set__tint(::UnityEngine::Color  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tint = value;
}
constexpr float_t& Oculus::Interaction::TubeRenderer::__cordl_internal_get__progressFade()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____progressFade;
}
constexpr float_t const& Oculus::Interaction::TubeRenderer::__cordl_internal_get__progressFade() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____progressFade;
}
constexpr void Oculus::Interaction::TubeRenderer::__cordl_internal_set__progressFade(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____progressFade = value;
}
constexpr float_t& Oculus::Interaction::TubeRenderer::__cordl_internal_get__startFadeThresold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startFadeThresold;
}
constexpr float_t const& Oculus::Interaction::TubeRenderer::__cordl_internal_get__startFadeThresold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____startFadeThresold;
}
constexpr void Oculus::Interaction::TubeRenderer::__cordl_internal_set__startFadeThresold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____startFadeThresold = value;
}
constexpr float_t& Oculus::Interaction::TubeRenderer::__cordl_internal_get__endFadeThresold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____endFadeThresold;
}
constexpr float_t const& Oculus::Interaction::TubeRenderer::__cordl_internal_get__endFadeThresold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____endFadeThresold;
}
constexpr void Oculus::Interaction::TubeRenderer::__cordl_internal_set__endFadeThresold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____endFadeThresold = value;
}
constexpr bool& Oculus::Interaction::TubeRenderer::__cordl_internal_get__invertThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____invertThreshold;
}
constexpr bool const& Oculus::Interaction::TubeRenderer::__cordl_internal_get__invertThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____invertThreshold;
}
constexpr void Oculus::Interaction::TubeRenderer::__cordl_internal_set__invertThreshold(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____invertThreshold = value;
}
constexpr float_t& Oculus::Interaction::TubeRenderer::__cordl_internal_get__feather()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____feather;
}
constexpr float_t const& Oculus::Interaction::TubeRenderer::__cordl_internal_get__feather() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____feather;
}
constexpr void Oculus::Interaction::TubeRenderer::__cordl_internal_set__feather(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____feather = value;
}
constexpr bool& Oculus::Interaction::TubeRenderer::__cordl_internal_get__mirrorTexture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mirrorTexture;
}
constexpr bool const& Oculus::Interaction::TubeRenderer::__cordl_internal_get__mirrorTexture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mirrorTexture;
}
constexpr void Oculus::Interaction::TubeRenderer::__cordl_internal_set__mirrorTexture(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____mirrorTexture = value;
}
constexpr float_t& Oculus::Interaction::TubeRenderer::__cordl_internal_get__Progress_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Progress_k__BackingField;
}
constexpr float_t const& Oculus::Interaction::TubeRenderer::__cordl_internal_get__Progress_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Progress_k__BackingField;
}
constexpr void Oculus::Interaction::TubeRenderer::__cordl_internal_set__Progress_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Progress_k__BackingField = value;
}
constexpr ::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor>& Oculus::Interaction::TubeRenderer::__cordl_internal_get__dataLayout()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dataLayout;
}
constexpr ::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor> const& Oculus::Interaction::TubeRenderer::__cordl_internal_get__dataLayout() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dataLayout;
}
constexpr void Oculus::Interaction::TubeRenderer::__cordl_internal_set__dataLayout(::ArrayW<::UnityEngine::Rendering::VertexAttributeDescriptor>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____dataLayout = value;
}
constexpr ::Unity::Collections::NativeArray_1<::GlobalNamespace::TubeRenderer_VertexLayout>& Oculus::Interaction::TubeRenderer::__cordl_internal_get__vertsData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____vertsData;
}
constexpr ::Unity::Collections::NativeArray_1<::GlobalNamespace::TubeRenderer_VertexLayout> const& Oculus::Interaction::TubeRenderer::__cordl_internal_get__vertsData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____vertsData;
}
constexpr void Oculus::Interaction::TubeRenderer::__cordl_internal_set__vertsData(::Unity::Collections::NativeArray_1<::GlobalNamespace::TubeRenderer_VertexLayout>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____vertsData = value;
}
constexpr ::GlobalNamespace::TubeRenderer_VertexLayout& Oculus::Interaction::TubeRenderer::__cordl_internal_get__layout()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____layout;
}
constexpr ::GlobalNamespace::TubeRenderer_VertexLayout const& Oculus::Interaction::TubeRenderer::__cordl_internal_get__layout() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____layout;
}
constexpr void Oculus::Interaction::TubeRenderer::__cordl_internal_set__layout(::GlobalNamespace::TubeRenderer_VertexLayout  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____layout = value;
}
constexpr ::UnityW<::UnityEngine::Mesh>& Oculus::Interaction::TubeRenderer::__cordl_internal_get__mesh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mesh;
}
constexpr ::UnityW<::UnityEngine::Mesh> const& Oculus::Interaction::TubeRenderer::__cordl_internal_get__mesh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mesh;
}
constexpr void Oculus::Interaction::TubeRenderer::__cordl_internal_set__mesh(::UnityW<::UnityEngine::Mesh>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____mesh = value;
}
constexpr ::ArrayW<int32_t>& Oculus::Interaction::TubeRenderer::__cordl_internal_get__tris()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tris;
}
constexpr ::ArrayW<int32_t> const& Oculus::Interaction::TubeRenderer::__cordl_internal_get__tris() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tris;
}
constexpr void Oculus::Interaction::TubeRenderer::__cordl_internal_set__tris(::ArrayW<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tris = value;
}
constexpr int32_t& Oculus::Interaction::TubeRenderer::__cordl_internal_get__initializedSteps()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initializedSteps;
}
constexpr int32_t const& Oculus::Interaction::TubeRenderer::__cordl_internal_get__initializedSteps() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____initializedSteps;
}
constexpr void Oculus::Interaction::TubeRenderer::__cordl_internal_set__initializedSteps(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____initializedSteps = value;
}
constexpr int32_t& Oculus::Interaction::TubeRenderer::__cordl_internal_get__vertsCount()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____vertsCount;
}
constexpr int32_t const& Oculus::Interaction::TubeRenderer::__cordl_internal_get__vertsCount() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____vertsCount;
}
constexpr void Oculus::Interaction::TubeRenderer::__cordl_internal_set__vertsCount(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____vertsCount = value;
}
constexpr float_t& Oculus::Interaction::TubeRenderer::__cordl_internal_get__totalLength()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____totalLength;
}
constexpr float_t const& Oculus::Interaction::TubeRenderer::__cordl_internal_get__totalLength() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____totalLength;
}
constexpr void Oculus::Interaction::TubeRenderer::__cordl_internal_set__totalLength(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____totalLength = value;
}
constexpr bool& Oculus::Interaction::TubeRenderer::__cordl_internal_get__hidden()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hidden;
}
constexpr bool const& Oculus::Interaction::TubeRenderer::__cordl_internal_get__hidden() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____hidden;
}
constexpr void Oculus::Interaction::TubeRenderer::__cordl_internal_set__hidden(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____hidden = value;
}
inline void Oculus::Interaction::TubeRenderer::setStaticF__fadeLimitsShaderID(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_fadeLimitsShaderID", ::Oculus::Interaction::TubeRenderer*>(std::forward<int32_t>(value));
}
inline int32_t Oculus::Interaction::TubeRenderer::getStaticF__fadeLimitsShaderID()  {
return ::cordl_internals::getStaticField<int32_t, "_fadeLimitsShaderID", ::Oculus::Interaction::TubeRenderer*>();
}
inline void Oculus::Interaction::TubeRenderer::setStaticF__fadeSignShaderID(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_fadeSignShaderID", ::Oculus::Interaction::TubeRenderer*>(std::forward<int32_t>(value));
}
inline int32_t Oculus::Interaction::TubeRenderer::getStaticF__fadeSignShaderID()  {
return ::cordl_internals::getStaticField<int32_t, "_fadeSignShaderID", ::Oculus::Interaction::TubeRenderer*>();
}
inline void Oculus::Interaction::TubeRenderer::setStaticF__offsetFactorShaderPropertyID(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_offsetFactorShaderPropertyID", ::Oculus::Interaction::TubeRenderer*>(std::forward<int32_t>(value));
}
inline int32_t Oculus::Interaction::TubeRenderer::getStaticF__offsetFactorShaderPropertyID()  {
return ::cordl_internals::getStaticField<int32_t, "_offsetFactorShaderPropertyID", ::Oculus::Interaction::TubeRenderer*>();
}
inline void Oculus::Interaction::TubeRenderer::setStaticF__offsetUnitsShaderPropertyID(int32_t  value)  {
::cordl_internals::setStaticField<int32_t, "_offsetUnitsShaderPropertyID", ::Oculus::Interaction::TubeRenderer*>(std::forward<int32_t>(value));
}
inline int32_t Oculus::Interaction::TubeRenderer::getStaticF__offsetUnitsShaderPropertyID()  {
return ::cordl_internals::getStaticField<int32_t, "_offsetUnitsShaderPropertyID", ::Oculus::Interaction::TubeRenderer*>();
}
inline int32_t Oculus::Interaction::TubeRenderer::get_RenderQueue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TubeRenderer*>(),
                        {"get_RenderQueue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Oculus::Interaction::TubeRenderer::set_RenderQueue(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TubeRenderer*>(),
                        {"set_RenderQueue", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 Oculus::Interaction::TubeRenderer::get_RenderOffset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TubeRenderer*>(),
                        {"get_RenderOffset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline void Oculus::Interaction::TubeRenderer::set_RenderOffset(::UnityEngine::Vector2  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TubeRenderer*>(),
                        {"set_RenderOffset", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Oculus::Interaction::TubeRenderer::get_Radius()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TubeRenderer*>(),
                        {"get_Radius", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::TubeRenderer::set_Radius(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TubeRenderer*>(),
                        {"set_Radius", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Gradient* Oculus::Interaction::TubeRenderer::get_Gradient()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TubeRenderer*>(),
                        {"get_Gradient", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Gradient*>(this, ___internal_method);
}
inline void Oculus::Interaction::TubeRenderer::set_Gradient(::UnityEngine::Gradient*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TubeRenderer*>(),
                        {"set_Gradient", {}, {::i2c::type_of<::UnityEngine::Gradient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Color Oculus::Interaction::TubeRenderer::get_Tint()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TubeRenderer*>(),
                        {"get_Tint", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline void Oculus::Interaction::TubeRenderer::set_Tint(::UnityEngine::Color  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TubeRenderer*>(),
                        {"set_Tint", {}, {::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Oculus::Interaction::TubeRenderer::get_ProgressFade()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TubeRenderer*>(),
                        {"get_ProgressFade", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::TubeRenderer::set_ProgressFade(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TubeRenderer*>(),
                        {"set_ProgressFade", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Oculus::Interaction::TubeRenderer::get_StartFadeThresold()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TubeRenderer*>(),
                        {"get_StartFadeThresold", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::TubeRenderer::set_StartFadeThresold(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TubeRenderer*>(),
                        {"set_StartFadeThresold", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Oculus::Interaction::TubeRenderer::get_EndFadeThresold()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TubeRenderer*>(),
                        {"get_EndFadeThresold", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::TubeRenderer::set_EndFadeThresold(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TubeRenderer*>(),
                        {"set_EndFadeThresold", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Oculus::Interaction::TubeRenderer::get_InvertThreshold()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TubeRenderer*>(),
                        {"get_InvertThreshold", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::TubeRenderer::set_InvertThreshold(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TubeRenderer*>(),
                        {"set_InvertThreshold", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Oculus::Interaction::TubeRenderer::get_Feather()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TubeRenderer*>(),
                        {"get_Feather", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::TubeRenderer::set_Feather(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TubeRenderer*>(),
                        {"set_Feather", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Oculus::Interaction::TubeRenderer::get_MirrorTexture()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TubeRenderer*>(),
                        {"get_MirrorTexture", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::TubeRenderer::set_MirrorTexture(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TubeRenderer*>(),
                        {"set_MirrorTexture", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Oculus::Interaction::TubeRenderer::get_Progress()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TubeRenderer*>(),
                        {"get_Progress", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::TubeRenderer::set_Progress(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TubeRenderer*>(),
                        {"set_Progress", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Oculus::Interaction::TubeRenderer::get_TotalLength()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TubeRenderer*>(),
                        {"get_TotalLength", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::TubeRenderer::Reset()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::TubeRenderer*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::TubeRenderer::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::TubeRenderer*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::TubeRenderer::OnEnable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::TubeRenderer*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::TubeRenderer::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::TubeRenderer*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::TubeRenderer::RenderTube(::ArrayW<::Oculus::Interaction::TubePoint>  points, ::UnityEngine::Space  space)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TubeRenderer*>(),
                        {"RenderTube", {}, {::i2c::type_of<::ArrayW<::Oculus::Interaction::TubePoint>>(), ::i2c::type_of<::UnityEngine::Space>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, points, space);
}
inline void Oculus::Interaction::TubeRenderer::Hide()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TubeRenderer*>(),
                        {"Hide", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::TubeRenderer::Show()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TubeRenderer*>(),
                        {"Show", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::TubeRenderer::InitializeMeshData(int32_t  steps)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TubeRenderer*>(),
                        {"InitializeMeshData", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, steps);
}
inline void Oculus::Interaction::TubeRenderer::UpdateMeshData(::ArrayW<::Oculus::Interaction::TubePoint>  points, ::UnityEngine::Space  space)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TubeRenderer*>(),
                        {"UpdateMeshData", {}, {::i2c::type_of<::ArrayW<::Oculus::Interaction::TubePoint>>(), ::i2c::type_of<::UnityEngine::Space>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, points, space);
}
inline void Oculus::Interaction::TubeRenderer::RedrawFadeThresholds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TubeRenderer*>(),
                        {"RedrawFadeThresholds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::TubeRenderer::BevelCap(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  pose, bool  end, int32_t  indexOffset)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TubeRenderer*>(),
                        {"BevelCap", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<bool>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pose, end, indexOffset);
}
inline void Oculus::Interaction::TubeRenderer::WriteCircle(::UnityEngine::Vector3  point, ::UnityEngine::Quaternion  rotation, float_t  width, int32_t  index, float_t  progress)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TubeRenderer*>(),
                        {"WriteCircle", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, point, rotation, width, index, progress);
}
inline int32_t Oculus::Interaction::TubeRenderer::SetVertexCount(int32_t  positionCount, int32_t  divisions, int32_t  bevelCap)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TubeRenderer*>(),
                        {"SetVertexCount", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, positionCount, divisions, bevelCap);
}
inline void Oculus::Interaction::TubeRenderer::InjectAllTubeRenderer(::UnityEngine::MeshFilter*  filter, ::UnityEngine::MeshRenderer*  renderer, int32_t  divisions, int32_t  bevel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TubeRenderer*>(),
                        {"InjectAllTubeRenderer", {}, {::i2c::type_of<::UnityEngine::MeshFilter*>(), ::i2c::type_of<::UnityEngine::MeshRenderer*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, filter, renderer, divisions, bevel);
}
inline void Oculus::Interaction::TubeRenderer::InjectFilter(::UnityEngine::MeshFilter*  filter)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TubeRenderer*>(),
                        {"InjectFilter", {}, {::i2c::type_of<::UnityEngine::MeshFilter*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, filter);
}
inline void Oculus::Interaction::TubeRenderer::InjectRenderer(::UnityEngine::MeshRenderer*  renderer)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TubeRenderer*>(),
                        {"InjectRenderer", {}, {::i2c::type_of<::UnityEngine::MeshRenderer*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, renderer);
}
inline void Oculus::Interaction::TubeRenderer::InjectDivisions(int32_t  divisions)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TubeRenderer*>(),
                        {"InjectDivisions", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, divisions);
}
inline void Oculus::Interaction::TubeRenderer::InjectBevel(int32_t  bevel)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TubeRenderer*>(),
                        {"InjectBevel", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bevel);
}
inline void Oculus::Interaction::TubeRenderer::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TubeRenderer*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::TubeRenderer::_UpdateMeshData_g__TransformPose_76_0(/* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::TubePoint>  tubePoint, ::by_ref<::UnityEngine::Pose>  pose, ::by_ref<::GlobalNamespace::TubeRenderer___c__DisplayClass76_0>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TubeRenderer*>(),
                        {"<UpdateMeshData>g__TransformPose|76_0", {}, {::i2c::type_of<::by_ref<::Oculus::Interaction::TubePoint>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::TubeRenderer___c__DisplayClass76_0>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, tubePoint, pose, _cordl_fixed_empty_name_whitespace);
}
inline void Oculus::Interaction::TubeRenderer::_SetVertexCount_g__Cap_80_0(int32_t  t, int32_t  firstVert, int32_t  lastVert, bool  clockwise)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::TubeRenderer*>(),
                        {"<SetVertexCount>g__Cap|80_0", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, t, firstVert, lastVert, clockwise);
}
inline ::Oculus::Interaction::TubeRenderer* Oculus::Interaction::TubeRenderer::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::TubeRenderer*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::TubeRenderer::TubeRenderer()   {
}
