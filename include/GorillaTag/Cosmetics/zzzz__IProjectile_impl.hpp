#pragma once
// IWYU pragma private; include "GorillaTag/Cosmetics/IProjectile.hpp"
#include "GorillaTag/Cosmetics/zzzz__IProjectile_def.hpp"
#include "GlobalNamespace/zzzz__VRRig_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GorillaTag::Cosmetics::IProjectile.Launch
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GorillaTag::Cosmetics::IProjectile::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector3, float_t, ::GlobalNamespace::VRRig*, int32_t)>(&::GorillaTag::Cosmetics::IProjectile::Launch)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::GorillaTag::Cosmetics::IProjectile*>(),
                    {::i2c::class_of<::GorillaTag::Cosmetics::IProjectile*>(), 0}
                ));
    return ___internal_method;
  }
};
inline void GorillaTag::Cosmetics::IProjectile::Launch(::UnityEngine::Vector3  startPosition, ::UnityEngine::Quaternion  startRotation, ::UnityEngine::Vector3  velocity, float_t  chargeFrac, ::GlobalNamespace::VRRig*  ownerRig, int32_t  progressStep)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::GorillaTag::Cosmetics::IProjectile*>(), 0}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, startPosition, startRotation, velocity, chargeFrac, ownerRig, progressStep);
}
