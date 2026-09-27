#pragma once
// IWYU pragma private; include "Fusion/LagCompensation/RaycastQuery.hpp"
#include "Fusion/LagCompensation/zzzz__Query_impl.hpp"
#include "UnityEngine/zzzz__RaycastHit2D_impl.hpp"
#include "UnityEngine/zzzz__RaycastHit_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Fusion/LagCompensation/zzzz__RaycastQuery_def.hpp"
#include "Fusion/LagCompensation/zzzz__AABB_def.hpp"
#include "Fusion/LagCompensation/zzzz__HitboxCollider_def.hpp"
#include "Fusion/LagCompensation/zzzz__HitboxHit_def.hpp"
#include "Fusion/LagCompensation/zzzz__IHitboxColliderContainer_def.hpp"
#include "Fusion/LagCompensation/zzzz__RaycastQueryParams_def.hpp"
#include "Fusion/zzzz__HitOptions_def.hpp"
#include "Fusion/zzzz__LagCompensatedHit_def.hpp"
#include "Fusion/zzzz__NetworkRunner_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Fusion::LagCompensation::RaycastQuery._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::LagCompensation::RaycastQuery::*)(::by_ref<::Fusion::LagCompensation::RaycastQueryParams>)>(&::Fusion::LagCompensation::RaycastQuery::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x601d058;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::RaycastQuery*>(),
                        {".ctor", {}, {::i2c::type_of<::by_ref<::Fusion::LagCompensation::RaycastQueryParams>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::RaycastQuery.Check
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::LagCompensation::RaycastQuery::*)(::by_ref<::Fusion::LagCompensation::AABB>)>(&::Fusion::LagCompensation::RaycastQuery::Check)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x601dc70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::LagCompensation::RaycastQuery*>(),
                    {::i2c::class_of<::Fusion::LagCompensation::RaycastQuery*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::RaycastQuery.NarrowPhase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::LagCompensation::RaycastQuery::*)(::Fusion::LagCompensation::IHitboxColliderContainer*, ::System::Collections::Generic::HashSet_1<int32_t>*, ::System::Collections::Generic::List_1<::Fusion::LagCompensation::HitboxHit>*)>(&::Fusion::LagCompensation::RaycastQuery::NarrowPhase)> {
  constexpr static std::size_t size = 0x310;
  constexpr static std::size_t addrs = 0x601de38;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::LagCompensation::RaycastQuery*>(),
                    {::i2c::class_of<::Fusion::LagCompensation::RaycastQuery*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::RaycastQuery.PerformStaticQuery
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::LagCompensation::RaycastQuery::*)(::Fusion::NetworkRunner*, ::System::Collections::Generic::List_1<::Fusion::LagCompensatedHit>*, ::Fusion::HitOptions)>(&::Fusion::LagCompensation::RaycastQuery::PerformStaticQuery)> {
  constexpr static std::size_t size = 0x290;
  constexpr static std::size_t addrs = 0x601e148;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::LagCompensation::RaycastQuery*>(),
                    {::i2c::class_of<::Fusion::LagCompensation::RaycastQuery*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::RaycastQuery.NarrowPhaseRay
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::LagCompensation::RaycastQuery::*)(::by_ref<::Fusion::LagCompensation::HitboxCollider>, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>, ::by_ref<float_t>)>(&::Fusion::LagCompensation::RaycastQuery::NarrowPhaseRay)> {
  constexpr static std::size_t size = 0x47c;
  constexpr static std::size_t addrs = 0x601d490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::RaycastQuery*>(),
                        {"NarrowPhaseRay", {}, {::i2c::type_of<::by_ref<::Fusion::LagCompensation::HitboxCollider>>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& Fusion::LagCompensation::RaycastQuery::__cordl_internal_get_Direction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Direction;
}
constexpr ::UnityEngine::Vector3 const& Fusion::LagCompensation::RaycastQuery::__cordl_internal_get_Direction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Direction;
}
constexpr void Fusion::LagCompensation::RaycastQuery::__cordl_internal_set_Direction(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Direction = value;
}
constexpr ::UnityEngine::Vector3& Fusion::LagCompensation::RaycastQuery::__cordl_internal_get_Origin()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Origin;
}
constexpr ::UnityEngine::Vector3 const& Fusion::LagCompensation::RaycastQuery::__cordl_internal_get_Origin() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Origin;
}
constexpr void Fusion::LagCompensation::RaycastQuery::__cordl_internal_set_Origin(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Origin = value;
}
constexpr float_t& Fusion::LagCompensation::RaycastQuery::__cordl_internal_get_Length()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Length;
}
constexpr float_t const& Fusion::LagCompensation::RaycastQuery::__cordl_internal_get_Length() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Length;
}
constexpr void Fusion::LagCompensation::RaycastQuery::__cordl_internal_set_Length(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Length = value;
}
constexpr ::UnityEngine::RaycastHit& Fusion::LagCompensation::RaycastQuery::__cordl_internal_get__raycastHit()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____raycastHit;
}
constexpr ::UnityEngine::RaycastHit const& Fusion::LagCompensation::RaycastQuery::__cordl_internal_get__raycastHit() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____raycastHit;
}
constexpr void Fusion::LagCompensation::RaycastQuery::__cordl_internal_set__raycastHit(::UnityEngine::RaycastHit  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____raycastHit = value;
}
constexpr ::UnityEngine::RaycastHit2D& Fusion::LagCompensation::RaycastQuery::__cordl_internal_get__raycastHit2D()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____raycastHit2D;
}
constexpr ::UnityEngine::RaycastHit2D const& Fusion::LagCompensation::RaycastQuery::__cordl_internal_get__raycastHit2D() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____raycastHit2D;
}
constexpr void Fusion::LagCompensation::RaycastQuery::__cordl_internal_set__raycastHit2D(::UnityEngine::RaycastHit2D  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____raycastHit2D = value;
}
inline void Fusion::LagCompensation::RaycastQuery::_ctor(::by_ref<::Fusion::LagCompensation::RaycastQueryParams>  raycastQueryParams)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::RaycastQuery*>(),
                        {".ctor", {}, {::i2c::type_of<::by_ref<::Fusion::LagCompensation::RaycastQueryParams>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, raycastQueryParams);
}
inline bool Fusion::LagCompensation::RaycastQuery::Check(::by_ref<::Fusion::LagCompensation::AABB>  bounds)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::LagCompensation::RaycastQuery*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, bounds);
}
inline bool Fusion::LagCompensation::RaycastQuery::NarrowPhase(::Fusion::LagCompensation::IHitboxColliderContainer*  container, ::System::Collections::Generic::HashSet_1<int32_t>*  candidates, ::System::Collections::Generic::List_1<::Fusion::LagCompensation::HitboxHit>*  hits)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::LagCompensation::RaycastQuery*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, container, candidates, hits);
}
inline void Fusion::LagCompensation::RaycastQuery::PerformStaticQuery(::Fusion::NetworkRunner*  runner, ::System::Collections::Generic::List_1<::Fusion::LagCompensatedHit>*  hits, ::Fusion::HitOptions  options)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::LagCompensation::RaycastQuery*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, hits, options);
}
inline bool Fusion::LagCompensation::RaycastQuery::NarrowPhaseRay(::by_ref<::Fusion::LagCompensation::HitboxCollider>  c, ::UnityEngine::Vector3  origin, ::UnityEngine::Vector3  direction, float_t  length, ::by_ref<::UnityEngine::Vector3>  point, ::by_ref<::UnityEngine::Vector3>  normal, ::by_ref<float_t>  distance)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::RaycastQuery*>(),
                        {"NarrowPhaseRay", {}, {::i2c::type_of<::by_ref<::Fusion::LagCompensation::HitboxCollider>>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, c, origin, direction, length, point, normal, distance);
}
inline ::Fusion::LagCompensation::RaycastQuery* Fusion::LagCompensation::RaycastQuery::New_ctor(::by_ref<::Fusion::LagCompensation::RaycastQueryParams>  raycastQueryParams)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::LagCompensation::RaycastQuery*>(raycastQueryParams));
}
// Ctor Parameters []
constexpr ::Fusion::LagCompensation::RaycastQuery::RaycastQuery()   {
}
