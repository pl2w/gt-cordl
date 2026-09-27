#pragma once
// IWYU pragma private; include "Oculus/Interaction/Grab/GrabSurfaces/BoxGrabSurface.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/Grab/GrabSurfaces/zzzz__BoxGrabSurface_def.hpp"
#include "Oculus/Interaction/Grab/GrabSurfaces/zzzz__BoxGrabSurfaceData_def.hpp"
#include "Oculus/Interaction/Grab/GrabSurfaces/zzzz__IGrabSurface_def.hpp"
#include "Oculus/Interaction/Grab/zzzz__GrabPoseScore_def.hpp"
#include "Oculus/Interaction/Grab/zzzz__PoseMeasureParameters_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Ray_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface.get_RelativePose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface::*)()>(&::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface::get_RelativePose)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xa4e8f40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface*>(),
                        {"get_RelativePose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface.GetReferencePose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface::*)(::UnityEngine::Transform*)>(&::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface::GetReferencePose)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0xa4e8f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface*>(),
                        {"GetReferencePose", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface.GetWidthOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface::*)(::UnityEngine::Transform*)>(&::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface::GetWidthOffset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa4e9008;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface*>(),
                        {"GetWidthOffset", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface.SetWidthOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface::*)(float_t, ::UnityEngine::Transform*)>(&::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface::SetWidthOffset)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xa4e9040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface*>(),
                        {"SetWidthOffset", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface.GetSnapOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector4 (::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface::*)(::UnityEngine::Transform*)>(&::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface::GetSnapOffset)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0xa4e907c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface*>(),
                        {"GetSnapOffset", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface.SetSnapOffset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface::*)(::UnityEngine::Vector4, ::UnityEngine::Transform*)>(&::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface::SetSnapOffset)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0xa4e90d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface*>(),
                        {"SetSnapOffset", {}, {::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface.GetSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface::*)(::UnityEngine::Transform*)>(&::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface::GetSize)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0xa4e9130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface*>(),
                        {"GetSize", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface.SetSize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface::*)(::UnityEngine::Vector3, ::UnityEngine::Transform*)>(&::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface::SetSize)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0xa4e9180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface*>(),
                        {"SetSize", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface.GetRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Quaternion (::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface::*)(::UnityEngine::Transform*)>(&::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface::GetRotation)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xa4e91d8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface*>(),
                        {"GetRotation", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface.SetRotation
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface::*)(::UnityEngine::Quaternion, ::UnityEngine::Transform*)>(&::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface::SetRotation)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xa4e92c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface*>(),
                        {"SetRotation", {}, {::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface.GetDirection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface::*)(::UnityEngine::Transform*)>(&::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface::GetDirection)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0xa4e93b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface*>(),
                        {"GetDirection", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface::*)()>(&::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface::Reset)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xa4e942c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface*>(),
                    {::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface::*)()>(&::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa4e9514;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface*>(),
                    {::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface.MirrorPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface::*)(::by_ref<::UnityEngine::Pose>, ::UnityEngine::Transform*)>(&::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface::MirrorPose)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0xa4e9518;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface*>(),
                        {"MirrorPose", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface.CreateMirroredSurface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface* (::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface::*)(::UnityEngine::GameObject*)>(&::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface::CreateMirroredSurface)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0xa4e9684;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface*>(),
                        {"CreateMirroredSurface", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface.CreateDuplicatedSurface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface* (::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface::*)(::UnityEngine::GameObject*)>(&::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface::CreateDuplicatedSurface)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa4e9708;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface*>(),
                        {"CreateDuplicatedSurface", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface.CalculateBestPoseAtSurface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Grab::GrabPoseScore (::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface::*)(::by_ref<::UnityEngine::Pose>, ::by_ref<::UnityEngine::Pose>, ::by_ref<::Oculus::Interaction::Grab::PoseMeasureParameters>, ::UnityEngine::Transform*)>(&::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface::CalculateBestPoseAtSurface)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xa4e9778;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface*>(),
                        {"CalculateBestPoseAtSurface", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Grab::PoseMeasureParameters>>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface.CalculateBestPoseAtSurface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Grab::GrabPoseScore (::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface::*)(::by_ref<::UnityEngine::Pose>, ::by_ref<::UnityEngine::Pose>, ::by_ref<::UnityEngine::Pose>, ::by_ref<::Oculus::Interaction::Grab::PoseMeasureParameters>, ::UnityEngine::Transform*)>(&::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface::CalculateBestPoseAtSurface)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0xa4e9834;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface*>(),
                        {"CalculateBestPoseAtSurface", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Grab::PoseMeasureParameters>>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface.CalculateCorners
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface::*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::UnityEngine::Transform*)>(&::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface::CalculateCorners)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0xa4e991c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface*>(),
                        {"CalculateCorners", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface.ProjectOnSegment
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface::*)(::UnityEngine::Vector3, ::System::ValueTuple_2<::UnityEngine::Vector3,::UnityEngine::Vector3>)>(&::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface::ProjectOnSegment)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0xa4e9b2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface*>(),
                        {"ProjectOnSegment", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::System::ValueTuple_2<::UnityEngine::Vector3,::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface.CalculateBestPoseAtSurface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface::*)(::UnityEngine::Ray, ::by_ref<::UnityEngine::Pose>, ::UnityEngine::Transform*)>(&::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface::CalculateBestPoseAtSurface)> {
  constexpr static std::size_t size = 0x354;
  constexpr static std::size_t addrs = 0xa4e9d34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface*>(),
                        {"CalculateBestPoseAtSurface", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface.NearestPointInSurface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface::*)(::UnityEngine::Vector3, ::UnityEngine::Transform*)>(&::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface::NearestPointInSurface)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xa4ea088;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface*>(),
                        {"NearestPointInSurface", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface.NearestPointAndAngleInSurface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface::*)(::UnityEngine::Vector3, ::by_ref<::UnityEngine::Vector3>, ::by_ref<float_t>, ::UnityEngine::Transform*)>(&::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface::NearestPointAndAngleInSurface)> {
  constexpr static std::size_t size = 0x4f0;
  constexpr static std::size_t addrs = 0xa4ea270;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface*>(),
                        {"NearestPointAndAngleInSurface", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface.MinimalRotationPoseAtSurface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface::*)(::by_ref<::UnityEngine::Pose>, ::UnityEngine::Transform*)>(&::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface::MinimalRotationPoseAtSurface)> {
  constexpr static std::size_t size = 0x728;
  constexpr static std::size_t addrs = 0xa4ea760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface*>(),
                        {"MinimalRotationPoseAtSurface", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface.MinimalTranslationPoseAtSurface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface::*)(::by_ref<::UnityEngine::Pose>, ::UnityEngine::Transform*)>(&::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface::MinimalTranslationPoseAtSurface)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0xa4ea0c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface*>(),
                        {"MinimalTranslationPoseAtSurface", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface.RotationalScore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::by_ref<::UnityEngine::Quaternion>, ::by_ref<::UnityEngine::Quaternion>)>(&::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface::RotationalScore)> {
  constexpr static std::size_t size = 0x1f8;
  constexpr static std::size_t addrs = 0xa4eae88;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface*>(),
                        {"RotationalScore", {}, {::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface.InjectAllBoxSurface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface::*)(::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurfaceData*, ::UnityEngine::Transform*)>(&::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface::InjectAllBoxSurface)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa4eb080;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface*>(),
                        {"InjectAllBoxSurface", {}, {::i2c::type_of<::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurfaceData*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface.InjectData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface::*)(::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurfaceData*)>(&::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface::InjectData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4eb0b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface*>(),
                        {"InjectData", {}, {::i2c::type_of<::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurfaceData*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface.InjectRelativeTo
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface::*)(::UnityEngine::Transform*)>(&::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface::InjectRelativeTo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4eb0b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface*>(),
                        {"InjectRelativeTo", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface::*)()>(&::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface::_ctor)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0xa4eb0c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface.Oculus_Interaction_Grab_GrabSurfaces_IGrabSurface_CalculateBestPoseAtSurface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Grab::GrabPoseScore (::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface::*)(::by_ref<::UnityEngine::Pose>, ::by_ref<::UnityEngine::Pose>, ::by_ref<::Oculus::Interaction::Grab::PoseMeasureParameters>, ::UnityEngine::Transform*)>(&::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface::Oculus_Interaction_Grab_GrabSurfaces_IGrabSurface_CalculateBestPoseAtSurface)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa4eb14c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface*>(),
                        {"Oculus.Interaction.Grab.GrabSurfaces.IGrabSurface.CalculateBestPoseAtSurface", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Grab::PoseMeasureParameters>>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface.Oculus_Interaction_Grab_GrabSurfaces_IGrabSurface_CalculateBestPoseAtSurface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Grab::GrabPoseScore (::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface::*)(::by_ref<::UnityEngine::Pose>, ::by_ref<::UnityEngine::Pose>, ::by_ref<::UnityEngine::Pose>, ::by_ref<::Oculus::Interaction::Grab::PoseMeasureParameters>, ::UnityEngine::Transform*)>(&::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface::Oculus_Interaction_Grab_GrabSurfaces_IGrabSurface_CalculateBestPoseAtSurface)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa4eb150;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface*>(),
                        {"Oculus.Interaction.Grab.GrabSurfaces.IGrabSurface.CalculateBestPoseAtSurface", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Grab::PoseMeasureParameters>>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface.Oculus_Interaction_Grab_GrabSurfaces_IGrabSurface_MirrorPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface::*)(::by_ref<::UnityEngine::Pose>, ::UnityEngine::Transform*)>(&::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface::Oculus_Interaction_Grab_GrabSurfaces_IGrabSurface_MirrorPose)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa4eb154;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface*>(),
                        {"Oculus.Interaction.Grab.GrabSurfaces.IGrabSurface.MirrorPose", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurfaceData*& Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface::__cordl_internal_get__data()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____data;
}
constexpr ::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurfaceData* const& Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface::__cordl_internal_get__data() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____data;
}
constexpr void Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface::__cordl_internal_set__data(::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurfaceData*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____data = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface::__cordl_internal_get__relativeTo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____relativeTo;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface::__cordl_internal_get__relativeTo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____relativeTo;
}
constexpr void Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface::__cordl_internal_set__relativeTo(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____relativeTo = value;
}
inline ::UnityEngine::Pose Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface::get_RelativePose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface*>(),
                        {"get_RelativePose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method);
}
inline ::UnityEngine::Pose Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface::GetReferencePose(::UnityEngine::Transform*  relativeTo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface*>(),
                        {"GetReferencePose", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method, relativeTo);
}
inline float_t Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface::GetWidthOffset(::UnityEngine::Transform*  relativeTo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface*>(),
                        {"GetWidthOffset", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, relativeTo);
}
inline void Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface::SetWidthOffset(float_t  widthOffset, ::UnityEngine::Transform*  relativeTo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface*>(),
                        {"SetWidthOffset", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, widthOffset, relativeTo);
}
inline ::UnityEngine::Vector4 Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface::GetSnapOffset(::UnityEngine::Transform*  relativeTo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface*>(),
                        {"GetSnapOffset", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector4>(this, ___internal_method, relativeTo);
}
inline void Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface::SetSnapOffset(::UnityEngine::Vector4  snapOffset, ::UnityEngine::Transform*  relativeTo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface*>(),
                        {"SetSnapOffset", {}, {::i2c::type_of<::UnityEngine::Vector4>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, snapOffset, relativeTo);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface::GetSize(::UnityEngine::Transform*  relativeTo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface*>(),
                        {"GetSize", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, relativeTo);
}
inline void Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface::SetSize(::UnityEngine::Vector3  size, ::UnityEngine::Transform*  relativeTo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface*>(),
                        {"SetSize", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, size, relativeTo);
}
inline ::UnityEngine::Quaternion Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface::GetRotation(::UnityEngine::Transform*  relativeTo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface*>(),
                        {"GetRotation", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Quaternion>(this, ___internal_method, relativeTo);
}
inline void Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface::SetRotation(::UnityEngine::Quaternion  rotation, ::UnityEngine::Transform*  relativeTo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface*>(),
                        {"SetRotation", {}, {::i2c::type_of<::UnityEngine::Quaternion>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, rotation, relativeTo);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface::GetDirection(::UnityEngine::Transform*  relativeTo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface*>(),
                        {"GetDirection", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, relativeTo);
}
inline void Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface::Reset()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Pose Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface::MirrorPose(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  pose, ::UnityEngine::Transform*  relativeTo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface*>(),
                        {"MirrorPose", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method, pose, relativeTo);
}
inline ::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface* Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface::CreateMirroredSurface(::UnityEngine::GameObject*  gameObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface*>(),
                        {"CreateMirroredSurface", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface*>(this, ___internal_method, gameObject);
}
inline ::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface* Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface::CreateDuplicatedSurface(::UnityEngine::GameObject*  gameObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface*>(),
                        {"CreateDuplicatedSurface", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface*>(this, ___internal_method, gameObject);
}
inline ::Oculus::Interaction::Grab::GrabPoseScore Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface::CalculateBestPoseAtSurface(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  targetPose, ::by_ref<::UnityEngine::Pose>  bestPose, /* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::Grab::PoseMeasureParameters>  scoringModifier, ::UnityEngine::Transform*  relativeTo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface*>(),
                        {"CalculateBestPoseAtSurface", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Grab::PoseMeasureParameters>>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Grab::GrabPoseScore>(this, ___internal_method, targetPose, bestPose, scoringModifier, relativeTo);
}
inline ::Oculus::Interaction::Grab::GrabPoseScore Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface::CalculateBestPoseAtSurface(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  targetPose, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  offset, ::by_ref<::UnityEngine::Pose>  bestPose, /* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::Grab::PoseMeasureParameters>  scoringModifier, ::UnityEngine::Transform*  relativeTo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface*>(),
                        {"CalculateBestPoseAtSurface", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Grab::PoseMeasureParameters>>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Grab::GrabPoseScore>(this, ___internal_method, targetPose, offset, bestPose, scoringModifier, relativeTo);
}
inline void Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface::CalculateCorners(::by_ref<::UnityEngine::Vector3>  bottomLeft, ::by_ref<::UnityEngine::Vector3>  bottomRight, ::by_ref<::UnityEngine::Vector3>  topLeft, ::by_ref<::UnityEngine::Vector3>  topRight, ::UnityEngine::Transform*  relativeTo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface*>(),
                        {"CalculateCorners", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, bottomLeft, bottomRight, topLeft, topRight, relativeTo);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface::ProjectOnSegment(::UnityEngine::Vector3  point, ::System::ValueTuple_2<::UnityEngine::Vector3,::UnityEngine::Vector3>  segment)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface*>(),
                        {"ProjectOnSegment", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::System::ValueTuple_2<::UnityEngine::Vector3,::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, point, segment);
}
inline bool Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface::CalculateBestPoseAtSurface(::UnityEngine::Ray  targetRay, ::by_ref<::UnityEngine::Pose>  bestPose, ::UnityEngine::Transform*  relativeTo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface*>(),
                        {"CalculateBestPoseAtSurface", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, targetRay, bestPose, relativeTo);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface::NearestPointInSurface(::UnityEngine::Vector3  targetPosition, ::UnityEngine::Transform*  relativeTo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface*>(),
                        {"NearestPointInSurface", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, targetPosition, relativeTo);
}
inline void Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface::NearestPointAndAngleInSurface(::UnityEngine::Vector3  targetPosition, ::by_ref<::UnityEngine::Vector3>  surfacePoint, ::by_ref<float_t>  angle, ::UnityEngine::Transform*  relativeTo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface*>(),
                        {"NearestPointAndAngleInSurface", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetPosition, surfacePoint, angle, relativeTo);
}
inline ::UnityEngine::Pose Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface::MinimalRotationPoseAtSurface(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  userPose, ::UnityEngine::Transform*  relativeTo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface*>(),
                        {"MinimalRotationPoseAtSurface", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method, userPose, relativeTo);
}
inline ::UnityEngine::Pose Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface::MinimalTranslationPoseAtSurface(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  userPose, ::UnityEngine::Transform*  relativeTo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface*>(),
                        {"MinimalTranslationPoseAtSurface", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method, userPose, relativeTo);
}
inline float_t Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface::RotationalScore(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Quaternion>  from, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Quaternion>  to)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface*>(),
                        {"RotationalScore", {}, {::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>(), ::i2c::type_of<::by_ref<::UnityEngine::Quaternion>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, from, to);
}
inline void Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface::InjectAllBoxSurface(::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurfaceData*  data, ::UnityEngine::Transform*  relativeTo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface*>(),
                        {"InjectAllBoxSurface", {}, {::i2c::type_of<::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurfaceData*>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, relativeTo);
}
inline void Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface::InjectData(::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurfaceData*  data)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface*>(),
                        {"InjectData", {}, {::i2c::type_of<::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurfaceData*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline void Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface::InjectRelativeTo(::UnityEngine::Transform*  relativeTo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface*>(),
                        {"InjectRelativeTo", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, relativeTo);
}
inline void Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Grab::GrabPoseScore Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface::Oculus_Interaction_Grab_GrabSurfaces_IGrabSurface_CalculateBestPoseAtSurface(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  targetPose, ::by_ref<::UnityEngine::Pose>  bestPose, /* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::Grab::PoseMeasureParameters>  scoringModifier, ::UnityEngine::Transform*  relativeTo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface*>(),
                        {"Oculus.Interaction.Grab.GrabSurfaces.IGrabSurface.CalculateBestPoseAtSurface", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Grab::PoseMeasureParameters>>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Grab::GrabPoseScore>(this, ___internal_method, targetPose, bestPose, scoringModifier, relativeTo);
}
inline ::Oculus::Interaction::Grab::GrabPoseScore Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface::Oculus_Interaction_Grab_GrabSurfaces_IGrabSurface_CalculateBestPoseAtSurface(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  targetPose, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  offset, ::by_ref<::UnityEngine::Pose>  bestPose, /* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::Grab::PoseMeasureParameters>  scoringModifier, ::UnityEngine::Transform*  relativeTo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface*>(),
                        {"Oculus.Interaction.Grab.GrabSurfaces.IGrabSurface.CalculateBestPoseAtSurface", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Grab::PoseMeasureParameters>>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Grab::GrabPoseScore>(this, ___internal_method, targetPose, offset, bestPose, scoringModifier, relativeTo);
}
inline ::UnityEngine::Pose Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface::Oculus_Interaction_Grab_GrabSurfaces_IGrabSurface_MirrorPose(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  gripPose, ::UnityEngine::Transform*  relativeTo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface*>(),
                        {"Oculus.Interaction.Grab.GrabSurfaces.IGrabSurface.MirrorPose", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method, gripPose, relativeTo);
}
inline ::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface* Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface*>());
}
/// @brief Convert operator to "::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface"
constexpr  Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface::operator ::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface*() noexcept {
return static_cast<::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface"
constexpr ::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface* Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface::i___Oculus__Interaction__Grab__GrabSurfaces__IGrabSurface() noexcept {
return static_cast<::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Grab::GrabSurfaces::BoxGrabSurface::BoxGrabSurface()   {
}
