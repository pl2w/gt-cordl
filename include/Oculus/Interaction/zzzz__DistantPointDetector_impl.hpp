#pragma once
// IWYU pragma private; include "Oculus/Interaction/DistantPointDetector.hpp"
#include "Oculus/Interaction/zzzz__DistantPointDetectorFrustums_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Interaction/zzzz__DistantPointDetector_def.hpp"
#include "Oculus/Interaction/zzzz__ConicalFrustum_def.hpp"
#include "Oculus/Interaction/zzzz__DistantPointDetectorFrustums_def.hpp"
#include "UnityEngine/zzzz__Collider_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::DistantPointDetector._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DistantPointDetector::*)(::Oculus::Interaction::DistantPointDetectorFrustums)>(&::Oculus::Interaction::DistantPointDetector::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0xa400864;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistantPointDetector*>(),
                        {".ctor", {}, {::i2c::type_of<::Oculus::Interaction::DistantPointDetectorFrustums>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistantPointDetector.ComputeIsPointing
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::DistantPointDetector::*)(::ArrayW<::UnityEngine::Collider*>, bool, ::by_ref<float_t>, ::by_ref<::UnityEngine::Vector3>)>(&::Oculus::Interaction::DistantPointDetector::ComputeIsPointing)> {
  constexpr static std::size_t size = 0x21c;
  constexpr static std::size_t addrs = 0xa400898;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistantPointDetector*>(),
                        {"ComputeIsPointing", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Collider*>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistantPointDetector.IsPointingWithoutAid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::DistantPointDetector::*)(::ArrayW<::UnityEngine::Collider*>, ::by_ref<::UnityEngine::Vector3>)>(&::Oculus::Interaction::DistantPointDetector::IsPointingWithoutAid)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xa400ab4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistantPointDetector*>(),
                        {"IsPointingWithoutAid", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Collider*>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistantPointDetector.IsWithinDeselectionRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::DistantPointDetector::*)(::ArrayW<::UnityEngine::Collider*>)>(&::Oculus::Interaction::DistantPointDetector::IsWithinDeselectionRange)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0xa400d18;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistantPointDetector*>(),
                        {"IsWithinDeselectionRange", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Collider*>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistantPointDetector.IsPointingAtColliders
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::DistantPointDetector::*)(::ArrayW<::UnityEngine::Collider*>, ::Oculus::Interaction::ConicalFrustum*)>(&::Oculus::Interaction::DistantPointDetector::IsPointingAtColliders)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0xa400d58;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistantPointDetector*>(),
                        {"IsPointingAtColliders", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Collider*>>(), ::i2c::type_of<::Oculus::Interaction::ConicalFrustum*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistantPointDetector.IsPointingAtColliders
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Interaction::DistantPointDetector::*)(::ArrayW<::UnityEngine::Collider*>, ::Oculus::Interaction::ConicalFrustum*, ::by_ref<::UnityEngine::Vector3>)>(&::Oculus::Interaction::DistantPointDetector::IsPointingAtColliders)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0xa400ba0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistantPointDetector*>(),
                        {"IsPointingAtColliders", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Collider*>>(), ::i2c::type_of<::Oculus::Interaction::ConicalFrustum*>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Oculus::Interaction::DistantPointDetectorFrustums& Oculus::Interaction::DistantPointDetector::__cordl_internal_get__frustums()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____frustums;
}
constexpr ::Oculus::Interaction::DistantPointDetectorFrustums const& Oculus::Interaction::DistantPointDetector::__cordl_internal_get__frustums() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____frustums;
}
constexpr void Oculus::Interaction::DistantPointDetector::__cordl_internal_set__frustums(::Oculus::Interaction::DistantPointDetectorFrustums  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____frustums = value;
}
inline void Oculus::Interaction::DistantPointDetector::_ctor(::Oculus::Interaction::DistantPointDetectorFrustums  frustums)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistantPointDetector*>(),
                        {".ctor", {}, {::i2c::type_of<::Oculus::Interaction::DistantPointDetectorFrustums>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, frustums);
}
inline bool Oculus::Interaction::DistantPointDetector::ComputeIsPointing(::ArrayW<::UnityEngine::Collider*>  colliders, bool  isSelecting, ::by_ref<float_t>  bestScore, ::by_ref<::UnityEngine::Vector3>  bestHitPoint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistantPointDetector*>(),
                        {"ComputeIsPointing", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Collider*>>(), ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, colliders, isSelecting, bestScore, bestHitPoint);
}
inline bool Oculus::Interaction::DistantPointDetector::IsPointingWithoutAid(::ArrayW<::UnityEngine::Collider*>  colliders, ::by_ref<::UnityEngine::Vector3>  bestHitPoint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistantPointDetector*>(),
                        {"IsPointingWithoutAid", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Collider*>>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, colliders, bestHitPoint);
}
inline bool Oculus::Interaction::DistantPointDetector::IsWithinDeselectionRange(::ArrayW<::UnityEngine::Collider*>  colliders)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistantPointDetector*>(),
                        {"IsWithinDeselectionRange", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Collider*>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, colliders);
}
inline bool Oculus::Interaction::DistantPointDetector::IsPointingAtColliders(::ArrayW<::UnityEngine::Collider*>  colliders, ::Oculus::Interaction::ConicalFrustum*  frustum)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistantPointDetector*>(),
                        {"IsPointingAtColliders", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Collider*>>(), ::i2c::type_of<::Oculus::Interaction::ConicalFrustum*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, colliders, frustum);
}
inline bool Oculus::Interaction::DistantPointDetector::IsPointingAtColliders(::ArrayW<::UnityEngine::Collider*>  colliders, ::Oculus::Interaction::ConicalFrustum*  frustum, ::by_ref<::UnityEngine::Vector3>  bestHitPoint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistantPointDetector*>(),
                        {"IsPointingAtColliders", {}, {::i2c::type_of<::ArrayW<::UnityEngine::Collider*>>(), ::i2c::type_of<::Oculus::Interaction::ConicalFrustum*>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector3>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, colliders, frustum, bestHitPoint);
}
inline ::Oculus::Interaction::DistantPointDetector* Oculus::Interaction::DistantPointDetector::New_ctor(::Oculus::Interaction::DistantPointDetectorFrustums  frustums)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::DistantPointDetector*>(frustums));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::DistantPointDetector::DistantPointDetector()   {
}
