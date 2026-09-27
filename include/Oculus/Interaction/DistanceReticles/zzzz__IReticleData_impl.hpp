#pragma once
// IWYU pragma private; include "Oculus/Interaction/DistanceReticles/IReticleData.hpp"
#include "Oculus/Interaction/DistanceReticles/zzzz__IReticleData_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Oculus::Interaction::DistanceReticles::IReticleData.ProcessHitPoint
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::Oculus::Interaction::DistanceReticles::IReticleData::*)(::UnityEngine::Vector3)>(&::Oculus::Interaction::DistanceReticles::IReticleData::ProcessHitPoint)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Oculus::Interaction::DistanceReticles::IReticleData*>(),
                    {::i2c::class_of<::Oculus::Interaction::DistanceReticles::IReticleData*>(), 0}
                ));
    return ___internal_method;
  }
};
inline ::UnityEngine::Vector3 Oculus::Interaction::DistanceReticles::IReticleData::ProcessHitPoint(::UnityEngine::Vector3  hitPoint)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Oculus::Interaction::DistanceReticles::IReticleData*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method, hitPoint);
}
