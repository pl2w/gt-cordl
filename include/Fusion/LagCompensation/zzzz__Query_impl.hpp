#pragma once
// IWYU pragma private; include "Fusion/LagCompensation/Query.hpp"
#include "Fusion/zzzz__HitOptions_impl.hpp"
#include "Fusion/zzzz__PlayerRef_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__QueryTriggerInteraction_impl.hpp"
#include "Fusion/LagCompensation/zzzz__Query_def.hpp"
#include "Fusion/LagCompensation/zzzz__AABB_def.hpp"
#include "Fusion/LagCompensation/zzzz__HitboxCollider_def.hpp"
#include "Fusion/LagCompensation/zzzz__HitboxHit_def.hpp"
#include "Fusion/LagCompensation/zzzz__IBoundsTraversalTest_def.hpp"
#include "Fusion/LagCompensation/zzzz__IHitboxColliderContainer_def.hpp"
#include "Fusion/LagCompensation/zzzz__PreProcessingDelegate_def.hpp"
#include "Fusion/LagCompensation/zzzz__QueryParams_def.hpp"
#include "Fusion/zzzz__HitOptions_def.hpp"
#include "Fusion/zzzz__LagCompensatedHit_def.hpp"
#include "Fusion/zzzz__NetworkRunner_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Fusion::LagCompensation::Query._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::LagCompensation::Query::*)(::by_ref<::Fusion::LagCompensation::QueryParams>)>(&::Fusion::LagCompensation::Query::_ctor)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x601c034;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::Query*>(),
                        {".ctor", {}, {::i2c::type_of<::by_ref<::Fusion::LagCompensation::QueryParams>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::Query.Fusion_LagCompensation_IBoundsTraversalTest_Check
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::LagCompensation::Query::*)(::by_ref<::Fusion::LagCompensation::AABB>)>(&::Fusion::LagCompensation::Query::Fusion_LagCompensation_IBoundsTraversalTest_Check)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x601cf84;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::Query*>(),
                        {"Fusion.LagCompensation.IBoundsTraversalTest.Check", {}, {::i2c::type_of<::by_ref<::Fusion::LagCompensation::AABB>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::Query.Check
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::LagCompensation::Query::*)(::by_ref<::Fusion::LagCompensation::AABB>)>(&::Fusion::LagCompensation::Query::Check)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::LagCompensation::Query*>(),
                    {::i2c::class_of<::Fusion::LagCompensation::Query*>(), 5}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::Query.NarrowPhase
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Fusion::LagCompensation::Query::*)(::Fusion::LagCompensation::IHitboxColliderContainer*, ::System::Collections::Generic::HashSet_1<int32_t>*, ::System::Collections::Generic::List_1<::Fusion::LagCompensation::HitboxHit>*)>(&::Fusion::LagCompensation::Query::NarrowPhase)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::LagCompensation::Query*>(),
                    {::i2c::class_of<::Fusion::LagCompensation::Query*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::Query.PerformStaticQuery
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Fusion::LagCompensation::Query::*)(::Fusion::NetworkRunner*, ::System::Collections::Generic::List_1<::Fusion::LagCompensatedHit>*, ::Fusion::HitOptions)>(&::Fusion::LagCompensation::Query::PerformStaticQuery)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Fusion::LagCompensation::Query*>(),
                    {::i2c::class_of<::Fusion::LagCompensation::Query*>(), 7}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Fusion::LagCompensation::Query.CreateHitboxHit
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Fusion::LagCompensation::HitboxHit (::Fusion::LagCompensation::Query::*)(::by_ref<::Fusion::LagCompensation::HitboxCollider>, ::UnityEngine::Vector3, float_t, ::UnityEngine::Vector3)>(&::Fusion::LagCompensation::Query::CreateHitboxHit)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x601ca54;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::Query*>(),
                        {"CreateHitboxHit", {}, {::i2c::type_of<::by_ref<::Fusion::LagCompensation::HitboxCollider>>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::QueryTriggerInteraction& Fusion::LagCompensation::Query::__cordl_internal_get_TriggerInteraction()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TriggerInteraction;
}
constexpr ::UnityEngine::QueryTriggerInteraction const& Fusion::LagCompensation::Query::__cordl_internal_get_TriggerInteraction() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TriggerInteraction;
}
constexpr void Fusion::LagCompensation::Query::__cordl_internal_set_TriggerInteraction(::UnityEngine::QueryTriggerInteraction  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TriggerInteraction = value;
}
constexpr ::Fusion::HitOptions& Fusion::LagCompensation::Query::__cordl_internal_get_Options()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Options;
}
constexpr ::Fusion::HitOptions const& Fusion::LagCompensation::Query::__cordl_internal_get_Options() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Options;
}
constexpr void Fusion::LagCompensation::Query::__cordl_internal_set_Options(::Fusion::HitOptions  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Options = value;
}
constexpr ::UnityEngine::LayerMask& Fusion::LagCompensation::Query::__cordl_internal_get_LayerMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LayerMask;
}
constexpr ::UnityEngine::LayerMask const& Fusion::LagCompensation::Query::__cordl_internal_get_LayerMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___LayerMask;
}
constexpr void Fusion::LagCompensation::Query::__cordl_internal_set_LayerMask(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___LayerMask = value;
}
constexpr ::Fusion::PlayerRef& Fusion::LagCompensation::Query::__cordl_internal_get_Player()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Player;
}
constexpr ::Fusion::PlayerRef const& Fusion::LagCompensation::Query::__cordl_internal_get_Player() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Player;
}
constexpr void Fusion::LagCompensation::Query::__cordl_internal_set_Player(::Fusion::PlayerRef  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Player = value;
}
constexpr ::System::Nullable_1<int32_t>& Fusion::LagCompensation::Query::__cordl_internal_get_Tick()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Tick;
}
constexpr ::System::Nullable_1<int32_t> const& Fusion::LagCompensation::Query::__cordl_internal_get_Tick() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Tick;
}
constexpr void Fusion::LagCompensation::Query::__cordl_internal_set_Tick(::System::Nullable_1<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Tick = value;
}
constexpr void*& Fusion::LagCompensation::Query::__cordl_internal_get_UserArgs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UserArgs;
}
constexpr void* const& Fusion::LagCompensation::Query::__cordl_internal_get_UserArgs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UserArgs;
}
constexpr void Fusion::LagCompensation::Query::__cordl_internal_set_UserArgs(void*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UserArgs = value;
}
constexpr ::System::Nullable_1<float_t>& Fusion::LagCompensation::Query::__cordl_internal_get_Alpha()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Alpha;
}
constexpr ::System::Nullable_1<float_t> const& Fusion::LagCompensation::Query::__cordl_internal_get_Alpha() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___Alpha;
}
constexpr void Fusion::LagCompensation::Query::__cordl_internal_set_Alpha(::System::Nullable_1<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___Alpha = value;
}
constexpr ::System::Nullable_1<int32_t>& Fusion::LagCompensation::Query::__cordl_internal_get_TickTo()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TickTo;
}
constexpr ::System::Nullable_1<int32_t> const& Fusion::LagCompensation::Query::__cordl_internal_get_TickTo() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___TickTo;
}
constexpr void Fusion::LagCompensation::Query::__cordl_internal_set_TickTo(::System::Nullable_1<int32_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___TickTo = value;
}
constexpr ::Fusion::LagCompensation::PreProcessingDelegate*& Fusion::LagCompensation::Query::__cordl_internal_get_PreProcessingDelegate()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PreProcessingDelegate;
}
constexpr ::Fusion::LagCompensation::PreProcessingDelegate* const& Fusion::LagCompensation::Query::__cordl_internal_get_PreProcessingDelegate() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___PreProcessingDelegate;
}
constexpr void Fusion::LagCompensation::Query::__cordl_internal_set_PreProcessingDelegate(::Fusion::LagCompensation::PreProcessingDelegate*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___PreProcessingDelegate = value;
}
inline void Fusion::LagCompensation::Query::_ctor(::by_ref<::Fusion::LagCompensation::QueryParams>  qParams)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::Query*>(),
                        {".ctor", {}, {::i2c::type_of<::by_ref<::Fusion::LagCompensation::QueryParams>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, qParams);
}
inline bool Fusion::LagCompensation::Query::Fusion_LagCompensation_IBoundsTraversalTest_Check(::by_ref<::Fusion::LagCompensation::AABB>  bounds)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::Query*>(),
                        {"Fusion.LagCompensation.IBoundsTraversalTest.Check", {}, {::i2c::type_of<::by_ref<::Fusion::LagCompensation::AABB>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, bounds);
}
inline bool Fusion::LagCompensation::Query::Check(::by_ref<::Fusion::LagCompensation::AABB>  bounds)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::LagCompensation::Query*>(), 5}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, bounds);
}
inline bool Fusion::LagCompensation::Query::NarrowPhase(::Fusion::LagCompensation::IHitboxColliderContainer*  container, ::System::Collections::Generic::HashSet_1<int32_t>*  candidates, ::System::Collections::Generic::List_1<::Fusion::LagCompensation::HitboxHit>*  hits)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::LagCompensation::Query*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, container, candidates, hits);
}
inline void Fusion::LagCompensation::Query::PerformStaticQuery(::Fusion::NetworkRunner*  runner, ::System::Collections::Generic::List_1<::Fusion::LagCompensatedHit>*  hits, ::Fusion::HitOptions  options)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Fusion::LagCompensation::Query*>(), 7}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, runner, hits, options);
}
inline ::Fusion::LagCompensation::HitboxHit Fusion::LagCompensation::Query::CreateHitboxHit(::by_ref<::Fusion::LagCompensation::HitboxCollider>  collider, ::UnityEngine::Vector3  point, float_t  distance, ::UnityEngine::Vector3  normal)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Fusion::LagCompensation::Query*>(),
                        {"CreateHitboxHit", {}, {::i2c::type_of<::by_ref<::Fusion::LagCompensation::HitboxCollider>>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Fusion::LagCompensation::HitboxHit>(this, ___internal_method, collider, point, distance, normal);
}
inline ::Fusion::LagCompensation::Query* Fusion::LagCompensation::Query::New_ctor(::by_ref<::Fusion::LagCompensation::QueryParams>  qParams)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Fusion::LagCompensation::Query*>(qParams));
}
/// @brief Convert operator to "::Fusion::LagCompensation::IBoundsTraversalTest"
constexpr  Fusion::LagCompensation::Query::operator ::Fusion::LagCompensation::IBoundsTraversalTest*() noexcept {
return static_cast<::Fusion::LagCompensation::IBoundsTraversalTest*>(static_cast<void*>(this));
}
/// @brief Convert to "::Fusion::LagCompensation::IBoundsTraversalTest"
constexpr ::Fusion::LagCompensation::IBoundsTraversalTest* Fusion::LagCompensation::Query::i___Fusion__LagCompensation__IBoundsTraversalTest() noexcept {
return static_cast<::Fusion::LagCompensation::IBoundsTraversalTest*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Fusion::LagCompensation::Query::Query()   {
}
