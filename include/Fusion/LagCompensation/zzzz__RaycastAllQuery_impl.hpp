#pragma once
// IWYU pragma private; include "Fusion/LagCompensation/RaycastAllQuery.hpp"
#include "Fusion/LagCompensation/zzzz__RaycastQuery_impl.hpp"
#include "UnityEngine/zzzz__RaycastHit2D_impl.hpp"
#include "UnityEngine/zzzz__RaycastHit_impl.hpp"
#include "Fusion/LagCompensation/zzzz__RaycastAllQuery_def.hpp"
#include "Fusion/LagCompensation/zzzz__HitboxHit_def.hpp"
#include "Fusion/LagCompensation/zzzz__IHitboxColliderContainer_def.hpp"
#include "Fusion/LagCompensation/zzzz__RaycastQueryParams_def.hpp"
#include "Fusion/zzzz__HitOptions_def.hpp"
#include "Fusion/zzzz__LagCompensatedHit_def.hpp"
#include "Fusion/zzzz__NetworkRunner_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__RaycastHit2D_def.hpp"
#include "UnityEngine/zzzz__RaycastHit_def.hpp"
//  Writing Method size for method: ::Fusion::LagCompensation::RaycastAllQuery._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::LagCompensation::RaycastAllQuery::*)(::by_ref<::Fusion::LagCompensation::RaycastQueryParams>)>(&::Fusion::LagCompensation::RaycastAllQuery::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x601cf90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::RaycastAllQuery*>(),
                        {".ctor", {}, {::i2c::type_of<::by_ref<::Fusion::LagCompensation::RaycastQueryParams>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::RaycastAllQuery._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::LagCompensation::RaycastAllQuery::*)(::by_ref<::Fusion::LagCompensation::RaycastQueryParams>, ::ArrayW<::UnityEngine::RaycastHit>, ::ArrayW<::UnityEngine::RaycastHit2D>)>(&::Fusion::LagCompensation::RaycastAllQuery::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x601d0a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::RaycastAllQuery*>(),
                        {".ctor", {}, {::i2c::type_of<::by_ref<::Fusion::LagCompensation::RaycastQueryParams>>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit>>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit2D>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::RaycastAllQuery.NarrowPhase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::LagCompensation::RaycastAllQuery::*)(::Fusion::LagCompensation::IHitboxColliderContainer*, ::System::Collections::Generic::HashSet_1<int32_t>*, ::System::Collections::Generic::List_1<::Fusion::LagCompensation::HitboxHit>*)>(&::Fusion::LagCompensation::RaycastAllQuery::NarrowPhase)> {
  constexpr static std::size_t size = 0x37c;
  constexpr static std::size_t addrs = 0x601d114;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::LagCompensation::RaycastAllQuery*>(),
                    {::i2c::class_of<::Fusion::LagCompensation::RaycastAllQuery*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::RaycastAllQuery.PerformStaticQuery
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::LagCompensation::RaycastAllQuery::*)(::Fusion::NetworkRunner*, ::System::Collections::Generic::List_1<::Fusion::LagCompensatedHit>*, ::Fusion::HitOptions)>(&::Fusion::LagCompensation::RaycastAllQuery::PerformStaticQuery)> {
  constexpr static std::size_t size = 0x364;
  constexpr static std::size_t addrs = 0x601d90c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::LagCompensation::RaycastAllQuery*>(),
                    {::i2c::class_of<::Fusion::LagCompensation::RaycastAllQuery*>(), 7}
                ));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::UnityEngine::RaycastHit>& Fusion::LagCompensation::RaycastAllQuery::__cordl_internal_get__physXRaycastHits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____physXRaycastHits;
}
constexpr ::ArrayW<::UnityEngine::RaycastHit> const& Fusion::LagCompensation::RaycastAllQuery::__cordl_internal_get__physXRaycastHits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____physXRaycastHits;
}
constexpr void Fusion::LagCompensation::RaycastAllQuery::__cordl_internal_set__physXRaycastHits(::ArrayW<::UnityEngine::RaycastHit>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____physXRaycastHits = value;
}
constexpr ::ArrayW<::UnityEngine::RaycastHit2D>& Fusion::LagCompensation::RaycastAllQuery::__cordl_internal_get__box2DRaycastHits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____box2DRaycastHits;
}
constexpr ::ArrayW<::UnityEngine::RaycastHit2D> const& Fusion::LagCompensation::RaycastAllQuery::__cordl_internal_get__box2DRaycastHits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____box2DRaycastHits;
}
constexpr void Fusion::LagCompensation::RaycastAllQuery::__cordl_internal_set__box2DRaycastHits(::ArrayW<::UnityEngine::RaycastHit2D>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____box2DRaycastHits = value;
}
inline void Fusion::LagCompensation::RaycastAllQuery::_ctor(::by_ref<::Fusion::LagCompensation::RaycastQueryParams>  raycastQueryParams)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::RaycastAllQuery*>(),
                        {".ctor", {}, {::i2c::type_of<::by_ref<::Fusion::LagCompensation::RaycastQueryParams>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, raycastQueryParams);
}
inline void Fusion::LagCompensation::RaycastAllQuery::_ctor(::by_ref<::Fusion::LagCompensation::RaycastQueryParams>  raycastQueryParams, ::ArrayW<::UnityEngine::RaycastHit>  physXRaycastHitsCache, ::ArrayW<::UnityEngine::RaycastHit2D>  box2DRaycastHitCache)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::RaycastAllQuery*>(),
                        {".ctor", {}, {::i2c::type_of<::by_ref<::Fusion::LagCompensation::RaycastQueryParams>>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit>>(), ::i2c::type_of<::ArrayW<::UnityEngine::RaycastHit2D>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, raycastQueryParams, physXRaycastHitsCache, box2DRaycastHitCache);
}
inline bool Fusion::LagCompensation::RaycastAllQuery::NarrowPhase(::Fusion::LagCompensation::IHitboxColliderContainer*  container, ::System::Collections::Generic::HashSet_1<int32_t>*  candidates, ::System::Collections::Generic::List_1<::Fusion::LagCompensation::HitboxHit>*  hits)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::LagCompensation::RaycastAllQuery*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, container, candidates, hits);
}
inline void Fusion::LagCompensation::RaycastAllQuery::PerformStaticQuery(::Fusion::NetworkRunner*  runner, ::System::Collections::Generic::List_1<::Fusion::LagCompensatedHit>*  hits, ::Fusion::HitOptions  options)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::LagCompensation::RaycastAllQuery*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, hits, options);
}
inline ::Fusion::LagCompensation::RaycastAllQuery* Fusion::LagCompensation::RaycastAllQuery::New_ctor(::by_ref<::Fusion::LagCompensation::RaycastQueryParams>  raycastQueryParams)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::LagCompensation::RaycastAllQuery*>(raycastQueryParams));
}
inline ::Fusion::LagCompensation::RaycastAllQuery* Fusion::LagCompensation::RaycastAllQuery::New_ctor(::by_ref<::Fusion::LagCompensation::RaycastQueryParams>  raycastQueryParams, ::ArrayW<::UnityEngine::RaycastHit>  physXRaycastHitsCache, ::ArrayW<::UnityEngine::RaycastHit2D>  box2DRaycastHitCache)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::LagCompensation::RaycastAllQuery*>(raycastQueryParams, physXRaycastHitsCache, box2DRaycastHitCache));
}
// Ctor Parameters []
constexpr ::Fusion::LagCompensation::RaycastAllQuery::RaycastAllQuery()   {
}
