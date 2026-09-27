#pragma once
// IWYU pragma private; include "GlobalNamespace/OVROverlayCanvas.hpp"
#include "GlobalNamespace/zzzz__OVROverlayCanvas_CanvasShape_impl.hpp"
#include "GlobalNamespace/zzzz__OVROverlayCanvas_DrawMode_impl.hpp"
#include "GlobalNamespace/zzzz__OVROverlay_OverlayType_impl.hpp"
#include "GlobalNamespace/zzzz__OVRRayTransformer_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__ValueTuple_2_impl.hpp"
#include "UnityEngine/zzzz__Plane_impl.hpp"
#include "UnityEngine/zzzz__Transform_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__OVROverlayCanvas_def.hpp"
#include "GlobalNamespace/zzzz__OVROverlayCanvas_CanvasShape_def.hpp"
#include "GlobalNamespace/zzzz__OVROverlayCanvas_DrawMode_def.hpp"
#include "GlobalNamespace/zzzz__OVROverlayCanvas_ScopedCallback_def.hpp"
#include "GlobalNamespace/zzzz__OVROverlayCanvas_def.hpp"
#include "GlobalNamespace/zzzz__OVROverlayMeshGenerator_def.hpp"
#include "GlobalNamespace/zzzz__OVROverlay_def.hpp"
#include "System/Reflection/zzzz__PropertyInfo_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Material_def.hpp"
#include "UnityEngine/zzzz__Matrix4x4_def.hpp"
#include "UnityEngine/zzzz__MeshRenderer_def.hpp"
#include "UnityEngine/zzzz__Ray_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
#include "UnityEngine/zzzz__RenderTexture_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVROverlayCanvas.get_CanvasRenderLayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::OVROverlayCanvas::*)()>(&::GlobalNamespace::OVROverlayCanvas::get_CanvasRenderLayer)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0xa600060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVROverlayCanvas*>(),
                        {"get_CanvasRenderLayer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayCanvas.get_ShouldScaleViewport
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVROverlayCanvas::*)()>(&::GlobalNamespace::OVROverlayCanvas::get_ShouldScaleViewport)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa600128;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVROverlayCanvas*>(),
                        {"get_ShouldScaleViewport", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayCanvas.get_IsCanvasPriority
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVROverlayCanvas::*)()>(&::GlobalNamespace::OVROverlayCanvas::get_IsCanvasPriority)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0xa600130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVROverlayCanvas*>(),
                        {"get_IsCanvasPriority", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayCanvas.get_ShouldShowImposter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVROverlayCanvas::*)()>(&::GlobalNamespace::OVROverlayCanvas::get_ShouldShowImposter)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xa6003b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVROverlayCanvas*>(),
                        {"get_ShouldShowImposter", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayCanvas.get_overlayEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVROverlayCanvas::*)()>(&::GlobalNamespace::OVROverlayCanvas::get_overlayEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6003e4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVROverlayCanvas*>(),
                        {"get_overlayEnabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayCanvas.set_overlayEnabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVROverlayCanvas::*)(bool)>(&::GlobalNamespace::OVROverlayCanvas::set_overlayEnabled)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xa6003ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVROverlayCanvas*>(),
                        {"set_overlayEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayCanvas.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVROverlayCanvas::*)()>(&::GlobalNamespace::OVROverlayCanvas::Start)> {
  constexpr static std::size_t size = 0x4f8;
  constexpr static std::size_t addrs = 0xa6004d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVROverlayCanvas*>(),
                        {"Start", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayCanvas.UpdateOverlaySettings
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVROverlayCanvas::*)()>(&::GlobalNamespace::OVROverlayCanvas::UpdateOverlaySettings)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa6009d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVROverlayCanvas*>(),
                        {"UpdateOverlaySettings", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayCanvas.InitializeRenderTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVROverlayCanvas::*)()>(&::GlobalNamespace::OVROverlayCanvas::InitializeRenderTexture)> {
  constexpr static std::size_t size = 0xa28;
  constexpr static std::size_t addrs = 0xa600a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVROverlayCanvas*>(),
                        {"InitializeRenderTexture", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayCanvas.CalcImposterColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::GlobalNamespace::OVROverlayCanvas::*)()>(&::GlobalNamespace::OVROverlayCanvas::CalcImposterColor)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xa601724;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVROverlayCanvas*>(),
                        {"CalcImposterColor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayCanvas.OnDestroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVROverlayCanvas::*)()>(&::GlobalNamespace::OVROverlayCanvas::OnDestroy)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xa601798;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVROverlayCanvas*>(),
                        {"OnDestroy", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayCanvas.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVROverlayCanvas::*)()>(&::GlobalNamespace::OVROverlayCanvas::OnEnable)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xa60185c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVROverlayCanvas*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayCanvas.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVROverlayCanvas::*)()>(&::GlobalNamespace::OVROverlayCanvas::OnDisable)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0xa601a24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVROverlayCanvas*>(),
                        {"OnDisable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayCanvas.ShouldRender
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVROverlayCanvas::*)()>(&::GlobalNamespace::OVROverlayCanvas::ShouldRender)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0xa601b48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVROverlayCanvas*>(),
                    {::i2c::class_of<::GlobalNamespace::OVROverlayCanvas*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayCanvas.IsInFrustum
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVROverlayCanvas::*)()>(&::GlobalNamespace::OVROverlayCanvas::IsInFrustum)> {
  constexpr static std::size_t size = 0x4a4;
  constexpr static std::size_t addrs = 0xa6024b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVROverlayCanvas*>(),
                        {"IsInFrustum", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayCanvas.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVROverlayCanvas::*)()>(&::GlobalNamespace::OVROverlayCanvas::Update)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa60295c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVROverlayCanvas*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayCanvas.LateUpdate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVROverlayCanvas::*)()>(&::GlobalNamespace::OVROverlayCanvas::LateUpdate)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0xa6033d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVROverlayCanvas*>(),
                        {"LateUpdate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayCanvas.GetViewPriorityScore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<float_t> (::GlobalNamespace::OVROverlayCanvas::*)()>(&::GlobalNamespace::OVROverlayCanvas::GetViewPriorityScore)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xa603464;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVROverlayCanvas*>(),
                        {"GetViewPriorityScore", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayCanvas.GetViewPriorityScoreImpl
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<float_t> (::GlobalNamespace::OVROverlayCanvas::*)()>(&::GlobalNamespace::OVROverlayCanvas::GetViewPriorityScoreImpl)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0xa603508;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVROverlayCanvas*>(),
                        {"GetViewPriorityScoreImpl", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayCanvas.TriangleArea
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GlobalNamespace::OVROverlayCanvas::TriangleArea)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0xa6038d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVROverlayCanvas*>(),
                        {"TriangleArea", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayCanvas.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVROverlayCanvas::*)()>(&::GlobalNamespace::OVROverlayCanvas::OnValidate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa6039d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVROverlayCanvas*>(),
                        {"OnValidate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayCanvas.GetRectTransformScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::OVROverlayCanvas::*)()>(&::GlobalNamespace::OVROverlayCanvas::GetRectTransformScale)> {
  constexpr static std::size_t size = 0x24c;
  constexpr static std::size_t addrs = 0xa6014a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVROverlayCanvas*>(),
                        {"GetRectTransformScale", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayCanvas.GetWorldToViewportMatrix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (::GlobalNamespace::OVROverlayCanvas::*)(::UnityEngine::Camera*)>(&::GlobalNamespace::OVROverlayCanvas::GetWorldToViewportMatrix)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0xa6039d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVROverlayCanvas*>(),
                        {"GetWorldToViewportMatrix", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayCanvas.CalculateScaledResolution
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::System::ValueTuple_2<int32_t,int32_t>> (::GlobalNamespace::OVROverlayCanvas::*)()>(&::GlobalNamespace::OVROverlayCanvas::CalculateScaledResolution)> {
  constexpr static std::size_t size = 0x824;
  constexpr static std::size_t addrs = 0xa601c94;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVROverlayCanvas*>(),
                        {"CalculateScaledResolution", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayCanvas.ApplyViewportScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVROverlayCanvas::*)()>(&::GlobalNamespace::OVROverlayCanvas::ApplyViewportScale)> {
  constexpr static std::size_t size = 0x33c;
  constexpr static std::size_t addrs = 0xa6029b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVROverlayCanvas*>(),
                        {"ApplyViewportScale", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayCanvas.RenderCamera
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVROverlayCanvas::*)()>(&::GlobalNamespace::OVROverlayCanvas::RenderCamera)> {
  constexpr static std::size_t size = 0x6e4;
  constexpr static std::size_t addrs = 0xa602cf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVROverlayCanvas*>(),
                        {"RenderCamera", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayCanvas.CalculateCurveViewBillboardMatrix
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Matrix4x4 (::GlobalNamespace::OVROverlayCanvas::*)(::UnityEngine::Camera*)>(&::GlobalNamespace::OVROverlayCanvas::CalculateCurveViewBillboardMatrix)> {
  constexpr static std::size_t size = 0x2f0;
  constexpr static std::size_t addrs = 0xa603b6c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVROverlayCanvas*>(),
                        {"CalculateCurveViewBillboardMatrix", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayCanvas.TransformRay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Ray (::GlobalNamespace::OVROverlayCanvas::*)(::UnityEngine::Ray)>(&::GlobalNamespace::OVROverlayCanvas::TransformRay)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0xa603f00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVROverlayCanvas*>(),
                    {::i2c::class_of<::GlobalNamespace::OVROverlayCanvas*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayCanvas.LineCircleIntersection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, float_t, ::by_ref<float_t>)>(&::GlobalNamespace::OVROverlayCanvas::LineCircleIntersection)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0xa6041dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVROverlayCanvas*>(),
                        {"LineCircleIntersection", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayCanvas.get_Overlay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::OVROverlay> (::GlobalNamespace::OVROverlayCanvas::*)()>(&::GlobalNamespace::OVROverlayCanvas::get_Overlay)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6042a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVROverlayCanvas*>(),
                        {"get_Overlay", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayCanvas.SetFrameDirty
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVROverlayCanvas::*)()>(&::GlobalNamespace::OVROverlayCanvas::SetFrameDirty)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa6042b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVROverlayCanvas*>(),
                        {"SetFrameDirty", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayCanvas.SetCanvasLayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVROverlayCanvas::*)(int32_t, bool)>(&::GlobalNamespace::OVROverlayCanvas::SetCanvasLayer)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xa6042b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVROverlayCanvas*>(),
                        {"SetCanvasLayer", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayCanvas.SetLayerRecursive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::GameObject*, int32_t, int32_t, bool)>(&::GlobalNamespace::OVROverlayCanvas::SetLayerRecursive)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0xa60435c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVROverlayCanvas*>(),
                        {"SetLayerRecursive", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayCanvas._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVROverlayCanvas::*)()>(&::GlobalNamespace::OVROverlayCanvas::_ctor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xa6044a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVROverlayCanvas*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Camera>& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get__camera()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____camera;
}
constexpr ::UnityW<::UnityEngine::Camera> const& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get__camera() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____camera;
}
constexpr void GlobalNamespace::OVROverlayCanvas::__cordl_internal_set__camera(::UnityW<::UnityEngine::Camera>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____camera = value;
}
constexpr ::UnityW<::GlobalNamespace::OVROverlay>& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get__overlay()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____overlay;
}
constexpr ::UnityW<::GlobalNamespace::OVROverlay> const& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get__overlay() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____overlay;
}
constexpr void GlobalNamespace::OVROverlayCanvas::__cordl_internal_set__overlay(::UnityW<::GlobalNamespace::OVROverlay>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____overlay = value;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer>& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get__meshRenderer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____meshRenderer;
}
constexpr ::UnityW<::UnityEngine::MeshRenderer> const& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get__meshRenderer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____meshRenderer;
}
constexpr void GlobalNamespace::OVROverlayCanvas::__cordl_internal_set__meshRenderer(::UnityW<::UnityEngine::MeshRenderer>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____meshRenderer = value;
}
constexpr ::UnityW<::GlobalNamespace::OVROverlayMeshGenerator>& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get__meshGenerator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____meshGenerator;
}
constexpr ::UnityW<::GlobalNamespace::OVROverlayMeshGenerator> const& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get__meshGenerator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____meshGenerator;
}
constexpr void GlobalNamespace::OVROverlayCanvas::__cordl_internal_set__meshGenerator(::UnityW<::GlobalNamespace::OVROverlayMeshGenerator>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____meshGenerator = value;
}
constexpr ::UnityW<::UnityEngine::RenderTexture>& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get__renderTexture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____renderTexture;
}
constexpr ::UnityW<::UnityEngine::RenderTexture> const& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get__renderTexture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____renderTexture;
}
constexpr void GlobalNamespace::OVROverlayCanvas::__cordl_internal_set__renderTexture(::UnityW<::UnityEngine::RenderTexture>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____renderTexture = value;
}
constexpr ::UnityW<::UnityEngine::Material>& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get__imposterMaterial()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____imposterMaterial;
}
constexpr ::UnityW<::UnityEngine::Material> const& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get__imposterMaterial() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____imposterMaterial;
}
constexpr void GlobalNamespace::OVROverlayCanvas::__cordl_internal_set__imposterMaterial(::UnityW<::UnityEngine::Material>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____imposterMaterial = value;
}
constexpr bool& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get__optimalResolutionInitialized()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____optimalResolutionInitialized;
}
constexpr bool const& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get__optimalResolutionInitialized() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____optimalResolutionInitialized;
}
constexpr void GlobalNamespace::OVROverlayCanvas::__cordl_internal_set__optimalResolutionInitialized(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____optimalResolutionInitialized = value;
}
constexpr float_t& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get__optimalResolutionWidth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____optimalResolutionWidth;
}
constexpr float_t const& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get__optimalResolutionWidth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____optimalResolutionWidth;
}
constexpr void GlobalNamespace::OVROverlayCanvas::__cordl_internal_set__optimalResolutionWidth(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____optimalResolutionWidth = value;
}
constexpr float_t& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get__optimalResolutionHeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____optimalResolutionHeight;
}
constexpr float_t const& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get__optimalResolutionHeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____optimalResolutionHeight;
}
constexpr void GlobalNamespace::OVROverlayCanvas::__cordl_internal_set__optimalResolutionHeight(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____optimalResolutionHeight = value;
}
constexpr int32_t& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get__lastPixelWidth()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastPixelWidth;
}
constexpr int32_t const& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get__lastPixelWidth() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastPixelWidth;
}
constexpr void GlobalNamespace::OVROverlayCanvas::__cordl_internal_set__lastPixelWidth(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastPixelWidth = value;
}
constexpr int32_t& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get__lastPixelHeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastPixelHeight;
}
constexpr int32_t const& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get__lastPixelHeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastPixelHeight;
}
constexpr void GlobalNamespace::OVROverlayCanvas::__cordl_internal_set__lastPixelHeight(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastPixelHeight = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get__imposterTextureOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____imposterTextureOffset;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get__imposterTextureOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____imposterTextureOffset;
}
constexpr void GlobalNamespace::OVROverlayCanvas::__cordl_internal_set__imposterTextureOffset(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____imposterTextureOffset = value;
}
constexpr ::UnityEngine::Vector2& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get__imposterTextureScale()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____imposterTextureScale;
}
constexpr ::UnityEngine::Vector2 const& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get__imposterTextureScale() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____imposterTextureScale;
}
constexpr void GlobalNamespace::OVROverlayCanvas::__cordl_internal_set__imposterTextureScale(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____imposterTextureScale = value;
}
constexpr bool& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get__frameIsReady()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____frameIsReady;
}
constexpr bool const& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get__frameIsReady() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____frameIsReady;
}
constexpr void GlobalNamespace::OVROverlayCanvas::__cordl_internal_set__frameIsReady(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____frameIsReady = value;
}
constexpr bool& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get__useTempRT()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useTempRT;
}
constexpr bool const& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get__useTempRT() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____useTempRT;
}
constexpr void GlobalNamespace::OVROverlayCanvas::__cordl_internal_set__useTempRT(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____useTempRT = value;
}
constexpr bool& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get__enableMipmapping()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____enableMipmapping;
}
constexpr bool const& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get__enableMipmapping() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____enableMipmapping;
}
constexpr void GlobalNamespace::OVROverlayCanvas::__cordl_internal_set__enableMipmapping(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____enableMipmapping = value;
}
constexpr bool& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get__dynamicResolution()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dynamicResolution;
}
constexpr bool const& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get__dynamicResolution() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____dynamicResolution;
}
constexpr void GlobalNamespace::OVROverlayCanvas::__cordl_internal_set__dynamicResolution(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____dynamicResolution = value;
}
constexpr int32_t& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get__redrawResolutionThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____redrawResolutionThreshold;
}
constexpr int32_t const& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get__redrawResolutionThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____redrawResolutionThreshold;
}
constexpr void GlobalNamespace::OVROverlayCanvas::__cordl_internal_set__redrawResolutionThreshold(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____redrawResolutionThreshold = value;
}
constexpr ::UnityW<::UnityEngine::RectTransform>& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get_rectTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rectTransform;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get_rectTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rectTransform;
}
constexpr void GlobalNamespace::OVROverlayCanvas::__cordl_internal_set_rectTransform(::UnityW<::UnityEngine::RectTransform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rectTransform = value;
}
constexpr int32_t& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get_maxTextureSize()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxTextureSize;
}
constexpr int32_t const& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get_maxTextureSize() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxTextureSize;
}
constexpr void GlobalNamespace::OVROverlayCanvas::__cordl_internal_set_maxTextureSize(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxTextureSize = value;
}
constexpr bool& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get_manualRedraw()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___manualRedraw;
}
constexpr bool const& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get_manualRedraw() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___manualRedraw;
}
constexpr void GlobalNamespace::OVROverlayCanvas::__cordl_internal_set_manualRedraw(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___manualRedraw = value;
}
constexpr int32_t& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get_renderInterval()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderInterval;
}
constexpr int32_t const& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get_renderInterval() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderInterval;
}
constexpr void GlobalNamespace::OVROverlayCanvas::__cordl_internal_set_renderInterval(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___renderInterval = value;
}
constexpr int32_t& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get_renderIntervalFrameOffset()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderIntervalFrameOffset;
}
constexpr int32_t const& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get_renderIntervalFrameOffset() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___renderIntervalFrameOffset;
}
constexpr void GlobalNamespace::OVROverlayCanvas::__cordl_internal_set_renderIntervalFrameOffset(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___renderIntervalFrameOffset = value;
}
constexpr bool& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get_expensive()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___expensive;
}
constexpr bool const& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get_expensive() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___expensive;
}
constexpr void GlobalNamespace::OVROverlayCanvas::__cordl_internal_set_expensive(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___expensive = value;
}
constexpr int32_t& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get_layer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layer;
}
constexpr int32_t const& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get_layer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___layer;
}
constexpr void GlobalNamespace::OVROverlayCanvas::__cordl_internal_set_layer(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___layer = value;
}
constexpr ::GlobalNamespace::OVROverlayCanvas_DrawMode& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get_opacity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___opacity;
}
constexpr ::GlobalNamespace::OVROverlayCanvas_DrawMode const& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get_opacity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___opacity;
}
constexpr void GlobalNamespace::OVROverlayCanvas::__cordl_internal_set_opacity(::GlobalNamespace::OVROverlayCanvas_DrawMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___opacity = value;
}
constexpr ::GlobalNamespace::OVROverlayCanvas_CanvasShape& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get_shape()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shape;
}
constexpr ::GlobalNamespace::OVROverlayCanvas_CanvasShape const& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get_shape() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___shape;
}
constexpr void GlobalNamespace::OVROverlayCanvas::__cordl_internal_set_shape(::GlobalNamespace::OVROverlayCanvas_CanvasShape  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___shape = value;
}
constexpr float_t& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get_curveRadius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___curveRadius;
}
constexpr float_t const& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get_curveRadius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___curveRadius;
}
constexpr void GlobalNamespace::OVROverlayCanvas::__cordl_internal_set_curveRadius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___curveRadius = value;
}
constexpr bool& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get_overlapMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overlapMask;
}
constexpr bool const& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get_overlapMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overlapMask;
}
constexpr void GlobalNamespace::OVROverlayCanvas::__cordl_internal_set_overlapMask(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___overlapMask = value;
}
constexpr ::GlobalNamespace::OVROverlay_OverlayType& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get_overlayType()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overlayType;
}
constexpr ::GlobalNamespace::OVROverlay_OverlayType const& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get_overlayType() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___overlayType;
}
constexpr void GlobalNamespace::OVROverlayCanvas::__cordl_internal_set_overlayType(::GlobalNamespace::OVROverlay_OverlayType  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___overlayType = value;
}
constexpr bool& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get__overlayEnabled()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____overlayEnabled;
}
constexpr bool const& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get__overlayEnabled() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____overlayEnabled;
}
constexpr void GlobalNamespace::OVROverlayCanvas::__cordl_internal_set__overlayEnabled(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____overlayEnabled = value;
}
constexpr bool& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get__nonUniformScaleWarningShown()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nonUniformScaleWarningShown;
}
constexpr bool const& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get__nonUniformScaleWarningShown() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____nonUniformScaleWarningShown;
}
constexpr void GlobalNamespace::OVROverlayCanvas::__cordl_internal_set__nonUniformScaleWarningShown(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____nonUniformScaleWarningShown = value;
}
constexpr ::System::ValueTuple_2<int32_t,::System::Nullable_1<float_t>>& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get__lastViewPriorityScore()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastViewPriorityScore;
}
constexpr ::System::ValueTuple_2<int32_t,::System::Nullable_1<float_t>> const& GlobalNamespace::OVROverlayCanvas::__cordl_internal_get__lastViewPriorityScore() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____lastViewPriorityScore;
}
constexpr void GlobalNamespace::OVROverlayCanvas::__cordl_internal_set__lastViewPriorityScore(::System::ValueTuple_2<int32_t,::System::Nullable_1<float_t>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____lastViewPriorityScore = value;
}
inline void GlobalNamespace::OVROverlayCanvas::setStaticF__FrustumPlanes(::ArrayW<::UnityEngine::Plane>  value)  {
::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Plane>, "_FrustumPlanes", ::GlobalNamespace::OVROverlayCanvas*>(std::forward<::ArrayW<::UnityEngine::Plane>>(value));
}
inline ::ArrayW<::UnityEngine::Plane> GlobalNamespace::OVROverlayCanvas::getStaticF__FrustumPlanes()  {
return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Plane>, "_FrustumPlanes", ::GlobalNamespace::OVROverlayCanvas*>();
}
inline void GlobalNamespace::OVROverlayCanvas::setStaticF__Corners(::ArrayW<::UnityEngine::Vector3>  value)  {
::cordl_internals::setStaticField<::ArrayW<::UnityEngine::Vector3>, "_Corners", ::GlobalNamespace::OVROverlayCanvas*>(std::forward<::ArrayW<::UnityEngine::Vector3>>(value));
}
inline ::ArrayW<::UnityEngine::Vector3> GlobalNamespace::OVROverlayCanvas::getStaticF__Corners()  {
return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::Vector3>, "_Corners", ::GlobalNamespace::OVROverlayCanvas*>();
}
inline int32_t GlobalNamespace::OVROverlayCanvas::get_CanvasRenderLayer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVROverlayCanvas*>(),
                        {"get_CanvasRenderLayer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline bool GlobalNamespace::OVROverlayCanvas::get_ShouldScaleViewport()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVROverlayCanvas*>(),
                        {"get_ShouldScaleViewport", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::OVROverlayCanvas::get_IsCanvasPriority()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVROverlayCanvas*>(),
                        {"get_IsCanvasPriority", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::OVROverlayCanvas::get_ShouldShowImposter()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVROverlayCanvas*>(),
                        {"get_ShouldShowImposter", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::OVROverlayCanvas::get_overlayEnabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVROverlayCanvas*>(),
                        {"get_overlayEnabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::OVROverlayCanvas::set_overlayEnabled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVROverlayCanvas*>(),
                        {"set_overlayEnabled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::OVROverlayCanvas::Start()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVROverlayCanvas*>(),
                        {"Start", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::StringW GlobalNamespace::OVROverlayCanvas::ToSimpleJson(T  value)  {
static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                    ::i2c::class_of<::GlobalNamespace::OVROverlayCanvas*>(),
                    {"ToSimpleJson", {::i2c::class_of<T>()}, {::i2c::type_of<T>()}}
                )));
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(
                    ___internal_method_base,
                    {::i2c::class_of<T>()}
                )));
return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, value);
}
inline void GlobalNamespace::OVROverlayCanvas::UpdateOverlaySettings()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVROverlayCanvas*>(),
                        {"UpdateOverlaySettings", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVROverlayCanvas::InitializeRenderTexture()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVROverlayCanvas*>(),
                        {"InitializeRenderTexture", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Color GlobalNamespace::OVROverlayCanvas::CalcImposterColor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVROverlayCanvas*>(),
                        {"CalcImposterColor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline void GlobalNamespace::OVROverlayCanvas::OnDestroy()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVROverlayCanvas*>(),
                        {"OnDestroy", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVROverlayCanvas::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVROverlayCanvas*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVROverlayCanvas::OnDisable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVROverlayCanvas*>(),
                        {"OnDisable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::OVROverlayCanvas::ShouldRender()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVROverlayCanvas*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool GlobalNamespace::OVROverlayCanvas::IsInFrustum()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVROverlayCanvas*>(),
                        {"IsInFrustum", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::OVROverlayCanvas::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVROverlayCanvas*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVROverlayCanvas::LateUpdate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVROverlayCanvas*>(),
                        {"LateUpdate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Nullable_1<float_t> GlobalNamespace::OVROverlayCanvas::GetViewPriorityScore()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVROverlayCanvas*>(),
                        {"GetViewPriorityScore", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<float_t>>(this, ___internal_method);
}
inline ::System::Nullable_1<float_t> GlobalNamespace::OVROverlayCanvas::GetViewPriorityScoreImpl()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVROverlayCanvas*>(),
                        {"GetViewPriorityScoreImpl", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<float_t>>(this, ___internal_method);
}
inline float_t GlobalNamespace::OVROverlayCanvas::TriangleArea(::UnityEngine::Vector3  a, ::UnityEngine::Vector3  b, ::UnityEngine::Vector3  c)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVROverlayCanvas*>(),
                        {"TriangleArea", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, a, b, c);
}
inline void GlobalNamespace::OVROverlayCanvas::OnValidate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVROverlayCanvas*>(),
                        {"OnValidate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::OVROverlayCanvas::GetRectTransformScale()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVROverlayCanvas*>(),
                        {"GetRectTransformScale", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Matrix4x4 GlobalNamespace::OVROverlayCanvas::GetWorldToViewportMatrix(::UnityEngine::Camera*  mainCamera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVROverlayCanvas*>(),
                        {"GetWorldToViewportMatrix", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(this, ___internal_method, mainCamera);
}
inline ::System::Nullable_1<::System::ValueTuple_2<int32_t,int32_t>> GlobalNamespace::OVROverlayCanvas::CalculateScaledResolution()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVROverlayCanvas*>(),
                        {"CalculateScaledResolution", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::System::ValueTuple_2<int32_t,int32_t>>>(this, ___internal_method);
}
inline void GlobalNamespace::OVROverlayCanvas::ApplyViewportScale()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVROverlayCanvas*>(),
                        {"ApplyViewportScale", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVROverlayCanvas::RenderCamera()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVROverlayCanvas*>(),
                        {"RenderCamera", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Matrix4x4 GlobalNamespace::OVROverlayCanvas::CalculateCurveViewBillboardMatrix(::UnityEngine::Camera*  mainCamera)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVROverlayCanvas*>(),
                        {"CalculateCurveViewBillboardMatrix", {}, {::i2c::type_of<::UnityEngine::Camera*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Matrix4x4>(this, ___internal_method, mainCamera);
}
inline ::UnityEngine::Ray GlobalNamespace::OVROverlayCanvas::TransformRay(::UnityEngine::Ray  ray)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GlobalNamespace::OVROverlayCanvas*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Ray>(this, ___internal_method, ray);
}
inline bool GlobalNamespace::OVROverlayCanvas::LineCircleIntersection(::UnityEngine::Vector2  p1, ::UnityEngine::Vector2  dp, ::UnityEngine::Vector2  center, float_t  radius, ::by_ref<float_t>  distance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVROverlayCanvas*>(),
                        {"LineCircleIntersection", {}, {::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, p1, dp, center, radius, distance);
}
inline ::UnityW<::GlobalNamespace::OVROverlay> GlobalNamespace::OVROverlayCanvas::get_Overlay()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVROverlayCanvas*>(),
                        {"get_Overlay", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::OVROverlay>>(this, ___internal_method);
}
inline void GlobalNamespace::OVROverlayCanvas::SetFrameDirty()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVROverlayCanvas*>(),
                        {"SetFrameDirty", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVROverlayCanvas::SetCanvasLayer(int32_t  layer, bool  forceUpdate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVROverlayCanvas*>(),
                        {"SetCanvasLayer", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, layer, forceUpdate);
}
inline void GlobalNamespace::OVROverlayCanvas::SetLayerRecursive(::UnityEngine::GameObject*  gameObject, int32_t  layer, int32_t  previousLayer, bool  forceUpdate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVROverlayCanvas*>(),
                        {"SetLayerRecursive", {}, {::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, gameObject, layer, previousLayer, forceUpdate);
}
inline void GlobalNamespace::OVROverlayCanvas::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVROverlayCanvas*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OVROverlayCanvas* GlobalNamespace::OVROverlayCanvas::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVROverlayCanvas*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVROverlayCanvas::OVROverlayCanvas()   {
}
//  Writing Method size for method: ::GlobalNamespace::OVROverlayCanvas___c__DisplayClass70_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVROverlayCanvas___c__DisplayClass70_0::*)()>(&::GlobalNamespace::OVROverlayCanvas___c__DisplayClass70_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa603e5c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVROverlayCanvas___c__DisplayClass70_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVROverlayCanvas___c__DisplayClass70_0._RenderCamera_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVROverlayCanvas___c__DisplayClass70_0::*)()>(&::GlobalNamespace::OVROverlayCanvas___c__DisplayClass70_0::_RenderCamera_b__0)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xa6046c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVROverlayCanvas___c__DisplayClass70_0*>(),
                        {"<RenderCamera>b__0", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::OVROverlayCanvas>& GlobalNamespace::OVROverlayCanvas___c__DisplayClass70_0::__cordl_internal_get___4__this()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::OVROverlayCanvas> const& GlobalNamespace::OVROverlayCanvas___c__DisplayClass70_0::__cordl_internal_get___4__this() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->_____4__this;
}
constexpr void GlobalNamespace::OVROverlayCanvas___c__DisplayClass70_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::OVROverlayCanvas>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->_____4__this = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>>& GlobalNamespace::OVROverlayCanvas___c__DisplayClass70_0::__cordl_internal_get_transforms()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transforms;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Transform>> const& GlobalNamespace::OVROverlayCanvas___c__DisplayClass70_0::__cordl_internal_get_transforms() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___transforms;
}
constexpr void GlobalNamespace::OVROverlayCanvas___c__DisplayClass70_0::__cordl_internal_set_transforms(::ArrayW<::UnityW<::UnityEngine::Transform>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___transforms = value;
}
constexpr int32_t& GlobalNamespace::OVROverlayCanvas___c__DisplayClass70_0::__cordl_internal_get_targetLayer()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetLayer;
}
constexpr int32_t const& GlobalNamespace::OVROverlayCanvas___c__DisplayClass70_0::__cordl_internal_get_targetLayer() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___targetLayer;
}
constexpr void GlobalNamespace::OVROverlayCanvas___c__DisplayClass70_0::__cordl_internal_set_targetLayer(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___targetLayer = value;
}
inline void GlobalNamespace::OVROverlayCanvas___c__DisplayClass70_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVROverlayCanvas___c__DisplayClass70_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVROverlayCanvas___c__DisplayClass70_0::_RenderCamera_b__0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVROverlayCanvas___c__DisplayClass70_0*>(),
                        {"<RenderCamera>b__0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OVROverlayCanvas___c__DisplayClass70_0* GlobalNamespace::OVROverlayCanvas___c__DisplayClass70_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVROverlayCanvas___c__DisplayClass70_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVROverlayCanvas___c__DisplayClass70_0::OVROverlayCanvas___c__DisplayClass70_0()   {
}
template<typename T>
constexpr T& GlobalNamespace::OVROverlayCanvas___c__DisplayClass50_0_1<T>::__cordl_internal_get_value()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___value;
}
template<typename T>
constexpr T const& GlobalNamespace::OVROverlayCanvas___c__DisplayClass50_0_1<T>::__cordl_internal_get_value() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___value;
}
template<typename T>
constexpr void GlobalNamespace::OVROverlayCanvas___c__DisplayClass50_0_1<T>::__cordl_internal_set_value(T  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___value = value;
}
template<typename T>
inline void GlobalNamespace::OVROverlayCanvas___c__DisplayClass50_0_1<T>::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVROverlayCanvas___c__DisplayClass50_0_1<T>*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
template<typename T>
inline ::StringW GlobalNamespace::OVROverlayCanvas___c__DisplayClass50_0_1<T>::_ToSimpleJson_b__0(::System::Reflection::PropertyInfo*  p)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::OVROverlayCanvas___c__DisplayClass50_0_1<T>*>(),
                        {"<ToSimpleJson>b__0", {}, {::i2c::type_of<::System::Reflection::PropertyInfo*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, p);
}
template<typename T>
inline ::GlobalNamespace::OVROverlayCanvas___c__DisplayClass50_0_1<T>* GlobalNamespace::OVROverlayCanvas___c__DisplayClass50_0_1<T>::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVROverlayCanvas___c__DisplayClass50_0_1<T>*>());
}
// Ctor Parameters []
template<typename T>
constexpr ::GlobalNamespace::OVROverlayCanvas___c__DisplayClass50_0_1<T>::OVROverlayCanvas___c__DisplayClass50_0_1()   {
}
