#pragma once
// IWYU pragma private; include "Oculus/Interaction/Surfaces/CylinderSurface.hpp"
#include "Oculus/Interaction/Surfaces/zzzz__CylinderSurface_NormalFacing_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/Surfaces/zzzz__CylinderSurface_def.hpp"
#include "Oculus/Interaction/Surfaces/zzzz__CylinderSurface_NormalFacing_def.hpp"
#include "Oculus/Interaction/Surfaces/zzzz__IBounds_def.hpp"
#include "Oculus/Interaction/Surfaces/zzzz__ISurface_def.hpp"
#include "Oculus/Interaction/Surfaces/zzzz__SurfaceHit_def.hpp"
#include "Oculus/Interaction/zzzz__Cylinder_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
#include "UnityEngine/zzzz__Ray_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::CylinderSurface.get_IsValid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Surfaces::CylinderSurface::*)()>(&::Oculus::Interaction::Surfaces::CylinderSurface::get_IsValid)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xa4b5c7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::CylinderSurface*>(),
                        {"get_IsValid", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::CylinderSurface.get_Radius
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Surfaces::CylinderSurface::*)()>(&::Oculus::Interaction::Surfaces::CylinderSurface::get_Radius)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa4b5d04;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::CylinderSurface*>(),
                        {"get_Radius", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::CylinderSurface.get_Cylinder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Oculus::Interaction::Cylinder> (::Oculus::Interaction::Surfaces::CylinderSurface::*)()>(&::Oculus::Interaction::Surfaces::CylinderSurface::get_Cylinder)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4b5d1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::CylinderSurface*>(),
                        {"get_Cylinder", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::CylinderSurface.get_Transform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::Oculus::Interaction::Surfaces::CylinderSurface::*)()>(&::Oculus::Interaction::Surfaces::CylinderSurface::get_Transform)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa4b39b8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::CylinderSurface*>(),
                        {"get_Transform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::CylinderSurface.get_Bounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (::Oculus::Interaction::Surfaces::CylinderSurface::*)()>(&::Oculus::Interaction::Surfaces::CylinderSurface::get_Bounds)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0xa4b5d24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::CylinderSurface*>(),
                        {"get_Bounds", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::CylinderSurface.get_Facing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::CylinderSurface_NormalFacing (::Oculus::Interaction::Surfaces::CylinderSurface::*)()>(&::Oculus::Interaction::Surfaces::CylinderSurface::get_Facing)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4b5e14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::CylinderSurface*>(),
                        {"get_Facing", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::CylinderSurface.set_Facing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Surfaces::CylinderSurface::*)(::GlobalNamespace::CylinderSurface_NormalFacing)>(&::Oculus::Interaction::Surfaces::CylinderSurface::set_Facing)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4b5e1c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::CylinderSurface*>(),
                        {"set_Facing", {}, {::i2c::type_of<::GlobalNamespace::CylinderSurface_NormalFacing>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::CylinderSurface.get_Height
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Surfaces::CylinderSurface::*)()>(&::Oculus::Interaction::Surfaces::CylinderSurface::get_Height)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4b5e24;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::CylinderSurface*>(),
                        {"get_Height", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::CylinderSurface.set_Height
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Surfaces::CylinderSurface::*)(float_t)>(&::Oculus::Interaction::Surfaces::CylinderSurface::set_Height)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4b5e2c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::CylinderSurface*>(),
                        {"set_Height", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::CylinderSurface.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Surfaces::CylinderSurface::*)()>(&::Oculus::Interaction::Surfaces::CylinderSurface::Start)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xa4b5e34;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Surfaces::CylinderSurface*>(),
                    {::i2c::class_of<::Oculus::Interaction::Surfaces::CylinderSurface*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::CylinderSurface.ClosestSurfacePoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Surfaces::CylinderSurface::*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>, float_t)>(&::Oculus::Interaction::Surfaces::CylinderSurface::ClosestSurfacePoint)> {
  constexpr static std::size_t size = 0x4b0;
  constexpr static std::size_t addrs = 0xa4b5e60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::CylinderSurface*>(),
                        {"ClosestSurfacePoint", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::CylinderSurface.Raycast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Surfaces::CylinderSurface::*)(::by_ref<::UnityEngine::Ray>, ::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>, float_t)>(&::Oculus::Interaction::Surfaces::CylinderSurface::Raycast)> {
  constexpr static std::size_t size = 0x9e4;
  constexpr static std::size_t addrs = 0xa4b634c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::CylinderSurface*>(),
                        {"Raycast", {}, {::i2c::type_of<::by_ref<::UnityEngine::Ray>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::CylinderSurface.TransformScale
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Interaction::Surfaces::CylinderSurface::*)(float_t)>(&::Oculus::Interaction::Surfaces::CylinderSurface::TransformScale)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0xa4b6310;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::CylinderSurface*>(),
                        {"TransformScale", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::CylinderSurface.CancelY
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::by_ref<::UnityEngine::Vector3>)>(&::Oculus::Interaction::Surfaces::CylinderSurface::CancelY)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xa4b6d30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::CylinderSurface*>(),
                        {"CancelY", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::CylinderSurface.InjectAllCylinderSurface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Surfaces::CylinderSurface::*)(::GlobalNamespace::CylinderSurface_NormalFacing, ::Oculus::Interaction::Cylinder*, float_t)>(&::Oculus::Interaction::Surfaces::CylinderSurface::InjectAllCylinderSurface)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xa4b6d40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::CylinderSurface*>(),
                        {"InjectAllCylinderSurface", {}, {::i2c::type_of<::GlobalNamespace::CylinderSurface_NormalFacing>(), ::i2c::type_of<::Oculus::Interaction::Cylinder*>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::CylinderSurface.InjectNormalFacing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Surfaces::CylinderSurface::*)(::GlobalNamespace::CylinderSurface_NormalFacing)>(&::Oculus::Interaction::Surfaces::CylinderSurface::InjectNormalFacing)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4b6d74;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::CylinderSurface*>(),
                        {"InjectNormalFacing", {}, {::i2c::type_of<::GlobalNamespace::CylinderSurface_NormalFacing>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::CylinderSurface.InjectCylinder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Surfaces::CylinderSurface::*)(::Oculus::Interaction::Cylinder*)>(&::Oculus::Interaction::Surfaces::CylinderSurface::InjectCylinder)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4b6d7c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::CylinderSurface*>(),
                        {"InjectCylinder", {}, {::i2c::type_of<::Oculus::Interaction::Cylinder*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::CylinderSurface.InjectHeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Surfaces::CylinderSurface::*)(float_t)>(&::Oculus::Interaction::Surfaces::CylinderSurface::InjectHeight)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4b6d84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::CylinderSurface*>(),
                        {"InjectHeight", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::CylinderSurface._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Surfaces::CylinderSurface::*)()>(&::Oculus::Interaction::Surfaces::CylinderSurface::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa4b6d8c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::CylinderSurface*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::CylinderSurface.Oculus_Interaction_Surfaces_ISurface_Raycast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Surfaces::CylinderSurface::*)(::by_ref<::UnityEngine::Ray>, ::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>, float_t)>(&::Oculus::Interaction::Surfaces::CylinderSurface::Oculus_Interaction_Surfaces_ISurface_Raycast)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa4b6da0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::CylinderSurface*>(),
                        {"Oculus.Interaction.Surfaces.ISurface.Raycast", {}, {::i2c::type_of<::by_ref<::UnityEngine::Ray>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::CylinderSurface.Oculus_Interaction_Surfaces_ISurface_ClosestSurfacePoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Surfaces::CylinderSurface::*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>, float_t)>(&::Oculus::Interaction::Surfaces::CylinderSurface::Oculus_Interaction_Surfaces_ISurface_ClosestSurfacePoint)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa4b6da4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::CylinderSurface*>(),
                        {"Oculus.Interaction.Surfaces.ISurface.ClosestSurfacePoint", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Oculus::Interaction::Cylinder>& Oculus::Interaction::Surfaces::CylinderSurface::__cordl_internal_get__cylinder()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cylinder;
}
constexpr ::UnityW<::Oculus::Interaction::Cylinder> const& Oculus::Interaction::Surfaces::CylinderSurface::__cordl_internal_get__cylinder() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____cylinder;
}
constexpr void Oculus::Interaction::Surfaces::CylinderSurface::__cordl_internal_set__cylinder(::UnityW<::Oculus::Interaction::Cylinder>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____cylinder = value;
}
constexpr ::GlobalNamespace::CylinderSurface_NormalFacing& Oculus::Interaction::Surfaces::CylinderSurface::__cordl_internal_get__facing()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____facing;
}
constexpr ::GlobalNamespace::CylinderSurface_NormalFacing const& Oculus::Interaction::Surfaces::CylinderSurface::__cordl_internal_get__facing() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____facing;
}
constexpr void Oculus::Interaction::Surfaces::CylinderSurface::__cordl_internal_set__facing(::GlobalNamespace::CylinderSurface_NormalFacing  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____facing = value;
}
constexpr float_t& Oculus::Interaction::Surfaces::CylinderSurface::__cordl_internal_get__height()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____height;
}
constexpr float_t const& Oculus::Interaction::Surfaces::CylinderSurface::__cordl_internal_get__height() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____height;
}
constexpr void Oculus::Interaction::Surfaces::CylinderSurface::__cordl_internal_set__height(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____height = value;
}
constexpr bool& Oculus::Interaction::Surfaces::CylinderSurface::__cordl_internal_get__started()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr bool const& Oculus::Interaction::Surfaces::CylinderSurface::__cordl_internal_get__started() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____started;
}
constexpr void Oculus::Interaction::Surfaces::CylinderSurface::__cordl_internal_set__started(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____started = value;
}
inline bool Oculus::Interaction::Surfaces::CylinderSurface::get_IsValid()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::CylinderSurface*>(),
                        {"get_IsValid", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline float_t Oculus::Interaction::Surfaces::CylinderSurface::get_Radius()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::CylinderSurface*>(),
                        {"get_Radius", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::UnityW<::Oculus::Interaction::Cylinder> Oculus::Interaction::Surfaces::CylinderSurface::get_Cylinder()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::CylinderSurface*>(),
                        {"get_Cylinder", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::Oculus::Interaction::Cylinder>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> Oculus::Interaction::Surfaces::CylinderSurface::get_Transform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::CylinderSurface*>(),
                        {"get_Transform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline ::UnityEngine::Bounds Oculus::Interaction::Surfaces::CylinderSurface::get_Bounds()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::CylinderSurface*>(),
                        {"get_Bounds", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(this, ___internal_method);
}
inline ::GlobalNamespace::CylinderSurface_NormalFacing Oculus::Interaction::Surfaces::CylinderSurface::get_Facing()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::CylinderSurface*>(),
                        {"get_Facing", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::CylinderSurface_NormalFacing>(this, ___internal_method);
}
inline void Oculus::Interaction::Surfaces::CylinderSurface::set_Facing(::GlobalNamespace::CylinderSurface_NormalFacing  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::CylinderSurface*>(),
                        {"set_Facing", {}, {::i2c::type_of<::GlobalNamespace::CylinderSurface_NormalFacing>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t Oculus::Interaction::Surfaces::CylinderSurface::get_Height()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::CylinderSurface*>(),
                        {"get_Height", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void Oculus::Interaction::Surfaces::CylinderSurface::set_Height(float_t  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::CylinderSurface*>(),
                        {"set_Height", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Oculus::Interaction::Surfaces::CylinderSurface::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Surfaces::CylinderSurface*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Oculus::Interaction::Surfaces::CylinderSurface::ClosestSurfacePoint(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  point, ::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>  hit, float_t  maxDistance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::CylinderSurface*>(),
                        {"ClosestSurfacePoint", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, point, hit, maxDistance);
}
inline bool Oculus::Interaction::Surfaces::CylinderSurface::Raycast(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Ray>  ray, ::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>  hit, float_t  maxDistance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::CylinderSurface*>(),
                        {"Raycast", {}, {::i2c::type_of<::by_ref<::UnityEngine::Ray>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, ray, hit, maxDistance);
}
inline float_t Oculus::Interaction::Surfaces::CylinderSurface::TransformScale(float_t  val)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::CylinderSurface*>(),
                        {"TransformScale", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, val);
}
inline ::UnityEngine::Vector3 Oculus::Interaction::Surfaces::CylinderSurface::CancelY(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  vector)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::CylinderSurface*>(),
                        {"CancelY", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, vector);
}
inline void Oculus::Interaction::Surfaces::CylinderSurface::InjectAllCylinderSurface(::GlobalNamespace::CylinderSurface_NormalFacing  facing, ::Oculus::Interaction::Cylinder*  cylinder, float_t  height)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::CylinderSurface*>(),
                        {"InjectAllCylinderSurface", {}, {::i2c::type_of<::GlobalNamespace::CylinderSurface_NormalFacing>(), ::i2c::type_of<::Oculus::Interaction::Cylinder*>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, facing, cylinder, height);
}
inline void Oculus::Interaction::Surfaces::CylinderSurface::InjectNormalFacing(::GlobalNamespace::CylinderSurface_NormalFacing  facing)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::CylinderSurface*>(),
                        {"InjectNormalFacing", {}, {::i2c::type_of<::GlobalNamespace::CylinderSurface_NormalFacing>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, facing);
}
inline void Oculus::Interaction::Surfaces::CylinderSurface::InjectCylinder(::Oculus::Interaction::Cylinder*  cylinder)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::CylinderSurface*>(),
                        {"InjectCylinder", {}, {::i2c::type_of<::Oculus::Interaction::Cylinder*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, cylinder);
}
inline void Oculus::Interaction::Surfaces::CylinderSurface::InjectHeight(float_t  height)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::CylinderSurface*>(),
                        {"InjectHeight", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, height);
}
inline void Oculus::Interaction::Surfaces::CylinderSurface::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::CylinderSurface*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Oculus::Interaction::Surfaces::CylinderSurface::Oculus_Interaction_Surfaces_ISurface_Raycast(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Ray>  ray, ::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>  hit, float_t  maxDistance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::CylinderSurface*>(),
                        {"Oculus.Interaction.Surfaces.ISurface.Raycast", {}, {::i2c::type_of<::by_ref<::UnityEngine::Ray>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, ray, hit, maxDistance);
}
inline bool Oculus::Interaction::Surfaces::CylinderSurface::Oculus_Interaction_Surfaces_ISurface_ClosestSurfacePoint(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  point, ::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>  hit, float_t  maxDistance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::CylinderSurface*>(),
                        {"Oculus.Interaction.Surfaces.ISurface.ClosestSurfacePoint", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, point, hit, maxDistance);
}
inline ::Oculus::Interaction::Surfaces::CylinderSurface* Oculus::Interaction::Surfaces::CylinderSurface::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Surfaces::CylinderSurface*>());
}
/// @brief Convert operator to "::Oculus::Interaction::Surfaces::ISurface"
constexpr  Oculus::Interaction::Surfaces::CylinderSurface::operator ::Oculus::Interaction::Surfaces::ISurface*() noexcept {
return static_cast<::Oculus::Interaction::Surfaces::ISurface*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::Surfaces::ISurface"
constexpr ::Oculus::Interaction::Surfaces::ISurface* Oculus::Interaction::Surfaces::CylinderSurface::i___Oculus__Interaction__Surfaces__ISurface() noexcept {
return static_cast<::Oculus::Interaction::Surfaces::ISurface*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Oculus::Interaction::Surfaces::IBounds"
constexpr  Oculus::Interaction::Surfaces::CylinderSurface::operator ::Oculus::Interaction::Surfaces::IBounds*() noexcept {
return static_cast<::Oculus::Interaction::Surfaces::IBounds*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::Surfaces::IBounds"
constexpr ::Oculus::Interaction::Surfaces::IBounds* Oculus::Interaction::Surfaces::CylinderSurface::i___Oculus__Interaction__Surfaces__IBounds() noexcept {
return static_cast<::Oculus::Interaction::Surfaces::IBounds*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Surfaces::CylinderSurface::CylinderSurface()   {
}
