#pragma once
// IWYU pragma private; include "Oculus/Interaction/DistanceReticles/ReticleDataGhost.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Oculus/Interaction/DistanceReticles/zzzz__ReticleDataGhost_def.hpp"
#include "Oculus/Interaction/DistanceReticles/zzzz__IReticleData_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::ReticleDataGhost.ProcessHitPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::DistanceReticles::ReticleDataGhost::*)(::UnityEngine::Vector3)>(&::Oculus::Interaction::DistanceReticles::ReticleDataGhost::ProcessHitPoint)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xa4f06a4;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleDataGhost*>(),
                        {"ProcessHitPoint", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::ReticleDataGhost._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Interaction::DistanceReticles::ReticleDataGhost::*)()>(&::Oculus::Interaction::DistanceReticles::ReticleDataGhost::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xa4f072c;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleDataGhost*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& Oculus::Interaction::DistanceReticles::ReticleDataGhost::__cordl_internal_get__targetPoint()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetPoint;
}
constexpr ::UnityW<::UnityEngine::Transform> const& Oculus::Interaction::DistanceReticles::ReticleDataGhost::__cordl_internal_get__targetPoint() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____targetPoint;
}
constexpr void Oculus::Interaction::DistanceReticles::ReticleDataGhost::__cordl_internal_set__targetPoint(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____targetPoint = value;
}
inline ::UnityEngine::Vector3 Oculus::Interaction::DistanceReticles::ReticleDataGhost::ProcessHitPoint(::UnityEngine::Vector3  hitPoint)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleDataGhost*>(),
                        {"ProcessHitPoint", {}, {::i2c::type_of<::UnityEngine::Vector3>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, hitPoint);
}
inline void Oculus::Interaction::DistanceReticles::ReticleDataGhost::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Oculus::Interaction::DistanceReticles::ReticleDataGhost*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Interaction::DistanceReticles::ReticleDataGhost* Oculus::Interaction::DistanceReticles::ReticleDataGhost::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Interaction::DistanceReticles::ReticleDataGhost*>());
}
/// @brief Convert operator to "::Oculus::Interaction::DistanceReticles::IReticleData"
constexpr  Oculus::Interaction::DistanceReticles::ReticleDataGhost::operator ::Oculus::Interaction::DistanceReticles::IReticleData*() noexcept {
return static_cast<::Oculus::Interaction::DistanceReticles::IReticleData*>(static_cast<void*>(this));
}
/// @brief Convert to "::Oculus::Interaction::DistanceReticles::IReticleData"
constexpr ::Oculus::Interaction::DistanceReticles::IReticleData* Oculus::Interaction::DistanceReticles::ReticleDataGhost::i___Oculus__Interaction__DistanceReticles__IReticleData() noexcept {
return static_cast<::Oculus::Interaction::DistanceReticles::IReticleData*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Interaction::DistanceReticles::ReticleDataGhost::ReticleDataGhost()   {
}
