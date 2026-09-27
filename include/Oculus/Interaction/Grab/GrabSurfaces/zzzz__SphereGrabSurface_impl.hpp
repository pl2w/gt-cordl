#pragma once
// IWYU pragma private; include "Oculus/Interaction/Grab/GrabSurfaces/SphereGrabSurface.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/Grab/GrabSurfaces/zzzz__SphereGrabSurface_def.hpp"
#include "Oculus/Interaction/Grab/GrabSurfaces/zzzz__IGrabSurface_def.hpp"
#include "Oculus/Interaction/Grab/GrabSurfaces/zzzz__SphereGrabSurfaceData_def.hpp"
#include "Oculus/Interaction/Grab/zzzz__GrabPoseScore_def.hpp"
#include "Oculus/Interaction/Grab/zzzz__PoseMeasureParameters_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Ray_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface.get_RelativePose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface::*)()>(&::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface::get_RelativePose)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xa4edbb8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface*>(),
                        {"get_RelativePose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface.GetReferencePose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface::*)(::UnityEngine::Transform*)>(&::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface::GetReferencePose)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xa4edc08;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface*>(),
                        {"GetReferencePose", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface.GetCentre
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface::*)(::UnityEngine::Transform*)>(&::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface::GetCentre)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa4edc80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface*>(),
                        {"GetCentre", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface.SetCentre
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface::*)(::UnityEngine::Vector3, ::UnityEngine::Transform*)>(&::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface::SetCentre)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa4edcac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface*>(),
                        {"SetCentre", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface.GetRadius
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface::*)(::UnityEngine::Transform*)>(&::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface::GetRadius)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xa4edcdc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface*>(),
                        {"GetRadius", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface.GetDirection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface::*)(::UnityEngine::Transform*)>(&::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface::GetDirection)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0xa4edd9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface*>(),
                        {"GetDirection", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface::*)()>(&::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface::Reset)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xa4edeb4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface*>(),
                    {::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface::*)()>(&::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa4edf9c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface*>(),
                    {::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface.MirrorPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface::*)(::by_ref<::UnityEngine::Pose>, ::UnityEngine::Transform*)>(&::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface::MirrorPose)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0xa4edfa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface*>(),
                        {"MirrorPose", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface.CalculateBestPoseAtSurface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface::*)(::UnityEngine::Ray, ::by_ref<::UnityEngine::Pose>, ::UnityEngine::Transform*)>(&::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface::CalculateBestPoseAtSurface)> {
  constexpr static std::size_t size = 0x334;
  constexpr static std::size_t addrs = 0xa4ee178;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface*>(),
                        {"CalculateBestPoseAtSurface", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface.CalculateBestPoseAtSurface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Grab::GrabPoseScore (::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface::*)(::by_ref<::UnityEngine::Pose>, ::by_ref<::UnityEngine::Pose>, ::by_ref<::Oculus::Interaction::Grab::PoseMeasureParameters>, ::UnityEngine::Transform*)>(&::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface::CalculateBestPoseAtSurface)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xa4ee6d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface*>(),
                        {"CalculateBestPoseAtSurface", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Grab::PoseMeasureParameters>>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface.CalculateBestPoseAtSurface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Grab::GrabPoseScore (::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface::*)(::by_ref<::UnityEngine::Pose>, ::by_ref<::UnityEngine::Pose>, ::by_ref<::UnityEngine::Pose>, ::by_ref<::Oculus::Interaction::Grab::PoseMeasureParameters>, ::UnityEngine::Transform*)>(&::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface::CalculateBestPoseAtSurface)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xa4ee790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface*>(),
                        {"CalculateBestPoseAtSurface", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Grab::PoseMeasureParameters>>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface.CreateMirroredSurface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface* (::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface::*)(::UnityEngine::GameObject*)>(&::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface::CreateMirroredSurface)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xa4ee878;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface*>(),
                        {"CreateMirroredSurface", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface.CreateDuplicatedSurface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface* (::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface::*)(::UnityEngine::GameObject*)>(&::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface::CreateDuplicatedSurface)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa4ee8fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface*>(),
                        {"CreateDuplicatedSurface", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface.NearestPointInSurface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface::*)(::UnityEngine::Vector3, ::UnityEngine::Transform*)>(&::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface::NearestPointInSurface)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0xa4ee4ac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface*>(),
                        {"NearestPointInSurface", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface.MinimalRotationPoseAtSurface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface::*)(::by_ref<::UnityEngine::Pose>, ::UnityEngine::Transform*)>(&::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface::MinimalRotationPoseAtSurface)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0xa4ee96c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface*>(),
                        {"MinimalRotationPoseAtSurface", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface.MinimalTranslationPoseAtSurface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface::*)(::by_ref<::UnityEngine::Pose>, ::UnityEngine::Transform*)>(&::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface::MinimalTranslationPoseAtSurface)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xa4ee5d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface*>(),
                        {"MinimalTranslationPoseAtSurface", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface.RotationAtPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::UnityEngine::Transform*)>(&::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface::RotationAtPoint)> {
  constexpr static std::size_t size = 0x528;
  constexpr static std::size_t addrs = 0xa4eeb70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface*>(),
                        {"RotationAtPoint", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface.InjectAllSphereSurface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface::*)(::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurfaceData*, ::UnityEngine::Transform*)>(&::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface::InjectAllSphereSurface)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa4ef098;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface*>(),
                        {"InjectAllSphereSurface", {}, {::i2c::type_of<::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurfaceData*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface.InjectData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface::*)(::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurfaceData*)>(&::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface::InjectData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4ef0c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface*>(),
                        {"InjectData", {}, {::i2c::type_of<::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurfaceData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface.InjectRelativeTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface::*)(::UnityEngine::Transform*)>(&::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface::InjectRelativeTo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4ef0d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface*>(),
                        {"InjectRelativeTo", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface::*)()>(&::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface::_ctor)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xa4ef0d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface.Oculus_Interaction_Grab_GrabSurfaces_IGrabSurface_CalculateBestPoseAtSurface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Grab::GrabPoseScore (::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface::*)(::by_ref<::UnityEngine::Pose>, ::by_ref<::UnityEngine::Pose>, ::by_ref<::Oculus::Interaction::Grab::PoseMeasureParameters>, ::UnityEngine::Transform*)>(&::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface::Oculus_Interaction_Grab_GrabSurfaces_IGrabSurface_CalculateBestPoseAtSurface)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa4ef140;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface*>(),
                        {"Oculus.Interaction.Grab.GrabSurfaces.IGrabSurface.CalculateBestPoseAtSurface", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Grab::PoseMeasureParameters>>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface.Oculus_Interaction_Grab_GrabSurfaces_IGrabSurface_CalculateBestPoseAtSurface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Grab::GrabPoseScore (::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface::*)(::by_ref<::UnityEngine::Pose>, ::by_ref<::UnityEngine::Pose>, ::by_ref<::UnityEngine::Pose>, ::by_ref<::Oculus::Interaction::Grab::PoseMeasureParameters>, ::UnityEngine::Transform*)>(&::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface::Oculus_Interaction_Grab_GrabSurfaces_IGrabSurface_CalculateBestPoseAtSurface)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa4ef144;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface*>(),
                        {"Oculus.Interaction.Grab.GrabSurfaces.IGrabSurface.CalculateBestPoseAtSurface", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Grab::PoseMeasureParameters>>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface.Oculus_Interaction_Grab_GrabSurfaces_IGrabSurface_MirrorPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface::*)(::by_ref<::UnityEngine::Pose>, ::UnityEngine::Transform*)>(&::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface::Oculus_Interaction_Grab_GrabSurfaces_IGrabSurface_MirrorPose)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa4ef148;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface*>(),
                        {"Oculus.Interaction.Grab.GrabSurfaces.IGrabSurface.MirrorPose", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurfaceData*& Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface::__cordl_internal_get__data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____data;
}
constexpr ::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurfaceData* const& Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface::__cordl_internal_get__data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____data;
}
constexpr void Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface::__cordl_internal_set__data(::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurfaceData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____data = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface::__cordl_internal_get__relativeTo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____relativeTo;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface::__cordl_internal_get__relativeTo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____relativeTo;
}
constexpr void Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface::__cordl_internal_set__relativeTo(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____relativeTo = value;
}
inline ::UnityEngine::Pose Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface::get_RelativePose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface*>(),
                        {"get_RelativePose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method);
}
inline ::UnityEngine::Pose Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface::GetReferencePose(::UnityEngine::Transform*  relativeTo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface*>(),
                        {"GetReferencePose", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method, relativeTo);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface::GetCentre(::UnityEngine::Transform*  relativeTo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface*>(),
                        {"GetCentre", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, relativeTo);
}
inline void Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface::SetCentre(::UnityEngine::Vector3  point, ::UnityEngine::Transform*  relativeTo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface*>(),
                        {"SetCentre", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, point, relativeTo);
}
inline float_t Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface::GetRadius(::UnityEngine::Transform*  relativeTo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface*>(),
                        {"GetRadius", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, relativeTo);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface::GetDirection(::UnityEngine::Transform*  relativeTo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface*>(),
                        {"GetDirection", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, relativeTo);
}
inline void Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface::Reset()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Pose Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface::MirrorPose(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  pose, ::UnityEngine::Transform*  relativeTo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface*>(),
                        {"MirrorPose", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method, pose, relativeTo);
}
inline bool Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface::CalculateBestPoseAtSurface(::UnityEngine::Ray  targetRay, ::by_ref<::UnityEngine::Pose>  bestPose, ::UnityEngine::Transform*  relativeTo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface*>(),
                        {"CalculateBestPoseAtSurface", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, targetRay, bestPose, relativeTo);
}
inline ::Oculus::Interaction::Grab::GrabPoseScore Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface::CalculateBestPoseAtSurface(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  targetPose, ::by_ref<::UnityEngine::Pose>  bestPose, /* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::Grab::PoseMeasureParameters>  scoringModifier, ::UnityEngine::Transform*  relativeTo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface*>(),
                        {"CalculateBestPoseAtSurface", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Grab::PoseMeasureParameters>>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Grab::GrabPoseScore>(this, ___internal_method, targetPose, bestPose, scoringModifier, relativeTo);
}
inline ::Oculus::Interaction::Grab::GrabPoseScore Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface::CalculateBestPoseAtSurface(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  targetPose, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  offset, ::by_ref<::UnityEngine::Pose>  bestPose, /* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::Grab::PoseMeasureParameters>  scoringModifier, ::UnityEngine::Transform*  relativeTo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface*>(),
                        {"CalculateBestPoseAtSurface", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Grab::PoseMeasureParameters>>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Grab::GrabPoseScore>(this, ___internal_method, targetPose, offset, bestPose, scoringModifier, relativeTo);
}
inline ::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface* Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface::CreateMirroredSurface(::UnityEngine::GameObject*  gameObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface*>(),
                        {"CreateMirroredSurface", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface*>(this, ___internal_method, gameObject);
}
inline ::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface* Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface::CreateDuplicatedSurface(::UnityEngine::GameObject*  gameObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface*>(),
                        {"CreateDuplicatedSurface", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface*>(this, ___internal_method, gameObject);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface::NearestPointInSurface(::UnityEngine::Vector3  targetPosition, ::UnityEngine::Transform*  relativeTo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface*>(),
                        {"NearestPointInSurface", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, targetPosition, relativeTo);
}
inline ::UnityEngine::Pose Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface::MinimalRotationPoseAtSurface(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  userPose, ::UnityEngine::Transform*  relativeTo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface*>(),
                        {"MinimalRotationPoseAtSurface", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method, userPose, relativeTo);
}
inline ::UnityEngine::Pose Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface::MinimalTranslationPoseAtSurface(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  userPose, ::UnityEngine::Transform*  relativeTo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface*>(),
                        {"MinimalTranslationPoseAtSurface", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method, userPose, relativeTo);
}
inline ::UnityEngine::Quaternion Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface::RotationAtPoint(::UnityEngine::Vector3  surfacePoint, ::UnityEngine::Quaternion  baseRot, ::UnityEngine::Quaternion  desiredRotation, ::UnityEngine::Transform*  relativeTo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface*>(),
                        {"RotationAtPoint", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(this, ___internal_method, surfacePoint, baseRot, desiredRotation, relativeTo);
}
inline void Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface::InjectAllSphereSurface(::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurfaceData*  data, ::UnityEngine::Transform*  relativeTo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface*>(),
                        {"InjectAllSphereSurface", {}, {::i2c::type_of<::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurfaceData*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, relativeTo);
}
inline void Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface::InjectData(::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurfaceData*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface*>(),
                        {"InjectData", {}, {::i2c::type_of<::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurfaceData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface::InjectRelativeTo(::UnityEngine::Transform*  relativeTo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface*>(),
                        {"InjectRelativeTo", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, relativeTo);
}
inline void Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Grab::GrabPoseScore Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface::Oculus_Interaction_Grab_GrabSurfaces_IGrabSurface_CalculateBestPoseAtSurface(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  targetPose, ::by_ref<::UnityEngine::Pose>  bestPose, /* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::Grab::PoseMeasureParameters>  scoringModifier, ::UnityEngine::Transform*  relativeTo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface*>(),
                        {"Oculus.Interaction.Grab.GrabSurfaces.IGrabSurface.CalculateBestPoseAtSurface", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Grab::PoseMeasureParameters>>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Grab::GrabPoseScore>(this, ___internal_method, targetPose, bestPose, scoringModifier, relativeTo);
}
inline ::Oculus::Interaction::Grab::GrabPoseScore Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface::Oculus_Interaction_Grab_GrabSurfaces_IGrabSurface_CalculateBestPoseAtSurface(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  targetPose, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  offset, ::by_ref<::UnityEngine::Pose>  bestPose, /* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::Grab::PoseMeasureParameters>  scoringModifier, ::UnityEngine::Transform*  relativeTo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface*>(),
                        {"Oculus.Interaction.Grab.GrabSurfaces.IGrabSurface.CalculateBestPoseAtSurface", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Grab::PoseMeasureParameters>>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Grab::GrabPoseScore>(this, ___internal_method, targetPose, offset, bestPose, scoringModifier, relativeTo);
}
inline ::UnityEngine::Pose Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface::Oculus_Interaction_Grab_GrabSurfaces_IGrabSurface_MirrorPose(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  gripPose, ::UnityEngine::Transform*  relativeTo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface*>(),
                        {"Oculus.Interaction.Grab.GrabSurfaces.IGrabSurface.MirrorPose", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method, gripPose, relativeTo);
}
inline ::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface* Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface*>());
}
/// @brief Convert operator to "::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface"
constexpr  Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface::operator ::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface*() noexcept {
return static_cast<::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface"
constexpr ::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface* Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface::i___Oculus__Interaction__Grab__GrabSurfaces__IGrabSurface() noexcept {
return static_cast<::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Grab::GrabSurfaces::SphereGrabSurface::SphereGrabSurface()   {
}
