#pragma once
// IWYU pragma private; include "Oculus/Interaction/Surfaces/CircleSurface.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/Surfaces/zzzz__CircleSurface_def.hpp"
#include "Oculus/Interaction/Surfaces/zzzz__ISurfacePatch_def.hpp"
#include "Oculus/Interaction/Surfaces/zzzz__ISurface_def.hpp"
#include "Oculus/Interaction/Surfaces/zzzz__PlaneSurface_def.hpp"
#include "Oculus/Interaction/Surfaces/zzzz__SurfaceHit_def.hpp"
#include "UnityEngine/zzzz__Ray_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::CircleSurface.get_Transform
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::Oculus::Interaction::Surfaces::CircleSurface::*)()>(&::Oculus::Interaction::Surfaces::CircleSurface::get_Transform)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0xa4b3368;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::CircleSurface*>(),
                        {"get_Transform", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::CircleSurface.get_BackingSurface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Interaction::Surfaces::ISurface* (::Oculus::Interaction::Surfaces::CircleSurface::*)()>(&::Oculus::Interaction::Surfaces::CircleSurface::get_BackingSurface)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4b3388;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::CircleSurface*>(),
                        {"get_BackingSurface", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::CircleSurface.Start
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Surfaces::CircleSurface::*)()>(&::Oculus::Interaction::Surfaces::CircleSurface::Start)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa4b3390;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::Surfaces::CircleSurface*>(),
                    {::i2c::class_of<::Oculus::Interaction::Surfaces::CircleSurface*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::CircleSurface.Raycast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Surfaces::CircleSurface::*)(::by_ref<::UnityEngine::Ray>, ::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>, float_t)>(&::Oculus::Interaction::Surfaces::CircleSurface::Raycast)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0xa4b3394;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::CircleSurface*>(),
                        {"Raycast", {}, {::i2c::type_of<::by_ref<::UnityEngine::Ray>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::CircleSurface.ClosestSurfacePoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Surfaces::CircleSurface::*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>, float_t)>(&::Oculus::Interaction::Surfaces::CircleSurface::ClosestSurfacePoint)> {
  constexpr static std::size_t size = 0x1c4;
  constexpr static std::size_t addrs = 0xa4b3618;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::CircleSurface*>(),
                        {"ClosestSurfacePoint", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::CircleSurface.InjectAllCircleProximityField
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Surfaces::CircleSurface::*)(::Oculus::Interaction::Surfaces::PlaneSurface*)>(&::Oculus::Interaction::Surfaces::CircleSurface::InjectAllCircleProximityField)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4b3948;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::CircleSurface*>(),
                        {"InjectAllCircleProximityField", {}, {::i2c::type_of<::Oculus::Interaction::Surfaces::PlaneSurface*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::CircleSurface.InjectAllCircleSurface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Surfaces::CircleSurface::*)(::Oculus::Interaction::Surfaces::PlaneSurface*)>(&::Oculus::Interaction::Surfaces::CircleSurface::InjectAllCircleSurface)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4b3950;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::CircleSurface*>(),
                        {"InjectAllCircleSurface", {}, {::i2c::type_of<::Oculus::Interaction::Surfaces::PlaneSurface*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::CircleSurface.InjectPlaneSurface
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Surfaces::CircleSurface::*)(::Oculus::Interaction::Surfaces::PlaneSurface*)>(&::Oculus::Interaction::Surfaces::CircleSurface::InjectPlaneSurface)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4b3958;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::CircleSurface*>(),
                        {"InjectPlaneSurface", {}, {::i2c::type_of<::Oculus::Interaction::Surfaces::PlaneSurface*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::CircleSurface.InjectOptionalRadius
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Surfaces::CircleSurface::*)(float_t)>(&::Oculus::Interaction::Surfaces::CircleSurface::InjectOptionalRadius)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4b3960;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::CircleSurface*>(),
                        {"InjectOptionalRadius", {}, {::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::CircleSurface._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::Surfaces::CircleSurface::*)()>(&::Oculus::Interaction::Surfaces::CircleSurface::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0xa4b3968;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::CircleSurface*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::CircleSurface.Oculus_Interaction_Surfaces_ISurface_Raycast
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Surfaces::CircleSurface::*)(::by_ref<::UnityEngine::Ray>, ::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>, float_t)>(&::Oculus::Interaction::Surfaces::CircleSurface::Oculus_Interaction_Surfaces_ISurface_Raycast)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa4b397c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::CircleSurface*>(),
                        {"Oculus.Interaction.Surfaces.ISurface.Raycast", {}, {::i2c::type_of<::by_ref<::UnityEngine::Ray>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::Surfaces::CircleSurface.Oculus_Interaction_Surfaces_ISurface_ClosestSurfacePoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::Surfaces::CircleSurface::*)(::by_ref<::UnityEngine::Vector3>, ::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>, float_t)>(&::Oculus::Interaction::Surfaces::CircleSurface::Oculus_Interaction_Surfaces_ISurface_ClosestSurfacePoint)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0xa4b3980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::CircleSurface*>(),
                        {"Oculus.Interaction.Surfaces.ISurface.ClosestSurfacePoint", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Oculus::Interaction::Surfaces::PlaneSurface>& Oculus::Interaction::Surfaces::CircleSurface::__cordl_internal_get__planeSurface()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____planeSurface;
}
constexpr ::UnityW<::Oculus::Interaction::Surfaces::PlaneSurface> const& Oculus::Interaction::Surfaces::CircleSurface::__cordl_internal_get__planeSurface() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____planeSurface;
}
constexpr void Oculus::Interaction::Surfaces::CircleSurface::__cordl_internal_set__planeSurface(::UnityW<::Oculus::Interaction::Surfaces::PlaneSurface>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____planeSurface = value;
}
constexpr float_t& Oculus::Interaction::Surfaces::CircleSurface::__cordl_internal_get__radius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____radius;
}
constexpr float_t const& Oculus::Interaction::Surfaces::CircleSurface::__cordl_internal_get__radius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____radius;
}
constexpr void Oculus::Interaction::Surfaces::CircleSurface::__cordl_internal_set__radius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____radius = value;
}
inline ::UnityW<::UnityEngine::Transform> Oculus::Interaction::Surfaces::CircleSurface::get_Transform()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::CircleSurface*>(),
                        {"get_Transform", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline ::Oculus::Interaction::Surfaces::ISurface* Oculus::Interaction::Surfaces::CircleSurface::get_BackingSurface()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::CircleSurface*>(),
                        {"get_BackingSurface", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Oculus::Interaction::Surfaces::ISurface*>(this, ___internal_method);
}
inline void Oculus::Interaction::Surfaces::CircleSurface::Start()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::Surfaces::CircleSurface*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Oculus::Interaction::Surfaces::CircleSurface::Raycast(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Ray>  ray, ::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>  hit, float_t  maxDistance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::CircleSurface*>(),
                        {"Raycast", {}, {::i2c::type_of<::by_ref<::UnityEngine::Ray>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, ray, hit, maxDistance);
}
inline bool Oculus::Interaction::Surfaces::CircleSurface::ClosestSurfacePoint(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  point, ::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>  hit, float_t  maxDistance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::CircleSurface*>(),
                        {"ClosestSurfacePoint", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, point, hit, maxDistance);
}
inline void Oculus::Interaction::Surfaces::CircleSurface::InjectAllCircleProximityField(::Oculus::Interaction::Surfaces::PlaneSurface*  planeSurface)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::CircleSurface*>(),
                        {"InjectAllCircleProximityField", {}, {::i2c::type_of<::Oculus::Interaction::Surfaces::PlaneSurface*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, planeSurface);
}
inline void Oculus::Interaction::Surfaces::CircleSurface::InjectAllCircleSurface(::Oculus::Interaction::Surfaces::PlaneSurface*  planeSurface)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::CircleSurface*>(),
                        {"InjectAllCircleSurface", {}, {::i2c::type_of<::Oculus::Interaction::Surfaces::PlaneSurface*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, planeSurface);
}
inline void Oculus::Interaction::Surfaces::CircleSurface::InjectPlaneSurface(::Oculus::Interaction::Surfaces::PlaneSurface*  planeSurface)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::CircleSurface*>(),
                        {"InjectPlaneSurface", {}, {::i2c::type_of<::Oculus::Interaction::Surfaces::PlaneSurface*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, planeSurface);
}
inline void Oculus::Interaction::Surfaces::CircleSurface::InjectOptionalRadius(float_t  radius)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::CircleSurface*>(),
                        {"InjectOptionalRadius", {}, {::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, radius);
}
inline void Oculus::Interaction::Surfaces::CircleSurface::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::CircleSurface*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Oculus::Interaction::Surfaces::CircleSurface::Oculus_Interaction_Surfaces_ISurface_Raycast(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Ray>  ray, ::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>  hit, float_t  maxDistance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::CircleSurface*>(),
                        {"Oculus.Interaction.Surfaces.ISurface.Raycast", {}, {::i2c::type_of<::by_ref<::UnityEngine::Ray>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, ray, hit, maxDistance);
}
inline bool Oculus::Interaction::Surfaces::CircleSurface::Oculus_Interaction_Surfaces_ISurface_ClosestSurfacePoint(/* [IsReadOnly] */ ::by_ref<::UnityEngine::Vector3>  point, ::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>  hit, float_t  maxDistance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::Surfaces::CircleSurface*>(),
                        {"Oculus.Interaction.Surfaces.ISurface.ClosestSurfacePoint", {}, {::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::Oculus::Interaction::Surfaces::SurfaceHit>>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, point, hit, maxDistance);
}
inline ::Oculus::Interaction::Surfaces::CircleSurface* Oculus::Interaction::Surfaces::CircleSurface::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::Surfaces::CircleSurface*>());
}
/// @brief Convert operator to "::Oculus::Interaction::Surfaces::ISurfacePatch"
constexpr  Oculus::Interaction::Surfaces::CircleSurface::operator ::Oculus::Interaction::Surfaces::ISurfacePatch*() noexcept {
return static_cast<::Oculus::Interaction::Surfaces::ISurfacePatch*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::Surfaces::ISurfacePatch"
constexpr ::Oculus::Interaction::Surfaces::ISurfacePatch* Oculus::Interaction::Surfaces::CircleSurface::i___Oculus__Interaction__Surfaces__ISurfacePatch() noexcept {
return static_cast<::Oculus::Interaction::Surfaces::ISurfacePatch*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Oculus::Interaction::Surfaces::ISurface"
constexpr  Oculus::Interaction::Surfaces::CircleSurface::operator ::Oculus::Interaction::Surfaces::ISurface*() noexcept {
return static_cast<::Oculus::Interaction::Surfaces::ISurface*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::Surfaces::ISurface"
constexpr ::Oculus::Interaction::Surfaces::ISurface* Oculus::Interaction::Surfaces::CircleSurface::i___Oculus__Interaction__Surfaces__ISurface() noexcept {
return static_cast<::Oculus::Interaction::Surfaces::ISurface*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::Surfaces::CircleSurface::CircleSurface()   {
}
