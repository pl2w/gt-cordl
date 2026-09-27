#pragma once
// IWYU pragma private; include "Oculus/Interaction/Locomotion/TeleportInteractable.hpp"
#include "Oculus/Interaction/zzzz__Interactable_2_impl.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__TeleportInteractable_def.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__TeleportHit_def.hpp"
#include "Oculus/Interaction/Locomotion/zzzz__TeleportInteractor_def.hpp"
#include "Oculus/Interaction/Surfaces/zzzz__IBounds_def.hpp"
#include "Oculus/Interaction/Surfaces/zzzz__ISurface_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TeleportInteractable.get_AllowTeleport
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Locomotion::TeleportInteractable::*)()>(&::Oculus::Interaction::Locomotion::TeleportInteractable::get_AllowTeleport)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4cd748;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractable*>(),
                        {"get_AllowTeleport", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TeleportInteractable.set_AllowTeleport
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::TeleportInteractable::*)(bool)>(&::Oculus::Interaction::Locomotion::TeleportInteractable::set_AllowTeleport)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4cd750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractable*>(),
                        {"set_AllowTeleport", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TeleportInteractable.get_EqualDistanceToBlockerOverride
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Locomotion::TeleportInteractable::*)()>(&::Oculus::Interaction::Locomotion::TeleportInteractable::get_EqualDistanceToBlockerOverride)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4cd758;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractable*>(),
                        {"get_EqualDistanceToBlockerOverride", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TeleportInteractable.set_EqualDistanceToBlockerOverride
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::TeleportInteractable::*)(float_t)>(&::Oculus::Interaction::Locomotion::TeleportInteractable::set_EqualDistanceToBlockerOverride)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4cd760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractable*>(),
                        {"set_EqualDistanceToBlockerOverride", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TeleportInteractable.get_TieBreakerScore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Oculus::Interaction::Locomotion::TeleportInteractable::*)()>(&::Oculus::Interaction::Locomotion::TeleportInteractable::get_TieBreakerScore)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4cd768;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractable*>(),
                        {"get_TieBreakerScore", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TeleportInteractable.set_TieBreakerScore
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::TeleportInteractable::*)(int32_t)>(&::Oculus::Interaction::Locomotion::TeleportInteractable::set_TieBreakerScore)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4cd770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractable*>(),
                        {"set_TieBreakerScore", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TeleportInteractable.get_Surface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Surfaces::ISurface* (::Oculus::Interaction::Locomotion::TeleportInteractable::*)()>(&::Oculus::Interaction::Locomotion::TeleportInteractable::get_Surface)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4cd778;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractable*>(),
                        {"get_Surface", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TeleportInteractable.set_Surface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::TeleportInteractable::*)(::Oculus::Interaction::Surfaces::ISurface*)>(&::Oculus::Interaction::Locomotion::TeleportInteractable::set_Surface)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4cd780;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractable*>(),
                        {"set_Surface", {}, {::i2c::type_of<::Oculus::Interaction::Surfaces::ISurface*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TeleportInteractable.get_SurfaceBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Surfaces::IBounds* (::Oculus::Interaction::Locomotion::TeleportInteractable::*)()>(&::Oculus::Interaction::Locomotion::TeleportInteractable::get_SurfaceBounds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4cd788;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractable*>(),
                        {"get_SurfaceBounds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TeleportInteractable.set_SurfaceBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::TeleportInteractable::*)(::Oculus::Interaction::Surfaces::IBounds*)>(&::Oculus::Interaction::Locomotion::TeleportInteractable::set_SurfaceBounds)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4cd790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractable*>(),
                        {"set_SurfaceBounds", {}, {::i2c::type_of<::Oculus::Interaction::Surfaces::IBounds*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TeleportInteractable.get_FaceTargetDirection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Locomotion::TeleportInteractable::*)()>(&::Oculus::Interaction::Locomotion::TeleportInteractable::get_FaceTargetDirection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4cd798;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractable*>(),
                        {"get_FaceTargetDirection", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TeleportInteractable.set_FaceTargetDirection
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::TeleportInteractable::*)(bool)>(&::Oculus::Interaction::Locomotion::TeleportInteractable::set_FaceTargetDirection)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4cd7a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractable*>(),
                        {"set_FaceTargetDirection", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TeleportInteractable.get_EyeLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Locomotion::TeleportInteractable::*)()>(&::Oculus::Interaction::Locomotion::TeleportInteractable::get_EyeLevel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4cd7a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractable*>(),
                        {"get_EyeLevel", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TeleportInteractable.set_EyeLevel
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::TeleportInteractable::*)(bool)>(&::Oculus::Interaction::Locomotion::TeleportInteractable::set_EyeLevel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4cd7b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractable*>(),
                        {"set_EyeLevel", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TeleportInteractable.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::TeleportInteractable::*)()>(&::Oculus::Interaction::Locomotion::TeleportInteractable::Awake)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0xa4cd7b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractable*>(),
                    {::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractable*>(), 31}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TeleportInteractable.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::TeleportInteractable::*)()>(&::Oculus::Interaction::Locomotion::TeleportInteractable::Start)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xa4cd868;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractable*>(),
                    {::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractable*>(), 32}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TeleportInteractable.IsInRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Locomotion::TeleportInteractable::*)(::by_ref<::UnityEngine::Pose>, float_t)>(&::Oculus::Interaction::Locomotion::TeleportInteractable::IsInRange)> {
  constexpr static std::size_t size = 0x1e8;
  constexpr static std::size_t addrs = 0xa4cd900;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractable*>(),
                        {"IsInRange", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TeleportInteractable.DetectHit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Locomotion::TeleportInteractable::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::by_ref<::Oculus::Interaction::Locomotion::TeleportHit>)>(&::Oculus::Interaction::Locomotion::TeleportInteractable::DetectHit)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0xa4cd038;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractable*>(),
                        {"DetectHit", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Locomotion::TeleportHit>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TeleportInteractable.TargetPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::Oculus::Interaction::Locomotion::TeleportInteractable::*)(::UnityEngine::Pose)>(&::Oculus::Interaction::Locomotion::TeleportInteractable::TargetPose)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0xa4cdbac;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractable*>(),
                        {"TargetPose", {}, {::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TeleportInteractable.InjectAllTeleportInteractable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::TeleportInteractable::*)(::Oculus::Interaction::Surfaces::ISurface*)>(&::Oculus::Interaction::Locomotion::TeleportInteractable::InjectAllTeleportInteractable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa4cdca4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractable*>(),
                        {"InjectAllTeleportInteractable", {}, {::i2c::type_of<::Oculus::Interaction::Surfaces::ISurface*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TeleportInteractable.InjectSurface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::TeleportInteractable::*)(::Oculus::Interaction::Surfaces::ISurface*)>(&::Oculus::Interaction::Locomotion::TeleportInteractable::InjectSurface)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0xa4cdca8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractable*>(),
                        {"InjectSurface", {}, {::i2c::type_of<::Oculus::Interaction::Surfaces::ISurface*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TeleportInteractable.InjectOptionalTargetPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::TeleportInteractable::*)(::UnityEngine::Transform*)>(&::Oculus::Interaction::Locomotion::TeleportInteractable::InjectOptionalTargetPoint)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4cdda8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractable*>(),
                        {"InjectOptionalTargetPoint", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TeleportInteractable._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::TeleportInteractable::*)()>(&::Oculus::Interaction::Locomotion::TeleportInteractable::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0xa4cddb0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractable*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TeleportInteractable._Start_b__31_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Locomotion::TeleportInteractable::*)()>(&::Oculus::Interaction::Locomotion::TeleportInteractable::_Start_b__31_0)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xa4cde24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractable*>(),
                        {"<Start>b__31_0", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TeleportInteractable._IsInRange_g__CheckSquaredDistances_32_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(float_t, float_t, float_t)>(&::Oculus::Interaction::Locomotion::TeleportInteractable::_IsInRange_g__CheckSquaredDistances_32_0)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xa4cdae8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractable*>(),
                        {"<IsInRange>g__CheckSquaredDistances|32_0", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Locomotion::TeleportInteractable._IsInRange_g__SqrDistanceToSegment_32_1
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t)>(&::Oculus::Interaction::Locomotion::TeleportInteractable::_IsInRange_g__SqrDistanceToSegment_32_1)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xa4cdb24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractable*>(),
                        {"<IsInRange>g__SqrDistanceToSegment|32_1", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Oculus::Interaction::Locomotion::TeleportInteractable::__cordl_internal_get__allowTeleport()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____allowTeleport;
}
constexpr bool const& Oculus::Interaction::Locomotion::TeleportInteractable::__cordl_internal_get__allowTeleport() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____allowTeleport;
}
constexpr void Oculus::Interaction::Locomotion::TeleportInteractable::__cordl_internal_set__allowTeleport(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____allowTeleport = value;
}
constexpr float_t& Oculus::Interaction::Locomotion::TeleportInteractable::__cordl_internal_get__equalDistanceToBlockerOverride()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____equalDistanceToBlockerOverride;
}
constexpr float_t const& Oculus::Interaction::Locomotion::TeleportInteractable::__cordl_internal_get__equalDistanceToBlockerOverride() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____equalDistanceToBlockerOverride;
}
constexpr void Oculus::Interaction::Locomotion::TeleportInteractable::__cordl_internal_set__equalDistanceToBlockerOverride(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____equalDistanceToBlockerOverride = value;
}
constexpr int32_t& Oculus::Interaction::Locomotion::TeleportInteractable::__cordl_internal_get__tieBreakerScore()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tieBreakerScore;
}
constexpr int32_t const& Oculus::Interaction::Locomotion::TeleportInteractable::__cordl_internal_get__tieBreakerScore() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____tieBreakerScore;
}
constexpr void Oculus::Interaction::Locomotion::TeleportInteractable::__cordl_internal_set__tieBreakerScore(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____tieBreakerScore = value;
}
constexpr ::UnityW<::UnityEngine::Object>& Oculus::Interaction::Locomotion::TeleportInteractable::__cordl_internal_get__surface()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____surface;
}
constexpr ::UnityW<::UnityEngine::Object> const& Oculus::Interaction::Locomotion::TeleportInteractable::__cordl_internal_get__surface() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____surface;
}
constexpr void Oculus::Interaction::Locomotion::TeleportInteractable::__cordl_internal_set__surface(::UnityW<::UnityEngine::Object>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____surface = value;
}
constexpr ::Oculus::Interaction::Surfaces::ISurface*& Oculus::Interaction::Locomotion::TeleportInteractable::__cordl_internal_get__Surface_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Surface_k__BackingField;
}
constexpr ::Oculus::Interaction::Surfaces::ISurface* const& Oculus::Interaction::Locomotion::TeleportInteractable::__cordl_internal_get__Surface_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Surface_k__BackingField;
}
constexpr void Oculus::Interaction::Locomotion::TeleportInteractable::__cordl_internal_set__Surface_k__BackingField(::Oculus::Interaction::Surfaces::ISurface*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Surface_k__BackingField = value;
}
constexpr ::Oculus::Interaction::Surfaces::IBounds*& Oculus::Interaction::Locomotion::TeleportInteractable::__cordl_internal_get__SurfaceBounds_k__BackingField()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SurfaceBounds_k__BackingField;
}
constexpr ::Oculus::Interaction::Surfaces::IBounds* const& Oculus::Interaction::Locomotion::TeleportInteractable::__cordl_internal_get__SurfaceBounds_k__BackingField() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____SurfaceBounds_k__BackingField;
}
constexpr void Oculus::Interaction::Locomotion::TeleportInteractable::__cordl_internal_set__SurfaceBounds_k__BackingField(::Oculus::Interaction::Surfaces::IBounds*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____SurfaceBounds_k__BackingField = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& Oculus::Interaction::Locomotion::TeleportInteractable::__cordl_internal_get__targetPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetPoint;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Oculus::Interaction::Locomotion::TeleportInteractable::__cordl_internal_get__targetPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetPoint;
}
constexpr void Oculus::Interaction::Locomotion::TeleportInteractable::__cordl_internal_set__targetPoint(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____targetPoint = value;
}
constexpr bool& Oculus::Interaction::Locomotion::TeleportInteractable::__cordl_internal_get__faceTargetDirection()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____faceTargetDirection;
}
constexpr bool const& Oculus::Interaction::Locomotion::TeleportInteractable::__cordl_internal_get__faceTargetDirection() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____faceTargetDirection;
}
constexpr void Oculus::Interaction::Locomotion::TeleportInteractable::__cordl_internal_set__faceTargetDirection(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____faceTargetDirection = value;
}
constexpr bool& Oculus::Interaction::Locomotion::TeleportInteractable::__cordl_internal_get__eyeLevel()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____eyeLevel;
}
constexpr bool const& Oculus::Interaction::Locomotion::TeleportInteractable::__cordl_internal_get__eyeLevel() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____eyeLevel;
}
constexpr void Oculus::Interaction::Locomotion::TeleportInteractable::__cordl_internal_set__eyeLevel(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____eyeLevel = value;
}
inline bool Oculus::Interaction::Locomotion::TeleportInteractable::get_AllowTeleport()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractable*>(),
                        {"get_AllowTeleport", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::TeleportInteractable::set_AllowTeleport(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractable*>(),
                        {"set_AllowTeleport", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Oculus::Interaction::Locomotion::TeleportInteractable::get_EqualDistanceToBlockerOverride()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractable*>(),
                        {"get_EqualDistanceToBlockerOverride", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::TeleportInteractable::set_EqualDistanceToBlockerOverride(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractable*>(),
                        {"set_EqualDistanceToBlockerOverride", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Oculus::Interaction::Locomotion::TeleportInteractable::get_TieBreakerScore()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractable*>(),
                        {"get_TieBreakerScore", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::TeleportInteractable::set_TieBreakerScore(int32_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractable*>(),
                        {"set_TieBreakerScore", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Oculus::Interaction::Surfaces::ISurface* Oculus::Interaction::Locomotion::TeleportInteractable::get_Surface()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractable*>(),
                        {"get_Surface", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Surfaces::ISurface*>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::TeleportInteractable::set_Surface(::Oculus::Interaction::Surfaces::ISurface*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractable*>(),
                        {"set_Surface", {}, {::i2c::type_of<::Oculus::Interaction::Surfaces::ISurface*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Oculus::Interaction::Surfaces::IBounds* Oculus::Interaction::Locomotion::TeleportInteractable::get_SurfaceBounds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractable*>(),
                        {"get_SurfaceBounds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Surfaces::IBounds*>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::TeleportInteractable::set_SurfaceBounds(::Oculus::Interaction::Surfaces::IBounds*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractable*>(),
                        {"set_SurfaceBounds", {}, {::i2c::type_of<::Oculus::Interaction::Surfaces::IBounds*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Oculus::Interaction::Locomotion::TeleportInteractable::get_FaceTargetDirection()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractable*>(),
                        {"get_FaceTargetDirection", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::TeleportInteractable::set_FaceTargetDirection(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractable*>(),
                        {"set_FaceTargetDirection", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Oculus::Interaction::Locomotion::TeleportInteractable::get_EyeLevel()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractable*>(),
                        {"get_EyeLevel", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::TeleportInteractable::set_EyeLevel(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractable*>(),
                        {"set_EyeLevel", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::Locomotion::TeleportInteractable::Awake()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractable*>(), 31}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::TeleportInteractable::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractable*>(), 32}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Oculus::Interaction::Locomotion::TeleportInteractable::IsInRange(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  origin, float_t  maxSqrDistance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractable*>(),
                        {"IsInRange", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, origin, maxSqrDistance);
}
inline bool Oculus::Interaction::Locomotion::TeleportInteractable::DetectHit(::UnityEngine::Vector3  from, ::UnityEngine::Vector3  to, ::by_ref<::Oculus::Interaction::Locomotion::TeleportHit>  hit)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractable*>(),
                        {"DetectHit", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Locomotion::TeleportHit>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, from, to, hit);
}
inline ::UnityEngine::Pose Oculus::Interaction::Locomotion::TeleportInteractable::TargetPose(::UnityEngine::Pose  hitPose)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractable*>(),
                        {"TargetPose", {}, {::i2c::type_of<::UnityEngine::Pose>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method, hitPose);
}
inline void Oculus::Interaction::Locomotion::TeleportInteractable::InjectAllTeleportInteractable(::Oculus::Interaction::Surfaces::ISurface*  surface)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractable*>(),
                        {"InjectAllTeleportInteractable", {}, {::i2c::type_of<::Oculus::Interaction::Surfaces::ISurface*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, surface);
}
inline void Oculus::Interaction::Locomotion::TeleportInteractable::InjectSurface(::Oculus::Interaction::Surfaces::ISurface*  surface)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractable*>(),
                        {"InjectSurface", {}, {::i2c::type_of<::Oculus::Interaction::Surfaces::ISurface*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, surface);
}
inline void Oculus::Interaction::Locomotion::TeleportInteractable::InjectOptionalTargetPoint(::UnityEngine::Transform*  targetPoint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractable*>(),
                        {"InjectOptionalTargetPoint", {}, {::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, targetPoint);
}
inline void Oculus::Interaction::Locomotion::TeleportInteractable::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractable*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Interaction::Locomotion::TeleportInteractable::_Start_b__31_0()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractable*>(),
                        {"<Start>b__31_0", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Oculus::Interaction::Locomotion::TeleportInteractable::_IsInRange_g__CheckSquaredDistances_32_0(float_t  x, float_t  y, float_t  threshold)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractable*>(),
                        {"<IsInRange>g__CheckSquaredDistances|32_0", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, x, y, threshold);
}
inline float_t Oculus::Interaction::Locomotion::TeleportInteractable::_IsInRange_g__SqrDistanceToSegment_32_1(::UnityEngine::Vector3  point, ::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  dir, float_t  sqrLength)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Locomotion::TeleportInteractable*>(),
                        {"<IsInRange>g__SqrDistanceToSegment|32_1", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, point, origin, dir, sqrLength);
}
inline ::Oculus::Interaction::Locomotion::TeleportInteractable* Oculus::Interaction::Locomotion::TeleportInteractable::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Locomotion::TeleportInteractable*>());
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Locomotion::TeleportInteractable::TeleportInteractable()   {
}
