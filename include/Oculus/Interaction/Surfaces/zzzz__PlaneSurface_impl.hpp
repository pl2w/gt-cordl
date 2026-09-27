#pragma once
// IWYU pragma private; include "Oculus/Interaction/Surfaces/PlaneSurface.hpp"
#include "Oculus/Interaction/Surfaces/zzzz__PlaneSurface_NormalFacing_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Oculus/Interaction/Surfaces/zzzz__PlaneSurface_def.hpp"
#include "Oculus/Interaction/Surfaces/zzzz__IBounds_def.hpp"
#include "Oculus/Interaction/Surfaces/zzzz__ISurface_def.hpp"
#include "Oculus/Interaction/Surfaces/zzzz__PlaneSurface_NormalFacing_def.hpp"
#include "Oculus/Interaction/Surfaces/zzzz__PlaneSurface___c__DisplayClass16_0_def.hpp"
#include "Oculus/Interaction/Surfaces/zzzz__SurfaceHit_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Plane_def.hpp"
#include "UnityEngine/zzzz__Ray_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::PlaneSurface.get_Facing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PlaneSurface_NormalFacing (::Oculus::Interaction::Surfaces::PlaneSurface::*)()>(&::Oculus::Interaction::Surfaces::PlaneSurface::get_Facing)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4b8220;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::PlaneSurface*>(),
                        {"get_Facing", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::PlaneSurface.set_Facing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Surfaces::PlaneSurface::*)(::GlobalNamespace::PlaneSurface_NormalFacing)>(&::Oculus::Interaction::Surfaces::PlaneSurface::set_Facing)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4b8228;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::PlaneSurface*>(),
                        {"set_Facing", {}, {::i2c::type_of<::GlobalNamespace::PlaneSurface_NormalFacing>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::PlaneSurface.get_DoubleSided
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Surfaces::PlaneSurface::*)()>(&::Oculus::Interaction::Surfaces::PlaneSurface::get_DoubleSided)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4b8230;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::PlaneSurface*>(),
                        {"get_DoubleSided", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::PlaneSurface.set_DoubleSided
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Surfaces::PlaneSurface::*)(bool)>(&::Oculus::Interaction::Surfaces::PlaneSurface::set_DoubleSided)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4b8238;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::PlaneSurface*>(),
                        {"set_DoubleSided", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::PlaneSurface.get_Normal
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::Surfaces::PlaneSurface::*)()>(&::Oculus::Interaction::Surfaces::PlaneSurface::get_Normal)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0xa4b8240;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::PlaneSurface*>(),
                        {"get_Normal", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::PlaneSurface.ClosestSurfacePoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Surfaces::PlaneSurface::*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>, float_t)>(&::Oculus::Interaction::Surfaces::PlaneSurface::ClosestSurfacePoint)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0xa4b37dc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::PlaneSurface*>(),
                        {"ClosestSurfacePoint", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::PlaneSurface.get_Transform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::Oculus::Interaction::Surfaces::PlaneSurface::*)()>(&::Oculus::Interaction::Surfaces::PlaneSurface::get_Transform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4b3380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::PlaneSurface*>(),
                        {"get_Transform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::PlaneSurface.get_Bounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (::Oculus::Interaction::Surfaces::PlaneSurface::*)()>(&::Oculus::Interaction::Surfaces::PlaneSurface::get_Bounds)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0xa4b83c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::PlaneSurface*>(),
                        {"get_Bounds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::PlaneSurface.Raycast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Surfaces::PlaneSurface::*)(::by_ref<::UnityEngine::Ray>, ::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>, float_t)>(&::Oculus::Interaction::Surfaces::PlaneSurface::Raycast)> {
  constexpr static std::size_t size = 0x204;
  constexpr static std::size_t addrs = 0xa4b3414;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::PlaneSurface*>(),
                        {"Raycast", {}, {::i2c::type_of<::by_ref<::UnityEngine::Ray>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::PlaneSurface.GetPlaneParameters
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Surfaces::PlaneSurface::*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<float_t>)>(&::Oculus::Interaction::Surfaces::PlaneSurface::GetPlaneParameters)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0xa4b828c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::PlaneSurface*>(),
                        {"GetPlaneParameters", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::PlaneSurface.GetPlane
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Plane (::Oculus::Interaction::Surfaces::PlaneSurface::*)()>(&::Oculus::Interaction::Surfaces::PlaneSurface::GetPlane)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0xa4b8558;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::PlaneSurface*>(),
                        {"GetPlane", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::PlaneSurface.InjectAllPlaneSurface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Surfaces::PlaneSurface::*)(::GlobalNamespace::PlaneSurface_NormalFacing, bool)>(&::Oculus::Interaction::Surfaces::PlaneSurface::InjectAllPlaneSurface)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0xa4b8678;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::PlaneSurface*>(),
                        {"InjectAllPlaneSurface", {}, {::i2c::type_of<::GlobalNamespace::PlaneSurface_NormalFacing>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::PlaneSurface.InjectNormalFacing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Surfaces::PlaneSurface::*)(::GlobalNamespace::PlaneSurface_NormalFacing)>(&::Oculus::Interaction::Surfaces::PlaneSurface::InjectNormalFacing)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4b8684;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::PlaneSurface*>(),
                        {"InjectNormalFacing", {}, {::i2c::type_of<::GlobalNamespace::PlaneSurface_NormalFacing>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::PlaneSurface.InjectDoubleSided
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Surfaces::PlaneSurface::*)(bool)>(&::Oculus::Interaction::Surfaces::PlaneSurface::InjectDoubleSided)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4b868c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::PlaneSurface*>(),
                        {"InjectDoubleSided", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::PlaneSurface._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Surfaces::PlaneSurface::*)()>(&::Oculus::Interaction::Surfaces::PlaneSurface::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4b8694;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::PlaneSurface*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::PlaneSurface.Oculus_Interaction_Surfaces_ISurface_Raycast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Surfaces::PlaneSurface::*)(::by_ref<::UnityEngine::Ray>, ::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>, float_t)>(&::Oculus::Interaction::Surfaces::PlaneSurface::Oculus_Interaction_Surfaces_ISurface_Raycast)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa4b8760;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::PlaneSurface*>(),
                        {"Oculus.Interaction.Surfaces.ISurface.Raycast", {}, {::i2c::type_of<::by_ref<::UnityEngine::Ray>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::PlaneSurface.Oculus_Interaction_Surfaces_ISurface_ClosestSurfacePoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Surfaces::PlaneSurface::*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>, float_t)>(&::Oculus::Interaction::Surfaces::PlaneSurface::Oculus_Interaction_Surfaces_ISurface_ClosestSurfacePoint)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa4b8764;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::PlaneSurface*>(),
                        {"Oculus.Interaction.Surfaces.ISurface.ClosestSurfacePoint", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::PlaneSurface._Raycast_g__Raycast_16_0
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::Ray>, ::by_ref<float_t>, ::by_ref<::GlobalNamespace::PlaneSurface___c__DisplayClass16_0>)>(&::Oculus::Interaction::Surfaces::PlaneSurface::_Raycast_g__Raycast_16_0)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0xa4b8488;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::PlaneSurface*>(),
                        {"<Raycast>g__Raycast|16_0", {}, {::i2c::type_of<::by_ref<::UnityEngine::Ray>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::PlaneSurface___c__DisplayClass16_0>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::PlaneSurface_NormalFacing& Oculus::Interaction::Surfaces::PlaneSurface::__cordl_internal_get__facing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____facing;
}
constexpr ::GlobalNamespace::PlaneSurface_NormalFacing const& Oculus::Interaction::Surfaces::PlaneSurface::__cordl_internal_get__facing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____facing;
}
constexpr void Oculus::Interaction::Surfaces::PlaneSurface::__cordl_internal_set__facing(::GlobalNamespace::PlaneSurface_NormalFacing  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____facing = value;
}
constexpr bool& Oculus::Interaction::Surfaces::PlaneSurface::__cordl_internal_get__doubleSided()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____doubleSided;
}
constexpr bool const& Oculus::Interaction::Surfaces::PlaneSurface::__cordl_internal_get__doubleSided() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____doubleSided;
}
constexpr void Oculus::Interaction::Surfaces::PlaneSurface::__cordl_internal_set__doubleSided(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____doubleSided = value;
}
inline void Oculus::Interaction::Surfaces::PlaneSurface::setStaticF__forward(::UnityEngine::Vector3  value)  {
::cordl_internals::setStaticField<::UnityEngine::Vector3, "_forward", ::Oculus::Interaction::Surfaces::PlaneSurface*>(std::forward<::UnityEngine::Vector3>(value));
}
inline ::UnityEngine::Vector3 Oculus::Interaction::Surfaces::PlaneSurface::getStaticF__forward()  {
return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "_forward", ::Oculus::Interaction::Surfaces::PlaneSurface*>();
}
inline void Oculus::Interaction::Surfaces::PlaneSurface::setStaticF__back(::UnityEngine::Vector3  value)  {
::cordl_internals::setStaticField<::UnityEngine::Vector3, "_back", ::Oculus::Interaction::Surfaces::PlaneSurface*>(std::forward<::UnityEngine::Vector3>(value));
}
inline ::UnityEngine::Vector3 Oculus::Interaction::Surfaces::PlaneSurface::getStaticF__back()  {
return ::cordl_internals::getStaticField<::UnityEngine::Vector3, "_back", ::Oculus::Interaction::Surfaces::PlaneSurface*>();
}
inline ::GlobalNamespace::PlaneSurface_NormalFacing Oculus::Interaction::Surfaces::PlaneSurface::get_Facing()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::PlaneSurface*>(),
                        {"get_Facing", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlaneSurface_NormalFacing>(this, ___internal_method);
}
inline void Oculus::Interaction::Surfaces::PlaneSurface::set_Facing(::GlobalNamespace::PlaneSurface_NormalFacing  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::PlaneSurface*>(),
                        {"set_Facing", {}, {::i2c::type_of<::GlobalNamespace::PlaneSurface_NormalFacing>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool Oculus::Interaction::Surfaces::PlaneSurface::get_DoubleSided()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::PlaneSurface*>(),
                        {"get_DoubleSided", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Oculus::Interaction::Surfaces::PlaneSurface::set_DoubleSided(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::PlaneSurface*>(),
                        {"set_DoubleSided", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::Surfaces::PlaneSurface::get_Normal()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::PlaneSurface*>(),
                        {"get_Normal", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline bool Oculus::Interaction::Surfaces::PlaneSurface::ClosestSurfacePoint(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  point, ::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>  hit, float_t  maxDistance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::PlaneSurface*>(),
                        {"ClosestSurfacePoint", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, point, hit, maxDistance);
}
inline ::UnityW<::UnityEngine::Transform> Oculus::Interaction::Surfaces::PlaneSurface::get_Transform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::PlaneSurface*>(),
                        {"get_Transform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline ::UnityEngine::Bounds Oculus::Interaction::Surfaces::PlaneSurface::get_Bounds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::PlaneSurface*>(),
                        {"get_Bounds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(this, ___internal_method);
}
inline bool Oculus::Interaction::Surfaces::PlaneSurface::Raycast(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Ray>  ray, ::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>  hit, float_t  maxDistance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::PlaneSurface*>(),
                        {"Raycast", {}, {::i2c::type_of<::by_ref<::UnityEngine::Ray>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, ray, hit, maxDistance);
}
inline void Oculus::Interaction::Surfaces::PlaneSurface::GetPlaneParameters(::by_ref<::UnityEngine::Vector3>  planeNormal, ::by_ref<float_t>  planeDistance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::PlaneSurface*>(),
                        {"GetPlaneParameters", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, planeNormal, planeDistance);
}
inline ::UnityEngine::Plane Oculus::Interaction::Surfaces::PlaneSurface::GetPlane()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::PlaneSurface*>(),
                        {"GetPlane", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Plane>(this, ___internal_method);
}
inline void Oculus::Interaction::Surfaces::PlaneSurface::InjectAllPlaneSurface(::GlobalNamespace::PlaneSurface_NormalFacing  facing, bool  doubleSided)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::PlaneSurface*>(),
                        {"InjectAllPlaneSurface", {}, {::i2c::type_of<::GlobalNamespace::PlaneSurface_NormalFacing>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, facing, doubleSided);
}
inline void Oculus::Interaction::Surfaces::PlaneSurface::InjectNormalFacing(::GlobalNamespace::PlaneSurface_NormalFacing  facing)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::PlaneSurface*>(),
                        {"InjectNormalFacing", {}, {::i2c::type_of<::GlobalNamespace::PlaneSurface_NormalFacing>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, facing);
}
inline void Oculus::Interaction::Surfaces::PlaneSurface::InjectDoubleSided(bool  doubleSided)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::PlaneSurface*>(),
                        {"InjectDoubleSided", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, doubleSided);
}
inline void Oculus::Interaction::Surfaces::PlaneSurface::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::PlaneSurface*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Oculus::Interaction::Surfaces::PlaneSurface::Oculus_Interaction_Surfaces_ISurface_Raycast(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Ray>  ray, ::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>  hit, float_t  maxDistance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::PlaneSurface*>(),
                        {"Oculus.Interaction.Surfaces.ISurface.Raycast", {}, {::i2c::type_of<::by_ref<::UnityEngine::Ray>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, ray, hit, maxDistance);
}
inline bool Oculus::Interaction::Surfaces::PlaneSurface::Oculus_Interaction_Surfaces_ISurface_ClosestSurfacePoint(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  point, ::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>  hit, float_t  maxDistance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::PlaneSurface*>(),
                        {"Oculus.Interaction.Surfaces.ISurface.ClosestSurfacePoint", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, point, hit, maxDistance);
}
inline bool Oculus::Interaction::Surfaces::PlaneSurface::_Raycast_g__Raycast_16_0(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Ray>  ray, ::by_ref<float_t>  enter, ::by_ref<::GlobalNamespace::PlaneSurface___c__DisplayClass16_0>  _cordl_fixed_empty_name_whitespace)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::PlaneSurface*>(),
                        {"<Raycast>g__Raycast|16_0", {}, {::i2c::type_of<::by_ref<::UnityEngine::Ray>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<::GlobalNamespace::PlaneSurface___c__DisplayClass16_0>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, ray, enter, _cordl_fixed_empty_name_whitespace);
}
inline ::Oculus::Interaction::Surfaces::PlaneSurface* Oculus::Interaction::Surfaces::PlaneSurface::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Surfaces::PlaneSurface*>());
}
/// @brief Convert operator to "::Oculus::Interaction::Surfaces::ISurface"
constexpr  Oculus::Interaction::Surfaces::PlaneSurface::operator ::Oculus::Interaction::Surfaces::ISurface*() noexcept {
return static_cast<::Oculus::Interaction::Surfaces::ISurface*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::Surfaces::ISurface"
constexpr ::Oculus::Interaction::Surfaces::ISurface* Oculus::Interaction::Surfaces::PlaneSurface::i___Oculus__Interaction__Surfaces__ISurface() noexcept {
return static_cast<::Oculus::Interaction::Surfaces::ISurface*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Oculus::Interaction::Surfaces::IBounds"
constexpr  Oculus::Interaction::Surfaces::PlaneSurface::operator ::Oculus::Interaction::Surfaces::IBounds*() noexcept {
return static_cast<::Oculus::Interaction::Surfaces::IBounds*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::Surfaces::IBounds"
constexpr ::Oculus::Interaction::Surfaces::IBounds* Oculus::Interaction::Surfaces::PlaneSurface::i___Oculus__Interaction__Surfaces__IBounds() noexcept {
return static_cast<::Oculus::Interaction::Surfaces::IBounds*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Surfaces::PlaneSurface::PlaneSurface()   {
}
