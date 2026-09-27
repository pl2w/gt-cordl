#pragma once
// IWYU pragma private; include "GlobalNamespace/GRSenseLineOfSight.hpp"
#include "GlobalNamespace/zzzz__GRSenseLineOfSight_RaycastMode_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__LayerMask_impl.hpp"
#include "UnityEngine/zzzz__RaycastHit_impl.hpp"
#include "GlobalNamespace/zzzz__GRSenseLineOfSight_def.hpp"
#include "GlobalNamespace/zzzz__GRSenseLineOfSight_RaycastMode_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GRSenseLineOfSight.HasLineOfSight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::GRSenseLineOfSight::*)(::UnityEngine::Vector3, ::UnityEngine::Vector3)>(&::GlobalNamespace::GRSenseLineOfSight::HasLineOfSight)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x58b09ec;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSenseLineOfSight*>(),
                        {"HasLineOfSight", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRSenseLineOfSight.HasLineOfSight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, int32_t, ::GlobalNamespace::GRSenseLineOfSight_RaycastMode)>(&::GlobalNamespace::GRSenseLineOfSight::HasLineOfSight)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x58b0bd8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSenseLineOfSight*>(),
                        {"HasLineOfSight", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::GRSenseLineOfSight_RaycastMode>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRSenseLineOfSight.HasGeoLineOfSight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t, int32_t)>(&::GlobalNamespace::GRSenseLineOfSight::HasGeoLineOfSight)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x58b0db4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSenseLineOfSight*>(),
                        {"HasGeoLineOfSight", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRSenseLineOfSight.HasNavmeshLineOfSight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t)>(&::GlobalNamespace::GRSenseLineOfSight::HasNavmeshLineOfSight)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x58b0fa8;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSenseLineOfSight*>(),
                        {"HasNavmeshLineOfSight", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GRSenseLineOfSight._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::GRSenseLineOfSight::*)()>(&::GlobalNamespace::GRSenseLineOfSight::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58b1068;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSenseLineOfSight*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::GRSenseLineOfSight::__cordl_internal_get_sightDist()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sightDist;
}
constexpr float_t const& GlobalNamespace::GRSenseLineOfSight::__cordl_internal_get_sightDist() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sightDist;
}
constexpr void GlobalNamespace::GRSenseLineOfSight::__cordl_internal_set_sightDist(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sightDist = value;
}
constexpr ::UnityEngine::LayerMask& GlobalNamespace::GRSenseLineOfSight::__cordl_internal_get_visibilityMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___visibilityMask;
}
constexpr ::UnityEngine::LayerMask const& GlobalNamespace::GRSenseLineOfSight::__cordl_internal_get_visibilityMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___visibilityMask;
}
constexpr void GlobalNamespace::GRSenseLineOfSight::__cordl_internal_set_visibilityMask(::UnityEngine::LayerMask  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___visibilityMask = value;
}
constexpr ::GlobalNamespace::GRSenseLineOfSight_RaycastMode& GlobalNamespace::GRSenseLineOfSight::__cordl_internal_get_rayCastMode()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rayCastMode;
}
constexpr ::GlobalNamespace::GRSenseLineOfSight_RaycastMode const& GlobalNamespace::GRSenseLineOfSight::__cordl_internal_get_rayCastMode() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rayCastMode;
}
constexpr void GlobalNamespace::GRSenseLineOfSight::__cordl_internal_set_rayCastMode(::GlobalNamespace::GRSenseLineOfSight_RaycastMode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rayCastMode = value;
}
inline void GlobalNamespace::GRSenseLineOfSight::setStaticF_visibilityHits(::ArrayW<::UnityEngine::RaycastHit>  value)  {
::cordl_internals::setStaticField<::ArrayW<::UnityEngine::RaycastHit>, "visibilityHits", ::GlobalNamespace::GRSenseLineOfSight*>(std::forward<::ArrayW<::UnityEngine::RaycastHit>>(value));
}
inline ::ArrayW<::UnityEngine::RaycastHit> GlobalNamespace::GRSenseLineOfSight::getStaticF_visibilityHits()  {
return ::cordl_internals::getStaticField<::ArrayW<::UnityEngine::RaycastHit>, "visibilityHits", ::GlobalNamespace::GRSenseLineOfSight*>();
}
inline bool GlobalNamespace::GRSenseLineOfSight::HasLineOfSight(::UnityEngine::Vector3  headPos, ::UnityEngine::Vector3  targetPos)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSenseLineOfSight*>(),
                        {"HasLineOfSight", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, headPos, targetPos);
}
inline bool GlobalNamespace::GRSenseLineOfSight::HasLineOfSight(::UnityEngine::Vector3  headPos, ::UnityEngine::Vector3  targetPos, float_t  sightDist, int32_t  layerMask, ::GlobalNamespace::GRSenseLineOfSight_RaycastMode  rayCastMode)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSenseLineOfSight*>(),
                        {"HasLineOfSight", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::GRSenseLineOfSight_RaycastMode>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, headPos, targetPos, sightDist, layerMask, rayCastMode);
}
inline bool GlobalNamespace::GRSenseLineOfSight::HasGeoLineOfSight(::UnityEngine::Vector3  headPos, ::UnityEngine::Vector3  targetPos, float_t  sightDist, int32_t  layerMask)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSenseLineOfSight*>(),
                        {"HasGeoLineOfSight", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, headPos, targetPos, sightDist, layerMask);
}
inline bool GlobalNamespace::GRSenseLineOfSight::HasNavmeshLineOfSight(::UnityEngine::Vector3  headPos, ::UnityEngine::Vector3  targetPos, float_t  sightDist)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSenseLineOfSight*>(),
                        {"HasNavmeshLineOfSight", {}, {::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, headPos, targetPos, sightDist);
}
inline void GlobalNamespace::GRSenseLineOfSight::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::GRSenseLineOfSight*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::GRSenseLineOfSight* GlobalNamespace::GRSenseLineOfSight::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::GRSenseLineOfSight*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GRSenseLineOfSight::GRSenseLineOfSight()   {
}
