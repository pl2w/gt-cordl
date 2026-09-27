#pragma once
// IWYU pragma private; include "Oculus/Interaction/UnityCanvas/CanvasCylinder.hpp"
#include "Oculus/Interaction/UnityCanvas/zzzz__CanvasCylinder_MeshGenerationSettings_impl.hpp"
#include "Oculus/Interaction/UnityCanvas/zzzz__CanvasMesh_impl.hpp"
#include "Oculus/Interaction/zzzz__CylinderOrientation_impl.hpp"
#include "Oculus/Interaction/UnityCanvas/zzzz__CanvasCylinder_def.hpp"
#include "Oculus/Interaction/Surfaces/zzzz__CylinderSegment_def.hpp"
#include "Oculus/Interaction/Surfaces/zzzz__ICylinderClipper_def.hpp"
#include "Oculus/Interaction/UnityCanvas/zzzz__CanvasCylinder_MeshGenerationSettings_def.hpp"
#include "Oculus/Interaction/UnityCanvas/zzzz__CanvasCylinder___c__DisplayClass31_0_def.hpp"
#include "Oculus/Interaction/UnityCanvas/zzzz__CanvasRenderTexture_def.hpp"
#include "Oculus/Interaction/zzzz__CylinderOrientation_def.hpp"
#include "Oculus/Interaction/zzzz__Cylinder_def.hpp"
#include "Oculus/Interaction/zzzz__ICurvedPlane_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__MeshFilter_def.hpp"
#include "UnityEngine/zzzz__Vector2Int_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::UnityCanvas::CanvasCylinder.get_Radius
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::UnityCanvas::CanvasCylinder::*)()>(&::Oculus::Interaction::UnityCanvas::CanvasCylinder::get_Radius)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa48e8a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UnityCanvas::CanvasCylinder*>(),
                        {"get_Radius", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::UnityCanvas::CanvasCylinder.get_Cylinder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Oculus::Interaction::Cylinder> (::Oculus::Interaction::UnityCanvas::CanvasCylinder::*)()>(&::Oculus::Interaction::UnityCanvas::CanvasCylinder::get_Cylinder)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa48e8b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UnityCanvas::CanvasCylinder*>(),
                        {"get_Cylinder", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::UnityCanvas::CanvasCylinder.get_ArcDegrees
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::UnityCanvas::CanvasCylinder::*)()>(&::Oculus::Interaction::UnityCanvas::CanvasCylinder::get_ArcDegrees)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa48e8c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UnityCanvas::CanvasCylinder*>(),
                        {"get_ArcDegrees", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::UnityCanvas::CanvasCylinder.set_ArcDegrees
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::UnityCanvas::CanvasCylinder::*)(float_t)>(&::Oculus::Interaction::UnityCanvas::CanvasCylinder::set_ArcDegrees)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa48e8c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UnityCanvas::CanvasCylinder*>(),
                        {"set_ArcDegrees", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::UnityCanvas::CanvasCylinder.get_Rotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::UnityCanvas::CanvasCylinder::*)()>(&::Oculus::Interaction::UnityCanvas::CanvasCylinder::get_Rotation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa48e8d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UnityCanvas::CanvasCylinder*>(),
                        {"get_Rotation", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::UnityCanvas::CanvasCylinder.set_Rotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::UnityCanvas::CanvasCylinder::*)(float_t)>(&::Oculus::Interaction::UnityCanvas::CanvasCylinder::set_Rotation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa48e8d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UnityCanvas::CanvasCylinder*>(),
                        {"set_Rotation", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::UnityCanvas::CanvasCylinder.get_Bottom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::UnityCanvas::CanvasCylinder::*)()>(&::Oculus::Interaction::UnityCanvas::CanvasCylinder::get_Bottom)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa48e8e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UnityCanvas::CanvasCylinder*>(),
                        {"get_Bottom", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::UnityCanvas::CanvasCylinder.set_Bottom
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::UnityCanvas::CanvasCylinder::*)(float_t)>(&::Oculus::Interaction::UnityCanvas::CanvasCylinder::set_Bottom)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa48e8e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UnityCanvas::CanvasCylinder*>(),
                        {"set_Bottom", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::UnityCanvas::CanvasCylinder.get_Top
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::UnityCanvas::CanvasCylinder::*)()>(&::Oculus::Interaction::UnityCanvas::CanvasCylinder::get_Top)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa48e8f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UnityCanvas::CanvasCylinder*>(),
                        {"get_Top", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::UnityCanvas::CanvasCylinder.set_Top
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::UnityCanvas::CanvasCylinder::*)(float_t)>(&::Oculus::Interaction::UnityCanvas::CanvasCylinder::set_Top)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa48e8f8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UnityCanvas::CanvasCylinder*>(),
                        {"set_Top", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::UnityCanvas::CanvasCylinder.get_CylinderRelativeScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::UnityCanvas::CanvasCylinder::*)()>(&::Oculus::Interaction::UnityCanvas::CanvasCylinder::get_CylinderRelativeScale)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa48e900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UnityCanvas::CanvasCylinder*>(),
                        {"get_CylinderRelativeScale", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::UnityCanvas::CanvasCylinder.GetCylinderSegment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::UnityCanvas::CanvasCylinder::*)(::by_ref<::Oculus::Interaction::Surfaces::CylinderSegment>)>(&::Oculus::Interaction::UnityCanvas::CanvasCylinder::GetCylinderSegment)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0xa48e958;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UnityCanvas::CanvasCylinder*>(),
                        {"GetCylinderSegment", {}, {::i2c::type_of<::by_ref<::Oculus::Interaction::Surfaces::CylinderSegment>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::UnityCanvas::CanvasCylinder.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::UnityCanvas::CanvasCylinder::*)()>(&::Oculus::Interaction::UnityCanvas::CanvasCylinder::Start)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xa48e9bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::UnityCanvas::CanvasCylinder*>(),
                    {::i2c::class_of<::Oculus::Interaction::UnityCanvas::CanvasCylinder*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::UnityCanvas::CanvasCylinder.UpdateImposter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::UnityCanvas::CanvasCylinder::*)()>(&::Oculus::Interaction::UnityCanvas::CanvasCylinder::UpdateImposter)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa48ea54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::UnityCanvas::CanvasCylinder*>(),
                    {::i2c::class_of<::Oculus::Interaction::UnityCanvas::CanvasCylinder*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::UnityCanvas::CanvasCylinder.MeshInverseTransform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::UnityCanvas::CanvasCylinder::*)(::UnityEngine::Vector3)>(&::Oculus::Interaction::UnityCanvas::CanvasCylinder::MeshInverseTransform)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xa48f2c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::UnityCanvas::CanvasCylinder*>(),
                    {::i2c::class_of<::Oculus::Interaction::UnityCanvas::CanvasCylinder*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::UnityCanvas::CanvasCylinder.GenerateMesh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::UnityCanvas::CanvasCylinder::*)(::by_ref<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>, ::by_ref<::System::Collections::Generic::List_1<int32_t>*>, ::by_ref<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>)>(&::Oculus::Interaction::UnityCanvas::CanvasCylinder::GenerateMesh)> {
  constexpr static std::size_t size = 0x5bc;
  constexpr static std::size_t addrs = 0xa48f2fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::UnityCanvas::CanvasCylinder*>(),
                    {::i2c::class_of<::Oculus::Interaction::UnityCanvas::CanvasCylinder*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::UnityCanvas::CanvasCylinder.UpdateMeshPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::UnityCanvas::CanvasCylinder::*)()>(&::Oculus::Interaction::UnityCanvas::CanvasCylinder::UpdateMeshPosition)> {
  constexpr static std::size_t size = 0x5a8;
  constexpr static std::size_t addrs = 0xa48ec30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UnityCanvas::CanvasCylinder*>(),
                        {"UpdateMeshPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::UnityCanvas::CanvasCylinder.GetWorldSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::Oculus::Interaction::UnityCanvas::CanvasCylinder::*)()>(&::Oculus::Interaction::UnityCanvas::CanvasCylinder::GetWorldSize)> {
  constexpr static std::size_t size = 0x230;
  constexpr static std::size_t addrs = 0xa48f8b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UnityCanvas::CanvasCylinder*>(),
                        {"GetWorldSize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::UnityCanvas::CanvasCylinder.UpdateCurvedPlane
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::UnityCanvas::CanvasCylinder::*)()>(&::Oculus::Interaction::UnityCanvas::CanvasCylinder::UpdateCurvedPlane)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xa48f1d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UnityCanvas::CanvasCylinder*>(),
                        {"UpdateCurvedPlane", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::UnityCanvas::CanvasCylinder.InjectAllCanvasCylinder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::UnityCanvas::CanvasCylinder::*)(::Oculus::Interaction::UnityCanvas::CanvasRenderTexture*, ::UnityEngine::MeshFilter*, ::Oculus::Interaction::Cylinder*, ::Oculus::Interaction::CylinderOrientation)>(&::Oculus::Interaction::UnityCanvas::CanvasCylinder::InjectAllCanvasCylinder)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa48fdb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UnityCanvas::CanvasCylinder*>(),
                        {"InjectAllCanvasCylinder", {}, {::i2c::type_of<::Oculus::Interaction::UnityCanvas::CanvasRenderTexture*>(), ::i2c::type_of<::UnityEngine::MeshFilter*>(), ::i2c::type_of<::Oculus::Interaction::Cylinder*>(), ::i2c::type_of<::Oculus::Interaction::CylinderOrientation>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::UnityCanvas::CanvasCylinder.InjectCylinder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::UnityCanvas::CanvasCylinder::*)(::Oculus::Interaction::Cylinder*)>(&::Oculus::Interaction::UnityCanvas::CanvasCylinder::InjectCylinder)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa48fe40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UnityCanvas::CanvasCylinder*>(),
                        {"InjectCylinder", {}, {::i2c::type_of<::Oculus::Interaction::Cylinder*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::UnityCanvas::CanvasCylinder.InjectOrientation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::UnityCanvas::CanvasCylinder::*)(::Oculus::Interaction::CylinderOrientation)>(&::Oculus::Interaction::UnityCanvas::CanvasCylinder::InjectOrientation)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa48fe48;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UnityCanvas::CanvasCylinder*>(),
                        {"InjectOrientation", {}, {::i2c::type_of<::Oculus::Interaction::CylinderOrientation>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::UnityCanvas::CanvasCylinder._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::UnityCanvas::CanvasCylinder::*)()>(&::Oculus::Interaction::UnityCanvas::CanvasCylinder::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0xa48fe50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UnityCanvas::CanvasCylinder*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::UnityCanvas::CanvasCylinder._Start_b__28_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::UnityCanvas::CanvasCylinder::*)()>(&::Oculus::Interaction::UnityCanvas::CanvasCylinder::_Start_b__28_0)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa48fe78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UnityCanvas::CanvasCylinder*>(),
                        {"<Start>b__28_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::UnityCanvas::CanvasCylinder._GenerateMesh_g__GetClampedResolution_31_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2Int (::Oculus::Interaction::UnityCanvas::CanvasCylinder::*)(float_t, float_t, ::by_ref<::GlobalNamespace::CanvasCylinder___c__DisplayClass31_0>)>(&::Oculus::Interaction::UnityCanvas::CanvasCylinder::_GenerateMesh_g__GetClampedResolution_31_0)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0xa48fae8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UnityCanvas::CanvasCylinder*>(),
                        {"<GenerateMesh>g__GetClampedResolution|31_0", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::CanvasCylinder___c__DisplayClass31_0>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::UnityCanvas::CanvasCylinder._GenerateMesh_g__GetCurvedPoint_31_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::UnityCanvas::CanvasCylinder::*)(float_t, float_t, ::by_ref<::GlobalNamespace::CanvasCylinder___c__DisplayClass31_0>)>(&::Oculus::Interaction::UnityCanvas::CanvasCylinder::_GenerateMesh_g__GetCurvedPoint_31_1)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa48fcdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UnityCanvas::CanvasCylinder*>(),
                        {"<GenerateMesh>g__GetCurvedPoint|31_1", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::CanvasCylinder___c__DisplayClass31_0>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Oculus::Interaction::Cylinder>& Oculus::Interaction::UnityCanvas::CanvasCylinder::__cordl_internal_get__cylinder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cylinder;
}
constexpr ::UnityW<::Oculus::Interaction::Cylinder> const& Oculus::Interaction::UnityCanvas::CanvasCylinder::__cordl_internal_get__cylinder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cylinder;
}
constexpr void Oculus::Interaction::UnityCanvas::CanvasCylinder::__cordl_internal_set__cylinder(::UnityW<::Oculus::Interaction::Cylinder>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cylinder = value;
}
constexpr ::Oculus::Interaction::CylinderOrientation& Oculus::Interaction::UnityCanvas::CanvasCylinder::__cordl_internal_get__orientation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____orientation;
}
constexpr ::Oculus::Interaction::CylinderOrientation const& Oculus::Interaction::UnityCanvas::CanvasCylinder::__cordl_internal_get__orientation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____orientation;
}
constexpr void Oculus::Interaction::UnityCanvas::CanvasCylinder::__cordl_internal_set__orientation(::Oculus::Interaction::CylinderOrientation  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____orientation = value;
}
constexpr ::GlobalNamespace::CanvasCylinder_MeshGenerationSettings& Oculus::Interaction::UnityCanvas::CanvasCylinder::__cordl_internal_get__meshGeneration()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____meshGeneration;
}
constexpr ::GlobalNamespace::CanvasCylinder_MeshGenerationSettings const& Oculus::Interaction::UnityCanvas::CanvasCylinder::__cordl_internal_get__meshGeneration() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____meshGeneration;
}
constexpr void Oculus::Interaction::UnityCanvas::CanvasCylinder::__cordl_internal_set__meshGeneration(::GlobalNamespace::CanvasCylinder_MeshGenerationSettings  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____meshGeneration = value;
}
constexpr float_t& Oculus::Interaction::UnityCanvas::CanvasCylinder::__cordl_internal_get__ArcDegrees_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ArcDegrees_k__BackingField;
}
constexpr float_t const& Oculus::Interaction::UnityCanvas::CanvasCylinder::__cordl_internal_get__ArcDegrees_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____ArcDegrees_k__BackingField;
}
constexpr void Oculus::Interaction::UnityCanvas::CanvasCylinder::__cordl_internal_set__ArcDegrees_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____ArcDegrees_k__BackingField = value;
}
constexpr float_t& Oculus::Interaction::UnityCanvas::CanvasCylinder::__cordl_internal_get__Rotation_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Rotation_k__BackingField;
}
constexpr float_t const& Oculus::Interaction::UnityCanvas::CanvasCylinder::__cordl_internal_get__Rotation_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Rotation_k__BackingField;
}
constexpr void Oculus::Interaction::UnityCanvas::CanvasCylinder::__cordl_internal_set__Rotation_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Rotation_k__BackingField = value;
}
constexpr float_t& Oculus::Interaction::UnityCanvas::CanvasCylinder::__cordl_internal_get__Bottom_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Bottom_k__BackingField;
}
constexpr float_t const& Oculus::Interaction::UnityCanvas::CanvasCylinder::__cordl_internal_get__Bottom_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Bottom_k__BackingField;
}
constexpr void Oculus::Interaction::UnityCanvas::CanvasCylinder::__cordl_internal_set__Bottom_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Bottom_k__BackingField = value;
}
constexpr float_t& Oculus::Interaction::UnityCanvas::CanvasCylinder::__cordl_internal_get__Top_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Top_k__BackingField;
}
constexpr float_t const& Oculus::Interaction::UnityCanvas::CanvasCylinder::__cordl_internal_get__Top_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Top_k__BackingField;
}
constexpr void Oculus::Interaction::UnityCanvas::CanvasCylinder::__cordl_internal_set__Top_k__BackingField(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Top_k__BackingField = value;
}
inline float_t Oculus::Interaction::UnityCanvas::CanvasCylinder::get_Radius()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UnityCanvas::CanvasCylinder*>(),
                        {"get_Radius", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::UnityW<::Oculus::Interaction::Cylinder> Oculus::Interaction::UnityCanvas::CanvasCylinder::get_Cylinder()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UnityCanvas::CanvasCylinder*>(),
                        {"get_Cylinder", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Oculus::Interaction::Cylinder>>(this, ___internal_method);
}
inline float_t Oculus::Interaction::UnityCanvas::CanvasCylinder::get_ArcDegrees()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UnityCanvas::CanvasCylinder*>(),
                        {"get_ArcDegrees", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::UnityCanvas::CanvasCylinder::set_ArcDegrees(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UnityCanvas::CanvasCylinder*>(),
                        {"set_ArcDegrees", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Oculus::Interaction::UnityCanvas::CanvasCylinder::get_Rotation()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UnityCanvas::CanvasCylinder*>(),
                        {"get_Rotation", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::UnityCanvas::CanvasCylinder::set_Rotation(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UnityCanvas::CanvasCylinder*>(),
                        {"set_Rotation", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Oculus::Interaction::UnityCanvas::CanvasCylinder::get_Bottom()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UnityCanvas::CanvasCylinder*>(),
                        {"get_Bottom", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::UnityCanvas::CanvasCylinder::set_Bottom(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UnityCanvas::CanvasCylinder*>(),
                        {"set_Bottom", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Oculus::Interaction::UnityCanvas::CanvasCylinder::get_Top()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UnityCanvas::CanvasCylinder*>(),
                        {"get_Top", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::UnityCanvas::CanvasCylinder::set_Top(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UnityCanvas::CanvasCylinder*>(),
                        {"set_Top", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Oculus::Interaction::UnityCanvas::CanvasCylinder::get_CylinderRelativeScale()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UnityCanvas::CanvasCylinder*>(),
                        {"get_CylinderRelativeScale", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline bool Oculus::Interaction::UnityCanvas::CanvasCylinder::GetCylinderSegment(::by_ref<::Oculus::Interaction::Surfaces::CylinderSegment>  segment)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UnityCanvas::CanvasCylinder*>(),
                        {"GetCylinderSegment", {}, {::i2c::type_of<::by_ref<::Oculus::Interaction::Surfaces::CylinderSegment>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, segment);
}
inline void Oculus::Interaction::UnityCanvas::CanvasCylinder::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::UnityCanvas::CanvasCylinder*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::UnityCanvas::CanvasCylinder::UpdateImposter()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::UnityCanvas::CanvasCylinder*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::UnityCanvas::CanvasCylinder::MeshInverseTransform(::UnityEngine::Vector3  localPosition)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::UnityCanvas::CanvasCylinder*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, localPosition);
}
inline void Oculus::Interaction::UnityCanvas::CanvasCylinder::GenerateMesh(::by_ref<::System::Collections::Generic::List_1<::UnityEngine::Vector3>*>  verts, ::by_ref<::System::Collections::Generic::List_1<int32_t>*>  tris, ::by_ref<::System::Collections::Generic::List_1<::UnityEngine::Vector2>*>  uvs)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::UnityCanvas::CanvasCylinder*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, verts, tris, uvs);
}
inline void Oculus::Interaction::UnityCanvas::CanvasCylinder::UpdateMeshPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UnityCanvas::CanvasCylinder*>(),
                        {"UpdateMeshPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 Oculus::Interaction::UnityCanvas::CanvasCylinder::GetWorldSize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UnityCanvas::CanvasCylinder*>(),
                        {"GetWorldSize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline void Oculus::Interaction::UnityCanvas::CanvasCylinder::UpdateCurvedPlane()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UnityCanvas::CanvasCylinder*>(),
                        {"UpdateCurvedPlane", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::UnityCanvas::CanvasCylinder::InjectAllCanvasCylinder(::Oculus::Interaction::UnityCanvas::CanvasRenderTexture*  canvasRenderTexture, ::UnityEngine::MeshFilter*  meshFilter, ::Oculus::Interaction::Cylinder*  cylinder, ::Oculus::Interaction::CylinderOrientation  orientation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UnityCanvas::CanvasCylinder*>(),
                        {"InjectAllCanvasCylinder", {}, {::i2c::type_of<::Oculus::Interaction::UnityCanvas::CanvasRenderTexture*>(), ::i2c::type_of<::UnityEngine::MeshFilter*>(), ::i2c::type_of<::Oculus::Interaction::Cylinder*>(), ::i2c::type_of<::Oculus::Interaction::CylinderOrientation>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, canvasRenderTexture, meshFilter, cylinder, orientation);
}
inline void Oculus::Interaction::UnityCanvas::CanvasCylinder::InjectCylinder(::Oculus::Interaction::Cylinder*  cylinder)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UnityCanvas::CanvasCylinder*>(),
                        {"InjectCylinder", {}, {::i2c::type_of<::Oculus::Interaction::Cylinder*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cylinder);
}
inline void Oculus::Interaction::UnityCanvas::CanvasCylinder::InjectOrientation(::Oculus::Interaction::CylinderOrientation  orientation)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UnityCanvas::CanvasCylinder*>(),
                        {"InjectOrientation", {}, {::i2c::type_of<::Oculus::Interaction::CylinderOrientation>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, orientation);
}
inline void Oculus::Interaction::UnityCanvas::CanvasCylinder::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UnityCanvas::CanvasCylinder*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::UnityCanvas::CanvasCylinder::_Start_b__28_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UnityCanvas::CanvasCylinder*>(),
                        {"<Start>b__28_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector2Int Oculus::Interaction::UnityCanvas::CanvasCylinder::_GenerateMesh_g__GetClampedResolution_31_0(float_t  arcMax, float_t  axisMax, ::by_ref<::GlobalNamespace::CanvasCylinder___c__DisplayClass31_0>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UnityCanvas::CanvasCylinder*>(),
                        {"<GenerateMesh>g__GetClampedResolution|31_0", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::CanvasCylinder___c__DisplayClass31_0>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2Int>(this, ___internal_method, arcMax, axisMax, _cordl_fixed_empty_name_whitespace);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::UnityCanvas::CanvasCylinder::_GenerateMesh_g__GetCurvedPoint_31_1(float_t  u, float_t  v, ::by_ref<::GlobalNamespace::CanvasCylinder___c__DisplayClass31_0>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::UnityCanvas::CanvasCylinder*>(),
                        {"<GenerateMesh>g__GetCurvedPoint|31_1", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::CanvasCylinder___c__DisplayClass31_0>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, u, v, _cordl_fixed_empty_name_whitespace);
}
inline ::Oculus::Interaction::UnityCanvas::CanvasCylinder* Oculus::Interaction::UnityCanvas::CanvasCylinder::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::UnityCanvas::CanvasCylinder*>());
}
/// @brief Convert operator to "::Oculus::Interaction::ICurvedPlane"
constexpr  Oculus::Interaction::UnityCanvas::CanvasCylinder::operator ::Oculus::Interaction::ICurvedPlane*() noexcept {
return static_cast<::Oculus::Interaction::ICurvedPlane*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::ICurvedPlane"
constexpr ::Oculus::Interaction::ICurvedPlane* Oculus::Interaction::UnityCanvas::CanvasCylinder::i___Oculus__Interaction__ICurvedPlane() noexcept {
return static_cast<::Oculus::Interaction::ICurvedPlane*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Oculus::Interaction::Surfaces::ICylinderClipper"
constexpr  Oculus::Interaction::UnityCanvas::CanvasCylinder::operator ::Oculus::Interaction::Surfaces::ICylinderClipper*() noexcept {
return static_cast<::Oculus::Interaction::Surfaces::ICylinderClipper*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::Surfaces::ICylinderClipper"
constexpr ::Oculus::Interaction::Surfaces::ICylinderClipper* Oculus::Interaction::UnityCanvas::CanvasCylinder::i___Oculus__Interaction__Surfaces__ICylinderClipper() noexcept {
return static_cast<::Oculus::Interaction::Surfaces::ICylinderClipper*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::UnityCanvas::CanvasCylinder::CanvasCylinder()   {
}
