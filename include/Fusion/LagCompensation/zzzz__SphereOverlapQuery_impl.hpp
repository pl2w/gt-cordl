#pragma once
// IWYU pragma private; include "Fusion/LagCompensation/SphereOverlapQuery.hpp"
#include "Fusion/LagCompensation/zzzz__Query_impl.hpp"
#include "UnityEngine/zzzz__Collider2D_impl.hpp"
#include "UnityEngine/zzzz__Collider_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Fusion/LagCompensation/zzzz__SphereOverlapQuery_def.hpp"
#include "Fusion/LagCompensation/zzzz__AABB_def.hpp"
#include "Fusion/LagCompensation/zzzz__HitboxCollider_def.hpp"
#include "Fusion/LagCompensation/zzzz__HitboxHit_def.hpp"
#include "Fusion/LagCompensation/zzzz__IHitboxColliderContainer_def.hpp"
#include "Fusion/LagCompensation/zzzz__SphereOverlapQueryParams_def.hpp"
#include "Fusion/zzzz__HitOptions_def.hpp"
#include "Fusion/zzzz__LagCompensatedHit_def.hpp"
#include "Fusion/zzzz__NetworkRunner_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Collider2D_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Fusion::LagCompensation::SphereOverlapQuery._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::LagCompensation::SphereOverlapQuery::*)(::by_ref<::Fusion::LagCompensation::SphereOverlapQueryParams>)>(&::Fusion::LagCompensation::SphereOverlapQuery::_ctor)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x601e464;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::SphereOverlapQuery*>(),
                        {".ctor", {}, {::i2c::type_of<::by_ref<::Fusion::LagCompensation::SphereOverlapQueryParams>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::SphereOverlapQuery._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::LagCompensation::SphereOverlapQuery::*)(::by_ref<::Fusion::LagCompensation::SphereOverlapQueryParams>, ::ArrayW<::UnityEngine::Collider*>, ::ArrayW<::UnityEngine::Collider2D*>)>(&::Fusion::LagCompensation::SphereOverlapQuery::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x601e51c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::SphereOverlapQuery*>(),
                        {".ctor", {}, {::i2c::type_of<::by_ref<::Fusion::LagCompensation::SphereOverlapQueryParams>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Collider*>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Collider2D*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::SphereOverlapQuery.Check
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::LagCompensation::SphereOverlapQuery::*)(::by_ref<::Fusion::LagCompensation::AABB>)>(&::Fusion::LagCompensation::SphereOverlapQuery::Check)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x601e580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::LagCompensation::SphereOverlapQuery*>(),
                    {::i2c::class_of<::Fusion::LagCompensation::SphereOverlapQuery*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::SphereOverlapQuery.NarrowPhase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::LagCompensation::SphereOverlapQuery::*)(::Fusion::LagCompensation::IHitboxColliderContainer*, ::System::Collections::Generic::HashSet_1<int32_t>*, ::System::Collections::Generic::List_1<::Fusion::LagCompensation::HitboxHit>*)>(&::Fusion::LagCompensation::SphereOverlapQuery::NarrowPhase)> {
  constexpr static std::size_t size = 0x35c;
  constexpr static std::size_t addrs = 0x601e5a8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::LagCompensation::SphereOverlapQuery*>(),
                    {::i2c::class_of<::Fusion::LagCompensation::SphereOverlapQuery*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::SphereOverlapQuery.PerformStaticQuery
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::LagCompensation::SphereOverlapQuery::*)(::Fusion::NetworkRunner*, ::System::Collections::Generic::List_1<::Fusion::LagCompensatedHit>*, ::Fusion::HitOptions)>(&::Fusion::LagCompensation::SphereOverlapQuery::PerformStaticQuery)> {
  constexpr static std::size_t size = 0x398;
  constexpr static std::size_t addrs = 0x601ec14;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::LagCompensation::SphereOverlapQuery*>(),
                    {::i2c::class_of<::Fusion::LagCompensation::SphereOverlapQuery*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::SphereOverlapQuery.NarrowPhaseSphere
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::LagCompensation::SphereOverlapQuery::*)(::by_ref<::Fusion::LagCompensation::HitboxCollider>, ::UnityEngine::Vector3, float_t, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>)>(&::Fusion::LagCompensation::SphereOverlapQuery::NarrowPhaseSphere)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x601e904;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::SphereOverlapQuery*>(),
                        {"NarrowPhaseSphere", {}, {::i2c::type_of<::by_ref<::Fusion::LagCompensation::HitboxCollider>>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& Fusion::LagCompensation::SphereOverlapQuery::__cordl_internal_get_Center()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Center;
}
constexpr ::UnityEngine::Vector3 const& Fusion::LagCompensation::SphereOverlapQuery::__cordl_internal_get_Center() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Center;
}
constexpr void Fusion::LagCompensation::SphereOverlapQuery::__cordl_internal_set_Center(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Center = value;
}
constexpr float_t& Fusion::LagCompensation::SphereOverlapQuery::__cordl_internal_get_Radius()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Radius;
}
constexpr float_t const& Fusion::LagCompensation::SphereOverlapQuery::__cordl_internal_get_Radius() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Radius;
}
constexpr void Fusion::LagCompensation::SphereOverlapQuery::__cordl_internal_set_Radius(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Radius = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>>& Fusion::LagCompensation::SphereOverlapQuery::__cordl_internal_get__physXOverlapHits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____physXOverlapHits;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>> const& Fusion::LagCompensation::SphereOverlapQuery::__cordl_internal_get__physXOverlapHits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____physXOverlapHits;
}
constexpr void Fusion::LagCompensation::SphereOverlapQuery::__cordl_internal_set__physXOverlapHits(::ArrayW<::UnityW<::UnityEngine::Collider>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____physXOverlapHits = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider2D>>& Fusion::LagCompensation::SphereOverlapQuery::__cordl_internal_get__box2DOverlapHits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____box2DOverlapHits;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider2D>> const& Fusion::LagCompensation::SphereOverlapQuery::__cordl_internal_get__box2DOverlapHits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____box2DOverlapHits;
}
constexpr void Fusion::LagCompensation::SphereOverlapQuery::__cordl_internal_set__box2DOverlapHits(::ArrayW<::UnityW<::UnityEngine::Collider2D>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____box2DOverlapHits = value;
}
inline void Fusion::LagCompensation::SphereOverlapQuery::_ctor(::by_ref<::Fusion::LagCompensation::SphereOverlapQueryParams>  sphereOverlapParams)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::SphereOverlapQuery*>(),
                        {".ctor", {}, {::i2c::type_of<::by_ref<::Fusion::LagCompensation::SphereOverlapQueryParams>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sphereOverlapParams);
}
inline void Fusion::LagCompensation::SphereOverlapQuery::_ctor(::by_ref<::Fusion::LagCompensation::SphereOverlapQueryParams>  sphereOverlapParams, ::ArrayW<::UnityEngine::Collider*>  physXOverlapHitsCache, ::ArrayW<::UnityEngine::Collider2D*>  box2DOverlapHitsCache)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::SphereOverlapQuery*>(),
                        {".ctor", {}, {::i2c::type_of<::by_ref<::Fusion::LagCompensation::SphereOverlapQueryParams>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Collider*>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Collider2D*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sphereOverlapParams, physXOverlapHitsCache, box2DOverlapHitsCache);
}
inline bool Fusion::LagCompensation::SphereOverlapQuery::Check(::by_ref<::Fusion::LagCompensation::AABB>  bounds)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::LagCompensation::SphereOverlapQuery*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, bounds);
}
inline bool Fusion::LagCompensation::SphereOverlapQuery::NarrowPhase(::Fusion::LagCompensation::IHitboxColliderContainer*  container, ::System::Collections::Generic::HashSet_1<int32_t>*  candidates, ::System::Collections::Generic::List_1<::Fusion::LagCompensation::HitboxHit>*  hits)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::LagCompensation::SphereOverlapQuery*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, container, candidates, hits);
}
inline void Fusion::LagCompensation::SphereOverlapQuery::PerformStaticQuery(::Fusion::NetworkRunner*  runner, ::System::Collections::Generic::List_1<::Fusion::LagCompensatedHit>*  hits, ::Fusion::HitOptions  options)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::LagCompensation::SphereOverlapQuery*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, hits, options);
}
inline bool Fusion::LagCompensation::SphereOverlapQuery::NarrowPhaseSphere(::by_ref<::Fusion::LagCompensation::HitboxCollider>  c, ::UnityEngine::Vector3  origin, float_t  radius, ::by_ref<::UnityEngine::Vector3>  point, ::by_ref<::UnityEngine::Vector3>  normal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::SphereOverlapQuery*>(),
                        {"NarrowPhaseSphere", {}, {::i2c::type_of<::by_ref<::Fusion::LagCompensation::HitboxCollider>>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, c, origin, radius, point, normal);
}
inline ::Fusion::LagCompensation::SphereOverlapQuery* Fusion::LagCompensation::SphereOverlapQuery::New_ctor(::by_ref<::Fusion::LagCompensation::SphereOverlapQueryParams>  sphereOverlapParams)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::LagCompensation::SphereOverlapQuery*>(sphereOverlapParams));
}
inline ::Fusion::LagCompensation::SphereOverlapQuery* Fusion::LagCompensation::SphereOverlapQuery::New_ctor(::by_ref<::Fusion::LagCompensation::SphereOverlapQueryParams>  sphereOverlapParams, ::ArrayW<::UnityEngine::Collider*>  physXOverlapHitsCache, ::ArrayW<::UnityEngine::Collider2D*>  box2DOverlapHitsCache)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::LagCompensation::SphereOverlapQuery*>(sphereOverlapParams, physXOverlapHitsCache, box2DOverlapHitsCache));
}
// Ctor Parameters []
constexpr ::Fusion::LagCompensation::SphereOverlapQuery::SphereOverlapQuery()   {
}
