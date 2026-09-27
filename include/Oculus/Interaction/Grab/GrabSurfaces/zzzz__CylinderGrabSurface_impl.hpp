#pragma once
// IWYU pragma private; include "Oculus/Interaction/Grab/GrabSurfaces/CylinderGrabSurface.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/Grab/GrabSurfaces/zzzz__CylinderGrabSurface_def.hpp"
#include "Oculus/Interaction/Grab/GrabSurfaces/zzzz__CylinderSurfaceData_def.hpp"
#include "Oculus/Interaction/Grab/GrabSurfaces/zzzz__IGrabSurface_def.hpp"
#include "Oculus/Interaction/Grab/zzzz__GrabPoseScore_def.hpp"
#include "Oculus/Interaction/Grab/zzzz__PoseMeasureParameters_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Ray_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface.get_RelativePose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::*)()>(&::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::get_RelativePose)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xa4eb74c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface*>(),
                        {"get_RelativePose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface.GetReferencePose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::*)(::UnityEngine::Transform*)>(&::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::GetReferencePose)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xa4eb79c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface*>(),
                        {"GetReferencePose", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface.get_ArcOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::*)()>(&::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::get_ArcOffset)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa4eb814;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface*>(),
                        {"get_ArcOffset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface.set_ArcOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::*)(float_t)>(&::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::set_ArcOffset)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xa4eb82c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface*>(),
                        {"set_ArcOffset", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface.get_ArcLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::*)()>(&::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::get_ArcLength)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa4eb8b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface*>(),
                        {"get_ArcLength", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface.set_ArcLength
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::*)(float_t)>(&::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::set_ArcLength)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xa4eb8c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface*>(),
                        {"set_ArcLength", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface.get_LocalPerpendicularDir
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::*)()>(&::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::get_LocalPerpendicularDir)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0xa4eb94c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface*>(),
                        {"get_LocalPerpendicularDir", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface.get_LocalDirection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::*)()>(&::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::get_LocalDirection)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0xa4ebb20;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface*>(),
                        {"get_LocalDirection", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface.GetPerpendicularDir
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::*)(::UnityEngine::Transform*)>(&::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::GetPerpendicularDir)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xa4ebc54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface*>(),
                        {"GetPerpendicularDir", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface.GetStartArcDir
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::*)(::UnityEngine::Transform*)>(&::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::GetStartArcDir)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xa4ebc78;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface*>(),
                        {"GetStartArcDir", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface.GetEndArcDir
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::*)(::UnityEngine::Transform*)>(&::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::GetEndArcDir)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0xa4ebd24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface*>(),
                        {"GetEndArcDir", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface.GetStartPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::*)(::UnityEngine::Transform*)>(&::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::GetStartPoint)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa4ebe80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface*>(),
                        {"GetStartPoint", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface.SetStartPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::*)(::UnityEngine::Vector3, ::UnityEngine::Transform*)>(&::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::SetStartPoint)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa4ebeac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface*>(),
                        {"SetStartPoint", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface.GetEndPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::*)(::UnityEngine::Transform*)>(&::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::GetEndPoint)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa4ebedc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface*>(),
                        {"GetEndPoint", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface.SetEndPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::*)(::UnityEngine::Vector3, ::UnityEngine::Transform*)>(&::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::SetEndPoint)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa4ebf08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface*>(),
                        {"SetEndPoint", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface.GetRadius
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::*)(::UnityEngine::Transform*)>(&::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::GetRadius)> {
  constexpr static std::size_t size = 0x1b8;
  constexpr static std::size_t addrs = 0xa4ebf38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface*>(),
                        {"GetRadius", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface.GetDirection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::*)(::UnityEngine::Transform*)>(&::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::GetDirection)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0xa4ec0f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface*>(),
                        {"GetDirection", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface.GetHeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::*)(::UnityEngine::Transform*)>(&::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::GetHeight)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xa4ec114;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface*>(),
                        {"GetHeight", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface.GetRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::*)(::UnityEngine::Transform*)>(&::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::GetRotation)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0xa4ec1cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface*>(),
                        {"GetRotation", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::*)()>(&::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::Reset)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xa4ec330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface*>(),
                    {::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::*)()>(&::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa4ec418;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface*>(),
                    {::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface.MirrorPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::*)(::by_ref<::UnityEngine::Pose>, ::UnityEngine::Transform*)>(&::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::MirrorPose)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0xa4ec41c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface*>(),
                        {"MirrorPose", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface.PointAltitude
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::*)(::UnityEngine::Vector3, ::UnityEngine::Transform*)>(&::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::PointAltitude)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0xa4ec5d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface*>(),
                        {"PointAltitude", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface.CalculateBestPoseAtSurface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Grab::GrabPoseScore (::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::*)(::by_ref<::UnityEngine::Pose>, ::by_ref<::UnityEngine::Pose>, ::by_ref<::Oculus::Interaction::Grab::PoseMeasureParameters>, ::UnityEngine::Transform*)>(&::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::CalculateBestPoseAtSurface)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xa4ec71c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface*>(),
                        {"CalculateBestPoseAtSurface", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Grab::PoseMeasureParameters>>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface.CalculateBestPoseAtSurface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Grab::GrabPoseScore (::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::*)(::by_ref<::UnityEngine::Pose>, ::by_ref<::UnityEngine::Pose>, ::by_ref<::UnityEngine::Pose>, ::by_ref<::Oculus::Interaction::Grab::PoseMeasureParameters>, ::UnityEngine::Transform*)>(&::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::CalculateBestPoseAtSurface)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xa4ec7d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface*>(),
                        {"CalculateBestPoseAtSurface", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Grab::PoseMeasureParameters>>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface.CreateMirroredSurface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface* (::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::*)(::UnityEngine::GameObject*)>(&::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::CreateMirroredSurface)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xa4ec8c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface*>(),
                        {"CreateMirroredSurface", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface.CreateDuplicatedSurface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface* (::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::*)(::UnityEngine::GameObject*)>(&::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::CreateDuplicatedSurface)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0xa4ec944;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface*>(),
                        {"CreateDuplicatedSurface", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface.NearestPointInSurface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::*)(::UnityEngine::Vector3, ::UnityEngine::Transform*)>(&::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::NearestPointInSurface)> {
  constexpr static std::size_t size = 0x4c4;
  constexpr static std::size_t addrs = 0xa4eca50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface*>(),
                        {"NearestPointInSurface", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface.CalculateBestPoseAtSurface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::*)(::UnityEngine::Ray, ::by_ref<::UnityEngine::Pose>, ::UnityEngine::Transform*)>(&::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::CalculateBestPoseAtSurface)> {
  constexpr static std::size_t size = 0x34c;
  constexpr static std::size_t addrs = 0xa4ecf14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface*>(),
                        {"CalculateBestPoseAtSurface", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface.MinimalRotationPoseAtSurface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::*)(::by_ref<::UnityEngine::Pose>, ::UnityEngine::Transform*)>(&::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::MinimalRotationPoseAtSurface)> {
  constexpr static std::size_t size = 0x45c;
  constexpr static std::size_t addrs = 0xa4ed384;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface*>(),
                        {"MinimalRotationPoseAtSurface", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface.MinimalTranslationPoseAtSurface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::*)(::by_ref<::UnityEngine::Pose>, ::UnityEngine::Transform*)>(&::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::MinimalTranslationPoseAtSurface)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0xa4ed260;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface*>(),
                        {"MinimalTranslationPoseAtSurface", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface.CalculateRotationOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::*)(::UnityEngine::Vector3, ::UnityEngine::Transform*)>(&::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::CalculateRotationOffset)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0xa4ed7e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface*>(),
                        {"CalculateRotationOffset", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface.InjectAllCylinderSurface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::*)(::Oculus::Interaction::Grab::GrabSurfaces::CylinderSurfaceData*, ::UnityEngine::Transform*)>(&::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::InjectAllCylinderSurface)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa4ed968;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface*>(),
                        {"InjectAllCylinderSurface", {}, {::i2c::type_of<::Oculus::Interaction::Grab::GrabSurfaces::CylinderSurfaceData*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface.InjectData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::*)(::Oculus::Interaction::Grab::GrabSurfaces::CylinderSurfaceData*)>(&::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::InjectData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4ed998;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface*>(),
                        {"InjectData", {}, {::i2c::type_of<::Oculus::Interaction::Grab::GrabSurfaces::CylinderSurfaceData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface.InjectRelativeTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::*)(::UnityEngine::Transform*)>(&::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::InjectRelativeTo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4ed9a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface*>(),
                        {"InjectRelativeTo", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::*)()>(&::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xa4ed9a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface.Oculus_Interaction_Grab_GrabSurfaces_IGrabSurface_CalculateBestPoseAtSurface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Grab::GrabPoseScore (::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::*)(::by_ref<::UnityEngine::Pose>, ::by_ref<::UnityEngine::Pose>, ::by_ref<::Oculus::Interaction::Grab::PoseMeasureParameters>, ::UnityEngine::Transform*)>(&::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::Oculus_Interaction_Grab_GrabSurfaces_IGrabSurface_CalculateBestPoseAtSurface)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa4eda34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface*>(),
                        {"Oculus.Interaction.Grab.GrabSurfaces.IGrabSurface.CalculateBestPoseAtSurface", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Grab::PoseMeasureParameters>>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface.Oculus_Interaction_Grab_GrabSurfaces_IGrabSurface_CalculateBestPoseAtSurface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Grab::GrabPoseScore (::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::*)(::by_ref<::UnityEngine::Pose>, ::by_ref<::UnityEngine::Pose>, ::by_ref<::UnityEngine::Pose>, ::by_ref<::Oculus::Interaction::Grab::PoseMeasureParameters>, ::UnityEngine::Transform*)>(&::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::Oculus_Interaction_Grab_GrabSurfaces_IGrabSurface_CalculateBestPoseAtSurface)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa4eda38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface*>(),
                        {"Oculus.Interaction.Grab.GrabSurfaces.IGrabSurface.CalculateBestPoseAtSurface", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Grab::PoseMeasureParameters>>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface.Oculus_Interaction_Grab_GrabSurfaces_IGrabSurface_MirrorPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::*)(::by_ref<::UnityEngine::Pose>, ::UnityEngine::Transform*)>(&::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::Oculus_Interaction_Grab_GrabSurfaces_IGrabSurface_MirrorPose)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa4eda3c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface*>(),
                        {"Oculus.Interaction.Grab.GrabSurfaces.IGrabSurface.MirrorPose", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Oculus::Interaction::Grab::GrabSurfaces::CylinderSurfaceData*& Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::__cordl_internal_get__data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____data;
}
constexpr ::Oculus::Interaction::Grab::GrabSurfaces::CylinderSurfaceData* const& Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::__cordl_internal_get__data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____data;
}
constexpr void Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::__cordl_internal_set__data(::Oculus::Interaction::Grab::GrabSurfaces::CylinderSurfaceData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____data = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::__cordl_internal_get__relativeTo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____relativeTo;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::__cordl_internal_get__relativeTo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____relativeTo;
}
constexpr void Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::__cordl_internal_set__relativeTo(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____relativeTo = value;
}
inline ::UnityEngine::Pose Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::get_RelativePose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface*>(),
                        {"get_RelativePose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method);
}
inline ::UnityEngine::Pose Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::GetReferencePose(::UnityEngine::Transform*  relativeTo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface*>(),
                        {"GetReferencePose", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method, relativeTo);
}
inline float_t Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::get_ArcOffset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface*>(),
                        {"get_ArcOffset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::set_ArcOffset(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface*>(),
                        {"set_ArcOffset", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::get_ArcLength()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface*>(),
                        {"get_ArcLength", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::set_ArcLength(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface*>(),
                        {"set_ArcLength", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::get_LocalPerpendicularDir()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface*>(),
                        {"get_LocalPerpendicularDir", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::get_LocalDirection()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface*>(),
                        {"get_LocalDirection", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::GetPerpendicularDir(::UnityEngine::Transform*  relativeTo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface*>(),
                        {"GetPerpendicularDir", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, relativeTo);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::GetStartArcDir(::UnityEngine::Transform*  relativeTo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface*>(),
                        {"GetStartArcDir", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, relativeTo);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::GetEndArcDir(::UnityEngine::Transform*  relativeTo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface*>(),
                        {"GetEndArcDir", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, relativeTo);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::GetStartPoint(::UnityEngine::Transform*  relativeTo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface*>(),
                        {"GetStartPoint", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, relativeTo);
}
inline void Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::SetStartPoint(::UnityEngine::Vector3  point, ::UnityEngine::Transform*  relativeTo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface*>(),
                        {"SetStartPoint", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, point, relativeTo);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::GetEndPoint(::UnityEngine::Transform*  relativeTo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface*>(),
                        {"GetEndPoint", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, relativeTo);
}
inline void Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::SetEndPoint(::UnityEngine::Vector3  point, ::UnityEngine::Transform*  relativeTo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface*>(),
                        {"SetEndPoint", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, point, relativeTo);
}
inline float_t Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::GetRadius(::UnityEngine::Transform*  relativeTo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface*>(),
                        {"GetRadius", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, relativeTo);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::GetDirection(::UnityEngine::Transform*  relativeTo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface*>(),
                        {"GetDirection", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, relativeTo);
}
inline float_t Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::GetHeight(::UnityEngine::Transform*  relativeTo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface*>(),
                        {"GetHeight", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, relativeTo);
}
inline ::UnityEngine::Quaternion Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::GetRotation(::UnityEngine::Transform*  relativeTo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface*>(),
                        {"GetRotation", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(this, ___internal_method, relativeTo);
}
inline void Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::Reset()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Pose Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::MirrorPose(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  pose, ::UnityEngine::Transform*  relativeTo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface*>(),
                        {"MirrorPose", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method, pose, relativeTo);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::PointAltitude(::UnityEngine::Vector3  point, ::UnityEngine::Transform*  relativeTo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface*>(),
                        {"PointAltitude", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, point, relativeTo);
}
inline ::Oculus::Interaction::Grab::GrabPoseScore Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::CalculateBestPoseAtSurface(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  targetPose, ::by_ref<::UnityEngine::Pose>  bestPose, /* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::Grab::PoseMeasureParameters>  scoringModifier, ::UnityEngine::Transform*  relativeTo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface*>(),
                        {"CalculateBestPoseAtSurface", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Grab::PoseMeasureParameters>>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Grab::GrabPoseScore>(this, ___internal_method, targetPose, bestPose, scoringModifier, relativeTo);
}
inline ::Oculus::Interaction::Grab::GrabPoseScore Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::CalculateBestPoseAtSurface(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  targetPose, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  offset, ::by_ref<::UnityEngine::Pose>  bestPose, /* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::Grab::PoseMeasureParameters>  scoringModifier, ::UnityEngine::Transform*  relativeTo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface*>(),
                        {"CalculateBestPoseAtSurface", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Grab::PoseMeasureParameters>>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Grab::GrabPoseScore>(this, ___internal_method, targetPose, offset, bestPose, scoringModifier, relativeTo);
}
inline ::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface* Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::CreateMirroredSurface(::UnityEngine::GameObject*  gameObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface*>(),
                        {"CreateMirroredSurface", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface*>(this, ___internal_method, gameObject);
}
inline ::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface* Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::CreateDuplicatedSurface(::UnityEngine::GameObject*  gameObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface*>(),
                        {"CreateDuplicatedSurface", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface*>(this, ___internal_method, gameObject);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::NearestPointInSurface(::UnityEngine::Vector3  targetPosition, ::UnityEngine::Transform*  relativeTo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface*>(),
                        {"NearestPointInSurface", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, targetPosition, relativeTo);
}
inline bool Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::CalculateBestPoseAtSurface(::UnityEngine::Ray  targetRay, ::by_ref<::UnityEngine::Pose>  bestPose, ::UnityEngine::Transform*  relativeTo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface*>(),
                        {"CalculateBestPoseAtSurface", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, targetRay, bestPose, relativeTo);
}
inline ::UnityEngine::Pose Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::MinimalRotationPoseAtSurface(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  userPose, ::UnityEngine::Transform*  relativeTo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface*>(),
                        {"MinimalRotationPoseAtSurface", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method, userPose, relativeTo);
}
inline ::UnityEngine::Pose Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::MinimalTranslationPoseAtSurface(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  userPose, ::UnityEngine::Transform*  relativeTo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface*>(),
                        {"MinimalTranslationPoseAtSurface", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method, userPose, relativeTo);
}
inline ::UnityEngine::Quaternion Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::CalculateRotationOffset(::UnityEngine::Vector3  surfacePoint, ::UnityEngine::Transform*  relativeTo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface*>(),
                        {"CalculateRotationOffset", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(this, ___internal_method, surfacePoint, relativeTo);
}
inline void Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::InjectAllCylinderSurface(::Oculus::Interaction::Grab::GrabSurfaces::CylinderSurfaceData*  data, ::UnityEngine::Transform*  relativeTo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface*>(),
                        {"InjectAllCylinderSurface", {}, {::i2c::type_of<::Oculus::Interaction::Grab::GrabSurfaces::CylinderSurfaceData*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, relativeTo);
}
inline void Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::InjectData(::Oculus::Interaction::Grab::GrabSurfaces::CylinderSurfaceData*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface*>(),
                        {"InjectData", {}, {::i2c::type_of<::Oculus::Interaction::Grab::GrabSurfaces::CylinderSurfaceData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::InjectRelativeTo(::UnityEngine::Transform*  relativeTo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface*>(),
                        {"InjectRelativeTo", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, relativeTo);
}
inline void Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Grab::GrabPoseScore Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::Oculus_Interaction_Grab_GrabSurfaces_IGrabSurface_CalculateBestPoseAtSurface(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  targetPose, ::by_ref<::UnityEngine::Pose>  bestPose, /* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::Grab::PoseMeasureParameters>  scoringModifier, ::UnityEngine::Transform*  relativeTo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface*>(),
                        {"Oculus.Interaction.Grab.GrabSurfaces.IGrabSurface.CalculateBestPoseAtSurface", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Grab::PoseMeasureParameters>>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Grab::GrabPoseScore>(this, ___internal_method, targetPose, bestPose, scoringModifier, relativeTo);
}
inline ::Oculus::Interaction::Grab::GrabPoseScore Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::Oculus_Interaction_Grab_GrabSurfaces_IGrabSurface_CalculateBestPoseAtSurface(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  targetPose, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  offset, ::by_ref<::UnityEngine::Pose>  bestPose, /* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::Grab::PoseMeasureParameters>  scoringModifier, ::UnityEngine::Transform*  relativeTo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface*>(),
                        {"Oculus.Interaction.Grab.GrabSurfaces.IGrabSurface.CalculateBestPoseAtSurface", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Grab::PoseMeasureParameters>>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Grab::GrabPoseScore>(this, ___internal_method, targetPose, offset, bestPose, scoringModifier, relativeTo);
}
inline ::UnityEngine::Pose Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::Oculus_Interaction_Grab_GrabSurfaces_IGrabSurface_MirrorPose(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  gripPose, ::UnityEngine::Transform*  relativeTo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface*>(),
                        {"Oculus.Interaction.Grab.GrabSurfaces.IGrabSurface.MirrorPose", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method, gripPose, relativeTo);
}
inline ::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface* Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface*>());
}
/// @brief Convert operator to "::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface"
constexpr  Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::operator ::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface*() noexcept {
return static_cast<::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface"
constexpr ::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface* Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::i___Oculus__Interaction__Grab__GrabSurfaces__IGrabSurface() noexcept {
return static_cast<::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Grab::GrabSurfaces::CylinderGrabSurface::CylinderGrabSurface()   {
}
