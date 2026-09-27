#pragma once
// IWYU pragma private; include "Oculus/Interaction/Grab/GrabSurfaces/BezierGrabSurface.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Pose_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Oculus/Interaction/Grab/GrabSurfaces/zzzz__BezierGrabSurface_def.hpp"
#include "Oculus/Interaction/Grab/GrabSurfaces/zzzz__BezierControlPoint_def.hpp"
#include "Oculus/Interaction/Grab/GrabSurfaces/zzzz__BezierGrabSurface_def.hpp"
#include "Oculus/Interaction/Grab/GrabSurfaces/zzzz__IGrabSurface_def.hpp"
#include "Oculus/Interaction/Grab/zzzz__GrabPoseScore_def.hpp"
#include "Oculus/Interaction/Grab/zzzz__PoseMeasureParameters_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Plane_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Ray_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface.get_ControlPoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::Oculus::Interaction::Grab::GrabSurfaces::BezierControlPoint>* (::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface::*)()>(&::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface::get_ControlPoints)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4e6b18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface*>(),
                        {"get_ControlPoints", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface::*)()>(&::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface::Reset)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xa4e6b20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface*>(),
                    {::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface::*)()>(&::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa4e6c08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface*>(),
                    {::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface.CalculateBestPoseAtSurface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Grab::GrabPoseScore (::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface::*)(::by_ref<::UnityEngine::Pose>, ::by_ref<::UnityEngine::Pose>, ::by_ref<::Oculus::Interaction::Grab::PoseMeasureParameters>, ::UnityEngine::Transform*)>(&::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface::CalculateBestPoseAtSurface)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xa4e6c0c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface*>(),
                        {"CalculateBestPoseAtSurface", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Grab::PoseMeasureParameters>>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface.CalculateBestPoseAtSurface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Grab::GrabPoseScore (::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface::*)(::by_ref<::UnityEngine::Pose>, ::by_ref<::UnityEngine::Pose>, ::by_ref<::UnityEngine::Pose>, ::by_ref<::Oculus::Interaction::Grab::PoseMeasureParameters>, ::UnityEngine::Transform*)>(&::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface::CalculateBestPoseAtSurface)> {
  constexpr static std::size_t size = 0x4a8;
  constexpr static std::size_t addrs = 0xa4e6cc8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface*>(),
                        {"CalculateBestPoseAtSurface", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Grab::PoseMeasureParameters>>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface.CalculateBestPoseAtSurface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface::*)(::UnityEngine::Ray, ::by_ref<::UnityEngine::Pose>, ::UnityEngine::Transform*)>(&::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface::CalculateBestPoseAtSurface)> {
  constexpr static std::size_t size = 0x728;
  constexpr static std::size_t addrs = 0xa4e7818;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface*>(),
                        {"CalculateBestPoseAtSurface", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface.GenerateRaycastPlane
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Plane (::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface::GenerateRaycastPlane)> {
  constexpr static std::size_t size = 0x3ec;
  constexpr static std::size_t addrs = 0xa4e7f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface*>(),
                        {"GenerateRaycastPlane", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface.ProgressForRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface::*)(::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion)>(&::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface::ProgressForRotation)> {
  constexpr static std::size_t size = 0x3c4;
  constexpr static std::size_t addrs = 0xa4e7454;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface*>(),
                        {"ProgressForRotation", {}, {::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface.NearestPointInTriangle
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::by_ref<float_t>)>(&::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface::NearestPointInTriangle)> {
  constexpr static std::size_t size = 0x26c;
  constexpr static std::size_t addrs = 0xa4e71e8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface*>(),
                        {"NearestPointInTriangle", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface.NearestPointToSegment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::by_ref<float_t>)>(&::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface::NearestPointToSegment)> {
  constexpr static std::size_t size = 0x2dc;
  constexpr static std::size_t addrs = 0xa4e83a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface*>(),
                        {"NearestPointToSegment", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface.CreateDuplicatedSurface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface* (::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface::*)(::UnityEngine::GameObject*)>(&::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface::CreateDuplicatedSurface)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xa4e8680;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface*>(),
                        {"CreateDuplicatedSurface", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface.CreateMirroredSurface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface* (::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface::*)(::UnityEngine::GameObject*)>(&::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface::CreateMirroredSurface)> {
  constexpr static std::size_t size = 0x3e0;
  constexpr static std::size_t addrs = 0xa4e8744;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface*>(),
                        {"CreateMirroredSurface", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface.MirrorPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface::*)(::by_ref<::UnityEngine::Pose>, ::UnityEngine::Transform*)>(&::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface::MirrorPose)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa4e8b70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface*>(),
                        {"MirrorPose", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface.EvaluateBezier
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t)>(&::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface::EvaluateBezier)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xa4e832c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface*>(),
                        {"EvaluateBezier", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface.InjectAllBezierSurface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface::*)(::System::Collections::Generic::List_1<::Oculus::Interaction::Grab::GrabSurfaces::BezierControlPoint>*, ::UnityEngine::Transform*)>(&::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface::InjectAllBezierSurface)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa4e8b84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface*>(),
                        {"InjectAllBezierSurface", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Oculus::Interaction::Grab::GrabSurfaces::BezierControlPoint>*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface.InjectControlPoints
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface::*)(::System::Collections::Generic::List_1<::Oculus::Interaction::Grab::GrabSurfaces::BezierControlPoint>*)>(&::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface::InjectControlPoints)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4e8bb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface*>(),
                        {"InjectControlPoints", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Oculus::Interaction::Grab::GrabSurfaces::BezierControlPoint>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface.InjectRelativeTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface::*)(::UnityEngine::Transform*)>(&::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface::InjectRelativeTo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4e8bbc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface*>(),
                        {"InjectRelativeTo", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface::*)()>(&::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xa4e8bc4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface.Oculus_Interaction_Grab_GrabSurfaces_IGrabSurface_CalculateBestPoseAtSurface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Grab::GrabPoseScore (::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface::*)(::by_ref<::UnityEngine::Pose>, ::by_ref<::UnityEngine::Pose>, ::by_ref<::Oculus::Interaction::Grab::PoseMeasureParameters>, ::UnityEngine::Transform*)>(&::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface::Oculus_Interaction_Grab_GrabSurfaces_IGrabSurface_CalculateBestPoseAtSurface)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa4e8c4c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface*>(),
                        {"Oculus.Interaction.Grab.GrabSurfaces.IGrabSurface.CalculateBestPoseAtSurface", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Grab::PoseMeasureParameters>>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface.Oculus_Interaction_Grab_GrabSurfaces_IGrabSurface_CalculateBestPoseAtSurface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Grab::GrabPoseScore (::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface::*)(::by_ref<::UnityEngine::Pose>, ::by_ref<::UnityEngine::Pose>, ::by_ref<::UnityEngine::Pose>, ::by_ref<::Oculus::Interaction::Grab::PoseMeasureParameters>, ::UnityEngine::Transform*)>(&::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface::Oculus_Interaction_Grab_GrabSurfaces_IGrabSurface_CalculateBestPoseAtSurface)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa4e8c50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface*>(),
                        {"Oculus.Interaction.Grab.GrabSurfaces.IGrabSurface.CalculateBestPoseAtSurface", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Grab::PoseMeasureParameters>>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface.Oculus_Interaction_Grab_GrabSurfaces_IGrabSurface_MirrorPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface::*)(::by_ref<::UnityEngine::Pose>, ::UnityEngine::Transform*)>(&::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface::Oculus_Interaction_Grab_GrabSurfaces_IGrabSurface_MirrorPose)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa4e8c54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface*>(),
                        {"Oculus.Interaction.Grab.GrabSurfaces.IGrabSurface.MirrorPose", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::Grab::GrabSurfaces::BezierControlPoint>*& Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface::__cordl_internal_get__controlPoints()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____controlPoints;
}
constexpr ::System::Collections::Generic::List_1<::Oculus::Interaction::Grab::GrabSurfaces::BezierControlPoint>* const& Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface::__cordl_internal_get__controlPoints() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____controlPoints;
}
constexpr void Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface::__cordl_internal_set__controlPoints(::System::Collections::Generic::List_1<::Oculus::Interaction::Grab::GrabSurfaces::BezierControlPoint>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____controlPoints = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface::__cordl_internal_get__relativeTo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____relativeTo;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface::__cordl_internal_get__relativeTo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____relativeTo;
}
constexpr void Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface::__cordl_internal_set__relativeTo(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____relativeTo = value;
}
inline ::System::Collections::Generic::List_1<::Oculus::Interaction::Grab::GrabSurfaces::BezierControlPoint>* Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface::get_ControlPoints()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface*>(),
                        {"get_ControlPoints", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::Oculus::Interaction::Grab::GrabSurfaces::BezierControlPoint>*>(this, ___internal_method);
}
inline void Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface::Reset()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Grab::GrabPoseScore Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface::CalculateBestPoseAtSurface(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  targetPose, ::by_ref<::UnityEngine::Pose>  bestPose, /* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::Grab::PoseMeasureParameters>  scoringModifier, ::UnityEngine::Transform*  relativeTo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface*>(),
                        {"CalculateBestPoseAtSurface", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Grab::PoseMeasureParameters>>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Grab::GrabPoseScore>(this, ___internal_method, targetPose, bestPose, scoringModifier, relativeTo);
}
inline ::Oculus::Interaction::Grab::GrabPoseScore Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface::CalculateBestPoseAtSurface(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  targetPose, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  offset, ::by_ref<::UnityEngine::Pose>  bestPose, /* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::Grab::PoseMeasureParameters>  scoringModifier, ::UnityEngine::Transform*  relativeTo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface*>(),
                        {"CalculateBestPoseAtSurface", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Grab::PoseMeasureParameters>>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Grab::GrabPoseScore>(this, ___internal_method, targetPose, offset, bestPose, scoringModifier, relativeTo);
}
inline bool Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface::CalculateBestPoseAtSurface(::UnityEngine::Ray  targetRay, ::by_ref<::UnityEngine::Pose>  bestPose, ::UnityEngine::Transform*  relativeTo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface*>(),
                        {"CalculateBestPoseAtSurface", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, targetRay, bestPose, relativeTo);
}
inline ::UnityEngine::Plane Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface::GenerateRaycastPlane(::UnityEngine::Vector3  p0, ::UnityEngine::Vector3  p1, ::UnityEngine::Vector3  p2, ::UnityEngine::Vector3  fallbackDir)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface*>(),
                        {"GenerateRaycastPlane", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Plane>(this, ___internal_method, p0, p1, p2, fallbackDir);
}
inline float_t Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface::ProgressForRotation(::UnityEngine::Quaternion  targetRotation, ::UnityEngine::Quaternion  from, ::UnityEngine::Quaternion  to)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface*>(),
                        {"ProgressForRotation", {}, {::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Quaternion>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, targetRotation, from, to);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface::NearestPointInTriangle(::UnityEngine::Vector3  point, ::UnityEngine::Vector3  p0, ::UnityEngine::Vector3  p1, ::UnityEngine::Vector3  p2, ::by_ref<float_t>  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface*>(),
                        {"NearestPointInTriangle", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, point, p0, p1, p2, t);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface::NearestPointToSegment(::UnityEngine::Vector3  point, ::UnityEngine::Vector3  start, ::UnityEngine::Vector3  end, ::by_ref<float_t>  progress)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface*>(),
                        {"NearestPointToSegment", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, point, start, end, progress);
}
inline ::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface* Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface::CreateDuplicatedSurface(::UnityEngine::GameObject*  gameObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface*>(),
                        {"CreateDuplicatedSurface", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface*>(this, ___internal_method, gameObject);
}
inline ::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface* Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface::CreateMirroredSurface(::UnityEngine::GameObject*  gameObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface*>(),
                        {"CreateMirroredSurface", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface*>(this, ___internal_method, gameObject);
}
inline ::UnityEngine::Pose Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface::MirrorPose(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  gripPose, ::UnityEngine::Transform*  relativeTo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface*>(),
                        {"MirrorPose", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method, gripPose, relativeTo);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface::EvaluateBezier(::UnityEngine::Vector3  start, ::UnityEngine::Vector3  middle, ::UnityEngine::Vector3  end, float_t  t)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface*>(),
                        {"EvaluateBezier", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, start, middle, end, t);
}
inline void Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface::InjectAllBezierSurface(::System::Collections::Generic::List_1<::Oculus::Interaction::Grab::GrabSurfaces::BezierControlPoint>*  controlPoints, ::UnityEngine::Transform*  relativeTo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface*>(),
                        {"InjectAllBezierSurface", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Oculus::Interaction::Grab::GrabSurfaces::BezierControlPoint>*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, controlPoints, relativeTo);
}
inline void Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface::InjectControlPoints(::System::Collections::Generic::List_1<::Oculus::Interaction::Grab::GrabSurfaces::BezierControlPoint>*  controlPoints)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface*>(),
                        {"InjectControlPoints", {}, {::i2c::type_of<::System::Collections::Generic::List_1<::Oculus::Interaction::Grab::GrabSurfaces::BezierControlPoint>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, controlPoints);
}
inline void Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface::InjectRelativeTo(::UnityEngine::Transform*  relativeTo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface*>(),
                        {"InjectRelativeTo", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, relativeTo);
}
inline void Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Grab::GrabPoseScore Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface::Oculus_Interaction_Grab_GrabSurfaces_IGrabSurface_CalculateBestPoseAtSurface(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  targetPose, ::by_ref<::UnityEngine::Pose>  bestPose, /* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::Grab::PoseMeasureParameters>  scoringModifier, ::UnityEngine::Transform*  relativeTo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface*>(),
                        {"Oculus.Interaction.Grab.GrabSurfaces.IGrabSurface.CalculateBestPoseAtSurface", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Grab::PoseMeasureParameters>>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Grab::GrabPoseScore>(this, ___internal_method, targetPose, bestPose, scoringModifier, relativeTo);
}
inline ::Oculus::Interaction::Grab::GrabPoseScore Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface::Oculus_Interaction_Grab_GrabSurfaces_IGrabSurface_CalculateBestPoseAtSurface(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  targetPose, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  offset, ::by_ref<::UnityEngine::Pose>  bestPose, /* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::Grab::PoseMeasureParameters>  scoringModifier, ::UnityEngine::Transform*  relativeTo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface*>(),
                        {"Oculus.Interaction.Grab.GrabSurfaces.IGrabSurface.CalculateBestPoseAtSurface", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Grab::PoseMeasureParameters>>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Grab::GrabPoseScore>(this, ___internal_method, targetPose, offset, bestPose, scoringModifier, relativeTo);
}
inline ::UnityEngine::Pose Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface::Oculus_Interaction_Grab_GrabSurfaces_IGrabSurface_MirrorPose(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  gripPose, ::UnityEngine::Transform*  relativeTo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface*>(),
                        {"Oculus.Interaction.Grab.GrabSurfaces.IGrabSurface.MirrorPose", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method, gripPose, relativeTo);
}
inline ::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface* Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface*>());
}
/// @brief Convert operator to "::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface"
constexpr  Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface::operator ::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface*() noexcept {
return static_cast<::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface"
constexpr ::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface* Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface::i___Oculus__Interaction__Grab__GrabSurfaces__IGrabSurface() noexcept {
return static_cast<::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface::BezierGrabSurface()   {
}
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface___c__DisplayClass8_0._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface___c__DisplayClass8_0::*)()>(&::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface___c__DisplayClass8_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4e71c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface___c__DisplayClass8_0*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface___c__DisplayClass8_0._CalculateBestPoseAtSurface_b__0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface___c__DisplayClass8_0::*)(::by_ref<::UnityEngine::Pose>, ::UnityEngine::Transform*)>(&::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface___c__DisplayClass8_0::_CalculateBestPoseAtSurface_b__0)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa4e8c68;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface___c__DisplayClass8_0*>(),
                        {"<CalculateBestPoseAtSurface>b__0", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface___c__DisplayClass8_0._CalculateBestPoseAtSurface_b__1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface___c__DisplayClass8_0::*)(::by_ref<::UnityEngine::Pose>, ::UnityEngine::Transform*)>(&::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface___c__DisplayClass8_0::_CalculateBestPoseAtSurface_b__1)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0xa4e8d04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface___c__DisplayClass8_0*>(),
                        {"<CalculateBestPoseAtSurface>b__1", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Pose& Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface___c__DisplayClass8_0::__cordl_internal_get_start()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___start;
}
constexpr ::UnityEngine::Pose const& Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface___c__DisplayClass8_0::__cordl_internal_get_start() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___start;
}
constexpr void Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface___c__DisplayClass8_0::__cordl_internal_set_start(::UnityEngine::Pose  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___start = value;
}
constexpr ::UnityEngine::Vector3& Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface___c__DisplayClass8_0::__cordl_internal_get_tangent()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tangent;
}
constexpr ::UnityEngine::Vector3 const& Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface___c__DisplayClass8_0::__cordl_internal_get_tangent() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tangent;
}
constexpr void Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface___c__DisplayClass8_0::__cordl_internal_set_tangent(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tangent = value;
}
constexpr ::UnityEngine::Pose& Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface___c__DisplayClass8_0::__cordl_internal_get_end()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___end;
}
constexpr ::UnityEngine::Pose const& Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface___c__DisplayClass8_0::__cordl_internal_get_end() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___end;
}
constexpr void Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface___c__DisplayClass8_0::__cordl_internal_set_end(::UnityEngine::Pose  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___end = value;
}
constexpr float_t& Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface___c__DisplayClass8_0::__cordl_internal_get_positionT()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___positionT;
}
constexpr float_t const& Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface___c__DisplayClass8_0::__cordl_internal_get_positionT() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___positionT;
}
constexpr void Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface___c__DisplayClass8_0::__cordl_internal_set_positionT(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___positionT = value;
}
constexpr float_t& Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface___c__DisplayClass8_0::__cordl_internal_get_rotationT()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationT;
}
constexpr float_t const& Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface___c__DisplayClass8_0::__cordl_internal_get_rotationT() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rotationT;
}
constexpr void Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface___c__DisplayClass8_0::__cordl_internal_set_rotationT(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rotationT = value;
}
inline void Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface___c__DisplayClass8_0::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface___c__DisplayClass8_0*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Pose Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface___c__DisplayClass8_0::_CalculateBestPoseAtSurface_b__0(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  target, ::UnityEngine::Transform*  relativeTo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface___c__DisplayClass8_0*>(),
                        {"<CalculateBestPoseAtSurface>b__0", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method, target, relativeTo);
}
inline ::UnityEngine::Pose Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface___c__DisplayClass8_0::_CalculateBestPoseAtSurface_b__1(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  target, ::UnityEngine::Transform*  relativeTo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface___c__DisplayClass8_0*>(),
                        {"<CalculateBestPoseAtSurface>b__1", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method, target, relativeTo);
}
inline ::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface___c__DisplayClass8_0* Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface___c__DisplayClass8_0::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface___c__DisplayClass8_0*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Grab::GrabSurfaces::BezierGrabSurface___c__DisplayClass8_0::BezierGrabSurface___c__DisplayClass8_0()   {
}
