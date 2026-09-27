#pragma once
// IWYU pragma private; include "Oculus/Interaction/Grab/GrabSurfaces/ColliderGrabSurface.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/Grab/GrabSurfaces/zzzz__ColliderGrabSurface_def.hpp"
#include "Oculus/Interaction/Grab/GrabSurfaces/zzzz__IGrabSurface_def.hpp"
#include "Oculus/Interaction/Grab/zzzz__GrabPoseScore_def.hpp"
#include "Oculus/Interaction/Grab/zzzz__PoseMeasureParameters_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Ray_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface::*)()>(&::Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa4eb184;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface*>(),
                    {::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface.NearestPointInSurface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface::*)(::UnityEngine::Vector3)>(&::Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface::NearestPointInSurface)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0xa4eb188;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface*>(),
                        {"NearestPointInSurface", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface.CalculateBestPoseAtSurface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Grab::GrabPoseScore (::Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface::*)(::by_ref<::UnityEngine::Pose>, ::by_ref<::UnityEngine::Pose>, ::by_ref<::Oculus::Interaction::Grab::PoseMeasureParameters>, ::UnityEngine::Transform*)>(&::Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface::CalculateBestPoseAtSurface)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0xa4eb24c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface*>(),
                        {"CalculateBestPoseAtSurface", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Grab::PoseMeasureParameters>>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface.CalculateBestPoseAtSurface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Grab::GrabPoseScore (::Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface::*)(::by_ref<::UnityEngine::Pose>, ::by_ref<::UnityEngine::Pose>, ::by_ref<::UnityEngine::Pose>, ::by_ref<::Oculus::Interaction::Grab::PoseMeasureParameters>, ::UnityEngine::Transform*)>(&::Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface::CalculateBestPoseAtSurface)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0xa4eb300;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface*>(),
                        {"CalculateBestPoseAtSurface", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Grab::PoseMeasureParameters>>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface.CalculateBestPoseAtSurface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface::*)(::UnityEngine::Ray, ::by_ref<::UnityEngine::Pose>, ::UnityEngine::Transform*)>(&::Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface::CalculateBestPoseAtSurface)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0xa4eb398;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface*>(),
                        {"CalculateBestPoseAtSurface", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface.MirrorPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface::*)(::by_ref<::UnityEngine::Pose>, ::UnityEngine::Transform*)>(&::Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface::MirrorPose)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0xa4eb49c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface*>(),
                        {"MirrorPose", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface.CreateMirroredSurface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface* (::Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface::*)(::UnityEngine::GameObject*)>(&::Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface::CreateMirroredSurface)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa4eb540;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface*>(),
                        {"CreateMirroredSurface", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface.CreateDuplicatedSurface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface* (::Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface::*)(::UnityEngine::GameObject*)>(&::Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface::CreateDuplicatedSurface)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0xa4eb544;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface*>(),
                        {"CreateDuplicatedSurface", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface.InjectAllColliderGrabSurface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface::*)(::UnityEngine::Collider*)>(&::Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface::InjectAllColliderGrabSurface)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4eb5b4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface*>(),
                        {"InjectAllColliderGrabSurface", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface.InjectCollider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface::*)(::UnityEngine::Collider*)>(&::Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface::InjectCollider)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4eb5bc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface*>(),
                        {"InjectCollider", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface::*)()>(&::Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4eb5c4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface.Oculus_Interaction_Grab_GrabSurfaces_IGrabSurface_CalculateBestPoseAtSurface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Grab::GrabPoseScore (::Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface::*)(::by_ref<::UnityEngine::Pose>, ::by_ref<::UnityEngine::Pose>, ::by_ref<::Oculus::Interaction::Grab::PoseMeasureParameters>, ::UnityEngine::Transform*)>(&::Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface::Oculus_Interaction_Grab_GrabSurfaces_IGrabSurface_CalculateBestPoseAtSurface)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa4eb5cc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface*>(),
                        {"Oculus.Interaction.Grab.GrabSurfaces.IGrabSurface.CalculateBestPoseAtSurface", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Grab::PoseMeasureParameters>>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface.Oculus_Interaction_Grab_GrabSurfaces_IGrabSurface_CalculateBestPoseAtSurface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Grab::GrabPoseScore (::Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface::*)(::by_ref<::UnityEngine::Pose>, ::by_ref<::UnityEngine::Pose>, ::by_ref<::UnityEngine::Pose>, ::by_ref<::Oculus::Interaction::Grab::PoseMeasureParameters>, ::UnityEngine::Transform*)>(&::Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface::Oculus_Interaction_Grab_GrabSurfaces_IGrabSurface_CalculateBestPoseAtSurface)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa4eb5d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface*>(),
                        {"Oculus.Interaction.Grab.GrabSurfaces.IGrabSurface.CalculateBestPoseAtSurface", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Grab::PoseMeasureParameters>>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface.Oculus_Interaction_Grab_GrabSurfaces_IGrabSurface_MirrorPose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface::*)(::by_ref<::UnityEngine::Pose>, ::UnityEngine::Transform*)>(&::Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface::Oculus_Interaction_Grab_GrabSurfaces_IGrabSurface_MirrorPose)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0xa4eb5d4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface*>(),
                        {"Oculus.Interaction.Grab.GrabSurfaces.IGrabSurface.MirrorPose", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Collider>& Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface::__cordl_internal_get__collider()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____collider;
}
constexpr ::UnityW<::UnityEngine::Collider> const& Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface::__cordl_internal_get__collider() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____collider;
}
constexpr void Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface::__cordl_internal_set__collider(::UnityW<::UnityEngine::Collider>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____collider = value;
}
inline void Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface::NearestPointInSurface(::UnityEngine::Vector3  targetPosition)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface*>(),
                        {"NearestPointInSurface", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, targetPosition);
}
inline ::Oculus::Interaction::Grab::GrabPoseScore Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface::CalculateBestPoseAtSurface(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  targetPose, ::by_ref<::UnityEngine::Pose>  bestPose, /* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::Grab::PoseMeasureParameters>  scoringModifier, ::UnityEngine::Transform*  relativeTo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface*>(),
                        {"CalculateBestPoseAtSurface", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Grab::PoseMeasureParameters>>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Grab::GrabPoseScore>(this, ___internal_method, targetPose, bestPose, scoringModifier, relativeTo);
}
inline ::Oculus::Interaction::Grab::GrabPoseScore Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface::CalculateBestPoseAtSurface(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  targetPose, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  offset, ::by_ref<::UnityEngine::Pose>  bestPose, /* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::Grab::PoseMeasureParameters>  scoringModifier, ::UnityEngine::Transform*  relativeTo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface*>(),
                        {"CalculateBestPoseAtSurface", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Grab::PoseMeasureParameters>>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Grab::GrabPoseScore>(this, ___internal_method, targetPose, offset, bestPose, scoringModifier, relativeTo);
}
inline bool Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface::CalculateBestPoseAtSurface(::UnityEngine::Ray  targetRay, ::by_ref<::UnityEngine::Pose>  bestPose, ::UnityEngine::Transform*  relativeTo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface*>(),
                        {"CalculateBestPoseAtSurface", {}, {::i2c::type_of<::UnityEngine::Ray>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, targetRay, bestPose, relativeTo);
}
inline ::UnityEngine::Pose Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface::MirrorPose(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  gripPose, ::UnityEngine::Transform*  relativeTo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface*>(),
                        {"MirrorPose", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method, gripPose, relativeTo);
}
inline ::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface* Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface::CreateMirroredSurface(::UnityEngine::GameObject*  gameObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface*>(),
                        {"CreateMirroredSurface", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface*>(this, ___internal_method, gameObject);
}
inline ::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface* Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface::CreateDuplicatedSurface(::UnityEngine::GameObject*  gameObject)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface*>(),
                        {"CreateDuplicatedSurface", {}, {::i2c::type_of<::UnityEngine::GameObject*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface*>(this, ___internal_method, gameObject);
}
inline void Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface::InjectAllColliderGrabSurface(::UnityEngine::Collider*  collider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface*>(),
                        {"InjectAllColliderGrabSurface", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collider);
}
inline void Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface::InjectCollider(::UnityEngine::Collider*  collider)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface*>(),
                        {"InjectCollider", {}, {::i2c::type_of<::UnityEngine::Collider*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, collider);
}
inline void Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::Grab::GrabPoseScore Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface::Oculus_Interaction_Grab_GrabSurfaces_IGrabSurface_CalculateBestPoseAtSurface(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  targetPose, ::by_ref<::UnityEngine::Pose>  bestPose, /* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::Grab::PoseMeasureParameters>  scoringModifier, ::UnityEngine::Transform*  relativeTo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface*>(),
                        {"Oculus.Interaction.Grab.GrabSurfaces.IGrabSurface.CalculateBestPoseAtSurface", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Grab::PoseMeasureParameters>>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Grab::GrabPoseScore>(this, ___internal_method, targetPose, bestPose, scoringModifier, relativeTo);
}
inline ::Oculus::Interaction::Grab::GrabPoseScore Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface::Oculus_Interaction_Grab_GrabSurfaces_IGrabSurface_CalculateBestPoseAtSurface(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  targetPose, /* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  offset, ::by_ref<::UnityEngine::Pose>  bestPose, /* [IsReadOnly] */ ::by_ref<::Oculus::Interaction::Grab::PoseMeasureParameters>  scoringModifier, ::UnityEngine::Transform*  relativeTo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface*>(),
                        {"Oculus.Interaction.Grab.GrabSurfaces.IGrabSurface.CalculateBestPoseAtSurface", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Grab::PoseMeasureParameters>>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Grab::GrabPoseScore>(this, ___internal_method, targetPose, offset, bestPose, scoringModifier, relativeTo);
}
inline ::UnityEngine::Pose Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface::Oculus_Interaction_Grab_GrabSurfaces_IGrabSurface_MirrorPose(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Pose>  gripPose, ::UnityEngine::Transform*  relativeTo)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface*>(),
                        {"Oculus.Interaction.Grab.GrabSurfaces.IGrabSurface.MirrorPose", {}, {::i2c::type_of<::by_ref<::UnityEngine::Pose>>(), ::i2c::type_of<::UnityEngine::Transform*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method, gripPose, relativeTo);
}
inline ::Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface* Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface*>());
}
/// @brief Convert operator to "::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface"
constexpr  Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface::operator ::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface*() noexcept {
return static_cast<::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface"
constexpr ::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface* Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface::i___Oculus__Interaction__Grab__GrabSurfaces__IGrabSurface() noexcept {
return static_cast<::Oculus::Interaction::Grab::GrabSurfaces::IGrabSurface*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Grab::GrabSurfaces::ColliderGrabSurface::ColliderGrabSurface()   {
}
