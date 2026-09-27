#pragma once
// IWYU pragma private; include "Fusion/LagCompensation/BoxOverlapQuery.hpp"
#include "Fusion/LagCompensation/zzzz__LagCompensationUtils_BoxNarrowData_impl.hpp"
#include "Fusion/LagCompensation/zzzz__Query_impl.hpp"
#include "UnityEngine/zzzz__Collider2D_impl.hpp"
#include "UnityEngine/zzzz__Collider_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Fusion/LagCompensation/zzzz__BoxOverlapQuery_def.hpp"
#include "Fusion/LagCompensation/zzzz__AABB_def.hpp"
#include "Fusion/LagCompensation/zzzz__BoxOverlapQueryParams_def.hpp"
#include "Fusion/LagCompensation/zzzz__HitboxCollider_def.hpp"
#include "Fusion/LagCompensation/zzzz__HitboxHit_def.hpp"
#include "Fusion/LagCompensation/zzzz__IHitboxColliderContainer_def.hpp"
#include "Fusion/LagCompensation/zzzz__LagCompensationUtils_BoxNarrowData_def.hpp"
#include "Fusion/zzzz__HitOptions_def.hpp"
#include "Fusion/zzzz__LagCompensatedHit_def.hpp"
#include "Fusion/zzzz__NetworkRunner_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Collider2D_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Fusion::LagCompensation::BoxOverlapQuery._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::LagCompensation::BoxOverlapQuery::*)(::by_ref<::Fusion::LagCompensation::BoxOverlapQueryParams>)>(&::Fusion::LagCompensation::BoxOverlapQuery::_ctor)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x601becc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BoxOverlapQuery*>(),
                        {".ctor", {}, {::i2c::type_of<::by_ref<::Fusion::LagCompensation::BoxOverlapQueryParams>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::BoxOverlapQuery._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::LagCompensation::BoxOverlapQuery::*)(::by_ref<::Fusion::LagCompensation::BoxOverlapQueryParams>, ::ArrayW<::UnityEngine::Collider*>, ::ArrayW<::UnityEngine::Collider2D*>)>(&::Fusion::LagCompensation::BoxOverlapQuery::_ctor)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x601c0f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BoxOverlapQuery*>(),
                        {".ctor", {}, {::i2c::type_of<::by_ref<::Fusion::LagCompensation::BoxOverlapQueryParams>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Collider*>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Collider2D*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::BoxOverlapQuery.Check
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::LagCompensation::BoxOverlapQuery::*)(::by_ref<::Fusion::LagCompensation::AABB>)>(&::Fusion::LagCompensation::BoxOverlapQuery::Check)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x601c1fc;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::LagCompensation::BoxOverlapQuery*>(),
                    {::i2c::class_of<::Fusion::LagCompensation::BoxOverlapQuery*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::BoxOverlapQuery.NarrowPhase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::LagCompensation::BoxOverlapQuery::*)(::Fusion::LagCompensation::IHitboxColliderContainer*, ::System::Collections::Generic::HashSet_1<int32_t>*, ::System::Collections::Generic::List_1<::Fusion::LagCompensation::HitboxHit>*)>(&::Fusion::LagCompensation::BoxOverlapQuery::NarrowPhase)> {
  constexpr static std::size_t size = 0x380;
  constexpr static std::size_t addrs = 0x601c2c8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::LagCompensation::BoxOverlapQuery*>(),
                    {::i2c::class_of<::Fusion::LagCompensation::BoxOverlapQuery*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::BoxOverlapQuery.PerformStaticQuery
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::LagCompensation::BoxOverlapQuery::*)(::Fusion::NetworkRunner*, ::System::Collections::Generic::List_1<::Fusion::LagCompensatedHit>*, ::Fusion::HitOptions)>(&::Fusion::LagCompensation::BoxOverlapQuery::PerformStaticQuery)> {
  constexpr static std::size_t size = 0x40c;
  constexpr static std::size_t addrs = 0x601cae0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::LagCompensation::BoxOverlapQuery*>(),
                    {::i2c::class_of<::Fusion::LagCompensation::BoxOverlapQuery*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::BoxOverlapQuery.NarrowPhaseBox
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::LagCompensation::BoxOverlapQuery::*)(::by_ref<::GlobalNamespace::LagCompensationUtils_BoxNarrowData>, ::by_ref<::Fusion::LagCompensation::HitboxCollider>, bool, ::by_ref<::UnityEngine::Vector3>, ::by_ref<::UnityEngine::Vector3>)>(&::Fusion::LagCompensation::BoxOverlapQuery::NarrowPhaseBox)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x601c738;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BoxOverlapQuery*>(),
                        {"NarrowPhaseBox", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::LagCompensationUtils_BoxNarrowData>>(), ::i2c::type_of<::by_ref<::Fusion::LagCompensation::HitboxCollider>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::BoxOverlapQuery.PreComputeNarrowData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::LagCompensationUtils_BoxNarrowData (::Fusion::LagCompensation::BoxOverlapQuery::*)()>(&::Fusion::LagCompensation::BoxOverlapQuery::PreComputeNarrowData)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x601c648;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BoxOverlapQuery*>(),
                        {"PreComputeNarrowData", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& Fusion::LagCompensation::BoxOverlapQuery::__cordl_internal_get_Center()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Center;
}
constexpr ::UnityEngine::Vector3 const& Fusion::LagCompensation::BoxOverlapQuery::__cordl_internal_get_Center() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Center;
}
constexpr void Fusion::LagCompensation::BoxOverlapQuery::__cordl_internal_set_Center(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Center = value;
}
constexpr ::UnityEngine::Vector3& Fusion::LagCompensation::BoxOverlapQuery::__cordl_internal_get_Extents()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Extents;
}
constexpr ::UnityEngine::Vector3 const& Fusion::LagCompensation::BoxOverlapQuery::__cordl_internal_get_Extents() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Extents;
}
constexpr void Fusion::LagCompensation::BoxOverlapQuery::__cordl_internal_set_Extents(::UnityEngine::Vector3  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Extents = value;
}
constexpr ::UnityEngine::Quaternion& Fusion::LagCompensation::BoxOverlapQuery::__cordl_internal_get_Rotation()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Rotation;
}
constexpr ::UnityEngine::Quaternion const& Fusion::LagCompensation::BoxOverlapQuery::__cordl_internal_get_Rotation() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Rotation;
}
constexpr void Fusion::LagCompensation::BoxOverlapQuery::__cordl_internal_set_Rotation(::UnityEngine::Quaternion  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Rotation = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>>& Fusion::LagCompensation::BoxOverlapQuery::__cordl_internal_get__physXOverlapHits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____physXOverlapHits;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider>> const& Fusion::LagCompensation::BoxOverlapQuery::__cordl_internal_get__physXOverlapHits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____physXOverlapHits;
}
constexpr void Fusion::LagCompensation::BoxOverlapQuery::__cordl_internal_set__physXOverlapHits(::ArrayW<::UnityW<::UnityEngine::Collider>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____physXOverlapHits = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider2D>>& Fusion::LagCompensation::BoxOverlapQuery::__cordl_internal_get__box2DOverlapHits()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____box2DOverlapHits;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::Collider2D>> const& Fusion::LagCompensation::BoxOverlapQuery::__cordl_internal_get__box2DOverlapHits() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____box2DOverlapHits;
}
constexpr void Fusion::LagCompensation::BoxOverlapQuery::__cordl_internal_set__box2DOverlapHits(::ArrayW<::UnityW<::UnityEngine::Collider2D>>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____box2DOverlapHits = value;
}
constexpr ::GlobalNamespace::LagCompensationUtils_BoxNarrowData& Fusion::LagCompensation::BoxOverlapQuery::__cordl_internal_get__queryNarrowData()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____queryNarrowData;
}
constexpr ::GlobalNamespace::LagCompensationUtils_BoxNarrowData const& Fusion::LagCompensation::BoxOverlapQuery::__cordl_internal_get__queryNarrowData() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____queryNarrowData;
}
constexpr void Fusion::LagCompensation::BoxOverlapQuery::__cordl_internal_set__queryNarrowData(::GlobalNamespace::LagCompensationUtils_BoxNarrowData  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____queryNarrowData = value;
}
inline void Fusion::LagCompensation::BoxOverlapQuery::_ctor(::by_ref<::Fusion::LagCompensation::BoxOverlapQueryParams>  boxOverlapParams)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BoxOverlapQuery*>(),
                        {".ctor", {}, {::i2c::type_of<::by_ref<::Fusion::LagCompensation::BoxOverlapQueryParams>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, boxOverlapParams);
}
inline void Fusion::LagCompensation::BoxOverlapQuery::_ctor(::by_ref<::Fusion::LagCompensation::BoxOverlapQueryParams>  boxOverlapParams, ::ArrayW<::UnityEngine::Collider*>  physXOverlapHitsCache, ::ArrayW<::UnityEngine::Collider2D*>  box2DOverlapHitsCache)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BoxOverlapQuery*>(),
                        {".ctor", {}, {::i2c::type_of<::by_ref<::Fusion::LagCompensation::BoxOverlapQueryParams>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Collider*>>(), ::i2c::type_of<::ArrayW<::UnityEngine::Collider2D*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, boxOverlapParams, physXOverlapHitsCache, box2DOverlapHitsCache);
}
inline bool Fusion::LagCompensation::BoxOverlapQuery::Check(::by_ref<::Fusion::LagCompensation::AABB>  bounds)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::LagCompensation::BoxOverlapQuery*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, bounds);
}
inline bool Fusion::LagCompensation::BoxOverlapQuery::NarrowPhase(::Fusion::LagCompensation::IHitboxColliderContainer*  container, ::System::Collections::Generic::HashSet_1<int32_t>*  candidates, ::System::Collections::Generic::List_1<::Fusion::LagCompensation::HitboxHit>*  hits)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::LagCompensation::BoxOverlapQuery*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, container, candidates, hits);
}
inline void Fusion::LagCompensation::BoxOverlapQuery::PerformStaticQuery(::Fusion::NetworkRunner*  runner, ::System::Collections::Generic::List_1<::Fusion::LagCompensatedHit>*  hits, ::Fusion::HitOptions  options)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::LagCompensation::BoxOverlapQuery*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, hits, options);
}
inline bool Fusion::LagCompensation::BoxOverlapQuery::NarrowPhaseBox(::by_ref<::GlobalNamespace::LagCompensationUtils_BoxNarrowData>  boxQueryNarrowData, ::by_ref<::Fusion::LagCompensation::HitboxCollider>  c, bool  computeDetailedInfo, ::by_ref<::UnityEngine::Vector3>  hitPoint, ::by_ref<::UnityEngine::Vector3>  hitNormal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BoxOverlapQuery*>(),
                        {"NarrowPhaseBox", {}, {::i2c::type_of<::by_ref<::GlobalNamespace::LagCompensationUtils_BoxNarrowData>>(), ::i2c::type_of<::by_ref<::Fusion::LagCompensation::HitboxCollider>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, boxQueryNarrowData, c, computeDetailedInfo, hitPoint, hitNormal);
}
inline ::GlobalNamespace::LagCompensationUtils_BoxNarrowData Fusion::LagCompensation::BoxOverlapQuery::PreComputeNarrowData()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::BoxOverlapQuery*>(),
                        {"PreComputeNarrowData", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::LagCompensationUtils_BoxNarrowData>(this, ___internal_method);
}
inline ::Fusion::LagCompensation::BoxOverlapQuery* Fusion::LagCompensation::BoxOverlapQuery::New_ctor(::by_ref<::Fusion::LagCompensation::BoxOverlapQueryParams>  boxOverlapParams)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::LagCompensation::BoxOverlapQuery*>(boxOverlapParams));
}
inline ::Fusion::LagCompensation::BoxOverlapQuery* Fusion::LagCompensation::BoxOverlapQuery::New_ctor(::by_ref<::Fusion::LagCompensation::BoxOverlapQueryParams>  boxOverlapParams, ::ArrayW<::UnityEngine::Collider*>  physXOverlapHitsCache, ::ArrayW<::UnityEngine::Collider2D*>  box2DOverlapHitsCache)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::LagCompensation::BoxOverlapQuery*>(boxOverlapParams, physXOverlapHitsCache, box2DOverlapHitsCache));
}
// Ctor Parameters []
constexpr ::Fusion::LagCompensation::BoxOverlapQuery::BoxOverlapQuery()   {
}
